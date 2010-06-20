/* $Id$ */

#include <stdio.h>
#include <stdarg.h>
#include "types.h"
#include "libemu.h"
#include "gui.h"
#include "../global.h"

extern void emu_String_sprintf_params();

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
 * Emulator wrapper around GUI_DrawText()
 *
 * @name emu_GUI_DrawText
 * @implements 2BC2:000A:0044:2E0E ()
 */
void emu_GUI_DrawText()
{
	char *string;
	int16 left;
	int16 top;
	uint8 fgColour;
	uint8 bgColour;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	string   = (char *)emu_get_memorycsip(emu_get_csip32(emu_ss, emu_sp, 0x0));
	left     = (int16)emu_get_memory16(emu_ss, emu_sp, 0x4);
	top      = (int16)emu_get_memory16(emu_ss, emu_sp, 0x6);
	fgColour = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x8);
	bgColour = (uint8)emu_get_memory16(emu_ss, emu_sp, 0xA);

	GUI_DrawText(string, left, top, fgColour, bgColour);
}

/**
 * Emulator wrapper around GUI_DrawText_Wrapper()
 *
 * @name emu_GUI_DrawText_Wrapper
 * @implements 10E4:1EF1:0040:01F8 ()
 */
void emu_GUI_DrawText_Wrapper()
{
	csip32 string;
	int16 left;
	int16 top;
	uint8 fgColour;
	uint8 bgColour;
	uint16 flags;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	string   =        emu_get_csip32  (emu_ss, emu_sp, 0x0);
	left     = (int16)emu_get_memory16(emu_ss, emu_sp, 0x4);
	top      = (int16)emu_get_memory16(emu_ss, emu_sp, 0x6);
	fgColour = (uint8)emu_get_memory16(emu_ss, emu_sp, 0x8);
	bgColour = (uint8)emu_get_memory16(emu_ss, emu_sp, 0xA);
	flags    =        emu_get_memory16(emu_ss, emu_sp, 0xC);

	if (string.csip != 0) {
		/* Run the snprintf in emulator space */
		emu_push(emu_ss); emu_push(emu_sp + 16); /* args are at emu_sp + 14, but as we pushed emu_ss they are now at emu_sp + 16 */
		emu_push(string.s.cs); emu_push(string.s.ip);
		emu_push(0x353F); emu_push(0x8AEE);
		emu_push(emu_cs); emu_push(0x2035); emu_cs = 0x01F7; emu_String_sprintf_params();
		emu_sp += 12;

		GUI_DrawText_Wrapper(g_global->variable_8AEE, left, top, fgColour, bgColour, flags);
	} else {
		GUI_DrawText_Wrapper(NULL, left, top, fgColour, bgColour, flags);
	}
}

/**
 * Emulator wrapper around GUI_PaletteAnimate()
 *
 * @name emu_GUI_PaletteAnimate
 * @implements 0642:0559:0027:3560 ()
 */
void emu_GUI_PaletteAnimate()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GUI_PaletteAnimate();
}
