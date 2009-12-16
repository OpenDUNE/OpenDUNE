/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "widget.h"

/**
 * Emulator wrapper around GUI_Widget_Button_Draw().
 *
 * @name emu_GUI_Widget_Button_Draw
 * @implements B4F2:0F68:0011:1140 ()
 * @implements B4F2:0F79:0086:1AA0
 * @implements B4F2:0FFF:000C:55F2
 * @implements B4F2:1004:0007:A78B
 * @implements B4F2:100B:0007:A775
 * @implements B4F2:1012:000C:AC72
 * @implements B4F2:101E:0010:DC57
 * @implements B4F2:102E:0047:75DD
 * @implements B4F2:1059:001C:705D
 * @implements B4F2:1075:0022:D216
 * @implements B4F2:108B:000C:2AAD
 * @implements B4F2:1097:0008:0683
 * @implements B4F2:109F:001C:4E38
 * @implements B4F2:10BB:002A:1D60
 * @implements B4F2:10E5:0008:F38A
 * @implements B4F2:10ED:0008:1199
 * @implements B4F2:10F5:0005:EAF1
 * @implements B4F2:10FA:0006:F7CE
 */
void emu_GUI_Widget_Button_Draw()
{
	Widget *w;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	w = (Widget *)emu_get_memorycsip(emu_get_csip32(emu_ss, emu_sp, 0x0));

	GUI_Widget_Button_Draw(w);

	emu_ax = 0;
}
