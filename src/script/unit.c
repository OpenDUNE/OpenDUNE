/** @file src/script/unit.c %Unit script routines. */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "types.h"
#include "../os/math.h"

#include "script.h"

#include "../animation.h"
#include "../audio/sound.h"
#include "../config.h"
#include "../explosion.h"
#include "../gui/gui.h"
#include "../house.h"
#include "../map.h"
#include "../opendune.h"
#include "../pool/unit.h"
#include "../pool/pool.h"
#include "../pool/structure.h"
#include "../scenario.h"
#include "../structure.h"
#include "../table/strings.h"
#include "../tools.h"
#include "../tile.h"
#include "../string.h"
#include "../unit.h"

typedef struct Pathfinder_Data {
	uint16 packed;                                          /*!< From where we are pathfinding. */
	 int16 score;                                           /*!< The total score for this route. */
	uint16 routeSize;                                       /*!< The size of this route. */
	uint8 *buffer;                                          /*!< A buffer to store the route. */
} Pathfinder_Data;

static const int16 s_mapDirection[8] = {-64, -63, 1, 65, 64, 63, -1, -65}; /*!< Tile index change when moving in a direction. */

/**
 * Create a new soldier unit.
 *
 * Stack: 1 - Action for the new Unit.
 *
 * @param script The script engine to operate on.
 * @return 1 if a new Unit has been created, 0 otherwise.
 */
uint16 Script_Unit_RandomSoldier(ScriptEngine *script)
{
	Unit *u;
	Unit *nu;
	tile32 position;

	u = g_scriptCurrentUnit;

	if (Tools_Random_256() >= g_table_unitInfo[u->o.type].o.spawnChance) return 0;

	position = Tile_MoveByRandom(u->o.position, 20, true);

	nu = Unit_Create(UNIT_INDEX_INVALID, UNIT_SOLDIER, u->o.houseID, position, Tools_Random_256());

	if (nu == NULL) return 0;

	nu->deviated = u->deviated;

	Unit_SetAction(nu, STACK_PEEK(1));

	return 1;
}

/**
 * Gets the best target for the current unit.
 *
 * Stack: 1 - How to determine the best target.
 *
 * @param script The script engine to operate on.
 * @return The encoded index of the best target or 0 if none found.
 */
uint16 Script_Unit_FindBestTarget(ScriptEngine *script)
{
	Unit *u;

	u = g_scriptCurrentUnit;

	return Unit_FindBestTargetEncoded(u, STACK_PEEK(1));
}

/**
 * Get the priority a target has for the current unit.
 *
 * Stack: 1 - The encoded target.
 *
 * @param script The script engine to operate on.
 * @return The priority of the target.
 */
uint16 Script_Unit_GetTargetPriority(ScriptEngine *script)
{
	Unit *u;
	Unit *target;
	Structure *s;
	uint16 encoded;

	u = g_scriptCurrentUnit;
	encoded = STACK_PEEK(1);

	target = Tools_Index_GetUnit(encoded);
	if (target != NULL) return Unit_GetTargetUnitPriority(u, target);

	s = Tools_Index_GetStructure(encoded);
	if (s == NULL) return 0;

	return Unit_GetTargetStructurePriority(u, s);
}

/**
 * Delivery of transport, either to structure or to a tile.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return One if delivered, zero otherwise..
 */
uint16 Script_Unit_TransportDeliver(ScriptEngine *script)
{
	Unit *u;
	Unit *u2;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;

	if (u->o.linkedID == 0xFF) return 0;
	if (Tools_Index_GetType(u->targetMove) == IT_UNIT) return 0;

	if (Tools_Index_GetType(u->targetMove) == IT_STRUCTURE) {
		const StructureInfo *si;
		Structure *s;

		s = Tools_Index_GetStructure(u->targetMove);
		si = &g_table_structureInfo[s->o.type];

		if (s->o.type == STRUCTURE_STARPORT) {
			uint16 ret = 0;

			if (s->state == STRUCTURE_STATE_BUSY) {
				s->o.linkedID = u->o.linkedID;
				u->o.linkedID = 0xFF;
				u->o.flags.s.inTransport = false;
				u->amount = 0;

				Unit_UpdateMap(2, u);

				Voice_PlayAtTile(24, u->o.position);

				Structure_SetState(s, STRUCTURE_STATE_READY);

				ret = 1;
			}

			Object_Script_Variable4_Clear(&u->o);
			u->targetMove = 0;

			return ret;
		}

		if ((s->state == STRUCTURE_STATE_IDLE || (si->o.flags.busyStateIsIncoming && s->state == STRUCTURE_STATE_BUSY)) && s->o.linkedID == 0xFF) {
			Voice_PlayAtTile(24, u->o.position);

			Unit_EnterStructure(Unit_Get_ByIndex(u->o.linkedID), s);

			Object_Script_Variable4_Clear(&u->o);
			u->targetMove = 0;

			u->o.linkedID = 0xFF;
			u->o.flags.s.inTransport = false;
			u->amount = 0;

			Unit_UpdateMap(2, u);

			return 1;
		}

		Object_Script_Variable4_Clear(&u->o);
		u->targetMove = 0;

		return 0;
	}

	if (!Map_IsValidPosition(Tile_PackTile(Tile_Center(u->o.position)))) return 0;

	u2 = Unit_Get_ByIndex(u->o.linkedID);

	if (!Unit_SetPosition(u2, Tile_Center(u->o.position))) return 0;

	if (u2->o.houseID == g_playerHouseID) {
		Voice_PlayAtTile(24, u->o.position);
	}

	Unit_SetOrientation(u2, u->orientation[0].current, true, 0);
	Unit_SetOrientation(u2, u->orientation[0].current, true, 1);
	Unit_SetSpeed(u2, 0);

	u->o.linkedID = u2->o.linkedID;
	u2->o.linkedID = 0xFF;

	if (u->o.linkedID != 0xFF) return 1;

	u->o.flags.s.inTransport = false;

	Object_Script_Variable4_Clear(&u->o);
	u->targetMove = 0;

	return 1;
}

