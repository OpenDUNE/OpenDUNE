/* $Id$ */

/** @file src/script/team.c %Team script routines. */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../os/endian.h"
#include "../os/strings.h"

#include "script.h"

#include "../gui/gui.h"
#include "../house.h"
#include "../pool/team.h"
#include "../pool/pool.h"
#include "../pool/unit.h"
#include "../team.h"
#include "../tile.h"
#include "../tools.h"
#include "../unit.h"


/**
 * Gets the amount of members in the current team.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return Amount of members in current team.
 */
uint16 Script_Team_GetMembers(ScriptEngine *script)
{
	VARIABLE_NOT_USED(script);
	return g_scriptCurrentTeam->members;
}

/**
 * Gets the variable_06 of the current team.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The variable_06 of the current team.
 */
uint16 Script_Team_GetVariable6(ScriptEngine *script)
{
	VARIABLE_NOT_USED(script);
	return g_scriptCurrentTeam->variable_06;
}

/**
 * Gets the target for the current team.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The encoded target.
 */
uint16 Script_Team_GetTarget(ScriptEngine *script)
{
	VARIABLE_NOT_USED(script);
	return g_scriptCurrentTeam->target;
}

/**
 * Adds the closer unit to the current team.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The amount of space left in current team.
 */
uint16 Script_Team_AddCloserUnit(ScriptEngine *script)
{
	Team *t;
	Unit *closer = NULL;
	Unit *closer2 = NULL;
	uint16 minDistance = 0;
	uint16 minDistance2 = 0;
	PoolFindStruct find;

	VARIABLE_NOT_USED(script);

	t = g_scriptCurrentTeam;

	if (t->members >= t->maxMembers) return 0;

	find.houseID = t->houseID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Unit *u;
		Team *t2;
		uint16 distance;

		u = Unit_Find(&find);
		if (u == NULL) break;
		if (!u->o.flags.s.byScenario) continue;
		if (u->o.type == UNIT_SABOTEUR) continue;
		if (g_table_unitInfo[u->o.type].movementType != t->movementType) continue;
		if (u->team == 0) {
			distance = Tile_GetDistance(t->position, u->o.position);
			if (distance >= minDistance && minDistance != 0) continue;
			minDistance = distance;
			closer = u;
			continue;
		}

		t2 = Team_Get_ByIndex(u->team - 1);
		if (t2->members > t2->variable_06) continue;

		distance = Tile_GetDistance(t->position, u->o.position);
		if (distance >= minDistance2 && minDistance2 != 0) continue;
		minDistance2 = distance;
		closer2 = u;
	}

	if (closer == NULL) closer = closer2;
	if (closer == NULL) return 0;

	Unit_RemoveFromTeam(closer);
	return Unit_AddToTeam(closer, t);
}

/**
 * Gets the average distance between current team members.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The average distance.
 */
uint16 Script_Team_GetAverageDistance(ScriptEngine *script)
{
	uint16 count = 0;
	tile32 position;
	uint16 loc08 = 0;
	Team *t;
	PoolFindStruct find;

	VARIABLE_NOT_USED(script);

	position.tile = 0;

	t = g_scriptCurrentTeam;

	find.houseID = t->houseID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);
		if (u == NULL) break;
		if (t->index != u->team - 1) continue;
		count++;
		position.s.x += u->o.position.s.x;
		position.s.y += u->o.position.s.y;
	}

	if (count == 0) return 0;
	position.s.x /= count;
	position.s.y /= count;

	t->position.tile = Tile_GetSpecialXY(position);

	find.houseID = t->houseID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);
		if (u == NULL) break;
		if (t->index != u->team - 1) continue;
		loc08 += Tile_GetDistanceRoundedUp(u->o.position, t->position);
	}

	loc08 /= count;

	if (t->target == 0 || t->variable_18 == 0) return loc08;

	if (Tile_GetDistancePacked(Tile_PackTile(position), Tools_Index_GetPackedTile(t->target)) <= 10) t->variable_18 = 2;

	return loc08;
}

/**
 * Unknown function 0543.
 *
 * Stack: 0 - A distance.
 *
 * @param script The script engine to operate on.
 * @return The number of moving units.
 */
uint16 Script_Team_Unknown0543(ScriptEngine *script)
{
	Team *t;
	uint16 count = 0;
	uint16 distance;
	PoolFindStruct find;

	t = g_scriptCurrentTeam;
	distance = script->stack[script->stackPointer];

	find.houseID = t->houseID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Unit *u;
		tile32 tile;
		uint16 distanceUnitDest;
		uint16 distanceUnitTeam;
		uint16 distanceTeamDest;

		u = Unit_Find(&find);
		if (u == NULL) break;
		if (t->index != u->team - 1) continue;

		tile = Tools_Index_GetTile(u->targetMove);
		distanceUnitTeam = Tile_GetDistanceRoundedUp(u->o.position, t->position);

		if (u->targetMove != 0) {
			distanceUnitDest = Tile_GetDistanceRoundedUp(u->o.position, tile);
			distanceTeamDest = Tile_GetDistanceRoundedUp(t->position, tile);
		} else {
			distanceUnitDest = 64;
			distanceTeamDest = 64;
		}

		if ((distanceUnitDest < distanceTeamDest && (distance + 2) < distanceUnitTeam) || (distanceUnitDest >= distanceTeamDest && distanceUnitTeam > distance)) {
			Unit_SetAction(u, ACTION_MOVE);

			tile = Tile_MoveByRandom(t->position, distance << 4, true);

			Unit_SetDestination(u, Tools_Index_Encode(Tile_PackTile(tile), IT_TILE));
			count++;
			continue;
		}

		Unit_SetAction(u, ACTION_GUARD);
	}

	return count;
}

