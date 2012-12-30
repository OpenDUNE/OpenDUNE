/** @file src/tools.c Various routines. */

#include <stdio.h>
#include <stdlib.h>
#include "types.h"

#include "tools.h"

#include "config.h"
#include "pool/structure.h"
#include "pool/unit.h"
#include "structure.h"
#include "tile.h"
#include "unit.h"


static uint8 s_randomSeed[4];
static uint32 s_randomLCG;

uint16 Tools_AdjustToGameSpeed(uint16 normal, uint16 minimum, uint16 maximum, bool inverseSpeed)
{
	uint16 gameSpeed = g_gameConfig.gameSpeed;

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
			if (index >= UNIT_INDEX_MAX || !Unit_Get_ByIndex(index)->o.flags.s.allocated) return 0;
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
			return Unit_Get_ByIndex(index)->o.flags.s.used && Unit_Get_ByIndex(index)->o.flags.s.allocated;

		case IT_STRUCTURE:
			if (index >= STRUCTURE_INDEX_MAX_HARD) return false;
			return Structure_Get_ByIndex(index)->o.flags.s.used;

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
		case IT_UNIT:      return (index < UNIT_INDEX_MAX) ? Tile_PackTile(Unit_Get_ByIndex(index)->o.position) : 0;
		case IT_STRUCTURE: return (index < STRUCTURE_INDEX_MAX_HARD) ? Tile_PackTile(Structure_Get_ByIndex(index)->o.position) : 0;
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
		case IT_UNIT: return (index < UNIT_INDEX_MAX) ? Unit_Get_ByIndex(index)->o.position : tile;
		case IT_STRUCTURE: {
			const StructureInfo *si;
			Structure *s;

			if (index >= STRUCTURE_INDEX_MAX_HARD) return tile;

			s = Structure_Get_ByIndex(index);
			si = &g_table_structureInfo[s->o.type];

			return Tile_AddTileDiff(s->o.position, g_table_structure_layoutTileDiff[si->layout]);
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

/**
 * Gets the Object corresponding to the given encoded index.
 *
 * @param id The encoded index to get the Object of.
 * @return The Object.
 */
Object *Tools_Index_GetObject(uint16 encoded)
{
	uint16 index;

	switch (Tools_Index_GetType(encoded)) {
		case IT_UNIT:
			index = Tools_Index_Decode(encoded);
			return (index < UNIT_INDEX_MAX) ? &Unit_Get_ByIndex(index)->o : NULL;

		case IT_STRUCTURE:
			index = Tools_Index_Decode(encoded);
			return (index < STRUCTURE_INDEX_MAX_HARD) ? &Structure_Get_ByIndex(index)->o : NULL;

		default: return NULL;
	}
}

/**
 * Get a random value between 0 and 255.
 *
 * @return The random value.
 */
uint8 Tools_Random_256(void)
{
	uint16 val16;
	uint8 val8;

	val16 = (s_randomSeed[1] << 8) | s_randomSeed[2];
	val8 = ((val16 ^ 0x8000) >> 15) & 1;
	val16 = (val16 << 1) | ((s_randomSeed[0] >> 1) & 1);
	val8 = (s_randomSeed[0] >> 2) - s_randomSeed[0] - val8;
	s_randomSeed[0] = (val8 << 7) | (s_randomSeed[0] >> 1);
	s_randomSeed[1] = val16 >> 8;
	s_randomSeed[2] = val16 & 0xFF;

	return s_randomSeed[0] ^ s_randomSeed[1];
}

/**
 * Set the seed for the Tools_Random_256().
 * @param seed The seed to set the randomizer to.
 */
void Tools_Random_Seed(uint32 seed)
{
	s_randomSeed[0] = (seed >>  0) & 0xFF;
	s_randomSeed[1] = (seed >>  8) & 0xFF;
	s_randomSeed[2] = (seed >> 16) & 0xFF;
	s_randomSeed[3] = (seed >> 24) & 0xFF;
}

/**
 * Set the seed for the LCG randomizer.
 */
void Tools_RandomLCG_Seed(uint32 seed)
{
	s_randomLCG = seed;
}

/**
 * Get a random value from the LCG.
 */
static uint16 Tools_RandomLCG(void)
{
	/* Borland C/C++ 'a' and 'b' value, bits 30..16, as used by Dune2 */
	s_randomLCG = 0x015A4E35 * s_randomLCG + 1;
	return (s_randomLCG >> 16) & 0x7FFF;
}

/**
 * Get a random value between the given values.
 *
 * @param min The minimum value.
 * @param max The maximum value.
 * @return The random value.
 */
uint16 Tools_RandomLCG_Range(uint16 min, uint16 max)
{
	int32 value;
	uint16 ret;

	if (min > max) {
		uint16 temp = min;
		min = max;
		max = temp;
	}

	do {
		value = Tools_RandomLCG();
		value *= max - min + 1;
		value /= 0x8000;
		value += min;

		ret = value & 0xFFFF;
	} while (ret > max);

	return ret;
}

/**
 * Test a bit in a bit array.
 * @param array Bit array.
 * @param index Index in the array.
 * @return value of the bit.
 */
bool BitArray_Test(uint8 *array, uint16 index)
{
	return (array[index >> 3] & (1 << (index & 7))) != 0;
}

/**
 * Set a bit in a bit array.
 * @param array Bit array.
 * @param index Index in the array.
 */
void BitArray_Set(uint8 *array, uint16 index)
{
	array[index >> 3] |= (1 << (index & 7));
}

/**
 * Clear a bit in a bit array.
 * @param array Bit array.
 * @param index Index in the array.
 */
void BitArray_Clear(uint8 *array, uint16 index)
{
	array[index >> 3] &= ~(1 << (index & 7));
}
