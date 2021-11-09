/** @file src/string.c String routines. */

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "types.h"
#include "os/common.h"
#include "os/strings.h"
#include "os/endian.h"
#include "os/error.h"

#include "string.h"

#include "config.h"
#include "file.h"
#include "table/strings.h"

/* 941 strings and 38356 chars in English,
   833 and 39582 in French,
   899 and 42868 in German */
#define MAX_STRING_COUNT 950U
#define MAX_CHARACTER_COUNT 48*1024U
static uint16 * s_strings = NULL;
static char * s_stringsBuffer = NULL;
static uint16 s_stringsCount = 0;

const char * const g_languageSuffixes[LANGUAGE_MAX] = { "ENG", "FRE", "GER", "ITA", "SPA" };

/**
 * Decompress a string and
 * Translates 0x1B 0xXX occurences into extended ASCII values (0x7F + 0xXX).
 *
 * Characters values >= 0x80 (1AAAABBB) are unpacked to 2 characters
 * from the table. AAAA gives the 1st characted.
 * BBB the 2nd one (from a sub-table depending on AAAA)
 *
 * @param source The compressed string.
 * @param dest The decompressed and translated string.
 * @return The length of decompressed string.
 */
uint16 String_DecompressAndTranslate(const char *s, char *dest, uint16 destLen)
{
	static const char couples[] =
		" etainosrlhcdupm"	/* 1st char */
		"tasio wb"	/* <SPACE>? */
		" rnsdalm"	/* e? */
		"h ieoras"	/* t? */
		"nrtlc sy"	/* a? */
		"nstcloer"	/* i? */
		" dtgesio"	/* n? */
		"nr ufmsw"	/* o? */
		" tep.ica"	/* s? */
		"e oiadur"	/* r? */
		" laeiyod"	/* l? */
		"eia otru"	/* h? */
		"etoakhlr"	/* c? */
		" eiu,.oa"	/* d? */
		"nsrctlai"	/* u? */
		"leoiratp"	/* p? */
		"eaoip bm";	/* m? */
	uint16 count;

	for (count = 0; *s != '\0'; s++) {
		uint8 c = *s;
		if ((c & 0x80) != 0) {
			c &= 0x7F;
			dest[count++] = couples[c >> 3];	/* 1st char */
			c = couples[c + 16];	/* 2nd char */
		} else if (c == 0x1B) {
			c = 0x7F + *(++s);
		}
		dest[count++] = c;
		if (count >= destLen - 1) {
			Warning("String_Decompress() : truncating output !\n");
			break;
		}
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
	return s_stringsBuffer + s_strings[stringID];
}

static void String_Load(const char *filename, bool compressed, uint16 start, uint16 end)
{
	uint8 *buf;
	uint16 count;
	uint16 i;
	char buffer[1024];

	buf = File_ReadWholeFile(String_GenerateFilename(filename));
	count = READ_LE_UINT16(buf) / 2;

	if (end == 0) end = start + count - 1;

	for (i = 0; i < count && s_stringsCount <= end; i++) {
		uint16 len;
		const char *src = (const char *)buf + READ_LE_UINT16(buf + i * 2);

		if (compressed) {
			len = String_DecompressAndTranslate(src, buffer, (uint16)sizeof(buffer));
		} else {
			strcpy(buffer, src);
		}
		String_Trim(buffer);

		len = strlen(buffer);
		if (len > 0 || s_strings[s_stringsCount] == 0) {
			memcpy(s_stringsBuffer + s_strings[s_stringsCount++], buffer, len + 1);
			s_strings[s_stringsCount] = s_strings[s_stringsCount - 1] + len + 1;
			/* s_strings[s_stringsCount] must point to the available space in buffer */
		}
	}
	free(buf);

	if (s_stringsCount == 335) {
		Warning("DUNE V1.0 message file detected\n");
		memmove(s_strings + 283, s_strings + 281, sizeof(s_strings[0]) * (335 - 281 + 1));
		s_stringsCount += 2;
		s_strings[s_stringsCount + 2] = s_strings[s_stringsCount];	/* available space */
		s_strings[s_stringsCount++] = s_strings[STR_NULL];
		s_strings[s_stringsCount++] = s_strings[STR_OLD_SAVE_GAME_FILE_IS_INCOMPATABLE_WITH_LATEST_VERSION];
	}

	/* EU version has one more string in DUNE langfile. */
	if (s_stringsCount == STR_LOAD_GAME) {
		s_strings[s_stringsCount + 1] = s_strings[s_stringsCount];	/* available space */
		s_strings[s_stringsCount++] = s_strings[STR_LOAD_A_GAME];
	}

	while (s_stringsCount <= end) {
		Warning("String_Load(%s) filling %hu 0x%hx\n", filename, s_stringsCount, s_strings[s_stringsCount]);
		s_stringsCount++;
		s_strings[s_stringsCount] = s_strings[s_stringsCount - 1];	/* available space */
	}

	Debug("String_Load(%s) done. str count = %hu, byte count = %hu\n",
	      filename, s_stringsCount, s_strings[s_stringsCount]);
}

/**
 * Loads the language files in the memory, which is used after that with String_GetXXX_ByIndex().
 */
void String_Init(void)
{
	s_stringsCount = 0;
	s_strings = malloc(sizeof(uint16) * MAX_STRING_COUNT);
	s_strings[s_stringsCount] = 0;	/* points to available space in buffer */
	s_stringsBuffer = malloc(MAX_CHARACTER_COUNT);
	String_Load("DUNE",     false,   1, 339);
	String_Load("MESSAGE",  false, 340, 367);
	String_Load("INTRO",    false, 368, 404);
	String_Load("TEXTH",    true,  405, 444);
	String_Load("TEXTA",    true,  445, 484);
	String_Load("TEXTO",    true,  485, 524);
	String_Load("PROTECT",  true,  525,   0);
}

/**
 * Unloads the language files in the memory.
 */
void String_Uninit(void)
{
	free(s_stringsBuffer);
	s_stringsBuffer = NULL;
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
