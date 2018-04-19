/** @file src/saveload/map.c Load/save routines for Map. */

#include <stdio.h>
#include "types.h"

#include "../file.h"
#include "../map.h"
#include "../sprites.h"

/**
 * Load a Tile structure to a file (Little endian)
 *
 * @param t The tile to read
 * @param fp The stream
 * @return True if the tile was loaded successfully
 */
static bool fread_tile(Tile *t, FILE *fp)
{
	uint8 buffer[4];
	if (fread(buffer, 1, 4, fp) != 4) return false;
	t->groundTileID = buffer[0] | ((buffer[1] & 1) << 8);
	t->overlayTileID = buffer[1] >> 1;
	t->houseID = buffer[2] & 0x07;
	t->isUnveiled = (buffer[2] & 0x08) ? true : false;
	t->hasUnit =  (buffer[2] & 0x10) ? true : false;
	t->hasStructure = (buffer[2] & 0x20) ? true : false;
	t->hasAnimation = (buffer[2] & 0x40) ? true : false;
	t->hasExplosion = (buffer[2] & 0x80) ? true : false;
	t->index = buffer[3];
	return true;
}

/**
 * Save a Tile structure to a file (Little endian)
 *
 * @param t The tile to save
 * @param fp The stream
 * @return True if the tile was saved successfully
 */
static bool fwrite_tile(const Tile *t, FILE *fp)
{
	uint8 buffer[4];
	buffer[0] = t->groundTileID & 0xff;
	buffer[1] = (t->groundTileID >> 8) | (t->overlayTileID << 1);
	buffer[2] = t->houseID | (t->isUnveiled << 3) | (t->hasUnit << 4) | (t->hasStructure << 5) | (t->hasAnimation << 6) | (t->hasExplosion << 7);
	buffer[3] = t->index;
	if (fwrite(buffer, 1, 4, fp) != 4) return false;
	return true;
}

/**
 * Load all Tiles from a file.
 * @param fp The file to load from.
 * @param length The length of the data chunk.
 * @return True if and only if all bytes were read successful.
 */
bool Map_Load(FILE *fp, uint32 length)
{
	uint16 i;

	for (i = 0; i < 0x1000; i++) {
		Tile *t = &g_map[i];

		t->isUnveiled = false;
		t->overlayTileID = g_veiledTileID;
	}

	while (length >= sizeof(uint16) + sizeof(Tile)) {
		Tile *t;

		length -= sizeof(uint16) + sizeof(Tile);

		if (!fread_le_uint16(&i, fp)) return false;
		if (i >= 0x1000) return false;

		t = &g_map[i];
		if (!fread_tile(t, fp)) return false;

		if (g_mapTileID[i] != t->groundTileID) {
			g_mapTileID[i] |= 0x8000;
		}
	}
	if (length != 0) return false;

	return true;
}

/**
 * Save all Tiles to a file.
 * @param fp The file to save to.
 * @return True if and only if all bytes were written successful.
 */
bool Map_Save(FILE *fp)
{
	uint16 i;

	for (i = 0; i < 0x1000; i++) {
		Tile *tile = &g_map[i];

		/* If there is nothing on the tile, not unveiled, and it is equal to the mapseed generated tile, don't store it */
		if (!tile->isUnveiled && !tile->hasStructure && !tile->hasUnit && !tile->hasAnimation && !tile->hasExplosion && (g_mapTileID[i] & 0x8000) == 0 && g_mapTileID[i] == tile->groundTileID) continue;

		/* Store the index, then the tile itself */
		if (!fwrite_le_uint16(i, fp)) return false;
		if (!fwrite_tile(tile, fp)) return false;
	}

	return true;
}
