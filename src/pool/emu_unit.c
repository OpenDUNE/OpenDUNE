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
 * @implements 0FE4:015B:0026:ADF7
 * @implements 0FE4:0164:001D:133A
 * @implements 0FE4:0181:000A:A35D
 * @implements 0FE4:0184
 * @implements 0FE4:018B:0002:2597
 */
void emu_Unit_Init()
{
	csip32 address;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	address.s.cs = emu_get_memory16(emu_ss, emu_sp, 0x2);
	address.s.ip = emu_get_memory16(emu_ss, emu_sp, 0x0);

	Unit_Init(address);

	emu_dx = 0;
	emu_ax = sizeof(Unit) * UNIT_INDEX_MAX;
}

/**
 * Emulator wrapper around Unit_Recount().
 *
 * @name emu_Unit_Recount
 * @implements 0FE4:018D:0012:A3C7 ()
 * @implements 0FE4:019F:0002:CA3A
 * @implements 0FE4:01A1:0014:E02C
 * @implements 0FE4:01B5:001A:35D1
 * @implements 0FE4:01CF:002F:536D
 * @implements 0FE4:01FE:002E:E4F2
 * @implements 0FE4:0221:000B:AD82
 * @implements 0FE4:0222:000A:6D8A
 */
void emu_Unit_Recount()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	Unit_Recount();
}

/**
 * Emulator wrapper around Unit_Allocate().
 *
 * @name emu_Unit_Allocate
 * @implements 0FE4:03A7:0027:85D5 ()
 * @implements 0FE4:03CB:0003:5D85
 * @implements 0FE4:03CE:000C:7AB4
 * @implements 0FE4:03DA:0008:EB39
 * @implements 0FE4:03E2:004F:999F
 * @implements 0FE4:0431:0037:C235
 * @implements 0FE4:0468:002C:883C
 * @implements 0FE4:0494:0008:B54A
 * @implements 0FE4:0495:0007:F34A
 * @implements 0FE4:049A:0002:D53A
 * @implements 0FE4:049C
 * @implements 0FE4:04C6:000B:ECCA
 * @implements 0FE4:04D1:0019:1614
 * @implements 0FE4:04EA:0079:7205
 * @implements 0FE4:0540:0023:71CE
 * @implements 0FE4:055A:0009:5BBE
 * @implements 0FE4:0563:0005:8BCF
 */
void emu_Unit_Allocate()
{
	uint16 index;
	uint8 typeID, houseID;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_dx = 0x0;
	emu_ax = 0x0;

	index   = emu_get_memory16(emu_ss, emu_sp,  0x0);
	typeID  = emu_get_memory16(emu_ss, emu_sp,  0x2);
	houseID = emu_get_memory16(emu_ss, emu_sp,  0x4);

	u = Unit_Allocate(index, typeID, houseID);

	if (u == NULL) return;
	emu_dx = g_global->unitStartPos.s.cs;
	emu_ax = g_global->unitStartPos.s.ip + u->index * sizeof(Unit);
}

/**
 * Emulator wrapper around Unit_Free().
 *
 * @name emu_Unit_Free
 * @implements 0FE4:0568:0018:8258 ()
 * @implements 0FE4:0580:0010:7F56
 * @implements 0FE4:0590:002A:6D7E
 * @implements 0FE4:05BA:0034:78C1
 * @implements 0FE4:05EE:0005:86EE
 * @implements 0FE4:05F1:0002:C3BA
 * @implements 0FE4:05F3:000A:3FFB
 * @implements 0FE4:05F4:0009:2E7B
 * @implements 0FE4:05FA:0003:2E57
 */
void emu_Unit_Free()
{
	csip32 address;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	address.s.cs = emu_get_memory16(emu_ss, emu_sp, 0x2);
	address.s.ip = emu_get_memory16(emu_ss, emu_sp, 0x0);

	Unit_Free(address);
}

/**
 * Get a Unit from the memory by index.
 *
 * @name emu_Unit_Get_ByIndex
 * @implements 0FE4:05FD:002C:15BA ()
 * @implements 0FE4:0627:0002:C33A
 * @implements 0FE4:0629:0006:5EA9
 * @implements 0FE4:062F:0003:2E57
 */
void emu_Unit_Get_ByIndex()
{
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_ax = 0x0;
	emu_dx = 0x0;

	index = emu_get_memory16(emu_ss, emu_sp,  0x0);

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
 * @implements 0FE4:0256:0027:2707
 * @implements 0FE4:027D:0004:5B1F
 * @implements 0FE4:0281:0002:2597
 */
void emu_Unit_FindFirst()
{
	PoolFindStruct *find;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_dx = 0x0;
	emu_ax = 0x0;

	find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp,  0x2), emu_get_memory16(emu_ss, emu_sp,  0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp,  0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp,  0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp,  0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp,  0x0) = emu_Global_GetIP(g_global->unitFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->unitFindStruct;
	}

	find->houseID = emu_get_memory16(emu_ss, emu_sp,  0x4);
	find->typeID  = emu_get_memory16(emu_ss, emu_sp,  0x6);
	find->index   = 0xFFFF;

	u = Unit_Find(find);

	if (u == NULL) return;
	emu_dx = g_global->unitStartPos.s.cs;
	emu_ax = g_global->unitStartPos.s.ip + u->index * sizeof(Unit);
}

/**
 * Emulator wrapper around Unit_Find(). It uses a default struct in case
 *  none is given.
 *
 * @name emu_Unit_FindNext
 * @implements 0FE4:0283:0038:4950 ()
 * @implements 0FE4:029B:0020:87FE
 * @implements 0FE4:02B9:0002:EFBA
 * @implements 0FE4:02BB:0037:C24B
 * @implements 0FE4:02E1:0011:DA30
 * @implements 0FE4:02F2:0027:8238
 * @implements 0FE4:02F9:0020:C80A
 * @implements 0FE4:030A:000F:4483
 * @implements 0FE4:0317:0002:CA3A
 * @implements 0FE4:0319:0014:27B3
 * @implements 0FE4:031A:0013:47B7
 * @implements 0FE4:032D:0006:F7CE
 */
void emu_Unit_FindNext()
{
	PoolFindStruct *find;
	Unit *u;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_dx = 0x0;
	emu_ax = 0x0;

	find = (PoolFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp,  0x2), emu_get_memory16(emu_ss, emu_sp,  0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp,  0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp,  0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp,  0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp,  0x0) = emu_Global_GetIP(g_global->unitFindStruct, 0x353F);
		find = (PoolFindStruct *)g_global->unitFindStruct;
	}

	u = Unit_Find(find);

	if (u == NULL) return;
	emu_dx = g_global->unitStartPos.s.cs;
	emu_ax = g_global->unitStartPos.s.ip + u->index * sizeof(Unit);
}
