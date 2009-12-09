/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "string.h"
#include "os/strings.h"

/**
 * Decompress a string.
 *
 * @param source The compressed string.
 * @param dest The decompressed string.
 * @return The length of decompressed string.
 */
uint16 String_Decompress(char *source, char* dest)
{
	uint16 count;
	char *s;

	count = 0;

	for (s = source; *s != '\0'; s++) {
		uint8 c = *s;
		if ((c & 0x80) != 0) {
			c &= 0x78;
			c >>= 3;
			dest[count++] = g_global->string_6E88[c];
			c <<= 3;
			c += (*s & 0x07);
			c = g_global->string_6E88[c + 0x10];
		}
		dest[count++] = c;
	}
	dest[count] = '\0';
	return count;
}

/**
 * Appends ".(ENG|FRE|...)" to the given string.
 *
 * @param name The string to append extension to.
 * @return The new string.
 */
char *String_GenerateFilename(char *name)
{
	snprintf(g_global->stringFilename, sizeof(g_global->stringFilename), "%s.%s", name, g_global->string_31D8 + g_global->language * 4);
	return g_global->stringFilename;
}

/**
 * Returns a pointer to the string at given index in given buffer.
 *
 * @param buffer The content of a string file.
 * @param index The index of the string.
 * @return The pointer to the string.
 */
char *String_GetFromBuffer_ByIndex(char *buffer, uint16 index)
{
	return buffer + ((uint16 *)buffer)[index];
}

/**
 * Returns a pointer to the string at given index in current string file.
 *
 * @param index The index of the string.
 * @return The pointer to the string.
 */
char *String_Get_ByIndex(uint16 index)
{
	char *buffer;

	buffer = (char *)emu_get_memorycsip(g_global->strings);
	return String_GetFromBuffer_ByIndex(buffer, index);
}
