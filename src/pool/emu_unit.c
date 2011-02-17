/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../unit.h"
#include "pool.h"
#include "unit.h"

/**
 * Emulator wrapper around Unit_Init().
 *
 * @name emu_Unit_Init
 * @implements 0FE4:013F:001C:39CA ()
 */
void emu_Unit_Init()
{
	csip32 ucsip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	ucsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	Unit_Init(ucsip);

	emu_dx = 0;
	emu_ax = sizeof(Unit) * UNIT_INDEX_MAX;
}

/**
 * Emulator wrapper around Unit_Recount().
 *
 * @name emu_Unit_Recount
 * @implements 0FE4:018D:0012:A3C7 ()
 */
void emu_Unit_Recount()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	Unit_Recount();
}

/**
 * Get a Unit from the memory by index.
 *
 * @name emu_Unit_Get_ByIndex
 * @implements 0FE4:05FD:002C:15BA ()
 */
void emu_Unit_Get_ByIndex()
{
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (index >= UNIT_INDEX_MAX) return;
	emu_dx = g_global->unitStartPos.s.cs;
	emu_ax = g_global->unitStartPos.s.ip + index * sizeof(Unit);
}

/**
 * Emulator wrapper around Unit_Find(). It also initializes the
 *  PoolFindStruct, and uses a default struct in case none is given.
 *
 * @name emu_Unit_FindFirst
 * @implements 0FE4:0243:003A:D5F2 ()
 */
void emu_Unit_FindFirst()
{
	PoolFindStruct *find;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp, 0x2), emu_get_memory16(emu_ss, emu_sp, 0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp, 0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp, 0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp, 0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp, 0x0) = emu_Global_GetIP(g_global->unitFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->unitFindStruct;
	}

	find->houseID = emu_get_memory16(emu_ss, emu_sp, 0x4);
	find->type    = emu_get_memory16(emu_ss, emu_sp, 0x6);
	find->index   = 0xFFFF;

	u = Unit_Find(find);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (u == NULL) return;
	emu_dx = g_global->unitStartPos.s.cs;
	emu_ax = g_global->unitStartPos.s.ip + u->o.index * sizeof(Unit);
}

/**
 * Emulator wrapper around Unit_Find(). It uses a default struct in case
 *  none is given.
 *
 * @name emu_Unit_FindNext
 * @implements 0FE4:0283:0038:4950 ()
 */
void emu_Unit_FindNext()
{
	PoolFindStruct *find;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp, 0x2), emu_get_memory16(emu_ss, emu_sp, 0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp, 0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp, 0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp, 0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp, 0x0) = emu_Global_GetIP(g_global->unitFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->unitFindStruct;
	}

	u = Unit_Find(find);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (u == NULL) return;
	emu_dx = g_global->unitStartPos.s.cs;
	emu_ax = g_global->unitStartPos.s.ip + u->o.index * sizeof(Unit);
}
