/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "building.h"

BuildingInfo *g_buildingInfo = NULL;

/**
 * Initialize the building system.
 *
 * @init System_Init_Building
 */
void System_Init_Building()
{
	g_buildingInfo = (BuildingInfo *)&emu_get_memory8(0x2C94, 0x0, 0x0A);
}
