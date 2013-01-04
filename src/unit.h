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
	UNIT_MCV              = 17,
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
 * Flags used to indicate units in a bitmask.
 */
typedef enum UnitFlag {
	FLAG_UNIT_CARRYALL         = 1 << UNIT_CARRYALL,         /* 0x______01 */
	FLAG_UNIT_ORNITHOPTER      = 1 << UNIT_ORNITHOPTER,      /* 0x______02 */
	FLAG_UNIT_INFANTRY         = 1 << UNIT_INFANTRY,         /* 0x______04 */
	FLAG_UNIT_TROOPERS         = 1 << UNIT_TROOPERS,         /* 0x______08 */
	FLAG_UNIT_SOLDIER          = 1 << UNIT_SOLDIER,          /* 0x______10 */
	FLAG_UNIT_TROOPER          = 1 << UNIT_TROOPER,          /* 0x______20 */
	FLAG_UNIT_SABOTEUR         = 1 << UNIT_SABOTEUR,         /* 0x______40 */
	FLAG_UNIT_LAUNCHER         = 1 << UNIT_LAUNCHER,         /* 0x______80 */
	FLAG_UNIT_DEVIATOR         = 1 << UNIT_DEVIATOR,         /* 0x____01__ */
	FLAG_UNIT_TANK             = 1 << UNIT_TANK,             /* 0x____02__ */
	FLAG_UNIT_SIEGE_TANK       = 1 << UNIT_SIEGE_TANK,       /* 0x____04__ */
	FLAG_UNIT_DEVASTATOR       = 1 << UNIT_DEVASTATOR,       /* 0x____08__ */
	FLAG_UNIT_SONIC_TANK       = 1 << UNIT_SONIC_TANK,       /* 0x____10__ */
	FLAG_UNIT_TRIKE            = 1 << UNIT_TRIKE,            /* 0x____20__ */
	FLAG_UNIT_RAIDER_TRIKE     = 1 << UNIT_RAIDER_TRIKE,     /* 0x____40__ */
	FLAG_UNIT_QUAD             = 1 << UNIT_QUAD,             /* 0x____80__ */
	FLAG_UNIT_HARVESTER        = 1 << UNIT_HARVESTER,        /* 0x__01____ */
	FLAG_UNIT_MCV              = 1 << UNIT_MCV,              /* 0x__02____ */
	FLAG_UNIT_MISSILE_HOUSE    = 1 << UNIT_MISSILE_HOUSE,    /* 0x__04____ */
	FLAG_UNIT_MISSILE_ROCKET   = 1 << UNIT_MISSILE_ROCKET,   /* 0x__08____ */
	FLAG_UNIT_MISSILE_TURRET   = 1 << UNIT_MISSILE_TURRET,   /* 0x__10____ */
	FLAG_UNIT_MISSILE_DEVIATOR = 1 << UNIT_MISSILE_DEVIATOR, /* 0x__20____ */
	FLAG_UNIT_MISSILE_TROOPER  = 1 << UNIT_MISSILE_TROOPER,  /* 0x__40____ */
	FLAG_UNIT_BULLET           = 1 << UNIT_BULLET,           /* 0x__80____ */
	FLAG_UNIT_SONIC_BLAST      = 1 << UNIT_SONIC_BLAST,      /* 0x01______ */
	FLAG_UNIT_SANDWORM         = 1 << UNIT_SANDWORM,         /* 0x02______ */
	FLAG_UNIT_FRIGATE          = 1 << UNIT_FRIGATE,          /* 0x04______ */

	FLAG_UNIT_NONE             = 0
} UnitFlag;

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
	tile32 currentDestination;                              /*!< Where the Unit is currently going to. */
	uint16 originEncoded;                                   /*!< Encoded index, indicating the origin. */
	uint8  actionID;                                        /*!< Current action. */
	uint8  nextActionID;                                    /*!< Next action. */
	uint16 fireDelay;                                       /*!< Delay between firing. In Dune2 this is an uint8. */
	uint16 distanceToDestination;                           /*!< How much distance between where we are now and where currentDestination is. */
	uint16 targetAttack;                                    /*!< Target to attack (encoded index). */
	uint16 targetMove;                                      /*!< Target to move to (encoded index). */
	uint8  amount;                                          /*!< Meaning depends on type:
	                                                         * - Sandworm : units to eat before disappearing.
	                                                         * - Harvester : harvested spice.
	                                                         */
	uint8  deviated;                                        /*!< ?? If non-zero, the unit is deviated, but what does it hold exactly? */
	tile32 targetLast;                                      /*!< The last position of the Unit. Carry-alls will return the Unit here. */
	tile32 targetPreLast;                                   /*!< The position before the last position of the Unit. */
	dir24  orientation[2];                                  /*!< Orientation of the unit. [0] = base, [1] = top (turret, etc). */
	uint8  speedSub;                                        /*!< The amount to move (modulo 16). */
	uint8  speedRemainder;                                  /*!< Remainder of speedSub (till it tips over 16). */
	uint8  speed;                                           /*!< The amount to move (divided by 16). */
	uint8  movingSpeed;                                     /*!< The speed of moving as last set. */
	uint8  wobbleIndex;                                     /*!< At which wobble index the Unit currently is. */
	 int8  spriteOffset;                                    /*!< Offset of the current sprite for Unit. */
	uint8  blinkCounter;                                    /*!< If non-zero, it indicates how many more ticks this unit is blinking. */
	uint8  team;                                            /*!< If non-zero, unit is part of team. Value 1 means team 0, etc. */
	uint16 timer;                                           /*!< Timer used in animation, to count down when to do the next step. */
	uint8  route[14];                                       /*!< The current route the Unit is following. */
} Unit;

