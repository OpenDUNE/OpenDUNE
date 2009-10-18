/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BB4_0004_0027_DC1D()
 *
 * @name f__2BB4_0004_0027_DC1D
 * @implements 2BB4:0004:0027:DC1D ()
 *
 * Called From: 06F7:03BD:000A:3E9E
 * Called From: 06F7:0833:0005:517D
 * Called From: 06F7:0833:0036:B153
 * Called From: 06F7:09A6:0026:4BF5
 * Called From: 0972:145A:0019:C3D9
 * Called From: 0972:15FA:0015:06AF
 * Called From: 0972:160C:0005:517D
 * Called From: 0972:1648:0005:517D
 * Called From: 0C3A:2509:000F:8F80
 * Called From: 0C3A:2509:0015:A882
 * Called From: 0EDB:00FD:000C:3B74
 * Called From: 0F3F:01D6:000A:B69E
 * Called From: 0F3F:01EE:000D:1051
 * Called From: 0F3F:01EE:0010:CF58
 * Called From: 1391:02E4:001A:9F54
 * Called From: 1423:0D6E:0013:2198
 * Called From: 151A:044E:0018:36C4
 * Called From: 16C5:0027:0008:EF7F
 * Called From: 16C5:0027:0023:21B3
 * Called From: 176C:18E8:0005:517D
 * Called From: 176C:18E8:000E:B62B
 * Called From: 176C:23D2:000B:4119
 * Called From: 176C:23E4:0005:517D
 * Called From: 176C:272E:0005:517D
 * Called From: 176C:272E:0012:03F6
 * Called From: 176C:2779:0005:517D
 * Called From: 176C:294B:000A:F53E
 * Called From: 176C:2973:000A:DF3C
 * Called From: 176C:2988:0009:23D4
 * Called From: 176C:2988:000C:0854
 * Called From: 1A34:00C6:0031:7529
 * Called From: 1A34:013C:0023:DCFE
 * Called From: 1A34:0398:000A:CE9E
 * Called From: 1A34:06D8:005F:83A6
 * Called From: 1A34:06D8:004B:4188
 * Called From: 1A34:0A91:001A:00FF
 * Called From: 1A34:0DBB:0008:CBF5
 * Called From: 1A34:18D9:0005:517D
 * Called From: 1A34:18D9:0032:1307
 * Called From: 1A34:2338:0011:B7DE
 * Called From: 1A34:25DD:0038:84DA
 * Called From: 1A34:2605:0005:517D
 * Called From: B4B8:002A:0005:517D
 * Called From: B4B8:0054:000C:132E
 * Called From: B4B8:0054:002A:0E34
 * Called From: B4B8:0060:0005:517D
 * Called From: B4B8:00A4:0008:30F2
 * Called From: B4B8:00A4:000B:411E
 * Called From: B4B8:00D0:002C:7BC6
 * Called From: B4B8:00DC:0005:517D
 * Called From: B4B8:0120:000B:411E
 * Called From: B4B8:0120:0008:30F2
 * Called From: B4B8:0442:0005:517D
 * Called From: B4B8:0468:0009:D62D
 * Called From: B4B8:04E8:0019:D3E8
 * Called From: B4B8:04E8:0026:950C
 * Called From: B4B8:04F5:0005:517D
 * Called From: B4B8:04FE:0009:AE6E
 * Called From: B4B8:052F:0028:CA07
 * Called From: B4B8:0545:0009:1020
 * Called From: B4CD:15B7:0014:B701
 * Called From: B4CD:16B3:0005:517D
 * Called From: B4CD:16E5:0005:517D
 * Called From: B4CD:1C5D:0005:517D
 * Called From: B4CD:1C6A:000D:A6B8
 */
void f__2BB4_0004_0027_DC1D()
{
l__0004:
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_ax = 0x353F;
	emu_ds = emu_ax;
	emu_si = 0x76A2;
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x0);
	emu_shrb(&emu_al, 0x1);
	emu_shrb(&emu_al, 0x1);
	emu_rclb(&emu_get_memory8(emu_ds, emu_si, 0x2), 0x1);
	emu_rclb(&emu_get_memory8(emu_ds, emu_si, 0x1), 0x1);
	emu_cmc();
	emu_sbbb(&emu_al, emu_get_memory8(emu_ds, emu_si, 0x0));
	emu_shrb(&emu_al, 0x1);
	emu_rcrb(&emu_get_memory8(emu_ds, emu_si, 0x0), 0x1);
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x0);
	emu_xorb(&emu_al, emu_get_memory8(emu_ds, emu_si, 0x1));
	emu_xorb(&emu_ah, emu_ah);
	emu_pop(&emu_si);
	emu_pop(&emu_ds);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
