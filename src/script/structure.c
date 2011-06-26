/* $Id$ */

/** @file src/script/structure.c %Structure script routines. */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "../global.h"

#include "script.h"

#include "../gui/gui.h"
#include "../house.h"
#include "../map.h"
#include "../pool/house.h"
#include "../pool/pool.h"
#include "../pool/structure.h"
#include "../pool/unit.h"
#include "../scenario.h"
#include "../sprites.h"
#include "../string.h"
#include "../structure.h"
#include "../tile.h"
#include "../tools.h"
#include "../unit.h"
#include "../unknown/unknown.h"


/**
 * Get the animation frame of the current structure.
 *
 * Stack: *none*
 *
 * @param script The script engine to operate on.
 * @return Animation frame of current structure.
 */
uint16 Script_Structure_GetAnimation(ScriptEngine *script)
{
	Structure *s;

	VARIABLE_NOT_USED(script);

	s = g_scriptCurrentStructure;
	return s->animation;
}

/**
 * Set the animation for the current structure.
 *
 * Stack: 0 - The animation.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Structure_SetAnimation(ScriptEngine *script)
{
	Structure *s;
	int16 animation;

	s = g_scriptCurrentStructure;
	animation = script->stack[script->stackPointer];

	if (animation == -2) {
		if (s->o.linkedID == 0xFF) {
			animation = 0;
		} else {
			if (s->countDown == 0) {
				animation = 2;
			} else {
				animation = 1;
			}
		}
	}

	Structure_SetAnimation(s, animation);

	return 0;
}

/**
 * Remove fog around the current structure.
 * Radius to uncover is taken from the current structure info.
 *
 * Stack: *none*
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Structure_RemoveFogAroundTile(ScriptEngine *script)
{
	const StructureInfo *si;
	Structure *s;

	VARIABLE_NOT_USED(script);

	s = g_scriptCurrentStructure;
	if (s->o.houseID != g_playerHouseID) return 0;

	si = &g_table_structureInfo[s->o.type];

	Tile_RemoveFogInRadius(s->o.position, si->o.fogUncoverRadius);

	return 0;
}

/**
 * Refine spice in the current structure.
 *
 * Stack: *none*
 *
 * @param script The script engine to operate on.
 * @return 0 if there is no spice to refine, otherwise 1.
 */
uint16 Script_Structure_RefineSpice(ScriptEngine *script)
{
	const StructureInfo *si;
	Structure *s;
	Unit *u;
	House *h;
	uint16 harvesterStep, creditsStep;

	VARIABLE_NOT_USED(script);

	s = g_scriptCurrentStructure;

	if (s->o.linkedID == 0xFF) {
		Structure_SetAnimation(s, 0);
		return 0;
	}

	u = Unit_Get_ByIndex(s->o.linkedID);
	si = &g_table_structureInfo[s->o.type];

	harvesterStep = (s->o.hitpoints * 256 / si->o.hitpoints) * 3 / 256;

	if (u->amount < harvesterStep) harvesterStep = u->amount;
	if (u->amount != 0 && harvesterStep < 1) harvesterStep = 1;
	if (harvesterStep == 0) return 0;

	creditsStep = 7;
	if (u->o.houseID != g_playerHouseID) {
		creditsStep += (Tools_Random_256() % 4) - 1;
	}

	creditsStep *= harvesterStep;

	if (House_AreAllied(g_playerHouseID, s->o.houseID)) {
		g_scenario.harvestedAllied += creditsStep;
		if (g_scenario.harvestedAllied > 0xFDE8) g_scenario.harvestedAllied = 0xFDE8;
	} else {
		g_scenario.harvestedEnemy += creditsStep;
		if (g_scenario.harvestedEnemy > 0xFDE8) g_scenario.harvestedEnemy = 0xFDE8;
	}

	h = House_Get_ByIndex(s->o.houseID);
	h->credits += creditsStep;
	u->amount -= harvesterStep;

	if (u->amount == 0) u->o.flags.s.inTransport = false;
	s->o.script.delay = 6;
	return 1;
}

/**
 * Unknown function 0A81.
 *
 * Stack: *none*
 *
 * @param script The script engine to operate on.
 * @return unknown.
 */
uint16 Script_Structure_Unknown0A81(ScriptEngine *script)
{
	uint16 structureIndex;
	Structure *s;
	Unit *u;

	VARIABLE_NOT_USED(script);

	s = g_scriptCurrentStructure;

	structureIndex = Tools_Index_Encode(s->o.index, IT_STRUCTURE);

	u = Tools_Index_GetUnit(s->o.script.variables[4]);
	if (u != NULL) {
		if (structureIndex == u->o.script.variables[4]) return s->o.script.variables[4];
		Object_Script_Variable4_Clear(&u->o);
	}

	Object_Script_Variable4_Clear(&s->o);

	return 0;
}

