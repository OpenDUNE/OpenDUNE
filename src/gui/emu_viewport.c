/* $Id$ */

#include <assert.h>
#include <stdio.h>
#include "types.h"
#include "libemu.h"
#include "../global.h"
#include "gui.h"
#include "widget.h"

/**
 * Emulator wrapper around GUI_Widget_Viewport_Click().
 *
 * @name emu_GUI_Widget_Viewport_Click
 * @implements 0AEC:004F:0024:1E6F ()
 * @implements 0AEC:0073:0007:CD55
 * @implements 0AEC:007A:0008:FD9A
 * @implements 0AEC:0082:0007:C5D5
 * @implements 0AEC:0089:0007:F655
 * @implements 0AEC:0090:0007:9AD5
 * @implements 0AEC:0097:0007:EF55
 * @implements 0AEC:009E:0002:C03A
 * @implements 0AEC:00A0:0048:33A5
 * @implements 0AEC:00E8:0019:CDE8
 * @implements 0AEC:00F1:0010:6EE9
 * @implements 0AEC:00FB:0006:FE11
 * @implements 0AEC:0101:0022:83CA
 * @implements 0AEC:0123:0032:DCBA
 * @implements 0AEC:013A:001B:CB76
 * @implements 0AEC:0155:0007:B045
 * @implements 0AEC:015C:0007:F4C5
 * @implements 0AEC:0163:0007:D945
 * @implements 0AEC:016A:0007:9DC5
 * @implements 0AEC:0171:0007:31AA
 * @implements 0AEC:0178:007A:7C0A
 * @implements 0AEC:0199:0059:1015
 * @implements 0AEC:01B4:003E:7CC6
 * @implements 0AEC:01D0:0022:10B3
 * @implements 0AEC:01DC:0016:5CAC
 * @implements 0AEC:01F2:0004:B2A4
 * @implements 0AEC:01F3:0003:22A1
 * @implements 0AEC:01F6:000F:8388
 * @implements 0AEC:0205:001E:2049
 * @implements 0AEC:020C:0017:8C1B
 * @implements 0AEC:0223:0022:AED2
 * @implements 0AEC:0245:0010:9E2E
 * @implements 0AEC:0255:000C:A970
 * @implements 0AEC:0261:000A:314E
 * @implements 0AEC:026B:0045:B28D
 * @implements 0AEC:026E:0042:B76D
 * @implements 0AEC:02B0:0027:E1FE
 * @implements 0AEC:02C9:000E:982A
 * @implements 0AEC:02D7:004A:8CD6
 * @implements 0AEC:02DA:0047:A292
 * @implements 0AEC:0321:001E:AF1F
 * @implements 0AEC:033A:0005:BAB6
 * @implements 0AEC:033F:0009:A8A9
 * @implements 0AEC:0348:000E:AD63
 * @implements 0AEC:0356:000A:C4B6
 * @implements 0AEC:0360:000F:7987
 * @implements 0AEC:036F:0014:9BC6
 * @implements 0AEC:0383:0003:1F38
 * @implements 0AEC:0386:0011:A949
 * @implements 0AEC:0397:0035:696E
 * @implements 0AEC:03CC:0004:59BF
 * @implements 0AEC:03D0:000C:BB87
 * @implements 0AEC:03D7:0005:BFC0
 * @implements 0AEC:03DC:0013:2700
 * @implements 0AEC:03EF:0011:DC23
 * @implements 0AEC:0400:0010:476E
 * @implements 0AEC:0410:0005:A7EE
 * @implements 0AEC:0415:000D:926F
 * @implements 0AEC:0422:0010:A74E
 * @implements 0AEC:0432:0010:8719
 * @implements 0AEC:0442:0019:27F9
 * @implements 0AEC:0459:0002:C03A
 * @implements 0AEC:045B:0010:6B0D
 * @implements 0AEC:046B:0003:EE9A
 * @implements 0AEC:046E:0032:26AD
 * @implements 0AEC:04A0:0005:517D
 * @implements 0AEC:04A5:000A:6AD3
 * @implements 0AEC:04AF:0009:1AAE
 * @implements 0AEC:04B2:0006:0EF2
 * @implements 0AEC:04B8:001C:FBF0
 * @implements 0AEC:04B9:001B:FE60
 * @implements 0AEC:04D4:0003:DCA3
 * @implements 0AEC:04D7:0009:9033
 * @implements 0AEC:04E0:000A:C920
 * @implements 0AEC:04EA:0024:77D8
 * @implements 0AEC:050E:000A:889E
 * @implements 0AEC:0518:000F:6E04
 * @implements 0AEC:0527:001D:6B69
 * @implements 0AEC:0544:003B:4271
 * @implements 0AEC:055D:0022:5BD5
 * @implements 0AEC:057F:0010:F5AC
 * @implements 0AEC:058F:001F:D112
 * @implements 0AEC:05AE:0010:37DB
 * @implements 0AEC:05BE:0012:A28E
 * @implements 0AEC:05C7:0009:BAB5
 * @implements 0AEC:05D0:000A:7F37
 * @implements 0AEC:05DA:001A:1D41
 * @implements 0AEC:05F4:0015:DE27
 * @implements 0AEC:0609:0019:DF1A
 * @implements 0AEC:0622:002E:D6BF
 * @implements 0AEC:0625:002B:F4D5
 * @implements 0AEC:0650:000B:36A0
 * @implements 0AEC:065B:0036:0E6D
 * @implements 0AEC:0691:0008:A466
 * @implements 0AEC:0699:0005:B8EE
 * @implements 0AEC:069C:0002:FC3A
 * @implements 0AEC:069E:000F:5504
 * @implements 0AEC:06AD:001E:C418
 * @implements 0AEC:06BE:000D:201F
 * @implements 0AEC:06CB:0004:457F
 * @implements 0AEC:06CF:000D:1D7F
 * @implements 0AEC:06DC:000D:92EB
 * @implements 0AEC:06E9:000C:A4A0
 * @implements 0AEC:06F5:000D:A042
 * @implements 0AEC:0702:0011:8982
 * @implements 0AEC:070D:0006:FDC2
 * @implements 0AEC:0713:0006:8BBA
 * @implements 0AEC:0716:0003:E198
 * @implements 0AEC:0719:0009:511D
 * @implements 0AEC:0722:0016:D5E1
 * @implements 0AEC:0738:0008:C3DB
 * @implements 0AEC:0740:002B:39A2
 * @implements 0AEC:0743:0028:3B11
 * @implements 0AEC:0765:0006:06EE
 * @implements 0AEC:076B:0012:C656
 * @implements 0AEC:0777:0006:0B02
 * @implements 0AEC:077D:000E:A7DE
 * @implements 0AEC:078B:0015:3A62
 * @implements 0AEC:078D:0013:A8AF
 * @implements 0AEC:07A0:0004:31B0
 * @implements 0AEC:07A1:0003:A1B5
 * @implements 0AEC:07A4:001E:F4A8
 * @implements 0AEC:07B0:0012:353C
 * @implements 0AEC:07C2:0002:D13A
 * @implements 0AEC:07C4:000F:8BC4
 * @implements 0AEC:07D3:0004:5F3F
 * @implements 0AEC:07D7:000F:54F3
 * @implements 0AEC:07E1:0005:5303
 * @implements 0AEC:07E6:0004:B1A1
 * @implements 0AEC:07EA:0003:E1A3
 * @implements 0AEC:07ED:0006:F7CE
 */

void emu_GUI_Widget_Viewport_Click()
{
	Widget *w;

	/* Pop the return CS:IP. */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);

	w = (Widget *)emu_get_memorycsip(emu_get_csip32(emu_ss, emu_sp, 0x0));

	GUI_Widget_Viewport_Click(w);

	emu_ax = 1;
}
