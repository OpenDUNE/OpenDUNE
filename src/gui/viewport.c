/** @file src/gui/viewport.c Viewport routines. */

#include <stdio.h>
#include <string.h>
#include "types.h"
#include "../os/common.h"
#include "../os/math.h"
#include "../os/error.h"

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

	if ((w->state.buttonState & 0x11) != 0) {
		click = true;
		g_var_37B8 = false;
	} else if ((w->state.buttonState & 0x22) != 0 && !g_var_37B8) {
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

		if (g_map[position].overlayTileID != g_veiledTileID || g_debugScenario) {
			if (Object_GetByPackedTile(position) != NULL || g_debugScenario) {
				Map_SetSelection(position);
				Unit_DisplayStatusText(g_unitSelected);
			}
		}

		if ((w->state.buttonState & 0x10) != 0) Map_SetViewportPosition(packed);

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
 * Get palette house of sprite for the viewport
 *
 * @param sprite The sprite
 * @param houseID The House to recolour it with.
 * @param paletteHouse the palette to set
 */
static bool GUI_Widget_Viewport_GetSprite_HousePalette(const uint8 *sprite, uint8 houseID, uint8 *paletteHouse)
{
	int i;

	if (sprite == NULL) return false;

	/* flag 0x1 indicates if the sprite has a palette */
	if ((sprite[0] & 0x1) == 0) return false;

	if (houseID == 0) {
		memcpy(paletteHouse, sprite + 10, 16);
	} else {
		for (i = 0; i < 16; i++) {
			uint8 v = sprite[10 + i];

			if (v >= 0x90 && v <= 0x98) {
				v += houseID << 4;
			}

			paletteHouse[i] = v;
		}
	}
	return true;
}

/**
 * Redraw parts of the viewport that require redrawing.
 *
 * @param forceRedraw If true, dirty flags are ignored, and everything is drawn.
 * @param hasScrolled Viewport position has changed
 * @param drawToMainScreen True if and only if we are drawing to the main screen and not some buffer screen.
 */
void GUI_Widget_Viewport_Draw(bool forceRedraw, bool hasScrolled, bool drawToMainScreen)
{
	static const uint16 values_32A4[8][2] = {	/* index, flag passed to GUI_DrawSprite() */
		{0, 0}, {1, 0}, {2, 0}, {3, 0},
		{4, 0}, {3, 1}, {2, 1}, {1, 1}
	};

	uint8 paletteHouse[16] = {0};    /*!< Used for palette manipulation to get housed coloured units etc. */
	uint16 x;
	uint16 y;
	uint16 i;
	uint16 curPos;
	bool updateDisplay;
	Screen oldScreenID;
	uint16 oldWidgetID;
	int16 minX[10];
	int16 maxX[10];

	PoolFindStruct find;

	updateDisplay = forceRedraw;

	memset(minX, 0xF, sizeof(minX));
	memset(maxX, 0,   sizeof(minX));

	oldScreenID = GFX_Screen_SetActive(SCREEN_1);

	oldWidgetID = Widget_SetCurrentWidget(2);

	if (g_dirtyViewportCount != 0 || forceRedraw) {
		for (y = 0; y < 10; y++) {
			uint16 top = (y << 4) + 0x28;	/* 40 */
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

				if (!g_debugScenario && g_veiledTileID == t->overlayTileID) {
					/* draw a black rectangle */
					GUI_DrawFilledRectangle(left, top, left + 15, top + 15, 12);
					continue;
				}

				GFX_DrawTile(t->groundTileID, left, top, t->houseID);

				if (t->overlayTileID != 0 && !g_debugScenario) {
					GFX_DrawTile(t->overlayTileID, left, top, t->houseID);
				}
			}
		}
		g_dirtyViewportCount = 0;
	}

	/* Draw Sandworm */
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

		sprite = g_sprites[g_table_unitInfo[u->o.type].groundSpriteID];
		GUI_Widget_Viewport_GetSprite_HousePalette(sprite, Unit_GetHouseID(u), paletteHouse);

		if (Map_IsPositionInViewport(u->o.position, &x, &y)) {
			GUI_DrawSprite(SCREEN_ACTIVE, sprite, x, y, 2, DRAWSPRITE_FLAG_BLUR | DRAWSPRITE_FLAG_WIDGETPOS | DRAWSPRITE_FLAG_CENTER);
		}
		if (Map_IsPositionInViewport(u->targetLast, &x, &y)) {
			GUI_DrawSprite(SCREEN_ACTIVE, sprite, x, y, 2, DRAWSPRITE_FLAG_BLUR | DRAWSPRITE_FLAG_WIDGETPOS | DRAWSPRITE_FLAG_CENTER);
		}
		if (Map_IsPositionInViewport(u->targetPreLast, &x, &y)) {
			GUI_DrawSprite(SCREEN_ACTIVE, sprite, x, y, 2, DRAWSPRITE_FLAG_BLUR | DRAWSPRITE_FLAG_WIDGETPOS | DRAWSPRITE_FLAG_CENTER);
		}
		if (u == g_unitSelected && Map_IsPositionInViewport(u->o.position, &x, &y)) {
			GUI_DrawSprite(SCREEN_ACTIVE, g_sprites[6], x, y, 2, DRAWSPRITE_FLAG_WIDGETPOS | DRAWSPRITE_FLAG_CENTER);
		}
	}

	if (g_unitSelected == NULL && (g_selectionRectangleNeedRepaint || hasScrolled) && (Structure_Get_ByPackedTile(g_selectionRectanglePosition) != NULL || g_selectionType == SELECTIONTYPE_PLACE || g_debugScenario)) {
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

		g_selectionRectangleNeedRepaint = false;
	}

	/* Draw ground units */
	if (g_dirtyUnitCount != 0 || forceRedraw || updateDisplay) {
		find.type    = 0xFFFF;
		find.index   = 0xFFFF;
		find.houseID = HOUSE_INVALID;

		while (true) {
			Unit *u;
			UnitInfo *ui;
			uint16 packed;
			uint8 orientation;
			uint16 index;
			uint16 spriteFlags = 0;

			u = Unit_Find(&find);

			if (u == NULL) break;

			if (u->o.index < 20 || u->o.index > 101) continue;

			packed = Tile_PackTile(u->o.position);

			if ((!u->o.flags.s.isDirty || u->o.flags.s.isNotOnMap) && !forceRedraw && !BitArray_Test(g_dirtyViewport, packed)) continue;
			u->o.flags.s.isDirty = false;

			if (!g_map[packed].isUnveiled && !g_debugScenario) continue;

			ui = &g_table_unitInfo[u->o.type];

			if (!Map_IsPositionInViewport(u->o.position, &x, &y)) continue;

			x += g_table_tilediff[0][u->wobbleIndex].x;
			y += g_table_tilediff[0][u->wobbleIndex].y;

			orientation = Orientation_Orientation256ToOrientation8(u->orientation[0].current);

			if (u->spriteOffset >= 0 || ui->destroyedSpriteID == 0) {
				static const uint16 values_32C4[8][2] = {	/* index, flag */
					{0, 0}, {1, 0}, {1, 0}, {1, 0},
					{2, 0}, {1, 1}, {1, 1}, {1, 1}
				};

				index = ui->groundSpriteID;

				switch (ui->displayMode) {
					case DISPLAYMODE_UNIT:
					case DISPLAYMODE_ROCKET:
						if (ui->movementType == MOVEMENT_SLITHER) break;
						index += values_32A4[orientation][0];
						spriteFlags = values_32A4[orientation][1];
						break;

					case DISPLAYMODE_INFANTRY_3_FRAMES: {
						static const uint16 values_334A[4] = {0, 1, 0, 2};

						index += values_32C4[orientation][0] * 3;
						index += values_334A[u->spriteOffset & 3];
						spriteFlags = values_32C4[orientation][1];
					} break;

					case DISPLAYMODE_INFANTRY_4_FRAMES:
						index += values_32C4[orientation][0] * 4;
						index += u->spriteOffset & 3;
						spriteFlags = values_32C4[orientation][1];
						break;

					default:
						spriteFlags = 0;
						break;
				}
			} else {
				index = ui->destroyedSpriteID - u->spriteOffset - 1;
				spriteFlags = 0;
			}

			if (u->o.type != UNIT_SANDWORM && u->o.flags.s.isHighlighted) spriteFlags |= DRAWSPRITE_FLAG_REMAP;
			if (ui->o.flags.blurTile) spriteFlags |= DRAWSPRITE_FLAG_BLUR;

			spriteFlags |= DRAWSPRITE_FLAG_WIDGETPOS | DRAWSPRITE_FLAG_CENTER;

			if (GUI_Widget_Viewport_GetSprite_HousePalette(g_sprites[index], (u->deviated != 0) ? u->deviatedHouse : Unit_GetHouseID(u), paletteHouse)) {
				spriteFlags |= DRAWSPRITE_FLAG_PAL;
				GUI_DrawSprite(SCREEN_ACTIVE, g_sprites[index], x, y, 2, spriteFlags, paletteHouse, g_paletteMapping2, 1);
			} else {
				GUI_DrawSprite(SCREEN_ACTIVE, g_sprites[index], x, y, 2, spriteFlags, g_paletteMapping2, 1);
			}

			if (u->o.type == UNIT_HARVESTER && u->actionID == ACTION_HARVEST && u->spriteOffset >= 0 && (u->actionID == ACTION_HARVEST || u->actionID == ACTION_MOVE)) {
				uint16 type = Map_GetLandscapeType(packed);
				if (type == LST_SPICE || type == LST_THICK_SPICE) {
					static const int16 values_334E[8][2] = {
						{0, 7},  {-7,  6}, {-14, 1}, {-9, -6},
						{0, -9}, { 9, -6}, { 14, 1}, { 7,  6}
					};

					/*GUI_Widget_Viewport_GetSprite_HousePalette(..., Unit_GetHouseID(u), paletteHouse),*/
					GUI_DrawSprite(SCREEN_ACTIVE,
					               g_sprites[(u->spriteOffset % 3) + 0xDF + (values_32A4[orientation][0] * 3)],
					               x + values_334E[orientation][0], y + values_334E[orientation][1],
					               2, values_32A4[orientation][1] | DRAWSPRITE_FLAG_WIDGETPOS | DRAWSPRITE_FLAG_CENTER);
				}
			}

			if (u->spriteOffset >= 0 && ui->turretSpriteID != 0xFFFF) {
				int16 offsetX = 0;
				int16 offsetY = 0;
				uint16 spriteID = ui->turretSpriteID;

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

				spriteID += values_32A4[orientation][0];

				if (GUI_Widget_Viewport_GetSprite_HousePalette(g_sprites[spriteID], Unit_GetHouseID(u), paletteHouse)) {
					GUI_DrawSprite(SCREEN_ACTIVE, g_sprites[spriteID],
					               x + offsetX, y + offsetY,
					               2, values_32A4[orientation][1] | DRAWSPRITE_FLAG_WIDGETPOS | DRAWSPRITE_FLAG_CENTER | DRAWSPRITE_FLAG_PAL, paletteHouse);
				} else {
					GUI_DrawSprite(SCREEN_ACTIVE, g_sprites[spriteID],
					               x + offsetX, y + offsetY,
					               2, values_32A4[orientation][1] | DRAWSPRITE_FLAG_WIDGETPOS | DRAWSPRITE_FLAG_CENTER);
				}
			}

			if (u->o.flags.s.isSmoking) {
				uint16 spriteID = 180 + (u->spriteOffset & 3);
				if (spriteID == 183) spriteID = 181;

				GUI_DrawSprite(SCREEN_ACTIVE, g_sprites[spriteID], x, y - 14, 2, DRAWSPRITE_FLAG_WIDGETPOS | DRAWSPRITE_FLAG_CENTER);
			}

			if (u != g_unitSelected) continue;

			GUI_DrawSprite(SCREEN_ACTIVE, g_sprites[6], x, y, 2, DRAWSPRITE_FLAG_WIDGETPOS | DRAWSPRITE_FLAG_CENTER);
		}

		g_dirtyUnitCount = 0;
	}

	/* draw explosions */
	for (i = 0; i < EXPLOSION_MAX; i++) {
		Explosion *e = Explosion_Get_ByIndex(i);

		curPos = Tile_PackTile(e->position);

		if (BitArray_Test(g_dirtyViewport, curPos)) e->isDirty = true;

		if (e->commands == NULL) continue;
		if (!e->isDirty && !forceRedraw) continue;
		if (e->spriteID == 0) continue;

		e->isDirty = false;

		if (!g_map[curPos].isUnveiled && !g_debugScenario) continue;
		if (!Map_IsPositionInViewport(e->position, &x, &y)) continue;

		/*GUI_Widget_Viewport_GetSprite_HousePalette(g_sprites[e->spriteID], e->houseID, paletteHouse);*/
		GUI_DrawSprite(SCREEN_ACTIVE, g_sprites[e->spriteID], x, y, 2, DRAWSPRITE_FLAG_WIDGETPOS | DRAWSPRITE_FLAG_CENTER/*, paletteHouse*/);
	}

	/* draw air units */
	if (g_dirtyAirUnitCount != 0 || forceRedraw || updateDisplay) {
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
			uint16 spriteFlags;

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
			spriteFlags = DRAWSPRITE_FLAG_WIDGETPOS | DRAWSPRITE_FLAG_CENTER;

			switch (ui->displayMode) {
				case DISPLAYMODE_SINGLE_FRAME:
					if (u->o.flags.s.bulletIsBig) index++;
					break;

				case DISPLAYMODE_UNIT:
					orientation = Orientation_Orientation256ToOrientation8(orientation);

					index += values_32E4[orientation][0];
					spriteFlags |= values_32E4[orientation][1];
					break;

				case DISPLAYMODE_ROCKET: {
					static const uint16 values_3304[16][2] = {
						{0, 0}, {1, 0}, {2, 0}, {3, 0},
						{4, 0}, {3, 2}, {2, 2}, {1, 2},
						{0, 2}, {3, 3}, {2, 3}, {3, 3},
						{4, 1}, {3, 1}, {2, 1}, {1, 1}
					};

					orientation = Orientation_Orientation256ToOrientation16(orientation);

					index += values_3304[orientation][0];
					spriteFlags |= values_3304[orientation][1];
				} break;

				case DISPLAYMODE_ORNITHOPTER: {
					static const uint16 values_33AE[4] = {2, 1, 0, 1};

					orientation = Orientation_Orientation256ToOrientation8(orientation);

					index += (values_32E4[orientation][0] * 3) + values_33AE[u->spriteOffset & 3];
					spriteFlags |= values_32E4[orientation][1];
				} break;

				default:
					spriteFlags = 0x0;
					break;
			}

			if (ui->flags.hasAnimationSet && u->o.flags.s.animationFlip) index += 5;
			if (u->o.type == UNIT_CARRYALL && u->o.flags.s.inTransport) index += 3;

			sprite = g_sprites[index];

			if (ui->o.flags.hasShadow) {
				GUI_DrawSprite(SCREEN_ACTIVE, sprite, x + 1, y + 3, 2, (spriteFlags & ~DRAWSPRITE_FLAG_PAL) | DRAWSPRITE_FLAG_REMAP | DRAWSPRITE_FLAG_BLUR, g_paletteMapping1, 1);
			}
			if (ui->o.flags.blurTile) spriteFlags |= DRAWSPRITE_FLAG_BLUR;

			if (GUI_Widget_Viewport_GetSprite_HousePalette(sprite, Unit_GetHouseID(u), paletteHouse)) {
				GUI_DrawSprite(SCREEN_ACTIVE, sprite, x, y, 2, spriteFlags | DRAWSPRITE_FLAG_PAL, paletteHouse);
			} else {
				GUI_DrawSprite(SCREEN_ACTIVE, sprite, x, y, 2, spriteFlags);
			}
		}

		g_dirtyAirUnitCount = 0;
	}

	if (updateDisplay) {
		memset(g_dirtyMinimap,  0, sizeof(g_dirtyMinimap));
		memset(g_dirtyViewport, 0, sizeof(g_dirtyViewport));
	}

	if (g_changedTilesCount != 0) {
		bool init = false;
		bool update = false;
		uint16 minY = 0xffff;
		uint16 maxY = 0;
		Screen oldScreenID2 = SCREEN_1;

		for (i = 0; i < g_changedTilesCount; i++) {
			curPos = g_changedTiles[i];
			BitArray_Clear(g_changedTilesMap, curPos);

			if (!init) {
				init = true;

				oldScreenID2 = GFX_Screen_SetActive(SCREEN_1);

				GUI_Mouse_Hide_InWidget(3);
			}

			if (GUI_Widget_Viewport_DrawTile(curPos))
			{
				y = Tile_GetPackedY(curPos) - g_mapInfos[g_scenario.mapScale].minY; /* +136 */
				y *= (g_scenario.mapScale + 1);
				if (y > maxY) maxY = y;
				if (y < minY) minY = y;
			}

			if (!update && BitArray_Test(g_displayedMinimap, curPos)) update = true;
		}

		if (update) Map_UpdateMinimapPosition(g_minimapPosition, true);

		if (init) {
			if (hasScrolled) {	/* force copy of the whole map (could be of the white rectangle) */
				minY = 0;
				maxY = 63 - g_scenario.mapScale;
			}
			/* MiniMap : redraw only line that changed */
			if (minY < maxY) GUI_Screen_Copy(32, 136 + minY, 32, 136 + minY, 8, maxY + 1 + g_scenario.mapScale - minY, SCREEN_ACTIVE, SCREEN_0);

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

	if ((g_viewportMessageCounter & 1) != 0 && g_viewportMessageText != NULL && (minX[6] <= 14 || maxX[6] >= 0 || hasScrolled || forceRedraw)) {
		GUI_DrawText_Wrapper(g_viewportMessageText, 112, 139, 15, 0, 0x132);
		minX[6] = -1;
		maxX[6] = 14;
	}

	if (updateDisplay && !drawToMainScreen) {
		if (g_viewport_fadein) {
			GUI_Mouse_Hide_InWidget(g_curWidgetIndex);

			/* ENHANCEMENT -- When fading in the game on start, you don't see the fade as it is against the already drawn screen. */
			if (g_dune2_enhanced) {
				Screen oldScreenID2 = GFX_Screen_SetActive(SCREEN_0);
				GUI_DrawFilledRectangle(g_curWidgetXBase << 3, g_curWidgetYBase, (g_curWidgetXBase + g_curWidgetWidth) << 3, g_curWidgetYBase + g_curWidgetHeight, 0);
				GFX_Screen_SetActive(oldScreenID2);
			}

			GUI_Screen_FadeIn(g_curWidgetXBase, g_curWidgetYBase, g_curWidgetXBase, g_curWidgetYBase, g_curWidgetWidth, g_curWidgetHeight, SCREEN_ACTIVE, SCREEN_0);
			GUI_Mouse_Show_InWidget();

			g_viewport_fadein = false;
		} else {
			bool init = false;

			for (i = 0; i < 10; i++) {
				uint16 width;
				uint16 height;

				if (hasScrolled) {
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

				GUI_Screen_Copy(x, y, x, y, width, height, SCREEN_ACTIVE, SCREEN_0);
			}

			if (init) GUI_Mouse_Show_InWidget();
		}
	}

	GFX_Screen_SetActive(oldScreenID);

	Widget_SetCurrentWidget(oldWidgetID);
}

/**
 * Draw a single tile on the screen.
 *
 * @param packed The tile to draw.
 */
bool GUI_Widget_Viewport_DrawTile(uint16 packed)
{
	uint16 x;
	uint16 y;
	uint16 colour;
	uint16 spriteID;
	uint16 mapScale;

	colour = 12;
	spriteID = 0xFFFF;

	if (Tile_IsOutOfMap(packed) || !Map_IsValidPosition(packed)) return false;

	mapScale = g_scenario.mapScale + 1;

	if (mapScale == 0 || BitArray_Test(g_displayedMinimap, packed)) return false;

	if ((g_map[packed].isUnveiled && g_playerHouse->flags.radarActivated) || g_debugScenario) {
		uint16 type = Map_GetLandscapeType(packed);
		Unit *u;

		if (mapScale > 1) {
			spriteID = g_scenario.mapScale + g_table_landscapeInfo[type].spriteID - 1;
		} else {
			colour = g_table_landscapeInfo[type].radarColour;
		}

		if (g_table_landscapeInfo[type].radarColour == 0xFFFF) {
			if (mapScale > 1) {
				spriteID = mapScale + g_map[packed].houseID * 2 + 29;
			} else {
				colour = g_table_houseInfo[g_map[packed].houseID].minimapColor;
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

	x = Tile_GetPackedX(packed);
	y = Tile_GetPackedY(packed);

	x -= g_mapInfos[g_scenario.mapScale].minX;
	y -= g_mapInfos[g_scenario.mapScale].minY;

	if (spriteID != 0xFFFF) {
		x *= g_scenario.mapScale + 1;
		y *= g_scenario.mapScale + 1;
		GUI_DrawSprite(SCREEN_ACTIVE, g_sprites[spriteID], x, y, 3, DRAWSPRITE_FLAG_WIDGETPOS);
	} else {
		GFX_PutPixel(x + 256, y + 136, colour & 0xFF);
	}
	return true;
}

/**
 * Redraw the whole map.
 *
 * @param screenID To which screen we should draw the map. Can only be SCREEN_0 or SCREEN_1. Any non-zero is forced to SCREEN_1.
 */
void GUI_Widget_Viewport_RedrawMap(Screen screenID)
{
	Screen oldScreenID = SCREEN_1;
	uint16 i;

	if (screenID == SCREEN_0) oldScreenID = GFX_Screen_SetActive(SCREEN_1);

	for (i = 0; i < 4096; i++) GUI_Widget_Viewport_DrawTile(i);

	Map_UpdateMinimapPosition(g_minimapPosition, true);

	if (screenID != SCREEN_0) return;

	GFX_Screen_SetActive(oldScreenID);

	GUI_Mouse_Hide_InWidget(3);
	GUI_Screen_Copy(32, 136, 32, 136, 8, 64, SCREEN_1, SCREEN_0);
	GUI_Mouse_Show_InWidget();
}
