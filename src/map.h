/* $Id$ */

#ifndef MAP_H
#define MAP_H

MSVC_PACKED_BEGIN
/**
 * A Tile as stored in the memory in the map.
 */
typedef struct Tile {
	PACK uint32 spriteID:9;                                 /*!< The Sprite which is drawn on this Tile. */
	PACK uint32 fogOfWar:7;                                 /*!< The Fog of War on this Tile. */
	PACK uint32 houseID:3;                                  /*!< Which House owns this Tile. */
	PACK uint32 flags:5;                                    /*!< Bitflags. 0x01 - ??, 0x02 - ??, 0x04 - Has Structure, 0x08 - ??, 0x10 - ??. */
	PACK uint32 index:8;                                    /*!< Index of the structure. */
} GCC_PACKED Tile;
MSVC_PACKED_END
assert_compile(sizeof(Tile) == 0x04);

extern Tile *Map_GetTileByPosition(uint16 position);

#endif /* MAP_H */
