/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "gui/widget.h"

WidgetClickInfo *g_widgetClickInfo = NULL;

/**
 * Initialize the window system.
 *
 * @init System_Init_Window
 */
void System_Init_Window()
{
	g_widgetClickInfo = (WidgetClickInfo *)&emu_get_memory8(0x2E6B, 0x0, 0x0);
}
