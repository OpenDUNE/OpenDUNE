/** @file src/audio/midi_ym_atari.c Atari YM2149 output of the MIDI layer :
 *  a 3 voice synth for the General MIDI music and the Tandy sound effects. */

/*
 * Copyright (C) 2026 Neil Rackett
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * YM2149 register handling and voice allocation adapted from the
 * author's STDL library (atarist-stdl, LGPL-2.1-or-later).
 */

/*
 * The General MIDI arrangements have 5 or 6 instruments and drums, the
 * YM2149 3 square wave voices and a noise generator. Each instrument (part)
 * gets one voice before any gets two, the bass first, then the melodic
 * instruments, then the accompaniment, going by each channel's General MIDI
 * program. Notes below C2 play an octave up, and have a short accent, or
 * fade if plucked or struck. The drums are short noise or tone bursts over a
 * free voice, else over the bass (a kick) or the least important note, so the
 * parts play on. The sound effects come from the Tandy arrangements, written
 * for 3 square wave voices : they play on channel 15 (see
 * Driver_Sound_Play()), and take one voice.
 *
 * MIDI messages only change the state kept here (keyed notes, channel
 * programs, volumes and pitch bends, the drum). YM_Tick(), run from the
 * Timer A interrupt after each step of the sequencer, allocates the voices
 * and writes the registers that changed. Messages sent from the main program
 * arrive while the sequencer holds its ticks back (see MPU_Interrupt()), and
 * s_ymInSend makes the tick leave the chip alone while one is half done.
 */

#include <stdlib.h>
#include <mint/osbind.h>
#include <mint/sysvars.h>

#include "types.h"
#include "../os/common.h"
#include "../os/error.h"
#include "../os/math.h"

#include "midi.h"
#include "midi_ym_atari.h"

extern long YM_TimerStart(void);	/* atari_ym.s, supervisor mode */
extern void YM_TimerStop(void);

#define YM_SELECT  (*(volatile uint8 *)0xFFFF8800UL)	/* write : select a register, read : its value */
#define YM_DATA    (*(volatile uint8 *)0xFFFF8802UL)
#define YM_TONES   (PSG_ENABLEA | PSG_ENABLEB | PSG_ENABLEC)	/* mixer bits, set = off */
#define YM_NOISES  (PSG_NOISEA | PSG_NOISEB | PSG_NOISEC)

#define YM_VOICES     3
#define YM_SLOTS      16
#define YM_NOTE_FLOOR 36	/*!< C2 : lower notes play an octave up. */
#define YM_ACCENT     6	/*!< Ticks of the accent starting a note. */
#define YM_SETTLE     30	/*!< Ticks after which a melodic note settles lower. */
#define YM_SWELL      6	/*!< Ticks per level of a pad's swell, over 3 levels. */
#define YM_VIBRATO_DELAY 40	/*!< Ticks before a held note gets a vibrato. */
#define YM_VIBRATO_TOP   80	/*!< Notes from G#5 up get none : the periods are too coarse. */
#define YM_CRASH_OVER 8	/*!< Ticks a cymbal may replace a melody or the bass. */
#define YM_MUSIC_QUIETER 3	/*!< Levels (about 9dB) the music plays under the sound effects and voices. */

#define CHAN_DRUMS    9	/*!< General MIDI percussion. */
#define CHAN_FX_MASK  ((1 << MIDI_YM_FX_CHAN) | 0x7C00)	/*!< Sound effects : on MIDI_YM_FX_CHAN, and 10-14 where XMIDI locks them. */

/*
 * Generated with :
 *   P = [125000 / (440 * 2 ** ((n - 69) / 12)) for n in range(128)], halved
 *       while above 4095
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

/* What a General MIDI program is, for the voice allocation */
#define YM_PAD       1	/*!< Held accompaniment : ensembles, choirs, pads. */
#define YM_LEAD      2	/*!< Melodic instrument. */
#define YM_BASS      3	/*!< Bass line. */
#define YM_EFFECT    4	/*!< Sound effect. */
#define YM_PRIORITY  0x07
#define YM_DECAY     0x08	/*!< Plucked or struck : the note fades. */
#define YM_DRUM      0x10	/*!< Percussion : played as a drum. */

#define L  YM_LEAD
#define LD (YM_LEAD | YM_DECAY)
#define B  YM_BASS
#define P  YM_PAD
#define D  YM_DRUM
static const uint8 s_ymPrograms[128] = {
	LD, LD, LD, LD, LD, LD, LD, LD,	/* Pianos */
	LD, LD, LD, LD, LD, LD, LD, LD,	/* Chromatic percussion */
	L,  L,  L,  L,  L,  L,  L,  L,	/* Organs */
	LD, LD, LD, LD, LD, LD, LD, LD,	/* Guitars */
	B,  B,  B,  B,  B,  B,  B,  B,	/* Basses */
	L,  L,  L,  B,  L,  LD, LD, D,	/* Strings, harp, timpani */
	P,  P,  P,  P,  P,  P,  P,  LD,	/* Ensembles, choirs, orchestra hit */
	L,  L,  L,  L,  L,  L,  L,  L,	/* Brass */
	L,  L,  L,  L,  L,  L,  L,  L,	/* Reeds */
	L,  L,  L,  L,  L,  L,  L,  L,	/* Pipes */
	L,  L,  L,  L,  L,  L,  L,  L,	/* Synth leads */
	P,  P,  P,  P,  P,  P,  P,  P,	/* Synth pads */
	P,  P,  P,  P,  P,  P,  P,  P,	/* Synth effects */
	LD, LD, LD, LD, LD, L,  L,  L,	/* Ethnic */
	D,  D,  D,  D,  D,  D,  D,  D,	/* Percussive */
	0,  0,  0,  0,  0,  0,  0,  0,	/* Sound effects : left out */
};
#undef L
#undef LD
#undef B
#undef P
#undef D

