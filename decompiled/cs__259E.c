/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__259E_0006_0016_858A()
 *
 * @name f__259E_0006_0016_858A
 * @implements 259E:0006:0016:858A ()
 * @implements 259E:001C:0005:60C3
 *
 * Called From: 10E4:2263:0013:D274
 * Called From: 1423:039B:0011:194B
 * Called From: 1423:0408:0016:5986
 * Called From: B491:07D8:0011:193C
 * Called From: B491:088C:0014:0DD8
 * Called From: B491:0A25:0015:1784
 * Called From: B4B8:1D7F:0011:195A
 * Called From: B4B8:1FDE:0014:B1DF
 * Called From: B4B8:2188:0018:F01B
 * Called From: B4BE:0143:0014:8DDF
 * Called From: B4BE:020B:001A:F454
 * Called From: B4BE:0249:001A:F45B
 * Called From: B4BE:02B4:0014:0DFA
 * Called From: B4BE:02F4:001A:B479
 * Called From: B4BE:0355:0014:0DFA
 * Called From: B4BE:0395:0011:195A
 * Called From: B4BE:0395:001A:B479
 * Called From: B4DA:117C:0014:31C1
 * Called From: B4DA:11CE:0011:9942
 * Called From: B4ED:01DE:0014:B1F3
 * Called From: B4ED:03FC:0013:D256
 * Called From: B4ED:06B7:0013:6E51
 * Called From: B4ED:070C:0013:525F
 * Called From: B503:006A:0013:BF46
 * Called From: B503:0279:0014:B1CE
 * Called From: B503:0550:0012:7598
 * Called From: B511:0F2C:0011:9942
 * Called From: B511:1120:0014:B1CE
 * Called From: B511:11F6:0025:9022
 * Called From: B511:1447:000F:CDB2
 * Called From: B511:14E7:000F:CDB2
 */
void f__259E_0006_0016_858A()
{
l__0006:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_ax = 0x70A2;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x001C); emu_Unknown_259E_00B1();
l__001C:
	emu_addw(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__259E_0040_0015_5E4A()
 *
 * @name f__259E_0040_0015_5E4A
 * @implements 259E:0040:0015:5E4A ()
 * @implements 259E:0055:0005:6083
 *
 * Called From: 0642:05C2:0010:2CA3
 * Called From: 0642:06B9:000D:A409
 * Called From: 0642:06B9:0013:48D9
 * Called From: 0642:073A:000D:A409
 * Called From: 0642:073A:0013:43D9
 * Called From: 0C3A:17E2:000D:A409
 * Called From: 10E4:0469:0010:2CBB
 * Called From: 259E:0225:001E:04ED
 * Called From: 259E:0225:0017:E5A1
 * Called From: 259E:0225:0026:4520
 * Called From: 259E:0225:0028:CFAE
 * Called From: 25C4:03BF:0010:908E
 * Called From: B491:0586:0018:6844
 * Called From: B491:05CE:0018:6844
 * Called From: B491:09B2:0018:910F
 * Called From: B495:00E8:0010:2CBB
 * Called From: B4B8:185B:000E:A415
 * Called From: B4B8:186A:000F:9764
 * Called From: B4B8:1D9D:000D:A409
 * Called From: B4B8:1DE8:000D:2400
 * Called From: B4B8:1E08:000E:2564
 * Called From: B4B8:2274:000E:A56D
 * Called From: B4B8:2274:000D:A409
 * Called From: B4BE:00A9:0011:87E1
 * Called From: B4F2:0E0D:0010:2CBB
 * Called From: B4F2:0ED4:001D:B10D
 * Called From: B503:0573:000D:A409
 */
void f__259E_0040_0015_5E4A()
{
l__0040:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0055); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
l__0055:
	emu_addw(&emu_sp, 0x8);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
