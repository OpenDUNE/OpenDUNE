/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"

/**
 * C-ified function of f__252E_0001_0018_08B3().
 *
 * @name emu_Unknown_252E_0001
 * @implements 252E:0001:0018:08B3 ()
 * @implements 252E:0019:0002:2597
 */
void emu_Unknown_252E_0001()
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
 * @name emu_Unknown_252E_001B
 * @implements 252E:001B:0018:EA2C ()
 * @implements 252E:0033:0002:2597
 */
void emu_Unknown_252E_001B()
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
