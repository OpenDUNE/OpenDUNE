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
