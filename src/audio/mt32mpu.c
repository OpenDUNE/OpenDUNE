/** @file src/audio/mt32mpu.c MPU routines. */

#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include "multichar.h"
#include "types.h"
#include "../os/common.h"
#include "../os/math.h"
#include "../os/endian.h"
#include "../os/error.h"
#include "../os/sleep.h"
#include "../os/thread.h"

#include "mt32mpu.h"

#include "midi.h"

#if defined(_WIN32)
static Semaphore s_mpu_sem = NULL;
static Thread s_mpu_thread = NULL;
static uint32 s_mpu_usec = 0;
#endif /* _WIN32 */

/* Dune II is using AIL middleware for sound and music :
 * AIL = IBM Audio Interface Library by John Miles
 * Sources of AIL 2.03 are available on John Miles website :
 * http://www.ke5fx.com/ or http://www.thegleam.com/ke5fx/ */

/* defines from AIL XMIDI.ASM : */
#define NUM_CHANS 16
#define MAX_NOTES 32

typedef struct Controls {
	uint8 volume;
	uint8 modulation;
	uint8 panpot;
	uint8 expression;
	uint8 sustain;
	uint8 patch_bank_sel;
	uint8 chan_lock;
	uint8 chan_protect;
	uint8 voice_protect;
} Controls;

typedef struct MSData {
	const uint8 *EVNT;                                      /*!< Pointer to EVNT position in sound file. */
	const uint8 *sound;                                     /*!< Pointer to current position in sound file. */
	uint16 playing;                                         /*!< status : 0 = SEQ_STOPPED, 1 = SEQ_PLAYING or 2 = SEQ_DONE. */
	bool   delayedClear;                                    /*!< post_release */
	int16  delay;                                           /*!< Delay before reading next command. interval_cnt */
	uint16 noteOnCount;                                     /*!< Number of notes currently on. note_count */
	/*uint16 variable_0022;*/                               /*!< vol_error - unused */
	uint16 globalVolume;                                    /*!< Volume (percent) */
	uint16 globalVolumeTarget;                              /*!< Volume target */
	uint32 globalVolumeAcc;                                 /*!< Volume accumulator */
	uint32 globalVolumeIncr;                                /*!< Volume increment per 100us period */
	uint16 tempoError;                                      /*!< tempo_error */
	uint16 tempoPercent;                                    /*!< tempo_percent */
	uint16 tempoTarget;                                     /*!< tempo_target */
	uint32 tempoAcc;                                        /*!< tempo_accum */
	uint32 tempoPeriod;                                     /*!< tempo_period */
	uint16 beatCount;                                       /*!< beat_count */
	uint16 measureCount;                                    /*!< measure_count */
	uint16 timeNumerator;                                   /*!< time_numerator */
	uint32 timeFraction;                                    /*!< time_fraction */
	uint32 beatFraction;                                    /*!< beat_fraction */
	uint32 timePerBeat;                                     /*!< time_per_beat */
	const uint8 *forLoopPtrs[4];                            /*!< FOR_loop_ptrs pointer to start of FOR loop */
	uint16 forLoopCounters[4];                              /*!< FOR_loop_cnt */
	uint8  chanMaps[NUM_CHANS];                             /*!< ?? Channel mapping. */
	Controls controls[NUM_CHANS];                           /*!< ?? */
	uint8  noteOnChans[MAX_NOTES];                          /*!< ?? */
	uint8  noteOnNotes[MAX_NOTES];                          /*!< ?? */
	int32  noteOnDuration[MAX_NOTES];                       /*!< ?? */
} MSData;

static MSData *s_mpu_msdata[8];
static uint16 s_mpu_msdataSize;
static uint16 s_mpu_msdataCurrent;

static Controls s_mpu_controls[NUM_CHANS];	/* global_controls */
static uint8 s_mpu_programs[NUM_CHANS];		/* global_program */
static uint16 s_mpu_pitchWheel[NUM_CHANS];	/* global_pitch */
static uint8 s_mpu_noteOnCount[NUM_CHANS];	/* active_notes */
static uint8 s_mpu_lockStatus[NUM_CHANS];	/* bit 7: locked, bit 6: lock-protected */
static bool s_mpu_initialized;

