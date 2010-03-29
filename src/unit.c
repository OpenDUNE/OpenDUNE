/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "os/strings.h"
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/pool.h"
#include "pool/house.h"
#include "pool/structure.h"
#include "pool/unit.h"
#include "pool/team.h"
#include "house.h"
#include "map.h"
#include "script/script.h"
#include "tile.h"
#include "tools.h"
#include "unit.h"
#include "team.h"
#include "structure.h"
#include "unknown/unknown.h"

extern void f__06F7_0008_0018_D7CD();
extern void f__0C10_0008_0014_19CD();
extern void f__0C10_0182_0012_B114();
extern void f__0C3A_1216_0013_E56D();
extern void f__0F3F_0125_000D_4868();
extern void f__0F3F_028E_0015_1153();
extern void f__1423_08CD_0012_0004();
extern void f__1423_0BCC_0012_111A();
extern void f__151A_000E_0013_5840();
extern void f__15C2_044C_0012_C66D();
extern void f__1A34_0E2E_0015_7E65();
extern void f__1A34_204C_0043_B1ED();
extern void f__1A34_2134_001E_3E9A();
extern void f__1A34_27A8_0012_7198();
extern void f__1A34_2C95_001B_89A2();
extern void f__1A34_3014_001B_858E();
extern void f__1A34_3146_0018_6887();
extern void f__1A34_379B_0015_B07B();
extern void f__10E4_0117_0015_392D();
extern void f__10E4_0F1A_0088_7622();
extern void f__B4CD_00A5_0016_24FA();
extern void f__B4CD_01BF_0016_E78F();
extern void f__B4CD_0750_0027_7BA5();
extern void f__B4CD_1086_0040_F11C();
extern void f__B4CD_14CA_0013_F579();
extern void f__B4CD_154C_0015_B7FB();
extern void f__B4CD_160C_0014_FAD7();
extern void f__B4CD_17DC_0019_CB46();
extern void f__B4CD_17F7_001D_1CA2();
extern void f__B4E9_0050_003F_292A();
extern void emu_Map_DeviateArea();
extern void emu_Map_IsPositionInViewport();
extern void emu_Object_GetScriptVariable4();
extern void emu_Object_IsScriptVariable4NotNull();
extern void emu_Tile_RemoveFogInRadius();
extern void overlay(uint16 cs, uint8 force);

UnitInfo *g_unitInfo = NULL;
ActionInfo *g_actionInfo = NULL;

/**
 * Initialize the unit system.
 *
 * @init System_Init_Unit
 */
void System_Init_Unit()
{
	g_unitInfo = (UnitInfo *)&emu_get_memory8(0x2D07, 0x0, 0x0);
	g_actionInfo = (ActionInfo *)&emu_get_memory8(0x2E8A, 0x0, 0x6E);
}

/**
 * Unknwown function 1F55.
 *
 * @param unit The Unit to operate on.
 * @param i ??.
 */
void Unit_Unknown1F55(Unit *unit, uint16 i)
{
	csip32 ucsip;
	uint8 loc02;
	uint8 loc04;
	int16 loc06;
	int16 locsi;
	uint16 locax;

	assert(i < 2);

	if (unit->variable_62[i][0] == 0) return;

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	ucsip.s.cs = g_global->unitStartPos.s.cs;
	ucsip.s.ip = g_global->unitStartPos.s.ip + unit->index * sizeof(Unit);

	loc02 = unit->variable_62[i][1];
	loc04 = unit->variable_62[i][2];
	locsi = loc02 - loc04;

	if (locsi > 128) locsi -= 256;
	if (locsi < -128) locsi += 256;
	locsi = abs(locsi);

	loc06 = loc04 - unit->variable_62[i][0];

	if (abs(loc06) >= locsi) {
		unit->variable_62[i][0] = 0;
		loc06 = loc02;
	}

	unit->variable_62[i][2] = loc06 & 0xFF;

	emu_push(loc06);
	emu_push(emu_cs); emu_push(0x2009); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17F7_001D_1CA2();
	emu_sp += 2;

	locax = emu_ax;

	emu_push(loc04);
	emu_push(emu_cs); emu_push(0x2013); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17F7_001D_1CA2();
	emu_sp += 2;

	if (locax != emu_ax) {
		emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
		emu_push(2);
		emu_push(emu_cs); emu_push(0x2040); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
		emu_sp += 6;
		return;
	}

	emu_push(loc06);
	emu_push(emu_cs); emu_push(0x2021); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17DC_0019_CB46();
	emu_sp += 2;

	locax = emu_ax;

	emu_push(loc04);
	emu_push(emu_cs); emu_push(0x202B); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17DC_0019_CB46();
	emu_sp += 2;

	if (locax == emu_ax) return;

	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(2);
	emu_push(emu_cs); emu_push(0x2040); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	emu_sp += 6;
}

/**
 * Loop over all units, preforming various of tasks.
 */
