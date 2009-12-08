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
