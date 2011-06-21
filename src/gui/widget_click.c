/* $Id$ */

/** @file src/gui/widget_click.c %Widget clicking handling routines. */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../os/endian.h"
#include "../os/math.h"
#include "../os/sleep.h"

#include "gui.h"
#include "widget.h"
#include "../file.h"
#include "../gfx.h"
#include "../house.h"
#include "../input/input.h"
#include "../load.h"
#include "../map.h"
#include "../mouse.h"
#include "../pool/structure.h"
#include "../pool/unit.h"
#include "../save.h"
#include "../sprites.h"
#include "../string.h"
#include "../structure.h"
#include "../tile.h"
#include "../tools.h"
#include "../unit.h"
#include "../unknown/unknown.h"

#include "../table/actioninfo.h"

static char *GenerateSavegameFilename(uint16 number)
{
	static char filename[13];
	sprintf(filename, "_save%03d.dat", number);
	return filename;
}

/**
 * Handles scrolling of a scrollbar.
 *
 * @param scrollbar The scrollbar.
 * @param scroll The amount of scrolling.
 */
void GUI_Widget_Scrollbar_Scroll(WidgetScrollbar *scrollbar, uint16 scroll)
{
	scrollbar->scrollPosition += scroll;

	if ((int16)scrollbar->scrollPosition >= scrollbar->scrollMax - scrollbar->scrollPageSize) {
		scrollbar->scrollPosition = scrollbar->scrollMax - scrollbar->scrollPageSize;
	}

	if ((int16)scrollbar->scrollPosition <= 0) scrollbar->scrollPosition = 0;

	GUI_Widget_Scrollbar_CalculatePosition(scrollbar);

	GUI_Widget_Scrollbar_Draw((Widget *)emu_get_memorycsip(scrollbar->parent));
}

/**
 * Handles Click event for a sprite/text button.
 *
 * @param w The widget.
 * @return False, always.
 */
bool GUI_Widget_SpriteTextButton_Click(Widget *w)
{
	Structure *s;

	VARIABLE_NOT_USED(w);

	s = Structure_Get_ByPackedTile(g_global->selectionPosition);

	switch (g_global->productionStringID) {
		default: break;

		case 0x26: /* "Place it" */
			if (s->o.type == STRUCTURE_CONSTRUCTION_YARD) {
				Structure *ns;

				ns = Structure_Get_ByIndex(s->o.linkedID);
				g_structureActive = ns;
				g_global->activeStructureType = s->objectType;
				g_global->variable_38EC = Structure_IsValidBuildLocation(g_global->variable_3A00, g_global->activeStructureType);
				g_global->activeStructurePosition = g_global->selectionPosition;
				s->o.linkedID = STRUCTURE_INVALID;

				GUI_ChangeSelectionType(2);
			}
			break;

		case 0x28: /* "On hold" */
			s->o.flags.s.repairing = false;
			s->o.flags.s.onHold    = false;
			s->o.flags.s.upgrading = false;
			break;

		case 0x29: /* "Build it" */
			Structure_BuildObject(s, s->objectType);
			break;

		case 0x2A: /* "Launch" */
		case 0x2B: /* "Fremen" */
		case 0x2C: /* "Saboteur" */
			Structure_ActivateSpecial(s);
			break;

		case 0x2E: /* "%d%% done" */
			s->o.flags.s.onHold = true;
			break;
	}
	return false;
}

/**
 * Handles Click event for scrollbar up button.
 *
 * @param w The widget.
 * @return False, always.
 */
bool GUI_Widget_Scrollbar_ArrowUp_Click(Widget *w)
{
	GUI_Widget_Scrollbar_Scroll((WidgetScrollbar *)emu_get_memorycsip(w->scrollbar), -1);

	return false;
}

/**
 * Handles Click event for scrollbar down button.
 *
 * @param w The widget.
 * @return False, always.
 */
bool GUI_Widget_Scrollbar_ArrowDown_Click(Widget *w)
{
	GUI_Widget_Scrollbar_Scroll((WidgetScrollbar *)emu_get_memorycsip(w->scrollbar), 1);

	return false;
}

/**
 * Handles Click event for scrollbar button.
 *
 * @param w The widget.
 * @return False, always.
 */
bool GUI_Widget_Scrollbar_Click(Widget *w)
{
	WidgetScrollbar *scrollbar;
	uint16 positionX, positionY;

	scrollbar = (WidgetScrollbar *)emu_get_memorycsip(w->scrollbar);

	positionX = w->offsetX;
	if (w->offsetX < 0) positionX += g_global->variable_4062[w->parentID][2] << 3;
	positionX += g_global->variable_4062[w->parentID][0] << 3;

	positionY = w->offsetY;
	if (w->offsetY < 0) positionY += g_global->variable_4062[w->parentID][3];
	positionY += g_global->variable_4062[w->parentID][1];

	if ((w->state.s.buttonState & 0x44) != 0) {
		scrollbar->pressed = 0;
		GUI_Widget_Scrollbar_Draw(w);
	}

	if ((w->state.s.buttonState & 0x11) != 0) {
		int16 positionCurrent;
		int16 positionBegin;
		int16 positionEnd;

		scrollbar->pressed = 0;

		if (w->width > w->height) {
			positionCurrent = g_global->mouseX;
			positionBegin = positionX + scrollbar->position + 1;
		} else {
			positionCurrent = g_global->mouseY;
			positionBegin = positionY + scrollbar->position + 1;
		}

		positionEnd = positionBegin + scrollbar->size;

		if (positionCurrent <= positionEnd && positionCurrent >= positionBegin) {
			scrollbar->pressed = 1;
			scrollbar->pressedPosition = positionCurrent - positionBegin;
		} else {
			GUI_Widget_Scrollbar_Scroll(scrollbar, (positionCurrent < positionBegin ? -scrollbar->scrollPageSize : scrollbar->scrollPageSize));
		}
	}

	if ((w->state.s.buttonState & 0x22) != 0 && scrollbar->pressed != 0) {
		int16 position, size;

		if (w->width > w->height) {
			size = w->width - 2 - scrollbar->size;
			position = g_global->mouseX - scrollbar->pressedPosition - positionX - 1;
		} else {
			size = w->height - 2 - scrollbar->size;
			position = g_global->mouseY - scrollbar->pressedPosition - positionY - 1;
		}

		if (position < 0) {
			position = 0;
		} else if (position > size) {
			position = size;
		}

		if (scrollbar->position != position) {
			scrollbar->position = position;
			scrollbar->dirty = 1;
		}

		GUI_Widget_Scrollbar_CalculateScrollPosition(scrollbar);

		if (scrollbar->dirty != 0) GUI_Widget_Scrollbar_Draw(w);
	}

	return false;
}

