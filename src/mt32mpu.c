/* $Id$ */

/** @file src/mt32mpu.c MPU routines. */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "os/math.h"
#include "os/endian.h"

#include "mt32mpu.h"

#include "mpu.h"
#include "driver.h"

typedef struct MSData {
	uint8 *TIMB;                                            /*!< Pointer to TIMB position in sound file. */
	uint8 *RBRN;                                            /*!< Pointer to RBRN position in sound file. */
	uint8 *EVNT;                                            /*!< Pointer to EVNT position in sound file. */
	uint8 *sound;                                           /*!< Pointer to current position in sound file. */
	uint16 playing;                                         /*!< ?? 0, 1 or 2. 1 if a sound is playing. */
	bool   delayedClear;                                    /*!< ?? */
	int16  delay;                                           /*!< Delay before reading next command. */
	uint16 noteOnCount;                                     /*!< Number of notes currently on. */
	uint16 variable_0022;                                   /*!< ?? */
	uint16 variable_0024;                                   /*!< ?? */
	uint16 variable_0026;                                   /*!< ?? */
	uint32 variable_0028;                                   /*!< ?? */
	uint32 variable_002C;                                   /*!< ?? */
	uint16 variable_0030;                                   /*!< ?? */
	uint16 variable_0032;                                   /*!< ?? */
	uint16 variable_0034;                                   /*!< ?? */
	uint32 variable_0036;                                   /*!< ?? */
	uint32 variable_003A;                                   /*!< ?? */
	uint16 variable_003E;                                   /*!< ?? */
	uint16 variable_0040;                                   /*!< ?? */
	uint16 variable_0042;                                   /*!< ?? */
	uint32 variable_0044;                                   /*!< ?? */
	uint32 variable_0048;                                   /*!< ?? */
	uint32 variable_004C;                                   /*!< ?? */
	uint8 *variable_0050[4];                                /*!< ?? */
	uint16 variable_0060[4];                                /*!< ?? */
	uint8  chanMaps[16];                                    /*!< ?? Channel mapping. */
	int8   variable_00B8[9][16];                            /*!< ?? */
	uint8  noteOnChans[32];                                 /*!< ?? */
	uint8  noteOnNotes[32];                                 /*!< ?? */
	uint32 noteOnDuration[32];                              /*!< ?? */
} MSData;

static const uint8 s_var_11D7[9] = { 7, 1, 10, 11, 64, 114, 110, 111, 112 };
static const uint8 s_var_11E0[9] = { 127, 0, 64, 127, 0, 0, 0, 0, 0 };
static const uint8 s_var_11E9[9] = { 68, 48, 95, 78, 41, 3, 110, 122, 255 };

static DriverInfo s_mpu_driverInfo = {
	/* extension    */ "MT",
	/* frequency    */ 120
};

static uint8 s_var_11F2[256];

static MSData *s_mpu_msdata[8];
static uint16 s_mpu_msdataSize;
static uint16 s_mpu_msdataCurrent;

static uint8 s_var_131E[12][16];
static uint8 s_var_13DE[16];
static uint8 s_var_13EE[16];
static bool s_mpu_initialized;

static void MPU_Send(uint8 status, uint8 data1, uint8 data2)
{
	mpu_send(status | (data1 << 8) | (data2 << 16));
}

static void MPU_ApplyVolume(MSData *data)
{
	uint8 i;

	for (i = 0; i < 16; i++) {
		uint8 volume;

		volume = data->variable_00B8[0][i];
		if (volume == 0xFF) continue;

		volume = min((volume * data->variable_0024) / 100, 127);

		s_var_131E[0][i] = volume;

		if ((s_var_13EE[i] & 0x80) != 0) continue;

		MPU_Send(0xB0 | data->chanMaps[i], 7, volume);
	}
}

