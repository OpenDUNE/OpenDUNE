/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../pool/unit.h"
#include "../structure.h"
#include "../unit.h"
#include "widget.h"
#include "gui.h"
#include "../string.h"
#include "../sprites.h"

extern void f__22A6_034F_000C_5E0A();
extern void f__24D0_000D_0039_C17D();
extern void f__2598_0000_0017_EB80();
extern void f__2B6C_0197_00CE_4D32();
extern void f__2B6C_0292_0028_3AD7();
extern void f__B4E0_0A86_000E_D3BB();
extern void emu_GUI_DrawText_Wrapper();
extern void emu_GUI_DrawFilledRectangle();
extern void emu_GUI_String_Get_ByIndex();
extern void emu_GUI_Widget_DrawBorder();
extern void emu_GUI_Widget_DrawBorder2();
extern void overlay(uint16 cs, uint8 force);

/**
 * Draw a text button widget to the display, relative to its parent.
 *
 * @param w The widget (which is a button) to draw.
 */
void GUI_Widget_TextButton_Draw(Widget *w)
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
void GUI_Widget_SpriteButton_Draw(Widget *w)
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
		ui = &g_unitInfo[u->o.type];

		spriteID = ui->o.spriteID;
	} else {
		StructureInfo *si;
		Structure *s;

		s = Structure_Get_ByPackedTile(g_global->selectionPosition);
		if (s == NULL) return;
		si = &g_structureInfo[s->o.type];

		spriteID = si->o.spriteID;
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

	GUI_DrawWiredRectangle(positionX - 1, positionY - 1, positionX + width, positionY + height, 12);

	GUI_DrawSprite(g_global->variable_6C91, g_sprites[spriteID], positionX, positionY, 0, 0x100, emu_get_memorycsip(g_global->variable_3C3A), buttonDown ? 1 : 0);

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
void GUI_Widget_SpriteTextButton_Draw(Widget *w)
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

	GUI_UpdateProductionStringID();

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

	GUI_DrawWiredRectangle(positionX - 1, positionY - 1, positionX + width, positionY + height, 12);

	emu_push(1);
	emu_push(buttonDown ? 0 : 1);
	emu_push(height);
	emu_push(width);
	emu_push(positionY);
	emu_push(positionX);
	emu_push(emu_cs); emu_push(0x08CD); emu_cs = 0x10E4; emu_GUI_Widget_DrawBorder2();
	emu_sp += 12;

	switch (g_global->productionStringID) {
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
			if (s->o.type == STRUCTURE_CONSTRUCTION_YARD) {
				StructureInfo *si;
				uint16 spriteWidth;
				uint16 x, y;

				GUI_DrawSprite(g_global->variable_6C91, g_sprites[63], positionX + 37, positionY + 5, 0, 0x100, emu_get_memorycsip(g_global->variable_3C3A), buttonDown ? 2 : 0);

				spriteWidth = Sprite_GetWidth(g_sprites[24]) + 1;

				si = &g_structureInfo[s->objectType];

				for (y = 0; y < g_global->layoutSize[si->layout][1]; y++) {
					for (x = 0; x < g_global->layoutSize[si->layout][0]; x++) {
						GUI_DrawSprite(g_global->variable_6C91, g_sprites[24], positionX + x * spriteWidth + 38, positionY + y * spriteWidth + 6, 0, 0);
					}
				}

				spriteID = si->o.spriteID;
			} else {
				UnitInfo *ui;

				ui = &g_unitInfo[s->objectType];
				spriteID = ui->o.spriteID;
			}
			break;
	}

	if (spriteID != 0) GUI_DrawSprite(g_global->variable_6C91, g_sprites[spriteID], positionX + 2, positionY + 2, 0, 0x100, emu_get_memorycsip(g_global->variable_3C3A), buttonDown ? 1 : 0);

	if (g_global->productionStringID == 0x2E) { /* "%d%% done" */
		uint16 buildTime;
		uint16 timeLeft;

		if (s->o.type == STRUCTURE_CONSTRUCTION_YARD) {
			StructureInfo *si;

			si = &g_structureInfo[s->objectType];
			buildTime = si->o.buildTime;
		} else if (s->o.type == STRUCTURE_REPAIR) {
			UnitInfo *ui;

			if (s->o.linkedID == 0xFF) return;

			ui = &g_unitInfo[Unit_Get_ByIndex(s->o.linkedID)->o.type];
			buildTime = ui->o.buildTime;
		} else {
			UnitInfo *ui;

			ui = &g_unitInfo[s->objectType];
			buildTime = ui->o.buildTime;
		}

		timeLeft = buildTime - (s->countDown + 255) / 256;
		percentDone = 100 * timeLeft / buildTime;
	}

	if (g_global->productionStringID == 0x90) { /* "Upgrading|%d%% done" */
		percentDone = 100 - s->upgradeTimeLeft;

		GUI_DrawText_Wrapper(
			String_Get_ByIndex(g_global->productionStringID),
			positionX + 1,
			positionY + height - 19,
			buttonDown ? 0xE : 0xF,
			0,
			0x021,
			percentDone
		);
	} else {
		GUI_DrawText_Wrapper(
			String_Get_ByIndex(g_global->productionStringID),
			positionX + width / 2,
			positionY + height - 9,
			(g_global->productionStringID == 0x26) ? 0xEF : (buttonDown ? 0xE : 0xF), /* "Place it" */
			0,
			0x121,
			percentDone
		);
	}

	if (g_global->productionStringID == 0x2E || g_global->productionStringID == 0x90) { /* "%d%% done" / "Upgrading|%d%% done" */
		w->shortcut = GUI_Widget_GetShortcut(*String_Get_ByIndex(0x28)); /* "On hold" */
	} else {
		w->shortcut = GUI_Widget_GetShortcut(*String_Get_ByIndex(g_global->productionStringID));
	}

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
void GUI_Widget_TextButton2_Draw(Widget *w)
{
	uint16 old6C91;
	uint16 stringID;
	uint16 positionX, positionY;
	uint16 width, height;
	uint8 colour;
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

	GUI_DrawWiredRectangle(positionX - 1, positionY - 1, positionX + width, positionY + height, 12);

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

	GUI_DrawText_Wrapper(
		String_Get_ByIndex(stringID),
		positionX + width / 2,
		positionY + 1,
		colour,
		0,
		0x121
	);

	w->shortcut = GUI_Widget_GetShortcut(*String_Get_ByIndex(stringID));

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
 * Draw a scrollbar widget to the display, relative to its parent.
 *
 * @param w The widget (which is a scrollbar) to draw.
 */
void GUI_Widget_ScrollBar_Draw(Widget *w)
{
	WidgetScrollbar *scrollbar;
	uint16 positionX, positionY;
	uint16 width, height;
	uint16 scrollLeft, scrollTop;
	uint16 scrollRight, scrollBottom;

	assert(g_global->variable_6668.csip == 0x22A60D31);

	if (w == NULL) return;
	if (w->flags.s.invisible) return;

	scrollbar = (WidgetScrollbar *)emu_get_memorycsip(w->scrollbar);

	width  = w->width;
	height = w->height;

	positionX = w->offsetX;
	if (w->offsetX < 0) positionX += g_global->variable_4062[w->parentID][2] << 3;
	positionX += g_global->variable_4062[w->parentID][0] << 3;

	positionY = w->offsetY;
	if (w->offsetY < 0) positionY += g_global->variable_4062[w->parentID][3];
	positionY += g_global->variable_4062[w->parentID][1];

	if (width > height) {
		scrollLeft   = scrollbar->position + 1;
		scrollTop    = 1;
		scrollRight  = scrollLeft + scrollbar->size - 1;
		scrollBottom = height - 2;
	} else {
		scrollLeft   = 1;
		scrollTop    = scrollbar->position + 1;
		scrollRight  = width - 2;
		scrollBottom = scrollTop + scrollbar->size - 1;
	}

	if (g_global->variable_6C91 == 0x0) {
		emu_push(positionY + height - 1);
		emu_push(positionX + width - 1);
		emu_push(positionY);
		emu_push(positionX);
		emu_push(emu_cs); emu_push(0x07BD); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3520) { overlay(0x3520, 1); }
		emu_sp += 8;
	}

	/* Draw background */
	emu_push(w->bgColourNormal);
	emu_push(positionY + height - 1);
	emu_push(positionX + width - 1);
	emu_push(positionY);
	emu_push(positionX);
	emu_push(emu_cs); emu_push(0x07E4); emu_cs = 0x22A6; emu_GUI_DrawFilledRectangle();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { overlay(0x3520, 1); }
	emu_sp += 10;

	/* Draw where we currently are */
	emu_push((scrollbar->pressed == 0) ? w->fgColourNormal : w->fgColourSelected);
	emu_push(positionY + scrollBottom);
	emu_push(positionX + scrollRight);
	emu_push(positionY + scrollTop);
	emu_push(positionX + scrollLeft);
	emu_push(emu_cs); emu_push(0x0826); emu_cs = 0x22A6; emu_GUI_DrawFilledRectangle();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3520) { overlay(0x3520, 1); }
	emu_sp += 10;

	if (g_global->variable_6C91 == 0x0) {
		emu_push(emu_cs); emu_push(0x0835); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3520) { overlay(0x3520, 1); }
	}

	/* Call custom callback function if set */
	if (scrollbar->drawProc.csip != 0x00000000) {
		csip32 wcsip = emu_Global_GetCSIP(w);
		emu_push(wcsip.s.cs); emu_push(wcsip.s.ip);

		emu_push(emu_cs); emu_push(0x084F);
		emu_ip = scrollbar->drawProc.s.ip;
		emu_cs = scrollbar->drawProc.s.cs;
		switch ((emu_cs << 16) + emu_ip) {
			case 0x34E0003E: overlay(0x34E0, 0); f__B4E0_0A86_000E_D3BB(); break;
			default:
				/* In case we don't know the call point yet, call the dynamic call */
				emu_last_cs = 0xB520; emu_last_ip = 0x084B; emu_last_length = 0x001A; emu_last_crc = 0xD0A3;
				emu_call();
				return;
		}
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x3520) { overlay(0x3520, 1); }
		emu_sp += 4;
	}

	scrollbar->dirty = 0;
}
