#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "map.h"

Tile *Map_GetTileByPosition(uint16 position)
{
	return (Tile *)&emu_get_memory8(g_global->mapPointer.s.cs, g_global->mapPointer.s.ip, position * sizeof(Tile));
}