enum {
	DRUM_KICK,
	DRUM_SNARE,
	DRUM_CLAP,
	DRUM_TOM,	/* the strong ones above : a weaker one does not cut them */
	DRUM_HIHAT,
	DRUM_OPEN_HIHAT,
	DRUM_CYMBAL,
	DRUM_CLICK
};

/** How a drum sounds. */
typedef struct YMDrumKind {
	uint8  noise;                                           /*!< Noise period, 0 = no noise. */
	uint8  ticks;                                           /*!< Length. */
	uint8  fade;                                            /*!< Level lost per tick, in 1/4. */
	int8   level;                                           /*!< Level added to the velocity's. */
	uint16 period;                                          /*!< Tone period, 0 = no tone. */
	uint16 sweep;                                           /*!< Period added per tick, 1 = 1/16 of the period. */
} YMDrumKind;

static const YMDrumKind s_ymDrumKinds[] = {
	{  0,  8,  4,  0, 400, 160 },	/* Kick : a falling tone */
	{ 10, 10,  5,  0,   0,   0 },	/* Snare */
	{  6,  5,  8, -1,   0,   0 },	/* Clap */
	{  0, 12,  4,  0, 700,   1 },	/* Tom : a falling tone */
	{  1,  3, 10, -3,   0,   0 },	/* Closed hi-hat */
	{  1, 14,  3, -3,   0,   0 },	/* Open hi-hat, ride */
	{  2, 36,  1, -1,   0,   0 },	/* Cymbal */
	{  4,  4,  8, -2,   0,   0 },	/* Other percussion : a click */
};

/** Drum of the General MIDI percussion notes 35 to 81 (hi-hat outside). */
static const uint8 s_ymDrumNotes[47] = {
	DRUM_KICK, DRUM_KICK, DRUM_CLAP, DRUM_SNARE, DRUM_CLAP, DRUM_SNARE,	/* 35 */
	DRUM_TOM, DRUM_HIHAT, DRUM_TOM, DRUM_HIHAT, DRUM_TOM, DRUM_OPEN_HIHAT,	/* 41 */
	DRUM_TOM, DRUM_TOM, DRUM_CYMBAL, DRUM_TOM, DRUM_OPEN_HIHAT, DRUM_CYMBAL,	/* 47 */
	DRUM_OPEN_HIHAT, DRUM_HIHAT, DRUM_CYMBAL, DRUM_CLICK, DRUM_CYMBAL, DRUM_CLICK,	/* 53 */
	DRUM_OPEN_HIHAT, DRUM_CLICK, DRUM_CLICK, DRUM_CLICK, DRUM_CLICK, DRUM_CLICK,	/* 59 */
	DRUM_CLICK, DRUM_CLICK, DRUM_CLICK, DRUM_CLICK, DRUM_HIHAT, DRUM_HIHAT,	/* 65 */
	DRUM_CLICK, DRUM_CLICK, DRUM_HIHAT, DRUM_HIHAT, DRUM_CLICK, DRUM_CLICK,	/* 71 */
	DRUM_CLICK, DRUM_CLICK, DRUM_CLICK, DRUM_HIHAT, DRUM_HIHAT,	/* 77 */
};

/*
 * Level (in YM levels) of each General MIDI program at C1 C2 .. C7, next to a
 * lead instrument : the perceived (A-weighted) loudness of the program with
 * the GeneralUser GS SoundFont, minus that of the square wave the YM plays for
 * the note, over 3dB a level. Deep strings and pads sit in the background,
 * high notes, where square waves are harshest, lower.
 */
