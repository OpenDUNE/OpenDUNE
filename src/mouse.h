/* $Id$ */

#ifndef MOUSE_H
#define MOUSE_H

extern void Mouse_SetRegion(uint16 left, uint16 top, uint16 right, uint16 bottom);
extern void Mouse_SetMouseMode(uint8 mouseMode, const char *filename);
extern uint16 Mouse_CheckButtons(uint16 newButtonState);
extern void Mouse_CheckMovement(uint16 mouseX, uint16 mouseY);
extern void Mouse_HandleMovement(uint16 newButtonState, uint16 mouseX, uint16 mouseY);
extern void Mouse_HandleMovementIfMoved(uint16 newButtonState);

#endif /* MOUSE_H */