/**
 * Pickup a unit (either from structure or on the map). The unit that does the
 *  picking up returns the unit to his last position.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_Pickup(ScriptEngine *script)
{
	Unit *u;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;

	if (u->o.linkedID != 0xFF) return 0;

	switch (Tools_Index_GetType(u->targetMove)) {
		case IT_STRUCTURE: {
			Structure *s;
			Unit *u2;

			s = Tools_Index_GetStructure(u->targetMove);

			/* There was nothing to pickup here */
			if (s->state != STRUCTURE_STATE_READY) {
				Object_Script_Variable4_Clear(&u->o);
				u->targetMove = 0;
				return 0;
			}

			u->o.flags.s.inTransport = true;

			Object_Script_Variable4_Clear(&u->o);
			u->targetMove = 0;

			u2 = Unit_Get_ByIndex(s->o.linkedID);

			/* Pickup the unit */
			u->o.linkedID = u2->o.index & 0xFF;
			s->o.linkedID = u2->o.linkedID;
			u2->o.linkedID = 0xFF;

			if (s->o.linkedID == 0xFF) Structure_SetState(s, STRUCTURE_STATE_IDLE);

			/* Check if the unit has a return-to position or try to find spice in case of a harvester */
			if (u2->targetLast.tile != 0) {
				u->targetMove = Tools_Index_Encode(Tile_PackTile(u2->targetLast), IT_TILE);
			} else if (u2->o.type == UNIT_HARVESTER && Unit_GetHouseID(u2) != g_playerHouseID) {
				u->targetMove = Tools_Index_Encode(Map_SearchSpice(Tile_PackTile(u->o.position), 20), IT_TILE);
			}

			Unit_UpdateMap(2, u);

			return 1;
		}

		case IT_UNIT: {
			Unit *u2;
			Structure *s = NULL;
			PoolFindStruct find;
			int16 minDistance = 0;

			u2 = Tools_Index_GetUnit(u->targetMove);

			if (!u2->o.flags.s.allocated) return 0;

			find.houseID = Unit_GetHouseID(u);
			find.index   = 0xFFFF;
			find.type    = 0xFFFF;

			/* Find closest refinery / repair station */
			while (true) {
				Structure *s2;
				int16 distance;

				s2 = Structure_Find(&find);
				if (s2 == NULL) break;

				distance = Tile_GetDistanceRoundedUp(s2->o.position, u->o.position);

				if (u2->o.type == UNIT_HARVESTER) {
					if (s2->o.type != STRUCTURE_REFINERY || s2->state != STRUCTURE_STATE_IDLE || s2->o.script.variables[4] != 0) continue;
					if (minDistance != 0 && distance >= minDistance) break;
					minDistance = distance;
					s = s2;
					break;
				}

				if (s2->o.type != STRUCTURE_REPAIR || s2->state != STRUCTURE_STATE_IDLE || s2->o.script.variables[4] != 0) continue;

				if (minDistance != 0 && distance >= minDistance) continue;
				minDistance = distance;
				s = s2;
			}

			if (s == NULL) return 0;

			/* Deselect the unit as it is about to be picked up */
			if (u2 == g_unitSelected) Unit_Select(NULL);

			/* Pickup the unit */
			u->o.linkedID = u2->o.index & 0xFF;
			u->o.flags.s.inTransport = true;

			Unit_UpdateMap(0, u2);

			Unit_Hide(u2);

			/* Set where we are going to */
			Object_Script_Variable4_Link(Tools_Index_Encode(u->o.index, IT_UNIT), Tools_Index_Encode(s->o.index, IT_STRUCTURE));
			u->targetMove = u->o.script.variables[4];

			Unit_UpdateMap(2, u);

			if (u2->o.type != UNIT_HARVESTER) return 0;

			/* Check if we want to return to this spice field later */
			if (Map_SearchSpice(Tile_PackTile(u2->o.position), 2) == 0) {
				u2->targetPreLast.tile = 0;
				u2->targetLast.tile    = 0;
			}

			return 0;
		}

		default: return 0;
	}
}

/**
 * Stop the Unit.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_Stop(ScriptEngine *script)
{
	Unit *u;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;

	Unit_SetSpeed(u, 0);

	Unit_UpdateMap(2, u);

	return 0;
}

/**
 * Set the speed of a Unit.
 *
 * Stack: 1 - The new speed of the Unit.
 *
 * @param script The script engine to operate on.
 * @return The new speed; it might differ from the value given.
 */
uint16 Script_Unit_SetSpeed(ScriptEngine *script)
{
	Unit *u;
	uint16 speed;

	u = g_scriptCurrentUnit;
	speed = STACK_PEEK(1);

	/* Scenario-based units move on a different speed */
	if (!u->o.flags.s.byScenario) speed = speed * 192 / 256;

	Unit_SetSpeed(u, speed);

	return u->speed;
}

/**
 * Change the sprite (offset) of the unit.
 *
 * Stack: 1 - The new sprite offset.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_SetSprite(ScriptEngine *script)
{
	Unit *u;

	u = g_scriptCurrentUnit;

	u->spriteOffset = -(STACK_PEEK(1) & 0xFF);

	Unit_UpdateMap(2, u);

	return 0;
}

/**
 * Move the Unit to the target, and keep repeating this function till we
 *  arrived there. When closing in on the target it will slow down the Unit.
 * It is wise to only use this function on Carry-Alls.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return 1 if arrived, 0 if still busy.
 */
uint16 Script_Unit_MoveToTarget(ScriptEngine *script)
{
	Unit *u;
	uint16 delay;
	tile32 tile;
	uint16 distance;
	int8 orientation;
	int16 diff;

	u = g_scriptCurrentUnit;

	if (u->targetMove == 0) return 0;

	tile = Tools_Index_GetTile(u->targetMove);

	distance = Tile_GetDistance(u->o.position, tile);

	if ((int16)distance < 128) {
		Unit_SetSpeed(u, 0);

		u->o.position.s.x += clamp((int16)(tile.s.x - u->o.position.s.x), -16, 16);
		u->o.position.s.y += clamp((int16)(tile.s.y - u->o.position.s.y), -16, 16);

		Unit_UpdateMap(2, u);

		if ((int16)distance < 32) return 1;

		script->delay = 2;

		script->script--;
		return 0;
	}

	orientation = Tile_GetDirection(u->o.position, tile);

	Unit_SetOrientation(u, orientation, false, 0);

	diff = abs(orientation - u->orientation[0].current);

	Unit_SetSpeed(u, max(min(distance / 8, 255), 25) * (255 - diff) / 256);

	delay = max((int16)distance / 1024, 1);

	Unit_UpdateMap(2, u);

	if (delay != 0) {
		script->delay = delay;

		script->script--;
	}

	return 0;
}

