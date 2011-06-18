/* $Id$ */

/** @file src/pool/team.c %Team pool routines. */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "../team.h"
#include "pool.h"
#include "house.h"
#include "team.h"

/**
 * Get a Team from the pool with the indicated index.
 *
 * @param index The index of the Team to get.
 * @return The Team.
 */
Team *Team_Get_ByIndex(uint16 index)
{
	assert(index < TEAM_INDEX_MAX);
	return (Team *)&emu_get_memory8(g_global->teamStartPos.s.cs, g_global->teamStartPos.s.ip, index * sizeof(Team));
}

/**
 * Get a Team from the pool at the indicated address.
 *
 * @param address The address of the Team to get.
 * @return The Team.
 */
Team *Team_Get_ByMemory(csip32 address)
{
	assert(g_global->teamStartPos.csip <= address.csip && address.csip < g_global->teamStartPos.csip + sizeof(Team) * TEAM_INDEX_MAX);
	return (Team *)&emu_get_memory8(address.s.cs, address.s.ip, 0x0);
}

/**
 * Find the first matching Team based on the PoolFindStruct filter data.
 *
 * @param find A pointer to a PoolFindStruct which contains filter data and
 *   last known tried index. Calling this functions multiple times with the
 *   same 'find' parameter walks over all possible values matching the filter.
 * @return The Team, or NULL if nothing matches (anymore).
 */
Team *Team_Find(PoolFindStruct *find)
{
	if (find->index >= g_global->teamCount && find->index != 0xFFFF) return NULL;
	find->index++; /* First, we always go to the next index */

	for (; find->index < g_global->teamCount; find->index++) {
		csip32 pos = g_global->teamArray[find->index];
		Team *t;
		if (pos.csip == 0x0) continue;

		t = Team_Get_ByMemory(pos);

		if (find->houseID != HOUSE_INDEX_INVALID && find->houseID != t->houseID) continue;

		return t;
	}

	return NULL;
}

/**
 * Initialize the Team array.
 *
 * @param address If non-zero, the new location of the Team array.
 */
void Team_Init(csip32 address)
{
	g_global->teamCount = 0;

	if (address.csip != 0x0) {
		/* Try to make the IP empty by moving as much as possible to the CS */
		g_global->teamStartPos.s.cs = address.s.cs + (address.s.ip >> 4);
		g_global->teamStartPos.s.ip = address.s.ip & 0x000F;
	}

	if (g_global->teamStartPos.csip == 0x0) return;

	memset(Team_Get_ByIndex(0), 0, sizeof(Team) * TEAM_INDEX_MAX);
}

/**
 * Recount all Teams, ignoring the cache array.
 */
void Team_Recount()
{
	uint16 index;

	g_global->teamCount = 0;

	for (index = 0; index < TEAM_INDEX_MAX; index++) {
		Team *t = Team_Get_ByIndex(index);
		if (!t->flags.s.used) continue;

		g_global->teamArray[g_global->teamCount] = g_global->teamStartPos;
		g_global->teamArray[g_global->teamCount].s.ip += index * sizeof(Team);
		g_global->teamCount++;
	}
}

/**
 * Allocate a Team.
 *
 * @param index The index to use, or TEAM_INDEX_INVALID to find an unused index.
 * @return The Team allocated, or NULL on failure.
 */
Team *Team_Allocate(uint16 index)
{
	Team *t = NULL;

	if (g_global->teamStartPos.csip == 0x0) return NULL;

	if (index == TEAM_INDEX_INVALID) {
		/* Find the first unused index */
		for (index = 0; index < TEAM_INDEX_MAX; index++) {
			t = Team_Get_ByIndex(index);
			if (!t->flags.s.used) break;
		}
		if (index == TEAM_INDEX_MAX) return NULL;
	} else {
		t = Team_Get_ByIndex(index);
		if (t->flags.s.used) return NULL;
	}
	assert(t != NULL);

	/* Initialize the Team */
	memset(t, 0, sizeof(Team));
	t->index        = index;
	t->flags.s.used = true;

	g_global->teamArray[g_global->teamCount] = g_global->teamStartPos;
	g_global->teamArray[g_global->teamCount].s.ip += index * sizeof(Team);
	g_global->teamCount++;

	return t;
}

/**
 * Free a Team.
 *
 * @param address The address of the Team to free.
 */
void Team_Free(Team *t)
{
	csip32 tcsip;
	int i;

	/* XXX -- Temporary, to keep all the emu_calls workable for now */
	tcsip = g_global->teamStartPos;
	tcsip.s.ip += t->index * sizeof(Team);

	t->flags.all = 0x0000;

	/* Walk the array to find the Team we are removing */
	for (i = 0; i < g_global->teamCount; i++) {
		if (g_global->teamArray[i].csip != tcsip.csip) continue;
		break;
	}
	assert(i < g_global->teamCount); /* We should always find an entry */

	g_global->teamCount--;

	/* If needed, close the gap */
	if (i == g_global->teamCount) return;
	memmove(&g_global->teamArray[i], &g_global->teamArray[i + 1], (g_global->teamCount - i) * sizeof(g_global->teamArray[0]));
}
