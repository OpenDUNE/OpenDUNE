/* $Id$ */

/** @file src/gui/font.c Font routines. */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"

#include "font.h"

#include "../file.h"
#include "../tools.h"

void *g_fontIntro = NULL;
void *g_fontNew6p = NULL;
void *g_fontNew8p = NULL;
void *g_fontNew8p2 = NULL;

void *g_fontCurrent = NULL;

static uint8 *s_fontCurrentWidth = NULL;

/**
 * Get the width of a char in pixels.
 *
 * @param c The char to get the width of.
 * @return The width of the char in pixels.
 */
uint16 Font_GetCharWidth(char c)
{
	uint16 width;

	width = *(s_fontCurrentWidth + c);
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
 * @return The pointer of the allocated memory where the file has been read.
 */
void *Font_LoadFile(const char *filename)
{
	uint8 index;
	uint16 length;
	uint8 *buf;

	if (!File_Exists(filename)) return NULL;

	index = File_Open(filename, 1);

	if (File_Read(index, &length, 2) != 2) {
		File_Close(index);
		return NULL;
	}

	buf = emu_get_memorycsip(Tools_Malloc(length, 0x10));

	*(uint16 *)buf = length;

	File_Read(index, buf + 2, length - 2);
	File_Close(index);

	if (buf[2] != 0 || buf[3] != 5) {
		Tools_Free(emu_Global_GetCSIP(buf));
		return NULL;
	}

	return buf;
}

/**
 * Select a font.
 *
 * @param font The pointer of the font to use.
 */
void Font_Select(void *font)
{
	uint8 *f = font;

	if (f == NULL) return;

	g_fontCurrent = font;

	s_fontCurrentWidth = (f + ((uint16 *)f)[4]);

	emu_get_csip32  (0x22A6, 0x00, 0x80) = emu_Global_GetCSIP(f);
	emu_get_memory16(0x22A6, 0x00, 0x72) = ((uint16 *)f)[2]; /* heightOffset */
	emu_get_memory16(0x22A6, 0x00, 0x74) = ((uint16 *)f)[3];
	emu_get_memory16(0x22A6, 0x00, 0x76) = ((uint16 *)f)[4]; /* widthOffset */
	emu_get_memory16(0x22A6, 0x00, 0x78) = ((uint16 *)f)[5];
	emu_get_memory16(0x22A6, 0x00, 0x7A) = ((uint16 *)f)[6];

	f += ((uint16 *)f)[2]; /* heightOffset */

	g_global->variable_6C71 = f[4];
	g_global->variable_6C70 = f[5];

	g_global->variable_6D5F = g_global->variable_9931 / g_global->variable_6C71;
	g_global->variable_6D63 = g_global->variable_992F << 3;
	g_global->variable_6D61 = g_global->variable_6D63 / g_global->variable_6C70;
}
