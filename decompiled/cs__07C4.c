/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__07C4_001A_0045_57F3()
 *
 * @name f__07C4_001A_0045_57F3
 * @implements 07C4:001A:0045:57F3 ()
 *
 * Called From: 0F3F:0193:0008:B97E
 */
void f__07C4_001A_0045_57F3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_subw(&emu_dx.x, emu_cx.x);
	if (!emu_flags.sf) { f__07C4_002F_0030_C1A6(); return; }
	emu_incw(&emu_bx.x);
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!emu_flags.sf) { f__07C4_003E_0021_04E5(); return; }
	emu_incw(&emu_bx.x);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_cmpw(&emu_cx.x, emu_dx.x);
	if (emu_flags.cf) { f__07C4_0044_001B_C47C(); return; }
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	emu_rclw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_incw(&emu_ax.x);
	emu_shrw(&emu_ax.x, 0x1);
	emu_cmpw(&emu_cx.x, emu_ax.x);
	emu_rclw(&emu_bx.x, 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x,  0xA));
	emu_movb(&emu_cx.l, 0x5);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__07C4_002F_0030_C1A6()
 *
 * @name f__07C4_002F_0030_C1A6
 * @implements 07C4:002F:0030:C1A6 ()
 *
 * Called From: 07C4:002A:0045:57F3
 */
void f__07C4_002F_0030_C1A6()
{
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_subw(&emu_cx.x, emu_ax.x);
	if (!emu_flags.sf) { f__07C4_003E_0021_04E5(); return; }
	emu_incw(&emu_bx.x);
	emu_negw(&emu_cx.x, emu_cx.x);
	emu_cmpw(&emu_cx.x, emu_dx.x);
	if (emu_flags.cf) { f__07C4_0044_001B_C47C(); return; }
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	emu_rclw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_incw(&emu_ax.x);
	emu_shrw(&emu_ax.x, 0x1);
	emu_cmpw(&emu_cx.x, emu_ax.x);
	emu_rclw(&emu_bx.x, 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x,  0xA));
	emu_movb(&emu_cx.l, 0x5);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__07C4_003E_0021_04E5()
 *
 * @name f__07C4_003E_0021_04E5
 * @implements 07C4:003E:0021:04E5 ()
 *
 * Called From: 07C4:0039:0045:57F3
 * Called From: 07C4:0039:0030:C1A6
 */
void f__07C4_003E_0021_04E5()
{
	emu_cmpw(&emu_cx.x, emu_dx.x);
	if (emu_flags.cf) { f__07C4_0044_001B_C47C(); return; }
	emu_xchgw(&emu_dx.x, &emu_cx.x);
	emu_rclw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_incw(&emu_ax.x);
	emu_shrw(&emu_ax.x, 0x1);
	emu_cmpw(&emu_cx.x, emu_ax.x);
	emu_rclw(&emu_bx.x, 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x,  0xA));
	emu_movb(&emu_cx.l, 0x5);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__07C4_0044_001B_C47C()
 *
 * @name f__07C4_0044_001B_C47C
 * @implements 07C4:0044:001B:C47C ()
 *
 * Called From: 07C4:0040:0021:04E5
 * Called From: 07C4:0040:0045:57F3
 * Called From: 07C4:0040:0030:C1A6
 */
void f__07C4_0044_001B_C47C()
{
	emu_rclw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_incw(&emu_ax.x);
	emu_shrw(&emu_ax.x, 0x1);
	emu_cmpw(&emu_cx.x, emu_ax.x);
	emu_rclw(&emu_bx.x, 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_cs, emu_bx.x,  0xA));
	emu_movb(&emu_cx.l, 0x5);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
