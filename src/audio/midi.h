/** @file src/audio/midi.h MIDI definitions. */

#ifndef MIDI_H
#define MIDI_H

extern bool midi_init(void);
extern void midi_uninit(void);
extern void midi_send(uint32 data);
extern uint16 midi_send_string(const uint8 * data, uint16 len);
extern void midi_reset(void);

#if defined(TOS)
extern bool midi_uses_ym(void);
extern bool midi_start_tick(void (*tick)(void));
extern void midi_stop_tick(void);
#endif /* TOS */

#endif /* MIDI_H */
