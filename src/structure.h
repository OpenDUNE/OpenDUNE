/* $Id$ */

#ifndef STRUCTURE_H
#define STRUCTURE_H

#include "script.h"

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
	/* 0004(2)   */ PACK uint16 flags;                      /*!< ?? Bitflags. 0x0001 - Used, 0x0002 - Allocated, 0x0004 - Being-built, 0x0400 - Degrades, 0x2000 - Repairing, 0x4000 - On hold. */
	/* 0006(2)   */ PACK uint16 variable_06;                /*!< ?? Bitflags. 0x0002 - Upgrading. */
	/* 0008(1)   */ PACK uint8  houseID;                    /*!< House of Structure. */
	/* 0009(1)   */ PACK uint8  variable_09;                /*!< ?? */
	/* 000A(4)   */ PACK tile32 position;                   /*!< Position on the map. */
	/* 000E(2)   */ PACK uint16 hitpoints;                  /*!< Current hitpoints left. */
	/* 0010(2)   */ PACK uint16 scriptDelay;                /*!< When the script sets a delay, this value becomes non-zero. */
	/* 0012(53)  */ PACK ScriptEngine script;               /*!< The script engine instance of this Structure. */
	/* 0047(2)   */ PACK uint16 variable_47;                /*!< ?? The 16bit version of HouseID? */
	/* 0049(2)   */ PACK uint16 variable_49;                /*!< ?? */
	/* 004B(1)   */ PACK uint8  variable_4B;                /*!< ?? */
	/* 004C(2)   */ PACK uint16 variable_4C;                /*!< ?? */
	/* 004E(1)   */ PACK uint8  upgradeLevel;               /*!< The current level of upgrade of the Structure. */
	/* 004F(1)   */ PACK uint8  upgradeTimeLeft;            /*!< Time left before upgrade is complete, or 0 if no upgrade available. */
	/* 0050(2)   */ PACK uint16 countDown;                  /*!< General countdown for various of functions. */
	/* 0052(2)   */ PACK uint16 variable_52;                /*!< ?? Used as 'overflow' value for building stuff. */
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
	/* 0002(4)   */ PACK csip32 name;                       /*!< Pointer to name of Structure. */
	/* 0006(2)   */ PACK uint16 stringID;                   /*!< StringID of name of Structure. */
	/* 0008()    */ PACK uint8   unknown_0008[0x0004];
	/* 000C(2)   */ PACK uint16 variable_0C;                /*!< ?? */
	/* 000E()    */ PACK uint8   unknown_000E[0x0002];
	/* 0010(2)   */ PACK uint16 hitpoints;                  /*!< Default hitpoints for this Structure. */
	/* 0012()    */ PACK uint8   unknown_0012[0x0004];
	/* 0016(2)   */ PACK uint16 buildCredits;               /*!< How much credits it cost to build this Structure. Upgrading is 50% of this value. */
	/* 0018(2)   */ PACK uint16 buildTime;                  /*!< Time required to build this Structure. */
	/* 001A()    */ PACK uint8   unknown_001A[0x001C];
	/* 0036(2)   */ PACK uint16 creditsStorage;             /*!< How many credits this Structure can store. */
	/* 0038(2)   */ PACK  int16 powerUsage;                 /*!< How much power this Structure uses (positive value) or produces (negative value). */
	/* 003A(2)   */ PACK uint16 layout;                     /*!< Layout type of Structure. */
	/* 003C()    */ PACK uint8   unknown_003C[0x0024];
} GCC_PACKED StructureInfo;
MSVC_PACKED_END
assert_compile(sizeof(StructureInfo) == 0x60);

extern StructureInfo *g_structureInfo;

extern void GameLoop_Structure();
extern uint8 Structure_StringToType(const char *name);
extern Structure *Structure_Create(uint16 index, uint8 typeID, uint8 houseID, uint16 position);
extern bool Structure_Place(Structure *s, uint16 position);
extern void Structure_CalculatePowerAndCredit(uint8 houseID);
extern void Structure_CalculateHitpointsMax(uint8 houseID);


extern void emu_GameLoop_Structure();
extern void emu_Structure_Create();
extern void emu_Structure_Place();
extern void emu_Structure_CalculatePowerAndCredit();

#endif /* STRUCTURE_H */
