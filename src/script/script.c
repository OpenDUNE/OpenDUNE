/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "script.h"
#include "../file.h"
#include "../os/endian.h"

typedef uint16 (*ScriptFunction)(ScriptEngine *script);

struct Object *g_scriptCurrentObject;
struct Structure *g_scriptCurrentStructure;
struct Unit *g_scriptCurrentUnit;

extern void emu_Tools_Malloc();
extern void emu_Tools_Free();

/**
 * Converted script functions for Structures. If NULL, the emu_ version is used.
 */
ScriptFunction scriptFunctionsStructure[SCRIPT_FUNCTIONS_STRUCTURE_COUNT] = {
	/* 00 */ &Script_General_Delay,
	/* 01 */ &Script_General_NoOperation,
	/* 02 */ &Script_Structure_Unknown0A81,
	/* 03 */ &Script_Structure_Unknown0AFC,
	/* 04 */ &Script_Structure_SetAnimation,
	/* 05 */ &Script_General_DisplayText,
	/* 06 */ &Script_Structure_Unknown11B9,
	/* 07 */ &Script_Structure_Unknown0C5A,
	/* 08 */ &Script_Structure_FindTargetUnit,
	/* 09 */ &Script_Structure_RotateTurret,
	/* 0A */ &Script_Structure_GetDirection,
	/* 0B */ &Script_Structure_Fire,
	/* 0C */ &Script_General_NoOperation,
	/* 0D */ &Script_Structure_GetAnimation,
	/* 0E */ &Script_Structure_VoicePlay,
	/* 0F */ &Script_Structure_RemoveFogAroundTile,
	/* 10 */ &Script_General_NoOperation,
	/* 11 */ &Script_General_NoOperation,
	/* 12 */ &Script_General_NoOperation,
	/* 13 */ &Script_General_NoOperation,
	/* 14 */ &Script_General_NoOperation,
	/* 15 */ &Script_Structure_RefineSpice,
	/* 16 */ &Script_Structure_Unknown1524,
	/* 17 */ &Script_Structure_Destroy,
	/* 18 */ &Script_General_NoOperation,
};

/**
 * Converted script functions for Units. If NULL, the emu_ version is used.
 */
ScriptFunction scriptFunctionsUnit[SCRIPT_FUNCTIONS_UNIT_COUNT] = {
	/* 00 */ &Script_Unit_Unknown1CFE,
	/* 01 */ &Script_Unit_SetAction,
	/* 02 */ &Script_General_DisplayText,
	/* 03 */ &Script_General_GetDistance,
	/* 04 */ &Script_Unit_Unknown22C4,
	/* 05 */ &Script_Unit_Unknown1A9F,
	/* 06 */ &Script_Unit_Unknown1A40,
	/* 07 */ &Script_Unit_GetOrientation,
	/* 08 */ &Script_Unit_Fire,
	/* 09 */ &Script_Unit_MCVDeploy,
	/* 0A */ &Script_Unit_SetActionDefault,
	/* 0B */ &Script_Unit_Blink,
	/* 0C */ &Script_Unit_Unknown1F51,
	/* 0D */ &Script_General_Unknown050C,
	/* 0E */ &Script_Unit_Unknown1382,
	/* 0F */ &Script_Unit_Unknown12CE,
	/* 10 */ &Script_General_Delay,
	/* 11 */ &Script_General_Unknown04AE,
	/* 12 */ &Script_Unit_Unknown13CD,
	/* 13 */ &Script_Unit_Unknown105E,
	/* 14 */ &Script_Unit_Unknown0882,
	/* 15 */ &Script_General_NoOperation,
	/* 16 */ &Script_Unit_Unknown1098,
	/* 17 */ &Script_General_RandomRange,
	/* 18 */ &Script_General_Unknown0594,
	/* 19 */ &Script_Unit_Unknown1C6F,
	/* 1A */ &Script_Unit_Unknown0FA2,
	/* 1B */ &Script_Unit_Unknown0FD2,
	/* 1C */ &Script_Unit_FindBestTarget,
	/* 1D */ &Script_Unit_GetTargetPriority,
	/* 1E */ &Script_Unit_Unknown212E,
	/* 1F */ &Script_Unit_IsInTransport,
	/* 20 */ &Script_Unit_GetAmount,
	/* 21 */ &Script_Unit_RandomSoldier,
	/* 22 */ &Script_Unit_Unknown0BC3,
	/* 23 */ &Script_Unit_Unknown246C,
	/* 24 */ &Script_Unit_Unknown2552,
	/* 25 */ &Script_Unit_FindStructure,
	/* 26 */ &Script_General_VoicePlay,
	/* 27 */ &Script_Unit_DisplayDestroyedText,
	/* 28 */ &Script_Unit_RemoveFog,
	/* 29 */ &Script_General_Unknown0456,
	/* 2A */ &Script_Unit_Harvest,
	/* 2B */ &Script_General_NoOperation,
	/* 2C */ &Script_General_GetLinkedUnitType,
	/* 2D */ &Script_General_GetIndexType,
	/* 2E */ &Script_General_DecodeIndex,
	/* 2F */ &Script_Unit_Unknown27A4,
	/* 30 */ &Script_Unit_Unknown28B1,
	/* 31 */ &Script_Unit_Unknown291A,
	/* 32 */ &Script_General_UnitCount,
	/* 33 */ &Script_Unit_GoToClosestStructure,
	/* 34 */ &Script_General_NoOperation,
	/* 35 */ &Script_General_NoOperation,
	/* 36 */ &Script_Unit_Unknown2B97,
	/* 37 */ &Script_Unit_Unknown2BD5,
	/* 38 */ &Script_General_GetOrientation,
	/* 39 */ &Script_General_NoOperation,
	/* 3A */ &Script_Unit_Unknown1B45,
	/* 3B */ &Script_General_Unknown0288,
	/* 3C */ &Script_General_DelayRandom,
	/* 3D */ &Script_Unit_Unknown196C,
	/* 3E */ &Script_General_Unknown024B,
	/* 3F */ &Script_General_NoOperation,
};

