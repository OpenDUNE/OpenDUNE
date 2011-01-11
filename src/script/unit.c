/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "script.h"
#include "../unit.h"
#include "../pool/unit.h"
#include "../pool/pool.h"
#include "../structure.h"
#include "../pool/structure.h"
#include "../tools.h"
#include "../tile.h"
#include "../os/math.h"
#include "../map.h"
#include "../house.h"
#include "../gui/gui.h"
#include "../string.h"

extern void f__0C3A_2207_001D_EDF2();
extern void f__0F3F_0125_000D_4868();
extern void f__0F3F_01A1_0018_9631();
extern void f__1319_002D_0023_320C();
extern void f__1423_0BCC_0012_111A();
extern void f__151A_000E_0013_5840();
extern void f__151A_0114_0022_0B6C();
extern void f__167E_0319_0010_B56F();
extern void f__B483_0000_0019_F96A();
extern void overlay(uint16 cs, uint8 force);

/**
 * Create a new soldier unit.
 *
 * Stack: 0 - Action for the new Unit.
 *
 * @param script The script engine to operate on.
 * @return 1 if a new Unit has been created, 0 otherwise.
 */
uint16 Script_Unit_RandomSoldier(ScriptEngine *script)
{
	Unit *u;
	Unit *nu;
	tile32 position;

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	if (Tools_Random_256() >= g_unitInfo[u->o.type].o.variable_0E) return 0;

	emu_push(1);
	emu_push(20);
	emu_push(u->o.position.s.y); emu_push(u->o.position.s.x);
	emu_push(emu_cs); emu_push(0x2403); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	emu_sp += 8;

	position.s.x = emu_ax;
	position.s.y = emu_dx;

	nu = Unit_Create(UNIT_INDEX_INVALID, UNIT_SOLDIER, u->o.houseID, position, Tools_Random_256());

	if (nu == NULL) return 0;

	nu->deviated = u->deviated;

	Unit_SetAction(nu, script->stack[script->stackPointer]);

	return 1;
}

/**
 * Gets the best target for the current unit.
 *
 * Stack: 0 - How to determine the best target.
 *
 * @param script The script engine to operate on.
 * @return The encoded index of the best target or 0 if none found.
 */
uint16 Script_Unit_FindBestTarget(ScriptEngine *script)
{
	Unit *u;

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	return Unit_FindBestTargetEncoded(u, script->stack[script->stackPointer]);
}

/**
 * Get the priority a target has for the current unit.
 *
 * Stack: 0 - The encoded target.
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

	u = Unit_Get_ByMemory(g_global->unitCurrent);
	encoded = script->stack[script->stackPointer];

	target = Tools_Index_GetUnit(encoded);
	if (target != NULL) return Unit_GetTargetPriority(u, target);

	s = Tools_Index_GetStructure(encoded);
	if (s == NULL) return 0;

	emu_push(g_global->structureStartPos.s.cs); emu_push(g_global->structureStartPos.s.ip + s->o.index * sizeof(Structure));
	emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
	emu_push(emu_cs); emu_push(0x084F); emu_cs = 0x0C3A; f__0C3A_2207_001D_EDF2();
	emu_sp += 8;

	return emu_ax;
}

/**
 * Unknown function 0882.
 *
 * Stack: *none*.
 * @param script The script engine to operate on.
 * @return ??.
 */
uint16 Script_Unit_Unknown0882(ScriptEngine *script)
{
	Unit *u;
	Unit *u2;

	VARIABLE_NOT_USED(script);

	assert(g_global->unitCurrent.csip == g_global->objectCurrent.csip);

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	if (u->o.linkedID == 0xFF) return 0;
	if (Tools_Index_GetType(u->targetMove) == IT_UNIT) return 0;

	if (Tools_Index_GetType(u->targetMove) == IT_STRUCTURE) {
		Structure *s;
		StructureInfo *si;

		s = Tools_Index_GetStructure(u->targetMove);
		si = &g_structureInfo[s->o.type];

		if (s->o.type == STRUCTURE_STARPORT) {
			uint16 ret = 0;

			if (s->animation == 1) {
				s->o.linkedID = u->o.linkedID;
				u->o.linkedID = 0xFF;
				u->o.flags.s.inTransport = false;
				u->amount = 0;

				Unit_B4CD_01BF(2, u);

				emu_push(u->o.position.s.y); emu_push(u->o.position.s.x);
				emu_push(24);
				emu_push(emu_cs); emu_push(0x0956); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
				emu_sp += 6;

				Structure_SetAnimation(s, 2);

				ret = 1;
			}

			Object_Script_Variable4_Clear(&u->o);
			u->targetMove = 0;

			return ret;
		}

		if ((s->animation == 0 || (si->o.flags.s.variable_0010 && s->animation == 1)) && s->o.linkedID == 0xFF) {
			emu_push(u->o.position.s.y); emu_push(u->o.position.s.x);
			emu_push(24);
			emu_push(emu_cs); emu_push(0x09EF); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
			emu_sp += 6;

			Unit_EnterStructure(Unit_Get_ByIndex(u->o.linkedID), s);

			Object_Script_Variable4_Clear(&u->o);
			u->targetMove = 0;

			u->o.linkedID = 0xFF;
			u->o.flags.s.inTransport = false;
			u->amount = 0;

			Unit_B4CD_01BF(2, u);

			return 1;
		}

		Object_Script_Variable4_Clear(&u->o);
		u->targetMove = 0;

		return 0;
	}

	if (!Map_IsValidPosition(Tile_PackTile(Tile_Center(u->o.position)))) return 0;

	u2 = Unit_Get_ByIndex(u->o.linkedID);

	if (!Unit_SetPosition(u2, Tile_Center(u->o.position))) return 0;

	if (u2->o.houseID == g_global->playerHouseID) {
		emu_push(u->o.position.s.y); emu_push(u->o.position.s.x);
		emu_push(24);
		emu_push(emu_cs); emu_push(0x0B11); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
		emu_sp += 6;
	}

	Unit_SetOrientation(u2, u->orientation[0].current, true, 0);
	Unit_SetOrientation(u2, u->orientation[0].current, true, 1);
	Unit_Unknown204C(u2, 0);

	u->o.linkedID = u2->o.linkedID;
	u2->o.linkedID = 0xFF;

	if (u->o.linkedID != 0xFF) return 1;

	u->o.flags.s.inTransport = false;

	Object_Script_Variable4_Clear(&u->o);
	u->targetMove = 0;

	return 1;
}

