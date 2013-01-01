/** @file src/gui/font.h Font definitions. */

#ifndef GUI_FONT_H
#define GUI_FONT_H

typedef struct FontChar {
	uint8 width;
	uint8 unusedLines;
	uint8 usedLines;
	uint8 *data;
} FontChar;

typedef struct Font {
	uint8 height;
	uint8 maxWidth;
	uint8 count;
	FontChar *chars;
} Font;

extern Font *g_fontIntro;
extern Font *g_fontNew6p;
extern Font *g_fontNew8p;

extern int8 g_fontCharOffset;

extern Font *g_fontCurrent;

extern bool Font_Init(void);
extern void Font_Uninit(void);
extern uint16 Font_GetCharWidth(unsigned char c);
extern uint16 Font_GetStringWidth(char *string);
extern void Font_Select(Font *f);

#endif /* GUI_FONT_H */