void GameLoop_Unit()
{
	PoolFindStruct find;
	bool tickUnknown1  = false;
	bool tickUnknown2  = false;
	bool tickUnknown3  = false;
	bool tickUnknown4  = false;
	bool tickScript    = false;
	bool tickUnknown5  = false;
	bool tickDeviation = false;

	if (g_global->debugScenario) return;

	if (g_global->tickUnitUnknown1 <= g_global->tickGlobal) {
		tickUnknown1 = true;
		g_global->tickUnitUnknown1 = g_global->tickGlobal + 3;
	}

	if (g_global->tickUnitUnknown2 <= g_global->tickGlobal) {
		tickUnknown2 = true;
		g_global->tickUnitUnknown2 = g_global->tickGlobal + Tools_AdjustToGameSpeed(4, 2, 8, true);
	}

	if (g_global->tickUnitUnknown3 <= g_global->tickGlobal) {
		tickUnknown3 = true;
		g_global->tickUnitUnknown3 = g_global->tickGlobal + 3;
	}

	if (g_global->tickUnitUnknown4 <= g_global->tickGlobal) {
		tickUnknown4 = true;
		g_global->tickUnitUnknown4 = g_global->tickGlobal + 20;
	}

	if (g_global->tickUnitScript <= g_global->tickGlobal) {
		tickScript = true;
		g_global->tickUnitScript = g_global->tickGlobal + 5;
	}

	if (g_global->tickUnitUnknown5 <= g_global->tickGlobal) {
		tickUnknown5 = true;
		g_global->tickUnitUnknown5 = g_global->tickGlobal + 5;
	}

	if (g_global->tickUnitDeviation <= g_global->tickGlobal) {
		tickDeviation = true;
		g_global->tickUnitDeviation = g_global->tickGlobal + 60;
	}

	find.houseID = 0xFFFF;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		UnitInfo *ui;
		Unit *u;
		HouseInfo *hi;
		House *h;

		u = Unit_Find(&find);
		if (u == NULL) break;

		ui = &g_unitInfo[u->type];
		h  = House_Get_ByIndex(u->houseID);
		hi = &g_houseInfo[h->index];

		/* XXX -- Temporary, to keep all the emu_calls workable for now */
		g_global->unitCurrent          = g_global->unitStartPos;
		g_global->unitCurrent.s.ip    += u->index * sizeof(Unit);
		g_global->objectCurrent        = g_global->unitCurrent;
		g_global->unitInfoCurrent.s.cs = 0x2D07;
		g_global->unitInfoCurrent.s.ip = u->type * sizeof(UnitInfo);
		g_global->houseCurrent         = g_global->houseStartPos;
		g_global->houseCurrent.s.ip   += h->index * sizeof(House);

		if (u->flags.s.beingBuilt) continue;

		if (tickUnknown4 && u->targetAttack != 0 && ui->flags.s.variable_0040) {
			tile32 tile;

			tile = Tools_Index_GetTile(u->targetAttack);

			emu_push(tile.s.y); emu_push(tile.s.x);
			emu_push(u->position.s.y); emu_push(u->position.s.x);
			emu_push(emu_cs); emu_push(0x0345); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
			emu_sp += 8;

			Unit_Unknown1E99(u, (uint8)emu_ax, false, 1);
		}

		if (tickUnknown1) {
			emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
			emu_push(emu_cs); emu_push(0x036D); emu_cs = 0x1A34; f__1A34_2134_001E_3E9A();
			emu_sp += 4;

			if (u->variable_51 != 0) {
				if (ui->variable_3C == 4 && (ui->variable_36 & 0x8000) == 0) {
					tile32 tile;

					tile = u->variable_49;

					if (Tools_Index_GetType(u->targetAttack) == IT_UNIT && g_unitInfo[Tools_Index_GetUnit(u->targetAttack)->type].variable_3C == 4) {
						tile = Tools_Index_GetTile(u->targetAttack);
					}

					emu_push(tile.s.y); emu_push(tile.s.x);
					emu_push(u->position.s.y); emu_push(u->position.s.x);
					emu_push(emu_cs); emu_push(0x0413); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
					emu_sp += 8;

					Unit_Unknown1E99(u, (uint8)emu_ax, false, 0);
				}

				u->variable_51--;
			}
		}

		if (tickUnknown2) {
			Unit_Unknown1F55(u, 0);
			if (ui->flags.s.variable_0040) Unit_Unknown1F55(u, 1);
		}

		if (tickUnknown3 && u->variable_6E != 0) {
			u->variable_6E--;
			if ((u->variable_6E & 0x01) != 0) {
				u->flags.s.variable_0800 = true;
			} else {
				u->flags.s.variable_0800 = false;
			}

			emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
			emu_push(2);
			emu_push(emu_cs); emu_push(0x04B1); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
			emu_sp += 6;
		}

		if (tickDeviation) Unit_Deviation_Decrease(u, 1);

		if (ui->variable_3C != 4) {
			emu_push(Tile_PackTile(u->position));
			emu_push(emu_cs); emu_push(0x04F2); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1086_0040_F11C();
			emu_sp += 2;

			if (emu_ax == 0) {
				emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
				emu_push(1);
				emu_push(emu_cs); emu_push(0x0508); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
				emu_sp += 6;
			}
		}

		if (tickUnknown5) {
			if (u->variable_70 == 0) {
				if ((ui->variable_3C == 0 && u->variable_6A != 0) || u->flags.s.variable_0008) {
					if (u->variable_6D >= 0) {
						u->variable_6D &= 0x3F;
						u->variable_6D++;

						emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
						emu_push(2);
						emu_push(emu_cs); emu_push(0x0571); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
						emu_sp += 6;

						u->variable_70 = ui->variable_3E / 5;
						if (u->flags.s.variable_0008) {
							u->variable_70 = 3;
							if (u->variable_6D > 32) {
								u->flags.s.variable_0008 = false;
								u->variable_6D = 0;
							}
						}
					}
				}

				if (u->type == UNIT_ORNITHOPTER && u->flags.s.allocated && u->variable_6D >= 0) {
					u->variable_6D &= 0x3F;
					u->variable_6D++;

					emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
					emu_push(2);
					emu_push(emu_cs); emu_push(0x0601); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
					emu_sp += 6;

					u->variable_70 = 1;
				}

				if (u->type == UNIT_HARVESTER) {
					if (u->actionID == ACTION_HARVEST || u->flags.s.variable_0008) {
						u->variable_6D &= 0x3F;
						u->variable_6D++;

						emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
						emu_push(2);
						emu_push(emu_cs); emu_push(0x065F); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
						emu_sp += 6;

						u->variable_70 = 4;
					} else {
						if (u->variable_6D != 0) {
							emu_push(g_global->unitCurrent.s.cs); emu_push(g_global->unitCurrent.s.ip);
							emu_push(2);
							emu_push(emu_cs); emu_push(0x065F); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
							emu_sp += 6;

							u->variable_6D = 0;
						}
					}
				}
			} else {
				u->variable_70--;
			}
		}

		if (tickScript) {
			if (u->scriptDelay == 0) {
				if (Script_IsLoaded(&u->script)) {
					g_global->scriptUnitLeft = g_global->scriptUnitSpeed * 5;
					if (!ui->flags.s.scriptNoSlowdown) {
						emu_push(0); emu_push(0);
						emu_push(0); emu_push(0);
						emu_push(u->position.s.y); emu_push(u->position.s.x);
						emu_push(emu_cs); emu_push(0x06F9); emu_cs = 0x07D4; emu_Map_IsPositionInViewport();
						emu_sp += 12;

						if (emu_ax == 0) g_global->scriptUnitLeft = 1;
					}

					u->script.variables[3] = g_global->playerHouseID;

					for (; g_global->scriptUnitLeft >= -1 && u->scriptDelay == 0; g_global->scriptUnitLeft--) {
						g_global->variable_37A4 = 0;
						g_global->variable_37A2++;

						if (u->script.stackPointer <= 15 && 15 - u->script.stackPointer > g_global->variable_37A8) {
							g_global->variable_37A8 = 15 - u->script.stackPointer;
						}

						if (!Script_Run(&u->script)) break;
					}
				}
			} else {
				u->scriptDelay--;
			}
		}

		if (u->nextActionID == ACTION_INVALID) continue;
		if (u->variable_49.tile != 0) continue;

		Unit_SetAction(u, u->nextActionID);
		u->nextActionID = ACTION_INVALID;
	}
}

/**
 * Get the HouseID of a unit. This is not always u->houseID, as a unit can be
 *  deviated by the Ordos.
 *
 * @param u Unit to get the HouseID of.
 * @return The HouseID of the unit, which might be deviated.
 */
uint8 Unit_GetHouseID(Unit *u)
{
	if (u->deviated != 0) return HOUSE_ORDOS;
	return u->houseID;
}

/**
 * Convert the name of a unit to the type value of that unit, or
 *  UNIT_INVALID if not found.
 */
uint8 Unit_StringToType(const char *name)
{
	uint8 type;
	if (name == NULL) return UNIT_INVALID;

	for (type = 0; type < UNIT_MAX; type++) {
		const char *unitName = (const char *)emu_get_memorycsip(g_unitInfo[type].name);
		if (strcasecmp(unitName, name) == 0) return type;
	}

	return UNIT_INVALID;
}

/**
 * Convert the name of an action to the type value of that action, or
 *  ACTION_INVALID if not found.
 */
uint8 Unit_ActionStringToType(const char *name)
{
	uint8 type;
	if (name == NULL) return ACTION_INVALID;

	for (type = 0; type < ACTION_MAX; type++) {
		const char *actionName = (const char *)emu_get_memorycsip(g_actionInfo[type].name);
		if (strcasecmp(actionName, name) == 0) return type;
	}

	return ACTION_INVALID;
}

/**
 * Convert the name of a team action to the type value of that team action, or
 *  TEAM_ACTION_INVALID if not found.
 */
uint8 Unit_TeamActionStringToType(const char *name)
{
	uint8 type;
	if (name == NULL) return TEAM_ACTION_INVALID;

	for (type = 0; type < TEAM_ACTION_MAX; type++) {
		const char *teamActionName = (const char *)emu_get_memorycsip(g_global->teamActionName[type]);
		if (strcasecmp(teamActionName, name) == 0) return type;
	}

	return TEAM_ACTION_INVALID;
}

/**
 * Convert the name of a movement to the type value of that movement, or
 *  MOVEMENT_INVALID if not found.
 */
uint8 Unit_MovementStringToType(const char *name)
{
	uint8 type;
	if (name == NULL) return MOVEMENT_INVALID;

	for (type = 0; type < MOVEMENT_MAX; type++) {
		const char *movementName = (const char *)emu_get_memorycsip(g_global->movementName[type]);
		if (strcasecmp(movementName, name) == 0) return type;
	}

	return MOVEMENT_INVALID;
}

/**
 * Create a new Unit.
 *
 * @param index The new index of the Unit, or UNIT_INDEX_INVALID to assign one.
 * @param typeID The type of the new Unit.
 * @param houseID The House of the new Unit.
 * @param position To where on the map this Unit should be transported, or TILE_INVALID for not on the map yet.
 * @param unknown An unknown parameter.
 * @return The new created Unit, or NULL if something failed.
 */
