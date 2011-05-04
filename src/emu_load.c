/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "load.h"

/**
 *Emulator wrapper around LoadFile()
 *
 * @name emu_LoadFile
 * @implements B511:0446:0013:E4E5 ()
 */
void emu_LoadFile()
{
	char *filename;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filename = (char *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp, 0x2), emu_get_memory16(emu_ss, emu_sp, 0x0), 0x0);

	LoadFile(filename);
}

/**
 * Emulator wrapper around Load_Palette_Mercenaries().
 *
 * @name emu_Load_Palette_Mercenaries
 * @implements B4DA:02E0:0023:E297 ()
 */
void emu_Load_Palette_Mercenaries()
{
	/* Pop return address off the stack. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	Load_Palette_Mercenaries();
}
