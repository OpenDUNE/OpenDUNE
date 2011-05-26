/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "widget.h"

/**
 * Emulator wrapper around emu_GUI_Widget_HandleEvents().
 *
 * @name emu_GUI_Widget_HandleEvents
 * @implements B4A2:0039:000B:EC51 ()
 */
void emu_GUI_Widget_HandleEvents()
{
	csip32 wcsip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	wcsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	emu_ax = GUI_Widget_HandleEvents((wcsip.csip == 0x0) ? NULL : (Widget *)emu_get_memorycsip(wcsip));
}

/**
 * Emulator wrapper around GUI_Widget_Allocate()
 *
 * @name emu_GUI_Widget_Allocate
 * @implements B4B8:0ED9:001E:DC63 ()
 */
void emu_GUI_Widget_Allocate()
{
	uint16 index;
	uint16 shortcut;
	uint16 offsetX;
	uint16 offsetY;
	uint16 spriteID;
	uint16 stringID;
	uint16 variable_3A;
	csip32 retcsip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	index       = emu_get_memory16(emu_ss, emu_sp, 0x0);
	shortcut    = emu_get_memory16(emu_ss, emu_sp, 0x2);
	offsetX     = emu_get_memory16(emu_ss, emu_sp, 0x4);
	offsetY     = emu_get_memory16(emu_ss, emu_sp, 0x6);
	spriteID    = emu_get_memory16(emu_ss, emu_sp, 0x8);
	stringID    = emu_get_memory16(emu_ss, emu_sp, 0xA);
	variable_3A = emu_get_memory16(emu_ss, emu_sp, 0xC);

	GUI_Widget_Allocate(index, shortcut, offsetX, offsetY, spriteID, stringID, variable_3A, &retcsip);

	emu_dx = retcsip.s.cs;
	emu_ax = retcsip.s.ip;
}

/**
 * Emulator wrapper around GUI_Widget_Link().
 *
 * @name emu_GUI_Widget_Link
 * @implements B48B:0000:001E:7E97 ()
 */
void emu_GUI_Widget_Link()
{
	Widget *first;
	csip32 w1csip;
	csip32 w2csip;
	csip32 fcsip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	w1csip = emu_get_csip32(emu_ss, emu_sp, 0x0);
	w2csip = emu_get_csip32(emu_ss, emu_sp, 0x4);

	first = GUI_Widget_Link((w1csip.csip == 0x0) ? NULL : (Widget *)emu_get_memorycsip(w1csip), (w2csip.csip == 0x0) ? NULL : (Widget *)emu_get_memorycsip(w2csip));
	fcsip = emu_Global_GetCSIP(first);

	emu_dx = fcsip.s.cs;
	emu_ax = fcsip.s.ip;
}
