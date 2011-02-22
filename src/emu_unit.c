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
