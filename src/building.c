#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "building.h"

/**
 * Get a building from the memory by index.
 *
 * @param index The Nth building to get.
 * @return The building struct.
 */
Building *Building_Get_ByIndex(uint8 index)
{
	return (Building *)&emu_get_memory8(g_global->memoryBuildings >> 16, g_global->memoryBuildings & 0xFFFF, index * 0x58);
}

/**
 * Get a buildinf frmo the memory by segment:offset.
 *
 * @param segment The segment of the building.
 * @param offset The offset of the building.
 * @return The building struct.
 */
Building *Building_Get_ByMemory(uint16 segment, uint16 offset)
{
	return (Building *)&emu_get_memory8(segment, offset, 0x0);
}

/**
 * Get a building from the memory by index.
 * @note This function is deprecated. Use Building_Get_ByIndex().
 *
 * @name Building_Get_ByIndex2
 * @implements 1082:03A1:0023:9F5D ()
 * @implements 1082:03C2:0002:C33A
 * @implements 1082:03C4:0006:5EA9
 * @implements 1082:03CA:0002:2597
 */
void Building_Get_ByIndex2()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_ax.x = 0x0;
	emu_dx.x = 0x0;

	uint16 index = emu_get_memory16(emu_ss, emu_sp,  0x0);
	if (index >= 0x52) return;

	emu_dx.x = g_global->memoryBuildings >> 16;
	emu_ax.x = (g_global->memoryBuildings & 0xFFFF) + index * 0x58;
}

/**
 * Find alls buildings, where filters specify what to find exactly.
 *
 * @name Building_Find
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
void Building_Find()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	emu_ax.x = 0;
	emu_dx.x = 0;

	BuildingFindStruct *find = (BuildingFindStruct *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp,  0x2), emu_get_memory16(emu_ss, emu_sp,  0x0), 0x0);
	if (emu_get_memory16(emu_ss, emu_sp,  0x2) == 0x0 && emu_get_memory16(emu_ss, emu_sp,  0x0) == 0x0) find = (BuildingFindStruct *)g_global->buildingFindStruct;

	if (find->index >= g_global->memoryBuildingsCount) return;
	find->index++; // First, we always go to the next index

	for (; find->index < g_global->memoryBuildingsCount; find->index++) {
		uint32 pos = g_global->memoryBuildingsPos[find->index];
		Building *b = Building_Get_ByMemory(pos >> 16, pos & 0xFFFF);

		if ((b->variable_04 & 0x04) != 0 && g_global->variable_38BC == 0) continue;
		if (find->ownerID != -1 && b->ownerID != find->ownerID) continue;
		if (find->typeID  != -1 && b->typeID  != find->typeID)  continue;

		emu_dx.x = pos >> 16;
		emu_ax.x = pos & 0xFFFF;
		return;
	}
}
