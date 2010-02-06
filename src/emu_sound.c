/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "sound.h"

/**
 * Emulator wrapper around Sound_Play()
 *
 * @name emu_Sound_Play
 * @implements B483:0283:0014:983A ()
 */
void emu_Sound_Play()
{
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index = emu_get_memory16(emu_ss, emu_sp, 0);

	Sound_Play(index);
}
