/** @file src/structure.h %Structure handling definitions. */

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

/**
 * Flags used to indicate structures in a bitmask.
 */
typedef enum StructureFlag {
	FLAG_STRUCTURE_SLAB_1x1          = 1 << STRUCTURE_SLAB_1x1,          /* 0x____01 */
	FLAG_STRUCTURE_SLAB_2x2          = 1 << STRUCTURE_SLAB_2x2,          /* 0x____02 */
	FLAG_STRUCTURE_PALACE            = 1 << STRUCTURE_PALACE,            /* 0x____04 */
	FLAG_STRUCTURE_LIGHT_VEHICLE     = 1 << STRUCTURE_LIGHT_VEHICLE,     /* 0x____08 */
	FLAG_STRUCTURE_HEAVY_VEHICLE     = 1 << STRUCTURE_HEAVY_VEHICLE,     /* 0x____10 */
	FLAG_STRUCTURE_HIGH_TECH         = 1 << STRUCTURE_HIGH_TECH,         /* 0x____20 */
	FLAG_STRUCTURE_HOUSE_OF_IX       = 1 << STRUCTURE_HOUSE_OF_IX,       /* 0x____40 */
	FLAG_STRUCTURE_WOR_TROOPER       = 1 << STRUCTURE_WOR_TROOPER,       /* 0x____80 */
	FLAG_STRUCTURE_CONSTRUCTION_YARD = 1 << STRUCTURE_CONSTRUCTION_YARD, /* 0x__01__ */
	FLAG_STRUCTURE_WINDTRAP          = 1 << STRUCTURE_WINDTRAP,          /* 0x__02__ */
	FLAG_STRUCTURE_BARRACKS          = 1 << STRUCTURE_BARRACKS,          /* 0x__04__ */
	FLAG_STRUCTURE_STARPORT          = 1 << STRUCTURE_STARPORT,          /* 0x__08__ */
	FLAG_STRUCTURE_REFINERY          = 1 << STRUCTURE_REFINERY,          /* 0x__10__ */
	FLAG_STRUCTURE_REPAIR            = 1 << STRUCTURE_REPAIR,            /* 0x__20__ */
	FLAG_STRUCTURE_WALL              = 1 << STRUCTURE_WALL,              /* 0x__40__ */
	FLAG_STRUCTURE_TURRET            = 1 << STRUCTURE_TURRET,            /* 0x__80__ */
	FLAG_STRUCTURE_ROCKET_TURRET     = 1 << STRUCTURE_ROCKET_TURRET,     /* 0x01____ */
	FLAG_STRUCTURE_SILO              = 1 << STRUCTURE_SILO,              /* 0x02____ */
	FLAG_STRUCTURE_OUTPOST           = 1 << STRUCTURE_OUTPOST,           /* 0x04____ */

	FLAG_STRUCTURE_NONE              = 0,
	FLAG_STRUCTURE_NEVER             = 0xFFFF                            /*!< Special flag to mark that certain buildings can never be built on a Construction Yard. */
} StructureFlag;

/** Available structure layouts. */
typedef enum StructureLayout {
	STRUCTURE_LAYOUT_1x1 = 0,
	STRUCTURE_LAYOUT_2x1 = 1,
	STRUCTURE_LAYOUT_1x2 = 2,
	STRUCTURE_LAYOUT_2x2 = 3,
	STRUCTURE_LAYOUT_2x3 = 4,
	STRUCTURE_LAYOUT_3x2 = 5,
	STRUCTURE_LAYOUT_3x3 = 6
} StructureLayout;

/** States a structure can be in */
typedef enum StructureState {
	STRUCTURE_STATE_DETECT    = -2,                        /*!< Used when setting state, meaning to detect which state it has by looking at other properties. */
	STRUCTURE_STATE_JUSTBUILT = -1,                        /*!< This shows you the building animation etc. */
	STRUCTURE_STATE_IDLE      = 0,                         /*!< Structure is doing nothing. */
	STRUCTURE_STATE_BUSY      = 1,                         /*!< Structure is busy (harvester in refinery, unit in repair, .. */
	STRUCTURE_STATE_READY     = 2                          /*!< Structure is ready and unit will be deployed soon. */
} StructureState;

