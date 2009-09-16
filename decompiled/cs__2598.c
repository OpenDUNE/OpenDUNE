/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2598_0000_0017_EB80()
 *
 * @name f__2598_0000_0017_EB80
 * @implements 2598:0000:0017:EB80 ()
 *
 * Called From: 0642:0309:0008:64F7
 * Called From: 0642:043D:000A:426B
 * Called From: 07D4:002F:000D:CDE2
 * Called From: 07D4:02CF:0012:6EC2
 * Called From: 07D4:0387:000C:DE03
 * Called From: 07D4:12D9:0033:D6E7
 * Called From: 07D4:1367:000B:2081
 * Called From: 07D4:155F:0008:5999
 * Called From: 0AEC:0856:0015:4A00
 * Called From: 0AEC:0C71:0008:64F7
 * Called From: 0AEC:0CC4:0015:4A00
 * Called From: 0AEC:0E32:0008:64F7
 * Called From: 0AEC:0E61:0015:7A06
 * Called From: 0AEC:0FCC:0008:64F7
 * Called From: 0F78:0038:0009:542B
 * Called From: 0F78:01A4:0008:1199
 * Called From: 10E4:02A7:0008:64F7
 * Called From: 10E4:0569:0008:0199
 * Called From: 10E4:06F9:0009:542B
 * Called From: 10E4:0996:0008:6999
 * Called From: 10E4:0AB6:0009:542B
 * Called From: 10E4:0B2F:0011:7386
 * Called From: 10E4:1171:0009:542B
 * Called From: 10E4:1B88:0009:99B5
 * Called From: 10E4:20AF:0009:542B
 * Called From: 10E4:220F:001C:86CA
 * Called From: 10E4:2271:0006:4A77
 * Called From: 24DA:000D:000E:FD1B
 * Called From: 24DA:0023:0008:1199
 * Called From: B488:011D:004D:47BE
 * Called From: B488:0170:0008:D19A
 * Called From: B488:0170:003C:6B9F
 * Called From: B488:018C:000D:55E2
 * Called From: B488:0205:0008:5199
 * Called From: B495:0040:0023:E778
 * Called From: B495:00B6:000A:87F5
 * Called From: B495:08B6:0010:5134
 * Called From: B495:0BA0:0008:1199
 * Called From: B495:0BC5:0011:11A0
 * Called From: B495:0D32:0006:4A77
 * Called From: B495:1267:0011:10C0
 * Called From: B495:1575:0008:64F7
 * Called From: B495:1591:000A:97F5
 * Called From: B4BE:0098:0012:DDEE
 * Called From: B4BE:03A9:0009:81B5
 * Called From: B4DA:006F:000C:DE03
 * Called From: B4DA:02D2:0009:91B5
 * Called From: B4DA:0AEA:000D:6FB1
 * Called From: B4DA:0C06:0008:64F7
 * Called From: B4DA:0DE0:0009:522B
 * Called From: B4DA:0E59:0008:64F7
 * Called From: B4DA:0E59:000D:98CF
 * Called From: B4DA:1026:000B:6460
 * Called From: B4DA:1077:0009:A1B5
 * Called From: B4DA:1259:000D:69B1
 * Called From: B4DA:1416:0008:64F7
 * Called From: B4DA:16A9:0009:C1B5
 * Called From: B4DA:1776:000F:12AD
 * Called From: B4DA:1856:0008:1199
 * Called From: B4DA:1A00:0009:522B
 * Called From: B4DA:1A6B:0015:98C5
 * Called From: B4E0:000A:000F:14AD
 * Called From: B4E0:00D3:0009:E4DB
 * Called From: B4E0:0145:0009:91B5
 * Called From: B4E0:086A:000F:95BC
 * Called From: B4E0:0A79:0008:3199
 * Called From: B4E9:008A:0009:542B
 * Called From: B4E9:0321:0008:1199
 * Called From: B4ED:00D6:000A:F29B
 * Called From: B4F2:070D:0008:64F7
 * Called From: B4F2:0878:0015:B404
 * Called From: B4F2:0D46:0008:64F7
 * Called From: B4F2:0F74:0011:1140
 * Called From: B4F2:10F0:0008:1199
 * Called From: B503:0057:000C:A435
 * Called From: B503:0437:000C:DE03
 * Called From: B503:0508:0008:3199
 * Called From: B503:0F17:0010:028B
 * Called From: B503:101E:0023:2C5B
 * Called From: B511:0E66:000C:DD83
 * Called From: B511:0EED:0009:E4DB
 * Called From: B511:1335:0011:4468
 * Called From: B511:148F:0008:1199
 * Called From: B518:0068:000A:426B
 * Called From: B518:0547:000B:088C
 * Called From: B518:0725:0008:64F7
 * Called From: B518:073B:0009:F1B5
 * Called From: B518:0843:0008:64F7
 * Called From: B518:0B2C:0014:307D
 * Called From: B518:0E21:0008:1199
 * Called From: B518:11D2:0011:1160
 * Called From: B518:14C3:0008:0999
 * Called From: B527:0024:0009:E4DB
 * Called From: B527:02AA:0009:D1B5
 */
void f__2598_0000_0017_EB80()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C91), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__2598_0017_0004_893F(); return;
}

/**
 * Decompiled function f__2598_0017_0004_893F()
 *
 * @name f__2598_0017_0004_893F
 * @implements 2598:0017:0004:893F ()
 *
 * Called From: 2598:0015:0017:EB80
 */
void f__2598_0017_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
