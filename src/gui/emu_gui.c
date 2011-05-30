/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include <stdarg.h>
#include "types.h"
#include "libemu.h"
#include "gui.h"
#include "mentat.h"
#include "../global.h"

extern void emu_String_sprintf_params();

/**
 * Emulator wrapper around GUI_Mouse_Show().
 *
 * @name emu_GUI_Mouse_Show
 * @implements 2B6C:006E:002E:4FBC ()
 */
void emu_GUI_Mouse_Show()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GUI_Mouse_Show();
}

/**
 * Emulator wrapper around GUI_Mouse_Hide().
 *
 * @name emu_GUI_Mouse_Hide
 * @implements 2B6C:000E:0045:C1FE ()
 */
void emu_GUI_Mouse_Hide()
{
	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	GUI_Mouse_Hide();
}
