/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "gui.h"

/**
 * Emulator wrapper around GUI_EditBox().
 *
 * @name emu_GUI_EditBox
 * @implements B527:0000:0016:BBD9 ()
 */
void emu_GUI_EditBox()
{
	csip32 text;
	csip32 wcsip;
	csip32 unknown3;
	uint16 maxLength;
	uint16 unknown1;
	uint16 unknown4;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	text      =   emu_get_csip32(emu_ss, emu_sp, 0x0);
	maxLength = emu_get_memory16(emu_ss, emu_sp, 0x4);
	unknown1  = emu_get_memory16(emu_ss, emu_sp, 0x6);
	wcsip     =   emu_get_csip32(emu_ss, emu_sp, 0x8);
	unknown3  =   emu_get_csip32(emu_ss, emu_sp, 0xC);
	unknown4  = emu_get_memory16(emu_ss, emu_sp, 0x10);

	emu_ax = GUI_EditBox(text, maxLength, unknown1, wcsip, unknown3, unknown4);
}
