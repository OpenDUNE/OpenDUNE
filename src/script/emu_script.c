/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "script.h"

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