Unit *Unit_Create(uint16 index, uint8 typeID, uint8 houseID, tile32 position, uint8 unknown)
{
	csip32 ucsip;
	UnitInfo *ui;
	Unit *u;

	if (houseID >= HOUSE_MAX) return NULL;
	if (typeID >= UNIT_MAX) return NULL;

	ui = &g_unitInfo[typeID];
	u = Unit_Allocate(index, typeID, houseID);
	if (u == NULL) return NULL;

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	ucsip = g_global->unitStartPos;
	ucsip.s.ip += u->index * sizeof(Unit);

	u->houseID = houseID;

	Unit_Unknown1E99(u, unknown, true, 0);
	Unit_Unknown1E99(u, unknown, true, 1);

	emu_push(0x00);
	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(emu_cs); emu_push(0x0980); f__1A34_204C_0043_B1ED();
	emu_sp += 6;

	u->position.tile    = position.tile;
	u->hitpoints        = ui->hitpoints;
	u->variable_49.tile = 0;
	u->originEncoded    = 0x0000;
	u->variable_72      = 0xFF;

	if (position.tile != 0xFFFFFFFF) {
		u->originEncoded    = Unit_FindClosestRefinery(u);
		u->variable_5A.tile = position.tile;
		u->variable_5E.tile = position.tile;
	}

	u->linkedID     = 0xFF;
	u->scriptDelay  = 0;
	u->actionID     = ACTION_GUARD;
	u->nextActionID = ACTION_INVALID;
	u->variable_51  = 0x00;
	u->variable_52  = 0x7FFF;
	u->targetMove   = 0x0000;
	u->amount       = 0x00;
	u->variable_6C  = 0x00;
	u->variable_6D  = 0x00;
	u->variable_6E  = 0x00;
	u->variable_70  = 0x0000;

	Script_Reset(&u->script, &g_global->scriptUnit);

	u->flags.s.allocated = true;

	if (ui->variable_3C == 0x0001) {
		if (Tools_Random_256() < g_houseInfo[houseID].variable_06) {
			u->flags.s.variable_0400 = true;
		}
	}

	if (ui->variable_3C == 0x0004) {
		emu_push(0xFF);
		emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
		emu_push(emu_cs); emu_push(0x0AF2); f__1A34_204C_0043_B1ED();
		emu_sp += 6;
	} else {
		if (position.tile != 0xFFFFFFFF) {
			emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
			emu_push(emu_cs); emu_push(0x0AD7); f__1A34_0E2E_0015_7E65();
			emu_sp += 4;

			if (emu_ax != 0) {
				Unit_Free(u);
				return NULL;
			}
		}
	}

	if (position.tile == 0xFFFFFFFF) {
		u->flags.s.beingBuilt = true;
		return u;
	}

	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(0x01);
	emu_push(emu_cs); emu_push(0x0B26); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	emu_sp += 6;

	Unit_SetAction(u, (houseID == g_global->playerHouseID) ? ui->actionsPlayer[3] : ui->actionAI);

	return u;
}

/**
 * Checks if a Unit is on the map.
 *
 * @param houseID The House of the Unit.
 * @param typeID The type of the Unit.
 * @return Returns true if and only if a Unit with the given attributes is on the map.
 */
bool Unit_IsTypeOnMap(uint8 houseID, uint8 typeID)
{
	uint16 i;

	for (i = 0; i < g_global->unitCount; i++) {
		Unit *u;

		u = Unit_Get_ByMemory(g_global->unitArray[i]);
		if (houseID != HOUSE_INVALID && Unit_GetHouseID(u) != houseID) continue;
		if (typeID != UNIT_INVALID && u->type != typeID) continue;
		if (g_global->variable_38BC == 0 && u->flags.s.beingBuilt) continue;

		return true;
	}
	return false;
}

/**
 * Sets the action the given unit will execute.
 *
 * @param u The Unit to set the action for.
 * @param action The action.
 */
void Unit_SetAction(Unit *u, ActionType action)
{
	ActionInfo *ai;

	if (u == NULL) return;
	if (u->actionID == ACTION_DESTRUCT || u->actionID == ACTION_DIE || action == ACTION_INVALID) return;

	ai = &g_actionInfo[action];

	switch (ai->variable_06) {
		case 0:
			if (u->variable_49.tile != 0) {
				u->nextActionID = action;
				return;
			}
			/* FALL-THROUGH */
		case 1:
			u->actionID = action;
			u->nextActionID = ACTION_INVALID;
			u->variable_49.tile = 0;
			u->scriptDelay = 0;
			Script_Reset(&u->script, &g_global->scriptUnit);
			u->script.variables[0] = action;
			Script_Load(&u->script, u->type);
			return;

		case 2:
			u->script.variables[0] = action;

			emu_push(u->type);
			emu_push(g_global->unitStartPos.s.cs); emu_push(g_global->unitStartPos.s.ip + u->index * sizeof(Unit) + 0x12); /* u->script */
			emu_push(emu_cs); emu_push(0x0102); emu_cs = 0x15C2; f__15C2_044C_0012_C66D();
			emu_sp += 6;
			return;

		default: return;
	}
}

/**
 * Adds the specified unit to the specified team.
 *
 * @param u The unit to add to the team.
 * @param t The team to add the unit to.
 * @return Amount of space left in the team.
 */
uint16 Unit_AddToTeam(Unit *u, Team *t)
{
	if (t == NULL || u == NULL) return 0;

	u->team = t->index + 1;
	t->members++;

	return t->maxMembers - t->members;
}

/**
 * Removes the specified unit from its team.
 *
 * @param u The unit to remove from the team it is in.
 * @return Amount of space left in the team.
 */
uint16 Unit_RemoveFromTeam(Unit *u)
{
	Team *t;

	if (u == NULL) return 0;
	if (u->team == 0) return 0;

	t = Team_Get_ByIndex(u->team - 1);

	t->members--;
	u->team = 0;

	return t->maxMembers - t->members;
}

/**
 * Gets the team of the given unit.
 *
 * @param u The unit to get the team of.
 * @return The team.
 */
Team *Unit_GetTeam(Unit *u)
{
	if (u == NULL) return NULL;
	if (u->team == 0) return NULL;
	return Team_Get_ByIndex(u->team - 1);
}

/**
 * ?? Sorts unit array and count enemy/allied units.
 */
void Unit_Sort()
{
	House *h;
	uint16 i;

	h = House_Get_ByMemory(g_global->playerHouse);
	h->unitCountEnemy = 0;
	h->unitCountAllied = 0;

	for (i = 0; i < g_global->unitCount - 1; i++) {
		csip32 csip1;
		csip32 csip2;
		Unit *u1;
		Unit *u2;
		uint16 y1;
		uint16 y2;

		csip1 = g_global->unitArray[i];
		csip2 = g_global->unitArray[i + 1];

		u1 = Unit_Get_ByMemory(csip1);
		u2 = Unit_Get_ByMemory(csip2);

		if ((u1->variable_09 & (1 << g_global->playerHouseID)) != 0 && !u1->flags.s.beingBuilt) {
			if (House_AreAllied(u1->houseID, (uint8)g_global->playerHouseID)) {
				h->unitCountAllied++;
			} else {
				h->unitCountEnemy++;
			}
		}
		y1 = Tile_GetY(u1->position);
		y2 = Tile_GetY(u2->position);
		if (g_unitInfo[u1->type].variable_3C == 0) y1 -= 0x100;
		if (g_unitInfo[u2->type].variable_3C == 0) y2 -= 0x100;

		if ((int16)y1 > (int16)y2) {
			g_global->unitArray[i] = csip2;
			g_global->unitArray[i + 1] = csip1;
		}
	}
}

/**
 * Get the unit on the given packed tile.
 *
 * @param packed The packed tile to get the unit from.
 * @return The unit.
 */
Unit *Unit_Get_ByPackedTile(uint16 packed)
{
	Tile *tile;

	if (packed >= 4096) return NULL;

	tile = Map_GetTileByPosition(packed);
	if (!tile->hasUnit) return NULL;
	return Unit_Get_ByIndex(tile->index - 1);
}

/**
 * Sets the destination for the given unit.
 *
 * @param u The unit to set the destination for.
 * @param destination The destination (encoded index).
 */
