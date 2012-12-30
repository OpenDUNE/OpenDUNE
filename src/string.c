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
#include "table/strings.h"

static char **s_strings = NULL;
static uint16 s_stringsCount = 0;

const char * const g_languageSuffixes[] = { "ENG", "FRE", "GER", "ITA", "SPA" };
static const char *s_stringDecompress = " etainosrlhcdupmtasio wb rnsdalmh ieorasnrtlc synstcloer dtgesionr ufmsw tep.icae oiadur laeiyodeia otruetoakhlr eiu,.oansrctlaileoiratpeaoip bm";

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
const char *String_GenerateFilename(const char *name)
{
	static char filename[14];

	assert(g_config.language < lengthof(g_languageSuffixes));

	snprintf(filename, sizeof(filename), "%s.%s", name, g_languageSuffixes[g_config.language]);
	return filename;
}

/**
 * Returns a pointer to the string at given index in current string file.
 *
 * @param stringID The index of the string.
 * @return The pointer to the string.
 */
char *String_Get_ByIndex(uint16 stringID)
{
	return s_strings[stringID];
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

static void String_Load(const char *filename, bool compressed)
{
	void *buf;
	uint16 count;
	uint16 i;

	buf = File_ReadWholeFile(String_GenerateFilename(filename));
	count = *(uint16 *)buf / 2;

	s_stringsCount += count;
	s_strings = (char **)realloc(s_strings, s_stringsCount * sizeof(char *));
	s_strings[s_stringsCount - count] = NULL;

	for (i = 0; i < count; i++) {
		char *src = (char *)buf + ((uint16 *)buf)[i];
		char *dst;

		if (strlen(src) == 0 && s_strings[0] != NULL) {
			s_stringsCount--;
			continue;
		}

		if (compressed) {
			dst = (char *)calloc(strlen(src) * 2 + 1, sizeof(char));
			String_Decompress(src, dst);
			String_TranslateSpecial(dst, dst);
		} else {
			dst = strdup(src);
		}

		s_strings[s_stringsCount - count + i] = dst;
	}

	/* EU version has one more string in DUNE langfile. */
	if (s_stringsCount == STR_LOAD_GAME) s_strings[s_stringsCount++] = strdup(s_strings[STR_LOAD_A_GAME]);

	free(buf);
}

/**
 * Loads the language files in the memory, which is used after that with String_GetXXX_ByIndex().
 */
void String_Init(void)
{
	String_Load("DUNE", false);
	String_Load("MESSAGE", false);
	String_Load("INTRO", false);
	String_Load("TEXTH",true);
	String_Load("TEXTA", true);
	String_Load("TEXTO",true);
	String_Load("PROTECT", true);
}

/**
 * Unloads the language files in the memory.
 */
void String_Uninit(void)
{
	uint16 i;

	for (i = 0; i < s_stringsCount; i++) free(s_strings[i]);
	free(s_strings);
	s_strings = NULL;
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
