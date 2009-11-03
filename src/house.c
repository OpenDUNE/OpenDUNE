/* $Id$ */

#include <stdio.h>
#include <strings.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "house.h"

HouseInfo *g_houseInfo = NULL;

/**
 * Initialize the house system.
 *
 * @init System_Init_House
 */
void System_Init_House()
{
	g_houseInfo = (HouseInfo *)&emu_get_memory8(0x353F, 0x0, 0x37F8);
}

/**
 * Convert the name of a house to the type value of that house, or
 *  HOUSE_INVALID if not found.
 *
 * @name House_StringToType
 * @implements 1381:0051:0010:81BB
 * @implements 1381:0061:001C:0B13
 * @implements 1381:007D:000B:E2C7
 * @implements 1381:0086:0002:C5BA
 * @implements 1381:0088:000B:F9D9
 * @implements 1381:0089:000A:39D1
 * @implements 1381:008E:0005:5395
 * @implements 1381:0093:0003:2E57
 */
uint8 House_StringToType(const char *name)
{
	uint8 index;
	if (name == NULL) return HOUSE_INVALID;

	for (index = 0; index < 6; index++) {
		const char *houseName = (const char *)emu_get_memorycsip(g_houseInfo[index].name);
		if (strcasecmp(houseName, name) == 0) return index;
	}

	return HOUSE_INVALID;
}
