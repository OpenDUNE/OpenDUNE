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
 * @name emu_GFX_GetScreenSegment
 * @implements 22A6:0DF8:0022:5FD5 ()
 */
void emu_GFX_GetScreenSegment()
{
	/* Return from this function */
	emu_pop(&emu_ip);

	emu_ax = GFX_Screen_GetSegementActive();
}

/**
 * Emulator wrapper around Unknown_22A6_0E22().
 *
 * @name emu_Unknown_22A6_0E22
 * @implements 22A6:0E22:0012:7FC4 ()
 */
void emu_GFX_GetSegment_ByIndex()
{
	/* Return from this function */
	emu_pop(&emu_ip);

	emu_ax = GFX_Screen_GetSegment_ByIndex(emu_ax);
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
