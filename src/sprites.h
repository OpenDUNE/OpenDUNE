/** @file src/sprites.h Sprite definitions. */

#ifndef SPRITES_H
#define SPRITES_H

#include "gfx.h"

/**
 * The \c ICON.MAP contains indices only. An index can point either to another
 * index or to a spriteID in the tiles file, as follows.
 *  - Index 0 contain the number of icon groups (including the EOF entry).
 *  - Each index in 1 .. number_of_icongroups-1 points to the first spriteID of a icon group.
 *  - Index number_of_icongroups is 0, meaning 'the index at EOF'.
 *
 * Icon group at index i contains sprite indices. The first one is pointed to by
 * index i, the last one is one entry before the start of icon group i+1 (where 0
 * means EOF, as explained already).
 */
typedef enum IconMapEntries {
	ICM_ICONGROUP_COUNT,                 /*!< Number of icon groups. */
	/* Icon groups. */
	ICM_ICONGROUP_ROCK_CRATERS           =  1, /*!< Rock craters spriteIDs. */
	ICM_ICONGROUP_SAND_CRATERS           =  2, /*!< Sand craters spriteIDs. */
	ICM_ICONGROUP_FLY_MACHINES_CRASH     =  3, /*!< Carry-all / thopter crash and craters spriteIDs. */
	ICM_ICONGROUP_SAND_DEAD_BODIES       =  4, /*!< Dead bodies in the sand spriteIDs. */
	ICM_ICONGROUP_SAND_TRACKS            =  5, /*!< Tracks in the sand spriteIDs. */
	ICM_ICONGROUP_WALLS                  =  6, /*!< Wall parts spriteIDs. */
	ICM_ICONGROUP_FOG_OF_WAR             =  7, /*!< Fog of war spriteIDs. */
	ICM_ICONGROUP_CONCRETE_SLAB          =  8, /*!< Concrete slab spriteIDs. */
	ICM_ICONGROUP_LANDSCAPE              =  9, /*!< Landscape spriteIDs. */
	ICM_ICONGROUP_SPICE_BLOOM            = 10, /*!< Spice bloom spriteIDs. */
	ICM_ICONGROUP_HOUSE_PALACE           = 11, /*!< Palace spriteIDs. */
	ICM_ICONGROUP_LIGHT_VEHICLE_FACTORY  = 12, /*!< Light vehicles factory spriteIDs. */
	ICM_ICONGROUP_HEAVY_VEHICLE_FACTORY  = 13, /*!< Heavy vehicles factory spriteIDs. */
	ICM_ICONGROUP_HI_TECH_FACTORY        = 14, /*!< Hi-tech factory spriteIDs. */
	ICM_ICONGROUP_IX_RESEARCH            = 15, /*!< IX Research facility spriteIDs. */
	ICM_ICONGROUP_WOR_TROOPER_FACILITY   = 16, /*!< WOR trooper facility spriteIDs. */
	ICM_ICONGROUP_CONSTRUCTION_YARD      = 17, /*!< Construction yard spriteIDs. */
	ICM_ICONGROUP_INFANTRY_BARRACKS      = 18, /*!< Infantry barracks spriteIDs. */
	ICM_ICONGROUP_WINDTRAP_POWER         = 19, /*!< Windtrap facility spriteIDs. */
	ICM_ICONGROUP_STARPORT_FACILITY      = 20, /*!< Starport facility spriteIDs. */
	ICM_ICONGROUP_SPICE_REFINERY         = 21, /*!< Spice refinery spriteIDs. */
	ICM_ICONGROUP_VEHICLE_REPAIR_CENTRE  = 22, /*!< Repair center spriteIDs. */
	ICM_ICONGROUP_BASE_DEFENSE_TURRET    = 23, /*!< Gun turret spriteIDs. */
	ICM_ICONGROUP_BASE_ROCKET_TURRET     = 24, /*!< Rocket turret spriteIDs. */
	ICM_ICONGROUP_SPICE_STORAGE_SILO     = 25, /*!< Spice storage spriteIDs. */
	ICM_ICONGROUP_RADAR_OUTPOST          = 26, /*!< Radar outpost spriteIDs. */
	ICM_ICONGROUP_EOF                    = 27  /*!< End of file spriteIDs. */
} IconMapEntries;

extern uint8 **g_sprites;
extern uint8 *g_spriteBuffer;
extern uint8 *g_iconRTBL;
extern uint8 *g_iconRPAL;
extern uint8 *g_spriteInfo;
extern uint16 *g_iconMap;

extern uint8 *g_fileRgnclkCPS;
extern void *g_fileRegionINI;
extern uint16 *g_regions;

extern void *g_mouseSprite;
extern void *g_mouseSpriteBuffer;

extern uint16 g_veiledSpriteID;                             /*!< SpriteID of the veiled sprite, at the end of the partily veiled sprites. */
extern uint16 g_bloomSpriteID;                              /*!< First bloom field spriteID. */
extern uint16 g_landscapeSpriteID;                          /*!< First landscape spriteID. */
extern uint16 g_builtSlabSpriteID;                          /*!< SpriteID of the built concrete slab. */
extern uint16 g_wallSpriteID;                               /*!< First wall spriteID. */

extern void Sprites_Init(void);
extern void Sprites_Uninit(void);
extern uint8 Sprite_GetWidth(uint8 *sprite);
extern uint8 Sprite_GetHeight(uint8 *sprite);
extern uint16 Sprites_GetType(uint8 *sprite);
extern void Sprites_LoadTiles(void);
extern void Sprites_UnloadTiles(void);
extern uint16 Sprites_LoadImage(const char *filename, Screen screenID, uint8 *palette);
extern void Sprites_SetMouseSprite(uint16 x, uint16 y, uint8 *sprite);
extern void Sprites_CPS_LoadRegionClick(void);
extern bool Sprite_IsUnveiled(uint16 spriteID);


#endif /* SPRITES_H */
