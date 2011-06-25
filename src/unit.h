/* $Id$ */

/** @file src/unit.h %Unit definitions. */

#ifndef UNIT_H
#define UNIT_H

#include "object.h"

/**
 * Types of Units available in the game.
 */
typedef enum UnitType {
	UNIT_CARRYALL         = 0,
	UNIT_ORNITHOPTER      = 1,
	UNIT_INFANTRY         = 2,
	UNIT_TROOPERS         = 3,
	UNIT_SOLDIER          = 4,
	UNIT_TROOPER          = 5,
	UNIT_SABOTEUR         = 6,
	UNIT_LAUNCHER         = 7,
	UNIT_DEVIATOR         = 8,
	UNIT_TANK             = 9,
	UNIT_SIEGE_TANK       = 10,
	UNIT_DEVASTATOR       = 11,
	UNIT_SONIC_TANK       = 12,
	UNIT_TRIKE            = 13,
	UNIT_RAIDER_TRIKE     = 14,
	UNIT_QUAD             = 15,
	UNIT_HARVESTER        = 16,
	UNIT_MGV              = 17,
	UNIT_MISSILE_HOUSE    = 18,
	UNIT_MISSILE_ROCKET   = 19,
	UNIT_MISSILE_TURRET   = 20,
	UNIT_MISSILE_DEVIATOR = 21,
	UNIT_MISSILE_TROOPER  = 22,
	UNIT_BULLET           = 23,
	UNIT_SONIC_BLAST      = 24,
	UNIT_SANDWORM         = 25,
	UNIT_FRIGATE          = 26,

	UNIT_MAX              = 27,
	UNIT_INVALID          = 0xFF
} UnitType;

/**
 * Types of Actions available in the game.
 */
typedef enum ActionType {
	ACTION_ATTACK        = 0,
	ACTION_MOVE          = 1,
	ACTION_RETREAT       = 2,
	ACTION_GUARD         = 3,
	ACTION_AREA_GUARD    = 4,
	ACTION_HARVEST       = 5,
	ACTION_RETURN        = 6,
	ACTION_STOP          = 7,
	ACTION_AMBUSH        = 8,
	ACTION_SABOTAGE      = 9,
	ACTION_DIE           = 10,
	ACTION_HUNT          = 11,
	ACTION_DEPLOY        = 12,
	ACTION_DESTRUCT      = 13,

	ACTION_MAX           = 14,
	ACTION_INVALID       = 0xFF
} ActionType;

/**
 * Types of Movements available in the game.
 */
typedef enum MovementType {
	MOVEMENT_FOOT        = 0,
	MOVEMENT_TRACKED     = 1,
	MOVEMENT_HARVESTER   = 2,
	MOVEMENT_WHEELED     = 3,
	MOVEMENT_WINGER      = 4,
	MOVEMENT_SLITHER     = 5,

	MOVEMENT_MAX         = 6,
	MOVEMENT_INVALID     = 0xFF
} MovementType;

/**
 * Directional information
 */
typedef struct dir24 {
	int8 speed;                                             /*!< Speed of direction change. */
	int8 target;                                            /*!< Target direction. */
	int8 current;                                           /*!< Current direction. */
} dir24;

/**
 * A Unit as stored in the memory.
 */
typedef struct Unit {
	Object o;                                               /*!< Common to Unit and Structures. */
	tile32 variable_49;                                     /*!< ?? */
	uint16 originEncoded;                                   /*!< Encoded index, indicating the origin. */
	uint8  actionID;                                        /*!< Current action. */
	uint8  nextActionID;                                    /*!< Next action. */
	uint8  fireDelay;                                       /*!< ?? */
	uint16 variable_52;                                     /*!< ?? */
	uint16 targetAttack;                                    /*!< Target to attack (encoded index). */
	uint16 targetMove;                                      /*!< Target to move to (encoded index). */
	uint8  amount;                                          /*!< Meaning depends on type:
	                                                         * - Sandworm : units to eat before disappearing.
	                                                         * - Harvester : harvested spice.
	                                                         */
	uint8  deviated;                                        /*!< ?? If non-zero, the unit is deviated, but what does it hold exactly? */
	tile32 variable_5A;                                     /*!< ?? */
	tile32 variable_5E;                                     /*!< ?? */
	dir24  orientation[2];                                  /*!< Orientation of the unit. [0] = base, [1] = top (turret, etc). */
	uint8  variable_68;                                     /*!< ?? */
	uint8  variable_69;                                     /*!< ?? */
	uint8  variable_6A;                                     /*!< ?? */
	uint8  variable_6B;                                     /*!< ?? */
	uint8  variable_6C;                                     /*!< ?? */
	 int8  variable_6D;                                     /*!< ?? */
	uint8  blinkCounter;                                    /*!< If non-zero, it indicates how many more ticks this unit is blinking. */
	uint8  team;                                            /*!< If non-zero, unit is part of team. Value 1 means team 0, etc. */
	uint16 variable_70;                                     /*!< ?? */
	uint8  variable_72[14];                                 /*!< ?? */
} Unit;

