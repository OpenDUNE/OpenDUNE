/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "font.h"
#include "gui.h"
#include "../os/strings.h"
#include "../unknown/unknown.h"
#include "../house.h"
#include "../structure.h"
#include "../os/math.h"

extern void f__10E4_01B8_0014_5104();
extern void f__22A6_04F8_007A_6E25();
extern void f__22A6_101C_004B_D9F3();
extern void f__22A6_1102_004C_B069();
extern void f__22A6_127B_0036_F8C9();
extern void f__23E1_0004_0014_2BC0();
extern void f__23E1_01C2_0011_24E8();
extern void f__23E1_0334_000B_CF65();
extern void f__24D0_000D_0039_C17D();
extern void f__2598_0000_0017_EB80();
extern void f__2599_000B_0047_21FD();
extern void f__259E_0021_001A_E253();
extern void f__259E_0040_0015_5E4A();
extern void f__2605_000C_006D_F8B2();
extern void f__2642_0002_005E_87F6();
extern void f__2642_0069_0008_D517();
extern void f__29E8_07FA_0020_177A();
extern void f__2B6C_0137_0020_C73F();
extern void f__2B6C_0169_001E_6939();
extern void f__2BA5_00A2_0052_DEE3();
extern void emu_Input_HandleInput();
extern void emu_Input_History_Clear();
extern void emu_GUI_DrawFilledRectangle();
extern void emu_GUI_DrawChar();
extern void emu_GUI_DrawLine();
extern void emu_GUI_DrawSprite();
extern void emu_GUI_Widget_DrawBorder();
extern void emu_Unknown_07AE_0000();
extern void overlay(uint16 cs, uint8 force);

/**
 * Draw a wired rectangle.
 * @param left The left position of the rectangle.
 * @param top The top position of the rectangle.
 * @param right The right position of the rectangle.
 * @param bottom The bottom position of the rectangle.
 * @param colour The colour of the rectangle.
 */
void GUI_DrawWiredRectangle(uint16 left, uint16 top, uint16 right, uint16 bottom, uint16 colour)
{
	emu_push(colour);
	emu_push(top);
	emu_push(right);
	emu_push(top);
	emu_push(left);
	emu_push(emu_cs); emu_push(0x001E); emu_cs = 0x22A6; emu_GUI_DrawLine();
	emu_sp += 10;

	emu_push(colour);
	emu_push(bottom);
	emu_push(right);
	emu_push(bottom);
	emu_push(left);
	emu_push(emu_cs); emu_push(0x0038); emu_cs = 0x22A6; emu_GUI_DrawLine();
	emu_sp += 10;

	emu_push(colour);
	emu_push(bottom);
	emu_push(left);
	emu_push(top);
	emu_push(left);
	emu_push(emu_cs); emu_push(0x004E); emu_cs = 0x22A6; emu_GUI_DrawLine();
	emu_sp += 10;

	emu_push(colour);
	emu_push(bottom);
	emu_push(right);
	emu_push(top);
	emu_push(right);
	emu_push(emu_cs); emu_push(0x0068); emu_cs = 0x22A6; emu_GUI_DrawLine();
	emu_sp += 10;
}

/**
 * Display a text.
 * @param str The text to display.
 * @param arg0A ??.
 * @param ... The args for the text.
 */
