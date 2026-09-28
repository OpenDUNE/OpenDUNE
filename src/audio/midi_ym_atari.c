/** @file src/audio/midi_ym_atari.c Atari YM2149 output of the MIDI layer :
 *  a 3 voice synth for the Tandy (.TAN) music and sound effects. */

/*
 * Copyright (C) 2026 Neil Rackett
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * YM2149 register handling and voice allocation adapted from the
 * author's STDL library (atarist-stdl, LGPL-2.1-or-later).
 */

/*
 * Dune II's Tandy arrangements were written for 3 square wave voices, the
 * same as the YM2149 has, so the notes are played as they come : the synth
 * only has to share 3 voices between the music and the sound effects.
 *
 * MIDI messages only change the state kept here (keyed notes, channel
 * volumes and pitch bends). YM_Tick(), run from the Timer A interrupt after
 * each step of the sequencer, allocates the voices and writes the registers
 * that changed. Messages sent from the main program arrive while the
 * sequencer holds its ticks back (see MPU_Interrupt()), and s_inSend makes
 * the tick leave the chip alone while one is half done.
 */

#include <stdlib.h>
#include <mint/osbind.h>

#include "types.h"
#include "../os/error.h"

#include "midi_ym_atari.h"

extern long YM_TimerStart(void);	/* atari_ym.s, supervisor mode */
extern long YM_TimerStop(void);

#define YM_SELECT  (*(volatile uint8 *)0xFFFF8800UL)	/* write : select a register, read : its value */
#define YM_DATA    (*(volatile uint8 *)0xFFFF8802UL)
#define MFP_IERA   (*(volatile uint8 *)0xFFFFFA07UL)
#define MFP_TACR   (*(volatile uint8 *)0xFFFFFA19UL)
#define CONTERM    (*(volatile uint8 *)0x484UL)	/* bit 0 : key click, bit 2 : bell */

#define ETV_TERM   0x102	/*!< Setexc() number of the GEMDOS terminate vector. */

#define YM_VOICES     3
#define YM_FX_VOICES  1	/*!< Voices sound effects may take from the music. */
#define YM_SLOTS      16
#define YM_MIXER      0x38	/*!< Mixer : tone on for the 3 voices, noise off. */

#define CHAN_DRUMS    9	/*!< General MIDI percussion : nothing a square wave can play. */
#define CHAN_FX_MASK  0xFC08	/*!< Sound effects : channel 3, and 10-15 where XMIDI locks them. */

#if defined(__GNUC__)
#define YM_BARRIER() __asm__ __volatile__("" ::: "memory")
#else
#define YM_BARRIER()
#endif

/*
 * Generated with :
 *   P = [125000 / (440 * 2 ** ((n - 69) / 12)) for n in range(128)], halved
 *       while above 4095 (notes under the YM's range play an octave up)
 *   F = [round(32768 * 2 ** (-i / 192)) for i in range(16)]
 *   st = lambda db: round(-db / 3)                  (about 3dB a level)
 *   VEL = [0] + [max(0, 15 - st(40 * log10(v / 127))) for v in 1..127]
 *   ATT = [15] + [min(15, st(40 * log10(v / 127))) for v in 1..127]
 */
static const uint16 s_ymPeriods[128] = {
	3822, 3608, 3405, 3214, 3034, 2863, 2703, 2551, 2408, 2273, 2145, 4050,
	3822, 3608, 3405, 3214, 3034, 2863, 2703, 2551, 2408, 2273, 2145, 4050,
	3822, 3608, 3405, 3214, 3034, 2863, 2703, 2551, 2408, 2273, 2145, 2025,
	1911, 1804, 1703, 1607, 1517, 1432, 1351, 1276, 1204, 1136, 1073, 1012,
	956, 902, 851, 804, 758, 716, 676, 638, 602, 568, 536, 506,
	478, 451, 426, 402, 379, 358, 338, 319, 301, 284, 268, 253,
	239, 225, 213, 201, 190, 179, 169, 159, 150, 142, 134, 127,
	119, 113, 106, 100, 95, 89, 84, 80, 75, 71, 67, 63,
	60, 56, 53, 50, 47, 45, 42, 40, 38, 36, 34, 32,
	30, 28, 27, 25, 24, 22, 21, 20, 19, 18, 17, 16,
	15, 14, 13, 13, 12, 11, 11, 10,
};

