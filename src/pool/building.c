/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../building.h"
#include "../house.h"
#include "pool.h"
#include "building.h"
#include "house.h"

extern void f__15C2_0395_0044_304E();

/**
 * Get a Building from the pool with the indicated index.
 *
 * @param index The index of the Building to get.
 * @return The Building.
 */
Building *Building_Get_ByIndex(uint16 index)
{
	assert(index < BUILDING_INDEX_MAX_HARD);
	return (Building *)&emu_get_memory8(g_global->buildingStartPos.cs, g_global->buildingStartPos.ip, index * sizeof(Building));
}

/**
 * Get a Building from the pool at the indicated address.
 *
 * @param address The address of the Building to get.
 * @return The Building.
 */
Building *Building_Get_ByMemory(csip32 address)
{
	assert(g_global->buildingStartPos.csip <= address.csip && address.csip < g_global->buildingStartPos.csip + sizeof(Building) * BUILDING_INDEX_MAX_HARD);
	return (Building *)&emu_get_memory8(address.cs, address.ip, 0x0);
}

/**
 * Find the first matching Building based on the PoolFindStruct filter data.
 *
 * @param find A pointer to a PoolFindStruct which contains filter data and
 *   last known tried index. Calling this functions multiple times with the
 *   same 'find' parameter walks over all possible values matching the filter.
 * @return The Building, or NULL if nothing matches (anymore).
 */
Building *Building_Find(PoolFindStruct *find)
{
	if (find->index >= g_global->buildingCount && find->index != 0xFFFF) return NULL;
	find->index++; // First, we always go to the next index

	for (; find->index < g_global->buildingCount; find->index++) {
		csip32 pos = g_global->buildingArray[find->index];
		Building *b = Building_Get_ByMemory(pos);

		if ((b->variable_04 & 0x0004) != 0 && g_global->variable_38BC == 0) continue;
		if (find->houseID != HOUSE_INDEX_INVALID    && find->houseID != b->houseID) continue;
		if (find->typeID  != BUILDING_INDEX_INVALID && find->typeID  != b->typeID)  continue;

		return b;
	}

	return NULL;
}

/**
 * Initialize the Building array.
 *
 * @param address If non-zero, the new location of the Building array.
 */
void Building_Init(csip32 address)
{
	g_global->buildingCount = 0;

	if (address.csip != 0x0) {
		/* Try to make the IP empty by moving as much as possible to the CS */
		g_global->buildingStartPos.cs = address.cs + (address.ip >> 4);
		g_global->buildingStartPos.ip = address.ip & 0x000F;
	}

	if (g_global->buildingStartPos.csip == 0x0) return;

	memset(Building_Get_ByIndex(0), 0, sizeof(Building) * BUILDING_INDEX_MAX_HARD);
}

/**
 * Recount all Buildings, ignoring the cache array. Also set the buildingCount
 *  of all houses to zero.
 */
void Building_Recount()
{
	PoolFindStruct find = { -1, -1, -1 };
	House *h = House_Find(&find);

	while (h != NULL) {
		h->unitCount = 0;
		h = House_Find(&find);
	}

	g_global->buildingCount = 0;

	uint16 index;
	for (index = 0; index < BUILDING_INDEX_MAX_HARD; index++) {
		Building *b = Building_Get_ByIndex(index);
		if ((b->variable_04 & 0x0001) == 0) continue;

		g_global->buildingArray[g_global->buildingCount].csip = g_global->buildingStartPos.csip + index * sizeof(Building);
		g_global->buildingCount++;
	}
}

/**
 * Allocate a Building.
 *
 * @param index The index to use, or BUILDING_INDEX_INVALID to find an unused index.
 * @param typeID The type of the new Building.
 * @return The Building allocated, or NULL on failure.
 */
Building *Building_Allocate(uint16 index, uint8 typeID)
{
	if (g_global->buildingStartPos.csip == 0x0) return NULL;

	Building *b = NULL;
	switch (typeID) {
		case BUILDING_SLAB_1x1:
			index = BUILDING_INDEX_SLAB_1x1;
			b = Building_Get_ByIndex(index);
			break;

		case BUILDING_SLAB_2x2:
			index = BUILDING_INDEX_SLAB_2x2;
			b = Building_Get_ByIndex(index);
			break;

		case BUILDING_WALL:
			index = BUILDING_INDEX_WALL;
			b = Building_Get_ByIndex(index);
			break;

		default:
			if (index == BUILDING_INDEX_INVALID) {
				/* Find the first unused index */
				for (index = 0; index < BUILDING_INDEX_MAX_SOFT; index++) {
					b = Building_Get_ByIndex(index);
					if ((b->variable_04 & 0x0001) == 0) break;
				}
				if (index == BUILDING_INDEX_MAX_SOFT) return NULL;
			} else {
				b = Building_Get_ByIndex(index);
				if ((b->variable_04 & 0x0001) != 0) return NULL;
			}
			break;
	}
	assert(b != NULL);

	/* Initialize the Building */
	memset(b, 0, sizeof(Building));
	b->index          = index;
	b->typeID         = typeID;
	b->buildCurrentID = BUILDING_INDEX_INVALID & 0xFF;
	b->variable_04    = 0x0003;
	b->variable_06    = 0x0000;
	b->variable_10    = 0x0000;

	g_global->buildingArray[g_global->buildingCount].csip = g_global->buildingStartPos.csip + index * sizeof(Building);
	g_global->buildingCount++;

	return b;
}

/**
 * Free a Building.
 *
 * @param address The address of the Building to free.
 */
void Building_Free(csip32 address)
{
	/* XXX -- No idea */
	emu_push(0x353F); emu_push(0x3918); // XXX -- g_global->variable_3918
	emu_push(address.cs); emu_push(address.ip + 0x12);
	emu_push(emu_cs); emu_push(0x033D); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	emu_sp += 8;

	Building *b = Building_Get_ByMemory(address);
	b->variable_04 = 0x0;

	/* Walk the array to find the Building we are removing */
	int i;
	for (i = 0; i < g_global->buildingCount; i++) {
		if (g_global->buildingArray[i].csip != address.csip) continue;
		break;
	}
	assert(i < g_global->buildingCount); // We should always find an entry

	g_global->buildingCount--;

	/* If needed, close the gap */
	if (i == g_global->buildingCount) return;
	memmove(&g_global->buildingArray[i], &g_global->buildingArray[i + 1], (g_global->buildingCount - i) * sizeof(g_global->buildingArray[0]));
}
