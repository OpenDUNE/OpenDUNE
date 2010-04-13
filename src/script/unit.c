/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
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

extern void f__06F7_0008_0018_D7CD();
extern void f__0C10_0008_0014_19CD();
extern void f__0C10_0182_0012_B114();
extern void f__0F3F_0125_000D_4868();
extern void f__0F3F_01A1_0018_9631();
extern void f__1423_0BCC_0012_111A();
extern void f__B4CD_01BF_0016_E78F();
extern void f__B4CD_08E7_002B_DC75();
extern void emu_Object_GetScriptVariable4();
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

			emu_push(g_global->objectCurrent.s.cs); emu_push(g_global->objectCurrent.s.ip);
			emu_push(emu_cs); emu_push(0x0F20); emu_cs = 0x0C10; emu_Object_GetScriptVariable4();
			emu_sp += 4;

			u->targetMove = emu_ax;

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

