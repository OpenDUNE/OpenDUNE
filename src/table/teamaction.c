/* $Id$ */

/** @file src/table/teamaction.c Team file tables. */

#include <stdio.h>
#include "types.h"

#include "../team.h"

const char *g_table_teamActionName[TEAM_ACTION_MAX] = {
        "Normal",
        "Staging",
        "Flee",
        "Kamikaze",
        "Guard"
};