/**
 * Gets the best target for the current team.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The encoded index of the best target or 0 if none found.
 */
uint16 Script_Team_FindBestTarget(ScriptEngine *script)
{
	Team *t;
	PoolFindStruct find;

	VARIABLE_NOT_USED(script);

	t = g_scriptCurrentTeam;

	find.houseID = t->houseID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Unit *u;
		uint16 target;

		u = Unit_Find(&find);
		if (u == NULL) break;
		if (u->team - 1 != t->index) continue;
		target = Unit_FindBestTargetEncoded(u, t->variable_0C == 3 ? 4 : 0);
		if (target == 0) continue;
		if (t->target == target) return target;

		t->target = target;
		t->variable_18 = Tile_B4CD_1C1A(Tile_PackTile(u->o.position), Tools_Index_GetPackedTile(target));
		return target;
	}

	return 0;
}

/**
 * Loads a new script for the current team.
 *
 * Stack: 0 - The script type.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Team_Load(ScriptEngine *script)
{
	Team *t;
	uint16 type;

	t = g_scriptCurrentTeam;
	type = script->stack[script->stackPointer];

	if (t->variable_0C == type) return 0;

	t->variable_0C = type;

	Script_Reset(&t->script, g_scriptTeam);
	Script_Load(&t->script, type & 0xFF);

	return 0;
}

/**
 * Loads a new script for the current team.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Team_Load2(ScriptEngine *script)
{
	Team *t;
	uint16 type;

	VARIABLE_NOT_USED(script);

	t = g_scriptCurrentTeam;
	type = t->variable_0E;

	if (t->variable_0C == type) return 0;

	t->variable_0C = type;

	Script_Reset(&t->script, g_scriptTeam);
	Script_Load(&t->script, type & 0xFF);

	return 0;
}

/**
 * Unknown function 0788.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Team_Unknown0788(ScriptEngine *script)
{
	Team *t;
	tile32 tile;
	PoolFindStruct find;

	VARIABLE_NOT_USED(script);

	t = g_scriptCurrentTeam;
	if (t->target == 0) return 0;

	tile = Tools_Index_GetTile(t->target);

	find.houseID = t->houseID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Unit *u;
		uint16 distance;
		uint16 packed;
		int16 orientation;

		u = Unit_Find(&find);
		if (u == NULL) break;
		if (u->team - 1 != t->index) continue;
		if (t->target == 0) {
			Unit_SetAction(u, ACTION_GUARD);
			continue;
		}

		distance = g_table_unitInfo[u->o.type].variable_50 << 8;
		if (u->actionID == ACTION_ATTACK && u->targetAttack == t->target) {
			if (u->targetMove != 0) continue;
			if (Tile_GetDistance(u->o.position, tile) >= distance) continue;
		}

		if (u->actionID != ACTION_ATTACK) Unit_SetAction(u, ACTION_ATTACK);

		orientation = (Tile_GetDirection(tile, u->o.position) & 0xC0) + Tools_RandomRange(0, 127);
		if (orientation < 0) orientation += 256;

		packed = Tile_PackTile(Tile_MoveByDirection(tile, orientation, distance));

		if (Object_GetByPackedTile(packed) == NULL) {
			Unit_SetDestination(u, Tools_Index_Encode(packed, IT_TILE));
		} else {
			Unit_SetDestination(u, Tools_Index_Encode(Tile_PackTile(tile), IT_TILE));
		}

		Unit_SetTarget(u, t->target);
	}

	return 0;
}

/**
 * Draws a string.
 *
 * Stack: 0 - The index of the string to draw.
 *        1-3 - The arguments for the string.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Team_DisplayText(ScriptEngine *script)
{
	Team *t;
	csip32 text;
	uint16 offset;

	t = g_scriptCurrentTeam;
	if (t->houseID == g_playerHouseID) return 0;

	text = script->scriptInfo->text;

	offset = BETOH16(emu_get_memory16(text.s.cs, text.s.ip, script->stack[script->stackPointer] * 2));

	text.s.ip += offset;

	GUI_DisplayText((char *)emu_get_memorycsip(text), 0, script->stack[script->stackPointer + 1], script->stack[script->stackPointer + 2], script->stack[script->stackPointer + 3]);

	return 0;
}
