/* $Id$ */

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
 * Directional information
 */
typedef struct dir24 {
	/* 0000(1)  */ PACK int8 speed;                        /*!< Speed of direction change. */
	/* 0001(1)  */ PACK int8 target;                       /*!< Target direction. */
	/* 0002(1)  */ PACK int8 current;                      /*!< Current direction. */
} GCC_PACKED dir24;
MSVC_PACKED_END
assert_compile(sizeof(dir24) == 0x3);

MSVC_PACKED_BEGIN
/**
 * A Unit as stored in the memory.
 */
typedef struct Unit {
	/* 0000(71)  */ PACK Object o;                          /*!< Common to Unit and Structures. */
	/* 0047()    */ PACK uint8   unknown_0047[0x0002];
	/* 0049(4)   */ PACK tile32 variable_49;                /*!< ?? */
	/* 004D(2)   */ PACK uint16 originEncoded;              /*!< Encoded index, indicating the origin. */
	/* 004F(1)   */ PACK uint8  actionID;                   /*!< Current action. */
	/* 0050(1)   */ PACK uint8  nextActionID;               /*!< Next action. */
	/* 0051(1)   */ PACK uint8  fireDelay;                  /*!< ?? */
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
	/* 0062(6)   */ PACK dir24  orientation[2];             /*!< Orientation of the unit. [0] = base, [1] = top (turret, etc). */
	/* 0068(1)   */ PACK uint8  variable_68;                /*!< ?? */
	/* 0069(1)   */ PACK uint8  variable_69;                /*!< ?? */
	/* 006A(1)   */ PACK uint8  variable_6A;                /*!< ?? */
	/* 006B(1)   */ PACK uint8  variable_6B;                /*!< ?? */
	/* 006C(1)   */ PACK uint8  variable_6C;                /*!< ?? */
	/* 006D(1)   */ PACK  int8  variable_6D;                /*!< ?? */
	/* 006E(1)   */ PACK uint8  variable_6E;                /*!< ?? */
	/* 006F(1)   */ PACK uint8  team;                       /*!< If not zero, unit is part of team. Value 1 means team 0, etc. */
	/* 0070(1)   */ PACK uint16 variable_70;                /*!< ?? */
	/* 0072(1)   */ PACK uint8  variable_72[14];            /*!< ?? */
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
	/* 000C(2)   */ PACK union {
	                     struct {
	/*      0001 */              BITTYPE variable_0001:1;   /*!< ?? */
	/*      0002 */              BITTYPE variable_0002:1;   /*!< ?? */
	/*      0004 */              BITTYPE variable_0004:1;   /*!< ?? */
	/*      0008 */              BITTYPE variable_0008:1;   /*!< ?? */
	/*      0010 */              BITTYPE variable_0010:1;   /*!< ?? */
	/*      0020 */              BITTYPE variable_0020:1;   /*!< ?? */
	/*      0040 */              BITTYPE hasTurret:1;       /*!< If true, the Unit has a turret seperate from his base unit. */
	/*      0080 */              BITTYPE variable_0080:1;   /*!< ?? Used in Script Commands. */
	/*      0100 */              BITTYPE variable_0100:1;   /*!< ?? Used in Script Commands. */
	/*      0200 */              BITTYPE noMessageOnDeath:1;/*!< Do not show a message (or sound) when this Unit is destroyed. */
	/*      0400 */              BITTYPE tabSelectable:1;   /*!< Is Unit selectable by pressing tab (which cycles through all Units and Structures). */
	/*      0800 */              BITTYPE scriptNoSlowdown:1;/*!< If Unit is outside viewport, do not slow down scripting. */
	/*      1000 */              BITTYPE targetAir:1;       /*!< Can target (and shoot) air units. */
	/*      2000 */              BITTYPE priority:1;        /*!< If not set, it is never seen as any priority for Units (for auto-attack). */
	/*      -    */              BITTYPE notused:2;         /*!< The remaining bits are never used. */
	                     } GCC_PACKED s;
	                     uint16 all; } flags;               /*!< General flags of the UnitInfo. */
	/* 000E(2)   */ PACK uint16 variable_0E;                /*!< ?? Create a new soldier if rand() < this value. */
	/* 0010(2)   */ PACK uint16 hitpoints;                  /*!< Default hitpoints for this Unit. */
	/* 0012(2)   */ PACK uint16 fogUncoverRadius;           /*!< Radius of fog to uncover. */
	/* 0014(2)   */ PACK uint16 spriteID;                   /*!< SpriteID of Unit. */
	/* 0016(2)   */ PACK uint16 buildCredits;               /*!< How much credits it cost to build this Unit. Upgrading is 50% of this value. */
	/* 0018(2)   */ PACK uint16 buildTime;                  /*!< Time required to build this Unit. */
	/* 001A()    */ PACK uint8   unknown_001A[0x0008];
	/* 0022(8)   */ PACK uint16 actionsPlayer[4];           /*!< Actions for player units. */
	/* 002A()    */ PACK uint8   unknown_002A[0x0001];
	/* 002B(2)   */ PACK uint16 variable_2B;                /*!< ?? */
	/* 002D(2)   */ PACK uint16 priorityBuild;              /*!< The amount of priority a Unit has when a new Unit has to be build. */
	/* 002F(2)   */ PACK uint16 priorityTarget;             /*!< The amount of priority a Unit has when being targetted. */
	/* 0031()    */ PACK uint8   unknown_0031[0x0001];
	/* 0032(2)   */ PACK uint16 indexStart;                 /*!< At Unit create, between this and indexEnd (including) a free index is picked. */
	/* 0034(2)   */ PACK uint16 indexEnd;                   /*!< At Unit create, between indexStart and this (including) a free index is picked. */
	/* 0036(2)   */ PACK uint16 variable_36;                /*!< ?? */
	/* 0038(2)   */ PACK uint16 variable_38;                /*!< ?? */
	/* 003A()    */ PACK uint8   unknown_003A[0x0002];
	/* 003C(2)   */ PACK uint16 movementType;               /*!< MovementType of Unit. */
	/* 003E(2)   */ PACK uint16 variable_3E;                /*!< ?? */
	/* 0040(2)   */ PACK uint16 variable_40;                /*!< ?? */
	/* 0042(1)   */ PACK uint8  variable_42;                /*!< ?? */
	/* 0043()    */ PACK uint8   unknown_0043[0x0001];
	/* 0044(2)   */ PACK uint16 variable_44;                /*!< ?? */
	/* 0046(2)   */ PACK uint16 variable_46;                /*!< ?? */
	/* 0048(2)   */ PACK uint16 actionAI;                   /*!< Default action for AI units. */
	/* 004A(2)   */ PACK uint16 variable_4A;                /*!< ?? */
	/* 004C(2)   */ PACK uint16 variable_4C;                /*!< ?? */
	/* 004E(2)   */ PACK uint16 fireDelay;                  /*!< Time between firing at Normal speed. */
	/* 0050(2)   */ PACK uint16 variable_50;                /*!< ?? */
	/* 0052(2)   */ PACK uint16 damage;                     /*!< ?? */
	/* 0054(2)   */ PACK uint16 variable_54;                /*!< ?? */
	/* 0056(2)   */ PACK uint16 bulletType;                 /*!< Type of the bullets of Unit */
	/* 0058(2)   */ PACK uint16 variable_58;                /*!< ?? */
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
	/* 0008(2)   */ PACK uint16 variable_08;                /*!< ?? */
	/* 000A(2)   */ PACK uint16 variable_0A;                /*!< ?? */
} GCC_PACKED ActionInfo;
MSVC_PACKED_END
assert_compile(sizeof(ActionInfo) == 0x0C);

