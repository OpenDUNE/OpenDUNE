/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2598_0000_0017_D681()
 *
 * @name f__2598_0000_0017_D681
 * @implements 2598:0000:0017:D681 ()
 *
 * Called From: 0642:0309:0008:566A
 * Called From: 0642:043D:000A:136A
 * Called From: 07D4:002F:000D:D4F1
 * Called From: 07D4:02CF:0012:1D5A
 * Called From: 07D4:0387:000C:4765
 * Called From: 07D4:12D9:0033:5D66
 * Called From: 07D4:1367:000B:C4ED
 * Called From: 07D4:155F:0008:EE6A
 * Called From: 0AEC:0856:0015:EB29
 * Called From: 0AEC:0C71:0008:566A
 * Called From: 0AEC:0CC4:0015:EB29
 * Called From: 0AEC:0E32:0008:566A
 * Called From: 0AEC:0E61:0015:2B2F
 * Called From: 0AEC:0FCC:0008:566A
 * Called From: 0F78:0038:0009:776B
 * Called From: 0F78:01A4:0008:EAEA
 * Called From: 10E4:02A7:0008:566A
 * Called From: 10E4:0569:0008:EBEA
 * Called From: 10E4:06F9:0009:776B
 * Called From: 10E4:0996:0008:ED6A
 * Called From: 10E4:0AB6:0009:776B
 * Called From: 10E4:0B2F:0011:6B13
 * Called From: 10E4:1171:0009:776B
 * Called From: 10E4:1B88:0009:586A
 * Called From: 10E4:20AF:0009:776B
 * Called From: 10E4:220F:001C:07B1
 * Called From: 10E4:2271:0006:04AA
 * Called From: 24DA:000D:000E:98E7
 * Called From: 24DA:0023:0008:EAEA
 * Called From: B488:011D:004D:1A9B
 * Called From: B488:0170:0008:D6EA
 * Called From: B488:0170:003C:0ED8
 * Called From: B488:018C:000D:DD60
 * Called From: B488:0205:0008:EEEA
 * Called From: B495:0040:0023:BC79
 * Called From: B495:00B6:000A:3CEB
 * Called From: B495:08B6:0010:BF75
 * Called From: B495:0BA0:0008:EAEA
 * Called From: B495:0BC5:0011:9B02
 * Called From: B495:0D32:0006:04AA
 * Called From: B495:1267:0011:FB03
 * Called From: B495:1575:0008:566A
 * Called From: B495:1591:000A:3DEB
 * Called From: B4BE:0098:0012:6EB9
 * Called From: B4BE:03A9:0009:59EA
 * Called From: B4DA:006F:000C:4765
 * Called From: B4DA:02D2:0009:58EA
 * Called From: B4DA:0AEA:000D:2169
 * Called From: B4DA:0C06:0008:566A
 * Called From: B4DA:0DE0:0009:716B
 * Called From: B4DA:0E59:0008:566A
 * Called From: B4DA:0E59:000D:6271
 * Called From: B4DA:1026:000B:DD68
 * Called From: B4DA:1077:0009:5BEA
 * Called From: B4DA:1259:000D:4169
 * Called From: B4DA:1416:0008:566A
 * Called From: B4DA:16A9:0009:5DEA
 * Called From: B4DA:1776:000F:E971
 * Called From: B4DA:1856:0008:EAEA
 * Called From: B4DA:1A00:0009:716B
 * Called From: B4DA:1A6B:0015:A2AF
 * Called From: B4E0:000A:000F:EF71
 * Called From: B4E0:00D3:0009:E46A
 * Called From: B4E0:0145:0009:58EA
 * Called From: B4E0:086A:000F:7328
 * Called From: B4E0:0A79:0008:E8EA
 * Called From: B4E9:008A:0009:776B
 * Called From: B4E9:0321:0008:EAEA
 * Called From: B4ED:00D6:000A:806B
 * Called From: B4F2:070D:0008:566A
 * Called From: B4F2:0878:0015:AB99
 * Called From: B4F2:0D46:0008:566A
 * Called From: B4F2:0F74:0011:7B02
 * Called From: B4F2:10F0:0008:EAEA
 * Called From: B503:0057:000C:B963
 * Called From: B503:0437:000C:4765
 * Called From: B503:0508:0008:E8EA
 * Called From: B503:0F17:0010:1F5F
 * Called From: B503:101E:0023:40D3
 * Called From: B511:0E66:000C:7F65
 * Called From: B511:0EED:0009:E46A
 * Called From: B511:1335:0011:139F
 * Called From: B511:148F:0008:EAEA
 * Called From: B518:0068:000A:136A
 * Called From: B518:0547:000B:F26D
 * Called From: B518:0725:0008:566A
 * Called From: B518:073B:0009:5EEA
 * Called From: B518:0843:0008:566A
 * Called From: B518:0B2C:0014:0C28
 * Called From: B518:0E21:0008:EAEA
 * Called From: B518:11D2:0011:5B02
 * Called From: B518:14C3:0008:EB6A
 * Called From: B527:0024:0009:E46A
 * Called From: B527:02AA:0009:5CEA
 * Called From: B53B:0083:001D:79DA
 * Called From: B53B:0254:000A:3A6B
 */
void f__2598_0000_0017_D681()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6C91), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__2598_0017_0004_0F7A(); return;
}

/**
 * Decompiled function f__2598_0017_0004_0F7A()
 *
 * @name f__2598_0017_0004_0F7A
 * @implements 2598:0017:0004:0F7A ()
 *
 * Called From: 2598:0015:0017:D681
 */
void f__2598_0017_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
