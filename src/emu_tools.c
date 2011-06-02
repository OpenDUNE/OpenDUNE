/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "structure.h"
#include "tools.h"
#include "unit.h"

/**
 * 32bits left shift.
 *
 * @name emu_Tools_Shld
 * @implements 01F7:058E:0015:CED2 ()
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
 * 32 bits signed right shift.
 */
void emu_Tools_Shrd()
{
	uint32 val;

	/* Pop the return CS:IP */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	val = ((int32)((emu_dx << 16) | emu_ax)) >> emu_cl;
	emu_ax = val & 0xFFFF;
	emu_dx = (val >> 16) & 0xFFFF;
}

/**
 * 32 bits unsigned right shift.
 *
 * @name emu_Tools_UShrd
 * @implements 01F7:05CF:0015:0AD7 ()
 */
void emu_Tools_UShrd()
{
	uint32 val;

	/* Pop the return CS:IP */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	val = ((uint32)((emu_dx << 16) | emu_ax)) >> emu_cl;
	emu_ax = val & 0xFFFF;
	emu_dx = (val >> 16) & 0xFFFF;
}

