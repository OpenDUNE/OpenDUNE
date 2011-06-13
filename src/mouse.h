/* $Id$ */

#ifndef MOUSE_H
#define MOUSE_H

extern void Mouse_SetRegion(uint16 left, uint16 top, uint16 right, uint16 bottom);
extern void Mouse_SetMouseMode(uint8 mouseMode, const char *filename);
extern uint16 Mouse_CheckButtons(uint16 newButtonState);


#endif /* MOUSE_H */
