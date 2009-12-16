/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "widget.h"

extern void f__24D0_000D_0039_C17D();
extern void f__2598_0000_0017_EB80();
extern void f__2B6C_0197_00CE_4D32();
extern void f__2B6C_0292_0028_3AD7();
extern void emu_GUI_DrawText_Wrapper();
extern void emu_GUI_String_Get_ByIndex();
extern void emu_GUI_Widget_DrawBorder();
extern void overlay(uint16 cs, uint8 force);

/**
 * Draw a button widget to the screen.
 *
 * @param w The widget (which is a button) to draw.
 */
void GUI_Widget_Button_Draw(Widget *w)
{
	uint16 old2598;
	uint16 positionX, positionY;
	uint16 width, height;
	uint16 state, colour;

	emu_push(2);
	emu_push(emu_cs); emu_push(0x0F79); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
	emu_sp += 2;
	old2598 = emu_ax;

	positionX = w->offsetX + (g_global->variable_4062[w->parentID][0] << 3);
	positionY = w->offsetY +  g_global->variable_4062[w->parentID][1];
	width     = w->width;
	height    = w->height;

	g_global->variable_4062[19][0] = positionX >> 3;
	g_global->variable_4062[19][1] = positionY;
	g_global->variable_4062[19][2] = width >> 3;
	g_global->variable_4062[19][3] = height;

	state = 2;
	colour = 0xE8;

	if ((w->flags & 0x0001) != 0) {
		state = 0;
	}
	if ((w->flags & 0x0004) != 0) {
		colour = 0xE7;
	}

	emu_push(1);
	emu_push(state);
	emu_push(0x13);
	emu_push(emu_cs); emu_push(0x102E); emu_cs = 0x10E4; emu_GUI_Widget_DrawBorder();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
	emu_sp += 6;

	if (w->stringID == 0x1E || w->stringID == 0x66 || w->stringID == 0x6B || w->stringID == 0x6C) {
		emu_push(0x122);
		emu_push(0x0);
		emu_push(colour);
		emu_push(positionY + 2);
		emu_push(positionX + (width / 2));
	} else {
		emu_push(0x22);
		emu_push(0x0);
		emu_push(colour);
		emu_push(positionY + 2);
		emu_push(positionX + 3);
	}

	emu_push(w->stringID);
	emu_push(emu_cs); emu_push(0x1097); overlay(0x34F2, 0); emu_GUI_String_Get_ByIndex();
	emu_sp += 2;

	emu_push(emu_dx); emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x109F); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
	emu_sp += 14;

	if (old2598 == 0) {
		emu_push(positionY + height);
		emu_push(positionX + width);
		emu_push(positionY);
		emu_push(positionX);
		emu_push(emu_cs); emu_push(0x10BB); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
		emu_sp += 8;

		emu_push(0);
		emu_push(2);
		emu_push(height);
		emu_push(width >> 3);
		emu_push(positionY);
		emu_push(positionX >> 3);
		emu_push(positionY);
		emu_push(positionX >> 3);
		emu_push(emu_cs); emu_push(0x10E5); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
		emu_sp += 16;

		emu_push(emu_cs); emu_push(0x10ED); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
	}

	emu_push(old2598);
	emu_push(emu_cs); emu_push(0x10F5); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
	emu_sp += 2;

	emu_ax = 0;
}
