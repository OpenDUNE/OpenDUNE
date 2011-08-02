/* $Id$ */

/** @file src/input/input.h Input definitions. */

#ifndef INPUT_H
#define INPUT_H

/**
 * Several flags for input handling.
 */
typedef enum InputFlagsEnum {
	INPUT_FLAG_KEY_REPEAT   = 0x0001,                       /*!< Allow repeated input of the same key. */
	INPUT_FLAG_UNKNOWN_0002 = 0x0002,                       /*!< ?? */
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

MSVC_PACKED_BEGIN
/**
 * Local input variables at segment 29E8.
 */
typedef struct InputLocalData {
	/* 0000()    */ PACK uint8   unknown_0000[4];
	/* 0004(6)   */ PACK uint8   removed_0004[6];           /*!< REMOVED Copied into the Input_HandleInput function. */
	/* 000A(36)  */ PACK uint32  removed_000A[9];           /*!< REMOVED Copied into the Input_HandleInput function. */
	/* 002E(8)   */ PACK uint8   removed_002E[8];           /*!< REMOVED - The value of (1 << N), with N from 0 to 7. */
	/* 0036(34)  */ PACK uint16  removed_0036[17];          /*!< REMOVED - other keys Read-only. */
	/* 0058(34)  */ PACK uint16  removed_0058[17];          /*!< REMOVED - Read-only. */
	/* 007A()    */ PACK uint8   unknown_007A[0x0004];
	/* 007E(16)  */ PACK uint8   removed_007E[16];          /*!< REMOVED Read-only - Some kind of translation map for extended keys. */
	/* 008E(16)  */ PACK uint8   removed_008E[16];          /*!< REMOVED Read-only - Some kind of translation map. */
	/* 009E(16)  */ PACK uint8   removed_009E[16];          /*!< REMOVED Read-only - To what a match in the above map translates. */
	/* 00AE(1)   */ PACK uint8   unknown_00AE[1];
	/* 00AF(256) */ PACK uint16  removed_00AF[128];         /*!< REMOVED - History of input commands. */
	/* 01AF(2)   */ PACK uint16  removed_01AF;              /*!< REMOVED - The current head inside the history array. */
	/* 01B1(2)   */ PACK uint16  removed_01B1;              /*!< REMOVED - The current tail inside the history array. */
	/* 01B3(2)   */ PACK uint16  removed_01B3;              /*!< REMOVED - Mask for allowed input types. See InputFlagsEnum. */
	/* 01B5()    */ PACK uint16  removed_01B5;              /*!< REMOVED - Which control keys are pressed. */
	/* 01B7(2)   */ PACK uint16  removed_01B7;              /*!< REMOVED - Copy of controlKeys */
	/* 01B9(89)  */ PACK uint8  variable_01B9[89];          /*!< ?? Read-only. */
	/* 0212(8)   */ PACK uint8   removed_0212[8];           /*!< REMOVED - Per bit, mask which keys are special and should be done &= 0x1F. */
	/* 021A()    */ PACK uint8   unknown_021A[0x0018];
	/* 0232(16)  */ PACK uint8  activeInputMap[16];         /*!< A 96 bit array, where each active bit means that the Nth key is pressed. */
	/* 0242()    */ PACK uint8   unknown_0242[0x0014];
	/* 0256(1)   */ PACK uint8   removed_0256;              /*!< REMOVED - Reading extended key. */
	/* 0257(1)   */ PACK uint8   removed_0257;              /*!< REMOVED - Reading extended special key. */
	/* 0258(4)   */ PACK csip32  removed_0258;              /*!< REMOVED - Location of original Interrupt Vector 09. */
	/* 025C(4)   */ PACK csip32  removed_025C;              /*!< REMOVED - Location of original Interrupt Vector 23. */
	/* 0260(11)  */ PACK uint8   removed_0260[11];          /*!< REMOVED - Read-only - Keys to ignore when reading. */
	/* 026B(1)   */ PACK uint8   removed_02B6;              /*!< REMOVED - ?? */
	/* 026C(222) */ PACK uint8      code_026C[222];
	/* 034A(62)  */ PACK uint8   removed_034A[62];          /*!< REMOVED - Keymap to convert scancode to ASCII with capslock off and shift released. */
	/* 0388(62)  */ PACK uint8   removed_0388[62];          /*!< REMOVED - Keymap to convert scancode to ASCII with capslock off and shift pressed. */
	/* 03C6(62)  */ PACK uint8   removed_03C6[62];          /*!< REMOVED - Not used - Keymap to convert scancode to ASCII with capslock on and shift released. */
	/* 0404(62)  */ PACK uint8   removed_0404[62];          /*!< REMOVED - Not used - Keymap to convert scancode to ASCII with capslock on and shift pressed. */
	/* 0442(35)  */ PACK uint8   removed_0442[35];          /*!< REMOVED - Keymap to convert scancode to for numpad with numlock off. */
	/* 0465(20)  */ PACK uint8   removed_0465[20];          /*!< REMOVED - Keymap to convert scancode to for numpad with numlock on. */

	/* 0479(185) */ PACK uint8      code_0479[187];
	/* 0534()    */ PACK uint8   unknown_0534[0x0103];
	/* 0637(4)   */ PACK uint32  removed_0637;              /*!< REMOVED - File length to read (4L) for variable_063B[x]. */
	/* 063B(8)   */ PACK uint16  removed_063B[2][2];        /*!< REMOVED - Buffer for reading mouse input. */
	/* 0643(125) */ PACK uint8      code_0643[125];
	/* 06C0()    */ PACK uint8   unknown_06C0[0x007F];
	/* 073F(14)  */ PACK uint8      code_073F[14];
	/* 074D()    */ PACK uint8   unknown_074D[0x02CC];

	/* 0A19(123) */ PACK uint8      code_0A19[123];
	/* 0A94(2)   */ PACK uint16  removed_0A94;              /*!< REMOVED - Temporary buffer for writing input events to disk */
	/* 0A96(2)   */ PACK uint16  removed_0A96;              /*!< REMOVED - Temporary buffer for writing input events to disk */
	/* 0A98(2)   */ PACK uint16  removed_0A98;              /*!< REMOVED - Current X position of the mouse. */
	/* 0A9A(2)   */ PACK uint16  removed_0A9A;              /*!< REMOVED - Current Y position of the mouse. */

	/* 0A9C(26)  */ PACK uint16  removed_0A9C[13];          /*!< REMOVED - Copied into the Input_HandleInput function. */
	/* 0AB6(32)  */ PACK uint16  removed_0AB6[0x10];        /*!< REMOVED - Copied into the Input_HandleInput function. */
	/* 0AD6(16)  */ PACK uint8      code_0AD6[16];
	/* 0AE6()    */ PACK uint8   unknown_0AE6[0x015A];
	/* 0C40(263) */ PACK uint8      code_0C40[263];
	/* 0D47()    */ PACK uint8   unknown_0D47[0x024E];
	/* 0F95()    */ /* Last known byte */
} GCC_PACKED InputLocalData;
MSVC_PACKED_END
assert_compile(sizeof(InputLocalData) == 0x0F95);

extern void Input_Init();
extern void Input_EventHandler(uint8 key);
extern uint16 Input_Flags_ClearBits(uint16 bits);
extern uint16 Input_Flags_SetBits(uint16 bits);
extern void Input_History_Clear();
extern void Input_HandleInput(uint16 input);
extern uint16 Input_IsInputAvailable();
extern uint16 Input_Wait();
extern uint16 Input_Test(uint16 value);
extern uint16 Input_WaitForValidInput();
extern uint16 Input_Keyboard_HandleKeys(uint16 value);
extern uint16 Input_Keyboard_NextKey();

#endif /* INTPUT_H */
