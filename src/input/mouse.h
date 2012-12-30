/** @file src/input/mouse.h Mouse definitions. */

#ifndef MOUSE_H
#define MOUSE_H

extern uint16 g_mouseLock;
extern bool   g_doubleWidth;
extern uint16 g_mouseX;
extern uint16 g_mouseY;
extern uint16 g_mousePrevX;
extern uint16 g_mousePrevY;
extern uint8  g_prevButtonState;
extern uint16 g_mouseClickX;
extern uint16 g_mouseClickY;
extern uint16 g_regionFlags;
extern uint16 g_mouseRegionLeft;
extern uint16 g_mouseRegionRight;
extern uint16 g_mouseRegionTop;
extern uint16 g_mouseRegionBottom;
extern uint16 g_regionMinX;
extern uint16 g_regionMinY;
extern uint16 g_regionMaxX;
extern uint16 g_regionMaxY;

extern uint8 g_var_7097;
extern uint8 g_mouseHiddenDepth;
extern uint8 g_mouseFileID;
extern bool g_var_701B;

extern uint16 g_var_7013;
extern uint16 g_var_7015;
extern uint16 g_var_7017;
extern uint16 g_var_7019;

extern uint8 g_mouseMode;
extern uint16 g_inputFlags;

extern void Mouse_Init(void);
extern void Mouse_EventHandler(uint16 mousePosX, uint16 mousePosY, bool mouseButtonLeft, bool mouseButtonRight);
extern void Mouse_SetRegion(uint16 left, uint16 top, uint16 right, uint16 bottom);
extern uint16 Mouse_InsideRegion(int16 left, int16 top, int16 right, int16 bottom);
extern void Mouse_SetMouseMode(uint8 mouseMode, const char *filename);
extern uint16 Mouse_CheckButtons(uint16 newButtonState);
extern void Mouse_HandleMovement(uint16 newButtonState, uint16 mouseX, uint16 mouseY);
extern void Mouse_HandleMovementIfMoved(uint16 newButtonState);

#endif /* MOUSE_H */
