#ifndef MOUSE_H
#define MOUSE_H

/*
 * Mouse Memory:
 *
 * 353F:
 *      66A4(4) -> cs:ip of routine called after mouse redraw
 *
 *      66B4(4) -> cs:ip of routine called before mouse redraw
 *
 *      6C78(2) -> Snap mouse to grid, x-axis
 *      6C7A(2) -> Snap mouse to grid, y-axis
 *      6C7C(2) -> Snap grey-zone on x-axis
 *      6C7E(2) -> Snap grey-zone on y-axis
 *
 *      700E(2) -> ?? If no mask 0x1000, no mouse click handling
 *      7010(1) -> Mouse mode
 *                   0 - Normal mouse mode
 *                   1 - ??
 *                   2 - Only button clicks
 *
 *      705E(2) -> Lock variable for when moving mouse
 *
 *      7060(2) -> New X position
 *      7062(2) -> New Y position
 *
 *      7068(2) -> ?? If one, mouse reports 640 in width
 *      706A(2) -> ?? If non-zero, mouse movement is not registered
 *
 *      707C(2) -> Last X position
 *      707E(2) -> Last Y position
 *      7080(2) -> Bitfield:
 *                   0x4000 - Mouse still inside region
 *                   0x8000 - Region check
 *      7082(2) -> Region - minimum value for X position
 *      7084(2) -> Region - minimum value for Y position
 *      7086(2) -> Region - maximum value for X position
 *      7088(2) -> Region - maximum value for Y position
 *
 *      7092(2) -> Parameter 1 for proc at 66B4
 *      7094(2) -> Paramerer 2 for proc at 66B4
 *
 *      7097(1) -> ?? If non-zero, no mouse handling
 *      7098(1) -> ?? If zero, no mouse handling
 *      7099(1) -> Last mouse button state
 */

extern void Mouse_EventHandler();

#endif /* MOUSE_H */
