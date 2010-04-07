/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "mouse.h"

/**
 * Set the region in which the mouse can move.
 *
 * @name f__2B42_0000_0022_1DB2
 * @implements 2B42:0000:0022:1DB2 ()
 */
void emu_Mouse_SetRegion()
{
	uint16 left;
	uint16 top;
	uint16 right;
	uint16 bottom;

	/* Pop the return CS:IP */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	left   = emu_get_memory16(emu_ss, emu_sp, 0x0);
	top    = emu_get_memory16(emu_ss, emu_sp, 0x2);
	right  = emu_get_memory16(emu_ss, emu_sp, 0x4);
	bottom = emu_get_memory16(emu_ss, emu_sp, 0x6);

	Mouse_SetRegion(left, top, right, bottom);
}
