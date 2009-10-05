/* $Id$ */

#ifndef BUILDING_H
#define BUILDING_H

/**
 * Types of Buildings available in the game.
 * TODO -- Complete the enum.
 */
typedef enum BuildingType {
	BUILDING_SLAB_1x1 = 0,
	BUILDING_SLAB_2x2 = 1,

	BUILDING_WALL     = 14,
} BuildingType;

MSVC_PACKED_BEGIN;
/**
 * A Building as stored in the memory.
 */
typedef struct Building {
	/* 0000(2)   */ uint16 index;                  //!< The index of the Building in the array.
	/* 0002(1)   */ uint8  typeID;                 //!< Type of Building.
	/* 0003(1)   */ uint8  variable_03;            //!< ??
	/* 0004(2)   */ uint16 variable_04;            //!< ?? Bitflags. 0x0001 - Used, 0x0002 - Allocated?, 0x0004 - Being-built?
	/* 0006(2)   */ uint16 variable_06;            //!< ??
	/* 0008(1)   */ uint8  houseID;                //!< House of Building.
	/* 0009()    */ uint8   unknown_0009[0x0007];
	/* 0010(2)   */ uint16 variable_10;            //!< ??
	/* 0012()    */ uint8   unknown_0012[0x0046];
} GCC_PACKED Building;
MSVC_PACKED_END;
assert_compile(sizeof(Building) == 0x58);

#endif /* BUILDING_H */
