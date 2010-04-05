/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "script.h"

extern void f__0EDB_0594_0026_F09C();
extern void f__16C5_012D_0017_71BC();
extern void f__16C5_06C6_001D_94A6();
extern void f__16C5_0788_0018_4AA5();
extern void f__16C5_09C4_003E_31D6();
extern void f__16C5_0A20_003A_2375();
extern void f__176C_07F1_001D_3E0E();
extern void f__176C_0858_0023_E780();
extern void f__176C_0882_0014_0C6A();
extern void f__176C_0BC3_002A_A6DE();
extern void f__176C_0FA2_0013_6D6D();
extern void f__176C_0FD2_001F_B15D();
extern void f__176C_105E_0031_8B3F();
extern void f__176C_1098_0021_667D();
extern void f__176C_12CE_0011_A5C5();
extern void f__176C_1382_0013_AA74();
extern void f__176C_13CD_0014_7309();
extern void f__176C_1458_0023_356A();
extern void f__176C_1932_0029_D0CC();
extern void f__176C_196C_0027_D87A();
extern void f__176C_1A40_0020_8DC9();
extern void f__176C_1A9F_0024_813F();
extern void f__176C_1B45_0022_208C();
extern void f__176C_1C00_003A_E6C7();
extern void f__176C_1C4F_0017_E375();
extern void f__176C_1C6F_001D_2E46();
extern void f__176C_1CFE_0021_29C8();
extern void f__176C_1F51_002F_CE9F();
extern void f__176C_212E_002E_9D89();
extern void f__176C_2275_001D_D22D();
extern void f__176C_22AA_0014_EDA3();
extern void f__176C_22C4_0019_80C9();
extern void emu_Script_Unit_RandomSoldier();
extern void f__176C_246C_0015_C163();
extern void f__176C_2552_0019_4894();
extern void f__176C_25A5_002C_AC04();
extern void f__176C_2638_0017_CF4B();
extern void f__176C_26CD_0010_041C();
extern void f__176C_26E5_0013_FF24();
extern void f__176C_27A4_0021_7EE9();
extern void f__176C_28B1_0024_58C9();
extern void f__176C_291A_0010_8A93();
extern void f__176C_29A9_003A_8DEF();
extern void f__176C_2AB2_0021_82CD();
extern void f__176C_2B97_0013_B226();
extern void f__176C_2BD5_0014_2C56();
extern void f__176C_2C73_0010_BB2A();

typedef void (*emu_ScriptFunction)();
typedef uint16 (*ScriptFunction)(ScriptEngine *script);

/**
 * Not yet converted script functions for Units.
 */
