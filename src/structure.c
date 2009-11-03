/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
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
