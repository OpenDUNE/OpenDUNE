/* $Id$ */

/** @file src/map.c Map routines. */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "os/math.h"

#include "map.h"

#include "animation.h"
#include "gui/gui.h"
#include "house.h"
#include "pool/pool.h"
#include "pool/unit.h"
#include "pool/house.h"
#include "pool/structure.h"
#include "structure.h"
#include "team.h"
#include "tools.h"
#include "tile.h"
#include "unit.h"
#include "unknown/unknown.h"


uint16 g_mapSpriteID[64 * 64];
Tile g_map[64 * 64];
uint8 g_functions[3][3] = {{0, 1, 0}, {2, 3, 0}, {0, 1, 0}};

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

	x = Tile_GetPackedX(g_global->minimapPosition) + g_global->mapScrollOffset[direction][0];
	y = Tile_GetPackedY(g_global->minimapPosition) + g_global->mapScrollOffset[direction][1];

	mapInfo = &g_mapInfos[g_global->scenario.mapScale];

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

	if (g_map[packed].overlaySpriteID != g_global->variable_39F2 || g_global->debugScenario != 0) {
		Structure *s;

		s = Structure_Get_ByPackedTile(packed);
		if (s != NULL) {
			const StructureInfo *si;

			si = &g_table_structureInfo[s->o.type];
			if (s->o.houseID == g_global->playerHouseID || g_global->selectionType != 0) {
				GUI_DisplayHint(si->o.hintStringID, si->o.spriteID);
			}

			packed = Tile_PackTile(s->o.position);

			Map_SetSelectionSize(si->layout);

			Structure_UpdateMap(s);
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
				if (g_unitSelected != NULL) {
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
	uint16 oldScreenID;

	if (packed != 0xFFFF && packed == g_global->minimapPreviousPosition && !forceUpdate) return;
	if (g_global->selectionType == 0) return;

	oldScreenID = GUI_Screen_SetActive(2);

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
		const MapInfo *mapInfo;
		uint16 left, top, right, bottom;

		mapScale = g_global->scenario.mapScale;
		mapInfo = &g_mapInfos[mapScale];

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

	if (cleared && oldScreenID == 0) {
		GUI_Mouse_Hide_Safe();
		GUI_Screen_Copy(32, 136, 32, 136, 8, 64, 2, 0);
		GUI_Mouse_Show_Safe();
	}

	GUI_Screen_SetActive(oldScreenID);

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
	const MapInfo *mapInfo;

	if ((position & 0xC000) != 0) return false;

	x = Tile_GetPackedX(position);
	y = Tile_GetPackedY(position);

	mapInfo = &g_mapInfos[g_global->scenario.mapScale];

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
		if (!tile->isUnveiled && !tile->hasStructure && !tile->hasUnit && !tile->hasAnimation && !tile->flag_10 && (g_mapSpriteID[i] & 0x8000) == 0 && g_mapSpriteID[i] == tile->groundSpriteID) continue;

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
		t->overlaySpriteID = g_global->variable_39F2 & 0x7F;
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

	if (g_global->debugScenario) return true;

	t = &g_map[position];

	if (!t->isUnveiled) return false;
	if (t->overlaySpriteID <= g_global->variable_39F2 && g_global->variable_39F2 <= t->overlaySpriteID + 15) return false;

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

static void Map_B4CD_04D9(uint16 arg06, struct_395A *s)
{
	if (s == NULL) return;

	if (arg06 == 1 && s->variable_07 != 0) return;

	s->variable_07 = (arg06 != 0) ? 1 : 0;

	Map_B4CD_057B(24, s->position, NULL, g_functions[2][arg06]);
}

static bool Map_06F7_072B(struct_395A *s)
{
	uint16 packed;
	uint16 type;
	Tile *t;
	uint16 loc06;
	uint16 overlaySpriteID;
	uint16 *icon;

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

	if (overlaySpriteID <= g_global->variable_39F2 && g_global->variable_39F2 <= overlaySpriteID + 15) return false;

	icon = (uint16 *)emu_get_memorycsip(g_global->iconMap);
	icon = &icon[icon[loc06]];
	if (icon[0] <= overlaySpriteID && overlaySpriteID <= icon[10]) {
		overlaySpriteID -= icon[0];
		if (overlaySpriteID < 4) overlaySpriteID += 2;
	} else {
		overlaySpriteID = Tools_Random_256() & 1;
	}

	Map_ChangeSpiceAmount(packed, -1);

	if (t->groundSpriteID == g_global->bloomSpriteID) {
		Map_B4CD_14CA(packed, (uint8)g_global->playerHouseID);
		return false;
	}

	t->overlaySpriteID = (overlaySpriteID + icon[0]) & 0x7F;

	Map_Update(packed, 0, false);

	return true;
}

static bool Map_06F7_08BD(struct_395A *s, uint16 voiceID)
{
	Voice_PlayAtTile(voiceID, s->position);

	return true;
}

static bool Map_06F7_08DD(struct_395A *s)
{
	VARIABLE_NOT_USED(s);
	return true;
}

static bool Map_06F7_0913(struct_395A *s)
{
	uint16 packed;

	packed = Tile_PackTile(s->position);

	if (g_map[packed].groundSpriteID != g_global->bloomSpriteID) return true;

	Map_B4CD_14CA(packed, (uint8)g_global->playerHouseID);

	return false;
}

static bool Map_06F7_0967(struct_395A *s, uint16 arg0A)
{
	csip32 proc;
	uint16 packed;

	packed = Tile_PackTile(s->position);

	if (Structure_Get_ByPackedTile(packed) != NULL) return true;

	proc.s.cs = 0x33C8;
	proc.s.ip = ((arg0A + (Tools_Random_256() & 0x1) + (g_global->variable_3A3E[Map_GetLandscapeType(packed)][7] != 0 ? 0 : 2)) << 4) + 256;

	Animation_Start(proc, s->position, 0, s->houseID, 3);

	return true;
}

static bool Map_06F7_09F4(struct_395A *s, uint16 arg0A)
{
	if ((arg0A & 0x800) != 0) arg0A |= 0xF000;
	s->position.s.x = arg0A;
	s->position.s.y = 0;
	return true;
}

static bool Map_06F7_0A27(struct_395A *s, uint16 arg0A)
{
	if ((arg0A & 0x800) != 0) arg0A |= 0xF000;
	s->position.s.x = 0;
	s->position.s.y = arg0A;
	return true;
}

static bool Map_06F7_0A5A(struct_395A *s)
{
	s->variable_09 = 0;
	return true;
}

static bool Map_06F7_0A6C(struct_395A *s)
{
	g_map[Tile_PackTile(s->position)].flag_10 = false;

	Map_B4CD_04D9(0, s);

	s->variable_0C.csip = 0x0;

	return false;
}

static bool Map_06F7_0AC1(struct_395A *s, uint16 arg0A)
{
	s->variable_00 = g_global->variable_76AC + arg0A;
	return true;
}

static bool Map_06F7_0AE2(struct_395A *s, uint16 arg0A)
{
	s->variable_00 = g_global->variable_76AC + Tools_RandomRange(0, arg0A);
	return true;
}

static bool Map_06F7_0B14(struct_395A *s, uint16 arg0A)
{
	s->variable_0A = arg0A;
	s->variable_08 = 0;

	Map_B4CD_04D9(2, s);

	return true;
}

static bool Map_06F7_0B42(struct_395A *s, uint16 arg0A)
{
	s->variable_0A = arg0A;
	s->variable_08 = 1;

	Map_B4CD_04D9(2, s);

	return true;
}

/**
 * ??.
 *
 * @param packed A packed position.
 * @return True if and only if something happened.
 */
static bool Map_06F7_057C(uint16 packed)
{
	Tile *t;
	uint8 i;

	t = &g_map[packed];

	if (!t->flag_10) return false;

	for (i = 0; i < 32; i++) {
		struct_395A *s;

		s = &((struct_395A *)emu_get_memorycsip(g_global->variable_395A))[i];

		if (s->variable_0C.csip == 0x0 || Tile_PackTile(s->position) != packed) continue;

		Map_06F7_0A6C(s);
	}

	return true;
}

/**
 * Init ??.
 *
 * @param csip The CSIP to use for init.
 * @param position The position to use for init.
 * @return True if and only if an init happened.
 */
static bool Map_06F7_0493(csip32 csip, tile32 position)
{
	uint16 packed;
	uint8 i;

	if (csip.csip == 0x0) return false;

	packed = Tile_PackTile(position);

	Map_06F7_057C(packed);

	for (i = 0; i < 32; i++) {
		struct_395A *s;

		s = &((struct_395A *)emu_get_memorycsip(g_global->variable_395A))[i];

		if (s->variable_0C.csip != 0x0) continue;

		s->variable_04 = i;
		s->variable_0C = csip;
		s->variable_09 = 0;
		s->variable_0A = 0;
		s->position    = position;
		s->variable_07 = 0;
		s->variable_00 = g_global->variable_76AC;
		g_global->variable_320E = 0;
		g_map[packed].flag_10 = true;
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

	if (Map_IsPositionUnveiled(packed)) t->overlaySpriteID = g_global->wallSpriteID & 0x7F;

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

	if (g_global->debugNoExplosionDamage == 0 && hitpoints != 0) {
		PoolFindStruct find;
		find.houseID = 0xFFFF;
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

			if (u->o.houseID == g_global->playerHouseID) continue;

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

	if (g_global->debugNoExplosionDamage == 0 && hitpoints != 0) {
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

	Map_06F7_0493(g_global->variable_3212[type], position);
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

	if (t->groundSpriteID == g_global->builtSlabSpriteID) return LST_CONCRETE_SLAB;

	if (t->groundSpriteID == g_global->bloomSpriteID || t->groundSpriteID == g_global->bloomSpriteID + 1) return LST_BLOOM_FIELD;

	if (t->groundSpriteID > g_global->wallSpriteID && t->groundSpriteID < (uint16)(g_global->wallSpriteID + 75)) return LST_WALL;

	if (t->overlaySpriteID == g_global->wallSpriteID) return LST_DESTROYED_WALL;

	if (Structure_Get_ByPackedTile(packed) != NULL) return LST_STRUCTURE;

	spriteOffset = t->groundSpriteID - g_global->landscapeSpriteID; /* Offset in the landscape icon group. */
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
			uint8 v;

			if ((g_global->variable_8DE5[packed >> 3] & (1 << (packed & 7))) != 0) return;

			g_global->variable_39E2++;

			for (i = 0; i < 9; i++) {
				curPacked = (packed + offsets[i]) & 0xFFF;
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

	Map_06F7_0493(g_global->variable_3212[type], position);


	find.type    = 0xFFFF;
	find.index   = 0xFFFF;
	find.houseID = 0xFFFF;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);

		if (u == NULL) break;
		if (Tile_GetDistance(position, u->o.position) / 16 >= radius) continue;

		Unit_Deviate(u, 0);
	}
}

/**
 * ??.
 *
 * @return g_global->variable_320E.
 */
uint32 Map_06F7_0602()
{
	uint8 i;

	if (g_global->variable_320E > g_global->variable_76AC) return g_global->variable_320E;

	g_global->variable_320E += 10000;

	for (i = 0; i < 32; i++) {
		struct_395A *s;

		s = &((struct_395A *)emu_get_memorycsip(g_global->variable_395A))[i];

		if (s->variable_0C.csip == 0x0) continue;

		if (s->variable_00 <= g_global->variable_76AC) {
			uint16 data;
			uint16 action;

			data = ((uint16 *)emu_get_memorycsip(s->variable_0C))[s->variable_09++];
			action = min((data >> 12) & 0xF, 0xE);
			data &= 0xFFF;

			switch(action) {
				case  1: Map_06F7_0B14(s, data); break;
				case  2: Map_06F7_0AC1(s, data); break;
				case  3: Map_06F7_0AE2(s, data); break;
				case  4: Map_06F7_0B42(s, data); break;
				case  5: Map_06F7_0A5A(s); break;
				case  6: Map_06F7_09F4(s, data); break;
				case  7: Map_06F7_0A27(s, data); break;
				case  8: Map_06F7_072B(s); break;
				case  9: Map_06F7_08BD(s, data); break;
				case 10: Map_06F7_08DD(s); break;
				case 11: Map_06F7_0967(s, data); break;
				case 13: Map_06F7_0913(s); break;
				default: Map_06F7_0A6C(s); break;
			}
		}

		if (s->variable_0C.csip == 0x0 || s->variable_00 > g_global->variable_320E) continue;

		g_global->variable_320E = s->variable_00;
	}

	return g_global->variable_320E;
}

void Map_B4CD_14CA(uint16 packed, uint8 houseID)
{
	if (g_global->variable_38BC == 0) {
		Unit_Unknown10EC(Unit_Get_ByPackedTile(packed));
		g_map[packed].groundSpriteID = g_mapSpriteID[packed] & 0x1FF;
		Map_MakeExplosion(0x13, Tile_UnpackTile(packed), 0, 0);
	}

	if (houseID == g_global->playerHouseID) Sound_Unknown0363(36);

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

			if (g_global->debugScenario == 0) continue;

			Unknown_07D4_02F8(curPacked);
		}
	}

	Map_ChangeSpiceAmount(packed, 1);
}

static void Map_B4CD_0C36(uint16 packed)
{
	uint16 type;
	uint16 spriteID;
	uint16 *iconMap;

	packed &= 0xFFF;
	type = Map_GetLandscapeType(packed);
	spriteID = 0;

	if (type == LST_SPICE || type == LST_THICK_SPICE) {
		uint8 i;

		for (i = 0; i < 4; i++) {
			uint16 curPacked = packed + g_global->variable_255E[i];
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

		iconMap = (uint16 *)emu_get_memorycsip(g_global->iconMap);
		spriteID = iconMap[iconMap[ICM_ICONGROUP_LANDSCAPE] + spriteID] & 0x1FF;
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
	uint16 *iconMap;

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

	iconMap = (uint16 *)emu_get_memorycsip(g_global->iconMap);
	spriteID = iconMap[iconMap[ICM_ICONGROUP_LANDSCAPE] + spriteID] & 0x1FF;
	g_mapSpriteID[packed] = 0x8000 | spriteID;
	g_map[packed].groundSpriteID = spriteID;

	Map_B4CD_0C36(packed);
	Map_B4CD_0C36(packed + 1);
	Map_B4CD_0C36(packed - 1);
	Map_B4CD_0C36(packed - 64);
	Map_B4CD_0C36(packed + 64);
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

	mapInfo = &g_mapInfos[g_global->scenario.mapScale];

	x = max(mapInfo->minX, min(mapInfo->minX + mapInfo->sizeX - 15, x));
	y = max(mapInfo->minY, min(mapInfo->minY + mapInfo->sizeY - 10, y));

	g_global->viewportPosition = Tile_PackXY(x, y);
}

void Map_B4CD_160C(uint16 packed, uint8 houseID)
{
	House *h;
	PoolFindStruct find;
	uint8 curHouseID;

	h = House_Get_ByIndex(houseID);

	g_map[packed].groundSpriteID = g_global->landscapeSpriteID & 0x1FF;
	g_mapSpriteID[packed] = 0x8000 | g_global->landscapeSpriteID;

	Map_Update(packed, 0, false);

	curHouseID = houseID;

	find.houseID = 0xFFFF;
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
	uint16 ret = 0;
	uint16 loc02;

	loc02 = g_global->variable_256E[g_global->scenario.mapScale];

	if (locationID == 6) {
		PoolFindStruct find;

		find.houseID = 0xFFFF;
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
				const MapInfo *mapInfo = &g_mapInfos[g_global->scenario.mapScale];
				ret = Tile_PackXY(mapInfo->minX + Tools_RandomRange(0, mapInfo->sizeX - 2), mapInfo->minY + loc02);
				break;
			}

			case 1:{
				const MapInfo *mapInfo = &g_mapInfos[g_global->scenario.mapScale];
				ret = Tile_PackXY(mapInfo->minX + mapInfo->sizeX - loc02, mapInfo->minY + Tools_RandomRange(0, mapInfo->sizeY - 2));
				break;
			}

			case 2: {
				const MapInfo *mapInfo = &g_mapInfos[g_global->scenario.mapScale];
				ret = Tile_PackXY(mapInfo->minX + Tools_RandomRange(0, mapInfo->sizeX - 2), mapInfo->minY + mapInfo->sizeY - loc02);
				break;
			}

			case 3: {
				const MapInfo *mapInfo = &g_mapInfos[g_global->scenario.mapScale];
				ret = Tile_PackXY(mapInfo->minX + loc02, mapInfo->minY + Tools_RandomRange(0, mapInfo->sizeY - 2));
				break;
			}

			case 4: {
				const MapInfo *mapInfo = &g_mapInfos[g_global->scenario.mapScale];
				ret = Tile_PackXY(mapInfo->minX + Tools_RandomRange(0, mapInfo->sizeX), mapInfo->minY + Tools_RandomRange(0, mapInfo->sizeY));
				if (houseID == g_global->playerHouseID && !Map_IsValidPosition(ret)) ret = 0;
				break;
			}

			case 5:
				ret = Tile_PackXY(Tile_GetPackedX(g_global->minimapPosition) + Tools_RandomRange(0, 14), Tile_GetPackedY(g_global->minimapPosition) + Tools_RandomRange(0, 9));
				if (houseID == g_global->playerHouseID && !Map_IsValidPosition(ret)) ret = 0;
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
						const MapInfo *mapInfo = &g_mapInfos[g_global->scenario.mapScale];
						ret = Tile_PackXY(mapInfo->minX + Tools_RandomRange(0, mapInfo->sizeX), mapInfo->minY + Tools_RandomRange(0, mapInfo->sizeY));
					}
				}

				if (houseID == g_global->playerHouseID && !Map_IsValidPosition(ret)) ret = 0;
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
				g_global->variable_8FE5[curPacked >> 3] |= (1 << (curPacked & 7));
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
				g_global->variable_8FE5[curPacked >> 3] |= (1 << (curPacked & 7));
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

		loc12 = emu_get_tile32(0x2DCE, (arg06 + 1) * 32, loc0A * 4);
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

	mapInfo = &g_mapInfos[g_global->scenario.mapScale];

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

		s = Structure_Get_ByPackedTile(g_global->selectionPosition);

		if (Map_IsTileVisible(Tile_PackTile(s->o.position))) selected = &s->o;
	}

	find.houseID = 0xFFFF;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);
		if (u == NULL) break;

		if (!g_table_unitInfo[u->o.type].o.flags.s.tabSelectable) continue;

		if (!Map_IsTileVisible(Tile_PackTile(u->o.position))) continue;

		if ((u->o.variable_09 & (1 << g_global->playerHouseID)) == 0) continue;

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

	find.houseID = 0xFFFF;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Structure *s;

		s = Structure_Find(&find);
		if (s == NULL) break;

		if (!Map_IsTileVisible(Tile_PackTile(s->o.position))) continue;

		if ((s->o.variable_09 & (1 << g_global->playerHouseID)) == 0) continue;

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

		if (g_global->variable_38BC == 0 && (t->overlaySpriteID > g_global->variable_39F2 || g_global->variable_39F2 > t->overlaySpriteID + 15)) return;

		spriteID = 0;

		for (i = 0; i < 4; i++) {
			uint16 neighbour = packed + g_global->variable_2566[i];

			if (Tile_IsOutOfMap(neighbour)) {
				spriteID |= 1 << i;
				continue;
			}

			if (!g_map[neighbour].isUnveiled) spriteID |= 1 << i;
		}
	}

	if (spriteID != 0) {
		uint16 *iconMap;

		if (spriteID != 15) {
			Unit *u = Unit_Get_ByPackedTile(packed);
			if (u != NULL) Unit_HouseUnitCount_Add(u, (uint8)g_global->playerHouseID);
		}

		iconMap = (uint16 *)emu_get_memorycsip(g_global->iconMap);
		spriteID = iconMap[iconMap[ICM_ICONGROUP_FOG_OF_WAR] + spriteID];
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

	if (houseID != g_global->playerHouseID) return false;
	if (Tile_IsOutOfMap(packed)) return false;

	t = &g_map[packed];

	if (t->isUnveiled && (t->overlaySpriteID > g_global->variable_39F2 || g_global->variable_39F2 > t->overlaySpriteID + 15)) return false;
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
		case 0x8: /* Spice (low) */
			t->groundSpriteID = 0x9;
			Map_AddSpiceOnTile(packed);
			return;

		case 0x9: { /* Spice (high) */
			int8 i;
			int8 j;

			for (j = -1; j <= 1; j++) {
				for (i = -1; i <= 1; i++) {
					Tile *t2;
					uint16 packed2 = Tile_PackXY(Tile_GetPackedX(packed) + i, Tile_GetPackedY(packed) + j);

					if (Tile_IsOutOfMap(packed2)) continue;

					t2 = &g_map[packed2];

					if (g_global->variable_3A3E[t2->groundSpriteID][9] == 0) {
						t->groundSpriteID = 0x8;
						continue;
					}

					if (t2->groundSpriteID != 0x9) t2->groundSpriteID = 0x8;
				}
			}
			return;
		}

		default:
			if (g_global->variable_3A3E[t->groundSpriteID][9] != 0) t->groundSpriteID = 0x8;
			return;
	}
}