emu_ScriptFunction emu_scriptFunctionsUnit[SCRIPT_FUNCTIONS_UNIT_COUNT] = {
	/* 00 */ &f__176C_1CFE_0021_29C8,
	/* 01 */ &f__176C_1C00_003A_E6C7,
	/* 02 */ NULL,
	/* 03 */ NULL,
	/* 04 */ &f__176C_22C4_0019_80C9,
	/* 05 */ &f__176C_1A9F_0024_813F,
	/* 06 */ &f__176C_1A40_0020_8DC9,
	/* 07 */ &f__176C_1932_0029_D0CC,
	/* 08 */ &f__176C_1458_0023_356A,
	/* 09 */ &f__176C_2AB2_0021_82CD,
	/* 0A */ &f__176C_1C4F_0017_E375,
	/* 0B */ &f__176C_2C73_0010_BB2A,
	/* 0C */ &f__176C_1F51_002F_CE9F,
	/* 0D */ NULL,
	/* 0E */ &f__176C_1382_0013_AA74,
	/* 0F */ &f__176C_12CE_0011_A5C5,
	/* 10 */ NULL,
	/* 11 */ NULL,
	/* 12 */ &f__176C_13CD_0014_7309,
	/* 13 */ &f__176C_105E_0031_8B3F,
	/* 14 */ &f__176C_0882_0014_0C6A,
	/* 15 */ NULL,
	/* 16 */ &f__176C_1098_0021_667D,
	/* 17 */ NULL,
	/* 18 */ &f__0EDB_0594_0026_F09C,
	/* 19 */ &f__176C_1C6F_001D_2E46,
	/* 1A */ &f__176C_0FA2_0013_6D6D,
	/* 1B */ &f__176C_0FD2_001F_B15D,
	/* 1C */ &f__176C_0858_0023_E780,
	/* 1D */ &f__176C_07F1_001D_3E0E,
	/* 1E */ &f__176C_212E_002E_9D89,
	/* 1F */ &f__176C_22AA_0014_EDA3,
	/* 20 */ &f__176C_2275_001D_D22D,
	/* 21 */ &emu_Script_Unit_RandomSoldier,
	/* 22 */ &f__176C_0BC3_002A_A6DE,
	/* 23 */ &f__176C_246C_0015_C163,
	/* 24 */ &f__176C_2552_0019_4894,
	/* 25 */ &f__176C_25A5_002C_AC04,
	/* 26 */ NULL,
	/* 27 */ &f__176C_2638_0017_CF4B,
	/* 28 */ &f__176C_26CD_0010_041C,
	/* 29 */ NULL,
	/* 2A */ &f__176C_26E5_0013_FF24,
	/* 2B */ NULL,
	/* 2C */ NULL,
	/* 2D */ NULL,
	/* 2E */ NULL,
	/* 2F */ &f__176C_27A4_0021_7EE9,
	/* 30 */ &f__176C_28B1_0024_58C9,
	/* 31 */ &f__176C_291A_0010_8A93,
	/* 32 */ NULL,
	/* 33 */ &f__176C_29A9_003A_8DEF,
	/* 34 */ NULL,
	/* 35 */ NULL,
	/* 36 */ &f__176C_2B97_0013_B226,
	/* 37 */ &f__176C_2BD5_0014_2C56,
	/* 38 */ NULL,
	/* 39 */ NULL,
	/* 3A */ &f__176C_1B45_0022_208C,
	/* 3B */ NULL,
	/* 3C */ NULL,
	/* 3D */ &f__176C_196C_0027_D87A,
	/* 3E */ NULL,
	/* 3F */ NULL,
};

/**
 * Not yet converted script functions for Teams.
 */
emu_ScriptFunction emu_scriptFunctionsTeam[SCRIPT_FUNCTIONS_TEAM_COUNT] = {
	/* 00 */ NULL,
	/* 01 */ &f__16C5_012D_0017_71BC,
	/* 02 */ NULL,
	/* 03 */ NULL,
	/* 04 */ NULL,
	/* 05 */ NULL,
	/* 06 */ &f__16C5_06C6_001D_94A6,
	/* 07 */ &f__16C5_0788_0018_4AA5,
	/* 08 */ &f__16C5_09C4_003E_31D6,
	/* 09 */ &f__16C5_0A20_003A_2375,
	/* 0A */ NULL,
	/* 0B */ NULL,
	/* 0C */ NULL,
	/* 0D */ NULL,
	/* 0E */ NULL,
};

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
	/* 0E */ &Script_Structure_Unknown133C,
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
	/* 00 */ NULL,
	/* 01 */ NULL,
	/* 02 */ &Script_General_DisplayText,
	/* 03 */ &Script_General_GetDistance,
	/* 04 */ NULL,
	/* 05 */ NULL,
	/* 06 */ NULL,
	/* 07 */ NULL,
	/* 08 */ NULL,
	/* 09 */ NULL,
	/* 0A */ NULL,
	/* 0B */ NULL,
	/* 0C */ NULL,
	/* 0D */ &Script_General_Unknown050C,
	/* 0E */ NULL,
	/* 0F */ NULL,
	/* 10 */ &Script_General_Delay,
	/* 11 */ &Script_General_Unknown04AE,
	/* 12 */ NULL,
	/* 13 */ NULL,
	/* 14 */ NULL,
	/* 15 */ &Script_General_NoOperation,
	/* 16 */ NULL,
	/* 17 */ &Script_General_RandomRange,
	/* 18 */ NULL,
	/* 19 */ NULL,
	/* 1A */ NULL,
	/* 1B */ NULL,
	/* 1C */ NULL,
	/* 1D */ NULL,
	/* 1E */ NULL,
	/* 1F */ NULL,
	/* 20 */ NULL,
	/* 21 */ NULL,
	/* 22 */ NULL,
	/* 23 */ NULL,
	/* 24 */ NULL,
	/* 25 */ NULL,
	/* 26 */ &Script_General_Unknown0426,
	/* 27 */ NULL,
	/* 28 */ NULL,
	/* 29 */ &Script_General_Unknown0456,
	/* 2A */ NULL,
	/* 2B */ &Script_General_NoOperation,
	/* 2C */ &Script_General_GetLinkedUnitType,
	/* 2D */ &Script_General_GetIndexType,
	/* 2E */ &Script_General_DecodeIndex,
	/* 2F */ NULL,
	/* 30 */ NULL,
	/* 31 */ NULL,
	/* 32 */ &Script_General_UnitCount,
	/* 33 */ NULL,
	/* 34 */ &Script_General_NoOperation,
	/* 35 */ &Script_General_NoOperation,
	/* 36 */ NULL,
	/* 37 */ NULL,
	/* 38 */ &Script_General_Unknown02EA,
	/* 39 */ &Script_General_NoOperation,
	/* 3A */ NULL,
	/* 3B */ &Script_General_Unknown0288,
	/* 3C */ &Script_General_DelayRandom,
	/* 3D */ NULL,
	/* 3E */ &Script_General_Unknown024B,
	/* 3F */ &Script_General_NoOperation,
};