struct Team;
struct Structure;

extern UnitInfo *g_unitInfo;
extern ActionInfo *g_actionInfo;

extern void GameLoop_Unit();
extern uint8 Unit_GetHouseID(Unit *u);
extern uint8 Unit_StringToType(const char *name);
extern uint8 Unit_ActionStringToType(const char *name);
extern uint8 Unit_TeamActionStringToType(const char *name);
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
extern uint16 Unit_GetTargetPriority(Unit *unit, Unit *target);
extern uint16 Unit_FindClosestRefinery(Unit *unit);
extern bool Unit_SetPosition(Unit *u, tile32 position);
extern void Unit_Unknown10EC(Unit *u);
extern Unit *Unit_FindBestTarget(Unit *u, uint16 mode);
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
extern uint16 Unit_Unknown3146(Unit *unit, uint16 packed, uint16 arg0C);
extern uint16 Unit_FindBestTargetEncoded(Unit *unit, uint16 mode);
extern bool Unit_Unknown379B(Unit *unit);
extern void Unit_B4CD_01BF(uint16 arg06, Unit *unit);
extern void Unit_RemoveFromTile(Unit *unit, uint16 packed);
extern void Unit_B4CD_048E(Unit *unit, uint16 packed);


extern void emu_Unit_GetHouseID();
extern void emu_Unit_Create();
extern void emu_Unit_SetAction();
extern void emu_Unit_RemoveFromTeam();
extern void emu_Unit_GetTeam();
extern void emu_Unit_Sort();
extern void emu_Unit_Get_ByPackedTile();
extern void emu_Unit_Unknown10EC();
extern void emu_Unit_SetTarget();
extern void emu_Unit_RemoveFog();
extern void emu_Unit_Deviate();
extern void emu_Unit_Damage();
extern void emu_Unit_Select();
extern void emu_Unit_CreateBullet();
extern void emu_Unit_DisplayStatusText();
extern void emu_Unit_Unknown3146();
extern void emu_Unit_B4CD_01BF();

#endif /* UNIT_H */