/**
 * Creates the landscape using the given seed.
 * @param seed The seed.
 */
void Map_CreateLandscape(uint32 seed)
{
	uint16 i;
	uint16 j;
	uint16 k;
	uint8  memory[273];
	uint16 currentRow[64];
	uint16 previousRow[64];
	uint16 spriteID1;
	uint16 spriteID2;
	uint16 *iconMap;

	*(uint32 *)g_global->randomSeed = seed;

	/* Place random data on a 4x4 grid. */
	for (i = 0; i < 272; i++) {
		memory[i] = Tools_Random_256() & 0xF;
		if (memory[i] > 0xA) memory[i] = 0xA;
	}

	i = (Tools_Random_256() & 0xF) + 1;
	while (i-- != 0) {
		int16 base = Tools_Random_256();

		for (j = 0; j < 21; j++) {
			int16 index = min(max(0, base + g_global->variable_2006[j]), 272);

			memory[index] = (memory[index] + (Tools_Random_256() & 0xF)) & 0xF;
		}
	}

	i = (Tools_Random_256() & 0x3) + 1;
	while (i-- != 0) {
		int16 base = Tools_Random_256();

		for (j = 0; j < 21; j++) {
			int16 index = min(max(0, base + g_global->variable_2006[j]), 272);

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
				uint16 *offsets = g_global->variable_201B[(i + 1) % 2][k];
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
			spriteID = 0x6; /* Mountain */
		} else if (spriteID >= spriteID1) {
			spriteID = 0x4; /* Rock */
		} else if (spriteID <= spriteID2) {
			spriteID = 0x2; /* Dunes. */
		} else {
			spriteID = 0x0; /* Sand. */
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
				case 0x0: /* Sand */
					spriteID = 0;
					break;
				case 0x4: /* Rock */
					if (up    == 0x6) spriteID |= 1;
					if (left  == 0x6) spriteID |= 2;
					if (down  == 0x6) spriteID |= 4;
					if (right == 0x6) spriteID |= 8;
					spriteID++;
					break;
				case 0x2: /* Dunes */
					spriteID += 17;
					break;
				case 0x6: /* Mountains */
					spriteID += 33;
					break;
				case 0x8: /* Spice (low) */
					if (up    == 0x9) spriteID |= 1;
					if (left  == 0x9) spriteID |= 2;
					if (down  == 0x9) spriteID |= 4;
					if (right == 0x9) spriteID |= 8;
					spriteID += 49;
					break;
				case 0x9: /* Spice (high) */
					spriteID += 65;
					break;
				default: break;
			}

			t[i].groundSpriteID = spriteID;
		}
	}

	/* Finalise the tiles with the real sprites. */
	iconMap = (uint16 *)emu_get_memorycsip(g_global->iconMap);
	iconMap = &iconMap[iconMap[ICM_ICONGROUP_LANDSCAPE]];

	for (i = 0; i < 4096; i++) {
		Tile *t = &g_map[i];

		t->groundSpriteID  = iconMap[t->groundSpriteID];
		t->overlaySpriteID = g_global->variable_39F2 & 0x7F;
		t->houseID         = HOUSE_HARKONNEN;
		t->isUnveiled      = false;
		t->hasUnit         = false;
		t->hasStructure    = false;
		t->hasAnimation    = false;
		t->flag_10         = false;
		t->index           = 0;
	}

	for (i = 0; i < 4096; i++) g_mapSpriteID[i] = g_map[i].groundSpriteID;
}