/**
 * Unknown function 0AFC.
 *
 * Stack: 0 - Unknown.
 *
 * @param script The script engine to operate on.
 * @return unknown.
 */
uint16 Script_Structure_Unknown0AFC(ScriptEngine *script)
{
	Structure *s;
	Unit *u;
	Unit *carryall;
	uint16 loc06;
	uint16 position;
	uint16 carryallIndex;

	s = g_scriptCurrentStructure;

	if (s->animation != 2) return IT_NONE;
	if (s->o.linkedID == 0xFF) return IT_NONE;

	loc06 = script->stack[script->stackPointer];

	position = Structure_FindFreePosition(s, false);

	u = Unit_Get_ByIndex(s->o.linkedID);

	if (g_playerHouseID == s->o.houseID && u->o.type == UNIT_HARVESTER && u->variable_5A.tile == 0 && position != 0) {
		return IT_NONE;
	}

	carryall = Unit_Unknown2BB5(loc06, s->o.houseID, Tools_Index_Encode(s->o.index, IT_STRUCTURE), position == 0);

	if (carryall == NULL) return IT_NONE;

	carryallIndex = Tools_Index_Encode(carryall->o.index, IT_UNIT);
	Object_Script_Variable4_Set(&s->o, carryallIndex);

	return carryallIndex;
}

/**
 * Unknown function 0C5A.
 *
 * Stack: *none*
 *
 * @param script The script engine to operate on.
 * @return unknown.
 */
uint16 Script_Structure_Unknown0C5A(ScriptEngine *script)
{
	tile32 tile;
	Structure *s;
	Unit *u;
	uint16 position;

	VARIABLE_NOT_USED(script);

	s = g_scriptCurrentStructure;

	if (s->o.linkedID == 0xFF) return 0;

	u = Unit_Get_ByIndex(s->o.linkedID);

	if (g_table_unitInfo[u->o.type].movementType == MOVEMENT_WINGER && Unit_SetPosition(u, s->o.position)) {
		s->o.linkedID = u->o.linkedID;
		u->o.linkedID = 0xFF;

		if (s->o.linkedID == 0xFF) Structure_SetAnimation(s, 0);
		Object_Script_Variable4_Clear(&s->o);

		if (s->o.houseID == g_playerHouseID) Sound_Unknown0363(g_playerHouseID + 49);

		return 1;
	}

	position = Structure_FindFreePosition(s, u->o.type == UNIT_HARVESTER);
	if (position == 0) return 0;

	u->o.variable_09 |= s->o.variable_09;

	tile = Tile_Center(Tile_UnpackTile(position));

	if (!Unit_SetPosition(u, tile)) return 0;

	s->o.linkedID = u->o.linkedID;
	u->o.linkedID = 0xFF;

	Unit_SetOrientation(u, Tile_GetDirection(s->o.position, u->o.position) & 0xE0, true, 0);
	Unit_SetOrientation(u, u->orientation[0].current, true, 1);

	if (u->o.houseID == g_playerHouseID) {
		GUI_DisplayHint(27, 0x6A);
	}

	if (s->o.linkedID == 0xFF) Structure_SetAnimation(s, 0);
	Object_Script_Variable4_Clear(&s->o);

	if (s->o.houseID != g_playerHouseID) return 1;
	if (s->o.type == STRUCTURE_REPAIR) return 1;

	Sound_Unknown0363(g_playerHouseID + ((u->o.type == UNIT_HARVESTER) ? 68 : 30));

	return 1;
}

/**
 * Find a Unit which is within range and not an ally.
 *
 * Stack: 0 - Range to find a target in (amount of tiles multiplied with 256).
 *
 * @param script The script engine to operate on.
 * @return The Unit Index of the closest unit within range and not friendly,
 *   or 0 if none exists.
 */
uint16 Script_Structure_FindTargetUnit(ScriptEngine *script)
{
	PoolFindStruct find;
	Structure *s;
	Unit *u;
	uint32 distanceCurrent;
	uint32 targetRange;

	s = g_scriptCurrentStructure;
	targetRange = script->stack[script->stackPointer];
	distanceCurrent = 32000;
	u = NULL;

	find.houseID = HOUSE_INVALID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		uint16 distance;
		Unit *uf;

		uf = Unit_Find(&find);
		if (uf == NULL) break;

		if (House_AreAllied(s->o.houseID, uf->o.houseID)) continue;

		if (uf->o.type != UNIT_ORNITHOPTER) {
			if ((uf->o.variable_09 & (1 << s->o.houseID)) == 0) continue;
		}

		distance = Tile_GetDistance(uf->o.position, s->o.position);
		if (distance >= distanceCurrent) continue;

		if (uf->o.type == UNIT_ORNITHOPTER) {
			if (distance >= targetRange * 3) continue;
		} else {
			if (distance >= targetRange) continue;
		}

		/* ENHANCEMENT -- The original code swapped the assignment, making it do nothing, Now it finds the closest unit to shoot at, what seems to be the intention */
		if (g_dune2_enhanced) distanceCurrent = distance;
		u = uf;
	}

	if (u == NULL) return IT_NONE;
	return Tools_Index_Encode(u->o.index, IT_UNIT);
}

