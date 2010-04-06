/* $Id$ */

#ifndef TEAM_H
#define TEAM_H

#include "script/script.h"

/**
 * Types of Teams available in the game.
 * TODO -- Complete the enum.
 */
typedef enum TeamType {
	TEAM_INVALID = 0xFFFF
} TeamType;

MSVC_PACKED_BEGIN
/**
 * An Team as stored in the memory.
 */
typedef struct Team {
	/* 0000(2)   */ PACK uint16 index;                      /*!< The index of the Team in the array. */
	/* 0002(2)   */ PACK union {
	                     struct {
	/*      0001 */              BITTYPE used:1;            /*!< The Team is in use (no longer free in the pool). */
	/*      0002 */              BITTYPE unknown_0002:1;
	/*      0004 */              BITTYPE unknown_0004:1;
	/*      0008 */              BITTYPE unknown_0008:1;
	/*      0010 */              BITTYPE unknown_0010:1;
	/*      0020 */              BITTYPE unknown_0020:1;
	/*      0040 */              BITTYPE unknown_0040:1;
	/*      0080 */              BITTYPE unknown_0080:1;
	/*      0100 */              BITTYPE unknown_0100:1;
	/*      0200 */              BITTYPE unknown_0200:1;
	/*      0400 */              BITTYPE unknown_0400:1;
	/*      0800 */              BITTYPE unknown_0800:1;
	/*      1000 */              BITTYPE unknown_1000:1;
	/*      2000 */              BITTYPE unknown_2000:1;
	/*      4000 */              BITTYPE unknown_4000:1;
	/*      8000 */              BITTYPE unknown_8000:1;
	                     } GCC_PACKED s;
	                     uint16 all; } flags;               /*!< General flags of the Team. */
	/* 0004(2)   */ PACK uint16 members;                    /*!< Amount of members in team. */
	/* 0006(2)   */ PACK uint16 variable_06;                /*!< ?? */
	/* 0008(2)   */ PACK uint16 maxMembers;                 /*!< Maximum amount of members in team. */
	/* 000A(2)   */ PACK uint16 variable_0A;                /*!< ?? */
	/* 000A(2)   */ PACK uint16 variable_0C;                /*!< ?? */
	/* 000A(2)   */ PACK uint16 variable_0E;                /*!< ?? */
	/* 0010(2)   */ PACK uint8  houseID;                    /*!< House of Team. */
	/* 0011()    */ PACK uint8   unknown_0011[0x0003];
	/* 0014(4)   */ PACK tile32 position;                   /*!< Position on the map. */
	/* 0018(2)   */ PACK uint16 variable_18;                /*!< ?? */
	/* 001A(2)   */ PACK uint16 target;                     /*!< Current target of team (encoded index). */
	/* 001C(2)   */ PACK uint16 scriptDelay;                /*!< How many more ticks the script is suspended (or zero if not suspended). */
	/* 001E(53)  */ PACK ScriptEngine script;               /*!< The script engine instance of this Team. */
} GCC_PACKED Team;
MSVC_PACKED_END
assert_compile(sizeof(Team) == 0x53);

extern void GameLoop_Team();
extern bool Team_Save(FILE *fp);
extern bool Team_Load(FILE *fp, uint32 length);
extern Team *Team_Create(uint8 houseID, uint8 teamActionType, uint8 movementType, uint16 unknown1, uint16 unknown2);

#endif /* TEAM_H */
