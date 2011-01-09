/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/unit.h"
#include "pool/team.h"
#include "house.h"
#include "unit.h"
#include "structure.h"
#include "pool/structure.h"
#include "pool/pool.h"
#include "team.h"

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
	uint16 index;
	int8 orientation;
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
	orientation = (int8)emu_get_memory16(emu_ss, emu_sp, 0xA);

	u = Unit_Create(index, typeID, houseID, position, orientation);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (u == NULL) return;
	emu_dx = g_global->unitStartPos.s.cs;
	emu_ax = g_global->unitStartPos.s.ip + u->o.index * sizeof(Unit);
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
	emu_ax = g_global->unitStartPos.s.ip + u->o.index * sizeof(Unit);
}

/**
 * Emulator wrapper around Unit_Unknown10EC()
 *
 * @name emu_Unit_Unknown10EC
 * @implements 1A34:10EC:000E:A326 ()
 */
void emu_Unit_Unknown10EC()
{
	csip32 ucsip;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ucsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	if (ucsip.csip == 0x0) return;
	u = Unit_Get_ByMemory(ucsip);

	Unit_Unknown10EC(u);
}

/**
 * Emulator wrapper around Unit_SetTarget()
 *
 * @name emu_Unit_SetTarget
 * @implements 1A34:1A66:0011:34D4 ()
 */
void emu_Unit_SetTarget()
{
	csip32 ucsip;
	uint16 encoded;
	Unit *unit;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ucsip   = emu_get_csip32(emu_ss, emu_sp, 0x0);
	encoded = emu_get_memory16(emu_ss, emu_sp, 0x4);

	if (ucsip.csip == 0x0) return;
	unit = Unit_Get_ByMemory(ucsip);

	Unit_SetTarget(unit, encoded);
}

/**
 * Emulator wrapper around Unit_RemoveFog()
 *
 * @name emu_Unit_RemoveFog
 * @implements 1A34:2B18:0011:E4D5 ()
 */
void emu_Unit_RemoveFog()
{
	csip32 ucsip;
	Unit *unit;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ucsip  = emu_get_csip32(emu_ss, emu_sp, 0x0);

	if (ucsip.csip == 0x0) return;
	unit = Unit_Get_ByMemory(ucsip);

	Unit_RemoveFog(unit);
}

/**
 * Emulator wrapper around Unit_Deviate()
 *
 * @name emu_Unit_Deviate
 * @implements 1A34:1859:0017:DF09 ()
 */
void emu_Unit_Deviate()
{
	csip32 ucsip;
	uint16 probability;
	Unit *unit;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ucsip       = emu_get_csip32(emu_ss, emu_sp, 0x0);
	probability = emu_get_memory16(emu_ss, emu_sp, 0x4);

	emu_ax = 0;

	if (ucsip.csip == 0x0) return;
	unit = Unit_Get_ByMemory(ucsip);

	emu_ax = Unit_Deviate(unit, probability) ? 1 : 0;
}

/**
 * Emulator wrapper around Unit_Damage()
 *
 * @name emu_Unit_Damage
 * @implements 1A34:0B71:0033:9787 ()
 */
void emu_Unit_Damage()
{
	csip32 ucsip;
	uint16 damage;
	uint16 range;
	Unit *unit;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ucsip  = emu_get_csip32(emu_ss, emu_sp, 0x0);
	damage = emu_get_memory16(emu_ss, emu_sp, 0x4);
	range  = emu_get_memory16(emu_ss, emu_sp, 0x6);

	emu_ax = 0;

	if (ucsip.csip == 0x0) return;
	unit = Unit_Get_ByMemory(ucsip);

	emu_ax = Unit_Damage(unit, damage, range) ? 1 : 0;
}

/**
 * Emulator wrapper around Unit_Select()
 *
 * @name emu_Unit_Select
 * @implements 1A34:0F48:0018:0DB8 ()
 */
void emu_Unit_Select()
{
	csip32 ucsip;
	Unit *unit;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ucsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	unit = (ucsip.csip == 0x0) ? NULL : Unit_Get_ByMemory(ucsip);

	Unit_Select(unit);
}

/**
 * Emulator wrapper around Unit_CreateBullet()
 *
 * @name emu_Unit_CreateBullet
 * @implements 1A34:24FE:002F:672A ()
 */
void emu_Unit_CreateBullet()
{
	tile32 position;
	UnitType type;
	uint16 houseID;
	uint16 damage;
	uint16 target;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	position = emu_get_tile32(emu_ss, emu_sp, 0x0);
	type     = emu_get_memory16(emu_ss, emu_sp, 0x4);
	houseID  = emu_get_memory16(emu_ss, emu_sp, 0x6);
	damage   = emu_get_memory16(emu_ss, emu_sp, 0x8);
	target   = emu_get_memory16(emu_ss, emu_sp, 0xA);

	u = Unit_CreateBullet(position, type, (uint8)houseID, damage, target);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (u == NULL) return;
	emu_dx = g_global->unitStartPos.s.cs;
	emu_ax = g_global->unitStartPos.s.ip + u->o.index * sizeof(Unit);
}

/**
 * Emulator wrapper around Unit_DisplayStatusText()
 *
 * @name emu_Unit_DisplayStatusText
 * @implements 1A34:27A8:0012:7198 ()
 */
void emu_Unit_DisplayStatusText()
{
	csip32 ucsip;
	Unit *unit;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ucsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	if (ucsip.csip == 0x0) return;
	unit = Unit_Get_ByMemory(ucsip);

	Unit_DisplayStatusText(unit);
}

/**
 * Emulator wrapper around Unit_Unknown3146()
 *
 * @name emu_Unit_Unknown3146
 * @implements 1A34:3146:0018:6887 ()
 */
void emu_Unit_Unknown3146()
{
	csip32 ucsip;
	Unit *unit;
	uint16 packed;
	uint16 arg0C;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ucsip  = emu_get_csip32(emu_ss, emu_sp, 0x0);
	packed = emu_get_memory16(emu_ss, emu_sp, 0x4);
	arg0C  = emu_get_memory16(emu_ss, emu_sp, 0x6);

	emu_ax = 0;
	if (ucsip.csip == 0x0) return;
	unit = Unit_Get_ByMemory(ucsip);

	emu_ax = Unit_Unknown3146(unit, packed, arg0C);
}

/**
 * Emulator wrapper around Unit_B4CD_01BF()
 *
 * @name emu_Unit_B4CD_01BF
 * @implements B4CD:01BF:0016:E78F ()
 */
void emu_Unit_B4CD_01BF()
{
	uint16 arg06;
	csip32 ucsip;
	Unit *unit;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	arg06 = emu_get_memory16(emu_ss, emu_sp, 0x0);
	ucsip = emu_get_csip32  (emu_ss, emu_sp, 0x2);

	if (ucsip.csip == 0x0) return;
	unit = Unit_Get_ByMemory(ucsip);

	Unit_B4CD_01BF(arg06, unit);
}
