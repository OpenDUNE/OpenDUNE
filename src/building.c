#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "building.h"
#include "owner.h"

/**
 * Get a building from the memory by index.
 *
 * @param index The Nth building to get.
 * @return The building struct.
 */
Building *Building_Get_ByIndex(uint8 index)
{
	assert(index < BUILDING_INDEX_MAX_HARD);
	return (Building *)&emu_get_memory8(g_global->buildingStartPos >> 16, g_global->buildingStartPos & 0xFFFF, index * 0x58);
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
 * Allocate memory for a building.
 *
 * @param index The index to put the building on, or -1 to find a free spot.
 * @param typeID The type of the new building.
 */
Building *Building_Allocate(int16 index, uint8 typeID)
{
	Building *b = NULL;

	if (g_global->buildingStartPos == 0x0) return NULL;

	if (typeID == BUILDING_SLAB_1x1) {
		index = BUILDING_INDEX_SLAB_1x1;
		b = Building_Get_ByIndex(index);
	} else if (typeID == BUILDING_SLAB_2x2) {
		index = BUILDING_INDEX_SLAB_2x2;
		b = Building_Get_ByIndex(index);
	} else if (typeID == BUILDING_WALL) {
		index = BUILDING_INDEX_WALL;
		b = Building_Get_ByIndex(index);
	} else if (index != -1) { // Forced on an index
		b = Building_Get_ByIndex(index);
		/* If the slot is not free, don't allocate the building */
		if ((b->variable_04 & 0x0001) != 0) b = NULL;
	} else { // Find the first free slot
		for (index = 0; index < BUILDING_INDEX_MAX_SOFT; index++) {
			b = Building_Get_ByIndex(index);
			if ((b->variable_04 & 0x0001) == 0) break;
		}

		/* If we didn't find a free slot, don't allocate the building */
		if (index == BUILDING_INDEX_MAX_SOFT) b = NULL;
	}

	if (b == NULL) return NULL;

	/* Initialize the building */
	memset(b, 0, sizeof(Building));
	b->index = index;
	b->typeID = typeID;
	b->variable_03 = 0xFF;
	b->variable_04 = 0x03;
	b->variable_06 = 0x00;
	b->variable_10 = 0x00;

	g_global->buildingArray[g_global->buildingCount] = g_global->buildingStartPos + index * sizeof(Building);
	g_global->buildingCount++;

	return b;
}

/* Find all buildings, where filters specify what to find exactly.
 *
 * @param ownerID If not -1, which ownerID the building should have.
 * @param typeID If not -1, which typeID the building should have.
 * @param lastIndex The last index which resulted in a match, or -1 to start from begin.
 *   On exit, lastIndex contained the last index we looked at.
 * @return The building, if one is found.
 */
Building *Building_Find(int16 ownerID, int16 typeID, int16 *lastIndex)
{
	int16 index = *lastIndex;
	if (index >= g_global->buildingCount) return NULL;
	index++; // First, we always go to the next index

	for (; index < g_global->buildingCount; index++) {
		uint32 pos = g_global->buildingArray[index];
		Building *b = Building_Get_ByMemory(pos >> 16, pos & 0xFFFF);

		if ((b->variable_04 & 0x0004) != 0 && g_global->variable_38BC == 0) continue;
		if (ownerID != OWNER_INVALID    && ownerID != b->ownerID) continue;
		if (typeID  != BUILDING_INVALID && typeID  != b->typeID)  continue;

		*lastIndex = index;
		return b;
	}

	*lastIndex = index;
	return NULL;
}
