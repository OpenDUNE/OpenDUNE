/* $Id$ */

/** @file src/map.c Map routines. */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "os/common.h"
#include "os/math.h"

#include "map.h"

#include "animation.h"
#include "gfx.h"
#include "gui/gui.h"
#include "house.h"
#include "opendune.h"
#include "pool/pool.h"
#include "pool/unit.h"
#include "pool/house.h"
#include "pool/structure.h"
#include "scenario.h"
#include "sprites.h"
#include "structure.h"
#include "team.h"
#include "timer.h"
#include "tools.h"
#include "tile.h"
#include "unit.h"
#include "unknown/unknown.h"


uint16 g_mapSpriteID[64 * 64];
Tile g_map[64 * 64];            /*!< All map data. */
uint8 g_functions[3][3] = {{0, 1, 0}, {2, 3, 0}, {0, 1, 0}};
MapActivity g_mapActivity[32];  /*!< Map activities. */
static uint32 s_mapActivityTimeout = 0; /*!< Timeout value for next map activity. */

uint8 g_dirtyMinimap[512];      /*!< Dirty tiles of the minimap (must be rendered again). */
uint8 g_displayedMinimap[512];  /*!< Displayed part of the minimap. */
uint8 g_dirtyViewport[512];     /*!< Dirty tiles of the viewport (must be rendered again). */
uint8 g_displayedViewport[512]; /*!< Displayed part of the viewport. */

static bool _debugNoExplosionDamage = false; /*!< When non-zero, explosions do no damage to their surrounding. */

