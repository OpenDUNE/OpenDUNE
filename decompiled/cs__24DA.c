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
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0012); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	goto l__0012;
l__0012:
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6642);
	emu_push(0x0020);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: f__22A6_0796_000B_9035(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x24DA; emu_last_ip = 0x001B; emu_last_length = 0x000E; emu_last_crc = 0xD6F0;
			emu_call();
			return;
	}
	goto l__0020;
l__0020:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0028); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	goto l__0028;
l__0028:
	emu_pop(&emu_cx);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__24DA_002D_0010_3EB2()
 *
 * @name f__24DA_002D_0010_3EB2
 * @implements 24DA:002D:0010:3EB2 ()
 * @implements 24DA:003D:001D:0E58
 * @implements 24DA:005A:0012:E658
 * @implements 24DA:006C:003B:A407
 * @implements 24DA:0087:0020:C39B
 * @implements 24DA:00A7:0008:2947
 *
 * Called From: 0642:0153:0009:07B9
 * Called From: B4B8:1A53:0010:5926
 * Called From: B4ED:01F8:0009:01B9
 */
void f__24DA_002D_0010_3EB2()
{
l__002D:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x003D); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	goto l__003D;
l__003D:
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x6CD5));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x6CD3));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	goto l__0087;
l__005A:
	emu_movw(&emu_ax, 0xFA00);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x006C); emu_cs = 0x01F7; emu_Tools_Memset();
	goto l__006C;
l__006C:
	emu_addw(&emu_sp, 0x8);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xFA00);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax, 0xFA0);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	goto l__0087;
l__0087:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__005A;
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0096; emu_last_cs = 0x24DA; emu_last_ip = 0x008D; emu_last_length = 0x0020; emu_last_crc = 0xC39B; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xFA00);
	if (!(emu_flags.cf || emu_flags.zf)) goto l__005A;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x00A7); emu_cs = 0x01F7; emu_Tools_Memset();
	goto l__00A7;
l__00A7:
	emu_addw(&emu_sp, 0x8);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
