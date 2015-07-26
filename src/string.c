/** @file src/string.c String routines. */

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "types.h"
#include "os/common.h"
#include "os/strings.h"
#include "os/endian.h"

#include "string.h"

#include "config.h"
#include "file.h"
#include "table/strings.h"

static char **s_strings = NULL;
static uint16 s_stringsCount = 0;

const char * const g_languageSuffixes[LANGUAGE_MAX] = { "ENG", "FRE", "GER", "ITA", "SPA" };
static const char * const s_stringDecompress = " etainosrlhcdupmtasio wb rnsdalmh ieorasnrtlc synstcloer dtgesionr ufmsw tep.icae oiadur laeiyodeia otruetoakhlr eiu,.oansrctlaileoiratpeaoip bm";

/**
 * Decompress a string.
 *
 * @param source The compressed string.
 * @param dest The decompressed string.
 * @return The length of decompressed string.
 */
uint16 String_Decompress(const char *source, char *dest)
{
	uint16 count;
	const char *s;

	count = 0;

	for (s = source; *s != '\0'; s++) {
		uint8 c = *s;
		if ((c & 0x80) != 0) {
			c &= 0x7F;
			dest[count++] = s_stringDecompress[c >> 3];
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

static void String_Load(const char *filename, bool compressed, int start, int end)
{
	uint8 *buf;
	uint16 count;
	uint16 i;

	buf = File_ReadWholeFile(String_GenerateFilename(filename));
	count = READ_LE_UINT16(buf) / 2;

	if (end < 0) end = start + count - 1;

	s_strings = (char **)realloc(s_strings, (end + 1) * sizeof(char *));
	s_strings[s_stringsCount] = NULL;

	for (i = 0; i < count && s_stringsCount <= end; i++) {
		char *src = (char *)buf + READ_LE_UINT16(buf + i * 2);
		char *dst;

		if (compressed) {
			dst = (char *)calloc(strlen(src) * 2 + 1, sizeof(char));
			String_Decompress(src, dst);
			String_TranslateSpecial(dst, dst);
		} else {
			dst = strdup(src);
		}

		String_Trim(dst);

		if (strlen(dst) == 0 && s_strings[0] != NULL) {
			free(dst);
			continue;
		}

		s_strings[s_stringsCount++] = dst;
	}

	/* EU version has one more string in DUNE langfile. */
	if (s_stringsCount == STR_LOAD_GAME) s_strings[s_stringsCount++] = strdup(s_strings[STR_LOAD_A_GAME]);

	while (s_stringsCount <= end) {
		s_strings[s_stringsCount++] = NULL;
	}

	free(buf);
}

/**
 * Loads the language files in the memory, which is used after that with String_GetXXX_ByIndex().
 */
void String_Init(void)
{
	String_Load("DUNE",     false,   1, 339);
	String_Load("MESSAGE",  false, 340, 367);
	String_Load("INTRO",    false, 368, 404);
	String_Load("TEXTH",    true,  405, 444);
	String_Load("TEXTA",    true,  445, 484);
	String_Load("TEXTO",    true,  485, 524);
	String_Load("PROTECT",  true,  525,  -1);
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

void String_Trim(char *string)
{
	char *s = string + strlen(string) - 1;
	while (s >= string && isspace((uint8)*s)) {
		*s = '\0';
		s--;
	}
}
