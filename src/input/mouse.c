/** @file src/input/mouse.c Mouse routines. */

#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "../os/math.h"
#include "../os/sleep.h"
#include "../os/error.h"

#include "mouse.h"

#include "../file.h"
#include "../gfx.h"
#include "../gui/gui.h"
#include "../input/input.h"
#include "../timer.h"
#include "../tools.h"
#include "../video/video.h"

uint16 g_mouseLock;          /*!< Lock for when handling mouse movement. */

uint16 g_mouseX;             /*!< Current X position of the mouse. */
uint16 g_mouseY;             /*!< Current Y position of the mouse. */
uint16 g_mousePrevX;         /*!< Previous X position of the mouse. */
uint16 g_mousePrevY;         /*!< Previous Y position of the mouse. */

uint8  g_prevButtonState;    /*!< Previous mouse button state. */
uint16 g_mouseClickX;        /*!< X position of last mouse click. */
uint16 g_mouseClickY;        /*!< Y position of last mouse click. */

uint16 g_regionFlags;        /*!< Flags: 0x4000 - Mouse still inside region, 0x8000 - Region check. 0x00FF - Countdown to showing. */
uint16 g_mouseRegionLeft;    /*!< Region mouse can be in - left position. */
uint16 g_mouseRegionRight;   /*!< Region mouse can be in - right position. */
uint16 g_mouseRegionTop;     /*!< Region mouse can be in - top position. */
uint16 g_mouseRegionBottom;  /*!< Region mouse can be in - bottom position. */

uint16 g_regionMinX;         /*!< Region - minimum value for X position. */
uint16 g_regionMinY;         /*!< Region - minimum value for Y position. */
uint16 g_regionMaxX;         /*!< Region - maximum value for X position. */
uint16 g_regionMaxY;         /*!< Region - maximum value for Y position. */

uint8 g_mouseDisabled;       /*!< Mouse disabled flag */
uint8 g_mouseHiddenDepth;
uint8 g_mouseFileID;

bool g_mouseNoRecordedValue; /*!< used in INPUT_MOUSE_MODE_PLAY */
uint16 g_mouseInputValue;
uint16 g_mouseRecordedTimer;
uint16 g_mouseRecordedX;
uint16 g_mouseRecordedY;

uint8 g_mouseMode;
uint16 g_inputFlags;


/**
 * Initialize the mouse driver.
 */
void Mouse_Init(void)
{
	g_mouseX = SCREEN_WIDTH / 2;
	g_mouseY = SCREEN_HEIGHT / 2;
	g_mouseHiddenDepth = 1;
	g_regionFlags = 0;
	g_mouseRegionRight = SCREEN_WIDTH - 1;
	g_mouseRegionBottom = SCREEN_HEIGHT - 1;

	g_mouseDisabled = 1;
	g_mouseFileID = FILE_INVALID;

	Video_Mouse_SetPosition(g_mouseX, g_mouseY);
}

/**
 * Handle the new mouse event.
 */
void Mouse_EventHandler(uint16 mousePosX, uint16 mousePosY, bool mouseButtonLeft, bool mouseButtonRight)
{
	uint8 newButtonState = (mouseButtonLeft ? 0x1 : 0x0) | (mouseButtonRight ? 0x2 : 0x0);

	/* some of the input sources might be a bit sloppy on restricting the X/Y upper limits, so we clamp the values */
	if (mousePosX >= SCREEN_WIDTH) {
		mousePosX = SCREEN_WIDTH - 1;
	}

	if (mousePosY >= SCREEN_HEIGHT) {
		mousePosY = SCREEN_HEIGHT - 1;
	}

	if (g_mouseDisabled == 0) {
		if (g_mouseMode == INPUT_MOUSE_MODE_NORMAL && (g_inputFlags & INPUT_FLAG_MOUSE_EMUL) == 0) {
			Input_HandleInput(Mouse_CheckButtons(newButtonState));
		}

		if (g_mouseMode != INPUT_MOUSE_MODE_PLAY && g_mouseLock == 0) {
			Mouse_HandleMovement(newButtonState, mousePosX, mousePosY);
		}
	}
}

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

	g_mouseRegionLeft   = left;
	g_mouseRegionRight  = right;
	g_mouseRegionTop    = top;
	g_mouseRegionBottom = bottom;

	Video_Mouse_SetRegion(left, right, top, bottom);
}

/**
 * Test whether the mouse cursor is at the border or inside the given rectangle.
 * @param left Left edge.
 * @param top  Top edge.
 * @param right Right edge.
 * @param bottom Bottom edge.
 * @return Mouse is at the border or inside the rectangle.
 */
uint16 Mouse_InsideRegion(int16 left, int16 top, int16 right, int16 bottom)
{
	int16 mx, my;
	uint16 inside;

	while (g_mouseLock != 0) sleepIdle();
	g_mouseLock++;

	mx = g_mouseX;
	my = g_mouseY;

	inside = (mx < left || mx > right || my < top || my > bottom) ? 0 : 1;

	g_mouseLock--;
	return inside;
}

