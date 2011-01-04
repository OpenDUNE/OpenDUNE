/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "gui/gui.h"
#include "house.h"
#include "map.h"
#include "os/math.h"
#include "pool/pool.h"
#include "pool/unit.h"
#include "structure.h"
#include "team.h"
#include "tools.h"
#include "tile.h"
#include "unit.h"
#include "unknown/unknown.h"

extern void emu_Structure_UpdateMap();
extern void f__06F7_0493_0015_AAB2();
extern void f__10E4_0117_0015_392D();
extern void f__1423_0E4F_0010_843C();
extern void f__24D0_000D_0039_C17D();
extern void f__2598_0000_0017_EB80();
extern void f__2B6C_0137_0020_C73F();
extern void f__2B6C_0169_001E_6939();
extern void f__B4CD_1CDA_000C_C72C();
extern void overlay(uint16 cs, uint8 force);

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

	x = min(x, mapInfo->minX + mapInfo->sizeX - 15);
	y = min(y, mapInfo->minY + mapInfo->sizeY - 10);

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

			si = &g_structureInfo[s->o.type];
			if (s->o.houseID == g_global->playerHouseID || g_global->selectionType != 0) {
				emu_push(si->spriteID);
				emu_push(si->variable_2B);
				emu_push(emu_cs); emu_push(0x038B); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
				emu_sp += 4;
			}

			packed = Tile_PackTile(s->o.position);

			Map_SetSelectionSize(si->layout);

			emu_push(g_global->structureStartPos.s.cs); emu_push(g_global->structureStartPos.s.ip + s->o.index * sizeof(Structure));
			emu_push(emu_cs); emu_push(0x03CA); emu_cs = 0x0C3A; emu_Structure_UpdateMap();
			emu_sp += 4;
		} else {
			Map_SetSelectionSize(0);
		}

		if (g_global->selectionType != 1) {
			Unit *u;

			u = Unit_Get_ByPackedTile(packed);
			if (u != NULL) {
				if (u->o.type != UNIT_CARRYALL) {
					Unit_Select(u);
				}
			} else {
				if (g_global->selectionUnit.csip != 0x0) {
					Unit_Select(NULL);
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

			Map_Update(curPacked, 0, false);

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

			Unknown_07D4_1625(curPacked);
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

		GUI_DrawWiredRectangle(left, top, right, bottom, 15);

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

/**
 * Save all Tiles to a file.
 * @param fp The file to save to.
 * @return True if and only if all bytes were written successful.
 */
bool Map_Save(FILE *fp)
{
	uint16 i;

	for (i = 0; i < 0x1000; i++) {
		Tile *tile = Map_GetTileByPosition(i);

		/* If there is nothing on the tile, not unveiled, and it is equal to the mapseed generated tile, don't store it */
		if (!tile->isUnveiled && !tile->hasStructure && !tile->hasUnit && !tile->flag_08 && !tile->flag_10 && (g_map[i] & 0x8000) == 0 && g_map[i] == tile->spriteID) continue;

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
		Tile *t = Map_GetTileByPosition(i);

		t->isUnveiled = false;
		t->fogOfWar = g_global->variable_39F2 & 0x7F;
	}

	while (length >= sizeof(uint16) + sizeof(Tile)) {
		Tile *t;

		length -= sizeof(uint16) + sizeof(Tile);

		if (fread(&i, sizeof(uint16), 1, fp) != 1) return false;
		if (i >= 0x1000) return false;

		t = Map_GetTileByPosition(i);
		if (fread(t, sizeof(Tile), 1, fp) != 1) return false;

		if (g_map[i] != t->spriteID) {
			g_map[i] |= 0x8000;
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

	if (g_global->debugScenario) return true;

	t = Map_GetTileByPosition(position);

	if (!t->isUnveiled) return false;
	if (t->fogOfWar <= g_global->variable_39F2 && g_global->variable_39F2 <= t->fogOfWar + 15) return false;

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

	x = (position.s.x >> 4) - (Tile_GetPackedX(g_global->viewportPosition) << 4);
	y = (position.s.y >> 4) - (Tile_GetPackedY(g_global->viewportPosition) << 4);

	if (retX != NULL) *retX = x;
	if (retY != NULL) *retY = y;

	return x >= -16 && x <= 256 && y >= -16 && y <= 176;
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

	if (g_global->debugNoExplosionDamage == 0 && hitpoints != 0) {
		PoolFindStruct find;
		find.houseID = 0xFFFF;
		find.index   = 0xFFFF;
		find.type    = 0xFFFF;

		while (true) {
			uint16 distance;
			Team *t;
			UnitInfo *ui;
			Unit *u;
			Unit *us;
			Unit *attack;

			u = Unit_Find(&find);
			if (u == NULL) break;

			ui = &g_unitInfo[u->o.type];

			distance = Tile_GetDistance(position, u->o.position) >> 4;
			if (distance >= reactionDistance) continue;

			if (!(u->o.type == UNIT_SANDWORM && type == 13) && u->o.type != UNIT_FRIGATE) {
				Unit_Damage(u, hitpoints >> (distance >> 2), 0);
			}

			if (u->o.houseID == g_global->playerHouseID) continue;

			us = Tools_Index_GetUnit(unitOriginEncoded);
			if (us == NULL) continue;
			if (us == u) continue;
			if (House_AreAllied(Unit_GetHouseID(u), Unit_GetHouseID(us))) continue;

			t = Unit_GetTeam(u);
			if (t != NULL) {
				UnitInfo *targetInfo;
				Unit *target;

				if (t->variable_0C == 1) {
					Unit_RemoveFromTeam(u);
					Unit_SetAction(u, ACTION_HUNT);
					continue;
				}

				target = Tools_Index_GetUnit(t->target);
				if (target == NULL) continue;

				targetInfo = &g_unitInfo[target->o.type];
				if (targetInfo->bulletType == 0xFFFF) t->target = unitOriginEncoded;
				continue;
			}

			if (u->o.type == UNIT_HARVESTER) {
				UnitInfo *uis = &g_unitInfo[us->o.type];

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

	if (g_global->debugNoExplosionDamage == 0 && hitpoints != 0) {
		Structure *s = Structure_Get_ByPackedTile(positionPacked);

		if (s != NULL) {
			if (type == 2) {
				StructureInfo *si = &g_structureInfo[s->o.type];

				if ((si->variable_1A >> 1) > s->o.hitpoints) {
					type = 15;
				}
			}

			emu_push(s->o.houseID);
			emu_push(emu_cs); emu_push(0x0367); emu_cs = 0x1423; f__1423_0E4F_0010_843C();
			emu_sp += 2;

			Structure_Damage(s, hitpoints, 0);
		}
	}

	if (Map_B4CD_0750(positionPacked) == 11 && hitpoints != 0) {
		uint16 loc22;

		loc22 = 0;
		if (g_structureInfo[STRUCTURE_TURRET].hitpoints <= hitpoints) {
			loc22 = 1;
		}

		if (loc22 == 0) {
			uint16 loc24 = hitpoints * 256 / g_structureInfo[STRUCTURE_TURRET].hitpoints;

			if (Tools_Random_256() <= loc24) {
				loc22 = 1;
			}
		}

		if (loc22 != 0) {
			emu_push(positionPacked);
			emu_push(emu_cs); emu_push(0x03DF); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1CDA_000C_C72C();
			emu_sp += 2;
		}
	}

	emu_push(position.s.y); emu_push(position.s.x);
	emu_push(g_global->variable_3212[type].s.cs); emu_push(g_global->variable_3212[type].s.ip);
	emu_push(emu_cs); emu_push(0x03F9); f__06F7_0493_0015_AAB2();
	emu_sp += 8;
}

/**
 * Get ??
 *
 * @param packed The packed tile to get ??
 * @return ??
 */
uint16 Map_B4CD_0750(uint16 packed)
{
	Tile *t;
	int16 locsi;

	t = Map_GetTileByPosition(packed);

	if (t->spriteID == g_global->variable_39F8) return 10;

	if (t->spriteID == g_global->variable_39F4 || t->spriteID == g_global->variable_39F4 + 1) return 14;

	if (t->spriteID > g_global->variable_39FA && t->spriteID < (uint16)(g_global->variable_39FA + 75)) return 11;

	if (t->fogOfWar == g_global->variable_39FA) return 13;

	if (Structure_Get_ByPackedTile(packed) != NULL) return 12;

	locsi = t->spriteID - g_global->variable_39F6;
	if (locsi < 0 || locsi > 82) return 4;

	return g_global->variable_24B8[locsi];
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
	x2 = Tile_GetPackedX(g_global->minimapPosition);
	y2 = Tile_GetPackedY(g_global->minimapPosition);

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
	if (!ignoreInvisible && !Map_IsTileVisible(packed)) return;

	switch (type) {
		default:
		case 0: {
			uint8 i;
			uint16 curPacked;
			uint8 v;

			if ((g_global->variable_8DE5[packed >> 3] & (1 << (packed & 7))) != 0) return;

			g_global->variable_39E2++;

			for (i = 0; i < 9; i++) {
				curPacked = (packed + g_global->variable_2462[i]) & 0xFFF;
				v = (1 << (curPacked & 7));
				g_global->variable_8FE5[curPacked >> 3] |= v;
				g_global->variable_3A08 |= g_global->variable_95E5[curPacked >> 3] & v;
			}

			g_global->variable_8DE5[curPacked >> 3] |= v;
			return;
		}

		case 1:
		case 2:
		case 3:
			g_global->variable_8FE5[packed >> 3] |= (1 << (packed & 7));
			return;
	}
}