/**
 * Unknown function 0BC3.
 *
 * Stack: *none*.
 * @param script The script engine to operate on.
 * @return ??.
 */
uint16 Script_Unit_Unknown0BC3(ScriptEngine *script)
{
	Unit *u;

	VARIABLE_NOT_USED(script);

	assert(g_global->unitCurrent.csip == g_global->objectCurrent.csip);

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	if (u->o.linkedID != 0xFF) return 0;

	switch (Tools_Index_GetType(u->targetMove)) {
		case IT_STRUCTURE: {
			Structure *s;
			Unit *u2;

			s = Tools_Index_GetStructure(u->targetMove);

			if (s->animation != 2) {
				Object_Script_Variable4_Clear(&u->o);
				u->targetMove = 0;
				return 0;
			}

			u->o.flags.s.inTransport = true;

			Object_Script_Variable4_Clear(&u->o);
			u->targetMove = 0;

			u2 = Unit_Get_ByIndex(s->o.linkedID);

			u->o.linkedID = u2->o.index & 0xFF;
			s->o.linkedID = u2->o.linkedID;
			u2->o.linkedID = 0xFF;

			if (s->o.linkedID == 0xFF) Structure_SetAnimation(s, 0);

			if (u2->variable_5A.tile != 0) {
				u->targetMove = Tools_Index_Encode(Tile_PackTile(u2->variable_5A), IT_TILE);
			} else if (u2->o.type == UNIT_HARVESTER && Unit_GetHouseID(u2) != g_global->playerHouseID) {
				u->targetMove = Tools_Index_Encode(Map_B4CD_08E7(Tile_PackTile(u->o.position), 20), IT_TILE);
			}

			Unit_B4CD_01BF(2, u);

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

			while (true) {
				Structure *s2;
				int16 distance;

				s2 = Structure_Find(&find);
				if (s2 == NULL) break;

				distance = Tile_GetDistanceRoundedUp(s2->o.position, u->o.position);

				if (u2->o.type == UNIT_HARVESTER) {
					if (s2->o.type != STRUCTURE_REFINERY || s2->animation != 0 || s2->o.script.variables[4] != 0) continue;
					if (minDistance != 0 && distance >= minDistance) break;
					minDistance = distance;
					s = s2;
					break;
				}

				if (s2->o.type != STRUCTURE_REPAIR || s2->animation != 0 || s2->o.script.variables[4] != 0) continue;

				if (minDistance != 0 && distance >= minDistance) continue;
				minDistance = distance;
				s = s2;
			}

			if (s == NULL) return 0;

			{
				Unit *selected = (g_global->selectionUnit.csip == 0) ? NULL : Unit_Get_ByMemory(g_global->selectionUnit);
				if (u2 == selected) Unit_Select(NULL);
			}

			u->o.linkedID = u2->o.index & 0xFF;
			u->o.flags.s.inTransport = true;

			Unit_B4CD_01BF(0, u2);

			Unit_Unknown2AAA(u2);

			Object_Script_Variable4_Link(Tools_Index_Encode(u->o.index, IT_UNIT), Tools_Index_Encode(s->o.index, IT_STRUCTURE));

			u->targetMove = u->o.script.variables[4];

			Unit_B4CD_01BF(2, u);

			if (u2->o.type != UNIT_HARVESTER) return 0;

			if (Map_B4CD_08E7(Tile_PackTile(u2->o.position), 2) == 0) {
				u2->variable_5E.tile = 0;
				u2->variable_5A.tile = 0;
			}

			return 0;
		}

		default: return 0;
	}
}

