/* $Id$ */

#include <stdio.h>
#include "os/strings.h"
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/structure.h"
#include "pool/unit.h"
#include "structure.h"
#include "tile.h"
#include "tools.h"
#include "unit.h"

uint16 Tools_AdjustToGameSpeed(uint16 normal, uint16 minimum, uint16 maximum, bool inverseSpeed)
{
	uint16 gameSpeed = g_global->gameSpeed;

	if (gameSpeed == 2) return normal;
	if (gameSpeed > 4) return normal;

	if (maximum > normal * 2) maximum = normal * 2;
	if (minimum < normal / 2) minimum = normal / 2;

	if (inverseSpeed) gameSpeed = 4 - gameSpeed;

	switch (gameSpeed) {
		case 0: return minimum;
		case 1: return normal - (normal - minimum) / 2;
		case 3: return normal + (maximum - normal) / 2;
		case 4: return maximum;
	}

	/* Never reached, but avoids compiler errors */
	return normal;
}

/**
 * Get the type of the given encoded index.
 *
 * @param id The encoded index to get the type of.
 * @return The type
 */
IndexType Tools_Index_GetType(uint16 encoded)
{
	switch(encoded & 0xC000) {
		case 0x4000: return IT_UNIT;
		case 0x8000: return IT_STRUCTURE;
		case 0xC000: return IT_TILE;
		default:     return IT_NONE;
	}
}

/**
 * Decode the given encoded index.
 *
 * @param id The encoded index to decode.
 * @return The decoded index.
 */
uint16 Tools_Index_Decode(uint16 encoded)
{
	if (Tools_Index_GetType(encoded) == IT_TILE) return Tile_PackXY((encoded >> 1) & 0x3F, (encoded >> 8) & 0x3F);
	return encoded & 0x3FFF;
}

/**
 * Encode the given index.
 *
 * @param id The index to encode.
 * @param type The type of the encoded Index.
 * @return The encoded Index.
 */
uint16 Tools_Index_Encode(uint16 index, IndexType type)
{
	switch (type) {
		case IT_TILE: {
			uint16 ret;

			ret  = ((Tile_GetPackedX(index) << 1) + 1) << 0;
			ret |= ((Tile_GetPackedY(index) << 1) + 1) << 7;
			return ret | 0xC000;
		}
		case IT_UNIT: {
			if (index >= UNIT_INDEX_MAX || (Unit_Get_ByIndex(index)->flags & 0x0002) == 0) return 0;
			return index | 0x4000;
		}
		case IT_STRUCTURE:  return index | 0x8000;
		default: return 0;
	}
}

/**
 * Check whether an encoded index is valid.
 *
 * @param id The encoded index to check for validity.
 * @return True if valid, false if not.
 */
bool Tools_Index_IsValid(uint16 encoded)
{
	uint16 index;

	if (encoded == 0) return false;

	index = Tools_Index_Decode(encoded);

	switch (Tools_Index_GetType(encoded)) {
		case IT_UNIT:
			if (index >= UNIT_INDEX_MAX) return false;
			return (Unit_Get_ByIndex(index)->flags & 0x0003) == 0x0003;

		case IT_STRUCTURE:
			if (index >= STRUCTURE_INDEX_MAX_HARD) return false;
			return (Structure_Get_ByIndex(index)->flags & 0x0001) != 0;

		case IT_TILE : return true;

		default: return false;
	}
}

/**
 * Gets the packed tile corresponding to the given encoded index.
 *
 * @param id The encoded index to get the packed tile of.
 * @return The packed tile.
 */
uint16 Tools_Index_GetPackedTile(uint16 encoded)
{
	uint16 index;

	index = Tools_Index_Decode(encoded);

	switch (Tools_Index_GetType(encoded)) {
		case IT_TILE:      return index;
		case IT_UNIT:      return (index < UNIT_INDEX_MAX) ? Tile_PackTile(Unit_Get_ByIndex(index)->position) : 0;
		case IT_STRUCTURE: return (index < STRUCTURE_INDEX_MAX_HARD) ? Tile_PackTile(Structure_Get_ByIndex(index)->position) : 0;
		default:           return 0;
	}
}

/**
 * Gets the tile corresponding to the given encoded index.
 *
 * @param id The encoded index to get the tile of.
 * @return The tile.
 */
tile32 Tools_Index_GetTile(uint16 encoded)
{
	uint16 index;
	tile32 tile;

	index = Tools_Index_Decode(encoded);
	tile.tile = 0;

	switch (Tools_Index_GetType(encoded)) {
		case IT_TILE: return Tile_UnpackTile(index);
		case IT_UNIT: return (index < UNIT_INDEX_MAX) ? Unit_Get_ByIndex(index)->position : tile;
		case IT_STRUCTURE: {
			Structure *s;
			StructureInfo *si;

			if (index >= STRUCTURE_INDEX_MAX_HARD) return tile;

			s = Structure_Get_ByIndex(index);
			si = &g_structureInfo[s->type];

			return Tile_AddTileDiff(s->position, g_global->layoutTileDiff[si->layout]);
		}
		default: return tile;
	}
}

/**
 * Gets the Unit corresponding to the given encoded index.
 *
 * @param id The encoded index to get the Unit of.
 * @return The Unit.
 */
Unit *Tools_Index_GetUnit(uint16 encoded)
{
	uint16 index;

	if (Tools_Index_GetType(encoded) != IT_UNIT) return NULL;

	index = Tools_Index_Decode(encoded);
	return (index < UNIT_INDEX_MAX) ? Unit_Get_ByIndex(index) : NULL;
}

/**
 * Gets the Structure corresponding to the given encoded index.
 *
 * @param id The encoded index to get the Structure of.
 * @return The Structure.
 */
Structure *Tools_Index_GetStructure(uint16 encoded)
{
	uint16 index;

	if (Tools_Index_GetType(encoded) != IT_STRUCTURE) return NULL;

	index = Tools_Index_Decode(encoded);
	return (index < STRUCTURE_INDEX_MAX_HARD) ? Structure_Get_ByIndex(index) : NULL;
}