/**
 * Rotate the turret to look at a tile.
 *
 * Stack: 0 - Tile to look at.
 *
 * @param script The script engine to operate on.
 * @return 0 if looking at target, otherwise 1.
 */
uint16 Script_Structure_RotateTurret(ScriptEngine *script)
{
	Structure *s;
	tile32 lookAt;
	Tile *tile;
	uint16 baseSpriteID;
	uint16 encoded;
	int16 rotation;
	int16 rotationNeeded;
	int16 rotateDiff;
	uint16 *iconMap = (uint16 *)emu_get_memorycsip(g_global->iconMap);

	encoded = script->stack[script->stackPointer];

	if (encoded == 0) return 0;

	s      = g_scriptCurrentStructure;
	lookAt = Tools_Index_GetTile(encoded);
	tile   = &g_map[Tile_PackTile(s->o.position)];

	/* Find the base sprite of the structure */
	if (s->o.type == STRUCTURE_ROCKET_TURRET) {
		baseSpriteID = iconMap[iconMap[ICM_ICONGROUP_BASE_ROCKET_TURRET] + 2];
	} else {
		baseSpriteID = iconMap[iconMap[ICM_ICONGROUP_BASE_DEFENSE_TURRET] + 2];
	}

	rotation = tile->groundSpriteID - baseSpriteID;
	if (rotation < 0 || rotation > 7) return 1;

	/* Find what rotation we should have to look at the target */
	rotationNeeded = Sprites_B4CD_17DC(Tile_GetDirection(s->o.position, lookAt));

	/* Do we need to rotate */
	if (rotationNeeded == rotation) return 0;

	/* Find the fastest way to rotate to the correct rotation */
	rotateDiff = rotationNeeded - rotation;
	if (rotateDiff < 0) rotateDiff += 8;

	if (rotateDiff < 4) {
		rotation++;
	} else {
		rotation--;
	}
	rotation &= 0x7;

	/* Set the new sprites */
	tile->groundSpriteID = baseSpriteID + rotation;
	s->variable_49 = rotation;

	Map_Update(Tile_PackTile(s->o.position), 0, false);

	return 1;
}

/**
 * Find the direction a tile is, seen from the structure. If the tile is
 *  invalid it gives the direction the structure is currently looking at.
 *
 * Stack: 0 - Tile to get the direction to, or the current direction of the
 *   structure in case the tile is invalid.
 *
 * @param script The script engine to operate on.
 * @return The direction (value between 0 and 7, shifted to the left with 5).
 */
uint16 Script_Structure_GetDirection(ScriptEngine *script)
{
	Structure *s;
	tile32 tile;
	uint16 encoded;

	s = g_scriptCurrentStructure;
	encoded = script->stack[script->stackPointer];

	if (!Tools_Index_IsValid(encoded)) return s->variable_49 << 5;

	tile = Tools_Index_GetTile(encoded);

	return Sprites_B4CD_17DC(Tile_GetDirection(s->o.position, tile)) << 5;
}

/**
 * Unknown function 11B9.
 *
 * Stack: *none*
 *
 * @param script The script engine to operate on.
 * @return unknown.
 */
uint16 Script_Structure_Unknown11B9(ScriptEngine *script)
{
	uint16 encoded;
	Unit *u;

	encoded = script->stack[script->stackPointer];

	if (!Tools_Index_IsValid(encoded)) return 0;
	if (Tools_Index_GetType(encoded) != IT_UNIT) return 0;

	u = Tools_Index_GetUnit(encoded);
	if (u == NULL) return 0;

	Object_Script_Variable4_Clear(&u->o);
	u->targetMove = 0;

	return 0;
}

/**
 * Play a voice on the structure.
 *
 * Stack: 0 - The VoiceID to play.
 *
 * @param script The script engine to operate on.
 * @return unknown.
 */
uint16 Script_Structure_VoicePlay(ScriptEngine *script)
{
	Structure *s;

	s = g_scriptCurrentStructure;

	if (s->o.houseID != g_playerHouseID) return 0;

	Voice_PlayAtTile(script->stack[script->stackPointer], s->o.position);

	return 0;
}

