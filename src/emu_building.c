#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "building.h"
#include "house.h"

extern void f__01F7_28B8_0024_83C9();
extern void f__15C2_0395_0044_304E();

/**
 * Initialize the buildings. It cleans the whole memory, and resets everything
 *  to zero. If as parameters a CS:IP pair is given, that will be used as
 *  start of the Building array.
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
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	uint16 newCS = emu_get_memory16(emu_ss, emu_sp,  0x2);
	uint16 newIP = emu_get_memory16(emu_ss, emu_sp,  0x0);

	g_global->buildingCount = 0;

	if (newCS != 0x0 || newIP != 0x0) {
		/* Try to make the IP empty by moving as much as possible to the CS */
		g_global->buildingStartPos.cs = newCS + (newIP >> 4);
		g_global->buildingStartPos.ip = newIP & 0x000F;
	}

	if (g_global->buildingStartPos.csip != 0x0) {
		memset(Building_Get_ByIndex(0), 0, sizeof(Building) * BUILDING_INDEX_MAX_HARD);
	}

	emu_dx.x = 0;
	emu_ax.x = sizeof(Building) * BUILDING_INDEX_MAX_HARD;
}

/**
 * Recount all buildings, ignoring the cache array. Also set the buildingCount
 *  of all houses to zero.
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
 * Allocate memory for a building.
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
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	int16 index = emu_get_memory16(emu_ss, emu_sp,  0x0);
	uint8 typeID = emu_get_memory16(emu_ss, emu_sp,  0x2);
	Building *b = Building_Allocate(index, typeID);

	if (b == NULL) {
		emu_dx.x = 0x0;
		emu_ax.x = 0x0;
		return;
	}

	emu_dx.x = g_global->buildingStartPos.cs;
	emu_ax.x = g_global->buildingStartPos.ip + b->index * sizeof(Building);
}

/**
 * Free memory of a building.
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
	emu_push(emu_bp);
	emu_bp = emu_sp;

	/* XXX -- No idea */
	emu_push(emu_ds);
	emu_push(0x3918);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6) + 0x12);
	emu_push(emu_cs); emu_push(0x033D); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	emu_sp += 8;

	csip32 pos;
	pos.cs = emu_get_memory16(emu_ss, emu_bp,  0x8);
	pos.ip = emu_get_memory16(emu_ss, emu_bp,  0x6);
	Building *b = Building_Get_ByMemory(pos);
	b->variable_04 = 0x0;

	/* Walk the array to find the building we are removing */
	int i;
	for (i = 0; i < g_global->buildingCount; i++) {
		if (g_global->buildingArray[i].csip != pos.csip) continue;
		break;
	}
	assert(i < g_global->buildingCount); // We should always find an entry

	g_global->buildingCount--;
	if (i == g_global->buildingCount) {
		/* Return from this function */
		emu_pop(&emu_bp);
		emu_pop(&emu_ip);
		emu_pop(&emu_cs);
		return;
	}

	/* Close the gap by moving everything one to the left */
	emu_push((g_global->buildingCount - i) * 4);
	emu_push(emu_ds);
	emu_push((i * 4) + 0x8626); // XXX -- g_global->memoryBuildingsPos[i + 1]
	emu_push(emu_ds);
	emu_push((i * 4) + 0x8622); // XXX -- g_global->memoryBuildingsPos[i + 0]
	emu_push(emu_cs); emu_push(0x0394); emu_cs = 0x01F7; f__01F7_28B8_0024_83C9();
	emu_sp += 10;

	/* Return from this function */
	emu_pop(&emu_bp);
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
}

/**
 * Get a building from the memory by index.
 *
 * @name emu_Building_Get_ByIndex
 * @implements 1082:03A1:0023:9F5D ()
 * @implements 1082:03C2:0002:C33A
 * @implements 1082:03C4:0006:5EA9
 * @implements 1082:03CA:0002:2597
 */
void emu_Building_Get_ByIndex()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_ax.x = 0x0;
	emu_dx.x = 0x0;

	uint16 index = emu_get_memory16(emu_ss, emu_sp,  0x0);
	if (index >= BUILDING_INDEX_MAX_HARD) return;

	emu_dx.x = g_global->buildingStartPos.cs;
	emu_ax.x = g_global->buildingStartPos.ip + index * sizeof(Building);
}

/**
 * Find the next building matching the filter. The struct should be initialized
 *  via emu_Building_FindFirst().
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
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	BuildingFindStruct *find = (BuildingFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp,  0x2), emu_get_memory16(emu_ss, emu_sp,  0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp,  0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp,  0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp,  0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp,  0x0) = 0x861C; // XXX -- g_global->buildingFindStruct
		find = (BuildingFindStruct *)g_global->buildingFindStruct;
	}

	Building *b = Building_Find(find->houseID, find->typeID, &find->index);

	if (b == NULL) {
		emu_dx.x = 0x0;
		emu_ax.x = 0x0;
		return;
	}

	/* Find back the CS:IP of the building */
	emu_dx.x = g_global->buildingStartPos.cs;
	emu_ax.x = emu_Global_GetIP(b, g_global->buildingStartPos.cs);
}

/**
 * Finds the first building based on a given houseID and typeID. Call
 *  emu_Building_FindNext() to find the next entry.
 *
 * @name emu_Building_FindFirst
 * @implements 1082:00FD:003A:D7E0 ()
 * @implements 1082:0110:0027:2707
 * @implements 1082:0137:0004:5B1F
 * @implements 1082:013B:0002:2597
 */
void emu_Building_FindFirst()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	BuildingFindStruct *find = (BuildingFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp,  0x2), emu_get_memory16(emu_ss, emu_sp,  0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp,  0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp,  0x0) == 0x0) {
		emu_get_memory16(emu_ss, emu_sp,  0x2) = 0x353F;
		emu_get_memory16(emu_ss, emu_sp,  0x0) = 0x861C; // XXX -- g_global->buildingFindStruct
		find = (BuildingFindStruct *)g_global->buildingFindStruct;
	}

	find->houseID = emu_get_memory16(emu_ss, emu_sp,  0x4);
	find->typeID  = emu_get_memory16(emu_ss, emu_sp,  0x6);
	find->index   = -1;

	Building *b = Building_Find(find->houseID, find->typeID, &find->index);

	if (b == NULL) {
		emu_dx.x = 0x0;
		emu_ax.x = 0x0;
		return;
	}

	/* Find back the CS:IP of the building */
	emu_dx.x = g_global->buildingStartPos.cs;
	emu_ax.x = emu_Global_GetIP(b, g_global->buildingStartPos.cs);
}
