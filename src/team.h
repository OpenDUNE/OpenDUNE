/* $Id$ */

#ifndef TEAM_H
#define TEAM_H

#include "script.h"

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
	/* 0004()    */ PACK uint8   unknown_0004[0x000C];
	/* 0010(2)   */ PACK uint8  houseID;                    /*!< House of Team. */
	/* 0011()    */ PACK uint8   unknown_0011[0x000B];
	/* 001C(2)   */ PACK uint16 scriptDelay;                /*!< How many more ticks the script is suspended (or zero if not suspended). */
	/* 001E(53)  */ PACK ScriptEngine script;               /*!< The script engine instance of this Team. */
} GCC_PACKED Team;
MSVC_PACKED_END
assert_compile(sizeof(Team) == 0x53);

extern void GameLoop_Team();


extern void emu_GameLoop_Team();

#endif /* TEAM_H */