/**
 * Converted script functions for Teams. If NULL, the emu_ version is used.
 */
ScriptFunction scriptFunctionsTeam[SCRIPT_FUNCTIONS_TEAM_COUNT] = {
	/* 00 */ &Script_General_Delay,
	/* 01 */ &Script_Team_DisplayText,
	/* 02 */ &Script_Team_GetMembers,
	/* 03 */ &Script_Team_AddCloserUnit,
	/* 04 */ &Script_Team_GetAverageDistance,
	/* 05 */ &Script_Team_Unknown0543,
	/* 06 */ &Script_Team_FindBestTarget,
	/* 07 */ &Script_Team_Unknown0788,
	/* 08 */ &Script_Team_Load,
	/* 09 */ &Script_Team_Load2,
	/* 0A */ &Script_General_DelayRandom,
	/* 0B */ &Script_General_Unknown0184,
	/* 0C */ &Script_Team_GetVariable6,
	/* 0D */ &Script_Team_GetTarget,
	/* 0E */ &Script_General_NoOperation,
};

/**
 * Get a ScriptEngine from the memory.
 *
 * @param address The address of the ScriptEngine to get.
 * @return The ScriptEngine.
 */
ScriptEngine *Script_Get_ByMemory(csip32 address)
{
	return (ScriptEngine *)&emu_get_memory8(address.s.cs, address.s.ip, 0x0);
}

/**
 * Get a ScriptInfo from the memory.
 *
 * @param address The address of the ScriptInfo to get.
 * @return The ScriptInfo.
 */
ScriptInfo *ScriptInfo_Get_ByMemory(csip32 address)
{
	return (ScriptInfo *)&emu_get_memory8(address.s.cs, address.s.ip, 0x0);
}

/**
 * Reset a script engine. It forgets the correct script it was executing,
 *  and resets stack and frame pointer. It also loads in the scriptInfo given
 *  by the parameter.
 *
 * @param script The script engine to reset.
 * @param scriptInfo The scriptInfo to load in the script. Can be NULL.
 */
void Script_Reset(ScriptEngine *script, ScriptInfo *scriptInfo)
{
	if (script == NULL) return;
	if (scriptInfo == NULL) return;

	script->script.csip     = 0;
	script->scriptInfo.s.cs = 0x353F;
	script->scriptInfo.s.ip = emu_Global_GetIP(scriptInfo, 0x353F);
	script->variable_34     = 0;
	script->framePointer    = 17;
	script->stackPointer    = 15;
}