/**
 * Kill a unit. When it was a saboteur, expect a big explosion.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_Die(ScriptEngine *script)
{
	const UnitInfo *ui;
	Unit *u;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;
	ui = &g_table_unitInfo[u->o.type];

	Unit_Remove(u);

	if (ui->movementType != MOVEMENT_WINGER) {
		uint16 credits;

		credits = max(ui->o.buildCredits / 100, 1);

		if (u->o.houseID == g_playerHouseID) {
			g_scenario.killedAllied++;
			g_scenario.score -= credits;
		} else {
			g_scenario.killedEnemy++;
			g_scenario.score += credits;
		}
	}

	Unit_HouseUnitCount_Remove(u);

	if (u->o.type != UNIT_SABOTEUR) return 0;

	Map_MakeExplosion(EXPLOSION_SABOTEUR_DEATH, u->o.position, 300, 0);
	return 0;
}

/**
 * Make an explosion at the coordinates of the unit.
 *  It does damage to the surrounding units based on the unit.
 *
 * Stack: 1 - Explosion type
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_ExplosionSingle(ScriptEngine *script)
{
	Unit *u;

	u = g_scriptCurrentUnit;

	Map_MakeExplosion(STACK_PEEK(1), u->o.position, g_table_unitInfo[u->o.type].o.hitpoints, Tools_Index_Encode(u->o.index, IT_UNIT));
	return 0;
}

/**
 * Make 8 explosions: 1 at the unit, and 7 around him.
 * It does damage to the surrounding units with predefined damage, but
 *  anonymous.
 *
 * Stack: 1 - The radius of the 7 explosions.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_ExplosionMultiple(ScriptEngine *script)
{
	Unit *u;
	uint8 i;

	u = g_scriptCurrentUnit;

	Map_MakeExplosion(EXPLOSION_DEATH_HAND, u->o.position, Tools_RandomLCG_Range(25, 50), 0);

	for (i = 0; i < 7; i++) {
		Map_MakeExplosion(EXPLOSION_DEATH_HAND, Tile_MoveByRandom(u->o.position, STACK_PEEK(1), false), Tools_RandomLCG_Range(75, 150), 0);
	}

	return 0;
}

/**
 * Makes the current unit fire a bullet (or eat its target).
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 1 if the current unit fired/eat, 0 otherwise.
 */
uint16 Script_Unit_Fire(ScriptEngine *script)
{
	const UnitInfo *ui;
	Unit *u;
	uint16 target;
	UnitType typeID;
	uint16 distance;
	bool fireTwice;
	uint16 damage;

	u = g_scriptCurrentUnit;

	target = u->targetAttack;
	if (target == 0 || !Tools_Index_IsValid(target)) return 0;

	if (u->o.type != UNIT_SANDWORM && target == Tools_Index_Encode(Tile_PackTile(u->o.position), IT_TILE)) u->targetAttack = 0;

	if (u->targetAttack != target) {
		Unit_SetTarget(u, target);
		return 0;
	}

	ui = &g_table_unitInfo[u->o.type];

	if (u->o.type != UNIT_SANDWORM && u->orientation[ui->o.flags.hasTurret ? 1 : 0].speed != 0) return 0;

	if (Tools_Index_GetType(target) == IT_TILE && Object_GetByPackedTile(Tools_Index_GetPackedTile(target)) != NULL) Unit_SetTarget(u, target);

	if (u->fireDelay != 0) return 0;

	distance = Object_GetDistanceToEncoded(&u->o, target);

	if ((int16)(ui->fireDistance << 8) < (int16)distance) return 0;

	if (u->o.type != UNIT_SANDWORM && (Tools_Index_GetType(target) != IT_UNIT || g_table_unitInfo[Tools_Index_GetUnit(target)->o.type].movementType != MOVEMENT_WINGER)) {
		int16 diff = 0;
		int8 orientation;

		orientation = Tile_GetDirection(u->o.position, Tools_Index_GetTile(target));

		diff = abs(u->orientation[ui->o.flags.hasTurret ? 1 : 0].current - orientation);
		if (ui->movementType == MOVEMENT_WINGER) diff /= 8;

		if (diff >= 8) return 0;
	}

	damage = ui->damage;
	typeID = ui->bulletType;

	fireTwice = ui->flags.firesTwice && u->o.hitpoints > ui->o.hitpoints / 2;

	if ((u->o.type == UNIT_TROOPERS || u->o.type == UNIT_TROOPER) && (int16)distance > 512) typeID = UNIT_MISSILE_TROOPER;

	switch (typeID) {
		case UNIT_SANDWORM: {
			Unit *u2;

			Unit_UpdateMap(0, u);

			u2 = Tools_Index_GetUnit(target);

			if (u2 != NULL) {
				u2->o.script.variables[1] = 0xFFFF;
				Unit_RemovePlayer(u2);
				Unit_HouseUnitCount_Remove(u2);
				Unit_Remove(u2);
			}

			Map_MakeExplosion(ui->explosionType, u->o.position, 0, 0);

			Voice_PlayAtTile(63, u->o.position);

			Unit_UpdateMap(1, u);

			u->amount--;

			script->delay = 12;

			if ((int8)u->amount < 1) Unit_SetAction(u, ACTION_DIE);
		} break;

		case UNIT_MISSILE_TROOPER:
			damage -= damage / 4;
			/* FALL-THROUGH */

		case UNIT_MISSILE_ROCKET:
		case UNIT_MISSILE_TURRET:
		case UNIT_MISSILE_DEVIATOR:
		case UNIT_BULLET:
		case UNIT_SONIC_BLAST: {
			Unit *bullet;

			bullet = Unit_CreateBullet(u->o.position, typeID, Unit_GetHouseID(u), damage, target);

			if (bullet == NULL) return 0;

			bullet->originEncoded = Tools_Index_Encode(u->o.index, IT_UNIT);

			Voice_PlayAtTile(ui->bulletSound, u->o.position);

			Unit_Deviation_Decrease(u, 20);
		} break;

		default: break;
	}

	u->fireDelay = Tools_AdjustToGameSpeed(ui->fireDelay * 2, 1, 0xFFFF, true);

	if (fireTwice) {
		u->o.flags.s.fireTwiceFlip = !u->o.flags.s.fireTwiceFlip;
		if (u->o.flags.s.fireTwiceFlip) u->fireDelay = Tools_AdjustToGameSpeed(5, 1, 10, true);
	} else {
		u->o.flags.s.fireTwiceFlip = false;
	}

	u->fireDelay += Tools_Random_256() & 1;

	Unit_UpdateMap(2, u);

	return 1;
}

/**
 * Set the orientation of a unit.
 *
 * Stack: 1 - New orientation for unit.
 *
 * @param script The script engine to operate on.
 * @return The current orientation of the unit (it will move to the requested over time).
 */
uint16 Script_Unit_SetOrientation(ScriptEngine *script)
{
	Unit *u;

	u = g_scriptCurrentUnit;

	Unit_SetOrientation(u, (int8)STACK_PEEK(1), false, 0);

	return u->orientation[0].current;
}

