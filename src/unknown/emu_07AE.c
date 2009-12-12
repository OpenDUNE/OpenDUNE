/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"

/**
 * C-ified function of f__07AE_0000_00DF_A32C().
 *
 * @name emu_Unknown_07AE_0000
 * @implements 07AE:0000:00DF:A32C ()
 * @implements 07AE:00DF:0005:8BCF
 */
void emu_Unknown_07AE_0000()
{
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index = emu_get_memory16(emu_ss, emu_sp, 0x0);
	emu_ax = g_global->variable_6D5D;
	g_global->variable_6D5D = index;

	g_global->variable_992D = g_global->variable_4062[index][0];
	g_global->variable_992B = g_global->variable_4062[index][1];
	g_global->variable_992F = g_global->variable_4062[index][2];
	g_global->variable_9931 = g_global->variable_4062[index][3];
	g_global->variable_6D5B = g_global->variable_4062[index][4];
	g_global->variable_6D59 = g_global->variable_4062[index][5];
	g_global->variable_9935 = g_global->variable_4062[index][6];
	g_global->variable_9933 = g_global->variable_4062[index][7];
	g_global->variable_3196 = 0x0;
	g_global->variable_8225 = g_global->variable_9935 / (g_global->variable_6C70 + g_global->variable_6C6C);
	g_global->variable_6D5F = (g_global->variable_9931 - g_global->variable_6C6E) / (g_global->variable_6C71 + g_global->variable_6C6E);
	g_global->variable_6D63 = g_global->variable_992F >> 3;
	g_global->variable_6D61 = g_global->variable_6D63 / (g_global->variable_6C70 + g_global->variable_6C6C);
}