void Unit_SetDestination(Unit *u, uint16 destination)
{
	Structure *s;

	if (u == NULL) return;
	if (!Tools_Index_IsValid(destination)) return;
	if (u->targetMove == destination) return;

	if (Tools_Index_GetType(destination) == IT_TILE) {
		Unit *u2;
		uint16 packed;

		packed = Tools_Index_Decode(destination);

		u2 = Unit_Get_ByPackedTile(packed);
		if (u2 != NULL) {
			if (u != u2) destination = Tools_Index_Encode(u2->index, IT_UNIT);
		} else {
			s = Structure_Get_ByPackedTile(packed);
			if (s != NULL) destination = Tools_Index_Encode(s->index, IT_STRUCTURE);
		}
	}

	s = Tools_Index_GetStructure(destination);
	if (s != NULL && s->houseID == Unit_GetHouseID(u)) {
		emu_push(g_global->structureStartPos.s.cs); emu_push(g_global->structureStartPos.s.ip + s->index * sizeof(Structure));
		emu_push(g_global->unitStartPos.s.cs); emu_push(g_global->unitStartPos.s.ip + u->index * sizeof(Unit));
		emu_push(emu_cs); emu_push(0x1C4D); f__1A34_3014_001B_858E();
		emu_sp += 8;

		if (emu_ax == 1 || g_unitInfo[u->type].variable_3C == 4) {
			emu_push(destination);
			emu_push(Tools_Index_Encode(u->index, IT_UNIT));
			emu_push(emu_cs); emu_push(0x1C9A); emu_cs = 0x0C10; f__0C10_0008_0014_19CD();
			emu_sp += 4;
		}
	}

	u->targetMove  = destination;
	u->variable_72 = 0xFF;
}

/**
 * Save all Units to a file. It converts pointers to indices where needed.
 * @param fp The file to save to.
 * @return True if and only if all bytes were written successful.
 */
bool Unit_Save(FILE *fp)
{
	PoolFindStruct find;

	find.houseID = 0xFFFF;
	find.type    = 0xFFFF;
	find.index   = 0xFFFF;

	while (true) {
		Unit *u;
		Unit su;

		u = Unit_Find(&find);
		if (u == NULL) break;
		su = *u;

		/* Rewrite the pointer in the scriptEngine to an index */
		if (su.script.script.csip != 0x00000000) {
			ScriptInfo *scriptInfo;
			scriptInfo = ScriptInfo_Get_ByMemory(su.script.scriptInfo);
			su.script.script.csip = (su.script.script.csip - scriptInfo->start.csip) / 2;
		}
		su.script.scriptInfo.csip = 0x00000000;

		if (fwrite(&su, sizeof(Unit), 1, fp) != 1) return false;
	}

	return true;
}

/**
 * Load all Units from a file.
 * @param fp The file to load from.
 * @param length The length of the data chunk.
 * @return True if and only if all bytes were read successful.
 */
bool Unit_Load(FILE *fp, uint32 length)
{
	while (length >= sizeof(Unit)) {
		Unit *u;
		Unit ul;

		length -= sizeof(Unit);

		/* Read the next Structure from disk */
		if (fread(&ul, sizeof(Unit), 1, fp) != 1) return false;

		ul.script.scriptInfo.s.cs = 0x353F;
		ul.script.scriptInfo.s.ip = emu_Global_GetIP(&g_global->scriptUnit, 0x353F);
		if (ul.script.script.csip != 0x0) {
			uint16 lineno = ul.script.script.csip;

			ul.script.script = g_global->scriptUnit.start;
			ul.script.script.s.ip += lineno * 2;
		}
		ul.scriptDelay = 0;
		ul.variable_70 = 0;

		/* Get the Structure from the pool */
		u = Unit_Get_ByIndex(ul.index);
		if (u == NULL) return false;

		/* Copy over the data */
		*u = ul;

		u->variable_09 |= 1 << u->houseID;
	}
	if (length != 0) return false;

	Unit_Recount();

	return true;
}

/**
 * Get the priority a target has for a given unit. The higher the value,
 *  the more serious it should look at the target.
 *
 * @param unit The unit looking at a target.
 * @param target The unit to look at.
 * @return The priority of the target.
 */
uint16 Unit_GetTargetPriority(Unit *unit, Unit *target)
{
	UnitInfo *targetInfo;
	UnitInfo *unitInfo;
	uint16 distance;
	uint16 priority;

	if (unit == NULL || target == NULL) return 0;
	if (unit == target) return 0;

	if (!target->flags.s.allocated) return 0;
	if ((target->variable_09 & (1 << Unit_GetHouseID(unit))) == 0) return 0;

	if (House_AreAllied(Unit_GetHouseID(unit), Unit_GetHouseID(target))) return 0;

	unitInfo   = &g_unitInfo[unit->type];
	targetInfo = &g_unitInfo[target->type];

	if (!targetInfo->flags.s.priority) return 0;

	if (targetInfo->variable_3C == 4) {
		if (!unitInfo->flags.s.targetAir) return 0;
		if (target->houseID == g_global->playerHouseID && !Map_IsPositionUnveiled(Tile_PackTile(target->position))) return 0;
	}

	if (!Map_IsValidPosition(Tile_PackTile(target->position))) return 0;

	distance = Tile_GetDistanceRoundedUp(unit->position, target->position);

	if (!Map_IsValidPosition(Tile_PackTile(unit->position))) {
		if (targetInfo->variable_50 >= distance) return 0;
	}

	priority = targetInfo->priorityTarget + targetInfo->priorityBuild;
	if (distance != 0) priority = (priority / distance) + 1;

	if (priority > 0x7D00) return 0x7D00;
	return priority;
}

/**
 * Finds the closest refinery a harvester can go to.
 *
 * @param unit The unit to find the closest refinery for.
 * @return 1 if unit->variable_4D was not 0, else 0.
 */
uint16 Unit_FindClosestRefinery(Unit *unit)
{
	uint16 res;
	Structure *s = NULL;
	uint16 mind = 0;
	Structure *s2;
	uint16 d;
	PoolFindStruct find;

	res = (unit->originEncoded == 0) ? 0 : 1;

	if (unit->type != UNIT_HARVESTER) {
		unit->originEncoded = Tools_Index_Encode(Tile_PackTile(unit->position), IT_TILE);
		return res;
	}

	find.type = STRUCTURE_REFINERY;
	find.houseID = Unit_GetHouseID(unit);
	find.index = 0xFFFF;

	while (true) {
		s2 = Structure_Find(&find);
		if (s2 == NULL) break;
		if (s2->animation != 1) continue;
		d = Tile_GetDistance(unit->position, s2->position);
		if (mind != 0 && d >= mind) continue;
		mind = d;
		s = s2;
	}

	if (s == NULL) {
		find.type = STRUCTURE_REFINERY;
		find.houseID = Unit_GetHouseID(unit);
		find.index = 0xFFFF;

		while (true) {
			s2 = Structure_Find(&find);
			if (s2 == NULL) break;
			d = Tile_GetDistance(unit->position, s2->position);
			if (mind != 0 && d >= mind) continue;
			mind = d;
			s = s2;
		}
	}

	if (s != NULL) unit->originEncoded = Tools_Index_Encode(s->index, IT_STRUCTURE);

	return res;
}

/**
 * Sets the position of the given unit.
 *
 * @param u The Unit to set the position for.
 * @position The position.
 * @return True if and only if the position changed.
 */
bool Unit_SetPosition(Unit *u, tile32 position)
{
	UnitInfo *ui;
	csip32 ucsip;

	if (u == NULL) return false;

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	ucsip.s.cs = g_global->unitStartPos.s.cs;
	ucsip.s.ip = g_global->unitStartPos.s.ip + u->index * sizeof(Unit);

	ui = &g_unitInfo[u->type];
	u->flags.s.beingBuilt = false;

	u->position = Tile_Center(position);

	if (u->originEncoded == 0) Unit_FindClosestRefinery(u);

	u->script.variables[4] = 0;

	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(emu_cs); emu_push(0x29CD); f__1A34_0E2E_0015_7E65();
	emu_sp += 2;

	if (emu_ax != 0) {
		u->flags.s.beingBuilt = true;
		return false;
	}

	u->variable_49.tile = 0;
	u->targetMove = 0;
	u->targetAttack = 0;

	if (Map_GetTileByPosition(Tile_PackTile(u->position))->flag_10 != 0) {
		u->variable_09 &= ~(1 << u->houseID);

		emu_push(g_global->playerHouseID);
		emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
		emu_push(emu_cs); emu_push(0x2A38); emu_cs = 0x1423; f__1423_08CD_0012_0004();
		emu_sp += 6;
	}

	if (u->houseID != g_global->playerHouseID || u->type == UNIT_HARVESTER || u->type == UNIT_SABOTEUR) {
		Unit_SetAction(u, ui->actionAI);
	} else {
		Unit_SetAction(u, ui->actionsPlayer[3]);
	}

	u->variable_6D = 0;

	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(1);
	emu_push(emu_cs); emu_push(0x2A92); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	emu_sp += 6;

	return true;
}

