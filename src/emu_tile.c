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
 * Emulator wrapper around Tile_GetPackedX().
 *
 * @name emu_Tile_GetPackX
 * @implements 0F3F:0322:0011:5AAA ()
 */
void emu_Tile_GetPackX()
{
	uint16 packed;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	packed = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = Tile_GetPackedX(packed);
	emu_get_memory16(emu_ss, emu_sp, 0x0) = emu_ax;
}

/**
 * Emulator wrapper around Tile_GetPackedY().
 *
 * @name emu_Tile_GetPackY
 * @implements 0F3F:0335:0015:2275 ()
 */
void emu_Tile_GetPackY()
{
	uint16 packed;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	packed = emu_get_memory16(emu_ss, emu_sp, 0x0);

	emu_ax = Tile_GetPackedY(packed);
	emu_get_memory16(emu_ss, emu_sp, 0x0) = emu_ax;
}

/**
 * Emulator wrapper around Tile_PackXY().
 *
 * @name emu_Tile_PackXY
 * @implements 0F3F:034C:0012:18EA ()
 */
void emu_Tile_PackXY()
{
	uint16 x;
	uint16 y;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	x = emu_get_memory16(emu_ss, emu_sp, 0x0);
	y = emu_get_memory16(emu_ss, emu_sp, 0x2);

	emu_ax = Tile_PackXY(x, y);
	emu_get_memory16(emu_ss, emu_sp, 0x0) = emu_ax;
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
