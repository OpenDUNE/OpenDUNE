/* $Id$ */

/** @file src/gui/widget_draw.c %Widget drawing routines. */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "../global.h"

#include "gui.h"
#include "mentat.h"
#include "widget.h"
#include "../gfx.h"
#include "../house.h"
#include "../map.h"
#include "../pool/house.h"
#include "../pool/unit.h"
#include "../sprites.h"
#include "../string.h"
#include "../structure.h"
#include "../unit.h"
#include "../unknown/unknown.h"


/**
 * Draw a text button widget to the display, relative to its parent.
 *
 * @param w The widget (which is a button) to draw.
 */
void GUI_Widget_TextButton_Draw(Widget *w)
{
	uint16 oldScreenID;
	uint16 positionX, positionY;
	uint16 width, height;
	uint16 state;
	uint8 colour;

	if (w == NULL) return;

	oldScreenID = GUI_Screen_SetActive(2);

	positionX = w->offsetX + (g_global->variable_4062[w->parentID][0] << 3);
	positionY = w->offsetY +  g_global->variable_4062[w->parentID][1];
	width     = w->width;
	height    = w->height;

	g_global->variable_4062[19][0] = positionX >> 3;
	g_global->variable_4062[19][1] = positionY;
	g_global->variable_4062[19][2] = width >> 3;
	g_global->variable_4062[19][3] = height;

	state  = (w->state.s.selected) ? 0 : 2;
	colour = (w->state.s.hover2) ? 231 : 232;

	GUI_Widget_DrawBorder(19, state, 1);

	if (w->stringID == 0x1E || w->stringID == 0x66 || w->stringID == 0x6B || w->stringID == 0x6C) {
		GUI_DrawText_Wrapper(GUI_String_Get_ByIndex(w->stringID), positionX + (width / 2), positionY + 2, colour, 0, 0x122);
	} else {
		GUI_DrawText_Wrapper(GUI_String_Get_ByIndex(w->stringID), positionX + 3, positionY + 2, colour, 0, 0x22);
	}

	if (oldScreenID == 0) {
		GUI_Mouse_Hide_InRegion(positionX, positionY, positionX + width, positionY + height);
		GUI_Screen_Copy(positionX >> 3, positionY, positionX >> 3, positionY, width >> 3, height, 2, 0);
		GUI_Mouse_Show_InRegion();
	}

	GUI_Screen_SetActive(oldScreenID);
}

/**
 * Draw a sprite button widget to the display, relative to 0,0.
 *
 * @param w The widget (which is a button) to draw.
 */
void GUI_Widget_SpriteButton_Draw(Widget *w)
{
	uint16 old_6C91;
	uint16 positionX, positionY;
	uint16 width, height;
	uint16 spriteID;
	bool buttonDown;

	assert(g_global->variable_6624.csip == 0x22A6034F);

	if (w == NULL) return;

	spriteID = 0;
	if (g_unitSelected != NULL) {
		const UnitInfo *ui;

		ui = &g_table_unitInfo[g_unitSelected->o.type];

		spriteID = ui->o.spriteID;
	} else {
		const StructureInfo *si;
		Structure *s;

		s = Structure_Get_ByPackedTile(g_global->selectionPosition);
		if (s == NULL) return;
		si = &g_table_structureInfo[s->o.type];

		spriteID = si->o.spriteID;
	}

	old_6C91 = g_global->screenActiveID;
	if (old_6C91 == 0) {
		GUI_Screen_SetActive(2);
	}

	buttonDown = w->state.s.hover2;

	positionX = w->offsetX;
	positionY = w->offsetY;
	width     = w->width;
	height    = w->height;

	GUI_DrawWiredRectangle(positionX - 1, positionY - 1, positionX + width, positionY + height, 12);

	GUI_DrawSprite(g_global->screenActiveID, g_sprites[spriteID], positionX, positionY, 0, 0x100, emu_get_memorycsip(g_global->variable_3C3A), buttonDown ? 1 : 0);

	GUI_DrawBorder(positionX, positionY, width, height, buttonDown ? 0 : 1, false);

	if (old_6C91 != 0) return;

	GUI_Mouse_Hide_InRegion(positionX - 1, positionY - 1, positionX + width + 1, positionY + height + 1);
	GFX_Screen_Copy2(positionX - 1, positionY - 1, positionX - 1, positionY - 1, width + 2, height + 2, 2, 0, false);
	GUI_Mouse_Show_InRegion();

	GUI_Screen_SetActive(0);
}

