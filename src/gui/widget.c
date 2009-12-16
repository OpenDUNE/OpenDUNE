/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "widget.h"

extern void f__22A6_0B60_006A_2F61();
extern void f__22A6_0C69_008C_017F();
extern void f__2427_0004_003B_B2A9();
extern void f__24D0_000D_0039_C17D();
extern void f__2598_0000_0017_EB80();
extern void f__2903_0158_001A_2931();
extern void f__2B6C_0197_00CE_4D32();
extern void f__2B6C_0292_0028_3AD7();
extern void emu_GUI_DrawText();
extern void emu_GUI_DrawText_Wrapper();
extern void emu_GUI_DrawWiredRectangle();
extern void emu_GUI_Draw_BuildPlace();
extern void emu_GUI_Draw_CommandButtons();
extern void emu_GUI_Draw_PictureButton();
extern void emu_GUI_Mentat_Draw_ScrollBar();
extern void emu_GUI_String_Get_ByIndex();
extern void emu_GUI_Widget_DrawBorder();
extern void overlay(uint16 cs, uint8 force);

/**
 * Draw a button widget to the display.
 *
 * @param w The widget (which is a button) to draw.
 */
static void GUI_Widget_Button_Draw(Widget *w)
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
	emu_push(19);
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

/**
 * Draw a widget to the display.
 *
 * @param w The widget to draw.
 * @param wcsip TODO -- TEMPORARY -- The csip to the widget.
 */