/** Period factors (1/32768) of 0 to 15 sixteenths of a semitone up. */
static const uint16 s_ymBendFactors[16] = {
	32768, 32650, 32532, 32415, 32298, 32182, 32066, 31950,
	31835, 31720, 31606, 31492, 31379, 31266, 31153, 31041,
};

/** YM level (0-15) of a note velocity. */
static const uint8 s_ymVelocityLevels[128] = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3,
	3, 3, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 6, 7, 7,
	7, 7, 7, 8, 8, 8, 8, 8, 8, 8, 9, 9, 9, 9, 9, 9,
	9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 11, 11, 11, 11, 11,
	11, 11, 11, 11, 11, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
	12, 12, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
	13, 13, 13, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
	14, 14, 14, 14, 14, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15,
};

/** Levels taken off by a channel volume or expression controller. */
static const uint8 s_ymAttenuation[128] = {
	15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 14, 14, 13, 13, 12,
	12, 12, 11, 11, 11, 10, 10, 10, 10, 9, 9, 9, 9, 9, 8, 8,
	8, 8, 8, 7, 7, 7, 7, 7, 7, 7, 6, 6, 6, 6, 6, 6,
	6, 6, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
	3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
	2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
	1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

/** A keyed note. */
typedef struct YMSlot {
	uint8  count;                                           /*!< Times the note is keyed, 0 = free slot. */
	uint8  chan;                                            /*!< MIDI channel. */
	uint8  note;                                            /*!< MIDI note. */
	uint8  velocity;                                        /*!< Velocity of the last key on. */
	uint16 stamp;                                           /*!< Recency of the last key on. */
} YMSlot;

/** A voice of the chip. Only YM_Tick() touches these. */
typedef struct YMVoice {
	int8   slot;                                            /*!< Slot played, -1 = silent. */
	uint8  level;                                           /*!< Level register shadow. */
	uint16 period;                                          /*!< Period registers shadow. */
} YMVoice;

static YMSlot s_ymSlots[YM_SLOTS];
static uint8  s_ymChanVolume[16];                       /*!< Controller 7. */
static uint8  s_ymChanExpression[16];                   /*!< Controller 11. */
static int8   s_ymChanBend[16];                         /*!< Pitch bend, in 1/16 semitone. */
static uint16 s_ymStamp;

static YMVoice s_ymVoices[YM_VOICES];

static volatile uint8 s_ymInSend;                       /*!< A message is being applied. */
static volatile uint8 s_ymDirty;                        /*!< Keyed notes changed : allocate the voices again. */
static volatile uint8 s_ymParams;                       /*!< Volumes or bends changed. */

static void (*s_ymTick)(void);
static bool s_ymOpen;
static uint8 s_ymConterm;
static void (*s_ymOldTerm)(void);

static uint16 YM_IrqOff(void)
{
	uint16 sr;

	__asm__ __volatile__("move.w %%sr,%0\n\tori.w #0x0700,%%sr" : "=d"(sr) :: "memory");
	return sr;
}

static void YM_IrqRestore(uint16 sr)
{
	__asm__ __volatile__("move.w %0,%%sr" :: "d"(sr) : "memory");
}

static void YM_Write(uint8 reg, uint8 value)
{
	YM_SELECT = reg;
	YM_DATA = value;
}

static bool YM_IsEffect(const YMSlot *s)
{
	return ((CHAN_FX_MASK >> s->chan) & 1) != 0;
}

/**
 * Pick the newest keyed slots of one kind (music or sound effect) that are
 * not chosen yet.
 * @param chosen The chosen slots.
 * @param count How many are chosen so far.
 * @param limit How many may be chosen in the end.
 * @param effects Whether to pick sound effects or music.
 * @return How many are chosen now.
 */
static uint8 YM_Choose(int8 *chosen, uint8 count, uint8 limit, bool effects)
{
	while (count < limit) {
		int8 newest = -1;
		uint8 i;

		for (i = 0; i < YM_SLOTS; i++) {
			const YMSlot *s = &s_ymSlots[i];
			uint8 j;

			if (s->count == 0 || YM_IsEffect(s) != effects) continue;
			if (newest >= 0 && (int16)(s->stamp - s_ymSlots[newest].stamp) < 0) continue;

			for (j = 0; j < count && chosen[j] != (int8)i; j++) {}
			if (j == count) newest = i;
		}

		if (newest < 0) break;
		chosen[count++] = newest;
	}

	return count;
}

/**
 * Give the voices to the newest keyed notes : sound effects first, on as
 * many voices as they may take, then the music. A note keeps the voice it
 * has, and a music note an effect pushed out comes back when it ends.
 */
static void YM_Allocate(void)
{
	int8 chosen[YM_VOICES];
	uint8 count;
	uint8 i;
	uint8 v;

	count = YM_Choose(chosen, 0, YM_FX_VOICES, true);
	count = YM_Choose(chosen, count, YM_VOICES, false);

	for (v = 0; v < YM_VOICES; v++) {
		int8 slot = s_ymVoices[v].slot;

		if (slot < 0) continue;

		for (i = 0; i < count && chosen[i] != slot; i++) {}
		if (i == count) {
			s_ymVoices[v].slot = -1;
		} else {
			chosen[i] = -1;
		}
	}

	/* The others take a free voice : effects from C down, music from A up */
	for (i = 0; i < count; i++) {
		bool effect;
		uint8 k;

		if (chosen[i] < 0) continue;

		effect = YM_IsEffect(&s_ymSlots[chosen[i]]);
		for (k = 0; k < YM_VOICES; k++) {
			v = effect ? YM_VOICES - 1 - k : k;
			if (s_ymVoices[v].slot >= 0) continue;
			s_ymVoices[v].slot = chosen[i];
			break;
		}
	}
}

/** Write the registers of the voices that changed. Supervisor mode. */
static void YM_Flush(void)
{
	uint16 periods[YM_VOICES];
	uint8 levels[YM_VOICES];
	uint16 sr;
	uint8 v;

	if (s_ymDirty != 0) YM_Allocate();
	s_ymDirty = 0;
	s_ymParams = 0;

	for (v = 0; v < YM_VOICES; v++) {
		const YMSlot *s;
		int16 pitch;
		int8 level;

		periods[v] = s_ymVoices[v].period;
		levels[v] = 0;
		if (s_ymVoices[v].slot < 0) continue;

		s = &s_ymSlots[s_ymVoices[v].slot];

		pitch = (s->note << 4) + s_ymChanBend[s->chan];
		if (pitch < 0) pitch = 0;
		if (pitch > (127 << 4)) pitch = 127 << 4;
		periods[v] = (uint16)(((uint32)s_ymPeriods[pitch >> 4] * s_ymBendFactors[pitch & 15]) >> 15);

		level = s_ymVelocityLevels[s->velocity] - s_ymAttenuation[s_ymChanVolume[s->chan]] - s_ymAttenuation[s_ymChanExpression[s->chan]];
		levels[v] = (level < 0) ? 0 : level;
	}

	/* TOS may use the chip from its Timer C interrupt, which would move
	 * the selected register between a select and a write. */
	sr = YM_IrqOff();

	for (v = 0; v < YM_VOICES; v++) {
		YMVoice *voice = &s_ymVoices[v];

		if (periods[v] != voice->period) {
			voice->period = periods[v];
			YM_Write(v * 2, periods[v] & 0xFF);
			YM_Write(v * 2 + 1, periods[v] >> 8);
		}

		if (levels[v] != voice->level) {
			voice->level = levels[v];
			YM_Write(8 + v, levels[v]);
		}
	}

	/* Keep the port direction bits TOS set, mend anything that changed the rest */
	YM_SELECT = 7;
	YM_Write(7, (YM_SELECT & 0xC0) | YM_MIXER);

	YM_IrqRestore(sr);
}

/** Silence the chip and forget the register shadows. Supervisor mode. */
static void YM_Silence(void)
{
	uint16 sr;
	uint8 v;

	sr = YM_IrqOff();

	for (v = 0; v < YM_VOICES; v++) {
		YM_Write(8 + v, 0);
		s_ymVoices[v].slot = -1;
		s_ymVoices[v].level = 0;
		s_ymVoices[v].period = 0xFFFF;
	}

	YM_SELECT = 7;
	YM_Write(7, (YM_SELECT & 0xC0) | 0x3F);

	YM_IrqRestore(sr);
}

/**
 * Called at 120Hz by the Timer A interrupt (atari_ym.s) : supervisor mode,
 * on a stack of its own.
 */
void YM_Tick(void)
{
	g_interruptDepth++;

	if (s_ymTick != NULL) s_ymTick();

	if (s_ymInSend == 0 && (s_ymDirty | s_ymParams) != 0) YM_Flush();

	g_interruptDepth--;
}

static void YM_NoteOn(uint8 chan, uint8 note, uint8 velocity)
{
	YMSlot *slot = NULL;
	uint8 i;

	if (chan == CHAN_DRUMS) return;

	for (i = 0; i < YM_SLOTS; i++) {
		YMSlot *s = &s_ymSlots[i];

		if (s->count == 0) {
			if (slot == NULL || slot->count != 0) slot = s;
			continue;
		}

		if (s->chan == chan && s->note == note) {
			slot = s;
			break;
		}

		/* No free slot yet : remember the oldest note */
		if (slot == NULL || (slot->count != 0 && (int16)(s->stamp - slot->stamp) < 0)) slot = s;
	}

	if (slot->count == 0 || slot->chan != chan || slot->note != note) {
		slot->count = 0;
		slot->chan = chan;
		slot->note = note;
	}
	slot->count++;
	slot->velocity = velocity;
	slot->stamp = ++s_ymStamp;

	s_ymDirty = 1;
}

static void YM_NoteOff(uint8 chan, uint8 note)
{
	uint8 i;

	for (i = 0; i < YM_SLOTS; i++) {
		YMSlot *s = &s_ymSlots[i];

		if (s->count == 0 || s->chan != chan || s->note != note) continue;

		s->count--;
		s_ymDirty = 1;
		return;
	}
}

static void YM_ChannelOff(uint8 chan)
{
	uint8 i;

	for (i = 0; i < YM_SLOTS; i++) {
		if (s_ymSlots[i].chan != chan) continue;
		s_ymSlots[i].count = 0;
	}

	s_ymDirty = 1;
}

static void YM_Control(uint8 chan, uint8 control, uint8 value)
{
	switch (control) {
		case 7:	/* PART_VOLUME */
			s_ymChanVolume[chan] = value;
			break;

		case 11:	/* EXPRESSION */
			s_ymChanExpression[chan] = value;
			break;

		case 120:	/* All sound off */
		case 123:	/* All notes off */
			YM_ChannelOff(chan);
			return;

		case 121:	/* Reset all controllers */
			s_ymChanExpression[chan] = 127;
			s_ymChanBend[chan] = 0;
			break;

		default:	/* Nothing a square wave can do with the others */
			return;
	}

	s_ymParams = 1;
}

/**
 * Apply a MIDI message.
 * @param data The message in "packed" format, ie status | (data1 << 8) | (data2 << 16).
 */
void YM_Send(uint32 data)
{
	uint8 status = data & 0xFF;
	uint8 chan = status & 0x0F;
	uint8 data1 = (data >> 8) & 0x7F;
	uint8 data2 = (data >> 16) & 0x7F;

	s_ymInSend = 1;
	YM_BARRIER();

	switch (status & 0xF0) {
		case 0x90:	/* Note On */
			if (data2 != 0) {
				YM_NoteOn(chan, data1, data2);
				break;
			}
			/* Fall through : velocity 0 is a Note Off */

		case 0x80:	/* Note Off */
			YM_NoteOff(chan, data1);
			break;

		case 0xB0:	/* Control change */
			YM_Control(chan, data1, data2);
			break;

		case 0xE0:	/* Pitch bend : +/- 2 semitones */
			s_ymChanBend[chan] = (int8)((((data2 << 7) | data1) - 8192) >> 8);
			s_ymParams = 1;
			break;

		default:	/* Program change, aftertouch, system : no meaning for the chip */
			break;
	}

	YM_BARRIER();
	s_ymInSend = 0;
}

/** Forget every note and controller. */
void YM_Reset(void)
{
	uint8 i;

	s_ymInSend = 1;
	YM_BARRIER();

	for (i = 0; i < YM_SLOTS; i++) s_ymSlots[i].count = 0;

	for (i = 0; i < 16; i++) {
		s_ymChanVolume[i] = 127;
		s_ymChanExpression[i] = 127;
		s_ymChanBend[i] = 0;
	}

	s_ymDirty = 1;

	YM_BARRIER();
	s_ymInSend = 0;
}

/** Supervisor mode : check Timer A is free, and take the chip. */
static long YM_HwOpen(void)
{
	if (MFP_TACR != 0 || (MFP_IERA & 0x20) != 0) return -1;

	/* The key click and bell would fight over the chip */
	s_ymConterm = CONTERM;
	CONTERM &= ~0x05;

	YM_Silence();

	return 0;
}

/** Supervisor mode : stop the clock and silence the chip. */
static long YM_HwStop(void)
{
	YM_TimerStop();
	YM_Silence();

	return 0;
}

/** Supervisor mode : stop the clock and give back the chip. */
static long YM_HwClose(void)
{
	YM_HwStop();

	CONTERM = s_ymConterm;

	return 0;
}

/**
 * GEMDOS terminate vector : leave nothing running if the program ends
 * without YM_Uninit() (a crash, abort()). Supervisor mode.
 */
static void YM_TermHandler(void)
{
	void (*oldTerm)(void) = s_ymOldTerm;

	(void)Setexc(ETV_TERM, oldTerm);

	if (s_ymOpen) {
		s_ymOpen = false;
		YM_HwClose();
	}

	if (oldTerm != NULL) oldTerm();
}

static void YM_Shutdown(void)
{
	if (!s_ymOpen) return;
	s_ymOpen = false;

	Supexec(YM_HwClose);

	if (Setexc(ETV_TERM, -1) == YM_TermHandler) (void)Setexc(ETV_TERM, s_ymOldTerm);
}

bool YM_Init(void)
{
	static bool atexitDone = false;

	if (s_ymOpen) return true;

	YM_Reset();

	if (Supexec(YM_HwOpen) != 0) {
		Warning("YM2149 music needs the MFP Timer A, which is in use : set music_output=midi\n");
		return false;
	}

	s_ymOldTerm = Setexc(ETV_TERM, YM_TermHandler);
	s_ymOpen = true;

	if (!atexitDone) {
		atexitDone = true;
		atexit(YM_Shutdown);
	}

	return true;
}

void YM_Uninit(void)
{
	YM_Shutdown();
}

/**
 * Start calling a function at 120Hz from the Timer A interrupt, followed by
 * an update of the chip.
 * @param tick The function.
 * @return True if the clock started.
 */
bool YM_StartTick(void (*tick)(void))
{
	if (!s_ymOpen) return false;

	s_ymTick = tick;

	if (Supexec(YM_TimerStart) != 0) {
		s_ymTick = NULL;
		Warning("YM2149 music : the MFP Timer A is in use\n");
		return false;
	}

	return true;
}

void YM_StopTick(void)
{
	Supexec(YM_HwStop);
	s_ymTick = NULL;
}
