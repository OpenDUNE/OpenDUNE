/** @file src/input/input.c Input routines. */

#include <stdio.h>
#include <string.h>
#include "types.h"
#include "../os/common.h"
#include "../os/sleep.h"
#include "../os/error.h"

#include "input.h"

#include "../file.h"
#include "../gfx.h"
#include "../gui/gui.h"
#include "../input/mouse.h"
#include "../opendune.h"
#include "../timer.h"

static uint16 s_history[128];                /*!< History of input commands. */
static uint16 s_historyHead = 0;             /*!< The current head inside the #s_history array. */
static uint16 s_historyTail = 0;             /*!< The current tail inside the #s_history array. */
static bool   s_input_extendedKey = false;   /*!< If we are currently actively reading an extended key. */
static uint8  s_activeInputMap[16];          /*!< A 96 bit array, where each active bit means that the Nth key is pressed. */

/* Dune II key codes :
 * 0x00        : invalid
 * 0x01 - 0x37 : ASCII characters (except 0x0e, 0x1e, 0x2a, 0x2c)
 * 0x1e        : CAPS LOCK
 * 0x2b        : ENTER
 * 0x2c        : LSHIFT
 * 0x2d        : MOUSE MOVE
 * 0x39        : RSHIFT
 * 0x3a        : LCTRL
 * 0x3c        : LALT
 * 0x3d        : SPACE (printable)
 * 0x3e        : RALT
 * 0x40        : RCTRL
 * 0x41        : LEFT MOUSE BUTTON
 * 0x42        : RIGHT MOUSE BUTTON
 * 0x4b - 0x56 : INSERT DELETE LEFT HOME END UP DOWN PGUP PGDOWN RIGHT
 * 0x59        : KP / (?)
 * 0x5a - 0x5d : NUMLOCK KP 7 4 1
 * 0x5f - 0x6a : KP / 8 5 2 0 * 9 6 3 . - +
 * 0x6c        : KP ENTER
 * 0x6e        : ESCAPE
 * 0x70 - 0x7b : F1-F12
 * 0x7d        : SCROLL LOCK
 */

static const uint8 s_keymapIgnore[] = {30, ',', '9', ':', '<', '>', '@', 'Z', 128}; /*!< Keys to ignore when reading. */
/* Dune II codes                    0x1e, 0x2c, 0x39, 0x3a, 0x3c, 0x3e, 0x40, 0x5a, 0x80 */
/*                                  CAPS  LSHFT RSHFT LCTRL LALT  RALT  RCTRL NUMLK */

/** Per bit, mask which keys are letters and special and should be done &= 0x1F when ALT is pressed (or CTLR ?) */
static const uint8 s_keymapSpecialMask[] = {0x00, 0x00, 0xFE, 0x87, 0xFF, 0xC0, 0x1F, 0x00};
/* 0x11-0x1b : qwertyuiop
 * 0x1f-0x27 : asdfghjkl
 * 0x2e-0x34 : zxcvbnm
 */

/** Keymap to convert Dune II codes to ASCII with capslock off and shift released. */
static const uint8 s_keymapNormal[] = {
	   0, '`', '1', '2', '3', '4', '5', '6', '7',  '8', '9',  '0', '-',  '=',   0,   8, /* 0x00 - 0x0f */
	'\t', 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i',  'o', 'p',  '[', ']', '\\',   0, 'a', /* 0x10 - 0x1f */
	 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '\'',   0, '\r',   0,  '-', 'z', 'x', /* 0x20 - 0x2f */
	 'c', 'v', 'b', 'n', 'm', ',', '.', '/',   0,    0,   0,    0,   0,  ' '            /* 0x30 - 0x3d */
};

/** Keymap to convert Dune II codes to ASCII with capslock off and shift pressed. */
static const uint8 s_keymapShift[] = {
	   0, '~', '!', '@', '#', '$', '%', '^', '&', '*', '(',  ')', '_', '+',   0,   8,
	'\t', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P',  '{', '}', '|',   0, 'A',
	 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ':', '"',   0, '\r',   0, '-', 'Z', 'X',
	 'C', 'V', 'B', 'N', 'M', '<', '>', '?',   0,   0,   0,    0,   0, ' '
};

/** Keymap to convert scancode to for numpad with numlock on. */
static const uint8 s_keymapNumlock[] = {0, '7', '4', '1',   0, '/', '8', '5', '2', '0', '*', '9', '6', '3', '.', '-', '+', 0, '\r', 0};

