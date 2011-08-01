/* $Id$ */

/** @file src/mt32mpu.c MPU routines. */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "os/math.h"
#include "os/endian.h"
#include "os/sleep.h"

#include "mt32mpu.h"
#include "mpu.h"

#include "driver.h"

extern void f__AB01_15E1_0068_0B9B();
extern void f__AB01_16B7_0039_7EF1();
extern void f__AB01_1B48_0023_740C();
extern void f__AB01_289D_0017_6184();

uint16 g_mt32mpu_cs;

void MPU_Send(uint8 status, uint8 data1, uint8 data2)
{
	mpu_send(status | (data1 << 8) | (data2 << 16));
}

static void MPU_ApplyVolume(MSData *data)
{
	uint8 i;

	for (i = 0; i < 16; i++) {
		uint8 volume;

		volume = data->variable_00B8[i];
		if (volume == 0xFF) continue;

		volume = min((volume * data->variable_0024) / 100, 127);

		emu_get_memory8(g_mt32mpu_cs, i, 0x131E) = volume;

		if ((emu_get_memory8(g_mt32mpu_cs, i, 0x13EE) & 0x80) != 0) continue;

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

	sound = emu_get_memorycsip(data->sound);

	chan = *sound++ & 0xF;
	note = *sound++;
	velocity = *sound++;

	while (true) {
		uint8 v = *sound++;
		duration |= v & 0x7F;
		if ((v & 0x80) == 0) break;
		duration <<= 7;
	}

	len = sound - emu_get_memorycsip(data->sound);

	if ((emu_get_memory8(g_mt32mpu_cs, chan, 0x13EE) & 0x80) != 0) return len;

	for (i = 0; i < 32; i++) {
		if (data->noteOnChans[i] == 0xFF) {
			data->noteOnCount++;
			break;
		}
	}
	if (i == 32) i = 0;

	duration--;
	data->noteOnChans[i] = chan;
	data->noteOnNotes[i] = note;
	data->noteOnLengthLSB[i] = duration & 0xFFFF;
	data->noteOnLengthMSB[i] = duration >> 16;

	chan = data->chanMaps[chan];
	emu_get_memory8(g_mt32mpu_cs, chan, 0x13DE)++;

	/* Note On */
	MPU_Send(0x90 | chan, note, velocity);

	return len;
}

static uint8 MPU_281A()
{
	uint8 i;
	uint8 chan = 0xFF;
	uint8 flag = 0xC0;
	uint8 min = 0xFF;

	while (true) {
		for (i = 0; i < 16; i++) {
			if ((emu_get_memory8(g_mt32mpu_cs, 15 - i, 0x13EE) & flag) == 0 && emu_get_memory8(g_mt32mpu_cs, 15 - i, 0x13DE) < min) {
				min = emu_get_memory8(g_mt32mpu_cs, 15 - i, 0x13DE);
				chan = 15 - i;
			}
		}
		if (chan != 0xFF) break;
		if (flag == 0x80) return chan;

		flag = 0x80;
	}

	/* Sustain Off */
	MPU_Send(0xB0 | chan, 64, 0);

	emu_push(chan);
	emu_push(emu_cs); emu_push(0x287F); emu_cs = g_mt32mpu_cs; f__AB01_15E1_0068_0B9B();
	emu_sp += 2;

	emu_get_memory8(g_mt32mpu_cs, chan, 0x13DE) = 0x0;
	emu_get_memory8(g_mt32mpu_cs, chan, 0x13EE) |= 0x80;

	return chan;
}

static void MPU_Control(MSData *data, uint8 chan, uint8 data1, uint8 data2)
{
	uint8 index;

	if (data->variable_00A8[chan] != 0xFF) {
		data2 = emu_get_memorycsip(data->variable_0012)[data->variable_00A8[chan]];
		data->variable_00A8[chan] = 0xFF;
	}

	index = emu_get_memory8(g_mt32mpu_cs, data1, 0x11F2);
	if (index != 0xFF) {
		index += chan;
		emu_get_memory8(g_mt32mpu_cs, index, 0x131E) = data2;
		data->variable_00B8[index] = data2;
	}

	switch (data1) {
		case 7: /* Channel Volume */
			if (data->variable_0024 == 100) break;
			data2 = min(data->variable_0024 * data2 / 100, 127);
			emu_get_memory8(g_mt32mpu_cs, chan, 0x131E) = data2;
			/* FALL-THROUGH */

		default:
			if ((emu_get_memory8(g_mt32mpu_cs, chan, 0x13EE) & 0x80) == 0) MPU_Send(0xB0 | data->chanMaps[chan], data1, data2);
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
			if (data2 > 64) emu_get_memory8(g_mt32mpu_cs, chan, 0x13EE) |= 0x40;
			break;

		case 110:
			if (data2 < 64) {
				emu_push(chan);
				emu_push(emu_cs); emu_push(0x1A6D); emu_cs = g_mt32mpu_cs; f__AB01_15E1_0068_0B9B();
				emu_sp += 2;

				emu_push(data->chanMaps[chan] + 1);
				emu_push(0);
				emu_push(emu_cs); emu_push(0x1A85); emu_cs = g_mt32mpu_cs; f__AB01_289D_0017_6184();
				emu_sp += 4;

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

void MPU_Interrupt()
{
	static bool locked = false;
	uint16 count;

	if (locked) return;

	locked = true;

	emu_get_memory16(g_mt32mpu_cs, 0x00, 0x1314) = -4;
	count = emu_get_memory16(g_mt32mpu_cs, 0x00, 0x1312);
	while (count-- != 0) {
		uint16 index;
		csip32 data_csip;
		MSData *data;

		do {
			emu_get_memory16(g_mt32mpu_cs, 0x00, 0x1314) += 4;
			index = emu_get_memory16(g_mt32mpu_cs, 0x00, 0x1314);
		} while (emu_get_memory16(g_mt32mpu_cs, index, 0x12F4) == 0x0);

		data_csip = emu_get_csip32(g_mt32mpu_cs, index, 0x12F2);
		data = (MSData *)emu_get_memorycsip(data_csip);

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

				emu_subw(&data->noteOnLengthLSB[index], 0x1);
				emu_sbbw(&data->noteOnLengthMSB[index], 0x0);
				if (!(emu_flags.sf != emu_flags.of)) continue;

				chan = data->chanMaps[data->noteOnChans[index]];
				data->noteOnChans[index] = 0xFF;
				note = data->noteOnNotes[index];
				emu_get_memory8(g_mt32mpu_cs, chan, 0x13DE)--;

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

					if (data->sound.s.ip >= 0x8000) {
						data->sound.s.cs += data->sound.s.ip >> 4;
						data->sound.s.ip &= 0xF;
					}

					status = emu_get_memorycsip(data->sound)[0];

					if (status < 0x80) {
						/* Set a delay before next command. */
						data->sound.s.ip++;
						data->delay = status;
						break;
					}

					chan = status & 0xF;
					status &= 0xF0;
					data1 = emu_get_memorycsip(data->sound)[1];
					data2 = emu_get_memorycsip(data->sound)[2];

					if (status >= 0xF0) {
						assert(chan == 0xF);
						emu_push(data_csip.s.cs); emu_push(data_csip.s.ip);
						emu_push(emu_cs); emu_push(0x1EB5); emu_cs = g_mt32mpu_cs; f__AB01_1B48_0023_740C();
						emu_sp += 4;
						nb = emu_ax;
					} else if (status >= 0xE0) {
						data->pitchWheelLSB[chan] = data1;
						data->pitchWheelMSB[chan] = data2;
						emu_get_memory8(g_mt32mpu_cs, chan, 0x13BE) = data1;
						emu_get_memory8(g_mt32mpu_cs, chan, 0x13CE) = data2;
						if ((emu_get_memory8(g_mt32mpu_cs, chan, 0x13EE) & 0x80) == 0) {;
							MPU_Send(status | data->chanMaps[chan], data1, data2);
						}
						nb = 0x3;
					} else if (status >= 0xD0) {
						if ((emu_get_memory8(g_mt32mpu_cs, chan, 0x13EE) & 0x80) == 0) {;
							MPU_Send(status | data->chanMaps[chan], data1, data2);
						}
						nb = 0x2;
					} else if (status >= 0xC0) {
						data->programs[chan] = data1;
						emu_get_memory8(g_mt32mpu_cs, chan, 0x13AE) = data1;
						if ((emu_get_memory8(g_mt32mpu_cs, chan, 0x13EE) & 0x80) == 0) {;
							MPU_Send(status | data->chanMaps[chan], data1, data2);
						}
						nb = 0x2;
					} else if (status >= 0xB0) {
						MPU_Control(data, chan, data1, data2);
						nb = 0x3;
					} else if (status >= 0xA0) {
						if ((emu_get_memory8(g_mt32mpu_cs, chan, 0x13EE) & 0x80) == 0) {;
							MPU_Send(status | data->chanMaps[chan], data1, data2);
						}
						nb = 0x3;
					} else {
						nb = MPU_NoteOn(data);
					}

					data->sound.s.ip += nb;
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

csip32 MPU_FindSoundStart(csip32 file, uint16 index)
{
	csip32 ret;
	uint32 total;

	ret.csip = 0;

	index++;

	while (true) {
		if (emu_get_memory32(file.s.cs, file.s.ip, 0) != ' TAC' && emu_get_memory32(file.s.cs, file.s.ip, 0) != 'MROF') return ret;
		if (emu_get_memory32(file.s.cs, file.s.ip, 8) == 'DIMX') break;

		file.s.ip += BETOH32(emu_get_memory32(file.s.cs, file.s.ip, 4)) + 8;
		file.s.cs += file.s.ip >> 4;
		file.s.ip &= 0xF;
	}

	total = BETOH32(emu_get_memory32(file.s.cs, file.s.ip, 4)) - 5;

	if (emu_get_memory32(file.s.cs, file.s.ip, 0) == 'MROF') return (index == 1) ? file : ret;

	file.s.ip += 0xC;

	while (true) {
		uint16 size;

		if (emu_get_memory32(file.s.cs, file.s.ip, 8) == 'DIMX' && --index == 0) break;

		size = BETOH32(emu_get_memory32(file.s.cs, file.s.ip, 4)) + 8;
		total -= size;
		if ((int32)total < 0) return ret;

		file.s.ip += size;
		file.s.cs += file.s.ip >> 4;
		file.s.ip &= 0xF;
	}

	return file;
}

uint16 MPU_SetData(csip32 file, uint16 index, csip32 data_csip, csip32 variable_0012)
{
	uint16 i;
	uint16 size;
	MSData *data;

	for (i = 0; i < 8; i++) {
		if (emu_get_memory16(g_mt32mpu_cs, i * 4, 0x12F4) == 0) break;
	}
	if (i == 8) return 0xFFFF;

	file = MPU_FindSoundStart(file, index);

	if (file.csip == 0) return 0xFFFF;

	size = 0xC;
	emu_get_csip32(g_mt32mpu_cs, i * 4, 0x12F2) = data_csip;
	data = (MSData*)emu_get_memorycsip(data_csip);
	data->TIMB.csip = 0;
	data->RBRN.csip = 0;
	data->EVNT.csip = 0;

	while (emu_get_memory32(file.s.cs, file.s.ip, 0) != 'TNVE') {
		file.s.ip += size;
		file.s.cs += file.s.ip >> 4;
		file.s.ip &= 0xF;

		size = BETOH32(emu_get_memory32(file.s.cs, file.s.ip, 4)) + 8;

		if (emu_get_memory32(file.s.cs, file.s.ip, 0) == 'BMIT') {
			data->TIMB = file;
			continue;
		}

		if (emu_get_memory32(file.s.cs, file.s.ip, 0) == 'NRBR') {
			data->RBRN = file;
			continue;
		}
	}

	data->index = i * 4;
	data->EVNT = file;
	data->variable_0012 = variable_0012;
	data->variable_0018 = 0;
	data->playing = 0;
	data->variable_001C = 0;

	emu_get_memory16(g_mt32mpu_cs, 0x0, 0x1312)++;

	MPU_InitData(data);

	return i * 4;
}

void MPU_InitData(MSData *data)
{
	uint8 i;

	for (i = 0; i < 4; i++) data->variable_0060[i] = 0xFFFF;

	for (i = 0; i < 16; i++) {
		data->chanMaps[i] = i;
		data->programs[i] = 0xFF;
		data->pitchWheelLSB[i] = 0xFF;
		data->pitchWheelMSB[i] = 0xFF;
		data->variable_00A8[i] = 0xFF;
	}

	for (i = 0; i < 144; i++) data->variable_00B8[i] = 0xFF;

	for (i = 0; i < 32; i++) data->noteOnChans[i] = 0xFF;

	data->variable_0010 = 0xFFFF;
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

void MPU_Play(uint16 index)
{
	MSData *data;

	if (index == 0xFFFF) return;

	data = (MSData *)emu_get_memorycsip(emu_get_csip32(g_mt32mpu_cs, index, 0x12F2));

	if (data->playing == 1) MPU_Stop(index);

	MPU_InitData(data);

	data->sound = data->EVNT;
	data->sound.s.ip += 8;
	data->sound.s.cs += data->sound.s.ip >> 4;
	data->sound.s.ip &= 0xF;

	data->playing = 1;
	data->variable_0018 = 1;
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
	csip32 data_csip;

	if (index == 0xFFFF) return;

	data_csip = emu_get_csip32(g_mt32mpu_cs, index, 0x12F2);

	if (data_csip.csip == 0) return;

	data = (MSData *)emu_get_memorycsip(data_csip);

	if (data->playing != 1) return;

	MPU_StopAllNotes(data);

	emu_push(data_csip.s.cs); emu_push(data_csip.s.ip);
	emu_push(emu_cs); emu_push(0x2441); emu_cs = g_mt32mpu_cs; f__AB01_16B7_0039_7EF1();
	emu_sp += 4;

	data->playing = 0;
}

uint16 MPU_IsPlaying(uint16 index)
{
	MSData *data;

	if (index == 0xFFFF) return 0xFFFF;

	data = (MSData *)emu_get_memorycsip(emu_get_csip32(g_mt32mpu_cs, index, 0x12F2));

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

	emu_get_memory16(g_mt32mpu_cs, 0x00, 0x1312) = 0;
	memset(&emu_get_memory8(g_mt32mpu_cs, 0x00, 0x131E), 0xFF, 192);
	memset(&emu_get_memory8(g_mt32mpu_cs, 0x00, 0x11F2), 0xFF, 256);
	memset(&emu_get_memory8(g_mt32mpu_cs, 0x00, 0x12F2), 0x00, 32);
	memset(&emu_get_memory8(g_mt32mpu_cs, 0x00, 0x13EE), 0x00, 16);

	for (i = 0; i < 9; i++) {
		uint16 index = emu_get_memory8(g_mt32mpu_cs, i, 0x11D7);
		emu_get_memory8(g_mt32mpu_cs, index, 0x11F2) = i * 16;
	}

	mpu_reset();

	for (i = 0; i < 9; i++) {
		for (j = 0; j < 9; j++) {
			uint8 index;
			uint16 index2;
			uint8 value;

			value = emu_get_memory8(g_mt32mpu_cs, i, 0x11E0);

			if (value == 0xFF) break;

			index  = emu_get_memory8(g_mt32mpu_cs, i, 0x11D7);
			index2 = emu_get_memory8(g_mt32mpu_cs, index, 0x11F2);
			index2 += j + 1;

			emu_get_memory8(g_mt32mpu_cs, index2, 0x131E) = value;

			MPU_Send(0xB0 | (j + 1), index, value);

		}
	}

	sleep(140);

	for (j = 0; j < 9; j++) {
		uint8 value;

		emu_get_memory8(g_mt32mpu_cs, j + 1, 0x13BE) = 0x0;
		emu_get_memory8(g_mt32mpu_cs, j + 1, 0x13CE) = 0x40;

		MPU_Send(0xE0 | (j + 1), 0, 64);

		value = emu_get_memory8(g_mt32mpu_cs, j + 1, 0x11E8);

		if (value == 0xFF) continue;

		emu_get_memory8(g_mt32mpu_cs, j + 1, 0x13AE) = value;

		MPU_Send(0xC0 | (j + 1), 0, value);
	}

	sleep(140);

	emu_get_memory16(g_mt32mpu_cs, 0x00, 0x13FE) = 0x1;
}

void MPU_Uninit()
{
	uint16 i;

	if (emu_get_memory16(g_mt32mpu_cs, 0x00, 0x13FE) == 0) return;

	for (i = 0; i < emu_get_memory16(g_mt32mpu_cs, 0x00, 0x1312); i++) {
		if (emu_get_memory16(g_mt32mpu_cs, i * 4, 0x12F4) == 0) continue;
		MPU_Stop(i * 4);
		MPU_ClearData(i * 4);
	}

	mpu_reset();

	emu_get_memory16(g_mt32mpu_cs, 0x00, 0x13FE) = 0;

	mpu_uninit();
}

void MPU_ClearData(uint16 index)
{
	MSData *data;
	csip32 data_csip;

	if (index == 0xFFFF) return;

	if (emu_get_memory16(g_mt32mpu_cs, index, 0x12F4) == 0) return;

	data_csip = emu_get_csip32(g_mt32mpu_cs, index, 0x12F2);
	data = (MSData *)emu_get_memorycsip(data_csip);

	if (data->playing == 1) {
		data->variable_001C = 1;
	} else {
		emu_get_memory16(g_mt32mpu_cs, index, 0x12F4) = 0;
		emu_get_memory16(g_mt32mpu_cs, 0x00, 0x1312)--;
	}
}

DriverInfo *MPU_GetInfo()
{
	DriverInfo *info;
	info = (DriverInfo *)&emu_get_memory8(g_mt32mpu_cs, 0x00, 0xC7);
	info->variable_0008.s.cs = g_mt32mpu_cs;
	return info;
}

void MPU_SetVolume(uint16 index, uint16 volume, uint16 arg0C)
{
	MSData *data;
	csip32 data_csip;
	uint16 diff;

	if (index == 0xFFFF) return;

	data_csip = emu_get_csip32(g_mt32mpu_cs, index, 0x12F2);
	data = (MSData *)emu_get_memorycsip(data_csip);

	data->variable_0026 = volume;

	if (arg0C == 0) {
		data->variable_0024 = volume;
		MPU_ApplyVolume(data);
		return;
	}

	diff = data->variable_0026 - data->variable_0024;
	if (diff == 0) return;

	emu_cx = abs(diff);

	data->variable_002C = 10 * arg0C / diff;
	if (data->variable_002C == 0) data->variable_002C = 1;
	data->variable_0028 = 0;
}