static const int8 s_ymLoudness[128][7] = {
	{ 0,  1,  1, -1, -2, -4, -8}, { 0,  1,  0, -1, -2, -4, -7},
	{-2, -1, -1, -1, -3, -2, -3}, { 0,  1,  0, -1, -2, -4, -7},
	{-4, -1, -2,  0, -1, -1, -2}, {-3, -2, -2, -1, -2, -2, -2},
	{-1,  0,  0, -2, -3, -2, -4}, { 1,  1,  1,  0,  0, -1, -3},
	{-8, -4, -2, -1, -2, -2, -3}, {-2,  0,  0, -1, -2, -5, -6},
	{-7, -4, -3, -3, -3, -4, -5}, { 0,  1,  1,  0,  0,  0,  0},
	{-1, -2, -2, -1, -2, -4, -7}, {-1, -2, -4, -5, -8, -8, -8},
	{ 0,  2,  2,  1, -1, -2, -4}, {-1,  0,  0, -2, -2, -5, -4},
	{-3,  0,  0, -1, -1, -1, -1}, {-3, -1, -1,  0, -1, -1, -1},
	{-3, -1,  0, -1, -1, -1,  0}, {-2, -1,  0,  0, -1, -1, -2},
	{-1,  0,  0,  1, -1,  0, -4}, {-2,  0,  0, -1, -1, -1, -2},
	{-8, -3, -1,  0, -1,  0,  0}, {-2,  0,  0,  0, -1,  0,  0},
	{ 0,  0,  0, -2, -3, -4, -4}, { 0,  0, -2, -1, -2, -4, -6},
	{-2,  0, -1, -2, -1, -2, -2}, {-2,  0,  0,  0, -1, -2, -3},
	{-3, -1, -6, -7, -8, -8, -8}, { 1,  2,  1,  0,  0,  0,  1},
	{ 2,  2,  2,  1,  1,  0, -1}, {-2,  2,  2,  2,  2,  1, -4},
	{-3, -2, -2, -3, -3, -4, -7}, {-2,  0,  0,  0, -1, -2, -5},
	{-2,  0, -1, -2, -3, -3, -5}, {-1, -1,  1,  1,  0, -1, -8},
	{-1, -1,  0,  0, -1, -2, -8}, {-1, -1, -2, -2, -5, -7, -8},
	{-1,  0,  0,  0, -1, -2, -6}, { 0,  1, -1, -2, -3, -8, -8},
	{-4, -1,  1,  2,  1,  0, -1}, { 0,  2,  1, -1, -1, -1, -4},
	{-2,  1,  0,  0,  0, -1,  0}, {-2, -1, -1,  0,  0, -1, -1},
	{-2,  0, -1, -1, -2, -1, -2}, {-7, -4, -4, -5, -7, -8, -8},
	{-4, -2,  0, -1, -2, -2, -6}, {-1,  0, -1, -1, -3, -4, -8},
	{-2,  0,  0,  0, -1, -1, -2}, {-2,  0, -1, -1, -2, -1, -2},
	{-2, -1,  0, -1, -1, -2, -3}, {-6, -6, -4, -3, -4, -4, -5},
	{-3, -1, -1, -1, -1, -1, -1}, {-4, -2, -1, -1,  0, -1,  0},
	{-4, -3, -2, -2, -2, -2, -1}, {-4, -2,  0, -1, -2, -5, -8},
	{-3,  1,  1,  1,  1, -2, -3}, {-1,  1,  1,  1,  0,  0,  0},
	{-1,  0,  1,  1,  1, -3, -5}, {-2,  1, -1, -2,  0, -2, -2},
	{-2,  1,  2,  2,  1,  1,  1}, {-1,  2,  2,  1,  0,  0, -1},
	{-1,  0,  0,  0, -1, -1, -1}, {-1,  0,  0, -1,  0, -1, -1},
	{-7, -1,  0, -1,  0,  1,  0}, { 0,  1,  1,  0,  0,  1,  1},
	{-1,  1,  1,  1,  1, -1, -1}, { 0,  1,  0,  0,  0,  0, -1},
	{-3,  1,  1,  0,  0,  1,  1}, {-6, -1,  0,  0,  0,  1,  1},
	{ 1,  2,  2,  2,  1,  0,  0}, {-6,  1,  2,  1,  1,  1,  1},
	{-8, -6, -3,  0,  1,  2,  1}, {-8, -2,  0,  0,  1,  2,  0},
	{-8, -5, -2, -1,  0,  1,  1}, {-8, -5, -2, -1,  0,  0,  0},
	{-1, -1, -2, -1,  0,  0, -2}, {-1,  2,  2,  0, -2, -1, -2},
	{-6, -2,  0,  2,  2,  2,  2}, {-8, -2,  0,  1,  1,  2,  2},
	{-1,  0,  0,  0,  0, -1, -1}, {-1,  0,  0,  0,  0,  0, -1},
	{ 0,  0,  0,  1,  1,  1, -3}, {-3, -2, -1,  0, -1, -1, -1},
	{ 0,  0,  0,  0, -1, -1, -4}, {-2,  0,  1,  1,  2,  0,  1},
	{-2, -1, -1, -1, -1, -2, -1}, {-1,  0,  0,  1,  0,  1,  1},
	{-1,  0,  0,  0,  0, -1, -2}, {-4, -2, -3, -4, -6, -5, -6},
	{-2, -1, -1, -1, -1, -2, -2}, {-2,  0,  0,  0, -1, -1, -1},
	{-2, -2, -2,  0, -2, -3, -4}, { 0,  1, -2,  0, -1, -1, -2},
	{-2, -1, -1, -1, -2, -3, -3}, {-3, -2, -2, -3, -3, -4, -4},
	{-1, -2, -2, -2, -2, -2, -3}, {-2, -2, -1, -2, -1, -6, -8},
	{-2, -1, -1, -1,  0,  0,  0}, {-1,  0,  0,  0, -1, -3, -4},
	{-1,  0,  1,  0,  0,  0, -1}, {-4, -7, -8, -6, -5, -3, -5},
	{-1,  0,  1,  1,  0, -1, -3}, {-3, -1,  0,  1,  0,  1,  0},
	{ 1,  2,  2,  1, -2, -5, -8}, { 0,  0, -1, -2, -5, -8, -8},
	{-3, -3, -3, -4, -5, -8, -8}, { 2,  2,  1,  0, -2, -6, -8},
	{-4, -5, -4, -3, -3, -2, -2}, {-1,  1,  1,  2,  1,  0, -2},
	{-4,  0,  1,  2,  0,  0, -1}, { 1,  2,  2,  2,  0, -1, -2},
	{-3,  0,  0,  0, -1, -2, -4}, {-2, -1, -2, -5, -8, -8, -8},
	{-3,  1,  2,  0, -3, -8, -8}, {-7, -8, -8, -8, -8, -8, -8},
	{-3, -3, -3, -4, -5, -7, -4}, {-5, -5, -6, -6, -8, -8, -8},
	{-2, -3, -5, -6, -8, -8, -8}, {-4, -3, -4, -5, -5, -5, -5},
	{ 1,  1,  0, -3, -6, -8, -8}, {-8, -8, -8, -8, -8, -8, -8},
	{-2,  0, -1, -2, -4, -5, -5}, { 2,  2,  1,  0, -2, -3, -3},
	{ 2,  2,  1,  0, -2, -2, -2}, {-7, -8, -8, -8, -8, -8, -8},
	{-4, -1, -2, -3, -4, -5, -5}, { 2,  1, -1, -3, -5, -7, -8},
};

