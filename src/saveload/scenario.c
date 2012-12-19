/** @file src/saveload/scenario.c Load/save routines for Scenario. */

#include <stdio.h>
#include "types.h"

#include "saveload.h"
#include "../scenario.h"

static const SaveLoadDesc s_saveReinforcement[] = {
	SLD_ENTRY (Reinforcement, SLDT_UINT16, unitID),
	SLD_ENTRY (Reinforcement, SLDT_UINT16, locationID),
	SLD_ENTRY (Reinforcement, SLDT_UINT16, timeLeft),
	SLD_ENTRY (Reinforcement, SLDT_UINT16, timeBetween),
	SLD_ENTRY (Reinforcement, SLDT_UINT16, repeat),
	SLD_END
};

const SaveLoadDesc g_saveScenario[] = {
	SLD_ENTRY (Scenario, SLDT_UINT16, score),
	SLD_ENTRY (Scenario, SLDT_UINT16, winFlags),
	SLD_ENTRY (Scenario, SLDT_UINT16, loseFlags),
	SLD_ENTRY (Scenario, SLDT_UINT32, mapSeed),
	SLD_ENTRY (Scenario, SLDT_UINT16, mapScale),
	SLD_ENTRY (Scenario, SLDT_UINT16, timeOut),
	SLD_ARRAY (Scenario, SLDT_UINT8,  pictureBriefing, 14),
	SLD_ARRAY (Scenario, SLDT_UINT8,  pictureWin,      14),
	SLD_ARRAY (Scenario, SLDT_UINT8,  pictureLose,     14),
	SLD_ENTRY (Scenario, SLDT_UINT16, killedAllied),
	SLD_ENTRY (Scenario, SLDT_UINT16, killedEnemy),
	SLD_ENTRY (Scenario, SLDT_UINT16, destroyedAllied),
	SLD_ENTRY (Scenario, SLDT_UINT16, destroyedEnemy),
	SLD_ENTRY (Scenario, SLDT_UINT16, harvestedAllied),
	SLD_ENTRY (Scenario, SLDT_UINT16, harvestedEnemy),
	SLD_SLD2  (Scenario,              reinforcement, s_saveReinforcement, 16),
	SLD_END
};