/**
 * Handles Click event for unit commands button.
 *
 * @param w The widget.
 * @return True, always.
 */
bool GUI_Widget_TextButton_Click(Widget *w)
{
	ActionType action;
	Unit *u;
	UnitInfo *ui;
	uint16 *actions;
	uint16 *found;
	ActionType unitAction;
	ActionInfo *ai;

	u = g_unitSelected;
	ui = &g_unitInfo[u->o.type];

	actions = ui->o.actionsPlayer;

	if (Unit_GetHouseID(u) != g_global->playerHouseID) {
		if (u->o.type != UNIT_SIEGE_TANK) {
			actions = g_global->actionsAI;
		}
	}

	action = actions[w->index - 8];

	unitAction = u->nextActionID;
	if (unitAction == ACTION_INVALID) {
		unitAction = u->actionID;
	}

	if (u->deviated != 0) {
		Unit_Deviation_Decrease(u, 5);
		if (u->deviated == 0) {
			GUI_Widget_MakeNormal(w, false);
			return true;
		}
	}

	GUI_Widget_MakeSelected(w, false);

	ai = &g_table_actionInfo[action];

	if (ai->variable_08 != g_global->selectionType) {
		g_unitActive = g_unitSelected;
		g_global->activeAction = action;
		GUI_ChangeSelectionType(ai->variable_08);

		return true;
	}

	Object_Script_Variable4_Clear(&u->o);
	u->targetAttack = 0;
	u->targetMove = 0;
	u->variable_72[0] = 0xFF;

	Unit_SetAction(u, action);

	if (ui->movementType == MOVEMENT_FOOT) Sound_Unknown0156(ai->variable_08);

	if (unitAction == action) return true;

	found = memchr(actions, unitAction, 4);
	if (found == NULL) return true;

	GUI_Widget_MakeNormal(GUI_Widget_Get_ByIndex((Widget *)emu_get_memorycsip(g_global->variable_3C26), found - actions + 8), false);

	return true;
}

/**
 * Handles Click event for current selection name.
 *
 * @return False, always.
 */
bool GUI_Widget_Name_Click()
{
	Object *o;
	uint16 packed;

	o = Object_GetByPackedTile(g_global->selectionPosition);

	if (o == NULL) return false;

	packed = Tile_PackTile(o->position);

	Map_SetViewportPosition(packed);
	Map_SetSelection(packed);

	return false;
}

/**
 * Handles Click event for "Cancel" button.
 *
 * @return True, always.
 */
bool GUI_Widget_Cancel_Click()
{
	if (g_global->activeStructureType != 0xFFFF) {
		Structure *s  = Structure_Get_ByPackedTile(g_global->activeStructurePosition);
		Structure *s2 = g_structureActive;

		assert(s2 != NULL);

		if (s != NULL) {
			s->o.linkedID = s2->o.index & 0xFF;
		} else {
			Structure_Free(s2);
		}

		g_structureActive = NULL;
		g_global->activeStructurePosition = 0xFFFF;

		GUI_ChangeSelectionType(4);

		g_global->variable_38EC = 0;
	}

	if (g_unitActive == NULL) return true;

	g_unitActive = NULL;
	g_global->activeAction = 0xFFFF;
	g_global->cursorSpriteID = 0;

	Sprites_SetMouseSprite(0, 0, g_sprites[0]);

	GUI_ChangeSelectionType(3);

	return true;
}

/**
 * Handles Click event for current selection picture.
 *
 * @return False, always.
 */
bool GUI_Widget_Picture_Click()
{
	Structure *s;

	if (g_unitSelected != NULL) {
		Unit_DisplayStatusText(g_unitSelected);

		return false;
	}

	s = Structure_Get_ByPackedTile(g_global->selectionPosition);

	if (s == NULL || !g_structureInfo[s->o.type].o.flags.s.factory) return false;

	Structure_BuildObject(s, 0xFFFF);

	return false;
}

/**
 * Handles Click event for "Repair/Upgrade" button.
 *
 * @param w The widget.
 * @return False, always.
 */
bool GUI_Widget_RepairUpgrade_Click(Widget *w)
{
	Structure *s;

	s = Structure_Get_ByPackedTile(g_global->selectionPosition);

	if (Structure_SetRepairingState(s, -1, w)) return false;
	Structure_SetUpgradingState(s, -1, w);

	return false;
}

