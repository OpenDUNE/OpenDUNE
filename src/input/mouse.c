/* $Id$ */

#include <stdio.h>
#include <assert.h>
#include "types.h"
#include "libemu.h"
#include "../../decompiled/decompiled.h"
#include "input.h"

MouseData *g_mouse = NULL;

/**
 * Initialize the mouse system.
 *
 * @init system_Init_Mouse
 */
void System_Init_Mouse()
{
	g_mouse = (MouseData *)&emu_get_memory8(0x353F, 0x0, 0x0);
}

/**
 * When entering the mouse handler, a few registers need to be stored savely.
 *  This function takes care of that. Calling Mouse_ExitHandler() recovers the
 *  state.
 * @note It reserves space for 2 local variables.
 */
static void Input_Mouse_EnterHandler()
{
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_sp -= 4; // 2 local variables

	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
}

/**
 * When leaving the mouse handler, a few registers need to be restored.
 *  This function takes care of that.
 *
 * @name Input_Mouse_ExitHandler
 * @implements 29A3:01C3:000C:CF33 ()
 */
static void Input_Mouse_ExitHandler()
{
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
}

/**
 * Check the state of the mouse button.
 *
 * @return If no change, 0x2D. If left click 0x41. If right click 0x42. If
 *  mouse button released flag 0x800 is set.
 *
 * @name Input_Mouse_CheckButtons
 * @implements 29A3:000C:0048:00FE
 * @implements 29A3:0039:001B:7C5C
 * @implements 29A3:004C:0008:FC68
 */
static uint16 Input_Mouse_CheckButtons(uint8 newState)
{
	uint8 oldState = g_mouse->prevButtonState;
	g_mouse->prevButtonState = newState;

	if (oldState == newState) return 0x2D;

	/* Left button */
	if ((oldState & 0x01) == 0 && (newState & 0x01) != 0) return 0x41;
	if ((oldState & 0x01) != 0 && (newState & 0x01) == 0) return 0x800 | 0x41;

	/* Right button */
	if ((oldState & 0x02) == 0 && (newState & 0x02) != 0) return 0x42;
	if ((oldState & 0x02) != 0 && (newState & 0x02) == 0) return 0x800 | 0x42;

	/* This should never be reached */
	assert(!"Invalid mouse button state");
}

/**
 * Handle the pressing and releasing of mouse buttons.
 */
static void Input_Mouse_HandleButtons()
{
	emu_ax.x = Input_Mouse_CheckButtons(emu_get_memory16(emu_ss, emu_bp, -0x4));

	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00B9); emu_cs = 0x29E8; Input_HandleInputSafe();
	emu_sp += 0x2; // Remove entry from stack
}

/**
 * Check if the mouse moved, and update the cursor if needed. This includes
 *  a check if it is outside the region defined.
 *
 * @name Input_Mouse_CheckMovement
 * @implements 29A3:013F:002A:CFEE ()
 * @implements 29A3:0152:0017:5360
 * @implements 29A3:0169:0008:63C3
 * @implements 29A3:0171:0004:C0E6
 * @implements 29A3:0175:0028:0C94
 * @implements 29A3:019D:000C:9EC2
 * @implements 29A3:01A9:0008:63C5
 * @implements 29A3:01B1:0004:C0E6
 * @implements 29A3:01B5:001A:784E
 */
static void Input_Mouse_CheckMovement()
{
	/* XXX -- It avoids mouse movement .. but what is it? */
	if (g_mouse->variable_706A != 0x0) return;

	/* Did the mouse move? */
	if (g_mouse->prevX == emu_cx.x && g_mouse->prevY == emu_dx.x) return;

	if ((g_mouse->flags & 0xC000) != 0xC000) {
		/* XXX -- Parameters for the next function .. but what is in them? */
		emu_push(g_mouse->variable_7094);
		emu_push(g_mouse->variable_7092);

		/* Call based on memory/register values */
		emu_ip = g_mouse->callbackBeforeChange & 0xFFFF;
		emu_push(emu_cs);
		emu_cs = g_mouse->callbackBeforeChange >> 16;
		emu_push(0x0169);
		switch ((emu_cs << 16) + emu_ip) {
			case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
			default:
				/* In case we don't know the call point yet, call the dynamic call */
				emu_last_cs = 0x29A3; emu_last_ip = 0x0165; emu_last_length = 0x002A; emu_last_crc = 0xCFEE;
				emu_call();
				return;
		}
		emu_sp += 0x4; // Release the two stack values

		emu_push(emu_cs); emu_push(0x0171); emu_cs = 0x2B6C; f__2B6C_000E_0045_C1FE();

		/* Call based on memory/register values */
		emu_ip = g_mouse->callbackAfterChange & 0xFFFF;
		emu_push(emu_cs);
		emu_cs = g_mouse->callbackAfterChange >> 16;
		emu_push(0x0175);
		switch ((emu_cs << 16) + emu_ip) {
			case 0x22A60FAE: f__22A6_0FAE_0027_2378(); break;
			default:
				/* In case we don't know the call point yet, call the dynamic call */
				emu_last_cs = 0x29A3; emu_last_ip = 0x0171; emu_last_length = 0x0004; emu_last_crc = 0xC0E6;
				emu_call();
				return;
		}
	}

	/* Check if the cursor is still inside a certain region */
	if ((g_mouse->flags & 0x8000) == 0x8000) {
		if (emu_cx.x >= g_mouse->regionMinX ||
		    emu_cx.x <= g_mouse->regionMaxX ||
		    emu_dx.x >= g_mouse->regionMinY ||
		    emu_dx.x <= g_mouse->regionMaxY) {
			g_mouse->flags |= 0x4000;
			return;
		}
	}

	/* XXX -- Parameters for the next function .. but what is in them? */
	emu_push(g_mouse->variable_7094);
	emu_push(g_mouse->variable_7092);

	/* Call based on memory/register values */
	emu_ip = g_mouse->callbackBeforeChange & 0xFFFF;
	emu_push(emu_cs);
	emu_cs = g_mouse->callbackBeforeChange >> 16;
	emu_push(0x01A9);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29A3; emu_last_ip = 0x01A5; emu_last_length = 0x000C; emu_last_crc = 0x9EC2;
			emu_call();
			return;
	}
	emu_sp += 0x4; // Release the two stack values

	emu_push(emu_cs); emu_push(0x01B1); emu_cs = 0x2B6C; f__2B6C_006E_002E_4FBC();

	/* Call based on memory/register values */
	emu_ip = g_mouse->callbackAfterChange & 0xFFFF;
	emu_push(emu_cs);
	emu_cs = g_mouse->callbackAfterChange >> 16;
	emu_push(0x01B5);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FAE: f__22A6_0FAE_0027_2378(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29A3; emu_last_ip = 0x01B1; emu_last_length = 0x0004; emu_last_crc = 0xC0E6;
			emu_call();
			return;
	}

	return;
}

