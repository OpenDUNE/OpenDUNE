/* $Id$ */

/** @file src/gui/font.h Font definitions. */

#ifndef GUI_FONT_H
#define GUI_FONT_H

extern void *g_fontIntro;
extern void *g_fontNew6p;
extern void *g_fontNew8p;
extern void *g_fontNew8p2;

extern void *g_fontCurrent;

extern uint16 Font_GetCharWidth(char c);
extern uint16 Font_GetStringWidth(char *string);
extern void *Font_LoadFile(const char *filename);
extern void Font_Select(void *font);

#endif /* GUI_FONT_H */