static void GUI_Widget_Undraw(Widget *w, uint8 colour)
{
	uint16 offsetX;
	uint16 offsetY;
	uint16 width;
	uint16 height;

	if (w == NULL) return;

	offsetX = w->offsetX + (g_global->variable_4062[w->parentID][0] << 3);
	offsetY = w->offsetY + g_global->variable_4062[w->parentID][1];
	width = w->width;
	height = w->height;

	if (g_global->screenActiveID == 0) {
		GUI_Mouse_Hide_InRegion(offsetX, offsetY, offsetX + width, offsetY + height);
	}

	GUI_DrawFilledRectangle(offsetX, offsetY, offsetX + width, offsetY + height, colour);

	if (g_global->screenActiveID == 0) {
		GUI_Mouse_Show_InRegion();
	}
}

static void GUI_Window_Create(WindowDesc *desc)
{
	uint8 i;

	if (desc == NULL) return;

	g_global->variable_2A93.csip = 0x0;

	GUI_Screen_SetActive(2);

	Unknown_07AE_0000(desc->index);

	GUI_Widget_DrawBorder(g_global->variable_6D5D, 2, true);

	if (GUI_String_Get_ByIndex(desc->stringID) != NULL) {
		GUI_DrawText_Wrapper(GUI_String_Get_ByIndex(desc->stringID), (g_global->variable_992D << 3) + (g_global->variable_992F << 2), g_global->variable_992B + 6 + ((desc == &g_global->variable_271E) ? 2 : 0), 238, 0, 0x122);
	}

	if (GUI_String_Get_ByIndex(desc->widgets[0].stringID) == NULL) {
		/* "There are no saved games to load." */
		GUI_DrawText_Wrapper(String_Get_ByIndex(0x151), (g_global->variable_992D + 2) << 3, g_global->variable_992B + 42, 232, 0, 0x22);
	}

	for (i = 0; i < desc->widgetCount; i++) {
		Widget *w = (Widget *)emu_get_memorycsip(g_global->variable_2A75[i]);

		if (GUI_String_Get_ByIndex(desc->widgets[i].stringID) == NULL) continue;

		w->next.csip = 0x0;
		w->offsetX   = desc->widgets[i].offsetX;
		w->offsetY   = desc->widgets[i].offsetY;
		w->width     = desc->widgets[i].width;
		w->height    = desc->widgets[i].height;
		w->shortcut  = 0;
		w->shortcut2 = 0;

		if (desc != &g_global->variable_27F0) {
			if (desc->widgets[i].labelStringId != 0) {
				w->shortcut = GUI_Widget_GetShortcut(*GUI_String_Get_ByIndex(desc->widgets[i].labelStringId));
			} else {
				w->shortcut = GUI_Widget_GetShortcut(*GUI_String_Get_ByIndex(desc->widgets[i].stringID));
			}
		}

		w->shortcut2 = desc->widgets[i].shortcut2;
		if (w->shortcut == 0x1B) {
			w->shortcut2 = 0x13;
		}

		w->stringID = desc->widgets[i].stringID;
		w->drawModeNormal   = DRAW_MODE_CUSTOM_PROC;
		w->drawModeSelected = DRAW_MODE_CUSTOM_PROC;
		w->drawModeDown     = DRAW_MODE_CUSTOM_PROC;
		w->drawProcNormal.csip   = 0x34F20061;
		w->drawProcSelected.csip = 0x34F20061;
		w->drawProcDown.csip     = 0x34F20061;
		w->parentID = desc->index;
		w->state.all = 0x0;

		g_global->variable_2A93 = emu_Global_GetCSIP(GUI_Widget_Link((Widget *)emu_get_memorycsip(g_global->variable_2A93), w));

		GUI_Widget_MakeVisible(w);
		GUI_Widget_MakeNormal(w, false);
		GUI_Widget_Draw(w);

		if (desc->widgets[i].labelStringId == 0) continue;

		if (g_config.language == LANGUAGE_FRENCH) {
			GUI_DrawText_Wrapper(GUI_String_Get_ByIndex(desc->widgets[i].labelStringId), (g_global->variable_4062[w->parentID][0] << 3) + 40, w->offsetY + g_global->variable_4062[w->parentID][1] + 3, 232, 0, 0x22);
		} else {
			GUI_DrawText_Wrapper(GUI_String_Get_ByIndex(desc->widgets[i].labelStringId), w->offsetX + (g_global->variable_4062[w->parentID][0] << 3) - 10, w->offsetY + g_global->variable_4062[w->parentID][1] + 3, 232, 0, 0x222);
		}
	}

	if (g_global->savegameCountOnDisk >= 5 && desc->addArrows != 0) {
		Widget *w = &g_global->variable_29FD;

		w->drawProcNormal   = g_sprites[59];
		w->drawProcSelected = g_sprites[60];
		w->drawProcDown     = g_sprites[60];
		w->next.csip        = 0x0;
		w->parentID = desc->index;

		GUI_Widget_MakeNormal(w, false);
		GUI_Widget_MakeInvisible(w);
		GUI_Widget_Undraw(w, 233);

		g_global->variable_2A93 = emu_Global_GetCSIP(GUI_Widget_Link((Widget *)emu_get_memorycsip(g_global->variable_2A93), w));

		w = &g_global->variable_2A39;

		w->drawProcNormal   = g_sprites[61];
		w->drawProcSelected = g_sprites[62];
		w->drawProcDown     = g_sprites[62];
		w->next.csip        = 0x0;
		w->parentID = desc->index;

		GUI_Widget_MakeNormal(w, false);
		GUI_Widget_MakeInvisible(w);
		GUI_Widget_Undraw(w, 233);

		g_global->variable_2A93 = emu_Global_GetCSIP(GUI_Widget_Link((Widget *)emu_get_memorycsip(g_global->variable_2A93), w));
	}

	GUI_Mouse_Hide_Safe();

	Unknown_07AE_0000(desc->index);

	GUI_Screen_Copy(g_global->variable_992D, g_global->variable_992B, g_global->variable_992D, g_global->variable_992B, g_global->variable_992F, g_global->variable_9931, 2, 0);

	GUI_Mouse_Show_Safe();

	GUI_Screen_SetActive(0);
}

