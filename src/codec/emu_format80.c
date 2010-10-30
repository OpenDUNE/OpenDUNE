/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "format80.h"

/**
 * Emulator wrapper around Format80_Decode()
 *
 * @name emu_Format80_Decode
 * @implements 2BD6:0000:0015:24A9 ()
 */
void emu_Format80_Decode()
{
	csip32 sourcecsip;
	csip32 destcsip;
	uint16 length;

	uint8 *source;
	uint8 *dest;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	sourcecsip = emu_get_csip32(emu_ss, emu_sp, 0x0);
	destcsip = emu_get_csip32(emu_ss, emu_sp, 0x4);
	length = emu_get_memory16(emu_ss, emu_sp, 0x8);

	emu_ax = 0;
	if (sourcecsip.csip == 0 || destcsip.csip == 0) return;

	source = emu_get_memorycsip(sourcecsip);
	dest = emu_get_memorycsip(destcsip);

	emu_ax = Format80_Decode(source, dest, length);
}
