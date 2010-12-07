/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2BA5_0006_009C_A3D1()
 *
 * @name f__2BA5_0006_009C_A3D1
 * @implements 2BA5:0006:009C:A3D1 ()
 * @implements 2BA5:002F:0073:32B7
 * @implements 2BA5:004C:0056:46A5
 * @implements 2BA5:0067:003B:2718
 * @implements 2BA5:0077:002B:8A9F
 * @implements 2BA5:007E:0024:E7C9
 * @implements 2BA5:008A:0018:488A
 * @implements 2BA5:0096:000C:CF6C
 *
 * Called From: 259E:0050:0015:5E4A
 * Called From: B495:0E04:0018:09EF
 * Called From: B495:0F23:0015:AB67
 * Called From: B4ED:0BC1:0017:53DB
 * Called From: B503:13B8:0018:11EB
 * Called From: B518:1562:0037:4A8F
 * Called From: B518:1562:0027:625D
 */
void f__2BA5_0006_009C_A3D1()
{
l__0006:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_cld();
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x9937);
	emu_andb(&emu_bl, 0x1);
	emu_shlb(&emu_bl, 0x1);
	emu_shlb(&emu_bl, 0x1);
	emu_shlb(&emu_bl, 0x1);
	emu_push(emu_ds);
	emu_pop(&emu_es);
	emu_di = 0x70A2;
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x300;
l__002F:
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_rep_cmpsb(emu_ds);
	if (emu_flags.zf) goto l__0096;
	emu_decw(&emu_si);
	emu_decw(&emu_di);
	emu_incw(&emu_cx);
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = emu_cx;
	emu_cx = 0x3;
	emu_divw(&emu_ax, emu_cx);
	emu_orw(&emu_dx, emu_dx);
	if (emu_dx != 0) {
		emu_negw(&emu_dx, emu_dx);
		emu_addw(&emu_dx, 0x3);
		emu_incw(&emu_ax);
	}
l__004C:
	emu_cx = emu_ax;
	emu_addw(&emu_cx, emu_ax);
	emu_addw(&emu_cx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_cmpw(&emu_cx, 0x102);
	if (emu_cx > 0x102) {
		emu_subw(&emu_cx, 0x102);
		emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_cx;
		emu_cx = 0x102;
	}
l__0067:
	emu_subw(&emu_si, emu_dx);
	emu_subw(&emu_di, emu_dx);
	emu_negw(&emu_ax, emu_ax);
	emu_addw(&emu_ax, 0x100);
	emu_dx = 0x3C8;
	emu_outb(emu_dx, emu_al);
	emu_dx = 0x3DA;
l__0077:
	emu_inb(&emu_al, emu_dx);
	emu_andb(&emu_al, 0x8);
	emu_xorb(&emu_al, emu_bl);
	if (emu_flags.zf) goto l__0077;
l__007E:
	emu_inb(&emu_al, emu_dx);
	emu_andb(&emu_al, 0x8);
	emu_xorb(&emu_al, emu_bl);
	if (!emu_flags.zf) goto l__007E;
	emu_dx = 0x3C9;
	emu_pushf();
	emu_cli();
l__008A:
	emu_lodsb(emu_ds);
	emu_stosb();
	emu_outb(emu_dx, emu_al);
	if (--emu_cx != 0) goto l__008A;
	emu_popf();
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0x0) goto l__002F;
l__0096:
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
