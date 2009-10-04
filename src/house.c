#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "house.h"

/**
 * Get a house from the memory by index.
 *
 * @param index The Nth house to get.
 * @return The house.
 */
House *House_Get_ByIndex(uint8 index)
{
	assert(index < HOUSE_INDEX_MAX);
	return (House *)&emu_get_memory8(g_global->houseStartPos.cs, g_global->houseStartPos.ip, index * sizeof(House));
}

/**
 * Get a house from the memory by segment:offset.
 *
 * @param address The address of the house.
 * @return The house.
 */
House *House_Get_ByMemory(csip address)
{
	return (House *)&emu_get_memory8(address.cs, address.ip, 0x0);
}

/**
 * Allocate memory for a house.
 *
 * @param index The index to put the house on.
 * @return The house allocated, or NULL on failure.
 */
House* House_Allocate(int16 index)
{
	if (g_global->houseStartPos.csip == 0x0) return NULL;
	if (index >= HOUSE_INDEX_MAX || index < 0) return NULL;

	House *h = House_Get_ByIndex(index);
	if ((h->variable_04 & 0x1) != 0) return NULL;

	memset(h, 0, sizeof(House));
	h->index = index;
	h->variable_04 = 0x0001;
	h->variable_2C = 0xFFFF;

	g_global->houseArray[g_global->houseCount].csip = g_global->houseStartPos.csip + index * sizeof(House);
	g_global->houseCount++;

	return h;
}

/**
 * Find all houses.
 *
 * @param lastIndex The last index which resulted in a match, or -1 to start from begin.
 *   On exit, lastIndex contained the last index we looked at.
 * @return The house, if one is found.
 */
House *House_Find(int16 *lastIndex)
{
	int16 index = *lastIndex;
	if (index >= g_global->houseCount) return NULL;
	index++; // First, we always go to the next index

	for (; index < g_global->houseCount; index++) {
		csip pos = g_global->houseArray[index];
		House *h = House_Get_ByMemory(pos);

		*lastIndex = index;
		return h;
	}

	*lastIndex = index;
	return NULL;
}
