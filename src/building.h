/* $Id$ */

#ifndef BUILDING_H
#define BUILDING_H

enum {
	BUILDING_INDEX_MAX_SOFT = 79,                  //!< The highest possible index for normal buildings.
	BUILDING_INDEX_MAX_HARD = 82,                  //!< The highest possible index for any building.

	BUILDING_INDEX_WALL     = 79,                  //!< All walls are are put under index 79.
	BUILDING_INDEX_SLAB_2x2 = 80,                  //!< All 2x2 slabs are put under index 80.
	BUILDING_INDEX_SLAB_1x1 = 81,                  //!< All 1x1 slabs are put under index 81.
};

/**
 * Types of buildings available in the game.
 * TODO -- Complete the enum.
 */
typedef enum BuildingType {
	BUILDING_INVALID  = -1,
	BUILDING_SLAB_1x1 = 0,
	BUILDING_SLAB_2x2 = 1,

	BUILDING_WALL     = 14,
} BuildingType;

MSVC_PACKED_BEGIN;
/**
 * A building as stored in the memory.
 */
typedef struct Building {
	/* 0000(2)   */ uint16 index;                  //!< The index of the building in the array.
	/* 0002(1)   */ uint8  typeID;                 //!< Type of building.
	/* 0003(1)   */ uint8  variable_03;            //!< ??
	/* 0004(2)   */ uint16 variable_04;            //!< ?? Bitflags. 0x0001 - Used? 0x0002 - Allocated?
	/* 0006(2)   */ uint16 variable_06;            //!< ??
	/* 0008(1)   */ uint8  ownerID;                //!< Owner of building.
	/* 0009()    */ uint8   unknown_0009[0x0007];
	/* 0010(2)   */ uint16 variable_10;            //!< ??
	/* 0012()    */ uint8   unknown_0000[0x0046];
} GCC_PACKED Building;
MSVC_PACKED_END;
assert_compile(sizeof(Building) == 0x58);

MSVC_PACKED_BEGIN;
/**
 * To find a building of a given type/owner, this struct is used. The result
 *  is also written back in this struct.
 */
typedef struct BuildingFindStruct {
	/* 0000(2)   */ int16  ownerID;                 //!< Owner of building to search for, or -1 for all.
	/* 0002(2)   */ int16  typeID;                  //!< Type of building to search for, or -1 for all.
	/* 0004(2)   */ int16  index;                   //!< Last index of search, or -1 to start from begin.
} GCC_PACKED BuildingFindStruct;
MSVC_PACKED_END;
assert_compile(sizeof(BuildingFindStruct) == 0x06);

extern Building *Building_Get_ByIndex(uint8 index);
extern Building *Building_Get_ByMemory(uint16 segment, uint16 offset);
extern Building *Building_Find(int16 ownerID, int16 typeID, int16 *lastIndex);
extern Building *Building_Allocate(int16 index, uint8 typeID);

extern void emu_Building_Allocate();
extern void emu_Building_Free();
extern void emu_Building_Get_ByIndex();
extern void emu_Building_Find_Next();
extern void emu_Building_Find_First();

#endif /* BUILDING_H */
