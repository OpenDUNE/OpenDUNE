/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__16BC_0001_0018_AE47()
 *
 * @name f__16BC_0001_0018_AE47
 * @implements 16BC:0001:0018:AE47 ()
 *
 * Called From: 16C5:03AF:0015:91C5
 */
void f__16BC_0001_0018_AE47()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0015; emu_last_cs = 0x16BC; emu_last_ip = 0x000B; emu_last_length = 0x0018; emu_last_crc = 0xAE47; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__16BC_0019_0028_89C5(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__16BC_0017_0002_D43A(); return;
}

/**
 * Decompiled function f__16BC_0017_0002_D43A()
 *
 * @name f__16BC_0017_0002_D43A
 * @implements 16BC:0017:0002:D43A ()
 *
 * Called From: 16BC:003F:0028:89C5
 */
void f__16BC_0017_0002_D43A()
{
	f__16BC_0041_0003_2E57(); return;
}

/**
 * Decompiled function f__16BC_0019_0028_89C5()
 *
 * @name f__16BC_0019_0028_89C5
 * @implements 16BC:0019:0028:89C5 ()
 *
 * Called From: 16BC:0013:0018:AE47
 */
void f__16BC_0019_0028_89C5()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_si, 0x0));
	emu_incb(&emu_al);
	emu_pop(&emu_es);
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x6F), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	f__16BC_0017_0002_D43A(); return;
}

/**
 * Decompiled function f__16BC_0041_0003_2E57()
 *
 * @name f__16BC_0041_0003_2E57
 * @implements 16BC:0041:0003:2E57 ()
 *
 * Called From: 16BC:0017:0002:D43A
 */
void f__16BC_0041_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__16BC_0044_0027_CB92()
 *
 * @name f__16BC_0044_0027_CB92
 * @implements 16BC:0044:0027:CB92 ()
 *
 * Called From: 06F7:016D:0025:8494
 * Called From: 16C5:039A:0013:6D07
 * Called From: 16C5:039A:0027:420B
 * Called From: 1A34:3750:001B:D4DB
 * Called From: 1A34:3750:0019:E290
 * Called From: 1A34:37D1:0026:D835
 */
void f__16BC_0044_0027_CB92()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0091; emu_last_cs = 0x16BC; emu_last_ip = 0x0050; emu_last_length = 0x0027; emu_last_crc = 0xCB92; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x6F), 0x0);
	if (emu_flags.zf) { f__16BC_0091_0004_9539(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x6F));
	emu_movws(&emu_ax, emu_al);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x006B); emu_cs = 0x104B; emu_AirUnit_Get_ByIndex();
	f__16BC_006B_0026_801B();
}

/**
 * Decompiled function f__16BC_006B_0026_801B()
 *
 * @name f__16BC_006B_0026_801B
 * @implements 16BC:006B:0026:801B ()
 *
 */
void f__16BC_006B_0026_801B()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x6F), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	f__16BC_0095_0004_893F(); return;
}

/**
 * Decompiled function f__16BC_008F_0002_C23A()
 *
 * @name f__16BC_008F_0002_C23A
 * @implements 16BC:008F:0002:C23A ()
 *
 * Called From: 16BC:0093:0004:9539
 */
void f__16BC_008F_0002_C23A()
{
	f__16BC_0095_0004_893F(); return;
}

/**
 * Decompiled function f__16BC_0091_0004_9539()
 *
 * @name f__16BC_0091_0004_9539
 * @implements 16BC:0091:0004:9539 ()
 *
 * Called From: 16BC:005A:0027:CB92
 */
void f__16BC_0091_0004_9539()
{
	emu_xorw(&emu_ax, emu_ax);
	f__16BC_008F_0002_C23A(); return;
}

/**
 * Decompiled function f__16BC_0095_0004_893F()
 *
 * @name f__16BC_0095_0004_893F
 * @implements 16BC:0095:0004:893F ()
 *
 * Called From: 16BC:008F:0002:C23A
 * Called From: 16BC:008F:0026:801B
 */
void f__16BC_0095_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
