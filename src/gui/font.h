/* $Id$ */

#ifndef GUI_FONT_H
#define GUI_FONT_H

extern uint16 Font_GetCharWidth(char c);
extern uint16 Font_GetStringWidth(char *string);
extern csip32 Font_LoadFile(const char *filename);
extern csip32 Font_Select(csip32 font_csip);


extern void emu_Font_GetCharWidth();
extern void emu_Font_GetStringWidth();
extern void emu_Font_LoadFile();
extern void emu_Font_Select();

#endif /* GUI_FONT_H */
