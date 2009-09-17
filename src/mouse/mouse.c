#include <assert.h>
#include "types.h"
#include "libemu.h"
#include "../../decompiled/decompiled.h"

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
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Check the state of the mouse button.
 *
 * @return If no change, 0x2D. If left click 0x41. If right click 0x42. If
 *  mouse down 0x800 flag is set.
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
	if ((oldState & 0x01) != 0 && (newState & 0x01) == 0) return 0x41;
	if ((oldState & 0x01) == 0 && (newState & 0x01) != 0) return 0x800 | 0x41;

	/* Right button */
	if ((oldState & 0x02) != 0 && (newState & 0x02) == 0) return 0x41;
	if ((oldState & 0x02) == 0 && (newState & 0x02) != 0) return 0x800 | 0x41;

	/* This should never be reached */
	assert(!"Invalid mouse button state");
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

	/* XXX -- More checks. I guess it tells if the mouse is visible and if it can interact */
	if (emu_get_memory8(emu_ds, 0x00,  0x7010) == 0x00 && (emu_get_memory16(emu_ds, 0x00,  0x700E) & 0x1000) == 0) {
		emu_ax.x = Mouse_CheckButtons(emu_get_memory16(emu_ss, emu_bp, -0x4));

		emu_push(emu_ax.x);
		emu_push(emu_cs); emu_push(0x00B9); emu_cs = 0x29E8; f__29E8_0A4A_0040_5428();
		emu_sp += 0x2; // Remove entry from stack
	}

	/* XXX -- More checks */
	if (emu_get_memory8(emu_ds, 0x00,  0x7010) == 0x02) { Mouse_ExitHandler(); return; }
	if (emu_get_memory16(emu_ds, 0x00,  0x705E) != 0x0000) { Mouse_ExitHandler(); return; }

	f__29A3_00CD_0066_C700();
}