/**
 * Handle the movement of the mouse.
 *
 * @name Input_Mouse_HandleMovement
 * @implements 29A3:00CD:0066:C700 ()
 * @implements 29A3:00F3:0040:B81C
 * @implements 29A3:010F:0024:C7FA
 */
static void Input_Mouse_HandleMovement()
{
	g_mouse->lock = 1;

	/* Snap to grid on x-axis */
	if (g_mouse->snapX != 0x0) {
		emu_cx.x -= g_mouse->snapGreyX;
		emu_cx.x = (emu_cx.x / g_mouse->snapX) * g_mouse->snapX;
		emu_cx.x += g_mouse->snapGreyX;
	}

	/* Snap to grid on y-axis */
	if (g_mouse->snapY != 0x0) {
		emu_dx.x -= g_mouse->snapGreyY;
		emu_dx.x = (emu_dx.x / g_mouse->snapY) * g_mouse->snapY;
		emu_dx.x += g_mouse->snapGreyY;
	}

	g_mouse->newX = emu_cx.x;
	g_mouse->newY = emu_dx.x;

	if (g_mouse->mode == 1 && (g_mouse->variable_700E & 0x1000) == 0) {
		Input_Mouse_HandleButtons();
	}

	Input_Mouse_CheckMovement();

	g_mouse->prevX = emu_cx.x;
	g_mouse->prevY = emu_dx.x;
	g_mouse->lock = 0;
}

/**
 * Handle mouse events.
 *  When the mouse moves or a mouse button is clicked, this function is called
 *  from the hardware.
 * The register values:
 *  ax - event-type
 *  bx - left button (0x1) / right button (0x2)
 *  cx - x-position
 *  dx - y-position
 *  di - delta x
 *  si - delta y
 *
 * @name Input_Mouse_EventHandler
 * @implements 29A3:0054:005C:47DC ()
 * @implements 29A3:0089:0027:69FF
 * @implements 29A3:009B:0015:C95F
 * @implements 29A3:00B0:0009:B56A
 * @implements 29A3:00B9:0014:EEB4
 */
void Input_Mouse_EventHandler()
{
	Input_Mouse_EnterHandler();

	/* Store the mouse-button and event-type on the stack */
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_bx.x;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax.x;

	/* Check various of things, and if they do not validate, exit the mouse routine */
	/* XXX -- Most of these checks are yet unknown in their function */
	if (g_mouse->variable_7097 != 0x00) { Input_Mouse_ExitHandler(); return; }
	if (g_mouse->variable_7098 == 0x00) { Input_Mouse_ExitHandler(); return; }
	if (g_mouse->mode == 1) {
		if (g_mouse->variable_986C != 0x00) { Input_Mouse_ExitHandler(); return; }
	}

	/* For some screen modes the x axis is doubled in value (so 640x200) */
	if (g_mouse->variable_7068 == 0x1) emu_cx.x >>= 1;

	if (emu_cx.x > 319) emu_cx.x = 319;

	if (g_mouse->mode == 0 && (g_mouse->variable_700E & 0x1000) == 0) {
		Input_Mouse_HandleButtons();
	}

	/* XXX -- More checks */
	if (g_mouse->mode == 2) { Input_Mouse_ExitHandler(); return; }
	if (g_mouse->lock != 0) { Input_Mouse_ExitHandler(); return; }

	Input_Mouse_HandleMovement();
	Input_Mouse_ExitHandler();
}