/* when escaped with 0xE0, scancodes in s_translateExtendedMap are translated to s_translateMap */
/** Some kind of translation map for extended keys. */
static const uint8 s_translateExtendedMap[] = {'8', 29, 'R', 'S', 'K', 'G', 'O', 'H', 'P', 'I', 'Q', 'M', '5', 28, '7', 'F'};
/* scancodes : 0x38, 0x1d, 0x52, 0x53,  0x4b, 0x47, 0x4f, 0x48,  0x50, 0x49, 0x51, 0x4d,  0x35, 0x1c, 0x37, 0x46 */
/* 0xE0 keys : RALT RCTRL  INSRT DEL    LEFT  7HOME 1END  8UP    DOWN  9PGUP 3PGDN 6RGHT  KP/  ENTR *PRNSCN SCLOCK */

/** Some kind of translation map. */
static const uint8 s_translateMap[] = {'>', '@', 'K', 'L', 'O', 'P', 'Q', 'S', 'T', 'U', 'V', 'Y', '_', 'l', '|', 0};
/* DuneII codes :  0x3e 0x40 0x4b 0x4c  0x4f 0x50 0x51 0x53  0x54 0x55 0x56 0x59  0x5f 0x6c 0x7c 0x00 */
/*                 RALT RCTL                                                      KP / KPENTER        */

/** To what a match in #s_translateMap translates. */
static const uint8 s_translateTo[] = {'<', ':', 'c', 'h', '\\', '[', ']', '`', 'b', 'e', 'g', 'f', '7', '+', '|', 0};
/* DuneII codes :  0x3c 0x3a 0x63 0x68  0x5c 0x5b 0x5d 0x60  0x62 0x65 0x67 0x66  0x37 0x2b 0x7c 0x00 */
/*                 LALT LCTL KP 0 KP .  KP 4 KP 7 KP 1 KP 8  KP 2 KP 9 KP 3 KP 6   /  ENTER           */

assert_compile(lengthof(s_translateExtendedMap) == lengthof(s_translateMap));
assert_compile(lengthof(s_translateMap) == lengthof(s_translateTo));

/** Key translation table.
 * From XT/AT scancodes to Dune II codes :
 * 0x00 => 0x7f
 * 0x01 => 0x6e            ESC
 * [0x02:0x0d] => n        1 2 3 4 5 6 7 8 9 0 - =
 * [0x0e:0x1b] => n+1      BACKSPACE TAB q w e r t y u i o p [ ]
 * 0x1c => 0x2b            ENTER
 * 0x1d => 0x3a            LCTRL
 * [0x1e:0x28] => n+1      a s d f g h j k l ; '
 * 0x29 => 0x01            ~' (key left to 1)
 * 0x2a => 0x2c            LSHIFT
 * 0x2b => 0x1d            | (key left to Z)
 * [0x2c:0x35] => n+2      z x c v b n m , . /
 * 0x36 => 0x39            RSHIFT
 * 0x37 => 0x64            KP *
 * 0x38 => 0x3c            LALT
 * 0x39 => 0x3d            SPACE
 * 0x3a => 0x1e            CAPS LOCK
 * [0x3b:0x44] => [0x70:0x79] (n+0x35) F1-F10
 * 0x45 => 0x5a            NUMLOCK
 * 0x46 => 0x7d            SCROLL LOCK
 * 0x47 => 0x5b            KP 7 HOME
 * 0x48 => 0x60            KP 8 UP
 * 0x49 => 0x65            KP 9 PGUP
 * 0x4a => 0x69            KP -
 * 0x4b => 0x5c            KP 4 LEFT
 * 0x4c => 0x61            KP 5
 * 0x4d => 0x66            KP 6 RIGHT
 * 0x4e => 0x6a            KP +
 * 0x4f => 0x5d            KP 1 END
 * 0x50 => 0x62            KP 2 DOWN
 * 0x51 => 0x67            KP 3 PGDN
 * 0x52 => 0x63            KP 0 INS
 * 0x53 => 0x68            KP . DEL
 * [0x54:0x56] => 0x7f
 * 0x57 => 0x7a            F11
 * 0x58 => 0x7b            F12
 */
