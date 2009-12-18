/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../pool/structure.h"
#include "../pool/unit.h"
#include "../structure.h"
#include "../unit.h"
#include "widget.h"

extern void f__22A6_034F_000C_5E0A();
extern void f__22A6_0B60_006A_2F61();
extern void f__22A6_0C69_008C_017F();
extern void f__2427_0004_003B_B2A9();
extern void f__24D0_000D_0039_C17D();
extern void f__2598_0000_0017_EB80();
extern void f__260F_003A_0014_CA10();
extern void f__29E8_072F_000F_651A();
extern void f__29E8_0897_0016_2028();
extern void f__29E8_08B5_000A_FC14();
extern void f__2B6C_0197_00CE_4D32();
extern void f__2B6C_0292_0028_3AD7();
extern void emu_GUI_BuildPlace();
extern void emu_GUI_Cancel();
extern void emu_GUI_DrawText();
extern void emu_GUI_DrawText_Wrapper();
extern void emu_GUI_DrawWiredRectangle();
extern void emu_GUI_DrawSprite();
extern void emu_GUI_GetShortcut();
extern void emu_GUI_HOF_ClearList();
extern void emu_GUI_HOF_ResumeGame();
extern void emu_GUI_Mentat();
extern void emu_GUI_Mentat_Draw_ScrollBar();
extern void emu_GUI_Mentat_List();
extern void emu_GUI_Mentat_ScrollUp();
extern void emu_GUI_Mentat_ScrollDown();
extern void emu_GUI_Mentat_ScrollBar();
extern void emu_GUI_Name();
extern void emu_GUI_Options();
extern void emu_GUI_Picture();
extern void emu_GUI_Production_BuildThis();
extern void emu_GUI_Production_Down();
extern void emu_GUI_Production_List();
extern void emu_GUI_Production_ResumeGame();
extern void emu_GUI_Production_Up();
extern void emu_GUI_Production_Upgrade();
extern void emu_GUI_Purchase_Invoice();
extern void emu_GUI_Purchase_Minus();
extern void emu_GUI_Purchase_Plus();
extern void emu_GUI_RepairUpgrade();
extern void emu_GUI_String_Get_ByIndex();
extern void emu_GUI_Unit_Command();
extern void emu_GUI_Update97E5();
extern void emu_GUI_Widget_DrawBorder();
extern void emu_GUI_Widget_DrawBorder2();
extern void emu_String_Get_ByIndex();
extern void overlay(uint16 cs, uint8 force);

/**
 * Draw a text button widget to the display, relative to its parent.
 *
 * @param w The widget (which is a button) to draw.
 */