/**
 * Load a script in an engine. As script->scriptInfo already defines most
 *  of the information needed to load such script, all it needs is the type
 *  it needs to load the script for.
 *
 * @param script The script engine to load a script for.
 * @param typeID The typeID for which we want to load a script.
 */
void Script_Load(ScriptEngine *script, uint8 typeID)
{
	ScriptInfo *scriptInfo;

	if (script == NULL) return;

	if (script->scriptInfo.csip == 0) return;
	scriptInfo = ScriptInfo_Get_ByMemory(script->scriptInfo);

	Script_Reset(script, scriptInfo);

	script->script = scriptInfo->start;
	script->script.s.ip += emu_get_memory16(scriptInfo->offsets.s.cs, scriptInfo->offsets.s.ip, typeID * 2) * 2;
}

/**
 * Check if a script is loaded in an engine. If returning true it means that
 *  the engine is actively executing a script.
 *
 * @param script The script engine to check on.
 * @return Returns true if and only if the script engine is actively executing a script.
 */
bool Script_IsLoaded(ScriptEngine *script)
{
	if (script == NULL) return false;
	if (script->script.csip == 0) return false;
	if (script->scriptInfo.csip == 0) return false;

	return true;
}

/**
 * Run the next opcode of a script.
 *
 * @param script The script engine to run.
 * @return Returns false if and only if there was an scripting error, like
 *   invalid opcode.
 */
