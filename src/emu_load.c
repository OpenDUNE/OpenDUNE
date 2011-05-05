/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "load.h"

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