static uint16 MPU_NoteOn(MSData *data)
{
	uint8 chan;
	uint8 note;
	uint8 velocity;
	uint8 *sound;
	uint16 len = 0;
	uint32 duration = 0;
	uint8 i;

	sound = data->sound;

	chan = *sound++ & 0xF;
	note = *sound++;
	velocity = *sound++;

	while (true) {
		uint8 v = *sound++;
		duration |= v & 0x7F;
		if ((v & 0x80) == 0) break;
		duration <<= 7;
	}

	len = sound - data->sound;

	if ((s_var_13EE[chan] & 0x80) != 0) return len;

	for (i = 0; i < 32; i++) {
		if (data->noteOnChans[i] == 0xFF) {
			data->noteOnCount++;
			break;
		}
	}
	if (i == 32) i = 0;

	data->noteOnChans[i] = chan;
	data->noteOnNotes[i] = note;
	data->noteOnDuration[i] = duration;

	chan = data->chanMaps[chan];
	s_var_13DE[chan]++;

	/* Note On */
	MPU_Send(0x90 | chan, note, velocity);

	return len;
}

static void MPU_FlushChannel(uint8 channel)
{
	uint16 count;
	uint16 index = 0;

	count = s_mpu_msdataSize;

	while (count-- != 0) {
		MSData *data;
		uint8 i;

		while (s_mpu_msdata[index] == NULL) index++;

		data = s_mpu_msdata[index];

		if (data->noteOnCount == 0) continue;

		for (i = 0; i < 32; i++) {
			uint8 chan;
			uint8 note;

			chan = data->noteOnChans[i];
			if (chan != channel) continue;
			data->noteOnChans[i] = 0xFF;

			note = data->noteOnNotes[i];
			chan = data->chanMaps[chan];
			s_var_13DE[chan]--;

			/* Note Off */
			MPU_Send(0x80 | chan, note, 0);

			data->noteOnCount--;
		}
	}
}

static uint8 MPU_281A()
{
	uint8 i;
	uint8 chan = 0xFF;
	uint8 flag = 0xC0;
	uint8 min = 0xFF;

	while (true) {
		for (i = 0; i < 16; i++) {
			if ((s_var_13EE[15 - i] & flag) == 0 && s_var_13DE[15 - i] < min) {
				min = s_var_13DE[15 - i];
				chan = 15 - i;
			}
		}
		if (chan != 0xFF) break;
		if (flag == 0x80) return chan;

		flag = 0x80;
	}

	/* Sustain Off */
	MPU_Send(0xB0 | chan, 64, 0);

	MPU_FlushChannel(chan);

	s_var_13DE[chan] = 0;
	s_var_13EE[chan] |= 0x80;

	return chan;
}

static void MPU_289D(uint8 chan)
{
	uint8 i;
	uint8 program;
	uint8 pitchWheelLSB;
	uint8 pitchWheelMSB;

	if ((s_var_13EE[chan] & 0x80) == 0) return;

	s_var_13EE[chan] &= 0x7F;
	s_var_13DE[chan] = 0x0;

	/* Sustain Off */
	MPU_Send(0xB0 | chan, 64, 0);

	/* All Notes Off */
	MPU_Send(0xB0 | chan, 123, 0);

	for (i = 0; i < 9; i++) {
		uint8 value   = s_var_131E[i][chan];
		uint8 command = s_var_11D7[i];

		if (value != 0xFF) MPU_Send(0xB0 | chan, command, value);
	}

	program = s_var_131E[9][chan];
	if (program != 0xFF) MPU_Send(0xC0 | chan, program, 0);

	pitchWheelLSB = s_var_131E[10][chan];
	pitchWheelMSB = s_var_131E[11][chan];
	if (pitchWheelLSB != 0xFF && pitchWheelMSB != 0xFF) MPU_Send(0xE0 | chan, pitchWheelLSB, pitchWheelMSB);
}

