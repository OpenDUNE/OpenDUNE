/* $Id$ */

/** @file src/mouse.h Mouse definitions. */

#ifndef MOUSE_H
#define MOUSE_H

extern uint16 g_mouseLock;
extern uint16 g_mouseX;
extern uint16 g_mouseY;
extern uint16 g_mousePrevX;
extern uint16 g_mousePrevY;

extern void Mouse_Init();
extern void Mouse_CallbackClear();
extern void Mouse_SetRegion(uint16 left, uint16 top, uint16 right, uint16 bottom);
extern uint16 Mouse_InsideRegion(int16 left, int16 top, int16 right, int16 bottom);
extern void Mouse_SetMouseMode(uint8 mouseMode, const char *filename);
extern uint16 Mouse_CheckButtons(uint16 newButtonState);
extern void Mouse_HandleMovement(uint16 newButtonState, uint16 mouseX, uint16 mouseY);
extern void Mouse_HandleMovementIfMoved(uint16 newButtonState);

#endif /* MOUSE_H */
