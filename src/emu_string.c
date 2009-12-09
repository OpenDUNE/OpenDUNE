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

/**
 * Emulator wrapper around String_GetFromBuffer_ByIndex().
 *
 * @name emu_String_GetFromBuffer_ByIndex
 * @implements 2502:0165:0027:41E7 ()
 * @implements 2502:018C:0004:893F
 */
void emu_String_GetFromBuffer_ByIndex()
{
	csip32 csip;
	char *buffer;
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	csip  =   emu_get_csip32(emu_ss, emu_sp, 0x0);
	index = emu_get_memory16(emu_ss, emu_sp, 0x4);

	buffer = (char *)emu_get_memorycsip(csip);

	csip.s.ip += String_GetFromBuffer_ByIndex(buffer, index) - buffer;

	emu_dx = csip.s.cs;
	emu_ax = csip.s.ip;
}

/**
 * Emulator wrapper around String_Get_ByIndex().
 *
 * @name emu_String_Get_ByIndex
 * @implements 0FCB:005F:001C:FDC4 ()
 * @implements 0FCB:007B:0005:87EE
 * @implements 0FCB:007E:0002:C33A
 * @implements 0FCB:0080:0006:5EA9
 * @implements 0FCB:0086:0002:2597
 */
void emu_String_Get_ByIndex()
{
	csip32 csip;
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index = emu_get_memory16(emu_ss, emu_sp, 0x0);

	csip = g_global->strings;

	csip.s.ip += String_Get_ByIndex(index) - (char *)emu_get_memorycsip(csip);

	emu_dx = csip.s.cs;
	emu_ax = csip.s.ip;
}

/**
 * Emulator wrapper around String_TranslateSpecial().
 *
 * @name emu_String_TranslateSpecial
 * @implements 2502:0008:0015:FFBD ()
 * @implements 2502:001D:0016:2C58
 * @implements 2502:0033:0024:59EB
 * @implements 2502:0039:001E:8FAC
 * @implements 2502:0045:0012:9F29
 */
void emu_String_TranslateSpecial()
{
	csip32 source;
	csip32 dest;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	source = emu_get_csip32(emu_ss, emu_sp, 0x0);
	dest   = emu_get_csip32(emu_ss, emu_sp, 0x4);

	if (source.csip == 0x0 || dest.csip == 0x0) return;

	String_TranslateSpecial((char *)emu_get_memorycsip(source), (char *)emu_get_memorycsip(dest));
}
