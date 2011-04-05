/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__24DA_0004_000E_FD1B()
 *
 * @name f__24DA_0004_000E_FD1B
 * @implements 24DA:0004:000E:FD1B ()
 * @implements 24DA:0012:000E:D6F0
 * @implements 24DA:0020:0008:1199
 * @implements 24DA:0028:0005:8BF7
 *
 * Called From: 1423:03A6:000B:F574
 * Called From: B491:04B2:0008:190A
 * Called From: B491:04C1:000F:C361
 * Called From: B491:07E3:000B:F574
 * Called From: B491:07EC:0009:9926
 * Called From: B491:07F5:0009:9126
 * Called From: B491:0853:000B:F570
 * Called From: B4B8:183C:000B:F571
 * Called From: B4B8:1D8A:000B:F574
 * Called From: B4B8:1FA9:0008:A467
 * Called From: B4B8:2193:000B:F574
 * Called From: B4BE:02FF:000B:F574
 * Called From: B4BE:03A0:000B:F574
 * Called From: B4ED:01E9:000B:F574
 * Called From: B4ED:02D1:0025:710A
 * Called From: B503:0560:0008:A467
 */
void f__24DA_0004_000E_FD1B()
{
l__0004:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0012); emu_cs = 0x2598; emu_Unknown_Set_Global_6C91();
l__0012:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6642);
	emu_push(0x0020);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: emu_GFX_ClearScreen(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x24DA; emu_last_ip = 0x001B; emu_last_length = 0x000E; emu_last_crc = 0xD6F0;
			emu_call();
			return;
	}
l__0020:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0028); emu_cs = 0x2598; emu_Unknown_Set_Global_6C91();
l__0028:
	emu_pop(&emu_cx);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
