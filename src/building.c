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