/**
 * Static information per Unit type.
 */
typedef struct UnitInfo {
	ObjectInfo o;                                           /*!< Common to UnitInfo and StructureInfo. */
	uint16 indexStart;                                      /*!< At Unit create, between this and indexEnd (including) a free index is picked. */
	uint16 indexEnd;                                        /*!< At Unit create, between indexStart and this (including) a free index is picked. */
	union {
		struct {
			BITTYPE notused_0001:1;                         /*!< Not used. */
			BITTYPE variable_0002:1;                        /*!< ?? */
			BITTYPE variable_0004:1;                        /*!< ?? */
			BITTYPE sonicProtection:1;                      /*!< If true, the Unit receives no damage of a sonic blast. */
			BITTYPE variable_0010:1;                        /*!< ?? */
			BITTYPE variable_0020:1;                        /*!< ?? */
			BITTYPE variable_0040:1;                        /*!< ?? */
			BITTYPE variable_0080:1;                        /*!< ?? */
			BITTYPE notused_1000:1;                         /*!< Not used. */
			BITTYPE notused_0200:1;                         /*!< Not used. */
			BITTYPE variable_0400:1;                        /*!< ?? */
			BITTYPE variable_0800:1;                        /*!< ?? */
			BITTYPE deviateProtection:1;                    /*!< If true, the Unit can't be deviated. */
			BITTYPE variable_2000:1;                        /*!< ?? */
			BITTYPE variable_4000:1;                        /*!< ?? */
			BITTYPE variable_8000:1;                        /*!< ?? */
		} s;
		uint16 all; } flags;                                /*!< General flags of the UnitInfo. */
	uint16 variable_38;                                     /*!< ?? */
	uint8   unknown_003A[0x0002];
	uint16 movementType;                                    /*!< MovementType of Unit. */
	uint16 variable_3E;                                     /*!< ?? */
	uint16 variable_40;                                     /*!< ?? */
	uint8  turningSpeed;                                    /*!< Speed of orientation change of the Unit. */
	uint8   unknown_0043[0x0001];
	uint16 spriteID;                                        /*!< SpriteID for north direction. */
	uint16 turretSpriteID;                                  /*!< SpriteID of the turret for north direction. */
	uint16 actionAI;                                        /*!< Default action for AI units. */
	uint16 displayMode;                                     /*!< How to draw the Unit. */
	uint16 variable_4C;                                     /*!< ?? */
	uint16 fireDelay;                                       /*!< Time between firing at Normal speed. */
	uint16 variable_50;                                     /*!< ?? */
	uint16 damage;                                          /*!< Damage this Unit does to other Units. */
	uint16 explosionType;                                   /*!< Type of the explosion of Unit. */
	uint16 bulletType;                                      /*!< Type of the bullets of Unit. */
	uint16 bulletSound;                                     /*!< Sound for the bullets. */
} UnitInfo;

/**
 * Static information per Action type.
 */
typedef struct ActionInfo {
	uint16 stringID;                                        /*!< StringID of Action name. */
	const char *name;                                       /*!< Name of Action. */
	uint16 variable_06;                                     /*!< ?? */
	uint16 variable_08;                                     /*!< ?? */
	uint16 variable_0A;                                     /*!< ?? */
} ActionInfo;

