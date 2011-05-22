/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"

/**
 * C-ified function of f__252E_0001_0018_08B3().
 *
 * @name emu_Screen_GetSegment_ByIndex_1
 * @implements 252E:0001:0018:08B3 ()
 */
void emu_Screen_GetSegment_ByIndex_1()
{
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index = emu_get_memory16(emu_ss, emu_sp, 0x0);
	index &= 0xF;

	emu_dx = g_global->variable_6C93[index >> 1][1];
	emu_ax = 0x0;
}

/**
 * C-ified function of f__252E_001B_0018_EA2C().
 *
 * @name emu_Screen_GetSegment_ByIndex_2
 * @implements 252E:001B:0018:EA2C ()
 */
void emu_Screen_GetSegment_ByIndex_2()
{
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index = emu_get_memory16(emu_ss, emu_sp, 0x0);
	index &= 0xF;

	emu_dx = g_global->variable_6C93[index >> 1][0];
	emu_ax = 0x0;
}