/** Vibrato, in 1/16 semitone. */
static const int8 s_ymVibrato[8] = { 0, 1, 2, 1, 0, -1, -2, -1 };

/** A keyed note. */
typedef struct YMSlot {
	uint8  count;                                           /*!< Times the note is keyed, 0 = free slot. */
	uint8  chan;                                            /*!< MIDI channel. */
	uint8  note;                                            /*!< MIDI note. */
	uint8  velocity;                                        /*!< Velocity of the last key on. */
	uint8  kind;                                            /*!< YM_PAD .. YM_EFFECT, and YM_DECAY. */
	int8   level;                                           /*!< Level of the velocity on the channel. */
	uint16 stamp;                                           /*!< Recency of the last key on. */
	uint16 tick;                                            /*!< Tick of the last key on. */
} YMSlot;

/** The drum playing, over a voice. */
typedef struct YMDrum {
	uint8  ticks;                                           /*!< Length, 0 = none. */
	uint8  kind;                                            /*!< DRUM_KICK ... */
	uint8  chan;                                            /*!< MIDI channel. */
	uint8  level;                                           /*!< Starting level, in 1/4. */
	uint16 period;                                          /*!< Starting tone period, 0 = no tone. */
	uint16 sweep;                                           /*!< Period added per tick. */
	uint16 tick;                                            /*!< Tick it started. */
} YMDrum;

/** A voice of the chip. Only YM_Tick() touches these. */
typedef struct YMVoice {
	int8   slot;                                            /*!< Slot played, -1 = none. */
	uint8  level;                                           /*!< Level register shadow. */
	int8   noteLevel;                                       /*!< Level of the note, before its envelope. */
	int8   vibrato;                                         /*!< Vibrato the period was computed with. */
	uint16 period;                                          /*!< Period registers shadow. */
	uint16 notePeriod;                                      /*!< Period of the note. */
} YMVoice;

static YMSlot s_ymSlots[YM_SLOTS];
static uint8  s_ymChanProgram[16];
static uint8  s_ymChanVolume[16];                       /*!< Controller 7. */
static uint8  s_ymChanExpression[16];                   /*!< Controller 11. */
static int8   s_ymChanBend[16];                         /*!< Pitch bend, in 1/16 semitone. */
static uint16 s_ymStamp;
static YMDrum s_ymDrum;

static YMVoice s_ymVoices[YM_VOICES];
static uint8   s_ymNoise;                               /*!< Noise period register shadow. */
static uint8   s_ymMixer;                               /*!< Mixer register shadow, without the port bits. */
static volatile uint16 s_ymTicks;

static volatile uint8 s_ymInSend;                       /*!< A message is being applied. */
static volatile uint8 s_ymDirty;                        /*!< Keyed notes changed : allocate the voices again. */
static volatile uint8 s_ymParams;                       /*!< Volumes, bends or the drum changed. */
static uint8 s_ymActive;                                /*!< A drum or an envelope : update at s_ymWake. */
static uint16 s_ymWake;                                 /*!< Tick of the next envelope step. */

static void (* volatile s_ymTick)(void);                /*!< Called at each tick, before the update. */
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

/** Write the mixer, keeping the port direction bits TOS set. */
static void YM_WriteMixer(uint8 mixer)
{
	YM_SELECT = PSG_MODE;
	YM_Write(PSG_MODE, (YM_SELECT & (PSG_PRTAOUT | PSG_PRTBOUT)) | mixer);
}