void GUI_DisplayText(const char *str, uint16 arg0A, ...)
{
	char buffer[80];
	buffer[0] = '\0';

	if (str != NULL) {
		va_list ap;

		va_start(ap, arg0A);
		vsnprintf(buffer, sizeof(buffer), str, ap);
		va_end(ap);
	}

	if (arg0A == 0xFFFF) {
		g_global->variable_3734 = 0xFFFF;
		g_global->variable_3736 = 0xFFFF;
		g_global->variable_3738 = 0xFFFF;

		g_global->variable_3644[0] = '\0';
		g_global->variable_3694[0] = '\0';
		g_global->variable_36E4[0] = '\0';

		g_global->variable_373A = 0;
		g_global->variable_373C = 0;
		return;
	}

	if (arg0A == 0xFFFE) {
		if (g_global->variable_373A == 0) {
			g_global->variable_3736 = 0xFFFF;
			g_global->variable_3694[0] = '\0';
		}
		g_global->variable_3738 = 0xFFFF;
		g_global->variable_36E4[0] = '\0';
	}

	if (g_global->variable_373A != 0) {
		uint16 loc04;
		uint16 loc06;

		if (buffer[0] != '\0') {
			if (strcasecmp(buffer, g_global->variable_3694) != 0 && (int16)arg0A >= (int16)g_global->variable_3738) {
				strcpy(g_global->variable_36E4, buffer);
				g_global->variable_3738 = arg0A;
			}
		}
		if ((int32)g_global->variable_373C > (int32)g_global->variable_76AC) return;

		emu_push(7);
		emu_push(emu_cs); emu_push(0x0AA4); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
		emu_sp += 2;

		loc04 = emu_ax;

		if (g_global->variable_38C4 != 0) {
			uint16 loc02;

			emu_push(2);
			emu_push(emu_cs); emu_push(0x0ABB); emu_cs = 0x2598; f__2598_0000_0017_EB80();
			emu_sp += 2;

			loc02 = emu_ax;

			assert(g_global->variable_6668.csip == 0x22A60D31);

			emu_push(g_global->variable_6D59);
			emu_push(23);
			emu_push(319);
			emu_push(0);
			emu_push(0);
			emu_push(emu_cs); emu_push(0x0ADB); emu_cs = 0x22A6; emu_GUI_DrawFilledRectangle();
			emu_sp += 10;

			GUI_DrawText_Wrapper(
				g_global->variable_3694,
				g_global->variable_992D << 3,
				2,
				g_global->variable_8ADA & 0xFF,
				0,
				0x012
			);

			GUI_DrawText_Wrapper(
				g_global->variable_3644,
				g_global->variable_992D << 3,
				13,
				g_global->variable_8AD8 & 0xFF,
				0,
				0x012
			);

			g_global->variable_38C4 = 0;

			emu_push(loc02);
			emu_push(emu_cs); emu_push(0x0B34); emu_cs = 0x2598; f__2598_0000_0017_EB80();
			emu_sp += 2;
		}

		emu_push(7);
		emu_push(emu_cs); emu_push(0x0B3E); emu_cs = 0x2642; f__2642_0002_005E_87F6();
		emu_sp += 2;

		if (g_global->variable_3740 + g_global->variable_9931 > 24) {
			loc06 = 24 - g_global->variable_3740;
		} else {
			loc06 = g_global->variable_9931;
		}

		emu_push(0);
		emu_push(2);
		emu_push(loc06);
		emu_push(g_global->variable_992F);
		emu_push(g_global->variable_992B);
		emu_push(g_global->variable_992D);
		emu_push(g_global->variable_3740);
		emu_push(g_global->variable_992D);
		emu_push(emu_cs); emu_push(0x0B7D); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
		emu_sp += 16;

		emu_push(emu_cs); emu_push(0x0B85); emu_cs = 0x2642; f__2642_0069_0008_D517();

		emu_push(loc04);
		emu_push(emu_cs); emu_push(0x0B8D); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
		emu_sp += 2;

		if (g_global->variable_3740 != 0) {
			if ((int16)g_global->variable_3738 <= (int16)g_global->variable_3736) {
				g_global->variable_373C = g_global->variable_76AC + 1;
			}
			g_global->variable_3740--;
			return;
		}

		strcpy(g_global->variable_3644, g_global->variable_3694);

		g_global->variable_8AD8 = g_global->variable_8ADA;
		g_global->variable_3734 = (g_global->variable_3736 != 0) ? g_global->variable_3736 - 1 : 0;

		strcpy(g_global->variable_3694, g_global->variable_36E4);

		g_global->variable_3736 = g_global->variable_3738;
		g_global->variable_8ADA = g_global->variable_8ADC;
		g_global->variable_36E4[0] = '\0';
		g_global->variable_3738 = 0xFFFF;
		g_global->variable_38C4 = 1;
		g_global->variable_373C = g_global->variable_76AC + ((int16)g_global->variable_3736 <= (int16)g_global->variable_3734 ? 900 : 1);
		g_global->variable_373A = 0;
		return;
	}

	if (buffer[0] != '\0') {
		if (strcasecmp(buffer, g_global->variable_3644) != 0 && strcasecmp(buffer, g_global->variable_3694) != 0 && strcasecmp(buffer, g_global->variable_36E4) != 0) {
			if ((int16)arg0A >= (int16)g_global->variable_3736) {
				strcpy(g_global->variable_36E4, g_global->variable_3694);

				g_global->variable_8ADC = g_global->variable_8ADA;
				g_global->variable_3738 = g_global->variable_3736;

				strcpy(g_global->variable_3694, buffer);

				g_global->variable_8ADA = 12;
				g_global->variable_3736 = arg0A;
			} else if ((int16)arg0A >= (int16)g_global->variable_3738) {
				strcpy(g_global->variable_36E4, buffer);
				g_global->variable_3738 = arg0A;
				g_global->variable_8ADC = 12;
			}
		}
	} else {
		if (g_global->variable_3644[0] == '\0' && g_global->variable_3694[0] == '\0') return;
	}

	if ((int16)g_global->variable_3736 <= (int16)g_global->variable_3734 && (int32)g_global->variable_373C >= (int32)g_global->variable_76AC) return;

	g_global->variable_373A = 1;
	g_global->variable_3740 = 10;
	g_global->variable_373C = 0;
}

