/* $Id$ */

/** @file src/unknown/emu_07D4.c Unknown converted routines from segment 07D4. */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../os/common.h"
#include "../os/math.h"

#include "unknown.h"

#include "../animation.h"
#include "../gfx.h"
#include "../gui/gui.h"
#include "../house.h"
#include "../map.h"
#include "../opendune.h"
#include "../pool/house.h"
#include "../pool/pool.h"
#include "../pool/unit.h"
#include "../scenario.h"
#include "../sprites.h"
#include "../structure.h"
#include "../tools.h"
#include "../tile.h"
#include "../unit.h"


static uint16 s_changedTilesCount;     /*!< Number of changed tiles in #_changedTiles. */
static uint16 s_changedTiles[200];     /*!< Array of positions of changed tiles. */
uint8 g_changedTilesMap[512]; /*!< Bit array of changed tiles, in order not to loose changes. */

uint16 g_viewportMessageCounter;        /*!< Countdown counter for displaying #g_viewportMessageText, bit 0 means 'display the text'. */
char *g_viewportMessageText;            /*!< If not \c NULL, message text displayed in the viewport. */
static uint32 _viewportMessageTime = 0; /*!< Keeps track when to decrease #g_viewportMessageCounter. */

uint16 g_viewportPosition;              /*!< Top-left tile of the viewport. */
uint16 g_minimapPosition;               /*!< Top-left tile of the border in the minimap. */
uint16 g_selectionRectanglePosition;    /*!< Position of the structure selection rectangle. */
uint16 g_selectionPosition;             /*!< Current selection position (packed). */
uint16 g_selectionWidth;                /*!< Width of the selection. */
uint16 g_selectionHeight;               /*!< Height of the selection. */

/**
 * C-ified function of f__07D4_18BD_0016_68BB()
 *
 * @name Unknown_07D4_18BD
 * @implements 07D4:18BD:0016:68BB ()
 */
static uint8 *Unknown_07D4_18BD(uint16 index, uint8 houseID)
{
	uint8 *sprite;
	uint8 i;

	if (index > 355) return NULL;

	sprite = g_sprites[index];

	if (sprite == NULL) return NULL;

	if ((Sprites_GetType(sprite) & 0x1) == 0) return sprite;

	for (i = 0; i < 16; i++) {
		uint8 v = sprite[10 + i];

		if (v >= 0x90 && v <= 0x98) {
			if (v == 0xFF) break;
			v += houseID * 16;
		}

		g_global->variable_8420[i] = v;
	}

	return sprite;
}

/**
 * C-ified function of f__07D4_034D_001F_FF64()
 *
 * @name Unknown_07D4_034D
 * @implements 07D4:034D:001F:FF64 ()
 */