static const uint8 s_keyTranslate[] = {
	127,  'n',   2,   3,   4,   5,    6,   7,   8,  9,  10,    11,  12,  13,  15,  16, /* 0x00 - 0x0f */
	 17,   18,  19,  20,  21,  22,   23,  24,  25, 26,  27,    28, '+', ':',  31, ' ', /* 0x10 - 0x1f */
	 '!', '"', '#', '$', '%', '&', '\'', '(', ')',  1, ',',    29, '.', '/', '0', '1', /* 0x20 - 0x2f */
	 '2', '3', '4', '5', '6', '7',  '9', 'd', '<', '=', 30,   'p', 'q', 'r', 's', 't', /* 0x30 - 0x3f */
	 'u', 'v', 'w', 'x', 'y', 'Z',  '}', '[', '`', 'e', 'i', '\\', 'a', 'f', 'j', ']', /* 0x40 - 0x4f */
	 'b', 'g', 'c', 'h', 127, 127,  127, 'z', '{'                                      /* 0x50 - 0x58 */
};

void Input_Init(void)
{
	uint8 i;

	for (i = 0; i < lengthof(s_activeInputMap); i++) s_activeInputMap[i] = 0;
}

/**
 * Translate keyboard input.
 * @param keyValue Entered key value.
 * @return Translated key value.
 */
static uint16 Input_Keyboard_Translate(uint16 keyValue)
{
	uint16 i;

	if ((g_inputFlags & INPUT_FLAG_NO_TRANSLATE) != 0) return keyValue;

	for (i = 0; i < lengthof(s_translateMap); i++) {
		if (s_translateMap[i] != (uint8)(keyValue & 0xFF)) continue;

		return s_translateTo[i] | (keyValue & 0xFF00);
	}

	return keyValue;
}

/* Receive the keyboard scancodes from the AT keyboard */
void Input_EventHandler(uint8 key)
{
	uint8 state;
	uint8 i;

	state = 0;

	/* escape code for escaped scancodes */
	if (key == 0xE0) {
		s_input_extendedKey = true;
		return;
	}

	/* Key up */
	if ((key & 0x80) != 0) {
		key &= 0x7F;
		state |= 0x08;	/* KEYUP */
	}

	if (s_input_extendedKey) {
		s_input_extendedKey = false;

		for (i = 0; i < lengthof(s_translateExtendedMap); i++) {
			if (s_translateExtendedMap[i] == key) {
				key = s_translateMap[i];
				break;
			}
		}
		if (i == 16) return;
	} else if (key == 0x7A) {
		key = 0x80;
	} else {
		key = s_keyTranslate[key & 0x7F];
	}

	if ((s_activeInputMap[7] & 0x4) != 0) state |= 0x02;	/* 0x3a : LCTRL */
	if ((s_activeInputMap[8] & 0x1) != 0) state |= 0x02;	/* 0x40 : RCTRL */
	if ((s_activeInputMap[7] & 0x50) != 0) state |= 0x04;	/* 0x3c 0x3e : LALT RALT => ALT */

	key = Input_Keyboard_Translate(key) & 0xFF;

	if ((s_activeInputMap[7] & 0x2) != 0) state |= 0x01;	/* 0x39 : RSHIFT */

	if (state == 0x06 && key == 0x68) return;	/* state == CTRL+ALT && key == KP DEL */
	if (state == 0x06 && key == 0x4C) return;	/* state == CTRL+ALT && key == DELETE */

	Input_HandleInput((state << 8) | key);
}

/**
 * Clears the given bits in input flags.
 *
 * @param bits The bits to clear.
 * @return The new value of input flags.
 */
uint16 Input_Flags_ClearBits(uint16 bits)
{
	g_inputFlags &= ~bits;
	return g_inputFlags;
}

/**
 * Sets the given bits in input flags.
 *
 * @param bits The bits to set.
 * @return The new value of input flags.
 */
uint16 Input_Flags_SetBits(uint16 bits)
{
	g_inputFlags |= bits;

	if ((g_inputFlags & INPUT_FLAG_KEY_RELEASE) != 0) {
		uint8 i;
		for (i = 0; i < lengthof(s_activeInputMap); i++) s_activeInputMap[i] = 0;
	}

	return g_inputFlags;
}

/** Clear the history buffer. */
void Input_History_Clear(void)
{
	s_historyTail = s_historyHead;
}

/**
 * Get an input from the history buffer.
 * @param index Current index in the history.
 * @return Read input.
 * @note Provided \a index gets updated and written to #historyHead
 */