static void GUI_Window_BackupScreen(WindowDesc *desc)
{
	Unknown_07AE_0000(desc->index);

	GUI_Mouse_Hide_Safe();
	GFX_CopyToBuffer(g_global->variable_992D, g_global->variable_992B, g_global->variable_992F, g_global->variable_9931, emu_get_memorycsip(Screen_GetSegment_ByIndex_1(5)));
	GUI_Mouse_Show_Safe();
}

static void GUI_Window_RestoreScreen(WindowDesc *desc)
{
	Unknown_07AE_0000(desc->index);

	GUI_Mouse_Hide_Safe();
	GFX_CopyFromBuffer(g_global->variable_992D, g_global->variable_992B, g_global->variable_992F, g_global->variable_9931, emu_get_memorycsip(Screen_GetSegment_ByIndex_1(5)));
	GUI_Mouse_Show_Safe();
}

/**
 * Handles Click event for "Game controls" button.
 *
 * @param w The widget.
 */
static void GUI_Widget_GameControls_Click(Widget *w)
{
	WindowDesc *desc = &g_global->variable_26B5;
	bool loop;

	GUI_Window_BackupScreen(desc);

	GUI_Window_Create(desc);

	loop = true;
	while (loop) {
		Widget *w2 = (Widget *)emu_get_memorycsip(g_global->variable_2A93);
		uint16 key = GUI_Widget_HandleEvents(w2);

		if ((key & 0x8000) != 0) {
			w = GUI_Widget_Get_ByIndex(w2, key & 0x7FFF);

			switch ((key & 0x7FFF) - 0x1E) {
				case 0:
					g_gameConfig.music ^= 0x1;
					if (g_gameConfig.music == 0) {
						Driver_Music_Stop();
						g_global->variable_80B0 = 1;
					}
					Drivers_EnableMusic(g_gameConfig.music);
					break;

				case 1:
					g_gameConfig.sounds ^= 0x1;
					if (g_gameConfig.sounds == 0) GUI_Widget_MakeNormal(w, false);
					Drivers_EnableMusic(g_gameConfig.sounds);
					break;

				case 2:
					if (++g_gameConfig.gameSpeed >= 5) g_gameConfig.gameSpeed = 0;
					break;

				case 3:
					g_gameConfig.hints ^= 0x1;
					break;

				case 4:
					g_gameConfig.autoScroll ^= 0x1;
					break;

				case 5:
					loop = false;
					break;

				default: break;
			}

			GUI_Widget_MakeNormal(w, false);

			GUI_Widget_Draw(w);
		}

		GUI_PaletteAnimate();
	}

	GUI_Window_RestoreScreen(desc);
}

static void ShadeScreen()
{
	uint16 i;
	uint8 *g3C32;
	uint16 loc1A[9];

	memcpy(loc1A, g_global->variable_2A9B, 18);

	g3C32 = emu_get_memorycsip(g_global->variable_3C32);

	memmove(g_palette_998A, g3C32, 0x300);

	for (i = 0; i < 0x300; i++) g3C32[i] = g3C32[i] / 2;

	for (i = 0; i < 9; i++) {
		if (loc1A[i] == 0xFFFF) break;
		memmove(g3C32 + (loc1A[i] * 3), &g_palette_998A[loc1A[i] * 3], 3);
	}

	GFX_SetPalette(g_palette_998A);
}

static void UnshadeScreen()
{
	memmove(emu_get_memorycsip(g_global->variable_3C32), g_palette_998A, 0x300);

	GFX_SetPalette(emu_get_memorycsip(g_global->variable_3C32));
}

static bool GUI_YesNo(uint16 stringID)
{
	WindowDesc *desc = &g_global->variable_271E;
	bool loop = true;
	bool ret = false;

	desc->stringID = stringID;

	GUI_Window_BackupScreen(desc);

	GUI_Window_Create(desc);

	while (loop) {
		Widget *w = (Widget *)emu_get_memorycsip(g_global->variable_2A93);
		uint16 key = GUI_Widget_HandleEvents(w);

		if ((key & 0x8000) != 0) {
			switch (key & 0x7FFF) {
				case 0x1E: ret = true; break;
				case 0x1F: ret = false; break;
				default: break;
			}
			loop = false;
		}

		GUI_PaletteAnimate();
	}

	GUI_Window_RestoreScreen(desc);

	return ret;
}
/**
 * Handles Click event for "Options" button.
 *
 * @param w The widget.
 * @return False, always.
 */