void GUI_Widget_Draw(Widget *w, csip32 wcsip)
{
	uint16 positionLeft, positionRight;
	uint16 positionTop, positionBottom;
	uint16 offsetX, offsetY;
	uint16 drawMode, drawParam1, drawParam2;
	csip32 drawProc;

	assert(g_global->variable_6660.csip == 0x22A60C69);
	assert(g_global->variable_665C.csip == 0x22A60B60);

	if (w == NULL) return;

	if ((w->variable_0E & 0x08) != 0) {
		if ((w->variable_0E & 0x10) == 0) return;

		emu_push(g_global->variable_6D53);
		emu_push(wcsip.s.cs); emu_push(wcsip.s.ip);
		emu_push(emu_cs); emu_push(0x0761); emu_cs = 0x2427; f__2427_0004_003B_B2A9();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
		emu_sp += 6;

		return;
	}

	if ((w->flags & 0x0004) == 0) {
		if ((w->flags & 0x0001) == 0) {
			drawMode   = w->drawModeNormal;
			drawProc   = w->drawProcNormal;
			drawParam1 = w->drawParam1Normal;
			drawParam2 = w->drawParam2Normal;
		} else {
			drawMode   = w->drawModeHover;
			drawProc   = w->drawProcHover;
			drawParam1 = w->drawParam1Hover;
			drawParam2 = w->drawParam2Hover;

		}
	} else {
		drawMode   = w->drawModeClick;
		drawProc   = w->drawProcClick;
		drawParam1 = w->drawParam1Click;
		drawParam2 = w->drawParam2Click;
	}

	offsetX = w->offsetX;
	if (w->offsetX < 0) {
		offsetX = (g_global->variable_4062[w->parentID][2] << 3) + w->offsetX;
	}
	positionLeft = (g_global->variable_4062[w->parentID][0] << 3) + offsetX;
	positionRight = positionLeft + w->width - 1;

	offsetY = w->offsetY;
	if (w->offsetY < 0) {
		offsetY = g_global->variable_4062[w->parentID][3] + w->offsetY;
	}
	positionTop = g_global->variable_4062[w->parentID][1] + offsetY;
	positionBottom = positionTop + w->height - 1;

	assert(drawMode < DRAW_MODE_MAX);
	if (drawMode != DRAW_MODE_NONE && drawMode != DRAW_MODE_CUSTOM_PROC && g_global->variable_6C91 == 0) {
		emu_push(positionBottom);
		emu_push(positionRight);
		emu_push(positionTop);
		emu_push(positionLeft);
		emu_push(emu_cs); emu_push(0x08C2); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
		emu_sp += 8;
	}

	switch (drawMode) {
		case DRAW_MODE_NONE: break;

		case DRAW_MODE_UNKNOWN1: {
			emu_push(0x4000);
			emu_push(w->parentID);
			emu_push(offsetY);
			emu_push(offsetX);
			emu_push(drawProc.s.cs); emu_push(drawProc.s.ip);
			emu_push(g_global->variable_6C91);
			emu_push(emu_cs); emu_push(0x08E5); emu_cs = 0x2903; f__2903_0158_001A_2931();
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
			emu_sp += 14;
		} break;

		case DRAW_MODE_TEXT: {
			emu_push(drawParam2);
			emu_push(drawParam1);
			emu_push(positionTop);
			emu_push(positionLeft);
			emu_push(drawProc.s.cs); emu_push(drawProc.s.ip);
			emu_push(emu_cs); emu_push(0x0921); emu_cs = 0x2BC2; emu_GUI_DrawText();
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
			emu_sp += 12;
		} break;

		case DRAW_MODE_UNKNOWN3: {
			emu_push(positionTop);
			emu_push(positionLeft >> 3);
			emu_push(drawProc.s.cs);
			emu_push(emu_cs); emu_push(0x0A0B); emu_cs = 0x22A6; f__22A6_0B60_006A_2F61(); break;
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
			emu_sp += 6;
		} break;

		case DRAW_MODE_CUSTOM_PROC: {
			if (drawProc.csip == 0x0) return;

			switch (drawProc.csip) {
				case 0x34F20061: GUI_Widget_Button_Draw(w); return;
			}

			emu_push(wcsip.s.cs); emu_push(wcsip.s.ip);

			/* Call based on memory/register values */
			emu_push(emu_cs); emu_push(0x0944);
			emu_ip = drawProc.s.ip;
			emu_cs = drawProc.s.cs;
			switch ((emu_cs << 16) + emu_ip) {
				case 0x0AEC0809: emu_GUI_Draw_BuildPlace(); break;
				case 0x0AEC0CA1: emu_GUI_Draw_PictureButton(); break;
				case 0x0AEC0E3E: emu_GUI_Draw_CommandButtons(); break;
				case 0x3520002A: overlay(0x3520, 0); emu_GUI_Mentat_Draw_ScrollBar(); break;
				default:
					/* In case we don't know the call point yet, call the dynamic call */
					emu_last_cs = 0xB4A2; emu_last_ip = 0x0941; emu_last_length = 0x0011; emu_last_crc = 0x88EC;
					emu_call();
					break;
			}
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
			emu_sp += 4;
		} break;

		case DRAW_MODE_WIRED_RECTANGLE: {
			emu_push(drawParam1);
			emu_push(positionBottom);
			emu_push(positionRight);
			emu_push(positionTop);
			emu_push(positionLeft);
			emu_push(emu_cs); emu_push(0x0980); emu_cs = 0x251B; emu_GUI_DrawWiredRectangle();
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
			emu_sp += 10;
		} break;

		case DRAW_MODE_UNKNOWN6: {
			emu_push(drawParam1);
			emu_push(positionBottom);
			emu_push(positionRight);
			emu_push(positionTop);
			emu_push(positionLeft);
			emu_push(emu_cs); emu_push(0x09CE); emu_cs = 0x22A6; f__22A6_0C69_008C_017F();
			/* Check if this overlay should be reloaded */
			if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
			emu_sp += 10;
		} break;
	}

	if (drawMode != DRAW_MODE_NONE && drawMode != DRAW_MODE_CUSTOM_PROC && g_global->variable_6C91 == 0) {
		emu_push(emu_cs); emu_push(0x08F4); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
	}
}