static uint16 Input_ReadHistory(uint16 index)
{
	uint16 value;

	if (g_mouseMode != INPUT_MOUSE_MODE_PLAY) g_mouseInputValue = s_history[index / 2];
	value = g_mouseInputValue;
	index = (index + 2) & 0xFF;

	if ((value & 0xFF) >= 0x41) {
		if ((value & 0xFF) <= 0x42) {
			if (g_mouseMode != INPUT_MOUSE_MODE_PLAY) g_mouseRecordedX = s_history[index / 2];
			g_mouseClickX = g_mouseRecordedX;
			index = (index + 2) & 0xFF;

			if (g_mouseMode != INPUT_MOUSE_MODE_PLAY) g_mouseRecordedY = s_history[index / 2];
			g_mouseClickY = g_mouseRecordedY;
			index = (index + 2) & 0xFF;
		} else if ((value & 0xFF) <= 0x44) {
			if (g_mouseMode != INPUT_MOUSE_MODE_PLAY) g_mouseRecordedX = s_history[index / 2];
			index = (index + 2) & 0xFF;

			if (g_mouseMode != INPUT_MOUSE_MODE_PLAY) g_mouseRecordedY = s_history[index / 2];
			index = (index + 2) & 0xFF;
		}
	}
	if (g_mouseMode != INPUT_MOUSE_MODE_PLAY) s_historyHead = index;
	return value;
}

/**
 * Add a value to the history buffer.
 * @param value New value to add.
 * @return \c 1 if adding fails, \c 0 if successful.
 */
static uint16 Input_History_Add(uint16 value)
{
	uint16 index;

	index = (s_historyTail + 2) & 0xFF;
	if (index == s_historyHead) return 1;

	s_history[s_historyTail / 2] = value;
	s_historyTail = index;
	return 0;
}

/** Read input event from file. */
static void Input_ReadInputFromFile(void)
{
	uint16 value;
	uint16 mouseBuffer[2];

	if (g_mouseMode == INPUT_MOUSE_MODE_NORMAL || g_mouseMode != INPUT_MOUSE_MODE_PLAY) return;

	if (File_Read(g_mouseFileID, mouseBuffer, 4) != 4) {
		Warning("Input_ReadInputFromFile(): File_Read() error.\n");
		return;
	}
	Debug("  time=%hu value=0x%04hx\n", mouseBuffer[1], mouseBuffer[0]);

	g_mouseRecordedTimer = mouseBuffer[1];
	value = g_mouseInputValue = mouseBuffer[0];

	if ((value & 0xFF) != 0x2D) {	/* 0x2d = mouse move */
		uint8 idx, bit;

		idx = (value & 0xFF) >> 3;
		bit = 1 << (value & 7);

		s_activeInputMap[idx] &= ~bit;
		if ((value & 0x800) == 0) s_activeInputMap[idx] |= bit;

		if ((value & 0xFF) < 0x41 || (value & 0xFF) > 0x44) {
			g_timerInput = 0;
			return;
		}

		value -= 0x41;
		if ((value & 0xFF) <= 0x2) {
			g_prevButtonState &= ~(1 << (value & 0xFF));
			g_prevButtonState |= (((value & 0x800) >> (3+8)) ^ 1) << (value & 0xFF);
		}
	}

	if (File_Read(g_mouseFileID, mouseBuffer, 4) != 4) {
		Warning("Input_ReadInputFromFile(): File_Read() error.\n");
		return;
	}
	Debug("  mouseX=%hu mouseY=%hu\n", mouseBuffer[0], mouseBuffer[1]);

	g_mouseX = g_mouseRecordedX = mouseBuffer[0];
	value = g_mouseY = g_mouseRecordedY = mouseBuffer[1];

	Mouse_HandleMovementIfMoved(value);
	g_timerInput = 0;
}

/**
 * Get input, and add it to the history.
 * @param value Old value.
 * @return Added input value.
 */
static uint16 Input_AddHistory(uint16 value)
{
	if (g_mouseMode == INPUT_MOUSE_MODE_NORMAL || g_mouseMode == INPUT_MOUSE_MODE_RECORD) return value;

	if (g_mouseNoRecordedValue) {
		value = 0;
	} else if (g_timerInput < g_mouseRecordedTimer) {
		value = 0;
	} else if (g_mouseInputValue == 0x2D) {	/* 0x2D == '-' */
		Input_ReadInputFromFile();
		value = 0;
	} else {
		value = g_mouseInputValue;
	}

	s_history[s_historyHead / 2] = value;
	return value;
}

