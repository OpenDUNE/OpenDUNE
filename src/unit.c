/* $Id$ */

#include <stdio.h>
#include "os/strings.h"
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/unit.h"
#include "house.h"
#include "script.h"
#include "unit.h"

extern void f__1A34_1E99_0012_1117();
extern void f__1A34_1E99_0012_1117();
extern void f__1A34_204C_0043_B1ED();
extern void emu_Unit_FindStructure();
extern void f__2BB4_0004_0027_DC1D();
extern void f__1A34_204C_0043_B1ED();
extern void f__1A34_0E2E_0015_7E65();
extern void f__176C_000E_000E_633D();
extern void f__B4CD_01BF_0016_E78F();
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
 *
 * @name Unit_StringToType
 * @implements B533:0000:0010:8273
 * @implements B533:0010:0023:A798
 * @implements B533:0033:000B:E2C7
 * @implements B533:003C:0002:C5BA
 * @implements B533:003E:000B:98D9
 * @implements B533:003F:000A:58D1
 * @implements B533:0049:0003:2E57
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
 *
 * @name Unit_ActionStringToType
 * @implements 1381:0005:0010:8273
 * @implements 1381:0015:0023:81F4
 * @implements 1381:0038:000B:E2C7
 * @implements 1381:0043:000B:8DD9
 * @implements 1381:0044:000A:4DD1
 * @implements 1381:004E:0003:2E57
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
 *
 * @name Unit_TeamActionStringToType
 * @implements 1381:00D0:0008:1ADC
 * @implements 1381:00D8:0019:21EC
 * @implements 1381:00F1:000B:E2C7
 * @implements 1381:00FC:000B:EED9
 * @implements 1381:00FD:000A:2ED1
 * @implements 1381:0107:0003:2E57
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
 *
 * @name Unit_MovementStringToType
 * @implements 1381:0096:0008:1ADC
 * @implements 1381:009E:0019:21DF
 * @implements 1381:00B7:000B:E2C7
 * @implements 1381:00C0:0002:C5BA
 * @implements 1381:00C2:000B:EDD9
 * @implements 1381:00C3:000A:2DD1
 * @implements 1381:00CD:0003:2E57
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
Unit *Unit_Create(uint16 index, uint8 typeID, uint8 houseID, tile32 position, uint16 unknown)
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
	ucsip.s.cs = g_global->unitStartPos.s.cs;
	ucsip.s.ip = g_global->unitStartPos.s.ip + u->index * sizeof(Unit);

	u->houseID = houseID;

	emu_push(0x00);
	emu_push(0x01);
	emu_push(unknown);
	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(emu_cs); emu_push(0x0958); f__1A34_1E99_0012_1117();
	emu_sp += 10;

	emu_push(0x01);
	emu_push(0x01);
	emu_push(unknown);
	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(emu_cs); emu_push(0x096F); f__1A34_1E99_0012_1117();
	emu_sp += 10;

	emu_push(0x00);
	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(emu_cs); emu_push(0x0980); f__1A34_204C_0043_B1ED();
	emu_sp += 6;

	u->position.tile    = position.tile;
	u->hitpoints        = ui->hitpoints;
	u->variable_49.csip = 0x00000000;
	u->variable_4D      = 0x0000;
	u->variable_72      = 0xFF;

	if (position.tile != 0xFFFFFFFF) {
		emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
		emu_push(emu_cs); emu_push(0x09D9); emu_Unit_FindStructure();
		emu_sp += 4;

		u->variable_4D      = emu_ax;
		u->variable_5A.tile = position.tile;
		u->variable_5E.tile = position.tile;
	}

	u->linkedID     = 0xFF;
	u->scriptDelay  = 0;
	u->actionID     = ACTION_GUARD;
	u->variable_50  = 0xFF;
	u->variable_51  = 0x00;
	u->variable_52  = 0x7FFF;
	u->variable_56  = 0x0000;
	u->sandwormLeft = 0x00;
	u->variable_6C  = 0x00;
	u->variable_6D  = 0x00;
	u->variable_6E  = 0x00;
	u->variable_70  = 0x0000;

	Script_Reset(&u->script, &g_global->scriptUnit);

	u->flags |= 0x0002;

	if (ui->variable_3C == 0x0001) {
		emu_push(emu_cs); emu_push(0x0A96); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();

		if (emu_ax < g_houseInfo[houseID].variable_06) {
			u->flags |= 0x0400;
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
		u->flags |= 0x0004;
		return u;
	}

	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(0x01);
	emu_push(emu_cs); emu_push(0x0B26); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	emu_sp += 6;

	if (houseID == g_global->playerHouseID) {
		emu_push(ui->variable_28);
	} else {
		emu_push(ui->variable_48);
	}
	emu_push(ucsip.s.cs); emu_push(ucsip.s.ip);
	emu_push(emu_cs); emu_push(0x0B4D); emu_cs = 0x176C; f__176C_000E_000E_633D();
	emu_sp += 6;

	return u;
}