static void MPU_Control(MSData *data, uint8 chan, uint8 data1, uint8 data2)
{
	uint8 index;

	index = s_var_11F2[data1];
	if (index != 0xFF) {
		s_var_131E[index][chan] = data2;
		data->variable_00B8[index][chan] = data2;
	}

	switch (data1) {
		case 7: /* Channel Volume */
			if (data->variable_0024 == 100) break;
			data2 = min(data->variable_0024 * data2 / 100, 127);
			s_var_131E[0][chan] = data2;
			/* FALL-THROUGH */

		default:
			if ((s_var_13EE[chan] & 0x80) == 0) MPU_Send(0xB0 | data->chanMaps[chan], data1, data2);
			break;


		case 116: {
			uint8 i;

			for (i = 0; i < 4; i++) {
				if (data->variable_0060[i] == 0xFFFF) {
					data->variable_0060[i] = data2;
					data->variable_0050[i] = data->sound;
					break;
				}
			}
		} break;

		case 117: {
			uint8 i;

			if (data2 < 64) break;

			for (i = 0; i < 4; i++) {
				if (data->variable_0060[3 - i] != 0xFFFF) {
					if (data->variable_0060[3 - i] != 0 && --data->variable_0060[3 - i] == 0) {
						data->variable_0060[3 - i] = 0xFFFF;
						break;
					}
					data->sound = data->variable_0050[3 - i];
					break;
				}
			}
		} break;

		case 111:
			if (data2 > 64) s_var_13EE[chan] |= 0x40;
			break;

		case 110:
			if (data2 < 64) {
				MPU_FlushChannel(chan);
				MPU_289D(data->chanMaps[chan]);
				data->chanMaps[chan] = chan;
				break;
			}

			data1 = MPU_281A();

			if (data1 == 0xFF) data1 = chan;

			data->chanMaps[chan] = data1;
			break;

		case 115: case 118: case 119: assert(0);
	}
}

static void MPU_16B7(MSData *data)
{
	uint8 chan;

	for (chan = 0; chan < 16; chan++) {
		if (data->variable_00B8[4][chan] >= 64) {
			s_var_131E[4][chan] = 0;
			/* Sustain Off */
			MPU_Send(0xB0 | chan, 64, 0);
		}

		if (data->variable_00B8[6][chan] >= 64) {
			MPU_FlushChannel(chan);
			MPU_289D(data->chanMaps[chan]);
			data->chanMaps[chan] = chan;
		}

		if (data->variable_00B8[7][chan] >= 64) s_var_13EE[chan] &= 0xBF;

		if (data->variable_00B8[8][chan] >= 64) MPU_Send(0xB0 | chan, 112, 0);
	}
}

static uint16 MPU_1B48(MSData *data)
{
	uint8 *sound;
	uint8 type;
	uint16 len = 0;

	sound = data->sound;
	type = sound[1];
	sound += 2;

	while (true) {
		uint8 v = *sound++;
		len |= v & 0x7F;
		if ((v & 0x80) == 0) break;
		len <<= 7;
	}
	len += sound - data->sound;

	switch (type) {
		case 0x2F:
			MPU_16B7(data);

			data->playing = 2;
			if (data->delayedClear) MPU_ClearData(s_mpu_msdataCurrent);
			break;

		case 0x58: {
			int8 mul;

			data->variable_0042 = sound[0];
			mul = (int8)sound[1] - 2;

			if (mul < 0) {
				data->variable_0044 = 133333 >> -mul;
			} else {
				data->variable_0044 = 133333 << mul;
			}

			data->variable_0048 = data->variable_0044;
		} break;

		case 0x51:
			data->variable_004C = (sound[0] << 20) | (sound[1] << 12) | (sound[2] << 4);
			break;

		default: break;
	}

	return len;
}