/**
 * Handle input.
 * @param input New input.
 * Upper byte is flags, lower byte is Dune II keycode
 * Flags :
 *   0x01 SHIFT
 *   0x02 CTRL ?
 *   0x04 ALT
 *   0x08 KEYUP / RELEASE
 */
void Input_HandleInput(uint16 input)
{
	uint16 oldTail;
	uint16 saveSize = 0;

	uint16 index;
	uint16 value;
	uint8  bit_value;

	uint16 inputMouseX;
	uint16 inputMouseY;
	uint16 tempBuffer[4];
	uint16 flags; /* Mask for allowed input types. See InputFlagsEnum. */

	flags       = g_inputFlags;
	inputMouseX = g_mouseX;
	inputMouseY = g_mouseY;

	if (g_mouseMode == INPUT_MOUSE_MODE_RECORD) {
		saveSize = 4;
	}

	if (input == 0) return;

	value = input & 0xFF;
	if ((flags & INPUT_FLAG_MOUSE_EMUL) != 0 && (input & 0x400) == 0) {
		/* Keyboard mouse emulation :
		 * Numeric keypad is used. 0 <Insert> is left click, . <Suppr> is right click
		 *         7 8 9 4 6 1 2 3 => move the cursor
		 * SHIFT + 7 8 9 4 6 1 2 3 => move the cursor faster
		 *  CTRL + 7 8 9 4 5 6 1 2 3 => move the cursor to absolute position
		 */
		if (((flags & INPUT_FLAG_KBD_MOUSE_CLK) != 0 && (value == 0x2B || value == 0x3D || value == 0x6C)) || value == 0x63) {
			input = 0x41 | (input & 0xFF00);
			g_prevButtonState |= 1;
			if ((input & 0x800) != 0) {
				g_prevButtonState &= 0xFE; /* ~1 */
			}
		} else if (value == 0x68) {
			input = 0x42 | (input & 0xFF00);
			g_prevButtonState |= 2;
			if ((input & 0x800) != 0) {
				g_prevButtonState &= 0xFD; /* ~2 */
			}
		} else if ((input & 0x800) == 0 && (value == 0x61 || (value >= 0x5B && value <= 0x67 &&
				(value <= 0x5D || value >= 0x65 || value == 0x60 || value == 0x62)))) {
			/* Numeric Keypad press */
			/* Copied from 29E8:0A9C - 29E8:0AB6 */
			static const int8 data_0A9C[13][2] =
			{
				{-1, -1}, /* 0x5B - KP 7 : up left */
				{-1,  0}, /* 0x5C - KP 4 : left */
				{-1,  1}, /* 0x5D - KP 1 : down left*/
				{ 0,  0},
				{ 0,  0},
				{ 0, -1}, /* 0x60 - KP 8 : up */
				{ 0,  0}, /* 0x61 - KP 5 : center */
				{ 0,  1}, /* 0x62 - KP 2 : down */
				{ 0,  0},
				{ 0,  0},
				{ 1, -1}, /* 0x65 - KP 9 : up right */
				{ 1,  0}, /* 0x66 - KP 6 : right */
				{ 1,  1}, /* 0x67 - KP 3 : down right */
			};
			int8 dx, dy;

			dx = data_0A9C[value - 0x5B][0];
			dy = data_0A9C[value - 0x5B][1];

			if ((input & 0x200) != 0) {
				/* CTRL pressed : move to absolute position */
				/* Copied from 29E8:0AB6 - 29E8:0AD6 */
				static const uint16 data_0AB6[16] = {8, 2, 8, 6, 4, 3, 8, 5,  8, 8, 8, 8, 0, 1, 8, 7};
				/* Copied from 29E8:000A - 29E8:002E */
				static const XYPosition mousePos[9] = {
					{0x0a0, 0x000}, {0x13f, 0x000}, {0x13f, 0x045}, {0x13f, 0x089},
					{0x0a0, 0x089}, {0x000, 0x089}, {0x000, 0x045}, {0x000, 0x000},
					{0x0a0, 0x045} /* center position */
				};	/* 0xa0 = 160, 0x13f = 319  ;  0x45 = 69, 0x89 = 137 */
				const XYPosition *xy;

				xy = mousePos + data_0AB6[((dy & 3) << 2) | (dx & 3)];
				inputMouseX = xy->x;
				inputMouseY = xy->y;
			} else {
				static const int8 offsetSmall[3] = { -1, 0,  1};	/* When shift is released : SLOW */
				static const int8 offsetBig[3]   = {-16, 0, 16};	/* When shift is pressed : FAST */
				const int8 *change;

				change = ((input & 0x100) == 0) ? &offsetSmall[1] : &offsetBig[1];

				inputMouseX += change[dx];
				inputMouseY += change[dy];
				if (inputMouseX >= 0x8000) inputMouseX = 0;
				if (inputMouseY >= 0x8000) inputMouseY = 0;
				if ((int16)inputMouseX > SCREEN_WIDTH - 1)  inputMouseX = SCREEN_WIDTH - 1;
				if ((int16)inputMouseY > SCREEN_HEIGHT - 1) inputMouseY = SCREEN_HEIGHT - 1;
			}

			g_mouseX = inputMouseX;
			g_mouseY = inputMouseY;
			if (g_mouseLock == 0) {
				/* Move mouse pointer */
				GUI_Mouse_Hide();
				GUI_Mouse_Show();
			}
			input = 0x2D;
		}
	}

	oldTail = s_historyTail;

	if (Input_History_Add(input) != 0) {
		s_historyTail = oldTail;
		return;
	}

	value = input & 0xFF;
	if (value == 0x2D || value == 0x41 || value == 0x42) {
		/* mouse buttons : 0x2D : no change
		                   0x41 : change for 1st button
						   0x42 : change for 2nd button */
		if ((Input_History_Add(inputMouseX) != 0) || (Input_History_Add(inputMouseY) != 0)) {
			s_historyTail = oldTail;
			return;
		}

		tempBuffer[2] = inputMouseX;
		tempBuffer[3] = inputMouseY;
		saveSize += 4;
	}

	bit_value = 1;
	if (value != 0x2D && value != 0x7F && (input & 0x800) != 0) bit_value = 0;
	/* bitvalue = 0 if release, 1 for key press */

	if (value == 0x2D || value == 0x7F ||
			((input & 0x800) != 0 && (flags & INPUT_FLAG_KEY_RELEASE) == 0 && value != 0x41 && value != 0x42)) {
		s_historyTail = oldTail;
	}

	index = (value & 0x7F) >> 3;
	bit_value <<= (value & 7);
	if ((bit_value & s_activeInputMap[index]) != 0 && (flags & INPUT_FLAG_KEY_REPEAT) == 0) {
		s_historyTail = oldTail;
	}
	s_activeInputMap[index] &= (1 << (value & 7)) ^ 0xFF;	/* Clear bit */
	s_activeInputMap[index] |= bit_value;					/* set bit */

	if (g_mouseMode != INPUT_MOUSE_MODE_RECORD || value == 0x7D) return;

	tempBuffer[0] = input;
	tempBuffer[1] = g_timerInput;
	File_Write(g_mouseFileID, tempBuffer, saveSize);
	g_timerInput = 0;
}

