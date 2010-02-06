/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "widget.h"

/**
 * Emulator wrapper around GUI_Widget_Draw().
 *
 * @name emu_GUI_Widget_Draw
 * @implements B4A2:0729:0013:2494 ()
 */
void emu_GUI_Widget_Draw()
{
	csip32 wcsip;
	Widget *w;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	wcsip = emu_get_csip32(emu_ss, emu_sp, 0x0);
	if (wcsip.csip == 0x0) return;

	w = (Widget *)emu_get_memorycsip(wcsip);

	GUI_Widget_Draw(w, wcsip);
}

/**
 * Emulator wrapper around emu_GUI_Widget_HandleEvents().
 *
 * @name emu_GUI_Widget_HandleEvents
 * @implements B4A2:0039:000B:EC51 ()
 */
void emu_GUI_Widget_HandleEvents()
{
	csip32 wcsip;
	Widget *w;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	wcsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	w = NULL;
	if (wcsip.csip != 0x0) w = (Widget *)emu_get_memorycsip(wcsip);

	emu_ax = GUI_Widget_HandleEvents(w, wcsip);
}

/**
 * Emulator wrapper around GUI_Widget_ScrollBar_Draw().
 *
 * @name emu_GUI_Widget_ScrollBar_Draw
 * @implements B520:06A2:0013:A505 ()
 */
void emu_GUI_Widget_ScrollBar_Draw()
{
	csip32 wcsip;
	Widget *w;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	wcsip = emu_get_csip32(emu_ss, emu_sp, 0x0);
	if (wcsip.csip == 0x0) return;

	w = (Widget *)emu_get_memorycsip(wcsip);

	GUI_Widget_ScrollBar_Draw(w, wcsip);
}

/**
 * Emulator wrapper around GUI_Widget_Scrollbar_ArrowUp_Click().
 *
 * @name emu_GUI_Widget_Scrollbar_ArrowUp_Click
 * @implements B520:03C7:0017:65D1 ()
 */
void emu_GUI_Widget_Scrollbar_ArrowUp_Click()
{
	csip32 wcsip;
	Widget *w;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	wcsip = emu_get_csip32(emu_ss, emu_sp, 0x0);
	if (wcsip.csip == 0x0) return;

	w = (Widget *)emu_get_memorycsip(wcsip);

	GUI_Widget_Scrollbar_ArrowUp_Click(w);
}

/**
 * Emulator wrapper around GUI_Widget_Scrollbar_ArrowDown_Click().
 *
 * @name emu_GUI_Widget_Scrollbar_ArrowDown_Click
 * @implements B520:03E7:0017:BA36 ()
 */
void emu_GUI_Widget_Scrollbar_ArrowDown_Click()
{
	csip32 wcsip;
	Widget *w;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	wcsip = emu_get_csip32(emu_ss, emu_sp, 0x0);
	if (wcsip.csip == 0x0) return;

	w = (Widget *)emu_get_memorycsip(wcsip);

	GUI_Widget_Scrollbar_ArrowDown_Click(w);
}