void MPU_Interrupt()
{
	static bool locked = false;
	uint16 count;

	if (locked) return;

	locked = true;

	s_mpu_msdataCurrent = -1;
	count = s_mpu_msdataSize;
	while (count-- != 0) {
		uint16 index;
		MSData *data;

		do {
			s_mpu_msdataCurrent++;
			index = s_mpu_msdataCurrent;
		} while (s_mpu_msdata[index] == NULL);

		data = s_mpu_msdata[index];

		if (data->playing != 1) continue;

		data->variable_0030 += data->variable_0032;

		while (data->variable_0030 >= 0x64) {
			uint32 value;

			data->variable_0030 -= 0x64;

			value = data->variable_0048;
			value += data->variable_0044;

			if ((int32)value >= (int32)data->variable_004C) {
				value -= data->variable_004C;
				if (++data->variable_003E >= data->variable_0042) {
					data->variable_003E = 0x0;
					data->variable_0040++;
				}
			}

			data->variable_0048 = value;

			/* Handle note length */
			index = -1;
			while (data->noteOnCount != 0) {
				uint16 chan;
				uint8 note;
				while (++index < 0x20) {
					if (data->noteOnChans[index] != 0xFF) break;
				}
				if (index == 0x20) break;

				if (--data->noteOnDuration[index] > 0) continue;

				chan = data->chanMaps[data->noteOnChans[index]];
				data->noteOnChans[index] = 0xFF;
				note = data->noteOnNotes[index];
				s_var_13DE[chan]--;

				/* Note Off */
				MPU_Send(0x80 | chan, note, 0);

				data->noteOnCount--;
			}

			if (--data->delay <= 0) {
				do {
					uint8 status;
					uint8 chan;
					uint8 data1;
					uint8 data2;
					uint16 nb;

					status = data->sound[0];

					if (status < 0x80) {
						/* Set a delay before next command. */
						data->sound++;
						data->delay = status;
						break;
					}

					chan = status & 0xF;
					status &= 0xF0;
					data1 = data->sound[1];
					data2 = data->sound[2];

					if (status >= 0xF0) {
						assert(chan == 0xF);
						nb = MPU_1B48(data);
					} else if (status >= 0xE0) {
						s_var_131E[10][chan] = data1;
						s_var_131E[11][chan] = data2;
						if ((s_var_13EE[chan] & 0x80) == 0) {
							MPU_Send(status | data->chanMaps[chan], data1, data2);
						}
						nb = 0x3;
					} else if (status >= 0xD0) {
						if ((s_var_13EE[chan] & 0x80) == 0) {
							MPU_Send(status | data->chanMaps[chan], data1, data2);
						}
						nb = 0x2;
					} else if (status >= 0xC0) {
						s_var_131E[9][chan] = data1;
						if ((s_var_13EE[chan] & 0x80) == 0) {
							MPU_Send(status | data->chanMaps[chan], data1, data2);
						}
						nb = 0x2;
					} else if (status >= 0xB0) {
						MPU_Control(data, chan, data1, data2);
						nb = 0x3;
					} else if (status >= 0xA0) {
						if ((s_var_13EE[chan] & 0x80) == 0) {
							MPU_Send(status | data->chanMaps[chan], data1, data2);
						}
						nb = 0x3;
					} else {
						nb = MPU_NoteOn(data);
					}

					data->sound += nb;
				} while (data->playing == 1);
			}
			if (data->playing != 1) break;
		}

		if (data->playing != 1) continue;

		if (data->variable_0032 != data->variable_0034) {
			uint32 v;
			uint16 i;

			v = data->variable_0036;
			v += 0x53;
			i = 0xFFFF;

			do {
				i++;
				data->variable_0036 = v;
				v -= data->variable_003A;
			} while ((int32)v >= 0);

			if (i != 0){
				if (data->variable_0032 >= data->variable_0034) {
					data->variable_0032 = max(data->variable_0032 - i, data->variable_0034);
				} else {
					data->variable_0032 = min(data->variable_0032 + i, data->variable_0034);
				}
			}
		}

		if (data->variable_0024 != data->variable_0026) {
			uint32 v;
			uint16 i;

			v = data->variable_0028;
			v += 0x53;
			i = 0xFFFF;

			do {
				i++;
				data->variable_0028 = v;
				v -= data->variable_002C;
			} while ((int32)v >= 0);

			if (i != 0){
				if (data->variable_0024 >= data->variable_0026) {
					data->variable_0024 = max(data->variable_0024 - i, data->variable_0026);
				} else {
					data->variable_0024 = min(data->variable_0024 + i, data->variable_0026);
				}
				MPU_ApplyVolume(data);
			}
		}
	}

	locked = false;

	return;
}