/**
 * Draw a string to the screen.
 *
 * @param string The string to draw.
 * @param left The most left position where to draw the string.
 * @param top The most top position where to draw the string.
 * @param fgColour The foreground colour of the text.
 * @param bgColour The background colour of the text.
 */
void GUI_DrawText(char *string, int16 left, int16 top, uint8 fgColour, uint8 bgColour)
{
	uint8 *data;
	uint16 height;
	uint16 heightOffset;
	uint16 widthOffset;
	uint16 x;
	uint16 y;
	char *s;

	data = (uint8 *)emu_get_memorycsip(g_global->variable_99F3);
	if (data == NULL) return;

	heightOffset = ((uint16 *)data)[2];
	widthOffset  = ((uint16 *)data)[4];
	height = data[heightOffset + 4];

	if (left < 0) left = 0;
	if (top  < 0) top  = 0;
	if (left > 320) return;
	if (top  > 200) return;

	/* XXX -- This of course is not something that should stay in here very long */
	emu_get_memory8(0x2BC2, 0x00, 0x9) = fgColour;
	emu_get_memory8(0x2BC2, 0x00, 0x8) = bgColour;

	emu_push(1);
	emu_push(0);
	emu_push(0x2BC2); emu_push(0x8);
	emu_push(emu_cs); emu_push(0x00DE); emu_cs = 0x22A6; f__22A6_1102_004C_B069();
	emu_sp += 8;

	s = string;
	x = left;
	y = top;
	while (*s != '\0') {
		uint16 width;

		if (*s == '\n' || *s == '\r') {
			x = left;
			y += height + g_global->variable_6C6E;

			while (*s == '\n' || *s == '\r') s++;
		}

		width = data[widthOffset + *s] + g_global->variable_6C6C;

		if (x + width > 320) {
			x = left;
			y += height + g_global->variable_6C6E;
		}
		if (y > 200) break;

		emu_push(y); emu_push(x);
		emu_push(*s);
		emu_push(emu_cs); emu_push(0x00DE); emu_cs = 0x22A6; emu_GUI_DrawChar();
		emu_sp += 6;

		x += width;
		s++;
	}
}