bool GUI_Widget_Options_Click(Widget *w)
{
	WindowDesc *desc = &g_global->variable_264C;
	uint16 cursor = g_global->cursorSpriteID;
	bool loop;

	g_global->cursorSpriteID = 0;

	Sprites_SetMouseSprite(0, 0, g_sprites[0]);

	Sprites_UnloadTiles();

	memmove(g_palette_998A, g_global->variable_70A2, 0x300);

	g_global->variable_80B0 = 0;

	{
		csip32 nullcsip;
		nullcsip.csip = 0x0;
		Driver_Voice_Play(NULL, nullcsip, 0xFF, 0xFF);
	}

	Game_Timer_SetState(2, false);

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x22);

	g_global->savegameDiskspaceForNew = File_HasFreeSpace(30000) ? 1 : 0;

	if (g_global->variable_38D6.csip != 0x0) {
		GUI_Mouse_Hide_Safe();
		/* Unresolved jump */ emu_ip = 0x0147; emu_last_cs = 0xB4F2; emu_last_ip = 0x0147; emu_last_length = 0x0013; emu_last_crc = 0x7748; emu_call();
	}

	ShadeScreen();

	GUI_Window_BackupScreen(desc);

	GUI_Window_Create(desc);

	loop = true;

	while (loop) {
		Widget *w2 = (Widget *)emu_get_memorycsip(g_global->variable_2A93);
		uint16 key = GUI_Widget_HandleEvents(w2);

		if ((key & 0x8000) != 0) {
			w = GUI_Widget_Get_ByIndex(w2, key);

			GUI_Window_RestoreScreen(desc);

			switch ((key & 0x7FFF) - 0x1E) {
				case 0:
					if (GUI_Widget_SaveLoad_Click(false)) loop = false;
					break;

				case 1:
					if (GUI_Widget_SaveLoad_Click(true)) loop = false;
					break;

				case 2:
					GUI_Widget_GameControls_Click(w);
					break;

				case 3:
					/* "Are you sure you wish to restart?" */
					if (!GUI_YesNo(0x76)) break;

					loop = false;
					g_global->variable_38BE = 1;
					break;

				case 4:
					/* "Are you sure you wish to pick a new house?" */
					if (!GUI_YesNo(0x77)) break;

					loop = false;
					Driver_Music_FadeOut();
					g_global->variable_38BE = 2;
					break;

				case 5:
					loop = false;
					break;

				case 6:
					/* "Are you sure you want to quit playing?" */
					loop = !GUI_YesNo(0x65);
					g_global->variable_38F8 = loop ? 1 : 0;

					Sound_Unknown0363(0xFFFE);

					while (Driver_Voice_IsPlaying()) sleep(0);
					break;

				default: break;
			}

			if (g_global->variable_38F8 != 0 && loop) {
				GUI_Window_BackupScreen(desc);

				GUI_Window_Create(desc);
			}
		}

		GUI_PaletteAnimate();
	}

	g_global->variable_38C4 = 1;

	if (g_global->variable_38D6.csip != 0) {
		/* Unresolved jump */ emu_ip = 0x02BD; emu_last_cs = 0xB4F2; emu_last_ip = 0x02BD; emu_last_length = 0x001E; emu_last_crc = 0x2B44; emu_call();
	}

	Sprites_LoadTiles();
	GUI_DrawInterfaceAndRadar(0);

	UnshadeScreen();

	GUI_Widget_MakeSelected(w, false);

	Game_Timer_SetState(2, true);

	GameOptions_Save();

	Structure_Recount();
	Unit_Recount();

	g_global->cursorSpriteID = cursor;

	Sprites_SetMouseSprite(0, 0, g_sprites[cursor]);

	return false;
}

static uint16 GetSavegameCount()
{
	uint16 i;

	for (i = 0;; i++) {
		if (!File_Exists(GenerateSavegameFilename(i))) return i;
	}
}

static void FillSavegameDesc(bool save)
{
	uint8 i;

	for (i = 0; i < 5; i++) {
		char *desc = g_global->savegameDesc[i];
		char *filename;
		uint8 fileId;

		*desc = '\0';

		if (g_global->variable_2A97 - i < 0) continue;

		if (g_global->variable_2A97 - i == g_global->savegameCountOnDisk) {
			if (!save) continue;

			/* "[ EMPTY SLOT ]" */
			strcpy(desc, String_Get_ByIndex(0x63));
			continue;
		}

		filename = GenerateSavegameFilename(g_global->variable_2A97 - i);

		if (!File_Exists(filename)) continue;

		fileId = ChunkFile_Open(filename);
		ChunkFile_Read(fileId, HTOBE32('NAME'), desc, 50);
		ChunkFile_Close(fileId);
		continue;
	}
}


/**
 * Handles Click event for savegame button.
 *
 * @param key The index of the clicked button.
 * @return True if a game has been saved, False otherwise.
 */
static bool GUI_Widget_Savegame_Click(uint16 key)
{
	WindowDesc *desc = &g_global->variable_27F0;
	bool loop;
	char *saveDesc = g_global->savegameDesc[key];
	csip32 desccsip = emu_Global_GetCSIP(saveDesc);
	csip32 nullcsip;
	uint16 loc08;
	uint16 loc0A;
	bool ret;

	nullcsip.csip = 0x0;

	if (*saveDesc == '[') *saveDesc = 0;

	GUI_Window_BackupScreen(desc);

	GUI_Window_Create(desc);

	ret = false;
	loop = true;
	loc08 = 1;

	if (*saveDesc == '[') key = g_global->savegameCountOnDisk;

	GUI_Screen_SetActive(0);

	Unknown_07AE_0000(15);

	GUI_Mouse_Hide_Safe();
	GUI_DrawBorder((g_global->variable_992D << 3) - 1, g_global->variable_992B - 1, (g_global->variable_992F << 3) + 2, g_global->variable_9931 + 2, 4, false);
	GUI_Mouse_Show_Safe();

	while (loop) {
		Widget *w = (Widget *)emu_get_memorycsip(g_global->variable_2A93);

		GUI_DrawText_Wrapper(NULL, 0, 0, 232, 235, 0x22);

		loc0A = GUI_EditBox(desccsip, 50, 15, g_global->variable_2A93, nullcsip, loc08);
		loc08 = 2;

		if ((loc0A & 0x8000) == 0) continue;

		GUI_Widget_MakeNormal(GUI_Widget_Get_ByIndex(w, loc0A & 0x7FFF), false);

		switch (loc0A & 0x7FFF) {
			case 0x1E:
				if (*saveDesc == 0) break;

				SaveFile(GenerateSavegameFilename(g_global->variable_2A97 - key), saveDesc);
				loop = false;
				ret = true;
				break;

			case 0x1F:
				loop = false;
				ret = false;
				FillSavegameDesc(true);
				break;

			default: break;
		}
	}

	GUI_Window_RestoreScreen(desc);

	return ret;
}

