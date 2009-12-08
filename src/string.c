/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "string.h"

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
