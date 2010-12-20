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
	PACK uint32 isUnveiled:1;                               /*!< There is no fog on the Tile. */
	PACK uint32 hasUnit:1;                                  /*!< There is a Unit on the Tile. */
	PACK uint32 hasStructure:1;                             /*!< There is a Structure on the Tile. */
	PACK uint32 flag_08:1;                                  /*!< ?? */
	PACK uint32 flag_10:1;                                  /*!< ?? */
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
extern bool Map_IsValidPosition(uint16 position);
extern bool Map_Save(FILE *fp);
extern bool Map_Load(FILE *fp, uint32 length);
extern bool Map_IsPositionUnveiled(uint16 position);
extern bool Map_IsPositionInViewport(tile32 position, uint16 *retX, uint16 *retY);
extern void Map_MakeExplosion(uint16 type, tile32 position, uint16 hitpoints, uint16 unitOriginEncoded);
extern uint16 Map_B4CD_0750(uint16 packed);

extern void emu_Map_MoveDirection();
extern void emu_Map_SetSelection();
extern void emu_Map_SetSelectionSize();
extern void emu_Map_SetSelectionObjectPosition();
extern void emu_Map_UpdateMinimapPosition();
extern void emu_Map_IsValidPosition();
extern void emu_Map_IsPositionUnveiled();
extern void emu_Map_IsPositionInViewport();
extern void emu_Map_MakeExplosion();
extern void emu_Map_B4CD_0750();

#endif /* MAP_H */