bool Script_Run(ScriptEngine *script)
{
	ScriptInfo *scriptInfo;
	uint16 current, parameter;
	uint8 opcode;

	if (!Script_IsLoaded(script)) return false;
	scriptInfo = ScriptInfo_Get_ByMemory(script->scriptInfo);

	current = emu_get_memory16(script->script.s.cs, script->script.s.ip, 0);
	current = (current >> 8) + (current << 8); /* Scripts are in BigEndian */
	script->script.s.ip += 2;

	opcode    = (current >> 8) & 0x1F;
	parameter = 0;

	if ((current & 0x8000) != 0) {
		/* When this flag is set, the instruction is a GOTO with a 13bit address */
		opcode = 0;
		parameter = current & 0x7FFF;
	} else if ((current & 0x4000) != 0) {
		/* When this flag is set, the parameter is part of the instruction */
		parameter = (int16)(int8)(current & 0xFF);
	} else if ((current & 0x2000) != 0) {
		/* When this flag is set, the parameter is in the next opcode */
		parameter = emu_get_memory16(script->script.s.cs, script->script.s.ip, 0x0);
		parameter = (parameter >> 8) + (parameter << 8); /* Scripts are in BigEndian */
		script->script.s.ip += 2;
	}

	switch (opcode) {
		case 0: { /* JUMP TO INSTRUCTION $parameter */
			script->script = scriptInfo->start;
			script->script.s.ip += parameter * 2;
			return true;
		}

		case 1: { /* SET RETURN VALUE TO $parameter */
			script->returnValue = parameter;
			return true;
		}

		case 2: {
			if (parameter == 0) { /* PUSH RETURNVALUE */
				script->stack[--script->stackPointer] = script->returnValue;
				return true;
			}

			if (parameter == 1) { /* PUSH NEXT LOCATION + FRAMEPOINTER */
				uint32 location;
				location = (script->script.csip - scriptInfo->start.csip) / 2 + 1;

				script->stack[--script->stackPointer] = location;
				script->stack[--script->stackPointer] = script->framePointer;
				script->framePointer = script->stackPointer + 2;

				return true;
			}

			script->script.csip = 0;
			return false;
		}

		case 3: case 4: { /* PUSH $parameter */
			script->stack[--script->stackPointer] = parameter;
			return true;
		}

		case 5: { /* PUSH VARIABLE[$parameter] */
			script->stack[--script->stackPointer] = script->variables[parameter];
			return true;
		}

		case 6: { /* PUSH LOCAL_VARIABLE[$parameter] (framepointer - parameter) */
			script->stack[--script->stackPointer] = script->stack[script->framePointer - parameter - 2];
			return true;
		}

		case 7: { /* PUSH PARAMETER[$parameter] (framepointer + parameter)  */
			script->stack[--script->stackPointer] = script->stack[script->framePointer + parameter - 1];
			return true;
		}

		case 8: {
			if (parameter == 0) { /* POP RETURNVALUE */
				script->returnValue = script->stack[script->stackPointer++];
				return true;
			}
			if (parameter == 1) { /* POP FRAMEPOINTER + LOCATION */
				if (script->stackPointer == 15) {
					script->script.csip = 0;
					return false;
				}

				script->script = scriptInfo->start;
				script->framePointer = (uint8)script->stack[script->stackPointer++];
				script->script.s.ip += script->stack[script->stackPointer++] * 2;
				return true;
			}

			script->script.csip = 0;
			return false;
		}

		case 9: { /* POP VARIABLE[$parameter] */
			script->variables[parameter] = script->stack[script->stackPointer++];
			return true;
		}

		case 10: { /* POP LOCAL_VARIABLE[$parameter] (framepointer - parameter) */
			script->stack[script->framePointer - parameter - 2] = script->stack[script->stackPointer++];
			return true;
		}

		case 11: { /* POP PARAMETER[$parameter] (framepointer + parameter) */
			script->stack[script->framePointer + parameter - 1] = script->stack[script->stackPointer++];
			return true;
		}

		case 12: { /* STACKPOINTER += $parameter */
			script->stackPointer += parameter;
			return true;
		}

		case 13: { /* STACKPOINTER -= $parameter */
			script->stackPointer -= parameter;
			return true;
		}

		case 14: { /* EXECUTE SUBROUTINE $parameter */
			csip32 function;

			parameter &= 0xFF;

			/* Check if we are using the scriptFunctionsStructure */
			if (scriptInfo->functions.csip == 0x353F33B6) {
				if (parameter >= SCRIPT_FUNCTIONS_STRUCTURE_COUNT) {
					script->script.csip = 0;
					return false;
				}

				assert(scriptFunctionsStructure[parameter] != NULL);

				script->returnValue = scriptFunctionsStructure[parameter](script);
				return true;
			}

			/* Check if we are using the scriptFunctionsTeam */
			if (scriptInfo->functions.csip == 0x353F6128) {
				if (parameter >= SCRIPT_FUNCTIONS_TEAM_COUNT) {
					script->script.csip = 0;
					return false;
				}

				assert (scriptFunctionsTeam[parameter] != NULL);

				script->returnValue = scriptFunctionsTeam[parameter](script);
				return true;
			}

			/* Check if we are using the scriptFunctionsUnit */
			if (scriptInfo->functions.csip == 0x353F6168) {
				if (parameter >= SCRIPT_FUNCTIONS_UNIT_COUNT) {
					script->script.csip = 0;
					return false;
				}

				assert (scriptFunctionsUnit[parameter] != NULL);

				script->returnValue = scriptFunctionsUnit[parameter](script);
				return true;
			}

			function = emu_get_csip32(scriptInfo->functions.s.cs, scriptInfo->functions.s.ip, parameter * 4);
			emu_push((((uint8 *)script - emu_memory) >> 4) & 0xFF00); emu_push(((uint8 *)script - emu_memory) & 0x0FFF);
			emu_push(emu_cs); emu_push(0x0935);

			/* We are not using any known function, fall back to the decompiled method */
			emu_cs = function.s.cs; emu_ip = function.s.ip;
			switch (function.csip) {
				default:
					/* In case we don't know the call point yet, call the dynamic call */
					emu_last_cs = 0x15C2; emu_last_ip = 0x0932; emu_last_length = 0x003A; emu_last_crc = 0xD1E0;
					emu_call();
					return false;
			}
			emu_sp += 4;

			script->returnValue = emu_ax;
			return true;
		}

		case 15: { /* IF NOT EQUAL JUMP TO INSTRUCTION $parameter */
			if (script->stack[script->stackPointer++] != 0) return true;

			script->script = scriptInfo->start;
			script->script.s.ip += (parameter & 0x7FFF) * 2;
			return true;
		}

		case 16: {
			if (parameter == 0) { /* STACK = !STACK */
				script->stack[script->stackPointer] = (script->stack[script->stackPointer] == 0) ? 1 : 0;
				return true;
			}
			if (parameter == 1) { /* STACK = -STACK */
				script->stack[script->stackPointer] = -script->stack[script->stackPointer];
				return true;
			}
			if (parameter == 2) { /* STACK = ~STACK */
				script->stack[script->stackPointer] = ~script->stack[script->stackPointer];
				return true;
			}

			script->script.csip = 0;
			return false;
		}

		case 17: { /* EVALUATE STACK[0] $parameter STACK[1] */
			int16 right = script->stack[script->stackPointer++];
			int16 left  = script->stack[script->stackPointer++];

			switch (parameter) {
				case 0:  script->stack[--script->stackPointer] = (left && right) ? 1 : 0; break; /* left && right */
				case 1:  script->stack[--script->stackPointer] = (left || right) ? 1 : 0; break; /* left || right */
				case 2:  script->stack[--script->stackPointer] = (left == right) ? 1 : 0; break; /* left == right */
				case 3:  script->stack[--script->stackPointer] = (left != right) ? 1 : 0; break; /* left != right */
				case 4:  script->stack[--script->stackPointer] = (left <  right) ? 1 : 0; break; /* left <  right */
				case 5:  script->stack[--script->stackPointer] = (left <= right) ? 1 : 0; break; /* left <= right */
				case 6:  script->stack[--script->stackPointer] = (left >  right) ? 1 : 0; break; /* left >  right */
				case 7:  script->stack[--script->stackPointer] = (left >= right) ? 1 : 0; break; /* left >= right */
				case 8:  script->stack[--script->stackPointer] =  left +  right;          break; /* left +  right */
				case 9:  script->stack[--script->stackPointer] =  left -  right;          break; /* left -  right */
				case 10: script->stack[--script->stackPointer] =  left *  right;          break; /* left *  right */
				case 11: script->stack[--script->stackPointer] =  left /  right;          break; /* left /  right */
				case 12: script->stack[--script->stackPointer] =  left >> right;          break; /* left >> right */
				case 13: script->stack[--script->stackPointer] =  left << right;          break; /* left << right */
				case 14: script->stack[--script->stackPointer] =  left &  right;          break; /* left &  right */
				case 15: script->stack[--script->stackPointer] =  left |  right;          break; /* left |  right */
				case 16: script->stack[--script->stackPointer] =  left %  right;          break; /* left %  right */
				case 17: script->stack[--script->stackPointer] =  left ^  right;          break; /* left ^  right */

				default:
					script->script.csip = 0;
					return false;
			}

			return true;
		}
		case 18: { /* RETURN FROM SUBROUTINE WITHOUT RESETTING FRAMEPOINTER (never used, is a weird opcode anyway) */
			if (script->stackPointer == 15) {
				script->script.csip = 0;
				return false;
			}

			script->script = scriptInfo->start;
			script->returnValue = script->stack[script->stackPointer++];
			script->script.s.ip += script->stack[script->stackPointer++] * 2;

			script->variable_34 = 0;
			return true;
		}

		default:
			script->script.csip = 0x0;
			return false;
	}
}

