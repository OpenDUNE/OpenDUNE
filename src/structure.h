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
	/* 0000(50)  */ PACK ObjectInfo o;                      /*!< Common to UnitInfo and StructureInfo. */
	/* 0032(4)   */ PACK uint32 enterFilter;                /*!< Bitfield determining which unit is allowed to enter the structure. If bit n is set, then units of type n may enter */
	/* 0036(2)   */ PACK uint16 creditsStorage;             /*!< How many credits this Structure can store. */
	/* 0038(2)   */ PACK  int16 powerUsage;                 /*!< How much power this Structure uses (positive value) or produces (negative value). */
	/* 003A(2)   */ PACK uint16 layout;                     /*!< Layout type of Structure. */
	/* 003C(2)   */ PACK uint16 variable_3C;                /*!< ?? */
	/* 003E(12)  */ PACK csip32 variable_3E[3];             /*!< ?? */
	/* 004A(16)  */ PACK uint16 buildableUnits[8];          /*!< Which units this structure can produce. */
	/* 005A(6)   */ PACK uint16 variable_5A[3];             /*!< ?? */
} GCC_PACKED StructureInfo;
MSVC_PACKED_END
assert_compile(sizeof(StructureInfo) == 0x60);

struct House;
struct Widget;

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
extern struct Unit *Structure_GetLinkedUnit(Structure *s);
extern void Structure_UntargetMe(Structure *s);
extern uint16 Structure_0C3A_247A(Structure *s, bool checkDistance);
extern void Structure_0C3A_1002(Structure *s);
extern bool Structure_BuildObject(Structure *s, uint16 objectType);
extern bool Structure_SetUpgradingState(Structure *s, int8 value, struct Widget *w);
extern bool Structure_SetRepairingState(Structure *s, int8 value, struct Widget *w);
extern void Structure_UpdateMap(Structure *s);
extern uint32 Structure_GetBuildable(Structure *s);
extern void Structure_HouseUnderAttack(uint8 houseID);
extern uint16 Structure_AI_PickNextToBuild(Structure *s);


extern void emu_Structure_CalculatePowerAndCredit();
extern void emu_Structure_SetAnimation();
extern void emu_Structure_Get_ByPackedTile();
extern void emu_Structure_GetStructuresBuilt();
extern void emu_Structure_RemoveFog();
extern void emu_Structure_GetBuildable();

#endif /* STRUCTURE_H */
