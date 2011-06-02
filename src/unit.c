/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "os/strings.h"
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "animation.h"
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
#include "os/math.h"
#include "string.h"
#include "gui/gui.h"
#include "gui/widget.h"
#include "sprites.h"

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
 * Rotate a unit (or his top).
 *
 * @param unit The Unit to operate on.
 * @param level 0 = base, 1 = top (turret etc).
 */
static void Unit_Rotate(Unit *unit, uint16 level)
{
	int8 target;
	int8 current;
	int8 newCurrent;
	int16 diff;

	assert(level == 0 || level == 1);

	if (unit->orientation[level].speed == 0) return;

	target = unit->orientation[level].target;
	current = unit->orientation[level].current;
	diff = target - current;

	if (diff > 128) diff -= 256;
	if (diff < -128) diff += 256;
	diff = abs(diff);

	newCurrent = current + unit->orientation[level].speed;

	if (abs(unit->orientation[level].speed) >= diff) {
		unit->orientation[level].speed = 0;
		newCurrent = target;
	}

	unit->orientation[level].current = newCurrent;

	if (Sprites_B4CD_17F7(newCurrent) == Sprites_B4CD_17F7(current) && Sprites_B4CD_17DC(newCurrent) == Sprites_B4CD_17DC(current)) return;

	Unit_B4CD_01BF(2, unit);
}

void Unit_Unknown2134(Unit *unit)
{
	uint16 loc02;

	if (unit->variable_6A == 0) return;

	loc02 = unit->variable_69;

	loc02 += Tools_AdjustToGameSpeed(unit->variable_68, 1, 255, false);

	if ((loc02 & 0xFF00) != 0) {
		Unit_Move(unit, min(unit->variable_6A * 16, Tile_GetDistance(unit->o.position, unit->variable_49) + 16));
	}

	unit->variable_69 = loc02 & 0xFF;
}

/**
 * Loop over all units, performing various of tasks.
 */
void GameLoop_Unit()
{
	PoolFindStruct find;
	bool tickUnknown1  = false;
	bool tickUnknown2  = false;
	bool tickBlinking  = false;
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

	if (g_global->tickUnitBlinking <= g_global->tickGlobal) {
		tickBlinking = true;
		g_global->tickUnitBlinking = g_global->tickGlobal + 3;
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

		ui = &g_unitInfo[u->o.type];
		h  = House_Get_ByIndex(u->o.houseID);
		hi = &g_houseInfo[h->index];

		g_scriptCurrentObject    = &u->o;
		g_scriptCurrentStructure = NULL;
		g_scriptCurrentUnit      = u;

		if (u->o.flags.s.isNotOnMap) continue;

		if (tickUnknown4 && u->targetAttack != 0 && ui->o.flags.s.hasTurret) {
			tile32 tile;

			tile = Tools_Index_GetTile(u->targetAttack);

			Unit_SetOrientation(u, Tile_GetDirection(u->o.position, tile), false, 1);
		}

		if (tickUnknown1) {
			Unit_Unknown2134(u);

			if (u->fireDelay != 0) {
				if (ui->movementType == MOVEMENT_WINGER && (ui->variable_36 & 0x8000) == 0) {
					tile32 tile;

					tile = u->variable_49;

					if (Tools_Index_GetType(u->targetAttack) == IT_UNIT && g_unitInfo[Tools_Index_GetUnit(u->targetAttack)->o.type].movementType == MOVEMENT_WINGER) {
						tile = Tools_Index_GetTile(u->targetAttack);
					}

					Unit_SetOrientation(u, Tile_GetDirection(u->o.position, tile), false, 0);
				}

				u->fireDelay--;
			}
		}

		if (tickUnknown2) {
			Unit_Rotate(u, 0);
			if (ui->o.flags.s.hasTurret) Unit_Rotate(u, 1);
		}

		if (tickBlinking && u->blinkCounter != 0) {
			u->blinkCounter--;
			if ((u->blinkCounter % 2) != 0) {
				u->o.flags.s.isHighlighted = true;
			} else {
				u->o.flags.s.isHighlighted = false;
			}

			Unit_B4CD_01BF(2, u);
		}

		if (tickDeviation) Unit_Deviation_Decrease(u, 1);

		if (ui->movementType != MOVEMENT_WINGER && Object_GetByPackedTile(Tile_PackTile(u->o.position)) == NULL) Unit_B4CD_01BF(1, u);

		if (tickUnknown5) {
			if (u->variable_70 == 0) {
				if ((ui->movementType == MOVEMENT_FOOT && u->variable_6A != 0) || u->o.flags.s.isSmoking) {
					if (u->variable_6D >= 0) {
						u->variable_6D &= 0x3F;
						u->variable_6D++;

						Unit_B4CD_01BF(2, u);

						u->variable_70 = ui->variable_3E / 5;
						if (u->o.flags.s.isSmoking) {
							u->variable_70 = 3;
							if (u->variable_6D > 32) {
								u->o.flags.s.isSmoking = false;
								u->variable_6D = 0;
							}
						}
					}
				}

				if (u->o.type == UNIT_ORNITHOPTER && u->o.flags.s.allocated && u->variable_6D >= 0) {
					u->variable_6D &= 0x3F;
					u->variable_6D++;

					Unit_B4CD_01BF(2, u);

					u->variable_70 = 1;
				}

				if (u->o.type == UNIT_HARVESTER) {
					if (u->actionID == ACTION_HARVEST || u->o.flags.s.isSmoking) {
						u->variable_6D &= 0x3F;
						u->variable_6D++;

						Unit_B4CD_01BF(2, u);

						u->variable_70 = 4;
					} else {
						if (u->variable_6D != 0) {
							Unit_B4CD_01BF(2, u);

							u->variable_6D = 0;
						}
					}
				}
			} else {
				u->variable_70--;
			}
		}

		if (tickScript) {
			if (u->o.scriptDelay == 0) {
				if (Script_IsLoaded(&u->o.script)) {
					g_global->scriptUnitLeft = g_global->scriptUnitSpeed * 5;
					if (!ui->o.flags.s.scriptNoSlowdown && !Map_IsPositionInViewport(u->o.position, NULL, NULL)) {
						g_global->scriptUnitLeft = 1;
					}

					u->o.script.variables[3] = g_global->playerHouseID;

					for (; g_global->scriptUnitLeft >= -1 && u->o.scriptDelay == 0; g_global->scriptUnitLeft--) {
						g_global->variable_37A4 = 0;
						g_global->variable_37A2++;

						if (u->o.script.stackPointer <= 15 && 15 - u->o.script.stackPointer > g_global->variable_37A8) {
							g_global->variable_37A8 = 15 - u->o.script.stackPointer;
						}

						if (!Script_Run(&u->o.script)) break;
					}
				}
			} else {
				u->o.scriptDelay--;
			}
		}

		if (u->nextActionID == ACTION_INVALID) continue;
		if (u->variable_49.tile != 0) continue;

		Unit_SetAction(u, u->nextActionID);
		u->nextActionID = ACTION_INVALID;
	}
}

/**
 * Get the HouseID of a unit. This is not always u->o.houseID, as a unit can be
 *  deviated by the Ordos.
 *
 * @param u Unit to get the HouseID of.
 * @return The HouseID of the unit, which might be deviated.
 */
