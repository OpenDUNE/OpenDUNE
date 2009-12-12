/* $Id: emu_B53B.c 744 2009-12-12 15:21:54Z truebrain $ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "gui.h"

/**
 * Emulator wrapper around GUI_EditBox_BlinkCursor().
 *
 * @name emu_GUI_EditBox_BlinkCursor
 * @implements B527:02CB:005E:FFA4 ()
 * @implements B527:02EC:003D:CE40
 * @implements B527:0301:0028:A290
 * @implements B527:0324:0005:6168
 * @implements B527:0329:000C:BD5E
 * @implements B527:0335:0015:ADC3
 * @implements B527:0338:0012:356E
 * @implements B527:034A:0015:34F5
 * @implements B527:035F:0008:2BE5
 * @implements B527:0367:0004:DE52
 */
void emu_GUI_EditBox_BlinkCursor()
{
	uint16 positionX;
	uint16 resetBlink;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	positionX  = emu_get_memory16(emu_ss, emu_sp, 0x0);
	resetBlink = emu_get_memory16(emu_ss, emu_sp, 0x2);

	GUI_EditBox_BlinkCursor(positionX, (resetBlink == 0) ? true : false);
}