/**
 * Draw a string to the screen, and so some magic.
 *
 * @param string The string to draw.
 * @param left The most left position where to draw the string.
 * @param top The most top position where to draw the string.
 * @param fgColour The foreground colour of the text.
 * @param bgColour The background colour of the text.
 * @param flags The flags of the string.
 */
void GUI_DrawText_Wrapper(char *string, int16 left, int16 top, uint8 fgColour, uint8 bgColour, uint16 flags, ...)
{
	uint8 arg12low = flags & 0xF;
	uint8 arg2mid  = flags & 0xF0;

	if ((arg12low != g_global->variable_376C && arg12low != 0) || string == NULL) {
		csip32 loc04;

		switch (arg12low) {
			case 1:
				loc04 = g_global->variable_3A2C;
				break;

			case 2:
				loc04 = g_global->variable_3A30;
				break;

			default:
				loc04 = g_global->variable_99EF;
				break;
		}

		emu_push(loc04.s.cs); emu_push(loc04.s.ip);
		emu_push(emu_cs); emu_push(0x1F56); emu_cs = 0x2605; f__2605_000C_006D_F8B2();
		emu_sp += 4;

		g_global->variable_376C = arg12low;
	}

	if ((arg2mid != g_global->variable_376E && arg2mid != 0) || string == NULL) {
		memset(g_global->variable_8ADE, 0, 16);

		switch (arg2mid) {
			case 0x0010:
				g_global->variable_8ADE[2] = 0;
				g_global->variable_8ADE[3] = 0;
				g_global->variable_6C6C = -2;
				break;

			case 0x0020:
				g_global->variable_8ADE[2] = 12;
				g_global->variable_8ADE[3] = 0;
				g_global->variable_6C6C = -1;
				break;

			case 0x0030:
				g_global->variable_8ADE[2] = 12;
				g_global->variable_8ADE[3] = 12;
				g_global->variable_6C6C = -1;
				break;

			case 0x0040:
				g_global->variable_8ADE[2] = 232;
				g_global->variable_8ADE[3] = 0;
				g_global->variable_6C6C = -1;
				break;
		}

		g_global->variable_8ADE[0] = bgColour;
		g_global->variable_8ADE[1] = fgColour;
		g_global->variable_8ADE[4] = 6;

		emu_push(0x353F); emu_push(0x8ADE);
		emu_push(emu_cs); emu_push(0x2006); emu_cs = 0x259E; f__259E_0021_001A_E253();
		emu_sp += 4;

		g_global->variable_376E = arg2mid;
	}

	if (string == NULL) return;

	if (string != g_global->variable_8AEE) {
		char buf[256];
		va_list ap;

		strncpy(buf, string, sizeof(buf));

		va_start(ap, flags);
		vsnprintf(g_global->variable_8AEE, sizeof(g_global->variable_8AEE), buf, ap);
		va_end(ap);
	}

	switch (flags & 0x0F00) {
		case 0x100:
			left -= Font_GetStringWidth(g_global->variable_8AEE) / 2;
			break;

		case 0x200:
			left -= Font_GetStringWidth(g_global->variable_8AEE);
			break;
	}

	GUI_DrawText(g_global->variable_8AEE, left, top, fgColour, bgColour);
}

/**
 * Animate the palette. Only works for some colours or something
 */
