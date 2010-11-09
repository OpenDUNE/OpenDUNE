/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "sprites.h"

/**
 * Emulator wrapper around Sprites_Load()
 *
 * @name emu_Sprites_Load
 * @implements B4B8:0A1E:001A:E094 ()
 */
void emu_Sprites_Load()
{
	uint16 index;
	uint16 memory;
	csip32 *sprites;

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index   = emu_get_memory16(emu_ss, emu_sp,  0x0);
	memory   = emu_get_memory16(emu_ss, emu_sp,  0x2);
	sprites = (csip32 *)emu_get_memorycsip(emu_get_csip32(emu_ss, emu_sp,  0x4));

	Sprites_Load(index, memory, sprites);
}

/**
 * Emulator wrapper around Sprites_GetCSIP()
 *
 * @name emu_Sprites_GetCSIP
 * @implements 2903:007A:0032:762D ()
 */
void emu_Sprites_GetCSIP()
{
	csip32 buffer_csip;
	uint16 index;
	csip32 ret;

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	buffer_csip = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	index       = emu_get_memory16(emu_ss, emu_sp, 0x4);

	ret = Sprites_GetCSIP(buffer_csip, index);

	emu_dx = ret.s.cs;
	emu_ax = ret.s.ip;
}
