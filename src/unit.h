/* $Id$ */

#ifndef UNIT_H
#define UNIT_H

#include "script/script.h"

/**
 * Types of Units available in the game.
 */
typedef enum UnitType {
	UNIT_CARRYALL        = 0,
	UNIT_ORNITHOPTER     = 1,
	UNIT_INFANTRY        = 2,
	UNIT_TROOPERS        = 3,
	UNIT_SOLDIER         = 4,
	UNIT_TROOPER         = 5,
	UNIT_SABOTEUR        = 6,
	UNIT_LAUNCHER        = 7,
	UNIT_DEVIATOR        = 8,
	UNIT_TANK            = 9,
	UNIT_SIEGE_TANK      = 10,
	UNIT_DEVASTATOR      = 11,
	UNIT_SONIC_TANK      = 12,
	UNIT_TRIKE           = 13,
	UNIT_RAIDER_TRIKE    = 14,
	UNIT_QUAD            = 15,
	UNIT_HARVESTER       = 16,
	UNIT_MGV             = 17,
	UNIT_MISSLE_HOUSE    = 18,
	UNIT_MISSLE_ROCKET   = 19,
	UNIT_MISSLE_TURRET   = 20,
	UNIT_MISSLE_DEVIATOR = 21,
	UNIT_MISSLE_TROOPER  = 22,
	UNIT_BULLET          = 23,
	UNIT_SONIC_BLAST     = 24,
	UNIT_SANDWORM        = 25,
	UNIT_FRIGATE         = 26,

	UNIT_MAX             = 27,
	UNIT_INVALID         = 0xFF
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
 * Types of TeamActions available in the game.
 */
typedef enum TeamActionType {
	TEAM_ACTION_NORMAL   = 0,
	TEAM_ACTION_STAGING  = 1,
	TEAM_ACTION_FLEE     = 2,
	TEAM_ACTION_KAMIKAZE = 3,
	TEAM_ACTION_GUARD    = 4,

	TEAM_ACTION_MAX      = 5,
	TEAM_ACTION_INVALID  = 0xFF
} TeamActionType;

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

MSVC_PACKED_BEGIN
/**
 * A Unit as stored in the memory.
 */
typedef struct Unit {
	/* 0000(2)   */ PACK uint16 index;                      /*!< The index of the Unit in the array. */
	/* 0002(1)   */ PACK uint8  type;                       /*!< Type of Unit. */
	/* 0003(1)   */ PACK uint8  linkedID;                   /*!< Structure/unit we are linked to, or 0xFF if we are not linked to a structure/unit. */
	/* 0004(2)   */ PACK uint16 flags;                      /*!< Bitflags. 0x0001 - Used, 0x0002 - Allocated, 0x0004 - Being Built, 0x0008 - ??, 0x0100 - In Transport, 0x0200 - Scenario Unit, 0x0800 - ??. */
	/* 0006(2)   */ PACK uint16 variable_06;                /*!< ?? */
	/* 0008(1)   */ PACK uint8  houseID;                    /*!< House of Unit. */
	/* 0009(1)   */ PACK uint8  variable_09;                /*!< ?? */
	/* 000A(4)   */ PACK tile32 position;                   /*!< Position on the map. */
	/* 000E(2)   */ PACK uint16 hitpoints;                  /*!< Current hitpoints left. */
	/* 0010(2)   */ PACK uint16 scriptDelay;                /*!< How many more ticks the script is suspended (or zero if not suspended). */
	/* 0012(53)  */ PACK ScriptEngine script;               /*!< The script engine instance of this Unit. */
	/* 0047()    */ PACK uint8   unknown_0047[0x0002];
	/* 0049(4)   */ PACK tile32 variable_49;                /*!< ?? */
	/* 004D(2)   */ PACK uint16 variable_4D;                /*!< ?? */
	/* 004F(1)   */ PACK uint8  actionID;                   /*!< Current action. */
	/* 0050(1)   */ PACK uint8  nextActionID;               /*!< Next action. */
	/* 0051(1)   */ PACK uint8  variable_51;                /*!< ?? */
	/* 0052(2)   */ PACK uint16 variable_52;                /*!< ?? */
	/* 0054(2)   */ PACK uint16 targetAttack;               /*!< Target to attack (encoded index). */
	/* 0056(2)   */ PACK uint16 targetMove;                 /*!< Target to move to (encoded index). */
	/* 0058(1)   */ PACK uint8  amount;                     /*!< Meaning depends on type:
	                                                         * - Sandworm : units to eat before disappearing.
	                                                         * - Harvester : harvested spice.
	                                                         */
	/* 0059(1)   */ PACK uint8  deviated;                   /*!< ?? If non-zero, the unit is deviated, but what does it hold exactly? */
	/* 005A(4)   */ PACK tile32 variable_5A;                /*!< ?? */
	/* 005E(4)   */ PACK tile32 variable_5E;                /*!< ?? */
	/* 0062(2)   */ PACK uint16 variable_62;                /*!< ?? unknown argument of Unit_Create. */
	/* 0064(1)   */ PACK uint8  variable_64;                /*!< ?? */
	/* 0065(2)   */ PACK uint16 variable_65;                /*!< ?? unknown argument of Unit_Create. */
	/* 0067()    */ PACK uint8   unknown_0067[0x0003];
	/* 006A(1)   */ PACK uint8  variable_6A;                /*!< ?? */
	/* 006B(1)   */ PACK uint8  variable_6B;                /*!< ?? */
	/* 006C(1)   */ PACK uint8  variable_6C;                /*!< ?? */
	/* 006D(1)   */ PACK  int8  variable_6D;                /*!< ?? */
	/* 006E(1)   */ PACK uint8  variable_6E;                /*!< ?? */
	/* 006F(1)   */ PACK uint8  team;                       /*!< If not zero, unit is part of team. Value 1 means team 0, etc. */
	/* 0070(1)   */ PACK uint16 variable_70;                /*!< ?? */
	/* 0072(1)   */ PACK uint8  variable_72;                /*!< ?? */
	/* 0073()    */ PACK uint8   unknown_0073[0x000D];
} GCC_PACKED Unit;
MSVC_PACKED_END
assert_compile(sizeof(Unit) == 0x80);

MSVC_PACKED_BEGIN
/**
 * Static information per Unit type.
 */
typedef struct UnitInfo {
	/* 0000(2)   */ PACK uint16 stringID_abbrev;            /*!< StringID of abbreviated name of Unit. */
	/* 0002(4)   */ PACK csip32 name;                       /*!< Pointer to name of Unit. */
	/* 0006(2)   */ PACK uint16 stringID_full;              /*!< StringID of full name of Unit. */
	/* 0008(4)   */ PACK csip32 wsa;                        /*!< Pointer to name of .wsa file. */
	/* 000C(2)   */ PACK uint16 variable_0C;                /*!< Bitflags. 0x0040 - ??, 0x0200 - ??, 0x0800 - ??. */
	/* 000E(2)   */ PACK uint16 variable_0E;                /*!< ?? Create a new soldier if rand() < this value. */
	/* 0010(2)   */ PACK uint16 hitpoints;                  /*!< Default hitpoints for this Unit. */
	/* 0012()    */ PACK uint8   unknown_0012[0x0004];
	/* 0016(2)   */ PACK uint16 buildCredits;               /*!< How much credits it cost to build this Unit. Upgrading is 50% of this value. */
	/* 0018(2)   */ PACK uint16 buildTime;                  /*!< Time required to build this Unit. */
	/* 001A()    */ PACK uint8   unknown_001A[0x000E];
	/* 0028(2)   */ PACK uint16 actionPlayer;               /*!< Default action for player units. */
	/* 002A()    */ PACK uint8   unknown_002A[0x0008];
	/* 0032(2)   */ PACK uint16 indexStart;                 /*!< At Unit create, between this and indexEnd (including) a free index is picked. */
	/* 0034(2)   */ PACK uint16 indexEnd;                   /*!< At Unit create, between indexStart and this (including) a free index is picked. */
	/* 0036(2)   */ PACK uint16 variable_36;                /*!< ?? */
	/* 0038()    */ PACK uint8   unknown_0038[0x0004];
	/* 003C(2)   */ PACK uint16 variable_3C;                /*!< ?? */
	/* 003E(2)   */ PACK uint16 variable_3E;                /*!< ?? */
	/* 0040()    */ PACK uint8   unknown_0040[0x0008];
	/* 0048(2)   */ PACK uint16 actionAI;                   /*!< Default action for AI units. */
	/* 004A()    */ PACK uint8   unknown_004A[0x0010];
} GCC_PACKED UnitInfo;
MSVC_PACKED_END
assert_compile(sizeof(UnitInfo) == 0x5A);

MSVC_PACKED_BEGIN
/**
 * Static information per Action type.
 */
typedef struct ActionInfo {
	/* 0000()    */ PACK uint8   unknown_0000[0x0002];
	/* 0002(4)   */ PACK csip32 name;                       /*!< Name of Action. */
	/* 0006(2)   */ PACK uint16 variable_06;                /*!< ?? */
	/* 0008()    */ PACK uint8   unknown_0008[0x0004];
} GCC_PACKED ActionInfo;
MSVC_PACKED_END
assert_compile(sizeof(ActionInfo) == 0x0C);

struct Team;

extern UnitInfo *g_unitInfo;
extern ActionInfo *g_actionInfo;

extern void GameLoop_Unit();
extern uint8 Unit_GetHouseID(Unit *u);
extern uint8 Unit_StringToType(const char *name);
extern uint8 Unit_ActionStringToType(const char *name);
extern uint8 Unit_TeamActionStringToType(const char *name);
extern uint8 Unit_MovementStringToType(const char *name);
extern struct Unit *Unit_Create(uint16 index, uint8 typeID, uint8 houseID, tile32 position, uint16 unknown);
extern bool Unit_IsTypeOnMap(uint8 houseID, uint8 typeID);
extern void Unit_SetAction(Unit *u, ActionType action);
extern uint16 Unit_AddToTeam(Unit *u, struct Team *t);
extern uint16 Unit_RemoveFromTeam(Unit *u);

extern void emu_GameLoop_Unit();
extern void emu_Unit_GetHouseID();
extern void emu_Unit_Create();
extern void emu_Unit_IsTypeOnMap();
extern void emu_Unit_SetAction();
extern void emu_Unit_AddToTeam();
extern void emu_Unit_RemoveFromTeam();

#endif /* UNIT_H */