/**
 * Rotate the unit to aim at the enemy.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return 0 if the enemy is no longer there or if we are looking at him, 1 otherwise.
 */
uint16 Script_Unit_Rotate(ScriptEngine *script)
{
	const UnitInfo *ui;
	Unit *u;
	uint16 index;
	int8 current;
	tile32 tile;
	int8 orientation;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;
	ui = &g_table_unitInfo[u->o.type];

	if (ui->movementType != MOVEMENT_WINGER && u->currentDestination.tile != 0) return 1;

	index = ui->o.flags.hasTurret ? 1 : 0;

	/* Check if we are already rotating */
	if (u->orientation[index].speed != 0) return 1;
	current = u->orientation[index].current;

	if (!Tools_Index_IsValid(u->targetAttack)) return 0;

	/* Check where we should rotate to */
	tile = Tools_Index_GetTile(u->targetAttack);
	orientation = Tile_GetDirection(u->o.position, tile);

	/* If we aren't already looking at it, rotate */
	if (orientation == current) return 0;
	Unit_SetOrientation(u, orientation, false, index);

	return 1;
}

/**
 * Get the direction to a tile or our current direction.
 *
 * Stack: 1 - An encoded tile to get the direction to.
 *
 * @param script The script engine to operate on.
 * @return The direction to the encoded tile if valid, otherwise our current orientation.
 */
uint16 Script_Unit_GetOrientation(ScriptEngine *script)
{
	Unit *u;
	uint16 encoded;

	u = g_scriptCurrentUnit;
	encoded = STACK_PEEK(1);

	if (Tools_Index_IsValid(encoded)) {
		tile32 tile;

		tile = Tools_Index_GetTile(encoded);

		return Tile_GetDirection(u->o.position, tile);
	}

	return u->orientation[0].current;
}

/**
 * Set the new destination of the unit.
 *
 * Stack: 1 - An encoded index where to move to.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_SetDestination(ScriptEngine *script)
{
	Unit *u;
	uint16 encoded;

	u = g_scriptCurrentUnit;
	encoded = STACK_PEEK(1);

	if (encoded == 0 || !Tools_Index_IsValid(encoded)) {
		u->targetMove = 0;
		return 0;
	}

	if (u->o.type == UNIT_HARVESTER) {
		Structure *s;

		s = Tools_Index_GetStructure(encoded);
		if (s == NULL) {
			u->targetMove = encoded;
			u->route[0] = 0xFF;
			return 0;
		}

		if (s->o.script.variables[4] != 0) return 0;
	}

	Unit_SetDestination(u, encoded);
	return 0;
}

/**
 * Set a new target, and rotate towards him if needed.
 *
 * Stack: 1 - An encoded tile of the unit/tile to target.
 *
 * @param script The script engine to operate on.
 * @return The new target.
 */
uint16 Script_Unit_SetTarget(ScriptEngine *script)
{
	Unit *u;
	uint16 target;
	tile32 tile;
	int8 orientation;

	u = g_scriptCurrentUnit;

	target = STACK_PEEK(1);

	if (target == 0 || !Tools_Index_IsValid(target)) {
		u->targetAttack = 0;
		return 0;
	}

	tile = Tools_Index_GetTile(target);

	orientation = Tile_GetDirection(u->o.position, tile);

	u->targetAttack = target;
	if (!g_table_unitInfo[u->o.type].o.flags.hasTurret) {
		u->targetMove = target;
		Unit_SetOrientation(u, orientation, false, 0);
	}
	Unit_SetOrientation(u, orientation, false, 1);

	return u->targetAttack;
}

/**
 * Sets the action for the current unit.
 *
 * Stack: 1 - The action.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_SetAction(ScriptEngine *script)
{
	Unit *u;
	ActionType action;

	u = g_scriptCurrentUnit;

	action = STACK_PEEK(1);

	if (u->o.houseID == g_playerHouseID && action == ACTION_HARVEST && u->nextActionID != ACTION_INVALID) return 0;

	Unit_SetAction(u, action);

	return 0;
}

/**
 * Sets the action for the current unit to default.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_SetActionDefault(ScriptEngine *script)
{
	Unit *u;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;

	Unit_SetAction(u, g_table_unitInfo[u->o.type].o.actionsPlayer[3]);

	return 0;
}

/**
 * Set the current destination of a Unit, bypassing any pathfinding.
 * It is wise to only use this function on Carry-Alls.
 *
 * Stack: 1 - An encoded tile, the destination.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_SetDestinationDirect(ScriptEngine *script)
{
	Unit *u;
	uint16 encoded;

	encoded = STACK_PEEK(1);

	if (!Tools_Index_IsValid(encoded)) return 0;

	u = g_scriptCurrentUnit;

	if (u->currentDestination.tile == 0 || g_table_unitInfo[u->o.type].flags.isNormalUnit) {
		u->currentDestination = Tools_Index_GetTile(encoded);
	}

	Unit_SetOrientation(u, Tile_GetDirection(u->o.position, u->currentDestination), false, 0);

	return 0;
}

/**
 * Get information about the unit, like hitpoints, current target, etc.
 *
 * Stack: 1 - Which information you would like.
 *
 * @param script The script engine to operate on.
 * @return The information you requested.
 */
uint16 Script_Unit_GetInfo(ScriptEngine *script)
{
	const UnitInfo *ui;
	Unit *u;

	u = g_scriptCurrentUnit;
	ui = &g_table_unitInfo[u->o.type];

	switch (STACK_PEEK(1)) {
		case 0x00: return u->o.hitpoints * 256 / ui->o.hitpoints;
		case 0x01: return Tools_Index_IsValid(u->targetMove) ? u->targetMove : 0;
		case 0x02: return ui->fireDistance << 8;
		case 0x03: return u->o.index;
		case 0x04: return u->orientation[0].current;
		case 0x05: return u->targetAttack;
		case 0x06:
			if (u->originEncoded == 0 || u->o.type == UNIT_HARVESTER) Unit_FindClosestRefinery(u);
			return u->originEncoded;
		case 0x07: return u->o.type;
		case 0x08: return Tools_Index_Encode(u->o.index, IT_UNIT);
		case 0x09: return u->movingSpeed;
		case 0x0A: return abs(u->orientation[0].target - u->orientation[0].current);
		case 0x0B: return u->currentDestination.tile == 0 ? 0 : 1;
		case 0x0C: return u->fireDelay == 0 ? 1 : 0;
		case 0x0D: return ui->flags.explodeOnDeath;
		case 0x0E: return Unit_GetHouseID(u);
		case 0x0F: return u->o.flags.s.byScenario ? 1 : 0;
		case 0x10: return u->orientation[ui->o.flags.hasTurret ? 1 : 0].current;
		case 0x11: return abs(u->orientation[ui->o.flags.hasTurret ? 1 : 0].target - u->orientation[ui->o.flags.hasTurret ? 1 : 0].current);
		case 0x12: return (ui->movementType & 0x40) == 0 ? 0 : 1;
		case 0x13: return (u->o.seenByHouses & (1 << g_playerHouseID)) == 0 ? 0 : 1;
		default:   return 0;
	}
}

