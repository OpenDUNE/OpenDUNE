/* $Id$ */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "os/strings.h"
#include "types.h"
#include "libemu.h"
#include "global.h"

void String_Trim(char *string)
{
	char *s = string + strlen(string) - 1;
	while (s >= string && (g_global->characterClass[(uint8)*s] & 0x1) != 0) {
		*s = '\0';
		s--;
	}
}

void Ini_GetString(const char *category, const char *key, const char *defaultValue, char *dest, uint16 length, const char *source)
{
	char *s;
	char buffer[1024];
	uint16 catLength;
	const char *current;

	if (dest == NULL) return;

	/* Set the default value in case we jump out early */
	if (defaultValue != NULL) strncpy(dest, defaultValue, length);

	dest[length - 1] = '\0';

	if (source == NULL) return;

	sprintf(buffer, "[%s]", category);
	for (s = buffer; *s != '\0'; s++) if (*s >= 'a' && *s <= 'z') *s -= 32;
	catLength = strlen(buffer);

	current = source;

	for (current = source; current != NULL; current++) {
		const char *end;

		current = strchr(current, '[');
		if (current == NULL) break;

		if (strncasecmp(current, buffer, catLength) != 0) continue;
		if (*(current - 1) != '\r' && *(current - 1) != '\n') continue;

		current += catLength;
		while ((g_global->characterClass[(uint8)*current] & 0x1) != 0) current++;

		/* Find the end of this block */
		for (end = current; end != NULL; end++) {
			end = strchr(end, '[');
			if (end == NULL) break;

			if (*(end - 1) == '\r' || *(end - 1) == '\n') break;
		}

		/* If there is no other '[', take the last char of the file */
		if (end == NULL) end = current + strlen(current);

		if (key != NULL) {
			uint16 keyLength = strlen(key);

			while (true) {
				const char *value;
				char *lineEnd;
				uint16 len;

				/* Check to see if there is nothing behind the key ('a' should not match 'aa') */
				value = current + keyLength;
				while ((g_global->characterClass[(uint8)*value] & 0x1) != 0) value++;

				/* Now validate the size and if we match at all */
				if (*value != '=' || strncasecmp(current, key, keyLength) != 0) {
					current = strchr(current, '\r');
					if (current == NULL) break;
					while ((g_global->characterClass[(uint8)*current] & 0x1) != 0) current++;
					if (current > end) break;

					continue;
				}

				/* Get the value */
				current = value + 1;

				/* Find the end of the line */
				lineEnd = strchr(current, '\r');
				if (lineEnd == NULL) break;
				while ((g_global->characterClass[(uint8)*lineEnd] & 0x1) != 0) lineEnd++;
				if (lineEnd > end) break;

				/* Copy the value */
				len = lineEnd - current;
				memcpy(dest, current, len);
				*(dest + len) = '\0';

				String_Trim(dest);
				return;
			}

			/* Failed to find the key. Return anyway. */
			*dest = '\0';
			return;
		}

		/* Read all the keys from this section */
		while (true) {
			uint16 len;
			char *lineEnd;

			lineEnd = strchr(current, '=');
			if (lineEnd == NULL || lineEnd > end) break;

			len = lineEnd - current;
			memcpy(dest, current, len);
			*(dest + len) = '\0';

			String_Trim(dest);
			dest += strlen(dest) + 1;

			/* Find the next line, ignoring all \r\n */
			current = strchr(current, '\r');
			if (current == NULL) break;
			while ((g_global->characterClass[(uint8)*current] & 0x1) != 0) current++;
			if (current > end) break;
		}

		*dest++ = '\0';
		*dest++ = '\0';

		return;
	}
}

int Ini_GetInteger(const char *category, const char *key, int defaultValue, const char *source)
{
	char value[16];
	char buffer[16];

	sprintf(value, "%d", defaultValue);

	Ini_GetString(category, key, value, buffer, 15, source);
	return atoi(buffer);
}
