/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "driver.h"

/**
 * Emulator wrapper around Drivers_All_Init()
 *
 * @name emu_Drivers_All_Init
 * @implements 1DD7:039B:0008:D3BD ()
 */
void emu_Drivers_All_Init()
{
	uint16 sound;
	uint16 music;
	uint16 voice;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	sound = emu_get_memory16(emu_ss, emu_sp, 0);
	music = emu_get_memory16(emu_ss, emu_sp, 2);
	voice = emu_get_memory16(emu_ss, emu_sp, 4);

	Drivers_All_Init(sound, music, voice);
}
