/* $Id$ */

/** @file src/unknown/emu_07AE.c Unknown converted routines from segment 07AE. */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "../global.h"
#include "unknown.h"
#include "../gui/gui.h"

/**
 * Load widget properties by index.
 * @param index %Widget properties index to load.
 * @return old index.
 */
uint16 Unknown_07AE_0000(uint16 index)
{
	uint16 old6D5D = g_global->variable_6D5D;
	g_global->variable_6D5D = index;

	g_global->variable_992D = g_widgetProperties[index].xBase;
	g_global->variable_992B = g_widgetProperties[index].yBase;
	g_global->variable_992F = g_widgetProperties[index].width;
	g_global->variable_9931 = g_widgetProperties[index].height;
	g_global->variable_6D5B = g_widgetProperties[index].prop4;
	g_global->variable_6D59 = g_widgetProperties[index].fgColourNormal;

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
