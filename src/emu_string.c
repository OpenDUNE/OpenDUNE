/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "string.h"

/**
 * Emulator wrapper around String_Decompress().
 *
 * @name emu_String_Decompress
 * @implements 2502:00FA:0009:9EB2 ()
 * @implements 2502:0103:005E:BCB7
 * @implements 2502:0139:0028:1593
 * @implements 2502:0143:001E:15C2
 * @implements 2502:0161:0004:DE52
 */
void emu_String_Decompress()
{
	char *source;
	char *dest;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	source = (char *)emu_get_memorycsip(emu_get_csip32(emu_ss, emu_sp, 0x0));
	dest   = (char *)emu_get_memorycsip(emu_get_csip32(emu_ss, emu_sp, 0x4));

	emu_ax = String_Decompress(source, dest);
}

/**
 * Emulator wrapper around String_GenerateFilename().
 *
 * @name emu_String_GenerateFilename
 * @implements 0642:075D:0011:C164 ()
 * @implements 0642:076C:0002:E73A
 * @implements 0642:076E:0014:FFCC
 * @implements 0642:0782:0017:3AC1
 * @implements 0642:0799:0019:BAF4
 * @implements 0642:07B2:000A:EC0B
 * @implements 0642:07BC:0002:2597
 */
void emu_String_GenerateFilename()
{
	csip32 scsip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	scsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	emu_ax = 0x0;
	emu_dx = 0x0;

	if (scsip.csip == 0x0) return;

	String_GenerateFilename((char *)emu_get_memorycsip(scsip));

	emu_dx = 0x353F;
	emu_ax = emu_Global_GetIP(g_global->stringFilename, emu_dx);
}
