/* $Id$ */

/** @file src/midi_none.c In case no MIDI is selected, create an empty one,
 *  which ignores all input */

#include "types.h"
#include "midi.h"

bool midi_init()
{
	return false;
}

void midi_uninit()
{
}

void midi_send(uint32 data)
{
	VARIABLE_NOT_USED(data);
}

void midi_reset()
{
}