static bool s_mpuIgnore = false;

static void MPU_Send(uint8 status, uint8 data1, uint8 data2)
{
	s_mpuIgnore = true;
	midi_send(status | (data1 << 8) | (data2 << 16));
	s_mpuIgnore = false;
}

/**
 * XMIDI.ASM - XMIDI_volume
 * Apply global volume to all channels */
static void MPU_ApplyVolume(MSData *data)
{
	uint8 i;

	for (i = 0; i < NUM_CHANS; i++) {
		uint8 volume;

		volume = data->controls[i].volume;
		if (volume == 0xFF) continue;

		/* get scaled volume value, maximum is 127 */
		volume = min((volume * data->globalVolume) / 100, 127);

		s_mpu_controls[i].volume = volume;

		if ((s_mpu_lockStatus[i] & 0x80) != 0) continue;

		MPU_Send(0xB0 | data->chanMaps[i], 7 /* PART_VOLUME */, volume);
	}
}

static uint16 MPU_NoteOn(MSData *data)
{
	uint8 chan;
	uint8 note;
	uint8 velocity;
	uint16 len = 0;
	uint32 duration = 0;
	uint8 i;

	chan = data->sound[len++] & 0x0F;
	note = data->sound[len++];
	velocity = data->sound[len++];

	/* decode variable length duration */
	do {
		duration = (duration << 7) | (data->sound[len] & 0x7F);
	} while (data->sound[len++] & 0x80);

	if ((s_mpu_lockStatus[chan] & 0x80) != 0) return len;

	for (i = 0; i < MAX_NOTES; i++) {
		if (data->noteOnChans[i] == 0xFF) {
			data->noteOnCount++;
			break;
		}
	}
	if (i == MAX_NOTES) i = 0;

	data->noteOnChans[i] = chan;
	data->noteOnNotes[i] = note;
	data->noteOnDuration[i] = duration - 1;

	chan = data->chanMaps[chan];
	s_mpu_noteOnCount[chan]++;

	/* Note On */
	MPU_Send(0x90 | chan, note, velocity);

	return len;
}

/**
 * XMIDI.ASM - flush_channel_notes
 */
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

		for (i = 0; i < MAX_NOTES; i++) {
			uint8 chan;
			uint8 note;

			chan = data->noteOnChans[i];
			if (chan != channel) continue;
			data->noteOnChans[i] = 0xFF;

			note = data->noteOnNotes[i];
			chan = data->chanMaps[chan];
			s_mpu_noteOnCount[chan]--;

			/* Note Off */
			MPU_Send(0x80 | chan, note, 0);

			data->noteOnCount--;
		}
	}
}

/**
 * XMIDI.ASM - lock_channel
 * find highest channel # w/lowest note activity
 * return 0xFF if no channel available for locking
 */
static uint8 MPU_LockChannel(void)
{
	uint8 i;
	uint8 chan = 0xFF;
	uint8 flag = 0xC0;
	uint8 min = 0xFF;

	while (true) {
		for (i = 0; i < NUM_CHANS; i++) {
			if ((s_mpu_lockStatus[15 - i] & flag) == 0 && s_mpu_noteOnCount[15 - i] < min) {
				min = s_mpu_noteOnCount[15 - i];
				chan = 15 - i;
			}
		}
		if (chan != 0xFF) break;
		if (flag == 0x80) return chan;

		flag = 0x80;	/* if no channels available for locking, ignore lock protection & try again */
	}

	/* Sustain Off */
	MPU_Send(0xB0 | chan, 64, 0);

	MPU_FlushChannel(chan);

	s_mpu_noteOnCount[chan] = 0;
	s_mpu_lockStatus[chan] |= 0x80;

	return chan;
}

/**
 * XMIDI.ASM - release_channel
 */