void GUI_PaletteAnimate()
{
	uint16 locsi = 0;

	if (g_global->variable_31CE < g_global->variable_76AC) {
		if (g_global->variable_37B2 != 0) {
			locsi = 15;
		} else {
			locsi = (g_global->variable_31D2 == 0) ? 15 : 6;
		}

		memcpy(emu_get_memorycsip(g_global->variable_3C32) + 0x2CD, emu_get_memorycsip(g_global->variable_3C32) + 3 * locsi, 3);

		emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
		emu_push(emu_cs); emu_push(0x05C7); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
		emu_sp += 4;

		g_global->variable_31D2 = (g_global->variable_31D2 == 0) ? 1 : 0;
		g_global->variable_31CE = g_global->variable_76AC + 60;
	}

	if (g_global->variable_31CA < g_global->variable_76AC && g_global->selectionType != 0) {
		emu_push(g_global->variable_31D4);
		emu_push(255);
		emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
		emu_push(emu_cs); emu_push(0x0622); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
		emu_sp += 8;

		emu_push(g_global->variable_31D4);
		emu_push(255);
		emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
		emu_push(emu_cs); emu_push(0x063A); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
		emu_sp += 8;

		emu_push(g_global->variable_31D4);
		emu_push(255);
		emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
		emu_push(emu_cs); emu_push(0x0652); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
		emu_sp += 8;

		emu_push(g_global->variable_31D4);
		emu_push(255);
		emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
		emu_push(emu_cs); emu_push(0x066A); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
		emu_sp += 8;

		if (emu_ax == 0) {
			if (g_global->variable_31D4 == 13) {
				g_global->variable_31D4 = 15;

				if (g_global->selectionType == 2) {
					if (g_global->variable_38EC != 0) {
						g_global->variable_31D4 = ((g_global->variable_38EC & 0x8000) != 0) ? 5 : 15;
					} else {
						g_global->variable_31D4 = 6;
					}
				}
			} else {
				g_global->variable_31D4 = 13;
			}
		}

		emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
		emu_push(emu_cs); emu_push(0x06BE); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
		emu_sp += 4;

		g_global->variable_31CA = g_global->variable_76AC + 3;
	}

	if (g_global->variable_31C6 < g_global->variable_76AC) {
		emu_push(g_global->variable_31D6);
		emu_push(223);
		emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
		emu_push(emu_cs); emu_push(0x06FE); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
		emu_sp += 8;

		emu_push(g_global->variable_31D6);
		emu_push(223);
		emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
		emu_push(emu_cs); emu_push(0x0716); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
		emu_sp += 8;

		if (emu_ax == 0) {
			if (g_global->variable_31D6 == 12) {
				g_global->variable_31D6 = 10;
			} else {
				g_global->variable_31D6 = 12;
			}
		}

		emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
		emu_push(emu_cs); emu_push(0x073F); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
		emu_sp += 4;

		g_global->variable_31C6 = g_global->variable_76AC + 5;
	}

	emu_push(emu_cs); emu_push(0x075A); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0470();
}

/**
 * Sets productionStringID to the correct string for the active structure.
 */
void GUI_UpdateProductionStringID()
{
	Structure *s = NULL;

	s = Structure_Get_ByPackedTile(g_global->selectionPosition);

	g_global->productionStringID = 0;

	if (s == NULL) return;

	if (g_structureInfo[s->o.type].flags.s.factory) {
		if (s->o.flags.s.upgrading) {
			g_global->productionStringID = 0x90; /* "Upgrading|%d%% done" */
		} else {
			if (s->o.linkedID != 0xFF) {
				if (s->o.flags.s.onHold) {
					g_global->productionStringID = 0x28; /* "On hold" */
				} else {
					if (s->countDown != 0) {
						g_global->productionStringID = 0x2E; /* "%d%% done" */
					} else {
						if (s->o.type == STRUCTURE_CONSTRUCTION_YARD) {
							g_global->productionStringID = 0x26; /* "Place it" */
						} else {
							g_global->productionStringID = 0x27; /* "Completed" */
						}
					}
				}
			} else {
				g_global->productionStringID = 0x29; /* "Build it" */
			}
		}
	} else {
		if (s->o.type == STRUCTURE_PALACE) g_global->productionStringID = g_houseInfo[s->o.houseID].specialWeapon + 0x29;
	}
}

