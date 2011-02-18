/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "widget.h"

/**
 * Emulator wrapper around GUI_Widget_ActionPanel_Draw()
 *
 * @name emu_GUI_Widget_ActionPanel_Draw
 * @implements 10E4:0F1A:0088:7622 ()
 */
void emu_GUI_Widget_ActionPanel_Draw()
{
	uint16 unknown06;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	unknown06 = emu_get_memory16(emu_ss, emu_sp, 0x0);

	GUI_Widget_ActionPanel_Draw(unknown06);
}

/**
 * Emulator wrapper around GUI_Widget_Get_ByIndex().
 *
 * @name emu_GUI_Widget_Get_ByIndex
 * @implements B48B:00F2:0005:601A ()
 */
void emu_GUI_Widget_Get_ByIndex()
{
	Widget *w;
	csip32 wcsip;
	uint16 index;
	csip32 ret;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	wcsip = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	index = emu_get_memory16(emu_ss, emu_sp, 0x4);

	emu_ax = 0;
	emu_dx = 0;

	if (wcsip.csip == 0x0) return;

	w = GUI_Widget_Get_ByIndex((Widget *)emu_get_memorycsip(wcsip), index);

	if (w == NULL) return;

	ret = emu_Global_GetCSIP(w);

	emu_ax = ret.s.ip;
	emu_dx = ret.s.cs;
}

/**
 * Emulator wrapper around GUI_Widget_MakeInvisible().
 *
 * @name emu_GUI_Widget_MakeInvisible
 * @implements B48B:0088:0029:3A68 ()
 */
void emu_GUI_Widget_MakeInvisible()
{
	csip32 wcsip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	wcsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	emu_ax = wcsip.s.ip;
	emu_dx = wcsip.s.cs;

	if (wcsip.csip == 0x0) return;

	GUI_Widget_MakeInvisible((Widget *)emu_get_memorycsip(wcsip));
}

/**
 * Emulator wrapper around GUI_Widget_MakeVisible().
 *
 * @name emu_GUI_Widget_MakeVisible
 * @implements B48B:00BD:0029:3530 ()
 */
void emu_GUI_Widget_MakeVisible()
{
	csip32 wcsip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	wcsip = emu_get_csip32(emu_ss, emu_sp, 0x0);

	emu_ax = wcsip.s.ip;
	emu_dx = wcsip.s.cs;

	if (wcsip.csip == 0x0) return;

	GUI_Widget_MakeVisible((Widget *)emu_get_memorycsip(wcsip));
}

/**
 * Emulator wrapper around GUI_Widget_Draw().
 *
 * @name emu_GUI_Widget_Draw
 * @implements B4A2:0729:0013:2494 ()
 */
void emu_GUI_Widget_Draw()
{
	csip32 wcsip;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	wcsip = emu_get_csip32(emu_ss, emu_sp, 0x0);
	if (wcsip.csip == 0x0) return;

	GUI_Widget_Draw((Widget *)emu_get_memorycsip(wcsip));
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

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	wcsip = emu_get_csip32(emu_ss, emu_sp, 0x0);
	if (wcsip.csip == 0x0) return;

	emu_ax = GUI_Widget_HandleEvents((Widget *)emu_get_memorycsip(wcsip), wcsip);
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

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	wcsip = emu_get_csip32(emu_ss, emu_sp, 0x0);
	if (wcsip.csip == 0x0) return;

	GUI_Widget_ScrollBar_Draw((Widget *)emu_get_memorycsip(wcsip));
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

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	wcsip = emu_get_csip32(emu_ss, emu_sp, 0x0);
	if (wcsip.csip == 0x0) return;

	GUI_Widget_Scrollbar_ArrowUp_Click((Widget *)emu_get_memorycsip(wcsip));
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

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	wcsip = emu_get_csip32(emu_ss, emu_sp, 0x0);
	if (wcsip.csip == 0x0) return;

	GUI_Widget_Scrollbar_ArrowDown_Click((Widget *)emu_get_memorycsip(wcsip));
}

/**
 * Emulator wrapper around GUI_Widget_GetShortcut()
 *
 * @name emu_GUI_Widget_GetShortcut
 * @implements 29DA:00D0:0013:E21A ()
 */
void emu_GUI_Widget_GetShortcut()
{
	uint16 c;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	c = emu_get_memory16(emu_ss, emu_sp, 0);

	emu_ax = GUI_Widget_GetShortcut(c & 0xFF);
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
 * Emulator wrapper around GUI_Widget_MakeSelected()
 *
 * @name emu_GUI_Widget_MakeSelected
 * @implements B48B:01CE:002B:7574 ()
 */
void emu_GUI_Widget_MakeSelected()
{
	csip32 wcsip;
	uint16 clickProc;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	wcsip     = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	clickProc = emu_get_memory16(emu_ss, emu_sp, 0x4);

	emu_dx = wcsip.s.cs;
	emu_ax = wcsip.s.ip;

	if (wcsip.csip == 0x0) return;

	GUI_Widget_MakeSelected((Widget *)emu_get_memorycsip(wcsip), (clickProc != 0) ? true : false);
}

/**
 * Emulator wrapper around GUI_Widget_MakeNormal()
 *
 * @name emu_GUI_Widget_MakeNormal
 * @implements B48B:0127:000E:E325 ()
 */
void emu_GUI_Widget_MakeNormal()
{
	csip32 wcsip;
	uint16 clickProc;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	wcsip     = emu_get_csip32  (emu_ss, emu_sp, 0x0);
	clickProc = emu_get_memory16(emu_ss, emu_sp, 0x4);

	emu_dx = wcsip.s.cs;
	emu_ax = wcsip.s.ip;

	if (wcsip.csip == 0x0) return;

	GUI_Widget_MakeNormal((Widget *)emu_get_memorycsip(wcsip), (clickProc != 0) ? true : false);
}
