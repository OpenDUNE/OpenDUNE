/** @file src/audio/midi.h MIDI definitions. */

#ifndef MIDI_H
#define MIDI_H

extern bool midi_init(void);
extern void midi_uninit(void);
extern void midi_send(uint32 data);
extern void midi_reset(void);

#endif /* MIDI_H */
