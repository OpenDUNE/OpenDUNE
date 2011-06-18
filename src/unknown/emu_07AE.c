/* $Id$ */

/** @file src/unknown/emu_07AE.c Unknown converted routines from segment 07AE. */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"
#include "../gui/gui.h"

/**
 * Unknown function.
 * @param index
 */
uint16 Unknown_07AE_0000(uint16 index)
{
	uint16 old6D5D = g_global->variable_6D5D;
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
	g_global->variable_6D63 = g_global->variable_992F << 3;
	g_global->variable_6D61 = g_global->variable_6D63 / (g_global->variable_6C70 + g_global->variable_6C6C);

	return old6D5D;
}

/**
 * Unknown function.
 * @param index
 */
uint16 Unknown_07AE_00E4(uint16 index)
{
	index = Unknown_07AE_0000(index);

	Unknown_07AE_0103();

	return index;
}

/**
 * Unknown function.
 */
void Unknown_07AE_0103()
{
	assert(g_global->variable_6668.csip == 0x22A60D31);

	GUI_DrawFilledRectangle(g_global->variable_992D << 3, g_global->variable_992B, ((g_global->variable_992D + g_global->variable_992F) << 3) - 1, g_global->variable_992B + g_global->variable_9931 - 1, (uint8)g_global->variable_6D59);

	g_global->variable_8225 = 0x0;
	g_global->variable_9935 = 0x0;
	g_global->variable_9933 = 0x0;
	g_global->variable_3196 = 0x0;
}
