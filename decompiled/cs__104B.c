/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__104B_024D_0012_1DC4()
 *
 * @name f__104B_024D_0012_1DC4
 * @implements 104B:024D:0012:1DC4 ()
 *
 * Called From: B4B5:0F82:0017:CB04
 */
void f__104B_024D_0012_1DC4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x025F); emu_AirUnit_Allocate();
	f__104B_025F_0064_D684();
}

/**
 * Decompiled function f__104B_025F_0064_D684()
 *
 * @name f__104B_025F_0064_D684
 * @implements 104B:025F:0064:D684 ()
 *
 * Called From: 104B:025F:0012:1DC4
 */
void f__104B_025F_0064_D684()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02E2; emu_last_cs = 0x104B; emu_last_ip = 0x026C; emu_last_length = 0x0064; emu_last_crc = 0xD684; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x392E);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, 0x1E);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02C3); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	f__104B_02C3_0013_8AC5();
}

/**
 * Decompiled function f__104B_02C3_0013_8AC5()
 *
 * @name f__104B_02C3_0013_8AC5
 * @implements 104B:02C3:0013:8AC5 ()
 *
 * Called From: 104B:02C3:0064:D684
 */
void f__104B_02C3_0013_8AC5()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, 0x1E);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02D6); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
	f__104B_02D6_0014_4672();
}

/**
 * Decompiled function f__104B_02D6_0014_4672()
 *
 * @name f__104B_02D6_0014_4672
 * @implements 104B:02D6:0014:4672 ()
 *
 * Called From: 104B:02D6:0013:8AC5
 */
void f__104B_02D6_0014_4672()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1C), 0x0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__104B_02EA_0005_8BCF(); return;
}

/**
 * Decompiled function f__104B_02EA_0005_8BCF()
 *
 * @name f__104B_02EA_0005_8BCF
 * @implements 104B:02EA:0005:8BCF ()
 *
 * Called From: 104B:02E8:0014:4672
 */
void f__104B_02EA_0005_8BCF()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
