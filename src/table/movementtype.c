/** @file src/table/movementtype.c MovementType file table. */

#include <stdio.h>
#include "types.h"

#include "../unit.h"

const char *g_table_movementTypeName[MOVEMENT_MAX] = {
	"Foot",
	"Tracked",
	"Harvester",
	"Wheeled",
	"Winged",
	"Slither"
};