static void MPU_ReleaseChannel(uint8 chan)
{
	if ((s_mpu_lockStatus[chan] & 0x80) == 0) return;

	s_mpu_lockStatus[chan] &= 0x7F;
	s_mpu_noteOnCount[chan] = 0;

	/* Sustain Off */
	MPU_Send(0xB0 | chan, 64, 0);

	/* All Notes Off */
	MPU_Send(0xB0 | chan, 123, 0);

	if (s_mpu_controls[chan].volume != 0xFF)         MPU_Send(0xB0 | chan,   7, s_mpu_controls[chan].volume);
	if (s_mpu_controls[chan].modulation != 0xFF)     MPU_Send(0xB0 | chan,   1, s_mpu_controls[chan].modulation);
	if (s_mpu_controls[chan].panpot != 0xFF)         MPU_Send(0xB0 | chan,  10, s_mpu_controls[chan].panpot);
	if (s_mpu_controls[chan].expression != 0xFF)     MPU_Send(0xB0 | chan,  11, s_mpu_controls[chan].expression);
	if (s_mpu_controls[chan].sustain != 0xFF)        MPU_Send(0xB0 | chan,  64, s_mpu_controls[chan].sustain);
	if (s_mpu_controls[chan].patch_bank_sel != 0xFF) MPU_Send(0xB0 | chan, 114, s_mpu_controls[chan].patch_bank_sel);
	if (s_mpu_controls[chan].chan_lock != 0xFF)      MPU_Send(0xB0 | chan, 110, s_mpu_controls[chan].chan_lock);
	if (s_mpu_controls[chan].chan_protect != 0xFF)   MPU_Send(0xB0 | chan, 111, s_mpu_controls[chan].chan_protect);
	if (s_mpu_controls[chan].voice_protect != 0xFF)  MPU_Send(0xB0 | chan, 112, s_mpu_controls[chan].voice_protect);

	if (s_mpu_programs[chan] != 0xFF) MPU_Send(0xC0 | chan, s_mpu_programs[chan], 0);

	if (s_mpu_pitchWheel[chan] != 0xFFFF) MPU_Send(0xE0 | chan, s_mpu_pitchWheel[chan] & 0xFF, s_mpu_pitchWheel[chan] >> 8);
}