/**
 * Unknown funtion 10EC.
 *
 * @param u The Unit to operate on.
 */
void Unit_Unknown10EC(Unit *u)
{
	csip32 ucsip;

	if (u == NULL) return;

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	ucsip.s.cs = g_global->unitStartPos.s.cs;
	ucsip.s.ip = g_global->unitStartPos.s.ip + u->index * sizeof(Unit);

	u->flags.s.allocated = true;
	Unit_UntargetMe(u);

	if (ucsip.csip == g_global->selectionUnit.csip) {
		Unit_Select(NULL);
	}

	u->flags.s.unknown_0040 = true;

	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(0);
	emu_push(emu_cs); emu_push(0x1143); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	emu_sp += 6;

	emu_push(0xFFFF);
	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(emu_cs); emu_push(0x1155); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
	emu_sp += 6;

	Script_Reset(&u->script, &g_global->scriptUnit);

	Unit_Free(u);
}

/**
 * Gets the best target for the given unit.
 *
 * @param u The Unit to get the best target for.
 * @param mode How to determine the best target.
 * @return The best target or NULL if none found.
 */
Unit *Unit_FindBestTarget(Unit *u, uint16 mode)
{
	tile32 position;
	uint16 distance;
	PoolFindStruct find;
	Unit *targetBest = NULL;
	uint16 priorityMax = 0;

	if (u == NULL) return NULL;

	position = u->position;
	if (u->originEncoded == 0) {
		u->originEncoded = Tools_Index_Encode(Tile_PackTile(position), IT_TILE);
	} else {
		position = Tools_Index_GetTile(u->originEncoded);
	}

	distance = g_unitInfo[u->type].variable_50 << 8;
	if (mode == 2) distance <<= 1;

	find.houseID = 0xFFFF;
	find.type    = 0xFFFF;
	find.index   = 0xFFFF;

	while (true) {
		Unit *target;
		uint16 priority;

		target = Unit_Find(&find);

		if (target == NULL) break;
		if (House_AreAllied(Unit_GetHouseID(u), Unit_GetHouseID(target))) continue;
		if ((target->variable_09 & (1 << u->houseID)) == 0) continue;

		if (mode != 0 && mode != 4) {
			if (mode == 1) {
				if (Tile_GetDistance(u->position, target->position) > distance) continue;
			}
			if (mode == 2) {
				if (Tile_GetDistance(position, target->position) > distance) continue;
			}
		}

		priority = Unit_GetTargetPriority(u, target);

		if ((int16)priority > (int16)priorityMax) {
			targetBest = target;
			priorityMax = priority;
		}
	}

	if (priorityMax == 0) return NULL;

	return targetBest;
}

/**
 * Unknwown function 14E6.
 *
 * @param unit ??.
 * @param target ??.
 * @return ??.
 */
uint16 Unit_Unknown14E6(Unit *unit, Unit *target)
{
	uint16 res;
	uint16 distance;

	if (unit == NULL || target == NULL) return 0;
	if (!Map_IsPositionUnveiled(Tile_PackTile(target->position))) return 0;

	emu_push(Tile_PackTile(target->position));
	emu_push(emu_cs); emu_push(0x1557); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
	emu_sp += 2;

	if (g_global->variable_3A3E[emu_ax][7] == 0) return 0;

	switch(g_unitInfo[target->type].variable_3C) {
		case 0:  res = 0x64;   break;
		case 1:  res = 0x3E8;  break;
		case 2:  res = 0x3E8;  break;
		case 3:  res = 0x1388; break;
		default: res = 0;      break;
	}

	if (target->variable_6A != 0 || target->variable_51 != 0) res <<= 2;

	distance = Tile_GetDistanceRoundedUp(unit->position, target->position);

	if (distance != 0 && res != 0) res /= distance;
	if (distance < 2) res *= 2;

	return res;
}

/**
 * Unknwown function 15F4.
 *
 * @param unit ??.
 * @return ??.
 */
Unit *Unit_Unknown15F4(Unit *unit)
{
	Unit *res = NULL;
	PoolFindStruct find;
	uint16 unknownMax = 0;

	if (unit == NULL) return NULL;

	find.houseID = 0xFFFF;
	find.type    = 0xFFFF;
	find.index   = 0xFFFF;

	while (true) {
		Unit *u;
		uint16 unknown;

		u = Unit_Find(&find);

		if (u == NULL) break;

		unknown = Unit_Unknown14E6(unit, u);

		if (unknown >= unknownMax) {
			res = u;
			unknownMax = unknown;
		}
	}

	if (unknownMax == 0) return NULL;

	return res;
}

/**
 * Unknwown function 167C.
 *
 * @param unit The Unit to operate on.
 * @return ??.
 */
bool Unit_Unknown167C(Unit *unit)
{
	UnitInfo *ui;
	uint8 locsi;
	csip32 ucsip;
	uint16 packed;
	uint16 loc08;
	tile32 position;
	uint16 locdi;

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	ucsip.s.cs = g_global->unitStartPos.s.cs;
	ucsip.s.ip = g_global->unitStartPos.s.ip + unit->index * sizeof(Unit);

	if (unit == NULL) return false;

	ui = &g_unitInfo[unit->type];

	locsi = (unit->variable_62[0][2] + 16) & 0xE0;

	Unit_Unknown1E99(unit, locsi, true, 0);
	Unit_Unknown1E99(unit, locsi, false, 1);

	emu_push(locsi);
	emu_push(unit->position.s.y); emu_push(unit->position.s.x);
	emu_push(emu_cs); emu_push(0x16F8); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_00A5_0016_24FA();
	emu_sp += 6;

	position.s.x = emu_ax;
	position.s.y = emu_dx;

	packed = Tile_PackTile(position);

	unit->variable_52 = 0x7FFF;

	emu_push(locsi / 32);
	emu_push(packed);
	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(emu_cs); emu_push(0x172F); f__1A34_3146_0018_6887();
	emu_sp += 8;

	if ((int16)emu_ax > 0xFF || emu_ax == 0xFFFF) return false;

	emu_push(packed);
	emu_push(emu_cs); emu_push(0x174A); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
	emu_sp += 2;

	loc08 = emu_ax;
	if (loc08 == 0xC) loc08 = 0xA;

	locdi = g_global->variable_3A3E[loc08][2 + (ui->variable_3C / 2)];
	if (ui->variable_3C % 2 == 0) {
		locdi >>= 8;
	} else {
		locdi &= 0xFF;
	}

	if (unit->type == UNIT_SABOTEUR && loc08 == 0xB) locdi = 0xFF;
	unit->flags.s.variable_0008 = false;

	if (g_global->variable_3A3E[loc08][5] != 0) unit->flags.s.unknown_0080 = true;

	if ((ui->hitpoints / 2) > unit->hitpoints && ui->variable_3C != 4) locdi -= locdi / 4;

	emu_push(locdi);
	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(emu_cs); emu_push(0x17D8); f__1A34_204C_0043_B1ED();
	emu_sp += 6;

	if (ui->variable_3C != 5) {
		tile32 positionOld;

		positionOld = unit->position;
		unit->position = position;

		emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
		emu_push(1);
		emu_push(emu_cs); emu_push(0x1816); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
		emu_sp += 6;

		unit->position = positionOld;
	}

	unit->variable_49 = position;

	Unit_Deviation_Decrease(unit, 10);

	return true;
}

/**
 * Set the target for the given unit.
 *
 * @param unit The Unit to set the target for.
 * @param encoded The encoded index of the target.
 */
void Unit_SetTarget(Unit *unit, uint16 encoded)
{
	if (unit == NULL || !Tools_Index_IsValid(encoded)) return;
	if (unit->targetAttack == encoded) return;

	if (Tools_Index_GetType(encoded) == IT_TILE) {
		uint16 packed;
		Unit *u;

		packed = Tools_Index_Decode(encoded);

		u = Unit_Get_ByPackedTile(packed);
		if (u != NULL) {
			encoded = Tools_Index_Encode(u->index, IT_UNIT);
		} else {
			Structure *s;

			s = Structure_Get_ByPackedTile(packed);
			if (s != NULL) {
				encoded = Tools_Index_Encode(s->index, IT_STRUCTURE);
			}
		}
	}

	if (Tools_Index_Encode(unit->index, IT_UNIT) == encoded) {
		encoded = Tools_Index_Encode(Tile_PackTile(unit->position), IT_TILE);
	}

	unit->targetAttack = encoded;

	if (!g_unitInfo[unit->type].flags.s.variable_0040) {
		unit->targetMove = encoded;
		unit->variable_72 = 0xFF;
	}
}

