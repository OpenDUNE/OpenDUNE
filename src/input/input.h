/** @file src/input/input.h Input definitions. */

#ifndef INPUT_H
#define INPUT_H

/**
 * Several flags for input handling.
 */
typedef enum InputFlagsEnum {
	INPUT_FLAG_KEY_REPEAT   = 0x0001,                       /*!< Allow repeated input of the same key. */
	INPUT_FLAG_NO_TRANSLATE = 0x0002,                       /*!< Don't translate a key. */
	INPUT_FLAG_UNKNOWN_0004 = 0x0004,                       /*!< ?? */
	INPUT_FLAG_UNKNOWN_0008 = 0x0008,                       /*!< ?? */
	INPUT_FLAG_UNKNOWN_0010 = 0x0010,                       /*!< ?? */
	INPUT_FLAG_UNKNOWN_0020 = 0x0020,                       /*!< ?? */
	INPUT_FLAG_UNKNOWN_0040 = 0x0040,                       /*!< ?? */
	INPUT_FLAG_UNKNOWN_0080 = 0x0080,                       /*!< ?? */
	INPUT_FLAG_UNKNOWN_0100 = 0x0100,                       /*!< ?? */
	INPUT_FLAG_UNKNOWN_0200 = 0x0200,                       /*!< ?? */
	INPUT_FLAG_UNKNOWN_0400 = 0x0400,                       /*!< ?? */
	INPUT_FLAG_KEY_RELEASE  = 0x0800,                       /*!< Record release of keys (not for buttons). */
	INPUT_FLAG_NO_CLICK     = 0x1000,                       /*!< Don't record mouse button clicks. */
	INPUT_FLAG_UNKNOWN_2000 = 0x2000                        /*!< ?? */
} InputFlagsEnum;

/**
 * There are three different mouse modes.
 *  It looks like only the first (normal) mode is ever used.
 */
typedef enum InputMouseMode {
	INPUT_MOUSE_MODE_NORMAL = 0,                            /*!< Normal mouse mode. */
	INPUT_MOUSE_MODE_RECORD = 1,                            /*!< Record mouse events to a file. */
	INPUT_MOUSE_MODE_PLAY   = 2                             /*!< Plays mouse events from a file. */
} InputMouseMode;

extern void Input_Init(void);
extern void Input_EventHandler(uint8 key);
extern uint16 Input_Flags_ClearBits(uint16 bits);
extern uint16 Input_Flags_SetBits(uint16 bits);
extern void Input_History_Clear(void);
extern void Input_HandleInput(uint16 input);
extern uint16 Input_IsInputAvailable(void);
extern uint16 Input_Wait(void);
extern uint16 Input_Test(uint16 value);
extern uint16 Input_WaitForValidInput(void);
extern uint16 Input_Keyboard_HandleKeys(uint16 value);
extern uint16 Input_Keyboard_NextKey(void);

#endif /* INTPUT_H */
