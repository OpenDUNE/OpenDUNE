/* $Id$ */

#include <stdio.h>
#include <string.h>
#include "types.h"
#include "libemu.h"
#include "../decompiled/decompiled.h"
#include "input.h"

InputData *g_input = NULL;
static InputLocalData *s_input_local = NULL;

/**
 * Initialize the input system.
 *
 * @init system_Init_Input
 */
void System_Init_Input()
{
	s_input_local = (InputLocalData *)&emu_get_memory8(0x29E8, 0x0, 0x0);
	g_input = (InputData *)&emu_get_memory8(0x353F, 0x0, 0x0);
}

/**
 * Set one or more bits given by the param to the input flags. See
 *  InputFlagsEnum for the valid values.
 *
 * @name Input_Flags_SetBits
 * @implements 29E8:04AF:003C:ECA0 ()
 * @implements 29E8:04E9:0002:2597
 */
void Input_Flags_SetBits()
{
	uint16 setFlags = emu_get_memory16(emu_ss, emu_sp,  0x4);

	g_input->flags |= setFlags;

	/* If we switch on key-release tracking, reset the array */
	if ((setFlags & INPUT_FLAG_KEY_RELEASE) != 0) {
		memset(s_input_local->activeInputMap, 0, sizeof(s_input_local->activeInputMap));
	}

	/* Return from this function */
	emu_ax.x = g_input->flags;
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Clears one or more bits given by the param to the input flags. See
 *  InputFlagsEnum for the valid values.
 *
 * @name Input_Flags_ClearBits
 * @implements 29E8:04EB:0011:9CC8 ()
 */
void Input_Flags_ClearBits()
{
	uint16 clearFlags = emu_get_memory16(emu_ss, emu_sp,  0x4);

	g_input->flags &= ~clearFlags;

	/* Return from this function */
	emu_ax.x = g_input->flags;
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Add a value to the input history.
 *
 * @param value The value to add to the history.
 * @return Zero if there was no more room in the history, else non-zero.
 *
 * @name Input_HistoryAdd
 * @implements 29E8:0A19:002A:2DE6
 * @implements 29E8:0A43:0007:9B22
 */
bool Input_HistoryAdd(uint16 value)
{
	uint16 position = s_input_local->historyTail;
	uint16 positionNext = (position + 2) & 0xFF;

	if (positionNext == s_input_local->historyHead) return false;

	s_input_local->history[position / 2] = value;
	s_input_local->historyTail = positionNext;
	return true;
}

/**
 * Handles the pressing of a key, transforming it to codes we understand.
 *  For most characters this means making them ASCII code.
 *
 * @name Input_Keyboard_HandleKeys
 * @implements 29E8:026C:0015:3543 (emu_ax.l, emu_ax.h)
 * @implements 29E8:027A:0007:5A2E
 * @implements 29E8:0281:0012:4D00
 * @implements 29E8:0293:0015:08FC
 * @implements 29E8:02B6:0025:93AF
 * @implements 29E8:02BB:0020:2395
 * @implements 29E8:02D9:0002:F53A
 * @implements 29E8:02DB:0028:AB44
 * @implements 29E8:030D:002A:00F8
 * @implements 29E8:0331:0006:D00A
 * @implements 29E8:0337:0008:6739
 * @implements 29E8:033F:0004:113A
 * @implements 29E8:0343:0007:372B
 * @implements 29E8:0345:0005:5A4B
 */
void Input_Keyboard_HandleKeys(uint8 key, uint8 state)
{
	/* Pop the return ip already. Reduces code */
	emu_pop(&emu_ip);

	if ((state & 0x80) != 0 || (state & 0x08) != 0) {
		emu_ax.x = 0;
		return;
	}

	s_input_local->flags = g_input->flags;

	if (key < 0x3E) {
		if ((state & 0x01) != 0) {
			emu_ax.l = s_input_local->keymap_shift[key];
		} else {
			emu_ax.l = s_input_local->keymap_normal[key];
		}

		if ((state & 0x02) == 0) return;

		uint8 bitmask = 1 << (key & 0x07);
		uint8 bytePos = key >> 3;
		if ((s_input_local->keymap_special_mask[bytePos] & bitmask) == 0) return;

		emu_ax.l &= 0x1F;
		return;
	}

	if (key < 0x41) {
		emu_ax.l = key | 0x80;
		return;
	}

	if (key < 0x4B) {
		emu_ax.l = key + 0x85;
		return;
	}

	if (key < 0x6E) {
		key -= 0x4B;

		if ((s_input_local->flags & INPUT_FLAG_UNKNOWN_0200) == 0 && (s_input_local->variable_01B7 & 0x0002) != 0) {
			emu_ax.l = s_input_local->keymap_numlock[key - 0x0F];
		} else {
			emu_ax.l = s_input_local->keymap_numpad[key];
		}

		return;
	}

	if (key == 0x6E) {
		emu_ax.l = 0x1B;
		return;
	}

	if (key == 0x6F || key > 0x79) {
		emu_ax.l = key | 0x80;
		return;
	}

	key -= 0x70;
	if ((state & 0x07) == 0) {
		emu_ax.l = 0xC5 - key;
		return;
	}
	if ((state & 0x04) != 0) {
		emu_ax.l = 0x98 - key;
		return;
	}
	if ((state & 0x02) != 0) {
		emu_ax.l = 0xA2 - key;
		return;
	}
	emu_ax.l = 0xAC - key;
}

/**
 * Handle input given by an input device.
 *
 * @param inputState The state of the key/button given. On the lower bits is the
 *  key/button itself, and on the higher bit can be a 0x08 flag to indicate
 *  key/button released.
 *
 * @name Input_HandlerInput
 * @implements 29E8:0A8A:000A:EB53
 * @implements 29E8:0AD6:0010:7A1F
 * @implements 29E8:0C40:0012:D969
 * @implements 29E8:0C52:0018:DE31
 * @implements 29E8:0C6A:0003:1D11
 * @implements 29E8:0C6D:0009:DC81
 * @implements 29E8:0C76:0014:0C0D
 * @implements 29E8:0C8A:0099:E45D
 * @implements 29E8:0C95:008E:26E3
 * @implements 29E8:0CBB:0068:44F0
 * @implements 29E8:0CC0:0063:A66A
 * @implements 29E8:0CE7:003C:E58A
 * @implements 29E8:0D2C:0005:D17A
 * @implements 29E8:0D31:0016:113C
 */
void Input_HandlerInput(uint16 inputState)
{
	uint16 originalHistoryTail = s_input_local->historyTail;
	uint8 inputCommand = inputState & 0xFF;
	bool released = (inputState & 0x800) ? true : false;
	uint8 historySize = 0;

	s_input_local->flags = g_input->flags;
	s_input_local->mouseX = g_input->mouseX;
	s_input_local->mouseY = g_input->mouseY;

	if (inputState == 0) return;

	if (g_input->mouseMode == INPUT_MOUSE_MODE_1) {
		if (g_input->variable_986C != 0x0) return;
		historySize = 4;
	}

	if ((s_input_local->flags & INPUT_FLAG_NO_CLICK) != 0) {
		/* Unresolved jump */ emu_ip = 0x0AE6; emu_last_cs = 0x29E8; emu_last_ip = 0x0AE1; emu_last_length = 0x0010; emu_last_crc = 0x7A1F; emu_call();
		return;
	}

	if (!Input_HistoryAdd(inputState)) return;

	/* For mouse commands we also log the position of the mouse at that time */
	if (inputCommand == 0x2D || inputCommand == 0x41 || inputCommand == 0x42) {
		if (!Input_HistoryAdd(s_input_local->mouseX)) {
			s_input_local->historyTail = originalHistoryTail;
			return;
		}
		if (!Input_HistoryAdd(s_input_local->mouseY)) {
			s_input_local->historyTail = originalHistoryTail;
			return;
		}

		historySize += 4;
	}

	/* 2D and 7F are special commands which should not be logged */
	if (inputCommand == 0x2D || inputCommand == 0x7F) {
		s_input_local->historyTail = originalHistoryTail;
	} else if (released) {
		/* Don't log releases if it was not the left or right mouse button */
		if ((s_input_local->flags & INPUT_FLAG_KEY_RELEASE) == 0 && inputCommand != 0x41 && inputCommand != 0x42) {
			s_input_local->historyTail = originalHistoryTail;
		}
	}

	/* Find the byte and bit position in the bit array of active inputs */
	uint8 bytePos = (inputCommand & 0x7F) >> 3;
	uint8 bitPos  = 1 << (inputCommand & 0x07);

	/* If the key is already pressed, and we cannot repeat keys, revert the history */
	if ((bitPos & s_input_local->activeInputMap[bytePos]) != 0 && (s_input_local->flags & INPUT_FLAG_KEY_REPEAT) == 0) {
		s_input_local->historyTail = originalHistoryTail;
	}

	s_input_local->activeInputMap[bytePos] &= ~bitPos;
	if (inputCommand != 0x2D && inputCommand != 0x7F && !released) {
		s_input_local->activeInputMap[bytePos] |= bitPos;
	}

	if (g_input->mouseMode != INPUT_MOUSE_MODE_1) return;
	if (inputCommand == 0x7D) return;

	s_input_local->variable_0A94 = inputCommand;
	s_input_local->variable_0A96 = g_input->variable_76A6;

	emu_push(0);
	emu_push(historySize);
	emu_push(emu_cs); emu_push(0xA94); // Location of above two variables
	emu_push(g_input->variable_7011);
	emu_push(emu_cs); emu_push(0x0D23); f__1FB5_0E9C_001B_37D1();
	emu_sp += 10;

	g_input->variable_76A6 = 0x0000;
	return;
}

/**
 * A safe handler around Input_HandlerInput, which puts all registers safe
 *  and recovers it at the end.
 *
 * @name Input_HandleInputSafe
 * @implements 29E8:0A4A:0040:5428 ()
 * @implements 29E8:0D3A:000D:2768
 */
void Input_HandleInputSafe()
{
	emu_pushf();
	emu_cli();
	Input_HandlerInput(emu_get_memory16(emu_ss, emu_sp,  0x6));
	emu_popf();

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