/**
 * Decrease deviation counter for the given unit.
 *
 * @param unit The Unit to decrease counter for.
 * @param amount The amount to decrease.
 * @return True if and only if the unit lost deviation.
 */
bool Unit_Deviation_Decrease(Unit *unit, uint16 amount)
{
	UnitInfo *ui;
	csip32 ucsip;

	if (unit == NULL || unit->deviated == 0) return false;

	ui = &g_unitInfo[unit->type];

	if ((ui->variable_36 & 0x8000) == 0) return false;

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	ucsip.s.cs = g_global->unitStartPos.s.cs;
	ucsip.s.ip = g_global->unitStartPos.s.ip + unit->index * sizeof(Unit);

	if (amount == 0) {
		amount = g_houseInfo[unit->houseID].variable_04;
	}

	if (unit->deviated > amount) {
		unit->deviated -= amount;
		return false;
	}

	unit->deviated = 0;
	unit->flags.s.unknown_0040 = true;

	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(2);
	emu_push(emu_cs); emu_push(0x19E2); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	emu_sp += 6;

	unit->flags.s.unknown_0040 = false;
	if (unit->houseID == g_global->playerHouseID) {
		Unit_SetAction(unit, ui->actionsPlayer[3]);
	} else {
		Unit_SetAction(unit, ui->actionAI);
	}

	Unit_UntargetMe(unit);
	Unit_SetTarget(unit, 0);
	Unit_SetDestination(unit, 0);

	return true;
}

/**
 * Remove fog arount the given unit.
 *
 * @param unit The Unit to remove fog around.
 */
void Unit_RemoveFog(Unit *unit)
{
	uint16 fogUncoverRadius;

	if (unit == NULL) return;
	if (unit->flags.s.beingBuilt) return;
	if (unit->position.tile == 0xFFFFFFFF || unit->position.tile == 0) return;
	if (!House_AreAllied(Unit_GetHouseID(unit), (uint8)g_global->playerHouseID)) return;

	fogUncoverRadius = g_unitInfo[unit->type].fogUncoverRadius;

	if (fogUncoverRadius == 0) return;

	emu_push(fogUncoverRadius);
	emu_push(unit->position.s.y); emu_push(unit->position.s.x);
	emu_push(emu_cs); emu_push(0x2BAE); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Tile_RemoveFogInRadius();
	emu_sp += 6;
}

/**
 * Deviate the given unit.
 *
 * @param unit The Unit to deviate.
 * @param probability The probability for deviation to succeed.
 * @return True if and only if the unit beacame deviated.
 */
bool Unit_Deviate(Unit *unit, uint16 probability)
{
	csip32 ucsip;
	UnitInfo *ui;

	if (unit == NULL) return false;

	ui = &g_unitInfo[unit->type];

	if ((ui->variable_36 & 0x8000) == 0) return false;
	if (unit->deviated != 0) return false;
	if ((ui->variable_36 & 0x1000) != 0) return false;

	if (probability == 0) probability = g_houseInfo[unit->houseID].variable_04;

	if (unit->houseID != g_global->playerHouseID) {
		probability -= probability / 8;
	}

	if (Tools_Random_256() >= probability) return false;

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	ucsip.s.cs = g_global->unitStartPos.s.cs;
	ucsip.s.ip = g_global->unitStartPos.s.ip + unit->index * sizeof(Unit);

	unit->deviated = 0x78;

	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(2);
	emu_push(emu_cs); emu_push(0x18FC); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	emu_sp += 6;

	if (g_global->playerHouseID == HOUSE_ORDOS) {
		Unit_SetAction(unit, ui->actionsPlayer[3]);
	} else {
		Unit_SetAction(unit, ui->actionAI);
	}

	Unit_UntargetMe(unit);

	return true;
}

/**
 * Moves the given unit.
 *
 * @param unit The Unit to move.
 * @param distance The maximum distance to pass through.
 * @return ??.
 */
