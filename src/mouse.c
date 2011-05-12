/* $Id$ */

/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "mouse.h"
#include "os/math.h"
#include "gfx.h"
#include "input/input.h"
#include "file.h"

extern void f__2B6C_0137_0020_C73F();
extern void f__2B6C_0169_001E_6939();
extern void emu_Input_HandleInput();
extern void emu_Tools_Var79E4_Init();

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

			emu_push(0x1234);
			emu_push(emu_cs); emu_push(0x0090); emu_cs = 0x01F7; emu_Tools_Var79E4_Init();
			emu_sp += 2;

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

				emu_push(0x1234);
				emu_push(emu_cs); emu_push(0x00FD); emu_cs = 0x01F7; emu_Tools_Var79E4_Init();
				emu_sp += 2;

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

					emu_push(emu_cs); emu_push(0x01B3); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
					emu_push(emu_cs); emu_push(0x01B8); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();

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
