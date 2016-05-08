/** @file src/audio/midi_atari.c ATARI ST/TT/Falcon implementation of the MIDI
 *  send directly MIDI data to the MIDI Out port */

#include <mint/ostruct.h>
#include <mint/osbind.h>

#include "types.h"
#include "midi.h"
#include "../os/error.h"

bool midi_init(void)
{
	return true;
}

void midi_uninit(void)
{
}

/**
 * Sends a midi command
 *
 * @param data The data to send in "packed" format, ie status | (data1 << 8) | (data2 << 16) */
void midi_send(uint32 data)
{
	Bconout(DEV_MIDI, data & 0xff);
	Bconout(DEV_MIDI, (data >> 8) & 0xff);
	Bconout(DEV_MIDI, (data >> 16) & 0xff);	/* is sending of this byte always relevent ? */
}

void midi_reset(void)
{
}


