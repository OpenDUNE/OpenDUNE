/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__24E6_006E_001A_7053()
 *
 * @name f__24E6_006E_001A_7053
 * @implements 24E6:006E:001A:7053 ()
 *
 * Called From: 3FF1:0013:0018:A5BC
 * Called From: B480:0013:0018:A5BC
 */
void f__24E6_006E_001A_7053()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x100);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8001);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0088); emu_cs = 0x01F7; f__01F7_2A06_002A_FCED();
	f__24E6_0088_000E_C48A();
}

/**
 * Decompiled function f__24E6_0088_000E_C48A()
 *
 * @name f__24E6_0088_000E_C48A
 * @implements 24E6:0088:000E:C48A ()
 *
 * Called From: 24E6:0088:001A:7053
 */
void f__24E6_0088_000E_C48A()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__24E6_0096_0010_FC7C(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__24E6_00CA_0005_04BA(); return;
}

/**
 * Decompiled function f__24E6_0094_0002_03C4()
 *
 * @name f__24E6_0094_0002_03C4
 * @implements 24E6:0094:0002:03C4 ()
 *
 * Called From: 24E6:00C8:0004:0560
 */
void f__24E6_0094_0002_03C4()
{
	f__24E6_00CA_0005_04BA(); return;
}

/**
 * Decompiled function f__24E6_0096_0010_FC7C()
 *
 * @name f__24E6_0096_0010_FC7C
 * @implements 24E6:0096:0010:FC7C ()
 *
 * Called From: 24E6:0090:000E:C48A
 */
void f__24E6_0096_0010_FC7C()
{
	emu_movw(&emu_ax.x, 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x01F7; f__01F7_3354_0003_0606();
	f__24E6_00A6_000C_13C9();
}

/**
 * Decompiled function f__24E6_00A6_000C_13C9()
 *
 * @name f__24E6_00A6_000C_13C9
 * @implements 24E6:00A6:000C:13C9 ()
 *
 * Called From: 24E6:00A6:0010:FC7C
 */
void f__24E6_00A6_000C_13C9()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00B2); emu_cs = 0x01F7; f__01F7_23CC_0013_04A4();
	f__24E6_00B2_0009_3592();
}

/**
 * Decompiled function f__24E6_00B2_0009_3592()
 *
 * @name f__24E6_00B2_0009_3592
 * @implements 24E6:00B2:0009:3592 ()
 *
 * Called From: 24E6:00B2:000C:13C9
 */
void f__24E6_00B2_0009_3592()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xA);
	if (emu_flags.zf) { f__24E6_00BB_000B_EA76(); return; }
	emu_ip = 0x0092; emu_last_cs = 0x24E6; emu_last_ip = 0x00B9; emu_last_length = 0x0009; emu_last_crc = 0x3592; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__24E6_00BB_000B_EA76()
 *
 * @name f__24E6_00BB_000B_EA76
 * @implements 24E6:00BB:000B:EA76 ()
 *
 * Called From: 24E6:00B7:0009:3592
 */
void f__24E6_00BB_000B_EA76()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x00C6); f__24E6_011A_001A_F90E();
	f__24E6_00C6_0004_0560();
}

/**
 * Decompiled function f__24E6_00C6_0004_0560()
 *
 * @name f__24E6_00C6_0004_0560
 * @implements 24E6:00C6:0004:0560 ()
 *
 * Called From: 24E6:00C6:000B:EA76
 */
void f__24E6_00C6_0004_0560()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__24E6_0094_0002_03C4(); return;
}

/**
 * Decompiled function f__24E6_00CA_0005_04BA()
 *
 * @name f__24E6_00CA_0005_04BA
 * @implements 24E6:00CA:0005:04BA ()
 *
 * Called From: 24E6:0094:0002:03C4
 * Called From: 24E6:0094:000E:C48A
 */
void f__24E6_00CA_0005_04BA()
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
 * Decompiled function f__24E6_011A_001A_F90E()
 *
 * @name f__24E6_011A_001A_F90E
 * @implements 24E6:011A:001A:F90E ()
 *
 * Called From: 24E6:00C3:000B:EA76
 */
void f__24E6_011A_001A_F90E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movb(&emu_cx.l, 0x8);
	f__24E6_014D_0023_CB3E(); return;
}

/**
 * Decompiled function f__24E6_0134_003C_4098()
 *
 * @name f__24E6_0134_003C_4098
 * @implements 24E6:0134:003C:4098 ()
 *
 * Called From: 24E6:0153:0023:CB3E
 * Called From: 24E6:0153:003C:4098
 */
void f__24E6_0134_003C_4098()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xA5);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_addb(&emu_get_memory8(emu_ss, emu_bp, -0x5), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_cx.l);
	emu_decb(&emu_cx.l);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { f__24E6_0134_003C_4098(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_ss, emu_bp, -0x5));
	emu_movb(&emu_dx.h, 0x0);
	emu_xorw(&emu_dx.x, 0xA5);
	emu_cmpw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x0172; emu_last_cs = 0x24E6; emu_last_ip = 0x0169; emu_last_length = 0x003C; emu_last_crc = 0x4098; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__24E6_0176_0004_0F7A(); return;
}

/**
 * Decompiled function f__24E6_014D_0023_CB3E()
 *
 * @name f__24E6_014D_0023_CB3E
 * @implements 24E6:014D:0023:CB3E ()
 *
 * Called From: 24E6:0132:001A:F90E
 */
void f__24E6_014D_0023_CB3E()
{
	emu_movb(&emu_ax.l, emu_cx.l);
	emu_decb(&emu_cx.l);
	emu_orb(&emu_ax.l, emu_ax.l);
	if (!emu_flags.zf) { f__24E6_0134_003C_4098(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_dx.l, emu_get_memory8(emu_ss, emu_bp, -0x5));
	emu_movb(&emu_dx.h, 0x0);
	emu_xorw(&emu_dx.x, 0xA5);
	emu_cmpw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x0172; emu_last_cs = 0x24E6; emu_last_ip = 0x0169; emu_last_length = 0x0023; emu_last_crc = 0xCB3E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0176; emu_last_cs = 0x24E6; emu_last_ip = 0x016E; emu_last_length = 0x0023; emu_last_crc = 0xCB3E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__24E6_0176_0004_0F7A()
 *
 * @name f__24E6_0176_0004_0F7A
 * @implements 24E6:0176:0004:0F7A ()
 *
 * Called From: 24E6:016E:003C:4098
 */
void f__24E6_0176_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
