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
 * @implements 10BE:002C:0026:4F78
 * @implements 10BE:0035:001D:55B0
 * @implements 10BE:0052:0007:F03C
 * @implements 10BE:0059:0006:A112
 * @implements 10BE:005F:0025:D55B
 * @implements 10BE:0077:000D:6824
 * @implements 10BE:0078:000C:5826
 * @implements 10BE:0084:0005:8BCF
 */
void emu_House_Init()
{
	csip32 address;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	address.s.cs = emu_get_memory16(emu_ss, emu_sp, 0x2);
	address.s.ip = emu_get_memory16(emu_ss, emu_sp, 0x0);

	House_Init(address);

	emu_dx = 0;
	emu_ax = sizeof(House) * HOUSE_INDEX_MAX;
}

/**
 * Emulator wrapper around House_Allocate().
 *
 * @name emu_House_Allocate
 * @implements 10BE:00A0:0064:DF2A ()
 * @implements 10BE:0104:003D:D771
 * @implements 10BE:0141:0005:8BCF
 */
void emu_House_Allocate()
{
	uint8 index;
	House *h;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_dx = 0x0;
	emu_ax = 0x0;

	index = (uint8)emu_get_memory16(emu_ss, emu_sp,  0x0);

	h = House_Allocate(index);

	if (h == NULL) return;
	emu_dx = g_global->houseStartPos.s.cs;
	emu_ax = g_global->houseStartPos.s.ip + h->index * sizeof(House);
}

/**
 * Emulator wrapper around House_Free().
 *
 * @name emu_House_Free
 * @implements 10BE:0147 ()
 * @implements 10BE:014E
 * @implements 10BE:019E
 * @implements 10BE:01A2
 * @implements 10BE:01A1
 */
void emu_House_Free()
{
	csip32 address;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	address.s.cs = emu_get_memory16(emu_ss, emu_sp, 0x2);
	address.s.ip = emu_get_memory16(emu_ss, emu_sp, 0x0);

	House_Free(address);
}

/**
 * Get a _valid_ House from the memory by index.
 *  This function differs in other emu_Pool_Get_ByIndex, by the fact it can
 *  only return on used House structs. Else it returns 0000:0000 in dx:ax.
 *
 * @name emu_House_Get_ByIndex
 * @implements 10BE:01AB:002F:0E7B ()
 * @implements 10BE:01D8:0002:C33A
 * @implements 10BE:01DA:0006:5EA9
 * @implements 10BE:01E0:0002:2597
 */
void emu_House_Get_ByIndex()
{
	uint8 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_ax = 0x0;
	emu_dx = 0x0;

	index = (uint8)emu_get_memory16(emu_ss, emu_sp,  0x0);

	if (index >= HOUSE_INDEX_MAX) return;
	{
		House *h = House_Get_ByIndex(index);
		if ((h->variable_04 & 0x0001) == 0) return;
	}
	emu_dx = g_global->houseStartPos.s.cs;
	emu_ax = g_global->houseStartPos.s.ip + index * sizeof(House);
}

/**
 * Emulator wrapper around House_Find(). It also initializes the
 *  PoolFindStruct, and uses a default struct in case none is given.
 *
 * @name emu_House_FindFirst
 * @implements 10BE:01E2:0027:6596 ()
 * @implements 10BE:01F5:0014:C21B
 * @implements 10BE:0209:0004:5B1F
 * @implements 10BE:020D:0002:2597
 */
void emu_House_FindFirst()
{
	PoolFindStruct *find;
	House *h;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_dx = 0x0;
	emu_ax = 0x0;

	find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp,  0x2), emu_get_memory16(emu_ss, emu_sp,  0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp,  0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp,  0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp,  0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp,  0x0) = emu_Global_GetIP(g_global->houseFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->houseFindStruct;
	}

	find->houseID = 0xFFFF;
	find->typeID  = 0xFFFF;
	find->index   = 0xFFFF;

	h = House_Find(find);

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
 * @implements 10BE:0226:0037:B108
 * @implements 10BE:0234:0029:8A5C
 * @implements 10BE:025B:0002:C33A
 * @implements 10BE:025D:0006:5EA9
 * @implements 10BE:0263:0005:8BCF
 */
void emu_House_FindNext()
{
	PoolFindStruct *find;
	House *h;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_dx = 0x0;
	emu_ax = 0x0;

	find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp,  0x2), emu_get_memory16(emu_ss, emu_sp,  0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp,  0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp,  0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp,  0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp,  0x0) = emu_Global_GetIP(g_global->houseFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->houseFindStruct;
	}

	h = House_Find(find);

	if (h == NULL) return;
	emu_dx = g_global->houseStartPos.s.cs;
	emu_ax = g_global->houseStartPos.s.ip + h->index * sizeof(House);
}