/**
 * Unknown function 044C.
 *
 * @param script The script engine to run.
 * @param type ??.
 */
void Script_Unknown044C(ScriptEngine *script, uint16 type)
{
	ScriptInfo *scriptInfo;
	csip32 csip;
	uint16 *offsets;

	if (!Script_IsLoaded(script)) return;
	if (script->variable_34 != 0) return;

	scriptInfo = ScriptInfo_Get_ByMemory(script->scriptInfo);
	script->variable_34 = 1;

	csip = script->script;
	csip.csip -= scriptInfo->start.csip;

	script->stack[--script->stackPointer] = csip.csip / 2;
	script->stack[--script->stackPointer] = script->returnValue;

	offsets = (uint16 *)emu_get_memorycsip(scriptInfo->offsets);
	csip       = scriptInfo->start;
	csip.s.ip += offsets[type];
	script->script = csip;
}

/**
 * Clears the given scriptInfo.
 *
 * @param scriptInfo The scriptInfo to clear.
 */
void Script_ClearInfo(ScriptInfo *scriptInfo)
{
	if (scriptInfo == NULL) return;

	if (scriptInfo->isAllocated != 0) {
		if (scriptInfo->text.csip != 0x0) {
			emu_push(scriptInfo->text.s.cs); emu_push(scriptInfo->text.s.ip);
			emu_push(emu_cs); emu_push(0x003E); emu_cs = 0x23E1; emu_Tools_Free();
			emu_sp += 4;
		}

		if (scriptInfo->offsets.csip != 0x0) {
			emu_push(scriptInfo->offsets.s.cs); emu_push(scriptInfo->offsets.s.ip);
			emu_push(emu_cs); emu_push(0x003E); emu_cs = 0x23E1; emu_Tools_Free();
			emu_sp += 4;
		}

		if (scriptInfo->start.csip != 0x0) {
			emu_push(scriptInfo->start.s.cs); emu_push(scriptInfo->start.s.ip);
			emu_push(emu_cs); emu_push(0x003E); emu_cs = 0x23E1; emu_Tools_Free();
			emu_sp += 4;
		}
	}

	scriptInfo->text.csip = 0x0;
	scriptInfo->offsets.csip = 0x0;
	scriptInfo->start.csip = 0x0;
}

