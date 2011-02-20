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

/**
 * Emulator wrapper around Sprite_GetWidth()
 *
 * @name emu_Sprite_GetWidth
 * @implements 260F:003A:0014:CA10 ()
 */
void emu_Sprite_GetWidth()
{
	csip32 sprite_csip;

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	sprite_csip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	emu_ax = Sprite_GetWidth(sprite_csip);
}

/**
 * Emulator wrapper around Sprite_GetHeight()
 *
 * @name emu_Sprite_GetHeight
 * @implements 260F:0054:0016:0011 ()
 */
void emu_Sprite_GetHeight()
{
	csip32 sprite_csip;

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	sprite_csip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	emu_ax = Sprite_GetHeight(sprite_csip);
}

/**
 * Emulator wrapper around Sprites_LoadTiles()
 *
 * @name emu_Sprites_LoadTiles
 * @implements B4B8:0D23:0010:BA99 ()
 */
void emu_Sprites_LoadTiles()
{
	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	Sprites_LoadTiles();
}

/**
 * Emulator wrapper around Sprites_UnloadTiles()
 *
 * @name emu_Sprites_UnloadTiles
 * @implements B4B8:0ECE:000B:BD2E ()
 */
void emu_Sprites_UnloadTiles()
{
	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	Sprites_UnloadTiles();
}

/**
 * Emulator wrapper around Sprites_LoadCPSFile()
 *
 * @name emu_Sprites_LoadCPSFile
 * @implements 253D:00FA:0010:873D ()
 */
void emu_Sprites_LoadCPSFile()
{
	csip32 filename;
	uint16 memory1;
	uint16 memory2;
	csip32 palette;
	uint32 res;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	filename = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	memory1  = emu_get_memory16(emu_ss, emu_sp, 0x4);
	memory2  = emu_get_memory16(emu_ss, emu_sp, 0x6);
	palette  = emu_get_csip32  (emu_ss, emu_sp, 0x8);

	res = Sprites_LoadCPSFile((char *)emu_get_memorycsip(filename), memory1, memory2, (void *)emu_get_memorycsip(palette));

	emu_dx = res >> 16;
	emu_ax = res & 0xFFFF;
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
