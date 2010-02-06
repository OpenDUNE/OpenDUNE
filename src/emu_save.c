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
 *Emulator wrapper around emu_SaveFile()
 *
 * @name emu_SaveFile
 * @implements B511:0729:0016:F168 ()
 */
void emu_SaveFile()
{
	char *filename;
	char *description;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filename = (char *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp, 0x2), emu_get_memory16(emu_ss, emu_sp, 0x0), 0x0);
	description = (char *)&emu_get_memory8(emu_get_memory16(emu_ss, emu_sp, 0x6), emu_get_memory16(emu_ss, emu_sp, 0x4), 0x0);

	SaveFile(filename, description);
}