/**
 * Get the score to enter this tile from a direction.
 *
 * @param packed The packed tile.
 * @param direction The direction we move on this tile.
 * @return 256 if tile is not accessable, or a score for entering otherwise.
 */
static int16 Script_Unit_Pathfind_GetScore(uint16 packed, uint8 direction)
{
	int16 res;
	Unit *u;

	if (g_scriptCurrentUnit == NULL) return 0;

	u = g_scriptCurrentUnit;

	res = Unit_GetTileEnterScore(u, packed, direction << 5);

	if (res == -1) res = 256;

	return res;
}

/**
 * Smoothen the route found by the pathfinder.
 * @param data The found route to smoothen.
 */
static void Script_Unit_Pathfinder_Smoothen(Pathfinder_Data *data)
{
	static const int8 directionOffset[8] = {0, 0, 1, 2, 3, -2, -1, 0};

	uint16 packed;
	uint8 *bufferFrom;
	uint8 *bufferTo;

	data->buffer[data->routeSize] = 0xFF;
	packed = data->packed;

	if (data->routeSize > 1) {
		bufferTo = data->buffer + 1;

		while (*bufferTo != 0xFF) {
			int8 direction;
			uint8 dir;

			bufferFrom = bufferTo - 1;

			while (*bufferFrom == 0xFE && bufferFrom != data->buffer) bufferFrom--;

			if (*bufferFrom == 0xFE) {
				bufferTo++;
				continue;
			}

			direction = (*bufferTo - *bufferFrom) & 0x7;
			direction = directionOffset[direction];

			/* The directions are opposite of each other, so they can both be removed */
			if (direction == 3) {
				*bufferFrom = 0xFE;
				*bufferTo   = 0xFE;

				bufferTo++;
				continue;
			}

			/* The directions are close to each other, so follow */
			if (direction == 0) {
				packed += s_mapDirection[*bufferFrom];
				bufferTo++;
				continue;
			}

			if ((*bufferFrom & 0x1) != 0) {
				dir = (*bufferFrom + (direction < 0 ? -1 : 1)) & 0x7;

				/* If we go 45 degrees with 90 degree difference, we can also go straight */
				if (abs(direction) == 1) {
					if (Script_Unit_Pathfind_GetScore(packed + s_mapDirection[dir], dir) <= 255) {
						*bufferTo = dir;
						*bufferFrom = dir;
					}
					packed += s_mapDirection[*bufferFrom];
					bufferTo++;
					continue;
				}
			} else {
				dir = (*bufferFrom + direction) & 0x7;
			}

			/* In these cases we can do with 1 direction change less, so remove one */
			*bufferTo = dir;
			*bufferFrom = 0xFE;

			/* Walk back one tile */
			while (*bufferFrom == 0xFE && data->buffer != bufferFrom) bufferFrom--;
			if (*bufferFrom != 0xFE) {
				packed += s_mapDirection[(*bufferFrom + 4) & 0x7];
			} else {
				packed = data->packed;
			}
		}
	}

	bufferFrom = data->buffer;
	bufferTo   = data->buffer;
	packed     = data->packed;
	data->score     = 0;
	data->routeSize = 0;

	/* Build the new improved route, without gaps */
	for (; *bufferTo != 0xFF; bufferTo++) {
		if (*bufferTo == 0xFE) continue;

		packed += s_mapDirection[*bufferTo];
		data->score += Script_Unit_Pathfind_GetScore(packed, *bufferTo);
		data->routeSize++;
		*bufferFrom++ = *bufferTo;
	}

	data->routeSize++;
	*bufferFrom = 0xFF;
}

/**
 * Try to connect two tiles (packedDst and data->packed) via a simplistic algorithm.
 * @param packedDst The tile to try to get to.
 * @param data Information about the found route, and the start point.
 * @param searchDirection The search direction (1 for clockwise, -1 for counterclockwise).
 * @param directionStart The direction to start looking at.
 * @return True if a route was found.
 */
static bool Script_Unit_Pathfinder_Connect(uint16 packedDst, Pathfinder_Data *data, int8 searchDirection, uint8 directionStart)
{
	uint16 packedNext;
	uint16 packedCur;
	uint8 *buffer;
	uint16 bufferSize;

	packedCur  = data->packed;
	buffer     = data->buffer;
	bufferSize = 0;

	while (bufferSize < 100) {
		uint8 direction = directionStart;

		while (true) {
			/* Look around us, first in the start direction, for a valid tile */
			direction = (direction + searchDirection) & 0x7;

			/* In case we are directly looking at our destination tile, we are pretty much done */
			if ((direction & 0x1) != 0 && (packedCur + s_mapDirection[(direction + searchDirection) & 0x7]) == packedDst) {
				direction = (direction + searchDirection) & 0x7;
				packedNext = packedCur + s_mapDirection[direction];
				break;
			} else {
				/* If we are back to our start direction, we didn't find a route */
				if (direction == directionStart) return false;

				/* See if the tile next to us is a valid position */
				packedNext = packedCur + s_mapDirection[direction];
				if (Script_Unit_Pathfind_GetScore(packedNext, direction) <= 255) break;
			}
		}

		*buffer++ = direction;
		bufferSize++;

		/* If we found the destination, smooth the route and we are done */
		if (packedNext == packedDst) {
			*buffer = 0xFF;
			data->routeSize = bufferSize;
			Script_Unit_Pathfinder_Smoothen(data);
			data->routeSize--;
			return true;
		}

		/* If we return to our start tile, we didn't find a route */
		if (data->packed == packedNext) return false;

		/* Now look at the next tile, starting 3 directions back */
		directionStart = (direction - searchDirection * 3) & 0x7;
		packedCur = packedNext;
	}

	/* We ran out of search space and didn't find a route */
	return false;
}

/**
 * Try to find a path between two points.
 *
 * @param packedSrc The start point.
 * @param packedDst The end point.
 * @param buffer The buffer to store the route in.
 * @param bufferSize The size of the buffer.
 * @return A struct with information about the found route.
 */