/**
 * Unknown function 0FA2.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_Unknown0FA2(ScriptEngine *script)
{
	Unit *u;

	VARIABLE_NOT_USED(script);

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	Unit_Unknown204C(u, 0);

	Unit_B4CD_01BF(2, u);

	return 0;
}

/**
 * Unknown function 0FD2.
 *
 * Stack: 0 - ??.
 *
 * @param script The script engine to operate on.
 * @return ??.
 */
uint16 Script_Unit_Unknown0FD2(ScriptEngine *script)
{
	Unit *u;
	uint16 param;

	u = Unit_Get_ByMemory(g_global->unitCurrent);
	param = clamp(script->stack[script->stackPointer], 0, 255);

	if (!u->o.flags.s.byScenario) param = param * 192 / 256;

	if (g_unitInfo[u->o.type].movementType == MOVEMENT_WINGER) param = Tools_AdjustToGameSpeed(param, 0, 255, true);

	Unit_Unknown204C(u, param);

	return u->variable_6A;
}

/**
 * Unknown function 105E.
 *
 * Stack: 0 - ??.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_Unknown105E(ScriptEngine *script)
{
	Unit *u;

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	u->variable_6D = -(script->stack[script->stackPointer] & 0xFF);

	Unit_B4CD_01BF(2, u);

	return 0;
}

/**
 * Unknown function 1098.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return ??.
 */
uint16 Script_Unit_Unknown1098(ScriptEngine *script)
{
	Unit *u;
	uint16 delay;
	tile32 tile;
	uint16 distance;
	int8 orientation;
	int16 diff;

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	if (u->targetMove == 0) return 0;

	tile = Tools_Index_GetTile(u->targetMove);

	distance = Tile_GetDistance(u->o.position, tile);

	if ((int16)distance < 128) {
		Unit_Unknown204C(u, 0);

		u->o.position.s.x += clamp((int16)(tile.s.x - u->o.position.s.x), -16, 16);
		u->o.position.s.y += clamp((int16)(tile.s.y - u->o.position.s.y), -16, 16);

		Unit_B4CD_01BF(2, u);

		if ((int16)distance < 32) return 1;

		/* XXX -- Lovely hackish */
		*(((uint16 *)script) - 1) = 2;

		script->script.s.ip -= 2;
		return 0;
	}

	emu_push(tile.s.y); emu_push(tile.s.x);
	emu_push(u->o.position.s.y); emu_push(u->o.position.s.x);
	emu_push(emu_cs); emu_push(0x11E2); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	emu_sp += 8;
	orientation = (int8)emu_ax;

	Unit_SetOrientation(u, orientation, false, 0);

	diff = abs(orientation - u->orientation[0].current);

	Unit_Unknown204C(u, Tools_AdjustToGameSpeed(min(distance / 8, 255), 25, 255, true) * (255 - diff) / 256);

	delay = max((int16)distance / 1024, 1);

	Unit_B4CD_01BF(2, u);

	if (delay != 0) {
		/* XXX -- Lovely hackish */
		*(((uint16 *)script) - 1) = delay;

		script->script.s.ip -= 2;
	}

	return 0;
}

