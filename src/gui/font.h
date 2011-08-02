/* $Id$ */

/** @file src/gui/font.h Font definitions. */

#ifndef GUI_FONT_H
#define GUI_FONT_H

MSVC_PACKED_BEGIN
/**
 * The header of a Font file.
 */
typedef struct FontHeader {
	/* 0000(2)   */ PACK uint16 variable_00;                /*!< ?? */
	/* 0002(2)   */ PACK uint16 variable_02;                /*!< ?? */
	/* 0004(2)   */ PACK uint16 heightOffset;               /*!< Offset of the height table (one uint8 entry per char). */
	/* 0006(2)   */ PACK uint16 dataOffset;                 /*!< Offset of the data table (one uint16 entry per char). */
	/* 0008(2)   */ PACK uint16 widthOffset;                /*!< Offset of the width table (one uint8 entry per char). */
	/* 000A(2)   */ PACK uint16 variable_0A;                /*!< ?? */
	/* 000C(2)   */ PACK uint16 lineUsage;                  /*!< Offset of the lineUsage table (two uint8 entry per char; first is unused lines, second is used lines). */
} GCC_PACKED FontHeader;
MSVC_PACKED_END
assert_compile(sizeof(FontHeader) == 0xE);

extern void *g_fontIntro;
extern void *g_fontNew6p;
extern void *g_fontNew8p;
extern void *g_fontNew8p2;

extern uint16 g_var_6C70;
extern uint16 g_var_6C71;

extern FontHeader *g_fontCurrent;

extern uint16 Font_GetCharWidth(char c);
extern uint16 Font_GetStringWidth(char *string);
extern void *Font_LoadFile(const char *filename);
extern void Font_Select(void *font);

#endif /* GUI_FONT_H */
