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
 * @implements 24E6:0088:000E:273C
 * @implements 24E6:0092:0004:F239
 * @implements 24E6:0094:0002:DA3A
 * @implements 24E6:0096:0010:7426
 * @implements 24E6:00A6:000C:1590
 * @implements 24E6:00B2:0009:107E
 * @implements 24E6:00BB:000B:D3E0
 * @implements 24E6:00C6:0004:3E1F
 * @implements 24E6:00CA:0005:8BCF
 * @implements 24E6:011A:001A:2E2C
 * @implements 24E6:0134:003C:41F0
 * @implements 24E6:014D:0023:9862
 * @implements 24E6:016E:0002:C33A
 * @implements 24E6:0172:0004:9439
 * @implements 24E6:0176:0004:893F
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
