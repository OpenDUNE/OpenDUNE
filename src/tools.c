/* $Id$ */

#include <stdio.h>
#include "os/strings.h"
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "pool/unit.h"
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
 * Get the type of the given encoded Index.
 *
 * @param id The encoded Index to get the type of.
 * @return The type
 */
IndexType Tools_Index_GetType(uint16 id)
{
	switch(id & 0xC000) {
		case 0x4000: return IT_UNIT;
		case 0x8000: return IT_STRUCTURE;
		case 0xC000: return IT_TILE;
		default:     return IT_NONE;
	}
}

/**
 * Decode the given encoded Index.
 *
 * @param id The Index to decode.
 * @return The decoded Index.
 */
uint16 Tools_Index_Decode(uint16 id)
{
	if (Tools_Index_GetType(id) == IT_TILE) return Tile_PackXY((id >> 1) & 0x3F, (id >> 8) & 0x3F);
	return id & 0x3FFF;
}

/**
 * Encode the given Index.
 *
 * @param id The Index to encode.
 * @param type The type of the encoded Index.
 * @return The encoded Index.
 */
uint16 Tools_Index_Encode(uint16 id, IndexType type)
{
	switch (type) {
		case IT_TILE: {
			uint16 ret;

			ret  = ((Tile_GetPackedX(id) << 1) + 1) << 0;
			ret |= ((Tile_GetPackedY(id) << 1) + 1) << 7;
			return ret | 0xC000;
		}
		case IT_UNIT: {
			if ((Unit_Get_ByIndex(id)->flags & 0x0002) == 0) return 0;
			return id | 0x4000;
		}
		case IT_STRUCTURE:  return id | 0x8000;
		default: return 0;
	}
}
