/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../airunit.h"
#include "pool.h"
#include "airunit.h"

/**
 * Emulator wrapper around AirUnit_Init().
 *
 * @name emu_AirUnit_Init
 * @implements 104B:005D:001C:39F6 ()
 * @implements 104B:0079:0026:FD93
 * @implements 104B:0082:001D:CF58
 * @implements 104B:009F:000A:A59E
 * @implements 104B:00A9:0002:2597
 */
void emu_AirUnit_Init()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	csip32 address;
	address.cs = emu_get_memory16(emu_ss, emu_sp, 0x2);
	address.ip = emu_get_memory16(emu_ss, emu_sp, 0x0);

	AirUnit_Init(address);

	emu_dx.x = 0;
	emu_ax.x = sizeof(AirUnit) * AIRUNIT_INDEX_MAX;
}

/**
 * Emulator wrapper around AirUnit_Recount().
 *
 * @name emu_AirUnit_Recount
 * @implements 104B:0006:0011:631B ()
 * @implements 104B:0017:0046:2F85
 * @implements 104B:0052:000B:8782
 * @implements 104B:0053:000A:478A
 */
void emu_AirUnit_Recount()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	AirUnit_Recount();
}

/**
 * Emulator wrapper around AirUnit_Allocate().
 *
 * @name emu_AirUnit_Allocate
 * @implements 104B:0171:0020:7F19 ()
 * @implements 104B:0191:0009:538F
 * @implements 104B:019A:002D:CF3C
 * @implements 104B:01C7:0008:B398
 * @implements 104B:01C8:0007:F598
 * @implements 104B:01CD:0002:D5BA
 * @implements 104B:01FA:001A:49E1
 * @implements 104B:0214:0034:E1EC
 * @implements 104B:0248:0005:8BCF
 */
void emu_AirUnit_Allocate()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_dx.x = 0x0;
	emu_ax.x = 0x0;

	uint16 index = emu_get_memory16(emu_ss, emu_sp,  0x0);

	AirUnit *a = AirUnit_Allocate(index);

	if (a == NULL) return;
	emu_dx.x = g_global->airUnitStartPos.cs;
	emu_ax.x = g_global->airUnitStartPos.ip + a->index * sizeof(AirUnit);
}

/**
 * Emulator wrapper around AirUnit_Free().
 *
 * @name emu_AirUnit_Free
 * @implements 104B:02EF ()
 * @implements 104B:0300
 * @implements 104B:0347
 * @implements 104B:034A
 * @implements 104B:034B
 */
void emu_AirUnit_Free()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	csip32 address;
	address.cs = emu_get_memory16(emu_ss, emu_sp, 0x2);
	address.ip = emu_get_memory16(emu_ss, emu_sp, 0x0);

	AirUnit_Free(address);
}

/**
 * Get a AirUnit from the memory by index.
 *
 * @name emu_AirUnit_Get_ByIndex
 * @implements 104B:0354:0023:5A6D ()
 * @implements 104B:0377
 * @implements 104B:037D:0002:2597
 */
void emu_AirUnit_Get_ByIndex()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_ax.x = 0x0;
	emu_dx.x = 0x0;

	uint16 index = emu_get_memory16(emu_ss, emu_sp,  0x0);

	if (index >= AIRUNIT_INDEX_MAX) return;
	emu_dx.x = g_global->airUnitStartPos.cs;
	emu_ax.x = g_global->airUnitStartPos.ip + index * sizeof(AirUnit);
}

/**
 * Emulator wrapper around AirUnit_Find(). It also initializes the
 *  PoolFindStruct, and uses a default struct in case none is given.
 *
 * @name emu_AirUnit_FindFirst
 * @implements 104B:00C2:0030:20A6 ()
 * @implements 104B:00D5:001D:2B68
 * @implements 104B:00F2:0004:5B1F
 * @implements 104B:00F6:0002:2597
 */
void emu_AirUnit_FindFirst()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_dx.x = 0x0;
	emu_ax.x = 0x0;

	PoolFindStruct *find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp,  0x2), emu_get_memory16(emu_ss, emu_sp,  0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp,  0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp,  0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp,  0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp,  0x0) = emu_Global_GetIP(g_global->airUnitFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->airUnitFindStruct;
	}

	find->houseID = emu_get_memory16(emu_ss, emu_sp,  0x4);
	find->typeID  = 0xFFFF;
	find->index   = 0xFFFF;

	AirUnit *a = AirUnit_Find(find);

	if (a == NULL) return;
	emu_dx.x = g_global->airUnitStartPos.cs;
	emu_ax.x = g_global->airUnitStartPos.ip + a->index * sizeof(AirUnit);
}

/**
 * Emulator wrapper around AirUnit_Find(). It uses a default struct in case
 *  none is given.
 *
 * @name emu_AirUnit_FindNext
 * @implements 104B:00F8:002E:3820 ()
 * @implements 104B:0110:0016:6D19
 * @implements 104B:0124
 * @implements 104B:0126:0031:81E0
 * @implements 104B:0148:000F:4483
 * @implements 104B:0155:0002:CA3A
 * @implements 104B:0157
 * @implements 104B:0158:0013:49FB
 * @implements 104B:016B:0006:F7CE
 */
void emu_AirUnit_FindNext()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_dx.x = 0x0;
	emu_ax.x = 0x0;

	PoolFindStruct *find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp,  0x2), emu_get_memory16(emu_ss, emu_sp,  0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp,  0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp,  0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp,  0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp,  0x0) = emu_Global_GetIP(g_global->airUnitFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->airUnitFindStruct;
	}

	AirUnit *a = AirUnit_Find(find);

	if (a == NULL) return;
	emu_dx.x = g_global->airUnitStartPos.cs;
	emu_ax.x = g_global->airUnitStartPos.ip + a->index * sizeof(AirUnit);
}