/**
 * Draw a sprite/text button widget to the display, relative to 0,0.
 *
 * @param w The widget (which is a button) to draw.
 */
void GUI_Widget_SpriteTextButton_Draw(Widget *w)
{
	uint16 old_6C91;
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

	old_6C91 = g_global->screenActiveID;
	if (old_6C91 == 0) {
		GUI_Screen_SetActive(2);
	}

	buttonDown = w->state.s.hover2;

	positionX = w->offsetX;
	positionY = w->offsetY;
	width     = w->width;
	height    = w->height;

	GUI_DrawWiredRectangle(positionX - 1, positionY - 1, positionX + width, positionY + height, 12);
	GUI_DrawBorder(positionX, positionY, width, height, buttonDown ? 0 : 1, true);

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
				const StructureInfo *si;
				uint16 spriteWidth;
				uint16 x, y;

				GUI_DrawSprite(g_global->screenActiveID, g_sprites[63], positionX + 37, positionY + 5, 0, 0x100, emu_get_memorycsip(g_global->variable_3C3A), buttonDown ? 2 : 0);

				spriteWidth = Sprite_GetWidth(g_sprites[24]) + 1;

				si = &g_table_structureInfo[s->objectType];

				for (y = 0; y < g_global->layoutSize[si->layout][1]; y++) {
					for (x = 0; x < g_global->layoutSize[si->layout][0]; x++) {
						GUI_DrawSprite(g_global->screenActiveID, g_sprites[24], positionX + x * spriteWidth + 38, positionY + y * spriteWidth + 6, 0, 0);
					}
				}

				spriteID = si->o.spriteID;
			} else {
				const UnitInfo *ui;

				ui = &g_table_unitInfo[s->objectType];
				spriteID = ui->o.spriteID;
			}
			break;
	}

	if (spriteID != 0) GUI_DrawSprite(g_global->screenActiveID, g_sprites[spriteID], positionX + 2, positionY + 2, 0, 0x100, emu_get_memorycsip(g_global->variable_3C3A), buttonDown ? 1 : 0);

	if (g_global->productionStringID == 0x2E) { /* "%d%% done" */
		uint16 buildTime;
		uint16 timeLeft;

		if (s->o.type == STRUCTURE_CONSTRUCTION_YARD) {
			const StructureInfo *si;

			si = &g_table_structureInfo[s->objectType];
			buildTime = si->o.buildTime;
		} else if (s->o.type == STRUCTURE_REPAIR) {
			const UnitInfo *ui;

			if (s->o.linkedID == 0xFF) return;

			ui = &g_table_unitInfo[Unit_Get_ByIndex(s->o.linkedID)->o.type];
			buildTime = ui->o.buildTime;
		} else {
			const UnitInfo *ui;

			ui = &g_table_unitInfo[s->objectType];
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

	if (old_6C91 != 0x0) return;

	GUI_Mouse_Hide_InRegion(positionX - 1, positionY - 1, positionX + width + 1, positionY + height + 1);
	GFX_Screen_Copy2(positionX - 1, positionY - 1, positionX - 1, positionY - 1, width + 2, height + 2, 2, 0, false);
	GUI_Mouse_Show_InRegion();

	GUI_Screen_SetActive(0);
}

/**
 * Draw a text button widget to the display, relative to 0,0.
 *
 * @param w The widget (which is a button) to draw.
 */
void GUI_Widget_TextButton2_Draw(Widget *w)
{
	uint16 old_6C91;
	uint16 stringID;
	uint16 positionX, positionY;
	uint16 width, height;
	uint8 colour;
	bool buttonSelected;
	bool buttonDown;

	assert(g_global->variable_6624.csip == 0x22A6034F);

	if (w == NULL) return;

	old_6C91 = g_global->screenActiveID;
	if (old_6C91 == 0) {
		GUI_Screen_SetActive(2);
	}

	stringID = w->stringID;

	buttonSelected = w->state.s.selected;
	buttonDown     = w->state.s.hover2;

	positionX = w->offsetX;
	positionY = w->offsetY;
	width     = w->width;
	height    = w->height;

	GUI_DrawWiredRectangle(positionX - 1, positionY - 1, positionX + width, positionY + height, 12);
	GUI_DrawBorder(positionX, positionY, width, height, buttonDown ? 0 : 1, true);

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

	if (old_6C91 != 0) return;

	GUI_Mouse_Hide_InRegion(positionX - 1, positionY - 1, positionX + width + 1, positionY + height + 1);
	GFX_Screen_Copy2(positionX - 1, positionY - 1, positionX - 1, positionY - 1, width + 2, height + 2, 2, 0, false);
	GUI_Mouse_Show_InRegion();

	GUI_Screen_SetActive(0);
}

/**
 * Draw a scrollbar widget to the display, relative to its parent.
 *
 * @param w The widget (which is a scrollbar) to draw.
 */
void GUI_Widget_Scrollbar_Draw(Widget *w)
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

	if (g_global->screenActiveID == 0x0) {
		GUI_Mouse_Hide_InRegion(positionX, positionY, positionX + width - 1, positionY + height - 1);
	}

	/* Draw background */
	GUI_DrawFilledRectangle(positionX, positionY, positionX + width - 1, positionY + height - 1, w->bgColourNormal);

	/* Draw where we currently are */
	GUI_DrawFilledRectangle(positionX + scrollLeft, positionY + scrollTop, positionX + scrollRight, positionY + scrollBottom, (scrollbar->pressed == 0) ? w->fgColourNormal : w->fgColourSelected);

	if (g_global->screenActiveID == 0x0) {
		GUI_Mouse_Show_InRegion();
	}

	/* Call custom callback function if set */
	if (scrollbar->drawProc.csip != 0x00000000) {
		assert(scrollbar->drawProc.csip == 0x34E0003E);
		GUI_Mentat_ScrollBar_Draw(w);
	}

	scrollbar->dirty = 0;
}