/**
 * Unknown function 12CE.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_Unknown12CE(ScriptEngine *script)
{
	Unit *u;
	UnitInfo *ui;

	VARIABLE_NOT_USED(script);

	u = Unit_Get_ByMemory(g_global->unitCurrent);
	ui = &g_unitInfo[u->o.type];

	Unit_Unknown10EC(u);

	if (ui->movementType != MOVEMENT_WINGER) {
		uint16 credits;

		credits = max(ui->o.buildCredits / 100, 1);

		if (u->o.houseID == g_global->playerHouseID) {
			g_global->scenario.killedAllied++;
			g_global->scenario.score -= credits;
		} else {
			g_global->scenario.killedEnemy++;
			g_global->scenario.score += credits;
		}
	}

	emu_push(g_global->playerHouseID);
	emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
	emu_push(emu_cs); emu_push(0x134E); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
	emu_sp += 6;

	if (u->o.type != UNIT_SABOTEUR) return 0;

	Map_MakeExplosion(4, u->o.position, 300, 0);
	return 0;
}

/**
 * Unknown function 1382.
 *
 * Stack: 0 - ??.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_Unknown1382(ScriptEngine *script)
{
	Unit *u;

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	Map_MakeExplosion(script->stack[script->stackPointer], u->o.position, g_unitInfo[u->o.type].o.hitpoints, Tools_Index_Encode(u->o.index, IT_UNIT));
	return 0;
}

/**
 * Unknown function 13CD.
 *
 * Stack: 0 - ??.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_Unknown13CD(ScriptEngine *script)
{
	Unit *u;
	uint8 i;

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	Map_MakeExplosion(11, u->o.position, Tools_RandomRange(25, 50), 0);

	for (i = 0; i < 7; i++) {
		tile32 p;

		emu_push(0);
		emu_push(script->stack[script->stackPointer]);
		emu_push(u->o.position.s.y); emu_push(u->o.position.s.x);
		emu_push(emu_cs); emu_push(0x143A); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
		emu_sp += 8;

		p.s.y = emu_dx;
		p.s.x = emu_ax;
		Map_MakeExplosion(11, p, Tools_RandomRange(75, 150), 0);
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
	Unit *u;
	UnitInfo *ui;
	uint16 target;
	UnitType typeID;
	uint16 distance;
	bool loc1A;
	uint16 damage;

	assert(g_global->unitCurrent.csip == g_global->objectCurrent.csip);

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	target = u->targetAttack;
	if (target == 0 || !Tools_Index_IsValid(target)) return 0;

	if (u->o.type != UNIT_SANDWORM && target == Tools_Index_Encode(Tile_PackTile(u->o.position), IT_TILE)) u->targetAttack = 0;

	if (u->targetAttack != target) {
		Unit_SetTarget(u, target);
		return 0;
	}

	ui = &g_unitInfo[u->o.type];

	if (u->o.type != UNIT_SANDWORM && u->orientation[ui->o.flags.s.hasTurret ? 1 : 0].speed != 0) return 0;

	if (Tools_Index_GetType(target) == IT_TILE && Object_GetByPackedTile(Tools_Index_GetPackedTile(target)) != NULL) Unit_SetTarget(u, target);

	if (u->fireDelay != 0) return 0;

	emu_push(target);
	emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
	emu_push(emu_cs); emu_push(0x15B0); emu_cs = 0x167E; f__167E_0319_0010_B56F();
	emu_sp += 6;

	distance = emu_ax;

	if ((int16)(ui->variable_50 << 8) < (int16)distance) return 0;

	if (u->o.type != UNIT_SANDWORM && (Tools_Index_GetType(target) != IT_UNIT || g_unitInfo[Tools_Index_GetUnit(target)->o.type].movementType != MOVEMENT_WINGER)) {
		int16 diff = 0;
		int8 orientation;

		tile32 tile = Tools_Index_GetTile(target);
		emu_push(tile.s.y); emu_push(tile.s.x);
		emu_push(u->o.position.s.y); emu_push(u->o.position.s.x);
		emu_push(emu_cs); emu_push(0x15E1); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
		emu_sp += 8;
		orientation = (int8)emu_ax;

		diff = abs(u->orientation[ui->o.flags.s.hasTurret ? 1 : 0].current - orientation);
		if (ui->movementType == MOVEMENT_WINGER) diff /= 8;

		if (diff >= 8) return 0;
	}

	damage = ui->damage;
	typeID = ui->bulletType;

	loc1A = (ui->variable_36 & 0x400) != 0 && u->o.hitpoints > ui->o.hitpoints / 2;

	if ((u->o.type == UNIT_TROOPERS || u->o.type == UNIT_TROOPER) && (int16)distance > 512) typeID = UNIT_MISSILE_TROOPER;

	switch (typeID) {
		case UNIT_SANDWORM: {
			Unit *u2;

			Unit_B4CD_01BF(0, u);

			u2 = Tools_Index_GetUnit(target);

			if (u2 != NULL) {
				u2->o.script.variables[1] = 0xFFFF;
				Unit_Unknown379B(u2);

				emu_push(g_global->playerHouseID);
				emu_push(g_global->unitStartPos.s.cs); emu_push(g_global->unitStartPos.s.ip + u2->o.index * sizeof(Unit));
				emu_push(emu_cs); emu_push(0x1733); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
				emu_sp += 6;

				Unit_Unknown10EC(u2);
			}

			Map_MakeExplosion(ui->variable_54, u->o.position, 0, 0);

			emu_push(u->o.position.s.y); emu_push(u->o.position.s.x);
			emu_push(63);
			emu_push(emu_cs); emu_push(0x177A); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
			emu_sp += 6;

			Unit_B4CD_01BF(1, u);

			u->amount--;

			/* XXX -- Lovely hackish */
			*(((uint16 *)script) - 1) = 12;

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

			emu_push(u->o.position.s.y); emu_push(u->o.position.s.x);
			emu_push(ui->variable_58);
			emu_push(emu_cs); emu_push(0x184F); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
			emu_sp += 6;

			Unit_Deviation_Decrease(u, 20);
		} break;

		default: break;
	}

	u->fireDelay = Tools_AdjustToGameSpeed(ui->fireDelay * 2, 1, 255, true) & 0xFF;

	if (loc1A) {
		u->o.flags.s.variable_4_0010 = !u->o.flags.s.variable_4_0010;
		if (u->o.flags.s.variable_4_0010) u->fireDelay = Tools_AdjustToGameSpeed(5, 1, 10, true) & 0xFF;
	} else {
		u->o.flags.s.variable_4_0010 = false;
	}

	u->fireDelay += Tools_Random_256() & 1;

	Unit_B4CD_01BF(2, u);

	return 1;
}

/**
 * Set the orientation of a unit.
 *
 * Stack: 0 - New orientation for unit.
 *
 * @param script The script engine to operate on.
 * @return The current orientation of the unit (it will move to the requested over time).
 */
uint16 Script_Unit_GetOrientation(ScriptEngine *script)
{
	Unit *u;

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	Unit_SetOrientation(u, (int8)script->stack[script->stackPointer], false, 0);

	return u->orientation[0].current;
}