uint8 Unit_GetHouseID(Unit *u)
{
	if (u->deviated != 0) return HOUSE_ORDOS;
	return u->o.houseID;
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
		const char *unitName = (const char *)emu_get_memorycsip(g_unitInfo[type].o.name);
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
 * @param orientation Orientation of the Unit.
 * @return The new created Unit, or NULL if something failed.
 */
Unit *Unit_Create(uint16 index, uint8 typeID, uint8 houseID, tile32 position, int8 orientation)
{
	UnitInfo *ui;
	Unit *u;

	if (houseID >= HOUSE_MAX) return NULL;
	if (typeID >= UNIT_MAX) return NULL;

	ui = &g_unitInfo[typeID];
	u = Unit_Allocate(index, typeID, houseID);
	if (u == NULL) return NULL;

	u->o.houseID = houseID;

	Unit_SetOrientation(u, orientation, true, 0);
	Unit_SetOrientation(u, orientation, true, 1);

	Unit_Unknown204C(u, 0);

	u->o.position.tile  = position.tile;
	u->o.hitpoints      = ui->o.hitpoints;
	u->variable_49.tile = 0;
	u->originEncoded    = 0x0000;
	u->variable_72[0]   = 0xFF;

	if (position.tile != 0xFFFFFFFF) {
		u->originEncoded    = Unit_FindClosestRefinery(u);
		u->variable_5A.tile = position.tile;
		u->variable_5E.tile = position.tile;
	}

	u->o.linkedID    = 0xFF;
	u->o.scriptDelay = 0;
	u->actionID      = ACTION_GUARD;
	u->nextActionID  = ACTION_INVALID;
	u->fireDelay     = 0;
	u->variable_52   = 0x7FFF;
	u->targetMove    = 0x0000;
	u->amount        = 0;
	u->variable_6C   = 0x00;
	u->variable_6D   = 0x00;
	u->blinkCounter  = 0;
	u->variable_70   = 0x0000;

	Script_Reset(&u->o.script, &g_global->scriptUnit);

	u->o.flags.s.allocated = true;

	if (ui->movementType == MOVEMENT_TRACKED) {
		if (Tools_Random_256() < g_houseInfo[houseID].variable_06) {
			u->o.flags.s.degrades = true;
		}
	}

	if (ui->movementType == MOVEMENT_WINGER) {
		Unit_Unknown204C(u, 255);
	} else {
		if (position.tile != 0xFFFFFFFF && Unit_Unknown0E2E(u)) {
			Unit_Free(u);
			return NULL;
		}
	}

	if (position.tile == 0xFFFFFFFF) {
		u->o.flags.s.isNotOnMap = true;
		return u;
	}

	Unit_B4CD_01BF(1, u);

	Unit_SetAction(u, (houseID == g_global->playerHouseID) ? ui->o.actionsPlayer[3] : ui->actionAI);

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
		if (typeID != UNIT_INVALID && u->o.type != typeID) continue;
		if (g_global->variable_38BC == 0 && u->o.flags.s.isNotOnMap) continue;

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
			u->o.scriptDelay = 0;
			Script_Reset(&u->o.script, &g_global->scriptUnit);
			u->o.script.variables[0] = action;
			Script_Load(&u->o.script, u->o.type);
			return;

		case 2:
			u->o.script.variables[0] = action;
			Script_Unknown044C(&u->o.script, u->o.type);
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

		if ((u1->o.variable_09 & (1 << g_global->playerHouseID)) != 0 && !u1->o.flags.s.isNotOnMap) {
			if (House_AreAllied(u1->o.houseID, (uint8)g_global->playerHouseID)) {
				h->unitCountAllied++;
			} else {
				h->unitCountEnemy++;
			}
		}
		y1 = Tile_GetY(u1->o.position);
		y2 = Tile_GetY(u2->o.position);
		if (g_unitInfo[u1->o.type].movementType == MOVEMENT_FOOT) y1 -= 0x100;
		if (g_unitInfo[u2->o.type].movementType == MOVEMENT_FOOT) y2 -= 0x100;

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

	if (Tile_IsOutOfMap(packed)) return NULL;

	tile = Map_GetTileByPosition(packed);
	if (!tile->hasUnit) return NULL;
	return Unit_Get_ByIndex(tile->index - 1);
}

/**
 * Determines whether a move order into the given structure is OK for
 * a particular unit.
 *
 * It handles orders to invade enemy buildings as well as going into
 * a friendly structure (e.g. refinery, repair facility).
 *
 * @param unit The Unit to operate on.
 * @param s The Structure to operate on.
 * @return
 * 0 - invalid movement
 * 1 - valid movement, will try to get close to the structure
 * 2 - valid movement, will attempt to damage/conquer the structure
 */
uint16 Unit_IsValidMovementIntoStructure(Unit *unit, Structure *s)
{
	StructureInfo *si;
	UnitInfo *ui;
	uint16 unitEnc;
	uint16 structEnc;

	if (unit == NULL || s == NULL) return 0;

	si = &g_structureInfo[s->o.type];
	ui = &g_unitInfo[unit->o.type];

	unitEnc = Tools_Index_Encode(unit->o.index, IT_UNIT);
	structEnc = Tools_Index_Encode(s->o.index, IT_STRUCTURE);

	/* Movement into structure of other owner. */
	if (Unit_GetHouseID(unit) != s->o.houseID) {
		/* Saboteur can always enter houses */
		if (unit->o.type == UNIT_SABOTEUR && unit->targetMove == structEnc) return 2;
		/* Entering houses is only possible for foot-units and if the structure is conquerable.
		 * Everyone else can only move close to the building. */
		if (ui->movementType == MOVEMENT_FOOT && si->o.flags.s.conquerable) return unit->targetMove == structEnc ? 2 : 1;
		return 0;
	}

	/* Prevent movement if target structure does not accept the unit type. */
	if ((si->enterFilter & (1 << unit->o.type)) == 0) return 0;

	/* TODO -- Not sure. */
	if (s->o.script.variables[4] == unitEnc) return 2;

	/* Enter only if structure not linked to any other unit already. */
	return s->o.linkedID == 0xFF ? 1 : 0;
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
			if (u != u2) destination = Tools_Index_Encode(u2->o.index, IT_UNIT);
		} else {
			s = Structure_Get_ByPackedTile(packed);
			if (s != NULL) destination = Tools_Index_Encode(s->o.index, IT_STRUCTURE);
		}
	}

	s = Tools_Index_GetStructure(destination);
	if (s != NULL && s->o.houseID == Unit_GetHouseID(u)) {
		if (Unit_IsValidMovementIntoStructure(u, s) == 1 || g_unitInfo[u->o.type].movementType == MOVEMENT_WINGER) {
			Object_Script_Variable4_Link(Tools_Index_Encode(u->o.index, IT_UNIT), destination);
		}
	}

	u->targetMove  = destination;
	u->variable_72[0] = 0xFF;
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
		if (su.o.script.script.csip != 0x00000000) {
			ScriptInfo *scriptInfo;
			scriptInfo = ScriptInfo_Get_ByMemory(su.o.script.scriptInfo);
			su.o.script.script.csip = (su.o.script.script.csip - scriptInfo->start.csip) / 2;
		}
		su.o.script.scriptInfo.csip = 0x00000000;

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

		ul.o.script.scriptInfo.s.cs = 0x353F;
		ul.o.script.scriptInfo.s.ip = emu_Global_GetIP(&g_global->scriptUnit, 0x353F);
		if (ul.o.script.script.csip != 0x0) {
			uint16 lineno = ul.o.script.script.csip;

			ul.o.script.script = g_global->scriptUnit.start;
			ul.o.script.script.s.ip += lineno * 2;
		}
		ul.o.scriptDelay = 0;
		ul.variable_70 = 0;

		/* Get the Structure from the pool */
		u = Unit_Get_ByIndex(ul.o.index);
		if (u == NULL) return false;

		/* Copy over the data */
		*u = ul;

		u->o.variable_09 |= 1 << u->o.houseID;
	}
	if (length != 0) return false;

	Unit_Recount();

	return true;
}

/**
 * Get the priority a target unit has for a given unit. The higher the value,
 *  the more serious it should look at the target.
 *
 * @param unit The unit looking at a target.
 * @param target The unit to look at.
 * @return The priority of the target.
 */
uint16 Unit_GetTargetUnitPriority(Unit *unit, Unit *target)
{
	UnitInfo *targetInfo;
	UnitInfo *unitInfo;
	uint16 distance;
	uint16 priority;

	if (unit == NULL || target == NULL) return 0;
	if (unit == target) return 0;

	if (!target->o.flags.s.allocated) return 0;
	if ((target->o.variable_09 & (1 << Unit_GetHouseID(unit))) == 0) return 0;

	if (House_AreAllied(Unit_GetHouseID(unit), Unit_GetHouseID(target))) return 0;

	unitInfo   = &g_unitInfo[unit->o.type];
	targetInfo = &g_unitInfo[target->o.type];

	if (!targetInfo->o.flags.s.priority) return 0;

	if (targetInfo->movementType == MOVEMENT_WINGER) {
		if (!unitInfo->o.flags.s.targetAir) return 0;
		if (target->o.houseID == g_global->playerHouseID && !Map_IsPositionUnveiled(Tile_PackTile(target->o.position))) return 0;
	}

	if (!Map_IsValidPosition(Tile_PackTile(target->o.position))) return 0;

	distance = Tile_GetDistanceRoundedUp(unit->o.position, target->o.position);

	if (!Map_IsValidPosition(Tile_PackTile(unit->o.position))) {
		if (targetInfo->variable_50 >= distance) return 0;
	}

	priority = targetInfo->o.priorityTarget + targetInfo->o.priorityBuild;
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

	if (unit->o.type != UNIT_HARVESTER) {
		unit->originEncoded = Tools_Index_Encode(Tile_PackTile(unit->o.position), IT_TILE);
		return res;
	}

	find.type = STRUCTURE_REFINERY;
	find.houseID = Unit_GetHouseID(unit);
	find.index = 0xFFFF;

	while (true) {
		s2 = Structure_Find(&find);
		if (s2 == NULL) break;
		if (s2->animation != 1) continue;
		d = Tile_GetDistance(unit->o.position, s2->o.position);
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
			d = Tile_GetDistance(unit->o.position, s2->o.position);
			if (mind != 0 && d >= mind) continue;
			mind = d;
			s = s2;
		}
	}

	if (s != NULL) unit->originEncoded = Tools_Index_Encode(s->o.index, IT_STRUCTURE);

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

	if (u == NULL) return false;

	ui = &g_unitInfo[u->o.type];
	u->o.flags.s.isNotOnMap = false;

	u->o.position = Tile_Center(position);

	if (u->originEncoded == 0) Unit_FindClosestRefinery(u);

	u->o.script.variables[4] = 0;

	if (Unit_Unknown0E2E(u)) {
		u->o.flags.s.isNotOnMap = true;
		return false;
	}

	u->variable_49.tile = 0;
	u->targetMove = 0;
	u->targetAttack = 0;

	if (Map_GetTileByPosition(Tile_PackTile(u->o.position))->flag_10 != 0) {
		u->o.variable_09 &= ~(1 << u->o.houseID);

		Unit_HouseUnitCount_Add(u, (uint8)g_global->playerHouseID);
	}

	if (u->o.houseID != g_global->playerHouseID || u->o.type == UNIT_HARVESTER || u->o.type == UNIT_SABOTEUR) {
		Unit_SetAction(u, ui->actionAI);
	} else {
		Unit_SetAction(u, ui->o.actionsPlayer[3]);
	}

	u->variable_6D = 0;

	Unit_B4CD_01BF(1, u);

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
	ucsip.s.ip = g_global->unitStartPos.s.ip + u->o.index * sizeof(Unit);

	u->o.flags.s.allocated = true;
	Unit_UntargetMe(u);

	if (ucsip.csip == g_global->selectionUnit.csip) {
		Unit_Select(NULL);
	}

	u->o.flags.s.variable_4_0040 = true;

	Unit_B4CD_01BF(0, u);

	Unit_HouseUnitCount_Remove(u);

	Script_Reset(&u->o.script, &g_global->scriptUnit);

	Unit_Free(u);
}

