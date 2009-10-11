/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../house.h"
#include "../unit.h"
#include "pool.h"
#include "house.h"
#include "unit.h"

extern void f__15C2_0395_0044_304E();

/**
 * Get a Unit from the pool with the indicated index.
 *
 * @param index The index of the Unit to get.
 * @return The Unit.
 */
Unit *Unit_Get_ByIndex(uint16 index)
{
	assert(index < UNIT_INDEX_MAX);
	return (Unit *)&emu_get_memory8(g_global->unitStartPos.s.cs, g_global->unitStartPos.s.ip, index * sizeof(Unit));
}

/**
 * Get a Unit from the pool at the indicated address.
 *
 * @param address The address of the Unit to get.
 * @return The Unit.
 */
Unit *Unit_Get_ByMemory(csip32 address)
{
	assert(g_global->unitStartPos.csip <= address.csip && address.csip < g_global->unitStartPos.csip + sizeof(Unit) * UNIT_INDEX_MAX);
	return (Unit *)&emu_get_memory8(address.s.cs, address.s.ip, 0x0);
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
	if (find->index >= g_global->unitCount && find->index != 0xFFFF) return NULL;
	find->index++; /* First, we always go to the next index */

	for (; find->index < g_global->unitCount; find->index++) {
		csip32 pos = g_global->unitArray[find->index];
		Unit *u;
		if (pos.csip == 0x00000000) continue;

		u = Unit_Get_ByMemory(pos);

		if ((u->flags & 0x0004) != 0 && g_global->variable_38BC == 0) continue;
		if (find->houseID != HOUSE_INDEX_INVALID && find->houseID != Unit_GetHouseID(u)) continue;
		if (find->type    != UNIT_INDEX_INVALID  && find->type    != u->type)  continue;

		return u;
	}

	return NULL;
}

/**
 * Initialize the Unit array.
 *
 * @param address If non-zero, the new location of the Unit array.
 */
void Unit_Init(csip32 address)
{
	g_global->unitCount = 0;

	if (address.csip != 0x0) {
		/* Try to make the IP empty by moving as much as possible to the CS */
		g_global->unitStartPos.s.cs = address.s.cs + (address.s.ip >> 4);
		g_global->unitStartPos.s.ip = address.s.ip & 0x000F;
	}

	if (g_global->unitStartPos.csip == 0x0) return;

	memset(Unit_Get_ByIndex(0), 0, sizeof(Unit) * UNIT_INDEX_MAX);
}

/**
 * Recount all Units, ignoring the cache array. Also set the unitCount
 *  of all houses to zero.
 */
void Unit_Recount()
{
	uint16 index;
	PoolFindStruct find = { -1, -1, -1 };
	House *h = House_Find(&find);

	while (h != NULL) {
		h->unitCount = 0;
		h = House_Find(&find);
	}

	g_global->unitCount = 0;

	for (index = 0; index < UNIT_INDEX_MAX; index++) {
		Unit *u = Unit_Get_ByIndex(index);
		if ((u->flags & 0x0001) == 0) continue;

		h = House_Get_ByIndex(u->houseID);
		h->unitCount++;

		g_global->unitArray[g_global->unitCount].csip = g_global->unitStartPos.csip + index * sizeof(Unit);
		g_global->unitCount++;
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
	if (g_global->unitStartPos.csip == 0x0) return NULL;

	h = House_Get_ByIndex(houseID);
	if (h->unitCount >= h->unitCountMax) {
		if (g_unitInfo[type].variable_3C != 0x0004 && g_unitInfo[type].variable_3C != 0x0005) {
			if (g_global->variable_38BC == 0x00) return NULL;
		}
	}

	if (index == 0 || index == UNIT_INDEX_INVALID) {
		uint16 indexStart = g_unitInfo[type].indexStart;
		uint16 indexEnd   = g_unitInfo[type].indexEnd;

		for (index = indexStart; index <= indexEnd; index++) {
			u = Unit_Get_ByIndex(index);
			if ((u->flags & 0x0001) == 0) break;
		}
		if (index > indexEnd) return NULL;
	} else {
		u = Unit_Get_ByIndex(index);
		if ((u->flags & 0x0001) != 0) return NULL;
	}
	assert(u != NULL);

	h->unitCount++;

	/* Initialize the Unit */
	memset(u, 0, sizeof(Unit));
	u->index            = index;
	u->type             = type;
	u->houseID          = houseID;
	u->linkedBuildingID = 0xFF;
	u->flags            = 0x0003;
	u->variable_06      = 0x0001;
	u->variable_10      = 0x0000;
	u->variable_72      = 0xFF;
	if (type == UNIT_UNKNOWN_25) u->variable_58 = 0x03;

	g_global->unitArray[g_global->unitCount].csip = g_global->unitStartPos.csip + index * sizeof(Unit);
	g_global->unitCount++;

	return u;
}

/**
 * Free a Unit.
 *
 * @param address The address of the Unit to free.
 */
void Unit_Free(csip32 address)
{
	Unit *u;
	int i;

	/* XXX -- No idea */
	emu_push(0x353F); emu_push(0x3902); /* XXX -- g_global->variable_3902 */
	emu_push(address.s.cs); emu_push(address.s.ip + 0x12);
	emu_push(emu_cs); emu_push(0x0580); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	emu_sp += 8;

	u = Unit_Get_ByMemory(address);
	u->flags = 0x0;

	/* Walk the array to find the Unit we are removing */
	for (i = 0; i < g_global->unitCount; i++) {
		if (g_global->unitArray[i].csip != address.csip) continue;
		break;
	}
	assert(i < g_global->unitCount); /* We should always find an entry */

	g_global->unitCount--;

	{
		House *h = House_Get_ByIndex(u->houseID);
		h->unitCount--;
	}

	/* If needed, close the gap */
	if (i == g_global->unitCount) return;
	memmove(&g_global->unitArray[i], &g_global->unitArray[i + 1], (g_global->unitCount - i) * sizeof(g_global->unitArray[0]));
}
