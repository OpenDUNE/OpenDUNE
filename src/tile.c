/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "tile.h"
#include "map.h"
#include "tools.h"
#include "os/math.h"

extern void overlay(uint16 cs, uint8 force);

/**
 * Check whether a tile is valid.
 *
 * @param tile The tile32 to check for validity.
 * @return True if valid, false if not.
 */
bool Tile_IsValid(tile32 tile)
{
	return (tile.d.ux == 0x0 && tile.d.uy == 0x0);
}

/**
 * Return the X- and Y- position/offset of a tile, in some weird order.
 *
 * @param tile The tile32 to get the X- and Y-position/offset from.
 * @return The X-position, X-offset, Y-position, and Y-offset of a tile, in
 *  that order, 8bits per item.
 */
uint32 Tile_GetSpecialXY(tile32 tile)
{
	return (tile.d.px + (tile.d.ox << 8)) + ((tile.d.py + (tile.d.oy << 8)) << 16);
}

/**
 * Returns the X-position of the tile.
 *
 * @param tile The tile32 to get the X-position from.
 * @return The X-position of the tile.
 */
uint8 Tile_GetPosX(tile32 tile)
{
	return tile.d.px;
}

/**
 * Returns the Y-position of the tile.
 *
 * @param tile The tile32 to get the Y-position from.
 * @return The Y-position of the tile.
 */
uint8 Tile_GetPosY(tile32 tile)
{
	return tile.d.py;
}

/**
 * Returns the tile as an uint32 value.
 *
 * @param tile The tile32 to retrieve the data from.
 * @return The uint32 representation of the tile32.
 */
uint32 Tile_GetXY(tile32 tile)
{
	return tile.tile;
}

/**
 * Returns the X-position of the tile.
 *
 * @param tile The tile32 to get the X-position from.
 * @return The X-position of the tile.
 */
uint16 Tile_GetX(tile32 tile)
{
	return tile.s.x;
}

/**
 * Returns the Y-position of the tile.
 *
 * @param tile The tile32 to get the Y-position from.
 * @return The Y-position of the tile.
 */
uint16 Tile_GetY(tile32 tile)
{
	return tile.s.y;
}

/**
 * Packs a 32 bits tile struct into a 12 bits packed tile.
 *
 * @param tile The tile32 to get it's Y-position from.
 * @return The tile packed into 12 bits.
 */
uint16 Tile_PackTile(tile32 tile)
{
	return (tile.d.py << 6) | tile.d.px;
}

/**
 * Packs an x and y coordinate into a 12 bits packed tile.
 *
 * @param x The X-coordinate from.
 * @param x The Y-coordinate from.
 * @return The coordinates packed into 12 bits.
 */
uint16 Tile_PackXY(uint16 x, uint16 y)
{
	return (y << 6) | x;
}

/**
 * Unpacks a 12 bits packed tile to a 32 bits tile struct.
 *
 * @param packed The uint16 containing the 12 bits packed tile information.
 * @return The unpacked tile.
 */
tile32 Tile_UnpackTile(uint16 packed)
{
	tile32 tile;

	tile.tile = 0;
	tile.d.px = (packed >> 0) & 0x3F;
	tile.d.py = (packed >> 6) & 0x3F;
	tile.d.ox = 0x80;
	tile.d.oy = 0x80;

	return tile;
}

/**
 * Unpacks a 12 bits packed tile and retrieves the X-position.
 *
 * @param packed The uint16 containing the 12 bits packed tile.
 * @return The unpacked X-position.
 */
uint8 Tile_GetPackedX(uint16 packed)
{
	return (packed >> 0) & 0x3F;
}

/**
 * Unpacks a 12 bits packed tile and retrieves the Y-position.
 *
 * @param packed The uint16 containing the 12 bits packed tile.
 * @return The unpacked Y-position.
 */
uint8 Tile_GetPackedY(uint16 packed)
{
	return (packed >> 6) & 0x3F;
}

/**
 * Calculates the distance between the two given tiles.
 *
 * @param from The origin.
 * @param to The destination.
 * @return The longest distance between the X or Y coordinates, plus half the shortest.
 */
uint16 Tile_GetDistance(tile32 from, tile32 to)
{
	uint16 distance_x = abs(from.s.x - to.s.x);
	uint16 distance_y = abs(from.s.y - to.s.y);

	if (distance_x > distance_y) return distance_x + (distance_y / 2);
	return distance_y + (distance_x / 2);
}

/**
 * Adds two tiles together.
 *
 * @param from The origin.
 * @param diff The difference.
 * @return The new coordinates.
 */
tile32 Tile_AddTileDiff(tile32 from, tile32 diff)
{
	tile32 result;

	result.s.x = from.s.x + diff.s.x;
	result.s.y = from.s.y + diff.s.y;

	return result;
}

/**
 * Centers the offset of the tile.
 *
 * @param tile The tile to center.
 */
