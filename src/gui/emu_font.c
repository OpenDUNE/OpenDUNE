/* $Id$ */

#include <stdio.h>
#include <stdarg.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "font.h"

/**
 * Emulator wrapper around Font_GetCharWidth()
 *
 * @name emu_Font_GetCharWidth
 * @implements 2521:000F:0022:6D87 ()
 */
void emu_Font_GetCharWidth()
{
	char c;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	c = emu_get_memory8(emu_ss, emu_sp, 0x0);

	emu_ax = Font_GetCharWidth(c);
}

/**
 * Emulator wrapper around Font_GetStringWidth()
 *
 * @name emu_Font_GetStringWidth
 * @implements 2521:0035:0015:AA0F ()
 */
void emu_Font_GetStringWidth()
{
	char *string;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	string = (char *)emu_get_memorycsip(emu_get_csip32(emu_ss, emu_sp, 0x0));

	emu_ax = Font_GetStringWidth(string);
}

