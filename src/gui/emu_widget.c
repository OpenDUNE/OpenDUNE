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

/**
 * Emulator wrapper around emu_GUI_Widget_HandleEvents().
 *
 * @name emu_GUI_Widget_HandleEvents
 * @implements B4A2:0039:000B:EC51 ()
 * @implements B4A2:0044:0009:3D8E
 * @implements B4A2:004D:000E:64BE
 * @implements B4A2:004F:000C:E695
 * @implements B4A2:005B:0005:84EE
 * @implements B4A2:0060:0003:2E57
 * @implements B4A2:0063:001E:4495
 * @implements B4A2:007E:0003:9E04
 * @implements B4A2:0081:0034:D555
 * @implements B4A2:009A:001B:68B5
 * @implements B4A2:00B5:0014:CD20
 * @implements B4A2:00C0:0009:433C
 * @implements B4A2:00C9:0020:FF60
 * @implements B4A2:00D4:0015:96A8
 * @implements B4A2:00E9:000B:A0FA
 * @implements B4A2:00F4:0058:6D26
 * @implements B4A2:0106:0046:4BFB
 * @implements B4A2:010E:003E:36CC
 * @implements B4A2:014C:00A3:323E
 * @implements B4A2:0155:009A:E308
 * @implements B4A2:015E:0091:0167
 * @implements B4A2:0169:0086:5764
 * @implements B4A2:017B:0074:9303
 * @implements B4A2:01A3:004C:644F
 * @implements B4A2:01C6:0029:C114
 * @implements B4A2:01E7:0008:082E
 * @implements B4A2:01EF:000E:2C3C
 * @implements B4A2:01FD:00BF:524F
 * @implements B4A2:0240:007C:CD42
 * @implements B4A2:0278:0044:F834
 * @implements B4A2:02B8:0004:EE59
 * @implements B4A2:02BC:001E:443B
 * @implements B4A2:02BF:001B:4EC7
 * @implements B4A2:02DA:003B:41BE
 * @implements B4A2:0315:00AA:23C4
 * @implements B4A2:0340:007F:2746
 * @implements B4A2:035E:0061:CF47
 * @implements B4A2:036F:0050:9484
 * @implements B4A2:0396:0029:BE62
 * @implements B4A2:039F:0020:BF0F
 * @implements B4A2:03BD:0002:D3BA
 * @implements B4A2:03BF:001F:6D3A
 * @implements B4A2:03DE:001B:E04F
 * @implements B4A2:03E6:0013:5DAC
 * @implements B4A2:03F9:0022:65D7
 * @implements B4A2:041B:0007:B8D3
 * @implements B4A2:041D:0005:B8B6
 * @implements B4A2:0422:000C:23A1
 * @implements B4A2:0425:0009:D1BE
 * @implements B4A2:042E:0031:2D5E
 * @implements B4A2:0453:000C:9E28
 * @implements B4A2:045F:0012:4D72
 * @implements B4A2:0471:0048:E243
 * @implements B4A2:04AA:000F:6F6F
 * @implements B4A2:04B9:0004:3BFB
 * @implements B4A2:04BD:0045:0588
 * @implements B4A2:04F2:0010:E3E2
 * @implements B4A2:0502:005E:216A
 * @implements B4A2:051E:0042:182D
 * @implements B4A2:0529:0037:FA1E
 * @implements B4A2:0543:001D:7800
 * @implements B4A2:055E:0002:ED3A
 * @implements B4A2:0560:002D:0EE2
 * @implements B4A2:057B:0012:2566
 * @implements B4A2:058B:0002:D6BA
 * @implements B4A2:058D:002D:0862
 * @implements B4A2:05A8:0012:33E6
 * @implements B4A2:05B8:0002:C03A
 * @implements B4A2:05BA:00B6:11C2
 * @implements B4A2:05EF:0081:DCA6
 * @implements B4A2:0614:005C:D203
 * @implements B4A2:061C:0054:23DD
 * @implements B4A2:0649:0027:26C2
 * @implements B4A2:0670:0040:740E
 * @implements B4A2:0672:003E:C657
 * @implements B4A2:0680:0030:38D3
 * @implements B4A2:06B0:0008:D0CF
 * @implements B4A2:06B8:000D:37FC
 * @implements B4A2:06C5:001E:934B
 * @implements B4A2:06E3:001B:B2D9
 * @implements B4A2:06F3:000B:49A2
 * @implements B4A2:06FE:0015:72AB
 * @implements B4A2:070D:0006:CF87
 * @implements B4A2:0713:0006:F7CE
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
