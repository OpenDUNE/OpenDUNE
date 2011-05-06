/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../pool/structure.h"
#include "../pool/unit.h"
#include "../structure.h"
#include "../unit.h"
#include "gui.h"
#include "widget.h"
#include "../unknown/unknown.h"
#include "../tile.h"
#include "../map.h"
#include "../sprites.h"
#include "../tools.h"
#include "../os/sleep.h"
#include "../load.h"
#include "../file.h"
#include "../save.h"
#include "../os/endian.h"

extern void f__01F7_286D_0023_9A13();
extern void f__259E_0040_0015_5E4A();
extern void f__2B4C_0002_0029_64AF();
extern void f__2B6C_0137_0020_C73F();
extern void f__2B6C_0169_001E_6939();
extern void emu_GUI_Option_CreateWindow();
extern void f__B4F2_0EE0_000E_BC8E();
extern void f__B4F2_0F24_000E_BC8E();
extern void f__B4F2_11CF_0013_5635();
extern void emu_GUI_String_Get_ByIndex();
extern void f__B4F2_13CE_0013_65D7();
extern void f__B518_11C6_0011_1160();
extern void f__B520_08E6_0038_85A4();
extern void f__B520_096E_003C_F7E4();
extern void overlay(uint16 cs, uint8 force);

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
void GUI_Widget_Scrollbar_Scroll(WidgetScrollbar *scrollbar, uint16 scroll, csip32 scrollbarcsip)
{
	scrollbar->scrollPosition += scroll;

	if ((int16)scrollbar->scrollPosition >= scrollbar->scrollMax - scrollbar->scrollPageSize) {
		scrollbar->scrollPosition = scrollbar->scrollMax - scrollbar->scrollPageSize;
	}

	if ((int16)scrollbar->scrollPosition <= 0) scrollbar->scrollPosition = 0;

	emu_push(scrollbarcsip.s.cs); emu_push(scrollbarcsip.s.ip);
	emu_push(emu_cs); emu_push(0x068C); emu_cs = 0x3520; overlay(0x3520, 0); f__B520_096E_003C_F7E4();
	emu_sp += 4;

	GUI_Widget_ScrollBar_Draw((Widget *)emu_get_memorycsip(scrollbar->parent));
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
				g_global->activeStructure = g_global->structureStartPos;
				g_global->activeStructure.s.ip += ns->o.index * sizeof(Structure);
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
	GUI_Widget_Scrollbar_Scroll((WidgetScrollbar *)emu_get_memorycsip(w->scrollbar), -1, w->scrollbar);

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
	GUI_Widget_Scrollbar_Scroll((WidgetScrollbar *)emu_get_memorycsip(w->scrollbar), 1, w->scrollbar);

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
		GUI_Widget_ScrollBar_Draw(w);
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
			GUI_Widget_Scrollbar_Scroll(scrollbar, (positionCurrent < positionBegin ? -scrollbar->scrollPageSize : scrollbar->scrollPageSize), w->scrollbar);
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

		emu_push(w->scrollbar.s.cs); emu_push(w->scrollbar.s.ip);
		emu_push(emu_cs); emu_push(0x0605); emu_cs = 0x3520; overlay(0x3520, 0); f__B520_08E6_0038_85A4();
		emu_sp += 4;

		if (scrollbar->dirty != 0) GUI_Widget_ScrollBar_Draw(w);
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
	csip32 acsip;
	csip32 loc08;
	ActionType unitAction;
	ActionInfo *ai;

	u = Unit_Get_ByMemory(g_global->selectionUnit);
	ui = &g_unitInfo[u->o.type];

	actions = ui->o.actionsPlayer;
	acsip.s.cs = 0x2D07;
	acsip.s.ip = u->o.type * sizeof(UnitInfo) + 0x22;

	if (Unit_GetHouseID(u) != g_global->playerHouseID) {
		if (u->o.type != UNIT_SIEGE_TANK) {
			actions = g_global->actionsAI;
			acsip.s.cs = 0x353F;
			acsip.s.ip = 0x3C2A;
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

	ai = &g_actionInfo[action];

	if (ai->variable_08 != g_global->selectionType) {
		g_global->activeUnit = g_global->selectionUnit;
		g_global->activeAction = action;
		GUI_ChangeSelectionType(ai->variable_08);

		return true;
	}

	Object_Script_Variable4_Clear(&u->o);
	u->targetAttack = 0;
	u->targetMove = 0;
	u->variable_72[0] = 0xFF;

	Unit_SetAction(u, action);

	if (ui->movementType == MOVEMENT_FOOT) Unknown_B483_0156(ai->variable_08);

	if (unitAction == action) return true;

	emu_push(4);
	emu_push(unitAction);
	emu_push(acsip.s.cs); emu_push(acsip.s.ip);
	emu_push(emu_cs); emu_push(0x1E4E); emu_cs = 0x01F7; f__01F7_286D_0023_9A13();
	emu_sp += 8;

	loc08.s.cs = emu_dx;
	loc08.s.ip = emu_ax;
	if (loc08.csip == 0) return true;

	GUI_Widget_MakeNormal(GUI_Widget_Get_ByIndex((Widget *)emu_get_memorycsip(g_global->variable_3C26), loc08.s.ip - acsip.s.ip + 8), false);

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
		Structure *s2 = Structure_Get_ByMemory(g_global->activeStructure);

		assert(s2 != NULL);

		if (s != NULL) {
			s->o.linkedID = s2->o.index & 0xFF;
		} else {
			Structure_Free(s2);
		}

		g_global->activeStructure.csip = 0x0;
		g_global->activeStructurePosition = 0xFFFF;

		GUI_ChangeSelectionType(4);

		g_global->variable_38EC = 0;
	}

	if (g_global->activeUnit.csip == 0x0) return true;

	g_global->activeUnit.csip = 0x0;
	g_global->activeAction = 0xFFFF;
	g_global->cursorSpriteID = 0;

	emu_push(g_sprites[0].s.cs); emu_push(g_sprites[0].s.ip);
	emu_push(0);
	emu_push(0);
	emu_push(emu_cs); emu_push(0x107C); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	emu_sp += 8;

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

	if (g_global->selectionUnit.csip != 0x0) {
		Unit *u = Unit_Get_ByMemory(g_global->selectionUnit);

		Unit_DisplayStatusText(u);

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

/**
 * Handles Click event for "Game controls" button.
 *
 * @param w The widget.
 */
static void GUI_Widget_GameControls_Click(Widget *w)
{
	bool loop;
	GameCfg *cfg = &g_global->gameConfig;

	emu_push(0x353F); emu_push(0x26B5);
	emu_push(emu_cs); emu_push(0x0396); emu_cs = 0x34F2; overlay(0x34F2, 0); f__B4F2_0EE0_000E_BC8E();
	emu_sp += 4;

	emu_push(0x353F); emu_push(0x26B5);
	emu_push(emu_cs); emu_push(0x03A2); emu_cs = 0x34F2; overlay(0x34F2, 0); emu_GUI_Option_CreateWindow();
	emu_sp += 4;

	loop = true;
	while (loop) {
		Widget *w2 = (Widget *)emu_get_memorycsip(g_global->variable_2A93);
		uint16 key = GUI_Widget_HandleEvents(w2);

		if ((key & 0x8000) != 0) {
			w = GUI_Widget_Get_ByIndex(w2, key & 0x7FFF);

			switch ((key & 0x7FFF) - 0x1E) {
				case 0:
					cfg->music ^= 0x1;
					if (cfg->music == 0) {
						Driver_Music_Stop();
						g_global->variable_80B0 = 1;
					}
					Drivers_EnableMusic(cfg->music);
					break;

				case 1:
					cfg->sounds ^= 0x1;
					if (cfg->sounds == 0) GUI_Widget_MakeNormal(w, false);
					Drivers_EnableMusic(cfg->sounds);
					break;

				case 2:
					if (++cfg->gameSpeed >= 5) cfg->gameSpeed = 0;
					g_global->gameSpeed = cfg->gameSpeed;
					break;

				case 3:
					cfg->hints ^= 0x1;
					break;

				case 4:
					cfg->autoScroll ^= 0x1;
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

	emu_push(0x353F); emu_push(0x26B5);
	emu_push(emu_cs); emu_push(0x04A1); emu_cs = 0x34F2; overlay(0x34F2, 0); f__B4F2_0F24_000E_BC8E();
	emu_sp += 4;
}

static void ShadeScreen()
{
	uint16 i;
	uint8 *g3C32;
	uint8 *g998A;
	uint16 loc1A[9];

	memcpy(loc1A, g_global->variable_2A9B, 18);

	g3C32 = emu_get_memorycsip(g_global->variable_3C32);
	g998A = emu_get_memorycsip(g_global->variable_998A);

	memmove(g998A, g3C32, 0x300);

	for (i = 0; i < 0x300; i++) g3C32[i] = g3C32[i] / 2;

	for (i = 0; i < 9; i++) {
		if (loc1A[i] == 0xFFFF) break;
		memmove(g3C32 + (loc1A[i] * 3), g998A + (loc1A[i] * 3), 3);
	}

	emu_push(g_global->variable_998A.s.cs); emu_push(g_global->variable_998A.s.ip);
	emu_push(emu_cs); emu_push(0x0ED9); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	emu_sp += 4;
}

static void UnshadeScreen()
{
	memmove(emu_get_memorycsip(g_global->variable_3C32), emu_get_memorycsip(g_global->variable_998A), 0x300);

	emu_push(g_global->variable_3C32.s.cs); emu_push(g_global->variable_3C32.s.ip);
	emu_push(emu_cs); emu_push(0x0E12); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	emu_sp += 4;
}

static bool GUI_YesNo(uint16 stringID)
{
	bool loop = true;
	bool ret = false;

	g_global->variable_2720 = stringID;

	emu_push(0x353F); emu_push(0x271E);
	emu_push(emu_cs); emu_push(0x1119); emu_cs = 0x34F2; overlay(0x34F2, 0); f__B4F2_0EE0_000E_BC8E();
	emu_sp += 4;

	emu_push(0x353F); emu_push(0x271E);
	emu_push(emu_cs); emu_push(0x1124); emu_cs = 0x34F2; overlay(0x34F2, 0); emu_GUI_Option_CreateWindow();
	emu_sp += 4;

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

	emu_push(0x353F); emu_push(0x271E);
	emu_push(emu_cs); emu_push(0x1175); emu_cs = 0x34F2; overlay(0x34F2, 0); f__B4F2_0F24_000E_BC8E();
	emu_sp += 4;

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
	uint16 cursor = g_global->cursorSpriteID;
	bool loop;

	g_global->cursorSpriteID = 0;

	emu_push(g_sprites[0].s.cs); emu_push(g_sprites[0].s.ip);
	emu_push(0);
	emu_push(0);
	emu_push(emu_cs); emu_push(0x00CA); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
	emu_sp += 8;

	Sprites_UnloadTiles();

	memmove(emu_get_memorycsip(g_global->variable_998A), g_global->variable_70A2, 0x300);

	g_global->variable_80B0 = 0;

	{
		csip32 nullcsip;
		nullcsip.csip = 0x0;
		Driver_Voice_Play(NULL, nullcsip, 0xFF, 0xFF);
	}

	Tools_Var76B8_Set(2, false);

	GUI_DrawText_Wrapper(NULL, 0, 0, 0, 0, 0x22);

	emu_push(0); emu_push(0x7530);
	emu_push(emu_cs); emu_push(0x0134); emu_cs = 0x34F2; overlay(0x34F2, 0); f__B4F2_11CF_0013_5635();
	emu_sp += 4;
	g_global->variable_2A91 = emu_ax;

	if (g_global->variable_38D6.csip != 0x0) {
		emu_push(emu_cs); emu_push(0x0147); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
		/* Unresolved jump */ emu_ip = 0x0147; emu_last_cs = 0xB4F2; emu_last_ip = 0x0147; emu_last_length = 0x0013; emu_last_crc = 0x7748; emu_call();
	}

	ShadeScreen();

	emu_push(0x353F); emu_push(0x264C);
	emu_push(emu_cs); emu_push(0x017D); emu_cs = 0x34F2; overlay(0x34F2, 0); f__B4F2_0EE0_000E_BC8E();
	emu_sp += 4;

	emu_push(0x353F); emu_push(0x264C);
	emu_push(emu_cs); emu_push(0x0189); emu_cs = 0x34F2; overlay(0x34F2, 0); emu_GUI_Option_CreateWindow();
	emu_sp += 4;

	loop = true;

	while (loop) {
		Widget *w2 = (Widget *)emu_get_memorycsip(g_global->variable_2A93);
		uint16 key = GUI_Widget_HandleEvents(w2);

		if ((key & 0x8000) != 0) {
			w = GUI_Widget_Get_ByIndex(w2, key);

			emu_push(0x353F); emu_push(0x264C);
			emu_push(emu_cs); emu_push(0x01CC); emu_cs = 0x34F2; overlay(0x34F2, 0); f__B4F2_0F24_000E_BC8E();
			emu_sp += 4;

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

					Unknown_B483_0363(0xFFFE);

					while (Driver_Voice_IsPlaying()) sleep(0);
					break;

				default: break;
			}

			if (g_global->variable_38F8 != 0 && loop) {
				emu_push(0x353F); emu_push(0x264C);
				emu_push(emu_cs); emu_push(0x0294); emu_cs = 0x34F2; overlay(0x34F2, 0); f__B4F2_0EE0_000E_BC8E();
				emu_sp += 4;

				emu_push(0x353F); emu_push(0x264C);
				emu_push(emu_cs); emu_push(0x02A0); emu_cs = 0x34F2; overlay(0x34F2, 0); emu_GUI_Option_CreateWindow();
				emu_sp += 4;
			}
		}

		GUI_PaletteAnimate();
	}

	g_global->variable_38C4 = 1;

	if (g_global->variable_38D6.csip != 0) {
		emu_push(0); emu_push(0xFA00);
		emu_push(0);
		emu_push(emu_cs); emu_push(0x02CC); emu_cs = 0x252E; emu_Memory_GetBlock1();
		/* Check if this overlay should be reloaded */
		if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
		/* Unresolved jump */ emu_ip = 0x02CC; emu_last_cs = 0xB4F2; emu_last_ip = 0x02CC; emu_last_length = 0x001E; emu_last_crc = 0x2B44; emu_call();
	}

	Sprites_LoadTiles();
	GUI_DrawInterfaceAndRadar(0);

	UnshadeScreen();

	GUI_Widget_MakeSelected(w, false);

	Tools_Var76B8_Set(2, true);

	GameOptions_Save();

	Structure_Recount();
	Unit_Recount();

	g_global->cursorSpriteID = cursor;

	emu_push(g_sprites[cursor].s.cs); emu_push(g_sprites[cursor].s.ip);
	emu_push(0);
	emu_push(0);
	emu_push(emu_cs); emu_push(0x036C); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }
	emu_sp += 8;

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

			emu_push(0x63); /* "[ EMPTY SLOT ]" */
			emu_push(emu_cs); emu_push(0x1260); emu_cs = 0x34F2; overlay(0x34F2, 0); emu_GUI_String_Get_ByIndex();
			emu_sp += 2;
			strcpy(desc, (char *)&emu_get_memory8(emu_dx, emu_ax, 0x0));
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
	bool loop;
	char *desc = g_global->savegameDesc[key];
	csip32 desccsip = emu_Global_GetCSIP(desc);
	csip32 nullcsip;
	uint16 loc08;
	uint16 loc0A;
	bool ret;

	nullcsip.csip = 0x0;

	if (*desc == '[') *desc = 0;

	emu_push(0x353F); emu_push(0x27F0);
	emu_push(emu_cs); emu_push(0x06E3); emu_cs = 0x34F2; overlay(0x34F2, 0); f__B4F2_0EE0_000E_BC8E();
	emu_sp += 4;

	emu_push(0x353F); emu_push(0x27F0);
	emu_push(emu_cs); emu_push(0x06EF); emu_cs = 0x34F2; overlay(0x34F2, 0); emu_GUI_Option_CreateWindow();
	emu_sp += 4;

	ret = false;
	loop = true;
	loc08 = 1;

	if (*desc == '[') key = g_global->savegameCountOnDisk;

	Unknown_Set_Global_6C91(0);

	Unknown_07AE_0000(15);

	emu_push(emu_cs); emu_push(0x0722); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }

	GUI_DrawBorder((g_global->variable_992D << 3) - 1, g_global->variable_992B - 1, (g_global->variable_992F << 3) + 2, g_global->variable_9931 + 2, 4, false);

	emu_push(emu_cs); emu_push(0x0756); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34F2) { overlay(0x34F2, 1); }

	while (loop) {
		Widget *w = (Widget *)emu_get_memorycsip(g_global->variable_2A93);

		GUI_DrawText_Wrapper(NULL, 0, 0, 232, 235, 0x22);

		loc0A = GUI_EditBox(desccsip, 50, 15, g_global->variable_2A93, nullcsip, loc08);
		loc08 = 2;

		if ((loc0A & 0x8000) == 0) continue;

		GUI_Widget_MakeNormal(GUI_Widget_Get_ByIndex(w, loc0A & 0x7FFF), false);

		switch (loc0A & 0x7FFF) {
			case 0x1E:
				if (*desc == 0) break;

				SaveFile(GenerateSavegameFilename(g_global->variable_2A97 - key), desc);
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

	emu_push(0x353F); emu_push(0x27F0);
	emu_push(emu_cs); emu_push(0x0849); emu_cs = 0x34F2; overlay(0x34F2, 0); f__B4F2_0F24_000E_BC8E();
	emu_sp += 4;

	return ret;
}

static void UpdateArrows(bool save, bool force)
{
	if (!force && g_global->variable_2A97 == g_global->variable_2A99) return;

	g_global->variable_2A99 = g_global->variable_2A97;

	if (g_global->variable_2A97 >= 5) {
		GUI_Widget_MakeVisible(&g_global->variable_2A39);
	} else {
		GUI_Widget_MakeInvisible(&g_global->variable_2A39);

		emu_push(0xE9);
		emu_push(0x353F); emu_push(0x2A39);
		emu_push(emu_cs); emu_push(0x0D99); emu_cs = 0x34F2; overlay(0x34F2, 0); f__B4F2_13CE_0013_65D7();
		emu_sp += 6;
	}

	if (g_global->savegameCountOnDisk + (save ? g_global->variable_2A91 : 0) - 1 > g_global->variable_2A97) {
		GUI_Widget_MakeVisible(&g_global->variable_29FD);
		return;
	}

	GUI_Widget_MakeInvisible(&g_global->variable_29FD);

	emu_push(0xE9);
	emu_push(0x353F); emu_push(0x29FD);
	emu_push(emu_cs); emu_push(0x0DDE); emu_cs = 0x34F2; overlay(0x34F2, 0); f__B4F2_13CE_0013_65D7();
	emu_sp += 6;
}

/**
 * Handles Click event for "Save Game" or "Load Game" button.
 *
 * @param save Wether to save or load.
 * @return True if a game has been saved or loaded, False otherwise.
 */
bool GUI_Widget_SaveLoad_Click(bool save)
{
	bool loop;

	g_global->savegameCountOnDisk = GetSavegameCount();

	g_global->variable_2A97 = max(0, g_global->savegameCountOnDisk + (save ? g_global->variable_2A91 : 0) - 1);

	FillSavegameDesc(save);

	g_global->variable_2789 = save ? 0x62 : 0x61; /* "Select a position to save to:" : "Select a saved game to load:" */

	emu_push(0x353F); emu_push(0x2787);
	emu_push(emu_cs); emu_push(0x0516); emu_cs = 0x34F2; overlay(0x34F2, 0); f__B4F2_0EE0_000E_BC8E();
	emu_sp += 4;

	emu_push(0x353F); emu_push(0x2787);
	emu_push(emu_cs); emu_push(0x0522); emu_cs = 0x34F2; overlay(0x34F2, 0); emu_GUI_Option_CreateWindow();
	emu_sp += 4;

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
					g_global->variable_2A97 = min(g_global->savegameCountOnDisk + (save ? g_global->variable_2A91 : 0) - 1, g_global->variable_2A97 + 1);

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
					emu_push(0x353F); emu_push(0x2787);
					emu_push(emu_cs); emu_push(0x0606); emu_cs = 0x34F2; overlay(0x34F2, 0); f__B4F2_0F24_000E_BC8E();
					emu_sp += 4;

					key -= 0x1E;

					if (!save) {
						LoadFile(GenerateSavegameFilename(g_global->variable_2A97 - key));
						return true;
					}

					if (GUI_Widget_Savegame_Click(key)) return true;

					emu_push(0x353F); emu_push(0x2787);
					emu_push(emu_cs); emu_push(0x0654); emu_cs = 0x34F2; overlay(0x34F2, 0); f__B4F2_0EE0_000E_BC8E();
					emu_sp += 4;

					UpdateArrows(save, true);

					emu_push(0x353F); emu_push(0x2787);
					emu_push(emu_cs); emu_push(0x066C); emu_cs = 0x34F2; overlay(0x34F2, 0); emu_GUI_Option_CreateWindow();
					emu_sp += 4;

					UpdateArrows(save, true);
				} break;
			}

			GUI_Widget_MakeNormal(w2, false);
		}

		GUI_PaletteAnimate();
	}

	emu_push(0x353F); emu_push(0x2787);
	emu_push(emu_cs); emu_push(0x06A4); emu_cs = 0x34F2; overlay(0x34F2, 0); f__B4F2_0F24_000E_BC8E();
	emu_sp += 4;

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
		memset(emu_get_memorycsip(w->scrollbar), 0, 128);

		if (File_Exists("SAVEFAME.DAT")) File_Delete("SAVEFAME.DAT");

		emu_push(1);
		emu_push(w->scrollbar.s.cs); emu_push(w->scrollbar.s.ip);
		emu_push(emu_cs); emu_push(0x0AEC); emu_cs = 0x3518; overlay(0x3518, 0); f__B518_11C6_0011_1160();
		emu_sp += 8;

		g_global->variable_81E6 = 1;
	}

	GUI_Widget_MakeNormal(w, false);

	return true;
}