/**
 * Displays a message and waits for a user action.
 * @param str The text to display.
 * @param spriteID The sprite to draw (0xFFFF for none).
 * @param ... The args for the text.
 * @return ??
 */
uint16 GUI_DisplayModalMessage(char *str, uint16 spriteID, ...)
{
	va_list ap;
	uint16 oldValue_07AE_0000;
	uint16 ret;
	uint16 oldValue_2598_0000;
	uint16 size = 0;

	va_start(ap, spriteID);
	vsnprintf(g_global->variable_87D8, sizeof(g_global->variable_87D8), str, ap);
	va_end(ap);

	emu_push(emu_cs); emu_push(0x02A4); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

	emu_push(0);
	emu_push(emu_cs); emu_push(0x02AC); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;
	oldValue_2598_0000 = emu_ax;

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x22);

	emu_push(1);
	emu_push(emu_cs); emu_push(0x02D7); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	emu_sp += 2;
	oldValue_07AE_0000 = emu_ax;

	emu_push(13);
	emu_push(((g_global->variable_992F - ((spriteID == 0xFFFF) ? 2 : 7)) << 3) - 6);
	emu_push(0x353F); emu_push(0x87D8);
	emu_push(emu_cs); emu_push(0x0304); f__10E4_01B8_0014_5104();
	emu_sp += 8;

	g_global->variable_4062[1][3] = g_global->variable_6C71 * max((int16)emu_ax, 3) + 18;

	emu_push(1);
	emu_push(emu_cs); emu_push(0x032C); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	emu_sp += 2;

	if (g_global->variable_3600.csip == 0x0) {
		emu_push(g_global->variable_9931);
		emu_push(g_global->variable_992F);
		emu_push(emu_cs); emu_push(0x0348); emu_cs = 0x22A6; f__22A6_127B_0036_F8C9();
		emu_sp += 4;

		size = emu_ax;

		emu_push(emu_cs); emu_push(0x0351); emu_cs = 0x23E1; f__23E1_0334_000B_CF65();

		if (((int32)((emu_dx << 16) | emu_ax)) >= size) {
			emu_push(0);
			emu_push(0); emu_push(size);
			emu_push(emu_cs); emu_push(0x0367); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
			emu_sp += 6;

			g_global->variable_3600.s.cs = emu_dx;
			g_global->variable_3600.s.ip = emu_ax;
		} else {
			size = 0;
		}
	}

	if (g_global->variable_3600.csip != 0x0) {
		emu_push(g_global->variable_3600.s.cs); emu_push(g_global->variable_3600.s.ip);
		emu_push(g_global->variable_9931);
		emu_push(g_global->variable_992F);
		emu_push(g_global->variable_992B);
		emu_push(g_global->variable_992D);
		emu_push(emu_cs); emu_push(0x03A0); emu_cs = 0x22A6; f__22A6_101C_004B_D9F3();
		emu_sp += 12;
	}

	emu_push(1);
	emu_push(1);
	emu_push(1);
	emu_push(emu_cs); emu_push(0x03B4); emu_GUI_Widget_DrawBorder();
	emu_sp += 6;

	if (spriteID != 0xFFFF) {
		emu_push(0x4000);
		emu_push(0x1);
		emu_push(0x8);
		emu_push(0x7);
		/* TODO -- Change this into an accessable array */
		emu_push(emu_get_memory16(0x2DCE, spriteID * 4, 0x442));
		emu_push(emu_get_memory16(0x2DCE, spriteID * 4, 0x440));
		emu_push(g_global->variable_6C91);
		emu_push(emu_cs); emu_push(0x03EC); emu_cs = 0x2903; emu_GUI_DrawSprite();
		emu_sp += 14;

		emu_push(g_global->variable_9931 - 16);
		emu_push(g_global->variable_992F - 7);
		emu_push(g_global->variable_992B + 8);
		emu_push(g_global->variable_992D + 5);
		emu_push(1);
		emu_push(emu_cs); emu_push(0x042F); emu_cs = 0x2599; f__2599_000B_0047_21FD();
		emu_sp += 10;
	} else {
		emu_push(g_global->variable_9931 - 16);
		emu_push(g_global->variable_992F - 2);
		emu_push(g_global->variable_992B + 8);
		emu_push(g_global->variable_992D + 1);
		emu_push(1);
		emu_push(emu_cs); emu_push(0x042F); emu_cs = 0x2599; f__2599_000B_0047_21FD();
		emu_sp += 10;
	}

	g_global->variable_6D59 = 0;
	g_global->variable_9933 = 0;
	g_global->variable_9935 = 0;

	GUI_DrawText(g_global->variable_87D8, g_global->variable_992D << 3, g_global->variable_992B, g_global->variable_6D5B & 0xFF, g_global->variable_6D59 & 0xFF);

	emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
	emu_push(emu_cs); emu_push(0x046E); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	emu_sp += 4;

	emu_push(emu_cs); emu_push(0x0475); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

	g_global->variable_76B4 = 30;

	while (g_global->variable_76B4 != 0) GUI_PaletteAnimate();

	emu_push(emu_cs); emu_push(0x0496); emu_cs = 0x29E8; emu_Input_History_Clear();

	do {
		GUI_PaletteAnimate();

		emu_push(emu_cs); emu_push(0x04A0); emu_cs = 0x29E8; f__29E8_07FA_0020_177A();
		ret = emu_ax;
	} while (ret == 0 || (ret & 0x800) != 0);

	emu_push(0x841);
	emu_push(emu_cs); emu_push(0x04B9); emu_cs = 0x29E8; emu_Input_HandleInput();
	emu_sp += 2;

	emu_push(emu_cs); emu_push(0x04BF); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

	if (spriteID != 0xFFFF) {
		emu_push(g_global->variable_9931 + 16);
		emu_push(g_global->variable_992F + 7);
		emu_push(g_global->variable_992B - 8);
		emu_push(g_global->variable_992D - 5);
		emu_push(1);
		emu_push(emu_cs); emu_push(0x0505); emu_cs = 0x2599; f__2599_000B_0047_21FD();
		emu_sp += 10;
	} else {
		emu_push(g_global->variable_9931 + 16);
		emu_push(g_global->variable_992F + 2);
		emu_push(g_global->variable_992B - 8);
		emu_push(g_global->variable_992D - 1);
		emu_push(1);
		emu_push(emu_cs); emu_push(0x0505); emu_cs = 0x2599; f__2599_000B_0047_21FD();
		emu_sp += 10;
	}

	if (g_global->variable_3600.csip != 0x0) {
		emu_push(g_global->variable_3600.s.cs); emu_push(g_global->variable_3600.s.ip);
		emu_push(g_global->variable_9931);
		emu_push(g_global->variable_992F);
		emu_push(g_global->variable_992B);
		emu_push(g_global->variable_992D);
		emu_push(emu_cs); emu_push(0x0533); emu_cs = 0x22A6; f__22A6_04F8_007A_6E25();
		emu_sp += 12;
	}

	emu_push(oldValue_07AE_0000);
	emu_push(emu_cs); emu_push(0x053E); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	emu_sp += 2;

	if (size != 0) {
		emu_push(g_global->variable_3600.s.cs); emu_push(g_global->variable_3600.s.ip);
		emu_push(emu_cs); emu_push(0x0550); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
		emu_sp += 4;

		g_global->variable_3600.csip = 0;
	} else {
		g_global->variable_3A12 = 1;
	}

	emu_push(oldValue_2598_0000);
	emu_push(emu_cs); emu_push(0x056E); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;

	emu_push(emu_cs); emu_push(0x0574); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

	return ret;
}

