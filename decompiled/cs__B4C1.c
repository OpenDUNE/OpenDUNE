/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Math_PercentToValue()
 *
 * @name emu_Math_PercentToValue
 * @implements B4C1:0129:0028:FB8E ()
 * @implements B4C1:0149:0008:CA29
 * @implements B4C1:0151:0004:893F
 *
 * Called From: 34C1:0020:0005:0000
 */
void emu_Math_PercentToValue()
{
l__0129:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_mulw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x80);
	emu_adcw(&emu_dx, 0x0);
	emu_al = emu_ah;
	emu_ah = emu_dl;
	emu_cmpb(&emu_dh, 0x0);
	if (emu_dh != 0x0) {
		emu_ax = 0xFFFF;
	}
l__0149:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__0151;
l__0151:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Math_ValueToPercent()
 *
 * @name emu_Math_ValueToPercent
 * @implements B4C1:0155:002A:AC43 ()
 * @implements B4C1:0169:0016:2275
 * @implements B4C1:017F:0014:52B1
 * @implements B4C1:018E:0005:BBA6
 * @implements B4C1:0193:0004:893F
 *
 * Called From: 34C1:002A:0005:0000
 */
void emu_Math_ValueToPercent()
{
l__0155:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_xorb(&emu_dh, emu_dh);
	emu_dl = emu_ah;
	emu_ah = emu_al;
	emu_xorb(&emu_al, emu_al);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
l__0169:
	emu_cmpw(&emu_dx, 0x0);
	if (emu_dx == 0x0) goto l__017F;
	emu_addw(&emu_ax, 0x1);
	emu_adcw(&emu_dx, 0x0);
	emu_shrw(&emu_dx, 0x1);
	emu_rcrw(&emu_ax, 0x1);
	emu_addw(&emu_bx, 0x1);
	emu_shrw(&emu_bx, 0x1);
	goto l__0169;
l__017F:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0xFFFF;
	emu_cmpw(&emu_bx, 0x0);
	if (emu_bx != 0x0) {
		emu_divw(&emu_ax, emu_bx);
		emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	}
l__018E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__0193;
l__0193:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
