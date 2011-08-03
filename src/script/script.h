/* $Id$ */

/** @file src/script/script.h Generic script definitions. */

#ifndef SCRIPT_H
#define SCRIPT_H

enum {
	SCRIPT_UNIT_OPCODES_PER_TICK = 50,                      /*!< The amount of opcodes a unit can execute per tick. */

	SCRIPT_FUNCTIONS_COUNT = 64                             /*!< There are never more than 64 functions for a script category. */
};

/**
 * A ScriptEngine as stored in the memory.
 */
typedef struct ScriptEngine {
	uint16 delay;                                           /*!< How many more ticks the script is suspended (or zero if not suspended). */
	uint16 *script;                                         /*!< Pointer to current command in the script we are executing. */
	struct ScriptInfo *scriptInfo;                          /*!< Pointer to a struct with script information. */
	uint16 returnValue;                                     /*!< Return value from sub-routines. */
	uint8  framePointer;                                    /*!< Frame pointer. */
	uint8  stackPointer;                                    /*!< Stack pointer. */
	uint16 variables[5];                                    /*!< Variables to store values in (outside the stack). Accessed by all kinds of routines outside the scripts! */
	uint16 stack[15];                                       /*!< Stack of the script engine, starting at the end. */
	uint8  isSubroutine;                                    /*!< The script we are executing is a subroutine. */
} ScriptEngine;

typedef uint16 (*ScriptFunction)(ScriptEngine *script);

/**
 * A ScriptInfo as stored in the memory.
 */
typedef struct ScriptInfo {
	uint16 *text;                                           /*!< Pointer to TEXT section of the scripts. */
	uint16 *start;                                          /*!< Pointer to the begin of the scripts. */
	uint16 *offsets;                                        /*!< Pointer to an array of offsets of where to start with a script for a typeID. */
	uint16 offsetsCount;                                    /*!< Number of words in offsets array. */
	uint16 startCount;                                      /*!< Number of words in start. */
	const ScriptFunction *functions;                        /*!< Pointer to an array of functions pointers which scripts with this scriptInfo can call. */
	uint16 isAllocated;                                     /*!< Memory has been allocated on load. */
} ScriptInfo;

extern struct Object *g_scriptCurrentObject;
extern struct Structure *g_scriptCurrentStructure;
extern struct Unit *g_scriptCurrentUnit;
extern struct Team *g_scriptCurrentTeam;

extern ScriptInfo *g_scriptStructure;
extern ScriptInfo *g_scriptTeam;
extern ScriptInfo *g_scriptUnit;

extern const ScriptFunction g_scriptFunctionsStructure[];
extern const ScriptFunction g_scriptFunctionsTeam[];
extern const ScriptFunction g_scriptFunctionsUnit[];

void Script_Reset(ScriptEngine *script, ScriptInfo *scriptInfo);
extern void Script_Load(ScriptEngine *script, uint8 typeID);
extern bool Script_IsLoaded(ScriptEngine *script);
extern bool Script_Run(ScriptEngine *script);
extern void Script_LoadAsSubroutine(ScriptEngine *script, uint8 typeID);
extern void Script_ClearInfo(ScriptInfo *scriptInfo);
extern uint16 Script_LoadFromFile(const char *filename, ScriptInfo *scriptInfo, const ScriptFunction *functions, uint8 *data);

/* General Script Functions */
extern uint16 Script_General_Delay(ScriptEngine *script);
extern uint16 Script_General_DelayRandom(ScriptEngine *script);
extern uint16 Script_General_GetDistance(ScriptEngine *script);
extern uint16 Script_General_NoOperation(ScriptEngine *script);
extern uint16 Script_General_DisplayText(ScriptEngine *script);
extern uint16 Script_General_RandomRange(ScriptEngine *script);
extern uint16 Script_General_Unknown0184(ScriptEngine *script);
extern uint16 Script_General_Unknown024B(ScriptEngine *script);
extern uint16 Script_General_Unknown0288(ScriptEngine *script);
extern uint16 Script_General_GetOrientation(ScriptEngine *script);
extern uint16 Script_General_UnitCount(ScriptEngine *script);
extern uint16 Script_General_DecodeIndex(ScriptEngine *script);
extern uint16 Script_General_GetIndexType(ScriptEngine *script);
extern uint16 Script_General_GetLinkedUnitType(ScriptEngine *script);
extern uint16 Script_General_VoicePlay(ScriptEngine *script);
extern uint16 Script_General_Unknown0456(ScriptEngine *script);
extern uint16 Script_General_Unknown04AE(ScriptEngine *script);
extern uint16 Script_General_Unknown050C(ScriptEngine *script);
extern uint16 Script_General_Unknown0594(ScriptEngine *script);