/** Level (0-15, or less) of a velocity on a channel. */
static int8 YM_Level(uint8 chan, uint8 velocity)
{
	int8 level = s_ymVelocityLevels[velocity] - s_ymAttenuation[s_ymChanVolume[chan]] - s_ymAttenuation[s_ymChanExpression[chan]];

	if (((CHAN_FX_MASK >> chan) & 1) == 0) level -= YM_MUSIC_QUIETER;
	return level;
}

/** Whether a part plays a note before another : a bass its lowest, the others their highest. */
static bool YM_NoteFirst(uint8 kind, uint8 note1, uint8 note2)
{
	return ((kind & YM_PRIORITY) == YM_BASS) ? note1 < note2 : note1 > note2;
}

/**
 * Whether a keyed note goes before another : higher priority, then louder,
 * then for a bass the lower note and for the others the higher, then newer.
 */
static bool YM_Before(const YMSlot *s1, const YMSlot *s2)
{
	uint8 p1 = s1->kind & YM_PRIORITY;
	uint8 p2 = s2->kind & YM_PRIORITY;

	if (p1 != p2) return p1 > p2;
	if (s1->level != s2->level) return s1->level > s2->level;

	if (s1->note != s2->note) return YM_NoteFirst(s1->kind, s1->note, s2->note);

	return (int16)(s1->stamp - s2->stamp) > 0;
}

/**
 * Pick the best of the candidate slots that is not chosen yet.
 * @param candidates Slots, -1 = none.
 * @param n How many candidates.
 * @param chosen The chosen slots.
 * @param count How many are chosen.
 * @return The best slot, or -1.
 */
static int8 YM_Best(const int8 *candidates, uint8 n, const int8 *chosen, uint8 count)
{
	int8 best = -1;
	uint8 i;

	for (i = 0; i < n; i++) {
		int8 c = candidates[i];
		uint8 j;

		if (c < 0) continue;
		for (j = 0; j < count && chosen[j] != c; j++) {}
		if (j != count) continue;

		if (best < 0 || YM_Before(&s_ymSlots[c], &s_ymSlots[best])) best = c;
	}

	return best;
}

/**
 * Share the voices : the newest sound effect note takes one, then the music
 * gets one voice per part (instrument), the bass first, then the melodic
 * instruments, then the accompaniment, and only then a second note of a
 * chord. A part plays its lowest note if a bass, else its highest.
 * A note keeps the voice it has.
 */
static void YM_Allocate(void)
{
	int8 chosen[YM_VOICES];
	int8 parts[16];
	int8 others[YM_SLOTS];
	int8 effect = -1;
	uint8 count = 0;
	uint8 i;
	uint8 v;

	for (i = 0; i < lengthof(parts); i++) parts[i] = -1;

	for (i = 0; i < YM_SLOTS; i++) {
		const YMSlot *s = &s_ymSlots[i];
		int8 part;

		others[i] = -1;
		if (s->count == 0) continue;

		if ((s->kind & YM_PRIORITY) == YM_EFFECT) {
			if (effect < 0 || (int16)(s->stamp - s_ymSlots[effect].stamp) > 0) effect = i;
			continue;
		}

		others[i] = i;
		part = parts[s->chan];
		if (part < 0 || YM_NoteFirst(s->kind, s->note, s_ymSlots[part].note)) parts[s->chan] = i;
	}

	if (effect >= 0) chosen[count++] = effect;

	while (count < YM_VOICES) {
		int8 best = YM_Best(parts, lengthof(parts), chosen, count);

		if (best < 0) best = YM_Best(others, YM_SLOTS, chosen, count);
		if (best < 0) break;
		chosen[count++] = best;
	}

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
		uint8 k;

		if (chosen[i] < 0) continue;

		for (k = 0; k < YM_VOICES; k++) {
			v = (chosen[i] == effect) ? YM_VOICES - 1 - k : k;
			if (s_ymVoices[v].slot >= 0) continue;
			s_ymVoices[v].slot = chosen[i];
			break;
		}
	}
}

/**
 * The voice a drum sounds on : a free one, else for a kick or a tom the bass,
 * else the one playing the least important note.
 */
static uint8 YM_DrumVoice(void)
{
	uint8 host = 0;
	uint8 hostPriority = 0xFF;
	uint8 v;

	for (v = YM_VOICES; v-- > 0;) {
		int8 slot = s_ymVoices[v].slot;
		uint8 priority;

		if (slot < 0) return v;

		priority = s_ymSlots[slot].kind & YM_PRIORITY;
		/* A kick or tom goes on the bass : rank it first */
		if (s_ymDrum.period != 0 && priority == YM_BASS) priority = 0;
		if (priority < hostPriority) {
			host = v;
			hostPriority = priority;
		}
	}

	return host;
}

/**
 * Ask for an update in some ticks (the soonest asked wins).
 * @param ticks The ticks, rounded up to a multiple of @p grid.
 * @param grid 2 or 4 : updates asked for around the same time are made together.
 */
