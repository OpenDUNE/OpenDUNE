/* $Id$ */

#ifndef STRUCTURE_H
#define STRUCTURE_H

/**
 * Types of Structures available in the game.
 */
typedef enum StructureType {
	STRUCTURE_SLAB_1x1          = 0,
	STRUCTURE_SLAB_2x2          = 1,
	STRUCTURE_PALACE            = 2,
	STRUCTURE_LIGHT_VEHICLE     = 3,
	STRUCTURE_HEAVY_VEHICLE     = 4,
	STRUCTURE_HIGH_TECH         = 5,
	STRUCTURE_HOUSE_OF_IX       = 6,
	STRUCTURE_WOR_TROOPER       = 7,
	STRUCTURE_CONSTRUCTION_YARD = 8,
	STRUCTURE_WINDTRAP          = 9,
	STRUCTURE_BARRACKS          = 10,
	STRUCTURE_STARPORT          = 11,
	STRUCTURE_REFINERY          = 12,
	STRUCTURE_REPAIR            = 13,
	STRUCTURE_WALL              = 14,
	STRUCTURE_TURRET            = 15,
	STRUCTURE_ROCKET_TURRET     = 16,
	STRUCTURE_SILO              = 17,
	STRUCTURE_OUTPOST           = 18,

	STRUCTURE_MAX               = 19,
	STRUCTURE_INVALID           = 0xFF
} StructureType;

MSVC_PACKED_BEGIN
/**
 * A Structure as stored in the memory.
 */
typedef struct Structure {
	/* 0000(2)   */ PACK uint16 index;                      /*!< The index of the Structure in the array. */
	/* 0002(1)   */ PACK uint8  type;                       /*!< Type of Structure. */
	/* 0003(1)   */ PACK uint8  linkedUnitID;               /*!< Unit we are linked to, or 0xFF if we are not linked to a unit. */
	/* 0004(2)   */ PACK uint16 flags;                      /*!< ?? Bitflags. 0x0001 - Used, 0x0002 - Allocated?, 0x0004 - Being-built?, 0x0400 - Structure degrades */
	/* 0006(2)   */ PACK uint16 variable_06;                /*!< ?? */
	/* 0008(1)   */ PACK uint8  houseID;                    /*!< House of Structure. */
	/* 0009(1)   */ PACK uint8  variable_09;                /*!< ?? */
	/* 000A(4)   */ PACK tile32 position;                   /*!< Position on the map. */
	/* 000E(2)   */ PACK uint16 hitpoints;                  /*!< Current hitpoints left. */
	/* 0010(2)   */ PACK uint16 variable_10;                /*!< ?? */
	/* 0012()    */ PACK uint8   unknown_0012[0x0004];
	/* 0016(2)   */ PACK uint16 variable_16;                /*!< ?? */
	/* 0018(2)   */ PACK uint16 variable_18;                /*!< ?? */
	/* 001A()    */ PACK uint8   unknown_001A[0x0004];
	/* 001E(2)   */ PACK uint16 variable_1E;                /*!< ?? */
	/* 0020()    */ PACK uint8   unknown_0020[0x0006];
	/* 0026(2)   */ PACK uint16 variable_26;                /*!< ?? */
	/* 0028()    */ PACK uint8   unknown_0028[0x001F];
	/* 0047(2)   */ PACK uint16 variable_47;                /*!< ?? The 16bit version of HouseID? */
	/* 0049(2)   */ PACK uint16 variable_49;                /*!< ?? */
	/* 004B(1)   */ PACK uint8  variable_4B;                /*!< ?? */
	/* 004C(2)   */ PACK uint16 variable_4C;                /*!< ?? */
	/* 004E(1)   */ PACK uint8  upgradeLevel;               /*!< The current level of upgrade of the Structure. */
	/* 004F(1)   */ PACK uint8  upgradeTimeLeft;            /*!< Time left before upgrade is complete, or 0 if no upgrade available. */
	/* 0050(2)   */ PACK uint16 buildTimeLeft;              /*!< Time left before build is complete. */
	/* 0052()    */ PACK uint8   unknown_0050[0x0002];
	/* 0054(2)   */ PACK uint16 variable_54;                /*!< ?? If 0xFFFF it shows just-build animation. If 0 it is done. */
	/* 0056(2)   */ PACK uint16 hitpointsMax;               /*!< Max amount of hitpoints. */
} GCC_PACKED Structure;
MSVC_PACKED_END
assert_compile(sizeof(Structure) == 0x58);

MSVC_PACKED_BEGIN
/**
 * Static information per Structure type.
 */
typedef struct StructureInfo {
	/* 0000()    */ PACK uint8   unknown_0000[0x0002];
	/* 0002(4)   */ PACK csip32 name;                       /*!< Name of Structure. */
	/* 0006()    */ PACK uint8   unknown_0006[0x0006];
	/* 000C(2)   */ PACK uint16 variable_0C;                /*!< ?? */
	/* 000E()    */ PACK uint8   unknown_000E[0x0002];
	/* 0010(2)   */ PACK uint16 hitpoints;                  /*!< Default hitpoints for this Structure. */
	/* 0012()    */ PACK uint8   unknown_0012[0x0006];
	/* 0018(2)   */ PACK uint16 buildTime;                  /*!< Time required to build this Structure. */
	/* 001A()    */ PACK uint8   unknown_001A[0x0020];
	/* 003A(2)   */ PACK uint16 layout;                     /*!< Layout type of Structure. */
	/* 003C()    */ PACK uint8   unknown_003C[0x0024];
} GCC_PACKED StructureInfo;
MSVC_PACKED_END
assert_compile(sizeof(StructureInfo) == 0x60);

extern StructureInfo *g_structureInfo;

extern uint8 Structure_StringToType(const char *name);
extern Structure *Structure_Create(uint16 index, uint8 typeID, uint8 houseID, uint16 position);
extern bool Structure_Place(Structure *s, uint16 position);


extern void emu_Structure_Create();
extern void emu_Structure_Place();

#endif /* STRUCTURE_H */
