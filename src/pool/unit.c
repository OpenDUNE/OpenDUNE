/** @file src/pool/unit.c %Unit pool routines. */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"

#include "unit.h"

#include "pool.h"
#include "house.h"
#include "../house.h"
#include "../opendune.h"
#include "../unit.h"


static struct Unit g_unitArray[UNIT_INDEX_MAX];
struct Unit *g_unitFindArray[UNIT_INDEX_MAX];
uint16 g_unitFindCount;

/**
 * Get a Unit from the pool with the indicated index.
 *
 * @param index The index of the Unit to get.
 * @return The Unit.
 */
Unit *Unit_Get_ByIndex(uint16 index)
{
	assert(index < UNIT_INDEX_MAX);
	return &g_unitArray[index];
}

/**
 * Find the first matching Unit based on the PoolFindStruct filter data.
 *
 * @param find A pointer to a PoolFindStruct which contains filter data and
 *   last known tried index. Calling this functions multiple times with the
 *   same 'find' parameter walks over all possible values matching the filter.
 * @return The Unit, or NULL if nothing matches (anymore).
 */
Unit *Unit_Find(PoolFindStruct *find)
{
	if (find->index >= g_unitFindCount && find->index != 0xFFFF) return NULL;
	find->index++; /* First, we always go to the next index */

	for (; find->index < g_unitFindCount; find->index++) {
		Unit *u = g_unitFindArray[find->index];
		if (u == NULL) continue;

		if (u->o.flags.s.isNotOnMap && g_validateStrictIfZero == 0) continue;
		if (find->houseID != HOUSE_INVALID       && find->houseID != Unit_GetHouseID(u)) continue;
		if (find->type    != UNIT_INDEX_INVALID  && find->type    != u->o.type)  continue;

		return u;
	}

	return NULL;
}

/**
 * Initialize the Unit array.
 */
void Unit_Init(void)
{
	memset(g_unitArray, 0, sizeof(g_unitArray));
	memset(g_unitFindArray, 0, sizeof(g_unitFindArray));
	g_unitFindCount = 0;
}

/**
 * Recount all Units, ignoring the cache array. Also set the unitCount
 *  of all houses to zero.
 */
void Unit_Recount(void)
{
	uint16 index;
	PoolFindStruct find = { -1, -1, -1 };
	House *h = House_Find(&find);

	while (h != NULL) {
		h->unitCount = 0;
		h = House_Find(&find);
	}

	g_unitFindCount = 0;

	for (index = 0; index < UNIT_INDEX_MAX; index++) {
		Unit *u = Unit_Get_ByIndex(index);
		if (!u->o.flags.s.used) continue;

		h = House_Get_ByIndex(u->o.houseID);
		h->unitCount++;

		g_unitFindArray[g_unitFindCount++] = u;
	}
}

/**
 * Allocate a Unit.
 *
 * @param index The index to use, or UNIT_INDEX_INVALID to find an unused index.
 * @param typeID The type of the new Unit.
 * @param houseID The House of the new Unit.
 * @return The Unit allocated, or NULL on failure.
 */
Unit *Unit_Allocate(uint16 index, uint8 type, uint8 houseID)
{
	House *h;
	Unit *u = NULL;

	if (type == 0xFF || houseID == 0xFF) return NULL;

	h = House_Get_ByIndex(houseID);
	if (h->unitCount >= h->unitCountMax) {
		if (g_table_unitInfo[type].movementType != MOVEMENT_WINGER && g_table_unitInfo[type].movementType != MOVEMENT_SLITHER) {
			if (g_validateStrictIfZero == 0) return NULL;
		}
	}

	if (index == 0 || index == UNIT_INDEX_INVALID) {
		uint16 indexStart = g_table_unitInfo[type].indexStart;
		uint16 indexEnd   = g_table_unitInfo[type].indexEnd;

		for (index = indexStart; index <= indexEnd; index++) {
			u = Unit_Get_ByIndex(index);
			if (!u->o.flags.s.used) break;
		}
		if (index > indexEnd) return NULL;
	} else {
		u = Unit_Get_ByIndex(index);
		if (u->o.flags.s.used) return NULL;
	}
	assert(u != NULL);

	h->unitCount++;

	/* Initialize the Unit */
	memset(u, 0, sizeof(Unit));
	u->o.index                   = index;
	u->o.type                    = type;
	u->o.houseID                 = houseID;
	u->o.linkedID                = 0xFF;
	u->o.flags.s.used            = true;
	u->o.flags.s.allocated       = true;
	u->o.flags.s.isUnit = true;
	u->o.script.delay      = 0;
	u->route[0]            = 0xFF;
	if (type == UNIT_SANDWORM) u->amount = 3;

	g_unitFindArray[g_unitFindCount++] = u;

	return u;
}

/**
 * Free a Unit.
 *
 * @param address The address of the Unit to free.
 */
void Unit_Free(Unit *u)
{
	int i;

	memset(&u->o.flags, 0, sizeof(u->o.flags));

	Script_Reset(&u->o.script, g_scriptUnit);

	/* Walk the array to find the Unit we are removing */
	for (i = 0; i < g_unitFindCount; i++) {
		if (g_unitFindArray[i] != u) continue;
		break;
	}
	assert(i < g_unitFindCount); /* We should always find an entry */

	g_unitFindCount--;

	{
		House *h = House_Get_ByIndex(u->o.houseID);
		h->unitCount--;
	}

	/* If needed, close the gap */
	if (i == g_unitFindCount) return;
	memmove(&g_unitFindArray[i], &g_unitFindArray[i + 1], (g_unitFindCount - i) * sizeof(g_unitFindArray[0]));
}