/* XMIDI.ASM - XMIDI_control procedure */
static void MPU_Control(MSData *data, uint8 chan, uint8 control, uint8 value)
{
	switch (control) {
		case 1:	/* MODULATION */
			s_mpu_controls[chan].modulation = value;
			data->controls[chan].modulation = value;
			if ((s_mpu_lockStatus[chan] & 0x80) == 0) MPU_Send(0xB0 | data->chanMaps[chan], control, value);
			break;

		case 7: /* PART_VOLUME / Channel Volume */
			if (data->globalVolume == 100) break;
			value = min(data->globalVolume * value / 100, 127);
			s_mpu_controls[chan].volume = value;
			if ((s_mpu_lockStatus[chan] & 0x80) == 0) MPU_Send(0xB0 | data->chanMaps[chan], control, value);
			break;

		case 10:	/* PANPOT */
			s_mpu_controls[chan].panpot = value;
			data->controls[chan].panpot = value;
			if ((s_mpu_lockStatus[chan] & 0x80) == 0) MPU_Send(0xB0 | data->chanMaps[chan], control, value);
			break;

		case 11:	/* EXPRESSION */
			s_mpu_controls[chan].expression = value;
			data->controls[chan].expression = value;
			if ((s_mpu_lockStatus[chan] & 0x80) == 0) MPU_Send(0xB0 | data->chanMaps[chan], control, value);
			break;

		case 64:	/* SUSTAIN */
			s_mpu_controls[chan].sustain = value;
			data->controls[chan].sustain = value;
			if ((s_mpu_lockStatus[chan] & 0x80) == 0) MPU_Send(0xB0 | data->chanMaps[chan], control, value);
			break;

		case 110:	/* CHAN_LOCK */
			s_mpu_controls[chan].chan_lock = value;
			data->controls[chan].chan_lock = value;
			Debug("CHAN_LOCK : chan=%u %u %u\n", chan, control, value);
			if (value < 64) {
				/* unlock */
				MPU_FlushChannel(chan);
				MPU_ReleaseChannel(data->chanMaps[chan]);	/* release channel */
				data->chanMaps[chan] = chan;
			} else {
				/* lock */
				uint8 newChan = MPU_LockChannel();	/* lock new channel and map to current channel in sequence */
				if (newChan == 0xFF) newChan = chan;

				data->chanMaps[chan] = newChan;
			}
			break;

		case 111:	/* CHAN_PROTECT */
			s_mpu_controls[chan].chan_protect = value;
			data->controls[chan].chan_protect = value;
			if (value >= 64) s_mpu_lockStatus[chan] |= 0x40;
			break;

		case 112:	/* VOICE_PROTECT */
			s_mpu_controls[chan].voice_protect = value;
			data->controls[chan].voice_protect = value;
			if ((s_mpu_lockStatus[chan] & 0x80) == 0) MPU_Send(0xB0 | data->chanMaps[chan], control, value);
			break;

		case 114:	/* PATCH_BANK_SEL */
			s_mpu_controls[chan].patch_bank_sel = value;
			data->controls[chan].patch_bank_sel = value;
			if ((s_mpu_lockStatus[chan] & 0x80) == 0) MPU_Send(0xB0 | data->chanMaps[chan], control, value);
			break;

		case 115:	/* INDIRECT_C_PFX */
			assert(0); /* Not decompiled code */

		case 116: {	/* FOR_LOOP */
			uint8 i;

			for (i = 0; i < 4; i++) {
				if (data->forLoopCounters[i] == 0xFFFF) {
					data->forLoopCounters[i] = value;
					data->forLoopPtrs[i] = data->sound;
					break;
				}
			}
		} break;

		case 117: {	/* NEXT_LOOP */
			uint8 i;

			if (value < 64) break;

			for (i = 0; i < 4; i++) {
				if (data->forLoopCounters[3 - i] != 0xFFFF) {
					if (data->forLoopCounters[3 - i] != 0 && --data->forLoopCounters[3 - i] == 0) {
						data->forLoopCounters[3 - i] = 0xFFFF;
						break;
					}
					data->sound = data->forLoopPtrs[3 - i];
					break;
				}
			}
		} break;

		case 118:	/* CLEAR_BEAT_BAR */
		case 119:	/* CALLBACK_TRIG */
			assert(0); /* Not decompiled code */

		default:
			Debug("MPU_Control() %02X %02X %02X   control=%u\n", data->sound[0], control, value, control);
			if ((s_mpu_lockStatus[chan] & 0x80) == 0) MPU_Send(0xB0 | data->chanMaps[chan], control, value);
			break;
	}
}

/**
 * XMIDI.ASM - reset_sequence
 */
static void MPU_ResetSequence(MSData *data)
{
	uint8 chan;

	for (chan = 0; chan < NUM_CHANS; chan++) {
		if (data->controls[chan].sustain != 0xFF && data->controls[chan].sustain >= 64) {
			s_mpu_controls[chan].sustain = 0;
			/* Sustain Off */
			MPU_Send(0xB0 | chan, 64, 0);
		}

		if (data->controls[chan].chan_lock != 0xFF && data->controls[chan].chan_lock >= 64) {
			MPU_FlushChannel(chan);
			MPU_ReleaseChannel(data->chanMaps[chan]);	/* release_channel */
			data->chanMaps[chan] = chan;
		}

		if (data->controls[chan].chan_protect != 0xFF && data->controls[chan].chan_protect >= 64) s_mpu_lockStatus[chan] &= 0xBF;

		if (data->controls[chan].voice_protect != 0xFF && data->controls[chan].voice_protect >= 64) MPU_Send(0xB0 | chan, 112, 0); /* 112 = VOICE_PROTECT */
	}
}

/**
 * XMIDI.ASM - XMIDI_meta
 */
