/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__24E6_006E_001A_719E()
 *
 * @name f__24E6_006E_001A_719E
 * @implements 24E6:006E:001A:719E ()
 *
 * Called From: B480:0013:0018:A09B
 */
void f__24E6_006E_001A_719E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x100);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x8001);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0088); emu_cs = 0x01F7; f__01F7_2A06_002A_9A90();
	f__24E6_0088_000E_273C();
}

/**
 * Decompiled function f__24E6_0088_000E_273C()
 *
 * @name f__24E6_0088_000E_273C
 * @implements 24E6:0088:000E:273C ()
 *
 */
void f__24E6_0088_000E_273C()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_si, 0xFFFF);
	if (!emu_flags.zf) { f__24E6_0096_0010_7426(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__24E6_0094_0002_DA3A(); return;
}

/**
 * Decompiled function f__24E6_0094_0002_DA3A()
 *
 * @name f__24E6_0094_0002_DA3A
 * @implements 24E6:0094:0002:DA3A ()
 *
 * Called From: 24E6:00C8:0004:3E1F
 */
void f__24E6_0094_0002_DA3A()
{
	f__24E6_00CA_0005_8BCF(); return;
}

/**
 * Decompiled function f__24E6_0096_0010_7426()
 *
 * @name f__24E6_0096_0010_7426
 * @implements 24E6:0096:0010:7426 ()
 *
 * Called From: 24E6:0090:000E:273C
 */
void f__24E6_0096_0010_7426()
{
	emu_movw(&emu_ax, 0xA);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x01F7; f__01F7_3354_0003_62AB();
	f__24E6_00A6_000C_1590();
}

/**
 * Decompiled function f__24E6_00A6_000C_1590()
 *
 * @name f__24E6_00A6_000C_1590
 * @implements 24E6:00A6:000C:1590 ()
 *
 */
void f__24E6_00A6_000C_1590()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00B2); emu_cs = 0x01F7; f__01F7_23CC_0013_6B52();
	f__24E6_00B2_0009_107E();
}

/**
 * Decompiled function f__24E6_00B2_0009_107E()
 *
 * @name f__24E6_00B2_0009_107E
 * @implements 24E6:00B2:0009:107E ()
 *
 */
void f__24E6_00B2_0009_107E()
{
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xA);
	if (emu_flags.zf) { f__24E6_00BB_000B_D3E0(); return; }
	/* Unresolved jump */ emu_ip = 0x0092; emu_last_cs = 0x24E6; emu_last_ip = 0x00B9; emu_last_length = 0x0009; emu_last_crc = 0x107E; emu_call();
}

/**
 * Decompiled function f__24E6_00BB_000B_D3E0()
 *
 * @name f__24E6_00BB_000B_D3E0
 * @implements 24E6:00BB:000B:D3E0 ()
 *
 * Called From: 24E6:00B7:0009:107E
 */
void f__24E6_00BB_000B_D3E0()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x00C6); f__24E6_011A_001A_2E2C();
	f__24E6_00C6_0004_3E1F();
}

/**
 * Decompiled function f__24E6_00C6_0004_3E1F()
 *
 * @name f__24E6_00C6_0004_3E1F
 * @implements 24E6:00C6:0004:3E1F ()
 *
 */
void f__24E6_00C6_0004_3E1F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__24E6_0094_0002_DA3A(); return;
}

/**
 * Decompiled function f__24E6_00CA_0005_8BCF()
 *
 * @name f__24E6_00CA_0005_8BCF
 * @implements 24E6:00CA:0005:8BCF ()
 *
 * Called From: 24E6:0094:0002:DA3A
 */
void f__24E6_00CA_0005_8BCF()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__24E6_011A_001A_2E2C()
 *
 * @name f__24E6_011A_001A_2E2C
 * @implements 24E6:011A:001A:2E2C ()
 *
 * Called From: 24E6:00C3:000B:D3E0
 */
void f__24E6_011A_001A_2E2C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x6);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movb(&emu_cl, 0x8);
	f__24E6_014D_0023_9862(); return;
}

/**
 * Decompiled function f__24E6_0134_003C_41F0()
 *
 * @name f__24E6_0134_003C_41F0
 * @implements 24E6:0134:003C:41F0 ()
 *
 * Called From: 24E6:0153:0023:9862
 * Called From: 24E6:0153:003C:41F0
 */
void f__24E6_0134_003C_41F0()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xA5);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_addb(&emu_get_memory8(emu_ss, emu_bp, -0x5), emu_al);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_cl);
	emu_decb(&emu_cl);
	emu_orb(&emu_al, emu_al);
	if (!emu_flags.zf) { f__24E6_0134_003C_41F0(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x9));
	emu_movb(&emu_ah, 0x0);
	emu_movb(&emu_dl, emu_get_memory8(emu_ss, emu_bp, -0x5));
	emu_movb(&emu_dh, 0x0);
	emu_xorw(&emu_dx, 0xA5);
	emu_cmpw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0172; emu_last_cs = 0x24E6; emu_last_ip = 0x0169; emu_last_length = 0x003C; emu_last_crc = 0x41F0; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	f__24E6_0176_0004_893F(); return;
}

/**
 * Decompiled function f__24E6_014D_0023_9862()
 *
 * @name f__24E6_014D_0023_9862
 * @implements 24E6:014D:0023:9862 ()
 *
 * Called From: 24E6:0132:001A:2E2C
 */
void f__24E6_014D_0023_9862()
{
	emu_movb(&emu_al, emu_cl);
	emu_decb(&emu_cl);
	emu_orb(&emu_al, emu_al);
	if (!emu_flags.zf) { f__24E6_0134_003C_41F0(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x9));
	emu_movb(&emu_ah, 0x0);
	emu_movb(&emu_dl, emu_get_memory8(emu_ss, emu_bp, -0x5));
	emu_movb(&emu_dh, 0x0);
	emu_xorw(&emu_dx, 0xA5);
	emu_cmpw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0172; emu_last_cs = 0x24E6; emu_last_ip = 0x0169; emu_last_length = 0x0023; emu_last_crc = 0x9862; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	f__24E6_0176_0004_893F(); return;
}

/**
 * Decompiled function f__24E6_0176_0004_893F()
 *
 * @name f__24E6_0176_0004_893F
 * @implements 24E6:0176:0004:893F ()
 *
 * Called From: 24E6:016E:003C:41F0
 */
void f__24E6_0176_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
