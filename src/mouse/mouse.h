#ifndef MOUSE_H
#define MOUSE_H

/*
 * Mouse Memory:
 *
 * 353F:700E -> If no mask 0x1000, no mouse click?
 * 353F:7010 -> Mouse mode?
 * 353F:705E -> If non-zero, only button handling (mouse pointer not visible?)
 * 353F:7068 -> If one, mouse reports 640 in width
 * 353F:7097 -> If non-zero, no mouse handling
 * 353F:7098 -> If zero, no mouse handling
 * 353F:7099 -> Last mouse button state
 */

extern void Mouse_EventHandler();

#endif /* MOUSE_H */
