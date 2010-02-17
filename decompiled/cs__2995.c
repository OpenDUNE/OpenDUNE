/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__2995_0004_001F_FE17()
 *
 * @name f__2995_0004_001F_FE17
 * @implements 2995:0004:001F:FE17 ()
 * @implements 2995:0023:001A:494D
 * @implements 2995:003D:0003:1D08
 * @implements 2995:0040:007E:DF7B
 * @implements 2995:004C:0072:318D
 * @implements 2995:005B:0063:0EF8
 * @implements 2995:0084:003A:51A7
 * @implements 2995:0092:002C:0B20
 * @implements 2995:00B4:000A:65A4
 * @implements 2995:00BE:0015:305F
 * @implements 2995:00D4:0018:7AAB
 * @implements 2995:00E0:000C:D968
 *
 * Called From: 2427:0090:0027:A8F9
 */
void f__2995_0004_001F_FE17()
{
l__0004:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6C76);
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax != 0x3) goto l__003D;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6C91);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0023); emu_cs = 0x252E; emu_Memory_GetBlock2();
l__0023:
	emu_pop(&emu_ax);
	emu_es = emu_dx;
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_cx, 0x0);
	if ((int16)emu_cx <= (int16)0x0) goto l__003D;
	emu_cmpw(&emu_di, 0x140);
	if ((int16)emu_di >= (int16)0x140) goto l__003D;
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.sf) goto l__004C;
	goto l__0040;
l__003D:
	goto l__00E0;
l__0040:
	emu_addw(&emu_di, emu_cx);
	emu_cmpw(&emu_di, 0x0);
	if ((int16)emu_di <= (int16)0x0) goto l__003D;
	emu_cx = emu_di;
	emu_di = 0x0;
l__004C:
	emu_bx = emu_cx;
	emu_addw(&emu_bx, emu_di);
	emu_cmpw(&emu_bx, 0x140);
	if ((int16)emu_bx >= (int16)0x140) {
		emu_cx = 0x140;
		emu_subw(&emu_cx, emu_di);
	}
l__005B:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x140;
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_cx);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_cmpw(&emu_si, 0x0);
	if ((int16)emu_si <= (int16)0x0) goto l__00E0;
	emu_cmpw(&emu_bx, 0x140);
	if ((int16)emu_bx >= (int16)0x140) goto l__00E0;
	emu_orw(&emu_bx, emu_bx);
	if (emu_flags.sf) {
		emu_addw(&emu_bx, emu_si);
		emu_cmpw(&emu_bx, 0x0);
		if ((int16)emu_bx <= (int16)0x0) goto l__00E0;
		emu_si = emu_bx;
		emu_bx = 0x0;
	}
l__0084:
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_bx);
	emu_cmpw(&emu_ax, 0xC8);
	if ((int16)emu_ax >= (int16)0xC8) {
		emu_si = 0xC8;
		emu_subw(&emu_si, emu_bx);
	}
l__0092:
	emu_dx = emu_bx;
	emu_addw(&emu_dx, emu_di);
	emu_andw(&emu_dx, 0x1);
	emu_push(emu_si);
	emu_shlw(&emu_bx, 0x1);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x66EC));
	emu_ax = emu_get_memory16(emu_ds, emu_bx + emu_si, 0x0);
	emu_addw(&emu_di, emu_ax);
	emu_pop(&emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_bx = emu_dx;
	emu_dh = emu_cl;
	emu_andb(&emu_dh, 0x1);
	emu_shrw(&emu_cx, 0x1);
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_cx;
l__00B4:
	emu_cmpw(&emu_cx, 0x0);
	if (emu_cx != 0x0) goto l__00BE;
	emu_cx = 0x1;
	/* Unresolved jump */ emu_ip = 0x00C6; emu_last_cs = 0x2995; emu_last_ip = 0x00BC; emu_last_length = 0x000A; emu_last_crc = 0x65A4; emu_call();
l__00BE:
	emu_get_memory8(emu_es, emu_bx + emu_di, 0x0) = emu_al;
	emu_addw(&emu_di, 0x2);
	if (--emu_cx != 0) goto l__00BE;
	emu_cmpb(&emu_dh, 0x1);
	if (emu_dh == 0x1) {
		emu_cmpb(&emu_bl, 0x0);
		if (emu_bl != 0x0) { /* Unresolved jump */ emu_ip = 0x00D3; emu_last_cs = 0x2995; emu_last_ip = 0x00CE; emu_last_length = 0x0015; emu_last_crc = 0x305F; emu_call(); return; }
		emu_stosb();
	}
	goto l__00D4;
l__00D4:
	emu_xorw(&emu_bx, 0x1);
	emu_addw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_decw(&emu_si);
	if (emu_si != 0) goto l__00B4;
l__00E0:
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
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
