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
	/* 0002(2)   */ PACK uint16 flags;                      /*!< Bitflags. 0x0001 - Used. */
	/* 0004(2)   */ PACK uint16 members;                    /*!< Amount of members in team. */
	/* 0006()    */ PACK uint8   unknown_0006[0x0002];
	/* 0008(2)   */ PACK uint16 maxMembers;                 /*!< Maximum amount of members in team. */
	/* 000A()    */ PACK uint8   unknown_000A[0x0006];
	/* 0010(2)   */ PACK uint8  houseID;                    /*!< House of Team. */
	/* 0011()    */ PACK uint8   unknown_0011[0x0009];
	/* 001A(2)   */ PACK uint16 target;                     /*!< Current target of team (encoded index). */
	/* 001C(2)   */ PACK uint16 scriptDelay;                /*!< How many more ticks the script is suspended (or zero if not suspended). */
	/* 001E(53)  */ PACK ScriptEngine script;               /*!< The script engine instance of this Team. */
} GCC_PACKED Team;
MSVC_PACKED_END
assert_compile(sizeof(Team) == 0x53);

extern void GameLoop_Team();
extern bool Team_Save(FILE *fp);
extern bool Team_Load(FILE *fp, uint32 length);


extern void emu_GameLoop_Team();

#endif /* TEAM_H */
