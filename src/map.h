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
	PACK uint32 flags:5;                                    /*!< Bitflags. 0x01 - ??, 0x02 - Has Unit, 0x04 - Has Structure, 0x08 - ??, 0x10 - ??. */
	PACK uint32 index:8;                                    /*!< Index of the Structure / Unit (index 1 is Structure/Unit 0, etc). */
} GCC_PACKED Tile;
MSVC_PACKED_END
assert_compile(sizeof(Tile) == 0x04);

extern uint16 *g_map;

extern Tile *Map_GetTileByPosition(uint16 position);
extern uint16 Map_MoveDirection(uint16 direction);
extern void Map_SetSelection(uint16 packed);
extern uint16 Map_SetSelectionSize(uint16 layout);
extern uint16 Map_SetSelectionObjectPosition(uint16 packed);
extern void Map_UpdateMinimapPosition(uint16 packed, bool forceUpdate);

extern void emu_Map_MoveDirection();
extern void emu_Map_SetSelection();
extern void emu_Map_SetSelectionSize();
extern void emu_Map_SetSelectionObjectPosition();
extern void emu_Map_UpdateMinimapPosition();

#endif /* MAP_H */