static const Activity _activities00[] = {
	{  1,  153 },
	{  2,    3 },
	{ 13,    0 },
	{  4,  153 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities01[] = {
	{  1,  154 },
	{ 13,    0 },
	{  2,    3 },
	{  4,  153 },
	{  2,    3 },
	{  1,  154 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities02[] = {
	{  1,  183 },
	{  9,   50 },
	{ 13,    0 },
	{  8,    0 },
	{  2,   15 },
	{  1,  184 },
	{  2,   15 },
	{  0,    0 }
};

static const Activity _activities03[] = {
	{  1,  183 },
	{  9,   49 },
	{ 13,    0 },
	{  8,    0 },
	{  2,    3 },
	{  1,  184 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities04[] = {
	{  1,  203 },
	{  9,   51 },
	{ 13,    0 },
	{  8,    0 },
	{  2,    7 },
	{  1,  204 },
	{  2,    3 },
	{  1,  205 },
	{  2,    3 },
	{  1,  206 },
	{  2,    3 },
	{  1,  207 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities05[] = {
	{  3,   60 },
	{  1,  203 },
	{  9,   41 },
	{ 13,    0 },
	{  8,    0 },
	{  2,    7 },
	{  1,  204 },
	{  2,    3 },
	{  1,  205 },
	{  2,    3 },
	{  1,  206 },
	{  2,    3 },
	{  1,  207 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities06[] = {
	{  1,  198 },
	{  9,   51 },
	{ 13,    0 },
	{  8,    0 },
	{  2,    7 },
	{  1,  199 },
	{  2,    3 },
	{  1,  200 },
	{  2,    3 },
	{  1,  201 },
	{  2,    3 },
	{  1,  202 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities07[] = {
	{  1,  208 },
	{  9,   39 },
	{  2,   15 },
	{  1,  209 },
	{  2,   15 },
	{  1,  210 },
	{  2,   15 },
	{  1,  211 },
	{  2,   15 },
	{  1,  212 },
	{  2,   15 },
	{  0,    0 }
};

static const Activity _activities08[] = {
	{  1,  156 },
	{  9,   40 },
	{ 13,    0 },
	{  2,    7 },
	{  1,  157 },
	{  2,    3 },
	{  1,  158 },
	{  2,    3 },
	{  1,  157 },
	{  2,    3 },
	{  8,    0 },
	{  0,    0 }
};

static const Activity _activities09[] = {
	{  1,  183 },
	{  9,   41 },
	{ 13,    0 },
	{  8,    0 },
	{  2,    3 },
	{  1,  203 },
	{  2,    3 },
	{  7, 4016 },
	{  1,  168 },
	{  2,   15 },
	{  1,  169 },
	{  2,   15 },
	{  1,  170 },
	{  2,   15 },
	{  1,  168 },
	{  2,   15 },
	{  1,  169 },
	{  2,   15 },
	{  1,  170 },
	{  2,   15 },
	{  1,  168 },
	{  2,   15 },
	{  1,  169 },
	{  2,   15 },
	{  1,  170 },
	{  2,   15 },
	{  1,  168 },
	{  2,   15 },
	{  1,  169 },
	{  2,   15 },
	{  1,  170 },
	{  2,   15 },
	{  1,  168 },
	{  2,   15 },
	{  1,  169 },
	{  2,   15 },
	{  1,  170 },
	{  2,   15 },
	{  0,    0 }
};

static const Activity _activities10[] = {
	{  1,  151 },
	{  9,   49 },
	{ 13,    0 },
	{  8,    0 },
	{  2,    7 },
	{  1,  152 },
	{  2,    7 },
	{  0,    0 }
};

static const Activity _activities11[] = {
	{  3,   60 },
	{  1,  188 },
	{  9,   51 },
	{ 13,    0 },
	{  8,    0 },
	{  2,    7 },
	{  1,  189 },
	{  2,    3 },
	{  1,  190 },
	{  2,    3 },
	{  1,  191 },
	{  2,    3 },
	{  1,  192 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities12[] = {
	{  1,  213 },
	{  2,   15 },
	{  1,  214 },
	{  2,   15 },
	{  1,  215 },
	{  2,   15 },
	{  1,  216 },
	{  2,   15 },
	{  1,  217 },
	{  2,   30 },
	{  0,    0 }
};

static const Activity _activities13[] = {
	{  1,  218 },
	{  2,   15 },
	{  1,  219 },
	{  2,   15 },
	{  1,  220 },
	{  2,   15 },
	{  1,  221 },
	{  2,   15 },
	{  1,  222 },
	{  2,   30 },
	{  0,    0 }
};

static const Activity _activities14[] = {
	{  3,   60 },
	{  1,  188 },
	{  9,   51 },
	{  2,    7 },
	{  1,  189 },
	{ 13,    0 },
	{ 10,    0 },
	{  2,    3 },
	{  1,  190 },
	{  2,    3 },
	{  1,  191 },
	{  2,    3 },
	{  1,  192 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities15[] = {
	{  1,  183 },
	{  9,   49 },
	{  7, 4016 },
	{  2,    3 },
	{  1,  184 },
	{  2,    3 },
	{  1,  180 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  182 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  180 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  182 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  180 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  182 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  180 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  182 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  180 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  182 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  180 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  1,  182 },
	{  2,   15 },
	{  1,  181 },
	{  2,   15 },
	{  0,    0 }
};

static const Activity _activities16[] = {
	{  1,  203 },
	{  9,   49 },
	{ 13,    0 },
	{ 11,    0 },
	{  2,    3 },
	{  1,  204 },
	{  1,  207 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities17[] = {
	{  1,  203 },
	{  9,   49 },
	{ 13,    0 },
	{ 11,    4 },
	{  2,    3 },
	{  1,  204 },
	{  1,  207 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities18[] = {
	{  1,  183 },
	{  9,   54 },
	{ 13,    0 },
	{  2,    3 },
	{  1,  184 },
	{  2,    3 },
	{  0,    0 }
};

static const Activity _activities19[] = {
	{  1,  156 },
	{  9,   40 },
	{ 10,    0 },
	{  2,    7 },
	{ 10,    0 },
	{  1,  157 },
	{  2,    3 },
	{ 10,    0 },
	{  1,  158 },
	{  2,    3 },
	{ 10,    0 },
	{  1,  157 },
	{  2,    3 },
	{ 10,    0 },
	{  8,    0 },
	{  0,    0 }
};

static const Activity *_activities[] = {
	_activities00,
	_activities01,
	_activities02,
	_activities03,
	_activities04,
	_activities05,
	_activities06,
	_activities07,
	_activities08,
	_activities09,
	_activities10,
	_activities11,
	_activities12,
	_activities13,
	_activities14,
	_activities15,
	_activities16,
	_activities17,
	_activities18,
	_activities19
};

/**
 * Map definitions.
 * Map sizes: [0] is 62x62, [1] is 32x32, [2] is 21x21.
 */
const MapInfo g_mapInfos[3] = {
	{ 1,  1, 62, 62},
	{16, 16, 32, 32},
	{21, 21, 21, 21}
};

/**
 * Move the viewport position in the given direction.
 *
 * @param direction The direction to move in.
 * @return The new viewport position.
*/
uint16 Map_MoveDirection(uint16 direction)
{
	uint16 x, y;
	const MapInfo *mapInfo;

	x = Tile_GetPackedX(g_minimapPosition) + g_global->mapScrollOffset[direction][0];
	y = Tile_GetPackedY(g_minimapPosition) + g_global->mapScrollOffset[direction][1];

	mapInfo = &g_mapInfos[g_scenario.mapScale];

	x = max(x, mapInfo->minX);
	y = max(y, mapInfo->minY);

	x = min(x, mapInfo->minX + mapInfo->sizeX - 15);
	y = min(y, mapInfo->minY + mapInfo->sizeY - 10);

	g_viewportPosition = Tile_PackXY(x, y);
	return g_viewportPosition;
}

/**
 * Sets the selection on given packed tile.
 *
 * @param packed The packed tile to set the selection on.
 */
void Map_SetSelection(uint16 packed)
{
	if (g_global->selectionType == 1) return;

	if (g_global->selectionType == 2) {
		g_global->variable_38EC = Structure_IsValidBuildLocation(packed, g_structureActiveType);
		g_selectionPosition = packed;
		return;
	}

	if (g_map[packed].overlaySpriteID != g_veiledSpriteID || g_debugScenario) {
		Structure *s;

		s = Structure_Get_ByPackedTile(packed);
		if (s != NULL) {
			const StructureInfo *si;

			si = &g_table_structureInfo[s->o.type];
			if (s->o.houseID == g_playerHouseID || g_global->selectionType != 0) {
				GUI_DisplayHint(si->o.hintStringID, si->o.spriteID);
			}

			packed = Tile_PackTile(s->o.position);

			Map_SetSelectionSize(si->layout);

			Structure_UpdateMap(s);
		} else {
			Map_SetSelectionSize(STRUCTURE_LAYOUT_1x1);
		}

		if (g_global->selectionType != 1) {
			Unit *u;

			u = Unit_Get_ByPackedTile(packed);
			if (u != NULL) {
				if (u->o.type != UNIT_CARRYALL) {
					Unit_Select(u);
				}
			} else {
				if (g_unitSelected != NULL) {
					Unit_Select(NULL);
				}
			}
		}
		g_selectionPosition = packed;
		return;
	}

	Map_SetSelectionSize(STRUCTURE_LAYOUT_1x1);
	g_selectionPosition = packed;
	return;
}

/**
 * Sets the selection size for the given layout.
 *
 * @param layout The layout to determine selection size from.
 * @return The previous layout.
 * @see StructureLayout
 */
uint16 Map_SetSelectionSize(uint16 layout)
{
	uint16 oldLayout;
	uint16 oldPosition;

	oldLayout = g_global->selectionObjectLayout;
	if (layout & 0x80) return oldLayout;

	oldPosition = Map_SetSelectionObjectPosition(0xFFFF);

	g_global->selectionObjectLayout = layout;
	g_selectionWidth                = g_table_structure_layoutSize[layout].width;
	g_selectionHeight               = g_table_structure_layoutSize[layout].height;

	Map_SetSelectionObjectPosition(oldPosition);

	return oldLayout;
}

static void Map_InvalidateSelection(uint16 packed, bool enable)
{
	uint16 x, y;

	if (packed == 0xFFFF) return;

	for (y = 0; y < g_selectionHeight; y++) {
		for (x = 0; x < g_selectionWidth; x++) {
			uint16 curPacked;

			curPacked = packed + Tile_PackXY(x, y);

			Map_Update(curPacked, 0, false);

			if (enable) {
				BitArray_Set(g_displayedViewport, curPacked);
			} else {
				BitArray_Clear(g_displayedViewport, curPacked);
			}
		}
	}
}

/**
 * Sets the selection object to the given position.
 *
 * @param packed The position to set.
 * @return The previous position.
 */
uint16 Map_SetSelectionObjectPosition(uint16 packed)
{
	uint16 oldPacked;

	oldPacked = g_global->selectionObjectPosition;

	if (packed == oldPacked) return oldPacked;

	Map_InvalidateSelection(oldPacked, false);

	if (packed != 0xFFFF) Map_InvalidateSelection(packed, true);

	g_global->selectionObjectPosition = packed;

	return oldPacked;
}

/**
 * Update the minimap position.
 *
 * @param packed The new position.
 * @param forceUpdate If true force the update even if the position didn't change.
 */
void Map_UpdateMinimapPosition(uint16 packed, bool forceUpdate)
{
	/* Border tiles of the viewport relative to the top-left. */
	static const uint16 viewportBorder[] = {
		0x0000, 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0006, 0x0007, 0x0008, 0x0009, 0x000A, 0x000B, 0x000C, 0x000D, 0x000E,
		0x0040, 0x004E,
		0x0080, 0x008E,
		0x00C0, 0x00CE,
		0x0100, 0x010E,
		0x0140, 0x014E,
		0x0180, 0x018E,
		0x01C0, 0x01CE,
		0x0200, 0x020E,
		0x0240, 0x0241, 0x0242, 0x0243, 0x0244, 0x0245, 0x0246, 0x0247, 0x0248, 0x0249, 0x024A, 0x024B, 0x024C, 0x024D, 0x024E,
		0xFFFF
	};

	static uint16 minimapPreviousPosition = 0;

	bool cleared;
	uint16 oldScreenID;

	if (packed != 0xFFFF && packed == minimapPreviousPosition && !forceUpdate) return;
	if (g_global->selectionType == 0) return;

	oldScreenID = GFX_Screen_SetActive(2);

	cleared = false;

	if (minimapPreviousPosition != 0xFFFF && minimapPreviousPosition != packed) {
		const uint16 *m;

		cleared = true;

		for (m = viewportBorder; *m != 0xFFFF; m++) {
			uint16 curPacked;

			curPacked = minimapPreviousPosition + *m;
			BitArray_Clear(g_displayedMinimap, curPacked);

			Unknown_07D4_1625(curPacked);
		}
	}

	if (packed != 0xFFFF && (packed != minimapPreviousPosition || forceUpdate)) {
		const uint16 *m;
		uint16 mapScale;
		const MapInfo *mapInfo;
		uint16 left, top, right, bottom;

		mapScale = g_scenario.mapScale;
		mapInfo = &g_mapInfos[mapScale];

		left   = (Tile_GetPackedX(packed) - mapInfo->minX) * (mapScale + 1) + 256;
		right  = left + mapScale * 15 + 14;
		top    = (Tile_GetPackedY(packed) - mapInfo->minY) * (mapScale + 1) + 136;
		bottom = top + mapScale * 10 + 9;

		GUI_DrawWiredRectangle(left, top, right, bottom, 15);

		for (m = viewportBorder; *m != 0xFFFF; m++) {
			uint16 curPacked;

			curPacked = packed + *m;
			BitArray_Set(g_displayedMinimap, curPacked);
		}
	}

	if (cleared && oldScreenID == 0) {
		GUI_Mouse_Hide_Safe();
		GUI_Screen_Copy(32, 136, 32, 136, 8, 64, 2, 0);
		GUI_Mouse_Show_Safe();
	}

	GFX_Screen_SetActive(oldScreenID);

	minimapPreviousPosition = packed;
}

/**
 * Checks if the given position is inside the map.
 *
 * @param position The tile (packed) to check.
 * @return True if the position is valid.
 */
bool Map_IsValidPosition(uint16 position)
{
	uint16 x, y;
	const MapInfo *mapInfo;

	if ((position & 0xC000) != 0) return false;

	x = Tile_GetPackedX(position);
	y = Tile_GetPackedY(position);

	mapInfo = &g_mapInfos[g_scenario.mapScale];

	return (mapInfo->minX <= x && x < (mapInfo->minX + mapInfo->sizeX) && mapInfo->minY <= y && y < (mapInfo->minY + mapInfo->sizeY));
}

/**
 * Save all Tiles to a file.
 * @param fp The file to save to.
 * @return True if and only if all bytes were written successful.
 */
bool Map_Save(FILE *fp)
{
	uint16 i;

	for (i = 0; i < 0x1000; i++) {
		Tile *tile = &g_map[i];

		/* If there is nothing on the tile, not unveiled, and it is equal to the mapseed generated tile, don't store it */
		if (!tile->isUnveiled && !tile->hasStructure && !tile->hasUnit && !tile->hasAnimation && !tile->hasMapActivity && (g_mapSpriteID[i] & 0x8000) == 0 && g_mapSpriteID[i] == tile->groundSpriteID) continue;

		/* Store the index, then the tile itself */
		if (fwrite(&i, sizeof(uint16), 1, fp) != 1) return false;
		if (fwrite(tile, sizeof(Tile), 1, fp) != 1) return false;
	}

	return true;
}

/**
 * Load all Tiles from a file.
 * @param fp The file to load from.
 * @param length The length of the data chunk.
 * @return True if and only if all bytes were read successful.
 */
bool Map_Load(FILE *fp, uint32 length)
{
	uint16 i;

	for (i = 0; i < 0x1000; i++) {
		Tile *t = &g_map[i];

		t->isUnveiled = false;
		t->overlaySpriteID = g_veiledSpriteID;
	}

	while (length >= sizeof(uint16) + sizeof(Tile)) {
		Tile *t;

		length -= sizeof(uint16) + sizeof(Tile);

		if (fread(&i, sizeof(uint16), 1, fp) != 1) return false;
		if (i >= 0x1000) return false;

		t = &g_map[i];
		if (fread(t, sizeof(Tile), 1, fp) != 1) return false;

		if (g_mapSpriteID[i] != t->groundSpriteID) {
			g_mapSpriteID[i] |= 0x8000;
		}
	}
	if (length != 0) return false;

	return true;
}

/**
 * Check if a position is unveiled (the fog is removed).
 *
 * @param position For which position to check.
 * @return True if and only if the position is unveiled.
 */
bool Map_IsPositionUnveiled(uint16 position)
{
	Tile *t;

	if (g_debugScenario) return true;

	t = &g_map[position];

	if (!t->isUnveiled) return false;
	if (!Sprite_IsUnveiled(t->overlaySpriteID)) return false;

	return true;
}

/**
 * Check if a position is in the viewport.
 *
 * @param position For which position to check.
 * @param retX Pointer to X inside the viewport.
 * @param retY Pointer to Y inside the viewport.
 * @return True if and only if the position is in the viewport.
 */
bool Map_IsPositionInViewport(tile32 position, uint16 *retX, uint16 *retY)
{
	int16 x, y;

	x = (position.s.x >> 4) - (Tile_GetPackedX(g_viewportPosition) << 4);
	y = (position.s.y >> 4) - (Tile_GetPackedY(g_viewportPosition) << 4);

	if (retX != NULL) *retX = x;
	if (retY != NULL) *retY = y;

	return x >= -16 && x <= 256 && y >= -16 && y <= 176;
}

static void Map_B4CD_04D9(uint16 arg06, MapActivity *s)
{
	if (s == NULL) return;

	if (arg06 == 1 && s->variable_07 != 0) return;

	s->variable_07 = (arg06 != 0) ? 1 : 0;

	Map_B4CD_057B(24, s->position, NULL, g_functions[2][arg06]);
}

static bool Map_06F7_072B(MapActivity *s)
{
	uint16 packed;
	uint16 type;
	Tile *t;
	uint16 loc06;
	uint16 overlaySpriteID;
	uint16 *iconMap;

	packed = Tile_PackTile(s->position);

	if (!Map_IsPositionUnveiled(packed)) return false;

	type = Map_GetLandscapeType(packed);

	if (type == 0xC || type == 0xD) return false;

	t = &g_map[packed];

	if (type == 0xA) {
		t->groundSpriteID = g_mapSpriteID[packed] & 0x1FF;
		Map_Update(packed, 0, false);
	}

	loc06 = g_global->variable_329E[g_global->variable_3A3E[type][10]];

	if (loc06 == 0xFFFF) return false;

	overlaySpriteID = t->overlaySpriteID;

	if (!Sprite_IsUnveiled(overlaySpriteID)) return false;

	iconMap = &g_iconMap[g_iconMap[loc06]];
	if (iconMap[0] <= overlaySpriteID && overlaySpriteID <= iconMap[10]) {
		overlaySpriteID -= iconMap[0];
		if (overlaySpriteID < 4) overlaySpriteID += 2;
	} else {
		overlaySpriteID = Tools_Random_256() & 1;
	}

	Map_ChangeSpiceAmount(packed, -1);

	if (t->groundSpriteID == g_bloomSpriteID) {
		Map_ExplodeBloom(packed, g_playerHouseID);
		return false;
	}

	t->overlaySpriteID = (overlaySpriteID + iconMap[0]) & 0x7F;

	Map_Update(packed, 0, false);

	return true;
}

static bool Map_06F7_08BD(MapActivity *s, uint16 voiceID)
{
	Voice_PlayAtTile(voiceID, s->position);

	return true;
}

static bool Map_06F7_08DD(MapActivity *s)
{
	VARIABLE_NOT_USED(s);
	return true;
}

/**
 * Let a bloom explode.
 * @param s Map activy.
 */
static bool Map_PerformBloomExplosion(MapActivity *s)
{
	uint16 packed;

	packed = Tile_PackTile(s->position);

	if (g_map[packed].groundSpriteID != g_bloomSpriteID) return true;

	Map_ExplodeBloom(packed, g_playerHouseID);

	return false;
}

static bool Map_06F7_0967(MapActivity *s, uint16 arg0A)
{
	csip32 proc;
	uint16 packed;

	packed = Tile_PackTile(s->position);

	if (Structure_Get_ByPackedTile(packed) != NULL) return true;

	proc.s.cs = 0x33C8;
	proc.s.ip = ((arg0A + (Tools_Random_256() & 0x1) + (g_global->variable_3A3E[Map_GetLandscapeType(packed)][7] != 0 ? 0 : 2)) << 4) + 256;

	Animation_Start(emu_get_memorycsip(proc), s->position, 0, s->houseID, 3);

	return true;
}

/**
 * Set position at the top of a column.
 * @param column Column number.
 * @return True.
 */
static bool Map_SetColumn(MapActivity *s, uint16 column)
{
	if ((column & 0x800) != 0) column |= 0xF000;
	s->position.s.x = column;
	s->position.s.y = 0;
	return true;
}

/**
 * Set position at the left of a row.
 * @param row Row number.
 * @return True.
 */
static bool Map_SetRow(MapActivity *s, uint16 row)
{
	if ((row & 0x800) != 0) row |= 0xF000;
	s->position.s.x = 0;
	s->position.s.y = row;
	return true;
}

/**
 * Reset the activity counter of activity \a s.
 * @param s Activity being reset.
 * @return True.
 */
static bool Map_ResetActCounter(MapActivity *s)
{
	s->actCounter = 0;
	return true;
}

/**
 * Stop performing an activity.
 * @param s Map activity to end.
 * @return False.
 */
static bool Map_StopActivity(MapActivity *s)
{
	g_map[Tile_PackTile(s->position)].hasMapActivity = false;

	Map_B4CD_04D9(0, s);

	s->activities = NULL;
	return false;
}

/**
 * Set timeout for next the map activity of \a s.
 * @param s Map activy.
 * @return True
 */
static bool Map_SetTimeout(MapActivity *s, uint16 value)
{
	s->timeOut = g_timerGUI + value;
	return true;
}

/**
 * Set timeout for next the map activity of \a s to a random value up to \a value.
 * @param s Map activy.
 * @return True
 */
static bool Map_SetRandomTimeout(MapActivity *s, uint16 value)
{
	s->timeOut = g_timerGUI + Tools_RandomRange(0, value);
	return true;
}

static bool Map_06F7_0B14(MapActivity *s, uint16 arg0A)
{
	s->variable_0A = arg0A;
	s->variable_08 = 0;

	Map_B4CD_04D9(2, s);

	return true;
}

static bool Map_06F7_0B42(MapActivity *s, uint16 arg0A)
{
	s->variable_0A = arg0A;
	s->variable_08 = 1;

	Map_B4CD_04D9(2, s);

	return true;
}

/**
 * Stop any activity at position \a packed.
 * @param packed A packed position where no activities should take place (any more).
 * @return True if and only if at least one map activity was stopped.
 */
static bool Map_StopActivityAtPosition(uint16 packed)
{
	Tile *t;
	uint8 i;

	t = &g_map[packed];

	if (!t->hasMapActivity) return false;

	for (i = 0; i < 32; i++) {
		MapActivity *s;

		s = &g_mapActivity[i];

		if (s->activities == NULL || Tile_PackTile(s->position) != packed) continue;

		Map_StopActivity(s);
	}

	return true;
}

/**
 * Initialize map activity.
 * @param activities Activities of this map activity.
 * @param position The position to use for init.
 * @return True if and only if an init happened.
 */
static bool Map_InitializeActivity(const Activity *activities, tile32 position)
{
	uint16 packed;
	uint8 i;

	if (activities == NULL) return false;

	packed = Tile_PackTile(position);

	Map_StopActivityAtPosition(packed);

	for (i = 0; i < 32; i++) {
		MapActivity *s;

		s = &g_mapActivity[i];

		if (s->activities != NULL) continue;

		s->index       = i;
		s->activities  = activities;
		s->actCounter  = 0;
		s->variable_0A = 0;
		s->position    = position;
		s->variable_07 = 0;
		s->timeOut     = g_timerGUI;
		s_mapActivityTimeout = 0;
		g_map[packed].hasMapActivity = true;
		return true;
	}

	return false;
}

static bool Map_UpdateWall(uint16 packed)
{
	Tile *t;

	if (Map_GetLandscapeType(packed) != LST_WALL) return 0;

	t = &g_map[packed];

	t->groundSpriteID = g_mapSpriteID[packed] & 0x1FF;

	if (Map_IsPositionUnveiled(packed)) t->overlaySpriteID = g_wallSpriteID;

	Structure_ConnectWall(packed, true);
	Map_Update(packed, 0, false);

	return true;
}

/**
 * Make an explosion on the given position, of a certain type. All units in the
 *  neighbourhoud get an amount of damage related to their distance to the
 *  explosion.
 * @param type The type of explosion.
 * @param position The position of the explosion.
 * @param hitpoints The amount of hitpoints to give people in the neighbourhoud.
 * @param unitOriginEncoded The unit that fired the bullet.
 */
void Map_MakeExplosion(uint16 type, tile32 position, uint16 hitpoints, uint16 unitOriginEncoded)
{
	uint16 reactionDistance = (type == 11) ? 32 : 16;
	uint16 positionPacked = Tile_PackTile(position);

	if (!_debugNoExplosionDamage && hitpoints != 0) {
		PoolFindStruct find;
		find.houseID = HOUSE_INVALID;
		find.index   = 0xFFFF;
		find.type    = 0xFFFF;

		while (true) {
			const UnitInfo *ui;
			uint16 distance;
			Team *t;
			Unit *u;
			Unit *us;
			Unit *attack;

			u = Unit_Find(&find);
			if (u == NULL) break;

			ui = &g_table_unitInfo[u->o.type];

			distance = Tile_GetDistance(position, u->o.position) >> 4;
			if (distance >= reactionDistance) continue;

			if (!(u->o.type == UNIT_SANDWORM && type == 13) && u->o.type != UNIT_FRIGATE) {
				Unit_Damage(u, hitpoints >> (distance >> 2), 0);
			}

			if (u->o.houseID == g_playerHouseID) continue;

			us = Tools_Index_GetUnit(unitOriginEncoded);
			if (us == NULL) continue;
			if (us == u) continue;
			if (House_AreAllied(Unit_GetHouseID(u), Unit_GetHouseID(us))) continue;

			t = Unit_GetTeam(u);
			if (t != NULL) {
				const UnitInfo *targetInfo;
				Unit *target;

				if (t->variable_0C == 1) {
					Unit_RemoveFromTeam(u);
					Unit_SetAction(u, ACTION_HUNT);
					continue;
				}

				target = Tools_Index_GetUnit(t->target);
				if (target == NULL) continue;

				targetInfo = &g_table_unitInfo[target->o.type];
				if (targetInfo->bulletType == 0xFFFF) t->target = unitOriginEncoded;
				continue;
			}

			if (u->o.type == UNIT_HARVESTER) {
				const UnitInfo *uis = &g_table_unitInfo[us->o.type];

				if (uis->movementType == MOVEMENT_FOOT && u->targetMove == 0) {
					if (u->actionID != ACTION_MOVE) Unit_SetAction(u, ACTION_MOVE);
					u->targetMove = unitOriginEncoded;
					continue;
				}
			}

			if (ui->bulletType == 0xFFFF) continue;

			if (u->actionID == ACTION_GUARD && u->o.flags.s.byScenario) {
				Unit_SetAction(u, ACTION_HUNT);
			}

			if (u->targetAttack != 0 && u->actionID != ACTION_HUNT) continue;

			attack = Tools_Index_GetUnit(u->targetAttack);
			if (attack != NULL) {
				uint16 packed = Tile_PackTile(u->o.position);
				if (Tile_GetDistancePacked(Tools_Index_GetPackedTile(u->targetAttack), packed) <= ui->variable_50) continue;
			}

			Unit_SetTarget(u, unitOriginEncoded);
		}
	}

	if (!_debugNoExplosionDamage && hitpoints != 0) {
		Structure *s = Structure_Get_ByPackedTile(positionPacked);

		if (s != NULL) {
			if (type == 2) {
				const StructureInfo *si = &g_table_structureInfo[s->o.type];

				if (si->o.hitpoints / 2 > s->o.hitpoints) {
					type = 15;
				}
			}

			Structure_HouseUnderAttack(s->o.houseID);
			Structure_Damage(s, hitpoints, 0);
		}
	}

	if (Map_GetLandscapeType(positionPacked) == LST_WALL && hitpoints != 0) {
		bool loc22 = false;

		if (g_table_structureInfo[STRUCTURE_TURRET].o.hitpoints <= hitpoints) loc22 = true;

		if (!loc22) {
			uint16 loc24 = hitpoints * 256 / g_table_structureInfo[STRUCTURE_TURRET].o.hitpoints;

			if (Tools_Random_256() <= loc24) loc22 = true;
		}

		if (loc22) Map_UpdateWall(positionPacked);
	}

	Map_InitializeActivity(_activities[type], position);
}

/**
 * Type of landscape for the landscape sprites.
 *
 * 0=normal sand, 1=partial rock, 5=mostly rock, 4=entirely rock,
 * 3=partial sand dunes, 2=entirely sand dunes, 7=partial mountain,
 * 6=entirely mountain, 8=spice, 9=thick spice
 * @see Map_GetLandscapeType
 */
static const uint16 _landscapeSpriteMap[81] = {
	0, 1, 1, 1, 5, 1, 5, 5, 5, 5, /* Sprites 127-136 */
	5, 5, 5, 5, 5, 5, 4, 3, 3, 3, /* Sprites 137-146 */
	3, 3, 3, 3, 3, 3, 3, 3, 3, 3, /* Sprites 147-156 */
	3, 3, 2, 7, 7, 7, 7, 7, 7, 7, /* Sprites 157-166 */
	7, 7, 7, 7, 7, 7, 7, 7, 6, 8, /* Sprites 167-176 */
	8, 8, 8, 8, 8, 8, 8, 8, 8, 8, /* Sprites 177-186 */
	8, 8, 8, 8, 8, 9, 9, 9, 9, 9, /* Sprites 187-196 */
	9, 9, 9, 9, 9, 9, 9, 9, 9, 9, /* Sprites 197-206 */
	9,                            /* Sprite  207 (bloom sprites 208 and 209 are already caught). */
};

/**
 * Get type of landscape of a tile.
 *
 * @param packed The packed tile to examine.
 * @return The type of landscape at the tile.
 */
uint16 Map_GetLandscapeType(uint16 packed)
{
	Tile *t;
	int16 spriteOffset;

	t = &g_map[packed];

	if (t->groundSpriteID == g_builtSlabSpriteID) return LST_CONCRETE_SLAB;

	if (t->groundSpriteID == g_bloomSpriteID || t->groundSpriteID == g_bloomSpriteID + 1) return LST_BLOOM_FIELD;

	if (t->groundSpriteID > g_wallSpriteID && t->groundSpriteID < g_wallSpriteID + 75) return LST_WALL;

	if (t->overlaySpriteID == g_wallSpriteID) return LST_DESTROYED_WALL;

	if (Structure_Get_ByPackedTile(packed) != NULL) return LST_STRUCTURE;

	spriteOffset = t->groundSpriteID - g_landscapeSpriteID; /* Offset in the landscape icon group. */
	if (spriteOffset < 0 || spriteOffset > 80) return LST_ENTIRELY_ROCK;

	return _landscapeSpriteMap[spriteOffset];
}

/**
 * Checks wether a packed tile is visible in the viewport.
 *
 * @param packed The packed tile.
 * @return True if the tile is visible.
 */
static bool Map_IsTileVisible(uint16 packed)
{
	uint8 x, y;
	uint8 x2, y2;

	x = Tile_GetPackedX(packed);
	y = Tile_GetPackedY(packed);
	x2 = Tile_GetPackedX(g_minimapPosition);
	y2 = Tile_GetPackedY(g_minimapPosition);

	return x >= x2 && x < x2 + 15 && y >= y2 && y < y2 + 10;
}

/**
 * Updates ??.
 *
 * @param packed The packed tile.
 * @param type The type of update.
 * @param ignoreInvisible Wether to ignore tile visibility check.
 */
void Map_Update(uint16 packed, uint16 type, bool ignoreInvisible)
{
	static int16 offsets[9] = {
		-64, /* up */
		-63, /* up right */
		1,   /* right */
		65,  /* down rigth */
		64,  /* down */
		63,  /* down left */
		-1,  /* left */
		-65, /* up left */
		0
	};

	if (!ignoreInvisible && !Map_IsTileVisible(packed)) return;

	switch (type) {
		default:
		case 0: {
			uint8 i;
			uint16 curPacked;

			if (BitArray_Test(g_dirtyMinimap, packed)) return;

			g_global->variable_39E2++;

			for (i = 0; i < 9; i++) {
				curPacked = (packed + offsets[i]) & 0xFFF;
				BitArray_Set(g_dirtyViewport, curPacked);
				if (BitArray_Test(g_displayedViewport, curPacked)) g_global->variable_3A08 = 1;
			}

			BitArray_Set(g_dirtyMinimap, curPacked);
			return;
		}

		case 1:
		case 2:
		case 3:
			BitArray_Set(g_dirtyViewport, packed);
			return;
	}
}

/**
 * Make a deviator missile explosion on the given position, of a certain type. All units in the
 *  given radius may become deviated.
 * @param type The type of explosion.
 * @param position The position of the explosion.
 * @param radius The radius.
 */
void Map_DeviateArea(uint16 type, tile32 position, uint16 radius)
{
	PoolFindStruct find;

	Map_InitializeActivity(_activities[type], position);


	find.type    = 0xFFFF;
	find.index   = 0xFFFF;
	find.houseID = HOUSE_INVALID;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);

		if (u == NULL) break;
		if (Tile_GetDistance(position, u->o.position) / 16 >= radius) continue;

		Unit_Deviate(u, 0);
	}
}

/**
 * Timer tick for map activities.
 * @return Timer value for next activity.
 */
uint32 Map_Activity_Tick()
{
	uint8 i;

	if (s_mapActivityTimeout > g_timerGUI) return s_mapActivityTimeout;

	s_mapActivityTimeout += 10000;

	for (i = 0; i < 32; i++) {
		MapActivity *s;

		s = &g_mapActivity[i];

		if (s->activities == NULL) continue;

		if (s->timeOut <= g_timerGUI) {
			uint16 data   = s->activities[s->actCounter].data;
			uint16 action = s->activities[s->actCounter].action;

			s->actCounter++;

			switch(action) {
				case  1: Map_06F7_0B14(s, data); break;
				case  2: Map_SetTimeout(s, data); break;
				case  3: Map_SetRandomTimeout(s, data); break;
				case  4: Map_06F7_0B42(s, data); break;
				case  5: Map_ResetActCounter(s); break;
				case  6: Map_SetColumn(s, data); break;
				case  7: Map_SetRow(s, data); break;
				case  8: Map_06F7_072B(s); break;
				case  9: Map_06F7_08BD(s, data); break;
				case 10: Map_06F7_08DD(s); break;
				case 11: Map_06F7_0967(s, data); break;
				case 13: Map_PerformBloomExplosion(s); break;
				default: Map_StopActivity(s); break;
			}
		}

		if (s->activities == NULL || s->timeOut > s_mapActivityTimeout) continue;

		s_mapActivityTimeout = s->timeOut;
	}

	return s_mapActivityTimeout;
}

/**
 * Perform a bloom explosion, filling the area with spice.
 * @param packed Center position.
 * @param houseID %House causing the explosion.
 */
void Map_ExplodeBloom(uint16 packed, uint8 houseID)
{
	if (g_global->variable_38BC == 0) {
		Unit_Unknown10EC(Unit_Get_ByPackedTile(packed));
		g_map[packed].groundSpriteID = g_mapSpriteID[packed] & 0x1FF;
		Map_MakeExplosion(0x13, Tile_UnpackTile(packed), 0, 0);
	}

	if (houseID == g_playerHouseID) Sound_Output_Feedback(36);

	Map_FillCircleWithSpice(packed, 5);
}

/**
 * Fill a circular area with spice.
 * @param packed Center position of the area.
 * @param radius Radius of the circle.
 */
void Map_FillCircleWithSpice(uint16 packed, uint16 radius)
{
	uint16 x;
	uint16 y;
	int i;
	int j;

	if (radius == 0) return;

	x = Tile_GetPackedX(packed);
	y = Tile_GetPackedY(packed);

	for (i = -radius; i <= radius; i++) {
		for (j = -radius; j <= radius; j++) {
			uint16 curPacked = Tile_PackXY(x + j, y + i);
			uint16 distance  = Tile_GetDistancePacked(packed, curPacked);

			if (distance > radius) continue;

			if (distance == radius && (Tools_Random_256() & 1) == 0) continue;

			if (Map_GetLandscapeType(curPacked) == LST_SPICE) continue;

			Map_ChangeSpiceAmount(curPacked, 1);

			if (g_debugScenario) {
				Unknown_07D4_02F8(curPacked);
			}
		}
	}

	Map_ChangeSpiceAmount(packed, 1);
}

/**
 * Fixes edges of spice / thick spice to show sand / normal spice for better looks.
 * @param packed Position to check and possible fix edges of.
 */
static void Map_FixupSpiceEdges(uint16 packed)
{
	/* Relative steps in the map array for moving up, right, down, left. */
	static const int16 _mapDifference[] = {-64, 1, 64, -1};

	uint16 type;
	uint16 spriteID;

	packed &= 0xFFF;
	type = Map_GetLandscapeType(packed);
	spriteID = 0;

	if (type == LST_SPICE || type == LST_THICK_SPICE) {
		uint8 i;

		for (i = 0; i < 4; i++) {
			uint16 curPacked = packed + _mapDifference[i];
			uint16 curType;

			if (Tile_IsOutOfMap(curPacked)) {
				if (type == LST_SPICE || type == LST_THICK_SPICE) spriteID |= (1 << i);
				continue;
			}

			curType = Map_GetLandscapeType(curPacked);

			if (type == LST_SPICE) {
				if (curType == LST_SPICE || curType == LST_THICK_SPICE) spriteID |= (1 << i);
				continue;
			}

			if (curType == LST_THICK_SPICE) spriteID |= (1 << i);
		}

		spriteID += (type == LST_SPICE) ? 49 : 65;

		spriteID = g_iconMap[g_iconMap[ICM_ICONGROUP_LANDSCAPE] + spriteID] & 0x1FF;
		g_mapSpriteID[packed] = 0x8000 | spriteID;
		g_map[packed].groundSpriteID = spriteID;
	}

	Map_Update(packed, 0, false);
}

/**
 * Change amount of spice at \a packed position.
 * @param packed Position in the world to modify.
 * @param direction of change, > 0 means add spice, < 0 means remove spice.
 */
void Map_ChangeSpiceAmount(uint16 packed, int16 dir)
{
	uint16 type;
	uint16 spriteID;

	if (dir == 0) return;

	type = Map_GetLandscapeType(packed);

	if (type == LST_THICK_SPICE && dir > 0) return;
	if (type != LST_SPICE && type != LST_THICK_SPICE && dir < 0) return;
	if (type != LST_NORMAL_SAND && type != LST_ENTIRELY_DUNE && type != LST_SPICE && dir > 0) return;

	if (dir > 0) {
		type = (type == LST_SPICE) ? LST_THICK_SPICE : LST_SPICE;
	} else {
		type = (type == LST_THICK_SPICE) ? LST_SPICE : LST_NORMAL_SAND;
	}

	spriteID = 0;
	if (type == LST_SPICE) spriteID = 49;
	if (type == LST_THICK_SPICE) spriteID = 65;

	spriteID = g_iconMap[g_iconMap[ICM_ICONGROUP_LANDSCAPE] + spriteID] & 0x1FF;
	g_mapSpriteID[packed] = 0x8000 | spriteID;
	g_map[packed].groundSpriteID = spriteID;

	Map_FixupSpiceEdges(packed);
	Map_FixupSpiceEdges(packed + 1);
	Map_FixupSpiceEdges(packed - 1);
	Map_FixupSpiceEdges(packed - 64);
	Map_FixupSpiceEdges(packed + 64);
}

/**
 * Sets the viewport position.
 *
 * @param packed The packed position.
*/
void Map_SetViewportPosition(uint16 packed)
{
	int16 x;
	int16 y;
	const MapInfo *mapInfo;

	x = Tile_GetPackedX(packed) - 7;
	y = Tile_GetPackedY(packed) - 5;

	mapInfo = &g_mapInfos[g_scenario.mapScale];

	x = max(mapInfo->minX, min(mapInfo->minX + mapInfo->sizeX - 15, x));
	y = max(mapInfo->minY, min(mapInfo->minY + mapInfo->sizeY - 10, y));

	g_viewportPosition = Tile_PackXY(x, y);
}

void Map_B4CD_160C(uint16 packed, uint8 houseID)
{
	House *h;
	PoolFindStruct find;
	uint8 curHouseID;

	h = House_Get_ByIndex(houseID);

	g_map[packed].groundSpriteID = g_landscapeSpriteID;
	g_mapSpriteID[packed] = 0x8000 | g_landscapeSpriteID;

	Map_Update(packed, 0, false);

	curHouseID = houseID;

	find.houseID = HOUSE_INVALID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);
		if (u == NULL) break;

		if (u->o.houseID == houseID) continue;

		curHouseID = u->o.houseID;
		break;
	}

	switch (Tools_Random_256() & 0x3) {
		case 0:
			h->credits += Tools_RandomRange(150, 400);
			break;

		case 1: {
			tile32 position = Tile_UnpackTile(packed);

			position = Tile_MoveByRandom(position, 16, true);

			/* ENHANCEMENT -- Dune2 inverted houseID and typeID arguments. */
			Unit_Create(UNIT_INDEX_INVALID, UNIT_TRIKE, houseID, position, Tools_Random_256());
			break;
		}

		case 2: {
			tile32 position = Tile_UnpackTile(packed);
			Unit *u;

			position = Tile_MoveByRandom(position, 16, true);

			/* ENHANCEMENT -- Dune2 inverted houseID and typeID arguments. */
			u = Unit_Create(UNIT_INDEX_INVALID, UNIT_TRIKE, curHouseID, position, Tools_Random_256());

			if (u != NULL) Unit_SetAction(u, ACTION_HUNT);
			break;
		}

		case 3: {
			tile32 position = Tile_UnpackTile(packed);
			Unit *u;

			position = Tile_MoveByRandom(position, 16, true);

			/* ENHANCEMENT -- Dune2 inverted houseID and typeID arguments. */
			u = Unit_Create(UNIT_INDEX_INVALID, UNIT_INFANTRY, curHouseID, position, Tools_Random_256());

			if (u != NULL) Unit_SetAction(u, ACTION_HUNT);
			break;
		}

		default: break;
	}
}

uint16 Map_B4CD_1816(uint16 locationID, uint8 houseID)
{
	static int16 mapBase[3] = {1, -2, -2};

	uint16 ret = 0;
	uint16 loc02;

	loc02 = mapBase[g_scenario.mapScale];

	if (locationID == 6) {
		PoolFindStruct find;

		find.houseID = HOUSE_INVALID;
		find.index   = 0xFFFF;
		find.type    = 0xFFFF;

		while (true) {
			Structure *s;

			s = Structure_Find(&find);
			if (s == NULL) break;

			if (s->o.houseID == houseID) continue;

			houseID = s->o.houseID;
			break;
		}
	}

	while (ret == 0) {
		switch (locationID) {
			case 0: {
				const MapInfo *mapInfo = &g_mapInfos[g_scenario.mapScale];
				ret = Tile_PackXY(mapInfo->minX + Tools_RandomRange(0, mapInfo->sizeX - 2), mapInfo->minY + loc02);
				break;
			}

			case 1:{
				const MapInfo *mapInfo = &g_mapInfos[g_scenario.mapScale];
				ret = Tile_PackXY(mapInfo->minX + mapInfo->sizeX - loc02, mapInfo->minY + Tools_RandomRange(0, mapInfo->sizeY - 2));
				break;
			}

			case 2: {
				const MapInfo *mapInfo = &g_mapInfos[g_scenario.mapScale];
				ret = Tile_PackXY(mapInfo->minX + Tools_RandomRange(0, mapInfo->sizeX - 2), mapInfo->minY + mapInfo->sizeY - loc02);
				break;
			}

			case 3: {
				const MapInfo *mapInfo = &g_mapInfos[g_scenario.mapScale];
				ret = Tile_PackXY(mapInfo->minX + loc02, mapInfo->minY + Tools_RandomRange(0, mapInfo->sizeY - 2));
				break;
			}

			case 4: {
				const MapInfo *mapInfo = &g_mapInfos[g_scenario.mapScale];
				ret = Tile_PackXY(mapInfo->minX + Tools_RandomRange(0, mapInfo->sizeX), mapInfo->minY + Tools_RandomRange(0, mapInfo->sizeY));
				if (houseID == g_playerHouseID && !Map_IsValidPosition(ret)) ret = 0;
				break;
			}

			case 5:
				ret = Tile_PackXY(Tile_GetPackedX(g_minimapPosition) + Tools_RandomRange(0, 14), Tile_GetPackedY(g_minimapPosition) + Tools_RandomRange(0, 9));
				if (houseID == g_playerHouseID && !Map_IsValidPosition(ret)) ret = 0;
				break;

			case 6:
			case 7: {
				PoolFindStruct find;
				Structure *s;

				find.houseID = houseID;
				find.index   = 0xFFFF;
				find.type    = 0xFFFF;

				s = Structure_Find(&find);

				if (s != NULL) {
					ret = Tile_PackTile(Tile_MoveByRandom(s->o.position, 120, true));
				} else {
					Unit *u;

					find.houseID = houseID;
					find.index   = 0xFFFF;
					find.type    = 0xFFFF;

					u = Unit_Find(&find);

					if (u != NULL) {
						ret = Tile_PackTile(Tile_MoveByRandom(u->o.position, 120, true));
					} else {
						const MapInfo *mapInfo = &g_mapInfos[g_scenario.mapScale];
						ret = Tile_PackXY(mapInfo->minX + Tools_RandomRange(0, mapInfo->sizeX), mapInfo->minY + Tools_RandomRange(0, mapInfo->sizeY));
					}
				}

				if (houseID == g_playerHouseID && !Map_IsValidPosition(ret)) ret = 0;
				break;
			}

			default: return 0;
		}

		ret &= 0xFFF;
		if (ret == 0) continue;

		if (Object_GetByPackedTile(ret) != NULL) ret = 0;
	}

	return ret;
}

void Map_B4CD_057B(uint16 arg06, tile32 position, Unit *unit, uint8 function)
{
	uint16 loc0A;
	tile32 loc12;
	uint16 loc04;

	if (arg06 == 0 || position.tile == 0) return;

	arg06--;

	if (arg06 > 31) {
		uint16 x = Tile_GetPosX(position);
		uint16 y = Tile_GetPosY(position);
		int16 j;
		int16 i;

		for (i = -2; i <= 2; i++) {
			for (j = -2; j <= 2; j++) {
				uint16 curPacked;

				if (x + i < 0 || x + i >= 64 || y + j < 0 || y + j >= 64) continue;

				curPacked = Tile_PackXY(x + i, y + j);
				BitArray_Set(g_dirtyViewport, curPacked);
				g_global->variable_39E2++;

				switch (function) {
					case 0: Map_Update(curPacked, 0, false); break;
					case 1: Map_Update(curPacked, 3, false); break;
					case 2: Unit_RemoveFromTile(unit, curPacked); break;
					case 3: Unit_AddToTile(unit, curPacked); break;
					default: break;
				}
			}
		}
		return;
	}

	arg06 = max(min(arg06, 32), 15);
	position.tile -= g_global->variable_395E[arg06];
	loc12.tile = 0;
	loc04 = 0;
	for (loc0A = 0; loc0A < 9; loc0A++) {
		tile32 loc08 = Tile_AddTileDiff(position, loc12);

		if (Tile_IsValid(loc08)) {
			uint16 curPacked = Tile_PackTile(loc08);

			if (curPacked != loc04) {
				BitArray_Set(g_dirtyViewport, curPacked);
				g_global->variable_39E2++;

				switch (function) {
					case 0: Map_Update(curPacked, 0, false); break;
					case 1: Map_Update(curPacked, 3, false); break;
					case 2: Unit_RemoveFromTile(unit, curPacked); break;
					case 3: Unit_AddToTile(unit, curPacked); break;
					default: break;
				}

				loc04 = curPacked;
			}
		}

		loc12 = g_table_tilediff[arg06 + 1][loc0A];
		if (loc12.tile == 0) break;
	}
}

/**
 * Search for spice around a position. Thick spice is preferred if it is not too far away.
 * @param packed Center position.
 * @param radius Radius of the search.
 * @return Best position with spice, or \c 0 if no spice found.
 */
uint16 Map_SearchSpice(uint16 packed, uint16 radius)
{
	uint16 radius1;
	uint16 radius2;
	uint16 packed1;
	uint16 packed2;
	uint16 xmin;
	uint16 xmax;
	uint16 ymin;
	uint16 ymax;
	const MapInfo *mapInfo;
	uint16 x;
	uint16 y;
	bool found;

	radius1 = radius + 1;
	radius2 = radius + 1;
	packed1 = packed;
	packed2 = packed;

	found = false;

	mapInfo = &g_mapInfos[g_scenario.mapScale];

	xmin = max(Tile_GetPackedX(packed) - radius, mapInfo->minX);
	xmax = min(Tile_GetPackedX(packed) + radius, mapInfo->minX + mapInfo->sizeX - 1);
	ymin = max(Tile_GetPackedY(packed) - radius, mapInfo->minY);
	ymax = min(Tile_GetPackedY(packed) + radius, mapInfo->minY + mapInfo->sizeY - 1);

	for (y = ymin; y <= ymax; y++) {
		for (x = xmin; x <= xmax; x++) {
			uint16 curPacked = Tile_PackXY(x, y);
			uint16 type;
			uint16 distance;

			if (!Map_IsValidPosition(curPacked)) continue;
			if (g_map[curPacked].hasStructure) continue;
			if (Unit_Get_ByPackedTile(curPacked) != NULL) continue;

			type = Map_GetLandscapeType(curPacked);
			distance = Tile_GetDistancePacked(curPacked, packed);

			if (type == LST_THICK_SPICE && distance < 4) {
				found = true;

				if (distance <= radius2) {
					radius2 = distance;
					packed2 = curPacked;
				}
			}

			if (type == LST_SPICE) {
				found = true;

				if (distance <= radius1) {
					radius1 = distance;
					packed1 = curPacked;
				}
			}
		}
	}

	if (!found) return 0;

	return (radius2 <= radius) ? packed2 : packed1;
}

void Map_SelectNext(bool getNext)
{
	PoolFindStruct find;
	Object *selected = NULL;
	Object *previous = NULL;
	Object *next = NULL;
	Object *first = NULL;
	Object *last = NULL;
	bool hasPrevious = false;
	bool hasNext = false;

	if (g_unitSelected != NULL) {
		if (Map_IsTileVisible(Tile_PackTile(g_unitSelected->o.position))) selected = &g_unitSelected->o;
	} else {
		Structure *s;

		s = Structure_Get_ByPackedTile(g_selectionPosition);

		if (Map_IsTileVisible(Tile_PackTile(s->o.position))) selected = &s->o;
	}

	find.houseID = HOUSE_INVALID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);
		if (u == NULL) break;

		if (!g_table_unitInfo[u->o.type].o.flags.s.tabSelectable) continue;

		if (!Map_IsTileVisible(Tile_PackTile(u->o.position))) continue;

		if ((u->o.variable_09 & (1 << g_playerHouseID)) == 0) continue;

		if (first == NULL) first = &u->o;
		last = &u->o;
		if (selected == NULL) selected = &u->o;

		if (selected == &u->o) {
			hasPrevious = true;
			continue;
		}

		if (!hasPrevious) {
			previous = &u->o;
			continue;
		}

		if (!hasNext) {
			next = &u->o;
			hasNext = true;
		}
	}

	find.houseID = HOUSE_INVALID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Structure *s;

		s = Structure_Find(&find);
		if (s == NULL) break;

		if (!Map_IsTileVisible(Tile_PackTile(s->o.position))) continue;

		if ((s->o.variable_09 & (1 << g_playerHouseID)) == 0) continue;

		if (first == NULL) first = &s->o;
		last = &s->o;
		if (selected == NULL) selected = &s->o;

		if (selected == &s->o) {
			hasPrevious = true;
			continue;
		}

		if (!hasPrevious) {
			previous = &s->o;
			continue;
		}

		if (!hasNext) {
			next = &s->o;
			hasNext = true;
		}
	}

	if (previous == NULL) previous = last;
	if (next == NULL) next = first;
	if (previous == NULL) previous = next;
	if (next == NULL) next = previous;

	selected = getNext ? next : previous;

	if (selected == NULL) return;

	Map_SetSelection(Tile_PackTile(selected->position));
}

/**
 * After unveiling, check neighbour tiles. This function handles one neighbour.
 * @param packed The neighbour tile of an unveiled tile.
 */
static void Map_UnveilTile_Neighbour(uint16 packed)
{
	uint16 spriteID;
	Tile *t;

	if (Tile_IsOutOfMap(packed)) return;

	t = &g_map[packed];

	spriteID = 15;
	if (t->isUnveiled) {
		int i;

		if (g_global->variable_38BC == 0 && Sprite_IsUnveiled(t->overlaySpriteID)) return;

		spriteID = 0;

		for (i = 0; i < 4; i++) {
			static const int16 mapOffset[] = {-64, 1, 64, -1};
			uint16 neighbour = packed + mapOffset[i];

			if (Tile_IsOutOfMap(neighbour)) {
				spriteID |= 1 << i;
				continue;
			}

			if (!g_map[neighbour].isUnveiled) spriteID |= 1 << i;
		}
	}

	if (spriteID != 0) {
		if (spriteID != 15) {
			Unit *u = Unit_Get_ByPackedTile(packed);
			if (u != NULL) Unit_HouseUnitCount_Add(u, g_playerHouseID);
		}

		spriteID = g_iconMap[g_iconMap[ICM_ICONGROUP_FOG_OF_WAR] + spriteID];
	}

	t->overlaySpriteID = spriteID;

	Map_Update(packed, 0, false);
}

/**
 * Unveil a tile for a House.
 * @param packed The tile to unveil.
 * @param houseID The house to unveil for.
 * @return True if tile was freshly unveiled.
 */
bool Map_UnveilTile(uint16 packed, uint8 houseID)
{
	Structure *s;
	Unit *u;
	Tile *t;

	if (houseID != g_playerHouseID) return false;
	if (Tile_IsOutOfMap(packed)) return false;

	t = &g_map[packed];

	if (t->isUnveiled && Sprite_IsUnveiled(t->overlaySpriteID)) return false;
	t->isUnveiled = true;

	Unknown_07D4_02F8(packed);

	u = Unit_Get_ByPackedTile(packed);
	if (u != NULL) Unit_HouseUnitCount_Add(u, houseID);

	s = Structure_Get_ByPackedTile(packed);
	if (s != NULL) {
		s->o.variable_09 |= 1 << houseID;
		if (s->o.houseID == HOUSE_ATREIDES) s->o.variable_09 |= 1 << HOUSE_FREMEN;
	}

	Map_UnveilTile_Neighbour(packed);
	Map_UnveilTile_Neighbour(packed + 1);
	Map_UnveilTile_Neighbour(packed - 1);
	Map_UnveilTile_Neighbour(packed - 64);
	Map_UnveilTile_Neighbour(packed + 64);

	return true;
}

/**
 * Add spice on the given tile.
 * @param packed The tile.
 */
static void Map_AddSpiceOnTile(uint16 packed)
{
	Tile *t;

	t = &g_map[packed];

	switch (t->groundSpriteID) {
		case LST_SPICE:
			t->groundSpriteID = LST_THICK_SPICE;
			Map_AddSpiceOnTile(packed);
			return;

		case LST_THICK_SPICE: {
			int8 i;
			int8 j;

			for (j = -1; j <= 1; j++) {
				for (i = -1; i <= 1; i++) {
					Tile *t2;
					uint16 packed2 = Tile_PackXY(Tile_GetPackedX(packed) + i, Tile_GetPackedY(packed) + j);

					if (Tile_IsOutOfMap(packed2)) continue;

					t2 = &g_map[packed2];

					if (g_global->variable_3A3E[t2->groundSpriteID][9] == 0) {
						t->groundSpriteID = LST_SPICE;
						continue;
					}

					if (t2->groundSpriteID != LST_THICK_SPICE) t2->groundSpriteID = LST_SPICE;
				}
			}
			return;
		}

		default:
			if (g_global->variable_3A3E[t->groundSpriteID][9] != 0) t->groundSpriteID = LST_SPICE;
			return;
	}
}

static const uint16 _offsetTable[2][21][4] = {
	{
		{0, 0, 4, 0}, {4, 0, 4, 4}, {0, 0, 0, 4}, {0, 4, 4, 4}, {0, 0, 0, 2},
		{0, 2, 0, 4}, {0, 0, 2, 0}, {2, 0, 4, 0}, {4, 0, 4, 2}, {4, 2, 4, 4},
		{0, 4, 2, 4}, {2, 4, 4, 4}, {0, 0, 4, 4}, {2, 0, 2, 2}, {0, 0, 2, 2},
		{4, 0, 2, 2}, {0, 2, 2, 2}, {2, 2, 4, 2}, {2, 2, 0, 4}, {2, 2, 4, 4},
		{2, 2, 2, 4},
	},
	{
		{0, 0, 4, 0}, {4, 0, 4, 4}, {0, 0, 0, 4}, {0, 4, 4, 4}, {0, 0, 0, 2},
		{0, 2, 0, 4}, {0, 0, 2, 0}, {2, 0, 4, 0}, {4, 0, 4, 2}, {4, 2, 4, 4},
		{0, 4, 2, 4}, {2, 4, 4, 4}, {4, 0, 0, 4}, {2, 0, 2, 2}, {0, 0, 2, 2},
		{4, 0, 2, 2}, {0, 2, 2, 2}, {2, 2, 4, 2}, {2, 2, 0, 4}, {2, 2, 4, 4},
		{2, 2, 2, 4},
	},
};


/**
 * Creates the landscape using the given seed.
 * @param seed The seed.
 */
void Map_CreateLandscape(uint32 seed)
{
	static const int8 around[] = {0, -1, 1, -16, 16, -17, 17, -15, 15, -2, 2, -32, 32, -4, 4, -64, 64, -30, 30, -34, 34};

	uint16 i;
	uint16 j;
	uint16 k;
	uint8  memory[273];
	uint16 currentRow[64];
	uint16 previousRow[64];
	uint16 spriteID1;
	uint16 spriteID2;
	uint16 *iconMap;

	Tools_Random_Seed(seed);

	/* Place random data on a 4x4 grid. */
	for (i = 0; i < 272; i++) {
		memory[i] = Tools_Random_256() & 0xF;
		if (memory[i] > 0xA) memory[i] = 0xA;
	}

	i = (Tools_Random_256() & 0xF) + 1;
	while (i-- != 0) {
		int16 base = Tools_Random_256();

		for (j = 0; j < lengthof(around); j++) {
			int16 index = min(max(0, base + around[j]), 272);

			memory[index] = (memory[index] + (Tools_Random_256() & 0xF)) & 0xF;
		}
	}

	i = (Tools_Random_256() & 0x3) + 1;
	while (i-- != 0) {
		int16 base = Tools_Random_256();

		for (j = 0; j < lengthof(around); j++) {
			int16 index = min(max(0, base + around[j]), 272);

			memory[index] = Tools_Random_256() & 0x3;
		}
	}

	for (j = 0; j < 16; j++) {
		for (i = 0; i < 16; i++) {
			g_map[Tile_PackXY(i * 4, j * 4)].groundSpriteID = memory[j * 16 + i];
		}
	}

	/* Average around the 4x4 grid. */
	for (j = 0; j < 16; j++) {
		for (i = 0; i < 16; i++) {
			for (k = 0; k < 21; k++) {
				const uint16 *offsets = _offsetTable[(i + 1) % 2][k];
				uint16 packed1;
				uint16 packed2;
				uint16 packed;

				packed1 = Tile_PackXY(i * 4 + offsets[0], j * 4 + offsets[1]);
				packed2 = Tile_PackXY(i * 4 + offsets[2], j * 4 + offsets[3]);
				packed = (packed1 + packed2) / 2;

				if (Tile_IsOutOfMap(packed)) continue;

				packed1 = Tile_PackXY((i * 4 + offsets[0]) & 0x3F, j * 4 + offsets[1]);
				packed2 = Tile_PackXY((i * 4 + offsets[2]) & 0x3F, j * 4 + offsets[3]);

				g_map[packed].groundSpriteID = (g_map[packed1].groundSpriteID + g_map[packed2].groundSpriteID + 1) / 2;
			}
		}
	}

	memset(currentRow, 0, 128);

	/* Average each tile with its neighbours. */
	for (j = 0; j < 64; j++) {
		Tile *t = &g_map[j * 64];
		memcpy(previousRow, currentRow, 128);

		for (i = 0; i < 64; i++) currentRow[i] = t[i].groundSpriteID;

		for (i = 0; i < 64; i++) {
			uint16 neighbours[9];
			uint16 total = 0;

			neighbours[0] = (i == 0  || j == 0)  ? currentRow[i] : previousRow[i - 1];
			neighbours[1] = (           j == 0)  ? currentRow[i] : previousRow[i];
			neighbours[2] = (i == 63 || j == 0)  ? currentRow[i] : previousRow[i + 1];
			neighbours[3] = (i == 0)             ? currentRow[i] : currentRow[i - 1];
			neighbours[4] =                        currentRow[i];
			neighbours[5] = (i == 63)            ? currentRow[i] : currentRow[i + 1];
			neighbours[6] = (i == 0  || j == 63) ? currentRow[i] : t[i + 63].groundSpriteID;
			neighbours[7] = (           j == 63) ? currentRow[i] : t[i + 64].groundSpriteID;
			neighbours[8] = (i == 63 || j == 63) ? currentRow[i] : t[i + 65].groundSpriteID;

			for (k = 0; k < 9; k++) total += neighbours[k];
			t[i].groundSpriteID = total / 9;
		}
	}

	/* Filter each tile to determine its final type. */
	spriteID1 = Tools_Random_256() & 0xF;
	if (spriteID1 < 0x8) spriteID1 = 0x8;
	if (spriteID1 > 0xC) spriteID1 = 0xC;

	spriteID2 = (Tools_Random_256() & 0x3) - 1;
	if (spriteID2 > spriteID1 - 3) spriteID2 = spriteID1 - 3;

	for (i = 0; i < 4096; i++) {
		uint16 spriteID = g_map[i].groundSpriteID;

		if (spriteID > spriteID1 + 4) {
			spriteID = LST_ENTIRELY_MOUNTAIN;
		} else if (spriteID >= spriteID1) {
			spriteID = LST_ENTIRELY_ROCK;
		} else if (spriteID <= spriteID2) {
			spriteID = LST_ENTIRELY_DUNE;
		} else {
			spriteID = LST_NORMAL_SAND;
		}

		g_map[i].groundSpriteID = spriteID;
	}

	/* Add some spice. */
	i = Tools_Random_256() & 0x2F;
	while (i-- != 0) {
		tile32 tile;
		uint16 packed;

		while (true) {
			packed = Tools_Random_256() & 0x3F;
			packed = Tile_PackXY(Tools_Random_256() & 0x3F, packed);

			if (g_global->variable_3A3E[g_map[packed].groundSpriteID][9] != 0) break;
		}

		tile = Tile_UnpackTile(packed);

		j = Tools_Random_256() & 0x1F;
		while (j-- != 0) {
			while (true) {
				packed = Tile_PackTile(Tile_MoveByRandom(tile, Tools_Random_256() & 0x3F, true));

				if (!Tile_IsOutOfMap(packed)) break;
			}

			Map_AddSpiceOnTile(packed);
		}
	}

	/* Make everything smoother and use the right sprite indexes. */
	for (j = 0; j < 64; j++) {
		Tile *t = &g_map[j * 64];

		memcpy(previousRow, currentRow, 128);

		for (i = 0; i < 64; i++) currentRow[i] = t[i].groundSpriteID;

		for (i = 0; i < 64; i++) {
			uint16 current = t[i].groundSpriteID;
			uint16 up      = (j == 0)  ? current : previousRow[i];
			uint16 left    = (i == 63) ? current : currentRow[i + 1];
			uint16 down    = (j == 63) ? current : t[i + 64].groundSpriteID;
			uint16 right   = (i == 0)  ? current : currentRow[i - 1];
			uint16 spriteID = 0;

			if (up    == current) spriteID |= 1;
			if (left  == current) spriteID |= 2;
			if (down  == current) spriteID |= 4;
			if (right == current) spriteID |= 8;

			switch (current) {
				case LST_NORMAL_SAND:
					spriteID = 0;
					break;
				case LST_ENTIRELY_ROCK:
					if (up    == LST_ENTIRELY_MOUNTAIN) spriteID |= 1;
					if (left  == LST_ENTIRELY_MOUNTAIN) spriteID |= 2;
					if (down  == LST_ENTIRELY_MOUNTAIN) spriteID |= 4;
					if (right == LST_ENTIRELY_MOUNTAIN) spriteID |= 8;
					spriteID++;
					break;
				case LST_ENTIRELY_DUNE:
					spriteID += 17;
					break;
				case LST_ENTIRELY_MOUNTAIN:
					spriteID += 33;
					break;
				case LST_SPICE:
					if (up    == LST_THICK_SPICE) spriteID |= 1;
					if (left  == LST_THICK_SPICE) spriteID |= 2;
					if (down  == LST_THICK_SPICE) spriteID |= 4;
					if (right == LST_THICK_SPICE) spriteID |= 8;
					spriteID += 49;
					break;
				case LST_THICK_SPICE:
					spriteID += 65;
					break;
				default: break;
			}

			t[i].groundSpriteID = spriteID;
		}
	}

	/* Finalise the tiles with the real sprites. */
	iconMap = &g_iconMap[g_iconMap[ICM_ICONGROUP_LANDSCAPE]];

	for (i = 0; i < 4096; i++) {
		Tile *t = &g_map[i];

		t->groundSpriteID  = iconMap[t->groundSpriteID];
		t->overlaySpriteID = g_veiledSpriteID;
		t->houseID         = HOUSE_HARKONNEN;
		t->isUnveiled      = false;
		t->hasUnit         = false;
		t->hasStructure    = false;
		t->hasAnimation    = false;
		t->hasMapActivity  = false;
		t->index           = 0;
	}

	for (i = 0; i < 4096; i++) g_mapSpriteID[i] = g_map[i].groundSpriteID;
}