static void Unknown_07D4_034D(bool arg06, bool arg08, bool arg0A)
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
	uint16 oldScreenID;
	uint16 oldValue_07AE_0000;
	int16 minX[10];
	int16 maxX[10];

	PoolFindStruct find;

	updateDisplay = arg06;

	memset(minX, 0xF, sizeof(minX));
	memset(maxX, 0,   sizeof(minX));

	oldScreenID = GUI_Screen_SetActive(2);

	oldValue_07AE_0000 = Widget_SetCurrentWidget(2);

	if (g_global->variable_39E2 != 0 || arg06) {
		for (y = 0; y < 10; y++) {
			uint16 top = (y << 4) + 0x28;
			for (x = 0; x < (arg0A ? 15 : 16); x++) {
				Tile *t;
				uint16 left;

				curPos = g_viewportPosition + Tile_PackXY(x, y);

				if (x < 15 && !arg06 && BitArray_Test(g_dirtyViewport, curPos)) {
					if (maxX[y] < x) maxX[y] = x;
					if (minX[y] > x) minX[y] = x;
					updateDisplay = true;
				}

				if (!BitArray_Test(g_dirtyMinimap, curPos) && !arg06) continue;

				BitArray_Set(g_dirtyViewport, curPos);

				if (x < 15) {
					updateDisplay = true;
					if (maxX[y] < x) maxX[y] = x;
					if (minX[y] > x) minX[y] = x;
				}

				t = &g_map[curPos];
				left = x << 4;

				if (!g_debugScenario && g_global->veiledSpriteID == t->overlaySpriteID) {
					GUI_DrawFilledRectangle(left, top, left + 15, top + 15, 12);
					continue;
				}

				GFX_DrawSprite(t->groundSpriteID, left >> 3, top, t->houseID);

				if (t->overlaySpriteID == 0 || g_debugScenario) continue;

				GFX_DrawSprite(t->overlaySpriteID, left >> 3, top, t->houseID);
			}
		}
		g_global->variable_39E2 = 0;
	}

	find.type    = UNIT_SANDWORM;
	find.index   = 0xFFFF;
	find.houseID = HOUSE_INVALID;

	while (true) {
		Unit *u;
		uint8 *sprite;

		u = Unit_Find(&find);

		if (u == NULL) break;

		if (!u->o.flags.s.variable_4_1000 && !arg06) continue;

		u->o.flags.s.variable_4_1000 = false;

		if (!g_map[Tile_PackTile(u->o.position)].isUnveiled && !g_debugScenario) continue;

		sprite = Unknown_07D4_18BD(g_table_unitInfo[u->o.type].spriteID, Unit_GetHouseID(u));

		g_global->variable_8DE3 = 0x200;

		if (Map_IsPositionInViewport(u->o.position, &x, &y)) GUI_DrawSprite(g_global->screenActiveID, sprite, x, y, 2, g_global->variable_8DE3 | 0xC000);

		if (Map_IsPositionInViewport(u->variable_5A, &x, &y)) GUI_DrawSprite(g_global->screenActiveID, sprite, x, y, 2, g_global->variable_8DE3 | 0xC000);

		if (Map_IsPositionInViewport(u->variable_5E, &x, &y)) GUI_DrawSprite(g_global->screenActiveID, sprite, x, y, 2, g_global->variable_8DE3 | 0xC000);

		if (u != g_unitSelected) continue;

		if (!Map_IsPositionInViewport(u->o.position, &x, &y)) continue;

		GUI_DrawSprite(g_global->screenActiveID, g_sprites[6], x, y, 2, 0xC000);
	}

	g_global->variable_39E4 = 0;

	if (g_unitSelected == NULL && (g_global->variable_3A08 != 0 || arg08) && (Structure_Get_ByPackedTile(g_selectionRectanglePosition) != NULL || g_global->selectionType == 2 || g_debugScenario)) {
		uint16 x1 = (Tile_GetPackedX(g_selectionRectanglePosition) - Tile_GetPackedX(g_minimapPosition)) << 4;
		uint16 y1 = ((Tile_GetPackedY(g_selectionRectanglePosition) - Tile_GetPackedY(g_minimapPosition)) << 4) + 0x28;
		uint16 x2 = x1 + (g_selectionWidth << 4) - 1;
		uint16 y2 = y1 + (g_selectionHeight << 4) - 1;

		GUI_SetClippingArea(0, 40, 239, SCREEN_HEIGHT - 1);
		GUI_DrawWiredRectangle(x1, y1, x2, y2, 0xFF);

		if (g_global->variable_38EC == 0 && g_global->selectionType == 2) {
			GUI_DrawLine(x1, y1, x2, y2, 0xFF);
			GUI_DrawLine(x2, y1, x1, y2, 0xFF);
		}

		GUI_SetClippingArea(0, 0, SCREEN_WIDTH - 1, SCREEN_HEIGHT - 1);

		g_global->variable_3A08 = 0;
	}

	if (g_global->variable_39E6 != 0 || arg06 || updateDisplay) {
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

			if ((!u->o.flags.s.variable_4_1000 || u->o.flags.s.isNotOnMap) && !arg06 && !BitArray_Test(g_dirtyViewport, packed)) continue;

			u->o.flags.s.variable_4_1000 = false;

			if (!g_map[packed].isUnveiled && !g_debugScenario) continue;

			ui = &g_table_unitInfo[u->o.type];

			if (!Map_IsPositionInViewport(u->o.position, &x, &y)) continue;

			x += g_table_tilediff[0][u->variable_6C].s.x;
			y += g_table_tilediff[0][u->variable_6C].s.y;

			orientation = Orientation_Orientation256ToOrientation8(u->orientation[0].current);

			if (u->variable_6D >= 0 || ui->variable_4C == 0) {
				static const uint16 values_32C4[8][2] = {
					{0, 0}, {1, 0}, {1, 0}, {1, 0},
					{2, 0}, {1, 1}, {1, 1}, {1, 1}
				};

				index = ui->spriteID;

				switch (ui->displayMode) {
					case 1:
					case 2:
						if (ui->movementType == MOVEMENT_SLITHER) break;
						index += values_32A4[orientation][0];
						g_global->variable_8DE3 = values_32A4[orientation][1];
						break;

					case 3: {
						static const uint16 values_334A[4] = {0, 1, 0, 2};

						index += values_32C4[orientation][0] * 3;
						index += values_334A[u->variable_6D & 3];
						g_global->variable_8DE3 = values_32C4[orientation][1];
					} break;

					case 4:
						index += values_32C4[orientation][0] * 4;
						index += u->variable_6D & 3;
						g_global->variable_8DE3 = values_32C4[orientation][1];
						break;

					default:
						g_global->variable_8DE3 = 0;
						break;
				}
			} else {
				index = ui->variable_4C - u->variable_6D - 1;
				g_global->variable_8DE3 = 0;
			}

			if (u->o.type != UNIT_SANDWORM && u->o.flags.s.isHighlighted) g_global->variable_8DE3 |= 0x100;
			if (ui->o.flags.s.variable_0020) g_global->variable_8DE3 |= 0x200;

			GUI_DrawSprite(g_global->screenActiveID, Unknown_07D4_18BD(index, (u->deviated != 0) ? HOUSE_ORDOS : Unit_GetHouseID(u)), x, y, 2, g_global->variable_8DE3 | 0xE000, g_global->variable_8420, g_paletteMapping2, 1);

			if (u->o.type == UNIT_HARVESTER && u->actionID == ACTION_HARVEST && u->variable_6D >= 0 && (u->actionID == ACTION_HARVEST || u->actionID == ACTION_MOVE)) {
				uint16 type = Map_GetLandscapeType(packed);
				if (type == LST_SPICE || type == LST_THICK_SPICE) {
					static const int16 values_334E[8][2] = {
						{0, 7},  {-7,  6}, {-14, 1}, {-9, -6},
						{0, -9}, { 9, -6}, { 14, 1}, { 7,  6}
					};

					GUI_DrawSprite(g_global->screenActiveID, Unknown_07D4_18BD((u->variable_6D % 3) + 0xDF + (values_32A4[orientation][0] * 3), Unit_GetHouseID(u)), x + values_334E[orientation][0], y + values_334E[orientation][1], 2, values_32A4[orientation][1] | 0xC000);
				}
			}

			if (u->variable_6D >= 0 && ui->turretSpriteID != 0xFFFF) {
				int16 offsetX = 0;
				int16 offsetY = 0;
				uint16 index = ui->turretSpriteID;

				orientation = Orientation_Orientation256ToOrientation8(u->orientation[ui->o.flags.s.hasTurret ? 1 : 0].current);

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

				g_global->variable_8DE3 = values_32A4[orientation][1];
				index += values_32A4[orientation][0];

				GUI_DrawSprite(g_global->screenActiveID, Unknown_07D4_18BD(index, Unit_GetHouseID(u)), x + offsetX, y + offsetY, 2, g_global->variable_8DE3 | 0xE000, g_global->variable_8420);
			}

			if (u->o.flags.s.isSmoking) {
				uint16 spriteID = 180 + (u->variable_6D & 3);
				if (spriteID == 183) spriteID = 181;

				GUI_DrawSprite(g_global->screenActiveID, g_sprites[spriteID], x, y - 14, 2, 0xC000);
			}

			if (u != g_unitSelected) continue;

			GUI_DrawSprite(g_global->screenActiveID, g_sprites[6], x, y, 2, 0xC000);
		}

		g_global->variable_39E6 = 0;
	}

	for (i = 0; i < 32; i++) {
		MapActivity *s;

		s = &g_mapActivity[i];

		curPos = Tile_PackTile(s->position);

		if (BitArray_Test(g_dirtyViewport, curPos)) s->variable_07 = 1;

		if (s->activities == NULL) continue;
		if (s->variable_07 == 0 && !arg06) continue;
		if (s->variable_0A == 0) continue;

		s->variable_07 = 0;

		if (!g_map[curPos].isUnveiled && !g_debugScenario) continue;
		if (!Map_IsPositionInViewport(s->position, &x, &y)) continue;

		g_global->variable_8DE3 = 0xC000;

		GUI_DrawSprite(g_global->screenActiveID, Unknown_07D4_18BD(s->variable_0A, s->houseID), x, y, 2, g_global->variable_8DE3, g_global->variable_8420);
	}

	if (g_global->variable_39E8 != 0 || arg06 || updateDisplay) {
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

			if ((!u->o.flags.s.variable_4_1000 || u->o.flags.s.isNotOnMap) && !arg06 && !BitArray_Test(g_dirtyViewport, curPos)) continue;

			u->o.flags.s.variable_4_1000 = false;

			if (!g_map[curPos].isUnveiled && !g_debugScenario) continue;

			ui = &g_table_unitInfo[u->o.type];

			if (!Map_IsPositionInViewport(u->o.position, &x, &y)) continue;

			index = ui->spriteID;
			orientation = u->orientation[0].current;
			g_global->variable_8DE3 = 0xC000;

			switch (ui->displayMode) {
				case 0:
					if (u->o.flags.s.variable_4_0040) index++;
					break;

				case 1:
					orientation = Orientation_Orientation256ToOrientation8(orientation);

					index += values_32E4[orientation][0];
					g_global->variable_8DE3 |= values_32E4[orientation][1];
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
					g_global->variable_8DE3 |= values_3304[orientation][1];
				} break;

				case 5: {
					static const uint16 values_33AE[4] = {2, 1, 0, 1};

					orientation = Orientation_Orientation256ToOrientation8(orientation);

					index += (values_32E4[orientation][0] * 3) + values_33AE[u->variable_6D & 3];
					g_global->variable_8DE3 |= values_32E4[orientation][1];
				} break;

				default:
					g_global->variable_8DE3 = 0x0;
					break;
			}

			if (ui->flags.s.variable_2000 && u->o.flags.s.variable_4_0020) index += 5;
			if (u->o.type == UNIT_CARRYALL && u->o.flags.s.inTransport) index += 3;

			sprite = Unknown_07D4_18BD(index, Unit_GetHouseID(u));

			if (ui->o.flags.s.hasShadow) GUI_DrawSprite(g_global->screenActiveID, sprite, x + 1, y + 3, 2, (g_global->variable_8DE3 & 0xDFFF) | 0x300, g_paletteMapping1, 1);

			if (ui->o.flags.s.variable_0020) g_global->variable_8DE3 |= 0x200;

			GUI_DrawSprite(g_global->screenActiveID, sprite, x, y, 2, g_global->variable_8DE3 | 0x2000, g_global->variable_8420);
		}

		g_global->variable_39E8 = 0;
	}

	if (updateDisplay) {
		memset(g_dirtyMinimap,  0, sizeof(g_dirtyMinimap));
		memset(g_dirtyViewport, 0, sizeof(g_dirtyViewport));
	}

	if (s_changedTilesCount != 0) {
		bool init = false;
		bool update = false;
		uint16 oldScreenID2 = 2;

		for (i = 0; i < s_changedTilesCount; i++) {
			curPos = s_changedTiles[i];
			BitArray_Clear(g_changedTilesMap, curPos);

			if (!init) {
				init = true;

				oldScreenID2 = GUI_Screen_SetActive(2);

				GUI_Mouse_Hide_InWidget(3);
			}

			Unknown_07D4_1625(curPos);

			if (!update && BitArray_Test(g_displayedMinimap, curPos)) update = true;
		}

		if (update) Map_UpdateMinimapPosition(g_minimapPosition, true);

		if (init) {
			GUI_Screen_Copy(32, 136, 32, 136, 8, 64, g_global->screenActiveID, 0);

			GUI_Screen_SetActive(oldScreenID2);

			GUI_Mouse_Show_InWidget();
		}

		if (s_changedTilesCount == lengthof(s_changedTiles)) {
			s_changedTilesCount = 0;

			for (i = 0; i < 4096; i++) {
				if (!BitArray_Test(g_changedTilesMap, i)) continue;
				s_changedTiles[s_changedTilesCount++] = i;
				if (s_changedTilesCount == lengthof(s_changedTiles)) break;
			}
		} else {
			s_changedTilesCount = 0;
		}
	}

	if ((g_viewportMessageCounter & 1) != 0 && g_viewportMessageText != NULL && (minX[6] <= 14 || maxX[6] >= 0 || arg08 || arg06)) {
		GUI_DrawText_Wrapper(g_viewportMessageText, 112, 139, 15, 0, 0x132);
		minX[6] = -1;
		maxX[6] = 14;
	}

	if (updateDisplay && !arg0A) {
		if (g_global->variable_3A14 != 0) {
			GUI_Mouse_Hide_InWidget(g_curWidgetIndex);
			GUI_Screen_FadeIn(g_curWidgetXBase, g_curWidgetYBase, g_curWidgetXBase, g_curWidgetYBase, g_curWidgetWidth, g_curWidgetHeight, g_global->screenActiveID, 0);
			GUI_Mouse_Show_InWidget();

			g_global->variable_3A14 = 0;
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
					g_global->variable_37A4 = 0;
				}

				GUI_Screen_Copy(x, y, x, y, width, height, g_global->screenActiveID, 0);
			}

			if (init) GUI_Mouse_Show_InWidget();
		}
	}

	GUI_Screen_SetActive(oldScreenID);

	Widget_SetCurrentWidget(oldValue_07AE_0000);
}

