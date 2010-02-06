/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "file.h"

/**
 * Emulator wrapper around FileInfo_FindIndex_ByName().
 *
 * @name emu_FileInfo_FindIndex_ByName
 * @implements 1FB5:1ABA:0031:8318 ()
 */
void emu_FileInfo_FindIndex_ByName()
{
	csip32 filename;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filename = emu_get_csip32(emu_ss, emu_sp, 0x0);

	emu_ax = 0xFFFF;

	if (filename.csip == 0x0) return;

	emu_ax = FileInfo_FindIndex_ByName((char *)emu_get_memorycsip(filename));
}
