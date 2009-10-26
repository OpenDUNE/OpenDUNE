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
 * Get a House from the pool with the indicated index.
 *
 * @param index The index of the House to get.
 * @return The House.
 */
House *House_Get_ByIndex(uint8 index)
{
	/* XXX -- For some reasons when loading a savegame index '13' is loaded */
	assert(index < HOUSE_INDEX_MAX || index == 13);
	return (House *)&emu_get_memory8(g_global->houseStartPos.s.cs, g_global->houseStartPos.s.ip, index * sizeof(House));
}

/**
 * Get a House from the pool at the indicated address.
 *
 * @param address The address of the House to get.
 * @return The House.
 */
House *House_Get_ByMemory(csip32 address)
{
	assert(g_global->houseStartPos.csip <= address.csip && address.csip < g_global->houseStartPos.csip + sizeof(House) * HOUSE_INDEX_MAX);
	return (House *)&emu_get_memory8(address.s.cs, address.s.ip, 0x0);
}

/**
 * Find the first matching House based on the PoolFindStruct filter data.
 *
 * @param find A pointer to a PoolFindStruct which contains filter data and
 *   last known tried index. Calling this functions multiple times with the
 *   same 'find' parameter walks over all possible values matching the filter.
 * @return The House, or NULL if nothing matches (anymore).
 */
House *House_Find(PoolFindStruct *find)
{
	if (find->index >= g_global->houseCount && find->index != 0xFFFF) return NULL;
	find->index++; /* First, we always go to the next index */

	for (; find->index < g_global->houseCount; find->index++) {
		csip32 pos = g_global->houseArray[find->index];
		House *h;
		if (pos.csip == 0x00000000) continue;

		h = House_Get_ByMemory(pos);
		return h;
	}

	return NULL;
}

/**
 * Initialize the House array.
 *
 * @param address If non-zero, the new location of the House array.
 */
void House_Init(csip32 address)
{
	g_global->houseCount = 0;

	if (address.csip != 0x0) {
		/* Try to make the IP empty by moving as much as possible to the CS */
		g_global->houseStartPos.s.cs = address.s.cs + (address.s.ip >> 4);
		g_global->houseStartPos.s.ip = address.s.ip & 0x000F;
	}

	if (g_global->houseStartPos.csip == 0x0) return;

	memset(House_Get_ByIndex(0), 0, sizeof(House) * HOUSE_INDEX_MAX);
}

/**
 * Allocate a House.
 *
 * @param index The index to use.
 * @return The House allocated, or NULL on failure.
 */
House* House_Allocate(uint8 index)
{
	House *h;

	if (g_global->houseStartPos.csip == 0x0) return NULL;
	if (index >= HOUSE_INDEX_MAX) return NULL;

	h = House_Get_ByIndex(index);
	if ((h->flags & 0x0001) != 0) return NULL;

	/* Initialize the House */
	memset(h, 0, sizeof(House));
	h->index       = index;
	h->flags       = 0x0001;
	h->variable_2C = 0xFFFF;

	g_global->houseArray[g_global->houseCount].csip = g_global->houseStartPos.csip + index * sizeof(House);
	g_global->houseCount++;

	return h;
}

/**
 * Free a House.
 *
 * @param address The address of the House to free.
 */
void House_Free(csip32 address)
{
	/* Walk the array to find the House we are removing */
	int i;
	for (i = 0; i < g_global->houseCount; i++) {
		if (g_global->houseArray[i].csip != address.csip) continue;
		break;
	}
	assert(i < g_global->houseCount); /* We should always find an entry */

	g_global->houseCount--;

	/* If needed, close the gap */
	if (i == g_global->houseCount) return;
	memmove(&g_global->houseArray[i], &g_global->houseArray[i + 1], (g_global->houseCount - i) * sizeof(g_global->houseArray[0]));
}