/**
 * Static information per Unit type.
 */
typedef struct UnitInfo {
	ObjectInfo o;                                           /*!< Common to UnitInfo and StructureInfo. */
	uint16 indexStart;                                      /*!< At Unit create, between this and indexEnd (including) a free index is picked. */
	uint16 indexEnd;                                        /*!< At Unit create, between indexStart and this (including) a free index is picked. */
	struct {
		BIT_U8 isBullet:1;                                  /*!< If true, Unit is a bullet / missile. */
		BIT_U8 explodeOnDeath:1;                            /*!< If true, Unit exploses when dying. */
		BIT_U8 sonicProtection:1;                           /*!< If true, Unit receives no damage of a sonic blast. */
		BIT_U8 canWobble:1;                                 /*!< If true, Unit will wobble around while moving on certain tiles. */
		BIT_U8 isTracked:1;                                 /*!< If true, Unit is tracked-based (and leaves marks in sand). */
		BIT_U8 isGroundUnit:1;                              /*!< If true, Unit is ground-based. */
		BIT_U8 mustStayInMap:1;                             /*!< Unit cannot leave the map and bounces off the border (air-based units). */
		BIT_U8 firesTwice:1;                                /*!< If true, Unit fires twice. */
		BIT_U8 impactOnSand:1;                              /*!< If true, hitting sand (as bullet / missile) makes an impact (crater-like). */
		BIT_U8 isNotDeviatable:1;                           /*!< If true, Unit can't be deviated. */
		BIT_U8 hasAnimationSet:1;                           /*!< If true, the Unit has two set of sprites for animation. */
		BIT_U8 notAccurate:1;                               /*!< If true, Unit is a bullet and is not very accurate at hitting the target (rockets). */
		BIT_U8 isNormalUnit:1;                              /*!< If true, Unit is a normal unit (not a bullet / missile, nor a sandworm / frigate). */
	} flags;                                                /*!< General flags of the UnitInfo. */
	uint16 dimension;                                       /*!< The dimension of the Unit Sprite. */
	uint16 movementType;                                    /*!< MovementType of Unit. */
	uint16 animationSpeed;                                  /*!< Speed of sprite animation of Unit. */
	uint16 movingSpeedFactor;                               /*!< Factor speed of movement of Unit, where 256 is full speed. */
	uint8  turningSpeed;                                    /*!< Speed of orientation change of Unit. */
	uint16 groundSpriteID;                                  /*!< SpriteID for north direction. */
	uint16 turretSpriteID;                                  /*!< SpriteID of the turret for north direction. */
	uint16 actionAI;                                        /*!< Default action for AI units. */
	uint16 displayMode;                                     /*!< How to draw the Unit. */
	uint16 destroyedSpriteID;                               /*!< SpriteID of burning Unit for north direction. Can be zero if no such animation. */
	uint16 fireDelay;                                       /*!< Time between firing at Normal speed. */
	uint16 fireDistance;                                    /*!< Maximal distance this Unit can fire from. */
	uint16 damage;                                          /*!< Damage this Unit does to other Units. */
	uint16 explosionType;                                   /*!< Type of the explosion of Unit. */
	uint8  bulletType;                                      /*!< Type of the bullets of Unit. */
	uint16 bulletSound;                                     /*!< Sound for the bullets. */
} UnitInfo;