static Pathfinder_Data Script_Unit_Pathfinder(uint16 packedSrc, uint16 packedDst, void *buffer, int16 bufferSize)
{
	uint16 packedCur;
	Pathfinder_Data res;

	res.packed    = packedSrc;
	res.score     = 0;
	res.routeSize = 0;
	res.buffer    = buffer;

	res.buffer[0] = 0xFF;

	bufferSize--;

	packedCur = packedSrc;
	while (res.routeSize < bufferSize) {
		uint8  direction;
		uint16 packedNext;
		int16  score;

		if (packedCur == packedDst) break;

		/* Try going directly to the destination tile */
		direction = Tile_GetDirectionPacked(packedCur, packedDst) / 32;
		packedNext = packedCur + s_mapDirection[direction];

		/* Check for valid movement towards the tile */
		score = Script_Unit_Pathfind_GetScore(packedNext, direction);
		if (score <= 255) {
			res.buffer[res.routeSize++] = direction;
			res.score += score;
		} else {
			uint8 dir;
			bool foundCounterclockwise = false;
			bool foundClockwise = false;
			int16 routeSize;
			Pathfinder_Data routes[2];
			uint8 routesBuffer[2][102];
			Pathfinder_Data *bestRoute;

			while (true) {
				if (packedNext == packedDst) break;

				/* Find the first valid tile on the (direct) route. */
				dir = Tile_GetDirectionPacked(packedNext, packedDst) / 32;
				packedNext += s_mapDirection[dir];
				if (Script_Unit_Pathfind_GetScore(packedNext, dir) > 255) continue;

				/* Try to find a connection between our last valid tile and the new valid tile */
				routes[1].packed    = packedCur;
				routes[1].score     = 0;
				routes[1].routeSize = 0;
				routes[1].buffer    = routesBuffer[0];
				foundCounterclockwise = Script_Unit_Pathfinder_Connect(packedNext, &routes[1], -1, direction);

				routes[0].packed    = packedCur;
				routes[0].score     = 0;
				routes[0].routeSize = 0;
				routes[0].buffer    = routesBuffer[1];
				foundClockwise = Script_Unit_Pathfinder_Connect(packedNext, &routes[0], 1, direction);

				if (foundCounterclockwise || foundClockwise) break;

				do {
					if (packedNext == packedDst) break;

					dir = Tile_GetDirectionPacked(packedNext, packedDst) / 32;
					packedNext += s_mapDirection[dir];
				} while (Script_Unit_Pathfind_GetScore(packedNext, dir) <= 255);
			}

			if (foundCounterclockwise || foundClockwise) {
				/* Find the best (partial) route */
				if (!foundClockwise) {
					bestRoute = &routes[1];
				} else if (!foundCounterclockwise) {
					bestRoute = &routes[0];
				} else {
					bestRoute = &routes[routes[1].score < routes[0].score ? 1 : 0];
				}

				/* Calculate how much more we can copy into our own buffer */
				routeSize = min(bufferSize - res.routeSize, bestRoute->routeSize);
				if (routeSize <= 0) break;

				/* Copy the rest into our own buffer */
				memcpy(&res.buffer[res.routeSize], bestRoute->buffer, routeSize);
				res.routeSize += routeSize;
				res.score     += bestRoute->score;
			} else {
				/* Means we didn't find a route. packedNext is now equal to packedDst */
				break;
			}
		}

		packedCur = packedNext;
	}

	if (res.routeSize < bufferSize) res.buffer[res.routeSize++] = 0xFF;

	Script_Unit_Pathfinder_Smoothen(&res);

	return res;
}

/**
 * Calculate the route to a tile.
 *
 * Stack: 1 - An encoded tile to calculate the route to.
 *
 * @param script The script engine to operate on.
 * @return 0 if we arrived on location, 1 otherwise.
 */
uint16 Script_Unit_CalculateRoute(ScriptEngine *script)
{
	Unit *u;
	uint16 encoded;
	uint16 packedSrc;
	uint16 packedDst;

	u = g_scriptCurrentUnit;
	encoded = STACK_PEEK(1);

	if (u->currentDestination.tile != 0 || !Tools_Index_IsValid(encoded)) return 1;

	packedSrc = Tile_PackTile(u->o.position);
	packedDst = Tools_Index_GetPackedTile(encoded);

	if (packedDst == packedSrc) {
		u->route[0] = 0xFF;
		u->targetMove = 0;
		return 0;
	}

	if (u->route[0] == 0xFF) {
		Pathfinder_Data res;
		uint8 buffer[42];

		res = Script_Unit_Pathfinder(packedSrc, packedDst, buffer, 40);

		memcpy(u->route, res.buffer, min(res.routeSize, 14));

		if (u->route[0] == 0xFF) {
			u->targetMove = 0;
			if (u->o.type == UNIT_SANDWORM) {
				script->delay = 720;
			}
		}
	} else {
		uint16 distance;

		distance = Tile_GetDistancePacked(packedDst, packedSrc);
		if (distance < 14) u->route[distance] = 0xFF;
	}

	if (u->route[0] == 0xFF) return 1;

	if (u->orientation[0].current != (int8)(u->route[0] * 32)) {
		Unit_SetOrientation(u, (int8)(u->route[0] * 32), false, 0);
		return 1;
	}

	if (!Unit_StartMovement(u)) {
		u->route[0] = 0xFF;
		return 0;
	}

	memmove(&u->route[0], &u->route[1], 13);
	u->route[13] = 0xFF;
	return 1;
}

/**
 * Move the unit to the first available structure it can find of the required
 *  type.
 *
 * Stack: 1 - Type of structure.
 *
 * @param script The script engine to operate on.
 * @return An encoded structure index.
 */
uint16 Script_Unit_MoveToStructure(ScriptEngine *script)
{
	Unit *u;
	PoolFindStruct find;

	u = g_scriptCurrentUnit;

	if (u->o.linkedID != 0xFF) {
		Structure *s;

		s = Tools_Index_GetStructure(Unit_Get_ByIndex(u->o.linkedID)->originEncoded);

		if (s != NULL && s->state == STRUCTURE_STATE_IDLE && s->o.script.variables[4] == 0) {
			uint16 encoded;

			encoded = Tools_Index_Encode(s->o.index, IT_STRUCTURE);

			Object_Script_Variable4_Link(Tools_Index_Encode(u->o.index, IT_UNIT), encoded);

			u->targetMove = u->o.script.variables[4];

			return encoded;
		}
	}

	find.houseID = Unit_GetHouseID(u);
	find.index   = 0xFFFF;
	find.type    = STACK_PEEK(1);

	while (true) {
		Structure *s;
		uint16 encoded;

		s = Structure_Find(&find);
		if (s == NULL) break;

		if (s->state != STRUCTURE_STATE_IDLE) continue;
		if (s->o.script.variables[4] != 0) continue;

		encoded = Tools_Index_Encode(s->o.index, IT_STRUCTURE);

		Object_Script_Variable4_Link(Tools_Index_Encode(u->o.index, IT_UNIT), encoded);

		u->targetMove = encoded;

		return encoded;
	}

	return 0;
}