/**
 * Gets the action type used to determine how to draw the panel on the right side of the screen.
 *
 * @param forceDraw Wether to draw the panel even if nothing changed.
 */
static uint16 GUI_Widget_ActionPanel_GetActionType(bool forceDraw)
{
	uint16 actionType = 0;
	Structure *s = NULL;
	Unit *u = NULL;

	if (g_global->selectionType == 2) {
		if (g_global->variable_3752 != 7 || forceDraw) actionType = 7; /* Placement */
	} else if (g_unitHouseMissile != NULL) {
		if (g_global->variable_3762 != g_global->houseMissileCountdown || forceDraw) actionType = 8; /* House Missile */
	} else if (g_unitSelected != NULL) {
		if (g_global->selectionType == 1) {
			uint16 activeAction = g_global->activeAction;

			if (activeAction != g_global->variable_3760 || forceDraw) {
				switch (activeAction) {
					case ACTION_ATTACK: actionType = 4; break; /* Attack */
					case ACTION_MOVE:   actionType = 5; break; /* Movement */
					default:            actionType = 6; break; /* Harvest */
				}
			}

			if (actionType == g_global->variable_3752 && !forceDraw) actionType = 0;
		} else {
			u = g_unitSelected;

			if (forceDraw
				|| u->o.index != g_global->variable_3756
				|| u->o.hitpoints != g_global->variable_3754
				|| u->o.houseID != g_global->variable_376A
				|| u->actionID != g_global->variable_3760) {
				actionType = 2; /* Unit */
			}
		}
	} else if (Map_GetTileByPosition(g_global->selectionPosition)->isUnveiled || g_global->debugScenario != 0) {
		if (Map_GetLandscapeType(g_global->selectionPosition) == LST_STRUCTURE) {
			s = Structure_Get_ByPackedTile(g_global->selectionPosition);

			if (forceDraw
				|| s->o.hitpoints != g_global->variable_3754
				|| s->o.index != g_global->variable_3756
				|| s->countDown != g_global->variable_3758
				|| s->upgradeTimeLeft != g_global->variable_3764
				|| s->o.linkedID != g_global->variable_375E
				|| s->objectType != g_global->variable_375A
				|| s->o.flags.half.high != g_global->variable_3766
				|| s->o.houseID != g_global->variable_376A
				|| House_Get_ByIndex(s->o.houseID)->starportTimeLeft != g_global->variable_3768
				|| s->o.flags.half.low != g_global->variable_375C) {
					g_global->variable_37B2 = (s->o.hitpoints > (g_table_structureInfo[s->o.type].o.hitpoints / 2)) ? 1 : 0;
					actionType = 3; /* Structure */
			}
		} else {
			actionType = 1;
		}
	} else {
		actionType = 1;
	}

	switch (actionType) {
		case 8: /* House Missile */
			g_global->variable_3762 = g_global->houseMissileCountdown;
			g_global->variable_3756 = 0xFFFF;
			break;

		case 1:
		case 4: /* Attack */
		case 5: /* Movement */
		case 6: /* Harvest */
		case 7: /* Placement */
			g_global->variable_3756 = 0xFFFF;
			g_global->variable_3762 = 0xFFFF;
			if (!forceDraw && actionType == g_global->variable_3752) actionType = 0;
			break;

		case 2: /* Unit */
			g_global->variable_3754 = u->o.hitpoints;
			g_global->variable_3756 = u->o.index;
			g_global->variable_3760 = u->actionID;
			g_global->variable_3762 = 0xFFFF;
			g_global->variable_376A = u->o.houseID;
			break;

		case 3: /* Structure */
			g_global->variable_3754 = s->o.hitpoints;
			g_global->variable_3756 = s->o.index;
			g_global->variable_375A = s->objectType;
			g_global->variable_3758 = s->countDown;
			g_global->variable_3764 = s->upgradeTimeLeft;
			g_global->variable_3766 = s->o.flags.half.high;
			g_global->variable_375E = s->o.linkedID;
			g_global->variable_375C = s->o.flags.half.low;
			g_global->variable_376A = s->o.houseID;
			g_global->variable_3762 = 0xFFFF;
			g_global->variable_3768 = House_Get_ByIndex(s->o.houseID)->starportTimeLeft;
			break;

		case 0:
		default:
			break;
	}

	if (actionType != 0) g_global->variable_3752 = actionType;

	return actionType;
}

