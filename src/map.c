/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "map.h"
#include "structure.h"
#include "tile.h"
#include "unit.h"
#include "os/math.h"

extern void overlay();
extern void emu_GUI_DrawWiredRectangle();
extern void emu_Structure_UpdateMap();
extern void f__07D4_1625_001A_07E5();
extern void f__10E4_0117_0015_392D();
extern void f__1A34_0F48_0018_0DB8();
extern void f__24D0_000D_0039_C17D();
extern void f__2598_0000_0017_EB80();
extern void f__2B6C_0137_0020_C73F();
extern void f__2B6C_0169_001E_6939();
extern void f__B4CD_0000_0011_95D0();

uint16 *g_map = NULL;

/**
 * Initialize the map.
 *
 * @init System_Init_Map
 */
void System_Init_Map()
{
	g_map = (uint16 *)&emu_get_memory8(0x2E9C, 0x323F, 0x0);
}

Tile *Map_GetTileByPosition(uint16 position)
{
	return (Tile *)&emu_get_memory8(g_global->mapPointer.s.cs, g_global->mapPointer.s.ip, position * sizeof(Tile));
}

/**
 * Move the viewport position in the given direction.
 *
 * @param direction The direction to move in.
 * @return The new viewport position.
*/
uint16 Map_MoveDirection(uint16 direction)
{
	uint16 x, y;
	MapInfo *mapInfo;

	x = Tile_GetPackedX(g_global->minimapPosition) + g_global->mapScrollOffset[direction][0];
	y = Tile_GetPackedY(g_global->minimapPosition) + g_global->mapScrollOffset[direction][1];

	mapInfo = &g_global->mapInfo[g_global->scenario.mapScale];

	x = max(x, mapInfo->minX);
	y = max(y, mapInfo->minY);

	x = min(x, mapInfo->minX + mapInfo->sizeX);
	y = min(y, mapInfo->minY + mapInfo->sizeY);

	g_global->viewportPosition = Tile_PackXY(x, y);

	return g_global->viewportPosition;
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
		g_global->variable_38EC = Structure_IsValidBuildLocation(packed, g_global->activeStructureType);
		g_global->selectionPosition = packed;
		return;
	}

	if (Map_GetTileByPosition(packed)->fogOfWar != g_global->variable_39F2 || g_global->debugScenario != 0) {
		Structure *s;

		s = Structure_Get_ByPackedTile(packed);
		if (s != NULL) {
			StructureInfo *si;

			si = &g_structureInfo[s->type];
			if (s->houseID == g_global->playerHouseID || g_global->selectionType != 0) {
				emu_push(si->spriteID);
				emu_push(si->variable_2B);
				emu_push(emu_cs); emu_push(0x038B); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
				emu_sp += 4;
			}

			packed = Tile_PackTile(s->position);

			Map_SetSelectionSize(si->layout);

			emu_push(g_global->structureStartPos.s.cs); emu_push(g_global->structureStartPos.s.ip + s->index * sizeof(Structure));
			emu_push(emu_cs); emu_push(0x03CA); emu_cs = 0x0C3A; emu_Structure_UpdateMap();
			emu_sp += 4;
		} else {
			Map_SetSelectionSize(0);
		}

		if (g_global->selectionType != 1) {
			Unit *u;

			u = Unit_Get_ByPackedTile(packed);
			if (u != NULL) {
				if (u->type != UNIT_CARRYALL) {
					emu_push(g_global->unitStartPos.s.cs); emu_push(g_global->unitStartPos.s.ip + u->index * sizeof(Unit));
					emu_push(emu_cs); emu_push(0x0408); emu_cs = 0x1A34; f__1A34_0F48_0018_0DB8();
					emu_sp += 4;
				}
			} else {
				if (g_global->selectionUnit.csip != 0x0) {
					emu_push(0); emu_push(0);
					emu_push(emu_cs); emu_push(0x0420); emu_cs = 0x1A34; f__1A34_0F48_0018_0DB8();
					emu_sp += 4;
				}
			}
		}
		g_global->selectionPosition = packed;
		return;
	}

	Map_SetSelectionSize(0);
	g_global->selectionPosition = packed;
	return;
}

/**
 * Sets the selection size for the given layout.
 *
 * @param layout The layout to determine selection size from.
 * @return The previous layout.
 */
