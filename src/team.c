/** @file src/team.c %Team routines. */

#include <stdio.h>
#include "types.h"
#include "os/strings.h"

#include "team.h"

#include "opendune.h"
#include "house.h"
#include "pool/pool.h"
#include "pool/team.h"
#include "pool/house.h"
#include "timer.h"
#include "tools.h"

static uint32 s_tickTeamGameLoop = 0; /*!< Indicates next time the GameLoop function is executed. */

/**
 * Loop over all teams, performing various of tasks.
 */
void GameLoop_Team(void)
{
	PoolFindStruct find;

	if (s_tickTeamGameLoop > g_timerGame) return;
	s_tickTeamGameLoop = g_timerGame + (Tools_Random_256() & 7) + 5;

	find.houseID = HOUSE_INVALID;
	find.index   = 0xFFFF;
	find.type    = 0xFFFF;

	g_scriptCurrentObject    = NULL;
	g_scriptCurrentUnit      = NULL;
	g_scriptCurrentStructure = NULL;

	while (true) {
		Team *t;
		House *h;

		t = Team_Find(&find);
		if (t == NULL) break;

		h = House_Get_ByIndex(t->houseID);

		g_scriptCurrentTeam = t;

		if (!h->flags.isAIActive) continue;

		if (t->script.delay != 0) {
			t->script.delay--;
			continue;
		}

		if (!Script_IsLoaded(&t->script)) continue;

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
 * @param minMembers The minimum amount of members in the new Team.
 * @param maxMembers The maximum amount of members in the new Team.
 * @return The new created Team, or NULL if something failed.
 */
Team *Team_Create(uint8 houseID, uint8 teamActionType, uint8 movementType, uint16 minMembers, uint16 maxMembers)
{
	Team *t;

	t = Team_Allocate(0xFFFF);

	if (t == NULL) return NULL;
	t->flags.used  = true;
	t->houseID     = houseID;
	t->action      = teamActionType;
	t->actionStart = teamActionType;
	t->movementType = movementType;
	t->minMembers  = minMembers;
	t->maxMembers  = maxMembers;

	Script_Reset(&t->script, g_scriptTeam);
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
