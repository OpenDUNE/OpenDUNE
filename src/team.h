/* $Id$ */

/** @file src/team.h %Team definitions. */

#ifndef TEAM_H
#define TEAM_H

#include "script/script.h"

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


MSVC_PACKED_BEGIN
/**
 * An Team as stored in the memory.
 */
typedef struct Team {
	/* 0000(2)   */ PACK uint16 index;                      /*!< The index of the Team in the array. */
	/* 0002(2)   */ PACK union {
	                     struct {
	/*      0001 */              BITTYPE used:1;            /*!< The Team is in use (no longer free in the pool). */
	/*      0002 */              BITTYPE notused_0002:15;   /*!< Never used - remaining bits. */
	                     } GCC_PACKED s;
	                     uint16 all; } flags;               /*!< General flags of the Team. */
	/* 0004(2)   */ PACK uint16 members;                    /*!< Amount of members in team. */
	/* 0006(2)   */ PACK uint16 variable_06;                /*!< ?? */
	/* 0008(2)   */ PACK uint16 maxMembers;                 /*!< Maximum amount of members in team. */
	/* 000A(2)   */ PACK uint16 movementType;               /*!< MovementType of Team. */
	/* 000C(2)   */ PACK uint16 variable_0C;                /*!< ?? */
	/* 000E(2)   */ PACK uint16 variable_0E;                /*!< ?? */
	/* 0010(2)   */ PACK uint8  houseID;                    /*!< House of Team. */
	/* 0011()    */ PACK uint8   unknown_0011[0x0003];
	/* 0014(4)   */ PACK tile32 position;                   /*!< Position on the map. */
	/* 0018(2)   */ PACK uint16 variable_18;                /*!< ?? */
	/* 001A(2)   */ PACK uint16 target;                     /*!< Current target of team (encoded index). */
	/* 001C(55)  */ PACK ScriptEngine script;               /*!< The script engine instance of this Team. */
} GCC_PACKED Team;
MSVC_PACKED_END
assert_compile(sizeof(Team) == 0x53);

extern void GameLoop_Team();
extern bool Team_Save(FILE *fp);
extern bool Team_Load(FILE *fp, uint32 length);
extern Team *Team_Create(uint8 houseID, uint8 teamActionType, uint8 movementType, uint16 unknown1, uint16 unknown2);
extern uint8 Team_ActionStringToType(const char *name);

#endif /* TEAM_H */
