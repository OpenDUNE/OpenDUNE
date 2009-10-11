/* $Id$ */

#ifndef BUILDING_H
#define BUILDING_H

/**
 * Types of Buildings available in the game.
 */
typedef enum BuildingType {
	BUILDING_SLAB_1x1          = 0,
	BUILDING_SLAB_2x2          = 1,
	BUILDING_UNKNOWN_2         = 2, /* TODO -- What is building type 2? */
	BUILDING_LIGHT_VEHICLE     = 3,
	BUILDING_HEAVY_VEHICLE     = 4,
	BUILDING_HIGH_TECH         = 5,
	BUILDING_UNKNOWN_6         = 6, /* TODO -- What is building type 6? */
	BUILDING_UNKNOWN_7         = 7, /* TODO -- What is building type 7? */
	BUILDING_CONSTRUCTION_YARD = 8,
	BUILDING_WINDTRAP          = 9,
	BUILDING_BARRACKS          = 10,
	BUILDING_UNKNOWN_11        = 11, /* TODO -- What is building type 11? */
	BUILDING_REFINERY          = 12,
	BUILDING_REPAIR            = 13,
	BUILDING_WALL              = 14,
	BUILDING_TURRET            = 15,
	BUILDING_ROCKET_TURRET     = 16,
	BUILDING_SILO              = 17,
	BUILDING_OUTPOST           = 18,
	/* TODO -- Are there more buildings above type 18? */

	BUILDING_INVALID           = 0xFFFF
} BuildingType;

MSVC_PACKED_BEGIN
/**
 * A Building as stored in the memory.
 */
typedef struct Building {
	/* 0000(2)   */ PACK uint16 index;                      /*!< The index of the Building in the array. */
	/* 0002(1)   */ PACK uint8  type;                       /*!< Type of Building. */
	/* 0003(1)   */ PACK uint8  linkedUnitID;               /*!< Unit we are linked to, or 0xFF if we are not linked to a unit. */
	/* 0004(2)   */ PACK uint16 flags;                      /*!< ?? Bitflags. 0x0001 - Used, 0x0002 - Allocated?, 0x0004 - Being-built? */
	/* 0006(2)   */ PACK uint16 variable_06;                /*!< ?? */
	/* 0008(1)   */ PACK uint8  houseID;                    /*!< House of Building. */
	/* 0009(1)   */ PACK uint8  variable_09;                /*!< ?? */
	/* 000A(4)   */ PACK tile32 position;                   /*!< Position on the map. */
	/* 000E(2)   */ PACK uint16 health;                     /*!< Current amount of health. */
	/* 0010(2)   */ PACK uint16 variable_10;                /*!< ?? */
	/* 0012()    */ PACK uint8   unknown_0012[0x0035];
	/* 0047(2)   */ PACK uint16 variable_47;                /*!< ?? The 16bit version of HouseID? */
	/* 0049(2)   */ PACK uint16 variable_49;                /*!< ?? */
	/* 004B(1)   */ PACK uint8  variable_4B;                /*!< ?? */
	/* 004C(2)   */ PACK uint16 variable_4C;                /*!< ?? */
	/* 004E(1)   */ PACK uint8  upgradeLevel;               /*!< The current level of upgrade of the Building. */
	/* 004F(1)   */ PACK uint8  upgradeTimeLeft;            /*!< Time left before upgrade is complete, or 0 if no upgrade available. */
	/* 0050(2)   */ PACK uint16 buildTimeLeft;              /*!< Time left before build is complete. */
	/* 0052()    */ PACK uint8   unknown_0050[0x0002];
	/* 0054(2)   */ PACK uint16 variable_54;                /*!< ?? */
	/* 0056(2)   */ PACK uint16 healthMax;                  /*!< Max amount of health. */
} GCC_PACKED Building;
MSVC_PACKED_END
assert_compile(sizeof(Building) == 0x58);

MSVC_PACKED_BEGIN
/**
 * Static information per Building type.
 */
typedef struct BuildingInfo {
	/* 0000()    */ PACK uint8   unknown_0000[0x000C];
	/* 000C(2)   */ PACK uint16 variable_0C;                /*!< ??  */
	/* 000E()    */ PACK uint8   unknown_000E[0x0002];
	/* 0010(2)   */ PACK uint16 health;                     /*!< Default healt for the Building.  */
	/* 0012()    */ PACK uint8   unknown_0012[0x0006];
	/* 0018(2)   */ PACK uint16 buildTime;                  /*!< Time required to build this Building.  */
	/* 001A()    */ PACK uint8   unknown_001A[0x0046];
} GCC_PACKED BuildingInfo;
MSVC_PACKED_END
assert_compile(sizeof(BuildingInfo) == 0x60);

extern BuildingInfo *g_buildingInfo;

#endif /* BUILDING_H */
