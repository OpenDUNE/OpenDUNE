/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "gfx.h"

/**
 * Emulator wrapper around GFX_GetScreenSegment().
 *
 * @name emu_GFX_Screen_GetSegmentActive
 * @implements 22A6:0DF8:0022:5FD5 ()
 */
void emu_GFX_Screen_GetSegmentActive()
{
	/* Return from this function */
	emu_pop(&emu_ip);

	emu_ax = GFX_Screen_GetSegmentActive();
}

/**
 * Emulator wrapper around GFX_Screen_Copy2()
 *
 * @name emu_GFX_Screen_Copy2
 * @implements 22A6:034F:000C:5E0A ()
 */
void emu_GFX_Screen_Copy2()
{
	uint16 xSrc;
	uint16 ySrc;
	uint16 xDst;
	uint16 yDst;
	uint16 width;
	uint16 height;
	uint16 screenSrc;
	uint16 screenDst;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	xSrc        = emu_get_memory16(emu_ss, emu_sp, 0x0);
	ySrc        = emu_get_memory16(emu_ss, emu_sp, 0x2);
	xDst        = emu_get_memory16(emu_ss, emu_sp, 0x4);
	yDst        = emu_get_memory16(emu_ss, emu_sp, 0x6);
	width       = emu_get_memory16(emu_ss, emu_sp, 0x8);
	height      = emu_get_memory16(emu_ss, emu_sp, 0xA);
	screenSrc   = emu_get_memory16(emu_ss, emu_sp, 0xC);
	screenDst   = emu_get_memory16(emu_ss, emu_sp, 0xE);

	GFX_Screen_Copy2(xSrc, ySrc, xDst, yDst, width, height, screenSrc, screenDst, false);
}

/**
 * Emulator wrapper around GFX_SetPalette().
 *
 * @name emu_GFX_SetPalette
 * @implements 2BA5:0006:009C:A3D1 ()
 */
void emu_GFX_SetPalette()
{
	csip32 pcsip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	pcsip = emu_get_csip32(emu_ss, emu_sp, 0x0);
	/* Two more parameters are send, but never used. */

	if (pcsip.csip == 0x0) return;

	GFX_SetPalette(emu_get_memorycsip(pcsip));
}

/**
 * Emulator wrapper around GFX_GetSize().
 *
 * @name emu_GFX_GetSize
 * @implements 22A6:127B:0036:F8C9 ()
 */
void emu_GFX_GetSize()
{
	uint16 width;
	uint16 height;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	width  = emu_get_memory16(emu_ss, emu_sp, 0x0);
	height = emu_get_memory16(emu_ss, emu_sp, 0x2);

	emu_ax = GFX_GetSize(width, height);
}

/**
 * Emulator wrapper around GFX_CopyFromBuffer()
 *
 * @name emu_GFX_CopyFromBuffer
 * @implements 22A6:04F8:007A:6E25 ()
 */
void emu_GFX_CopyFromBuffer()
{
	uint16 left;
	uint16 top;
	uint16 width;
	uint16 height;
	csip32 buffer;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	left   = emu_get_memory16(emu_ss, emu_sp, 0x0);
	top    = emu_get_memory16(emu_ss, emu_sp, 0x2);
	width  = emu_get_memory16(emu_ss, emu_sp, 0x4);
	height = emu_get_memory16(emu_ss, emu_sp, 0x6);
	buffer = emu_get_csip32  (emu_ss, emu_sp, 0x8);

	GFX_CopyFromBuffer(left, top, width, height, emu_get_memorycsip(buffer));
}

/**
 * Emulator wrapper around GFX_CopyToBuffer()
 *
 * @name emu_GFX_CopyToBuffer
 * @implements 22A6:101C:004B:D9F3 ()
 */
void emu_GFX_CopyToBuffer()
{
	uint16 left;
	uint16 top;
	uint16 width;
	uint16 height;
	csip32 buffer;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	left   = emu_get_memory16(emu_ss, emu_sp, 0x0);
	top    = emu_get_memory16(emu_ss, emu_sp, 0x2);
	width  = emu_get_memory16(emu_ss, emu_sp, 0x4);
	height = emu_get_memory16(emu_ss, emu_sp, 0x6);
	buffer = emu_get_csip32  (emu_ss, emu_sp, 0x8);

	GFX_CopyToBuffer(left, top, width, height, emu_get_memorycsip(buffer));
}
