/* $Id$ */

#include <stdio.h>
#include <ctype.h>
#include "types.h"
#include "libemu.h"
#include "config.h"
#include "global.h"

/**
 * Emulator wrapper around Config_Read()
 *
 * @name emu_Config_Read
 * @implements 24E6:006E:001A:719E ()
 */
void emu_Config_Read()
{
	char *filename;
	char *c;
	DuneCfg *config;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filename = (char *)   emu_get_memorycsip(emu_get_csip32(emu_ss, emu_sp, 0x0));
	config   = (DuneCfg *)emu_get_memorycsip(emu_get_csip32(emu_ss, emu_sp, 0x4));

	/* Convert filename to lowercase because some OS need it. */
	for (c = filename; *c != '\0'; c++) *c = tolower(*c);

	emu_ax = Config_Read(filename, config) ? 1 : 0;
}
