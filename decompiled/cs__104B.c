/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__104B_024D_0012_1DC4()
 *
 * @name f__104B_024D_0012_1DC4
 * @implements 104B:024D:0012:1DC4 ()
 * @implements 104B:025F:0064:D684
 * @implements 104B:02C3:0013:8AC5
 * @implements 104B:02D6:0014:4672
 * @implements 104B:02EA:0005:8BCF
 *
 * Called From: B4B5:0F82:0017:CB04
 */
void f__104B_024D_0012_1DC4()
{
l__024D:
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x025F); emu_AirUnit_Allocate();
	goto l__025F;
l__025F:
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02E2; emu_last_cs = 0x104B; emu_last_ip = 0x026C; emu_last_length = 0x0064; emu_last_crc = 0xD684; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x10), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xA), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x8), emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x392E);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, 0x1E);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02C3); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	goto l__02C3;
l__02C3:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, 0x1E);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02D6); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
	goto l__02D6;
l__02D6:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x1C), 0x0);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__02EA;
l__02EA:
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
