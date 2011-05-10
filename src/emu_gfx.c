/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "gfx.h"

/**
 * Emulator wrapper around GFX_GetScreenSegment().
 *
 * @name emu_GFX_GetScreenSegment
 * @implements 22A6:0DF8:0022:5FD5 ()
 */
void emu_GFX_GetScreenSegment()
{
	/* Return from this function */
	emu_pop(&emu_ip);

	emu_ax = GFX_GetScreenSegment();
}

/**
 * Emulator wrapper around Unknown_22A6_0E1A().
 *
 * @name emu_Unknown_22A6_0E1A
 * @implements 22A6:0E1A:0008:F4AE ()
 */
void emu_Unknown_22A6_0E1A()
{
	/* Return from this function */
	emu_pop(&emu_ip);

	emu_ax = Unknown_22A6_0E1A(emu_ax);
}

/**
 * Emulator wrapper around Unknown_22A6_0E22().
 *
 * @name emu_Unknown_22A6_0E22
 * @implements 22A6:0E22:0012:7FC4 ()
 */
void emu_Unknown_22A6_0E22()
{
	/* Return from this function */
	emu_pop(&emu_ip);

	emu_ax = Unknown_22A6_0E22(emu_ax);
}

/**
 * Emulator wrapper around GFX_PutPixel().
 *
 * @name emu_GFX_PutPixel
 * @implements 22A6:0F76:002C:45CC ()
 */
void emu_GFX_PutPixel()
{
	uint16 x;
	uint16 y;
	uint16 colour;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	x      = emu_get_memory16(emu_ss, emu_sp, 0x0);
	y      = emu_get_memory16(emu_ss, emu_sp, 0x2);
	colour = emu_get_memory16(emu_ss, emu_sp, 0x4);

	GFX_PutPixel(x, y, colour & 0xFF);
}

/**
 * Emulator wrapper around GFX_22A6_034F()
 *
 * @name emu_GFX_22A6_034F
 * @implements 22A6:034F:000C:5E0A ()
 */
void emu_GFX_22A6_034F()
{
	uint16 xSrc;
	uint16 ySrc;
	uint16 xDst;
	uint16 yDst;
	uint16 width;
	uint16 height;
	uint16 memBlockSrc;
	uint16 memBlockDst;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	xSrc        = emu_get_memory16(emu_ss, emu_sp, 0x0);
	ySrc        = emu_get_memory16(emu_ss, emu_sp, 0x2);
	xDst        = emu_get_memory16(emu_ss, emu_sp, 0x4);
	yDst        = emu_get_memory16(emu_ss, emu_sp, 0x6);
	width       = emu_get_memory16(emu_ss, emu_sp, 0x8);
	height      = emu_get_memory16(emu_ss, emu_sp, 0xA);
	memBlockSrc = emu_get_memory16(emu_ss, emu_sp, 0xC);
	memBlockDst = emu_get_memory16(emu_ss, emu_sp, 0xE);

	GFX_22A6_034F(xSrc, ySrc, xDst, yDst, width, height, memBlockSrc, memBlockDst, false);
}
