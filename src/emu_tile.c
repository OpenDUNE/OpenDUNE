/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "tile.h"

/**
 * Emulator wrapper around Tile_IsValid().
 *
 * @name emu_Tile_IsValid
 * @implements 0F3F:000D:0019:5076 ()
 */
void emu_Tile_IsValid()
{
	tile32 tile;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	tile = emu_get_tile32(emu_ss, emu_sp, 0x0);

	emu_ax = Tile_IsValid(tile) ? 1 : 0;
}

/**
 * Emulator wrapper around Tile_GetX() and Tile_GetY().
 *
 * @name emu_Tile_GetXY
 * @implements 0F3F:002C:000B:51FA ()
 */
void emu_Tile_GetXY()
{
	tile32 tile;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	tile = emu_get_tile32(emu_ss, emu_sp, 0x0);

	emu_ax = Tile_GetX(tile);
	emu_dx = Tile_GetY(tile);
}

/**
 * Emulator wrapper around Tile_GetPosX().
 *
 * @name emu_Tile_GetPosX
 * @implements 0F3F:0046:000C:9E1E ()
 */
void emu_Tile_GetPosX()
{
	tile32 tile;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	tile = emu_get_tile32(emu_ss, emu_sp, 0x0);

	emu_ax = Tile_GetPosX(tile);
}

/**
 * Emulator wrapper around Tile_GetPosY().
 *
 * @name emu_Tile_GetPosY
 * @implements 0F3F:0052:000C:9E02 ()
 */
void emu_Tile_GetPosY()
{
	tile32 tile;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	tile = emu_get_tile32(emu_ss, emu_sp, 0x0);

	emu_ax = Tile_GetPosY(tile);
}

/**
 * Emulator wrapper around Tile_GetPosX() and Tile_GetPosY().
 *
 * @name emu_Tile_GetSpecialXY
 * @implements 0F3F:0037:000F:E3D8 ()
 */
void emu_Tile_GetSpecialXY()
{
	tile32 tile;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	tile = emu_get_tile32(emu_ss, emu_sp, 0x0);

	emu_ax = Tile_GetSpecialXY(tile) & 0xFFFF;
	emu_dx = Tile_GetSpecialXY(tile) >> 16;
}

/**
 * Emulator wrapper around Tile_GetX().
 *
 * @name emu_Tile_GetX
 * @implements 0F3F:0076:0008:A51E ()
 */
void emu_Tile_GetX()
{
	tile32 tile;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	tile = emu_get_tile32(emu_ss, emu_sp, 0x0);

	emu_ax = Tile_GetX(tile);
}

/**
 * Emulator wrapper around Tile_GetY().
 *
 * @name emu_Tile_GetY
 * @implements 0F3F:007E:0008:A4DE ()
 */
void emu_Tile_GetY()
{
	tile32 tile;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	tile = emu_get_tile32(emu_ss, emu_sp, 0x0);

	emu_ax = Tile_GetY(tile);
}

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
 * Emulator wrapper around Tile_Unpack().
 *
 * @name emu_Tile_Unpack
 * @implements 0F3F:009D:0017:8464 ()
 */
void emu_Tile_Unpack()
{
	tile32 tile;
	uint16 packed;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	packed = emu_get_memory16(emu_ss, emu_sp, 0x0);

	tile = Tile_UnpackTile(packed);

	emu_ax = Tile_GetX(tile);
	emu_dx = Tile_GetY(tile);
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
 * Emulator wrapper around Tile_GetDistance().
 *
 * @name emu_Tile_GetDistance
 * @implements 0F3F:00B4:002A:89B2 ()
 */
void emu_Tile_GetDistance()
{
	tile32 tile_from;
	tile32 tile_to;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	tile_from = emu_get_tile32(emu_ss, emu_sp, 0x0);
	tile_to   = emu_get_tile32(emu_ss, emu_sp, 0x4);

	emu_ax = Tile_GetDistance(tile_from, tile_to);
}

/**
 * Emulator wrapper around Tile_AddTileDiff().
 *
 * @name emu_Tile_AddTileDiff
 * @implements 0F3F:00F3:0011:5E67 ()
 */
void emu_Tile_AddTileDiff()
{
	tile32 tile_from;
	tile32 tile_to;
	tile32 tile_result;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	tile_from = emu_get_tile32(emu_ss, emu_sp, 0x0);
	tile_to   = emu_get_tile32(emu_ss, emu_sp, 0x4);

	tile_result = Tile_AddTileDiff(tile_from, tile_to);

	emu_ax = Tile_GetX(tile_result);
	emu_dx = Tile_GetY(tile_result);
}


/**
 * Emulator wrapper around Tile_Center().
 *
 * @name emu_Tile_Center
 * @implements 0F3F:0275:0019:64C3 ()
 */
void emu_Tile_Center()
{
	tile32 tile;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	tile = emu_get_tile32(emu_ss, emu_sp, 0x0);

	Tile_Center(&tile);

	emu_ax = Tile_GetX(tile);
	emu_dx = Tile_GetY(tile);
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

/**
 * Emulator wrapper around Tile_GetDistanceRoundedUp().
 *
 * @name emu_Tile_GetDistanceRoundedUp
 * @implements 0F3F:0104:0013:C3B8 ()
 */
void emu_Tile_GetDistanceRoundedUp()
{
	tile32 tile_from;
	tile32 tile_to;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	tile_from = emu_get_tile32(emu_ss, emu_sp, 0x0);
	tile_to   = emu_get_tile32(emu_ss, emu_sp, 0x4);

	emu_ax = Tile_GetDistanceRoundedUp(tile_from, tile_to);
}
