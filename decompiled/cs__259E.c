/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

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
