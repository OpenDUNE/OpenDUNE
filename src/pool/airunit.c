/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../airunit.h"
#include "pool.h"
#include "house.h"
#include "airunit.h"

/**
 * Get a AirUnit from the pool with the indicated index.
 *
 * @param index The index of the AirUnit to get.
 * @return The AirUnit.
 */
AirUnit *AirUnit_Get_ByIndex(uint16 index)
{
	assert(index < AIRUNIT_INDEX_MAX);
	return (AirUnit *)&emu_get_memory8(g_global->airUnitStartPos.s.cs, g_global->airUnitStartPos.s.ip, index * sizeof(AirUnit));
}

/**
 * Get a AirUnit from the pool at the indicated address.
 *
 * @param address The address of the AirUnit to get.
 * @return The AirUnit.
 */
AirUnit *AirUnit_Get_ByMemory(csip32 address)
{
	assert(g_global->airUnitStartPos.csip <= address.csip && address.csip < g_global->airUnitStartPos.csip + sizeof(AirUnit) * AIRUNIT_INDEX_MAX);
	return (AirUnit *)&emu_get_memory8(address.s.cs, address.s.ip, 0x0);
}

/**
 * Find the first matching AirUnit based on the PoolFindStruct filter data.
 *
 * @param find A pointer to a PoolFindStruct which contains filter data and
 *   last known tried index. Calling this functions multiple times with the
 *   same 'find' parameter walks over all possible values matching the filter.
 * @return The AirUnit, or NULL if nothing matches (anymore).
 */
AirUnit *AirUnit_Find(PoolFindStruct *find)
{
	if (find->index >= g_global->airUnitCount && find->index != 0xFFFF) return NULL;
	find->index++; /* First, we always go to the next index */

	for (; find->index < g_global->airUnitCount; find->index++) {
		csip32 pos = g_global->airUnitArray[find->index];
		AirUnit *au;
		if (pos.csip == 0x00000000) continue;

		au = AirUnit_Get_ByMemory(pos);

		if (find->houseID != HOUSE_INDEX_INVALID && find->houseID != au->houseID) continue;

		return au;
	}

	return NULL;
}

/**
 * Initialize the AirUnit array.
 *
 * @param address If non-zero, the new location of the AirUnit array.
 */
void AirUnit_Init(csip32 address)
{
	g_global->airUnitCount = 0;

	if (address.csip != 0x0) {
		/* Try to make the IP empty by moving as much as possible to the CS */
		g_global->airUnitStartPos.s.cs = address.s.cs + (address.s.ip >> 4);
		g_global->airUnitStartPos.s.ip = address.s.ip & 0x000F;
	}

	if (g_global->airUnitStartPos.csip == 0x0) return;

	memset(AirUnit_Get_ByIndex(0), 0, sizeof(AirUnit) * AIRUNIT_INDEX_MAX);
}

/**
 * Recount all AirUnits, ignoring the cache array.
 */
void AirUnit_Recount()
{
	uint16 index;

	g_global->airUnitCount = 0;

	for (index = 0; index < AIRUNIT_INDEX_MAX; index++) {
		AirUnit *au = AirUnit_Get_ByIndex(index);
		if (au->flags == 0) continue;

		g_global->airUnitArray[g_global->airUnitCount].csip = g_global->airUnitStartPos.csip + index * sizeof(AirUnit);
		g_global->airUnitCount++;
	}
}

/**
 * Allocate a AirUnit.
 *
 * @param index The index to use, or AIRUNIT_INDEX_INVALID to find an unused index.
 * @return The AirUnit allocated, or NULL on failure.
 */
AirUnit *AirUnit_Allocate(uint16 index)
{
	AirUnit *au = NULL;

	if (g_global->airUnitStartPos.csip == 0x0) return NULL;

	if (index == AIRUNIT_INDEX_INVALID) {
		/* Find the first unused index */
		for (index = 0; index < AIRUNIT_INDEX_MAX; index++) {
			au = AirUnit_Get_ByIndex(index);
			if (au->flags == 0) break;
		}
		if (index == AIRUNIT_INDEX_MAX) return NULL;
	} else {
		au = AirUnit_Get_ByIndex(index);
		if (au->flags != 0) return NULL;
	}
	assert(au != NULL);

	/* Initialize the AirUnit */
	memset(au, 0, sizeof(AirUnit));
	au->index       = index;
	au->flags = 0x0001;

	g_global->airUnitArray[g_global->airUnitCount].csip = g_global->airUnitStartPos.csip + index * sizeof(AirUnit);
	g_global->airUnitCount++;

	return au;
}

/**
 * Free a AirUnit.
 *
 * @param address The address of the AirUnit to free.
 */
void AirUnit_Free(AirUnit *au)
{
	csip32 aucsip;
	int i;

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	aucsip.s.cs = g_global->airUnitStartPos.s.cs;
	aucsip.s.ip = g_global->airUnitStartPos.s.ip + au->index * sizeof(AirUnit);

	au->flags = 0x0000;

	/* Walk the array to find the AirUnit we are removing */
	for (i = 0; i < g_global->airUnitCount; i++) {
		if (g_global->airUnitArray[i].csip != aucsip.csip) continue;
		break;
	}
	assert(i < g_global->airUnitCount); /* We should always find an entry */

	g_global->airUnitCount--;

	/* If needed, close the gap */
	if (i == g_global->airUnitCount) return;
	memmove(&g_global->airUnitArray[i], &g_global->airUnitArray[i + 1], (g_global->airUnitCount - i) * sizeof(g_global->airUnitArray[0]));
}
