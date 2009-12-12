/* $Id: emu_B53B.c 744 2009-12-12 15:21:54Z truebrain $ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "gui.h"

extern void f__2B6C_0137_0020_C73F();
extern void f__2B6C_0169_001E_6939();
extern void emu_Font_GetWidth();
extern void emu_GUI_DrawRectangle();
extern void overlay(uint16 cs, uint8 force);

/**
 * Draw a blinking cursor, used inside the EditBox.
 *
 * @param positionX Where to draw the cursor on the X position.
 * @param resetBlink If true, the blinking is reset and restarted.
 */
void GUI_EditBox_BlinkCursor(uint16 positionX, bool resetBlink)
{
	assert(g_global->variable_6668.csip == 0x22A60D31);

	if (resetBlink) {
		g_global->tickEditBox = 0;
		g_global->editBoxShowCursor = 1;
	}

	if (g_global->tickEditBox > g_global->variable_76AC) return;
	if (!resetBlink) {
		g_global->tickEditBox = g_global->variable_76AC + 20;
	}

	g_global->editBoxShowCursor = (g_global->editBoxShowCursor == 0) ? 1 : 0;

	emu_push(emu_cs); emu_push(0x0329); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }

	emu_push(0x57);
	emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x2521; emu_Font_GetWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
	emu_sp += 2;

	emu_push((g_global->editBoxShowCursor) ? g_global->variable_6D5B : g_global->variable_6D59);
	emu_push(g_global->variable_992B + g_global->variable_9931 - 1);
	emu_push(positionX + emu_ax);
	emu_push(g_global->variable_992B);
	emu_push(positionX);
	emu_push(emu_cs); emu_push(0x035F); emu_cs = 0x22A6; emu_GUI_DrawRectangle();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
	emu_sp += 10;

	emu_push(emu_cs); emu_push(0x0367); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3527) { overlay(0x3527, 1); }
}
