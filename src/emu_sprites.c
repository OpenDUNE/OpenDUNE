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
 * Emulator wrapper around Sprites_LoadImage()
 *
 * @name emu_Sprites_LoadImage
 * @implements B4CA:020F:0017:A939 ()
 */
void emu_Sprites_LoadImage()
{
	csip32 filename;
	uint16 memory1;
	uint16 memory2;
	csip32 palette;
	uint16 arg12;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filename = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	memory1  = emu_get_memory16(emu_ss, emu_sp, 0x4);
	memory2  = emu_get_memory16(emu_ss, emu_sp, 0x6);
	palette  = emu_get_csip32  (emu_ss, emu_sp, 0x8);
	arg12    = emu_get_memory16(emu_ss, emu_sp, 0xC);

	emu_ax = Sprites_LoadImage((char *)emu_get_memorycsip(filename), memory1, memory2, (void *)emu_get_memorycsip(palette), arg12);
}
