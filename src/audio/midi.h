/* $Id$ */

/** @file src/midi.h MIDI definitions. */

#ifndef MIDI_H
#define MIDI_H

extern bool midi_init();
extern void midi_uninit();
extern void midi_send(uint32 data);
extern void midi_reset();

#endif /* MIDI_H */
