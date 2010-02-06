/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "gui.h"

/**
 * Emulator wrapper around GUI_EditBox().
 *
 * @name emu_GUI_EditBox
 * @implements B527:0000:0016:BBD9 ()
 * @implements B527:0016:000A:F6B9
 * @implements B527:0020:0009:E4DB
 * @implements B527:0029:000C:7CE1
 * @implements B527:0035:0016:DA67
 * @implements B527:004B:0023:4A7D
 * @implements B527:006E:000F:C442
 * @implements B527:007D:0029:E163
 * @implements B527:0081:0025:7FAE
 * @implements B527:00A1:0005:6168
 * @implements B527:00A6:000C:6949
 * @implements B527:00B2:001D:E367
 * @implements B527:00CF:0012:9D7B
 * @implements B527:00E1:0007:E5DE
 * @implements B527:00E8:0008:5A0B
 * @implements B527:00F0:000B:FF42
 * @implements B527:00FB:0011:1AD6
 * @implements B527:010C:000B:0481
 * @implements B527:0117:0014:47BE
 * @implements B527:012B:0017:408E
 * @implements B527:0142:001B:D66A
 * @implements B527:014E:000F:5E6F
 * @implements B527:015D:0004:3BFB
 * @implements B527:0161:0003:5DA7
 * @implements B527:0178:000D:2FF0
 * @implements B527:0185:0015:3ABA
 * @implements B527:019A:000E:57E9
 * @implements B527:01A8:0012:AA0D
 * @implements B527:01BA:000D:0CF1
 * @implements B527:01C4:0003:9D0E
 * @implements B527:01C7:0008:8702
 * @implements B527:01CF:0014:5990
 * @implements B527:01E3:0009:9151
 * @implements B527:01EC:0009:A94E
 * @implements B527:01F5:0009:A1E0
 * @implements B527:01FE:002A:3E48
 * @implements B527:0228:000E:8F05
 * @implements B527:0236:0023:ABEA
 * @implements B527:0259:0008:3BE5
 * @implements B527:0261:0012:440D
 * @implements B527:0273:000E:4982
 * @implements B527:027F:0002:C03A
 * @implements B527:0281:0009:2E30
 * @implements B527:028A:0009:E2B9
 * @implements B527:0293:000A:B6BD
 * @implements B527:029D:0009:18B8
 * @implements B527:02A6:0009:D1B5
 * @implements B527:02AF:0006:DE27
 * @implements B527:02B5:0006:F7CE
 */
void emu_GUI_EditBox()
{
	csip32 text;
	csip32 wcsip;
	csip32 unknown3;
	uint16 maxLength;
	uint16 unknown1;
	uint16 unknown4;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	text      =   emu_get_csip32(emu_ss, emu_sp, 0x0);
	maxLength = emu_get_memory16(emu_ss, emu_sp, 0x4);
	unknown1  = emu_get_memory16(emu_ss, emu_sp, 0x6);
	wcsip     =   emu_get_csip32(emu_ss, emu_sp, 0x8);
	unknown3  =   emu_get_csip32(emu_ss, emu_sp, 0xC);
	unknown4  = emu_get_memory16(emu_ss, emu_sp, 0x10);

	emu_ax = GUI_EditBox(text, maxLength, unknown1, wcsip, unknown3, unknown4);
}
