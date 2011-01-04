/* $Id$ */

#ifndef STRUCTURE_H
#define STRUCTURE_H

#include "object.h"

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
	/* 0000(71)  */ PACK Object o;                          /*!< Common to Unit and Structures. */
	/* 0047(2)   */ PACK uint16 variable_47;                /*!< ?? The 16bit version of HouseID? */
	/* 0049(2)   */ PACK uint16 variable_49;                /*!< ?? */
	/* 004B(1)   */ PACK uint8  variable_4B;                /*!< ?? */
	/* 004C(2)   */ PACK uint16 objectType;                 /*!< Type of Unit/Structure we are building. */
	/* 004E(1)   */ PACK uint8  upgradeLevel;               /*!< The current level of upgrade of the Structure. */
	/* 004F(1)   */ PACK uint8  upgradeTimeLeft;            /*!< Time left before upgrade is complete, or 0 if no upgrade available. */
	/* 0050(2)   */ PACK uint16 countDown;                  /*!< General countdown for various of functions. */
	/* 0052(2)   */ PACK uint16 variable_52;                /*!< ?? Used as 'overflow' value for building stuff. */
	/* 0054(2)   */ PACK  int16 animation;                  /*!< The animation frame. -1 is the 'just built', 0 is 'normal', .. */
	/* 0056(2)   */ PACK uint16 hitpointsMax;               /*!< Max amount of hitpoints. */
} GCC_PACKED Structure;
MSVC_PACKED_END
assert_compile(sizeof(Structure) == 0x58);

MSVC_PACKED_BEGIN
/**
 * Static information per Structure type.
 */
typedef struct StructureInfo {
	/* 0000(2)   */ PACK uint16 stringID_abbrev;            /*!< StringID of abbreviated name of Structure. */
	/* 0002(4)   */ PACK csip32 name;                       /*!< Pointer to name of Structure. */
	/* 0006(2)   */ PACK uint16 stringID_full;              /*!< StringID of full name of Structure. */
	/* 0008(4)   */ PACK csip32 wsa;                        /*!< Pointer to name of .wsa file. */
	/* 000C(2)   */ PACK union {
	                     struct {
	/*      0001 */              BITTYPE variable_0001:1;   /*!< ?? */
	/*      0002 */              BITTYPE factory:1;         /*!< Structure can build other Structures or Units. */
	/*      0004 */              BITTYPE variable_0004:1;   /*!< ?? */
	/*      0008 */              BITTYPE variable_0008:1;   /*!< ?? */
	/*      0010 */              BITTYPE variable_0010:1;   /*!< ?? */
	/*      0020 */              BITTYPE variable_0020:1;   /*!< ?? */
	/*      0040 */              BITTYPE variable_0040:1;   /*!< ?? */
	/*      0080 */              BITTYPE conquerable:1;     /*!< Structure can be invaded and subsequently conquered when hitpoints are low. */
	/*      -    */              BITTYPE notused2:8;        /*!< The remaining bits are never used. */
	                     } GCC_PACKED s;
	                     uint16 all; } flags;               /*!< General flags of the StructureInfo. */
	/* 000E(2)   */ PACK uint16 variable_0E;                /*!< ?? Chance of spawning an infanctry on structure destruction. */
	/* 0010(2)   */ PACK uint16 hitpoints;                  /*!< Default hitpoints for this Structure. */
	/* 0012(2)   */ PACK uint16 fogUncoverRadius;           /*!< Radius of fog to uncover. */
	/* 0014(2)   */ PACK uint16 spriteID;                   /*!< SpriteID of Structure. */
	/* 0016(2)   */ PACK uint16 buildCredits;               /*!< How much credits it cost to build this Structure. Upgrading is 50% of this value. */
	/* 0018(2)   */ PACK uint16 buildTime;                  /*!< Time required to build this Structure. */
	/* 001A(2)   */ PACK uint16 variable_1A;                /*!< ?? */
	/* 001C(4)   */ PACK uint32 variable_1C;                /*!< ?? Bitmask? */
	/* 0020(2)   */ PACK uint16 variable_20;                /*!< ?? */
	/* 0022()    */ PACK uint8   unknown_0022[0x0009];
	/* 002B(2)   */ PACK uint16 variable_2B;                /*!< ?? */
	/* 002D()    */ PACK uint8   unknown_002D[0x005];
	/* 0032(4)   */ PACK uint32 enterFilter;                /*!< Bitfield determining which unit is allowed to enter the structure. If bit n is set, then units of type n may enter */
	/* 0036(2)   */ PACK uint16 creditsStorage;             /*!< How many credits this Structure can store. */
	/* 0038(2)   */ PACK  int16 powerUsage;                 /*!< How much power this Structure uses (positive value) or produces (negative value). */
	/* 003A(2)   */ PACK uint16 layout;                     /*!< Layout type of Structure. */
	/* 003C()    */ PACK uint8   unknown_003C[0x001E];
	/* 005A(6)   */ PACK uint16 variable_5A[3];             /*!< ?? */
} GCC_PACKED StructureInfo;
MSVC_PACKED_END
assert_compile(sizeof(StructureInfo) == 0x60);

struct House;

extern StructureInfo *g_structureInfo;

extern void GameLoop_Structure();
extern uint8 Structure_StringToType(const char *name);
extern Structure *Structure_Create(uint16 index, uint8 typeID, uint8 houseID, uint16 position);
extern bool Structure_Place(Structure *s, uint16 position);
extern void Structure_CalculatePowerAndCredit(struct House *h);
extern void Structure_CalculateHitpointsMax(struct House *h);
extern void Structure_SetAnimation(Structure *s, int16 animation);
extern Structure *Structure_Get_ByPackedTile(uint16 packed);
extern uint32 Structure_GetStructuresBuilt(struct House *h);
extern int16 Structure_IsValidBuildLocation(uint16 position, StructureType type);
extern bool Structure_Save(FILE *fp);
extern bool Structure_Load(FILE *fp, uint32 length);
extern void Structure_ActivateSpecial(Structure *s);
extern void Structure_RemoveFog(Structure *s);
extern bool Structure_Damage(Structure *s, uint16 damage, uint16 range);
extern bool Structure_IsUpgradable(Structure *s);
extern bool Structure_ConnectWall(uint16 position, bool recurse);


extern void emu_Structure_Create();
extern void emu_Structure_CalculatePowerAndCredit();
extern void emu_Structure_SetAnimation();
extern void emu_Structure_Get_ByPackedTile();
extern void emu_Structure_GetStructuresBuilt();
extern void emu_Structure_RemoveFog();
extern void emu_Structure_IsUpgradable();
extern void emu_Structure_ConnectWall();

#endif /* STRUCTURE_H */