static uint16 MPU_XMIDIMeta(MSData *data)
{
#ifdef _DEBUG
	static const uint8 rates[] = {24, 25, 30, 30};
#endif /* _DEBUG */
	uint8 type;
	uint16 len;
	uint16 data_len = 0;

	type = data->sound[1];
	len = 2;

	/* decode variable length */
	do {
		data_len = (data_len << 7) | (data->sound[len] & 0x7F);
	} while (data->sound[len++] & 0x80);

	switch (type) {
		case 0x2F:	/* End of track / end sequence */
			MPU_ResetSequence(data);	/* reset_sequence */

			data->playing = 2; /* 2 = SEQ_DONE */
			if (data->delayedClear) MPU_ClearData(s_mpu_msdataCurrent);	/* release-on-completion pending => release_seq */
			break;

		case 0x58: {	/* time sig */
			int8 mul;

			data->timeNumerator = data->sound[len];
			mul = (int8)data->sound[len+1] - 2;

			if (mul < 0) {
				data->timeFraction = 133333 >> -mul;
			} else {
				data->timeFraction = 133333 << mul;
			}

			data->beatFraction = data->timeFraction;
		} break;

		case 0x51:	/* TEMPO meta-event */
			data->timePerBeat = (data->sound[len] << 20) | (data->sound[len+1] << 12) | (data->sound[len+2] << 4);
			break;

		case 0x59:	/* 	Key signature : 1st byte = flats/sharps, 2nd byte = major(0)/minor(1) */
			Debug("MPU_XMIDIMeta() IGNORING key signature : %02X %02X\n",
			      data->sound[len], data->sound[len+1]);
			break;

		case 0x21:	/* Midi Port */
			Debug("MPU_XMIDIMeta() IGNORING MIDI Port : %02X\n", data->sound[len]);
			break;

		case 0x54:	/* SMPTE Offset */
			Debug("MPU_XMIDIMeta() IGNORING SMPTE Offset : %dfps %d:%02d:%02d %d.%03d\n",
			      (int)rates[(data->sound[len] >> 5) & 3], (int)(data->sound[len] & 31),
			      (int)data->sound[len+1], (int)data->sound[len+2],
			      (int)data->sound[len+3], (int)data->sound[len+4]);
			break;

		case 0x06:	/* Marker (text) */
			Debug("MPU_XMIDIMeta() IGNORING Marker '%.*s'\n",
			      data_len, (const char *)(data->sound + len));
			break;

		default:
			{
				int i;
				Warning("MPU_XMIDIMeta() type=%02X len=%hu", (int)type, len);
				Warning("  ignored data :");
				for(i = 0 ; i < len + data_len; i++) Warning(" %02X", data->sound[i]);
				Warning("\n");
			}
			break;
	}

	return len + data_len;
}