/**
 * Fire a bullet or missile from a (rocket) turret.
 *
 * Stack: *none*
 * Variables: 2 - Target to shoot at.
 *
 * @param script The script engine to operate on.
 * @return The time between this and the next time firing.
 */
uint16 Script_Structure_Fire(ScriptEngine *script)
{
	Structure *s;
	Unit *u;
	tile32 position;
	uint16 target;
	uint16 damage;
	uint16 fireDelay;
	uint16 type;

	s = g_scriptCurrentStructure;

	target = script->variables[2];
	if (target == 0) return 0;

	if (s->o.type == STRUCTURE_ROCKET_TURRET && Tile_GetDistance(Tools_Index_GetTile(target), s->o.position) >= 0x300) {
		type      = UNIT_MISSILE_TURRET;
		damage    = 30;
		fireDelay = Tools_AdjustToGameSpeed(g_table_unitInfo[UNIT_LAUNCHER].fireDelay, 1, 255, true);
	} else {
		type      = UNIT_BULLET;
		damage    = 20;
		fireDelay = Tools_AdjustToGameSpeed(g_table_unitInfo[UNIT_TANK].fireDelay, 1, 255, true);
	}

	position.tile = s->o.position.tile;
	position.s.x += 0x80;
	position.s.y += 0x80;
	u = Unit_CreateBullet(position, type, s->o.houseID, damage, target);

	if (u == NULL) return 0;

	u->originEncoded = Tools_Index_Encode(s->o.index, IT_STRUCTURE);

	return fireDelay;
}

/**
 * Unknown function 1524.
 *
 * Stack: *none*
 *
 * @param script The script engine to operate on.
 * @return unknown.
 */
uint16 Script_Structure_Unknown1524(ScriptEngine *script)
{
	Structure *s;
	uint16 position;
	uint16 layout;
	uint16 i;

	VARIABLE_NOT_USED(script);

	s = g_scriptCurrentStructure;
	layout = g_table_structureInfo[s->o.type].layout;
	position = Tile_PackTile(s->o.position);

	for (i = 0; i < g_global->layoutTileCount[layout]; i++) {
		tile32 tile;

		tile = Tile_UnpackTile(position + g_global->layoutTiles[layout][i]);

		Map_MakeExplosion(14, tile, 0, 0);
	}

	return 0;
}

/**
 * Destroy a structure and spawn soldiers around the place.
 *
 * Stack: *none*
 *
 * @param script The script engine to operate on.
 * @return Always 0.
 */
uint16 Script_Structure_Destroy(ScriptEngine *script)
{
	Structure *s;
	uint16 position;
	uint16 layout;
	uint16 i;

	VARIABLE_NOT_USED(script);

	s = g_scriptCurrentStructure;
	layout = g_table_structureInfo[s->o.type].layout;
	position = Tile_PackTile(s->o.position);

	Structure_0C3A_1002(s);

	for (i = 0; i < g_global->layoutTileCount[layout]; i++) {
		tile32 tile;
		Unit *u;

		tile = Tile_UnpackTile(position + g_global->layoutTiles[layout][i]);

		if (g_table_structureInfo[s->o.type].o.spawnChance < Tools_Random_256()) continue;

		u = Unit_Create(UNIT_INDEX_INVALID, UNIT_SOLDIER, s->o.houseID, tile, Tools_Random_256());
		if (u == NULL) continue;

		u->o.hitpoints = g_table_unitInfo[UNIT_SOLDIER].o.hitpoints * (Tools_Random_256() & 3) / 256;

		if (s->o.houseID != g_playerHouseID) {
			Unit_SetAction(u, ACTION_ATTACK);
			continue;
		}

		Unit_SetAction(u, ACTION_MOVE);

		tile = Tile_MoveByRandom(u->o.position, 32, true);

		u->targetMove = Tools_Index_Encode(Tile_PackTile(tile), IT_TILE);
	}

	if (g_global->debugScenario) return 0;
	if (s->o.houseID != g_playerHouseID) return 0;

	if (g_config.language == LANGUAGE_FRENCH) {
		GUI_DisplayText("%s %s %s", 0, String_Get_ByIndex(g_table_structureInfo[s->o.type].o.stringID_full), g_table_houseInfo[s->o.houseID].name, String_Get_ByIndex(0x85));
	} else {
		GUI_DisplayText("%s %s %s", 0, g_table_houseInfo[s->o.houseID].name, String_Get_ByIndex(g_table_structureInfo[s->o.type].o.stringID_full), String_Get_ByIndex(0x85));
	}

	return 0;
}