/**
 * Gets the best target unit for the given unit.
 *
 * @param u The Unit to get the best target for.
 * @param mode How to determine the best target.
 * @return The best target or NULL if none found.
 */
Unit *Unit_FindBestTargetUnit(Unit *u, uint16 mode)
{
	tile32 position;
	uint16 distance;
	PoolFindStruct find;
	Unit *targetBest = NULL;
	uint16 priorityMax = 0;

	if (u == NULL) return NULL;

	position = u->o.position;
	if (u->originEncoded == 0) {
		u->originEncoded = Tools_Index_Encode(Tile_PackTile(position), IT_TILE);
	} else {
		position = Tools_Index_GetTile(u->originEncoded);
	}

	distance = g_unitInfo[u->o.type].variable_50 << 8;
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
		if ((target->o.variable_09 & (1 << u->o.houseID)) == 0) continue;

		if (mode != 0 && mode != 4) {
			if (mode == 1) {
				if (Tile_GetDistance(u->o.position, target->o.position) > distance) continue;
			}
			if (mode == 2) {
				if (Tile_GetDistance(position, target->o.position) > distance) continue;
			}
		}

		priority = Unit_GetTargetUnitPriority(u, target);

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
	if (!Map_IsPositionUnveiled(Tile_PackTile(target->o.position))) return 0;
	if (g_global->variable_3A3E[Map_B4CD_0750(Tile_PackTile(target->o.position))][7] == 0) return 0;

	switch(g_unitInfo[target->o.type].movementType) {
		case MOVEMENT_FOOT:      res = 0x64;   break;
		case MOVEMENT_TRACKED:   res = 0x3E8;  break;
		case MOVEMENT_HARVESTER: res = 0x3E8;  break;
		case MOVEMENT_WHEELED:   res = 0x1388; break;
		default:                 res = 0;      break;
	}

	if (target->variable_6A != 0 || target->fireDelay != 0) res <<= 2;

	distance = Tile_GetDistanceRoundedUp(unit->o.position, target->o.position);

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

static tile32 Unit_B4CD_00A5(tile32 position, uint8 orientation)
{
	uint16 x;
	uint16 y;

	x = Tile_GetX(position);
	y = Tile_GetY(position);

	orientation = Sprites_B4CD_17DC(orientation);

	x += g_global->variable_2474[orientation];
	y += g_global->variable_2484[orientation];

	if (x > 16384 || y > 16384) return position;

	position.s.x = x;
	position.s.y = y;

	return position;
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
	int8 locsi;
	uint16 packed;
	uint16 loc08;
	tile32 position;
	uint16 locdi;
	int16 locax;

	if (unit == NULL) return false;

	ui = &g_unitInfo[unit->o.type];

	locsi = (int8)((unit->orientation[0].current + 16) & 0xE0);

	Unit_SetOrientation(unit, locsi, true, 0);
	Unit_SetOrientation(unit, locsi, false, 1);

	position = Unit_B4CD_00A5(unit->o.position, locsi);

	packed = Tile_PackTile(position);

	unit->variable_52 = 0x7FFF;

	locax = Unit_Unknown3146(unit, packed, locsi / 32);

	if (locax > 255 || locax == -1) return false;

	loc08 = Map_B4CD_0750(packed);
	if (loc08 == 0xC) loc08 = 0xA;

	locdi = g_global->variable_3A3E[loc08][2 + (ui->movementType / 2)];
	if (ui->movementType % 2 == 0) {
		locdi &= 0xFF;
	} else {
		locdi >>= 8;
	}

	if (unit->o.type == UNIT_SABOTEUR && loc08 == 0xB) locdi = 0xFF;
	unit->o.flags.s.isSmoking = false;

	if (g_global->variable_3A3E[loc08][5] != 0) unit->o.flags.s.variable_4_0080 = true;

	if ((ui->o.hitpoints / 2) > unit->o.hitpoints && ui->movementType != MOVEMENT_WINGER) locdi -= locdi / 4;

	Unit_Unknown204C(unit, locdi);

	if (ui->movementType != MOVEMENT_SLITHER) {
		tile32 positionOld;

		positionOld = unit->o.position;
		unit->o.position = position;

		Unit_B4CD_01BF(1, unit);

		unit->o.position = positionOld;
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
			encoded = Tools_Index_Encode(u->o.index, IT_UNIT);
		} else {
			Structure *s;

			s = Structure_Get_ByPackedTile(packed);
			if (s != NULL) {
				encoded = Tools_Index_Encode(s->o.index, IT_STRUCTURE);
			}
		}
	}

	if (Tools_Index_Encode(unit->o.index, IT_UNIT) == encoded) {
		encoded = Tools_Index_Encode(Tile_PackTile(unit->o.position), IT_TILE);
	}

	unit->targetAttack = encoded;

	if (!g_unitInfo[unit->o.type].o.flags.s.hasTurret) {
		unit->targetMove = encoded;
		unit->variable_72[0] = 0xFF;
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

	if (unit == NULL || unit->deviated == 0) return false;

	ui = &g_unitInfo[unit->o.type];

	if ((ui->variable_36 & 0x8000) == 0) return false;

	if (amount == 0) {
		amount = g_houseInfo[unit->o.houseID].variable_04;
	}

	if (unit->deviated > amount) {
		unit->deviated -= amount;
		return false;
	}

	unit->deviated = 0;
	unit->o.flags.s.variable_4_0040 = true;

	Unit_B4CD_01BF(2, unit);

	unit->o.flags.s.variable_4_0040 = false;
	if (unit->o.houseID == g_global->playerHouseID) {
		Unit_SetAction(unit, ui->o.actionsPlayer[3]);
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
	if (unit->o.flags.s.isNotOnMap) return;
	if (unit->o.position.tile == 0xFFFFFFFF || unit->o.position.tile == 0) return;
	if (!House_AreAllied(Unit_GetHouseID(unit), (uint8)g_global->playerHouseID)) return;

	fogUncoverRadius = g_unitInfo[unit->o.type].o.fogUncoverRadius;

	if (fogUncoverRadius == 0) return;

	Tile_RemoveFogInRadius(unit->o.position, fogUncoverRadius);
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
	UnitInfo *ui;

	if (unit == NULL) return false;

	ui = &g_unitInfo[unit->o.type];

	if ((ui->variable_36 & 0x8000) == 0) return false;
	if (unit->deviated != 0) return false;
	if ((ui->variable_36 & 0x1000) != 0) return false;

	if (probability == 0) probability = g_houseInfo[unit->o.houseID].variable_04;

	if (unit->o.houseID != g_global->playerHouseID) {
		probability -= probability / 8;
	}

	if (Tools_Random_256() >= probability) return false;

	unit->deviated = 0x78;

	Unit_B4CD_01BF(2, unit);

	if (g_global->playerHouseID == HOUSE_ORDOS) {
		Unit_SetAction(unit, ui->o.actionsPlayer[3]);
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
	UnitInfo *ui;
	uint16 d;
	uint16 packed;
	tile32 newPosition;
	bool ret;
	tile32 position_49;
	bool sprite1 = false;
	bool sprite2 = false;

	if (unit == NULL || !unit->o.flags.s.used) return false;

	ui = &g_unitInfo[unit->o.type];

	newPosition = Tile_MoveByDirection(unit->o.position, unit->orientation[0].current, distance);

	if (newPosition.tile == unit->o.position.tile) return false;

	if ((newPosition.tile & 0xC000C000) != 0) {
		if ((ui->variable_36 & 0x80) != 0) {
			newPosition = unit->o.position;

			Unit_SetOrientation(unit, unit->orientation[0].current + (Tools_Random_256() & 0xF), false, 0);
		} else {
			Unit_Unknown10EC(unit);
			return true;
		}

		if (unit->o.flags.s.byScenario && unit->o.linkedID == 0xFF) {
			if (unit->o.script.variables[4] == 0) {
				Unit_Unknown10EC(unit);
				return true;
			}
		}
	}

	unit->variable_6C = 0;

	if ((ui->variable_36 & 0x10) != 0 && unit->o.flags.s.variable_4_0080) {
		unit->variable_6C = Tools_Random_256() & 7;
	}

	d = Tile_GetDistance(newPosition, unit->variable_49);
	packed = Tile_PackTile(newPosition);

	if ((ui->variable_36 & 0x20) != 0 && d < 48) {
		Unit *u;
		u = Unit_Get_ByPackedTile(packed);

		if (u != NULL && g_unitInfo[u->o.type].movementType == MOVEMENT_FOOT && u->o.flags.s.allocated) {
			if (g_global->selectionUnit.csip != 0x0 && u == Unit_Get_ByMemory(g_global->selectionUnit)) {
				Unit_Select(NULL);
			}

			Unit_UntargetMe(u);
			u->o.script.returnValue = 1;
			Unit_SetAction(u, ACTION_DIE);
		} else {
			emu_ax = Map_B4CD_0750(packed);
			if ((emu_ax == 0 || emu_ax == 2) && Map_GetTileByPosition(packed)->overlaySpriteID == 0) {
				csip32 proc;

				proc.s.cs = 0x33C8;
				proc.s.ip = Sprites_B4CD_17DC(unit->orientation[0].current) << 4;

				Animation_Start(proc, unit->o.position, 0, unit->o.houseID, 5);
			}
		}
	}

	Unit_B4CD_01BF(0, unit);

	if (ui->movementType == MOVEMENT_WINGER) {
		unit->o.flags.s.variable_4_0020 = !unit->o.flags.s.variable_4_0020;
	}

	position_49 = unit->variable_49;
	distance = Tile_GetDistance(newPosition, position_49);

	if (unit->o.type == UNIT_SONIC_BLAST) {
		Unit *u;
		uint16 damage;

		damage = (unit->o.hitpoints / 4) + 1;
		ret = false;

		u = Unit_Get_ByPackedTile(packed);

		if (u != NULL) {
			if ((g_unitInfo[u->o.type].variable_36 & 8) == 0) {
				Unit_Damage(u, damage, 0);
			}
		} else {
			Structure *s;

			s = Structure_Get_ByPackedTile(packed);

			if (s != NULL) {
				Structure_Damage(s, damage, 0);
			} else {
				if (Map_B4CD_0750(packed) == 11 && g_structureInfo[STRUCTURE_WALL].o.hitpoints > damage) Tools_Random_256();
			}
		}

		if (unit->o.hitpoints < (ui->damage / 2)) {
			unit->o.flags.s.variable_4_0040 = true;
		}

		if (--unit->o.hitpoints == 0 || unit->fireDelay == 0) {
			Unit_Unknown10EC(unit);
		}
	} else {
		if (unit->o.type == UNIT_BULLET) {
			emu_ax = Map_B4CD_0750(Tile_PackTile(newPosition));
			if (emu_ax == 11 || emu_ax == 12) {
				if (Tools_Index_GetType(unit->originEncoded) == IT_STRUCTURE) {
					if (Map_GetTileByPosition(Tile_PackTile(newPosition))->houseID == unit->o.houseID) {
						emu_ax = 0;
					}
				}
			}

			if (emu_ax == 11 || emu_ax == 12 || emu_ax == 6) {
				unit->o.position = newPosition;

				Map_MakeExplosion((ui->variable_54 + unit->o.hitpoints / 10) & 3, unit->o.position, unit->o.hitpoints, unit->originEncoded);

				Unit_Unknown10EC(unit);
				return true;
			}
		}

		ret = (unit->variable_52 < distance || distance < 16) ? true : false;

		if (ret) {
			if ((ui->variable_36 & 2) != 0) {
				if (unit->fireDelay == 0 || unit->o.type == UNIT_MISSILE_TURRET) {
					if (unit->o.type == UNIT_MISSILE_HOUSE) {
						uint8 i;

						for (i = 0; i < 17; i++) {
							tile32 p = newPosition;
							p.s.y += g_global->variable_6294[i].s.y;
							p.s.x += g_global->variable_6294[i].s.x;

							Map_MakeExplosion(ui->variable_54, p, 200, 0);
						}
					} else if (ui->variable_54 != 0xFFFF) {
						if ((ui->variable_36 & 0x800) != 0 && Map_GetTileByPosition(Tile_PackTile(unit->o.position))->index == 0 && Map_B4CD_0750(Tile_PackTile(unit->o.position)) == 0) {
							Map_MakeExplosion(8, newPosition, unit->o.hitpoints, unit->originEncoded);
						} else if (unit->o.type == UNIT_MISSILE_DEVIATOR) {
							Map_DeviateArea(ui->variable_54, newPosition, 32);
						} else {
							Map_MakeExplosion((ui->variable_54 + unit->o.hitpoints / 20) & 3, newPosition, unit->o.hitpoints, unit->originEncoded);
						}
					}

					Unit_Unknown10EC(unit);
					return true;
				}
			} else {
				if ((ui->variable_36 & 0x40) != 0) {
					if (position_49.tile != 0) newPosition = position_49;
					unit->variable_5E = unit->variable_5A;
					unit->variable_5A = unit->o.position;
					unit->variable_49.tile = 0;

					if (unit->o.flags.s.degrades && (Tools_Random_256() & 3) == 0) {
						Unit_Damage(unit, 1, 0);
					}

					if (unit->o.type == UNIT_SABOTEUR && (Map_B4CD_0750(Tile_PackTile(newPosition)) == 11 || (unit->targetMove != 0 && Tile_GetDistance(unit->o.position, Tools_Index_GetTile(unit->targetMove)) < 32))) {
						Map_MakeExplosion(4, newPosition, 500, 0);

						Unit_Free(unit);
						return true;
					}

					Unit_Unknown204C(unit, 0);

					if (unit->targetMove == Tools_Index_Encode(packed, IT_TILE)) {
						unit->targetMove = 0;
					}

					{
						Structure *s;

						s = Structure_Get_ByPackedTile(packed);
						if (s != NULL) {
							unit->variable_5E.tile = 0;
							unit->variable_5A.tile = 0;
							Unit_EnterStructure(unit, s);
							return true;
						}
					}

					if (unit->o.type != UNIT_SANDWORM) {
						if (Map_GetTileByPosition(packed)->groundSpriteID == g_global->variable_39F4) {
							Map_GetTileByPosition(g_global->selectionPosition)->groundSpriteID = g_map[g_global->selectionPosition] & 0x01FF;
							sprite1 = true;
						}

						if (Map_GetTileByPosition(packed)->groundSpriteID == g_global->variable_39F4 + 1) {
							Map_GetTileByPosition(g_global->selectionPosition)->groundSpriteID = g_map[g_global->selectionPosition] & 0x01FF;
							sprite2 = true;
						}
					}
				}
			}
		}
	}

	unit->variable_52 = distance;
	unit->o.position = newPosition;

	Unit_B4CD_01BF(1, unit);

	if (sprite2 != 0) Map_B4CD_160C(packed, Unit_GetHouseID(unit));

	if (sprite1 != 0) Map_B4CD_14CA(packed, Unit_GetHouseID(unit));

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
	UnitInfo *ui;
	bool alive = false;
	uint8 houseID;

	if (unit == NULL || !unit->o.flags.s.allocated) return false;

	ui = &g_unitInfo[unit->o.type];

	if ((ui->variable_36 & 0x8000) == 0 && unit->o.type != UNIT_SANDWORM) return false;

	if (unit->o.hitpoints != 0) alive = true;

	if (unit->o.hitpoints >= damage) {
		unit->o.hitpoints -= damage;
	} else {
		unit->o.hitpoints = 0;
	}

	Unit_Deviation_Decrease(unit, 0);

	houseID = Unit_GetHouseID(unit);

	if (unit->o.hitpoints == 0) {
		Unit_Unknown379B(unit);

		if (unit->o.type == UNIT_HARVESTER) Map_B4CD_154C(Tile_PackTile(unit->o.position), unit->amount / 32);

		if (unit->o.type == UNIT_SABOTEUR) {
			Sound_Unknown0363(20);
		} else {
			if (!ui->o.flags.s.noMessageOnDeath && alive) {
				Sound_Unknown0363((houseID == g_global->playerHouseID || g_global->campaignID > 3) ? houseID + 14 : 13);
			}
		}

		Unit_SetAction(unit, ACTION_DIE);
		return true;
	}

	if (range != 0) {
		Map_MakeExplosion((damage < 25) ? 0 : 1, unit->o.position, 0, 0);
	}

	if (houseID != g_global->playerHouseID && unit->actionID == ACTION_AMBUSH && unit->o.type != UNIT_HARVESTER) {
		Unit_SetAction(unit, ACTION_ATTACK);
	}

	if (unit->o.hitpoints >= ui->o.hitpoints / 2) return false;

	if (unit->o.type == UNIT_SANDWORM) {
		Unit_SetAction(unit, ACTION_DIE);
	}

	if (unit->o.type == UNIT_TROOPERS || unit->o.type == UNIT_INFANTRY) {
		unit->o.type += 2;
		ui = &g_unitInfo[unit->o.type];
		unit->o.hitpoints = ui->o.hitpoints;

		Unit_B4CD_01BF(2, unit);

		if (Tools_Random_256() < g_houseInfo[unit->o.houseID].variable_04) {
			Unit_SetAction(unit, ACTION_RETREAT);
		}
	}

	if (ui->movementType != MOVEMENT_TRACKED && ui->movementType != MOVEMENT_HARVESTER && ui->movementType != MOVEMENT_WHEELED) return false;

	unit->o.flags.s.isSmoking = true;
	unit->variable_6D = 0;
	unit->variable_70 = 0;

	return false;
}

/**
 * Untarget the given Unit.
 *
 * @param unit The Unit to untarget.
 */
void Unit_UntargetMe(Unit *unit)
{
	PoolFindStruct find;
	uint16 encoded = Tools_Index_Encode(unit->o.index, IT_UNIT);

	Object_Script_Variable4_Clear(&unit->o);

	find.houseID = 0xFFFF;
	find.type    = 0xFFFF;
	find.index   = 0xFFFF;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);
		if (u == NULL) break;

		if (u->targetMove == encoded) u->targetMove = 0;
		if (u->targetAttack == encoded) u->targetAttack = 0;
		if (u->o.script.variables[4] == encoded) Object_Script_Variable4_Clear(&u->o);
	}

	find.houseID = 0xFFFF;
	find.type    = 0xFFFF;
	find.index   = 0xFFFF;

	while (true) {
		Structure *s;

		s = Structure_Find(&find);
		if (s == NULL) break;

		if (s->o.type != STRUCTURE_TURRET && s->o.type != STRUCTURE_ROCKET_TURRET) continue;
		if (s->o.script.variables[2] == encoded) s->o.script.variables[2] = 0;
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
 * Set the new orientation of the unit.
 *
 * @param unit The Unit to operate on.
 * @param orientation The new orientation of the unit.
 * @param rotateInstantly If true, rotation is instant. Else the unit turns over the next few ticks slowly.
 * @param level 0 = base, 1 = top (turret etc).
 */
void Unit_SetOrientation(Unit *unit, int8 orientation, bool rotateInstantly, uint16 level)
{
	int16 diff;

	assert(level == 0 || level == 1);

	if (unit == NULL) return;

	unit->orientation[level].speed = 0;
	unit->orientation[level].target = orientation;

	if (rotateInstantly) {
		unit->orientation[level].current = orientation;
		return;
	}

	if (unit->orientation[level].current == orientation) return;

	unit->orientation[level].speed = (int8)(g_unitInfo[unit->o.type].variable_42 << 2);

	diff = orientation - unit->orientation[level].current;

	if ((diff > -128 && diff < 0) || diff > 128) {
		unit->orientation[level].speed = -unit->orientation[level].speed;
	}
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

	if (unit != NULL && !unit->o.flags.s.allocated && g_global->debugGame == 0) {
		unit = NULL;
	}

	if (unit != NULL && (unit->o.variable_09 & (1 << g_global->playerHouseID)) == 0 && g_global->debugGame == 0) {
		unit = NULL;
	}

	if (selected != NULL) Unit_B4CD_01BF(2, selected);

	if (unit == NULL) {
		g_global->selectionUnit.csip = 0x0;
		selected = NULL;

		GUI_ChangeSelectionType(4);
		return;
	}

	if (Unit_GetHouseID(unit) == g_global->playerHouseID) {
		UnitInfo *ui;

		ui = &g_unitInfo[unit->o.type];

		/* Plays the 'reporting' sound file. */
		Sound_Unknown0156(ui->movementType == MOVEMENT_FOOT ? 18 : 19);

		GUI_DisplayHint(ui->o.hintStringID, ui->o.spriteID);
	}

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	ucsip.s.cs = g_global->unitStartPos.s.cs;
	ucsip.s.ip = g_global->unitStartPos.s.ip + unit->o.index * sizeof(Unit);

	if (selected != NULL) {
		if (selected != unit) Unit_DisplayStatusText(unit);

		g_global->selectionUnit = ucsip;
		selected = unit;

		GUI_Widget_ActionPanel_Draw(true);
	} else {
		Unit_DisplayStatusText(unit);
		g_global->selectionUnit = ucsip;
		selected = unit;

		GUI_ChangeSelectionType(3);
	}

	Unit_B4CD_01BF(2, selected);

	Map_SetSelectionObjectPosition(0xFFFF);
}

/**
 * Create a unit (and a carryall if needed).
 *
 * @param houseID The House of the new Unit.
 * @param typeID The type of the new Unit.
 * @param destination To where on the map this Unit should move.
 * @return The new created Unit, or NULL if something failed.
 */
Unit *Unit_CreateWrapper(uint8 houseID, UnitType typeID, uint16 destination)
{
	tile32 tile;
	House *h;
	int8 orientation;
	Unit *unit;
	Unit *carryall;

	tile = Tile_UnpackTile(Map_B4CD_1816(Tools_Random_256() & 3, houseID));

	h = House_Get_ByIndex(houseID);

	{
		tile32 t;
		t.s.x = 0x2000;
		t.s.y = 0x2000;
		orientation = Tile_GetDirection(tile, t);
	}

	if (g_unitInfo[typeID].movementType == MOVEMENT_WINGER) {
		g_global->variable_38BC++;
		unit = Unit_Create(UNIT_INDEX_INVALID, typeID, houseID, tile, orientation);
		g_global->variable_38BC--;

		if (unit == NULL) return NULL;

		unit->o.flags.s.byScenario = true;

		if (destination != 0) {
			Unit_SetDestination(unit, destination);
		}

		return unit;
	}

	g_global->variable_38BC++;
	carryall = Unit_Create(UNIT_INDEX_INVALID, UNIT_CARRYALL, houseID, tile, orientation);
	g_global->variable_38BC--;

	if (carryall == NULL) {
		if (typeID == UNIT_HARVESTER && h->variable_02 == 0) h->variable_02++;
		return NULL;
	}

	if (House_AreAllied(houseID, (uint8)g_global->playerHouseID) || Unit_IsTypeOnMap(houseID, UNIT_CARRYALL)) {
		carryall->o.flags.s.byScenario = true;
	}

	tile.tile = 0xFFFFFFFF;

	g_global->variable_38BC++;
	unit = Unit_Create(UNIT_INDEX_INVALID, typeID, houseID, tile, 0);
	g_global->variable_38BC--;

	if (unit == NULL) {
		Unit_Unknown10EC(carryall);
		if (typeID == UNIT_HARVESTER && h->variable_02 == 0) h->variable_02++;
		return NULL;
	}

	carryall->o.flags.s.inTransport = true;
	carryall->o.linkedID = unit->o.index & 0xFF;
	if (typeID == UNIT_HARVESTER) unit->amount = 1;

	if (destination != 0) {
		Unit_SetDestination(carryall, destination);
	}

	return unit;
}

/**
 * Find a target around the given packed tile.
 *
 * @param packed The packed tile around where to look.
 * @return A packed tile where a Unit/Structure is, or the given packed tile if nothing found.
 */
uint16 Unit_FindTargetAround(uint16 packed)
{
	uint8 i;

	if (g_global->selectionType == 2) return packed;

	if (Structure_Get_ByPackedTile(packed) != NULL) return packed;

	if (Map_B4CD_0750(packed) == 14) return packed;

	for (i = 0; i < 9; i++) {
		Unit *u;

		u = Unit_Get_ByPackedTile(packed + g_global->variable_62D8[i]);
		if (u == NULL) continue;

		return Tile_PackTile(u->o.position);
	}

	return packed;
}

/**
 * Unknwown function 0E2E.
 *
 * @param unit The Unit to operate on.
 * @return ??.
 */
bool Unit_Unknown0E2E(Unit *unit)
{
	UnitInfo *ui;
	uint16 packed;
	Unit *u;
	uint16 loc02;

	if (unit == NULL) return true;

	ui = &g_unitInfo[unit->o.type];
	packed = Tile_PackTile(unit->o.position);

	loc02 = g_global->variable_3A3E[Map_B4CD_0750(packed)][2 + ui->movementType / 2];
	loc02 &= ((ui->movementType & 0x1) != 0) ? 0xFF00 : 0x00FF;
	if (loc02 == 0) return true;

	if (unit->o.type == UNIT_SANDWORM || ui->movementType == MOVEMENT_WINGER) return false;

	u = Unit_Get_ByPackedTile(packed);
	if (u != NULL && u != unit) {
		if (House_AreAllied(Unit_GetHouseID(u), Unit_GetHouseID(unit))) return true;
		if (ui->movementType != MOVEMENT_TRACKED) return true;
		if (g_unitInfo[u->o.type].movementType != MOVEMENT_FOOT) return true;
	}

	return (Structure_Get_ByPackedTile(packed) != NULL);
}

/**
 * Unknwown function 204C.
 *
 * @param unit The Unit to operate on.
 * @param arg0A ??.
 */
void Unit_Unknown204C(Unit *unit, uint16 arg0A)
{
	uint16 loc02;

	assert(unit != NULL);

	loc02 = 0;
	unit->variable_6A = 0;
	unit->variable_69 = 0;
	unit->variable_68 = 0;

	if (unit->o.type == UNIT_HARVESTER) {
		arg0A = ((255 - unit->amount) * arg0A) / 256;
	}

	if (arg0A == 0 || arg0A >= 256) {
		unit->variable_6B = 0;
		return;
	}

	unit->variable_6B = arg0A & 0xFF;
	arg0A = (g_unitInfo[unit->o.type].variable_40 * arg0A) / 256;
	arg0A = Tools_AdjustToGameSpeed(arg0A, 1, 255, false);
	loc02 = arg0A << 4;
	arg0A >>= 4;

	if (arg0A != 0) {
		loc02 = 255;
	} else {
		arg0A = 1;
	}

	unit->variable_6A = arg0A & 0xFF;
	unit->variable_68 = loc02 & 0xFF;
}

/**
 * Create a new bullet Unit.
 *
 * @param position Where on the map this bullet Unit is created.
 * @param typeID The type of the new bullet Unit.
 * @param houseID The House of the new bullet Unit.
 * @param damage The hitpoints of the new bullet Unit.
 * @param target The target of the new bullet Unit.
 * @return The new created Unit, or NULL if something failed.
 */
Unit *Unit_CreateBullet(tile32 position, UnitType type, uint8 houseID, uint16 damage, uint16 target)
{
	UnitInfo *ui;
	tile32 tile;

	if (!Tools_Index_IsValid(target)) return NULL;

	ui = &g_unitInfo[type];
	tile = Tools_Index_GetTile(target);

	switch (type) {
		case UNIT_MISSILE_HOUSE:
		case UNIT_MISSILE_ROCKET:
		case UNIT_MISSILE_TURRET:
		case UNIT_MISSILE_DEVIATOR:
		case UNIT_MISSILE_TROOPER: {
			int8 orientation;
			Unit *bullet;
			Unit *u;

			orientation = Tile_GetDirection(position, tile);

			bullet = Unit_Create(UNIT_INDEX_INVALID, type, houseID, position, orientation);
			if (bullet == NULL) return NULL;

			Voice_PlayAtTile(ui->variable_58, position);

			bullet->targetAttack = target;
			bullet->o.hitpoints = damage;
			bullet->variable_49 = tile;

			if ((ui->variable_36 & 0x4000) != 0) {
				bullet->variable_49 = Tile_MoveByRandom(tile, (Tools_Random_256() & 0xF) != 0 ? Tile_GetDistance(position, tile) / 256 + 8 : Tools_Random_256() + 8, false);
			}

			bullet->fireDelay = ui->variable_50 & 0xFF;

			u = Tools_Index_GetUnit(target);
			if (u != NULL && g_unitInfo[u->o.type].movementType == MOVEMENT_WINGER) {
				bullet->fireDelay <<= 1;
			}

			if (type == UNIT_MISSILE_HOUSE || (bullet->o.variable_09 & (1 << g_global->playerHouseID)) != 0) return bullet;

			Tile_RemoveFogInRadius(bullet->o.position, 2);

			return bullet;
		}

		case UNIT_BULLET:
		case UNIT_SONIC_BLAST: {
			int8 orientation;
			tile32 t;
			Unit *bullet;

			orientation = Tile_GetDirection(position, tile);

			t = Tile_MoveByDirection(Tile_MoveByDirection(position, 0, 32), orientation, 128);

			bullet = Unit_Create(UNIT_INDEX_INVALID, type, houseID, t, orientation);
			if (bullet == NULL) return NULL;

			if (type == UNIT_SONIC_BLAST) {
				bullet->fireDelay = ui->variable_50 & 0xFF;
			}

			bullet->variable_49 = tile;
			bullet->o.hitpoints = damage;

			if (damage > 15) bullet->o.flags.s.variable_4_0040 = true;

			if ((bullet->o.variable_09 & (1 << g_global->playerHouseID)) != 0) return bullet;

			Tile_RemoveFogInRadius(bullet->o.position, 2);

			return bullet;
		}

		default: return NULL;
	}
}

/**
 * Display status text for the given unit.
 *
 * @param unit The Unit to display status text for.
 */
void Unit_DisplayStatusText(Unit *unit)
{
	UnitInfo *ui;

	if (unit == NULL) return;

	ui = &g_unitInfo[unit->o.type];

	if (unit->o.type == UNIT_SANDWORM) {
		snprintf((char *)g_global->variable_9939, sizeof(g_global->variable_9939), "%s", String_Get_ByIndex(ui->o.stringID_abbrev));
	} else {
		char *houseName = (char *)emu_get_memorycsip(g_houseInfo[Unit_GetHouseID(unit)].name);
		if (g_global->language == LANGUAGE_FRENCH) {
			snprintf((char *)g_global->variable_9939, sizeof(g_global->variable_9939), "%s %s", String_Get_ByIndex(ui->o.stringID_abbrev), houseName);
		} else {
			snprintf((char *)g_global->variable_9939, sizeof(g_global->variable_9939), "%s %s", houseName, String_Get_ByIndex(ui->o.stringID_abbrev));
		}
	}

	if (unit->o.type == UNIT_HARVESTER) {
		uint16 stringID;

		stringID = 0x79; /* " is %d percent full" */

		if (unit->actionID == ACTION_HARVEST && unit->amount < 100) {
			emu_ax = Map_B4CD_0750(Tile_PackTile(unit->o.position));

			if (emu_ax == 8 || emu_ax == 9) stringID = 0x7A; /* " is %d percent full and harvesting" */
		}

		if (unit->actionID == ACTION_MOVE && Tools_Index_GetStructure(unit->targetMove) != NULL) {
			stringID = 0x7B; /* " is %d percent full and heading back" */
		} else {
			if (unit->o.script.variables[4] != 0) {
				stringID = 0x7C; /* " is %d percent full and awaiting pickup" */
			}
		}

		if (unit->amount == 0) stringID += 4;

		{
			size_t len = strlen((char *)g_global->variable_9939);
			char *s = (char *)g_global->variable_9939 + len;

			snprintf(s, sizeof((char *)g_global->variable_9939) - len, String_Get_ByIndex(stringID), unit->amount);
		}
	}

	strcat((char *)g_global->variable_9939, ".");
	GUI_DisplayText((char *)g_global->variable_9939, 2);
}

/**
 * Unknwown function 2AAA.
 *
 * @param unit The Unit to operate on.
 */
void Unit_Unknown2AAA(Unit *unit)
{
	if (unit == NULL) return;

	unit->o.flags.s.variable_4_0040 = true;

	Unit_B4CD_01BF(0, unit);

	unit->o.flags.s.variable_4_0040 = false;

	Script_Reset(&unit->o.script, &g_global->scriptUnit);
	Unit_UntargetMe(unit);

	unit->o.flags.s.isNotOnMap = true;
	Unit_HouseUnitCount_Remove(unit);
}

/**
 * Unknwown function 2BB5.
 *
 * @param type The type of the Unit to find.
 * @param houseID The houseID of the Unit to find.
 * @param target To where the found Unit should move.
 * @param arg0C Create a carryall if none found.
 * @return The found Unit, or NULL if none found.
 */
Unit *Unit_Unknown2BB5(UnitType type, uint8 houseID, uint16 target, bool arg0C)
{
	PoolFindStruct find;
	Unit *unit = NULL;

	find.houseID = houseID;
	find.type    = type;
	find.index   = 0xFFFF;

	while (true) {
		Unit *u;

		u = Unit_Find(&find);
		if (u == NULL) break;
		if (u->o.linkedID != 0xFF) continue;
		if (u->targetMove != 0) continue;
		unit = u;
	}

	if (arg0C && unit == NULL && type == UNIT_CARRYALL) {
		tile32 position;

		g_global->variable_38BC++;
		position.tile = 0;
		unit = Unit_Create(UNIT_INDEX_INVALID, type, houseID, position, 96);
		g_global->variable_38BC--;

		if (unit != NULL) unit->o.flags.s.byScenario = true;
	}

	if (unit != NULL) {
		unit->targetMove = target;

		Object_Script_Variable4_Set(&unit->o, target);
	}

	return unit;
}

/**
 * Handles what happens when the given unit enters into the given structure.
 *
 * @param unit The Unit.
 * @param s The Structure.
 */
void Unit_EnterStructure(Unit *unit, Structure *s)
{
	Unit *selected;
	UnitInfo *ui;
	StructureInfo *si;

	if (unit == NULL || s == NULL) return;
	selected = g_global->selectionUnit.csip != 0 ? Unit_Get_ByMemory(g_global->selectionUnit) : NULL;

	if (unit == selected) Unit_Select(NULL);

	ui = &g_unitInfo[unit->o.type];
	si = &g_structureInfo[s->o.type];

	if (!unit->o.flags.s.allocated || s->o.hitpoints == 0) {
		Unit_Unknown10EC(unit);
		return;
	}

	unit->o.variable_09 |= s->o.variable_09;
	Unit_Unknown2AAA(unit);

	if (House_AreAllied(s->o.houseID, Unit_GetHouseID(unit))) {
		Structure_SetAnimation(s, si->o.flags.s.variable_0010 ? 2 : 1);

		if (s->o.type == STRUCTURE_REPAIR) {
			uint16 countDown;

			countDown = ((ui->o.hitpoints - unit->o.hitpoints) * 256 / ui->o.hitpoints) * (ui->o.buildTime << 6) / 256;

			if (countDown > 1) {
				s->countDown = countDown;
			} else {
				s->countDown = 1;
			}
			unit->o.hitpoints = ui->o.hitpoints;
			unit->o.flags.s.isSmoking = false;
			unit->variable_6D = 0;
		}
		unit->o.linkedID = s->o.linkedID;
		s->o.linkedID = unit->o.index & 0xFF;
		return;
	}

	if (unit->o.type == UNIT_SABOTEUR) {
		Structure_Damage(s, 500, 1);
		Unit_Free(unit);
		return;
	}

	/* Take over the building when low on hitpoints */
	if (s->o.hitpoints < si->o.hitpoints / 4) {
		House *h;

		h = House_Get_ByIndex(s->o.houseID);
		s->o.houseID = Unit_GetHouseID(unit);
		h->structuresBuilt = Structure_GetStructuresBuilt(h);

		h = House_Get_ByIndex(unit->o.houseID);
		h->structuresBuilt = Structure_GetStructuresBuilt(h);

		if (s->o.linkedID != 0xFF) {
			Unit *u = Unit_Get_ByIndex(s->o.linkedID);
			if (u != NULL) u->o.houseID = Unit_GetHouseID(unit);
		}

		House_CalculatePowerAndCredit(House_Get_ByIndex(s->o.houseID));
		Structure_UpdateMap(s);

		/* ENHANCEMENT: When taking over a structure, untarget it. Else you will destroy the structure you just have taken over very easily */
		if (g_dune2_enhanced) Structure_UntargetMe(s);
	} else {
		Structure_Damage(s, max(unit->o.hitpoints * 2, s->o.hitpoints / 2), 1);
	}

	Object_Script_Variable4_Clear(&s->o);

	Unit_Free(unit);
}

/**
 * Gets the best target structure for the given unit.
 *
 * @param unit The Unit to get the best target for.
 * @param mode How to determine the best target.
 * @return The best target or NULL if none found.
 */
static Structure *Unit_FindBestTargetStructure(Unit *unit, uint16 mode)
{
	Structure *best = NULL;
	uint16 bestPriority = 0;
	tile32 position;
	uint16 variable_50;
	PoolFindStruct find;

	if (unit == NULL) return NULL;

	position = Tools_Index_GetTile(unit->originEncoded);
	variable_50 = g_unitInfo[unit->o.type].variable_50 << 8;

	find.houseID = 0xFFFF;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Structure *s;
		tile32 curPosition;
		uint16 priority;

		s = Structure_Find(&find);
		if (s == NULL) break;

		curPosition.tile = s->o.position.tile + g_global->layoutTileDiff[g_structureInfo[s->o.type].layout].tile;

		if (mode != 0 && mode != 4) {
			if (mode == 1) {
				if (Tile_GetDistance(unit->o.position, curPosition) > variable_50) continue;
			} else {
				if (mode != 2) continue;
				if (Tile_GetDistance(position, curPosition) > variable_50 * 2) continue;
			}
		}

		priority = Unit_GetTargetStructurePriority(unit, s);

		if (priority >= bestPriority) {
			best = s;
			bestPriority = priority;
		}
	}

	if (bestPriority == 0) best = NULL;

	return best;
}

/**
 * Unknwown function 3146.
 *
 * @param unit The Unit to operate on.
 * @param packed The packed tile.
 * @param arg0C ??.
 * @return ??.
 */
int16 Unit_Unknown3146(Unit *unit, uint16 packed, uint16 arg0C)
{
	UnitInfo *ui;
	Unit *u;
	Structure *s;
	uint16 loc0E;
	int16 res;

	if (unit == NULL) return 0;

	ui = &g_unitInfo[unit->o.type];

	if (!Map_IsValidPosition(packed) && ui->movementType != MOVEMENT_WINGER) return 256;

	u = Unit_Get_ByPackedTile(packed);
	if (u != NULL && u != unit && unit->o.type != UNIT_SANDWORM) {
		if (unit->o.type == UNIT_SABOTEUR && unit->targetMove == Tools_Index_Encode(u->o.index, IT_UNIT)) return 0;

		if (House_AreAllied(Unit_GetHouseID(u), Unit_GetHouseID(unit))) return 256;
		if (g_unitInfo[u->o.type].movementType != MOVEMENT_FOOT || (ui->movementType != MOVEMENT_TRACKED && ui->movementType != MOVEMENT_HARVESTER)) return 256;
	}

	s = Structure_Get_ByPackedTile(packed);
	if (s != NULL) {
		res = Unit_IsValidMovementIntoStructure(unit, s);
		if (res == 0) return 256;
		return -res;
	}

	loc0E = Map_B4CD_0750(packed);

	res = g_global->variable_3A3E[loc0E][2 + (ui->movementType / 2)];
	if (ui->movementType % 2 == 0) {
		res &= 0xFF;
	} else {
		res >>= 8;
	}

	if (unit->o.type == UNIT_SABOTEUR && loc0E == 11) {
		if (!House_AreAllied(Map_GetTileByPosition(packed)->houseID, unit->o.houseID)) res = 255;
	}

	if (res == 0) return 256;
	res ^= 0xFF;

	if ((arg0C & 1) != 0) {
		res -= res / 4 + res / 8;
	}

	return res;
}

/**
 * Gets the best target for the given unit.
 *
 * @param unit The Unit to get the best target for.
 * @param mode How to determine the best target.
 * @return The encoded index of the best target or 0 if none found.
 */
uint16 Unit_FindBestTargetEncoded(Unit *unit, uint16 mode)
{
	csip32 ucsip;
	Structure *s;
	Unit *target;

	if (unit == NULL) return 0;

	s = NULL;

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	ucsip       = g_global->unitStartPos;
	ucsip.s.ip += unit->o.index * sizeof(Unit);

	if (mode == 4) {
		s = Unit_FindBestTargetStructure(unit, mode);

		if (s != NULL) return Tools_Index_Encode(s->o.index, IT_STRUCTURE);

		target = Unit_FindBestTargetUnit(unit, mode);

		if (target == NULL) return 0;
		return Tools_Index_Encode(target->o.index, IT_UNIT);
	}

	target = Unit_FindBestTargetUnit(unit, mode);

	if (unit->o.type != UNIT_DEVIATOR) s = Unit_FindBestTargetStructure(unit, mode);

	if (target != NULL && s != NULL) {
		uint16 priority;

		priority = Unit_GetTargetUnitPriority(unit, target);

		if (Unit_GetTargetStructurePriority(unit, s) >= priority) return Tools_Index_Encode(s->o.index, IT_STRUCTURE);
		return Tools_Index_Encode(target->o.index, IT_UNIT);
	}

	if (target != NULL) return Tools_Index_Encode(target->o.index, IT_UNIT);
	if (s != NULL) return Tools_Index_Encode(s->o.index, IT_STRUCTURE);

	return 0;
}

/**
 * Unknwown function 379B.
 *
 * @param unit The Unit to operate on.
 * @return ??.
 */
bool Unit_Unknown379B(Unit *unit)
{
	Unit *selected;

	if (unit == NULL) return false;
	if (Unit_GetHouseID(unit) != g_global->playerHouseID) return false;
	if (!unit->o.flags.s.allocated) return false;

	unit->o.flags.s.allocated = false;
	Unit_RemoveFromTeam(unit);

	selected = g_global->selectionUnit.csip != 0x0 ? Unit_Get_ByMemory(g_global->selectionUnit) : NULL;

	if (unit != selected) return true;

	if (g_global->selectionType == 1) {
		g_global->variable_39F2 = 0;
		g_global->variable_39F4 = 0;
		g_global->variable_39F6 = 0xFFFF;

		GUI_ChangeSelectionType(4);
	}

	Unit_Select(NULL);

	return true;
}

static void Unit_B4CD_011A(uint16 arg06, Unit *unit)
{
	if (unit == NULL) return;

	if (arg06 != 0) {
		unit->o.flags.s.variable_4_1000 = true;
		g_global->variable_39E8++;
	}

	Map_B4CD_057B(g_unitInfo[unit->o.type].variable_38, unit->o.position, unit, g_global->variable_2494[arg06]);
}


void Unit_B4CD_01BF(uint16 arg06, Unit *unit)
{
	tile32 position;
	UnitInfo *ui;
	uint16 packed;
	Tile *t;
	uint16 loc06;

	if (unit == NULL || unit->o.flags.s.isNotOnMap || !unit->o.flags.s.used) return;

	ui = &g_unitInfo[unit->o.type];

	if (ui->movementType == MOVEMENT_WINGER) {
		Unit_B4CD_011A(arg06, unit);
		return;
	}

	position = unit->o.position;
	packed = Tile_PackTile(position);
	t = Map_GetTileByPosition(packed);

	if (t->isUnveiled || unit->o.houseID == g_global->playerHouseID) {
		Unit_HouseUnitCount_Add(unit, (uint8)g_global->playerHouseID);
	} else {
		Unit_HouseUnitCount_Remove(unit);
	}

	if (arg06 == 1) {
		if (House_AreAllied(Unit_GetHouseID(unit), (uint8)g_global->playerHouseID) && !Map_IsPositionUnveiled(packed) && unit->o.type != UNIT_SANDWORM) {
			Tile_RemoveFogInRadius(position, 1);
		}

		if (Object_GetByPackedTile(packed) == NULL) {
			t->index = unit->o.index + 1;
			t->hasUnit = true;
		}
	}

	if (arg06 != 0) {
		unit->o.flags.s.variable_4_1000 = true;
		g_global->variable_39E6++;
	}

	loc06 = ui->variable_38 + 3;

	if (!unit->o.flags.s.variable_4_0040 && !unit->o.flags.s.isSmoking && unit->o.type == UNIT_HARVESTER && unit->actionID == ACTION_HARVEST) loc06 = 33;

	Map_B4CD_057B(loc06, position, unit, g_global->variable_24A0[arg06]);

	if (unit->o.type != UNIT_HARVESTER) return;

	Map_B4CD_057B(loc06, unit->variable_5E, unit, g_global->variable_24A0[arg06]);
	Map_B4CD_057B(loc06, unit->variable_5A, unit, g_global->variable_24A0[arg06]);
}

/**
 * Removes the Unit from the given packed tile.
 *
 * @param unit The Unit to remove.
 * @param packed The packed tile.
 */
void Unit_RemoveFromTile(Unit *unit, uint16 packed)
{
	Tile *t = Map_GetTileByPosition(packed);

	if (t->hasUnit && Unit_Get_ByPackedTile(packed) == unit && (packed != Tile_PackTile(unit->variable_49) || unit->o.flags.s.variable_4_0040)) {
		t->index = 0;
		t->hasUnit = false;
	}

	Unknown_07D4_02F8(packed);

	Map_Update(packed, 0, false);
}

void Unit_AddToTile(Unit *unit, uint16 packed)
{
	Map_UnveilTile(packed, Unit_GetHouseID(unit));
	Unknown_07D4_02F8(packed);
	Map_Update(packed, 1, false);
}

/**
 * Get the priority a target structure has for a given unit. The higher the value,
 *  the more serious it should look at the target.
 *
 * @param unit The unit looking at a target.
 * @param target The structure to look at.
 * @return The priority of the target.
 */
uint16 Unit_GetTargetStructurePriority(Unit *unit, Structure *target)
{
	StructureInfo *si;
	uint16 priority;
	uint16 distance;

	if (unit == NULL || target == NULL) return 0;

	if (House_AreAllied(Unit_GetHouseID(unit), target->o.houseID)) return 0;

	if ((target->o.variable_09 & (1 << unit->o.houseID)) == 0) return 0;

	si = &g_structureInfo[target->o.type];
	priority = si->o.priorityBuild + si->o.priorityTarget;
	distance = Tile_GetDistanceRoundedUp(unit->o.position, target->o.position);
	if (distance != 0) priority /= distance;

	return min(priority, 32000);
}

void Unit_LaunchHouseMissile(uint16 packed)
{
	tile32 tile;
	bool isAI;
	Unit *missile;
	House *h;

	if (g_global->unitHouseMissile.csip == 0x0) return;

	missile = Unit_Get_ByMemory(g_global->unitHouseMissile);
	h = House_Get_ByIndex(missile->o.houseID);

	tile = Tile_UnpackTile(packed);
	tile = Tile_MoveByRandom(tile, 160, false);

	packed = Tile_PackTile(tile);

	isAI = missile->o.houseID != g_global->playerHouseID;

	Unit_Free(missile);

	Sound_Unknown0363(0xFFFE);

	Unit_CreateBullet(h->palacePosition, missile->o.type, missile->o.houseID, 0x1F4, Tools_Index_Encode(packed, IT_TILE));

	if (!isAI) Sound_Unknown0363(39);

	g_global->houseMissileCountdown = 0;
	g_global->unitHouseMissile.csip = 0x0;

	if (isAI) return;

	GUI_ChangeSelectionType(4);
}

/**
 * This unit is about to disapear from the map. So remove it from the house
 *  statistics about allies/enemies.
 * @param unit The unit to remove.
 */
void Unit_HouseUnitCount_Remove(Unit *unit)
{
	PoolFindStruct find;

	if (unit == NULL) return;
	if (unit->o.variable_09 == 0) return;

	find.houseID = 0xFFFF;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		House *h;

		h = House_Find(&find);
		if (h == NULL) break;

		if ((unit->o.variable_09 & (1 << h->index)) == 0) continue;

		if (!House_AreAllied((uint8)h->index, Unit_GetHouseID(unit))) {
			h->unitCountEnemy--;
		} else {
			h->unitCountAllied--;
		}

		unit->o.variable_09 &= ~(1 << h->index);
	}
}

/**
 * This unit is about to appear on the map. So add it from the house
 *  statistics about allies/enemies, and do some other logic.
 * @param unit The unit to add.
 * @param houseID The house registering the add.
 */
void Unit_HouseUnitCount_Add(Unit *unit, uint8 houseID)
{
	UnitInfo *ui;
	uint16 loc0A;
	House *hp;
	House *h;

	if (unit == NULL) return;

	hp = House_Get_ByIndex((uint8)g_global->playerHouseID);
	ui = &g_unitInfo[unit->o.type];
	h = House_Get_ByIndex(houseID);
	loc0A = (1 << houseID);

	if (houseID == HOUSE_ATREIDES && unit->o.type != UNIT_SANDWORM) {
		loc0A |= (1 << HOUSE_FREMEN);
	}

	if ((unit->o.variable_09 & loc0A) != 0 && h->flags.s.variable_0008) {
		unit->o.variable_09 |= loc0A;
		return;
	}

	if ((ui->variable_36 & 0x8000) == 0 && unit->o.type != UNIT_SANDWORM) {
		return;
	}

	if ((unit->o.variable_09 & loc0A) == 0) {
		if (House_AreAllied(houseID, Unit_GetHouseID(unit))) {
			h->unitCountAllied++;
		} else {
			h->unitCountEnemy++;
		}
	}

	if (ui->movementType != MOVEMENT_WINGER) {
		if (!House_AreAllied(houseID, Unit_GetHouseID(unit))) {
			h->flags.s.variable_0008 = true;
			/* XXX -- This seems like a bug; Shouldn't it be Unit_GetHouseID(unit)? */
			House_Get_ByIndex(unit->o.houseID)->flags.s.variable_0008 = true;
		}
	}

	if (houseID == g_global->playerHouseID && g_global->selectionType != 0) {
		if (unit->o.type == UNIT_SANDWORM) {
			if (hp->variable_26 == 0) {
				if (g_global->variable_3E52 == 0) g_global->variable_3E52 = 1;

				Sound_Unknown0363(37);

				if (g_global->language == LANGUAGE_ENGLISH) {
					GUI_DisplayHint(28, 105);
				}

				hp->variable_26 = 8;
			}
		} else if (!House_AreAllied((uint8)g_global->playerHouseID, Unit_GetHouseID(unit))) {
			Team *t;

			if (hp->variable_24 == 0) {
				if (g_global->variable_3E52 == 0) g_global->variable_3E52 = 1;

				if (unit->o.type != UNIT_SABOTEUR) {
					Sound_Unknown0363(12);
				} else {
					if (g_global->scenarioID < 3) {
						PoolFindStruct find;
						Structure *s;
						uint16 stringID;

						find.houseID = g_global->playerHouseID;
						find.index   = 0xFFFF;
						find.type    = STRUCTURE_CONSTRUCTION_YARD;

						s = Structure_Find(&find);
						if (s != NULL) {
							stringID = ((Sprites_B4CD_17F7(Tile_GetDirection(s->o.position, unit->o.position)) + 1) & 7) / 2 + 1;
						} else {
							stringID = 1;
						}

						Sound_Unknown0363(stringID);
					} else {
						Sound_Unknown0363(unit->o.houseID + 6);
					}
				}

				hp->variable_24 = 8;
			}

			t = Team_Get_ByIndex(unit->team);
			if (t != NULL) t->script.variables[4] = 1;
		}
	}

	if (!House_AreAllied(houseID, unit->o.houseID) && unit->actionID == ACTION_AMBUSH) Unit_SetAction(unit, ACTION_HUNT);

	if (unit->o.houseID == g_global->playerHouseID || (unit->o.houseID == HOUSE_FREMEN && g_global->playerHouseID == HOUSE_ATREIDES)) {
		unit->o.variable_09 = 0xFF;
	} else {
		unit->o.variable_09 |= loc0A;
	}
}
