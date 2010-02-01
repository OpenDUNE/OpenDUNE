/* $Id$ */

#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "gui.h"

extern void emu_GUI_DrawLine();

/**
 * Draw a wired rectangle.
 * @param left The left position of the rectangle.
 * @param top The top position of the rectangle.
 * @param right The right position of the rectangle.
 * @param bottom The bottom position of the rectangle.
 * @param colour The colour of the rectangle.
 */
void GUI_DrawWiredRectangle(uint16 left, uint16 top, uint16 right, uint16 bottom, uint16 colour)
{
	emu_push(colour);
	emu_push(top);
	emu_push(right);
	emu_push(top);
	emu_push(left);
	emu_push(emu_cs); emu_push(0x001E); emu_cs = 0x22A6; emu_GUI_DrawLine();
	emu_sp += 10;

	emu_push(colour);
	emu_push(bottom);
	emu_push(right);
	emu_push(bottom);
	emu_push(left);
	emu_push(emu_cs); emu_push(0x0038); emu_cs = 0x22A6; emu_GUI_DrawLine();
	emu_sp += 10;

	emu_push(colour);
	emu_push(bottom);
	emu_push(left);
	emu_push(top);
	emu_push(left);
	emu_push(emu_cs); emu_push(0x004E); emu_cs = 0x22A6; emu_GUI_DrawLine();
	emu_sp += 10;

	emu_push(colour);
	emu_push(bottom);
	emu_push(right);
	emu_push(top);
	emu_push(right);
	emu_push(emu_cs); emu_push(0x0068); emu_cs = 0x22A6; emu_GUI_DrawLine();
	emu_sp += 10;
}