/**
 * Is input available?
 * @return \c 0 if no input, else a value.
 */
uint16 Input_IsInputAvailable(void)
{
	uint16 value;

	value = s_historyHead ^ s_historyTail;

	return Input_AddHistory(value);
}

/**
 * Wait for input, and return the read event.
 * @return New input.
 */
uint16 Input_Wait(void)
{
	uint16 value = 0;

	for (;; sleepIdle()) {
		if (g_mouseMode == INPUT_MOUSE_MODE_PLAY) break;

		value = s_historyHead;
		if (value != s_historyTail) break;
	}

	value = Input_ReadHistory(value);

	Input_ReadInputFromFile();
	return value;
}

/**
 * Test whether \a value is available in the input.
 * @param value Input value.
 * @return \c 0 means not available.
 */
uint16 Input_Test(uint16 value)
{
	Input_AddHistory(value);
	value = Input_Keyboard_Translate(value);

	return s_activeInputMap[value >> 3] & (1 << (value & 7));
}

/**
 * Handle keyboard input.
 * @param value Combined keycode and modifier flags.
 * @return key value and modifier flags. (ASCII value or > 0x80)
 * @todo Most users seem to ignore the returned high byte, perhaps make it a
 *      uint8 at some time in the future?
 */
uint16 Input_Keyboard_HandleKeys(uint16 value)
{
	uint16 keyFlags;

	keyFlags = value & 0xFF00;
	value &= 0x00FF;

	if ((keyFlags & 0x8000) != 0 || (keyFlags & 0x800) != 0) {
		return 0;	/* return on key up */
	}

	if (value == 0x6E) {
		return keyFlags | 0x1B;	/* ESCAPE */
	}

	if (value < 0x3E) {	/* Printables Chars */
		uint8 keySave = value & 0x3F;
		uint16 asciiValue;

		if ((keyFlags & 0x100) != 0) {
			asciiValue = s_keymapShift[keySave];
		} else {
			asciiValue = s_keymapNormal[keySave];
		}

		if ((keyFlags & 0x200) != 0) {	/* ALT */
			if ((s_keymapSpecialMask[keySave >> 3] & (1 << (keySave & 7))) != 0) {
				asciiValue &= 0x1F;
			}
		}
		return keyFlags | asciiValue;
	}

	if (value < 0x4B) {
		/* 0x3E - 0x4A : unused codes ? */
		if (value >= 0x41) {
			return keyFlags | (value + 0x85);	/* 0x41-0x4A => 0xC6-0xCF */
		}
		return keyFlags | value | 0x80;	/* 0x3E 0x3F 0x40 => 0xBE 0xBF 0xC0 */
	}

	if (value < 0x6E) {
		/* 0x4B - 0x6D : Keypad + grey edit keys */
		if (value >= 0x5A) {
			return s_keymapNumlock[value - 0x5A];
		} else {
			/*return s_keymapNumpad[value - 0x4B]; CODE has been removed in 1b81370b006 */
		}
	}

	if (value < 0x70 || value > 0x79) {
		return keyFlags | value | 0x80;
	}
	value -= 0x70;	/* F1-F10 Function keys */
	if ((keyFlags & 0x700) != 0) {
		if ((keyFlags & 0x400) == 0) {	/* ? */
			if ((keyFlags & 0x200) == 0) {	/* ALT */
				return keyFlags | (0xAC - value); /* 0xA3 - 0xAC */
			}
			return keyFlags | (0xA2 - value); /* ? : 0x99 - 0xA2 */
		}
		return keyFlags | (0x98 - value); /* SHIFT or ALT : 0x8F - 0x98 */
	}
	return keyFlags | (0xC5 - value);	/* No modifier : 0xBC - 0xC5 */
}

