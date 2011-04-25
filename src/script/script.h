/* $Id$ */

#ifndef SCRIPT_H
#define SCRIPT_H

enum {
	SCRIPT_FUNCTIONS_STRUCTURE_COUNT = 25,                  /*!< There are 25 functions to call for Structures. */
	SCRIPT_FUNCTIONS_UNIT_COUNT      = 64,                  /*!< There are 64 functions to call for Units. */
	SCRIPT_FUNCTIONS_TEAM_COUNT      = 15                   /*!< There are 15 functions to call for Teams. */
};

MSVC_PACKED_BEGIN
/**
 * A ScriptEngine as stored in the memory.
 */
typedef struct ScriptEngine {
	/* 0000(4)   */ PACK csip32 script;                     /*!< Pointer to the script we are executing. */
	/* 0004(4)   */ PACK csip32 scriptInfo;                 /*!< Pointer to a struct with script information (g_global->scriptStructure/scriptUnit). */
	/* 0008(2)   */ PACK uint16 returnValue;                /*!< Return value from sub-routines. */
	/* 000A(1)   */ PACK uint8  framePointer;               /*!< Frame pointer. */
	/* 000B(1)   */ PACK uint8  stackPointer;               /*!< Stack pointer. */
	/* 000C(10)  */ PACK uint16 variables[5];               /*!< Variables to store values in (outside the stack). Accessed by all kinds of routines outside the scripts! */
	/* 0016(30)  */ PACK uint16 stack[15];                  /*!< Stack of the script engine, starting at the end. */
	/* 0034(1)   */ PACK uint8  variable_34;                /*!< ?? */
} GCC_PACKED ScriptEngine;
MSVC_PACKED_END
assert_compile(sizeof(ScriptEngine) == 0x35);

MSVC_PACKED_BEGIN
/**
 * A ScriptInfo as stored in the memory.
 */
typedef struct ScriptInfo {
	/* 0000(4)   */ PACK csip32 text;                       /*!< ?? Pointer to TEXT section of the scripts. */
	/* 0004(4)   */ PACK csip32 start;                      /*!< Pointer to the begin of the scripts. */
	/* 0008(4)   */ PACK csip32 offsets;                    /*!< Pointer to an array of offsets of where to start with a script for a typeID. */
	/* 000C()    */ PACK uint16 offsetsCount;               /*!< Number of words in offsets array. */
	/* 000E()    */ PACK uint16 startCount;                 /*!< Number of words in start. */
	/* 0010(4)   */ PACK csip32 functions;                  /*!< Pointer to an array of functions pointers which scripts with this scriptInfo can call. */
	/* 0014()    */ PACK uint16 isAllocated;                /*!< Memory has been allocated on load. */
} GCC_PACKED ScriptInfo;
MSVC_PACKED_END
assert_compile(sizeof(ScriptInfo) == 0x16);

extern ScriptEngine *Script_Get_ByMemory(csip32 address);
extern ScriptInfo *ScriptInfo_Get_ByMemory(csip32 address);
void Script_Reset(ScriptEngine *script, ScriptInfo *scriptInfo);
extern void Script_Load(ScriptEngine *script, uint8 typeID);
extern bool Script_IsLoaded(ScriptEngine *script);
extern bool Script_Run(ScriptEngine *script);
extern void Script_Unknown044C(ScriptEngine *script, uint16 type);
extern void Script_ClearInfo(ScriptInfo *scriptInfo);
extern uint16 Script_LoadFromFile(const char *filename, ScriptInfo *scriptInfo, csip32 functions, csip32 data);

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
extern uint16 Script_Unit_Unknown1382(ScriptEngine *script);
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
extern uint16 Script_Unit_Unknown1F51(ScriptEngine *script);
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
extern uint16 Script_Unit_Unknown2C73(ScriptEngine *script);


#endif /* SCRIPT_H */
