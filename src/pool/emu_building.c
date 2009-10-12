/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../building.h"
#include "pool.h"
#include "building.h"

/**
 * Emulator wrapper around Building_Init().
 *
 * @name emu_Building_Init
 * @implements 1082:0098:001C:39E2 ()
 * @implements 1082:00B4:0026:CE00
 * @implements 1082:00BD:001D:48CA
 * @implements 1082:00DA:000A:A6BE
 * @implements 1082:00E4:0002:2597
 */
void emu_Building_Init()
{
	csip32 address;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	address = emu_get_csip32(emu_ss, emu_sp, 0x0);

	Building_Init(address);

	emu_dx = 0;
	emu_ax = sizeof(Building) * BUILDING_INDEX_MAX_HARD;
}

/**
 * Emulator wrapper around Building_Recount().
 *
 * @name emu_Building_Recount
 * @implements 1082:000F:0012:A3C7 ()
 * @implements 1082:0021:0002:CA3A
 * @implements 1082:0023:0014:E02C
 * @implements 1082:0037:001A:16D1
 * @implements 1082:0051:0047:3D25
 * @implements 1082:008D:000B:C182
 * @implements 1082:008E:000A:018A
 */
void emu_Building_Recount()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	Building_Recount();
}

/**
 * Emulator wrapper around Building_Allocate().
 *
 * @name emu_Building_Allocate
 * @implements 1082:01E8:0020:FFB9 ()
 * @implements 1082:0208:0013:DB66
 * @implements 1082:021B:001C:EC5F
 * @implements 1082:021E:0019:C7B5
 * @implements 1082:0237:0005:B4CF
 * @implements 1082:023C:0005:5B4E
 * @implements 1082:0241:0009:5317
 * @implements 1082:024A:002E:B11B
 * @implements 1082:0278:0008:B2C0
 * @implements 1082:0279:0007:F4C0
 * @implements 1082:027E:0002:D63A
 * @implements 1082:0280:002E:B19B
 * @implements 1082:02AC:0002:C03A
 * @implements 1082:02AE:001A:47E1
 * @implements 1082:02C8:0058:AF1D
 * @implements 1082:0320:0005:8BCF
 */
void emu_Building_Allocate()
{
	uint16 index;
	uint8  typeID;
	Building *b;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_dx = 0x0;
	emu_ax = 0x0;

	index  = emu_get_memory16(emu_ss, emu_sp,  0x0);
	typeID = (uint8)emu_get_memory16(emu_ss, emu_sp,  0x2);

	b = Building_Allocate(index, typeID);

	if (b == NULL) return;
	emu_dx = g_global->buildingStartPos.s.cs;
	emu_ax = g_global->buildingStartPos.s.ip + b->index * sizeof(Building);
}

/**
 * Emulator wrapper around Building_Free().
 *
 * @name emu_Building_Free
 * @implements 1082:0325:0018:025E ()
 * @implements 1082:033D:0010:68D6
 * @implements 1082:034D:0047:CEC1
 * @implements 1082:0394:000D:FB95
 * @implements 1082:0397:000A:AFD0
 * @implements 1082:0398:0009:BE50
 */
void emu_Building_Free()
{
	csip32 address;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	address = emu_get_csip32(emu_ss, emu_sp, 0x2);

	Building_Free(address);
}

/**
 * Get a Building from the memory by index.
 *
 * @name emu_Building_Get_ByIndex
 * @implements 1082:03A1:0023:9F5D ()
 * @implements 1082:03C2:0002:C33A
 * @implements 1082:03C4:0006:5EA9
 * @implements 1082:03CA:0002:2597
 */
void emu_Building_Get_ByIndex()
{
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_ax = 0x0;
	emu_dx = 0x0;

	index = emu_get_memory16(emu_ss, emu_sp,  0x0);

	if (index >= BUILDING_INDEX_MAX_HARD) return;
	emu_dx = g_global->buildingStartPos.s.cs;
	emu_ax = g_global->buildingStartPos.s.ip + index * sizeof(Building);
}

/**
 * Emulator wrapper around Building_Find(). It also initializes the
 *  PoolFindStruct, and uses a default struct in case none is given.
 *
 * @name emu_Building_FindFirst
 * @implements 1082:00FD:003A:D7E0 ()
 * @implements 1082:0110:0027:2707
 * @implements 1082:0137:0004:5B1F
 * @implements 1082:013B:0002:2597
 */
void emu_Building_FindFirst()
{
	PoolFindStruct *find;
	Building *b;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_dx = 0x0;
	emu_ax = 0x0;

	find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp,  0x2), emu_get_memory16(emu_ss, emu_sp,  0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp,  0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp,  0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp,  0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp,  0x0) = emu_Global_GetIP(g_global->buildingFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->buildingFindStruct;
	}

	find->houseID = emu_get_memory16(emu_ss, emu_sp,  0x4);
	find->type    = emu_get_memory16(emu_ss, emu_sp,  0x6);
	find->index   = 0xFFFF;

	b = Building_Find(find);

	if (b == NULL) return;
	emu_dx = g_global->buildingStartPos.s.cs;
	emu_ax = g_global->buildingStartPos.s.ip + b->index * sizeof(Building);
}

/**
 * Emulator wrapper around Building_Find(). It uses a default struct in case
 *  none is given.
 *
 * @name emu_Building_FindNext
 * @implements 1082:013D:0038:4AF1 ()
 * @implements 1082:0155:0020:8556
 * @implements 1082:0173:0002:ED3A
 * @implements 1082:0175:0059:CC2D
 * @implements 1082:019B:0033:6811
 * @implements 1082:01AE:0020:C80A
 * @implements 1082:01BF:000F:4483
 * @implements 1082:01CC:0002:CA3A
 * @implements 1082:01CE:0014:2D5F
 * @implements 1082:01CF:0013:4D5B
 * @implements 1082:01E2:0006:F7CE
 */
void emu_Building_FindNext()
{
	PoolFindStruct *find;
	Building *b;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_dx = 0x0;
	emu_ax = 0x0;

	find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp,  0x2), emu_get_memory16(emu_ss, emu_sp,  0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp,  0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp,  0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp,  0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp,  0x0) = emu_Global_GetIP(g_global->buildingFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->buildingFindStruct;
	}

	b = Building_Find(find);

	if (b == NULL) return;
	emu_dx = g_global->buildingStartPos.s.cs;
	emu_ax = g_global->buildingStartPos.s.ip + b->index * sizeof(Building);
}
