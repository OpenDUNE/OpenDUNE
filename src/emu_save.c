/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "save.h"

/**
 * Decompiled function emu_String_GenerateSavegameFilename()
 *
 * @name emu_String_GenerateSavegameFilename
 * @implements B4F2:11B4:0016:244A ()
 * @implements B4F2:11CA:0005:60C3
 */
void emu_String_GenerateSavegameFilename()
{
	char *filename;
	int number;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	number = emu_get_memory16(emu_ss, emu_sp, 0x4);
	filename = (char *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp, 0x2), emu_get_memory16(emu_ss, emu_sp, 0x0), 0x0);

	sprintf(filename, "_save%03d.dat", number);
}

/**
 *Emulator wrapper around Save_Main()
 *
 * @name emu_Save_Main
 * @implements B511:0729:0016:F168 ()
 * @implements B511:0800:000F:842C
 * @implements B511:080F:0021:E6D5
 * @implements B511:0830:001F:5866
 * @implements B511:084F:001F:AE21
 * @implements B511:086E:000E:C613
 * @implements B511:087C:001C:2075
 * @implements B511:0898:000E:9B98
 * @implements B511:08A6:001B:5CCA
 * @implements B511:08C1:001A:7CEF
 * @implements B511:08DB:0015:0963
 * @implements B511:08F0:002F:3CDB
 * @implements B511:091F:000C:4FAE
 * @implements B511:0922:0009:C506
 * @implements B511:092B:0012:F13A
 * @implements B511:093D:001C:1421
 * @implements B511:0959:000C:4EAE
 * @implements B511:0965:0012:513A
 * @implements B511:0977:001C:EBB0
 * @implements B511:0993:000C:4EAE
 * @implements B511:099F:0012:013A
 * @implements B511:09B1:001C:6A91
 * @implements B511:09CD:000C:4EAE
 * @implements B511:09D9:0012:B13B
 * @implements B511:09EB:001C:0660
 * @implements B511:0A07:000C:4EAE
 * @implements B511:0A13:0012:A13A
 * @implements B511:0A25:001C:23D6
 * @implements B511:0A41:000C:4EAE
 * @implements B511:0A4D:0012:613B
 * @implements B511:0A5F:001C:AB44
 * @implements B511:0A7B:0009:260D
 * @implements B511:0A84:000B:5472
 */
void emu_Save_Main()
{
	char *filename;
	char *description;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filename = (char *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp, 0x2), emu_get_memory16(emu_ss, emu_sp, 0x0), 0x0);
	description = (char *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp, 0x6), emu_get_memory16(emu_ss, emu_sp, 0x4), 0x0);

	Save_Main(filename, description);
}
