/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "house.h"
#include "unit.h"

UnitInfo *g_unitInfo = NULL;

/**
 * Initialize the unit system.
 *
 * @init system_Init_Unit
 */
void System_Init_Unit()
{
	g_unitInfo = (UnitInfo *)&emu_get_memory8(0x2D07, 0x0, 0x0);
}

/**
 * Get the HouseID of a unit. This is not always u->houseID, as a unit can be
 *  deviated by the Ordos.
 *
 * @param u Unit to get the HouseID of.
 * @return The HouseID of the unit, which might be deviated.
 */
uint8 Unit_GetHouseID(Unit *u)
{
	if (u->deviated != 0) return HOUSE_ORDOS;
	return u->houseID;
}