/**
 * C-ified function of f__07D4_0000_0027_FA61()
 *
 * @name emu_Unknown_07D4_0000
 * @implements 07D4:0000:0027:FA61 ()
 */
void Unknown_07D4_0000(uint16 screenID)
{
	bool loc10;
	uint16 oldScreenID;
	uint16 xpos;

	if (g_global->selectionType < 1 || g_global->selectionType > 4) return;

	loc10 = false;

	oldScreenID = GUI_Screen_SetActive(screenID);

	if (screenID != 0) g_global->variable_3A12 = 1;

	Map_Activity_Tick();
	Animation_Tick();
	Unit_Sort();

	if (g_global->variable_3A12 == 0 && g_viewportPosition != g_minimapPosition) {
		uint16 viewportX = Tile_GetPackedX(g_viewportPosition);
		uint16 viewportY = Tile_GetPackedY(g_viewportPosition);
		int16 xOffset = Tile_GetPackedX(g_minimapPosition) - viewportX; /* Horizontal offset between viewport and minimap. */
		int16 yOffset = Tile_GetPackedY(g_minimapPosition) - viewportY; /* Vertical offset between viewport and minmap. */

		/* Overlap remaining in tiles. */
		int16 xOverlap = 15 - abs(xOffset);
		int16 yOverlap = 10 - abs(yOffset);

		int16 x, y;

		if (xOverlap < 1 || yOverlap < 1) g_global->variable_3A12 = 1;

		if (g_global->variable_3A12 == 0 && (xOverlap != 15 || yOverlap != 10)) {
			Map_SetSelectionObjectPosition(0xFFFF);
			loc10 = true;

			GUI_Mouse_Hide_InWidget(2);

			GUI_Screen_Copy(max(-xOffset << 1, 0), 40 + max(-yOffset << 4, 0), max(0, xOffset << 1), 40 + max(0, yOffset << 4), xOverlap << 1, yOverlap << 4, 0, 2);
		} else {
			g_global->variable_3A12 = 1;
		}

		xOffset = max(0, xOffset);
		yOffset = max(0, yOffset);

		for (y = 0; y < 10; y++) {
			uint16 mapYBase = (y + viewportY) << 6;

			for (x = 0; x < 15; x++) {
				if (x >= xOffset && (xOffset + xOverlap) > x && y >= yOffset && (yOffset + yOverlap) > y && g_global->variable_3A12 == 0) continue;

				Map_Update(x + viewportX + mapYBase, 0, true);
			}
		}
	}

	if (loc10) {
		Map_SetSelectionObjectPosition(0xFFFF);

		for (xpos = 0; xpos < 14; xpos++) {
			uint16 v = g_minimapPosition + xpos + 6*64;

			BitArray_Set(g_dirtyViewport, v);
			BitArray_Set(g_dirtyMinimap, v);

			g_global->variable_39E2++;
		}
	}

	g_minimapPosition = g_viewportPosition;
	g_selectionRectanglePosition = g_selectionPosition;

	if (g_viewportMessageCounter != 0 && _viewportMessageTime < g_global->variable_76AC) {
		g_viewportMessageCounter--;
		_viewportMessageTime = g_global->variable_76AC + 60;

		for (xpos = 0; xpos < 14; xpos++) {
			Map_Update(g_viewportPosition + xpos + 6*64, 0, true);
		}
	}

	Unknown_07D4_034D(g_global->variable_3A12 != 0, loc10, screenID != 0);

	g_global->variable_3A12 = 0;

	GUI_Screen_SetActive(oldScreenID);

	Map_SetSelectionObjectPosition(g_selectionRectanglePosition);
	Map_UpdateMinimapPosition(g_minimapPosition, false);

	GUI_Mouse_Show_InWidget();
}

