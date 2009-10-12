/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__07C9_000F_0050_9278()
 *
 * @name f__07C9_000F_0050_9278
 * @implements 07C9:000F:0050:9278 ()
 * @implements 07C9:0035:002A:BC44
 * @implements 07C9:0043:001C:5702
 * @implements 07C9:005F:0015:22E3
 * @implements 07C9:0066:000E:D629
 * @implements 07C9:0074:0006:C560
 * @implements 07C9:0076:0004:6FD8
 * @implements 07C9:007A:0008:4548
 * @implements 07C9:007D:0005:BEE7
 * @implements 07C9:0082:0002:C03A
 * @implements 07C9:0084:0008:A7FF
 * @implements 07C9:008C:000C:41F1
 * @implements 07C9:008E:000A:8959
 * @implements 07C9:0098:0008:C872
 * @implements 07C9:009A:0006:42F0
 * @implements 07C9:009C:0004:6872
 * @implements 07C9:00A0:0006:F7CE
 *
 * Called From: 0972:0053:0019:8B3A
 * Called From: 0972:0053:0051:7645
 * Called From: 0972:00A0:0035:11A8
 * Called From: 0972:00A0:0020:DE51
 * Called From: 0972:00A0:004D:2870
 * Called From: 0972:12BC:0005:B762
 * Called From: 176C:018A:0014:5245
 * Called From: 176C:018A:0029:F66B
 * Called From: 176C:018A:0055:6C8A
 * Called From: 176C:018A:0040:7270
 * Called From: 176C:1034:001F:713B
 * Called From: 176C:1034:001B:955B
 * Called From: 176C:1250:0016:35F1
 * Called From: 176C:1250:0019:CAAD
 * Called From: 176C:1890:0020:D3D2
 * Called From: 176C:18CD:003D:E794
 * Called From: 1A34:20E6:0019:5DD9
 * Called From: 1A34:2176:0029:FB3F
 */
void f__07C9_000F_0050_9278()
{
l__000F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3900), 0x2);
	if (emu_get_memory16(emu_ds, 0x00, 0x3900) == 0x2) goto l__009C;
	emu_ax = emu_dx;
	emu_shlw(&emu_ax, 0x1);
	emu_cmpw(&emu_ax, emu_si);
	if ((int16)emu_ax < (int16)emu_si) {
		emu_ax = emu_dx;
		emu_shlw(&emu_ax, 0x1);
		emu_si = emu_ax;
	}
	goto l__0035;
l__0035:
	emu_ax = emu_dx;
	emu_sarw(&emu_ax, 0x1);
	emu_cmpw(&emu_ax, emu_cx);
	if ((int16)emu_ax > (int16)emu_cx) {
		emu_ax = emu_dx;
		emu_sarw(&emu_ax, 0x1);
		emu_cx = emu_ax;
	}
	goto l__0043;
l__0043:
	emu_ax = emu_dx;
	emu_subw(&emu_ax, emu_cx);
	emu_sarw(&emu_ax, 0x1);
	emu_di = emu_ax;
	emu_ax = emu_si;
	emu_subw(&emu_ax, emu_dx);
	emu_sarw(&emu_ax, 0x1);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) == 0x0) goto l__005F;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3900);
	goto l__0066;
l__005F:
	emu_ax = 0x4;
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3900));
	goto l__0066;
l__0066:
	emu_bx = emu_ax;
	emu_cmpw(&emu_bx, 0x4);
	if (emu_bx > 0x4) goto l__0082;
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0xA6);
	switch (emu_ip) {
		case 0x0074: goto l__0074;
		case 0x0076: goto l__0076;
		case 0x007A: goto l__007A;
		case 0x007D: goto l__007D;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07C9; emu_last_ip = 0x006F; emu_last_length = 0x000E; emu_last_crc = 0xD629;
			emu_call();
			return;
	}
l__0074:
	emu_subw(&emu_dx, emu_di);
	goto l__0076;
l__0076:
	emu_subw(&emu_dx, emu_di);
	goto l__0084;
l__007A:
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	goto l__007D;
l__007D:
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	goto l__0084;
l__0082:
	goto l__0084;
l__0084:
	emu_cmpw(&emu_dx, emu_si);
	if ((int16)emu_dx >= (int16)emu_si) goto l__008C;
	emu_ax = emu_dx;
	goto l__008E;
l__008C:
	emu_ax = emu_si;
	goto l__008E;
l__008E:
	emu_dx = emu_ax;
	emu_cmpw(&emu_dx, emu_cx);
	if ((int16)emu_dx <= (int16)emu_cx) goto l__0098;
	emu_ax = emu_dx;
	goto l__009A;
l__0098:
	emu_ax = emu_cx;
	goto l__009A;
l__009A:
	emu_dx = emu_ax;
	goto l__009C;
l__009C:
	emu_ax = emu_dx;
	goto l__00A0;
l__00A0:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
