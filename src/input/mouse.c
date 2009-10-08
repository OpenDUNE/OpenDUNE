/* $Id$ */

#include <stdio.h>
#if defined(_MSC_VER)
	#include <windows.h>
	#define usleep Sleep
#else
	#define __USE_BSD
	#include <unistd.h>
#endif /* _MSC_VER */
#include <assert.h>
#include "types.h"
#include "libemu.h"
#include "../../decompiled/decompiled.h"
#include "../global.h"
#include "input.h"

/**
 * When entering the mouse handler, a few registers need to be stored savely.
 *  This function takes care of that. Calling Mouse_ExitHandler() recovers the
 *  state.
 * @note It reserves space for 2 local variables.
 */
static void emu_Input_Mouse_EnterHandler()
{
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_sp -= 4; /* 2 local variables */

	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_push(emu_es);
	emu_push(emu_di);
}

/**
 * When leaving the mouse handler, a few registers need to be restored.
 *  This function takes care of that.
 *
 * @name emu_Input_Mouse_ExitHandler
 * @implements 29A3:01C3:000C:CF33 ()
 */
static void emu_Input_Mouse_ExitHandler()
{
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
	uint8 oldState = g_global->prevButtonState;
	g_global->prevButtonState = newState;

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
static void emu_Input_Mouse_HandleButtons()
{
	emu_ax = Input_Mouse_CheckButtons(emu_get_memory16(emu_ss, emu_bp, -0x4));

	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00B9); emu_cs = 0x29E8; emu_Input_HandleInputSafe();
	emu_sp += 0x2; /* Remove entry from stack */
}

/**
 * Check if the mouse moved, and update the cursor if needed. This includes
 *  a check if it is outside the region defined.
 *
 * @name emu_Input_Mouse_CheckMovement
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
static void emu_Input_Mouse_CheckMovement()
{
	/* XXX -- It avoids mouse movement .. but what is it? */
	if (g_global->variable_706A != 0x0) return;

	/* Did the mouse move? */
	if (g_global->mousePrevX == emu_cx && g_global->mousePrevY == emu_dx) return;

	if ((g_global->regionFlags & 0xC000) != 0xC000) {
		/* XXX -- Parameters for the next function .. but what is in them? */
		emu_push(g_global->variable_7094);
		emu_push(g_global->variable_7092);

		/* Call based on memory/register values */
		emu_ip = g_global->callbackBeforeMouse.s.ip;
		emu_push(emu_cs);
		emu_cs = g_global->callbackBeforeMouse.s.cs;
		emu_push(0x0169);
		switch ((emu_cs << 16) + emu_ip) {
			case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
			default:
				/* In case we don't know the call point yet, call the dynamic call */
				emu_last_cs = 0x29A3; emu_last_ip = 0x0165; emu_last_length = 0x002A; emu_last_crc = 0xCFEE;
				emu_call();
				return;
		}
		emu_sp += 0x4; /* Release the two stack values */

		emu_push(emu_cs); emu_push(0x0171); emu_cs = 0x2B6C; f__2B6C_000E_0045_C1FE();

		/* Call based on memory/register values */
		emu_ip = g_global->callbackAfterMouse.s.ip;
		emu_push(emu_cs);
		emu_cs = g_global->callbackAfterMouse.s.cs;
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
	if ((g_global->regionFlags & 0x8000) == 0x8000) {
		if (emu_cx >= g_global->regionMinX ||
		    emu_cx <= g_global->regionMaxX ||
		    emu_dx >= g_global->regionMinY ||
		    emu_dx <= g_global->regionMaxY) {
			g_global->regionFlags |= 0x4000;
			return;
		}
	}

	/* XXX -- Parameters for the next function .. but what is in them? */
	emu_push(g_global->variable_7094);
	emu_push(g_global->variable_7092);

	/* Call based on memory/register values */
	emu_ip = g_global->callbackBeforeMouse.s.ip;
	emu_push(emu_cs);
	emu_cs = g_global->callbackBeforeMouse.s.cs;
	emu_push(0x01A9);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60FD7: f__22A6_0FD7_0043_ACF9(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x29A3; emu_last_ip = 0x01A5; emu_last_length = 0x000C; emu_last_crc = 0x9EC2;
			emu_call();
			return;
	}
	emu_sp += 0x4; /* Release the two stack values */

	emu_push(emu_cs); emu_push(0x01B1); emu_cs = 0x2B6C; f__2B6C_006E_002E_4FBC();

	/* Call based on memory/register values */
	emu_ip = g_global->callbackAfterMouse.s.ip;
	emu_push(emu_cs);
	emu_cs = g_global->callbackAfterMouse.s.cs;
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
 * @name emu_Input_Mouse_HandleMovement
 * @implements 29A3:00CD:0066:C700 ()
 * @implements 29A3:00F3:0040:B81C
 * @implements 29A3:010F:0024:C7FA
 */
static void emu_Input_Mouse_HandleMovement()
{
	g_global->mouseLock = 1;

	/* Snap to grid on x-axis */
	if (g_global->snapX != 0x0) {
		emu_cx -= g_global->snapGreyX;
		emu_cx = (emu_cx / g_global->snapX) * g_global->snapX;
		emu_cx += g_global->snapGreyX;
	}

	/* Snap to grid on y-axis */
	if (g_global->snapY != 0x0) {
		emu_dx -= g_global->snapGreyY;
		emu_dx = (emu_dx / g_global->snapY) * g_global->snapY;
		emu_dx += g_global->snapGreyY;
	}

	g_global->mouseX = emu_cx;
	g_global->mouseY = emu_dx;

	if (g_global->mouseMode == INPUT_MOUSE_MODE_1 && (g_global->inputFlags & INPUT_FLAG_NO_CLICK) == 0) {
		emu_Input_Mouse_HandleButtons();
	}

	emu_Input_Mouse_CheckMovement();

	g_global->mousePrevX = emu_cx;
	g_global->mousePrevY = emu_dx;
	g_global->mouseLock = 0;
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
 * @name emu_Input_Mouse_EventHandler
 * @implements 29A3:0054:005C:47DC ()
 * @implements 29A3:0089:0027:69FF
 * @implements 29A3:009B:0015:C95F
 * @implements 29A3:00B0:0009:B56A
 * @implements 29A3:00B9:0014:EEB4
 */
void emu_Input_Mouse_EventHandler()
{
	emu_Input_Mouse_EnterHandler();

	/* Store the mouse-button and event-type on the stack */
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_bx;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;

	/* Check various of things, and if they do not validate, exit the mouse routine */
	/* XXX -- Most of these checks are yet unknown in their function */
	if (g_global->variable_7097 != 0x00) { emu_Input_Mouse_ExitHandler(); return; }
	if (g_global->variable_7098 == 0x00) { emu_Input_Mouse_ExitHandler(); return; }
	if (g_global->mouseMode == INPUT_MOUSE_MODE_1) {
		if (g_global->variable_986C != 0x00) { emu_Input_Mouse_ExitHandler(); return; }
	}

	if (g_global->doubleWidth != 0) emu_cx = emu_cx / 2;
	if (emu_cx > 319) emu_cx = 319;

	if (g_global->mouseMode == INPUT_MOUSE_MODE_NORMAL && (g_global->inputFlags & INPUT_FLAG_NO_CLICK) == 0) {
		emu_Input_Mouse_HandleButtons();
	}

	/* XXX -- More checks */
	if (g_global->mouseMode == INPUT_MOUSE_MODE_2) { emu_Input_Mouse_ExitHandler(); return; }
	if (g_global->mouseLock != 0) { emu_Input_Mouse_ExitHandler(); return; }

	emu_Input_Mouse_HandleMovement();
	emu_Input_Mouse_ExitHandler();
}

/**
 * Initialize the mouse.
 *
 * @name emu_Input_Mouse_Init
 * @implements 29A3:0224:0009:AA5D ()
 * @implements 29A3:022D:003C:7E93
 * @implements 29A3:0269:0005:5C73
 * @implements 29A3:026E:0010:A6DC
 * @implements 29A3:027E:002A:70B8
 * @implements 29A3:02A8:000D:6EF0
 * @implements 29A3:02B5:0008:B689
 */
void emu_Input_Mouse_Init()
{
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_es);

	/* Get interrupt 0x33 CS:IP */
	emu_ax = 0x3533;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x022D); Interrupt_DOS();

	g_global->mouseX = 160;
	g_global->mouseY = 100;
	g_global->regionFlags = 0;
	g_global->variable_706A = 1;
	g_global->variable_706E = 0x13F;
	g_global->variable_7072 = 0xC7;
	g_global->mouseInstalled = 1;
	g_global->variable_7097 = 1;

	/* Get the current position of the mouse */
	emu_ax = 0x3;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x027E); Interrupt_Mouse();

	g_global->doubleWidth = 0;
	if (emu_cx != 160) g_global->doubleWidth = 1;

	/* Set the current position of the mouse */
	emu_ax = 0x4;
	emu_cx = (g_global->doubleWidth != 0) ? 320 : 160;
	emu_dx = 100;
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x02A8); Interrupt_Mouse();

	/* Set mouse-event callback */
	emu_ax = 0xC;
	emu_cx = 0x1F; /* Mask, catch all events */
	emu_dx = 0x54; /* IP of callback */
	emu_es = emu_cs; /* CS of callback */
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x02B5); Interrupt_Mouse();

	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	/* Mouse installed and ready for use */
	emu_ax = 0x1;
	return;
}