/**
 * Draw the panel on the right side of the screen, with the actions of the
 *  selected item.
 *
 * @param forceDraw Wether to draw the panel even if nothing changed.
 */
void GUI_Widget_ActionPanel_Draw(bool forceDraw)
{
	const StructureInfo *si;
	const ObjectInfo *oi;
	const UnitInfo *ui;
	uint16 actionType;
	uint16 oldScreenID, loc06;
	bool isNotPlayerOwned;
	Object *o;
	Unit *u;
	Structure *s;
	House *h;
	Widget *buttons[4];
	Widget *widget24, *widget28, *widget2C, *widget30, *widget34;
	int i;

	o  = NULL;
	u  = NULL;
	s  = NULL;
	h  = NULL;

	oi = NULL;
	ui = NULL;
	si = NULL;
	isNotPlayerOwned = false;

	actionType = GUI_Widget_ActionPanel_GetActionType(forceDraw);

	switch (actionType) {
		case 2: { /* Unit */
			u  = g_unitSelected;
			ui = &g_table_unitInfo[u->o.type];

			o  = &u->o;
			oi = &ui->o;

			isNotPlayerOwned = (g_global->playerHouseID == Unit_GetHouseID(u)) ? false : true;

			h = House_Get_ByIndex(u->o.houseID);
		} break;

		case 3: { /* Structure */
			s  = Structure_Get_ByPackedTile(g_global->selectionPosition);
			si = &g_table_structureInfo[s->o.type];

			o  = &s->o;
			oi = &si->o;

			isNotPlayerOwned = (g_global->playerHouseID == s->o.houseID) ? false : true;

			h = House_Get_ByIndex(s->o.houseID);

			if (s->upgradeTimeLeft == 0 && Structure_IsUpgradable(s)) s->upgradeTimeLeft = 100;
			GUI_UpdateProductionStringID();
		} break;

		case 7: { /* Placement */
			si = &g_table_structureInfo[g_global->activeStructureType];

			o = NULL;
			oi = &si->o;

			isNotPlayerOwned = false;

			h = House_Get_ByIndex((uint8)g_global->playerHouseID);
		} break;

		case 8: { /* House Missile */
			u  = g_unitHouseMissile;
			ui = &g_table_unitInfo[u->o.type];

			o  = &u->o;
			oi = &ui->o;

			isNotPlayerOwned = (g_global->playerHouseID == Unit_GetHouseID(u)) ? false : true;

			h = House_Get_ByIndex((uint8)g_global->playerHouseID);
		} break;

		case 4: /* Attack */
		case 5: /* Movement */
		case 6: /* Harvest */
		default: /* Default */
			break;

	}

	oldScreenID = g_global->screenActiveID;
	loc06 = g_global->variable_6D5D;

	if (actionType != 0) {
		Widget *w = (Widget *)emu_get_memorycsip(g_global->variable_3C26);

		oldScreenID = GUI_Screen_SetActive(2);

		loc06 = Unknown_07AE_0000(6);

		widget30 = GUI_Widget_Get_ByIndex(w, 7);
		GUI_Widget_MakeInvisible(widget30);

		widget24 = GUI_Widget_Get_ByIndex(w, 4);
		GUI_Widget_MakeInvisible(widget24);

		widget28 = GUI_Widget_Get_ByIndex(w, 6);
		GUI_Widget_MakeInvisible(widget28);

		widget2C = GUI_Widget_Get_ByIndex(w, 5);
		GUI_Widget_MakeInvisible(widget2C);

		widget34 = GUI_Widget_Get_ByIndex(w, 3);
		GUI_Widget_MakeInvisible(widget34);

		/* Create the 4 buttons */
		for (i = 0; i < 4; i++) {
			buttons[i] = GUI_Widget_Get_ByIndex(w, i + 8);
			GUI_Widget_MakeInvisible(buttons[i]);
		}

		GUI_Widget_DrawBorder(g_global->variable_6D5D, 0, 0);
	}

	if (actionType > 1) {
		uint16 stringID = 0;
		uint16 spriteID = 0xFFFF;

		switch (actionType) {
			case 4: stringID = 13; break; /* Attack */
			case 5: stringID = 14; break; /* Movement */
			case 6: stringID = 6;  break; /* Harvest */

			case 2: /* Unit */
			case 3: /* Structure */
			case 7: /* Placement */
			case 8: /* House Missile */
				stringID = oi->stringID_abbrev;
				break;

			default: break;
		}

		if (stringID != 0) GUI_DrawText_Wrapper(String_Get_ByIndex(stringID), 288, 43, 29, 0, 0x111);

		switch (actionType) {
			case 3: /* Structure */
				if (oi->flags.s.factory && !isNotPlayerOwned) {
					GUI_Widget_MakeVisible(widget28);
					break;
				}
				/* Fall through */
			case 2: /* Unit */
			case 7: /* Placement */
				spriteID = oi->spriteID;
				break;

			case 5: /* Movement */
			case 6: /* Harvest */
				spriteID = 0x1D;
				break;

			case 4: /* Attack */
				spriteID = 0x1C;
				break;

			case 8: /* House Missile */
				spriteID = 0x1E;
				break;

			default:
				spriteID = 0xFFFF;
				break;
		}

		if (spriteID != 0xFFFF) {
			GUI_DrawSprite(g_global->screenActiveID, g_sprites[spriteID], 258, 51, 0, 0);
		}

		/* Unit / Structure */
		if (actionType == 2 || actionType == 3) {
			GUI_DrawProgressbar(o->hitpoints, oi->hitpoints);
			GUI_DrawSprite(g_global->screenActiveID, g_sprites[27], 292, 60, 0, 0);
			GUI_DrawText_Wrapper(String_Get_ByIndex(49), 296, 65, 29, 0, 0x11);
		}

		if (!isNotPlayerOwned || g_global->debugGame) {
			switch (actionType) {
				case 2: /* Unit */
				{
					const uint16 *actions;
					uint16 actionCurrent;
					int i;

					GUI_Widget_MakeVisible(widget34);

					actionCurrent = (u->nextActionID != ACTION_INVALID) ? u->nextActionID : u->actionID;

					actions = oi->actionsPlayer;
					if (isNotPlayerOwned && o->type != UNIT_HARVESTER) actions = g_global->actionsAI;

					for (i = 0; i < 4; i++) {
						buttons[i]->stringID = g_table_actionInfo[actions[i]].stringID;
						buttons[i]->shortcut = GUI_Widget_GetShortcut(String_Get_ByIndex(buttons[i]->stringID)[0]);

						if (g_config.language == LANGUAGE_FRENCH) {
							if (buttons[i]->stringID == 2) buttons[i]->shortcut2 = 0x27;
							if (buttons[i]->stringID == 7) buttons[i]->shortcut2 = 0x13;
						}
						if (g_config.language == LANGUAGE_GERMAN) {
							if (buttons[i]->stringID == 4) buttons[i]->shortcut2 = 0x17;
						}

						GUI_Widget_MakeVisible(buttons[i]);

						if (actions[i] == actionCurrent) {
							GUI_Widget_MakeSelected(buttons[i], false);
						} else {
							GUI_Widget_MakeNormal(buttons[i], false);
						}
					}
				} break;

				case 3: /* Structure */
				{
					GUI_Widget_MakeVisible(widget34);

					if (o->flags.s.upgrading) {
						widget24->stringID = 0x8F;

						GUI_Widget_MakeVisible(widget24);
						GUI_Widget_MakeSelected(widget24, false);
					} else if (o->hitpoints != oi->hitpoints) {
						if (o->flags.s.repairing) {
							widget24->stringID = 0x23;

							GUI_Widget_MakeVisible(widget24);
							GUI_Widget_MakeSelected(widget24, false);
						} else {
							widget24->stringID = 0x22;

							GUI_Widget_MakeVisible(widget24);
							GUI_Widget_MakeNormal(widget24, false);
						}
					} else if (s->upgradeTimeLeft != 0) {
						widget24->stringID = 0x8E;

						GUI_Widget_MakeVisible(widget24);
						GUI_Widget_MakeNormal(widget24, false);
					}

					if (o->type != STRUCTURE_STARPORT) {
						if (oi->flags.s.factory || (o->type == STRUCTURE_PALACE && s->countDown == 0)) {
							GUI_Widget_MakeVisible(widget2C);
							GUI_Widget_Draw(widget2C);
						}
					}

					switch (o->type) {
						case STRUCTURE_SLAB_1x1: break;
						case STRUCTURE_SLAB_2x2: break;
						case STRUCTURE_PALACE: break;
						case STRUCTURE_LIGHT_VEHICLE: break;
						case STRUCTURE_HEAVY_VEHICLE: break;
						case STRUCTURE_HIGH_TECH: break;
						case STRUCTURE_HOUSE_OF_IX: break;
						case STRUCTURE_WOR_TROOPER: break;
						case STRUCTURE_CONSTRUCTION_YARD: break;
						case STRUCTURE_BARRACKS: break;
						case STRUCTURE_WALL: break;
						case STRUCTURE_TURRET: break;
						case STRUCTURE_ROCKET_TURRET: break;

						case STRUCTURE_REPAIR: {
							uint16 percent;
							uint16 steps;
							Unit *u;

							u = Structure_GetLinkedUnit(s);
							if (u == NULL) break;

							GUI_DrawSprite(g_global->screenActiveID, g_sprites[g_table_unitInfo[u->o.type].o.spriteID], 260, 89, 0, 0);

							steps = g_table_unitInfo[u->o.type].o.buildTime / 4;
							percent = (steps - (s->countDown >> 8)) * 100 / steps;

							GUI_DrawText_Wrapper(String_Get_ByIndex(46), 258, 116, 29, 0, 0x11, percent);
						} break;

						case STRUCTURE_WINDTRAP: {
							uint16 powerOutput = o->hitpoints * -si->powerUsage / oi->hitpoints;
							uint16 powerAverage = (h->windtrapCount == 0) ? 0 : h->powerUsage / h->windtrapCount;

							GUI_DrawLine(261, 95, 312, 95, 16);
							GUI_DrawText_Wrapper(String_Get_ByIndex(89), 258, 88, 29, 0, 0x11);
							GUI_DrawText_Wrapper(g_global->string_3774, 302, g_global->variable_6C71 * 2 + 80, 29, 0, 0x11, powerAverage);
							GUI_DrawText_Wrapper(g_global->string_3774, 302, g_global->variable_6C71 * 3 + 80, (powerOutput >= powerAverage) ? 29 : 6, 0, 0x11, powerOutput);
						} break;

						case STRUCTURE_STARPORT: {
							if (h->starportLinkedID != 0xFFFF) {
								GUI_DrawText_Wrapper(String_Get_ByIndex(161), 258, 88, 29, 0, 0x11, h->starportTimeLeft);
							} else {
								GUI_DrawText_Wrapper(String_Get_ByIndex(160), 258, 88, 29, 0, 0x11);
							}
						} break;

						case STRUCTURE_REFINERY:
						case STRUCTURE_SILO: {
							uint16 creditsStored;

							creditsStored = h->credits * si->creditsStorage / h->creditsStorage;
							if (h->credits > h->creditsStorage) creditsStored = si->creditsStorage;

							GUI_DrawLine(261, 95, 312, 95, 16);
							GUI_DrawText_Wrapper(String_Get_ByIndex(88), 258, 88, 29, 0, 0x11, creditsStored, (si->creditsStorage <= 1000) ? si->creditsStorage : 1000);
						} break;

						case STRUCTURE_OUTPOST: {
							GUI_DrawLine(261, 95, 312, 95, 16);
							GUI_DrawText_Wrapper(String_Get_ByIndex(146), 258, 88, 29, 0, 0x11, h->unitCountAllied, h->unitCountEnemy);
						} break;
					}
				} break;

				case 4: /* Attack */
					GUI_Widget_MakeVisible(widget30);
					GUI_DrawText_Wrapper(String_Get_ByIndex(86), 259, 76, g_global->variable_6D5B & 0xFF, 0, 0x11);
					break;

				case 5: /* Movement */
					GUI_Widget_MakeVisible(widget30);
					GUI_DrawText_Wrapper(String_Get_ByIndex(87), 259, 76, g_global->variable_6D5B & 0xFF, 0, 0x11);
					break;

				case 6: /* Harvest */
					GUI_Widget_MakeVisible(widget30);
					GUI_DrawText_Wrapper(String_Get_ByIndex(335), 259, 76, g_global->variable_6D5B & 0xFF, 0, 0x11);
					break;

				case 7: /* Placement */
					GUI_Widget_MakeVisible(widget30);
					GUI_DrawText_Wrapper(String_Get_ByIndex(84), 259, 84, g_global->variable_6D5B & 0xFF, 0, 0x11);
					break;

				case 8: /* House Missile */
				{
					int16 count = (int16)g_global->houseMissileCountdown - 1;
					if (count <= 0) count = 0;

					GUI_DrawText_Wrapper(String_Get_ByIndex(85), 259, 84, g_global->variable_6D5B & 0xFF, 0, 0x11, count);
				} break;

				default:
					break;
			}
		}
	}

	if (actionType != 0) {
		GUI_Mouse_Hide_InWidget(6);
		GUI_Screen_Copy(g_global->variable_992D, g_global->variable_992B, g_global->variable_992D, g_global->variable_992B, g_global->variable_992F, g_global->variable_9931, g_global->screenActiveID, 0);
		GUI_Mouse_Show_InWidget();
	}

	if (actionType > 1) {
		Unknown_07AE_0000(loc06);

		GUI_Screen_SetActive(oldScreenID);
	}
}

