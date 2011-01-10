/* $Id$ */

#ifndef MAP_H
#define MAP_H

MSVC_PACKED_BEGIN
/**
 * A Tile as stored in the memory in the map.
 */
typedef struct Tile {
	PACK uint32 groundSpriteID:9;                           /*!< The Sprite which is drawn on this Tile. */
	PACK uint32 overlaySpriteID:7;                          /*!< The Overlay which is drawn over this Tile. */
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

MSVC_PACKED_BEGIN
/**
 * A struct.
 */
typedef struct struct_395A {
	/* 0000(4)   */ PACK uint32 variable_00;                /*!< ?? */
	/* 0004(2)   */ PACK uint16 variable_04;                /*!< ?? an index. */
	/* 0006(1)   */ PACK uint8  houseID;                    /*!< A houseID. */
	/* 0007(1)   */ PACK uint8  variable_07;                /*!< ?? a bool. */
	/* 0008(1)   */ PACK uint8  variable_08;                /*!< ?? */
	/* 0009(1)   */ PACK uint8  variable_09;                /*!< ?? */
	/* 000A(2)   */ PACK uint16 variable_0A;                /*!< ?? an index. */
	/* 000C(4)   */ PACK csip32 variable_0C;                /*!< ?? a CSIP. */
	/* 0010(4)   */ PACK tile32 position;                   /*!< A position. */
} GCC_PACKED struct_395A;
MSVC_PACKED_END
assert_compile(sizeof(struct_395A) == 0x14);

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
extern void Map_Update(uint16 packed, uint16 type, bool ignoreInvisible);
extern void Map_DeviateArea(uint16 type, tile32 position, uint16 radius);
extern uint32 Map_06F7_0602();
extern void Map_B4CD_14CA(uint16 packed, uint8 houseID);
extern void Map_B4CD_154C(uint16 packed, uint16 radius);
extern void Map_B4CD_0AFA(uint16 packed, int16 arg08);
extern void Map_SetViewportPosition(uint16 packed);
extern void Map_B4CD_160C(uint16 packed, uint8 houseID);
extern uint16 Map_B4CD_1816(uint16 locationID, uint8 houseID);
extern void Map_B4CD_057B(uint16 arg06, tile32 position, csip32 csip, csip32 function);

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
extern void emu_Map_Update();

#endif /* MAP_H */
