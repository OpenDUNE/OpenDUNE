#ifndef INPUT_H
#define INPUT_H

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
 *      7011(2) -> ??
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

MSVC_PACKED_BEGIN;
/**
 * Local variables of segment 29E8, the input handler.
 */
typedef struct InputLocalData {
	/* 0x0000()    */ uint8 unknown_0000[0xAF];

	/* 0x00AF(256) */ uint16 history[128];           //!< History of input commands.
	/* 0x01AF(2)   */ uint16 historyHead;            //!< The current head inside the history array.
	/* 0x01B1(2)   */ uint16 historyTail;            //!< The current tail inside the history array.
	/* 0x01B3(2)   */ uint16 variable_01B3;          //!< ?? Set to the same as 353F:700E.

	/* 0x01B5()    */ uint8 unknown_01B5[0x7D];

	/* 0x0232(8)   */ uint8 variable_0232[8];        //!< ??

	/* 0x023A()    */ uint8 unknown_023A[0x85A];

	/* 0x0A94(2)   */ uint16 variable_0A94;          //!< ??
	/* 0x0A96(2)   */ uint16 variable_0A96;          //!< ?? Set to the same as 353F:76A6.
	/* 0x0A98(2)   */ uint16 pos_x;                  //!< Current X position.
	/* 0x0A9A(2)   */ uint16 pos_y;                  //!< Current Y position.
} GCC_PACKED InputLocalData;
MSVC_PACKED_END;

extern void System_Init_Input();
extern void Input_Mouse_EventHandler();
extern void p__29E8_0A4A_0040_5428();

#endif /* INTPUT_H */
