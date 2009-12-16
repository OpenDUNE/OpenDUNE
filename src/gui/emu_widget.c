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
 * @implements B4A2:073C:0025:DBA0
 * @implements B4A2:0761:0006:B62F
 * @implements B4A2:0764:0003:DC0D
 * @implements B4A2:0767:001B:DE60
 * @implements B4A2:0782:0037:9F6E
 * @implements B4A2:07B2:0007:8ADE
 * @implements B4A2:07B9:0032:A5F0
 * @implements B4A2:07EB:0032:9164
 * @implements B4A2:081D:008A:92B0
 * @implements B4A2:083D:006A:E650
 * @implements B4A2:087C:002B:DEE8
 * @implements B4A2:08A7:0007:6D37
 * @implements B4A2:08AE:0014:2AE3
 * @implements B4A2:08C2:0023:FD2E
 * @implements B4A2:08C5:0020:E97F
 * @implements B4A2:08E5:000F:BCB8
 * @implements B4A2:08F4:0003:DDA9
 * @implements B4A2:08F7:0014:2AE3
 * @implements B4A2:090B:0016:F3ED
 * @implements B4A2:090E:0013:79CF
 * @implements B4A2:0921:000F:ACB8
 * @implements B4A2:0930:0003:DD1A
 * @implements B4A2:0933:0011:88EC
 * @implements B4A2:0944:0005:CFD8
 * @implements B4A2:0992:0014:2AE3
 * @implements B4A2:09A6:0028:6340
 * @implements B4A2:09CE:000F:9CB8
 * @implements B4A2:09DD:0002:DFBA
 * @implements B4A2:09DF:0014:2AE3
 * @implements B4A2:09F3:0018:9C56
 * @implements B4A2:0A0B:000F:FCB8
 * @implements B4A2:0A1A:0002:C13A
 * @implements B4A2:0A1C:0002:C03A
 * @implements B4A2:0A1E:0006:F7CE
 *
 * @define 22A6:0C69:008C:017F
 * @define 2427:0004:003B:B2A9
 *
 * GUI_Widget_Button_Draw, static in widget.c
 * @implements B4F2:0F68:0011:1140 (not used)
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
