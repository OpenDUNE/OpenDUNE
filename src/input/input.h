/* $Id$ */

#ifndef INPUT_H
#define INPUT_H

/**
 * Several flags for input handling.
 */
typedef enum InputFlagsEnum {
	INPUT_FLAG_KEY_REPEAT   = 0x0001,              //!< Allow repeated input of the same key.
	INPUT_FLAG_UNKNOWN_0002 = 0x0002,              //!< ??
	INPUT_FLAG_UNKNOWN_0200 = 0x0200,              //!< ??
	INPUT_FLAG_KEY_RELEASE  = 0x0800,              //!< Record release of keys (not for buttons).
	INPUT_FLAG_NO_CLICK     = 0x1000,              //!< Don't record mouse button clicks.
} InputFlagsEnum;

/**
 * There are three different mouse modes.
 *  It looks like only the first (normal) mode is ever used.
 */
typedef enum InputMouseMode {
	INPUT_MOUSE_MODE_NORMAL = 0,                   //!< Normal mouse mode.
	INPUT_MOUSE_MODE_1      = 1,                   //!< ??
	INPUT_MOUSE_MODE_2      = 2,                   //!< ?? Only button clicks.
} InputMouseMode;

MSVC_PACKED_BEGIN;
/**
 * Input variables at segment 353F.
 */
typedef struct InputData {
	/* 0000()    */ uint8   unknown_0000[0x66A4];
	/* 66A4(4)   */ uint32 callbackAfterChange;    //!< CS:IP of routine called after mouse change.
	/* 66A8(12)  */ uint8   unknown_66A8[0x000C];
	/* 66B4(4)   */ uint32 callbackBeforeChange;   //!< CS:IP of routine called before mouse change.
	/* 66B8()    */ uint8   unknown_66B8[0x05C0];
	/* 6C78(2)   */ uint16 snapX;                  //!< Snap mouse to grid, x-axis.
	/* 6C7A(2)   */ uint16 snapY;                  //!< Snap mouse to grid, y-axis.
	/* 6C7C(2)   */ uint16 snapGreyX;              //!< Grey zone for snapping, x-axis.
	/* 6C7E(2)   */ uint16 snapGreyY;              //!< Grey zone for snapping, y-axis.
	/* 6C80()    */ uint8   unknown_BC80[0x038E];
	/* 700E(2)   */ uint16 flags;                  //!< Flags for input. See InputFlagsEnum.
 	/* 7010(1)   */ uint8  mouseMode;              //!< Mouse mode. See InputMouseMode.
 	/* 7011(2)   */ uint16 variable_7011;          //!< ??
	/* 7013(2)   */ uint16 variable_7013;          //!< ??
	/* 7015(2)   */ uint16 variable_7015;          //!< ??
	/* 7017()    */ uint8   unknown_7017[0x0004];
	/* 701B(2)   */ uint16 variable_701B;          //!< ??
	/* 701D()    */ uint8   unknown_701D[0x0041];
 	/* 705E(2)   */ uint16 mouseLock;              //!< Lock for when handling mouse movement.
 	/* 7060(2)   */ uint16 mouseX;                 //!< Current X position of the mouse.
 	/* 7062(2)   */ uint16 mouseY;                 //!< Current Y position of the mouse.
	/* 7064(4)   */ uint8   unknown_7064[0x0004];
 	/* 7068(2)   */ uint16 doubleWidth;            //!< If non-zero, the X-position given by mouse is twice the real value.
 	/* 706A(2)   */ uint16 variable_706A;          //!< ?? If non-zero, mouse movement is not registered.
	/* 706C(2)   */ uint8   unknown_706C[0x0002];
	/* 706E(2)   */ uint16 variable_706E;          //!< ??
	/* 7070(2)   */ uint8   unknown_7070[0x0002];
	/* 7072(2)   */ uint16 variable_7072;          //!< ??
	/* 7074(8)   */ uint8   unknown_7074[0x0008];
 	/* 707C(2)   */ uint16 prevX;                  //!< Previous X position.
 	/* 707E(2)   */ uint16 prevY;                  //!< Previous Y position.
 	/* 7080(2)   */ uint16 regionFlags;            //!< Flags: 0x4000 - Mouse still inside region, 0x8000 - Region check.
 	/* 7082(2)   */ uint16 regionMinX;             //!< Region - minimum value for X position.
 	/* 7084(2)   */ uint16 regionMinY;             //!< Region - minimum value for Y position.
 	/* 7086(2)   */ uint16 regionMaxX;             //!< Region - maximum value for X position.
 	/* 7088(2)   */ uint16 regionMaxY;             //!< Region - maximum value for Y position.
	/* 708A()    */ uint8   unknown_708A[0x0008];
 	/* 7092(2)   */ uint16 variable_7092;          //!< Parameter 1 for proc at 66B4.
 	/* 7094(2)   */ uint16 variable_7094;          //!< Paramerer 2 for proc at 66B4.
	/* 7096(1)   */ uint8  installed;              //!< If non-zero, the mouse callback is installed.
 	/* 7097(1)   */ uint8  variable_7097;          //!< ?? If non-zero, no mouse handling.
 	/* 7098(1)   */ uint8  variable_7098;          //!< ?? If zero, no mouse handling.
 	/* 7099(1)   */ uint8  prevButtonState;        //!< Previous mouse button state.
	/* 709A()    */ uint8   unknown_709A[0x060C];
	/* 76A6(2)   */ uint16 variable_76A6;          //!< ??
	/* 76A8()    */ uint8   unknown_76A8[0x21C4];
	/* 986C(1)   */ uint8  variable_986C;          //!< ??
} GCC_PACKED InputData;
MSVC_PACKED_END;