static void UpdateArrows(bool save, bool force)
{
	Widget *w;

	if (!force && g_global->variable_2A97 == g_global->variable_2A99) return;

	g_global->variable_2A99 = g_global->variable_2A97;

	w = &g_global->variable_2A39;
	if (g_global->variable_2A97 >= 5) {
		GUI_Widget_MakeVisible(w);
	} else {
		GUI_Widget_MakeInvisible(w);
		GUI_Widget_Undraw(w, 233);
	}

	w = &g_global->variable_29FD;
	if (g_global->savegameCountOnDisk + (save ? g_global->savegameDiskspaceForNew : 0) - 1 > g_global->variable_2A97) {
		GUI_Widget_MakeVisible(w);
	} else {
		GUI_Widget_MakeInvisible(&g_global->variable_29FD);
		GUI_Widget_Undraw(w, 233);
	}
}

/**
 * Handles Click event for "Save Game" or "Load Game" button.
 *
 * @param save Wether to save or load.
 * @return True if a game has been saved or loaded, False otherwise.
 */
bool GUI_Widget_SaveLoad_Click(bool save)
{
	WindowDesc *desc = &g_global->variable_2787;
	bool loop;

	g_global->savegameCountOnDisk = GetSavegameCount();

	g_global->variable_2A97 = max(0, g_global->savegameCountOnDisk + (save ? g_global->savegameDiskspaceForNew : 0) - 1);

	FillSavegameDesc(save);

	desc->stringID = save ? 0x62 : 0x61; /* "Select a position to save to:" : "Select a saved game to load:" */

	GUI_Window_BackupScreen(desc);

	GUI_Window_Create(desc);

	UpdateArrows(save, true);

	loop = true;

	while (loop) {
		Widget *w = (Widget *)emu_get_memorycsip(g_global->variable_2A93);
		uint16 key = GUI_Widget_HandleEvents(w);

		UpdateArrows(save, false);

		if ((key & 0x8000) != 0) {
			Widget *w2;

			key &= 0x7FFF;
			w2 = GUI_Widget_Get_ByIndex(w, key);

			switch (key) {
				case 0x25:
					g_global->variable_2A97 = min(g_global->savegameCountOnDisk + (save ? g_global->savegameDiskspaceForNew : 0) - 1, g_global->variable_2A97 + 1);

					FillSavegameDesc(save);

					GUI_Widget_DrawAll(w);
					break;

				case 0x26:
					g_global->variable_2A97 = max(0, g_global->variable_2A97 - 1);

					FillSavegameDesc(save);

					GUI_Widget_DrawAll(w);
					break;

				case 0x23:
					loop = false;
					break;

				default: {
					GUI_Window_RestoreScreen(desc);

					key -= 0x1E;

					if (!save) {
						LoadFile(GenerateSavegameFilename(g_global->variable_2A97 - key));
						return true;
					}

					if (GUI_Widget_Savegame_Click(key)) return true;

					GUI_Window_BackupScreen(desc);

					UpdateArrows(save, true);

					GUI_Window_Create(desc);

					UpdateArrows(save, true);
				} break;
			}

			GUI_Widget_MakeNormal(w2, false);
		}

		GUI_PaletteAnimate();
	}

	GUI_Window_RestoreScreen(desc);

	return false;
}

/**
 * Handles Click event for "Clear List" button.
 *
 * @param w The widget.
 * @return True, always.
 */
bool GUI_Widget_HOF_ClearList_Click(Widget *w)
{
	/* "Are you sure you want to clear the high scores?" */
	if (GUI_YesNo(0x148)) {
		HallOfFameData *data = (HallOfFameData *)emu_get_memorycsip(w->scrollbar);

		memset(data, 0, 128);

		if (File_Exists("SAVEFAME.DAT")) File_Delete("SAVEFAME.DAT");

		GUI_HallOfFame_DrawData(data, true);

		g_global->variable_81E6 = 1;
	}

	GUI_Widget_MakeNormal(w, false);

	return true;
}

/**
 * Handles Click event for "Resume Game" button.
 *
 * @return True, always.
 */
bool GUI_Widget_HOF_Resume_Click()
{
	g_global->variable_81E6 = 1;

	return true;
}

/**
 * Handles Click event for the list in production window.
 *
 * @return True, always.
 */
bool GUI_Production_List_Click(Widget *w)
{
	GUI_FactoryWindow_B495_0F30();

	g_global->factoryWindowSelected = w->index - 46;

	GUI_FactoryWindow_DrawDetails();

	GUI_FactoryWindow_UpdateSelection(true);

	return true;
}

/**
 * Handles Click event for the "Resume Game" button in production window.
 *
 * @return True, always.
 */