/**
 * Static information per Action type.
 */
typedef struct ActionInfo {
	uint16 stringID;                                        /*!< StringID of Action name. */
	const char *name;                                       /*!< Name of Action. */
	uint16 switchType;                                      /*!< When going to new mode, how do we handle it? 0: queue if needed, 1: change immediately, 2: run via subroutine. */
	uint16 selectionType;                                   /*!< Selection type attached to this action. */
	uint16 soundID;                                         /*!< The sound played when unit is a Foot unit. */
} ActionInfo;

struct Team;
struct Structure;

extern const char *g_table_movementTypeName[];

extern const uint16 g_table_actionsAI[];
extern const ActionInfo g_table_actionInfo[];
extern UnitInfo g_table_unitInfo[];

extern Unit *g_unitActive;
extern Unit *g_unitHouseMissile;
extern Unit *g_unitSelected;
extern int16 g_starportAvailable[UNIT_MAX];

extern uint16 g_var_39E6;
extern uint16 g_var_39E8;


extern void GameLoop_Unit(void);
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
extern void Unit_Sort(void);
extern Unit *Unit_Get_ByPackedTile(uint16 packed);
extern uint16 Unit_IsValidMovementIntoStructure(Unit *unit, struct Structure *s);
extern void Unit_SetDestination(Unit *u, uint16 destination);
extern uint16 Unit_GetTargetUnitPriority(Unit *unit, Unit *target);
extern uint16 Unit_FindClosestRefinery(Unit *unit);
extern bool Unit_SetPosition(Unit *u, tile32 position);
extern void Unit_Remove(Unit *u);
extern Unit *Unit_FindBestTargetUnit(Unit *u, uint16 mode);
extern Unit *Unit_Sandworm_FindBestTarget(Unit *unit);
extern bool Unit_StartMovement(Unit *unit);
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
extern bool Unit_IsTileOccupied(Unit *unit);
extern void Unit_SetSpeed(Unit *unit, uint16 speed);
extern Unit *Unit_CreateBullet(tile32 position, UnitType type, uint8 houseID, uint16 damage, uint16 target);
extern void Unit_DisplayStatusText(Unit *unit);
extern void Unit_Hide(Unit *unit);
extern Unit *Unit_CallUnitByType(UnitType type, uint8 houseID, uint16 target, bool createCarryall);
extern void Unit_EnterStructure(Unit *unit, struct Structure *s);
extern int16 Unit_GetTileEnterScore(Unit *unit, uint16 packed, uint16 direction);
extern uint16 Unit_FindBestTargetEncoded(Unit *unit, uint16 mode);
extern void Unit_RemovePlayer(Unit *unit);
extern void Unit_UpdateMap(uint16 type, Unit *unit);
extern void Unit_RemoveFromTile(Unit *unit, uint16 packed);
extern void Unit_AddToTile(Unit *unit, uint16 packed);
extern uint16 Unit_GetTargetStructurePriority(Unit *unit, struct Structure *s);
extern void Unit_LaunchHouseMissile(uint16 packed);
extern void Unit_HouseUnitCount_Remove(Unit *unit);
extern void Unit_HouseUnitCount_Add(Unit *unit, uint8 houseID);

#endif /* UNIT_H */
