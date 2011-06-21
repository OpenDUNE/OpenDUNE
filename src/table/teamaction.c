/* $Id$ */

/** @file src/table/teamaction.c TeamAction file table. */

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
