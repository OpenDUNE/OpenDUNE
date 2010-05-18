/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "script.h"

/**
 * Emulator wrapper around Script_Reset().
 *
 * @name emu_Script_Reset
 * @implements 15C2:0395:0044:304E ()
 */
void emu_Script_Reset()
{
	csip32 scsip, sicsip;
	ScriptEngine *script;
	ScriptInfo *scriptInfo;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	scsip  = emu_get_csip32(emu_ss, emu_sp, 0x0);
	sicsip = emu_get_csip32(emu_ss, emu_sp, 0x4);

	if (scsip.csip == 0x0) return;
	if (sicsip.csip == 0x0) return;
	script = Script_Get_ByMemory(scsip);
	scriptInfo = ScriptInfo_Get_ByMemory(sicsip);

	Script_Reset(script, scriptInfo);
}

/**
 * Emulator wrapper around Script_Load().
 *
 * @name emu_Script_Load
 * @implements 15C2:03D9:0011:D202 ()
 */
void emu_Script_Load()
{
	csip32 scsip;
	uint8 typeID;
	ScriptEngine *script;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	scsip  = emu_get_csip32(emu_ss, emu_sp, 0x0);
	typeID = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x4);

	if (scsip.csip == 0x0) return;
	script = Script_Get_ByMemory(scsip);

	Script_Load(script, typeID);
}

/**
 * Emulator wrapper around Script_ClearInfo()
 *
 * @name emu_Script_ClearInfo
 * @implements 15C2:000B:000E:6322 ()
 */
void emu_Script_ClearInfo()
{
	csip32 sicsip;
	ScriptInfo *scriptInfo;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	sicsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	if (sicsip.csip == 0x0) return;
	scriptInfo = ScriptInfo_Get_ByMemory(sicsip);

	Script_ClearInfo(scriptInfo);
}
