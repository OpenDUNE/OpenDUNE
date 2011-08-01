/* $Id$ */

/** @file src/house.h %House management definitions. */

#ifndef HOUSE_H
#define HOUSE_H

/**
 * Types of %Houses available in the game.
 */
typedef enum HouseType {
	HOUSE_HARKONNEN = 0,
	HOUSE_ATREIDES  = 1,
	HOUSE_ORDOS     = 2,
	HOUSE_FREMEN    = 3,
	HOUSE_SARDAUKAR = 4,
	HOUSE_MERCENARY = 5,

	HOUSE_MAX       = 6,
	HOUSE_INVALID   = 0xFF
} HouseType;

/**
 * Types of special %House Weapons available in the game.
 */
typedef enum HouseWeapon {
	HOUSE_WEAPON_MISSLE   = 1,
	HOUSE_WEAPON_FREMEN   = 2,
	HOUSE_WEAPON_SABOTEUR = 3,

	HOUSE_WEAPON_INVALID = 0xFF
} HouseWeapon;

typedef enum HouseAnimationType {
	HOUSEANIMATION_INTRO            = 0,
	HOUSEANIMATION_LEVEL4_HARKONNEN = 1,
	HOUSEANIMATION_LEVEL4_ARTREIDES = 2,
	HOUSEANIMATION_LEVEL4_ORDOS     = 3,
	HOUSEANIMATION_LEVEL8_HARKONNEN = 4,
	HOUSEANIMATION_LEVEL8_ARTREIDES = 5,
	HOUSEANIMATION_LEVEL8_ORDOS     = 6,
	HOUSEANIMATION_LEVEL9_HARKONNEN = 7,
	HOUSEANIMATION_LEVEL9_ARTREIDES = 8,
	HOUSEANIMATION_LEVEL9_ORDOS     = 9
} HouseAnimationType;

/**
 * A %House as stored in the memory.
 */
typedef struct House {
	uint8  index;                      /*!< The index of the House in the array. */
	uint16 variable_02;                /*!< ?? */
	struct {
		BIT_U8 used:1;                 /*!< The House is in use (no longer free in the pool). */
		BIT_U8 human:1;                /*!< The House is controlled by a human. */
		BIT_U8 variable_0004:1;        /*!< ?? */
		BIT_U8 variable_0008:1;        /*!< ?? */
		BIT_U8 radarActivated:1;       /*!< The radar is activated. */
		BIT_U8 unused_0020:3;          /*!< Unused */
	} flags;                           /*!< General flags of the House. */
	uint16 unitCount;                  /*!< Amount of units owned by House. */
	uint16 unitCountMax;               /*!< Maximum amount of units this House is allowed to have. */
	uint16 unitCountEnemy;             /*!< ?? Amount of units owned by allied. */
	uint16 unitCountAllied;            /*!< ?? Amount of units owned by enemy. */
	uint32 structuresBuilt;            /*!< The Nth bit active means the Nth structure type is built (one or more). */
	uint16 credits;                    /*!< Amount of credits the House currently has. */
	uint16 creditsStorage;             /*!< Amount of credits the House can store. */
	uint16 powerProduction;            /*!< Amount of power the House produces. */
	uint16 powerUsage;                 /*!< Amount of power the House requires. */
	uint16 windtrapCount;              /*!< Amount of windtraps the House currently has. */
	uint16 creditsQuota;               /*!< Quota house has to reach to win the mission. */
	tile32 palacePosition;             /*!< Position of the Palace. */
	uint16 variable_24;                /*!< ?? */
	uint16 variable_26;                /*!< ?? */
	uint16 variable_28;                /*!< ?? */
	uint16 starportTimeLeft;           /*!< How much time is left before starport transport arrives. */
	uint16 starportLinkedID;           /*!< If there is a starport delivery, this indicates the first unit of the linked list. Otherwise it is 0xFFFF. */
	uint16 ai_structureRebuild[5][2];  /*!< An array for the AI which stores the type and position of a destroyed structure, for rebuilding. */
} House;

/**
 * Static information per House type.
 */
typedef struct HouseInfo {
	const char *name;                                       /*!< Pointer to name of house. */
	uint16 variable_04;                                     /*!< ?? Default amount of deviation decreased? */
	uint16 variable_06;                                     /*!< ?? */
	uint16 variable_08;                                     /*!< ?? Amount of damage per 'degrade' round? */
	uint16 minimapColor;                                    /*!< The color used on the minimap. */
	uint16 specialCountDown;                                /*!< Time between activation of Special Weapon. */
	uint16 starportDeliveryTime;                            /*!< Time it takes for a starport delivery. */
	uint16 prefixChar;                                      /*!< Char used as prefix for some filenames. */
	uint16 specialWeapon;                                   /*!< Which Special Weapon this House has. @see HouseWeapon. */
	uint16 musicWin;                                        /*!< Music played when you won a mission. */
	uint16 musicLose;                                       /*!< Music played when you lose a mission. */
	uint16 musicBriefing;                                   /*!< Music played during initial briefing of mission. */
	const char *voiceFilename;                              /*!< Pointer to filename with the voices of the house. */
} HouseInfo;

/**
 * The information for a single animation frame in House Animation. It is part
 *  of an array that stops when variable_0004 is 0.
 */
typedef struct HouseAnimation_Animation {
	const char *string;                                     /*!< Name of the WSA for this animation. */
	uint8  variable_0004;                                   /*!< ?? */
	uint8  variable_0005;                                   /*!< ?? */
	uint16 flags;                                           /*!< ?? */
} HouseAnimation_Animation;

/**
 * Subtitle information part of House Information. It is part of an array that
 *  stops when stringID is 0xFFFF.
 */
typedef struct HouseAnimation_Subtitle {
	uint16 stringID;                                        /*!< ?? */
	uint16 variable_0002;                                   /*!< ?? */
	uint8  variable_0004;                                   /*!< ?? */
	uint8  top;                                             /*!< ?? */
	uint8  variable_0006;                                   /*!< ?? */
	uint8  variable_0007;                                   /*!< ?? */
	uint8  variable_0008;                                   /*!< ?? */
	uint8  variable_0009;                                   /*!< ?? */
} HouseAnimation_Subtitle;

/**
 * Voice information part of House Information. It is part of an array that
 *  stops when voiceID is 0xFF.
 */
typedef struct HouseAnimation_Voice {
	uint8  variable_0000;                                   /*!< ?? */
	uint8  voiceID;                                         /*!< ?? */
	uint8  variable_0002;                                   /*!< ?? */
} HouseAnimation_Voice;

extern const HouseInfo g_table_houseInfo[];
extern const HouseAnimation_Animation g_houseAnimation_animation[][32];
extern const HouseAnimation_Subtitle g_houseAnimation_subtitle[][32];
extern const HouseAnimation_Voice g_houseAnimation_voice[][90];

extern House *g_playerHouse;
extern HouseType g_playerHouseID;
extern uint16 g_houseMissileCountdown;
extern uint16 g_playerCreditsNoSilo;
extern uint16 g_playerCredits;
extern uint32 g_tickHousePowerMaintenance;

extern void GameLoop_House();
extern uint8 House_StringToType(const char *name);
extern void House_EnsureHarvesterAvailable(uint8 houseID);
extern bool House_AreAllied(uint8 houseID1, uint8 houseID2);
extern bool House_UpdateRadarState(House *h);
extern void House_UpdateCreditsStorage(uint8 houseID);
extern void House_CalculatePowerAndCredit(struct House *h);
extern const char *House_GetWSAHouseFilename(uint8 houseID);

#endif /* HOUSE_H */
