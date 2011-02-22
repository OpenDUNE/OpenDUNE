/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "tile.h"

/**
 * Emulator wrapper around Tile_PackTile().
 *
 * @name emu_Tile_PackTile
 * @implements 0F3F:0086:0017:EA43 ()
 */
void emu_Tile_PackTile()
{
	tile32 tile;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	tile = emu_get_tile32(emu_ss, emu_sp, 0x0);

	emu_ax = Tile_PackTile(tile);
}

/**
 * Emulator wrapper around Tile_GetDistancePacked().
 *
 * @name emu_Tile_GetDistancePacked
 * @implements 0F3F:0360:0038:97C0 ()
 */
void emu_Tile_GetDistancePacked()
{
	uint16 packed_from;
	uint16 packed_to;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	packed_from = emu_get_memory16(emu_ss, emu_sp, 0x0);
	packed_to   = emu_get_memory16(emu_ss, emu_sp, 0x2);

	emu_ax = Tile_GetDistancePacked(packed_from, packed_to);
}
