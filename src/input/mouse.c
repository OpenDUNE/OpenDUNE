#include <assert.h>
#include "types.h"
#include "libemu.h"
#include "../../decompiled/decompiled.h"
#include "input.h"

/**
 * When entering the mouse handler, a few registers need to be stored savely.
 *  This function takes care of that. Calling Mouse_ExitHandler() recovers the
 *  state.
 * @note It reserves space for 2 local variables.
 */
void Mouse_EnterHandler()
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
 * @name Mouse_ExitHandler
 * @implements 29A3:01C3:000C:CF33 ()
 */
void Mouse_ExitHandler()
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
 * @name Mouse_CheckButtons
 * @implements 29A3:000C:0048:00FE
 * @implements 29A3:0039:001B:7C5C
 * @implements 29A3:004C:0008:FC68
 */
uint16 Mouse_CheckButtons(uint8 newState)
{
	uint8 oldState = emu_get_memory8(emu_ds, 0x00,  0x7099);
	emu_get_memory8(emu_ds, 0x00,  0x7099) = newState;

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
void Mouse_HandleButtons()
{
	emu_ax.x = Mouse_CheckButtons(emu_get_memory16(emu_ss, emu_bp, -0x4));

	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00B9); emu_cs = 0x29E8; p__29E8_0A4A_0040_5428();
	emu_sp += 0x2; // Remove entry from stack
}

/**
 * Check if the mouse moved, and update the cursor if needed. This includes
 *  a check if it is outside the region defined.
 *
 * @name Mouse_CheckMovement
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
void Mouse_CheckMovement()
{
	/* XXX -- It avoids mouse movement .. but what is it? */
	if (emu_get_memory16(emu_ds, 0x00,  0x706A) != 0x0) return;

	/* Did the mouse move? */
	if (emu_get_memory16(emu_ds, 0x00,  0x707C) == emu_cx.x && emu_get_memory16(emu_ds, 0x00,  0x707E) == emu_dx.x) return;

	if ((emu_get_memory16(emu_ds, 0x00,  0x7080) & 0xC000) != 0xC000) {
		/* XXX -- Parameters for the next function */
		emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
		emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

		/* Call based on memory/register values */
		emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
		emu_push(emu_cs);
		emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
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
		emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66A4);
		emu_push(emu_cs);
		emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66A6);
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
	if ((emu_get_memory16(emu_ds, 0x00,  0x7080) & 0x8000) == 0x8000) {
		if (emu_cx.x >= emu_get_memory16(emu_ds, 0x00,  0x7082) ||
		    emu_cx.x <= emu_get_memory16(emu_ds, 0x00,  0x7086) ||
		    emu_dx.x >= emu_get_memory16(emu_ds, 0x00,  0x7084) ||
		    emu_dx.x <= emu_get_memory16(emu_ds, 0x00,  0x7088)) {
			emu_get_memory16(emu_ds, 0x00,  0x7080) |= 0x4000;
			return;
		}
	}

	/* XXX -- Parameters for the next function */
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7094));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7092));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66B4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66B6);
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
	emu_ip = emu_get_memory16(emu_ds, 0x00,  0x66A4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, 0x00,  0x66A6);
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
 * @name Mouse_HandleMovement
 * @implements 29A3:00CD:0066:C700 ()
 * @implements 29A3:00F3:0040:B81C
 * @implements 29A3:010F:0024:C7FA
 */
void Mouse_HandleMovement()
{
	emu_get_memory16(emu_ds, 0x00,  0x705E) = 0x1;

	/* Snap to grid on x-axis */
	if (emu_get_memory16(emu_ds, 0x00,  0x6C78) != 0x0) {
		uint16 snap = emu_get_memory16(emu_ds, 0x00,  0x6C78);

		emu_cx.x -= emu_get_memory16(emu_ds, 0x00,  0x6C7C);
		emu_cx.x = (emu_cx.x / snap) * snap;
		emu_cx.x += emu_get_memory16(emu_ds, 0x00,  0x6C7C);
	}

	/* Snap to grid on y-axis */
	if (emu_get_memory16(emu_ds, 0x00,  0x6C7A) != 0x0) {
		uint16 snap = emu_get_memory16(emu_ds, 0x00,  0x6C7A);

		emu_dx.x -= emu_get_memory16(emu_ds, 0x00,  0x6C7E);
		emu_dx.x = (emu_dx.x / snap) * snap;
		emu_dx.x += emu_get_memory16(emu_ds, 0x00,  0x6C7E);
	}

	emu_get_memory16(emu_ds, 0x00,  0x7060) = emu_cx.x;
	emu_get_memory16(emu_ds, 0x00,  0x7062) = emu_dx.x;

	if (emu_get_memory8(emu_ds, 0x00,  0x7010) == 0x01 && (emu_get_memory16(emu_ds, 0x00,  0x700E) & 0x1000) == 0) {
		Mouse_HandleButtons();
	}

	Mouse_CheckMovement();

	emu_get_memory16(emu_ds, 0x00,  0x707C) = emu_cx.x;
	emu_get_memory16(emu_ds, 0x00,  0x707E) = emu_dx.x;
	emu_get_memory16(emu_ds, 0x00,  0x705E) = 0x0;
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
 * @name Mouse_EventHandler
 * @implements 29A3:0054:005C:47DC ()
 * @implements 29A3:0089:0027:69FF
 * @implements 29A3:009B:0015:C95F
 * @implements 29A3:00B0:0009:B56A
 * @implements 29A3:00B9:0014:EEB4
 */
void Mouse_EventHandler()
{
	Mouse_EnterHandler();

	/* Store the mouse-button and event-type on the stack */
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_bx.x;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax.x;

	/* Our data offset */
	emu_ds = 0x353F;

	/* Check various of things, and if they do not validate, exit the mouse routine */
	/* XXX -- Most of these checks are yet unknown in their function */
	if (emu_get_memory8(emu_ds, 0x00,  0x7097) != 0x00) { Mouse_ExitHandler(); return; }
	if (emu_get_memory8(emu_ds, 0x00,  0x7098) == 0x00) { Mouse_ExitHandler(); return; }
	if (emu_get_memory8(emu_ds, 0x00,  0x7010) == 0x01) {
		if (emu_get_memory8(emu_ds, 0x00, -0x6794) != 0x00) { Mouse_ExitHandler(); return; }
	}

	/* For some screen modes the x axis is doubled in value (so 640x200) */
	if (emu_get_memory16(emu_ds, 0x00,  0x7068) == 0x1) emu_cx.x >>= 1;

	if (emu_cx.x > 319) emu_cx.x = 319;

	if (emu_get_memory8(emu_ds, 0x00,  0x7010) == 0x00 && (emu_get_memory16(emu_ds, 0x00,  0x700E) & 0x1000) == 0) {
		Mouse_HandleButtons();
	}

	/* XXX -- More checks */
	if (emu_get_memory8(emu_ds, 0x00,  0x7010) == 0x02) { Mouse_ExitHandler(); return; }
	if (emu_get_memory16(emu_ds, 0x00,  0x705E) != 0x0000) { Mouse_ExitHandler(); return; }

	Mouse_HandleMovement();
	Mouse_ExitHandler();
}
