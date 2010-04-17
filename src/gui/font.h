/* $Id$ */

#ifndef GUI_FONT_H
#define GUI_FONT_H

extern uint16 Font_GetCharWidth(char c);
extern uint16 Font_GetStringWidth(char *string);


extern void emu_Font_GetCharWidth();
extern void emu_Font_GetStringWidth();

#endif /* GUI_FONT_H */
