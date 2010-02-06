/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "unknown.h"

/**
 * C-ified function of f__07C4_001A_0045_DCB4().
 *
 * @name emu_Unknown_07C4_001A
 * @implements 07C4:001A:0045:DCB4 ()
 */
void emu_Unknown_07C4_001A()
{
	static uint8 returnValues[16] = {0x20, 0x40, 0x20, 0x00, 0xE0, 0xC0, 0xE0, 0x00, 0x60, 0x40, 0x60, 0x80, 0xA0, 0xC0, 0xA0, 0x80};

	int16 x1, y1, x2, y2;
	int16 dx, dy;
	uint16 index;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	x1 = emu_get_memory16(emu_ss, emu_sp, 0x0);
	y1 = emu_get_memory16(emu_ss, emu_sp, 0x2);
	x2 = emu_get_memory16(emu_ss, emu_sp, 0x4);
	y2 = emu_get_memory16(emu_ss, emu_sp, 0x6);

	index = 0;

	dy = y1 - y2;
	if (dy < 0) {
		index |= 0x8;
		dy = -dy;
	}

	dx = x2 - x1;
	if (dx < 0) {
		index |= 0x4;
		dx = -dx;
	}

	if (dx >= dy) {
		if (((dx + 1) / 2) > dy) index |= 0x1;
	} else {
		index |= 0x2;
		if (((dy + 1) / 2) > dx) index |= 0x1;
	}

	emu_ax = returnValues[index];
}