static void *MPU_FindSoundStart(uint8 *file, uint16 index)
{
	uint32 total;
	uint32 header;
	uint32 size;

	index++;

	while (true) {
		header = BETOH32(*(uint32 *)(file + 0));
		size   = BETOH32(*(uint32 *)(file + 4));

		if (header != 'CAT ' && header != 'FORM') return NULL;
		if (*(uint32 *)(file + 8) == BETOH32('XMID')) break;

		file += 8;
		file += size;
	}
	total = size - 5;

	if (header == 'FORM') return (index == 1) ? file : NULL;

	file += 12;

	while (true) {
		size = BETOH32(*(uint32 *)(file + 4));

		if (*(uint32 *)(file + 8) == BETOH32('XMID') && --index == 0) break;

		size = size + 8;
		total -= size;
		if ((int32)total < 0) return NULL;

		file += size;
	}

	return file;
}

static void MPU_InitData(MSData *data)
{
	uint8 i;

	for (i = 0; i < 4; i++) data->variable_0060[i] = 0xFFFF;

	for (i = 0; i < 16; i++) {
		data->chanMaps[i] = i;
	}

	memset(data->variable_00B8, 0xFF, sizeof(data->variable_00B8));
	memset(data->noteOnChans, 0xFF, sizeof(data->noteOnChans));

	data->delay = 0;
	data->noteOnCount = 0;
	data->variable_0024 = 0x5A;
	data->variable_0026 = 0x5A;
	data->variable_0030 = 0;
	data->variable_0032 = 0x64;
	data->variable_0034 = 0x64;
	data->variable_003E = 0;
	data->variable_0040 = 0;
	data->variable_0042 = 4;
	data->variable_0044 = 0x208D5;
	data->variable_0048 = 0x208D5;
	data->variable_004C = 0x7A1200;
}

uint16 MPU_SetData(uint8 *file, uint16 index, void *msdata)
{
	MSData *data = msdata;
	uint32 header;
	uint32 size;
	uint16 i;

	if (file == NULL) return 0xFFFF;

	for (i = 0; i < 8; i++) {
		if (s_mpu_msdata[i] == NULL) break;
	}
	if (i == 8) return 0xFFFF;

	file = MPU_FindSoundStart(file, index);
	if (file == NULL) return 0xFFFF;

	s_mpu_msdata[i] = data;
	data->TIMB = NULL;
	data->RBRN = NULL;
	data->EVNT = NULL;

	header = BETOH32(*(uint32 *)(file + 0));
	size   = 12;
	while (header != 'EVNT') {
		file += size;
		header = BETOH32(*(uint32 *)(file + 0));
		size   = BETOH32(*(uint32 *)(file + 4)) + 8;

		if (header == 'TIMB') {
			data->TIMB = file;
			continue;
		}

		if (header == 'RBRN') {
			data->RBRN = file;
			continue;
		}
	}

	data->EVNT = file;
	data->playing = 0;
	data->delayedClear = false;

	s_mpu_msdataSize++;

	MPU_InitData(data);

	return i;
}

void MPU_Play(uint16 index)
{
	MSData *data;

	if (index == 0xFFFF) return;

	data = s_mpu_msdata[index];

	if (data->playing == 1) MPU_Stop(index);

	MPU_InitData(data);

	data->sound = data->EVNT + 8;

	data->playing = 1;
}

