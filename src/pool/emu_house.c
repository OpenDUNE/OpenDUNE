/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../house.h"
#include "pool.h"
#include "house.h"

/**
 * Emulator wrapper around House_Init().
 *
 * @name emu_House_Init
 * @implements 10BE:000C:0020:F10F ()
 */
void emu_House_Init()
{
	csip32 hcsip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	hcsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	House_Init(hcsip);

	emu_dx = 0;
	emu_ax = sizeof(House) * HOUSE_INDEX_MAX;
}

/**
 * Get a _valid_ House from the memory by index.
 *  This function differs in other emu_Pool_Get_ByIndex, by the fact it can
 *  only return on used House structs. Else it returns 0000:0000 in dx:ax.
 *
 * @name emu_House_Get_ByIndex
 * @implements 10BE:01AB:002F:0E7B ()
 */
void emu_House_Get_ByIndex()
{
	House *h;
	uint8 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (index >= HOUSE_INDEX_MAX) return;
	h = House_Get_ByIndex(index);
	if (!h->flags.s.used) return;

	emu_dx = g_global->houseStartPos.s.cs;
	emu_ax = g_global->houseStartPos.s.ip + index * sizeof(House);
}

/**
 * Emulator wrapper around House_Find(). It also initializes the
 *  PoolFindStruct, and uses a default struct in case none is given.
 *
 * @name emu_House_FindFirst
 * @implements 10BE:01E2:0027:6596 ()
 */
void emu_House_FindFirst()
{
	PoolFindStruct *find;
	House *h;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp, 0x2), emu_get_memory16(emu_ss, emu_sp, 0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp, 0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp, 0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp, 0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp, 0x0) = emu_Global_GetIP(g_global->houseFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->houseFindStruct;
	}

	find->houseID = 0xFFFF;
	find->type    = 0xFFFF;
	find->index   = 0xFFFF;

	h = House_Find(find);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (h == NULL) return;
	emu_dx = g_global->houseStartPos.s.cs;
	emu_ax = g_global->houseStartPos.s.ip + h->index * sizeof(House);
}

/**
 * Emulator wrapper around House_Find(). It uses a default struct in case
 *  none is given.
 *
 * @name emu_House_FindNext
 * @implements 10BE:020F:004E:633B ()
 */
void emu_House_FindNext()
{
	PoolFindStruct *find;
	House *h;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp, 0x2), emu_get_memory16(emu_ss, emu_sp, 0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp, 0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp, 0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp, 0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp, 0x0) = emu_Global_GetIP(g_global->houseFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->houseFindStruct;
	}

	h = House_Find(find);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (h == NULL) return;
	emu_dx = g_global->houseStartPos.s.cs;
	emu_ax = g_global->houseStartPos.s.ip + h->index * sizeof(House);
}
