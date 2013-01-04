/** @file src/map.h Map definitions. */

#ifndef MAP_H
#define MAP_H

/** Types of available landscapes. */
typedef enum LandscapeType {
	LST_NORMAL_SAND       =  0,                             /*<! Flat sand. */
	LST_PARTIAL_ROCK      =  1,                             /*!< Edge of a rocky area (mostly sand). */
	LST_ENTIRELY_DUNE     =  2,                             /*!< Entirely sand dunes. */
	LST_PARTIAL_DUNE      =  3,                             /*!< Partial sand dunes. */
	LST_ENTIRELY_ROCK     =  4,                             /*!< Center part of rocky area. */
	LST_MOSTLY_ROCK       =  5,                             /*!< Edge of a rocky area (mostly rocky). */
	LST_ENTIRELY_MOUNTAIN =  6,                             /*!< Center part of the mountain. */
	LST_PARTIAL_MOUNTAIN  =  7,                             /*!< Edge of a mountain. */
	LST_SPICE             =  8,                             /*!< Sand with spice. */
	LST_THICK_SPICE       =  9,                             /*!< Sand with thick spice. */
	LST_CONCRETE_SLAB     = 10,                             /*!< Concrete slab. */
	LST_WALL              = 11,                             /*!< Wall. */
	LST_STRUCTURE         = 12,                             /*!< Structure. */
	LST_DESTROYED_WALL    = 13,                             /*!< Destroyed wall. */
	LST_BLOOM_FIELD       = 14,                             /*!< Bloom field. */

	LST_MAX               = 15
} LandscapeType;

MSVC_PACKED_BEGIN
/**
 * A Tile as stored in the memory in the map.
 */
typedef struct Tile {
	/* 0000 01FF */ PACK uint32 groundSpriteID:9;           /*!< The Sprite which is drawn on this Tile. */
	/* 0000 FE00 */ PACK uint32 overlaySpriteID:7;          /*!< The Overlay which is drawn over this Tile. */
	/* 0007 0000 */ PACK uint32 houseID:3;                  /*!< Which House owns this Tile. */
	/* 0008 0000 */ PACK uint32 isUnveiled:1;               /*!< There is no fog on the Tile. */
	/* 0010 0000 */ PACK uint32 hasUnit:1;                  /*!< There is a Unit on the Tile. */
	/* 0020 0000 */ PACK uint32 hasStructure:1;             /*!< There is a Structure on the Tile. */
	/* 0040 0000 */ PACK uint32 hasAnimation:1;             /*!< There is animation going on the Tile. */
	/* 0080 0000 */ PACK uint32 hasExplosion:1;             /*!< There is an explosion on the Tile. */
	/* FF00 0000 */ PACK uint32 index:8;                    /*!< Index of the Structure / Unit (index 1 is Structure/Unit 0, etc). */
} GCC_PACKED Tile;
MSVC_PACKED_END
assert_compile(sizeof(Tile) == 0x04);

/** Definition of the map size of a map scale. */
typedef struct MapInfo {
	uint16 minX;                                            /*!< Minimal X position of the map. */
	uint16 minY;                                            /*!< Minimal Y position of the map. */
	uint16 sizeX;                                           /*!< Width of the map. */
	uint16 sizeY;                                           /*!< Height of the map. */
} MapInfo;

/**
 * Information about LandscapeType.
 */
typedef struct LandscapeInfo {
	uint8  movementSpeed[6];                                /*!< Per MovementType the speed a Unit has on this LandscapeType. */
	bool   letUnitWobble;                                   /*!< True if a Unit on this LandscapeType should wobble around while moving on it. */
	bool   isValidForStructure;                             /*!< True if a Structure with notOnConcrete false can be build on this LandscapeType. */
	bool   isSand;                                          /*!< True if the LandscapeType is a sand tile (sand, dune, spice, thickspice, bloom). */
	bool   isValidForStructure2;                            /*!< True if a Structure with notOnConcrete true can be build on this LandscapeType. */
	bool   canBecomeSpice;                                  /*!< True if the LandscapeType can become a spice tile. */
	uint8  craterType;                                      /*!< Type of crater on tile; 0 for none, 1 for sand, 2 for concrete. */
	uint16 radarColour;                                     /*!< Colour used on radar for this LandscapeType. */
	uint16 spriteID;                                        /*!< Sprite used on map for this LandscapeType. */
} LandscapeInfo;

struct Unit;

extern uint16 g_mapSpriteID[];
extern Tile g_map[];
extern uint8 g_functions[3][3];

extern uint8 g_dirtyMinimap[512];
extern uint8 g_displayedMinimap[512];
extern uint8 g_dirtyViewport[512];
extern uint8 g_displayedViewport[512];

extern uint16 g_changedTilesCount;
extern uint16 g_changedTiles[200];
extern uint8 g_changedTilesMap[512];

extern const MapInfo g_mapInfos[3];
extern const tile32 g_table_tilediff[][8];

extern uint16 g_dirtyViewportCount;
extern uint16 g_var_3A08;

extern const LandscapeInfo g_table_landscapeInfo[LST_MAX];

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
extern uint16 Map_GetLandscapeType(uint16 packed);
extern void Map_Update(uint16 packed, uint16 type, bool ignoreInvisible);
extern void Map_DeviateArea(uint16 type, tile32 position, uint16 radius);
extern void Map_Bloom_ExplodeSpice(uint16 packed, uint8 houseID);
extern void Map_FillCircleWithSpice(uint16 packed, uint16 radius);
extern void Map_ChangeSpiceAmount(uint16 packed, int16 dir);
extern void Map_SetViewportPosition(uint16 packed);
extern void Map_Bloom_ExplodeSpecial(uint16 packed, uint8 houseID);
extern uint16 Map_FindLocationTile(uint16 locationID, uint8 houseID);
extern void Map_UpdateAround(uint16 arg06, tile32 position, struct Unit *unit, uint8 function);
extern uint16 Map_SearchSpice(uint16 packed, uint16 radius);
extern void Map_SelectNext(bool arg06);
extern bool Map_UnveilTile(uint16 packed, uint8 houseID);
extern void Map_CreateLandscape(uint32 seed);
extern void Map_MarkTileDirty(uint16 packed);

#endif /* MAP_H */