/**
 * Clears the given scriptInfo.
 *
 * @param filename The name of the file to load.
 * @param scriptInfo The scriptInfo to load in the script.
 * @param functions Pointer to the functions to call via script.
 * @param data Pointer to preallocated space to load data.
 */
uint16 Script_LoadFromFile(const char *filename, ScriptInfo *scriptInfo, csip32 functions, csip32 data)
{
	uint32 total = 0;
	uint32 length = 0;
	uint8 index;
	int16 i;

	if (scriptInfo == NULL) return 0;
	if (filename == NULL) return 0;

	Script_ClearInfo(scriptInfo);

	scriptInfo->isAllocated = (data.csip == 0x0) ? 1 : 0;

	scriptInfo->functions = functions;

	if (!File_Exists(filename)) return 0;

	index = ChunkFile_Open(filename);

	length = ChunkFile_Seek(index, HTOBE32('TEXT'));
	total += length;

	if (length != 0) {
		if (data.csip != 0) {
			scriptInfo->text = data;
			data.csip += length;
		} else {
			emu_push(0x30);
			emu_push(length >> 16); emu_push(length & 0xFFFF);
			emu_push(emu_cs); emu_push(0x0195); emu_cs = 0x23E1; emu_Tools_Malloc();
			emu_sp += 6;

			scriptInfo->text.s.cs = emu_dx;
			scriptInfo->text.s.ip = emu_ax;
		}

		ChunkFile_Read(index, HTOBE32('TEXT'), (void *)emu_get_memorycsip(scriptInfo->text), length);
	}

	length = ChunkFile_Seek(index, HTOBE32('ORDR'));
	total += length;

	if (length == 0) {
		Script_ClearInfo(scriptInfo);
		ChunkFile_Close(index);
		return 0;
	}

	if (data.csip != 0x0) {
		scriptInfo->offsets = data;
		data.csip += length;
	} else {
		emu_push(0x30);
		emu_push(length >> 16); emu_push(length & 0xFFFF);
		emu_push(emu_cs); emu_push(0x0195); emu_cs = 0x23E1; emu_Tools_Malloc();
		emu_sp += 6;

		scriptInfo->offsets.s.cs = emu_dx;
		scriptInfo->offsets.s.ip = emu_ax;
	}

	scriptInfo->offsetsCount = (length >> 1) & 0xFFFF;
	ChunkFile_Read(index, HTOBE32('ORDR'), (void *)emu_get_memorycsip(scriptInfo->offsets), length);

	for(i = 0; (int16)((length >> 1) & 0xFFFF) > i; i++) {
		emu_get_memory16(scriptInfo->offsets.s.cs, scriptInfo->offsets.s.ip, 2 * i) = HTOBE16(emu_get_memory16(scriptInfo->offsets.s.cs, scriptInfo->offsets.s.ip, 2 * i));
	}

	length = ChunkFile_Seek(index, HTOBE32('DATA'));
	total += length;

	if (length == 0) {
		Script_ClearInfo(scriptInfo);
		ChunkFile_Close(index);
		return 0;
	}

	if (data.csip != 0x0) {
		scriptInfo->start = data;
		data.csip += length;
	} else {
		emu_push(0x30);
		emu_push(length >> 16); emu_push(length & 0xFFFF);
		emu_push(emu_cs); emu_push(0x0195); emu_cs = 0x23E1; emu_Tools_Malloc();
		emu_sp += 6;

		scriptInfo->start.s.cs = emu_dx;
		scriptInfo->start.s.ip = emu_ax;
	}

	scriptInfo->startCount = (length >> 1) & 0xFFFF;
	ChunkFile_Read(index, HTOBE32('DATA'), (void *)emu_get_memorycsip(scriptInfo->start), length);


	ChunkFile_Close(index);

	return total & 0xFFFF;
}
