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

/**
 * Emulator wrapper around String_Load()
 *
 * @name emu_String_Load
 * @implements 0FCB:000D:0019:5047 ()
 */
void emu_String_Load()
{
	csip32 filename;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filename = emu_get_csip32(emu_ss, emu_sp, 0x0);

	if (filename.csip == 0x0) return;

	String_Load((char *)emu_get_memorycsip(filename));
}

/**
 * Emulator wrapper around String_LoadFile()
 *
 * @name emu_String_LoadFile
 * @implements 0FCB:0088:0016:2DD9 ()
 */
void emu_String_LoadFile()
{
	csip32 filename;
	uint16 index;
	csip32 buffer;
	uint16 buflen;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filename = emu_get_csip32(emu_ss, emu_sp, 0x0);
	index    = emu_get_memory16(emu_ss, emu_sp, 0x4);
	buffer   = emu_get_csip32(emu_ss, emu_sp, 0x6);
	buflen   = emu_get_memory16(emu_ss, emu_sp, 0xA);

	emu_ax = 0;

	if (filename.csip == 0x0 || buffer.csip == 0x0) return;

	emu_ax = String_LoadFile((char *)emu_get_memorycsip(filename), index, (char *)emu_get_memorycsip(buffer), buflen);
}

/**
 * Emulation wrapper for emu_String_NextString()
 *
 * @name emu_String_NextString
 * @implements B4E0:0B35:0010:5ED9 ()
 */
void emu_String_NextString()
{
	csip32 csip06;
	uint8 *ptr;

	/* Pop return address off the stack. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	csip06 = emu_get_csip32(emu_ss, emu_sp,  0);
	ptr = emu_get_memorycsip(csip06);

	ptr = String_NextString(ptr);
	csip06.s.ip = emu_Global_GetIP(ptr, csip06.s.cs);

	emu_dx = csip06.s.cs;
	emu_ax = csip06.s.ip;
}

