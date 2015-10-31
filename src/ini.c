/** @file src/ini.c INI file reading routines. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "types.h"
#include "os/strings.h"

#include "ini.h"

#include "string.h"

char *Ini_GetString(const char *category, const char *key, const char *defaultValue, char *dest, uint16 length, char *source)
{
	char *s;
	char buffer[1024];
	uint16 catLength;
	char *current;
	char *ret;

	if (dest != NULL) {
		*dest = '\0';
		/* Set the default value in case we jump out early */
		if (defaultValue != NULL) strncpy(dest, defaultValue, length);
		dest[length - 1] = '\0';
	}

	if (source == NULL) return NULL;

	sprintf(buffer, "[%s]", category);
	for (s = buffer; *s != '\0'; s++) *s = toupper(*s);
	catLength = (uint16)strlen(buffer);

	ret = source;

	for (current = source; current != NULL; current++) {
		const char *end;

		current = strchr(current, '[');
		if (current == NULL) break;

		if (strncasecmp(current, buffer, catLength) != 0) continue;
		if (current != source && *(current - 1) != '\r' && *(current - 1) != '\n') continue;

		current += catLength;
		while (isspace((uint8)*current)) current++;

		/* Find the end of this block */
		for (end = current; end != NULL; end++) {
			end = strchr(end, '[');
			if (end == NULL) break;

			if (*(end - 1) == '\r' || *(end - 1) == '\n') break;
		}

		/* If there is no other '[', take the last char of the file */
		if (end == NULL) end = current + strlen(current);

		if (key != NULL) {
			uint16 keyLength = (uint16)strlen(key);

			ret = current;

			while (current < end) {
				char *value;
				char *lineEnd;

				/* Check to see if there is nothing behind the key ('a' should not match 'aa') */
				value = current + keyLength;
				while (isspace((uint8)*value)) value++;

				/* Now validate the size and if we match at all */
				if (*value != '=' || strncasecmp(current, key, keyLength) != 0) {
					/* Search for LF to support both CR/LF and LF line endings. */
					current = strchr(current, '\n');
					if (current == NULL) break;
					while (isspace((uint8)*current)) current++;
					if (current > end) break;

					continue;
				}

				ret = current;

				/* Get the value */
				current = value + 1;

				/* Find the end of the line */
				lineEnd = strchr(current, '\n');
				if (lineEnd == NULL) break;
				while (isspace((uint8)*lineEnd)) lineEnd++;
				if (lineEnd > end) break;

				/* Copy the value */
				if (dest != NULL) {
					uint16 len = (uint16)(lineEnd - current);
					memcpy(dest, current, len);
					*(dest + len) = '\0';

					String_Trim(dest);
				}

				return ret;
			}

			/* Failed to find the key. Return anyway. */
			return NULL;
		}

		ret = current;
		if (dest == NULL) return ret;

		/* Read all the keys from this section */
		while (true) {
			uint16 len;
			char *lineEnd;

			lineEnd = strchr(current, '=');
			if (lineEnd == NULL || lineEnd > end) break;

			len = (uint16)(lineEnd - current);
			memcpy(dest, current, len);
			*(dest + len) = '\0';

			String_Trim(dest);
			dest += strlen(dest) + 1;

			/* Find the next line, ignoring all \r\n */
			current = strchr(current, '\n');
			if (current == NULL) break;
			while (isspace((uint8)*current)) current++;
			if (current > end) break;
		}

		*dest++ = '\0';
		/* end the list with a zero element */
		*dest++ = '\0';

		return ret;
	}

	return NULL;
}

int Ini_GetInteger(const char *category, const char *key, int defaultValue, char *source)
{
	char value[16];
	char buffer[16];

	sprintf(value, "%d", defaultValue);

	Ini_GetString(category, key, value, buffer, 15, source);
	return atoi(buffer);
}

void Ini_SetString(const char *category, const char *key, const char *value, char *source)
{
	char *s;
	char buffer[120];

	if (source == NULL || category == NULL) return;

	s = Ini_GetString(category, NULL, NULL, NULL, 0, source);
	if (s == NULL && key != NULL) {
		sprintf(buffer, "\r\n[%s]\r\n", category);
		strcat(source, buffer);
	}

	s = Ini_GetString(category, key, NULL, NULL, 0, source);
	if (s != NULL) {
		uint16 count = (uint16)strcspn(s, "\r\n");
		if (count != 0) {
			/* Drop first line if not empty */
			size_t len = strlen(s + count + 1) + 1;
			memmove(s, s + count + 1, len);
		}
		if (*s == '\n') {
			/* Drop first line if empty */
			size_t len = strlen(s + 1) + 1;
			memmove(s, s + 1, len);
		}
	} else {
		s = Ini_GetString(category, NULL, NULL, NULL, 0, source);
	}

	if (value != NULL) {
		sprintf(buffer, "%s=%s\r\n", key, value);
		memmove(s + strlen(buffer), s, strlen(s) + 1);
		memcpy(s, buffer, strlen(buffer));
	}
}
