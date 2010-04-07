/* $Id$ */

/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "global.h"
#include "mouse.h"
#include "os/math.h"

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

	left   = clamp(left,   0, 319);
	right  = clamp(right,  0, 319);
	top    = clamp(top,    0, 199);
	bottom = clamp(bottom, 0, 199);

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