/**
 * Gets the amount of the unit linked to current unit, or current unit if not linked.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The amount.
 */
uint16 Script_Unit_GetAmount(ScriptEngine *script)
{
	Unit *u;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;

	if (u->o.linkedID == 0xFF) return u->amount;

	return Unit_Get_ByIndex(u->o.linkedID)->amount;
}

/**
 * Checks if the current unit is in transport.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return True if the current unit is in transport.
 */
uint16 Script_Unit_IsInTransport(ScriptEngine *script)
{
	Unit *u;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;

	return u->o.flags.s.inTransport ? 1 : 0;
}

/**
 * Start the animation on the current tile.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 1. Always.
 */
uint16 Script_Unit_StartAnimation(ScriptEngine *script)
{
	Unit *u;
	uint16 animationUnitID;
	uint16 position;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;

	position = Tile_PackTile(Tile_Center(u->o.position));
	Animation_Stop_ByTile(position);

	animationUnitID = g_table_landscapeInfo[Map_GetLandscapeType(Tile_PackTile(u->o.position))].isSand ? 0 : 1;
	if (u->o.script.variables[1] == 1) animationUnitID += 2;

	g_map[position].houseID = Unit_GetHouseID(u);

	assert(animationUnitID < 4);
	if (g_table_unitInfo[u->o.type].displayMode == 3) {
		Animation_Start(g_table_animation_unitScript1[animationUnitID], u->o.position, 0, Unit_GetHouseID(u), 4);
	} else {
		Animation_Start(g_table_animation_unitScript2[animationUnitID], u->o.position, 0, Unit_GetHouseID(u), 4);
	}

	return 1;
}

/**
 * Call a UnitType and make it go to the current unit. In general, type should
 *  be a Carry-All for this to make any sense.
 *
 * Stack: 1 - An unit type.
 *
 * @param script The script engine to operate on.
 * @return An encoded unit index.
 */
uint16 Script_Unit_CallUnitByType(ScriptEngine *script)
{
	Unit *u;
	Unit *u2;
	uint16 encoded;
	uint16 encoded2;

	u = g_scriptCurrentUnit;

	if (u->o.script.variables[4] != 0) return u->o.script.variables[4];
	if (!g_table_unitInfo[u->o.type].o.flags.canBePickedUp || u->deviated != 0) return 0;

	encoded = Tools_Index_Encode(u->o.index, IT_UNIT);

	u2 = Unit_CallUnitByType(STACK_PEEK(1), Unit_GetHouseID(u), encoded, false);
	if (u2 == NULL) return 0;

	encoded2 = Tools_Index_Encode(u2->o.index, IT_UNIT);

	Object_Script_Variable4_Link(encoded, encoded2);
	u2->targetMove = encoded;

	return encoded2;
}

/**
 * Unknown function 2552.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_Unknown2552(ScriptEngine *script)
{
	Unit *u;
	Unit *u2;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;
	if (u->o.script.variables[4] == 0) return 0;

	u2 = Tools_Index_GetUnit(u->o.script.variables[4]);
	if (u2 == NULL || u2->o.type != UNIT_CARRYALL) return 0;

	Object_Script_Variable4_Clear(&u->o);
	u2->targetMove = 0;

	return 0;
}

/**
 * Finds a structure.
 *
 * Stack: 1 - A structure type.
 *
 * @param script The script engine to operate on.
 * @return An encoded structure index, or 0 if none found.
 */
uint16 Script_Unit_FindStructure(ScriptEngine *script)
{
	Unit *u;
	PoolFindStruct find;

	u = g_scriptCurrentUnit;

	find.houseID = Unit_GetHouseID(u);
	find.index   = 0xFFFF;
	find.type    = STACK_PEEK(1);

	while (true) {
		Structure *s;

		s = Structure_Find(&find);
		if (s == NULL) break;
		if (s->state != STRUCTURE_STATE_IDLE) continue;
		if (s->o.linkedID != 0xFF) continue;
		if (s->o.script.variables[4] != 0) continue;

		return Tools_Index_Encode(s->o.index, IT_STRUCTURE);
	}

	return 0;
}

/**
 * Displays the "XXX XXX destroyed." message for the current unit.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_DisplayDestroyedText(ScriptEngine *script)
{
	const UnitInfo *ui;
	Unit *u;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;
	ui = &g_table_unitInfo[u->o.type];

	if (g_config.language == LANGUAGE_FRENCH) {
		GUI_DisplayText(String_Get_ByIndex(STR_S_S_DESTROYED), 0, String_Get_ByIndex(ui->o.stringID_abbrev), g_table_houseInfo[Unit_GetHouseID(u)].name);
	} else {
		GUI_DisplayText(String_Get_ByIndex(STR_S_S_DESTROYED), 0, g_table_houseInfo[Unit_GetHouseID(u)].name, String_Get_ByIndex(ui->o.stringID_abbrev));
	}

	return 0;
}

/**
 * Removes fog around the current unit.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_RemoveFog(ScriptEngine *script)
{
	Unit *u;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;
	Unit_RemoveFog(u);
	return 0;
}

/**
 * Make the current unit harvest spice.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return ??.
 */
uint16 Script_Unit_Harvest(ScriptEngine *script)
{
	Unit *u;
	uint16 packed;
	uint16 type;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;

	if (u->o.type != UNIT_HARVESTER) return 0;
	if (u->amount >= 100) return 0;

	packed = Tile_PackTile(u->o.position);

	type = Map_GetLandscapeType(packed);
	if (type != LST_SPICE && type != LST_THICK_SPICE) return 0;

	u->amount += Tools_Random_256() & 1;
	u->o.flags.s.inTransport = true;

	Unit_UpdateMap(2, u);

	if (u->amount > 100) u->amount = 100;

	if ((Tools_Random_256() & 0x1F) != 0) return 1;

	Map_ChangeSpiceAmount(packed, -1);

	return 0;
}

/**
 * Check if the given tile is a valid destination. In case of for example
 *  a carry-all it checks if the unit carrying can be placed on destination.
 * In case of structures, it checks if you can walk into it.
 *
 * Stack: 1 - An encoded tile, indicating the destination.
 *
 * @param script The script engine to operate on.
 * @return ??.
 */
