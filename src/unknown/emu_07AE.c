/* $Id$ */

/** @file src/unknown/emu_07AE.c Unknown converted routines from segment 07AE. */

#include <assert.h>
#include <stdio.h>
#include "types.h"
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
	GUI_DrawFilledRectangle(g_global->variable_992D << 3, g_global->variable_992B, ((g_global->variable_992D + g_global->variable_992F) << 3) - 1, g_global->variable_992B + g_global->variable_9931 - 1, (uint8)g_global->variable_6D59);
}