/**
 * A Structure as stored in the memory.
 */
typedef struct Structure {
	Object o;                                               /*!< Common to Unit and Structures. */
	uint16 creatorHouseID;                                  /*!< The Index of the House who created this Structure. Required in case of take-overs. */
	uint16 rotationSpriteDiff;                              /*!< Which sprite to show for the current rotation of Turrets etc. */
	uint16 objectType;                                      /*!< Type of Unit/Structure we are building. */
	uint8  upgradeLevel;                                    /*!< The current level of upgrade of the Structure. */
	uint8  upgradeTimeLeft;                                 /*!< Time left before upgrade is complete, or 0 if no upgrade available. */
	uint16 countDown;                                       /*!< General countdown for various of functions. */
	uint16 buildCostRemainder;                              /*!< The remainder of the buildCost for next tick. */
	 int16 state;                                           /*!< The state of the structure. @see StructureState. */
	uint16 hitpointsMax;                                    /*!< Max amount of hitpoints. */
}  Structure;

/**
 * Static information per Structure type.
 */
typedef struct StructureInfo {
	ObjectInfo o;                                           /*!< Common to UnitInfo and StructureInfo. */
	uint32 enterFilter;                                     /*!< Bitfield determining which unit is allowed to enter the structure. If bit n is set, then units of type n may enter */
	uint16 creditsStorage;                                  /*!< How many credits this Structure can store. */
	 int16 powerUsage;                                      /*!< How much power this Structure uses (positive value) or produces (negative value). */
	uint16 layout;                                          /*!< Layout type of Structure. */
	uint16 iconGroup;                                       /*!< In which IconGroup the sprites of the Structure belongs. */
	uint8  animationIndex[3];                               /*!< The index inside g_table_animation_structure for the Animation of the Structure. */
	uint8  buildableUnits[8];                               /*!< Which units this structure can produce. */
	uint16 upgradeCampaign[3];                              /*!< Minimum campaign for upgrades. */
} StructureInfo;

/** X/Y pair defining a 2D size. */
typedef struct XYSize {
	uint16 width;  /*!< Horizontal length. */
	uint16 height; /*!< Vertical length. */
} XYSize;

struct House;
struct Widget;

extern StructureInfo g_table_structureInfo[];
extern const uint16  g_table_structure_layoutTiles[][9];
extern const uint16  g_table_structure_layoutEdgeTiles[][8];
extern const uint16  g_table_structure_layoutTileCount[];
extern const tile32  g_table_structure_layoutTileDiff[];
extern const XYSize  g_table_structure_layoutSize[];
extern const int16   g_table_structure_layoutTilesAround[][16];

extern Structure *g_structureActive;
extern uint16 g_structureActivePosition;
extern uint16 g_structureActiveType;

extern uint16 g_structureIndex;

extern void GameLoop_Structure(void);
extern uint8 Structure_StringToType(const char *name);
extern Structure *Structure_Create(uint16 index, uint8 typeID, uint8 houseID, uint16 position);
extern bool Structure_Place(Structure *s, uint16 position);
extern void Structure_CalculateHitpointsMax(struct House *h);
extern void Structure_SetState(Structure *s, int16 animation);
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
extern uint16 Structure_FindFreePosition(Structure *s, bool checkForSpice);
extern void Structure_Remove(Structure *s);
extern bool Structure_BuildObject(Structure *s, uint16 objectType);
extern bool Structure_SetUpgradingState(Structure *s, int8 value, struct Widget *w);
extern bool Structure_SetRepairingState(Structure *s, int8 value, struct Widget *w);
extern void Structure_UpdateMap(Structure *s);
extern uint32 Structure_GetBuildable(Structure *s);
extern void Structure_HouseUnderAttack(uint8 houseID);
extern uint16 Structure_AI_PickNextToBuild(Structure *s);

#endif /* STRUCTURE_H */