/**
 * Wait for valid input.
 * @return Read input. (ASCII VALUE or > 0x80)
 */
uint16 Input_WaitForValidInput(void)
{
	uint16 index = 0;
	uint16 value, i;

	do {
		for (;; sleepIdle()) {
			if (g_mouseMode == INPUT_MOUSE_MODE_PLAY) break;

			index = s_historyHead;
			if (index != s_historyTail) break;
		}

		value = Input_ReadHistory(index);
		for (i = 0; i < lengthof(s_keymapIgnore); i++) {
			if ((value & 0xFF) == s_keymapIgnore[i]) break;
		}
	} while (i < lengthof(s_keymapIgnore) || (value & 0x800) != 0 || (value & 0xFF) >= 0x7A);

	value = Input_Keyboard_HandleKeys(value);
	Input_ReadInputFromFile();
	return value & 0xFF;
}

/**
 * Get the next key.
 * @return Next key.
 */
uint16 Input_Keyboard_NextKey(void)
{
	uint16 i;
	uint16 value;

	Input_AddHistory(0);

	for (;; sleepIdle()) {
		uint16 index;

		index = s_historyHead;
		if (g_mouseMode != INPUT_MOUSE_MODE_PLAY && index == s_historyTail) {
			value = 0;
			break;
		}

		value = s_history[index / 2];
		if (g_mouseMode == INPUT_MOUSE_MODE_PLAY && value == 0) break;

		for (i = 0; i < lengthof(s_keymapIgnore); i++) {
			if (s_keymapIgnore[i] == (value & 0xFF)) break;
		}

		if (i == lengthof(s_keymapIgnore) && (value & 0x800) == 0 && (value & 0xFF) < 0x7A) break;

		if ((value & 0xFF) >= 0x41 && (value & 0xFF) <= 0x44) index += 4;

		s_historyHead = index + 2;
	}

	if (value != 0) {
		value = Input_Keyboard_HandleKeys(value) & 0xFF;
	}

	return value;
}

