/* $Id$ */

/** @file src/team.c %Team routines. */

#include <stdio.h>
#include "types.h"
#include "global.h"
#include "os/strings.h"

#include "team.h"

#include "house.h"
#include "pool/pool.h"
#include "pool/team.h"
#include "pool/house.h"
#include "tools.h"

/**
 * Loop over all teams, performing various of tasks.
 */
void GameLoop_Team()
{
	PoolFindStruct find;
	bool tick = false;

	if (g_global->variable_6164 <= g_global->tickGlobal) {
		tick = true;
		g_global->variable_6164 = g_global->tickGlobal + (Tools_Random_256() & 7) + 5;
	}

	if (!tick) return;

	find.houseID = HOUSE_INVALID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	while (true) {
		Team *t;
		House *h;

		t = Team_Find(&find);
		if (t == NULL) break;

		h = House_Get_ByIndex(t->houseID);

		g_scriptCurrentTeam = t;

		if (!h->flags.s.variable_0008) continue;

		if (t->script.delay != 0) {
			t->script.delay--;
			continue;
		}

		if (!Script_IsLoaded(&t->script)) continue;


		if (g_global->debugGame) {
			g_global->variable_37A4 = 0;
			g_global->variable_37A2++;

			if (t->script.stackPointer <= 15 && 15 - t->script.stackPointer > g_global->variable_37A8) {
				g_global->variable_37A8 = 15 - t->script.stackPointer;
			}
		}

		if (!Script_Run(&t->script)) {
			/* ENHANCEMENT -- Dune2 aborts all other teams if one gives a script error. This doesn't seem correct */
			if (g_dune2_enhanced) continue;
			break;
		}
	}
}

/**
 * Create a new Team.
 *
 * @param houseID The House of the new Team.
 * @param teamActionType The teamActionType of the new Team.
 * @param movementType The movementType of the new Team.
 * @param unknown An unknown parameter.
 * @param maxMembers The maximum amount of members in the new Team.
 * @return The new created Team, or NULL if something failed.
 */
Team *Team_Create(uint8 houseID, uint8 teamActionType, uint8 movementType, uint16 unknown, uint16 maxMembers)
{
	Team *t;

	t = Team_Allocate(0xFFFF);

	if (t == NULL) return NULL;
	t->flags.s.used = true;
	t->houseID     = houseID;
	t->variable_0C = teamActionType;
	t->variable_0E = teamActionType;
	t->movementType = movementType;
	t->variable_06 = unknown;
	t->maxMembers  = maxMembers;

	Script_Reset(&t->script, &g_global->scriptTeam);
	Script_Load(&t->script, teamActionType);

	t->script.delay = 0;

	return t;
}

/**
 * Convert the name of a team action to the type value of that team action, or
 *  TEAM_ACTION_INVALID if not found.
 */
uint8 Team_ActionStringToType(const char *name)
{
	uint8 type;
	if (name == NULL) return TEAM_ACTION_INVALID;

	for (type = 0; type < TEAM_ACTION_MAX; type++) {
		if (strcasecmp(g_table_teamActionName[type], name) == 0) return type;
	}

	return TEAM_ACTION_INVALID;
}