bool Unit_Move(Unit *unit, uint16 distance)
{
	csip32 ucsip;
	UnitInfo *ui;
	uint16 d;
	uint16 packed;
	tile32 newPosition;
	bool ret;
	tile32 position_49;
	bool sprite1 = false;
	bool sprite2 = false;

	if (unit == NULL || !unit->flags.s.used) return false;

	ui = &g_unitInfo[unit->type];

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	ucsip.s.cs = g_global->unitStartPos.s.cs;
	ucsip.s.ip = g_global->unitStartPos.s.ip + unit->index * sizeof(Unit);

	emu_push(distance);
	emu_push(unit->variable_62[0][2]);
	emu_push(unit->position.s.y); emu_push(unit->position.s.x);
	emu_push(emu_cs); emu_push(0x0066); emu_cs = 0x0F3F; f__0F3F_028E_0015_1153();
	emu_sp += 8;

	newPosition.s.y = emu_dx;
	newPosition.s.x = emu_ax;

	if (newPosition.tile == unit->position.tile) return false;

	if ((newPosition.tile & 0xC000C000) != 0) {
		if ((ui->variable_36 & 0x80) != 0) {
			newPosition = unit->position;

			Unit_Unknown1E99(unit, unit->variable_62[0][2] + (Tools_Random_256() & 0xF), false, 0);
		} else {
			Unit_Unknown10EC(unit);
			return true;
		}

		if (unit->flags.s.byScenario || unit->linkedID == 0xFF) {
			emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
			emu_push(emu_cs); emu_push(0x0116); emu_cs = 0x0C10; emu_Object_IsScriptVariable4NotNull();
			emu_sp += 4;

			if (emu_ax == 0) {
				Unit_Unknown10EC(unit);
				return true;
			}
		}
	}

	unit->variable_6C = 0;

	if ((ui->variable_36 & 0x10) != 0 || unit->flags.s.unknown_0080) {
		unit->variable_6C = Tools_Random_256() & 7;
	}

	d = Tile_GetDistance(newPosition, unit->variable_49);
	packed = Tile_PackTile(newPosition);

	if ((ui->variable_36 & 0x20) != 0 && d < 48) {
		Unit *u;
		u = Unit_Get_ByPackedTile(packed);

		if (u != NULL && g_unitInfo[u->type].variable_3C == 0 && u->flags.s.allocated) {
			if (u == Unit_Get_ByMemory(g_global->selectionUnit)) {
				Unit_Select(NULL);
			}

			Unit_UntargetMe(u);
			u->script.returnValue = 1;
			Unit_SetAction(u, ACTION_DIE);
		} else {
			emu_push(packed);
			emu_push(emu_cs); emu_push(0x0216); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
			emu_sp += 2;

			if ((emu_ax == 0 || emu_ax == 2) && Map_GetTileByPosition(packed)->fogOfWar == 0) {
				emu_push(unit->variable_62[0][2]);
				emu_push(emu_cs); emu_push(0x0265); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17DC_0019_CB46();
				emu_sp += 2;

				emu_push(5);
				emu_push(unit->houseID);
				emu_push(0);
				emu_push(unit->position.s.y); emu_push(unit->position.s.x);
				emu_push(0x33C8); emu_push(emu_ax << 4);
				emu_push(emu_cs); emu_push(0x0277); emu_cs = 0x151A; f__151A_000E_0013_5840();
				emu_sp += 14;
			}
		}
	}

	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(0);
	emu_push(emu_cs); emu_push(0x0288); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	emu_sp += 6;

	if (ui->variable_3C == 4) {
		unit->flags.s.unknown_0020 ^= true;
	}

	position_49 = unit->variable_49;
	distance = Tile_GetDistance(newPosition, position_49);

	if (unit->type == UNIT_SONIC_BLAST) {
		Unit *u;
		uint16 damage;

		damage = (unit->hitpoints / 4) + 1;
		ret = false;

		u = Unit_Get_ByPackedTile(packed);

		if (u != NULL) {
			if ((g_unitInfo[u->type].variable_36 & 8) == 0) {
				Unit_Damage(u, damage, 0);
			}
		} else {
			Structure *s;

			s = Structure_Get_ByPackedTile(packed);

			if (s != NULL) {
				emu_push(0);
				emu_push(damage);
				emu_push(g_global->structureStartPos.s.cs); emu_push(g_global->structureStartPos.s.ip + s->index * sizeof(Structure));
				emu_push(emu_cs); emu_push(0x0355); emu_cs = 0x0C3A; f__0C3A_1216_0013_E56D();
				emu_sp += 8;
			} else {
				emu_push(packed);
				emu_push(emu_cs); emu_push(0x0360); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
				emu_sp += 2;

				if (emu_ax == 11 && emu_get_memory16(0x2C94, 0x00, 0x55A) > damage) Tools_Random_256();
			}
		}

		if (unit->hitpoints < (ui->variable_52 / 2)) {
			unit->flags.s.unknown_0040 = true;
		}

		if (--unit->hitpoints == 0 || unit->variable_51 == 0) {
			Unit_Unknown10EC(unit);
		}
	} else {
		if (unit->type == UNIT_MGV) {
			emu_push(Tile_PackTile(newPosition));
			emu_push(emu_cs); emu_push(0x0418); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
			emu_sp += 2;

			if (emu_ax == 11 || emu_ax == 12) {
				if (Tools_Index_GetType(unit->originEncoded) == IT_STRUCTURE) {
					if (Map_GetTileByPosition(Tile_PackTile(newPosition))->houseID == unit->houseID) {
						emu_ax = 0;
					}
				}
			}

			if (emu_ax == 11 || emu_ax == 12 || emu_ax == 6) {
				unit->position = newPosition;

				emu_push(unit->originEncoded);
				emu_push(unit->hitpoints);
				emu_push(unit->position.s.y); emu_push(unit->position.s.x);
				emu_push((ui->variable_54 + unit->hitpoints / 10) & 3);
				emu_push(emu_cs); emu_push(0x04C1); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
				emu_sp += 10;

				Unit_Unknown10EC(unit);
				return true;
			}
		}

		ret = (unit->variable_52 < distance || distance < 16);

		if (ret) {
			if ((ui->variable_36 & 2) != 0) {
				if (unit->variable_51 == 0 || unit->type == UNIT_MISSILE_TURRET) {
					if (unit->type == UNIT_MISSILE_HOUSE) {
						uint8 i;

						for (i = 0; i < 17; i++) {
							emu_push(0);
							emu_push(200);
							emu_push(newPosition.s.y + g_global->variable_6294[i].s.y); emu_push(newPosition.s.x + g_global->variable_6294[i].s.x);
							emu_push(ui->variable_54);
							emu_push(emu_cs); emu_push(0x057A); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
							emu_sp += 10;
						}
					} else {
						if (ui->variable_54 != 0xFFFF) {
							emu_push(Tile_PackTile(unit->position));
							emu_push(emu_cs); emu_push(0x05D9); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
							emu_sp += 2;

							if ((ui->variable_36 & 0x800) != 0 && Map_GetTileByPosition(Tile_PackTile(unit->position))->index == 0 && emu_ax == 0) {
								emu_push(unit->originEncoded);
								emu_push(unit->hitpoints);
								emu_push(newPosition.s.y); emu_push(newPosition.s.x);
								emu_push(8);
								emu_push(emu_cs); emu_push(0x05FB); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
								emu_sp += 10;
							} else {
								if (unit->type == UNIT_MISSILE_DEVIATOR) {
									emu_push(32);
									emu_push(newPosition.s.y); emu_push(newPosition.s.x);
									emu_push(ui->variable_54);
									emu_push(emu_cs); emu_push(0x0620); emu_cs = 0x06F7; emu_Map_DeviateArea();
									emu_sp += 8;
								} else {
									emu_push(unit->originEncoded);
									emu_push(unit->hitpoints);
									emu_push(newPosition.s.y); emu_push(newPosition.s.x);
									emu_push((ui->variable_54 + unit->hitpoints / 20) & 3);
									emu_push(emu_cs); emu_push(0x065A); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
									emu_sp += 10;
								}
							}
						}
					}

					Unit_Unknown10EC(unit);
					return true;
				}
			} else {
				if ((ui->variable_36 & 0x40) != 0) {
					if (position_49.tile != 0) newPosition = position_49;
					unit->variable_5E = unit->variable_5A;
					unit->variable_5A = unit->position;
					unit->variable_49.tile = 0;

					if (unit->flags.s.variable_0400 && (Tools_Random_256() & 3) == 0) {
						Unit_Damage(unit, 1, 0);
					}

					if (unit->type == UNIT_SABOTEUR) {
						emu_push(Tile_PackTile(newPosition));
						emu_push(emu_cs); emu_push(0x076C); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
						emu_sp += 2;

						if (emu_ax == 11 || (unit->targetMove != 0 && Tile_GetDistance(unit->position, Tools_Index_GetTile(unit->targetMove)) < 32)) {
							emu_push(0);
							emu_push(500);
							emu_push(newPosition.s.y); emu_push(newPosition.s.x);
							emu_push(4);
							emu_push(emu_cs); emu_push(0x0748); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
							emu_sp += 10;

							Unit_Free(unit);
							return true;
						}
					}

					emu_push(0);
					emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
					emu_push(emu_cs); emu_push(0x0782); f__1A34_204C_0043_B1ED();
					emu_sp += 6;

					if (unit->targetMove == Tools_Index_Encode(packed, IT_TILE)) {
						unit->targetMove = 0;
					}

					{
						Structure *s;

						s = Structure_Get_ByPackedTile(packed);
						if (s != NULL) {
							unit->variable_5E.tile = 0;
							unit->variable_5A.tile = 0;

							emu_push(g_global->structureStartPos.s.cs); emu_push(g_global->structureStartPos.s.ip + s->index * sizeof(Structure));
							emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
							emu_push(emu_cs); emu_push(0x07DF); f__1A34_2C95_001B_89A2();
							emu_sp += 8;

							return true;
						}
					}

					if (unit->type != UNIT_SANDWORM) {
						if (Map_GetTileByPosition(packed)->spriteID == g_global->variable_39F4) {
							Map_GetTileByPosition(g_global->selectionPosition)->spriteID = g_map[g_global->selectionPosition] & 0x01FF;
							sprite1 = true;
						}

						if (Map_GetTileByPosition(packed)->spriteID == g_global->variable_39F4 + 1) {
							Map_GetTileByPosition(g_global->selectionPosition)->spriteID = g_map[g_global->selectionPosition] & 0x01FF;
							sprite2 = true;
						}
					}
				}
			}
		}
	}

	unit->variable_52 = distance;
	unit->position = newPosition;

	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(1);
	emu_push(emu_cs); emu_push(0x08B4); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	emu_sp += 6;

	if (sprite2 != 0) {
		emu_push(Unit_GetHouseID(unit));
		emu_push(packed);
		emu_push(emu_cs); emu_push(0x08D1); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_160C_0014_FAD7();
		emu_sp += 4;
	}

	if (sprite1 != 0) {
		emu_push(Unit_GetHouseID(unit));
		emu_push(packed);
		emu_push(emu_cs); emu_push(0x08ED); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_14CA_0013_F579();
		emu_sp += 4;
	}

	return ret;
}

/**
 * Applies damages to the given unit.
 *
 * @param unit The Unit to apply damages on.
 * @param damage The amount of damage to apply.
 * @param range ??.
 * @return True if and only if the unit has no hitpoints left.
 */