static void YM_WakeIn(uint16 ticks, uint16 grid)
{
	uint16 wake = (s_ymTicks + ticks + grid - 1) & ~(grid - 1);

	if (s_ymActive == 0 || (int16)(wake - s_ymWake) < 0) s_ymWake = wake;
	s_ymActive = 1;
}

/**
 * Update the voices, and write the registers that changed. Supervisor mode.
 * Not inlined, so the ticks with nothing to update skip saving its registers.
 */
static void __attribute__((noinline)) YM_Flush(void)
{
	uint16 periods[YM_VOICES];
	uint8 levels[YM_VOICES];
	uint8 notes = s_ymDirty | s_ymParams;
	uint8 mixer = YM_TONES | YM_NOISES;
	uint16 sr;
	uint8 v;

	if (s_ymDirty != 0) YM_Allocate();
	s_ymDirty = 0;
	s_ymParams = 0;
	s_ymActive = 0;

	for (v = 0; v < YM_VOICES; v++) {
		YMVoice *voice = &s_ymVoices[v];
		const YMSlot *s;
		uint16 age;
		uint8 priority;
		int8 vibrato;
		int8 level;

		periods[v] = voice->period;
		levels[v] = 0;

		/* Tone on : a silent voice has level 0 */
		mixer &= ~(PSG_ENABLEA << v);
		if (voice->slot < 0) continue;

		s = &s_ymSlots[voice->slot];
		age = (uint16)(s_ymTicks - s->tick);
		priority = s->kind & YM_PRIORITY;

		/* A held melodic note gets a vibrato after a while */
		vibrato = 0;
		if ((s->kind & YM_DECAY) == 0 && (priority == YM_LEAD || priority == YM_PAD) && s->note < YM_VIBRATO_TOP) {
			if (age < YM_VIBRATO_DELAY) {
				YM_WakeIn(YM_VIBRATO_DELAY - age, 4);
			} else {
				vibrato = s_ymVibrato[(((age - YM_VIBRATO_DELAY) * 3) >> 3) & 7];
				YM_WakeIn(4, 4);
			}
		}

		/* The note, its bend and its channel's volume only change with a message */
		if (notes != 0 || vibrato != voice->vibrato) {
			uint8 note = s->note;
			int16 pitch;

			/* A square wave below C2 is a buzz more than a note */
			while (note < YM_NOTE_FLOOR) note += 12;

			pitch = clamp((note << 4) + s_ymChanBend[s->chan] + vibrato, 0, 127 << 4);
			voice->notePeriod = (uint16)(((uint32)s_ymPeriods[pitch >> 4] * s_ymBendFactors[pitch & 15]) >> 15);
			voice->vibrato = vibrato;
		}

		if (notes != 0) {
			uint8 note = s->note;
			uint8 octave = 0;

			for (; note >= 30 && octave < 6; note -= 12) octave++;
			voice->noteLevel = YM_Level(s->chan, s->velocity);
			if (priority != YM_EFFECT) voice->noteLevel += s_ymLoudness[s_ymChanProgram[s->chan]][octave];
		}

		periods[v] = voice->notePeriod;
		level = voice->noteLevel;

		/* Envelopes : plucked and struck notes fade, the others have an accent, pads swell */
		if ((s->kind & YM_DECAY) != 0) {
			uint16 fade = age >> 4;

			if (fade < 6) {
				YM_WakeIn(16 - (age & 15), 4);
			} else {
				fade = 6;
			}
			level -= fade;
		} else {
			switch (priority) {
				case YM_PAD:
					level--;
					if (age < YM_SWELL) {
						level -= 3;
						YM_WakeIn(YM_SWELL - age, 4);
					} else if (age < YM_SWELL * 2) {
						level -= 2;
						YM_WakeIn(YM_SWELL * 2 - age, 4);
					} else if (age < YM_SWELL * 3) {
						level -= 1;
						YM_WakeIn(YM_SWELL * 3 - age, 4);
					}
					break;

				case YM_LEAD:
					if (age < YM_SETTLE) {
						YM_WakeIn(YM_SETTLE - age, 4);
					} else {
						level--;
					}
					/* Fall through : the accent */

				case YM_BASS:
					if (age < YM_ACCENT) {
						YM_WakeIn(YM_ACCENT - age, 4);
					} else {
						level--;
					}
					break;

				default: break;
			}
		}
		levels[v] = max(level, 0);
	}

	/* A drum sounds over a voice, going by its age : updated at 60Hz */
	if (s_ymDrum.ticks != 0) {
		const YMDrumKind *k = &s_ymDrumKinds[s_ymDrum.kind];
		uint16 age = (uint16)(s_ymTicks - s_ymDrum.tick);

		uint16 fade = (uint16)k->fade * age;
		uint8 drumLevel = (s_ymDrum.level > fade) ? (s_ymDrum.level - fade) >> 2 : 0;

		if (age >= s_ymDrum.ticks || drumLevel == 0) {
			s_ymDrum.ticks = 0;	/* over, or faded out : the voice plays its note again */
		} else {

			v = YM_DrumVoice();
			if (s_ymDrum.period != 0) {
				/* A kick or tom : its own tone */
				periods[v] = min(s_ymDrum.period + s_ymDrum.sweep * age, 4095);
				levels[v] = drumLevel;
				if (k->noise != 0) mixer &= ~(PSG_NOISEA << v);
			} else {
				/* Noise : on a free voice, or instead of the least important
				 * note (noise over a tone would sound its pitch), a cymbal
				 * only briefly instead of a melody or the bass */
				int8 slot = s_ymVoices[v].slot;

				if (slot < 0 || age < YM_CRASH_OVER || (s_ymSlots[slot].kind & YM_PRIORITY) < YM_LEAD || s_ymDrum.kind < DRUM_OPEN_HIHAT) {
					mixer |= PSG_ENABLEA << v;
					mixer &= ~(PSG_NOISEA << v);
					levels[v] = drumLevel;
				}
			}

			YM_WakeIn(min(s_ymDrum.ticks - age, 2), 2);
		}
	}

	/* TOS may use the chip from its Timer C interrupt, which would move
	 * the selected register between a select and a write. */
	sr = YM_IrqOff();

	for (v = 0; v < YM_VOICES; v++) {
		YMVoice *voice = &s_ymVoices[v];

		if (periods[v] != voice->period) {
			voice->period = periods[v];
			YM_Write(PSG_APITCHLOW + v * 2, periods[v] & 0xFF);
			YM_Write(PSG_APITCHHIGH + v * 2, periods[v] >> 8);
		}

		if (levels[v] != voice->level) {
			voice->level = levels[v];
			YM_Write(PSG_AVOLUME + v, levels[v]);
		}
	}

	if ((mixer & YM_NOISES) != YM_NOISES && s_ymDrumKinds[s_ymDrum.kind].noise != s_ymNoise) {
		s_ymNoise = s_ymDrumKinds[s_ymDrum.kind].noise;
		YM_Write(PSG_NOISEPITCH, s_ymNoise);
	}

	if (mixer != s_ymMixer) {
		s_ymMixer = mixer;
		YM_WriteMixer(mixer);
	}

	YM_IrqRestore(sr);
}

