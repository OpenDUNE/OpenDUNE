/* $Id$ */

/** @file src/pool/structure.c %Structure pool routines. */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../house.h"
#include "../script/script.h"
#include "../structure.h"
#include "pool.h"
#include "structure.h"
#include "house.h"

static struct Structure *g_structureFindArray[STRUCTURE_INDEX_MAX_HARD];
static uint16 g_structureFindCount;

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
	if (find->index >= g_structureFindCount && find->index != 0xFFFF) return NULL;
	find->index++; /* First, we always go to the next index */

	for (; find->index < g_structureFindCount; find->index++) {
		Structure *s = g_structureFindArray[find->index];
		if (s == NULL) continue;

		if (s->o.flags.s.isNotOnMap && g_global->variable_38BC == 0) continue;
		if (find->houseID != HOUSE_INDEX_INVALID     && find->houseID != s->o.houseID) continue;
		if (find->type    != STRUCTURE_INDEX_INVALID && find->type    != s->o.type)  continue;

		return s;
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
	g_structureFindCount = 0;

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

	g_structureFindCount = 0;

	for (index = 0; index < STRUCTURE_INDEX_MAX_HARD; index++) {
		Structure *s = Structure_Get_ByIndex(index);
		if (!s->o.flags.s.used) continue;

		g_structureFindArray[g_structureFindCount++] = s;
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
	Structure *s = NULL;

	if (g_global->structureStartPos.csip == 0x0) return NULL;

	switch (type) {
		case STRUCTURE_SLAB_1x1:
			index = STRUCTURE_INDEX_SLAB_1x1;
			s = Structure_Get_ByIndex(index);
			break;

		case STRUCTURE_SLAB_2x2:
			index = STRUCTURE_INDEX_SLAB_2x2;
			s = Structure_Get_ByIndex(index);
			break;

		case STRUCTURE_WALL:
			index = STRUCTURE_INDEX_WALL;
			s = Structure_Get_ByIndex(index);
			break;

		default:
			if (index == STRUCTURE_INDEX_INVALID) {
				/* Find the first unused index */
				for (index = 0; index < STRUCTURE_INDEX_MAX_SOFT; index++) {
					s = Structure_Get_ByIndex(index);
					if (!s->o.flags.s.used) break;
				}
				if (index == STRUCTURE_INDEX_MAX_SOFT) return NULL;
			} else {
				s = Structure_Get_ByIndex(index);
				if (s->o.flags.s.used) return NULL;
			}
			break;
	}
	assert(s != NULL);

	/* Initialize the Structure */
	memset(s, 0, sizeof(Structure));
	s->o.index             = index;
	s->o.type              = type;
	s->o.linkedID          = 0xFF;
	s->o.flags.s.used      = true;
	s->o.flags.s.allocated = true;
	s->o.script.delay = 0;

	g_structureFindArray[g_structureFindCount++] = s;

	return s;
}

/**
 * Free a Structure.
 *
 * @param address The address of the Structure to free.
 */
void Structure_Free(Structure *s)
{
	int i;

	s->o.flags.all = 0x0000;

	Script_Reset(&s->o.script, &g_global->scriptStructure);

	/* Walk the array to find the Structure we are removing */
	for (i = 0; i < g_structureFindCount; i++) {
		if (g_structureFindArray[i] != s) continue;
		break;
	}
	assert(i < g_structureFindCount); /* We should always find an entry */

	g_structureFindCount--;

	/* If needed, close the gap */
	if (i == g_structureFindCount) return;
	memmove(&g_structureFindArray[i], &g_structureFindArray[i + 1], (g_structureFindCount - i) * sizeof(g_structureFindArray[0]));
}
