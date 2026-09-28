/** @file src/audio/midi_ym_atari.h Atari YM2149 output of the MIDI layer. */

/*
 * Copyright (C) 2026 Neil Rackett
 * SPDX-License-Identifier: GPL-2.0-or-later
 *
 * YM2149 register handling and voice allocation adapted from the
 * author's STDL library (atarist-stdl, LGPL-2.1-or-later).
 */

#ifndef AUDIO_MIDI_YM_ATARI_H
#define AUDIO_MIDI_YM_ATARI_H

extern bool YM_Init(void);
extern void YM_Uninit(void);
extern void YM_Send(uint32 data);
extern void YM_Reset(void);
extern bool YM_StartTick(void (*tick)(void));
extern void YM_StopTick(void);

#endif /* AUDIO_MIDI_YM_ATARI_H */
