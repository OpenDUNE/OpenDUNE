/* $Id$ */

#include <stdio.h>
#include <strings.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "structure.h"

StructureInfo *g_structureInfo = NULL;

/**
 * Initialize the structure system.
 *
 * @init System_Init_Structure
 */
void System_Init_Structure()
{
	g_structureInfo = (StructureInfo *)&emu_get_memory8(0x2C94, 0x0, 0x0A);
}

/**
 * Convert the name of a structure to the type value of that structure, or
 *  STRUCTURE_INVALID if not found.
 *
 * @name Structure_StringToType
 * @implements B530:0000:0010:8273
 * @implements B530:0010:0023:BD3C
 * @implements B530:0033:000B:E2C7
 * @implements B530:003C:0002:C5BA
 * @implements B530:003E:000B:90D9
 * @implements B530:003F:000A:50D1
 * @implements B530:0044:0005:5395
 * @implements B530:0049:0003:2E57
 */
uint8 Structure_StringToType(const char *name)
{
	uint8 type;
	if (name == NULL) return STRUCTURE_INVALID;

	for (type = 0; type < STRUCTURE_MAX; type++) {
		const char *structureName = (const char *)emu_get_memorycsip(g_structureInfo[type].name);
		if (strcasecmp(structureName, name) == 0) return type;
	}

	return STRUCTURE_INVALID;
}
