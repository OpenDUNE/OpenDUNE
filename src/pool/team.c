/* $Id$ */

/** @file src/pool/team.c %Team pool routines. */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"

#include "team.h"

#include "../house.h"
#include "pool.h"
#include "../team.h"

static struct Team g_teamArray[TEAM_INDEX_MAX];
static struct Team *g_teamFindArray[TEAM_INDEX_MAX];
static uint16 g_teamFindCount;

/**
 * Get a Team from the pool with the indicated index.
 *
 * @param index The index of the Team to get.
 * @return The Team.
 */
Team *Team_Get_ByIndex(uint16 index)
{
	assert(index < TEAM_INDEX_MAX);
	return &g_teamArray[index];
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
	if (find->index >= g_teamFindCount && find->index != 0xFFFF) return NULL;
	find->index++; /* First, we always go to the next index */

	for (; find->index < g_teamFindCount; find->index++) {
		Team *t = g_teamFindArray[find->index];
		if (t == NULL) continue;

		if (find->houseID != HOUSE_INVALID && find->houseID != t->houseID) continue;

		return t;
	}

	return NULL;
}

/**
 * Initialize the Team array.
 *
 * @param address If non-zero, the new location of the Team array.
 */
void Team_Init()
{
	memset(g_teamArray, 0, sizeof(g_teamArray));
	memset(g_teamFindArray, 0, sizeof(g_teamFindArray));
	g_teamFindCount = 0;
}

/**
 * Recount all Teams, ignoring the cache array.
 */
void Team_Recount()
{
	uint16 index;

	g_teamFindCount = 0;

	for (index = 0; index < TEAM_INDEX_MAX; index++) {
		Team *t = Team_Get_ByIndex(index);
		if (!t->flags.used) continue;

		g_teamFindArray[g_teamFindCount++] = t;
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

	if (index == TEAM_INDEX_INVALID) {
		/* Find the first unused index */
		for (index = 0; index < TEAM_INDEX_MAX; index++) {
			t = Team_Get_ByIndex(index);
			if (!t->flags.used) break;
		}
		if (index == TEAM_INDEX_MAX) return NULL;
	} else {
		t = Team_Get_ByIndex(index);
		if (t->flags.used) return NULL;
	}
	assert(t != NULL);

	/* Initialize the Team */
	memset(t, 0, sizeof(Team));
	t->index      = index;
	t->flags.used = true;

	g_teamFindArray[g_teamFindCount++] = t;

	return t;
}

/**
 * Free a Team.
 *
 * @param address The address of the Team to free.
 */
void Team_Free(Team *t)
{
	int i;

	memset(&t->flags, 0, sizeof(t->flags));

	/* Walk the array to find the Team we are removing */
	for (i = 0; i < g_teamFindCount; i++) {
		if (g_teamFindArray[i] != t) continue;
		break;
	}
	assert(i < g_teamFindCount); /* We should always find an entry */

	g_teamFindCount--;

	/* If needed, close the gap */
	if (i == g_teamFindCount) return;
	memmove(&g_teamFindArray[i], &g_teamFindArray[i + 1], (g_teamFindCount - i) * sizeof(g_teamFindArray[0]));
}