/**
 * Unknown function 196C.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return ??.
 */
uint16 Script_Unit_Unknown196C(ScriptEngine *script)
{
	Unit *u;
	UnitInfo *ui;
	uint16 locdi;
	int8 current;
	tile32 tile;
	int8 orientation;

	VARIABLE_NOT_USED(script);

	u = Unit_Get_ByMemory(g_global->unitCurrent);
	ui = &g_unitInfo[u->o.type];

	if (ui->movementType != MOVEMENT_WINGER && u->variable_49.tile != 0) return 1;

	locdi = ui->o.flags.s.hasTurret ? 1 : 0;

	if (u->orientation[locdi].speed != 0) return 1;
	current = u->orientation[locdi].current;

	if (!Tools_Index_IsValid(u->targetAttack)) return 0;

	tile = Tools_Index_GetTile(u->targetAttack);

	emu_push(tile.s.y); emu_push(tile.s.x);
	emu_push(u->o.position.s.y); emu_push(u->o.position.s.x);
	emu_push(emu_cs); emu_push(0x1A13); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	emu_sp += 8;
	orientation = (int8)emu_ax;

	if (orientation == current) return 0;

	Unit_SetOrientation(u, orientation, false, locdi);

	return 1;
}

/**
 * Unknown function 1A40.
 *
 * Stack: 0 - An encoded tile.
 *
 * @param script The script engine to operate on.
 * @return ??.
 */
uint16 Script_Unit_Unknown1A40(ScriptEngine *script)
{
	Unit *u;
	uint16 encoded;

	u = Unit_Get_ByMemory(g_global->unitCurrent);
	encoded = script->stack[script->stackPointer];

	if (Tools_Index_IsValid(encoded)) {
		tile32 tile;

		tile = Tools_Index_GetTile(encoded);
		emu_push(tile.s.y); emu_push(tile.s.x);
		emu_push(u->o.position.s.y); emu_push(u->o.position.s.x);
		emu_push(emu_cs); emu_push(0x1A89); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
		emu_sp += 8;

		return emu_ax;
	}

	return u->orientation[0].current;
}

/**
 * Unknown function 1A9F.
 *
 * Stack: 0 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_Unknown1A9F(ScriptEngine *script)
{
	Unit *u;
	uint16 encoded;

	u = Unit_Get_ByMemory(g_global->unitCurrent);
	encoded = script->stack[script->stackPointer];

	if (encoded == 0 || !Tools_Index_IsValid(encoded)) {
		u->targetMove = 0;
		return 0;
	}

	if (u->o.type == UNIT_HARVESTER) {
		Structure *s;

		s = Tools_Index_GetStructure(encoded);
		if (s == NULL) {
			u->targetMove = encoded;
			u->variable_72[0] = 0xFF;
			return 0;
		}

		if (s->o.script.variables[4] != 0) return 0;
	}

	Unit_SetDestination(u, encoded);
	return 0;
}

/**
 * Unknown function 1B45.
 *
 * Stack: 0 - An encoded tile.
 *
 * @param script The script engine to operate on.
 * @return The new targetAttack of current unit.
 */
uint16 Script_Unit_Unknown1B45(ScriptEngine *script)
{
	Unit *u;
	uint16 target;
	tile32 tile;
	int8 orientation;

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	target = script->stack[script->stackPointer];

	if (target == 0 || !Tools_Index_IsValid(target)) {
		u->targetAttack = 0;
		return 0;
	}

	tile = Tools_Index_GetTile(target);

	emu_push(tile.s.y); emu_push(tile.s.x);
	emu_push(u->o.position.s.y); emu_push(u->o.position.s.x);
	emu_push(emu_cs); emu_push(0x1B95); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	emu_sp += 8;
	orientation = (int8)emu_ax;

	u->targetAttack = target;
	if (!g_unitInfo[u->o.type].o.flags.s.hasTurret) {
		u->targetMove = target;
		Unit_SetOrientation(u, orientation, false, 0);
	}
	Unit_SetOrientation(u, orientation, false, 1);

	return u->targetAttack;
}

/**
 * Sets the action for the current unit.
 *
 * Stack: 0 - The action.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_SetAction(ScriptEngine *script)
{
	Unit *u;
	ActionType action;

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	action = script->stack[script->stackPointer];

	if (u->o.houseID == g_global->playerHouseID && action == ACTION_HARVEST && u->nextActionID != ACTION_INVALID) return 0;

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

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	Unit_SetAction(u, g_unitInfo[u->o.type].actionsPlayer[3]);

	return 0;
}

/**
 * Unknown function 1C6F.
 *
 * Stack: 0 - An encoded tile.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_Unknown1C6F(ScriptEngine *script)
{
	Unit *u;
	uint16 encoded;

	encoded = script->stack[script->stackPointer];

	if (!Tools_Index_IsValid(encoded)) return 0;

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	if (u->variable_49.tile == 0 || (g_unitInfo[u->o.type].variable_36 & 0x8000) != 0) {
		u->variable_49 = Tools_Index_GetTile(encoded);
	}

	emu_push(u->variable_49.s.y); emu_push(u->variable_49.s.x);
	emu_push(u->o.position.s.y); emu_push(u->o.position.s.x);
	emu_push(emu_cs); emu_push(0x1CE1); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	emu_sp += 8;

	Unit_SetOrientation(u, (int8)emu_ax, false, 0);

	return 0;
}

/**
 * Unknown function 1CFE.
 *
 * Stack: 0 - What to return.
 *
 * @param script The script engine to operate on.
 * @return The value.
 */