bool GUI_Production_ResumeGame_Click(Widget *w)
{
	g_global->factoryWindowResult = FACTORY_RESUME;

	if (g_global->factoryWindowStarport != 0) {
		uint8 i = 0;
		House *h = g_playerHouse;
		while (g_global->factoryWindowOrdered != 0) {
			if (g_global->factoryWindowItems[i].amount != 0) {
				h->credits += g_global->factoryWindowItems[i].amount * g_global->factoryWindowItems[i].credits;
				g_global->factoryWindowOrdered -= g_global->factoryWindowItems[i].amount;
				g_global->factoryWindowItems[i].amount = 0;
			}

			i++;

			GUI_DrawCredits((uint8)g_global->playerHouseID, 0);
		}
	}

	if (w != NULL) GUI_Widget_MakeNormal(w, false);

	return true;
}

/**
 * Handles Click event for the "Ugrade" button in production window.
 *
 * @return True, always.
 */
bool GUI_Production_Upgrade_Click(Widget *w)
{
	GUI_Widget_MakeNormal(w, false);

	g_global->factoryWindowResult = FACTORY_UPGRADE;

	return true;
}

static void GUI_FactoryWindow_ScrollList(int16 step)
{
	uint16 i;
	uint16 y = 32;

	GUI_FactoryWindow_B495_0F30();

	GUI_Mouse_Hide_Safe();

	for (i = 0; i < 32; i++) {
		y += step;
		GFX_Screen_Copy2(72, y, 72, 16, 32, 136, 2, 0, false);
	}

	GUI_Mouse_Show_Safe();

	GUI_FactoryWindow_PrepareScrollList();

	GUI_FactoryWindow_UpdateSelection(true);
}

static void GUI_FactoryWindow_FailScrollList(int16 step)
{
	uint16 i;
	uint16 y = 32;

	GUI_FactoryWindow_B495_0F30();

	GUI_Mouse_Hide_Safe();

	GUI_FactoryWindow_B495_0F30();

	for (i = 0; i < 6; i++) {
		y += step;
		GFX_Screen_Copy2(72, y, 72, 16, 32, 136, 2, 0, false);
	}

	for (i = 0; i < 6; i++) {
		y -= step;
		GFX_Screen_Copy2(72, y, 72, 16, 32, 136, 2, 0, false);
	}

	GUI_Mouse_Show_Safe();

	GUI_FactoryWindow_UpdateSelection(true);
}

/**
 * Handles Click event for the "Down" button in production window.
 *
 * @return True, always.
 */
bool GUI_Production_Down_Click(Widget *w)
{
	bool locdi = false;

	if (g_global->factoryWindowSelected < 3 && (g_global->factoryWindowSelected + 1) < g_global->factoryWindowTotal) {
		g_global->variable_76B4 = 10;
		GUI_FactoryWindow_B495_0F30();
		g_global->factoryWindowSelected++;

		GUI_FactoryWindow_UpdateSelection(true);

		locdi = true;
	} else {
		if (g_global->factoryWindowBase + 4 < g_global->factoryWindowTotal) {
			g_global->variable_76B4 = 10;
			g_global->factoryWindowBase++;
			locdi = true;

			GUI_FactoryWindow_ScrollList(1);

			GUI_FactoryWindow_UpdateSelection(true);
		} else {
			locdi = false;

			GUI_FactoryWindow_DrawDetails();

			GUI_FactoryWindow_FailScrollList(1);
		}
	}

	do {
		GUI_FactoryWindow_UpdateSelection(false);
	} while (g_global->variable_76B4 != 0);

	if (locdi) GUI_FactoryWindow_DrawDetails();

	GUI_Widget_MakeNormal(w, false);

	return true;
}

/**
 * Handles Click event for the "Up" button in production window.
 *
 * @return True, always.
 */
bool GUI_Production_Up_Click(Widget *w)
{
	bool locdi = false;

	if (g_global->factoryWindowSelected != 0) {
		g_global->variable_76B4 = 10;
		GUI_FactoryWindow_B495_0F30();
		g_global->factoryWindowSelected--;

		GUI_FactoryWindow_UpdateSelection(true);

		locdi = true;
	} else {
		if (g_global->factoryWindowBase != 0) {
			g_global->variable_76B4 = 10;
			g_global->factoryWindowBase--;
			locdi = true;

			GUI_FactoryWindow_ScrollList(-1);

			GUI_FactoryWindow_UpdateSelection(true);
		} else {
			locdi = false;

			GUI_FactoryWindow_DrawDetails();

			GUI_FactoryWindow_FailScrollList(-1);
		}
	}

	do {
		GUI_FactoryWindow_UpdateSelection(false);
	} while (g_global->variable_76B4 != 0);

	if (locdi) GUI_FactoryWindow_DrawDetails();

	GUI_Widget_MakeNormal(w, false);

	return true;
}

