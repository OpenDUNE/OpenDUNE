/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__07C4_001A_0045_DCB4()
 *
 * @name f__07C4_001A_0045_DCB4
 * @implements 07C4:001A:0045:DCB4 ()
 * @implements 07C4:002F:0030:5F7C
 * @implements 07C4:003E:0021:782D
 * @implements 07C4:0044:001B:B5CB
 *
 * Called From: 0F3F:0193:0008:77D3
 */
void f__07C4_001A_0045_DCB4()
{
l__001A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_push(emu_dx);
	emu_xorw(&emu_bx, emu_bx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_subw(&emu_dx, emu_cx);
	if (emu_flags.sf) {
		emu_incw(&emu_bx);
		emu_negw(&emu_dx, emu_dx);
	}
	goto l__002F;
l__002F:
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_subw(&emu_cx, emu_ax);
	if (emu_flags.sf) {
		emu_incw(&emu_bx);
		emu_negw(&emu_cx, emu_cx);
	}
	goto l__003E;
l__003E:
	emu_cmpw(&emu_cx, emu_dx);
	if (emu_cx >= emu_dx) {
		emu_xchgw(&emu_dx, &emu_cx);
	}
	goto l__0044;
l__0044:
	emu_rclw(&emu_bx, 0x1);
	emu_ax = emu_dx;
	emu_incw(&emu_ax);
	emu_shrw(&emu_ax, 0x1);
	emu_cmpw(&emu_cx, emu_ax);
	emu_rclw(&emu_bx, 0x1);
	emu_xorw(&emu_ax, emu_ax);
	emu_al = emu_get_memory8(emu_cs, emu_bx, 0xA);
	emu_cl = 0x5;
	emu_shlw(&emu_ax, emu_cl);
	emu_pop(&emu_dx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
