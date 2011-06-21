/* $Id$ */

/** @file src/gui/font.c Font routines. */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"

#include "font.h"

#include "../file.h"
#include "../tools.h"

/**
 * Get the width of a char in pixels.
 *
 * @param c The char to ge the width of.
 * @return The width of the char in pixels.
 */
uint16 Font_GetCharWidth(char c)
{
	uint16 width;

	width = emu_get_memory8(g_global->variable_6C72.s.cs, g_global->variable_6C72.s.ip, c);
	return width + g_global->variable_6C6C;
}

/**
 * Get the width of the string in pixels.
 *
 * @param string The string to get the width of.
 * @return The width of the string in pixels.
 */
uint16 Font_GetStringWidth(char *string)
{
	uint16 width = 0;

	if (string == NULL) return 0;

	while (*string != '\0') {
		width += Font_GetCharWidth(*string++);
	}

	return width;
}

/**
 * Load a font file.
 *
 * @param filename The name of the font file.
 * @return The CS:IP of the allocated memory where the file has been read.
 */
csip32 Font_LoadFile(const char *filename)
{
	uint8 index;
	uint16 length;
	csip32 memBlock;
	uint8 *buf;

	memBlock.csip = 0;

	if (!File_Exists(filename)) return memBlock;

	index = File_Open(filename, 1);

	if (File_Read(index, &length, 2) != 2) {
		File_Close(index);
		return memBlock;
	}

	memBlock = Tools_Malloc(length, 0x10);
	buf = emu_get_memorycsip(memBlock);

	*(uint16 *)buf = length;

	File_Read(index, buf + 2, length - 2);
	File_Close(index);

	if (buf[2] != 0 || buf[3] != 5) memBlock.csip = 0;

	return memBlock;
}

/**
 * Select a font.
 *
 * @param font_csip The CS:IP of the font to use.
 * @return The CS:IP of the previous selected font.
 */
csip32 Font_Select(csip32 font_csip)
{
	csip32 ret = g_global->variable_99F3;
	uint8 *font = emu_get_memorycsip(font_csip);

	if (font_csip.csip == 0x0) return ret;

	g_global->variable_99F3 = font_csip;

	g_global->variable_6C72 = font_csip;
	g_global->variable_6C72.s.ip += ((uint16 *)font)[4]; /* widthOffset */

	emu_get_csip32  (0x22A6, 0x00, 0x80) = font_csip;
	emu_get_memory16(0x22A6, 0x00, 0x72) = ((uint16 *)font)[2]; /* heightOffset */
	emu_get_memory16(0x22A6, 0x00, 0x74) = ((uint16 *)font)[3];
	emu_get_memory16(0x22A6, 0x00, 0x76) = ((uint16 *)font)[4]; /* widthOffset */
	emu_get_memory16(0x22A6, 0x00, 0x78) = ((uint16 *)font)[5];
	emu_get_memory16(0x22A6, 0x00, 0x7A) = ((uint16 *)font)[6];

	font += ((uint16 *)font)[2]; /* heightOffset */

	g_global->variable_6C71 = font[4];
	g_global->variable_6C70 = font[5];

	g_global->variable_6D5F = g_global->variable_9931 / g_global->variable_6C71;
	g_global->variable_6D63 = g_global->variable_992F << 3;
	g_global->variable_6D61 = g_global->variable_6D63 / g_global->variable_6C70;

	return ret;
}
