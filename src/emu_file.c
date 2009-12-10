/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "global.h"
#include "file.h"

/**
 * Emulator wrapper around FileInfo_FindIndex_ByName().
 *
 * @name emu_FileInfo_FindIndex_ByName
 * @implements 1FB5:1ABA:0031:8318 ()
 * @implements 1FB5:1AC3:0028:DFE8
 * @implements 1FB5:1AEB:000D:1FF1
 * @implements 1FB5:1AF8:0011:AD2D
 * @implements 1FB5:1B09:000B:E347
 * @implements 1FB5:1B12:0002:C43A
 * @implements 1FB5:1B14:0003:9EFA
 * @implements 1FB5:1B17:0005:5115
 * @implements 1FB5:1B1C:0005:8BCF
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
