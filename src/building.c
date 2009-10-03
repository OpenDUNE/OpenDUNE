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