bool Unit_Damage(Unit *unit, uint16 damage, uint16 range)
{
	csip32 ucsip;
	UnitInfo *ui;
	bool alive = false;
	uint8 houseID;

	if (unit == NULL || !unit->flags.s.allocated) return false;

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	ucsip.s.cs = g_global->unitStartPos.s.cs;
	ucsip.s.ip = g_global->unitStartPos.s.ip + unit->index * sizeof(Unit);

	ui = &g_unitInfo[unit->type];

	if ((ui->variable_36 & 0x8000) == 0 && unit->type != UNIT_SANDWORM) return false;

	if (unit->hitpoints != 0) alive = true;

	if (unit->hitpoints >= damage) {
		unit->hitpoints -= damage;
	} else {
		unit->hitpoints = 0;
	}

	Unit_Deviation_Decrease(unit, 0);

	houseID = Unit_GetHouseID(unit);

	if (unit->hitpoints == 0) {
		emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
		emu_push(emu_cs); emu_push(0x0C1D); f__1A34_379B_0015_B07B();
		emu_sp += 4;

		if (unit->type == UNIT_HARVESTER) {
			emu_push(unit->amount / 32);
			emu_push(Tile_PackTile(unit->position));
			emu_push(emu_cs); emu_push(0x0C4E); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_154C_0015_B7FB();
			emu_sp += 4;
		}

		if (unit->type == UNIT_SABOTEUR) {
			emu_push(20);
			emu_push(emu_cs); emu_push(0x0C63); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
			emu_sp += 2;
		} else {
			if (!ui->flags.s.noMessageOnDeath && alive) {
				if (houseID == g_global->playerHouseID || g_global->campaignID > 3) {
					emu_push(houseID + 14);
					emu_push(emu_cs); emu_push(0x0CAC); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
					emu_sp += 2;
				} else {
					emu_push(13);
					emu_push(emu_cs); emu_push(0x0CAC); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
					emu_sp += 2;
				}
			}
		}

		Unit_SetAction(unit, ACTION_DIE);
		return true;
	}

	if (range != 0) {
		emu_push(0);
		emu_push(0);
		emu_push(unit->position.s.y); emu_push(unit->position.s.x);
		emu_push((damage < 25) ? 0 : 1);
		emu_push(emu_cs); emu_push(0x0CF1); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
		emu_sp += 10;
	}

	if (houseID != g_global->playerHouseID && unit->actionID == ACTION_AMBUSH && unit->type != UNIT_HARVESTER) {
		Unit_SetAction(unit, ACTION_ATTACK);
	}

	if (unit->hitpoints >= ui->hitpoints / 2) return false;

	if (unit->type == UNIT_SANDWORM) {
		Unit_SetAction(unit, ACTION_DIE);
	}

	if (unit->type == UNIT_TROOPERS || unit->type == UNIT_INFANTRY) {
		unit->type += 2;
		ui = &g_unitInfo[unit->type];
		unit->hitpoints = ui->hitpoints;

		emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
		emu_push(2);
		emu_push(emu_cs); emu_push(0x0DB8); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
		emu_sp += 6;

		if (Tools_Random_256() < g_houseInfo[unit->houseID].variable_04) {
			Unit_SetAction(unit, ACTION_RETREAT);
		}
	}

	if (ui->variable_3C != 2 && ui->variable_3C != 1 && ui->variable_3C != 3) return false;

	unit->flags.s.variable_0008 = true;
	unit->variable_6D = 0;
	unit->variable_70 = 0;

	return false;
}

/**
 * Untarget the given unit.
 *
 * @param unit The unit to untarget.
 */
void Unit_UntargetMe(Unit *unit)
{
	csip32 ucsip;
	uint16 encoded;
	PoolFindStruct find;

	if (unit == NULL) return;

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	ucsip.s.cs = g_global->unitStartPos.s.cs;
	ucsip.s.ip = g_global->unitStartPos.s.ip + unit->index * sizeof(Unit);

	encoded = Tools_Index_Encode(unit->index, IT_UNIT);

	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(emu_cs); emu_push(0x367E); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	emu_sp += 4;

	find.houseID = 0xFFFF;
	find.type    = 0xFFFF;
	find.index   = 0xFFFF;

	while (true) {
		Unit *u;
		csip32 ucsip2;

		u = Unit_Find(&find);

		if (u == NULL) break;
		if (u->targetMove == encoded) u->targetMove = 0;
		if (u->targetAttack == encoded) u->targetAttack = 0;

		/* XXX -- Temporary, to keep all the emu_calls workable for now */
		ucsip2.s.cs = g_global->unitStartPos.s.cs;
		ucsip2.s.ip = g_global->unitStartPos.s.ip + u->index * sizeof(Unit);

		emu_push(ucsip2.s.cs); emu_push(ucsip2.s.ip);
		emu_push(emu_cs); emu_push(0x36C6); emu_cs = 0x0C10; emu_Object_GetScriptVariable4();
		emu_sp += 4;

		if (emu_ax != encoded) continue;

		emu_push(ucsip2.s.cs); emu_push(ucsip2.s.ip);
		emu_push(emu_cs); emu_push(0x36D7); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
		emu_sp += 4;
	}

	find.houseID = 0xFFFF;
	find.type    = 0xFFFF;
	find.index   = 0xFFFF;

	while (true) {
		Structure *s;

		s = Structure_Find(&find);

		if (s == NULL) break;
		if (s->type != STRUCTURE_TURRET && s->type != STRUCTURE_ROCKET_TURRET) continue;
		if (s->script.variables[2] == encoded) s->script.variables[2] = 0;
	}

	Unit_RemoveFromTeam(unit);

	find.houseID = 0xFFFF;
	find.type    = 0xFFFF;
	find.index   = 0xFFFF;

	while (true) {
		Team *t;

		t = Team_Find(&find);

		if (t == NULL) break;
		if (t->target == encoded) t->target = 0;
	}
}

/**
 * Unknwown function 1E99.
 *
 * @param unit The Unit to operate on.
 * @param arg0A ??.
 * @param arg0C ??.
 * @param i ??.
 */
void Unit_Unknown1E99(Unit *unit, uint8 arg0A, bool arg0C, uint16 i)
{
	int16 locsi;

	assert(i < 2);

	if (unit == NULL) return;

	unit->variable_62[i][0] = 0;
	unit->variable_62[i][1] = arg0A;

	if (arg0C) {
		unit->variable_62[i][2] = arg0A;
		return;
	}

	if (unit->variable_62[i][2] == arg0A) return;

	unit->variable_62[i][0] = g_unitInfo[unit->type].variable_42 << 2;

	locsi = arg0A - unit->variable_62[i][2];

	if ((locsi <= -128 || locsi >= 0) && locsi <= 128) return;

	unit->variable_62[i][0] = -unit->variable_62[i][0];
}

/**
 * Selects the given unit.
 *
 * @param unit The Unit to select.
 */
void Unit_Select(Unit *unit)
{
	csip32 ucsip;
	Unit *selected;

	selected = (g_global->selectionUnit.csip != 0x0) ? Unit_Get_ByMemory(g_global->selectionUnit) : NULL;

	if (unit == selected) return;

	if (unit != NULL && !unit->flags.s.allocated && g_global->debugGame == 0) {
		unit = NULL;
	}

	if (unit != NULL && (unit->variable_09 & (1 << g_global->playerHouseID)) == 0 && g_global->debugGame == 0) {
		unit = NULL;
	}

	if (selected != NULL) {
		emu_push(g_global->selectionUnit.s.cs); emu_push(g_global->selectionUnit.s.ip);
		emu_push(2);
		emu_push(emu_cs); emu_push(0x0FCD); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
		emu_sp += 6;
	}

	if (unit == NULL) {
		g_global->selectionUnit.csip = 0x0;

		emu_push(4);
		emu_push(emu_cs); emu_push(0x10E9); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
		emu_sp += 2;

		return;
	}

	if (Unit_GetHouseID(unit) == g_global->playerHouseID) {
		UnitInfo *ui;

		ui = &g_unitInfo[unit->type];

		emu_push(ui->variable_3C == 0 ? 18 : 19);
		emu_push(emu_cs); emu_push(0x1018); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0156();
		emu_sp += 2;

		emu_push(ui->spriteID);
		emu_push(ui->variable_2B);
		emu_push(emu_cs); emu_push(0x1050); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
		emu_sp += 4;
	}

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	ucsip.s.cs = g_global->unitStartPos.s.cs;
	ucsip.s.ip = g_global->unitStartPos.s.ip + unit->index * sizeof(Unit);

	if (selected != NULL) {
		if (selected != unit) {
			emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
			emu_push(emu_cs); emu_push(0x1077); f__1A34_27A8_0012_7198();
			emu_sp += 4;
		}

		g_global->selectionUnit = ucsip;

		emu_push(1);
		emu_push(emu_cs); emu_push(0x108F); emu_cs = 0x10E4; f__10E4_0F1A_0088_7622();
		emu_sp += 2;
	} else {
		emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
		emu_push(emu_cs); emu_push(0x109C); f__1A34_27A8_0012_7198();
		emu_sp += 4;

		g_global->selectionUnit = ucsip;

		emu_push(3);
		emu_push(emu_cs); emu_push(0x10B4); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
		emu_sp += 2;
	}

	emu_push(g_global->selectionUnit.s.cs); emu_push(g_global->selectionUnit.s.ip);
	emu_push(2);
	emu_push(emu_cs); emu_push(0x10C6); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	emu_sp += 6;

	Map_SetSelectionObjectPosition(0xFFFF);
}
