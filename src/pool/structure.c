/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../structure.h"
#include "../house.h"
#include "pool.h"
#include "structure.h"
#include "house.h"

extern void emu_Script_Reset();

/**
 * Get a Structure from the pool with the indicated index.
 *
 * @param index The index of the Structure to get.
 * @return The Structure.
 */
Structure *Structure_Get_ByIndex(uint16 index)
{
	assert(index < STRUCTURE_INDEX_MAX_HARD);
	return (Structure *)&emu_get_memory8(g_global->structureStartPos.s.cs, g_global->structureStartPos.s.ip, index * sizeof(Structure));
}

/**
 * Get a Structure from the pool at the indicated address.
 *
 * @param address The address of the Structure to get.
 * @return The Structure.
 */
Structure *Structure_Get_ByMemory(csip32 address)
{
	assert(g_global->structureStartPos.csip <= address.csip && address.csip < g_global->structureStartPos.csip + sizeof(Structure) * STRUCTURE_INDEX_MAX_HARD);
	return (Structure *)&emu_get_memory8(address.s.cs, address.s.ip, 0x0);
}

/**
 * Find the first matching Structure based on the PoolFindStruct filter data.
 *
 * @param find A pointer to a PoolFindStruct which contains filter data and
 *   last known tried index. Calling this functions multiple times with the
 *   same 'find' parameter walks over all possible values matching the filter.
 * @return The Structure, or NULL if nothing matches (anymore).
 */
Structure *Structure_Find(PoolFindStruct *find)
{
	if (find->index >= g_global->structureCount && find->index != 0xFFFF) return NULL;
	find->index++; /* First, we always go to the next index */

	for (; find->index < g_global->structureCount; find->index++) {
		csip32 pos = g_global->structureArray[find->index];
		Structure *b;
		if (pos.csip == 0x00000000) continue;

		b = Structure_Get_ByMemory(pos);

		if ((b->flags & 0x0004) != 0 && g_global->variable_38BC == 0) continue;
		if (find->houseID != HOUSE_INDEX_INVALID     && find->houseID != b->houseID) continue;
		if (find->type    != STRUCTURE_INDEX_INVALID && find->type    != b->type)  continue;

		return b;
	}

	return NULL;
}

/**
 * Initialize the Structure array.
 *
 * @param address If non-zero, the new location of the Structure array.
 */
void Structure_Init(csip32 address)
{
	g_global->structureCount = 0;

	if (address.csip != 0x0) {
		/* Try to make the IP empty by moving as much as possible to the CS */
		g_global->structureStartPos.s.cs = address.s.cs + (address.s.ip >> 4);
		g_global->structureStartPos.s.ip = address.s.ip & 0x000F;
	}

	if (g_global->structureStartPos.csip == 0x0) return;

	memset(Structure_Get_ByIndex(0), 0, sizeof(Structure) * STRUCTURE_INDEX_MAX_HARD);
}

/**
 * Recount all Structures, ignoring the cache array. Also set the structureCount
 *  of all houses to zero.
 */
void Structure_Recount()
{
	uint16 index;
	PoolFindStruct find = { -1, -1, -1 };
	House *h = House_Find(&find);

	while (h != NULL) {
		h->unitCount = 0;
		h = House_Find(&find);
	}

	g_global->structureCount = 0;

	for (index = 0; index < STRUCTURE_INDEX_MAX_HARD; index++) {
		Structure *b = Structure_Get_ByIndex(index);
		if ((b->flags & 0x0001) == 0) continue;

		g_global->structureArray[g_global->structureCount].csip = g_global->structureStartPos.csip + index * sizeof(Structure);
		g_global->structureCount++;
	}
}

/**
 * Allocate a Structure.
 *
 * @param index The index to use, or STRUCTURE_INDEX_INVALID to find an unused index.
 * @param typeID The type of the new Structure.
 * @return The Structure allocated, or NULL on failure.
 */
Structure *Structure_Allocate(uint16 index, uint8 type)
{
	Structure *b = NULL;

	if (g_global->structureStartPos.csip == 0x0) return NULL;

	switch (type) {
		case STRUCTURE_SLAB_1x1:
			index = STRUCTURE_INDEX_SLAB_1x1;
			b = Structure_Get_ByIndex(index);
			break;

		case STRUCTURE_SLAB_2x2:
			index = STRUCTURE_INDEX_SLAB_2x2;
			b = Structure_Get_ByIndex(index);
			break;

		case STRUCTURE_WALL:
			index = STRUCTURE_INDEX_WALL;
			b = Structure_Get_ByIndex(index);
			break;

		default:
			if (index == STRUCTURE_INDEX_INVALID) {
				/* Find the first unused index */
				for (index = 0; index < STRUCTURE_INDEX_MAX_SOFT; index++) {
					b = Structure_Get_ByIndex(index);
					if ((b->flags & 0x0001) == 0) break;
				}
				if (index == STRUCTURE_INDEX_MAX_SOFT) return NULL;
			} else {
				b = Structure_Get_ByIndex(index);
				if ((b->flags & 0x0001) != 0) return NULL;
			}
			break;
	}
	assert(b != NULL);

	/* Initialize the Structure */
	memset(b, 0, sizeof(Structure));
	b->index        = index;
	b->type         = type;
	b->linkedUnitID = 0xFF;
	b->flags        = 0x0003;
	b->variable_06  = 0x0000;
	b->scriptDelay  = 0;

	g_global->structureArray[g_global->structureCount].csip = g_global->structureStartPos.csip + index * sizeof(Structure);
	g_global->structureCount++;

	return b;
}

/**
 * Free a Structure.
 *
 * @param address The address of the Structure to free.
 */
void Structure_Free(csip32 address)
{
	Structure *b;
	int i;

	emu_push(0x353F); emu_push(emu_Global_GetIP(&g_global->scriptStructure, 0x353F));
	emu_push(address.s.cs); emu_push(address.s.ip + 0x12);
	emu_push(emu_cs); emu_push(0x033D); emu_cs = 0x15C2; emu_Script_Reset();
	emu_sp += 8;

	b = Structure_Get_ByMemory(address);
	b->flags = 0x0;

	/* Walk the array to find the Structure we are removing */
	for (i = 0; i < g_global->structureCount; i++) {
		if (g_global->structureArray[i].csip != address.csip) continue;
		break;
	}
	assert(i < g_global->structureCount); /* We should always find an entry */

	g_global->structureCount--;

	/* If needed, close the gap */
	if (i == g_global->structureCount) return;
	memmove(&g_global->structureArray[i], &g_global->structureArray[i + 1], (g_global->structureCount - i) * sizeof(g_global->structureArray[0]));
}