/**
 * C-ified function of f__07D4_159A_001D_F971()
 *
 * @name emu_Unknown_07D4_159A
 * @implements 07D4:159A:001D:F971 ()
 */
void Unknown_07D4_159A(uint16 screenID)
{
	uint16 oldScreenID = 2;
	uint16 i;

	if (screenID == 0) oldScreenID = GUI_Screen_SetActive(2);

	for (i = 0; i < 4096; i++) Unknown_07D4_1625(i);

	Map_UpdateMinimapPosition(g_minimapPosition, true);

	if (screenID != 0) return;

	GUI_Screen_SetActive(oldScreenID);

	GUI_Mouse_Hide_InWidget(3);
	GUI_Screen_Copy(32, 136, 32, 136, 8, 64, 2, 0);
	GUI_Mouse_Show_InWidget();
}

/**
 * C-ified function of f__07D4_1625_001A_07E5()
 *
 * @name Unknown_07D4_1625
 * @implements 07D4:1625:001A:07E5 ()
 */
void Unknown_07D4_1625(uint16 packed)
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

	if ((t->isUnveiled && g_playerHouse->flags.s.radarActivated) || g_debugScenario) {
		uint16 type = Map_GetLandscapeType(packed);
		Unit *u;

		if (mapScale > 1) {
			spriteID = g_scenario.mapScale + g_global->variable_3A3E[type][12] - 1;
		} else {
			colour = g_global->variable_3A3E[type][11];
		}

		if (g_global->variable_3A3E[type][11] == 0xFFFF) {
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
				spriteID = g_scenario.mapScale + g_global->variable_3A3E[LST_ENTIRELY_MOUNTAIN][12] - 1;
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
		GUI_DrawSprite(g_global->screenActiveID, g_sprites[spriteID], x, y, 3, 0x4000);
	} else {
		GFX_PutPixel(x + 256, y + 136, colour & 0xFF);
	}

	g_global->variable_37A6++;
}

/**
 * C-ified function of f__07D4_02F8_0055_0679()
 *
 * @name emu_Unknown_07D4_02F8
 * @implements 07D4:02F8:0055:0679 ()
 */
void Unknown_07D4_02F8(uint16 packed)
{
	if (BitArray_Test(g_displayedMinimap, packed) && g_scenario.mapScale + 1 == 0) return;

	BitArray_Set(g_changedTilesMap, packed);
	if (s_changedTilesCount < lengthof(s_changedTiles)) s_changedTiles[s_changedTilesCount++] = packed;
}