tile32 Tile_Center(tile32 tile)
{
	tile32 result;

	result = tile;
	result.d.ox = 0x80;
	result.d.oy = 0x80;

	return result;
}

/**
 * Calculates the distance between the two given packed tiles.
 *
 * @param packed_from The origin.
 * @param packed_to The destination.
 * @return The longest distance between the X or Y coordinates, plus half the shortest.
 */
uint16 Tile_GetDistancePacked(uint16 packed_from, uint16 packed_to)
{
	tile32 from = Tile_UnpackTile(packed_from);
	tile32 to = Tile_UnpackTile(packed_to);

	return Tile_GetDistance(from, to) >> 8;
}

/**
 * Calculates the rounded up distance between the two given packed tiles.
 *
 * @param from The origin.
 * @param to The destination.
 * @return The longest distance between the X or Y coordinates, plus half the shortest.
 */
uint16 Tile_GetDistanceRoundedUp(tile32 from, tile32 to)
{
	return (Tile_GetDistance(from, to) + 0x80) >> 8;
}

/**
 * Remove fog in the radius around the given tile.
 *
 * @param tile The tile to remove fog around.
 * @param radius The radius to remove fog around.
 */
void Tile_RemoveFogInRadius(tile32 tile, uint16 radius)
{
	uint16 packed;
	uint16 x, y;
	int16 i, j;

	packed = Tile_PackTile(tile);

	if (!Map_IsValidPosition(packed)) return;

	x = Tile_GetPackedX(packed);
	y = Tile_GetPackedY(packed);
	tile.tile = Tile_GetSpecialXY(tile);

	for (i = -radius; i <= radius; i++) {
		for (j = -radius; j <= radius; j++) {
			tile32 t;

			if ((x + i) < 0 || (x + i) >= 64) continue;
			if ((y + j) < 0 || (y + j) >= 64) continue;

			packed = Tile_PackXY(x + i, y + j);

			t.tile = Tile_GetSpecialXY(Tile_UnpackTile(packed));

			if (Tile_GetDistanceRoundedUp(tile, t) > radius) continue;

			Map_UnveilTile(packed, (uint8)g_global->playerHouseID);
		}
	}
}

/**
 * ??.
 *
 * @param packed_from The origin.
 * @param packed_to The destination.
 * @return A packed tile.
 */
uint16 Tile_B4CD_1C1A(uint16 packed_from, uint16 packed_to)
{
	int16 distance;
	uint8 loc02;
	uint8 i;

	if (packed_from == 0 || packed_to == 0) return 0;

	distance = Tile_GetDistancePacked(packed_from, packed_to);

	loc02 = Tile_GetDirection(packed_to, packed_from);

	if (distance <= 10) return 0;

	for (i = 0; i < 4; i++) {
		int16 locsi;
		tile32 position;
		uint16 packed;

		locsi = 29 + (Tools_Random_256() & 0x3F);

		if ((Tools_Random_256() & 1) != 0) locsi = -locsi;

		position = Tile_UnpackTile(packed_to);
		position = Tile_MoveByDirection(position, loc02 + locsi, min(distance, 20) << 8);
		packed = Tile_PackTile(position);

		if (Map_IsValidPosition(packed)) return packed;
	}

	return 0;
}

/**
 * Get to direction to follow to go from packed_from to packed_to.
 *
 * @param packed_from The origin.
 * @param packed_to The destination.
 * @return The direction.
 */
uint8 Tile_GetDirection(uint16 packed_from, uint16 packed_to)
{
	static uint8 returnValues[16] = {0x20, 0x40, 0x20, 0x00, 0xE0, 0xC0, 0xE0, 0x00, 0x60, 0x40, 0x60, 0x80, 0xA0, 0xC0, 0xA0, 0x80};

	int16 x1, y1, x2, y2;
	int16 dx, dy;
	uint16 index;

	x1 = Tile_GetPackedX(packed_from);
	y1 = Tile_GetPackedY(packed_from);
	x2 = Tile_GetPackedX(packed_to);
	y2 = Tile_GetPackedY(packed_to);

	index = 0;

	dy = y1 - y2;
	if (dy < 0) {
		index |= 0x8;
		dy = -dy;
	}

	dx = x2 - x1;
	if (dx < 0) {
		index |= 0x4;
		dx = -dx;
	}

	if (dx >= dy) {
		if (((dx + 1) / 2) > dy) index |= 0x1;
	} else {
		index |= 0x2;
		if (((dy + 1) / 2) > dx) index |= 0x1;
	}

	return returnValues[index];
}

tile32 Tile_MoveByDirection(tile32 tile, int16 orientation, uint16 distance)
{
	distance = min(distance, 0xFF);

	if (distance == 0) return tile;

	tile.s.x += (64 + g_global->variable_3C4C[orientation & 0xFF] * distance) / 128;
	tile.s.y += (64 - g_global->variable_3D4C[orientation & 0xFF] * distance) / 128;

	return tile;
}
