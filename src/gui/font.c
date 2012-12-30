/** @file src/gui/font.c Font routines. */

#include <stdlib.h>
#include <string.h>
#include "types.h"

#include "font.h"

#include "../config.h"
#include "../file.h"
#include "../opendune.h"

Font *g_fontIntro = NULL;
Font *g_fontNew6p = NULL;
Font *g_fontNew8p = NULL;

int8 g_fontCharOffset = -1;

Font *g_fontCurrent = NULL;

/**
 * Get the width of a char in pixels.
 *
 * @param c The char to get the width of.
 * @return The width of the char in pixels.
 */
uint16 Font_GetCharWidth(unsigned char c)
{
	return g_fontCurrent->chars[c].width + g_fontCharOffset;
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
static Font *Font_LoadFile(const char *filename)
{
	uint16 *buf;
	Font *f;
	uint8 i;

	if (!File_Exists(filename)) return NULL;

	buf = (uint16 *)File_ReadWholeFile(filename);

	if (buf[1] != 0x0500) {
		free(buf);
		return NULL;
	}

	f = (Font *)calloc(1, sizeof(Font));
	f->height = ((uint8 *)buf)[buf[2] + 4];
	f->maxWidth = ((uint8 *)buf)[buf[2] + 5];
	f->count = buf[5] - buf[4];
	f->chars = (FontChar *)calloc(f->count, sizeof(FontChar));

	for (i = 0; i < f->count; i++) {
		FontChar *fc = &f->chars[i];
		uint16 dataOffset;
		uint8 x;
		uint8 y;

		fc->width = ((uint8 *)buf)[buf[4] + i];
		fc->unusedLines = ((uint8 *)buf)[buf[6] + i * 2];
		fc->usedLines = ((uint8 *)buf)[buf[6] + i * 2 + 1];

		dataOffset = buf[buf[3] / 2 + i];
		if (dataOffset == 0) continue;

		fc->data = (uint8 *)malloc(fc->usedLines * fc->width);

		for (y = 0; y < fc->usedLines; y++) {
			for (x = 0; x < fc->width; x++) {
				uint8 data = ((uint8 *)buf + dataOffset)[y * ((fc->width + 1) / 2) + x / 2];
				if (x % 2 != 0) data >>= 4;
				fc->data[y * fc->width + x] = data & 0xF;
			}
		}
	}

	free(buf);

	return f;
}

/**
 * Select a font.
 *
 * @param font The pointer of the font to use.
 */
void Font_Select(Font *f)
{
	if (f == NULL) return;

	g_fontCurrent = f;
}

bool Font_Init(void)
{
	g_fontIntro = Font_LoadFile("INTRO.FNT");
	g_fontNew6p = Font_LoadFile((g_config.language == LANGUAGE_GERMAN) ? "new6pg.fnt" : "new6p.fnt");
	g_fontNew8p = Font_LoadFile("new8p.fnt");

	return g_fontNew8p != NULL;
}

static void Font_Unload(Font *f) {
	uint8 i;

	for (i = 0; i < f->count; i++) free(f->chars[i].data);
	free(f->chars);
	free(f);
}

void Font_Uninit(void)
{
	Font_Unload(g_fontIntro); g_fontIntro = NULL;
	Font_Unload(g_fontNew6p); g_fontNew6p = NULL;
	Font_Unload(g_fontNew8p); g_fontNew8p = NULL;
}