/**
 * Draw the border around a widget.
 * @param widgetIndex The widget index to draw the border around.
 * @param borderType The type of border. 0 = normal, 1 = thick depth, 2 = double, 3 = thin depth.
 * @param pressed True if the button is pressed.
 */
void GUI_Widget_DrawBorder(uint16 widgetIndex, uint16 borderType, bool pressed)
{
	uint16 left = g_global->variable_4062[widgetIndex][0] << 3;
	uint16 top = g_global->variable_4062[widgetIndex][1];
	uint16 width = g_global->variable_4062[widgetIndex][2] << 3;
	uint16 height = g_global->variable_4062[widgetIndex][3];

	uint16 colourSchemaIndex = (pressed) ? 2 : 0;
	uint16 colourSchemaIndexDiff;
	uint16 size;

	if (g_global->screenActiveID == 0) {
		GUI_Mouse_Hide_InRegion(left, top, left + width, top + height);
	}

	GUI_DrawBorder(left, top, width, height, colourSchemaIndex + 1, true);

	colourSchemaIndexDiff = g_global->variable_362C[borderType][0];
	size = g_global->variable_362C[borderType][1];

	if (size != 0) {
		GUI_DrawBorder(left + size, top + size, width - (size * 2), height - (size * 2), colourSchemaIndexDiff + colourSchemaIndex, false);
	}

	if (g_global->screenActiveID == 0) {
		GUI_Mouse_Show_InRegion();
	}
}

/**
 * Draw all widgets, starting with the one given by the parameters.
 * @param w First widget of the chain to draw.
 */
void GUI_Widget_DrawAll(Widget *w)
{
	while (w != NULL) {
		GUI_Widget_Draw(w);
		w = GUI_Widget_GetNext(w);
	}
}
