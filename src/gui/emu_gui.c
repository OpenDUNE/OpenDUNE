/* $Id$ */

#include <stdio.h>
#include <stdarg.h>
#include "types.h"
#include "libemu.h"
#include "gui.h"
#include "../global.h"

/**
 * Emulator wrapper around GUI_EditBox().
 *
 * @name emu_GUI_DrawWiredRectangle
 * @implements 251B:0000:001E:7202 ()
 */
void emu_GUI_DrawWiredRectangle()
{
	uint16 left, top;
	uint16 right, bottom;
	uint16 colour;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	left   = emu_get_memory16(emu_ss, emu_sp, 0x0);
	top    = emu_get_memory16(emu_ss, emu_sp, 0x2);
	right  = emu_get_memory16(emu_ss, emu_sp, 0x4);
	bottom = emu_get_memory16(emu_ss, emu_sp, 0x6);
	colour = emu_get_memory16(emu_ss, emu_sp, 0x8);

	GUI_DrawWiredRectangle(left, top, right, bottom, colour);
}

/**
 * Emulator wrapper around GUI_DisplayText()
 *
 * @name emu_GUI_DisplayText
 * @implements 10E4:09AB:0031:5E8E ()
 */
void emu_GUI_DisplayText()
{
	csip32 str;
	uint16 arg0A;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	str     = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	arg0A   = emu_get_memory16(emu_ss, emu_sp, 0x4);

	/* XXX -- Theorically there can be more args, but this wrapper is always called without any */
	GUI_DisplayText(str.csip == 0 ? NULL : (char *)emu_get_memorycsip(str), arg0A);
}

/**
 * Decompiled function emu_GUI_DrawText()
 *
 * @name emu_GUI_DrawText
 * @implements 2BC2:000A:0044:2E0E ()
 */
void emu_GUI_DrawText()
{
	char *string;
	int16 left;
	int16 top;
	uint8 arg0E;
	uint8 arg10;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	string = (char *)emu_get_memorycsip(emu_get_csip32(emu_ss, emu_sp, 0x0));
	left   = (int16)emu_get_memory16(emu_ss, emu_sp, 0x4);
	top    = (int16)emu_get_memory16(emu_ss, emu_sp, 0x6);
	arg0E  = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x8);
	arg10  = (uint8)emu_get_memory16(emu_ss, emu_sp, 0xA);

	GUI_DrawText(string, left, top, arg0E, arg10);
}
