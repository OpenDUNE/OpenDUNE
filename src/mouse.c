/* $Id$ */

/* $Id$ */

#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "mouse.h"
#include "os/math.h"
#include "gfx.h"
#include "gui/gui.h"
#include "input/input.h"
#include "file.h"

extern void emu_Input_HandleInput();

/**
 * Set the region in which the mouse can move.
 * @note This limits the mouse movement in the hardware.
 *
 * @param left The left side of the region.
 * @param top The top side of the region.
 * @param right The right side of the region.
 * @param bottom The bottom side of the region.
 */
void Mouse_SetRegion(uint16 left, uint16 top, uint16 right, uint16 bottom)
{
	if (left > right) {
		uint16 temp = left;
		left = right;
		right = temp;
	}
	if (top > bottom) {
		uint16 temp = top;
		top = bottom;
		bottom = temp;
	}

	left   = clamp(left,   0, SCREEN_WIDTH - 1);
	right  = clamp(right,  0, SCREEN_WIDTH - 1);
	top    = clamp(top,    0, SCREEN_HEIGHT - 1);
	bottom = clamp(bottom, 0, SCREEN_HEIGHT - 1);

	g_global->mouseRegionLeft   = left;
	g_global->mouseRegionRight  = right;
	g_global->mouseRegionTop    = top;
	g_global->mouseRegionBottom = bottom;

	if (g_global->mouseInstalled) {
		emu_cx = left  * (g_global->doubleWidth ? 2 : 1);
		emu_dx = right * (g_global->doubleWidth ? 2 : 1);
		emu_ax = 0x7;
		emu_syscall(0x33); /* Mouse Interrupt */

		emu_cx = top;
		emu_dx = bottom;
		emu_ax = 0x8;
		emu_syscall(0x33); /* Mouse Interrupt */
	}
}

void Mouse_SetMouseMode(uint8 mouseMode, const char *filename)
{
	switch (mouseMode) {
		default: break;

		case INPUT_MOUSE_MODE_NORMAL:
			g_global->mouseMode = mouseMode;
			if (g_global->mouseFileID != 0xFF) {
				Input_Flags_ClearBits(INPUT_FLAG_KEY_RELEASE);
				File_Close(g_global->mouseFileID);
			}
			g_global->mouseFileID = 0xFF;
			g_global->variable_701B = 1;
			break;

		case INPUT_MOUSE_MODE_RECORD:
			if (g_global->mouseFileID != 0xFF) break;

			File_Delete(filename);
			File_Create(filename);

			srand(0x1234);

			g_global->randomSeed[0] = 0x21;
			g_global->randomSeed[1] = 0x43;
			g_global->randomSeed[2] = 0x34;
			g_global->randomSeed[3] = 0x12;

			g_global->mouseFileID = File_Open(filename, 3);

			g_global->mouseMode = mouseMode;

			Input_Flags_SetBits(INPUT_FLAG_KEY_RELEASE);

			emu_push(0x2D);
			emu_push(emu_cs); emu_push(0x00D4); emu_cs = 0x29E8; emu_Input_HandleInput();
			emu_sp += 2;
			break;

		case INPUT_MOUSE_MODE_PLAY:
			if (g_global->mouseFileID == 0xFF) {
				g_global->mouseFileID = File_Open(filename, 1);

				srand(0x1234);

				g_global->randomSeed[0] = 0x21;
				g_global->randomSeed[1] = 0x43;
				g_global->randomSeed[2] = 0x34;
				g_global->randomSeed[3] = 0x12;
			}

			g_global->variable_701B = 1;

			File_Read(g_global->mouseFileID, &g_global->variable_7013, 2);
			if (File_Read(g_global->mouseFileID, &g_global->variable_7015, 2) != 2) break;;

			if ((g_global->variable_7013 >= 0x41 && g_global->variable_7013 <= 0x44) || g_global->variable_7013 == 0x2D) {
				File_Read(g_global->mouseFileID, &g_global->variable_7017, 2);
				if (File_Read(g_global->mouseFileID, &g_global->variable_7019, 2) == 2) {
					g_global->mouseX = g_global->variable_7017;
					g_global->mouseY = g_global->variable_7019;
					g_global->prevButtonState = 0;

					GUI_Mouse_Hide_Safe();
					GUI_Mouse_Show_Safe();

					g_global->variable_701B = 0;
					break;
				}
				g_global->variable_701B = 1;
				break;
			}
			g_global->variable_701B = 0;
			break;
	}

	g_global->variable_76A6 = 0;
	g_global->mouseMode = mouseMode;
}

/**
 * Compare mouse button state with previous value, and report changes.
 * @param newButtonState New button state.
 * @return \c 0x2D if no change, \c 0x41 for change in first button state,
 *     \c 0x42 for change in second button state, bit 11 means 'button released'.
 */
uint16 Mouse_CheckButtons(uint16 newButtonState)
{
	uint8 change;
	uint16 result;

	newButtonState &= 0xFF;

	result = 0x2D;
	change = newButtonState ^ g_global->prevButtonState;
	if (change == 0) return result;

	g_global->prevButtonState = newButtonState;

	if ((change & 0x2) != 0) {
		result = 0x42;
		if ((newButtonState & 0x2) == 0) {
			result |= 0x800;
		}
	}

	if ((change & 0x1) != 0) {
		result = 0x41;
		if ((newButtonState & 0x1) == 0) {
			result |= 0x800;
		}
	}

	return result;
}

/**
 * If the mouse has moved, update its coordinates, and update the region flags.
 * @param mouseX New mouse X coordinate.
 * @param mouseY New mouse Y coordinate.
 */
void Mouse_CheckMovement(uint16 mouseX, uint16 mouseY)
{
	if (g_global->mouseHiddenDepth == 0 && (g_global->mousePrevX != mouseX || g_global->mousePrevY != mouseY)) {

		if ((g_global->regionFlags & 0xC000) != 0xC000) {
			GUI_Mouse_Hide();

			if ((g_global->regionFlags & 0x8000) == 0) {
				GUI_Mouse_Show();
				g_global->mousePrevX = mouseX;
				g_global->mousePrevY = mouseY;
				g_global->mouseLock = 0;
				return;
			}
		}

		if (mouseX >= g_global->regionMinX && mouseX <= g_global->regionMaxX &&
				mouseY >= g_global->regionMinY && mouseY <= g_global->regionMaxY) {
			g_global->regionFlags |= 0x4000;
		} else {
			GUI_Mouse_Show();
		}
	}

	g_global->mousePrevX = mouseX;
	g_global->mousePrevY = mouseY;
	g_global->mouseLock = 0;
}