static void GUI_Widget_TextButton_Draw(Widget *w)
{
	uint16 old6C91;
	uint16 positionX, positionY;
	uint16 width, height;
	uint16 state, colour;

	if (w == NULL) return;

	emu_push(2);
	emu_push(emu_cs); emu_push(0x0F79); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
	emu_sp += 2;
	old6C91 = emu_ax;

	positionX = w->offsetX + (g_global->variable_4062[w->parentID][0] << 3);
	positionY = w->offsetY +  g_global->variable_4062[w->parentID][1];
	width     = w->width;
	height    = w->height;

	g_global->variable_4062[19][0] = positionX >> 3;
	g_global->variable_4062[19][1] = positionY;
	g_global->variable_4062[19][2] = width >> 3;
	g_global->variable_4062[19][3] = height;

	state  = ((w->state & 0x0001) != 0) ? 0 : 2;
	colour = ((w->state & 0x0004) != 0) ? 0xE7 : 0xE8;

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

	if (old6C91 == 0) {
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

	emu_push(old6C91);
	emu_push(emu_cs); emu_push(0x10F5); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
	emu_sp += 2;

	emu_ax = 0;
}

/**
 * Draw a sprite button widget to the display, relative to 0,0.
 *
 * @param w The widget (which is a button) to draw.
 */
static void GUI_Widget_SpriteButton_Draw(Widget *w)
{
	uint16 old6C91;
	uint16 positionX, positionY;
	uint16 width, height;
	uint16 spriteID;
	bool buttonDown;

	assert(g_global->variable_6624.csip == 0x22A6034F);

	if (w == NULL) return;

	spriteID = 0;
	if (g_global->selectionUnit.csip != 0x0) {
		UnitInfo *ui;
		Unit *u;

		u = Unit_Get_ByMemory(g_global->selectionUnit);
		ui = &g_unitInfo[u->type];

		spriteID = ui->spriteID;
	} else {
		StructureInfo *si;
		Structure *s;

		s = Structure_Get_ByPackedTile(g_global->selectionPosition);
		if (s == NULL) return;
		si = &g_structureInfo[s->type];

		spriteID = si->spriteID;
	}

	old6C91 = g_global->variable_6C91;
	if (old6C91 == 0) {
		emu_push(2);
		emu_push(emu_cs); emu_push(0x0CC9); emu_cs = 0x2598; f__2598_0000_0017_EB80();
		emu_sp += 2;
	}

	buttonDown = ((w->state & 0x0004) != 0) ? true : false;

	positionX = w->offsetX;
	positionY = w->offsetY;
	width     = w->width;
	height    = w->height;

	emu_push(0xC);
	emu_push(positionY + height);
	emu_push(positionX + width);
	emu_push(positionY - 1);
	emu_push(positionX - 1);
	emu_push(emu_cs); emu_push(0x0D7F); emu_cs = 0x251B; emu_GUI_DrawWiredRectangle();
	emu_sp += 10;

	emu_push(buttonDown ? 1 : 0);
	emu_push(g_global->variable_3C3A.s.cs); emu_push(g_global->variable_3C3A.s.ip);
	emu_push(0x100);
	emu_push(0);
	emu_push(positionY);
	emu_push(positionX);
	/* TODO -- Change this into an accessable array */
	emu_push(emu_get_memory16(0x2DCE, spriteID * 4, 0x442));
	emu_push(emu_get_memory16(0x2DCE, spriteID * 4, 0x440));
	emu_push(g_global->variable_6C91);
	emu_push(emu_cs); emu_push(0x0DB5); emu_cs = 0x2903; emu_GUI_DrawSprite();
	emu_sp += 20;

	emu_push(0);
	emu_push(buttonDown ? 0 : 1);
	emu_push(height);
	emu_push(width);
	emu_push(positionY);
	emu_push(positionX);
	emu_push(emu_cs); emu_push(0x0DD1); emu_cs = 0x10E4; emu_GUI_Widget_DrawBorder2();
	emu_sp += 12;

	if (old6C91 != 0) return;

	emu_push(positionY + height + 1);
	emu_push(positionX + width + 1);
	emu_push(positionY - 1);
	emu_push(positionX - 1);
	emu_push(emu_cs); emu_push(0x0DF5); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	emu_sp += 8;

	emu_push(0);
	emu_push(2);
	emu_push(height + 2);
	emu_push(width + 2);
	emu_push(positionY - 1);
	emu_push(positionX - 1);
	emu_push(positionY - 1);
	emu_push(positionX - 1);
	emu_push(emu_cs); emu_push(0x0E27); emu_cs = 0x22A6; f__22A6_034F_000C_5E0A();
	emu_sp += 16;

	emu_push(emu_cs); emu_push(0x0E2F); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();

	emu_push(0);
	emu_push(emu_cs); emu_push(0x0E37); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;
}

/**
 * Draw a sprite/text button widget to the display, relative to 0,0.
 *
 * @param w The widget (which is a button) to draw.
 */
static void GUI_Widget_SpriteTextButton_Draw(Widget *w)
{
	uint16 old6C91;
	Structure *s;
	uint16 positionX, positionY;
	uint16 width, height;
	uint16 spriteID;
	uint16 percentDone;
	bool buttonDown;

	assert(g_global->variable_6624.csip == 0x22A6034F);

	if (w == NULL) return;

	spriteID    = 0;
	percentDone = 0;

	s = Structure_Get_ByPackedTile(g_global->selectionPosition);
	if (s == NULL) return;

	emu_push(emu_cs); emu_push(0x0846); emu_cs = 0x10E4; emu_GUI_Update97E5();

	old6C91 = g_global->variable_6C91;
	if (old6C91 == 0) {
		emu_push(2);
		emu_push(emu_cs); emu_push(0x085B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
		emu_sp += 2;
	}

	buttonDown = ((w->state & 0x0004) != 0) ? true : false;

	positionX = w->offsetX;
	positionY = w->offsetY;
	width     = w->width;
	height    = w->height;

	emu_push(0xC);
	emu_push(positionY + height);
	emu_push(positionX + width);
	emu_push(positionY - 1);
	emu_push(positionX - 1);
	emu_push(emu_cs); emu_push(0x08B0); emu_cs = 0x251B; emu_GUI_DrawWiredRectangle();
	emu_sp += 10;

	emu_push(1);
	emu_push(buttonDown ? 0 : 1);
	emu_push(height);
	emu_push(width);
	emu_push(positionY);
	emu_push(positionX);
	emu_push(emu_cs); emu_push(0x08CD); emu_cs = 0x10E4; emu_GUI_Widget_DrawBorder2();
	emu_sp += 12;

	switch (g_global->variable_97E5) {
		case 0x2A: /* "Launch" */
			spriteID = 0x1E;
			break;

		case 0x2B: /* "Fremen" */
			spriteID = 0x5E;
			break;

		case 0x2C: /* "Saboteur" */
			spriteID = 0x60;
			break;

		case 0x90: /* "Upgrading|%d%% done" */
		default:
			spriteID = 0x0;
			break;

		case 0x26: /* "Place it" */
		case 0x27: /* "Completed" */
		case 0x28: /* "On hold" */
		case 0x29: /* "Build it" */
		case 0x2E: /* "%d%% done" */
			if (s->type == STRUCTURE_CONSTRUCTION_YARD) {
				StructureInfo *si;
				uint16 spriteWidth;
				uint16 x, y;

				emu_push(buttonDown ? 2 : 0);
				emu_push(g_global->variable_3C3A.s.cs); emu_push(g_global->variable_3C3A.s.ip);
				emu_push(0x100);
				emu_push(0);
				emu_push(positionY + 5);
				emu_push(positionX + 37);
				emu_push(emu_get_memory16(0x2DCE, 63 * 4, 0x442));
				emu_push(emu_get_memory16(0x2DCE, 63 * 4, 0x440));
				emu_push(g_global->variable_6C91);
				emu_push(emu_cs); emu_push(0x0936); emu_cs = 0x2903; emu_GUI_DrawSprite();
				emu_sp += 20;

				emu_push(emu_get_memory16(0x2DCE, 24 * 4, 0x442));
				emu_push(emu_get_memory16(0x2DCE, 24 * 4, 0x440));
				emu_push(emu_cs); emu_push(0x0958); emu_cs = 0x260F; f__260F_003A_0014_CA10();
				emu_sp += 4;
				spriteWidth = emu_ax + 1;

				si = &g_structureInfo[s->buildingType];

				for (y = 0; y < g_global->layoutSize[si->layout][1]; y++) {
					for (x = 0; x < g_global->layoutSize[si->layout][0]; x++) {
						emu_push(0);
						emu_push(0);
						emu_push(positionY + y * spriteWidth + 6);
						emu_push(positionX + x * spriteWidth + 38);
						emu_push(emu_get_memory16(0x2DCE, 24 * 4, 0x442));
						emu_push(emu_get_memory16(0x2DCE, 24 * 4, 0x440));
						emu_push(g_global->variable_6C91);
						emu_push(emu_cs); emu_push(0x09D0); emu_cs = 0x2903; emu_GUI_DrawSprite();
						emu_sp += 14;
					}
				}

				spriteID = si->spriteID;
			} else {
				UnitInfo *ui;

				ui = &g_unitInfo[s->buildingType];
				spriteID = ui->spriteID;
			}
			break;
	}

	if (spriteID != 0) {
		emu_push(buttonDown ? 1 : 0);
		emu_push(g_global->variable_3C3A.s.cs); emu_push(g_global->variable_3C3A.s.ip);
		emu_push(0x100);
		emu_push(0);
		emu_push(positionY + 2);
		emu_push(positionX + 2);
		emu_push(emu_get_memory16(0x2DCE, spriteID * 4, 0x442));
		emu_push(emu_get_memory16(0x2DCE, spriteID * 4, 0x440));
		emu_push(g_global->variable_6C91);
		emu_push(emu_cs); emu_push(0x0A7E); emu_cs = 0x2903; emu_GUI_DrawSprite();
		emu_sp += 20;
	}

	if (g_global->variable_97E5 == 0x2E) { /* "%d%% done" */
		uint16 buildTime;
		uint16 timeLeft;

		if (s->type == STRUCTURE_CONSTRUCTION_YARD) {
			StructureInfo *si;

			si = &g_structureInfo[s->buildingType];
			buildTime = si->buildTime;
		} else if (s->type == STRUCTURE_REPAIR) {
			UnitInfo *ui;

			if (s->linkedID == 0xFF) return;

			ui = &g_unitInfo[Unit_Get_ByIndex(s->linkedID)->type];
			buildTime = ui->buildTime;
		} else {
			UnitInfo *ui;

			ui = &g_unitInfo[s->buildingType];
			buildTime = ui->buildTime;
		}

		timeLeft = buildTime - (s->countDown + 255) / 256;
		percentDone = 100 * timeLeft / buildTime;
	}

	if (g_global->variable_97E5 == 0x90) { /* "Upgrading|%d%% done" */
		percentDone = 100 - s->upgradeTimeLeft;

		emu_push(percentDone);
		emu_push(0x21);
		emu_push(0);
		emu_push(buttonDown ? 0xE : 0xF);
		emu_push(positionY + height - 19);
		emu_push(positionX + 1);

		emu_push(g_global->variable_97E5);
		emu_push(emu_cs); emu_push(0x0B69); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
		emu_sp += 2;

		emu_push(emu_dx); emu_push(emu_ax);
		emu_push(emu_cs); emu_push(0x0B71); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
		emu_sp += 16;
	} else {
		emu_push(percentDone);
		emu_push(0x121);
		emu_push(0);
		emu_push((g_global->variable_97E5 == 0x26) ? 0xEF : (buttonDown ? 0xE : 0xF)); /* "Place it" */
		emu_push(positionY + height - 9);
		emu_push(positionX + width / 2);

		emu_push(g_global->variable_97E5);
		emu_push(emu_cs); emu_push(0x0BC1); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
		emu_sp += 2;

		emu_push(emu_dx); emu_push(emu_ax);
		emu_push(emu_cs); emu_push(0x0BC9); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
		emu_sp += 16;
	}

	if (g_global->variable_97E5 == 0x2E || g_global->variable_97E5 == 0x90) { /* "%d%% done" / "Upgrading|%d%% done" */
		emu_push(0x28); /* "On hold" */
	} else {
		emu_push(g_global->variable_97E5);
	}
	emu_push(emu_cs); emu_push(0x0BFC); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	emu_sp += 2;

	emu_push(emu_get_memory8(emu_dx, emu_ax, 0x0));
	emu_push(emu_cs); emu_push(0x0BE4); emu_cs = 0x29DA; emu_GUI_GetShortcut();
	emu_sp += 2;
	w->shortcut = emu_ax;

	if (old6C91 != 0x0) return;

	emu_push(positionY + height + 1);
	emu_push(positionX + width + 1);
	emu_push(positionY - 1);
	emu_push(positionX - 1);
	emu_push(emu_cs); emu_push(0x0C34); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	emu_sp += 8;

	emu_push(0);
	emu_push(2);
	emu_push(height + 2);
	emu_push(width + 2);
	emu_push(positionY - 1);
	emu_push(positionX - 1);
	emu_push(positionY - 1);
	emu_push(positionX - 1);
	emu_push(emu_cs); emu_push(0x0C66); emu_cs = 0x22A6; f__22A6_034F_000C_5E0A();
	emu_sp += 16;

	emu_push(emu_cs); emu_push(0x0C6E); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();

	emu_push(0);
	emu_push(emu_cs); emu_push(0x0C76); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;
}

/**
 * Draw a text button widget to the display, relative to 0,0.
 *
 * @param w The widget (which is a button) to draw.
 */
static void GUI_Widget_TextButton2_Draw(Widget *w)
{
	uint16 old6C91;
	uint16 stringID;
	uint16 positionX, positionY;
	uint16 width, height;
	uint16 colour;
	bool buttonSelected;
	bool buttonDown;

	assert(g_global->variable_6624.csip == 0x22A6034F);

	if (w == NULL) return;

	old6C91 = g_global->variable_6C91;
	if (old6C91 == 0) {
		emu_push(2);
		emu_push(emu_cs); emu_push(0x0E66); emu_cs = 0x2598; f__2598_0000_0017_EB80();
		emu_sp += 2;

	}

	stringID = w->stringID;

	buttonSelected = ((w->state & 0x0001) != 0) ? true : false;
	buttonDown     = ((w->state & 0x0004) != 0) ? true : false;

	positionX = w->offsetX;
	positionY = w->offsetY;
	width     = w->width;
	height    = w->height;

	emu_push(0xC);
	emu_push(positionY + height);
	emu_push(positionX + width);
	emu_push(positionY - 1);
	emu_push(positionX - 1);
	emu_push(emu_cs); emu_push(0x0EDA); emu_cs = 0x251B; emu_GUI_DrawWiredRectangle();
	emu_sp += 10;

	emu_push(1);
	emu_push(buttonDown ? 0 : 1);
	emu_push(height);
	emu_push(width);
	emu_push(positionY);
	emu_push(positionX);
	emu_push(emu_cs); emu_push(0x0EF7); emu_cs = 0x10E4; emu_GUI_Widget_DrawBorder2();
	emu_sp += 12;

	colour = 0xF;
	if (buttonSelected) {
		colour = 0x6;
	} else if (buttonDown) {
		colour = 0xE;
	}

	if (!buttonDown && stringID == 0x22) { /* "Repair" */
		colour = 0xEF;
	}

	emu_push(0x121);
	emu_push(0);
	emu_push(colour);
	emu_push(positionY + 1);
	emu_push(positionX + width / 2);

	emu_push(stringID);
	emu_push(emu_cs); emu_push(0x0F44); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	emu_sp += 2;

	emu_push(emu_dx); emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F4C); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	emu_sp += 14;

	emu_push(stringID);
	emu_push(emu_cs); emu_push(0x0F57); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	emu_sp += 2;

	emu_push(emu_get_memory8(emu_dx, emu_ax, 0x0));
	emu_push(emu_cs); emu_push(0x0F66); emu_cs = 0x29DA; emu_GUI_GetShortcut();
	emu_sp += 2;
	w->shortcut = emu_ax;

	if (old6C91 != 0) return;

	emu_push(positionY + height + 1);
	emu_push(positionX + width + 1);
	emu_push(positionY - 1);
	emu_push(positionX - 1);
	emu_push(emu_cs); emu_push(0x0F8F); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	emu_sp += 8;

	emu_push(0);
	emu_push(2);
	emu_push(height + 2);
	emu_push(width + 2);
	emu_push(positionY - 1);
	emu_push(positionX - 1);
	emu_push(positionY - 1);
	emu_push(positionX - 1);
	emu_push(emu_cs); emu_push(0x0FC1); emu_cs = 0x22A6; f__22A6_034F_000C_5E0A();
	emu_sp += 16;

	emu_push(emu_cs); emu_push(0x0FC9); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();

	emu_push(0);
	emu_push(emu_cs); emu_push(0x0FD1); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;
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

	if ((w->flags & 0x08) != 0) {
		if ((w->flags & 0x10) == 0) return;

		emu_push(g_global->variable_6D53);
		emu_push(wcsip.s.cs); emu_push(wcsip.s.ip);
		emu_push(emu_cs); emu_push(0x0761); emu_cs = 0x2427; f__2427_0004_003B_B2A9();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
		emu_sp += 6;

		return;
	}

	if ((w->state & 0x0004) == 0) {
		if ((w->state & 0x0001) == 0) {
			drawMode   = w->drawModeNormal;
			drawProc   = w->drawProcNormal;
			drawParam1 = w->drawParam1Normal;
			drawParam2 = w->drawParam2Normal;
		} else {
			drawMode   = w->drawModeSelected;
			drawProc   = w->drawProcSelected;
			drawParam1 = w->drawParam1Selected;
			drawParam2 = w->drawParam2Selected;

		}
	} else {
		drawMode   = w->drawModeDown;
		drawProc   = w->drawProcDown;
		drawParam1 = w->drawParam1Down;
		drawParam2 = w->drawParam2Down;
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

		case DRAW_MODE_SPRITE: {
			emu_push(0x4000);
			emu_push(w->parentID);
			emu_push(offsetY);
			emu_push(offsetX);
			emu_push(drawProc.s.cs); emu_push(drawProc.s.ip);
			emu_push(g_global->variable_6C91);
			emu_push(emu_cs); emu_push(0x08E5); emu_cs = 0x2903; emu_GUI_DrawSprite();
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
				case 0x0AEC0809: GUI_Widget_SpriteTextButton_Draw(w); return;
				case 0x0AEC0CA1: GUI_Widget_SpriteButton_Draw(w); return;
				case 0x0AEC0E3E: GUI_Widget_TextButton2_Draw(w); return;
				case 0x34F20061: GUI_Widget_TextButton_Draw(w); return;
			}

			emu_push(wcsip.s.cs); emu_push(wcsip.s.ip);

			/* Call based on memory/register values */
			emu_push(emu_cs); emu_push(0x0944);
			emu_ip = drawProc.s.ip;
			emu_cs = drawProc.s.cs;
			switch ((emu_cs << 16) + emu_ip) {
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

/**
 * Check a widget for events like 'hover' or 'click'. Also check the keyboard
 *  buffer if there was any key which should active us.
 *
 * @param w The widget to handle events for. If the widget has a valid next
 *   pointer, those widgets are handled too.
 * @param wcsip TODO -- TEMPORARY -- The csip to the widget.
 * @return The last key pressed, or 0 if the key pressed was handled (or if
 *   there was no key press).
 */
uint16 GUI_Widget_HandleEvents(Widget *w, csip32 wcsip)
{
	uint16 mouseX, mouseY;
	uint16 buttonState;
	uint16 returnValue;
	uint16 key;
	bool fakeClick;

	/* Get the key from the buffer, if there was any key pressed */
	key = 0;
	emu_push(emu_cs); emu_push(0x0044); emu_cs = 0x29E8; f__29E8_072F_000F_651A();
	if (emu_ax != 0) {
		emu_push(emu_cs); emu_push(0x004D); emu_cs = 0x29E8; f__29E8_0897_0016_2028();
		key = emu_ax;
	}

	if (w == NULL) return key & 0x7FFF;

	/* First time this window is being drawn? */
	if (wcsip.csip != g_global->widgetCurrentFirst.csip || g_global->widgetReset != 0) {
		g_global->widgetCurrentFirst    = wcsip;
		g_global->widgetSelected.csip   = 0x0;
		g_global->widgetLastButtonState = 0x0;
		g_global->widgetReset           = 0;

		/* Check for left click */
		emu_push(0x41);
		emu_push(emu_cs); emu_push(0x00B5); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
		emu_sp += 2;
		if (emu_ax != 0) g_global->widgetLastButtonState |= 0x0200;

		/* Check for right click */
		emu_push(0x42);
		emu_push(emu_cs); emu_push(0x00C9); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
		emu_sp += 2;
		if (emu_ax != 0) g_global->widgetLastButtonState |= 0x2000;

		/* Draw all the widgets */
		for (; wcsip.csip != 0x0; wcsip = w->next) {
			w = (Widget *)emu_get_memorycsip(wcsip);
			GUI_Widget_Draw(w, wcsip);
		}
	}

	mouseX = g_global->mouseX;
	mouseY = g_global->mouseY;

	buttonState = 0;
	if (g_global->variable_7097 == 0) {
		uint16 buttonStateChange = 0;

		/* See if the key was a mouse button action */
		if ((key & 0x8000) != 0) {
			if ((key & 0x00FF) == 0xC7) buttonStateChange = 0x1000;
			if ((key & 0x00FF) == 0xC6) buttonStateChange = 0x0100;
		} else {
			if ((key & 0x00FF) == 0x42) buttonStateChange = 0x1000;
			if ((key & 0x00FF) == 0x41) buttonStateChange = 0x0100;
		}

		/* Mouse button up */
		if ((key & 0x0800) != 0) {
			buttonStateChange <<= 2;
		}

		if (buttonStateChange != 0) {
			mouseX = g_global->mouseClickX;
			mouseY = g_global->mouseClickY;
		}

		/* Disable when release, enable when click */
		g_global->widgetLastButtonState &= ~((buttonStateChange & 0x4400) >> 1);
		g_global->widgetLastButtonState |=   (buttonStateChange & 0x1100) << 1;

		buttonState |= buttonStateChange;
		buttonState |= g_global->widgetLastButtonState;
		buttonState |= (g_global->widgetLastButtonState << 2) ^ 0x8800;
	}

	wcsip = g_global->widgetCurrentFirst;
	if (g_global->widgetSelected.csip != 0x0) {
		wcsip = g_global->widgetSelected;
		w = (Widget *)emu_get_memorycsip(wcsip);

		if ((w->flags & 0x08) != 0) {
			g_global->widgetSelected.csip = 0x0;
		}
	}

	returnValue = 0;
	for (; wcsip.csip != 0x0; wcsip = w->next) {
		uint16 positionX, positionY;
		bool triggerWidgetHover;
		bool widgetHover;
		bool widgetClick;

		w = (Widget *)emu_get_memorycsip(wcsip);

		if ((w->flags & 0x08) != 0) continue;

		/* Store the previous button state */
		w->state &= 0xFFE7;
		w->state |= (w->state & 0x3) << 3;

		positionX = w->offsetX;
		if (w->offsetX < 0) positionX += (g_global->variable_4062[w->parentID][2] << 3);
		positionX += g_global->variable_4062[w->parentID][0] << 3;

		positionY = w->offsetY;
		if (w->offsetY < 0) positionY += g_global->variable_4062[w->parentID][3];
		positionY += g_global->variable_4062[w->parentID][1];

		widgetHover = false;
		w->state &= 0xFF7F;

		/* Check if the mouse is inside the widget */
		if (positionX <= mouseX && mouseX <= positionX + w->width && positionY <= mouseY && mouseY <= positionY + w->height) {
			widgetHover = true;
		}

		/* Check if there was a keypress for the widget */
		if ((key & 0x7F) != 0 && ((key & 0x7F) == w->shortcut || (key & 0x7F) == w->shortcut2)) {
			widgetHover = true;
			w->state |= 0x0080;
			key = 0;

			buttonState = 0;
			if ((key & 0x7F) == w->shortcut2) buttonState = w->flags & 0xF000;
			if (buttonState == 0) buttonState = w->flags & 0x0F00;

			g_global->widgetSelected = wcsip;
		}

		/* Update the hover state */
		w->state &= 0xFFF9;
		if (widgetHover) {
			/* Button pressed, and click is hover */
			if ((buttonState & 0x3300) != 0 && (w->flags & 0x4) != 0 && (wcsip.csip == g_global->widgetSelected.csip || g_global->widgetSelected.csip == 0x0)) {
				w->state |= 0x0006;

				/* If we don't have a selected widget yet, this will be the one */
				if (g_global->widgetSelected.csip == 0x0) g_global->widgetSelected = wcsip;
			}
			/* No button pressed, and click not is hover */
			if ((buttonState & 0x8800) != 0 && (w->flags & 0x4) == 0) {
				w->state |= 0x0006;
			}
		}

		/* Check if we should trigger the hover activation */
		triggerWidgetHover = widgetHover;
		if (g_global->widgetSelected.csip != 0x0) {
			Widget *ws;

			ws = (Widget *)emu_get_memorycsip(g_global->widgetSelected);
			if ((ws->flags & 0x40) != 0) {
				triggerWidgetHover = (ws == w) ? true : false;
			}
		}

		widgetClick = false;
		if (triggerWidgetHover) {
			/* We click this widget for the first time */
			if ((buttonState & 0x1100) != 0 && g_global->widgetSelected.csip == 0x0) {
				g_global->widgetSelected = wcsip;
				key = 0;
			}

			/* Check if we want to consider this as click */
			if ((buttonState & w->flags) != 0 && (widgetHover || (w->flags & 0x01) == 0)) {
				uint16 buttonStateFilter;
				buttonStateFilter = buttonState & w->flags;

				if ((buttonStateFilter & 0x1100) != 0) {
					/* Widget click */
					w->state ^= 0x0001;
					returnValue = w->index | 0x8000;
					widgetClick = true;

					if ((w->flags & 0x04) != 0) w->state |= 0x0006;
					g_global->widgetSelected = wcsip;
				} else if ((buttonStateFilter & 0x2200) != 0) {
					/* Widget was already clicked */
					if ((w->flags & 0x04) == 0) w->state |= 0x0006;
					if ((w->flags & 0x01) == 0) widgetClick = true;
				} else if ((buttonStateFilter & 0x4400) != 0) {
					/* Widget release */
					if ((w->flags & 0x01) == 0 || ((w->flags & 0x01) != 0 && wcsip.csip == g_global->widgetSelected.csip)) {
						w->state ^= 0x0001;
						returnValue = w->index | 0x8000;
						widgetClick = true;
					}

					if ((w->flags & 0x04) == 0) w->state &= 0xFFF9;
				} else {
					/* Widget was already released */
					if ((w->flags & 0x04) != 0) w->state |= 0x0006;
					if ((w->flags & 0x01) == 0) widgetClick = true;
				}
			}
		}

		fakeClick = false;
		/* Check if we are hovering and have mouse button down */
		if (widgetHover && (buttonState & 0x2200) != 0) {
			w->state |= 0x0006;

			if ((w->flags & 0x04) == 0 && (w->state & 0x0001) == 0) {
				fakeClick = true;
				w->state |= 0x0001;
			}
		}

		/* Check if we are not pressing a button */
		if ((buttonState & 0x8800) == 0x8800) {
			g_global->widgetSelected.csip = 0x0;

			if (!widgetHover || (w->flags & 0x04) != 0) w->state &= 0xFFF9;
		}

		if (!widgetHover && g_global->widgetSelected.csip == wcsip.csip && (w->flags & 0x40) == 0) {
			g_global->widgetSelected.csip = 0x0;
		}

		/* When the state changed, redraw */
		if ((w->state & 0x0018) != ((w->state & 0x0003) << 3)) {
			GUI_Widget_Draw(w, wcsip);
		}

		/* Reset click state when we were faking it */
		if (fakeClick) {
			w->state &= 0xFFFE;
		}

		if (widgetClick) {
			w->state &= 0x00FF;
			w->state |= buttonState;

			if (w->clickProc.csip != 0x0) {
				bool success = false;

				switch (w->clickProc.csip) {
					case 0x0AEC004F: success = GUI_Widget_Viewport_Click(w); break;

					default:
						emu_push(wcsip.s.cs);
						emu_push(wcsip.s.ip);

						/* Call based on memory/register values */
						emu_push(emu_cs); emu_push(0x06B0);
						emu_ip = w->clickProc.s.ip;
						emu_cs = w->clickProc.s.cs;
						switch ((emu_cs << 16) + emu_ip) {
							case 0x0AEC0005: emu_GUI_Name(); break;
							case 0x0AEC0FD8: emu_GUI_Cancel(); break;
							case 0x0AEC1093: emu_GUI_BuildPlace(); break;
							case 0x0AEC1181: emu_GUI_Picture(); break;
							case 0x0AEC11F6: emu_GUI_RepairUpgrade(); break;
							case 0x1A341CB1: emu_GUI_Unit_Command(); break;
							case 0x34950025: overlay(0x3495, 0); emu_GUI_Production_Down(); break;
							case 0x3495002A: overlay(0x3495, 0); emu_GUI_Production_Up(); break;
							case 0x3495002F: overlay(0x3495, 0); emu_GUI_Production_BuildThis(); break;
							case 0x34950034: overlay(0x3495, 0); emu_GUI_Production_ResumeGame(); break;
							case 0x34950039: overlay(0x3495, 0); emu_GUI_Production_Upgrade(); break;
							case 0x3495003E: overlay(0x3495, 0); emu_GUI_Production_List(); break;
							case 0x34950043: overlay(0x3495, 0); emu_GUI_Purchase_Plus(); break;
							case 0x34950048: overlay(0x3495, 0); emu_GUI_Purchase_Minus(); break;
							case 0x3495004D: overlay(0x3495, 0); emu_GUI_Purchase_Invoice(); break;
							case 0x34E0002A: overlay(0x34E0, 0); emu_GUI_Mentat_List(); break;
							case 0x34E9002F: overlay(0x34E9, 0); emu_GUI_Mentat(); break;
							case 0x34F20025: overlay(0x34F2, 0); emu_GUI_Options(); break;
							case 0x35180034: overlay(0x3518, 0); emu_GUI_HOF_ClearList(); break;
							case 0x35180039: overlay(0x3518, 0); emu_GUI_HOF_ResumeGame(); break;
							case 0x35200039: overlay(0x3520, 0); emu_GUI_Mentat_ScrollUp(); break;
							case 0x3520003E: overlay(0x3520, 0); emu_GUI_Mentat_ScrollDown(); break;
							case 0x35200043: overlay(0x3520, 0); emu_GUI_Mentat_ScrollBar(); break;
							default:
								/* In case we don't know the call point yet, call the dynamic call */
								emu_last_cs = 0xB4A2; emu_last_ip = 0x06AC; emu_last_length = 0x0030; emu_last_crc = 0x38D3;
								emu_call();
								return key & 0x7FFF;
						}

						/* Check if this overlay should be reloaded */
						if (emu_cs == 0x34A2) { overlay(0x34A2, 1); }
						emu_sp += 4;

						success = (emu_ax != 0) ? true : false;
						break;
				}

				/* If Click was successful, don't handle any other widgets */
				if (success) break;
			}

			/* On click, don't handle any other widgets */
			if ((w->flags & 0x20) != 0) break;
		}

		/* If we are selected and we lose selection on leave, don't try other widgets */
		if (wcsip.csip == g_global->widgetSelected.csip && (w->flags & 0x40) != 0) break;
	}

	if (returnValue != 0) return returnValue;
	return key & 0x7FFF;
}
