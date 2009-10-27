/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1DD2_0008_004C_D4CF()
 *
 * @name f__1DD2_0008_004C_D4CF
 * @implements 1DD2:0008:004C:D4CF ()
 * @implements 1DD2:003E:0016:C45C
 * @implements 1DD2:0054:000A:3CDA
 *
 * Called From: B491:01BD:001B:DDD1
 * Called From: B491:071A:0019:0CED
 */
void f__1DD2_0008_004C_D4CF()
{
l__0008:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_ds);
	emu_push(emu_si);
	emu_cld();
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00, 0x66EC));
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_shlw(&emu_bx, 0x1);
	emu_si = emu_get_memory16(emu_es, emu_bx + emu_di, 0x0);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_shlw(&emu_bx, 0x1);
	emu_cx = emu_get_memory16(emu_es, emu_bx + emu_di, 0x0);
	emu_shrw(&emu_cx, 0x1);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6C93);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x6C93);
	emu_ds = emu_ax;
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_bx = emu_es;
l__003E:
	emu_rep_cmpsw(emu_ds);
	if (emu_cx == 0) goto l__0054;
	emu_decw(&emu_si);
	emu_decw(&emu_si);
	emu_decw(&emu_di);
	emu_decw(&emu_di);
	emu_ax = emu_get_memory16(emu_ds, emu_si, 0x0);
	emu_stosw();
	emu_es = emu_dx;
	emu_get_memory16(emu_es, emu_si, 0x0) = emu_ax;
	emu_incw(&emu_si);
	emu_incw(&emu_si);
	emu_es = emu_bx;
	goto l__003E;
l__0054:
	emu_pop(&emu_si);
	emu_pop(&emu_ds);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