void MPU_StopAllNotes(MSData *data)
{
	uint8 i;

	for (i = 0; i < 32; i++) {
		uint8 note;
		uint8 chan;

		chan = data->noteOnChans[i];
		if (chan == 0xFF) continue;

		data->noteOnChans[i] = 0xFF;
		note = data->noteOnNotes[i];
		chan = data->chanMaps[chan];

		/* Note Off */
		MPU_Send(0x80 | chan, note, 0);
	}

	data->noteOnCount = 0;
}

void MPU_Stop(uint16 index)
{
	MSData *data;

	if (index == 0xFFFF) return;
	if (s_mpu_msdata[index] == NULL) return;

	data = s_mpu_msdata[index];

	if (data->playing != 1) return;

	MPU_StopAllNotes(data);
	MPU_16B7(data);

	data->playing = 0;
}

uint16 MPU_IsPlaying(uint16 index)
{
	MSData *data;

	if (index == 0xFFFF) return 0xFFFF;

	data = s_mpu_msdata[index];

	return data->playing;
}

uint16 MPU_GetDataSize()
{
	return sizeof(MSData);
}

void MPU_Init()
{
	uint8 i;
	uint8 j;

	mpu_init();

	s_mpu_msdataSize = 0;
	s_mpu_msdataCurrent = 0;
	memset(s_mpu_msdata, 0, sizeof(s_mpu_msdata));

	memset(s_var_11F2, 0xFF, sizeof(s_var_11F2));
	memset(s_var_131E, 0xFF, sizeof(s_var_131E));

	memset(s_var_13DE, 0, sizeof(s_var_13DE));
	memset(s_var_13EE, 0, sizeof(s_var_13EE));

	for (i = 0; i < 9; i++) {
		uint16 index = s_var_11D7[i];
		s_var_11F2[index] = i;
	}

	mpu_reset();

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			uint8 index;
			uint8 value;

			value = s_var_11E0[i];

			if (value == 0xFF) break;

			index = s_var_11D7[i];
			s_var_131E[s_var_11F2[index]][j + 1] = value;

			MPU_Send(0xB0 | (j + 1), index, value);

		}
	}

	for (j = 0; j < 9; j++) {
		uint8 value;

		s_var_131E[10][j + 1] = 0;
		s_var_131E[11][j + 1] = 0x40;

		MPU_Send(0xE0 | (j + 1), 0, 64);

		value = s_var_11E9[j];

		if (value == 0xFF) continue;

		s_var_131E[9][j + 1] = value;

		MPU_Send(0xC0 | (j + 1), 0, value);
	}

	s_mpu_initialized = true;
}

void MPU_Uninit()
{
	uint16 i;

	if (!s_mpu_initialized) return;

	for (i = 0; i < s_mpu_msdataSize; i++) {
		if (s_mpu_msdata[i] == NULL) continue;
		MPU_Stop(i);
		MPU_ClearData(i);
	}

	mpu_reset();

	s_mpu_initialized = false;

	mpu_uninit();
}

void MPU_ClearData(uint16 index)
{
	MSData *data;

	if (index == 0xFFFF) return;
	if (s_mpu_msdata[index] == NULL) return;

	data = s_mpu_msdata[index];

	if (data->playing == 1) {
		data->delayedClear = true;
	} else {
		s_mpu_msdata[index] = NULL;
		s_mpu_msdataSize--;
	}
}

DriverInfo *MPU_GetInfo()
{
	return &s_mpu_driverInfo;
}

void MPU_SetVolume(uint16 index, uint16 volume, uint16 arg0C)
{
	MSData *data;
	uint16 diff;

	if (index == 0xFFFF) return;

	data = s_mpu_msdata[index];

	data->variable_0026 = volume;

	if (arg0C == 0) {
		data->variable_0024 = volume;
		MPU_ApplyVolume(data);
		return;
	}

	diff = data->variable_0026 - data->variable_0024;
	if (diff == 0) return;

	data->variable_002C = 10 * arg0C / abs(diff);
	if (data->variable_002C == 0) data->variable_002C = 1;
	data->variable_0028 = 0;
}