static void GUI_Purchase_ShowInvoice()
{
	Widget *w = (Widget *)emu_get_memorycsip(g_global->variable_7FA2);
	uint16 oldScreenID = GUI_Screen_SetActive(2);
	uint16 y = 48;
	uint16 total = 0;
	uint16 x;

	GUI_DrawFilledRectangle(128, 48, 311, 159, 20);

	/* "Item Name                 Qty Total" */
	GUI_DrawText_Wrapper(String_Get_ByIndex(0xB6), 128, y, 12, 0, 0x11);

	y += 7;

	GUI_DrawLine(129, y, 310, y, 12);

	y += 2;

	if (g_global->factoryWindowOrdered != 0) {
		uint16 i;

		for (i = 0; i < g_global->factoryWindowTotal; i++) {
			ObjectInfo *oi;
			uint16 amount;
			if (g_global->factoryWindowItems[i].amount == 0) continue;

			amount = g_global->factoryWindowItems[i].amount * g_global->factoryWindowItems[i].credits;
			total += amount;

			sprintf((char *)g_global->variable_9939, "%02d %5d", g_global->factoryWindowItems[i].amount, amount);

			oi = (ObjectInfo *)emu_get_memorycsip(g_global->factoryWindowItems[i].objectInfo);
			GUI_DrawText_Wrapper(String_Get_ByIndex(oi->stringID_full), 128, y, 8, 0, 0x11);

			GUI_DrawText_Monospace((char *)g_global->variable_9939, 311 - strlen((char *)g_global->variable_9939) * 6, y, 15, 0, 6);

			y += 8;
		}
	} else {
		/* "NO UNITS ON ORDER" */
		GUI_DrawText_Wrapper(String_Get_ByIndex(0xB5), 220, 99, 6, 0, 0x112);
	}

	GUI_DrawLine(129, 148, 310, 148, 12);
	GUI_DrawLine(129, 150, 310, 150, 12);

	sprintf((char *)g_global->variable_9939, "%d", total);

	x = 311 - strlen((char *)g_global->variable_9939) * 6;

	/* "Total Cost :" */
	GUI_DrawText_Wrapper(GUI_String_Get_ByIndex(0xB8), x - 3, 152, 11, 0, 0x211);

	GUI_DrawText_Monospace((char *)g_global->variable_9939, x, 152, 11, 0, 6);

	GUI_Mouse_Hide_Safe();
	GUI_Screen_Copy(16, 48, 16, 48, 23, 112, 2, 0);
	GUI_Mouse_Show_Safe();

	GUI_Screen_SetActive(0);

	/* "Invoice of Units on Order" */
	GUI_FactoryWindow_DrawCaption(String_Get_ByIndex(0xB7));

	Input_History_Clear();

	while (GUI_Widget_HandleEvents(w) == 0) {
		GUI_DrawCredits((uint8)g_global->playerHouseID, 0);

		GUI_FactoryWindow_UpdateSelection(false);

		GUI_PaletteAnimate();
	}

	GUI_Screen_SetActive(oldScreenID);

	w = GUI_Widget_Get_ByIndex(w, 10);

	if (w != NULL && Mouse_InsideRegion(w->offsetX, w->offsetY, w->offsetX + w->width, w->offsetY + w->height) != 0) {
		while (Input_Test(0x41) != 0 || Input_Test(0x42) != 0) {
			sleep(0); /* Spin-lock */
		}
		Input_History_Clear();
	}

	if (g_global->factoryWindowResult == FACTORY_CONTINUE) GUI_FactoryWindow_DrawDetails();
}

/**
 * Handles Click event for the "Invoice" button in starport window.
 *
 * @return True, always.
 */
bool GUI_Purchase_Invoice_Click(Widget *w)
{
	GUI_Widget_MakeInvisible(w);
	GUI_Purchase_ShowInvoice();
	GUI_Widget_MakeVisible(w);
	GUI_Widget_MakeNormal(w, false);
	return true;
}

/**
 * Handles Click event for the "Build this" button in production window.
 *
 * @return True, always.
 */
bool GUI_Production_BuildThis_Click(Widget *w)
{
	if (g_global->factoryWindowStarport != 0) {
		if (g_global->factoryWindowOrdered == 0) {
			GUI_Widget_MakeInvisible(w);
			GUI_Purchase_ShowInvoice();
			GUI_Widget_MakeVisible(w);
		} else {
			g_global->factoryWindowResult = FACTORY_BUY;
		}
	} else {
		FactoryWindowItem *item;
		ObjectInfo *oi;

		item = GUI_FactoryWindow_GetItem(g_global->factoryWindowSelected);
		oi = (ObjectInfo *)emu_get_memorycsip(item->objectInfo);

		if (oi->available > 0) {
			item->amount = 1;
			g_global->factoryWindowResult = FACTORY_BUY;
		}
	}

	GUI_Widget_MakeNormal(w, false);

	return true;
}

/**
 * Handles Click event for the "+" button in starport window.
 *
 * @return True, always.
 */
bool GUI_Purchase_Plus_Click(Widget *w)
{
	FactoryWindowItem *item;
	ObjectInfo *oi;
	House *h = g_playerHouse;

	GUI_Widget_MakeNormal(w, false);

	item = GUI_FactoryWindow_GetItem(g_global->factoryWindowSelected);
	oi = (ObjectInfo *)emu_get_memorycsip(item->objectInfo);

	if (item->amount < oi->available && item->credits <= h->credits) {
		item->amount++;

		GUI_FactoryWindow_UpdateDetails();

		g_global->factoryWindowOrdered++;

		h->credits -= item->credits;

		GUI_FactoryWindow_DrawCaption(NULL);
	}

	return true;
}

/**
 * Handles Click event for the "-" button in startport window.
 *
 * @return True, always.
 */
bool GUI_Purchase_Minus_Click(Widget *w)
{
	FactoryWindowItem *item;
	House *h = g_playerHouse;

	GUI_Widget_MakeNormal(w, false);

	item = GUI_FactoryWindow_GetItem(g_global->factoryWindowSelected);

	if (item->amount != 0) {
		item->amount--;

		GUI_FactoryWindow_UpdateDetails();

		g_global->factoryWindowOrdered--;

		h->credits += item->credits;

		GUI_FactoryWindow_DrawCaption(NULL);
	}

	return true;
}