uint16 Script_Unit_Unknown1CFE(ScriptEngine *script)
{
	Unit *u;
	UnitInfo *ui;

	u = Unit_Get_ByMemory(g_global->unitCurrent);
	ui = &g_unitInfo[u->o.type];

	switch (script->stack[script->stackPointer]) {
		case 0x00: return u->o.hitpoints * 256 / ui->o.hitpoints;
		case 0x01: return Tools_Index_IsValid(u->targetMove) ? u->targetMove : 0;
		case 0x02: return ui->variable_50 << 8;
		case 0x03: return u->o.index;
		case 0x04: return u->orientation[0].current;
		case 0x05: return u->targetAttack;
		case 0x06:
			if (u->originEncoded == 0 || u->o.type == UNIT_HARVESTER) Unit_FindClosestRefinery(u);
			return u->originEncoded;
		case 0x07: return u->o.type;
		case 0x08: return Tools_Index_Encode(u->o.index, IT_UNIT);
		case 0x09: return u->variable_6B;
		case 0x0A: return abs(u->orientation[0].target - u->orientation[0].current);
		case 0x0B: return u->variable_49.tile == 0 ? 0 : 1;
		case 0x0C: return u->fireDelay == 0 ? 1 : 0;
		case 0x0D: return ui->variable_36 & 0x4;
		case 0x0E: return Unit_GetHouseID(u);
		case 0x0F: return u->o.flags.s.byScenario ? 1 : 0;
		case 0x10: return u->orientation[ui->o.flags.s.hasTurret ? 1 : 0].current;
		case 0x11: return abs(u->orientation[ui->o.flags.s.hasTurret ? 1 : 0].target - u->orientation[ui->o.flags.s.hasTurret ? 1 : 0].current);
		case 0x12: return (ui->movementType & 0x40) == 0 ? 0 : 1;
		case 0x13: return (u->o.variable_09 & (1 << g_global->playerHouseID)) == 0 ? 0 : 1;
		default:   return 0;
	}
}

/**
 * Unknown function 1F51.
 *
 * Stack: 0 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return ??.
 */
uint16 Script_Unit_Unknown1F51(ScriptEngine *script)
{
	Unit *u;
	uint16 encoded;
	uint16 packed;
	uint16 locdi;

	u = Unit_Get_ByMemory(g_global->unitCurrent);
	encoded = script->stack[script->stackPointer];

	if (u->variable_49.tile != 0 || !Tools_Index_IsValid(encoded)) return 1;

	packed = Tile_PackTile(u->o.position);
	locdi = Tools_Index_GetPackedTile(encoded);

	if (locdi == packed) {
		u->variable_72[0] = 0xFF;
		u->targetMove = 0;
		return 0;
	}

	if (u->variable_72[0] == 0xFF) {
		csip32 loc08;

		emu_push(255);
		emu_push(0x176C); emu_push(0x1F21);
		emu_push(40);
		emu_push(0x353F); emu_push(0x981E);
		emu_push(locdi);
		emu_push(packed);
		emu_push(emu_cs); emu_push(0x1FFF); emu_cs = 0x1319; f__1319_002D_0023_320C();
		emu_sp += 16;

		loc08.s.cs = emu_dx;
		loc08.s.ip = emu_ax;

		memcpy(u->variable_72, emu_get_memorycsip(emu_get_csip32(loc08.s.cs, loc08.s.ip, 0x6)), min(emu_get_memory16(loc08.s.cs, loc08.s.ip, 0x4), 14));

		if (u->variable_72[0] == 0xFF) {
			u->targetMove = 0;
			if (u->o.type == UNIT_SANDWORM) {
				/* XXX -- Lovely hackish */
				*(((uint16 *)script) - 1) = 720;
			}
		}
	} else {
		uint16 distance;

		distance = Tile_GetDistancePacked(locdi, packed);
		if (distance < 14) u->variable_72[distance] = 0xFF;
	}

	if (u->variable_72[0] == 0xFF) return 1;

	if (u->orientation[0].current != (int8)(u->variable_72[0] * 32)) {
		Unit_SetOrientation(u, (int8)(u->variable_72[0] * 32), false, 0);
		return 1;
	}

	if (!Unit_Unknown167C(u)) {
		u->variable_72[0] = 0xFF;
		return 0;
	}

	memmove(&u->variable_72[0], &u->variable_72[1], 13);
	u->variable_72[13] = 0xFF;
	return 1;
}

/**
 * Unknown function 212E.
 *
 * Stack: 0 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return An encoded structure index.
 */