uint16 Map_SetSelectionSize(uint16 layout)
{
	uint16 oldLayout;
	uint16 oldPosition;

	oldLayout = g_global->selectionObjectLayout;
	if (layout & 0x80) return oldLayout;

	oldPosition = Map_SetSelectionObjectPosition(0xFFFF);

	g_global->selectionObjectLayout = layout;
	g_global->selectionWidth        = g_global->layoutSize[layout][0];
	g_global->selectionHeight       = g_global->layoutSize[layout][1];

	Map_SetSelectionObjectPosition(oldPosition);

	return oldLayout;
}

static void Map_InvalidateSelection(uint16 packed, bool enable)
{
	uint16 x, y;

	if (packed == 0xFFFF) return;

	for (y = 0; y < g_global->selectionHeight; y++) {
		for (x = 0; x < g_global->selectionWidth; x++) {
			uint16 curPacked, value;
			uint8 *dest;

			curPacked = packed + Tile_PackXY(x, y);

			emu_push(0);
			emu_push(0);
			emu_push(curPacked);
			emu_push(emu_cs); emu_push(0x023A); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0000_0011_95D0();
			emu_sp += 6;

			dest = &g_global->variable_95E5[curPacked >> 3];
			value = 1 << (curPacked & 0x7);

			if (enable) {
				*dest |= value;
			} else {
				*dest &= ~value;
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
	bool cleared;
	uint16 backup;

	if (packed != 0xFFFF && packed == g_global->minimapPreviousPosition && !forceUpdate) return;
	if (g_global->selectionType == 0) return;

	/* Change a value and store the old one. */
	emu_push(2);
	emu_push(emu_cs); emu_push(0x003D); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;
	backup = emu_ax;

	cleared = false;

	if (g_global->minimapPreviousPosition != 0xFFFF && g_global->minimapPreviousPosition != packed) {
		uint16 *m;

		cleared = true;

		for (m = g_global->variable_3566; *m != 0xFFFF; m++) {
			uint16 curPacked;

			curPacked = g_global->minimapPreviousPosition + *m;
			g_global->variable_93E5[curPacked >> 3] &= ~(1 << (curPacked & 0x7));

			emu_push(curPacked);
			emu_push(emu_cs); emu_push(0x008C); emu_cs = 0x07D4; f__07D4_1625_001A_07E5();
			emu_sp += 2;
		}
	}

	if (packed != 0xFFFF && (packed != g_global->minimapPreviousPosition || forceUpdate)) {
		uint16 *m;
		uint16 mapScale;
		MapInfo *mapInfo;
		uint16 left, top, right, bottom;

		mapScale = g_global->scenario.mapScale;
		mapInfo = &g_global->mapInfo[mapScale];

		left   = (Tile_GetPackedX(packed) - mapInfo->minX) * (mapScale + 1) + 256;
		right  = left + mapScale * 15 + 14;
		top    = (Tile_GetPackedY(packed) - mapInfo->minY) * (mapScale + 1) + 136;
		bottom = top + mapScale * 10 + 9;

		emu_push(15);
		emu_push(bottom);
		emu_push(right);
		emu_push(top);
		emu_push(left);
		emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x251B; emu_GUI_DrawWiredRectangle();
		emu_sp += 10;

		for (m = g_global->variable_3566; *m != 0xFFFF; m++) {
			uint16 curPacked;

			curPacked = packed + *m;
			g_global->variable_93E5[curPacked >> 3] |= (1 << (curPacked & 0x7));
		}
	}

	if (cleared && backup == 0) {
		emu_push(emu_cs); emu_push(0x0175); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();

		emu_push(0);
		emu_push(2);
		emu_push(64);
		emu_push(8);
		emu_push(136);
		emu_push(32);
		emu_push(136);
		emu_push(32);
		emu_push(emu_cs); emu_push(0x0199); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
		emu_sp += 16;

		emu_push(emu_cs); emu_push(0x01A1); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	}

	/* Restore the old value */
	emu_push(backup);
	emu_push(emu_cs); emu_push(0x01A9); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	emu_sp += 2;

	g_global->minimapPreviousPosition = packed;
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
	MapInfo *mapInfo;

	if ((position & 0xC000) != 0) return false;

	x = Tile_GetPackedX(position);
	y = Tile_GetPackedY(position);

	mapInfo = &g_global->mapInfo[g_global->scenario.mapScale];

	return (mapInfo->minX <= x && x < (mapInfo->minX + mapInfo->sizeX) && mapInfo->minY <= y && y < (mapInfo->minY + mapInfo->sizeY));
}
