/** @file src/tile.h %Tile definitions. */

#ifndef TILE_H
#define TILE_H

/**
 * Check whether a tile is valid.
 *
 * @param tile The tile32 to check for validity.
 * @return True if valid, false if not.
 */
/*extern bool Tile_IsValid(tile32 tile);*/
/*#define Tile_IsValid(tile) (((tile).x & 0xc000) == 0 && ((tile).y & 0xc000) == 0)*/
#define Tile_IsValid(tile) ((((tile).x | (tile).y) & 0xc000) == 0)

/**
 * Returns the X-position of the tile.
 *
 * @param tile The tile32 to get the X-position from.
 * @return The X-position of the tile.
 */
/*extern uint16 Tile_GetX(tile32 tile);*/
#define Tile_GetX(tile) ((tile).x)

/**
 * Returns the Y-position of the tile.
 *
 * @param tile The tile32 to get the Y-position from.
 * @return The Y-position of the tile.
 */
/*extern uint16 Tile_GetY(tile32 tile);*/
#define Tile_GetY(tile) ((tile).y)

/**
 * Returns the tile as an uint32 value.
 *
 * @param tile The tile32 to retrieve the data from.
 * @return The uint32 representation of the tile32.
 */
/*extern uint32 Tile_GetXY(tile32 tile);*/
#define Tile_GetXY(tile) ((uint32)((tile).x) | ((uint32)((tile).y) << 16))

/**
 * Returns the X-position of the tile.
 *
 * @param tile The tile32 to get the X-position from.
 * @return The X-position of the tile.
 */
/*extern uint8 Tile_GetPosX(tile32 tile);*/
#define Tile_GetPosX(tile) (((tile).x >> 8) & 0x3f)

/**
 * Returns the Y-position of the tile.
 *
 * @param tile The tile32 to get the Y-position from.
 * @return The Y-position of the tile.
 */
/*extern uint8 Tile_GetPosY(tile32 tile);*/
#define Tile_GetPosY(tile) (((tile).y >> 8) & 0x3f)

/**
 * Make a tile32 from an X- and Y-position.
 *
 * @param x The X-position.
 * @param y The Y-position.
 * @return A tile32 at the top-left corner of the X- and Y-position.
 */
/*extern tile32 Tile_MakeXY(uint16 x, uint16 y);*/
#define Tile_MakeXY(tile, X, Y) \
	{ \
		(tile).x = (X) << 8; \
		(tile).y = (Y) << 8; \
	}

/**
 * Packs a 32 bits tile struct into a 12 bits packed tile.
 *
 * @param tile The tile32 to get it's Y-position from.
 * @return The tile packed into 12 bits.
 */
/*extern uint16 Tile_PackTile(tile32 tile);*/
#define Tile_PackTile(tile) ((Tile_GetPosY(tile) << 6) | Tile_GetPosX(tile))

/**
 * Packs an x and y coordinate into a 12 bits packed tile.
 *
 * @param x The X-coordinate from.
 * @param x The Y-coordinate from.
 * @return The coordinates packed into 12 bits.
 */
/*extern uint16 Tile_PackXY(uint16 x, uint16 y);*/
#define Tile_PackXY(x, y) (((y) << 6) | (x))

extern tile32 Tile_UnpackTile(uint16 packed);

/**
 * Unpacks a 12 bits packed tile and retrieves the X-position.
 *
 * @param packed The uint16 containing the 12 bits packed tile.
 * @return The unpacked X-position.
 */
/*extern uint8 Tile_GetPackedX(uint16 packed);*/
#define Tile_GetPackedX(packed) ((packed) & 0x3F)
/**
 * Unpacks a 12 bits packed tile and retrieves the Y-position.
 *
 * @param packed The uint16 containing the 12 bits packed tile.
 * @return The unpacked Y-position.
 */
/*extern uint8 Tile_GetPackedY(uint16 packed);*/
#define Tile_GetPackedY(packed) (((packed) >> 6) & 0x3F)

/**
 * Check if a packed tile is out of map. Useful after additional or substraction.
 * @param packed The packed tile to check.
 * @return True if and only if the tile is out of map.
 */
/*extern bool Tile_IsOutOfMap(uint16 packed);*/
#define Tile_IsOutOfMap(packed) (((packed) & 0xF000) != 0)

extern uint16 Tile_GetDistance(tile32 from, tile32 to);
extern uint16 Tile_GetDistancePacked(uint16 packed_from, uint16 packed_to);
extern uint16 Tile_GetDistanceRoundedUp(tile32 from, tile32 to);
extern tile32 Tile_AddTileDiff(tile32 from, tile32 diff);
extern tile32 Tile_Center(tile32 tile);
extern void Tile_RemoveFogInRadius(tile32 tile, uint16 radius);
extern uint16 Tile_GetTileInDirectionOf(uint16 packed_from, uint16 packed_to);
extern uint8 Tile_GetDirectionPacked(uint16 packed_from, uint16 packed_to);
extern tile32 Tile_MoveByDirection(tile32 tile, int16 orientation, uint16 distance);
extern tile32 Tile_MoveByRandom(tile32 tile, uint16 distance, bool center);
extern int8 Tile_GetDirection(tile32 from, tile32 to);
extern tile32 Tile_MoveByOrientation(tile32 position, uint8 orientation);

extern uint8 Orientation_Orientation256ToOrientation8(uint8 orientation);
extern uint8 Orientation_Orientation256ToOrientation16(uint8 orientation);

#endif /* TILE_H */
