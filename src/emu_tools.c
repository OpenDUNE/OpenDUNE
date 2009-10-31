/* $Id$ */

#include "types.h"
#include "libemu.h"

/**
 * 32bits left shift.
 *
 * @name emu_Tools_Shld
 * @implements 01F7:058E:0015:CED2 ()
 * @implements 01F7:05A3:0009:5F2E
 */
void emu_Tools_Shld()
{
	uint32 val;

	/* Pop the return CS:IP */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	val = ((emu_dx << 16) | emu_ax) << emu_cl;
	emu_ax = val & 0xFFFF;
	emu_dx = (val >> 16) & 0xFFFF;
}

/**
 * 32bits right shift.
 *
 * @name emu_Tools_Shrd
 * @implements 01F7:05AF:0015:0AD5 ()
 * @implements 01F7:05C4:0008:2A95
 */
void emu_Tools_Shrd()
{
	uint32 val;

	/* Pop the return CS:IP */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	val = ((emu_dx << 16) | emu_ax) >> emu_cl;
	emu_ax = val & 0xFFFF;
	emu_dx = (val >> 16) & 0xFFFF;
}