struct Team;
struct Structure;

extern const uint16 g_table_actionsAI[];
extern const ActionInfo g_table_actionInfo[];
extern UnitInfo g_table_unitInfo[];

extern Unit *g_unitActive;
extern Unit *g_unitHouseMissile;
extern Unit *g_unitSelected;

extern void GameLoop_Unit();
extern uint8 Unit_GetHouseID(Unit *u);
extern uint8 Unit_StringToType(const char *name);
extern uint8 Unit_ActionStringToType(const char *name);
extern uint8 Unit_MovementStringToType(const char *name);
extern struct Unit *Unit_Create(uint16 index, uint8 typeID, uint8 houseID, tile32 position, int8 orientation);
extern bool Unit_IsTypeOnMap(uint8 houseID, uint8 typeID);
extern void Unit_SetAction(Unit *u, ActionType action);
extern uint16 Unit_AddToTeam(Unit *u, struct Team *t);
extern uint16 Unit_RemoveFromTeam(Unit *u);
extern struct Team *Unit_GetTeam(Unit *u);
extern void Unit_Sort();
extern Unit *Unit_Get_ByPackedTile(uint16 packed);
extern uint16 Unit_IsValidMovementIntoStructure(Unit *unit, struct Structure *s);
extern void Unit_SetDestination(Unit *u, uint16 destination);
extern bool Unit_Save(FILE *fp);
extern bool Unit_Load(FILE *fp, uint32 length);
extern uint16 Unit_GetTargetUnitPriority(Unit *unit, Unit *target);
extern uint16 Unit_FindClosestRefinery(Unit *unit);
extern bool Unit_SetPosition(Unit *u, tile32 position);
extern void Unit_Unknown10EC(Unit *u);
extern Unit *Unit_FindBestTargetUnit(Unit *u, uint16 mode);
extern Unit *Unit_Unknown15F4(Unit *unit);
extern bool Unit_Unknown167C(Unit *unit);
extern void Unit_SetTarget(Unit* unit, uint16 encoded);
extern bool Unit_Deviation_Decrease(Unit* unit, uint16 amount);
extern void Unit_RemoveFog(Unit *unit);
extern bool Unit_Deviate(Unit *unit, uint16 probability);
extern bool Unit_Move(Unit *unit, uint16 distance);
extern bool Unit_Damage(Unit *unit, uint16 damage, uint16 range);
extern void Unit_UntargetMe(Unit *unit);
extern void Unit_SetOrientation(Unit *unit, int8 orientation, bool rotateInstantly, uint16 level);
extern void Unit_Select(Unit *unit);
extern Unit *Unit_CreateWrapper(uint8 houseID, UnitType type, uint16 location);
extern uint16 Unit_FindTargetAround(uint16 packed);
extern bool Unit_Unknown0E2E(Unit *unit);
extern void Unit_Unknown204C(Unit *unit, uint16 arg0A);
extern Unit *Unit_CreateBullet(tile32 position, UnitType type, uint8 houseID, uint16 damage, uint16 target);
extern void Unit_DisplayStatusText(Unit *unit);
extern void Unit_Unknown2AAA(Unit *unit);
extern Unit *Unit_Unknown2BB5(UnitType type, uint8 houseID, uint16 target, bool arg0C);
extern void Unit_EnterStructure(Unit *unit, struct Structure *s);
extern int16 Unit_Unknown3146(Unit *unit, uint16 packed, uint16 arg0C);
extern uint16 Unit_FindBestTargetEncoded(Unit *unit, uint16 mode);
extern bool Unit_Unknown379B(Unit *unit);
extern void Unit_B4CD_01BF(uint16 arg06, Unit *unit);
extern void Unit_RemoveFromTile(Unit *unit, uint16 packed);
extern void Unit_AddToTile(Unit *unit, uint16 packed);
extern uint16 Unit_GetTargetStructurePriority(Unit *unit, struct Structure *s);
extern void Unit_LaunchHouseMissile(uint16 packed);
extern void Unit_HouseUnitCount_Remove(Unit *unit);
extern void Unit_HouseUnitCount_Add(Unit *unit, uint8 houseID);

#endif /* UNIT_H */
