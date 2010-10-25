/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "font.h"
#include "../file.h"

extern void f__23E1_0004_0014_2BC0();

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

	emu_push(0x10);
	emu_push(0); emu_push(length);
	emu_push(emu_cs); emu_push(0x0070); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	emu_sp += 6;

	memBlock.s.cs = emu_dx;
	memBlock.s.ip = emu_ax;
	buf = emu_get_memorycsip(memBlock);

	*(uint16 *)buf = length;

	File_Read(index, buf + 2, length - 2);
	File_Close(index);

	if (buf[2] != 0 || buf[3] != 5) memBlock.csip = 0;

	return memBlock;
}
