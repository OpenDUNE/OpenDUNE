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

extern void f__06F7_0008_0018_D7CD();
extern void f__0C10_0008_0014_19CD();
extern void f__0C10_0182_0012_B114();
extern void f__0C3A_2207_001D_EDF2();
extern void f__0F3F_0125_000D_4868();
extern void f__0F3F_01A1_0018_9631();
extern void f__1319_002D_0023_320C();
extern void f__1423_0BCC_0012_111A();
extern void f__151A_000E_0013_5840();
extern void f__151A_0114_0022_0B6C();
extern void f__167E_0319_0010_B56F();
extern void f__B483_0000_0019_F96A();
extern void f__B4CD_01BF_0016_E78F();
extern void f__B4CD_0750_0027_7BA5();
extern void f__B4CD_08E7_002B_DC75();
extern void f__B4CD_0AFA_0011_D5DB();
extern void f__B4CD_1086_0040_F11C();
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

	if (Tools_Random_256() >= g_unitInfo[u->type].variable_0E) return 0;

	emu_push(1);
	emu_push(20);
	emu_push(u->position.s.y); emu_push(u->position.s.x);
	emu_push(emu_cs); emu_push(0x2403); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	emu_sp += 8;

	position.s.x = emu_ax;
	position.s.y = emu_dx;

	nu = Unit_Create(UNIT_INDEX_INVALID, UNIT_SOLDIER, u->houseID, position, Tools_Random_256());

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

	emu_push(g_global->structureStartPos.s.cs); emu_push(g_global->structureStartPos.s.ip + s->index * sizeof(Structure));
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

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	if (u->linkedID == 0xFF) return 0;
	if (Tools_Index_GetType(u->targetMove) == IT_UNIT) return 0;

	if (Tools_Index_GetType(u->targetMove) == IT_STRUCTURE) {
		Structure *s;
		StructureInfo *si;

		s = Tools_Index_GetStructure(u->targetMove);
		si = &g_structureInfo[s->type];

		if (s->type == STRUCTURE_STARPORT) {
			uint16 ret = 0;

			if (s->animation == 1) {
				s->linkedID = u->linkedID;
				u->linkedID = 0xFF;
				u->flags.s.inTransport = false;
				u->amount = 0;

				emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
				emu_push(2);
				emu_push(emu_cs); emu_push(0x093E); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
				emu_sp += 6;

				emu_push(u->position.s.y); emu_push(u->position.s.x);
				emu_push(24);
				emu_push(emu_cs); emu_push(0x0956); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
				emu_sp += 6;

				Structure_SetAnimation(s, 2);

				ret = 1;
			}

			emu_push(g_global->objectCurrent.s.cs); emu_push(g_global->objectCurrent.s.ip);
			emu_push(emu_cs); emu_push(0x0999); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
			emu_sp += 4;

			u->targetMove = 0;

			return ret;
		}

		if ((s->animation == 0 || (si->flags.s.variable_0010 && s->animation == 1)) && s->linkedID == 0xFF) {
			emu_push(u->position.s.y); emu_push(u->position.s.x);
			emu_push(24);
			emu_push(emu_cs); emu_push(0x09EF); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
			emu_sp += 6;

			Unit_EnterStructure(Unit_Get_ByIndex(u->linkedID), s);

			emu_push(g_global->objectCurrent.s.cs); emu_push(g_global->objectCurrent.s.ip);
			emu_push(emu_cs); emu_push(0x0A1F); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
			emu_sp += 4;

			u->targetMove = 0;
			u->linkedID = 0xFF;
			u->flags.s.inTransport = false;
			u->amount = 0;

			emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
			emu_push(2);
			emu_push(emu_cs); emu_push(0x0A58); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
			emu_sp += 6;

			return 1;
		}

		emu_push(g_global->objectCurrent.s.cs); emu_push(g_global->objectCurrent.s.ip);
		emu_push(emu_cs); emu_push(0x0A6D); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
		emu_sp += 4;

		u->targetMove = 0;

		return 0;
	}

	if (!Map_IsValidPosition(Tile_PackTile(Tile_Center(u->position)))) return 0;

	u2 = Unit_Get_ByIndex(u->linkedID);

	if (!Unit_SetPosition(u2, Tile_Center(u->position))) return 0;

	if (u2->houseID == g_global->playerHouseID) {
		emu_push(u->position.s.y); emu_push(u->position.s.x);
		emu_push(24);
		emu_push(emu_cs); emu_push(0x0B11); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
		emu_sp += 6;
	}

	Unit_Unknown1E99(u2, u->variable_62[0][2], true, 0);
	Unit_Unknown1E99(u2, u->variable_62[0][2], true, 1);
	Unit_Unknown204C(u2, 0);

	u->linkedID = u2->linkedID;
	u2->linkedID = 0xFF;

	if (u->linkedID != 0xFF) return 1;

	u->flags.s.inTransport = false;
	u->targetMove = 0;

	emu_push(g_global->objectCurrent.s.cs); emu_push(g_global->objectCurrent.s.ip);
	emu_push(emu_cs); emu_push(0x0BA9); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	emu_sp += 4;

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

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	if (u->linkedID != 0xFF) return 0;

	switch (Tools_Index_GetType(u->targetMove)) {
		case IT_STRUCTURE: {
			Structure *s;
			Unit *u2;

			s = Tools_Index_GetStructure(u->targetMove);

			if (s->animation != 2) {
				emu_push(g_global->objectCurrent.s.cs); emu_push(g_global->objectCurrent.s.ip);
				emu_push(emu_cs); emu_push(0x0D69); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
				emu_sp += 4;

				u->targetMove = 0;
				return 0;
			}

			u->flags.s.inTransport = true;

			emu_push(g_global->objectCurrent.s.cs); emu_push(g_global->objectCurrent.s.ip);
			emu_push(emu_cs); emu_push(0x0C43); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
			emu_sp += 4;

			u->targetMove = 0;

			u2 = Unit_Get_ByIndex(s->linkedID);

			u->linkedID = u2->index & 0xFF;
			s->linkedID = u2->linkedID;
			u2->linkedID = 0xFF;

			if (s->linkedID == 0xFF) Structure_SetAnimation(s, 0);

			if (u2->variable_5A.tile != 0) {
				u->targetMove = Tools_Index_Encode(Tile_PackTile(u2->variable_5A), IT_TILE);
			} else if (u2->type == UNIT_HARVESTER && Unit_GetHouseID(u2) != g_global->playerHouseID) {
				emu_push(Unit_GetHouseID(u));
				emu_push(20);
				emu_push(Tile_PackTile(u->position));
				emu_push(emu_cs); emu_push(0x0D24); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_08E7_002B_DC75();
				emu_sp += 6;

				u->targetMove = Tools_Index_Encode(emu_ax, IT_TILE);
			}

			emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
			emu_push(2);
			emu_push(emu_cs); emu_push(0x0D51); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
			emu_sp += 6;

			return 1;
		}

		case IT_UNIT: {
			Unit *u2;
			Structure *s = NULL;
			PoolFindStruct find;
			int16 minDistance = 0;

			u2 = Tools_Index_GetUnit(u->targetMove);

			if (!u2->flags.s.allocated) return 0;

			find.houseID = Unit_GetHouseID(u);
			find.index   = 0xFFFF;
			find.type    = 0xFFFF;

			while (true) {
				Structure *s2;
				int16 distance;

				s2 = Structure_Find(&find);
				if (s2 == NULL) break;

				distance = Tile_GetDistanceRoundedUp(s2->position, u->position);

				if (u2->type == UNIT_HARVESTER) {
					if (s2->type != STRUCTURE_REFINERY || s2->animation != 0 || s2->script.variables[4] != 0) continue;
					if (minDistance != 0 && distance >= minDistance) break;
					minDistance = distance;
					s = s2;
					break;
				}

				if (s2->type != STRUCTURE_REPAIR || s2->animation != 0 || s2->script.variables[4] != 0) continue;

				if (minDistance != 0 && distance >= minDistance) continue;
				minDistance = distance;
				s = s2;
			}

			if (s == NULL) return 0;

			{
				Unit *selected = (g_global->selectionUnit.csip == 0) ? NULL : Unit_Get_ByMemory(g_global->selectionUnit);
				if (u2 == selected) Unit_Select(NULL);
			}

			u->linkedID = u2->index & 0xFF;
			u->flags.s.inTransport = true;

			emu_push(g_global->unitStartPos.s.cs); emu_push(g_global->unitStartPos.s.ip + u2->index * sizeof(Unit));
			emu_push(0);
			emu_push(emu_cs); emu_push(0x0ED7); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
			emu_sp += 6;

			Unit_Unknown2AAA(u2);

			emu_push(Tools_Index_Encode(s->index, IT_STRUCTURE));
			emu_push(Tools_Index_Encode(u->index, IT_UNIT));
			emu_push(emu_cs); emu_push(0x0F11); emu_cs = 0x0C10; f__0C10_0008_0014_19CD();
			emu_sp += 4;

			u->targetMove = emu_get_memory16(g_global->objectCurrent.s.cs, g_global->objectCurrent.s.ip, 0x26); /* object->script.variables[4] */

			emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
			emu_push(2);
			emu_push(emu_cs); emu_push(0x0F3B); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
			emu_sp +=6;

			if (u2->type != UNIT_HARVESTER) return 0;

			emu_push(Unit_GetHouseID(u2));
			emu_push(2);
			emu_push(Tile_PackTile(u2->position));
			emu_push(emu_cs); emu_push(0x0F72); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_08E7_002B_DC75();
			emu_sp += 6;

			if (emu_ax == 0) {
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

	emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
	emu_push(2);
	emu_push(emu_cs); emu_push(0x0FC9); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	emu_sp += 6;

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

	if (!u->flags.s.byScenario) param = param * 192 / 256;

	if (g_unitInfo[u->type].variable_3C == 4) param = Tools_AdjustToGameSpeed(param, 0, 255, true);

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

	emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
	emu_push(2);
	emu_push(emu_cs); emu_push(0x108F); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	emu_sp += 6;

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
	uint16 loc12;
	uint16 loc14;

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	if (u->targetMove == 0) return 0;

	tile = Tools_Index_GetTile(u->targetMove);

	distance = Tile_GetDistance(u->position, tile);

	if ((int16)distance < 128) {
		Unit_Unknown204C(u, 0);

		u->position.s.x += clamp((int16)(tile.s.x - u->position.s.x), -16, 16);
		u->position.s.y += clamp((int16)(tile.s.y - u->position.s.y), -16, 16);

		emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
		emu_push(2);
		emu_push(emu_cs); emu_push(0x11BA); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
		emu_sp += 6;

		if ((int16)distance < 32) return 1;

		/* XXX -- Lovely hackish */
		*(((uint16 *)script) - 1) = 2;

		script->script.s.ip -= 2;
		return 0;
	}

	emu_push(tile.s.y); emu_push(tile.s.x);
	emu_push(u->position.s.y); emu_push(u->position.s.x);
	emu_push(emu_cs); emu_push(0x11E2); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	emu_sp += 8;

	loc12 = emu_ax;

	Unit_Unknown1E99(u, loc12 & 0xFF, false, 0);

	loc14 = loc12 - u->variable_62[0][2];

	if ((int16)loc14 < 0) loc14 = -loc14;

	Unit_Unknown204C(u, Tools_AdjustToGameSpeed(min(distance / 8, 255), 25, 255, true) * (255 - loc14) / 256);

	delay = max((int16)distance / 1024, 1);

	emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
	emu_push(2);
	emu_push(emu_cs); emu_push(0x12A9); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	emu_sp += 6;

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
	ui = &g_unitInfo[u->type];

	Unit_Unknown10EC(u);

	if (ui->variable_3C != 4) {
		uint16 credits;

		credits = max(ui->buildCredits / 100, 1);

		if (u->houseID == g_global->playerHouseID) {
			g_global->scenario.variable_3A++;
			g_global->scenario.variable_0002 -= credits;
		} else {
			g_global->scenario.variable_3C++;
			g_global->scenario.variable_0002 += credits;
		}
	}

	emu_push(g_global->playerHouseID);
	emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
	emu_push(emu_cs); emu_push(0x134E); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
	emu_sp += 6;

	if (u->type != UNIT_SABOTEUR) return 0;

	emu_push(0);
	emu_push(300);
	emu_push(u->position.s.y); emu_push(u->position.s.x);
	emu_push(4);
	emu_push(emu_cs); emu_push(0x1378); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
	emu_sp += 10;

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

	emu_push(Tools_Index_Encode(u->index, IT_UNIT));
	emu_push(g_unitInfo[u->type].hitpoints);
	emu_push(u->position.s.y); emu_push(u->position.s.x);
	emu_push(script->stack[script->stackPointer]);
	emu_push(emu_cs); emu_push(0x13C4); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
	emu_sp += 10;

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

	emu_push(0);
	emu_push(Tools_RandomRange(25, 50));
	emu_push(u->position.s.y); emu_push(u->position.s.x);
	emu_push(11);
	emu_push(emu_cs); emu_push(0x13F9); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
	emu_sp += 10;

	for (i = 0; i < 7; i++) {
		emu_push(0);
		emu_push(script->stack[script->stackPointer]);
		emu_push(u->position.s.y); emu_push(u->position.s.x);
		emu_push(emu_cs); emu_push(0x143A); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
		emu_sp += 8;

		emu_push(0);
		emu_push(Tools_RandomRange(75, 150));
		emu_push(emu_dx); emu_push(emu_ax);
		emu_push(11);
		emu_push(emu_cs); emu_push(0x1448); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
		emu_sp += 10;
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
	uint16 loc12;
	uint16 distance;
	bool loc1A;
	uint16 damage;

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	target = u->targetAttack;
	if (target == 0 || !Tools_Index_IsValid(target)) return 0;

	if (u->type != UNIT_SANDWORM && target == Tools_Index_Encode(Tile_PackTile(u->position), IT_TILE)) u->targetAttack = 0;

	if (u->targetAttack != target) {
		Unit_SetTarget(u, target);
		return 0;
	}

	ui = &g_unitInfo[u->type];

	if (u->type != UNIT_SANDWORM && u->variable_62[ui->flags.s.variable_0040 ? 1 : 0][0] != 0) return 0;

	if (Tools_Index_GetType(target) == IT_TILE) {
		emu_push(Tools_Index_GetPackedTile(target));
		emu_push(emu_cs); emu_push(0x156E); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1086_0040_F11C();
		emu_sp += 2;

		if (emu_ax != 0) Unit_SetTarget(u, target);
	}

	if (u->fireDelay != 0) return 0;

	emu_push(target);
	emu_push(g_global->objectCurrent.s.cs); emu_push(g_global->objectCurrent.s.ip);
	emu_push(emu_cs); emu_push(0x15B0); emu_cs = 0x167E; f__167E_0319_0010_B56F();
	emu_sp += 6;

	distance = emu_ax;

	if ((int16)(ui->variable_50 << 8) < (int16)distance) return 0;

	loc12 = 0;
	if (u->type != UNIT_SANDWORM && (Tools_Index_GetType(target) != IT_UNIT || g_unitInfo[Tools_Index_GetUnit(target)->type].variable_3C != 4)) {
		tile32 tile = Tools_Index_GetTile(target);
		emu_push(tile.s.y); emu_push(tile.s.x);
		emu_push(u->position.s.y); emu_push(u->position.s.x);
		emu_push(emu_cs); emu_push(0x15E1); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
		emu_sp += 8;

		loc12 = u->variable_62[ui->flags.s.variable_0040 ? 1 : 0][2] - emu_ax;
		if ((int16)loc12 < 0) loc12 = -loc12;
		if (ui->variable_3C == 4) loc12 /= 8;
	}

	if (loc12 >= 8) return 0;

	damage = ui->damage;
	typeID = ui->bulletType;

	loc1A = (ui->variable_36 & 0x400) != 0 && u->hitpoints > ui->hitpoints / 2;

	if ((u->type == UNIT_TROOPERS || u->type == UNIT_TROOPER) && (int16)distance > 512) typeID = UNIT_MISSILE_TROOPER;

	switch (typeID) {
		case UNIT_SANDWORM: {
			Unit *u2;

			emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
			emu_push(0);
			emu_push(emu_cs); emu_push(0x16F6); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
			emu_sp += 6;

			u2 = Tools_Index_GetUnit(target);

			if (u2 != NULL) {
				u2->script.variables[1] = 0xFFFF;
				Unit_Unknown379B(u2);

				emu_push(g_global->playerHouseID);
				emu_push(g_global->unitStartPos.s.cs); emu_push(g_global->unitStartPos.s.ip + u2->index * sizeof(Unit));
				emu_push(emu_cs); emu_push(0x1733); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
				emu_sp += 6;

				Unit_Unknown10EC(u2);
			}

			emu_push(0);
			emu_push(0);
			emu_push(u->position.s.y); emu_push(u->position.s.x);
			emu_push(ui->variable_54);
			emu_push(emu_cs); emu_push(0x1762); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
			emu_sp += 10;

			emu_push(u->position.s.y); emu_push(u->position.s.x);
			emu_push(63);
			emu_push(emu_cs); emu_push(0x177A); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
			emu_sp += 6;

			emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
			emu_push(1);
			emu_push(emu_cs); emu_push(0x178E); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
			emu_sp += 6;

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

			bullet = Unit_CreateBullet(u->position, typeID, Unit_GetHouseID(u), damage, target);

			if (bullet == NULL) return 0;

			bullet->originEncoded = Tools_Index_Encode(u->index, IT_UNIT);

			emu_push(u->position.s.y); emu_push(u->position.s.x);
			emu_push(ui->variable_58);
			emu_push(emu_cs); emu_push(0x184F); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
			emu_sp += 6;

			Unit_Deviation_Decrease(u, 20);
		} break;

		default: break;
	}

	u->fireDelay = Tools_AdjustToGameSpeed(ui->fireDelay * 2, 1, 255, true) & 0xFF;

	if (loc1A) {
		u->flags.s.unknown_0010 = !u->flags.s.unknown_0010;
		if (u->flags.s.unknown_0010) u->fireDelay = Tools_AdjustToGameSpeed(5, 1, 10, true) & 0xFF;
	} else {
		u->flags.s.unknown_0010 = false;
	}

	u->fireDelay += Tools_Random_256() & 1;

	emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
	emu_push(2);
	emu_push(emu_cs); emu_push(0x1912); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	emu_sp += 6;

	return 1;
}

/**
 * Unknown function 1932.
 *
 * Stack: 0 - ??.
 *
 * @param script The script engine to operate on.
 * @return ??.
 */
uint16 Script_Unit_Unknown1932(ScriptEngine *script)
{
	Unit *u;

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	Unit_Unknown1E99(u, script->stack[script->stackPointer] & 0xFF, false, 0);

	return u->variable_62[0][2];
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
	uint16 loc04;
	tile32 tile;
	uint16 locsi;

	VARIABLE_NOT_USED(script);

	u = Unit_Get_ByMemory(g_global->unitCurrent);
	ui = &g_unitInfo[u->type];

	if (ui->variable_3C != 4 && u->variable_49.tile != 0) return 1;

	locdi = ui->flags.s.variable_0040 ? 1 : 0;

	if (u->variable_62[locdi][0] != 0) return 1;
	loc04 = u->variable_62[locdi][2];

	if (!Tools_Index_IsValid(u->targetAttack)) return 0;

	tile = Tools_Index_GetTile(u->targetAttack);

	emu_push(tile.s.y); emu_push(tile.s.x);
	emu_push(u->position.s.y); emu_push(u->position.s.x);
	emu_push(emu_cs); emu_push(0x1A13); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	emu_sp += 8;

	locsi = emu_ax;

	if (locsi == loc04) return 0;

	Unit_Unknown1E99(u, locsi & 0xFF, false, locdi);

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
		emu_push(u->position.s.y); emu_push(u->position.s.x);
		emu_push(emu_cs); emu_push(0x1A89); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
		emu_sp += 8;

		return emu_ax;
	}

	return u->variable_62[0][2];
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

	if (u->type == UNIT_HARVESTER) {
		Structure *s;

		s = Tools_Index_GetStructure(encoded);
		if (s == NULL) {
			u->targetMove = encoded;
			u->variable_72[0] = 0xFF;
			return 0;
		}

		if (s->script.variables[4] != 0) return 0;
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
	uint16 locdi;

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	target = script->stack[script->stackPointer];

	if (target == 0 || !Tools_Index_IsValid(target)) {
		u->targetAttack = 0;
		return 0;
	}

	tile = Tools_Index_GetTile(target);

	emu_push(tile.s.y); emu_push(tile.s.x);
	emu_push(u->position.s.y); emu_push(u->position.s.x);
	emu_push(emu_cs); emu_push(0x1B95); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	emu_sp += 8;

	locdi = emu_ax;

	u->targetAttack = target;
	if (!g_unitInfo[u->type].flags.s.variable_0040) {
		u->targetMove = target;
		Unit_Unknown1E99(u, locdi & 0xFF, false, 0);
	}
	Unit_Unknown1E99(u, locdi & 0xFF, false, 1);

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

	if (u->houseID == g_global->playerHouseID && action == ACTION_HARVEST && u->nextActionID != ACTION_INVALID) return 0;

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

	Unit_SetAction(u, g_unitInfo[u->type].actionsPlayer[3]);

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

	if (u->variable_49.tile == 0 || (g_unitInfo[u->type].variable_36 & 0x8000) != 0) {
		u->variable_49 = Tools_Index_GetTile(encoded);
	}

	emu_push(u->variable_49.s.y); emu_push(u->variable_49.s.x);
	emu_push(u->position.s.y); emu_push(u->position.s.x);
	emu_push(emu_cs); emu_push(0x1CE1); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	emu_sp += 8;

	Unit_Unknown1E99(u, emu_ax & 0xFF, false, 0);

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
	ui = &g_unitInfo[u->type];

	switch (script->stack[script->stackPointer]) {
		case 0x00: return u->hitpoints * 256 / ui->hitpoints;
		case 0x01: return Tools_Index_IsValid(u->targetMove) ? u->targetMove : 0;
		case 0x02: return ui->variable_50 << 8;
		case 0x03: return u->index;
		case 0x04: return u->variable_62[0][2];
		case 0x05: return u->targetAttack;
		case 0x06:
			if (u->originEncoded == 0 || u->type == UNIT_HARVESTER) Unit_FindClosestRefinery(u);
			return u->originEncoded;
		case 0x07: return u->type;
		case 0x08: return Tools_Index_Encode(u->index, IT_UNIT);
		case 0x09: return u->variable_6B;
		case 0x0A: return abs(u->variable_62[0][1] - u->variable_62[0][2]);
		case 0x0B: return u->variable_49.tile == 0 ? 0 : 1;
		case 0x0C: return u->fireDelay == 0 ? 1 : 0;
		case 0x0D: return ui->variable_36 & 0x4;
		case 0x0E: return Unit_GetHouseID(u);
		case 0x0F: return u->flags.s.byScenario ? 1 : 0;
		case 0x10: return u->variable_62[ui->flags.s.variable_0040 ? 1 : 0][2];
		case 0x11: return abs(u->variable_62[ui->flags.s.variable_0040 ? 1 : 0][1] - u->variable_62[ui->flags.s.variable_0040 ? 1 : 0][2]);
		case 0x12: return (ui->variable_3C & 0x40) == 0 ? 0 : 1;
		case 0x13: return (u->variable_09 & (1 << g_global->playerHouseID)) == 0 ? 0 : 1;
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

	packed = Tile_PackTile(u->position);
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
			if (u->type == UNIT_SANDWORM) {
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

	if (u->variable_62[0][2] != u->variable_72[0] * 32) {
		Unit_Unknown1E99(u, u->variable_72[0] * 32, false, 0);
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

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	if (u->linkedID != 0xFF) {
		Structure *s;

		s = Tools_Index_GetStructure(Unit_Get_ByIndex(u->linkedID)->originEncoded);

		if (s != NULL && s->animation == 0 && s->script.variables[4] == 0) {
			uint16 encoded;

			encoded = Tools_Index_Encode(s->index, IT_STRUCTURE);

			emu_push(encoded);
			emu_push(Tools_Index_Encode(u->index, IT_UNIT));
			emu_push(emu_cs); emu_push(0x21CD); emu_cs = 0x0C10; f__0C10_0008_0014_19CD();
			emu_sp += 4;

			u->targetMove = emu_get_memory16(g_global->objectCurrent.s.cs, g_global->objectCurrent.s.ip, 0x26); /* object->script.variables[4] */

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
		if (s->script.variables[4] != 0) continue;

		encoded = Tools_Index_Encode(s->index, IT_STRUCTURE);

		emu_push(encoded);
		emu_push(Tools_Index_Encode(u->index, IT_UNIT));
		emu_push(emu_cs); emu_push(0x2243); emu_cs = 0x0C10; f__0C10_0008_0014_19CD();
		emu_sp += 4;

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

	if (u->linkedID == 0xFF) return u->amount;

	return Unit_Get_ByIndex(u->linkedID)->amount;
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

	return u->flags.s.inTransport ? 1 : 0;
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

	position = Tile_PackTile(Tile_Center(u->position));

	emu_push(position);
	emu_push(emu_cs); emu_push(0x22F0); emu_cs = 0x151A; f__151A_0114_0022_0B6C();
	emu_sp += 2;

	emu_push(Tile_PackTile(u->position));
	emu_push(emu_cs); emu_push(0x230A); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
	emu_sp += 2;

	loc06 = g_global->variable_3A3E[emu_ax][7] != 0 ? 0 : 1;

	if (u->script.variables[1] == 1) loc06 += 2;

	loc06 = (loc06 << 4) + (g_unitInfo[u->type].variable_4A == 3 ? 128 : 192);

	Map_GetTileByPosition(position)->houseID = Unit_GetHouseID(u);

	emu_push(4);
	emu_push(Unit_GetHouseID(u));
	emu_push(0);
	emu_push(u->position.s.y); emu_push(u->position.s.x);
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
	uint16 variable4;
	uint16 encoded;
	uint16 encoded2;

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	variable4 = emu_get_memory16(g_global->objectCurrent.s.cs, g_global->objectCurrent.s.ip, 0x26); /* object->script.variables[4] */

	if (variable4 != 0) return variable4;

	if (!g_unitInfo[u->type].flags.s.variable_0100 || u->deviated != 0) return 0;

	encoded = Tools_Index_Encode(u->index, IT_UNIT);

	u2 = Unit_Unknown2BB5(script->stack[script->stackPointer], Unit_GetHouseID(u), encoded, false);

	if (u2 == NULL) return 0;

	encoded2 = Tools_Index_Encode(u2->index, IT_UNIT);

	emu_push(encoded2);
	emu_push(encoded);
	emu_push(emu_cs); emu_push(0x2539); emu_cs = 0x0C10; f__0C10_0008_0014_19CD();
	emu_sp += 4;

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
	uint16 variable4;

	VARIABLE_NOT_USED(script);

	variable4 = emu_get_memory16(g_global->objectCurrent.s.cs, g_global->objectCurrent.s.ip, 0x26); /* object->script.variables[4] */

	if (variable4 == 0) return 0;

	u = Tools_Index_GetUnit(variable4);

	if (u == NULL || u->type != UNIT_CARRYALL) return 0;

	u->targetMove = 0;

	emu_push(g_global->objectCurrent.s.cs); emu_push(g_global->objectCurrent.s.ip);
	emu_push(emu_cs); emu_push(0x259A); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	emu_sp += 4;

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
		if (s->linkedID != 0xFF) continue;
		if (s->script.variables[4] != 0) continue;

		return Tools_Index_Encode(s->index, IT_STRUCTURE);
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
	ui = &g_unitInfo[u->type];

	/* "%s %s destroyed." */
	if (g_global->language == 1) {
		GUI_DisplayText(String_Get_ByIndex(0x13), 0, String_Get_ByIndex(ui->stringID_abbrev), (char *)emu_get_memorycsip(g_houseInfo[Unit_GetHouseID(u)].name));
	} else {
		GUI_DisplayText(String_Get_ByIndex(0x13), 0, (char *)emu_get_memorycsip(g_houseInfo[Unit_GetHouseID(u)].name), String_Get_ByIndex(ui->stringID_abbrev));
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
 * Unknown function 26E5.
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

	u = Unit_Get_ByMemory(g_global->unitCurrent);

	if (u->type != UNIT_HARVESTER) return 0;
	if (u->amount >= 100) return 0;

	packed = Tile_PackTile(u->position);

	emu_push(packed);
	emu_push(emu_cs); emu_push(0x2721); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
	emu_sp += 2;

	if (emu_ax != 8 && emu_ax != 9) return 0;

	u->amount += Tools_Random_256() & 1;
	u->flags.s.inTransport = true;

	emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
	emu_push(2);
	emu_push(emu_cs); emu_push(0x2762); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	emu_sp += 6;

	if (u->amount > 100) u->amount = 100;

	if ((Tools_Random_256() & 0x1F) != 0) return 1;

	emu_push(0xFFFF);
	emu_push(packed);
	emu_push(emu_cs); emu_push(0x278D); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0AFA_0011_D5DB();
	emu_sp += 4;

	return 0;
}
