/* $Id$ */

/** @file src/string.c String routines. */

#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "types.h"
#include "os/common.h"
#include "os/strings.h"

#include "string.h"

#include "config.h"
#include "file.h"

void *g_strings = NULL;
void *g_stringsHint = NULL;

const char * const g_languageSuffixes[] = { "ENG", "FRE", "GER", "ITA", "SPA" };
static char *s_stringDecompress = " etainosrlhcdupmtasio wb rnsdalmh ieorasnrtlc synstcloer dtgesionr ufmsw tep.icae oiadur laeiyodeia otruetoakhlr eiu,.oansrctlaileoiratpeaoip bm";

/**
 * Decompress a string.
 *
 * @param source The compressed string.
 * @param dest The decompressed string.
 * @return The length of decompressed string.
 */
uint16 String_Decompress(char *source, char *dest)
{
	uint16 count;
	char *s;

	count = 0;

	for (s = source; *s != '\0'; s++) {
		uint8 c = *s;
		if ((c & 0x80) != 0) {
			c &= 0x78;
			c >>= 3;
			dest[count++] = s_stringDecompress[c];
			c <<= 3;
			c += (*s & 0x07);
			c = s_stringDecompress[c + 16];
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
	static char filename[14];

	assert(g_config.language < lengthof(g_languageSuffixes));

	snprintf(filename, sizeof(filename), "%s.%s", name, g_languageSuffixes[g_config.language]);
	return filename;
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
	return String_GetFromBuffer_ByIndex(g_strings, index);
}

/**
 * Translates 0x1B 0xXX occurences into extended ASCII values (0x7F + 0xXX).
 *
 * @param source The untranslated string.
 * @param dest The translated string.
 */
void String_TranslateSpecial(char *source, char *dest)
{
	if (source == NULL || dest == NULL) return;

	while (*source != '\0') {
		char c = *source++;
		if (c == 0x1B) {
			c = 0x7F + (*source++);
		}
		*dest++ = c;
	}
	*dest = '\0';
}

/**
 * Loads the given language file in the memory, which is used after that with String_GetXXX_ByIndex().
 *
 * @param name The name of the language file to load (without extension).
 */
void String_Load(char *name)
{
	if (g_strings != NULL) {
		free(g_strings); g_strings = NULL;
	}

	if (name == NULL) return;

	g_strings = File_ReadWholeFile(String_GenerateFilename(name));
}

/**
 * Loads the string at given index from file with given file to given buffer, and decompress it.
 *
 * @param filename The file to load the string from.
 * @param index The index of the string to load.
 * @param buffer Where to load the string.
 * @param buflen The length of the buffer.
 * @return The length of decompressed string
 */
uint16 String_LoadFile(char *filename, uint16 index, char *buffer, uint16 buflen)
{
	uint8 file;
	uint16 offset;
	uint16 len;
	char *s;

	if (filename == NULL || buffer == NULL || buflen == 0) return 0;

	file = File_Open(filename, 1);
	File_Seek(file, index * 2, 0);
	File_Read(file, &offset, 2);
	File_Seek(file, offset, 0);
	File_Read(file, buffer, buflen);
	File_Close(file);

	len = strlen(buffer) + 1;

	s = buffer + buflen - len;
	memmove(s, buffer, len);
	return String_Decompress(s, buffer);
}

/**
 * Go to the next string.
 * @param ptr Pointer to the current string.
 * @return Pointer to the next string.
 */
uint8 *String_NextString(uint8* ptr)
{
	ptr += *ptr;
	while (*ptr == 0) ptr++;
	return ptr;
}

/**
 * Go to the previous string.
 * @param ptr Pointer to the current string.
 * @return Pointer to the previous string.
 */
uint8 *String_PrevString(uint8 *ptr)
{
	do {
		ptr--;
	} while (*ptr == 0);
	ptr -= *ptr - 1;
	return ptr;
}
