#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "map.h"

uint16 *g_map = NULL;

/**
 * Initialize the map.
 *
 * @init System_Init_Map
 */
void System_Init_Map()
{
	g_map = (uint16 *)&emu_get_memory8(0x2E9C, 0x323F, 0x0);
}

Tile *Map_GetTileByPosition(uint16 position)
{
	return (Tile *)&emu_get_memory8(g_global->mapPointer.s.cs, g_global->mapPointer.s.ip, position * sizeof(Tile));
}