/** Silence the chip and forget the register shadows. Supervisor mode. */
static void YM_Silence(void)
{
	uint16 sr;
	uint8 v;

	sr = YM_IrqOff();

	for (v = 0; v < YM_VOICES; v++) {
		YM_Write(PSG_AVOLUME + v, 0);
		s_ymVoices[v].slot = -1;
		s_ymVoices[v].level = 0;
		s_ymVoices[v].period = 0xFFFF;
	}
	s_ymNoise = 0xFF;
	s_ymMixer = 0xFF;

	YM_WriteMixer(YM_TONES | YM_NOISES);

	YM_IrqRestore(sr);
}

/**
 * Called at 120Hz by the Timer A interrupt (atari_ym.s) : supervisor mode,
 * on a stack of its own.
 */
void YM_Tick(void)
{
	void (*tick)(void);

	g_interruptDepth++;
	s_ymTicks++;

	tick = s_ymTick;
	if (tick != NULL) tick();

	if (s_ymInSend == 0 && ((s_ymDirty | s_ymParams) != 0 || (s_ymActive != 0 && (int16)(s_ymTicks - s_ymWake) >= 0))) YM_Flush();

	g_interruptDepth--;
}

static void YM_DrumHit(uint8 chan, uint8 note, uint8 velocity, uint8 kind)
{
	const YMDrumKind *k = &s_ymDrumKinds[kind];
	int8 level;

	/* A hi-hat does not cut a kick or a snare short */
	if (s_ymDrum.ticks != 0 && s_ymDrum.kind <= DRUM_TOM && kind > DRUM_TOM) return;

	level = YM_Level(chan, velocity) + k->level;
	if (level <= 0) return;

	s_ymDrum.kind   = kind;
	s_ymDrum.chan   = chan;
	s_ymDrum.level  = level << 2;
	s_ymDrum.period = k->period;
	if (kind == DRUM_TOM && chan != CHAN_DRUMS) {
		/* A timpani is tuned */
		while (note < YM_NOTE_FLOOR) note += 12;
		s_ymDrum.period = s_ymPeriods[note];
	}
	s_ymDrum.sweep  = (k->sweep == 1) ? (s_ymDrum.period >> 4) : k->sweep;
	s_ymDrum.ticks  = k->ticks;
	s_ymDrum.tick   = s_ymTicks;
	s_ymParams = 1;
}

