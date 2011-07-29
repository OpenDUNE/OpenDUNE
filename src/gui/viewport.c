/* $Id$ */

/** @file src/gui/viewport.c Viewport routines. */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "../global.h"
#include "../os/math.h"
#include "../os/strings.h"

#include "gui.h"
#include "widget.h"
#include "../opendune.h"
#include "../mouse.h"
#include "../house.h"
#include "../map.h"
#include "../pool/house.h"
#include "../pool/structure.h"
#include "../pool/unit.h"
#include "../scenario.h"
#include "../sprites.h"
#include "../string.h"
#include "../structure.h"
#include "../tile.h"
#include "../timer.h"
#include "../tools.h"
#include "../unit.h"
#include "../unknown/unknown.h"

static uint32 s_tickCursor;    /*!< Stores last time Viewport changed the cursor spriteID. */
static uint32 s_tickMapScroll; /*!< Stores last time Viewport ran MapScroll function. */

/**
 * Handles the Click events for the Viewport widget.
 *
 * @param w The widget.
 */
bool GUI_Widget_Viewport_Click(Widget *w)
{
	uint16 direction;
	uint16 x, y;
	uint16 spriteID;
	uint16 packed;
	bool click, drag;

	spriteID = g_global->cursorSpriteID;
	switch (w->index) {
		default: break;
		case 39: spriteID = 1; break;
		case 40: spriteID = 2; break;
		case 41: spriteID = 4; break;
		case 42: spriteID = 3; break;
		case 43: spriteID = g_global->cursorDefaultSpriteID; break;
		case 44: spriteID = g_global->cursorDefaultSpriteID; break;
		case 45: spriteID = 0; break;
	}

	if (spriteID != g_global->cursorSpriteID) {
		s_tickCursor = g_timerGame;

		Sprites_SetMouseSprite(g_global->cursorHotSpots[spriteID][0], g_global->cursorHotSpots[spriteID][1], g_sprites[spriteID]);

		g_global->cursorSpriteID = spriteID;
	}

	if (w->index == 45) return true;

	click = false;
	drag = false;

	if ((w->state.s.buttonState & 0x11) != 0) {
		click = true;
		g_global->variable_37B8 = 0;
	} else if ((w->state.s.buttonState & 0x22) != 0 && g_global->variable_37B8 == 0) {
		drag = true;
	}

	direction = 0xFFFF;
	switch (w->index) {
		default: break;
		case 39: direction = 0; break;
		case 40: direction = 2; break;
		case 41: direction = 6; break;
		case 42: direction = 4; break;
	}

	if (direction != 0xFFFF) {
		if (!click && !drag) {
			if (s_tickMapScroll + 10 >= g_timerGame || s_tickCursor + 20 >= g_timerGame) return true;
			if (g_gameConfig.autoScroll == 0) return true;
			if (!g_config.useMouse || g_global->selectionType == 4 || g_global->selectionType == 3) return true;
		}

		s_tickMapScroll = g_timerGame;

		Map_MoveDirection(direction);
		return true;
	}

	if (click) {
		x = g_mouseClickX;
		y = g_mouseClickY;
	} else {
		x = g_mouseX;
		y = g_mouseY;
	}

	if (w->index == 43) {
		x =  x / 16 + Tile_GetPackedX(g_minimapPosition);
		y = (y - 40) / 16 + Tile_GetPackedY(g_minimapPosition);
	} else if (w->index == 44) {
		uint16 mapScale;
		const MapInfo *mapInfo;

		mapScale = g_scenario.mapScale;
		mapInfo = &g_mapInfos[mapScale];

		x = min((max(x, 256) - 256) / (mapScale + 1), mapInfo->sizeX - 1) + mapInfo->minX;
		y = min((max(y, 136) - 136) / (mapScale + 1), mapInfo->sizeY - 1) + mapInfo->minY;
	}

	packed = Tile_PackXY(x, y);

	if (click && g_global->selectionType == 1) {
		Unit *u;
		ActionType action;
		uint16 encoded;

		GUI_DisplayText(NULL, -1);

		if (g_unitHouseMissile != NULL) {
			Unit_LaunchHouseMissile(packed);
			return true;
		}

		u = g_unitActive;

		action = g_global->activeAction;

		Object_Script_Variable4_Clear(&u->o);
		u->targetAttack   = 0;
		u->targetMove     = 0;
		u->variable_72[0] = 0xFF;

		if (action != ACTION_MOVE && action != ACTION_HARVEST) {
			encoded = Tools_Index_Encode(Unit_FindTargetAround(packed), IT_TILE);
		} else {
			encoded = Tools_Index_Encode(packed, IT_TILE);
		}

		Unit_SetAction(u, action);

		if (action == ACTION_MOVE) {
			Unit_SetDestination(u, encoded);
		} else if (action == ACTION_HARVEST) {
			u->targetMove = encoded;
		} else {
			Unit *target;

			Unit_SetTarget(u, encoded);
			target = Tools_Index_GetUnit(u->targetAttack);
			if (target != NULL) target->blinkCounter = 8;
		}

		if (g_config.voiceDrv == 0) {
			Driver_Sound_Play(36, 0xFF);
		} else if (g_table_unitInfo[u->o.type].movementType == MOVEMENT_FOOT) {
			Sound_StartSound(g_table_actionInfo[action].variable_0A);
		} else {
			Sound_StartSound(((Tools_Random_256() & 0x1) == 0) ? 20 : 17);
		}

		g_unitActive = NULL;
		g_global->activeAction    = 0xFFFF;

		GUI_ChangeSelectionType(3);
		return true;
	}

	if (click && g_global->selectionType == 2) {
		const StructureInfo *si;
		Structure *s;
		House *h;

		s = g_structureActive;
		si = &g_table_structureInfo[g_structureActiveType];
		h = g_playerHouse;

		if (Structure_Place(s, g_selectionPosition)) {
			Voice_Play(20);

			if (s->o.type == STRUCTURE_PALACE) House_Get_ByIndex(s->o.houseID)->palacePosition = s->o.position;

			if (g_structureActiveType == STRUCTURE_REFINERY && g_global->variable_38BC == 0) {
				Unit *u;

				g_global->variable_38BC++;
				u = Unit_CreateWrapper(g_playerHouseID, UNIT_HARVESTER, Tools_Index_Encode(s->o.index, IT_STRUCTURE));
				g_global->variable_38BC--;

				if (u == NULL) {
					h->variable_02++;
				} else {
					u->originEncoded = Tools_Index_Encode(s->o.index, IT_STRUCTURE);
				}
			}

			GUI_ChangeSelectionType(4);

			s = Structure_Get_ByPackedTile(g_structureActivePosition);
			if (s != NULL) {
				if ((Structure_GetBuildable(s) & (1 << s->objectType)) == 0) Structure_BuildObject(s, 0xFFFE);
			}

			g_structureActiveType   = 0xFFFF;
			g_structureActive       = NULL;
			g_global->variable_38EC = 0;

			GUI_DisplayHint(si->o.hintStringID, si->o.spriteID);

			House_UpdateRadarState(h);

			if (h->powerProduction < h->powerUsage) {
				if ((h->structuresBuilt & (1 << STRUCTURE_OUTPOST)) != 0) {
					/* Not enough power for radar.  Build windtraps. */
					GUI_DisplayText(String_Get_ByIndex(0x14C), 3);
				}
			}
			return true;
		}

		Voice_Play(47);

		if (g_structureActiveType == STRUCTURE_SLAB_1x1 || g_structureActiveType == STRUCTURE_SLAB_2x2) {
			/* Can not place foundation here. */
			GUI_DisplayText(String_Get_ByIndex(0x87), 2);
		} else {
			GUI_DisplayHint(26, 0xFFFF);

			/* "Can not place %s here." */
			GUI_DisplayText(String_Get_ByIndex(0x86), 2, String_Get_ByIndex(si->o.stringID_abbrev));
		}
		return true;
	}

	if (click && w->index == 43) {
		uint16 position;

		if (g_debugScenario) {
			position = packed;
		} else {
			position = Unit_FindTargetAround(packed);
		}

		if (g_map[position].overlaySpriteID != g_veiledSpriteID || g_debugScenario) {
			if (Object_GetByPackedTile(position) != NULL || g_debugScenario) {
				Map_SetSelection(position);
				Unit_DisplayStatusText(g_unitSelected);
			}
		}

		if ((w->state.s.buttonState & 0x10) != 0) Map_SetViewportPosition(packed);

		return true;
	}

	if ((click || drag) && w->index == 44) {
		Map_SetViewportPosition(packed);
		return true;
	}

	if (g_global->selectionType == 1) {
		Map_SetSelection(Unit_FindTargetAround(packed));
	} else if (g_global->selectionType == 2) {
		Map_SetSelection(packed);
	}

	return true;
}