/**
 * Set the callback to no longer receive any event from the mouse handler.
 *
 * @name emu_Input_Mouse_CallbackClear
 * @implements 29A3:02BD:0018:A1B5 ()
 * @implements 29A3:02D5:0005:CE8B
 */
void emu_Input_Mouse_CallbackClear()
{
	emu_push(emu_ax);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_es);

	if (g_global->mouseInstalled != 0) {
		emu_ax = 0xC;
		emu_cx = 0x0; /* Mask, catch no events */
		emu_dx = 0x54; /* IP of callback */
		emu_es = emu_cs; /* CS of callback */
		emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x02D5); Interrupt_Mouse();
	}

	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_ax);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Check if the mouse is inside a region.
 *
 * @name emu_Input_Mouse_InsideRegion
 * @implements 29A3:02DA:003B:81C9 ()
 * @implements 29A3:02EE:0027:7721
 * @implements 29A3:0315:000E:51CF
 * @implements 29A3:0318:000B:532F
 */
void emu_Input_Mouse_InsideRegion()
{
	while (g_global->mouseLock != 0) usleep(1);

	g_global->mouseLock++;

	/* Check if the mouse is inside the region given by the parameters */
	emu_ax = 1;
	if (g_global->mouseX < emu_get_memory16(emu_ss, emu_bp,  0x6) ||
	    g_global->mouseX > emu_get_memory16(emu_ss, emu_bp,  0x8) ||
	    g_global->mouseY < emu_get_memory16(emu_ss, emu_bp,  0xA) ||
	    g_global->mouseY > emu_get_memory16(emu_ss, emu_bp,  0xC)) {
		emu_ax = 0;
	}

	g_global->mouseLock--;

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