uint16 Script_Unit_IsValidDestination(ScriptEngine *script)
{
	Unit *u;
	Unit *u2;
	uint16 encoded;
	uint16 index;

	u = g_scriptCurrentUnit;
	encoded = STACK_PEEK(1);
	index = Tools_Index_Decode(encoded);

	switch (Tools_Index_GetType(encoded)) {
		case IT_TILE:
			if (!Map_IsValidPosition(index)) return 1;
			if (u->o.linkedID == 0xFF) return 1;
			u2 = Unit_Get_ByIndex(u->o.linkedID);
			u2->o.position = Tools_Index_GetTile(encoded);
			if (!Unit_IsTileOccupied(u2)) return 0;
			u2->o.position.tile = 0xFFFFFFFF;
			return 1;

		case IT_STRUCTURE: {
			Structure *s;

			s = Structure_Get_ByIndex(index);
			if (s->o.houseID == Unit_GetHouseID(u)) return 0;
			if (u->o.linkedID == 0xFF) return 1;
			u2 = Unit_Get_ByIndex(u->o.linkedID);
			return Unit_IsValidMovementIntoStructure(u2, s) != 0 ? 1 : 0;
		}

		default: return 1;
	}
}

/**
 * Get a random tile around the Unit.
 *
 * Stack: 1 - An encoded index of a tile, completely ignored, as long as it is a tile.
 *
 * @param script The script engine to operate on.
 * @return An encoded tile, or 0.
 */
uint16 Script_Unit_GetRandomTile(ScriptEngine *script)
{
	Unit *u;
	tile32 tile;

	u = g_scriptCurrentUnit;

	if (Tools_Index_GetType(STACK_PEEK(1)) != IT_TILE) return 0;

	tile = Tile_MoveByRandom(u->o.position, 80, true);

	return Tools_Index_Encode(Tile_PackTile(tile), IT_TILE);
}

/**
 * Perform a random action when we are sitting idle, like rotating around.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_IdleAction(ScriptEngine *script)
{
	Unit *u;
	uint16 random;
	uint16 movementType;
	uint16 i;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;

	random = Tools_RandomLCG_Range(0, 10);
	movementType = g_table_unitInfo[u->o.type].movementType;

	if (movementType != MOVEMENT_FOOT && movementType != MOVEMENT_TRACKED && movementType != MOVEMENT_WHEELED) return 0;

	if (movementType == MOVEMENT_FOOT && random > 8) {
		u->spriteOffset = Tools_Random_256() & 0x3F;
		Unit_UpdateMap(2, u);
	}

	if (random > 2) return 0;

	/* Ensure the order of Tools_Random_256() calls. */
	i = (Tools_Random_256() & 1) == 0 ? 1 : 0;
	Unit_SetOrientation(u, Tools_Random_256(), false, i);

	return 0;
}

/**
 * Makes the current unit to go to the closest structure of the given type.
 *
 * Stack: 1 - The type of the structure.
 *
 * @param script The script engine to operate on.
 * @return The value 1 if and only if a structure has been found.
 */
uint16 Script_Unit_GoToClosestStructure(ScriptEngine *script)
{
	Unit *u;
	Structure *s = NULL;
	PoolFindStruct find;
	uint16 distanceMin =0;

	u = g_scriptCurrentUnit;

	find.houseID = Unit_GetHouseID(u);
	find.index   = 0xFFFF;
	find.type    = STACK_PEEK(1);

	while (true) {
		Structure *s2;
		uint16 distance;

		s2 = Structure_Find(&find);

		if (s2 == NULL) break;
		if (s2->state != STRUCTURE_STATE_IDLE) continue;
		if (s2->o.linkedID != 0xFF) continue;
		if (s2->o.script.variables[4] != 0) continue;

		distance = Tile_GetDistanceRoundedUp(s2->o.position, u->o.position);

		if (distance >= distanceMin && distanceMin != 0) continue;

		distanceMin = distance;
		s = s2;
	}

	if (s == NULL) return 0;

	Unit_SetAction(u, ACTION_MOVE);
	Unit_SetDestination(u, Tools_Index_Encode(s->o.index, IT_STRUCTURE));

	return 1;
}

/**
 * Transform an MCV into Construction Yard.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return 1 if and only if the transformation succeeded.
 */
uint16 Script_Unit_MCVDeploy(ScriptEngine *script)
{
	Unit *u;
	Structure *s = NULL;
	uint16 i;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;

	Unit_UpdateMap(0, u);

	for (i = 0; i < 4; i++) {
		static int8 offsets[4] = { 0, -1, -64, -65 };

		s = Structure_Create(STRUCTURE_INDEX_INVALID, STRUCTURE_CONSTRUCTION_YARD, Unit_GetHouseID(u), Tile_PackTile(u->o.position) + offsets[i]);

		if (s != NULL) {
			Unit_Remove(u);
			return 1;
		}
	}

	if (Unit_GetHouseID(u) == g_playerHouseID) {
		GUI_DisplayText(String_Get_ByIndex(STR_UNIT_IS_UNABLE_TO_DEPLOY_HERE), 0);
	}

	Unit_UpdateMap(1, u);

	return 0;
}

/**
 * Get the best target around you. Only considers units on sand.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return An encoded unit index, or 0.
 */
uint16 Script_Unit_Sandworm_GetBestTarget(ScriptEngine *script)
{
	Unit *u;
	Unit *u2;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;

	u2 = Unit_Sandworm_FindBestTarget(u);
	if (u2 == NULL) return 0;

	return Tools_Index_Encode(u2->o.index, IT_UNIT);
}

/**
 * Unknown function 2BD5.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return ??.
 */
uint16 Script_Unit_Unknown2BD5(ScriptEngine *script)
{
	Unit *u;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;

	switch (Tools_Index_GetType(u->o.script.variables[4])) {
		case IT_UNIT: {
			Unit *u2;

			u2 = Tools_Index_GetUnit(u->o.script.variables[4]);

			if (Tools_Index_Encode(u->o.index, IT_UNIT) == u2->o.script.variables[4] && u2->o.houseID == u->o.houseID) return 1;

			u2->targetMove = 0;
		} break;

		case IT_STRUCTURE: {
			Structure *s;

			s = Tools_Index_GetStructure(u->o.script.variables[4]);
			if (Tools_Index_Encode(u->o.index, IT_UNIT) == s->o.script.variables[4] && s->o.houseID == u->o.houseID) return 1;
		} break;

		default: break;
	}

	Object_Script_Variable4_Clear(&u->o);
	return 0;
}

/**
 * Blink the unit for 32 ticks.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_Blink(ScriptEngine *script)
{
	Unit *u;

	VARIABLE_NOT_USED(script);

	u = g_scriptCurrentUnit;
	u->blinkCounter = 32;
	return 0;
}