static void YM_NoteOn(uint8 chan, uint8 note, uint8 velocity)
{
	YMSlot *slot = NULL;
	YMSlot *unused = NULL;
	YMSlot *oldest = NULL;
	uint8 kind;
	uint8 i;

	if (((CHAN_FX_MASK >> chan) & 1) != 0) {
		kind = YM_EFFECT;
	} else if (chan == CHAN_DRUMS) {
		YM_DrumHit(chan, note, velocity, (note >= 35 && note < 35 + lengthof(s_ymDrumNotes)) ? s_ymDrumNotes[note - 35] : DRUM_HIHAT);
		return;
	} else {
		uint8 program = s_ymChanProgram[chan];

		kind = s_ymPrograms[program];
		if ((kind & YM_DRUM) != 0) {
			/* Timpani, taiko / melodic tom / synth drum, reverse cymbal, or bells and blocks */
			YM_DrumHit(chan, note, velocity, (program == 47) ? DRUM_TOM : (program >= 116 && program <= 118) ? DRUM_KICK : (program == 119) ? DRUM_CYMBAL : DRUM_HIHAT);
			return;
		}
		if (kind == 0) return;
	}

	/* The note's slot if it is keyed already, else a free one, else the oldest note's */
	for (i = 0; i < YM_SLOTS && slot == NULL; i++) {
		YMSlot *s = &s_ymSlots[i];

		if (s->count == 0) {
			if (unused == NULL) unused = s;
		} else if (s->chan == chan && s->note == note) {
			slot = s;
		} else if (oldest == NULL || (int16)(s->stamp - oldest->stamp) < 0) {
			oldest = s;
		}
	}

	if (slot == NULL) {
		slot = (unused != NULL) ? unused : oldest;
		slot->count = 0;
		slot->chan = chan;
		slot->note = note;
	}
	slot->count++;
	slot->velocity = velocity;
	slot->level = YM_Level(chan, velocity);
	slot->kind = kind;
	slot->stamp = ++s_ymStamp;
	slot->tick = s_ymTicks;

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

	if (s_ymDrum.chan == chan) s_ymDrum.ticks = 0;

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
	COMPILER_BARRIER();

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

		case 0xC0:	/* Program change */
			s_ymChanProgram[chan] = data1;
			break;

		case 0xE0:	/* Pitch bend : +/- 2 semitones */
			s_ymChanBend[chan] = (int8)((((data2 << 7) | data1) - 8192) >> 8);
			s_ymParams = 1;
			break;

		default:	/* Aftertouch, system : no meaning for the chip */
			break;
	}

	COMPILER_BARRIER();
	s_ymInSend = 0;
}

/** Forget every note and controller. */
void YM_Reset(void)
{
	uint8 i;

	s_ymInSend = 1;
	COMPILER_BARRIER();

	for (i = 0; i < YM_SLOTS; i++) s_ymSlots[i].count = 0;

	for (i = 0; i < 16; i++) {
		s_ymChanProgram[i] = 0;
		s_ymChanVolume[i] = 127;
		s_ymChanExpression[i] = 127;
		s_ymChanBend[i] = 0;
	}

	s_ymDrum.ticks = 0;
	s_ymDirty = 1;

	COMPILER_BARRIER();
	s_ymInSend = 0;
}

/** Supervisor mode : start the clock if Timer A is free, and take the chip. */
static long YM_HwOpen(void)
{
	uint16 sr;

	/* No tick before the chip is silent */
	sr = YM_IrqOff();

	if (YM_TimerStart() != 0) {
		YM_IrqRestore(sr);
		return -1;
	}

	/* The key click and bell would fight over the chip */
	s_ymConterm = *conterm;
	*conterm &= ~0x05;

	YM_Silence();

	YM_IrqRestore(sr);
	return 0;
}

/** Supervisor mode : stop the clock, and give back the chip silent. */
static long YM_HwClose(void)
{
	YM_TimerStop();
	YM_Silence();

	*conterm = s_ymConterm;

	return 0;
}

/**
 * GEMDOS terminate vector : leave nothing running if the program ends
 * without YM_Uninit() (a crash, abort()). Supervisor mode.
 */
static void YM_TermHandler(void)
{
	void (*oldTerm)(void) = s_ymOldTerm;

	(void)Setexc(VEC_TERMINATE, oldTerm);

	if (s_ymOpen) {
		s_ymOpen = false;
		YM_HwClose();
	}

	if (oldTerm != NULL) oldTerm();
}

bool YM_Init(void)
{
	static bool atexitDone = false;

	if (s_ymOpen) return true;

	YM_Reset();

	if (Supexec(YM_HwOpen) != 0) {
		Warning("YM2149 music needs the MFP Timer A, which is in use : music goes to the MIDI port\n");
		return false;
	}

	s_ymOldTerm = Setexc(VEC_TERMINATE, YM_TermHandler);
	s_ymOpen = true;

	if (!atexitDone) {
		atexitDone = true;
		atexit(YM_Uninit);
	}

	return true;
}

void YM_Uninit(void)
{
	if (!s_ymOpen) return;
	s_ymOpen = false;

	Supexec(YM_HwClose);

	if (Setexc(VEC_TERMINATE, VEC_INQUIRE) == YM_TermHandler) (void)Setexc(VEC_TERMINATE, s_ymOldTerm);
}

/**
 * Call a function at 120Hz from the Timer A interrupt, before each update of
 * the chip.
 * @param tick The function.
 * @return True if the chip is in use, and the interrupt calls it.
 */
bool YM_StartTick(void (*tick)(void))
{
	if (!s_ymOpen) return false;

	s_ymTick = tick;
	return true;
}

/** Stop calling the tick function : the interrupt no longer calls it once this returns. */
void YM_StopTick(void)
{
	s_ymTick = NULL;
}