/**
 * Converted script functions for Teams. If NULL, the emu_ version is used.
 */
ScriptFunction scriptFunctionsTeam[SCRIPT_FUNCTIONS_TEAM_COUNT] = {
	/* 00 */ &Script_General_Delay,
	/* 01 */ NULL,
	/* 02 */ &Script_Team_GetMembers,
	/* 03 */ &Script_Team_AddCloserUnit,
	/* 04 */ &Script_Team_GetAverageDistance,
	/* 05 */ &Script_Team_Unknown0543,
	/* 06 */ NULL,
	/* 07 */ NULL,
	/* 08 */ NULL,
	/* 09 */ NULL,
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

			function = emu_get_csip32(scriptInfo->functions.s.cs, scriptInfo->functions.s.ip, parameter * 4);
			emu_push((((uint8 *)script - emu_memory) >> 4) & 0xFF00); emu_push(((uint8 *)script - emu_memory) & 0x0FFF);
			emu_push(emu_cs); emu_push(0x0935);

			/* Check if we are using the scriptFunctionsUnit */
			if (scriptInfo->functions.csip == 0x353F6168) {
				if (parameter >= SCRIPT_FUNCTIONS_UNIT_COUNT) {
					script->script.csip = 0;
					return false;
				}

				if (scriptFunctionsUnit[parameter] != NULL) {
					emu_sp += 8;

					script->returnValue = scriptFunctionsUnit[parameter](script);
					return true;
				}
				if (emu_scriptFunctionsUnit[parameter] != NULL) {
					emu_cs = function.s.cs; emu_ip = function.s.ip;
					emu_scriptFunctionsUnit[parameter]();
					emu_sp += 4;

					script->returnValue = emu_ax;
					return true;
				}
			}
			/* Check if we are using the scriptFunctionsTeam */
			if (scriptInfo->functions.csip == 0x353F6128) {
				if (parameter >= SCRIPT_FUNCTIONS_TEAM_COUNT) {
					script->script.csip = 0;
					return false;
				}

				if (scriptFunctionsTeam[parameter] != NULL) {
					emu_sp += 8;

					script->returnValue = scriptFunctionsTeam[parameter](script);
					return true;
				}
				if (emu_scriptFunctionsTeam[parameter] != NULL) {
					emu_cs = function.s.cs; emu_ip = function.s.ip;
					emu_scriptFunctionsTeam[parameter]();
					emu_sp += 4;

					script->returnValue = emu_ax;
					return true;
				}
			}
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