void MPU_Interrupt(void)
{
	static bool locked = false;
	uint16 count;

	if (s_mpuIgnore) return;
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
		} while (index < lengthof(s_mpu_msdata) && s_mpu_msdata[index] == NULL);

		if (index >= lengthof(s_mpu_msdata)) break;

		data = s_mpu_msdata[index];

		if (data->playing != 1) continue;

		data->tempoError += data->tempoPercent;

		while (data->tempoError >= 0x64) {	/* 0x64 == 100 */
			uint32 value;

			data->tempoError -= 0x64;	/* 0x64 == 100 */

			value = data->beatFraction;
			value += data->timeFraction;

			if ((int32)value >= (int32)data->timePerBeat) {
				value -= data->timePerBeat;
				if (++data->beatCount >= data->timeNumerator) {
					data->beatCount = 0x0;
					data->measureCount++;
				}
			}

			data->beatFraction = value;

			/* Handle note length */
			index = -1;
			while (data->noteOnCount != 0) {
				uint16 chan;
				uint8 note;
				while (++index < 0x20) {
					if (data->noteOnChans[index] != 0xFF) break;
				}
				if (index == 0x20) break;

				if (--data->noteOnDuration[index] >= 0) continue;

				chan = data->chanMaps[data->noteOnChans[index]];
				data->noteOnChans[index] = 0xFF;
				note = data->noteOnNotes[index];
				s_mpu_noteOnCount[chan]--;

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
					data1 = data->sound[1];
					data2 = data->sound[2];

					switch(status & 0xF0) {
					case 0xF0:	/* System */
						if(chan == 0xF) {
							/* 0xFF Meta event */
							nb = MPU_XMIDIMeta(data);
						} else if(chan == 0) {
							/* System Exclusive */
							static uint8 buffer[320];
							int i;
							/* decode XMID variable len */
							i = 1;
							nb = 0;
							do {
								nb = (nb << 7) | (data->sound[i] & 0x7F);
							} while (data->sound[i++] & 0x80);
							buffer[0] = status;
							assert(nb < sizeof(buffer));
							memcpy(buffer + 1, data->sound + i, nb);
							midi_send_string(buffer, nb + 1);
							nb += i;
						} else {
							Error("status = %02X\n", status);
							nb = 1;
						}
						break;
					case 0xE0:	/* Pitch Bend change */
						s_mpu_pitchWheel[chan] = (data2 << 8) + data1;
						if ((s_mpu_lockStatus[chan] & 0x80) == 0) {
							MPU_Send(status | data->chanMaps[chan], data1, data2);
						}
						nb = 0x3;
						break;
					case 0xD0:	/* Channel Pressure / aftertouch */
						if ((s_mpu_lockStatus[chan] & 0x80) == 0) {
							MPU_Send(status | data->chanMaps[chan], data1, 0);
						}
						nb = 0x2;
						break;
					case 0xC0:	/* Program Change */
						s_mpu_programs[chan] = data1;
						if ((s_mpu_lockStatus[chan] & 0x80) == 0) {
							MPU_Send(status | data->chanMaps[chan], data1, 0);
						}
						nb = 0x2;
						break;
					case 0xB0:	/* Control Change */
						MPU_Control(data, chan, data1, data2);
						nb = 0x3;
						break;
					case 0xA0:	/* Polyphonic key pressure / aftertouch */
						if ((s_mpu_lockStatus[chan] & 0x80) == 0) {
							MPU_Send(status | data->chanMaps[chan], data1, data2);
						}
						nb = 0x3;
						break;
					default:	/* 0x80 Note Off / 0x90 Note On */
						nb = MPU_NoteOn(data);
					}

					data->sound += nb;
				} while (data->playing == 1);
			}
			if (data->playing != 1) break;
		}

		if (data->playing != 1) continue;

		if (data->tempoPercent != data->tempoTarget) {
			uint32 v;
			uint16 i;

			v = data->tempoAcc;
			v += 0x53;	/* 0x53 = 83 = 10000 / 120 */
			i = 0xFFFF;

			do {
				i++;
				data->tempoAcc = v;
				v -= data->tempoPeriod;
			} while ((int32)v >= 0);

			if (i != 0){
				if (data->tempoPercent >= data->tempoTarget) {
					data->tempoPercent = max(data->tempoPercent - i, data->tempoTarget);
				} else {
					data->tempoPercent = min(data->tempoPercent + i, data->tempoTarget);
				}
			}
		}

		if (data->globalVolume != data->globalVolumeTarget) {
			uint32 v;
			uint16 i;

			v = data->globalVolumeAcc;
			v += 0x53;	/* 0x53 = 83 = 10000 / 120 */
			i = 0xFFFF;

			do {
				i++;
				data->globalVolumeAcc = v;
				v -= data->globalVolumeIncr;
			} while ((int32)v >= 0);

			if (i != 0){
				if (data->globalVolume >= data->globalVolumeTarget) {
					data->globalVolume = max(data->globalVolume - i, data->globalVolumeTarget);
				} else {
					data->globalVolume = min(data->globalVolume + i, data->globalVolumeTarget);
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
		header = READ_BE_UINT32(file);
		size   = READ_BE_UINT32(file + 4);

		if (header != CC_CAT && header != CC_FORM) return NULL;
		if (READ_BE_UINT32(file + 8) == CC_XMID) break;

		file += 8;
		file += size;
	}
	total = size - 5;

	if (header == CC_FORM) return (index == 1) ? file : NULL;

	file += 12;

	while (true) {
		size = READ_BE_UINT32(file + 4);

		if ((READ_BE_UINT32(file + 8) == CC_XMID) && --index == 0) break;

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

	for (i = 0; i < 4; i++) data->forLoopCounters[i] = 0xFFFF;

	for (i = 0; i < NUM_CHANS; i++) {
		data->chanMaps[i] = i;
	}

	memset(data->controls, 0xFF, sizeof(data->controls));
	memset(data->noteOnChans, 0xFF, sizeof(data->noteOnChans));

	data->delay = 0;
	data->noteOnCount = 0;
	data->globalVolume = 0x5A;			/* 90% */
	data->globalVolumeTarget = 0x5A;	/* 90% */
	data->tempoError = 0;
	data->tempoPercent = 0x64;	/* = 100 */
	data->tempoTarget = 0x64;	/* = 100 */
	data->beatCount = 0;
	data->measureCount = 0;
	data->timeNumerator = 4;
	data->timeFraction = 0x208D5;	/* 133333 */
	data->beatFraction = 0x208D5;	/* 133333 */
	data->timePerBeat = 0x7A1200;	/* 8000000 */
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
	data->EVNT = NULL;

	header = READ_BE_UINT32(file);
	size   = 12;
	while (header != CC_EVNT) {
		file += size;
		header = READ_BE_UINT32(file);
		size   = READ_BE_UINT32(file + 4) + 8;
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

static void MPU_StopAllNotes(MSData *data)
{
	uint8 i;

	for (i = 0; i < MAX_NOTES; i++) {
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
	MPU_ResetSequence(data);

	data->playing = 0;
}

uint16 MPU_IsPlaying(uint16 index)
{
	MSData *data;

	if (index == 0xFFFF) return 0xFFFF;

	data = s_mpu_msdata[index];

	return data->playing;
}

uint16 MPU_GetDataSize(void)
{
	return sizeof(MSData);
}

#if defined(_WIN32)
static ThreadStatus WINAPI MPU_ThreadProc(void *data)
{
	VARIABLE_NOT_USED(data);
	Semaphore_Lock(s_mpu_sem);
	while (!Semaphore_TryLock(s_mpu_sem)) {
		msleep(s_mpu_usec / 1000);
		MPU_Interrupt();
	}
	Semaphore_Unlock(s_mpu_sem);
	return 0;
}
#endif /* _WIN32 */

bool MPU_Init(void)
{
	uint8 i;

	if (!midi_init()) return false;

#if defined(_WIN32)
	s_mpu_sem = Semaphore_Create(0);
	if (s_mpu_sem == NULL) {
		Error("Failed to create semaphore\n");
		return false;
	}

	s_mpu_thread = Thread_Create(MPU_ThreadProc, NULL);
	if (s_mpu_thread == NULL) {
		Error("Failed to create thread\n");
		Semaphore_Destroy(s_mpu_sem);
		return false;
	}
#endif /* _WIN32 */

	s_mpu_msdataSize = 0;
	s_mpu_msdataCurrent = 0;
	memset(s_mpu_msdata, 0, sizeof(s_mpu_msdata));

	memset(s_mpu_controls,   0xFF, sizeof(s_mpu_controls));
	memset(s_mpu_programs,   0xFF, sizeof(s_mpu_programs));
	memset(s_mpu_pitchWheel, 0xFF, sizeof(s_mpu_pitchWheel));

	memset(s_mpu_noteOnCount, 0, sizeof(s_mpu_noteOnCount));
	memset(s_mpu_lockStatus, 0, sizeof(s_mpu_lockStatus));

	s_mpuIgnore = true;
	midi_reset();
	s_mpuIgnore = false;

	for (i = 0; i < 9; i++) {
		static const uint8 defaultPrograms[9] = { 68, 48, 95, 78, 41, 3, 110, 122, 255 };
		uint8 chan = i + 1;

		/* default controller/program change
		 * values for startup initialization */
		s_mpu_controls[chan].volume = 127;
		s_mpu_controls[chan].modulation = 0;
		s_mpu_controls[chan].panpot = 64;
		s_mpu_controls[chan].expression = 127;
		s_mpu_controls[chan].sustain = 0;
		s_mpu_controls[chan].patch_bank_sel = 0;
		s_mpu_controls[chan].chan_lock = 0;
		s_mpu_controls[chan].chan_protect = 0;
		s_mpu_controls[chan].voice_protect = 0;

		MPU_Send(0xB0 | chan,   7, s_mpu_controls[chan].volume);        /* 7 = PART_VOLUME */
		MPU_Send(0xB0 | chan,   1, s_mpu_controls[chan].modulation);    /* 1 = MODULATION */
		MPU_Send(0xB0 | chan,  10, s_mpu_controls[chan].panpot);        /* 10 = PANPOT */
		MPU_Send(0xB0 | chan,  11, s_mpu_controls[chan].expression);    /* 11 = EXPRESSION */
		MPU_Send(0xB0 | chan,  64, s_mpu_controls[chan].sustain);       /* 64 = SUSTAIN */
		MPU_Send(0xB0 | chan, 114, s_mpu_controls[chan].patch_bank_sel);/* 114 = PATCH_BANK_SEL */
		MPU_Send(0xB0 | chan, 110, s_mpu_controls[chan].chan_lock);     /* 110 = CHAN_LOCK */
		MPU_Send(0xB0 | chan, 111, s_mpu_controls[chan].chan_protect);  /* 111 = CHAN_PROTECT */
		MPU_Send(0xB0 | chan, 112, s_mpu_controls[chan].voice_protect); /* 112 = VOICE_PROTECT */

		s_mpu_pitchWheel[chan] = 0x4000;
		MPU_Send(0xE0 | chan, 0x00, 0x40);	/* 0xE0 : Pitch Bend change */

		if (defaultPrograms[i] == 0xFF) continue;
		s_mpu_programs[chan] = defaultPrograms[i];
		MPU_Send(0xC0 | chan, defaultPrograms[i], 0);	/* 0xC0 : program change */
	}

	s_mpu_initialized = true;
	return true;
}

void MPU_Uninit(void)
{
	uint16 i;

	if (!s_mpu_initialized) return;

	for (i = 0; i < s_mpu_msdataSize; i++) {
		if (s_mpu_msdata[i] == NULL) continue;
		MPU_Stop(i);
		MPU_ClearData(i);
	}

	s_mpuIgnore = true;
	midi_reset();

	s_mpu_initialized = false;

	midi_uninit();
	s_mpuIgnore = false;

#if defined(_WIN32)
	Semaphore_Destroy(s_mpu_sem);
#endif /* _WIN32 */
}

/**
 * XMIDI.ASM - release_seq
 */
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

/**
 * XMIDI.ASM - set_rel_volume
 * Set relative volume
 * @param volume Target volume (%) to reach
 * @param time Time to reach target volume (in milliseconds)
 */
void MPU_SetVolume(uint16 index, uint16 volume, uint16 time)
{
	MSData *data;
	int16 diff;

	if (index == 0xFFFF) return;

	data = s_mpu_msdata[index];

	data->globalVolumeTarget = volume;	/* volume target */

	if (time == 0) {
		/* immediate */
		data->globalVolume = volume;
		MPU_ApplyVolume(data);
		return;
	}

	diff = data->globalVolumeTarget - data->globalVolume;
	if (diff == 0) return;

	data->globalVolumeIncr = 10 * (uint32)time / (uint16)abs(diff);	/* volume increment per 100us period */
	if (data->globalVolumeIncr == 0) data->globalVolumeIncr = 1;
	data->globalVolumeAcc = 0;	/* vol_accum */
}

#if defined(_WIN32)
void MPU_StartThread(uint32 usec)
{
	s_mpu_usec = usec;
	Semaphore_Unlock(s_mpu_sem);
}

void MPU_StopThread(void)
{
	Semaphore_Unlock(s_mpu_sem);
	Thread_Wait(s_mpu_thread, NULL);
}
#endif /* _WIN32 */