uint16 Script_Unit_Unknown212E(ScriptEngine *script)
{
	Unit *u;
	PoolFindStruct find;

	assert(g_global->unitCurrent.csip == g_global->objectCurrent.csip);

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	if (u->o.linkedID != 0xFF) {
		Structure *s;

		s = Tools_Index_GetStructure(Unit_Get_ByIndex(u->o.linkedID)->originEncoded);

		if (s != NULL && s->animation == 0 && s->o.script.variables[4] == 0) {
			uint16 encoded;

			encoded = Tools_Index_Encode(s->o.index, IT_STRUCTURE);

			Object_Script_Variable4_Link(Tools_Index_Encode(u->o.index, IT_UNIT), encoded);

			u->targetMove = u->o.script.variables[4];

			return encoded;
		}
	}

	find.houseID = Unit_GetHouseID(u);
	find.index   = 0xFFFF;
	find.type    = script->stack[script->stackPointer];

	while (true) {
		Structure *s;
		uint16 encoded;

		s = Structure_Find(&find);
		if (s == NULL) break;

		if (s->animation != 0) continue;
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

	u = Unit_Get_ByMemory(g_global->unitCurrent);

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

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	return u->o.flags.s.inTransport ? 1 : 0;
}

/**
 * Unknown function 22C4.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 1. Always.
 */
uint16 Script_Unit_Unknown22C4(ScriptEngine *script)
{
	Unit *u;
	uint16 loc06;
	uint16 position;

	VARIABLE_NOT_USED(script);

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	position = Tile_PackTile(Tile_Center(u->o.position));

	emu_push(position);
	emu_push(emu_cs); emu_push(0x22F0); emu_cs = 0x151A; f__151A_0114_0022_0B6C();
	emu_sp += 2;

	loc06 = g_global->variable_3A3E[Map_B4CD_0750(Tile_PackTile(u->o.position))][7] != 0 ? 0 : 1;

	if (u->o.script.variables[1] == 1) loc06 += 2;

	loc06 = (loc06 << 4) + (g_unitInfo[u->o.type].variable_4A == 3 ? 128 : 192);

	Map_GetTileByPosition(position)->houseID = Unit_GetHouseID(u);

	emu_push(4);
	emu_push(Unit_GetHouseID(u));
	emu_push(0);
	emu_push(u->o.position.s.y); emu_push(u->o.position.s.x);
	emu_push(0x33C8); emu_push(loc06);
	emu_push(emu_cs); emu_push(0x23BE); emu_cs = 0x151A; f__151A_000E_0013_5840();
	emu_sp += 14;

	return 1;
}

/**
 * Unknown function 246C.
 *
 * Stack: 0 - An unit type.
 *
 * @param script The script engine to operate on.
 * @return An encoded unit index.
 */
uint16 Script_Unit_Unknown246C(ScriptEngine *script)
{
	Unit *u;
	Unit *u2;
	uint16 encoded;
	uint16 encoded2;

	assert(g_global->unitCurrent.csip == g_global->objectCurrent.csip);

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	if (u->o.script.variables[4] != 0) return u->o.script.variables[4];
	if (!g_unitInfo[u->o.type].o.flags.s.variable_0100 || u->deviated != 0) return 0;

	encoded = Tools_Index_Encode(u->o.index, IT_UNIT);

	u2 = Unit_Unknown2BB5(script->stack[script->stackPointer], Unit_GetHouseID(u), encoded, false);
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

	assert(g_global->unitCurrent.csip == g_global->objectCurrent.csip);

	u = Unit_Get_ByMemory(g_global->unitCurrent);
	if (u->o.script.variables[4] == 0) return u->o.script.variables[4];

	u2 = Tools_Index_GetUnit(u->o.script.variables[4]);
	if (u2 == NULL || u2->o.type != UNIT_CARRYALL) return 0;

	Object_Script_Variable4_Clear(&u->o);
	u2->targetMove = 0;

	return 0;
}

/**
 * Finds a structure.
 *
 * Stack: 0 - A structure type.
 *
 * @param script The script engine to operate on.
 * @return An encoded structure index, or 0 if none found.
 */
uint16 Script_Unit_FindStructure(ScriptEngine *script)
{
	Unit *u;
	PoolFindStruct find;

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	find.houseID = Unit_GetHouseID(u);
	find.index   = 0xFFFF;
	find.type    = script->stack[script->stackPointer];

	while (true) {
		Structure *s;

		s = Structure_Find(&find);
		if (s == NULL) break;
		if (s->animation != 0) continue;
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
	Unit *u;
	UnitInfo *ui;

	VARIABLE_NOT_USED(script);

	u = Unit_Get_ByMemory(g_global->unitCurrent);
	ui = &g_unitInfo[u->o.type];

	/* "%s %s destroyed." */
	if (g_global->language == 1) {
		GUI_DisplayText(String_Get_ByIndex(0x13), 0, String_Get_ByIndex(ui->o.stringID_abbrev), (char *)emu_get_memorycsip(g_houseInfo[Unit_GetHouseID(u)].name));
	} else {
		GUI_DisplayText(String_Get_ByIndex(0x13), 0, (char *)emu_get_memorycsip(g_houseInfo[Unit_GetHouseID(u)].name), String_Get_ByIndex(ui->o.stringID_abbrev));
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

	u = Unit_Get_ByMemory(g_global->unitCurrent);
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

	VARIABLE_NOT_USED(script);

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	if (u->o.type != UNIT_HARVESTER) return 0;
	if (u->amount >= 100) return 0;

	packed = Tile_PackTile(u->o.position);

	emu_ax = Map_B4CD_0750(packed);
	if (emu_ax != 8 && emu_ax != 9) return 0;

	u->amount += Tools_Random_256() & 1;
	u->o.flags.s.inTransport = true;

	Unit_B4CD_01BF(2, u);

	if (u->amount > 100) u->amount = 100;

	if ((Tools_Random_256() & 0x1F) != 0) return 1;

	Map_B4CD_0AFA(packed, -1);

	return 0;
}

/**
 * Unknown function 27A4.
 *
 * Stack: 0 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return ??.
 */
uint16 Script_Unit_Unknown27A4(ScriptEngine *script)
{
	Unit *u;
	Unit *u2;
	uint16 encoded;
	uint16 index;

	u = Unit_Get_ByMemory(g_global->unitCurrent);
	encoded = script->stack[script->stackPointer];
	index = Tools_Index_Decode(encoded);

	switch (Tools_Index_GetType(encoded)) {
		case IT_TILE:
			if (!Map_IsValidPosition(index)) return 1;
			if (u->o.linkedID == 0XFF) return 1;
			u2 = Unit_Get_ByIndex(u->o.linkedID);
			u2->o.position = Tools_Index_GetTile(encoded);
			if (!Unit_Unknown0E2E(u2)) return 0;
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
 * Unknown function 28B1.
 *
 * Stack: 0 - An encoded index.
 *
 * @param script The script engine to operate on.
 * @return An encoded tile, or 0.
 */
uint16 Script_Unit_Unknown28B1(ScriptEngine *script)
{
	Unit *u;
	tile32 tile;

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	if (Tools_Index_GetType(script->stack[script->stackPointer]) != 1) return 0;

	emu_push(1);
	emu_push(80);
	emu_push(u->o.position.s.y); emu_push(u->o.position.s.x);
	emu_push(emu_cs); emu_push(0x28FA); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	emu_sp += 8;

	tile.s.x = emu_ax;
	tile.s.y = emu_dx;

	return Tools_Index_Encode(Tile_PackTile(tile), IT_TILE);
}

/**
 * Unknown function 291A.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_Unknown291A(ScriptEngine *script)
{
	Unit *u;
	uint16 random;
	uint16 movementType;
	uint16 i;

	VARIABLE_NOT_USED(script);

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	random = Tools_RandomRange(0, 10);
	movementType = g_unitInfo[u->o.type].movementType;

	if (movementType != MOVEMENT_FOOT && movementType != MOVEMENT_TRACKED && movementType != MOVEMENT_WHEELED) return 0;

	if (movementType == MOVEMENT_FOOT && random > 8) {
		u->variable_6D = Tools_Random_256() & 0x3F;
		Unit_B4CD_01BF(2, u);
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
 * Stack: 0 - The type of the structure.
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

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	find.houseID = Unit_GetHouseID(u);
	find.index   = 0xFFFF;
	find.type    = script->stack[script->stackPointer];

	while (true) {
		Structure *s2;
		uint16 distance;

		s2 = Structure_Find(&find);

		if (s2 == NULL) break;
		if (s2->animation != 0) continue;
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

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	Unit_B4CD_01BF(0, u);

	for (i = 0; i < 4; i++) {
		s = Structure_Create(0xFFFF, STRUCTURE_CONSTRUCTION_YARD, Unit_GetHouseID(u), Tile_PackTile(u->o.position) + g_global->variable_628C[i]);

		if (s != NULL) {
			Unit_Unknown10EC(u);
			return 1;
		}
	}

	if (Unit_GetHouseID(u) == g_global->playerHouseID) {
		/* "Unit is unable to deploy here." */
		GUI_DisplayText(String_Get_ByIndex(0x14), 0);
	}

	Unit_B4CD_01BF(1, u);

	return 0;
}

/**
 * Unknown function 2B97.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return An encoded unit index, or 0.
 */
uint16 Script_Unit_Unknown2B97(ScriptEngine *script)
{
	Unit *u;
	Unit *u2;

	VARIABLE_NOT_USED(script);

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	u2 = Unit_Unknown15F4(u);
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

	assert(g_global->unitCurrent.csip == g_global->objectCurrent.csip);

	u = Unit_Get_ByMemory(g_global->unitCurrent);

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
 * Unknown function 2C73.
 *
 * Stack: *none*.
 *
 * @param script The script engine to operate on.
 * @return The value 0. Always.
 */
uint16 Script_Unit_Unknown2C73(ScriptEngine *script)
{
	Unit *u;

	VARIABLE_NOT_USED(script);

	u = Unit_Get_ByMemory(g_global->unitCurrent);
	u->variable_6E = 32;
	return 0;
}
