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
 * @implements 15C2:03EA:001B:2DB8
 * @implements 15C2:0405:0015:C65E
 * @implements 15C2:041A:0032:6C7D
 * @implements 15C2:0447:0005:8BCF
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
 * Emulator wrapper around Script_IsLoaded().
 *
 * @name emu_Script_IsLoaded
 * @implements 15C2:0526:000F:EA1E ()
 * @implements 15C2:0531:0004:F939
 * @implements 15C2:0533:0002:D13A
 * @implements 15C2:0535:000E:4CCF
 * @implements 15C2:0543:000F:0F10
 * @implements 15C2:0552:0005:BBFA
 * @implements 15C2:0557:0002:2597
 */
void emu_Script_IsLoaded()
{
	csip32 scsip;
	ScriptEngine *script;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	scsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	if (scsip.csip == 0x0) return;
	script = Script_Get_ByMemory(scsip);

	emu_ax = Script_IsLoaded(script) ? 1 : 0;
}

/**
 * Emulator wrapper around Script_Run().
 *
 * @name emu_Script_Run
 * @implements 15C2:0559:0015:E98A ()
 * @implements 15C2:0569:0005:DFB5
 * @implements 15C2:056B:0003:DE21
 * @implements 15C2:056E:000E:4D4F
 * @implements 15C2:057C:001E:C033
 * @implements 15C2:059A:002D:D911
 * @implements 15C2:05C7:0012:F9D4
 * @implements 15C2:05D9:0025:FC39
 * @implements 15C2:05FE:000F:DE98
 * @implements 15C2:0602:000B:511E
 * @implements 15C2:060D:0007:AD99
 * @implements 15C2:0614:0023:B451
 * @implements 15C2:0637:000D:44D9
 * @implements 15C2:0644:000F:C918
 * @implements 15C2:0653:0028:E5FE
 * @implements 15C2:067B:0027:82B4
 * @implements 15C2:06A2:005B:8E2E
 * @implements 15C2:06FD:0011:8B08
 * @implements 15C2:070E:0003:9F37
 * @implements 15C2:0711:0022:4857
 * @implements 15C2:0733:002A:1080
 * @implements 15C2:075D:003B:FB79
 * @implements 15C2:0776:0022:68A7
 * @implements 15C2:0798:0017:8BAD
 * @implements 15C2:07AF:000F:0913
 * @implements 15C2:07BE:0020:0D93
 * @implements 15C2:07DE:000D:7E3C
 * @implements 15C2:07EB:005A:C12B
 * @implements 15C2:0848:0003:1CA9
 * @implements 15C2:084B:0028:447C
 * @implements 15C2:0873:0039:8805
 * @implements 15C2:08A4:0008:9D67
 * @implements 15C2:08AC:0035:9410
 * @implements 15C2:08D9:0008:8274
 * @implements 15C2:08E1:000D:D331
 * @implements 15C2:08EE:000D:330C
 * @implements 15C2:08FB:003A:D1E0
 * @implements 15C2:0935:000C:28E9
 * @implements 15C2:0941:0042:A7C5
 * @implements 15C2:0980:0003:1D9B
 * @implements 15C2:0983:002A:5FB4
 * @implements 15C2:09AD:000B:646D
 * @implements 15C2:09C4:0003:E3AD
 * @implements 15C2:09C7:001F:7DFA
 * @implements 15C2:09E6:003C:4EA7
 * @implements 15C2:0A22:0007:ADA0
 * @implements 15C2:0A29:000F:0A95
 * @implements 15C2:0A38:0007:593D
 * @implements 15C2:0A3A:0005:5958
 * @implements 15C2:0A3F:000F:0245
 * @implements 15C2:0A49:0005:D4FA
 * @implements 15C2:0A4E:0004:9C39
 * @implements 15C2:0A50:0002:B43A
 * @implements 15C2:0A52:000A:36EB
 * @implements 15C2:0A5C:0004:8539
 * @implements 15C2:0A5E:0002:AD3A
 * @implements 15C2:0A60:000A:36E9
 * @implements 15C2:0A6A:0004:8E39
 * @implements 15C2:0A6C:0002:A63A
 * @implements 15C2:0A6E:000A:36FB
 * @implements 15C2:0A78:0004:B739
 * @implements 15C2:0A7A:0002:9F3A
 * @implements 15C2:0A7C:000A:36FF
 * @implements 15C2:0A86:0004:B039
 * @implements 15C2:0A88:0002:983A
 * @implements 15C2:0A8A:000A:36FD
 * @implements 15C2:0A94:0004:B939
 * @implements 15C2:0A96:0002:913A
 * @implements 15C2:0A98:000A:36F9
 * @implements 15C2:0AA2:0004:A239
 * @implements 15C2:0AA4:0002:8A3A
 * @implements 15C2:0AA6:0007:E0B3
 * @implements 15C2:0AAD:0007:E473
 * @implements 15C2:0AB4:0008:374F
 * @implements 15C2:0AC5:000A:6C11
 * @implements 15C2:0AFB:0003:A09F
 * @implements 15C2:0AFE:001E:19F9
 * @implements 15C2:0B6C:0003:E083
 * @implements 15C2:0B6F:0006:0197
 * @implements 15C2:0B75:0006:F7CE
 */
void emu_Script_Run()
{
	csip32 scsip;
	ScriptEngine *script;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	scsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	if (scsip.csip == 0x0) return;
	script = Script_Get_ByMemory(scsip);

	emu_ax = Script_Run(script) ? 1 : 0;
}
