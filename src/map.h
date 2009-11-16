/* $Id$ */

#ifndef MAP_H
#define MAP_H

MSVC_PACKED_BEGIN
/**
 * A Tile as stored in the memory in the map.
 */
typedef struct Tile {
	PACK uint32 spriteID:9;                                 /*!< The Sprite which is drawn on this Tile. */
	PACK uint32 unknown1:7;                                 /*!< ?? */
	PACK uint32 houseID:3;                                  /*!< Which House owns this Tile. */
	PACK uint32 unknown2:5;                                 /*!< ?? */
	PACK uint32 unknown3:8;                                 /*!< ?? */
} GCC_PACKED Tile;
MSVC_PACKED_END
assert_compile(sizeof(Tile) == 0x04);

extern Tile *Map_GetTileByPosition(uint16 position);

#endif /* MAP_H */