/* Structure Script Functions */
extern uint16 Script_Structure_GetAnimation(ScriptEngine *script);
extern uint16 Script_Structure_SetAnimation(ScriptEngine *script);
extern uint16 Script_Structure_RemoveFogAroundTile(ScriptEngine *script);
extern uint16 Script_Structure_RefineSpice(ScriptEngine *script);
extern uint16 Script_Structure_Unknown0A81(ScriptEngine *script);
extern uint16 Script_Structure_Unknown0AFC(ScriptEngine *script);
extern uint16 Script_Structure_Unknown0C5A(ScriptEngine *script);
extern uint16 Script_Structure_FindTargetUnit(ScriptEngine *script);
extern uint16 Script_Structure_RotateTurret(ScriptEngine *script);
extern uint16 Script_Structure_GetDirection(ScriptEngine *script);
extern uint16 Script_Structure_Unknown11B9(ScriptEngine *script);
extern uint16 Script_Structure_VoicePlay(ScriptEngine *script);
extern uint16 Script_Structure_Fire(ScriptEngine *script);
extern uint16 Script_Structure_Unknown1524(ScriptEngine *script);
extern uint16 Script_Structure_Destroy(ScriptEngine *script);

/* Team Script Functions */
extern uint16 Script_Team_GetMembers(ScriptEngine *script);
extern uint16 Script_Team_GetVariable6(ScriptEngine *script);
extern uint16 Script_Team_GetTarget(ScriptEngine *script);
extern uint16 Script_Team_AddCloserUnit(ScriptEngine *script);
extern uint16 Script_Team_GetAverageDistance(ScriptEngine *script);
extern uint16 Script_Team_Unknown0543(ScriptEngine *script);
extern uint16 Script_Team_FindBestTarget(ScriptEngine *script);
extern uint16 Script_Team_Load(ScriptEngine *script);
extern uint16 Script_Team_Load2(ScriptEngine *script);
extern uint16 Script_Team_Unknown0788(ScriptEngine *script);
extern uint16 Script_Team_DisplayText(ScriptEngine *script);

/* Unit Script Functions */
extern uint16 Script_Unit_RandomSoldier(ScriptEngine *script);
extern uint16 Script_Unit_FindBestTarget(ScriptEngine *script);
extern uint16 Script_Unit_GetTargetPriority(ScriptEngine *script);
extern uint16 Script_Unit_Unknown0882(ScriptEngine *script);
extern uint16 Script_Unit_Unknown0BC3(ScriptEngine *script);
extern uint16 Script_Unit_Unknown0FA2(ScriptEngine *script);
extern uint16 Script_Unit_Unknown0FD2(ScriptEngine *script);
extern uint16 Script_Unit_Unknown105E(ScriptEngine *script);
extern uint16 Script_Unit_Unknown1098(ScriptEngine *script);
extern uint16 Script_Unit_Unknown12CE(ScriptEngine *script);
extern uint16 Script_Unit_SelfExplode(ScriptEngine *script);
extern uint16 Script_Unit_Unknown13CD(ScriptEngine *script);
extern uint16 Script_Unit_Fire(ScriptEngine *script);
extern uint16 Script_Unit_GetOrientation(ScriptEngine *script);
extern uint16 Script_Unit_Unknown196C(ScriptEngine *script);
extern uint16 Script_Unit_Unknown1A40(ScriptEngine *script);
extern uint16 Script_Unit_Unknown1A9F(ScriptEngine *script);
extern uint16 Script_Unit_Unknown1B45(ScriptEngine *script);
extern uint16 Script_Unit_SetAction(ScriptEngine *script);
extern uint16 Script_Unit_SetActionDefault(ScriptEngine *script);
extern uint16 Script_Unit_Unknown1C6F(ScriptEngine *script);
extern uint16 Script_Unit_Unknown1CFE(ScriptEngine *script);
extern uint16 Script_Unit_CalculateRoute(ScriptEngine *script);
extern uint16 Script_Unit_Unknown212E(ScriptEngine *script);
extern uint16 Script_Unit_GetAmount(ScriptEngine *script);
extern uint16 Script_Unit_IsInTransport(ScriptEngine *script);
extern uint16 Script_Unit_Unknown22C4(ScriptEngine *script);
extern uint16 Script_Unit_Unknown246C(ScriptEngine *script);
extern uint16 Script_Unit_Unknown2552(ScriptEngine *script);
extern uint16 Script_Unit_FindStructure(ScriptEngine *script);
extern uint16 Script_Unit_DisplayDestroyedText(ScriptEngine *script);
extern uint16 Script_Unit_RemoveFog(ScriptEngine *script);
extern uint16 Script_Unit_Harvest(ScriptEngine *script);
extern uint16 Script_Unit_Unknown27A4(ScriptEngine *script);
extern uint16 Script_Unit_Unknown28B1(ScriptEngine *script);
extern uint16 Script_Unit_Unknown291A(ScriptEngine *script);
extern uint16 Script_Unit_GoToClosestStructure(ScriptEngine *script);
extern uint16 Script_Unit_MCVDeploy(ScriptEngine *script);
extern uint16 Script_Unit_Unknown2B97(ScriptEngine *script);
extern uint16 Script_Unit_Unknown2BD5(ScriptEngine *script);
extern uint16 Script_Unit_Blink(ScriptEngine *script);


#endif /* SCRIPT_H */
