/* $Id$ */

#ifndef GUI_GUI_H
#define GUI_GUI_H

void GUI_DrawWiredRectangle(uint16 left, uint16 top, uint16 right, uint16 bottom, uint16 colour);
/* editbox.c */
uint16 GUI_EditBox(csip32 text, uint16 maxLength, uint16 unknown1, csip32 wcsip, csip32 uknown3, uint16 unknown4);


extern void emu_GUI_DrawWiredRectangle();
/* emu_editbox.c */
extern void emu_GUI_EditBox();

#endif /* GUI_GUI_H */
