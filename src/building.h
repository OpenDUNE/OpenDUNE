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
	/* 0003(1)   */ uint8  buildCurrentID;         //!< Current ID of the object we are building, or 0xFF if not building anything.
	/* 0004(2)   */ uint16 variable_04;            //!< ?? Bitflags. 0x0001 - Used, 0x0002 - Allocated?, 0x0004 - Being-built?
	/* 0006(2)   */ uint16 variable_06;            //!< ??
	/* 0008(1)   */ uint8  houseID;                //!< House of Building.
	/* 0009(1)   */ uint8  variable_09;            //!< ??
	/* 000A(2)   */ uint16 variable_0A;            //!< ??
	/* 000C(2)   */ uint16 variable_0C;            //!< ??
	/* 000E(2)   */ uint16 health;                 //!< Current amount of health.
	/* 0010(2)   */ uint16 variable_10;            //!< ??
	/* 0012()    */ uint8   unknown_0012[0x0035];
	/* 0047(2)   */ uint16 variable_47;            //!< ?? The 16bit version of HouseID?
	/* 0049(2)   */ uint16 variable_49;            //!< ??
	/* 004B(1)   */ uint8  variable_4B;            //!< ??
	/* 004C(2)   */ uint16 variable_4C;            //!< ??
	/* 004E(1)   */ uint8  upgradeLevel;           //!< The current level of upgrade of the Building.
	/* 004F(1)   */ uint8  upgradeCost;            //!< Cost for upgrade, or 0 if no upgrade available.
	/* 0050(2)   */ uint16 buildTimeLeft;          //!< Time left before build is complete.
	/* 0052()    */ uint8   unknown_0050[0x0002];
	/* 0054(2)   */ uint16 variable_54;            //!< ??
	/* 0056(2)   */ uint16 healthMax;              //!< Max amount of health.
} GCC_PACKED Building;
MSVC_PACKED_END;
assert_compile(sizeof(Building) == 0x58);

MSVC_PACKED_BEGIN;
/**
 * Static information per Building type.
 */
typedef struct BuildingInfo {
	/* 0000()    */ uint8   unknown_0000[0x000C];
	/* 000C(2)   */ uint16 variable_0C;            //!< ??
	/* 000E()    */ uint8   unknown_000E[0x0002];
	/* 0010(2)   */ uint16 health;                 //!< Default healt for the Building.
	/* 0012()    */ uint8   unknown_0012[0x0006];
	/* 0018(2)   */ uint16 buildTime;              //!< Time required to build this Building.
	/* 001A()    */ uint8   unknown_001A[0x0046];
} GCC_PACKED BuildingInfo;
MSVC_PACKED_END;
assert_compile(sizeof(BuildingInfo) == 0x60);

extern BuildingInfo *g_buildingInfo;

#endif /* BUILDING_H */
