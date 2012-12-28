/** @file src/gui/viewport.c Viewport routines. */

#include <stdio.h>
#include <string.h>
#include "types.h"
#include "../os/common.h"
#include "../os/math.h"

#include "gui.h"
#include "widget.h"
#include "../audio/driver.h"
#include "../audio/sound.h"
#include "../config.h"
#include "../explosion.h"
#include "../gfx.h"
#include "../house.h"
#include "../input/mouse.h"
#include "../map.h"
#include "../opendune.h"
#include "../pool/house.h"
#include "../pool/pool.h"
#include "../pool/unit.h"
#include "../scenario.h"
#include "../sprites.h"
#include "../string.h"
#include "../structure.h"
#include "../table/strings.h"
#include "../tile.h"
#include "../timer.h"
#include "../tools.h"
#include "../unit.h"

static uint32 s_tickCursor;                                 /*!< Stores last time Viewport changed the cursor spriteID. */
static uint32 s_tickMapScroll;                              /*!< Stores last time Viewport ran MapScroll function. */
static uint32 s_tickClick;                                  /*!< Stores last time Viewport handled a click. */

static uint8 s_paletteHouse[16];                            /*!< Used for palette manipulation to get housed coloured units etc. */
static uint16 s_spriteFlags;

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

	spriteID = g_cursorSpriteID;
	switch (w->index) {
		default: break;
		case 39: spriteID = 1; break;
		case 40: spriteID = 2; break;
		case 41: spriteID = 4; break;
		case 42: spriteID = 3; break;
		case 43: spriteID = g_cursorDefaultSpriteID; break;
		case 44: spriteID = g_cursorDefaultSpriteID; break;
		case 45: spriteID = 0; break;
	}

	if (spriteID != g_cursorSpriteID) {
		/* HotSpots for different cursor types. */
		static const XYPosition cursorHotSpots[6] = {{0, 0}, {5, 0}, {8, 5}, {5, 8}, {0, 5}, {8, 8}};

		s_tickCursor = g_timerGame;

		Sprites_SetMouseSprite(cursorHotSpots[spriteID].x, cursorHotSpots[spriteID].y, g_sprites[spriteID]);

		g_cursorSpriteID = spriteID;
	}

	if (w->index == 45) return true;

	click = false;
	drag = false;

	if ((w->state.s.buttonState & 0x11) != 0) {
		click = true;
		g_var_37B8 = false;
	} else if ((w->state.s.buttonState & 0x22) != 0 && !g_var_37B8) {
		drag = true;
	}

	/* ENHANCEMENT -- Dune2 depends on slow CPUs to limit the rate mouse clicks are handled. */
	if (g_dune2_enhanced && (click || drag)) {
		if (s_tickClick + 2 >= g_timerGame) return true;
		s_tickClick = g_timerGame;
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
		/* Always scroll if we have a click or a drag */
		if (!click && !drag) {
			/* Wait for either one of the timers */
			if (s_tickMapScroll + 10 >= g_timerGame || s_tickCursor + 20 >= g_timerGame) return true;
			/* Don't scroll if we have a structure/unit selected and don't want to autoscroll */
			if (g_gameConfig.autoScroll == 0 && (g_selectionType == SELECTIONTYPE_STRUCTURE || g_selectionType == SELECTIONTYPE_UNIT)) return true;
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

	if (click && g_selectionType == SELECTIONTYPE_TARGET) {
		Unit *u;
		ActionType action;
		uint16 encoded;

		GUI_DisplayText(NULL, -1);

		if (g_unitHouseMissile != NULL) {
			Unit_LaunchHouseMissile(packed);
			return true;
		}

		u = g_unitActive;

		action = g_activeAction;

		Object_Script_Variable4_Clear(&u->o);
		u->targetAttack   = 0;
		u->targetMove     = 0;
		u->route[0] = 0xFF;

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

		if (g_enableVoices == 0) {
			Driver_Sound_Play(36, 0xFF);
		} else if (g_table_unitInfo[u->o.type].movementType == MOVEMENT_FOOT) {
			Sound_StartSound(g_table_actionInfo[action].soundID);
		} else {
			Sound_StartSound(((Tools_Random_256() & 0x1) == 0) ? 20 : 17);
		}

		g_unitActive   = NULL;
		g_activeAction = 0xFFFF;

		GUI_ChangeSelectionType(SELECTIONTYPE_UNIT);
		return true;
	}

	if (click && g_selectionType == SELECTIONTYPE_PLACE) {
		const StructureInfo *si;
		Structure *s;
		House *h;

		s = g_structureActive;
		si = &g_table_structureInfo[g_structureActiveType];
		h = g_playerHouse;

		if (Structure_Place(s, g_selectionPosition)) {
			Voice_Play(20);

			if (s->o.type == STRUCTURE_PALACE) House_Get_ByIndex(s->o.houseID)->palacePosition = s->o.position;

			if (g_structureActiveType == STRUCTURE_REFINERY && g_validateStrictIfZero == 0) {
				Unit *u;

				g_validateStrictIfZero++;
				u = Unit_CreateWrapper(g_playerHouseID, UNIT_HARVESTER, Tools_Index_Encode(s->o.index, IT_STRUCTURE));
				g_validateStrictIfZero--;

				if (u == NULL) {
					h->harvestersIncoming++;
				} else {
					u->originEncoded = Tools_Index_Encode(s->o.index, IT_STRUCTURE);
				}
			}

			GUI_ChangeSelectionType(SELECTIONTYPE_STRUCTURE);

			s = Structure_Get_ByPackedTile(g_structureActivePosition);
			if (s != NULL) {
				if ((Structure_GetBuildable(s) & (1 << s->objectType)) == 0) Structure_BuildObject(s, 0xFFFE);
			}

			g_structureActiveType = 0xFFFF;
			g_structureActive     = NULL;
			g_selectionState      = 0; /* Invalid. */

			GUI_DisplayHint(si->o.hintStringID, si->o.spriteID);

			House_UpdateRadarState(h);

			if (h->powerProduction < h->powerUsage) {
				if ((h->structuresBuilt & (1 << STRUCTURE_OUTPOST)) != 0) {
					GUI_DisplayText(String_Get_ByIndex(STR_NOT_ENOUGH_POWER_FOR_RADAR_BUILD_WINDTRAPS), 3);
				}
			}
			return true;
		}

		Voice_Play(47);

		if (g_structureActiveType == STRUCTURE_SLAB_1x1 || g_structureActiveType == STRUCTURE_SLAB_2x2) {
			GUI_DisplayText(String_Get_ByIndex(STR_CAN_NOT_PLACE_FOUNDATION_HERE), 2);
		} else {
			GUI_DisplayHint(STR_STRUCTURES_MUST_BE_PLACED_ON_CLEAR_ROCK_OR_CONCRETE_AND_ADJACENT_TO_ANOTHER_FRIENDLY_STRUCTURE, 0xFFFF);
			GUI_DisplayText(String_Get_ByIndex(STR_CAN_NOT_PLACE_S_HERE), 2, String_Get_ByIndex(si->o.stringID_abbrev));
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

	if (g_selectionType == SELECTIONTYPE_TARGET) {
		Map_SetSelection(Unit_FindTargetAround(packed));
	} else if (g_selectionType == SELECTIONTYPE_PLACE) {
		Map_SetSelection(packed);
	}

	return true;
}

/**
 * Get a sprite for the viewport, recolouring it when needed.
 *
 * @param spriteID The sprite to get.
 * @param houseID The House to recolour it with.
 * @return The sprite if found, otherwise NULL.
 */
static uint8 *GUI_Widget_Viewport_Draw_GetSprite(uint16 spriteID, uint8 houseID)
{
	uint8 *sprite;
	uint8 i;

	if (spriteID > 355) return NULL;

	sprite = g_sprites[spriteID];

	if (sprite == NULL) return NULL;

	if ((Sprites_GetType(sprite) & 0x1) == 0) return sprite;

	for (i = 0; i < 16; i++) {
		uint8 v = sprite[10 + i];

		if (v >= 0x90 && v <= 0x98) {
			if (v == 0xFF) break;
			v += houseID * 16;
		}

		s_paletteHouse[i] = v;
	}

	return sprite;
}

/**
 * Redraw parts of the viewport that require redrawing.
 *
 * @param forceRedraw If true, dirty flags are ignored, and everything is drawn.
 * @param arg08 ??
 * @param drawToMainScreen True if and only if we are drawing to the main screen and not some buffer screen.
 */
void GUI_Widget_Viewport_Draw(bool forceRedraw, bool arg08, bool drawToMainScreen)
{
	static const uint16 values_32A4[8][2] = {
		{0, 0}, {1, 0}, {2, 0}, {3, 0},
		{4, 0}, {3, 1}, {2, 1}, {1, 1}
	};

	uint16 x;
	uint16 y;
	uint16 i;
	uint16 curPos;
	bool updateDisplay;
	Screen oldScreenID;
	uint16 oldValue_07AE_0000;
	int16 minX[10];
	int16 maxX[10];

	PoolFindStruct find;

	updateDisplay = forceRedraw;

	memset(minX, 0xF, sizeof(minX));
	memset(maxX, 0,   sizeof(minX));

	oldScreenID = GFX_Screen_SetActive(SCREEN_1);

	oldValue_07AE_0000 = Widget_SetCurrentWidget(2);

	if (g_dirtyViewportCount != 0 || forceRedraw) {
		for (y = 0; y < 10; y++) {
			uint16 top = (y << 4) + 0x28;
			for (x = 0; x < (drawToMainScreen ? 15 : 16); x++) {
				Tile *t;
				uint16 left;

				curPos = g_viewportPosition + Tile_PackXY(x, y);

				if (x < 15 && !forceRedraw && BitArray_Test(g_dirtyViewport, curPos)) {
					if (maxX[y] < x) maxX[y] = x;
					if (minX[y] > x) minX[y] = x;
					updateDisplay = true;
				}

				if (!BitArray_Test(g_dirtyMinimap, curPos) && !forceRedraw) continue;

				BitArray_Set(g_dirtyViewport, curPos);

				if (x < 15) {
					updateDisplay = true;
					if (maxX[y] < x) maxX[y] = x;
					if (minX[y] > x) minX[y] = x;
				}

				t = &g_map[curPos];
				left = x << 4;

				if (!g_debugScenario && g_veiledSpriteID == t->overlaySpriteID) {
					GUI_DrawFilledRectangle(left, top, left + 15, top + 15, 12);
					continue;
				}

				GFX_DrawSprite(t->groundSpriteID, left, top, t->houseID);

				if (t->overlaySpriteID == 0 || g_debugScenario) continue;

				GFX_DrawSprite(t->overlaySpriteID, left, top, t->houseID);
			}
		}
		g_dirtyViewportCount = 0;
	}

	find.type    = UNIT_SANDWORM;
	find.index   = 0xFFFF;
	find.houseID = HOUSE_INVALID;

	while (true) {
		Unit *u;
		uint8 *sprite;

		u = Unit_Find(&find);

		if (u == NULL) break;

		if (!u->o.flags.s.isDirty && !forceRedraw) continue;
		u->o.flags.s.isDirty = false;

		if (!g_map[Tile_PackTile(u->o.position)].isUnveiled && !g_debugScenario) continue;

		sprite = GUI_Widget_Viewport_Draw_GetSprite(g_table_unitInfo[u->o.type].groundSpriteID, Unit_GetHouseID(u));

		s_spriteFlags = 0x200;

		if (Map_IsPositionInViewport(u->o.position, &x, &y)) GUI_DrawSprite(g_screenActiveID, sprite, x, y, 2, s_spriteFlags | 0xC000);

		if (Map_IsPositionInViewport(u->targetLast, &x, &y)) GUI_DrawSprite(g_screenActiveID, sprite, x, y, 2, s_spriteFlags | 0xC000);

		if (Map_IsPositionInViewport(u->targetPreLast, &x, &y)) GUI_DrawSprite(g_screenActiveID, sprite, x, y, 2, s_spriteFlags | 0xC000);

		if (u != g_unitSelected) continue;

		if (!Map_IsPositionInViewport(u->o.position, &x, &y)) continue;

		GUI_DrawSprite(g_screenActiveID, g_sprites[6], x, y, 2, 0xC000);
	}

	if (g_unitSelected == NULL && (g_var_3A08 != 0 || arg08) && (Structure_Get_ByPackedTile(g_selectionRectanglePosition) != NULL || g_selectionType == SELECTIONTYPE_PLACE || g_debugScenario)) {
		uint16 x1 = (Tile_GetPackedX(g_selectionRectanglePosition) - Tile_GetPackedX(g_minimapPosition)) << 4;
		uint16 y1 = ((Tile_GetPackedY(g_selectionRectanglePosition) - Tile_GetPackedY(g_minimapPosition)) << 4) + 0x28;
		uint16 x2 = x1 + (g_selectionWidth << 4) - 1;
		uint16 y2 = y1 + (g_selectionHeight << 4) - 1;

		GUI_SetClippingArea(0, 40, 239, SCREEN_HEIGHT - 1);
		GUI_DrawWiredRectangle(x1, y1, x2, y2, 0xFF);

		if (g_selectionState == 0 && g_selectionType == SELECTIONTYPE_PLACE) {
			GUI_DrawLine(x1, y1, x2, y2, 0xFF);
			GUI_DrawLine(x2, y1, x1, y2, 0xFF);
		}

		GUI_SetClippingArea(0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1);

		g_var_3A08 = 0;
	}

	if (g_var_39E6 != 0 || forceRedraw || updateDisplay) {
		find.type    = 0xFFFF;
		find.index   = 0xFFFF;
		find.houseID = HOUSE_INVALID;

		while (true) {
			Unit *u;
			UnitInfo *ui;
			uint16 packed;
			uint8 orientation;
			uint16 index;

			u = Unit_Find(&find);

			if (u == NULL) break;

			if (u->o.index < 20 || u->o.index > 101) continue;

			packed = Tile_PackTile(u->o.position);

			if ((!u->o.flags.s.isDirty || u->o.flags.s.isNotOnMap) && !forceRedraw && !BitArray_Test(g_dirtyViewport, packed)) continue;
			u->o.flags.s.isDirty = false;

			if (!g_map[packed].isUnveiled && !g_debugScenario) continue;

			ui = &g_table_unitInfo[u->o.type];

			if (!Map_IsPositionInViewport(u->o.position, &x, &y)) continue;

			x += g_table_tilediff[0][u->wobbleIndex].s.x;
			y += g_table_tilediff[0][u->wobbleIndex].s.y;

			orientation = Orientation_Orientation256ToOrientation8(u->orientation[0].current);

			if (u->spriteOffset >= 0 || ui->destroyedSpriteID == 0) {
				static const uint16 values_32C4[8][2] = {
					{0, 0}, {1, 0}, {1, 0}, {1, 0},
					{2, 0}, {1, 1}, {1, 1}, {1, 1}
				};

				index = ui->groundSpriteID;

				switch (ui->displayMode) {
					case 1:
					case 2:
						if (ui->movementType == MOVEMENT_SLITHER) break;
						index += values_32A4[orientation][0];
						s_spriteFlags = values_32A4[orientation][1];
						break;

					case 3: {
						static const uint16 values_334A[4] = {0, 1, 0, 2};

						index += values_32C4[orientation][0] * 3;
						index += values_334A[u->spriteOffset & 3];
						s_spriteFlags = values_32C4[orientation][1];
					} break;

					case 4:
						index += values_32C4[orientation][0] * 4;
						index += u->spriteOffset & 3;
						s_spriteFlags = values_32C4[orientation][1];
						break;

					default:
						s_spriteFlags = 0;
						break;
				}
			} else {
				index = ui->destroyedSpriteID - u->spriteOffset - 1;
				s_spriteFlags = 0;
			}

			if (u->o.type != UNIT_SANDWORM && u->o.flags.s.isHighlighted) s_spriteFlags |= 0x100;
			if (ui->o.flags.blurTile) s_spriteFlags |= 0x200;

			GUI_DrawSprite(g_screenActiveID, GUI_Widget_Viewport_Draw_GetSprite(index, (u->deviated != 0) ? HOUSE_ORDOS : Unit_GetHouseID(u)), x, y, 2, s_spriteFlags | 0xE000, s_paletteHouse, g_paletteMapping2, 1);

			if (u->o.type == UNIT_HARVESTER && u->actionID == ACTION_HARVEST && u->spriteOffset >= 0 && (u->actionID == ACTION_HARVEST || u->actionID == ACTION_MOVE)) {
				uint16 type = Map_GetLandscapeType(packed);
				if (type == LST_SPICE || type == LST_THICK_SPICE) {
					static const int16 values_334E[8][2] = {
						{0, 7},  {-7,  6}, {-14, 1}, {-9, -6},
						{0, -9}, { 9, -6}, { 14, 1}, { 7,  6}
					};

					GUI_DrawSprite(g_screenActiveID, GUI_Widget_Viewport_Draw_GetSprite((u->spriteOffset % 3) + 0xDF + (values_32A4[orientation][0] * 3), Unit_GetHouseID(u)), x + values_334E[orientation][0], y + values_334E[orientation][1], 2, values_32A4[orientation][1] | 0xC000);
				}
			}

			if (u->spriteOffset >= 0 && ui->turretSpriteID != 0xFFFF) {
				int16 offsetX = 0;
				int16 offsetY = 0;
				uint16 index = ui->turretSpriteID;

				orientation = Orientation_Orientation256ToOrientation8(u->orientation[ui->o.flags.hasTurret ? 1 : 0].current);

				switch (ui->turretSpriteID) {
					case 0x8D: /* sonic tank */
						offsetY = -2;
						break;

					case 0x92: /* rocket launcher */
						offsetY = -3;
						break;

					case 0x7E: { /* siege tank */
						static const int16 values_336E[8][2] = {
							{ 0, -5}, { 0, -5}, { 2, -3}, { 2, -1},
							{-1, -3}, {-2, -1}, {-2, -3}, {-1, -5}
						};

						offsetX = values_336E[orientation][0];
						offsetY = values_336E[orientation][1];
					} break;

					case 0x88: { /* devastator */
						static const int16 values_338E[8][2] = {
							{ 0, -4}, {-1, -3}, { 2, -4}, {0, -3},
							{-1, -3}, { 0, -3}, {-2, -4}, {1, -3}
						};

						offsetX = values_338E[orientation][0];
						offsetY = values_338E[orientation][1];
					} break;

					default:
						break;
				}

				s_spriteFlags = values_32A4[orientation][1];
				index += values_32A4[orientation][0];

				GUI_DrawSprite(g_screenActiveID, GUI_Widget_Viewport_Draw_GetSprite(index, Unit_GetHouseID(u)), x + offsetX, y + offsetY, 2, s_spriteFlags | 0xE000, s_paletteHouse);
			}

			if (u->o.flags.s.isSmoking) {
				uint16 spriteID = 180 + (u->spriteOffset & 3);
				if (spriteID == 183) spriteID = 181;

				GUI_DrawSprite(g_screenActiveID, g_sprites[spriteID], x, y - 14, 2, 0xC000);
			}

			if (u != g_unitSelected) continue;

			GUI_DrawSprite(g_screenActiveID, g_sprites[6], x, y, 2, 0xC000);
		}

		g_var_39E6 = 0;
	}

	for (i = 0; i < 32; i++) {
		Explosion *e;

		e = &g_explosions[i];

		curPos = Tile_PackTile(e->position);

		if (BitArray_Test(g_dirtyViewport, curPos)) e->isDirty = true;

		if (e->commands == NULL) continue;
		if (!e->isDirty && !forceRedraw) continue;
		if (e->spriteID == 0) continue;

		e->isDirty = false;

		if (!g_map[curPos].isUnveiled && !g_debugScenario) continue;
		if (!Map_IsPositionInViewport(e->position, &x, &y)) continue;

		s_spriteFlags = 0xC000;

		GUI_DrawSprite(g_screenActiveID, GUI_Widget_Viewport_Draw_GetSprite(e->spriteID, e->houseID), x, y, 2, s_spriteFlags, s_paletteHouse);
	}

	if (g_var_39E8 != 0 || forceRedraw || updateDisplay) {
		find.type    = 0xFFFF;
		find.index   = 0xFFFF;
		find.houseID = HOUSE_INVALID;

		while (true) {
			static const uint16 values_32E4[8][2] = {
				{0, 0}, {1, 0}, {2, 0}, {1, 2},
				{0, 2}, {1, 3}, {2, 1}, {1, 1}
			};

			Unit *u;
			UnitInfo *ui;
			uint8 orientation;
			uint8 *sprite;
			uint16 index;

			u = Unit_Find(&find);

			if (u == NULL) break;

			if (u->o.index > 15) continue;

			curPos = Tile_PackTile(u->o.position);

			if ((!u->o.flags.s.isDirty || u->o.flags.s.isNotOnMap) && !forceRedraw && !BitArray_Test(g_dirtyViewport, curPos)) continue;
			u->o.flags.s.isDirty = false;

			if (!g_map[curPos].isUnveiled && !g_debugScenario) continue;

			ui = &g_table_unitInfo[u->o.type];

			if (!Map_IsPositionInViewport(u->o.position, &x, &y)) continue;

			index = ui->groundSpriteID;
			orientation = u->orientation[0].current;
			s_spriteFlags = 0xC000;

			switch (ui->displayMode) {
				case 0:
					if (u->o.flags.s.bulletIsBig) index++;
					break;

				case 1:
					orientation = Orientation_Orientation256ToOrientation8(orientation);

					index += values_32E4[orientation][0];
					s_spriteFlags |= values_32E4[orientation][1];
					break;

				case 2: {
					static const uint16 values_3304[16][2] = {
						{0, 0}, {1, 0}, {2, 0}, {3, 0},
						{4, 0}, {3, 2}, {2, 2}, {1, 2},
						{0, 2}, {3, 3}, {2, 3}, {3, 3},
						{4, 1}, {3, 1}, {2, 1}, {1, 1}
					};

					orientation = Orientation_Orientation256ToOrientation16(orientation);

					index += values_3304[orientation][0];
					s_spriteFlags |= values_3304[orientation][1];
				} break;

				case 5: {
					static const uint16 values_33AE[4] = {2, 1, 0, 1};

					orientation = Orientation_Orientation256ToOrientation8(orientation);

					index += (values_32E4[orientation][0] * 3) + values_33AE[u->spriteOffset & 3];
					s_spriteFlags |= values_32E4[orientation][1];
				} break;

				default:
					s_spriteFlags = 0x0;
					break;
			}

			if (ui->flags.hasAnimationSet && u->o.flags.s.animationFlip) index += 5;
			if (u->o.type == UNIT_CARRYALL && u->o.flags.s.inTransport) index += 3;

			sprite = GUI_Widget_Viewport_Draw_GetSprite(index, Unit_GetHouseID(u));

			if (ui->o.flags.hasShadow) GUI_DrawSprite(g_screenActiveID, sprite, x + 1, y + 3, 2, (s_spriteFlags & 0xDFFF) | 0x300, g_paletteMapping1, 1);

			if (ui->o.flags.blurTile) s_spriteFlags |= 0x200;

			GUI_DrawSprite(g_screenActiveID, sprite, x, y, 2, s_spriteFlags | 0x2000, s_paletteHouse);
		}

		g_var_39E8 = 0;
	}

	if (updateDisplay) {
		memset(g_dirtyMinimap,  0, sizeof(g_dirtyMinimap));
		memset(g_dirtyViewport, 0, sizeof(g_dirtyViewport));
	}

	if (g_changedTilesCount != 0) {
		bool init = false;
		bool update = false;
		Screen oldScreenID2 = SCREEN_1;

		for (i = 0; i < g_changedTilesCount; i++) {
			curPos = g_changedTiles[i];
			BitArray_Clear(g_changedTilesMap, curPos);

			if (!init) {
				init = true;

				oldScreenID2 = GFX_Screen_SetActive(SCREEN_1);

				GUI_Mouse_Hide_InWidget(3);
			}

			GUI_Widget_Viewport_DrawTile(curPos);

			if (!update && BitArray_Test(g_displayedMinimap, curPos)) update = true;
		}

		if (update) Map_UpdateMinimapPosition(g_minimapPosition, true);

		if (init) {
			GUI_Screen_Copy(32, 136, 32, 136, 8, 64, g_screenActiveID, SCREEN_0);

			GFX_Screen_SetActive(oldScreenID2);

			GUI_Mouse_Show_InWidget();
		}

		if (g_changedTilesCount == lengthof(g_changedTiles)) {
			g_changedTilesCount = 0;

			for (i = 0; i < 4096; i++) {
				if (!BitArray_Test(g_changedTilesMap, i)) continue;
				g_changedTiles[g_changedTilesCount++] = i;
				if (g_changedTilesCount == lengthof(g_changedTiles)) break;
			}
		} else {
			g_changedTilesCount = 0;
		}
	}

	if ((g_viewportMessageCounter & 1) != 0 && g_viewportMessageText != NULL && (minX[6] <= 14 || maxX[6] >= 0 || arg08 || forceRedraw)) {
		GUI_DrawText_Wrapper(g_viewportMessageText, 112, 139, 15, 0, 0x132);
		minX[6] = -1;
		maxX[6] = 14;
	}

	if (updateDisplay && !drawToMainScreen) {
		if (g_viewport_fadein) {
			GUI_Mouse_Hide_InWidget(g_curWidgetIndex);

			/* ENHANCEMENT -- When fading in the game on start, you don't see the fade as it is against the already drawn screen. */
			if (g_dune2_enhanced) {
				Screen oldScreenID = g_screenActiveID;

				GFX_Screen_SetActive(SCREEN_0);
				GUI_DrawFilledRectangle(g_curWidgetXBase << 3, g_curWidgetYBase, (g_curWidgetXBase + g_curWidgetWidth) << 3, g_curWidgetYBase + g_curWidgetHeight, 0);
				GFX_Screen_SetActive(oldScreenID);
			}

			GUI_Screen_FadeIn(g_curWidgetXBase, g_curWidgetYBase, g_curWidgetXBase, g_curWidgetYBase, g_curWidgetWidth, g_curWidgetHeight, g_screenActiveID, SCREEN_0);
			GUI_Mouse_Show_InWidget();

			g_viewport_fadein = false;
		} else {
			bool init = false;

			for (i = 0; i < 10; i++) {
				uint16 width;
				uint16 height;

				if (arg08) {
					minX[i] = 0;
					maxX[i] = 14;
				}

				if (maxX[i] < minX[i]) continue;

				x = minX[i] * 2;
				y = (i << 4) + 0x28;
				width  = (maxX[i] - minX[i] + 1) * 2;
				height = 16;

				if (!init) {
					GUI_Mouse_Hide_InWidget(g_curWidgetIndex);

					init = true;
				}

				GUI_Screen_Copy(x, y, x, y, width, height, g_screenActiveID, SCREEN_0);
			}

			if (init) GUI_Mouse_Show_InWidget();
		}
	}

	GFX_Screen_SetActive(oldScreenID);

	Widget_SetCurrentWidget(oldValue_07AE_0000);
}

/**
 * Draw a single tile on the screen.
 *
 * @param packed The tile to draw.
 */
void GUI_Widget_Viewport_DrawTile(uint16 packed)
{
	uint16 x;
	uint16 y;
	uint16 colour;
	uint16 spriteID;
	Tile *t;
	uint16 mapScale;

	colour = 12;
	spriteID = 0xFFFF;

	if (Tile_IsOutOfMap(packed) || !Map_IsValidPosition(packed)) return;

	x = Tile_GetPackedX(packed);
	y = Tile_GetPackedY(packed);

	mapScale = g_scenario.mapScale + 1;

	if (mapScale == 0 || BitArray_Test(g_displayedMinimap, packed)) return;

	t = &g_map[packed];

	if ((t->isUnveiled && g_playerHouse->flags.radarActivated) || g_debugScenario) {
		uint16 type = Map_GetLandscapeType(packed);
		Unit *u;

		if (mapScale > 1) {
			spriteID = g_scenario.mapScale + g_table_landscapeInfo[type].spriteID - 1;
		} else {
			colour = g_table_landscapeInfo[type].radarColour;
		}

		if (g_table_landscapeInfo[type].radarColour == 0xFFFF) {
			if (mapScale > 1) {
				spriteID = mapScale + t->houseID * 2 + 29;
			} else {
				colour = g_table_houseInfo[t->houseID].minimapColor;
			}
		}

		u = Unit_Get_ByPackedTile(packed);

		if (u != NULL) {
			if (mapScale > 1) {
				if (u->o.type == UNIT_SANDWORM) {
					spriteID = mapScale + 53;
				} else {
					spriteID = mapScale + Unit_GetHouseID(u) * 2 + 29;
				}
			} else {
				if (u->o.type == UNIT_SANDWORM) {
					colour = 255;
				} else {
					colour = g_table_houseInfo[Unit_GetHouseID(u)].minimapColor;
				}
			}
		}
	} else {
		Structure *s;

		s = Structure_Get_ByPackedTile(packed);

		if (s != NULL && s->o.houseID == g_playerHouseID) {
			if (mapScale > 1) {
				spriteID = mapScale + s->o.houseID * 2 + 29;
			} else {
				colour = g_table_houseInfo[s->o.houseID].minimapColor;
			}
		} else {
			if (mapScale > 1) {
				spriteID = g_scenario.mapScale + g_table_landscapeInfo[LST_ENTIRELY_MOUNTAIN].spriteID - 1;
			} else {
				colour = 12;
			}
		}
	}

	x -= g_mapInfos[g_scenario.mapScale].minX;
	y -= g_mapInfos[g_scenario.mapScale].minY;

	if (spriteID != 0xFFFF) {
		x *= g_scenario.mapScale + 1;
		y *= g_scenario.mapScale + 1;
		GUI_DrawSprite(g_screenActiveID, g_sprites[spriteID], x, y, 3, 0x4000);
	} else {
		GFX_PutPixel(x + 256, y + 136, colour & 0xFF);
	}
}

/**
 * Redraw the whole map.
 *
 * @param screenID To which screen we should draw the map. Can only be 0 or 2. Any non-zero is forced to 2.
 */
void GUI_Widget_Viewport_RedrawMap(uint16 screenID)
{
	Screen oldScreenID = SCREEN_1;
	uint16 i;

	if (screenID == SCREEN_0) oldScreenID = GFX_Screen_SetActive(SCREEN_1);

	for (i = 0; i < 4096; i++) GUI_Widget_Viewport_DrawTile(i);

	Map_UpdateMinimapPosition(g_minimapPosition, true);

	if (screenID != 0) return;

	GFX_Screen_SetActive(oldScreenID);

	GUI_Mouse_Hide_InWidget(3);
	GUI_Screen_Copy(32, 136, 32, 136, 8, 64, SCREEN_1, SCREEN_0);
	GUI_Mouse_Show_InWidget();
}