MSVC_PACKED_BEGIN;
/**
 * Local input variables at segment 29E8.
 */
typedef struct InputLocalData {
	/* 0000()    */ uint8   unknown_0000[0x002E];
	/* 002E(8)   */ uint8  bitmask[8];             //!< The value of (1 << N), with N from 0 to 7.
	/* 0036()    */ uint8   unknown_0036[0x0058];
	/* 008E(16)  */ uint8  translateMap[16];       //!< ?? Some kind of translation map.
	/* 009E(16)  */ uint8  translateTo[16];        //!< ?? To what a match in the above map translates.
	/* 00AE(1)   */ uint8   unknown_00AE[1];
	/* 00AF(256) */ uint16 history[128];           //!< History of input commands.
	/* 01AF(2)   */ uint16 historyHead;            //!< The current head inside the history array.
	/* 01B1(2)   */ uint16 historyTail;            //!< The current tail inside the history array.
	/* 01B3(2)   */ uint16 flags;                  //!< Mask for allowed input types. See InputFlagsEnum.
	/* 01B5()    */ uint16 variable_01B5;          //!< ??
	/* 01B7(2)   */ uint16 variable_01B7;          //!< ??
	/* 01B9()    */ uint8   unknown_01B9[0x0059];
	/* 0212(8)   */ uint8  keymap_special_mask[8]; //!< Per bit, mask which keys are special and should be done &= 0x1F.
	/* 021A()    */ uint8   unknown_021A[0x0018];
	/* 0232(16)  */ uint8  activeInputMap[16];     //!< A 96 bit array, where each active bit means that the Nth key is pressed.
	/* 0242()    */ uint8   unknown_0242[0x001E];
	/* 0260(11)  */ uint8  keymap_ignore[11];      //!< Keys to ignore when reading.
	/* 026B()    */ uint8   unknown_026B[0x0001];

	/* 026C(222) */ uint8      code_026C[222];
	/* 034A(62)  */ uint8  keymap_normal[62];      //!< Keymap to convert scancode to ASCII with capslock off and shift released.
	/* 0388(62)  */ uint8  keymap_shift[62];       //!< Keymap to convert scancode to ASCII with capslock off and shift pressed.
	/* 03C6(62)  */ uint8  keymap_capslock[62];    //!< Keymap to convert scancode to ASCII with capslock on and shift released.
	/* 0404(62)  */ uint8  keymap_caps_shift[62];  //!< Keymap to convert scancode to ASCII with capslock on and shift pressed.
	/* 0442(35)  */ uint8  keymap_numpad[35];      //!< Keymap to convert scancode to for numpad with numlock off.
	/* 0465(20)  */ uint8  keymap_numlock[20];     //!< Keymap to convert scancode to for numpad with numlock on.

	/* 0479(185) */ uint8      code_0479[187];
	/* 0534()    */ uint8   unknown_0534[0x010F];
	/* 0643(125) */ uint8      code_0643[125];
	/* 06C0()    */ uint8   unknown_06C0[0x007F];
	/* 073F(14)  */ uint8      code_073F[14];
	/* 074D()    */ uint8   unknown_074D[0x02CC];

	/* 0A19(123) */ uint8      code_0A19[123];
	/* 0A94(2)   */ uint16 variable_0A94;          //!< ??
	/* 0A96(2)   */ uint16 variable_0A96;          //!< ?? Set to the same as 353F:76A6.
	/* 0A98(2)   */ uint16 mouseX;                 //!< Current X position of the mouse.
	/* 0A9A(2)   */ uint16 mouseY;                 //!< Current Y position of the mouse.

	/* 0A9C()    */ uint8   unknown_0A9C[0x003A];
	/* 0AD6(16)  */ uint8      code_0AD6[16];
	/* 0AE6()    */ uint8   unknown_0AE6[0x015A];
	/* 0C40(263) */ uint8      code_0C40[263];
	/* 0D47()    */ uint8   unknown_0D47[0x024E];
	/* 0F95()    */ // Last known byte
} GCC_PACKED InputLocalData;
MSVC_PACKED_END;

extern InputData *g_input;

extern void System_Init_Input();
extern void Input_Mouse_Init();
extern void Input_Mouse_EventHandler();
extern void Input_Mouse_InsideRegion();
extern void Input_Mouse_CallbackClear();
extern void Input_Flags_ClearBits();
extern void Input_Flags_SetBits();
extern void Input_History_Clear();
extern void Input_Keyboard_HandleKeys(uint8 key, uint8 state);
extern void Input_Keyboard_HandleKeys2();
extern void Input_Keyboard_Translate();
extern void Input_Unknown_04FC();
extern void Input_Keyboard_NextKey();
extern void Input_HandleInputSafe();

#endif /* INTPUT_H */
