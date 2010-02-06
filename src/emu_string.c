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
