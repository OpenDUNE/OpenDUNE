/* $Id$ */

/** @file decompiled/cs__29A3.c Decompiled segment 29A3. */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Mouse_EventHandler()
 *
 * @name emu_Mouse_EventHandler
 * @implements 29A3:0054:005C:47DC ()
 * @implements 29A3:0089:0027:69FF
 * @implements 29A3:009B:0015:C95F
 * @implements 29A3:00B0:0009:B56A
 * @implements 29A3:00B9:0014:EEB4
 * @implements 29A3:00BC:0011:463C
 * @implements 29A3:00CA:0003:9D1D
 * @implements 29A3:01C3:000C:CF33
 *
 * Called From: 0000:0000:0000:0000
 */
void emu_Mouse_EventHandler()
{
	uint16 newButtonState, mouseX, mouseY;

	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);

	newButtonState = emu_bx;
	mouseX         = emu_cx;
	mouseY         = emu_dx;

	if (g_global->variable_7097 == 0 && g_global->variable_7098 != 0 &&
			(g_global->mouseMode != INPUT_MOUSE_MODE_RECORD || g_global->ignoreInput == 0)) {

		if (g_global->doubleWidth == 0x1) mouseX /= 2;

		if (mouseX > SCREEN_WIDTH - 1) mouseX = SCREEN_WIDTH - 1;


		if (g_global->mouseMode == INPUT_MOUSE_MODE_NORMAL && (g_global->inputFlags & 0x1000) == 0) {
			Input_HandleInput(Mouse_CheckButtons(newButtonState));
		}

		if (g_global->mouseMode != INPUT_MOUSE_MODE_PLAY && g_global->mouseLock == 0x0) {
			Mouse_HandleMovement(newButtonState, mouseX, mouseY);
		}
	}

	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
