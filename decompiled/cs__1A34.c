/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Structure_GetLinkedUnit()
 *
 * @name emu_Structure_GetLinkedUnit
 * @implements 1A34:3491:0032:AFF8 ()
 * @implements 1A34:34C3:0003:C81A
 * @implements 1A34:34C4:0002:C33A
 * @implements 1A34:34C6:0006:5EA9
 * @implements 1A34:34CC:0004:893F
 *
 * Called From: 0972:07B7:0011:81A2
 * Called From: 0972:07B7:000D:B89A
 * Called From: 0972:0B53:0012:0F5D
 * Called From: 0972:0C77:000D:A320
 * Called From: 0C10:0119:003D:FEA4
 * Called From: 0C10:028B:003C:67AC
 * Called From: 10E4:1823:000B:CD5F
 * Called From: 176C:2168:0011:BB28
 * Called From: 176C:27F5:000D:8210
 * Called From: 1A34:2211:0015:FCE4
 * Called From: 1A34:226B:000B:D285
 */
void emu_Structure_GetLinkedUnit()
{
l__3491:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__34C6;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) goto l__34C6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x34C3); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
l__34C3:
	emu_pop(&emu_cx);
l__34C4:
	goto l__34CC;
l__34C6:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__34C4;
l__34CC:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