void Mouse_SetMouseMode(uint8 mouseMode, const char *filename)
{
	switch (mouseMode) {
		default: break;

		case INPUT_MOUSE_MODE_NORMAL:
			g_mouseMode = mouseMode;
			if (g_mouseFileID != FILE_INVALID) {
				Input_Flags_ClearBits(INPUT_FLAG_KEY_RELEASE);
				File_Close(g_mouseFileID);
				g_mouseFileID = FILE_INVALID;
			}
			g_mouseNoRecordedValue = true;
			break;

		case INPUT_MOUSE_MODE_RECORD:
			if (g_mouseFileID != FILE_INVALID) break;

			File_Delete_Personal(filename);
			File_Create_Personal(filename);

			Tools_RandomLCG_Seed(0x1234);
			Tools_Random_Seed(0x12344321);

			g_mouseFileID = File_Open_Personal(filename, FILE_MODE_READ_WRITE);

			g_mouseMode = mouseMode;

			Input_Flags_SetBits(INPUT_FLAG_KEY_RELEASE);

			Input_HandleInput(0x2D);
			break;

		case INPUT_MOUSE_MODE_PLAY:
			if (g_mouseFileID == FILE_INVALID) {
				g_mouseFileID = File_Open_Personal(filename, FILE_MODE_READ);
				if (g_mouseFileID == FILE_INVALID) {
					Error("Cannot open '%s', replay log is impossible.\n", filename);
					return;
				}

				Tools_RandomLCG_Seed(0x1234);
				Tools_Random_Seed(0x12344321);
			}

			g_mouseNoRecordedValue = true;

			File_Read(g_mouseFileID, &g_mouseInputValue, 2);
			if (File_Read(g_mouseFileID, &g_mouseRecordedTimer, 2) != 2) break;;

			if ((g_mouseInputValue >= 0x41 && g_mouseInputValue <= 0x44) || g_mouseInputValue == 0x2D) {
				/* 0x2D == '-' 0x41 == 'A' [...] 0x44 == 'D' */
				File_Read(g_mouseFileID, &g_mouseRecordedX, 2);
				if (File_Read(g_mouseFileID, &g_mouseRecordedY, 2) == 2) {
					g_mouseX = g_mouseRecordedX;
					g_mouseY = g_mouseRecordedY;
					g_prevButtonState = 0;

					GUI_Mouse_Hide_Safe();
					GUI_Mouse_Show_Safe();

					g_mouseNoRecordedValue = false;
					break;
				}
				g_mouseNoRecordedValue = true;
				break;
			}
			g_mouseNoRecordedValue = false;
			break;
	}

	g_timerInput = 0;
	g_mouseMode = mouseMode;
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
	change = newButtonState ^ g_prevButtonState;
	if (change == 0) return result;

	g_prevButtonState = newButtonState & 0xFF;

	if ((change & 0x2) != 0) {
		result = 0x42;
		if ((newButtonState & 0x2) == 0) {
			result |= 0x800;	/* RELEASE */
		}
	}

	if ((change & 0x1) != 0) {
		result = 0x41;
		if ((newButtonState & 0x1) == 0) {
			result |= 0x800;	/* RELEASE */
		}
	}

	return result;
}

/**
 * If the mouse has moved, update its coordinates, and update the region flags.
 * @param mouseX New mouse X coordinate.
 * @param mouseY New mouse Y coordinate.
 */
static void Mouse_CheckMovement(uint16 mouseX, uint16 mouseY)
{
	if (g_mouseHiddenDepth == 0 && (g_mousePrevX != mouseX || g_mousePrevY != mouseY)) {

		if ((g_regionFlags & 0xC000) != 0xC000) {
			GUI_Mouse_Hide();

			if ((g_regionFlags & 0x8000) == 0) {
				GUI_Mouse_Show();
				g_mousePrevX = mouseX;
				g_mousePrevY = mouseY;
				g_mouseLock = 0;
				return;
			}
		}

		if (mouseX >= g_regionMinX && mouseX <= g_regionMaxX &&
				mouseY >= g_regionMinY && mouseY <= g_regionMaxY) {
			g_regionFlags |= 0x4000;
		} else {
			GUI_Mouse_Show();
		}
	}

	g_mousePrevX = mouseX;
	g_mousePrevY = mouseY;
	g_mouseLock = 0;
}

/**
 * Handle movement of the mouse.
 * @param newButtonState State of the mouse buttons.
 * @param mouseX Horizontal position of the mouse cursor.
 * @param mouseY Vertical position of the mouse cursor.
 */
void Mouse_HandleMovement(uint16 newButtonState, uint16 mouseX, uint16 mouseY)
{
	g_mouseLock = 0x1;

	g_mouseX = mouseX;
	g_mouseY = mouseY;
	if (g_mouseMode != INPUT_MOUSE_MODE_PLAY && g_mouseMode != INPUT_MOUSE_MODE_NORMAL && (g_inputFlags & INPUT_FLAG_MOUSE_EMUL) == 0) {
		Input_HandleInput(Mouse_CheckButtons(newButtonState));
	}

	Mouse_CheckMovement(mouseX, mouseY);
}

/**
 * Perform handling of mouse movement iff the mouse position changed.
 * @param newButtonState New button state.
 */
void Mouse_HandleMovementIfMoved(uint16 newButtonState)
{
	if (abs((int16)g_mouseX - (int16)g_mousePrevX) >= 1 ||
			abs((int16)g_mouseY - (int16)g_mousePrevY) >= 1) {
		Mouse_HandleMovement(newButtonState, g_mouseX, g_mouseY);
	}
}

