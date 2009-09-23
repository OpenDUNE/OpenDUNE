/* $Id$ */

#ifndef INPUT_H
#define INPUT_H

/**
 * The types of input which you can allow or disallow.
 */
typedef enum InputAllowedEnum {
	INPUT_ALLOW_DOUBLE_PRESS = 0x0001,             //!< Allow repeated input of the same key.
	INPUT_ALLOW_KEY_RELEASE  = 0x0800,             //!< Record release of keys (not buttons).
	INPUT_ALLOW_NO_CLICK     = 0x1000,             //!< Disallow mouse button clicks.
} InputAllowedEnum;

MSVC_PACKED_BEGIN;
/**
 * Mouse variables at segment 353F.
 */
typedef struct MouseData {
	/* 0000()    */ uint8  unknown_0000[0x66A4];
	/* 66A4(4)   */ uint32 callbackAfterChange;    //!< CS:IP of routine called after mouse change.
	/* 66A8(12)  */ uint8  unknown_66A8[0x000C];
	/* 66B4(4)   */ uint32 callbackBeforeChange;   //!< CS:IP of routine called before mouse change.
	/* 66B8()    */ uint8  unknown_66B8[0x05C0];
	/* 6C78(2)   */ uint16 snapX;                  //!< Snap mouse to grid, x-axis.
	/* 6C7A(2)   */ uint16 snapY;                  //!< Snap mouse to grid, y-axis.
	/* 6C7C(2)   */ uint16 snapGreyX;              //!< Grey zone for snapping, x-axis.
	/* 6C7E(2)   */ uint16 snapGreyY;              //!< Grey zone for snapping, y-axis.
	/* 6C80()    */ uint8  unknown_BC80[0x038E];
	/* 700E(2)   */ uint16 allowed;                //!< Mask for allowed input types. See InputAllowedEnum.
 	/* 7010(1)   */ uint8  mode;                   //!< Mouse mode: 0 - Normal mouse mode, 1 - ??, 2 - Only button clicks.
 	/* 7011(2)   */ uint16 variable_7011;          //!< ??
	/* 7013()    */ uint8  unknown_7013[0x004B];
 	/* 705E(2)   */ uint16 lock;                   //!< Lock for when handling mouse movement.
 	/* 7060(2)   */ uint16 newX;                   //!< New X position.
 	/* 7062(2)   */ uint16 newY;                   //!< New Y position.
	/* 7064(4)   */ uint8  unknown_7064[0x0004];
 	/* 7068(2)   */ uint16 doubleWidth;            //!< If non-zero, the X-position given by mouse is twice the real value.
 	/* 706A(2)   */ uint16 variable_706A;          //!< ?? If non-zero, mouse movement is not registered.
	/* 706C(2)   */ uint8  unknown_706C[0x0002];
	/* 706E(2)   */ uint16 variable_706E;          //!< ??
	/* 7070(2)   */ uint8  unknown_7070[0x0002];
	/* 7072(2)   */ uint16 variable_7072;          //!< ??
	/* 7074(8)   */ uint8  unknown_7074[0x0008];
 	/* 707C(2)   */ uint16 prevX;                  //!< Previous X position.
 	/* 707E(2)   */ uint16 prevY;                  //!< Previous Y position.
 	/* 7080(2)   */ uint16 flags;                  //!< Flags: 0x4000 - Mouse still inside region, 0x8000 - Region check.
 	/* 7082(2)   */ uint16 regionMinX;             //!< Region - minimum value for X position.
 	/* 7084(2)   */ uint16 regionMinY;             //!< Region - minimum value for Y position.
 	/* 7086(2)   */ uint16 regionMaxX;             //!< Region - maximum value for X position.
 	/* 7088(2)   */ uint16 regionMaxY;             //!< Region - maximum value for Y position.
	/* 708A()    */ uint8  unknown_708A[0x0008];
 	/* 7092(2)   */ uint16 variable_7092;          //!< Parameter 1 for proc at 66B4.
 	/* 7094(2)   */ uint16 variable_7094;          //!< Paramerer 2 for proc at 66B4.
	/* 7096(1)   */ uint8  installed;              //!< If non-zero, the mouse callback is installed.
 	/* 7097(1)   */ uint8  variable_7097;          //!< ?? If non-zero, no mouse handling.
 	/* 7098(1)   */ uint8  variable_7098;          //!< ?? If zero, no mouse handling.
 	/* 7099(1)   */ uint8  prevButtonState;        //!< Previous mouse button state.
	/* 709A()    */ uint8  unknown_709A[0x060C];
	/* 76A6(2)   */ uint16 variable_76A6;          //!< ??
	/* 76A8()    */ uint8  unknown_76A8[0x21C4];
	/* 986C(1)   */ uint8  variable_986C;          //!< ??
} GCC_PACKED MouseData;
MSVC_PACKED_END;

MSVC_PACKED_BEGIN;
/**
 * Local input variables at segment 29E8.
 */
typedef struct InputLocalData {
	/* 0000()    */ uint8  unknown_0000[0x00AF];

	/* 00AF(256) */ uint16 history[128];           //!< History of input commands.
	/* 01AF(2)   */ uint16 historyHead;            //!< The current head inside the history array.
	/* 01B1(2)   */ uint16 historyTail;            //!< The current tail inside the history array.
	/* 01B3(2)   */ uint16 allowed;                //!< Mask for allowed input types. See InputAllowedEnum.

	/* 01B5()    */ uint8  unknown_01B5[0x007D];

	/* 0232(16)  */ uint8  activeInputMap[16];     //!< A 96 bit array, where each active bit means that the Nth key is pressed.

	/* 0242()    */ uint8  unknown_0242[0x0852];

	/* 0A94(2)   */ uint16 variable_0A94;          //!< ??
	/* 0A96(2)   */ uint16 variable_0A96;          //!< ?? Set to the same as 353F:76A6.
	/* 0A98(2)   */ uint16 posX;                   //!< Current X position.
	/* 0A9A(2)   */ uint16 posY;                   //!< Current Y position.
} GCC_PACKED InputLocalData;
MSVC_PACKED_END;

extern MouseData *g_mouse;

extern void System_Init_Input();
extern void System_Init_Mouse();
extern void Input_Mouse_Init();
extern void Input_Mouse_EventHandler();
extern void Input_Mouse_InsideRegion();
extern void Input_Mouse_CallbackClear();
extern void Input_HandleInputSafe();

#endif /* INTPUT_H */
