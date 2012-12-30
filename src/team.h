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


/**
 * An Team as stored in the memory.
 */
typedef struct Team {
	uint16 index;                                           /*!< The index of the Team in the array. */
	struct {
		BIT_U8 used:1;                                      /*!< The Team is in use (no longer free in the pool). */
		BIT_U8 notused_0002:7;                              /*!< Never used - remaining bits. */
	} flags;                                                /*!< General flags of the Team. */
	uint16 members;                                         /*!< Amount of members in Team. */
	uint16 minMembers;                                      /*!< Minimum amount of members in Team. */
	uint16 maxMembers;                                      /*!< Maximum amount of members in Team. */
	uint16 movementType;                                    /*!< MovementType of Team. */
	uint16 action;                                          /*!< Current TeamActionType of Team. */
	uint16 actionStart;                                     /*!< The TeamActionType Team starts with. */
	uint8  houseID;                                         /*!< House of Team. */
	tile32 position;                                        /*!< Position on the map. */
	uint16 targetTile;                                      /*!< Current target tile around the target. Only used as a bool, so either set or not. */
	uint16 target;                                          /*!< Current target of team (encoded index). */
	ScriptEngine script;                                    /*!< The script engine instance of this Team. */
} Team;

extern const char *g_table_teamActionName[];

extern void GameLoop_Team(void);
extern bool Team_Save(FILE *fp);
extern bool Team_Load(FILE *fp, uint32 length);
extern Team *Team_Create(uint8 houseID, uint8 teamActionType, uint8 movementType, uint16 unknown1, uint16 unknown2);
extern uint8 Team_ActionStringToType(const char *name);

#endif /* TEAM_H */
