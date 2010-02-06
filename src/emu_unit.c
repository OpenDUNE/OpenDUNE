/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/unit.h"
#include "pool/team.h"
#include "house.h"
#include "unit.h"
#include "pool/pool.h"
#include "team.h"

/**
 * Emulator wrapper around GameLoop_Unit().
 *
 * @name emu_GameLoop_Unit
 * @implements 176C:010B:002F:7FAE ()
 */
void emu_GameLoop_Unit()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GameLoop_Unit();
}

/**
 * Emulator wrapper around Unit_GetHouseID().
 *
 * @name emu_Unit_GetHouseID
 * @implements 1A34:3623:0010:B11C ()
 */
void emu_Unit_GetHouseID()
{
	csip32 ucsip;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ucsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	emu_ax = HOUSE_INVALID;

	if (ucsip.csip == 0x0) return;
	u = Unit_Get_ByMemory(ucsip);

	emu_ax = Unit_GetHouseID(u);
}

/**
 * Emulator wrapper around Unit_Create().
 *
 * @name emu_Unit_Create
 * @implements 1A34:08FB:002C:D192 ()
 */
void emu_Unit_Create()
{
	uint16 index, unknown;
	uint8 typeID, houseID;
	tile32 position;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index    =        emu_get_memory16(emu_ss, emu_sp, 0x0);
	typeID   = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x2);
	houseID  = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x4);
	position =        emu_get_tile32  (emu_ss, emu_sp, 0x6);
	unknown  =        emu_get_memory16(emu_ss, emu_sp, 0xA);

	u = Unit_Create(index, typeID, houseID, position, unknown);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (u == NULL) return;
	emu_dx = g_global->unitStartPos.s.cs;
	emu_ax = g_global->unitStartPos.s.ip + u->index * sizeof(Unit);
}

/**
 * Decompiled function emu_Unit_IsTypeOnMap()
 *
 * @name emu_Unit_IsTypeOnMap
 * @implements 0FE4:0333:000F:2B73 ()
 */
void emu_Unit_IsTypeOnMap()
{
	uint8 houseID, typeID;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	houseID = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);
	typeID  = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x2);

	emu_ax = Unit_IsTypeOnMap(houseID, typeID) ? 1 : 0;
}

/**
 * Emulator wrapper around Unit_SetAction().
 *
 * @name emu_Unit_SetAction
 * @implements 176C:000E:000E:633D ()
 */
void emu_Unit_SetAction()
{
	csip32 ucsip;
	Unit *u;
	ActionType action;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ucsip  = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	action = emu_get_memory16(emu_ss, emu_sp, 0x4);

	if (ucsip.csip == 0x0) return;
	u = Unit_Get_ByMemory(ucsip);

	Unit_SetAction(u, action);
}

/**
 * Emulator wrapper around Unit_AddToTeam().
 *
 * @name emu_Unit_AddToTeam
 * @implements 16BC:0001:0018:AE47 ()
 */
void emu_Unit_AddToTeam()
{
	csip32 csip_team, csip_unit;
	Team *t;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	/* Set the default return value */
	emu_ax = 0;

	/* emu implementation passes team as first arg */
	csip_team = emu_get_csip32(emu_ss, emu_sp, 0x0);
	csip_unit = emu_get_csip32(emu_ss, emu_sp, 0x4);

	if (csip_team.csip == 0x0 || csip_unit.csip == 0x0) return;

	t = Team_Get_ByMemory(csip_team);
	u = Unit_Get_ByMemory(csip_unit);

	emu_ax = Unit_AddToTeam(u, t);
}

/**
 * Emulator wrapper around Unit_RemoveFromTeam().
 *
 * @name emu_Unit_RemoveFromTeam
 * @implements 16BC:0044:0027:CB92 ()
 */
void emu_Unit_RemoveFromTeam()
{
	csip32 csip_unit;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	/* Set the default return value */
	emu_ax = 0;

	csip_unit = emu_get_csip32(emu_ss, emu_sp, 0x0);

	if (csip_unit.csip == 0x0) return;

	u = Unit_Get_ByMemory(csip_unit);

	emu_ax = Unit_RemoveFromTeam(u);
}

/**
 * Emulator wrapper around Unit_GetTeam().
 *
 * @name emu_Unit_GetTeam
 * @implements 0FE4:0632:0031:75AA ()
 */
void emu_Unit_GetTeam()
{
	csip32 ucsip;
	Unit *u;
	Team *t;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ucsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	emu_dx = 0x0;
	emu_ax = 0x0;

	if (ucsip.csip == 0x0) return;
	u = Unit_Get_ByMemory(ucsip);

	t = Unit_GetTeam(u);

	if (t == NULL) return;
	emu_dx = g_global->teamStartPos.s.cs;
	emu_ax = g_global->teamStartPos.s.ip + t->index * sizeof(Team);
}

/**
 * Emulator wrapper around Unit_Sort().
 *
 * @name emu_Unit_Sort
 * @implements 0FE4:0002:0021:D0A9 ()
 */
void emu_Unit_Sort()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	Unit_Sort();
}

/**
 * Emulator wrapper around Unit_Get_ByPackedTile()
 *
 * @name emu_Unit_Get_ByPackedTile
 * @implements B4CD:10EE:0039:EC73 ()
 */
void emu_Unit_Get_ByPackedTile()
{
	uint16 packed;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	packed = emu_get_memory16(emu_ss, emu_sp, 0x0);

	u = Unit_Get_ByPackedTile(packed);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (u == NULL) return;
	emu_dx = g_global->unitStartPos.s.cs;
	emu_ax = g_global->unitStartPos.s.ip + u->index * sizeof(Unit);
}

/**
 * Emulator wrapper around Unit_SetDestination().
 *
 * @name emu_Unit_SetDestination
 * @implements 1A34:1B68:0019:AAA0 ()
 */
void emu_Unit_SetDestination()
{
	csip32 ucsip;
	Unit *u;
	uint16 destination;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ucsip       = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	destination = emu_get_memory16(emu_ss, emu_sp, 0x4);

	if (ucsip.csip == 0x0) return;
	u = Unit_Get_ByMemory(ucsip);

	Unit_SetDestination(u, destination);
}
