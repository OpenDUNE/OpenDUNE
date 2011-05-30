/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"

/**
 * C-ified function of f__B53B_0000_0050_FEA6().
 *
 * @name emu_Unknown_B53B_0000
 * @implements B53B:0000:0050:FEA6 ()
 */
void emu_Unknown_B53B_0000()
{
	uint16 unknown;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	unknown = emu_get_memory16(emu_ss, emu_sp, 0x0);
	g_global->variable_4062[g_global->variable_6D5D][0] -= unknown;
	g_global->variable_4062[g_global->variable_6D5D][1] -= unknown << 3;
	g_global->variable_4062[g_global->variable_6D5D][2] += unknown << 1;
	g_global->variable_4062[g_global->variable_6D5D][3] += unknown << 4;

	emu_push(g_global->variable_6D5D);
	emu_push(emu_cs); emu_push(0x0050); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	emu_sp += 2;

	g_global->variable_9933 = 0x0;
	g_global->variable_9935 = 0x0;
}
