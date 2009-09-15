/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0C3A_0009_0029_6B1F()
 *
 * @name f__0C3A_0009_0029_6B1F
 * @implements 0C3A:0009:0029:6B1F ()
 *
 * Called From: 0C3A:1A99:0022:3B9F
 * Called From: B4B5:0826:0012:EC21
 */
void f__0C3A_0009_0029_6B1F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0032); emu_cs = 0x1082; f__1082_01E8_0020_07B4();
	f__0C3A_0032_0017_1FE8();
}

/**
 * Decompiled function f__0C3A_0032_0017_1FE8()
 *
 * @name f__0C3A_0032_0017_1FE8
 * @implements 0C3A:0032:0017:1FE8 ()
 *
 * Called From: 0C3A:0032:0029:6B1F
 */
void f__0C3A_0032_0017_1FE8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__0C3A_0049_00D1_3B87(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x01B4; emu_last_cs = 0x0C3A; emu_last_ip = 0x0046; emu_last_length = 0x0017; emu_last_crc = 0x1FE8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_0046_0003_06E6()
 *
 * @name f__0C3A_0046_0003_06E6
 * @implements 0C3A:0046:0003:06E6 ()
 *
 * Called From: 0C3A:01B1:0009:1E3D
 */
void f__0C3A_0046_0003_06E6()
{
	f__0C3A_01B4_0006_137A(); return;
}

/**
 * Decompiled function f__0C3A_0049_00D1_3B87()
 *
 * @name f__0C3A_0049_00D1_3B87
 * @implements 0C3A:0049:00D1:3B87 ()
 *
 * Called From: 0C3A:0040:0017:1FE8
 */
void f__0C3A_0049_00D1_3B87()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x47), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0xFFFF);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__0C3A_0095_0085_1426(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	emu_cmpws(&emu_si, 0xF);
	if (!emu_flags.zf) { emu_ip = 0x00B5; emu_last_cs = 0x0C3A; emu_last_ip = 0x0098; emu_last_length = 0x00D1; emu_last_crc = 0x3B87; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x49), emu_ax.x);
	emu_cmpws(&emu_si, 0x10);
	if (!emu_flags.zf) { emu_ip = 0x00D5; emu_last_cs = 0x0C3A; emu_last_ip = 0x00B8; emu_last_length = 0x00D1; emu_last_crc = 0x3B87; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x30));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x49), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0104; emu_last_cs = 0x0C3A; emu_last_ip = 0x00F5; emu_last_length = 0x00D1; emu_last_crc = 0x3B87; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x3);
	if (!emu_flags.zf) { emu_ip = 0x0104; emu_last_cs = 0x0C3A; emu_last_ip = 0x00FA; emu_last_length = 0x00D1; emu_last_crc = 0x3B87; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x4E), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
	if (emu_flags.zf) { emu_ip = 0x012D; emu_last_cs = 0x0C3A; emu_last_ip = 0x010D; emu_last_length = 0x00D1; emu_last_crc = 0x3B87; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x011A); emu_ip = 0x25EC; emu_last_cs = 0x0C3A; emu_last_ip = 0x0117; emu_last_length = 0x00D1; emu_last_crc = 0x3B87; emu_call(); // Jump does not resolve
	f__0C3A_011A_000A_AB09();
}

/**
 * Decompiled function f__0C3A_0095_0085_1426()
 *
 * @name f__0C3A_0095_0085_1426
 * @implements 0C3A:0095:0085:1426 ()
 *
 * Called From: 0C3A:008A:00D1:3B87
 */
void f__0C3A_0095_0085_1426()
{
	emu_cmpws(&emu_si, 0xF);
	if (!emu_flags.zf) { f__0C3A_00B5_0065_FB27(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x49), emu_ax.x);
	emu_cmpws(&emu_si, 0x10);
	if (!emu_flags.zf) { emu_ip = 0x00D5; emu_last_cs = 0x0C3A; emu_last_ip = 0x00B8; emu_last_length = 0x0085; emu_last_crc = 0x1426; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x30));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x49), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0104; emu_last_cs = 0x0C3A; emu_last_ip = 0x00F5; emu_last_length = 0x0085; emu_last_crc = 0x1426; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x3);
	if (!emu_flags.zf) { emu_ip = 0x0104; emu_last_cs = 0x0C3A; emu_last_ip = 0x00FA; emu_last_length = 0x0085; emu_last_crc = 0x1426; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x4E), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
	if (emu_flags.zf) { emu_ip = 0x012D; emu_last_cs = 0x0C3A; emu_last_ip = 0x010D; emu_last_length = 0x0085; emu_last_crc = 0x1426; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x011A); emu_ip = 0x25EC; emu_last_cs = 0x0C3A; emu_last_ip = 0x0117; emu_last_length = 0x0085; emu_last_crc = 0x1426; emu_call(); // Jump does not resolve
	f__0C3A_011A_000A_AB09();
}

/**
 * Decompiled function f__0C3A_00B5_0065_FB27()
 *
 * @name f__0C3A_00B5_0065_FB27
 * @implements 0C3A:00B5:0065:FB27 ()
 *
 * Called From: 0C3A:0098:0085:1426
 */
void f__0C3A_00B5_0065_FB27()
{
	emu_cmpws(&emu_si, 0x10);
	if (!emu_flags.zf) { f__0C3A_00D5_0045_28DE(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x30));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x49), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0104; emu_last_cs = 0x0C3A; emu_last_ip = 0x00F5; emu_last_length = 0x0065; emu_last_crc = 0xFB27; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x3);
	if (!emu_flags.zf) { emu_ip = 0x0104; emu_last_cs = 0x0C3A; emu_last_ip = 0x00FA; emu_last_length = 0x0065; emu_last_crc = 0xFB27; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x4E), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
	if (emu_flags.zf) { emu_ip = 0x012D; emu_last_cs = 0x0C3A; emu_last_ip = 0x010D; emu_last_length = 0x0065; emu_last_crc = 0xFB27; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x011A); emu_ip = 0x25EC; emu_last_cs = 0x0C3A; emu_last_ip = 0x0117; emu_last_length = 0x0065; emu_last_crc = 0xFB27; emu_call(); // Jump does not resolve
	f__0C3A_011A_000A_AB09();
}

/**
 * Decompiled function f__0C3A_00D5_0045_28DE()
 *
 * @name f__0C3A_00D5_0045_28DE
 * @implements 0C3A:00D5:0045:28DE ()
 *
 * Called From: 0C3A:00B8:0065:FB27
 */
void f__0C3A_00D5_0045_28DE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__0C3A_0104_0016_6687(); return; }
	emu_cmpws(&emu_si, 0x3);
	if (!emu_flags.zf) { f__0C3A_0104_0016_6687(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x4E), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
	if (emu_flags.zf) { emu_ip = 0x012D; emu_last_cs = 0x0C3A; emu_last_ip = 0x010D; emu_last_length = 0x0045; emu_last_crc = 0x28DE; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x011A); emu_ip = 0x25EC; emu_last_cs = 0x0C3A; emu_last_ip = 0x0117; emu_last_length = 0x0045; emu_last_crc = 0x28DE; emu_call(); // Jump does not resolve
	f__0C3A_011A_000A_AB09();
}

/**
 * Decompiled function f__0C3A_0104_0016_6687()
 *
 * @name f__0C3A_0104_0016_6687
 * @implements 0C3A:0104:0016:6687 ()
 *
 * Called From: 0C3A:00F5:0045:28DE
 * Called From: 0C3A:00FA:0045:28DE
 */
void f__0C3A_0104_0016_6687()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
	if (emu_flags.zf) { f__0C3A_012D_0018_8FE3(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x011A); f__0C3A_25EC_0011_6FF5();
	f__0C3A_011A_000A_AB09();
}

/**
 * Decompiled function f__0C3A_011A_000A_AB09()
 *
 * @name f__0C3A_011A_000A_AB09
 * @implements 0C3A:011A:000A:AB09 ()
 *
 * Called From: 0C3A:011A:0016:6687
 */
void f__0C3A_011A_000A_AB09()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0C3A_0124_0021_2CEE(); return; }
	emu_movb(&emu_ax.l, 0x64);
	emu_ip = 0x0126; emu_last_cs = 0x0C3A; emu_last_ip = 0x0122; emu_last_length = 0x000A; emu_last_crc = 0xAB09; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_0124_0021_2CEE()
 *
 * @name f__0C3A_0124_0021_2CEE
 * @implements 0C3A:0124:0021:2CEE ()
 *
 * Called From: 0C3A:011E:000A:AB09
 */
void f__0C3A_0124_0021_2CEE()
{
	emu_movb(&emu_ax.l, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4C), 0xFFFF);
	emu_movw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0145); f__0C3A_142D_0018_192B();
	f__0C3A_0145_0017_9D0B();
}

/**
 * Decompiled function f__0C3A_012D_0018_8FE3()
 *
 * @name f__0C3A_012D_0018_8FE3
 * @implements 0C3A:012D:0018:8FE3 ()
 *
 * Called From: 0C3A:010D:0016:6687
 */
void f__0C3A_012D_0018_8FE3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4C), 0xFFFF);
	emu_movw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0145); f__0C3A_142D_0018_192B();
	f__0C3A_0145_0017_9D0B();
}

/**
 * Decompiled function f__0C3A_0145_0017_9D0B()
 *
 * @name f__0C3A_0145_0017_9D0B
 * @implements 0C3A:0145:0017:9D0B ()
 *
 * Called From: 0C3A:0145:0021:2CEE
 * Called From: 0C3A:0145:0018:8FE3
 */
void f__0C3A_0145_0017_9D0B()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x50), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__0C3A_017C_0011_8388(); return; }
	emu_ip = 0x0163; emu_last_cs = 0x0C3A; emu_last_ip = 0x015A; emu_last_length = 0x0017; emu_last_crc = 0x9D0B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_017C_0011_8388()
 *
 * @name f__0C3A_017C_0011_8388
 * @implements 0C3A:017C:0011:8388 ()
 *
 * Called From: 0C3A:0158:0017:9D0B
 */
void f__0C3A_017C_0011_8388()
{
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__0C3A_01AB_0009_1E3D(); return; }
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x018D); f__0C3A_01BA_0018_186F();
	f__0C3A_018D_0012_679F();
}

/**
 * Decompiled function f__0C3A_018D_0012_679F()
 *
 * @name f__0C3A_018D_0012_679F
 * @implements 0C3A:018D:0012:679F ()
 *
 * Called From: 0C3A:018D:0011:8388
 */
void f__0C3A_018D_0012_679F()
{
	emu_addws(&emu_sp, 0x6);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0C3A_01AB_0009_1E3D(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x019F); emu_cs = 0x1082; emu_ip = 0x04C4; emu_last_cs = 0x0C3A; emu_last_ip = 0x019A; emu_last_length = 0x0012; emu_last_crc = 0x679F; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0C3A_01AB_0009_1E3D()
 *
 * @name f__0C3A_01AB_0009_1E3D
 * @implements 0C3A:01AB:0009:1E3D ()
 *
 * Called From: 0C3A:017F:0011:8388
 * Called From: 0C3A:0192:0012:679F
 */
void f__0C3A_01AB_0009_1E3D()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0C3A_0046_0003_06E6(); return;
}

/**
 * Decompiled function f__0C3A_01B4_0006_137A()
 *
 * @name f__0C3A_01B4_0006_137A
 * @implements 0C3A:01B4:0006:137A ()
 *
 * Called From: 0C3A:0046:0003:06E6
 */
void f__0C3A_01B4_0006_137A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_01BA_0018_186F()
 *
 * @name f__0C3A_01BA_0018_186F
 * @implements 0C3A:01BA:0018:186F ()
 *
 * Called From: 0AEC:0509:0024:69F0
 * Called From: 0C3A:018A:0011:8388
 */
void f__0C3A_01BA_0018_186F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x14);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_01D2_0032_7FA0(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0768; emu_last_cs = 0x0C3A; emu_last_ip = 0x01CF; emu_last_length = 0x0018; emu_last_crc = 0x186F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_01CD_0005_0F7A()
 *
 * @name f__0C3A_01CD_0005_0F7A
 * @implements 0C3A:01CD:0005:0F7A ()
 *
 * Called From: 0C3A:052F:001B:F8BE
 */
void f__0C3A_01CD_0005_0F7A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C3A_0768_0006_137A(); return;
}

/**
 * Decompiled function f__0C3A_01CF_0003_051A()
 *
 * @name f__0C3A_01CF_0003_051A
 * @implements 0C3A:01CF:0003:051A ()
 *
 * Called From: 0C3A:0505:0008:54EC
 * Called From: 0C3A:0765:0015:858F
 */
void f__0C3A_01CF_0003_051A()
{
	f__0C3A_0768_0006_137A(); return;
}

/**
 * Decompiled function f__0C3A_01D2_0032_7FA0()
 *
 * @name f__0C3A_01D2_0032_7FA0
 * @implements 0C3A:01D2:0032:7FA0 ()
 *
 * Called From: 0C3A:01CB:0018:186F
 */
void f__0C3A_01D2_0032_7FA0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x01FF; emu_last_cs = 0x0C3A; emu_last_ip = 0x01F6; emu_last_length = 0x0032; emu_last_crc = 0x7FA0; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__0C3A_0204_000C_0431(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0206; emu_last_cs = 0x0C3A; emu_last_ip = 0x0202; emu_last_length = 0x0032; emu_last_crc = 0x7FA0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_0204_000C_0431()
 *
 * @name f__0C3A_0204_000C_0431
 * @implements 0C3A:0204:000C:0431 ()
 *
 * Called From: 0C3A:01FD:0032:7FA0
 */
void f__0C3A_0204_000C_0431()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpws(&emu_di, 0xFF);
	if (!emu_flags.zf) { f__0C3A_0210_000D_BF74(); return; }
	emu_ip = 0x01CD; emu_last_cs = 0x0C3A; emu_last_ip = 0x020E; emu_last_length = 0x000C; emu_last_crc = 0x0431; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_0210_000D_BF74()
 *
 * @name f__0C3A_0210_000D_BF74
 * @implements 0C3A:0210:000D:BF74 ()
 *
 * Called From: 0C3A:020C:000C:0431
 */
void f__0C3A_0210_000D_BF74()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xE);
	if (emu_flags.zf) { emu_ip = 0x021D; emu_last_cs = 0x0C3A; emu_last_ip = 0x0218; emu_last_length = 0x000D; emu_last_crc = 0xBF74; emu_call(); return; } // Jump does not resolve
	f__0C3A_02E1_0017_8D01(); return;
}

/**
 * Decompiled function f__0C3A_02E1_0017_8D01()
 *
 * @name f__0C3A_02E1_0017_8D01
 * @implements 0C3A:02E1:0017:8D01 ()
 *
 * Called From: 0C3A:021A:000D:BF74
 */
void f__0C3A_02E1_0017_8D01()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x0);
	if (emu_flags.zf) { f__0C3A_02F8_0032_F933(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x1);
	if (emu_flags.zf) { emu_ip = 0x02F8; emu_last_cs = 0x0C3A; emu_last_ip = 0x02F3; emu_last_length = 0x0017; emu_last_crc = 0x8D01; emu_call(); return; } // Jump does not resolve
	f__0C3A_0508_000F_D908(); return;
}

/**
 * Decompiled function f__0C3A_02F8_0032_F933()
 *
 * @name f__0C3A_02F8_0032_F933
 * @implements 0C3A:02F8:0032:F933 ()
 *
 * Called From: 0C3A:02E9:0017:8D01
 */
void f__0C3A_02F8_0032_F933()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2D52));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_movw(&emu_dx.x, 0x12);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x2C64);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	f__0C3A_03F2_000B_B196(); return;
}

/**
 * Decompiled function f__0C3A_032A_0017_F3E5()
 *
 * @name f__0C3A_032A_0017_F3E5
 * @implements 0C3A:032A:0017:F3E5 ()
 *
 * Called From: 0C3A:03FA:000B:B196
 */
void f__0C3A_032A_0017_F3E5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_si, emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x2);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0341); f__0C3A_0C5C_004D_4725();
	f__0C3A_0341_0009_D5CC();
}

/**
 * Decompiled function f__0C3A_0341_0009_D5CC()
 *
 * @name f__0C3A_0341_0009_D5CC
 * @implements 0C3A:0341:0009:D5CC ()
 *
 * Called From: 0C3A:0341:0017:F3E5
 */
void f__0C3A_0341_0009_D5CC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0C3A_034A_006A_F091(); return; }
	emu_ip = 0x03EF; emu_last_cs = 0x0C3A; emu_last_ip = 0x0347; emu_last_length = 0x0009; emu_last_crc = 0xD5CC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_034A_006A_F091()
 *
 * @name f__0C3A_034A_006A_F091
 * @implements 0C3A:034A:006A:F091 ()
 *
 * Called From: 0C3A:0345:0009:D5CC
 */
void f__0C3A_034A_006A_F091()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F8));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_dx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xF8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), emu_ax.l);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), 0x8000);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x03BF; emu_last_cs = 0x0C3A; emu_last_ip = 0x03A8; emu_last_length = 0x006A; emu_last_crc = 0xF091; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03B4); emu_cs = 0x0F3F; f__0F3F_009D_0017_C9BF();
	f__0C3A_03B4_0008_7FAC();
}

/**
 * Decompiled function f__0C3A_03B4_0008_7FAC()
 *
 * @name f__0C3A_03B4_0008_7FAC
 * @implements 0C3A:03B4:0008:7FAC ()
 *
 * Called From: 0C3A:03B4:006A:F091
 */
void f__0C3A_03B4_0008_7FAC()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03BC); emu_cs = 0x34CD; ovl__34CD(31);
	f__0C3A_03BC_0009_C04D();
}

/**
 * Decompiled function f__0C3A_03BC_0009_C04D()
 *
 * @name f__0C3A_03BC_0009_C04D
 * @implements 0C3A:03BC:0009:C04D ()
 *
 * Called From: 0C3A:03BC:0008:7FAC
 */
void f__0C3A_03BC_0009_C04D()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03C5); emu_cs = 0x34CD; ovl__34CD(9);
	f__0C3A_03C5_0022_EFCA();
}

/**
 * Decompiled function f__0C3A_03C5_0022_EFCA()
 *
 * @name f__0C3A_03C5_0022_EFCA
 * @implements 0C3A:03C5:0022:EFCA ()
 *
 * Called From: 0C3A:03C5:0009:C04D
 */
void f__0C3A_03C5_0022_EFCA()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x03DB; emu_last_cs = 0x0C3A; emu_last_ip = 0x03C8; emu_last_length = 0x0022; emu_last_crc = 0xEFCA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03E7); emu_cs = 0x34CD; ovl__34CD(29);
	f__0C3A_03E7_0016_6F76();
}

/**
 * Decompiled function f__0C3A_03E7_0016_6F76()
 *
 * @name f__0C3A_03E7_0016_6F76
 * @implements 0C3A:03E7:0016:6F76 ()
 *
 * Called From: 0C3A:03E7:0022:EFCA
 */
void f__0C3A_03E7_0016_6F76()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_03FD_000D_BC30(); return; }
	emu_ip = 0x032A; emu_last_cs = 0x0C3A; emu_last_ip = 0x03FA; emu_last_length = 0x0016; emu_last_crc = 0x6F76; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_03F2_000B_B196()
 *
 * @name f__0C3A_03F2_000B_B196
 * @implements 0C3A:03F2:000B:B196 ()
 *
 * Called From: 0C3A:0327:0032:F933
 */
void f__0C3A_03F2_000B_B196()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x03FD; emu_last_cs = 0x0C3A; emu_last_ip = 0x03F8; emu_last_length = 0x000B; emu_last_crc = 0xB196; emu_call(); return; } // Jump does not resolve
	f__0C3A_032A_0017_F3E5(); return;
}

/**
 * Decompiled function f__0C3A_03FD_000D_BC30()
 *
 * @name f__0C3A_03FD_000D_BC30
 * @implements 0C3A:03FD:000D:BC30 ()
 *
 * Called From: 0C3A:03F8:0016:6F76
 */
void f__0C3A_03FD_000D_BC30()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x1);
	if (emu_flags.zf) { emu_ip = 0x040A; emu_last_cs = 0x0C3A; emu_last_ip = 0x0405; emu_last_length = 0x000D; emu_last_crc = 0xBC30; emu_call(); return; } // Jump does not resolve
	f__0C3A_04EF_0011_B7A6(); return;
}

/**
 * Decompiled function f__0C3A_04EF_0011_B7A6()
 *
 * @name f__0C3A_04EF_0011_B7A6
 * @implements 0C3A:04EF:0011:B7A6 ()
 *
 * Called From: 0C3A:0407:000D:BC30
 */
void f__0C3A_04EF_0011_B7A6()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0502; emu_last_cs = 0x0C3A; emu_last_ip = 0x04F3; emu_last_length = 0x0011; emu_last_crc = 0xB7A6; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0500); emu_cs = 0x1082; f__1082_0325_0018_A45D();
	f__0C3A_0500_0008_54EC();
}

/**
 * Decompiled function f__0C3A_0500_0008_54EC()
 *
 * @name f__0C3A_0500_0008_54EC
 * @implements 0C3A:0500:0008:54EC ()
 *
 * Called From: 0C3A:0500:0011:B7A6
 */
void f__0C3A_0500_0008_54EC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	f__0C3A_01CF_0003_051A(); return;
}

/**
 * Decompiled function f__0C3A_0508_000F_D908()
 *
 * @name f__0C3A_0508_000F_D908
 * @implements 0C3A:0508:000F:D908 ()
 *
 * Called From: 0C3A:02F5:0017:8D01
 */
void f__0C3A_0508_000F_D908()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0517); f__0C3A_0C5C_004D_4725();
	f__0C3A_0517_001B_F8BE();
}

/**
 * Decompiled function f__0C3A_0517_001B_F8BE()
 *
 * @name f__0C3A_0517_001B_F8BE
 * @implements 0C3A:0517:001B:F8BE ()
 *
 * Called From: 0C3A:0517:000F:D908
 */
void f__0C3A_0517_001B_F8BE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0532; emu_last_cs = 0x0C3A; emu_last_ip = 0x0520; emu_last_length = 0x001B; emu_last_crc = 0xF8BE; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__0C3A_0532_0018_9E4E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0532; emu_last_cs = 0x0C3A; emu_last_ip = 0x052D; emu_last_length = 0x001B; emu_last_crc = 0xF8BE; emu_call(); return; } // Jump does not resolve
	f__0C3A_01CD_0005_0F7A(); return;
}

/**
 * Decompiled function f__0C3A_0532_0018_9E4E()
 *
 * @name f__0C3A_0532_0018_9E4E
 * @implements 0C3A:0532:0018:9E4E ()
 *
 * Called From: 0C3A:0526:001B:F8BE
 */
void f__0C3A_0532_0018_9E4E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x0555; emu_last_cs = 0x0C3A; emu_last_ip = 0x053E; emu_last_length = 0x0018; emu_last_crc = 0x9E4E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x054A); emu_cs = 0x0F3F; f__0F3F_009D_0017_C9BF();
	f__0C3A_054A_0008_7FAC();
}

/**
 * Decompiled function f__0C3A_054A_0008_7FAC()
 *
 * @name f__0C3A_054A_0008_7FAC
 * @implements 0C3A:054A:0008:7FAC ()
 *
 * Called From: 0C3A:054A:0018:9E4E
 */
void f__0C3A_054A_0008_7FAC()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0552); emu_cs = 0x34CD; ovl__34CD(31);
	f__0C3A_0552_0039_E8A8();
}

/**
 * Decompiled function f__0C3A_0552_0039_E8A8()
 *
 * @name f__0C3A_0552_0039_E8A8
 * @implements 0C3A:0552:0039:E8A8 ()
 *
 * Called From: 0C3A:0552:0008:7FAC
 */
void f__0C3A_0552_0039_E8A8()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x057D; emu_last_cs = 0x0C3A; emu_last_ip = 0x0573; emu_last_length = 0x0039; emu_last_crc = 0xE8A8; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFB);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x058B); emu_cs = 0x0F3F; f__0F3F_009D_0017_C9BF();
	f__0C3A_058B_0050_3561();
}

/**
 * Decompiled function f__0C3A_058B_0050_3561()
 *
 * @name f__0C3A_058B_0050_3561
 * @implements 0C3A:058B:0050:3561 ()
 *
 * Called From: 0C3A:058B:0039:E8A8
 */
void f__0C3A_058B_0050_3561()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), 0xFF00);
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0xFF00);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x49), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_060C_0039_5D97(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_shlw(&emu_bx.x, 0x1);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x2D52));
	emu_push(emu_cs); emu_push(0x05DB); emu_cs = 0x34C1; ovl__34C1(2);
	f__0C3A_05DB_0017_84FB();
}

/**
 * Decompiled function f__0C3A_05DB_0017_84FB()
 *
 * @name f__0C3A_05DB_0017_84FB
 * @implements 0C3A:05DB:0017:84FB ()
 *
 * Called From: 0C3A:05DB:0050:3561
 */
void f__0C3A_05DB_0017_84FB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_sarw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05F2); emu_cs = 0x34C1; ovl__34C1(0);
	f__0C3A_05F2_001A_3FCD();
}

/**
 * Decompiled function f__0C3A_05F2_001A_3FCD()
 *
 * @name f__0C3A_05F2_001A_3FCD
 * @implements 0C3A:05F2:001A:3FCD ()
 *
 * Called From: 0C3A:05F2:0017:84FB
 */
void f__0C3A_05F2_001A_3FCD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x400);
	f__0C3A_061A_002B_AA15(); return;
}

/**
 * Decompiled function f__0C3A_060C_0039_5D97()
 *
 * @name f__0C3A_060C_0039_5D97
 * @implements 0C3A:060C:0039:5D97 ()
 *
 * Called From: 0C3A:05C1:0050:3561
 */
void f__0C3A_060C_0039_5D97()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x400);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3918);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0645); emu_cs = 0x15C2; f__15C2_0395_0044_6B4F();
	f__0C3A_0645_003D_4424();
}

/**
 * Decompiled function f__0C3A_061A_002B_AA15()
 *
 * @name f__0C3A_061A_002B_AA15
 * @implements 0C3A:061A:002B:AA15 ()
 *
 * Called From: 0C3A:060A:001A:3FCD
 */
void f__0C3A_061A_002B_AA15()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x400);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3918);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0645); emu_cs = 0x15C2; f__15C2_0395_0044_6B4F();
	f__0C3A_0645_003D_4424();
}

/**
 * Decompiled function f__0C3A_0645_003D_4424()
 *
 * @name f__0C3A_0645_003D_4424
 * @implements 0C3A:0645:003D:4424 ()
 *
 * Called From: 0C3A:0645:0039:5D97
 * Called From: 0C3A:0645:002B:AA15
 */
void f__0C3A_0645_003D_4424()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1E), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x0);
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { emu_ip = 0x06A0; emu_last_cs = 0x0C3A; emu_last_ip = 0x065D; emu_last_length = 0x003D; emu_last_crc = 0x4424; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0682); emu_cs = 0x15C2; f__15C2_0395_0044_6B4F();
	f__0C3A_0682_001B_7808();
}

/**
 * Decompiled function f__0C3A_0682_001B_7808()
 *
 * @name f__0C3A_0682_001B_7808
 * @implements 0C3A:0682:001B:7808 ()
 *
 * Called From: 0C3A:0682:003D:4424
 */
void f__0C3A_0682_001B_7808()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x069D); emu_cs = 0x15C2; f__15C2_03D9_0011_073C();
	f__0C3A_069D_002C_7D7C();
}

/**
 * Decompiled function f__0C3A_069D_002C_7D7C()
 *
 * @name f__0C3A_069D_002C_7D7C
 * @implements 0C3A:069D:002C:7D7C ()
 *
 * Called From: 0C3A:069D:001B:7808
 */
void f__0C3A_069D_002C_7D7C()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2D52));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_movw(&emu_dx.x, 0x12);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x2C64);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__0C3A_06EB_001D_DAC2(); return;
}

/**
 * Decompiled function f__0C3A_06C9_0017_8C2C()
 *
 * @name f__0C3A_06C9_0017_8C2C
 * @implements 0C3A:06C9:0017:8C2C ()
 *
 * Called From: 0C3A:06EE:001D:DAC2
 * Called From: 0C3A:06EE:0020:DAA6
 */
void f__0C3A_06C9_0017_8C2C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x06E0); emu_cs = 0x34CD; ovl__34CD(26);
	f__0C3A_06E0_0008_79E4();
}

/**
 * Decompiled function f__0C3A_06E0_0008_79E4()
 *
 * @name f__0C3A_06E0_0008_79E4
 * @implements 0C3A:06E0:0008:79E4 ()
 *
 * Called From: 0C3A:06E0:0017:8C2C
 */
void f__0C3A_06E0_0008_79E4()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06E8); emu_cs = 0x1A34; f__1A34_10EC_000E_8DDF();
	f__0C3A_06E8_0020_DAA6();
}

/**
 * Decompiled function f__0C3A_06E8_0020_DAA6()
 *
 * @name f__0C3A_06E8_0020_DAA6
 * @implements 0C3A:06E8:0020:DAA6 ()
 *
 * Called From: 0C3A:06E8:0008:79E4
 */
void f__0C3A_06E8_0020_DAA6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_06C9_0017_8C2C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x9);
	if (!emu_flags.zf) { f__0C3A_0711_0015_E473(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0708); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__0C3A_0708_001E_AA7E();
}

/**
 * Decompiled function f__0C3A_06EB_001D_DAC2()
 *
 * @name f__0C3A_06EB_001D_DAC2
 * @implements 0C3A:06EB:001D:DAC2 ()
 *
 * Called From: 0C3A:06C7:002C:7D7C
 */
void f__0C3A_06EB_001D_DAC2()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_06C9_0017_8C2C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x0711; emu_last_cs = 0x0C3A; emu_last_ip = 0x06F8; emu_last_length = 0x001D; emu_last_crc = 0xDAC2; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0708); emu_cs = 0x10BE; emu_ip = 0x08B3; emu_last_cs = 0x0C3A; emu_last_ip = 0x0703; emu_last_length = 0x001D; emu_last_crc = 0xDAC2; emu_call(); // Jump does not resolve
	f__0C3A_0708_001E_AA7E();
}

/**
 * Decompiled function f__0C3A_0708_001E_AA7E()
 *
 * @name f__0C3A_0708_001E_AA7E
 * @implements 0C3A:0708:001E:AA7E ()
 *
 * Called From: 0C3A:0708:0020:DAA6
 */
void f__0C3A_0708_001E_AA7E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x1A));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0727; emu_last_cs = 0x0C3A; emu_last_ip = 0x0716; emu_last_length = 0x001E; emu_last_crc = 0xAA7E; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0726); f__0C3A_1F70_0010_7894();
	f__0C3A_0726_000C_73C1();
}

/**
 * Decompiled function f__0C3A_0711_0015_E473()
 *
 * @name f__0C3A_0711_0015_E473
 * @implements 0C3A:0711:0015:E473 ()
 *
 * Called From: 0C3A:06F8:0020:DAA6
 */
void f__0C3A_0711_0015_E473()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { f__0C3A_0727_000B_E3C4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0726); f__0C3A_1F70_0010_7894();
	f__0C3A_0726_000C_73C1();
}

/**
 * Decompiled function f__0C3A_0726_000C_73C1()
 *
 * @name f__0C3A_0726_000C_73C1
 * @implements 0C3A:0726:000C:73C1 ()
 *
 * Called From: 0C3A:0726:001E:AA7E
 * Called From: 0C3A:0726:0015:E473
 */
void f__0C3A_0726_000C_73C1()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0732); f__0C3A_092A_0013_5F3A();
	f__0C3A_0732_0010_F218();
}

/**
 * Decompiled function f__0C3A_0727_000B_E3C4()
 *
 * @name f__0C3A_0727_000B_E3C4
 * @implements 0C3A:0727:000B:E3C4 ()
 *
 * Called From: 0C3A:0716:0015:E473
 */
void f__0C3A_0727_000B_E3C4()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0732); f__0C3A_092A_0013_5F3A();
	f__0C3A_0732_0010_F218();
}

/**
 * Decompiled function f__0C3A_0732_0010_F218()
 *
 * @name f__0C3A_0732_0010_F218
 * @implements 0C3A:0732:0010:F218 ()
 *
 * Called From: 0C3A:0732:000B:E3C4
 * Called From: 0C3A:0732:000C:73C1
 */
void f__0C3A_0732_0010_F218()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0742); f__0C3A_13BD_0022_281A();
	f__0C3A_0742_0011_7DD2();
}

/**
 * Decompiled function f__0C3A_0742_0011_7DD2()
 *
 * @name f__0C3A_0742_0011_7DD2
 * @implements 0C3A:0742:0011:7DD2 ()
 *
 * Called From: 0C3A:0742:0010:F218
 */
void f__0C3A_0742_0011_7DD2()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0753); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__0C3A_0753_0015_858F();
}

/**
 * Decompiled function f__0C3A_0753_0015_858F()
 *
 * @name f__0C3A_0753_0015_858F
 * @implements 0C3A:0753:0015:858F ()
 *
 * Called From: 0C3A:0753:0011:7DD2
 */
void f__0C3A_0753_0015_858F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	f__0C3A_01CF_0003_051A(); return;
}

/**
 * Decompiled function f__0C3A_0768_0006_137A()
 *
 * @name f__0C3A_0768_0006_137A
 * @implements 0C3A:0768:0006:137A ()
 *
 * Called From: 0C3A:01CF:0003:051A
 * Called From: 0C3A:01CF:0005:0F7A
 */
void f__0C3A_0768_0006_137A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_092A_0013_5F3A()
 *
 * @name f__0C3A_092A_0013_5F3A
 * @implements 0C3A:092A:0013:5F3A ()
 *
 * Called From: 0C3A:072F:000B:E3C4
 * Called From: 0C3A:072F:000C:73C1
 * Called From: 0C3A:13B6:0014:02AE
 * Called From: 0F78:03C5:000C:AF5A
 * Called From: 10E4:21A1:000B:3F5F
 */
void f__0C3A_092A_0013_5F3A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_093D_000E_CE6C(); return; }
	emu_ip = 0x0B8D; emu_last_cs = 0x0C3A; emu_last_ip = 0x093A; emu_last_length = 0x0013; emu_last_crc = 0x5F3A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_093D_000E_CE6C()
 *
 * @name f__0C3A_093D_000E_CE6C
 * @implements 0C3A:093D:000E:CE6C ()
 *
 * Called From: 0C3A:0938:0013:5F3A
 */
void f__0C3A_093D_000E_CE6C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (!emu_flags.zf) { f__0C3A_094B_000E_CD14(); return; }
	emu_ip = 0x0B8D; emu_last_cs = 0x0C3A; emu_last_ip = 0x0948; emu_last_length = 0x000E; emu_last_crc = 0xCE6C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_094B_000E_CD14()
 *
 * @name f__0C3A_094B_000E_CD14
 * @implements 0C3A:094B:000E:CD14 ()
 *
 * Called From: 0C3A:0946:000E:CE6C
 */
void f__0C3A_094B_000E_CD14()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (emu_flags.zf) { f__0C3A_0959_0028_C332(); return; }
	emu_ip = 0x0B8D; emu_last_cs = 0x0C3A; emu_last_ip = 0x0956; emu_last_length = 0x000E; emu_last_crc = 0xCD14; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_0959_0028_C332()
 *
 * @name f__0C3A_0959_0028_C332
 * @implements 0C3A:0959:0028:C332 ()
 *
 * Called From: 0C3A:0954:000E:CD14
 */
void f__0C3A_0959_0028_C332()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0981); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__0C3A_0981_0061_CD33();
}

/**
 * Decompiled function f__0C3A_0981_0061_CD33()
 *
 * @name f__0C3A_0981_0061_CD33
 * @implements 0C3A:0981:0061:CD33 ()
 *
 * Called From: 0C3A:0981:0028:C332
 */
void f__0C3A_0981_0061_CD33()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_movw(&emu_dx.x, 0x12);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x2C64);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2D52));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3C));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x39F0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_bx.x);
	emu_xorw(&emu_di, emu_di);
	f__0C3A_0AEA_0008_3464(); return;
}

/**
 * Decompiled function f__0C3A_09E2_001D_C29F()
 *
 * @name f__0C3A_09E2_001D_C29F
 * @implements 0C3A:09E2:001D:C29F ()
 *
 * Called From: 0C3A:0AEF:0008:3464
 * Called From: 0C3A:0AEF:000C:B26A
 */
void f__0C3A_09E2_001D_C29F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x09FF); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__0C3A_09FF_00E7_C815();
}

/**
 * Decompiled function f__0C3A_09FF_00E7_C815()
 *
 * @name f__0C3A_09FF_00E7_C815
 * @implements 0C3A:09FF:00E7:C815 ()
 *
 * Called From: 0C3A:09FF:001D:C29F
 */
void f__0C3A_09FF_00E7_C815()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xF8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), emu_ax.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x20);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_incb(&emu_ax.l);
	emu_pop(&emu_es);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x0));
	emu_pop(&emu_es);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_shrw(&emu_ax.x, 0x1);
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	emu_subws(&emu_dx.x, 0xF);
	emu_cmpw(&emu_ax.x, emu_dx.x);
	if (emu_flags.cf) { f__0C3A_0AC6_0020_60C6(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_shrw(&emu_ax.x, 0x1);
	emu_andw(&emu_ax.x, 0x7F);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	if ((emu_flags.cf || emu_flags.zf)) { f__0C3A_0AD8_000E_1B1F(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0AE6); emu_cs = 0x34CD; emu_ip = 0x0B97; emu_last_cs = 0x0C3A; emu_last_ip = 0x0AE1; emu_last_length = 0x00E7; emu_last_crc = 0xC815; emu_call(); // Jump does not resolve
	f__0C3A_0AE6_000C_B26A();
}

/**
 * Decompiled function f__0C3A_0AC6_0020_60C6()
 *
 * @name f__0C3A_0AC6_0020_60C6
 * @implements 0C3A:0AC6:0020:60C6 ()
 *
 * Called From: 0C3A:0AA8:00E7:C815
 */
void f__0C3A_0AC6_0020_60C6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0AE6); emu_cs = 0x34CD; ovl__34CD(29);
	f__0C3A_0AE6_000C_B26A();
}

/**
 * Decompiled function f__0C3A_0AD8_000E_1B1F()
 *
 * @name f__0C3A_0AD8_000E_1B1F
 * @implements 0C3A:0AD8:000E:1B1F ()
 *
 * Called From: 0C3A:0AC4:00E7:C815
 */
void f__0C3A_0AD8_000E_1B1F()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0AE6); emu_cs = 0x34CD; ovl__34CD(29);
	f__0C3A_0AE6_000C_B26A();
}

/**
 * Decompiled function f__0C3A_0AE6_000C_B26A()
 *
 * @name f__0C3A_0AE6_000C_B26A
 * @implements 0C3A:0AE6:000C:B26A ()
 *
 * Called From: 0C3A:0AE6:0020:60C6
 * Called From: 0C3A:0AE6:000E:1B1F
 */
void f__0C3A_0AE6_000C_B26A()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_0AF2_001A_2004(); return; }
	f__0C3A_09E2_001D_C29F(); return;
}

/**
 * Decompiled function f__0C3A_0AEA_0008_3464()
 *
 * @name f__0C3A_0AEA_0008_3464
 * @implements 0C3A:0AEA:0008:3464 ()
 *
 * Called From: 0C3A:09DF:0061:CD33
 */
void f__0C3A_0AEA_0008_3464()
{
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0AF2; emu_last_cs = 0x0C3A; emu_last_ip = 0x0AED; emu_last_length = 0x0008; emu_last_crc = 0x3464; emu_call(); return; } // Jump does not resolve
	f__0C3A_09E2_001D_C29F(); return;
}

/**
 * Decompiled function f__0C3A_0AF2_001A_2004()
 *
 * @name f__0C3A_0AF2_001A_2004
 * @implements 0C3A:0AF2:001A:2004 ()
 *
 * Called From: 0C3A:0AED:000C:B26A
 */
void f__0C3A_0AF2_001A_2004()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_0B44_0040_15F6(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_cmpws(&emu_di, 0x2);
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_0B0C_0038_6AFD(); return; }
	emu_movw(&emu_ax.x, emu_di);
	f__0C3A_0B0F_0035_D3FD(); return;
}

/**
 * Decompiled function f__0C3A_0B0C_0038_6AFD()
 *
 * @name f__0C3A_0B0C_0038_6AFD
 * @implements 0C3A:0B0C:0038:6AFD ()
 *
 * Called From: 0C3A:0B06:001A:2004
 */
void f__0C3A_0B0C_0038_6AFD()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3E));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x40));
	if (!emu_flags.zf) { f__0C3A_0B29_001B_B11F(); return; }
	emu_andws(&emu_di, 0x1);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x40));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_ip = 0x0B4E; emu_last_cs = 0x0C3A; emu_last_ip = 0x0B42; emu_last_length = 0x0038; emu_last_crc = 0x6AFD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_0B0F_0035_D3FD()
 *
 * @name f__0C3A_0B0F_0035_D3FD
 * @implements 0C3A:0B0F:0035:D3FD ()
 *
 * Called From: 0C3A:0B0A:001A:2004
 */
void f__0C3A_0B0F_0035_D3FD()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3E));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x40));
	if (!emu_flags.zf) { f__0C3A_0B29_001B_B11F(); return; }
	emu_andws(&emu_di, 0x1);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x40));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_ip = 0x0B4E; emu_last_cs = 0x0C3A; emu_last_ip = 0x0B42; emu_last_length = 0x0035; emu_last_crc = 0xD3FD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_0B29_001B_B11F()
 *
 * @name f__0C3A_0B29_001B_B11F
 * @implements 0C3A:0B29:001B:B11F ()
 *
 * Called From: 0C3A:0B24:0035:D3FD
 * Called From: 0C3A:0B24:0038:6AFD
 */
void f__0C3A_0B29_001B_B11F()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x40));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	f__0C3A_0B4E_0036_9D25(); return;
}

/**
 * Decompiled function f__0C3A_0B44_0040_15F6()
 *
 * @name f__0C3A_0B44_0040_15F6
 * @implements 0C3A:0B44:0040:15F6 ()
 *
 * Called From: 0C3A:0AFA:001A:2004
 */
void f__0C3A_0B44_0040_15F6()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x2C70);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1000);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x3C));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0B84); emu_cs = 0x151A; f__151A_000E_0013_54E3();
	f__0C3A_0B84_000F_ED05();
}

/**
 * Decompiled function f__0C3A_0B4E_0036_9D25()
 *
 * @name f__0C3A_0B4E_0036_9D25
 * @implements 0C3A:0B4E:0036:9D25 ()
 *
 * Called From: 0C3A:0B42:001B:B11F
 */
void f__0C3A_0B4E_0036_9D25()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1000);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x3C));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0B84); emu_cs = 0x151A; f__151A_000E_0013_54E3();
	f__0C3A_0B84_000F_ED05();
}

/**
 * Decompiled function f__0C3A_0B84_000F_ED05()
 *
 * @name f__0C3A_0B84_000F_ED05
 * @implements 0C3A:0B84:000F:ED05 ()
 *
 * Called From: 0C3A:0B84:0040:15F6
 * Called From: 0C3A:0B84:0036:9D25
 */
void f__0C3A_0B84_000F_ED05()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37A4), 0x0);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_0B93_0034_7881()
 *
 * @name f__0C3A_0B93_0034_7881
 * @implements 0C3A:0B93:0034:7881 ()
 *
 * Called From: 0C3A:1897:001E:5E51
 */
void f__0C3A_0B93_0034_7881()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2D52));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__0C3A_0BC7_0008_F70C(); return; }
	f__0C3A_0C54_0002_0270(); return;
}

/**
 * Decompiled function f__0C3A_0BC7_0008_F70C()
 *
 * @name f__0C3A_0BC7_0008_F70C
 * @implements 0C3A:0BC7:0008:F70C ()
 *
 * Called From: 0C3A:0BC2:0034:7881
 */
void f__0C3A_0BC7_0008_F70C()
{
	emu_cmpws(&emu_di, 0x1);
	if (!emu_flags.zf) { f__0C3A_0BCF_0004_07C2(); return; }
	emu_ip = 0x0C54; emu_last_cs = 0x0C3A; emu_last_ip = 0x0BCC; emu_last_length = 0x0008; emu_last_crc = 0xF70C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_0BCF_0004_07C2()
 *
 * @name f__0C3A_0BCF_0004_07C2
 * @implements 0C3A:0BCF:0004:07C2 ()
 *
 * Called From: 0C3A:0BCA:0008:F70C
 */
void f__0C3A_0BCF_0004_07C2()
{
	emu_xorw(&emu_si, emu_si);
	f__0C3A_0C4A_000A_F819(); return;
}

/**
 * Decompiled function f__0C3A_0BD3_0021_65D2()
 *
 * @name f__0C3A_0BD3_0021_65D2
 * @implements 0C3A:0BD3:0021:65D2 ()
 *
 * Called From: 0C3A:0C4E:000A:F819
 * Called From: 0C3A:0C4E:000B:C81B
 */
void f__0C3A_0BD3_0021_65D2()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_movw(&emu_dx.x, 0x12);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x2C64);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__0C3A_0C36_0013_4370(); return;
}

/**
 * Decompiled function f__0C3A_0BF4_0017_BFD7()
 *
 * @name f__0C3A_0BF4_0017_BFD7
 * @implements 0C3A:0BF4:0017:BFD7 ()
 *
 * Called From: 0C3A:0C3C:0013:4370
 * Called From: 0C3A:0C3C:0016:7BF0
 */
void f__0C3A_0BF4_0017_BFD7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0C0B); emu_cs = 0x34CD; ovl__34CD(13);
	f__0C3A_0C0B_0028_CD05();
}

/**
 * Decompiled function f__0C3A_0C0B_0028_CD05()
 *
 * @name f__0C3A_0C0B_0028_CD05
 * @implements 0C3A:0C0B:0028:CD05 ()
 *
 * Called From: 0C3A:0C0B:0017:BFD7
 */
void f__0C3A_0C0B_0028_CD05()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0xA);
	if (!emu_flags.zf) { f__0C3A_0C2C_0007_6F3A(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movb(&emu_ax.h, 0x0);
	emu_andw(&emu_ax.x, 0x7);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__0C3A_0C33_0016_7BF0(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_ip = 0x0C3E; emu_last_cs = 0x0C3A; emu_last_ip = 0x0C31; emu_last_length = 0x0028; emu_last_crc = 0xCD05; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_0C2C_0007_6F3A()
 *
 * @name f__0C3A_0C2C_0007_6F3A
 * @implements 0C3A:0C2C:0007:6F3A ()
 *
 * Called From: 0C3A:0C0F:0028:CD05
 */
void f__0C3A_0C2C_0007_6F3A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	f__0C3A_0C3E_000B_27E2(); return;
}

/**
 * Decompiled function f__0C3A_0C33_0016_7BF0()
 *
 * @name f__0C3A_0C33_0016_7BF0
 * @implements 0C3A:0C33:0016:7BF0 ()
 *
 * Called From: 0C3A:0C2A:0028:CD05
 */
void f__0C3A_0C33_0016_7BF0()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_0BF4_0017_BFD7(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0C49; emu_last_cs = 0x0C3A; emu_last_ip = 0x0C42; emu_last_length = 0x0016; emu_last_crc = 0x7BF0; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__0C3A_0C56_0006_137A(); return;
}

/**
 * Decompiled function f__0C3A_0C36_0013_4370()
 *
 * @name f__0C3A_0C36_0013_4370
 * @implements 0C3A:0C36:0013:4370 ()
 *
 * Called From: 0C3A:0BF2:0021:65D2
 */
void f__0C3A_0C36_0013_4370()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_0BF4_0017_BFD7(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0C49; emu_last_cs = 0x0C3A; emu_last_ip = 0x0C42; emu_last_length = 0x0013; emu_last_crc = 0x4370; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0C56; emu_last_cs = 0x0C3A; emu_last_ip = 0x0C47; emu_last_length = 0x0013; emu_last_crc = 0x4370; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_0C3E_000B_27E2()
 *
 * @name f__0C3A_0C3E_000B_27E2
 * @implements 0C3A:0C3E:000B:27E2 ()
 *
 * Called From: 0C3A:0C31:0007:6F3A
 */
void f__0C3A_0C3E_000B_27E2()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__0C3A_0C49_000B_C81B(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0C56; emu_last_cs = 0x0C3A; emu_last_ip = 0x0C47; emu_last_length = 0x000B; emu_last_crc = 0x27E2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_0C44_0005_14A6()
 *
 * @name f__0C3A_0C44_0005_14A6
 * @implements 0C3A:0C44:0005:14A6 ()
 *
 * Called From: 0C3A:0C54:0002:0270
 */
void f__0C3A_0C44_0005_14A6()
{
	emu_movw(&emu_ax.x, 0x1);
	f__0C3A_0C56_0006_137A(); return;
}

/**
 * Decompiled function f__0C3A_0C47_0002_03B6()
 *
 * @name f__0C3A_0C47_0002_03B6
 * @implements 0C3A:0C47:0002:03B6 ()
 *
 * Called From: 0C3A:0C52:000B:C81B
 */
void f__0C3A_0C47_0002_03B6()
{
	f__0C3A_0C56_0006_137A(); return;
}

/**
 * Decompiled function f__0C3A_0C49_000B_C81B()
 *
 * @name f__0C3A_0C49_000B_C81B
 * @implements 0C3A:0C49:000B:C81B ()
 *
 * Called From: 0C3A:0C42:000B:27E2
 */
void f__0C3A_0C49_000B_C81B()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_0BD3_0021_65D2(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C3A_0C47_0002_03B6(); return;
}

/**
 * Decompiled function f__0C3A_0C4A_000A_F819()
 *
 * @name f__0C3A_0C4A_000A_F819
 * @implements 0C3A:0C4A:000A:F819 ()
 *
 * Called From: 0C3A:0BD1:0004:07C2
 */
void f__0C3A_0C4A_000A_F819()
{
	emu_cmpw(&emu_si, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_0BD3_0021_65D2(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0C47; emu_last_cs = 0x0C3A; emu_last_ip = 0x0C52; emu_last_length = 0x000A; emu_last_crc = 0xF819; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_0C54_0002_0270()
 *
 * @name f__0C3A_0C54_0002_0270
 * @implements 0C3A:0C54:0002:0270 ()
 *
 * Called From: 0C3A:0BC4:0034:7881
 */
void f__0C3A_0C54_0002_0270()
{
	f__0C3A_0C44_0005_14A6(); return;
}

/**
 * Decompiled function f__0C3A_0C56_0006_137A()
 *
 * @name f__0C3A_0C56_0006_137A
 * @implements 0C3A:0C56:0006:137A ()
 *
 * Called From: 0C3A:0C47:0002:03B6
 * Called From: 0C3A:0C47:0005:14A6
 * Called From: 0C3A:0C47:0016:7BF0
 */
void f__0C3A_0C56_0006_137A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_0C5C_004D_4725()
 *
 * @name f__0C3A_0C5C_004D_4725
 * @implements 0C3A:0C5C:004D:4725 ()
 *
 * Called From: 0AEC:10FD:002B:558C
 * Called From: 0C3A:033E:0017:F3E5
 * Called From: 0C3A:0514:000F:D908
 * Called From: 0F78:02F5:0011:6CA5
 */
void f__0C3A_0C5C_004D_4725()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_movw(&emu_dx.x, 0x12);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x2C64);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_si, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2D52));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_xorw(&emu_di, emu_di);
	f__0C3A_0D4E_0008_316A(); return;
}

/**
 * Decompiled function f__0C3A_0CA9_0018_0B67()
 *
 * @name f__0C3A_0CA9_0018_0B67
 * @implements 0C3A:0CA9:0018:0B67 ()
 *
 * Called From: 0C3A:0D53:0008:316A
 * Called From: 0C3A:0D53:0009:BF6A
 */
void f__0C3A_0CA9_0018_0B67()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0CC1); emu_cs = 0x34CD; ovl__34CD(13);
	f__0C3A_0CC1_0020_B9D4();
}

/**
 * Decompiled function f__0C3A_0CC1_0020_B9D4()
 *
 * @name f__0C3A_0CC1_0020_B9D4
 * @implements 0C3A:0CC1:0020:B9D4 ()
 *
 * Called From: 0C3A:0CC1:0018:0B67
 */
void f__0C3A_0CC1_0020_B9D4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__0C3A_0CE3_0008_ECEC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x3A4E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0CE1; emu_last_cs = 0x0C3A; emu_last_ip = 0x0CDB; emu_last_length = 0x0020; emu_last_crc = 0xB9D4; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_si, emu_si);
	emu_ip = 0x0D56; emu_last_cs = 0x0C3A; emu_last_ip = 0x0CDF; emu_last_length = 0x0020; emu_last_crc = 0xB9D4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_0CDD_0004_07C6()
 *
 * @name f__0C3A_0CDD_0004_07C6
 * @implements 0C3A:0CDD:0004:07C6 ()
 *
 * Called From: 0C3A:0CF0:0007:337A
 * Called From: 0C3A:0D15:0025:1BA6
 * Called From: 0C3A:0D31:001A:A8FD
 * Called From: 0C3A:0D4B:0007:33DC
 */
void f__0C3A_0CDD_0004_07C6()
{
	emu_xorw(&emu_si, emu_si);
	f__0C3A_0D56_000A_DB2E(); return;
}

/**
 * Decompiled function f__0C3A_0CE3_0008_ECEC()
 *
 * @name f__0C3A_0CE3_0008_ECEC
 * @implements 0C3A:0CE3:0008:ECEC ()
 *
 * Called From: 0C3A:0CCA:0020:B9D4
 */
void f__0C3A_0CE3_0008_ECEC()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0CEB); emu_cs = 0x34CD; ovl__34CD(11);
	f__0C3A_0CEB_0007_337A();
}

/**
 * Decompiled function f__0C3A_0CEB_0007_337A()
 *
 * @name f__0C3A_0CEB_0007_337A
 * @implements 0C3A:0CEB:0007:337A ()
 *
 * Called From: 0C3A:0CEB:0008:ECEC
 */
void f__0C3A_0CEB_0007_337A()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0C3A_0CF2_0025_1BA6(); return; }
	f__0C3A_0CDD_0004_07C6(); return;
}

/**
 * Decompiled function f__0C3A_0CF2_0025_1BA6()
 *
 * @name f__0C3A_0CF2_0025_1BA6
 * @implements 0C3A:0CF2:0025:1BA6 ()
 *
 * Called From: 0C3A:0CEE:0007:337A
 */
void f__0C3A_0CF2_0025_1BA6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x8);
	if (emu_flags.zf) { f__0C3A_0D19_001A_A8FD(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x3A4E), 0x0);
	if (!emu_flags.zf) { f__0C3A_0D17_0002_03E6(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0D17; emu_last_cs = 0x0C3A; emu_last_ip = 0x0D13; emu_last_length = 0x0025; emu_last_crc = 0x1BA6; emu_call(); return; } // Jump does not resolve
	f__0C3A_0CDD_0004_07C6(); return;
}

/**
 * Decompiled function f__0C3A_0D17_0002_03E6()
 *
 * @name f__0C3A_0D17_0002_03E6
 * @implements 0C3A:0D17:0002:03E6 ()
 *
 * Called From: 0C3A:0D0C:0025:1BA6
 */
void f__0C3A_0D17_0002_03E6()
{
	f__0C3A_0D3E_0008_E59C(); return;
}

/**
 * Decompiled function f__0C3A_0D19_001A_A8FD()
 *
 * @name f__0C3A_0D19_001A_A8FD
 * @implements 0C3A:0D19:001A:A8FD ()
 *
 * Called From: 0C3A:0CFB:0025:1BA6
 */
void f__0C3A_0D19_001A_A8FD()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x3A4A), 0x0);
	if (!emu_flags.zf) { f__0C3A_0D35_0011_D097(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0D35; emu_last_cs = 0x0C3A; emu_last_ip = 0x0D2F; emu_last_length = 0x001A; emu_last_crc = 0xA8FD; emu_call(); return; } // Jump does not resolve
	f__0C3A_0CDD_0004_07C6(); return;
}

/**
 * Decompiled function f__0C3A_0D35_0011_D097()
 *
 * @name f__0C3A_0D35_0011_D097
 * @implements 0C3A:0D35:0011:D097 ()
 *
 * Called From: 0C3A:0D28:001A:A8FD
 */
void f__0C3A_0D35_0011_D097()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xA);
	if (emu_flags.zf) { f__0C3A_0D3E_0008_E59C(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0D46); emu_cs = 0x34CD; ovl__34CD(32);
	f__0C3A_0D46_0007_33DC();
}

/**
 * Decompiled function f__0C3A_0D3E_0008_E59C()
 *
 * @name f__0C3A_0D3E_0008_E59C
 * @implements 0C3A:0D3E:0008:E59C ()
 *
 * Called From: 0C3A:0D17:0002:03E6
 * Called From: 0C3A:0D39:0011:D097
 */
void f__0C3A_0D3E_0008_E59C()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0D46); emu_cs = 0x34CD; ovl__34CD(32);
	f__0C3A_0D46_0007_33DC();
}

/**
 * Decompiled function f__0C3A_0D46_0007_33DC()
 *
 * @name f__0C3A_0D46_0007_33DC
 * @implements 0C3A:0D46:0007:33DC ()
 *
 * Called From: 0C3A:0D46:0008:E59C
 * Called From: 0C3A:0D46:0011:D097
 */
void f__0C3A_0D46_0007_33DC()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__0C3A_0D4D_0009_BF6A(); return; }
	f__0C3A_0CDD_0004_07C6(); return;
}

/**
 * Decompiled function f__0C3A_0D4D_0009_BF6A()
 *
 * @name f__0C3A_0D4D_0009_BF6A
 * @implements 0C3A:0D4D:0009:BF6A ()
 *
 * Called From: 0C3A:0D49:0007:33DC
 */
void f__0C3A_0D4D_0009_BF6A()
{
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_0D56_000A_DB2E(); return; }
	f__0C3A_0CA9_0018_0B67(); return;
}

/**
 * Decompiled function f__0C3A_0D4E_0008_316A()
 *
 * @name f__0C3A_0D4E_0008_316A
 * @implements 0C3A:0D4E:0008:316A ()
 *
 * Called From: 0C3A:0CA6:004D:4725
 */
void f__0C3A_0D4E_0008_316A()
{
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0D56; emu_last_cs = 0x0C3A; emu_last_ip = 0x0D51; emu_last_length = 0x0008; emu_last_crc = 0x316A; emu_call(); return; } // Jump does not resolve
	f__0C3A_0CA9_0018_0B67(); return;
}

/**
 * Decompiled function f__0C3A_0D56_000A_DB2E()
 *
 * @name f__0C3A_0D56_000A_DB2E
 * @implements 0C3A:0D56:000A:DB2E ()
 *
 * Called From: 0C3A:0CDF:0004:07C6
 * Called From: 0C3A:0D51:0009:BF6A
 */
void f__0C3A_0D56_000A_DB2E()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (emu_flags.zf) { f__0C3A_0D60_0007_3360(); return; }
	f__0C3A_0E15_0011_3F94(); return;
}

/**
 * Decompiled function f__0C3A_0D60_0007_3360()
 *
 * @name f__0C3A_0D60_0007_3360
 * @implements 0C3A:0D60:0007:3360 ()
 *
 * Called From: 0C3A:0D5B:000A:DB2E
 */
void f__0C3A_0D60_0007_3360()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__0C3A_0D67_0009_754D(); return; }
	f__0C3A_0E15_0011_3F94(); return;
}

/**
 * Decompiled function f__0C3A_0D67_0009_754D()
 *
 * @name f__0C3A_0D67_0009_754D
 * @implements 0C3A:0D67:0009:754D ()
 *
 * Called From: 0C3A:0D62:0007:3360
 */
void f__0C3A_0D67_0009_754D()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x8);
	if (!emu_flags.zf) { f__0C3A_0D70_000A_C016(); return; }
	emu_ip = 0x0E15; emu_last_cs = 0x0C3A; emu_last_ip = 0x0D6D; emu_last_length = 0x0009; emu_last_crc = 0x754D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_0D70_000A_C016()
 *
 * @name f__0C3A_0D70_000A_C016
 * @implements 0C3A:0D70:000A:C016 ()
 *
 * Called From: 0C3A:0D6B:0009:754D
 */
void f__0C3A_0D70_000A_C016()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__0C3A_0D7A_0007_28E8(); return; }
	emu_ip = 0x0E15; emu_last_cs = 0x0C3A; emu_last_ip = 0x0D77; emu_last_length = 0x000A; emu_last_crc = 0xC016; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_0D7A_0007_28E8()
 *
 * @name f__0C3A_0D7A_0007_28E8
 * @implements 0C3A:0D7A:0007:28E8 ()
 *
 * Called From: 0C3A:0D75:000A:C016
 */
void f__0C3A_0D7A_0007_28E8()
{
	emu_xorw(&emu_si, emu_si);
	emu_xorw(&emu_di, emu_di);
	f__0C3A_0E0D_0008_F016(); return;
}

/**
 * Decompiled function f__0C3A_0D81_0020_D8B7()
 *
 * @name f__0C3A_0D81_0020_D8B7
 * @implements 0C3A:0D81:0020:D8B7 ()
 *
 * Called From: 0C3A:0E12:0008:F016
 * Called From: 0C3A:0E12:0009:7E16
 */
void f__0C3A_0D81_0020_D8B7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_movb(&emu_cx.l, 0x5);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_di);
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2D60));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!emu_flags.zf) { f__0C3A_0DA1_0011_FFAD(); return; }
	f__0C3A_0E15_0011_3F94(); return;
}

/**
 * Decompiled function f__0C3A_0DA1_0011_FFAD()
 *
 * @name f__0C3A_0DA1_0011_FFAD
 * @implements 0C3A:0DA1:0011:FFAD ()
 *
 * Called From: 0C3A:0D9D:0020:D8B7
 */
void f__0C3A_0DA1_0011_FFAD()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0DB2); emu_cs = 0x34CD; ovl__34CD(30);
	f__0C3A_0DB2_001F_E1E4();
}

/**
 * Decompiled function f__0C3A_0DB2_001F_E1E4()
 *
 * @name f__0C3A_0DB2_001F_E1E4
 * @implements 0C3A:0DB2:001F:E1E4 ()
 *
 * Called From: 0C3A:0DB2:0011:FFAD
 */
void f__0C3A_0DB2_001F_E1E4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_flags.zf) { f__0C3A_0DD3_0008_EF8C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x0DD1; emu_last_cs = 0x0C3A; emu_last_ip = 0x0DCD; emu_last_length = 0x001F; emu_last_crc = 0xE1E4; emu_call(); return; } // Jump does not resolve
	f__0C3A_0E07_0005_146E(); return;
}

/**
 * Decompiled function f__0C3A_0DD3_0008_EF8C()
 *
 * @name f__0C3A_0DD3_0008_EF8C
 * @implements 0C3A:0DD3:0008:EF8C ()
 *
 * Called From: 0C3A:0DBF:001F:E1E4
 */
void f__0C3A_0DD3_0008_EF8C()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0DDB); emu_cs = 0x34CD; ovl__34CD(13);
	f__0C3A_0DDB_0031_145B();
}

/**
 * Decompiled function f__0C3A_0DDB_0031_145B()
 *
 * @name f__0C3A_0DDB_0031_145B
 * @implements 0C3A:0DDB:0031:145B ()
 *
 * Called From: 0C3A:0DDB:0008:EF8C
 */
void f__0C3A_0DDB_0031_145B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xA);
	if (emu_flags.zf) { f__0C3A_0DEB_0021_7274(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xB);
	if (!emu_flags.zf) { f__0C3A_0E0C_0009_7E16(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movb(&emu_ax.h, 0x0);
	emu_andw(&emu_ax.x, 0x3);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x0E0C; emu_last_cs = 0x0C3A; emu_last_ip = 0x0E05; emu_last_length = 0x0031; emu_last_crc = 0x145B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, 0x1);
	emu_ip = 0x0E15; emu_last_cs = 0x0C3A; emu_last_ip = 0x0E0A; emu_last_length = 0x0031; emu_last_crc = 0x145B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_0DEB_0021_7274()
 *
 * @name f__0C3A_0DEB_0021_7274
 * @implements 0C3A:0DEB:0021:7274 ()
 *
 * Called From: 0C3A:0DE3:0031:145B
 */
void f__0C3A_0DEB_0021_7274()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movb(&emu_ax.h, 0x0);
	emu_andw(&emu_ax.x, 0x3);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x0E0C; emu_last_cs = 0x0C3A; emu_last_ip = 0x0E05; emu_last_length = 0x0021; emu_last_crc = 0x7274; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, 0x1);
	f__0C3A_0E15_0011_3F94(); return;
}

/**
 * Decompiled function f__0C3A_0E07_0005_146E()
 *
 * @name f__0C3A_0E07_0005_146E
 * @implements 0C3A:0E07:0005:146E ()
 *
 * Called From: 0C3A:0DCF:001F:E1E4
 */
void f__0C3A_0E07_0005_146E()
{
	emu_movw(&emu_si, 0x1);
	f__0C3A_0E15_0011_3F94(); return;
}

/**
 * Decompiled function f__0C3A_0E0C_0009_7E16()
 *
 * @name f__0C3A_0E0C_0009_7E16
 * @implements 0C3A:0E0C:0009:7E16 ()
 *
 * Called From: 0C3A:0DE9:0031:145B
 */
void f__0C3A_0E0C_0009_7E16()
{
	emu_incw(&emu_di);
	emu_cmpws(&emu_di, 0x10);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0E15; emu_last_cs = 0x0C3A; emu_last_ip = 0x0E10; emu_last_length = 0x0009; emu_last_crc = 0x7E16; emu_call(); return; } // Jump does not resolve
	f__0C3A_0D81_0020_D8B7(); return;
}

/**
 * Decompiled function f__0C3A_0E0D_0008_F016()
 *
 * @name f__0C3A_0E0D_0008_F016
 * @implements 0C3A:0E0D:0008:F016 ()
 *
 * Called From: 0C3A:0D7E:0007:28E8
 */
void f__0C3A_0E0D_0008_F016()
{
	emu_cmpws(&emu_di, 0x10);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0E15; emu_last_cs = 0x0C3A; emu_last_ip = 0x0E10; emu_last_length = 0x0008; emu_last_crc = 0xF016; emu_call(); return; } // Jump does not resolve
	f__0C3A_0D81_0020_D8B7(); return;
}

/**
 * Decompiled function f__0C3A_0E15_0011_3F94()
 *
 * @name f__0C3A_0E15_0011_3F94
 * @implements 0C3A:0E15:0011:3F94 ()
 *
 * Called From: 0C3A:0D5D:000A:DB2E
 * Called From: 0C3A:0D64:0007:3360
 * Called From: 0C3A:0D9F:0020:D8B7
 * Called From: 0C3A:0E0A:0005:146E
 * Called From: 0C3A:0E0A:0021:7274
 */
void f__0C3A_0E15_0011_3F94()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__0C3A_0E2B_0004_0768(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { f__0C3A_0E26_0005_14B4(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_negw(&emu_ax.x, emu_ax.x);
	f__0C3A_0E29_0002_03A4(); return;
}

/**
 * Decompiled function f__0C3A_0E26_0005_14B4()
 *
 * @name f__0C3A_0E26_0005_14B4
 * @implements 0C3A:0E26:0005:14B4 ()
 *
 * Called From: 0C3A:0E1D:0011:3F94
 */
void f__0C3A_0E26_0005_14B4()
{
	emu_movw(&emu_ax.x, 0x1);
	f__0C3A_0E2F_0006_137A(); return;
}

/**
 * Decompiled function f__0C3A_0E29_0002_03A4()
 *
 * @name f__0C3A_0E29_0002_03A4
 * @implements 0C3A:0E29:0002:03A4 ()
 *
 * Called From: 0C3A:0E24:0011:3F94
 * Called From: 0C3A:0E2D:0004:0768
 */
void f__0C3A_0E29_0002_03A4()
{
	f__0C3A_0E2F_0006_137A(); return;
}

/**
 * Decompiled function f__0C3A_0E2B_0004_0768()
 *
 * @name f__0C3A_0E2B_0004_0768
 * @implements 0C3A:0E2B:0004:0768 ()
 *
 * Called From: 0C3A:0E17:0011:3F94
 */
void f__0C3A_0E2B_0004_0768()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C3A_0E29_0002_03A4(); return;
}

/**
 * Decompiled function f__0C3A_0E2F_0006_137A()
 *
 * @name f__0C3A_0E2F_0006_137A
 * @implements 0C3A:0E2F:0006:137A ()
 *
 * Called From: 0C3A:0E29:0005:14B4
 * Called From: 0C3A:0E29:0002:03A4
 */
void f__0C3A_0E2F_0006_137A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_1216_0013_DFEC()
 *
 * @name f__0C3A_1216_0013_DFEC
 * @implements 0C3A:1216:0013:DFEC ()
 *
 * Called From: 06F7:0372:0010:E338
 */
void f__0C3A_1216_0013_DFEC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_1229_0009_75AB(); return; }
	emu_ip = 0x138E; emu_last_cs = 0x0C3A; emu_last_ip = 0x1226; emu_last_length = 0x0013; emu_last_crc = 0xDFEC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_1229_0009_75AB()
 *
 * @name f__0C3A_1229_0009_75AB
 * @implements 0C3A:1229:0009:75AB ()
 *
 * Called From: 0C3A:1224:0013:DFEC
 */
void f__0C3A_1229_0009_75AB()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__0C3A_1232_000D_B6BA(); return; }
	emu_ip = 0x138E; emu_last_cs = 0x0C3A; emu_last_ip = 0x122F; emu_last_length = 0x0009; emu_last_crc = 0x75AB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_1232_000D_B6BA()
 *
 * @name f__0C3A_1232_000D_B6BA
 * @implements 0C3A:1232:000D:B6BA ()
 *
 * Called From: 0C3A:122D:0009:75AB
 */
void f__0C3A_1232_000D_B6BA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x1E), 0x1);
	if (!emu_flags.zf) { f__0C3A_123F_0030_80A0(); return; }
	emu_ip = 0x138E; emu_last_cs = 0x0C3A; emu_last_ip = 0x123C; emu_last_length = 0x000D; emu_last_crc = 0xB6BA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_123F_0030_80A0()
 *
 * @name f__0C3A_123F_0030_80A0
 * @implements 0C3A:123F:0030:80A0 ()
 *
 * Called From: 0C3A:123A:000D:B6BA
 */
void f__0C3A_123F_0030_80A0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x126F; emu_last_cs = 0x0C3A; emu_last_ip = 0x1261; emu_last_length = 0x0030; emu_last_crc = 0x80A0; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	f__0C3A_1278_000D_BCC0(); return;
}

/**
 * Decompiled function f__0C3A_1278_000D_BCC0()
 *
 * @name f__0C3A_1278_000D_BCC0
 * @implements 0C3A:1278:000D:BCC0 ()
 *
 * Called From: 0C3A:126D:0030:80A0
 */
void f__0C3A_1278_000D_BCC0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1285; emu_last_cs = 0x0C3A; emu_last_ip = 0x1280; emu_last_length = 0x000D; emu_last_crc = 0xBCC0; emu_call(); return; } // Jump does not resolve
	f__0C3A_134E_002F_C892(); return;
}

/**
 * Decompiled function f__0C3A_134A_0002_0320()
 *
 * @name f__0C3A_134A_0002_0320
 * @implements 0C3A:134A:0002:0320 ()
 *
 * Called From: 0C3A:1390:0004:07EC
 */
void f__0C3A_134A_0002_0320()
{
	f__0C3A_1392_0006_137A(); return;
}

/**
 * Decompiled function f__0C3A_134E_002F_C892()
 *
 * @name f__0C3A_134E_002F_C892
 * @implements 0C3A:134E:002F:C892 ()
 *
 * Called From: 0C3A:1282:000D:BCC0
 */
void f__0C3A_134E_002F_C892()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { f__0C3A_138E_0004_07EC(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x2E5E));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x2E5C));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x137D); emu_cs = 0x0F3F; emu_ip = 0x1470; emu_last_cs = 0x0C3A; emu_last_ip = 0x1378; emu_last_length = 0x002F; emu_last_crc = 0xC892; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0C3A_138E_0004_07EC()
 *
 * @name f__0C3A_138E_0004_07EC
 * @implements 0C3A:138E:0004:07EC ()
 *
 * Called From: 0C3A:1352:002F:C892
 */
void f__0C3A_138E_0004_07EC()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C3A_134A_0002_0320(); return;
}

/**
 * Decompiled function f__0C3A_1392_0006_137A()
 *
 * @name f__0C3A_1392_0006_137A
 * @implements 0C3A:1392:0006:137A ()
 *
 * Called From: 0C3A:134A:0002:0320
 */
void f__0C3A_1392_0006_137A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_1398_000D_C7C7()
 *
 * @name f__0C3A_1398_000D_C7C7
 * @implements 0C3A:1398:000D:C7C7 ()
 *
 * Called From: 0972:059C:001B:53D6
 * Called From: 0972:0C4B:000E:49A3
 * Called From: 0972:0C4B:0010:49EB
 * Called From: 0972:0E2A:001D:F723
 * Called From: 0C10:012E:0015:A26F
 * Called From: 0C10:029F:0014:A9B2
 * Called From: 0C3A:1B08:004E:AEFE
 * Called From: 1A34:2D61:000C:E42B
 */
void f__0C3A_1398_000D_C7C7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_13A5_0014_02AE(); return; }
	emu_ip = 0x13BB; emu_last_cs = 0x0C3A; emu_last_ip = 0x13A3; emu_last_length = 0x000D; emu_last_crc = 0xC7C7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_13A5_0014_02AE()
 *
 * @name f__0C3A_13A5_0014_02AE
 * @implements 0C3A:13A5:0014:02AE ()
 *
 * Called From: 0C3A:13A1:000D:C7C7
 */
void f__0C3A_13A5_0014_02AE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x13B9); f__0C3A_092A_0013_5F3A();
	f__0C3A_13B9_0004_07BA();
}

/**
 * Decompiled function f__0C3A_13B9_0004_07BA()
 *
 * @name f__0C3A_13B9_0004_07BA
 * @implements 0C3A:13B9:0004:07BA ()
 *
 * Called From: 0C3A:13B9:0014:02AE
 */
void f__0C3A_13B9_0004_07BA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_13BD_0022_281A()
 *
 * @name f__0C3A_13BD_0022_281A
 * @implements 0C3A:13BD:0022:281A ()
 *
 * Called From: 0C3A:073F:0010:F218
 * Called From: B511:0317:000B:FCBE
 */
void f__0C3A_13BD_0022_281A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x13DF); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__0C3A_13DF_0005_1F92();
}

/**
 * Decompiled function f__0C3A_13DF_0005_1F92()
 *
 * @name f__0C3A_13DF_0005_1F92
 * @implements 0C3A:13DF:0005:1F92 ()
 *
 * Called From: 0C3A:13DF:0022:281A
 */
void f__0C3A_13DF_0005_1F92()
{
	emu_addws(&emu_sp, 0x8);
	f__0C3A_1413_0016_0EB1(); return;
}

/**
 * Decompiled function f__0C3A_13E4_001C_339A()
 *
 * @name f__0C3A_13E4_001C_339A
 * @implements 0C3A:13E4:001C:339A ()
 *
 * Called From: 0C3A:141F:0016:0EB1
 * Called From: 0C3A:141F:0018:7B31
 */
void f__0C3A_13E4_001C_339A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x1406; emu_last_cs = 0x0C3A; emu_last_ip = 0x13ED; emu_last_length = 0x001C; emu_last_crc = 0x339A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_cs); emu_push(0x1400); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	f__0C3A_1400_0011_221D();
}

/**
 * Decompiled function f__0C3A_1400_0011_221D()
 *
 * @name f__0C3A_1400_0011_221D
 * @implements 0C3A:1400:0011:221D ()
 *
 * Called From: 0C3A:1400:001C:339A
 */
void f__0C3A_1400_0011_221D()
{
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1411); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	f__0C3A_1411_0018_7B31();
}

/**
 * Decompiled function f__0C3A_1411_0018_7B31()
 *
 * @name f__0C3A_1411_0018_7B31
 * @implements 0C3A:1411:0018:7B31 ()
 *
 * Called From: 0C3A:1411:0011:221D
 */
void f__0C3A_1411_0018_7B31()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__0C3A_13E4_001C_339A(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__0C3A_1429_0004_0F7A(); return;
}

/**
 * Decompiled function f__0C3A_1413_0016_0EB1()
 *
 * @name f__0C3A_1413_0016_0EB1
 * @implements 0C3A:1413:0016:0EB1 ()
 *
 * Called From: 0C3A:13E2:0005:1F92
 */
void f__0C3A_1413_0016_0EB1()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__0C3A_13E4_001C_339A(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__0C3A_1429_0004_0F7A(); return;
}

/**
 * Decompiled function f__0C3A_1429_0004_0F7A()
 *
 * @name f__0C3A_1429_0004_0F7A
 * @implements 0C3A:1429:0004:0F7A ()
 *
 * Called From: 0C3A:1427:0018:7B31
 * Called From: 0C3A:1427:0016:0EB1
 */
void f__0C3A_1429_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_142D_0018_192B()
 *
 * @name f__0C3A_142D_0018_192B
 * @implements 0C3A:142D:0018:192B ()
 *
 * Called From: 0AEC:114C:0012:D5B1
 * Called From: 0AEC:11E6:0041:7577
 * Called From: 0C3A:0142:0021:2CEE
 * Called From: 0C3A:0142:0018:8FE3
 */
void f__0C3A_142D_0018_192B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x60);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_1445_0031_5F57(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x1B73; emu_last_cs = 0x0C3A; emu_last_ip = 0x1442; emu_last_length = 0x0018; emu_last_crc = 0x192B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_1440_0005_0D9E()
 *
 * @name f__0C3A_1440_0005_0D9E
 * @implements 0C3A:1440:0005:0D9E ()
 *
 * Called From: 0C3A:175C:000F:8E29
 * Called From: 0C3A:1810:000A:6594
 * Called From: 0C3A:18C9:0010:C765
 * Called From: 0C3A:1B70:0003:058C
 */
void f__0C3A_1440_0005_0D9E()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C3A_1B73_0006_137A(); return;
}

/**
 * Decompiled function f__0C3A_1442_0003_07FE()
 *
 * @name f__0C3A_1442_0003_07FE
 * @implements 0C3A:1442:0003:07FE ()
 *
 * Called From: 0C3A:1B4A:0009:EA4D
 */
void f__0C3A_1442_0003_07FE()
{
	f__0C3A_1B73_0006_137A(); return;
}

/**
 * Decompiled function f__0C3A_1445_0031_5F57()
 *
 * @name f__0C3A_1445_0031_5F57
 * @implements 0C3A:1445:0031:5F57 ()
 *
 * Called From: 0C3A:143E:0018:192B
 */
void f__0C3A_1445_0031_5F57()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1476); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__0C3A_1476_0015_6694();
}

/**
 * Decompiled function f__0C3A_1476_0015_6694()
 *
 * @name f__0C3A_1476_0015_6694
 * @implements 0C3A:1476:0015:6694 ()
 *
 * Called From: 0C3A:1476:0031:5F57
 */
void f__0C3A_1476_0015_6694()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
	if (!emu_flags.zf) { f__0C3A_148B_0014_25E4(); return; }
	f__0C3A_1B70_0003_058C(); return;
}

/**
 * Decompiled function f__0C3A_148B_0014_25E4()
 *
 * @name f__0C3A_148B_0014_25E4
 * @implements 0C3A:148B:0014:25E4 ()
 *
 * Called From: 0C3A:1486:0015:6694
 */
void f__0C3A_148B_0014_25E4()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x149F); f__0C3A_2814_0015_2939();
	f__0C3A_149F_000B_D7A5();
}

/**
 * Decompiled function f__0C3A_149F_000B_D7A5()
 *
 * @name f__0C3A_149F_000B_D7A5
 * @implements 0C3A:149F:000B:D7A5 ()
 *
 * Called From: 0C3A:149F:0014:25E4
 */
void f__0C3A_149F_000B_D7A5()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpws(&emu_di, 0xFD);
	if (!emu_flags.zf) { f__0C3A_14AA_000D_6237(); return; }
	emu_ip = 0x1819; emu_last_cs = 0x0C3A; emu_last_ip = 0x14A7; emu_last_length = 0x000B; emu_last_crc = 0xD7A5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_14AA_000D_6237()
 *
 * @name f__0C3A_14AA_000D_6237
 * @implements 0C3A:14AA:000D:6237 ()
 *
 * Called From: 0C3A:14A5:000B:D7A5
 */
void f__0C3A_14AA_000D_6237()
{
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__0C3A_14B7_0010_E04D(); return; }
	emu_cmpws(&emu_di, 0xFE);
	if (emu_flags.zf) { f__0C3A_14B7_0010_E04D(); return; }
	f__0C3A_19EE_001E_4804(); return;
}

/**
 * Decompiled function f__0C3A_14B7_0010_E04D()
 *
 * @name f__0C3A_14B7_0010_E04D
 * @implements 0C3A:14B7:0010:E04D ()
 *
 * Called From: 0C3A:14AD:000D:6237
 * Called From: 0C3A:14B2:000D:6237
 */
void f__0C3A_14B7_0010_E04D()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x14C7); f__0C3A_25EC_0011_6FF5();
	f__0C3A_14C7_005E_1FEB();
}

/**
 * Decompiled function f__0C3A_14C7_005E_1FEB()
 *
 * @name f__0C3A_14C7_005E_1FEB
 * @implements 0C3A:14C7:005E:1FEB ()
 *
 * Called From: 0C3A:14C7:0010:E04D
 */
void f__0C3A_14C7_005E_1FEB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0C3A_14EC_0039_7B6D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (!emu_flags.zf) { emu_ip = 0x14EC; emu_last_cs = 0x0C3A; emu_last_ip = 0x14DB; emu_last_length = 0x005E; emu_last_crc = 0x1FEB; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_cwd();
	emu_subw(&emu_ax.x, emu_dx.x);
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x150B; emu_last_cs = 0x0C3A; emu_last_ip = 0x14F0; emu_last_length = 0x005E; emu_last_crc = 0x1FEB; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x5);
	if (!emu_flags.zf) { emu_ip = 0x150B; emu_last_cs = 0x0C3A; emu_last_ip = 0x14FA; emu_last_length = 0x005E; emu_last_crc = 0x1FEB; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x150B; emu_last_cs = 0x0C3A; emu_last_ip = 0x1504; emu_last_length = 0x005E; emu_last_crc = 0x1FEB; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xB);
	if (!emu_flags.zf) { emu_ip = 0x151A; emu_last_cs = 0x0C3A; emu_last_ip = 0x1513; emu_last_length = 0x005E; emu_last_crc = 0x1FEB; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1525); emu_ip = 0x1B79; emu_last_cs = 0x0C3A; emu_last_ip = 0x1522; emu_last_length = 0x005E; emu_last_crc = 0x1FEB; emu_call(); // Jump does not resolve
	f__0C3A_1525_001C_A1C7();
}

/**
 * Decompiled function f__0C3A_14EC_0039_7B6D()
 *
 * @name f__0C3A_14EC_0039_7B6D
 * @implements 0C3A:14EC:0039:7B6D ()
 *
 * Called From: 0C3A:14CB:005E:1FEB
 */
void f__0C3A_14EC_0039_7B6D()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_flags.zf) { f__0C3A_150B_001A_76E2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x5);
	if (!emu_flags.zf) { emu_ip = 0x150B; emu_last_cs = 0x0C3A; emu_last_ip = 0x14FA; emu_last_length = 0x0039; emu_last_crc = 0x7B6D; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x150B; emu_last_cs = 0x0C3A; emu_last_ip = 0x1504; emu_last_length = 0x0039; emu_last_crc = 0x7B6D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xB);
	if (!emu_flags.zf) { emu_ip = 0x151A; emu_last_cs = 0x0C3A; emu_last_ip = 0x1513; emu_last_length = 0x0039; emu_last_crc = 0x7B6D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1525); emu_ip = 0x1B79; emu_last_cs = 0x0C3A; emu_last_ip = 0x1522; emu_last_length = 0x0039; emu_last_crc = 0x7B6D; emu_call(); // Jump does not resolve
	f__0C3A_1525_001C_A1C7();
}

/**
 * Decompiled function f__0C3A_150B_001A_76E2()
 *
 * @name f__0C3A_150B_001A_76E2
 * @implements 0C3A:150B:001A:76E2 ()
 *
 * Called From: 0C3A:14F0:0039:7B6D
 */
void f__0C3A_150B_001A_76E2()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xB);
	if (!emu_flags.zf) { f__0C3A_151A_000B_E17A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1525); emu_ip = 0x1B79; emu_last_cs = 0x0C3A; emu_last_ip = 0x1522; emu_last_length = 0x001A; emu_last_crc = 0x76E2; emu_call(); // Jump does not resolve
	f__0C3A_1525_001C_A1C7();
}

/**
 * Decompiled function f__0C3A_151A_000B_E17A()
 *
 * @name f__0C3A_151A_000B_E17A
 * @implements 0C3A:151A:000B:E17A ()
 *
 * Called From: 0C3A:1513:001A:76E2
 */
void f__0C3A_151A_000B_E17A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1525); f__0C3A_1B79_0021_3977();
	f__0C3A_1525_001C_A1C7();
}

/**
 * Decompiled function f__0C3A_1525_001C_A1C7()
 *
 * @name f__0C3A_1525_001C_A1C7
 * @implements 0C3A:1525:001C:A1C7 ()
 *
 * Called From: 0C3A:1525:000B:E17A
 */
void f__0C3A_1525_001C_A1C7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (!emu_flags.zf) { f__0C3A_1541_0021_C6E1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4C), 0x0);
	emu_ip = 0x1440; emu_last_cs = 0x0C3A; emu_last_ip = 0x153E; emu_last_length = 0x001C; emu_last_crc = 0xA1C7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_1541_0021_C6E1()
 *
 * @name f__0C3A_1541_0021_C6E1
 * @implements 0C3A:1541:0021:C6E1 ()
 *
 * Called From: 0C3A:1533:001C:A1C7
 */
void f__0C3A_1541_0021_C6E1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { emu_ip = 0x159D; emu_last_cs = 0x0C3A; emu_last_ip = 0x1549; emu_last_length = 0x0021; emu_last_crc = 0xC6E1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7418), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	f__0C3A_1594_0009_08B7(); return;
}

/**
 * Decompiled function f__0C3A_1562_000D_08D8()
 *
 * @name f__0C3A_1562_000D_08D8
 * @implements 0C3A:1562:000D:08D8 ()
 *
 * Called From: 0C3A:1598:0009:08B7
 * Called From: 0C3A:1598:0010:502A
 */
void f__0C3A_1562_000D_08D8()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs); emu_push(0x156F); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	f__0C3A_156F_001E_74B3();
}

/**
 * Decompiled function f__0C3A_156F_001E_74B3()
 *
 * @name f__0C3A_156F_001E_74B3
 * @implements 0C3A:156F:001E:74B3 ()
 *
 * Called From: 0C3A:156F:000D:08D8
 */
void f__0C3A_156F_001E_74B3()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_andw(&emu_cx.x, emu_ax.x);
	emu_andw(&emu_bx.x, emu_dx.x);
	emu_orw(&emu_cx.x, emu_bx.x);
	if (emu_flags.zf) { f__0C3A_158D_0010_502A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), 0x1);
	emu_cmpws(&emu_di, 0xFE);
	if (!emu_flags.zf) { f__0C3A_158D_0010_502A(); return; }
	f__0C3A_1750_000F_8E29(); return;
}

/**
 * Decompiled function f__0C3A_158D_0010_502A()
 *
 * @name f__0C3A_158D_0010_502A
 * @implements 0C3A:158D:0010:502A ()
 *
 * Called From: 0C3A:157B:001E:74B3
 * Called From: 0C3A:1588:001E:74B3
 */
void f__0C3A_158D_0010_502A()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x60);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x13);
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_1562_000D_08D8(); return; }
	f__0C3A_176C_0008_CB70(); return;
}

/**
 * Decompiled function f__0C3A_1594_0009_08B7()
 *
 * @name f__0C3A_1594_0009_08B7
 * @implements 0C3A:1594:0009:08B7 ()
 *
 * Called From: 0C3A:1560:0021:C6E1
 */
void f__0C3A_1594_0009_08B7()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x13);
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_1562_000D_08D8(); return; }
	emu_ip = 0x176C; emu_last_cs = 0x0C3A; emu_last_ip = 0x159A; emu_last_length = 0x0009; emu_last_crc = 0x08B7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_1750_000F_8E29()
 *
 * @name f__0C3A_1750_000F_8E29
 * @implements 0C3A:1750:000F:8E29 ()
 *
 * Called From: 0C3A:158A:001E:74B3
 */
void f__0C3A_1750_000F_8E29()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4C), emu_ax.x);
	f__0C3A_1440_0005_0D9E(); return;
}

/**
 * Decompiled function f__0C3A_176C_0008_CB70()
 *
 * @name f__0C3A_176C_0008_CB70
 * @implements 0C3A:176C:0008:CB70 ()
 *
 * Called From: 0C3A:159A:0010:502A
 */
void f__0C3A_176C_0008_CB70()
{
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__0C3A_1774_0005_1398(); return; }
	emu_ip = 0x19E7; emu_last_cs = 0x0C3A; emu_last_ip = 0x1771; emu_last_length = 0x0008; emu_last_crc = 0xCB70; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_1774_0005_1398()
 *
 * @name f__0C3A_1774_0005_1398
 * @implements 0C3A:1774:0005:1398 ()
 *
 * Called From: 0C3A:176F:0008:CB70
 */
void f__0C3A_1774_0005_1398()
{
	emu_push(emu_cs); emu_push(0x1779); emu_cs = 0x34B8; ovl__34B8(1);
	f__0C3A_1779_0019_AA3E();
}

/**
 * Decompiled function f__0C3A_1779_0019_AA3E()
 *
 * @name f__0C3A_1779_0019_AA3E
 * @implements 0C3A:1779:0019:AA3E ()
 *
 * Called From: 0C3A:1779:0005:1398
 */
void f__0C3A_1779_0019_AA3E()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x70A2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1792); emu_cs = 0x2B0E; f__2B0E_0006_0049_1E3C();
	f__0C3A_1792_000B_452B();
}

/**
 * Decompiled function f__0C3A_1792_000B_452B()
 *
 * @name f__0C3A_1792_000B_452B
 * @implements 0C3A:1792:000B:452B ()
 *
 * Called From: 0C3A:1792:0019:AA3E
 */
void f__0C3A_1792_000B_452B()
{
	emu_addws(&emu_sp, 0xC);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x179D); emu_cs = 0x34E9; ovl__34E9(2);
	f__0C3A_179D_0009_E78C();
}

/**
 * Decompiled function f__0C3A_179D_0009_E78C()
 *
 * @name f__0C3A_179D_0009_E78C
 * @implements 0C3A:179D:0009:E78C ()
 *
 * Called From: 0C3A:179D:000B:452B
 */
void f__0C3A_179D_0009_E78C()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x17A6); emu_cs = 0x34E9; ovl__34E9(0);
	f__0C3A_17A6_0013_FD36();
}

/**
 * Decompiled function f__0C3A_17A6_0013_FD36()
 *
 * @name f__0C3A_17A6_0013_FD36
 * @implements 0C3A:17A6:0013:FD36 ()
 *
 * Called From: 0C3A:17A6:0009:E78C
 */
void f__0C3A_17A6_0013_FD36()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xB);
	if (!emu_flags.zf) { f__0C3A_17B9_000C_FDB9(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x17BB; emu_last_cs = 0x0C3A; emu_last_ip = 0x17B7; emu_last_length = 0x0013; emu_last_crc = 0xFD36; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_17B9_000C_FDB9()
 *
 * @name f__0C3A_17B9_000C_FDB9
 * @implements 0C3A:17B9:000C:FDB9 ()
 *
 * Called From: 0C3A:17B2:0013:FD36
 */
void f__0C3A_17B9_000C_FDB9()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7418));
	emu_push(emu_cs); emu_push(0x17C5); emu_cs = 0x3495; ovl__3495(0);
	f__0C3A_17C5_000F_1FF4();
}

/**
 * Decompiled function f__0C3A_17C5_000F_1FF4()
 *
 * @name f__0C3A_17C5_000F_1FF4
 * @implements 0C3A:17C5:000F:1FF4 ()
 *
 * Called From: 0C3A:17C5:000C:FDB9
 */
void f__0C3A_17C5_000F_1FF4()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x17D4); emu_cs = 0x34E9; ovl__34E9(0);
	f__0C3A_17D4_0006_0418();
}

/**
 * Decompiled function f__0C3A_17D4_0006_0418()
 *
 * @name f__0C3A_17D4_0006_0418
 * @implements 0C3A:17D4:0006:0418 ()
 *
 * Called From: 0C3A:17D4:000F:1FF4
 */
void f__0C3A_17D4_0006_0418()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x17DA); emu_cs = 0x34B8; ovl__34B8(5);
	f__0C3A_17DA_000D_1B6E();
}

/**
 * Decompiled function f__0C3A_17DA_000D_1B6E()
 *
 * @name f__0C3A_17DA_000D_1B6E
 * @implements 0C3A:17DA:000D:1B6E ()
 *
 * Called From: 0C3A:17DA:0006:0418
 */
void f__0C3A_17DA_000D_1B6E()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x17E7); emu_cs = 0x259E; f__259E_0040_0015_2233();
	f__0C3A_17E7_0016_5D94();
}

/**
 * Decompiled function f__0C3A_17E7_0016_5D94()
 *
 * @name f__0C3A_17E7_0016_5D94
 * @implements 0C3A:17E7:0016:5D94 ()
 *
 * Called From: 0C3A:17E7:000D:1B6E
 */
void f__0C3A_17E7_0016_5D94()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x17FD); emu_cs = 0x34B8; ovl__34B8(4);
	f__0C3A_17FD_000C_4223();
}

/**
 * Decompiled function f__0C3A_17FD_000C_4223()
 *
 * @name f__0C3A_17FD_000C_4223
 * @implements 0C3A:17FD:000C:4223 ()
 *
 * Called From: 0C3A:17FD:0016:5D94
 */
void f__0C3A_17FD_000C_4223()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1809); emu_cs = 0x34E9; ovl__34E9(2);
	f__0C3A_1809_000A_6594();
}

/**
 * Decompiled function f__0C3A_1809_000A_6594()
 *
 * @name f__0C3A_1809_000A_6594
 * @implements 0C3A:1809:000A:6594 ()
 *
 * Called From: 0C3A:1809:000C:4223
 */
void f__0C3A_1809_000A_6594()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x0);
	if (!emu_flags.zf) { f__0C3A_1813_001B_B1FD(); return; }
	f__0C3A_1440_0005_0D9E(); return;
}

/**
 * Decompiled function f__0C3A_1813_001B_B1FD()
 *
 * @name f__0C3A_1813_001B_B1FD
 * @implements 0C3A:1813:001B:B1FD ()
 *
 * Called From: 0C3A:180E:000A:6594
 */
void f__0C3A_1813_001B_B1FD()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x2);
	if (!emu_flags.zf) { f__0C3A_1834_0009_021B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x182E); emu_ip = 0x2714; emu_last_cs = 0x0C3A; emu_last_ip = 0x182B; emu_last_length = 0x001B; emu_last_crc = 0xB1FD; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0C3A_1834_0009_021B()
 *
 * @name f__0C3A_1834_0009_021B
 * @implements 0C3A:1834:0009:021B ()
 *
 * Called From: 0C3A:1817:001B:B1FD
 */
void f__0C3A_1834_0009_021B()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x1);
	if (emu_flags.zf) { f__0C3A_183D_0008_DB16(); return; }
	f__0C3A_19E5_0002_03A2(); return;
}

/**
 * Decompiled function f__0C3A_183D_0008_DB16()
 *
 * @name f__0C3A_183D_0008_DB16
 * @implements 0C3A:183D:0008:DB16 ()
 *
 * Called From: 0C3A:1838:0009:021B
 */
void f__0C3A_183D_0008_DB16()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	f__0C3A_19DC_0009_02E5(); return;
}

/**
 * Decompiled function f__0C3A_1845_0014_2428()
 *
 * @name f__0C3A_1845_0014_2428
 * @implements 0C3A:1845:0014:2428 ()
 *
 * Called From: 0C3A:19E2:0009:02E5
 * Called From: 0C3A:19E2:000C:62EB
 */
void f__0C3A_1845_0014_2428()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_dx.x, 0xB);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ds, emu_bx.x, -0x7414), 0x0);
	if (!emu_flags.zf) { f__0C3A_1859_0023_5DC6(); return; }
	f__0C3A_19D9_000C_62EB(); return;
}

/**
 * Decompiled function f__0C3A_1859_0023_5DC6()
 *
 * @name f__0C3A_1859_0023_5DC6
 * @implements 0C3A:1859:0023:5DC6 ()
 *
 * Called From: 0C3A:1854:0014:2428
 */
void f__0C3A_1859_0023_5DC6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_dx.x, 0xB);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x, -0x7416));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xB);
	if (emu_flags.zf) { emu_ip = 0x18CF; emu_last_cs = 0x0C3A; emu_last_ip = 0x186F; emu_last_length = 0x0023; emu_last_crc = 0x5DC6; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x187C); f__0C3A_1E67_0011_CC67();
	f__0C3A_187C_001E_5E51();
}

/**
 * Decompiled function f__0C3A_187C_001E_5E51()
 *
 * @name f__0C3A_187C_001E_5E51
 * @implements 0C3A:187C:001E:5E51 ()
 *
 * Called From: 0C3A:187C:0023:5DC6
 */
void f__0C3A_187C_001E_5E51()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4C), emu_di);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00, -0x7418), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x18CC; emu_last_cs = 0x0C3A; emu_last_ip = 0x188A; emu_last_length = 0x001E; emu_last_crc = 0x5E51; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x189A); f__0C3A_0B93_0034_7881();
	f__0C3A_189A_0022_BD2E();
}

/**
 * Decompiled function f__0C3A_189A_0022_BD2E()
 *
 * @name f__0C3A_189A_0022_BD2E
 * @implements 0C3A:189A:0022:BD2E ()
 *
 * Called From: 0C3A:189A:001E:5E51
 */
void f__0C3A_189A_0022_BD2E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0C3A_18CC_0003_0762(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_movw(&emu_ax.x, 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x18BC); emu_cs = 0x10E4; f__10E4_0117_0015_0AFA();
	f__0C3A_18BC_0010_C765();
}

/**
 * Decompiled function f__0C3A_18BC_0010_C765()
 *
 * @name f__0C3A_18BC_0010_C765
 * @implements 0C3A:18BC:0010:C765 ()
 *
 * Called From: 0C3A:18BC:0022:BD2E
 */
void f__0C3A_18BC_0010_C765()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0C3A_18CC_0003_0762(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4C), emu_di);
	f__0C3A_1440_0005_0D9E(); return;
}

/**
 * Decompiled function f__0C3A_18CC_0003_0762()
 *
 * @name f__0C3A_18CC_0003_0762
 * @implements 0C3A:18CC:0003:0762 ()
 *
 * Called From: 0C3A:189E:0022:BD2E
 * Called From: 0C3A:18C0:0010:C765
 */
void f__0C3A_18CC_0003_0762()
{
	f__0C3A_19D9_000C_62EB(); return;
}

/**
 * Decompiled function f__0C3A_19D9_000C_62EB()
 *
 * @name f__0C3A_19D9_000C_62EB
 * @implements 0C3A:19D9:000C:62EB ()
 *
 * Called From: 0C3A:1856:0014:2428
 * Called From: 0C3A:18CC:0003:0762
 */
void f__0C3A_19D9_000C_62EB()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x19);
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_19E5_0002_03A2(); return; }
	f__0C3A_1845_0014_2428(); return;
}

/**
 * Decompiled function f__0C3A_19DC_0009_02E5()
 *
 * @name f__0C3A_19DC_0009_02E5
 * @implements 0C3A:19DC:0009:02E5 ()
 *
 * Called From: 0C3A:1842:0008:DB16
 */
void f__0C3A_19DC_0009_02E5()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x19);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x19E5; emu_last_cs = 0x0C3A; emu_last_ip = 0x19E0; emu_last_length = 0x0009; emu_last_crc = 0x02E5; emu_call(); return; } // Jump does not resolve
	f__0C3A_1845_0014_2428(); return;
}

/**
 * Decompiled function f__0C3A_19E5_0002_03A2()
 *
 * @name f__0C3A_19E5_0002_03A2
 * @implements 0C3A:19E5:0002:03A2 ()
 *
 * Called From: 0C3A:183A:0009:021B
 * Called From: 0C3A:19E0:000C:62EB
 */
void f__0C3A_19E5_0002_03A2()
{
	f__0C3A_19EE_001E_4804(); return;
}

/**
 * Decompiled function f__0C3A_19EE_001E_4804()
 *
 * @name f__0C3A_19EE_001E_4804
 * @implements 0C3A:19EE:001E:4804 ()
 *
 * Called From: 0C3A:14B4:000D:6237
 * Called From: 0C3A:19E5:0002:03A2
 */
void f__0C3A_19EE_001E_4804()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xB);
	if (emu_flags.zf) { emu_ip = 0x1A10; emu_last_cs = 0x0C3A; emu_last_ip = 0x19F6; emu_last_length = 0x001E; emu_last_crc = 0x4804; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x4C), emu_di);
	if (emu_flags.zf) { f__0C3A_1A0E_0002_03AA(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1A0C); f__0C3A_1E67_0011_CC67();
	f__0C3A_1A0C_0004_04F2();
}

/**
 * Decompiled function f__0C3A_1A0C_0004_04F2()
 *
 * @name f__0C3A_1A0C_0004_04F2
 * @implements 0C3A:1A0C:0004:04F2 ()
 *
 * Called From: 0C3A:1A0C:001E:4804
 */
void f__0C3A_1A0C_0004_04F2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__0C3A_1A13_000D_81E6(); return;
}

/**
 * Decompiled function f__0C3A_1A0E_0002_03AA()
 *
 * @name f__0C3A_1A0E_0002_03AA
 * @implements 0C3A:1A0E:0002:03AA ()
 *
 * Called From: 0C3A:19FF:001E:4804
 */
void f__0C3A_1A0E_0002_03AA()
{
	f__0C3A_1A13_000D_81E6(); return;
}

/**
 * Decompiled function f__0C3A_1A13_000D_81E6()
 *
 * @name f__0C3A_1A13_000D_81E6
 * @implements 0C3A:1A13:000D:81E6 ()
 *
 * Called From: 0C3A:1A0E:0002:03AA
 * Called From: 0C3A:1A0E:0004:04F2
 */
void f__0C3A_1A13_000D_81E6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (emu_flags.zf) { f__0C3A_1A20_0008_CBBA(); return; }
	emu_ip = 0x1B70; emu_last_cs = 0x0C3A; emu_last_ip = 0x1A1D; emu_last_length = 0x000D; emu_last_crc = 0x81E6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_1A20_0008_CBBA()
 *
 * @name f__0C3A_1A20_0008_CBBA
 * @implements 0C3A:1A20:0008:CBBA ()
 *
 * Called From: 0C3A:1A1B:000D:81E6
 */
void f__0C3A_1A20_0008_CBBA()
{
	emu_cmpws(&emu_di, 0xFF);
	if (!emu_flags.zf) { f__0C3A_1A28_0034_B0FB(); return; }
	f__0C3A_1B70_0003_058C(); return;
}

/**
 * Decompiled function f__0C3A_1A28_0034_B0FB()
 *
 * @name f__0C3A_1A28_0034_B0FB
 * @implements 0C3A:1A28:0034:B0FB ()
 *
 * Called From: 0C3A:1A23:0008:CBBA
 */
void f__0C3A_1A28_0034_B0FB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (emu_flags.zf) { f__0C3A_1A7A_0022_3B9F(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_movw(&emu_dx.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1A5C); emu_cs = 0x1A34; emu_ip = 0x2357; emu_last_cs = 0x0C3A; emu_last_ip = 0x1A57; emu_last_length = 0x0034; emu_last_crc = 0xB0FB; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0C3A_1A7A_0022_3B9F()
 *
 * @name f__0C3A_1A7A_0022_3B9F
 * @implements 0C3A:1A7A:0022:3B9F ()
 *
 * Called From: 0C3A:1A30:0034:B0FB
 */
void f__0C3A_1A7A_0022_3B9F()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1A9C); f__0C3A_0009_0029_6B1F();
	f__0C3A_1A9C_0021_46B7();
}

/**
 * Decompiled function f__0C3A_1A9C_0021_46B7()
 *
 * @name f__0C3A_1A9C_0021_46B7
 * @implements 0C3A:1A9C:0021:46B7 ()
 *
 * Called From: 0C3A:1A9C:0022:3B9F
 */
void f__0C3A_1A9C_0021_46B7()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x1ABD); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__0C3A_1ABD_004E_AEFE();
}

/**
 * Decompiled function f__0C3A_1ABD_004E_AEFE()
 *
 * @name f__0C3A_1ABD_004E_AEFE
 * @implements 0C3A:1ABD:004E:AEFE ()
 *
 * Called From: 0C3A:1ABD:0021:46B7
 */
void f__0C3A_1ABD_004E_AEFE()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xBFFF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_flags.zf) { emu_ip = 0x1B4F; emu_last_cs = 0x0C3A; emu_last_ip = 0x1AD3; emu_last_length = 0x004E; emu_last_crc = 0xAEFE; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_pop(&emu_es);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4C), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x18));
	emu_movb(&emu_cx.l, 0x8);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x50), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1B0B); f__0C3A_1398_000D_C7C7();
	f__0C3A_1B0B_001B_2487();
}

/**
 * Decompiled function f__0C3A_1B0B_001B_2487()
 *
 * @name f__0C3A_1B0B_001B_2487
 * @implements 0C3A:1B0B:001B:2487 ()
 *
 * Called From: 0C3A:1B0B:004E:AEFE
 */
void f__0C3A_1B0B_001B_2487()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x1B47; emu_last_cs = 0x0C3A; emu_last_ip = 0x1B15; emu_last_length = 0x001B; emu_last_crc = 0x2487; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movw(&emu_ax.x, 0x89);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1B26); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__0C3A_1B26_000D_F07B();
}

/**
 * Decompiled function f__0C3A_1B26_000D_F07B()
 *
 * @name f__0C3A_1B26_000D_F07B
 * @implements 0C3A:1B26:000D:F07B ()
 *
 * Called From: 0C3A:1B26:001B:2487
 */
void f__0C3A_1B26_000D_F07B()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1B33); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	f__0C3A_1B33_0011_B261();
}

/**
 * Decompiled function f__0C3A_1B33_0011_B261()
 *
 * @name f__0C3A_1B33_0011_B261
 * @implements 0C3A:1B33:0011:B261 ()
 *
 * Called From: 0C3A:1B33:000D:F07B
 */
void f__0C3A_1B33_0011_B261()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1B44); emu_cs = 0x10E4; f__10E4_09AB_0031_9946();
	f__0C3A_1B44_0009_EA4D();
}

/**
 * Decompiled function f__0C3A_1B44_0009_EA4D()
 *
 * @name f__0C3A_1B44_0009_EA4D
 * @implements 0C3A:1B44:0009:EA4D ()
 *
 * Called From: 0C3A:1B44:0011:B261
 */
void f__0C3A_1B44_0009_EA4D()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__0C3A_1442_0003_07FE(); return;
}

/**
 * Decompiled function f__0C3A_1B70_0003_058C()
 *
 * @name f__0C3A_1B70_0003_058C
 * @implements 0C3A:1B70:0003:058C ()
 *
 * Called From: 0C3A:1488:0015:6694
 * Called From: 0C3A:1A25:0008:CBBA
 */
void f__0C3A_1B70_0003_058C()
{
	f__0C3A_1440_0005_0D9E(); return;
}

/**
 * Decompiled function f__0C3A_1B73_0006_137A()
 *
 * @name f__0C3A_1B73_0006_137A
 * @implements 0C3A:1B73:0006:137A ()
 *
 * Called From: 0C3A:1442:0005:0D9E
 * Called From: 0C3A:1442:0003:07FE
 */
void f__0C3A_1B73_0006_137A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_1B79_0021_3977()
 *
 * @name f__0C3A_1B79_0021_3977
 * @implements 0C3A:1B79:0021:3977 ()
 *
 * Called From: 0AEC:05EF:001A:AB70
 * Called From: 0C3A:1522:000B:E17A
 */
void f__0C3A_1B79_0021_3977()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_1B9A_0026_E719(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x1E4F; emu_last_cs = 0x0C3A; emu_last_ip = 0x1B97; emu_last_length = 0x0021; emu_last_crc = 0x3977; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_1B97_0003_0598()
 *
 * @name f__0C3A_1B97_0003_0598
 * @implements 0C3A:1B97:0003:0598 ()
 *
 * Called From: 0C3A:1E4C:0009:1D53
 */
void f__0C3A_1B97_0003_0598()
{
	f__0C3A_1E4F_0006_137A(); return;
}

/**
 * Decompiled function f__0C3A_1B9A_0026_E719()
 *
 * @name f__0C3A_1B9A_0026_E719
 * @implements 0C3A:1B9A:0026:E719 ()
 *
 * Called From: 0C3A:1B91:0021:3977
 */
void f__0C3A_1B9A_0026_E719()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1BC0); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__0C3A_1BC0_0028_2813();
}

/**
 * Decompiled function f__0C3A_1BC0_0028_2813()
 *
 * @name f__0C3A_1BC0_0028_2813
 * @implements 0C3A:1BC0:0028:2813 ()
 *
 * Called From: 0C3A:1BC0:0026:E719
 */
void f__0C3A_1BC0_0028_2813()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_subw(&emu_ax.x, 0x3);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_bx.x, 0x8);
	if ((emu_flags.cf || emu_flags.zf)) { f__0C3A_1BE8_0007_5E20(); return; }
	emu_ip = 0x1E3A; emu_last_cs = 0x0C3A; emu_last_ip = 0x1BE5; emu_last_length = 0x0028; emu_last_crc = 0x2813; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_1BE8_0007_5E20()
 *
 * @name f__0C3A_1BE8_0007_5E20
 * @implements 0C3A:1BE8:0007:5E20 ()
 *
 * Called From: 0C3A:1BE3:0028:2813
 */
void f__0C3A_1BE8_0007_5E20()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1E55);
	switch (emu_ip) {
		case 0x1BEF: f__0C3A_1BEF_0019_2B95(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0C3A; emu_last_ip = 0x1BEA; emu_last_length = 0x0007; emu_last_crc = 0x5E20;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__0C3A_1BEF_0019_2B95()
 *
 * @name f__0C3A_1BEF_0019_2B95
 * @implements 0C3A:1BEF:0019:2B95 ()
 *
 * Called From: 0C3A:1BEA:0007:5E20
 */
void f__0C3A_1BEF_0019_2B95()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xA);
	emu_xorw(&emu_si, emu_si);
	f__0C3A_1D16_0008_F24C(); return;
}

/**
 * Decompiled function f__0C3A_1C08_0069_E8D6()
 *
 * @name f__0C3A_1C08_0069_E8D6
 * @implements 0C3A:1C08:0069:E8D6 ()
 *
 * Called From: 0C3A:1D1B:0008:F24C
 * Called From: 0C3A:1D1B:001D:3D44
 */
void f__0C3A_1C08_0069_E8D6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x1A));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_dx.x);
	emu_cmpws(&emu_si, 0x7);
	if (!emu_flags.zf) { f__0C3A_1C4A_0027_70FC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x0);
	if (!emu_flags.zf) { f__0C3A_1C4A_0027_70FC(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x1);
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_1C4A_0027_70FC(); return; }
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0xFBFF);
	emu_andws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0xFF);
	emu_movw(&emu_di, 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_andw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_andw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!emu_flags.zf) { emu_ip = 0x1C60; emu_last_cs = 0x0C3A; emu_last_ip = 0x1C59; emu_last_length = 0x0069; emu_last_crc = 0xE8D6; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x1C71; emu_last_cs = 0x0C3A; emu_last_ip = 0x1C5E; emu_last_length = 0x0069; emu_last_crc = 0xE8D6; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x1C71; emu_last_cs = 0x0C3A; emu_last_ip = 0x1C6C; emu_last_length = 0x0069; emu_last_crc = 0xE8D6; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x1D01; emu_last_cs = 0x0C3A; emu_last_ip = 0x1C6E; emu_last_length = 0x0069; emu_last_crc = 0xE8D6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_1C4A_0027_70FC()
 *
 * @name f__0C3A_1C4A_0027_70FC
 * @implements 0C3A:1C4A:0027:70FC ()
 *
 * Called From: 0C3A:1C2B:0069:E8D6
 * Called From: 0C3A:1C35:0069:E8D6
 * Called From: 0C3A:1C3C:0069:E8D6
 */
void f__0C3A_1C4A_0027_70FC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_andw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_andw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!emu_flags.zf) { f__0C3A_1C60_0011_F8D3(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__0C3A_1C71_0068_2B80(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x1C71; emu_last_cs = 0x0C3A; emu_last_ip = 0x1C6C; emu_last_length = 0x0027; emu_last_crc = 0x70FC; emu_call(); return; } // Jump does not resolve
	f__0C3A_1D01_001D_3D44(); return;
}

/**
 * Decompiled function f__0C3A_1C60_0011_F8D3()
 *
 * @name f__0C3A_1C60_0011_F8D3
 * @implements 0C3A:1C60:0011:F8D3 ()
 *
 * Called From: 0C3A:1C59:0027:70FC
 */
void f__0C3A_1C60_0011_F8D3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x1C71; emu_last_cs = 0x0C3A; emu_last_ip = 0x1C6C; emu_last_length = 0x0011; emu_last_crc = 0xF8D3; emu_call(); return; } // Jump does not resolve
	f__0C3A_1D01_001D_3D44(); return;
}

/**
 * Decompiled function f__0C3A_1C71_0068_2B80()
 *
 * @name f__0C3A_1C71_0068_2B80
 * @implements 0C3A:1C71:0068:2B80 ()
 *
 * Called From: 0C3A:1C5E:0027:70FC
 */
void f__0C3A_1C71_0068_2B80()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x0);
	if (emu_flags.zf) { f__0C3A_1C83_0056_2655(); return; }
	emu_cmpws(&emu_si, 0x3);
	if (!emu_flags.zf) { f__0C3A_1C83_0056_2655(); return; }
	emu_movw(&emu_di, 0x2);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0C3A_1D01_001D_3D44(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x31));
	emu_movb(&emu_ax.h, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x1D01; emu_last_cs = 0x0C3A; emu_last_ip = 0x1CA3; emu_last_length = 0x0068; emu_last_crc = 0x2B80; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x21));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4E));
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1CC3; emu_last_cs = 0x0C3A; emu_last_ip = 0x1CB3; emu_last_length = 0x0068; emu_last_crc = 0x2B80; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { emu_ip = 0x1CD9; emu_last_cs = 0x0C3A; emu_last_ip = 0x1CC1; emu_last_length = 0x0068; emu_last_crc = 0x2B80; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_ip = 0x1D01; emu_last_cs = 0x0C3A; emu_last_ip = 0x1CD7; emu_last_length = 0x0068; emu_last_crc = 0x2B80; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_1C83_0056_2655()
 *
 * @name f__0C3A_1C83_0056_2655
 * @implements 0C3A:1C83:0056:2655 ()
 *
 * Called From: 0C3A:1C79:0068:2B80
 * Called From: 0C3A:1C7E:0068:2B80
 */
void f__0C3A_1C83_0056_2655()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0C3A_1D01_001D_3D44(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x31));
	emu_movb(&emu_ax.h, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x1D01; emu_last_cs = 0x0C3A; emu_last_ip = 0x1CA3; emu_last_length = 0x0056; emu_last_crc = 0x2655; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x21));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4E));
	if ((emu_flags.cf || emu_flags.zf)) { f__0C3A_1CC3_0016_6AE1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { emu_ip = 0x1CD9; emu_last_cs = 0x0C3A; emu_last_ip = 0x1CC1; emu_last_length = 0x0056; emu_last_crc = 0x2655; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_ip = 0x1D01; emu_last_cs = 0x0C3A; emu_last_ip = 0x1CD7; emu_last_length = 0x0056; emu_last_crc = 0x2655; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_1CC3_0016_6AE1()
 *
 * @name f__0C3A_1CC3_0016_6AE1
 * @implements 0C3A:1CC3:0016:6AE1 ()
 *
 * Called From: 0C3A:1CB3:0056:2655
 */
void f__0C3A_1CC3_0016_6AE1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	f__0C3A_1D01_001D_3D44(); return;
}

/**
 * Decompiled function f__0C3A_1D01_001D_3D44()
 *
 * @name f__0C3A_1D01_001D_3D44
 * @implements 0C3A:1D01:001D:3D44 ()
 *
 * Called From: 0C3A:1C6E:0027:70FC
 * Called From: 0C3A:1C6E:0011:F8D3
 * Called From: 0C3A:1C8A:0056:2655
 * Called From: 0C3A:1C8A:0068:2B80
 * Called From: 0C3A:1CD7:0016:6AE1
 */
void f__0C3A_1D01_001D_3D44()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_shlw(&emu_dx.x, 0x1);
	emu_rclw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x60);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x13);
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_1D1E_0003_07DE(); return; }
	f__0C3A_1C08_0069_E8D6(); return;
}

/**
 * Decompiled function f__0C3A_1D16_0008_F24C()
 *
 * @name f__0C3A_1D16_0008_F24C
 * @implements 0C3A:1D16:0008:F24C ()
 *
 * Called From: 0C3A:1C05:0019:2B95
 */
void f__0C3A_1D16_0008_F24C()
{
	emu_cmpws(&emu_si, 0x13);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x1D1E; emu_last_cs = 0x0C3A; emu_last_ip = 0x1D19; emu_last_length = 0x0008; emu_last_crc = 0xF24C; emu_call(); return; } // Jump does not resolve
	f__0C3A_1C08_0069_E8D6(); return;
}

/**
 * Decompiled function f__0C3A_1D1E_0003_07DE()
 *
 * @name f__0C3A_1D1E_0003_07DE
 * @implements 0C3A:1D1E:0003:07DE ()
 *
 * Called From: 0C3A:1D19:001D:3D44
 */
void f__0C3A_1D1E_0003_07DE()
{
	f__0C3A_1E46_0009_1D53(); return;
}

/**
 * Decompiled function f__0C3A_1E46_0009_1D53()
 *
 * @name f__0C3A_1E46_0009_1D53
 * @implements 0C3A:1E46:0009:1D53 ()
 *
 * Called From: 0C3A:1D1E:0003:07DE
 */
void f__0C3A_1E46_0009_1D53()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0C3A_1B97_0003_0598(); return;
}

/**
 * Decompiled function f__0C3A_1E4F_0006_137A()
 *
 * @name f__0C3A_1E4F_0006_137A
 * @implements 0C3A:1E4F:0006:137A ()
 *
 * Called From: 0C3A:1B97:0003:0598
 */
void f__0C3A_1E4F_0006_137A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_1E67_0011_CC67()
 *
 * @name f__0C3A_1E67_0011_CC67
 * @implements 0C3A:1E67:0011:CC67 ()
 *
 * Called From: 0C3A:1879:0023:5DC6
 * Called From: 0C3A:1A09:001E:4804
 */
void f__0C3A_1E67_0011_CC67()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_1E78_000D_8318(); return; }
	emu_ip = 0x1F6C; emu_last_cs = 0x0C3A; emu_last_ip = 0x1E75; emu_last_length = 0x0011; emu_last_crc = 0xCC67; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_1E78_000D_8318()
 *
 * @name f__0C3A_1E78_000D_8318
 * @implements 0C3A:1E78:000D:8318 ()
 *
 * Called From: 0C3A:1E73:0011:CC67
 */
void f__0C3A_1E78_000D_8318()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { f__0C3A_1E85_0018_1390(); return; }
	f__0C3A_1F6C_0004_0F7A(); return;
}

/**
 * Decompiled function f__0C3A_1E85_0018_1390()
 *
 * @name f__0C3A_1E85_0018_1390
 * @implements 0C3A:1E85:0018:1390 ()
 *
 * Called From: 0C3A:1E80:000D:8318
 */
void f__0C3A_1E85_0018_1390()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { emu_ip = 0x1EC8; emu_last_cs = 0x0C3A; emu_last_ip = 0x1E8D; emu_last_length = 0x0018; emu_last_crc = 0x1390; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1E9D); emu_cs = 0x1082; f__1082_03A1_0023_2E20();
	f__0C3A_1E9D_0012_3D5F();
}

/**
 * Decompiled function f__0C3A_1E9D_0012_3D5F()
 *
 * @name f__0C3A_1E9D_0012_3D5F
 * @implements 0C3A:1E9D:0012:3D5F ()
 *
 * Called From: 0C3A:1E9D:0018:1390
 */
void f__0C3A_1E9D_0012_3D5F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1EAF); emu_cs = 0x1082; f__1082_0325_0018_A45D();
	f__0C3A_1EAF_0019_C05F();
}

/**
 * Decompiled function f__0C3A_1EAF_0019_C05F()
 *
 * @name f__0C3A_1EAF_0019_C05F
 * @implements 0C3A:1EAF:0019:C05F ()
 *
 * Called From: 0C3A:1EAF:0012:3D5F
 */
void f__0C3A_1EAF_0019_C05F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	f__0C3A_1EFF_0024_140D(); return;
}

/**
 * Decompiled function f__0C3A_1EFF_0024_140D()
 *
 * @name f__0C3A_1EFF_0024_140D
 * @implements 0C3A:1EFF:0024:140D ()
 *
 * Called From: 0C3A:1EC6:0019:C05F
 */
void f__0C3A_1EFF_0024_140D()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x18));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x50));
	emu_movb(&emu_cx.l, 0x8);
	emu_shrw(&emu_dx.x, emu_cx.l);
	emu_subw(&emu_ax.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x18));
	emu_push(emu_cs); emu_push(0x1F23); emu_cs = 0x34C1; ovl__34C1(2);
	f__0C3A_1F23_0014_9A5F();
}

/**
 * Decompiled function f__0C3A_1F23_0014_9A5F()
 *
 * @name f__0C3A_1F23_0014_9A5F
 * @implements 0C3A:1F23:0014:9A5F ()
 *
 * Called From: 0C3A:1F23:0024:140D
 */
void f__0C3A_1F23_0014_9A5F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x1F37); emu_cs = 0x34C1; ovl__34C1(0);
	f__0C3A_1F37_0011_7DDA();
}

/**
 * Decompiled function f__0C3A_1F37_0011_7DDA()
 *
 * @name f__0C3A_1F37_0011_7DDA
 * @implements 0C3A:1F37:0011:7DDA ()
 *
 * Called From: 0C3A:1F37:0014:9A5F
 */
void f__0C3A_1F37_0011_7DDA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1F48); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__0C3A_1F48_0028_36F0();
}

/**
 * Decompiled function f__0C3A_1F48_0028_36F0()
 *
 * @name f__0C3A_1F48_0028_36F0
 * @implements 0C3A:1F48:0028:36F0 ()
 *
 * Called From: 0C3A:1F48:0011:7DDA
 */
void f__0C3A_1F48_0028_36F0()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_pop(&emu_ax.x);
	emu_addw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xBFFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x50), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_1F6C_0004_0F7A()
 *
 * @name f__0C3A_1F6C_0004_0F7A
 * @implements 0C3A:1F6C:0004:0F7A ()
 *
 * Called From: 0C3A:1E82:000D:8318
 */
void f__0C3A_1F6C_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_1F70_0010_7894()
 *
 * @name f__0C3A_1F70_0010_7894
 * @implements 0C3A:1F70:0010:7894 ()
 *
 * Called From: 0C3A:0723:001E:AA7E
 * Called From: 0C3A:0723:0015:E473
 * Called From: 1391:077C:000C:AA05
 * Called From: B511:033A:000C:600B
 */
void f__0C3A_1F70_0010_7894()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1F80); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__0C3A_1F80_0012_19AD();
}

/**
 * Decompiled function f__0C3A_1F80_0012_19AD()
 *
 * @name f__0C3A_1F80_0012_19AD
 * @implements 0C3A:1F80:0012:19AD ()
 *
 * Called From: 0C3A:1F80:0010:7894
 */
void f__0C3A_1F80_0012_19AD()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!emu_flags.zf) { f__0C3A_1F92_0022_06ED(); return; }
	emu_ip = 0x20D5; emu_last_cs = 0x0C3A; emu_last_ip = 0x1F8F; emu_last_length = 0x0012; emu_last_crc = 0x19AD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_1F92_0022_06ED()
 *
 * @name f__0C3A_1F92_0022_06ED
 * @implements 0C3A:1F92:0022:06ED ()
 *
 * Called From: 0C3A:1F8D:0012:19AD
 */
void f__0C3A_1F92_0022_06ED()
{
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), 0x0);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1FB4); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__0C3A_1FB4_0006_3D3C();
}

/**
 * Decompiled function f__0C3A_1FB4_0006_3D3C()
 *
 * @name f__0C3A_1FB4_0006_3D3C
 * @implements 0C3A:1FB4:0006:3D3C ()
 *
 * Called From: 0C3A:1FB4:0022:06ED
 */
void f__0C3A_1FB4_0006_3D3C()
{
	emu_addws(&emu_sp, 0x8);
	f__0C3A_2067_0011_8B15(); return;
}

/**
 * Decompiled function f__0C3A_1FBA_0053_9E60()
 *
 * @name f__0C3A_1FBA_0053_9E60
 * @implements 0C3A:1FBA:0053:9E60 ()
 *
 * Called From: 0C3A:2075:0011:8B15
 * Called From: 0C3A:2075:0013:88B9
 */
void f__0C3A_1FBA_0053_9E60()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x36));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x38), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_2050_0015_7930(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_2043_000D_2793(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x200D); emu_cs = 0x34C1; ovl__34C1(2);
	f__0C3A_200D_000E_383B();
}

/**
 * Decompiled function f__0C3A_200D_000E_383B()
 *
 * @name f__0C3A_200D_000E_383B
 * @implements 0C3A:200D:000E:383B ()
 *
 * Called From: 0C3A:200D:0053:9E60
 */
void f__0C3A_200D_000E_383B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, 0x80);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x201B; emu_last_cs = 0x0C3A; emu_last_ip = 0x2015; emu_last_length = 0x000E; emu_last_crc = 0x383B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	f__0C3A_201E_000C_2666(); return;
}

/**
 * Decompiled function f__0C3A_201E_000C_2666()
 *
 * @name f__0C3A_201E_000C_2666
 * @implements 0C3A:201E:000C:2666 ()
 *
 * Called From: 0C3A:2019:000E:383B
 */
void f__0C3A_201E_000C_2666()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, 0xFF);
	if (!emu_flags.cf) { emu_ip = 0x202A; emu_last_cs = 0x0C3A; emu_last_ip = 0x2024; emu_last_length = 0x000C; emu_last_crc = 0x2666; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	f__0C3A_202D_0012_8ADA(); return;
}

/**
 * Decompiled function f__0C3A_202D_0012_8ADA()
 *
 * @name f__0C3A_202D_0012_8ADA
 * @implements 0C3A:202D:0012:8ADA ()
 *
 * Called From: 0C3A:2028:000C:2666
 */
void f__0C3A_202D_0012_8ADA()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x203F); emu_cs = 0x34C1; ovl__34C1(0);
	f__0C3A_203F_0004_04E6();
}

/**
 * Decompiled function f__0C3A_203F_0004_04E6()
 *
 * @name f__0C3A_203F_0004_04E6
 * @implements 0C3A:203F:0004:04E6 ()
 *
 * Called From: 0C3A:203F:0012:8ADA
 */
void f__0C3A_203F_0004_04E6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__0C3A_204C_0004_0448(); return;
}

/**
 * Decompiled function f__0C3A_2043_000D_2793()
 *
 * @name f__0C3A_2043_000D_2793
 * @implements 0C3A:2043:000D:2793 ()
 *
 * Called From: 0C3A:1FF8:0053:9E60
 */
void f__0C3A_2043_000D_2793()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_di, emu_ax.x);
	f__0C3A_205A_000B_0232(); return;
}

/**
 * Decompiled function f__0C3A_204C_0004_0448()
 *
 * @name f__0C3A_204C_0004_0448
 * @implements 0C3A:204C:0004:0448 ()
 *
 * Called From: 0C3A:2041:0004:04E6
 */
void f__0C3A_204C_0004_0448()
{
	emu_addw(&emu_di, emu_ax.x);
	f__0C3A_205A_000B_0232(); return;
}

/**
 * Decompiled function f__0C3A_2050_0015_7930()
 *
 * @name f__0C3A_2050_0015_7930
 * @implements 0C3A:2050:0015:7930 ()
 *
 * Called From: 0C3A:1FE8:0053:9E60
 */
void f__0C3A_2050_0015_7930()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2065); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	f__0C3A_2065_0013_88B9();
}

/**
 * Decompiled function f__0C3A_205A_000B_0232()
 *
 * @name f__0C3A_205A_000B_0232
 * @implements 0C3A:205A:000B:0232 ()
 *
 * Called From: 0C3A:204E:0004:0448
 * Called From: 0C3A:204E:000D:2793
 */
void f__0C3A_205A_000B_0232()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2065); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	f__0C3A_2065_0013_88B9();
}

/**
 * Decompiled function f__0C3A_2065_0013_88B9()
 *
 * @name f__0C3A_2065_0013_88B9
 * @implements 0C3A:2065:0013:88B9 ()
 *
 * Called From: 0C3A:2065:0015:7930
 * Called From: 0C3A:2065:000B:0232
 */
void f__0C3A_2065_0013_88B9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.zf) { f__0C3A_2078_002C_EAAC(); return; }
	f__0C3A_1FBA_0053_9E60(); return;
}

/**
 * Decompiled function f__0C3A_2067_0011_8B15()
 *
 * @name f__0C3A_2067_0011_8B15
 * @implements 0C3A:2067:0011:8B15 ()
 *
 * Called From: 0C3A:1FB7:0006:3D3C
 */
void f__0C3A_2067_0011_8B15()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.zf) { f__0C3A_2078_002C_EAAC(); return; }
	f__0C3A_1FBA_0053_9E60(); return;
}

/**
 * Decompiled function f__0C3A_2078_002C_EAAC()
 *
 * @name f__0C3A_2078_002C_EAAC
 * @implements 0C3A:2078:002C:EAAC ()
 *
 * Called From: 0C3A:2073:0013:88B9
 * Called From: 0C3A:2073:0011:8B15
 */
void f__0C3A_2078_002C_EAAC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__0C3A_20AF_002C_59DD(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0C3A_20AF_002C_59DD(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x20A4); emu_cs = 0x0FCB; emu_ip = 0x2103; emu_last_cs = 0x0C3A; emu_last_ip = 0x209F; emu_last_length = 0x002C; emu_last_crc = 0xEAAC; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0C3A_20AF_002C_59DD()
 *
 * @name f__0C3A_20AF_002C_59DD
 * @implements 0C3A:20AF:002C:59DD ()
 *
 * Called From: 0C3A:2090:002C:EAAC
 * Called From: 0C3A:2095:002C:EAAC
 */
void f__0C3A_20AF_002C_59DD()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__0C3A_20D5_0006_137A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	if (!emu_flags.zf) { f__0C3A_20D5_0006_137A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x20D5; emu_last_cs = 0x0C3A; emu_last_ip = 0x20CD; emu_last_length = 0x002C; emu_last_crc = 0x59DD; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B4), 0x0);
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_20D5_0006_137A()
 *
 * @name f__0C3A_20D5_0006_137A
 * @implements 0C3A:20D5:0006:137A ()
 *
 * Called From: 0C3A:20B9:002C:59DD
 * Called From: 0C3A:20C6:002C:59DD
 */
void f__0C3A_20D5_0006_137A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_20DB_0011_8989()
 *
 * @name f__0C3A_20DB_0011_8989
 * @implements 0C3A:20DB:0011:8989 ()
 *
 * Called From: 1391:0789:000D:8146
 */
void f__0C3A_20DB_0011_8989()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x14);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x20EC); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__0C3A_20EC_0027_2229();
}

/**
 * Decompiled function f__0C3A_20EC_0027_2229()
 *
 * @name f__0C3A_20EC_0027_2229
 * @implements 0C3A:20EC:0027:2229 ()
 *
 * Called From: 0C3A:20EC:0011:8989
 */
void f__0C3A_20EC_0027_2229()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__0C3A_2114_000B_358B(); return; }
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2113); emu_cs = 0x34CD; ovl__34CD(16);
	f__0C3A_2113_000C_A58E();
}

/**
 * Decompiled function f__0C3A_2113_000C_A58E()
 *
 * @name f__0C3A_2113_000C_A58E
 * @implements 0C3A:2113:000C:A58E ()
 *
 * Called From: 0C3A:2113:0027:2229
 */
void f__0C3A_2113_000C_A58E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x211F); emu_cs = 0x34C1; ovl__34C1(2);
	f__0C3A_211F_0011_6013();
}

/**
 * Decompiled function f__0C3A_2114_000B_358B()
 *
 * @name f__0C3A_2114_000B_358B
 * @implements 0C3A:2114:000B:358B ()
 *
 * Called From: 0C3A:210B:0027:2229
 */
void f__0C3A_2114_000B_358B()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x211F); emu_cs = 0x34C1; ovl__34C1(2);
	f__0C3A_211F_0011_6013();
}

/**
 * Decompiled function f__0C3A_211F_0011_6013()
 *
 * @name f__0C3A_211F_0011_6013
 * @implements 0C3A:211F:0011:6013 ()
 *
 * Called From: 0C3A:211F:000C:A58E
 * Called From: 0C3A:211F:000B:358B
 */
void f__0C3A_211F_0011_6013()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x100);
	if (!emu_flags.cf) { f__0C3A_2130_0016_1479(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ip = 0x2133; emu_last_cs = 0x0C3A; emu_last_ip = 0x212E; emu_last_length = 0x0011; emu_last_crc = 0x6013; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_2130_0016_1479()
 *
 * @name f__0C3A_2130_0016_1479
 * @implements 0C3A:2130:0016:1479 ()
 *
 * Called From: 0C3A:2129:0011:6013
 */
void f__0C3A_2130_0016_1479()
{
	emu_movw(&emu_ax.x, 0x100);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2146); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__0C3A_2146_0006_3D18();
}

/**
 * Decompiled function f__0C3A_2146_0006_3D18()
 *
 * @name f__0C3A_2146_0006_3D18
 * @implements 0C3A:2146:0006:3D18 ()
 *
 * Called From: 0C3A:2146:0016:1479
 */
void f__0C3A_2146_0006_3D18()
{
	emu_addws(&emu_sp, 0x8);
	f__0C3A_21F0_0011_75B4(); return;
}

/**
 * Decompiled function f__0C3A_214C_0033_346B()
 *
 * @name f__0C3A_214C_0033_346B
 * @implements 0C3A:214C:0033:346B ()
 *
 * Called From: 0C3A:21FE:0011:75B4
 * Called From: 0C3A:21FE:0013:7618
 */
void f__0C3A_214C_0033_346B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x21E3; emu_last_cs = 0x0C3A; emu_last_ip = 0x216E; emu_last_length = 0x0033; emu_last_crc = 0x346B; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x217F); emu_cs = 0x34C1; ovl__34C1(0);
	f__0C3A_217F_0026_F5F7();
}

/**
 * Decompiled function f__0C3A_217F_0026_F5F7()
 *
 * @name f__0C3A_217F_0026_F5F7
 * @implements 0C3A:217F:0026:F5F7 ()
 *
 * Called From: 0C3A:217F:0033:346B
 */
void f__0C3A_217F_0026_F5F7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x10));
	emu_sarw(&emu_ax.x, 0x1);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_ax.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x21A5; emu_last_cs = 0x0C3A; emu_last_ip = 0x219A; emu_last_length = 0x0026; emu_last_crc = 0xF5F7; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x56));
	f__0C3A_21AE_0032_6AC0(); return;
}

/**
 * Decompiled function f__0C3A_21AE_0032_6AC0()
 *
 * @name f__0C3A_21AE_0032_6AC0
 * @implements 0C3A:21AE:0032:6AC0 ()
 *
 * Called From: 0C3A:21A3:0026:F5F7
 */
void f__0C3A_21AE_0032_6AC0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x56));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_21E3_000B_0232(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x21E3; emu_last_cs = 0x0C3A; emu_last_ip = 0x21CE; emu_last_length = 0x0032; emu_last_crc = 0x6AC0; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs);
	emu_push(0x21E0); emu_ip = 0x1216; emu_last_cs = 0x0C3A; emu_last_ip = 0x21DD; emu_last_length = 0x0032; emu_last_crc = 0x6AC0; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0C3A_21E3_000B_0232()
 *
 * @name f__0C3A_21E3_000B_0232
 * @implements 0C3A:21E3:000B:0232 ()
 *
 * Called From: 0C3A:21C3:0032:6AC0
 */
void f__0C3A_21E3_000B_0232()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x21EE); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	f__0C3A_21EE_0013_7618();
}

/**
 * Decompiled function f__0C3A_21EE_0013_7618()
 *
 * @name f__0C3A_21EE_0013_7618
 * @implements 0C3A:21EE:0013:7618 ()
 *
 * Called From: 0C3A:21EE:000B:0232
 */
void f__0C3A_21EE_0013_7618()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.zf) { f__0C3A_2201_0006_137A(); return; }
	f__0C3A_214C_0033_346B(); return;
}

/**
 * Decompiled function f__0C3A_21F0_0011_75B4()
 *
 * @name f__0C3A_21F0_0011_75B4
 * @implements 0C3A:21F0:0011:75B4 ()
 *
 * Called From: 0C3A:2149:0006:3D18
 */
void f__0C3A_21F0_0011_75B4()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.zf) { f__0C3A_2201_0006_137A(); return; }
	f__0C3A_214C_0033_346B(); return;
}

/**
 * Decompiled function f__0C3A_2201_0006_137A()
 *
 * @name f__0C3A_2201_0006_137A
 * @implements 0C3A:2201:0006:137A ()
 *
 * Called From: 0C3A:21FC:0013:7618
 * Called From: 0C3A:21FC:0011:75B4
 */
void f__0C3A_2201_0006_137A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_2207_001D_4317()
 *
 * @name f__0C3A_2207_001D_4317
 * @implements 0C3A:2207:001D:4317 ()
 *
 * Called From: 0C3A:23D3:0010:9CBF
 * Called From: 1A34:35E0:0015:7BBD
 */
void f__0C3A_2207_001D_4317()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x221F; emu_last_cs = 0x0C3A; emu_last_ip = 0x2215; emu_last_length = 0x001D; emu_last_crc = 0x4317; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__0C3A_2224_0014_6BCB(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x22C7; emu_last_cs = 0x0C3A; emu_last_ip = 0x2221; emu_last_length = 0x001D; emu_last_crc = 0x4317; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_221F_0005_0FA4()
 *
 * @name f__0C3A_221F_0005_0FA4
 * @implements 0C3A:221F:0005:0FA4 ()
 *
 * Called From: 0C3A:2246:0008:6A12
 */
void f__0C3A_221F_0005_0FA4()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C3A_22C7_0006_137A(); return;
}

/**
 * Decompiled function f__0C3A_2221_0003_05C4()
 *
 * @name f__0C3A_2221_0003_05C4
 * @implements 0C3A:2221:0003:05C4 ()
 *
 * Called From: 0C3A:22C4:0005:1ADE
 */
void f__0C3A_2221_0003_05C4()
{
	f__0C3A_22C7_0006_137A(); return;
}

/**
 * Decompiled function f__0C3A_2224_0014_6BCB()
 *
 * @name f__0C3A_2224_0014_6BCB
 * @implements 0C3A:2224:0014:6BCB ()
 *
 * Called From: 0C3A:221D:001D:4317
 */
void f__0C3A_2224_0014_6BCB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2238); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__0C3A_2238_0008_715C();
}

/**
 * Decompiled function f__0C3A_2238_0008_715C()
 *
 * @name f__0C3A_2238_0008_715C
 * @implements 0C3A:2238:0008:715C ()
 *
 * Called From: 0C3A:2238:0014:6BCB
 */
void f__0C3A_2238_0008_715C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2240); emu_cs = 0x1423; f__1423_0F34_0017_4318();
	f__0C3A_2240_0008_6A12();
}

/**
 * Decompiled function f__0C3A_2240_0008_6A12()
 *
 * @name f__0C3A_2240_0008_6A12
 * @implements 0C3A:2240:0008:6A12 ()
 *
 * Called From: 0C3A:2240:0008:715C
 */
void f__0C3A_2240_0008_6A12()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0C3A_2248_001B_9DA4(); return; }
	f__0C3A_221F_0005_0FA4(); return;
}

/**
 * Decompiled function f__0C3A_2248_001B_9DA4()
 *
 * @name f__0C3A_2248_001B_9DA4
 * @implements 0C3A:2248:001B:9DA4 ()
 *
 * Called From: 0C3A:2244:0008:6A12
 */
void f__0C3A_2248_001B_9DA4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__0C3A_2263_0043_C508(); return; }
	emu_ip = 0x221F; emu_last_cs = 0x0C3A; emu_last_ip = 0x2261; emu_last_length = 0x001B; emu_last_crc = 0x9DA4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_2263_0043_C508()
 *
 * @name f__0C3A_2263_0043_C508
 * @implements 0C3A:2263:0043:C508 ()
 *
 * Called From: 0C3A:225F:001B:9DA4
 */
void f__0C3A_2263_0043_C508()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2D));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2F));
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x22A6); emu_cs = 0x0F3F; f__0F3F_0104_0013_AF6A();
	f__0C3A_22A6_001C_6DE4();
}

/**
 * Decompiled function f__0C3A_22A6_001C_6DE4()
 *
 * @name f__0C3A_22A6_001C_6DE4
 * @implements 0C3A:22A6:001C:6DE4 ()
 *
 * Called From: 0C3A:22A6:0043:C508
 */
void f__0C3A_22A6_001C_6DE4()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x22B7; emu_last_cs = 0x0C3A; emu_last_ip = 0x22AD; emu_last_length = 0x001C; emu_last_crc = 0x6DE4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_di);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, 0x7D00);
	if ((emu_flags.cf || emu_flags.zf)) { f__0C3A_22C2_0005_1ADE(); return; }
	emu_movw(&emu_ax.x, 0x7D00);
	emu_ip = 0x22C4; emu_last_cs = 0x0C3A; emu_last_ip = 0x22C0; emu_last_length = 0x001C; emu_last_crc = 0x6DE4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_22C2_0005_1ADE()
 *
 * @name f__0C3A_22C2_0005_1ADE
 * @implements 0C3A:22C2:0005:1ADE ()
 *
 * Called From: 0C3A:22BB:001C:6DE4
 */
void f__0C3A_22C2_0005_1ADE()
{
	emu_movw(&emu_ax.x, emu_si);
	f__0C3A_2221_0003_05C4(); return;
}

/**
 * Decompiled function f__0C3A_22C7_0006_137A()
 *
 * @name f__0C3A_22C7_0006_137A
 * @implements 0C3A:22C7:0006:137A ()
 *
 * Called From: 0C3A:2221:0005:0FA4
 * Called From: 0C3A:2221:0003:05C4
 */
void f__0C3A_22C7_0006_137A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_22CD_0029_3C96()
 *
 * @name f__0C3A_22CD_0029_3C96
 * @implements 0C3A:22CD:0029:3C96 ()
 *
 * Called From: 1A34:35A2:001F:A0FC
 */
void f__0C3A_22CD_0029_3C96()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_22F6_000C_2AE2(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x242D; emu_last_cs = 0x0C3A; emu_last_ip = 0x22F3; emu_last_length = 0x0029; emu_last_crc = 0x3C96; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_22F3_0003_0796()
 *
 * @name f__0C3A_22F3_0003_0796
 * @implements 0C3A:22F3:0003:0796 ()
 *
 * Called From: 0C3A:242A:0019:97CE
 * Called From: 0C3A:242A:0009:1D2D
 */
void f__0C3A_22F3_0003_0796()
{
	f__0C3A_242D_0006_137A(); return;
}

/**
 * Decompiled function f__0C3A_22F6_000C_2AE2()
 *
 * @name f__0C3A_22F6_000C_2AE2
 * @implements 0C3A:22F6:000C:2AE2 ()
 *
 * Called From: 0C3A:22ED:0029:3C96
 */
void f__0C3A_22F6_000C_2AE2()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4D));
	emu_push(emu_cs); emu_push(0x2302); emu_cs = 0x167E; f__167E_01BB_0010_ECB8();
	f__0C3A_2302_003A_312A();
}

/**
 * Decompiled function f__0C3A_2302_003A_312A()
 *
 * @name f__0C3A_2302_003A_312A
 * @implements 0C3A:2302:003A:312A ()
 *
 * Called From: 0C3A:2302:000C:2AE2
 */
void f__0C3A_2302_003A_312A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x50));
	emu_movb(&emu_cx.l, 0x8);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x233C); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__0C3A_233C_0006_3C8C();
}

/**
 * Decompiled function f__0C3A_233C_0006_3C8C()
 *
 * @name f__0C3A_233C_0006_3C8C
 * @implements 0C3A:233C:0006:3C8C ()
 *
 * Called From: 0C3A:233C:003A:312A
 */
void f__0C3A_233C_0006_3C8C()
{
	emu_addws(&emu_sp, 0x8);
	f__0C3A_2403_0011_E624(); return;
}

/**
 * Decompiled function f__0C3A_2342_005A_1C01()
 *
 * @name f__0C3A_2342_005A_1C01
 * @implements 0C3A:2342:005A:1C01 ()
 *
 * Called From: 0C3A:2411:0011:E624
 * Called From: 0C3A:2411:0013:E588
 */
void f__0C3A_2342_005A_1C01()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x44));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_si,  0xA));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2E5C));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2E5E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__0C3A_23C6_0010_9CBF(); return; }
	emu_cmpws(&emu_di, 0x4);
	if (emu_flags.zf) { emu_ip = 0x23C6; emu_last_cs = 0x0C3A; emu_last_ip = 0x237F; emu_last_length = 0x005A; emu_last_crc = 0x1C01; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_di, 0x1);
	if (!emu_flags.zf) { emu_ip = 0x23A4; emu_last_cs = 0x0C3A; emu_last_ip = 0x2384; emu_last_length = 0x005A; emu_last_crc = 0x1C01; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x239C); emu_cs = 0x0F3F; f__0F3F_00B4_002A_0887();
	f__0C3A_239C_001E_6380();
}

/**
 * Decompiled function f__0C3A_239C_001E_6380()
 *
 * @name f__0C3A_239C_001E_6380
 * @implements 0C3A:239C:001E:6380 ()
 *
 * Called From: 0C3A:239C:005A:1C01
 */
void f__0C3A_239C_001E_6380()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0C3A_23C6_0010_9CBF(); return; }
	emu_cmpws(&emu_di, 0x2);
	if (!emu_flags.zf) { f__0C3A_23F6_000B_0232(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x23BA); emu_cs = 0x0F3F; emu_ip = 0x246E; emu_last_cs = 0x0C3A; emu_last_ip = 0x23B5; emu_last_length = 0x001E; emu_last_crc = 0x6380; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0C3A_23C6_0010_9CBF()
 *
 * @name f__0C3A_23C6_0010_9CBF
 * @implements 0C3A:23C6:0010:9CBF ()
 *
 * Called From: 0C3A:237A:005A:1C01
 * Called From: 0C3A:23A2:001E:6380
 */
void f__0C3A_23C6_0010_9CBF()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x23D6); f__0C3A_2207_001D_4317();
	f__0C3A_23D6_002B_1135();
}

/**
 * Decompiled function f__0C3A_23D6_002B_1135()
 *
 * @name f__0C3A_23D6_002B_1135
 * @implements 0C3A:23D6:002B:1135 ()
 *
 * Called From: 0C3A:23D6:0010:9CBF
 */
void f__0C3A_23D6_002B_1135()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_23F6_000B_0232(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2401); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	f__0C3A_2401_0013_E588();
}

/**
 * Decompiled function f__0C3A_23F6_000B_0232()
 *
 * @name f__0C3A_23F6_000B_0232
 * @implements 0C3A:23F6:000B:0232 ()
 *
 * Called From: 0C3A:23A7:001E:6380
 * Called From: 0C3A:23E2:002B:1135
 */
void f__0C3A_23F6_000B_0232()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2401); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	f__0C3A_2401_0013_E588();
}

/**
 * Decompiled function f__0C3A_2401_0013_E588()
 *
 * @name f__0C3A_2401_0013_E588
 * @implements 0C3A:2401:0013:E588 ()
 *
 * Called From: 0C3A:2401:002B:1135
 * Called From: 0C3A:2401:000B:0232
 */
void f__0C3A_2401_0013_E588()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__0C3A_2414_0019_97CE(); return; }
	f__0C3A_2342_005A_1C01(); return;
}

/**
 * Decompiled function f__0C3A_2403_0011_E624()
 *
 * @name f__0C3A_2403_0011_E624
 * @implements 0C3A:2403:0011:E624 ()
 *
 * Called From: 0C3A:233F:0006:3C8C
 */
void f__0C3A_2403_0011_E624()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x2414; emu_last_cs = 0x0C3A; emu_last_ip = 0x240F; emu_last_length = 0x0011; emu_last_crc = 0xE624; emu_call(); return; } // Jump does not resolve
	f__0C3A_2342_005A_1C01(); return;
}

/**
 * Decompiled function f__0C3A_2414_0019_97CE()
 *
 * @name f__0C3A_2414_0019_97CE
 * @implements 0C3A:2414:0019:97CE ()
 *
 * Called From: 0C3A:240F:0013:E588
 */
void f__0C3A_2414_0019_97CE()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (!emu_flags.zf) { f__0C3A_2424_0009_1D2D(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__0C3A_22F3_0003_0796(); return;
}

/**
 * Decompiled function f__0C3A_2424_0009_1D2D()
 *
 * @name f__0C3A_2424_0009_1D2D
 * @implements 0C3A:2424:0009:1D2D ()
 *
 * Called From: 0C3A:2418:0019:97CE
 */
void f__0C3A_2424_0009_1D2D()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__0C3A_22F3_0003_0796(); return;
}

/**
 * Decompiled function f__0C3A_242D_0006_137A()
 *
 * @name f__0C3A_242D_0006_137A
 * @implements 0C3A:242D:0006:137A ()
 *
 * Called From: 0C3A:22F3:0003:0796
 */
void f__0C3A_242D_0006_137A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_2433_0042_9CCA()
 *
 * @name f__0C3A_2433_0042_9CCA
 * @implements 0C3A:2433:0042:9CCA ()
 *
 * Called From: B511:01D2:000B:3FA7
 */
void f__0C3A_2433_0042_9CCA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x2478; emu_last_cs = 0x0C3A; emu_last_ip = 0x243C; emu_last_length = 0x0042; emu_last_crc = 0x9CCA; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x2478; emu_last_cs = 0x0C3A; emu_last_ip = 0x244A; emu_last_length = 0x0042; emu_last_crc = 0x9CCA; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x2475); emu_cs = 0x34CD; ovl__34CD(31);
	f__0C3A_2475_0005_1CF2();
}

/**
 * Decompiled function f__0C3A_2475_0005_1CF2()
 *
 * @name f__0C3A_2475_0005_1CF2
 * @implements 0C3A:2475:0005:1CF2 ()
 *
 * Called From: 0C3A:2475:0042:9CCA
 */
void f__0C3A_2475_0005_1CF2()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_247A_0015_692D()
 *
 * @name f__0C3A_247A_0015_692D
 * @implements 0C3A:247A:0015:692D ()
 *
 * Called From: 0972:0B41:0026:F5DA
 * Called From: 0972:0D41:000E:C63A
 */
void f__0C3A_247A_0015_692D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x14);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_248F_0028_CC12(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x25E6; emu_last_cs = 0x0C3A; emu_last_ip = 0x248C; emu_last_length = 0x0015; emu_last_crc = 0x692D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_248C_0003_0616()
 *
 * @name f__0C3A_248C_0003_0616
 * @implements 0C3A:248C:0003:0616 ()
 *
 * Called From: 0C3A:25E3:0006:210C
 */
void f__0C3A_248C_0003_0616()
{
	f__0C3A_25E6_0006_137A(); return;
}

/**
 * Decompiled function f__0C3A_248F_0028_CC12()
 *
 * @name f__0C3A_248F_0028_CC12
 * @implements 0C3A:248F:0028:CC12 ()
 *
 * Called From: 0C3A:2488:0015:692D
 */
void f__0C3A_248F_0028_CC12()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x24B7); emu_cs = 0x0F3F; f__0F3F_0275_0019_B286();
	f__0C3A_24B7_0009_CDC2();
}

/**
 * Decompiled function f__0C3A_24B7_0009_CDC2()
 *
 * @name f__0C3A_24B7_0009_CDC2
 * @implements 0C3A:24B7:0009:CDC2 ()
 *
 * Called From: 0C3A:24B7:0028:CC12
 */
void f__0C3A_24B7_0009_CDC2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x24C0); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__0C3A_24C0_0039_DD71();
}

/**
 * Decompiled function f__0C3A_24C0_0039_DD71()
 *
 * @name f__0C3A_24C0_0039_DD71
 * @implements 0C3A:24C0:0039:DD71 ()
 *
 * Called From: 0C3A:24C0:0009:CDC2
 */
void f__0C3A_24C0_0039_DD71()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_movb(&emu_cx.l, 0x5);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x2D60);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__0C3A_24FF_000F_31E9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x24F9); emu_cs = 0x34CD; ovl__34CD(27);
	f__0C3A_24F9_0015_2FA5();
}

/**
 * Decompiled function f__0C3A_24F9_0015_2FA5()
 *
 * @name f__0C3A_24F9_0015_2FA5
 * @implements 0C3A:24F9:0015:2FA5 ()
 *
 * Called From: 0C3A:24F9:0039:DD71
 */
void f__0C3A_24F9_0015_2FA5()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_push(emu_cs); emu_push(0x250E); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__0C3A_250E_000D_443F();
}

/**
 * Decompiled function f__0C3A_24FF_000F_31E9()
 *
 * @name f__0C3A_24FF_000F_31E9
 * @implements 0C3A:24FF:000F:31E9 ()
 *
 * Called From: 0C3A:24E2:0039:DD71
 */
void f__0C3A_24FF_000F_31E9()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_push(emu_cs); emu_push(0x250E); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__0C3A_250E_000D_443F();
}

/**
 * Decompiled function f__0C3A_250E_000D_443F()
 *
 * @name f__0C3A_250E_000D_443F
 * @implements 0C3A:250E:000D:443F ()
 *
 * Called From: 0C3A:250E:000F:31E9
 * Called From: 0C3A:250E:0015:2FA5
 */
void f__0C3A_250E_000D_443F()
{
	emu_andw(&emu_ax.x, 0xF);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x10);
	f__0C3A_25D7_0009_06AB(); return;
}

/**
 * Decompiled function f__0C3A_251B_0012_E07B()
 *
 * @name f__0C3A_251B_0012_E07B
 * @implements 0C3A:251B:0012:E07B ()
 *
 * Called From: 0C3A:25DD:0009:06AB
 * Called From: 0C3A:25DD:000A:1EAA
 */
void f__0C3A_251B_0012_E07B()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__0C3A_252D_0017_C00F(); return; }
	f__0C3A_25B2_0024_F3A2(); return;
}

/**
 * Decompiled function f__0C3A_252D_0017_C00F()
 *
 * @name f__0C3A_252D_0017_C00F
 * @implements 0C3A:252D:0017:C00F ()
 *
 * Called From: 0C3A:2528:0012:E07B
 */
void f__0C3A_252D_0017_C00F()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2544); emu_cs = 0x34CD; ovl__34CD(13);
	f__0C3A_2544_001D_84C4();
}

/**
 * Decompiled function f__0C3A_2544_001D_84C4()
 *
 * @name f__0C3A_2544_001D_84C4
 * @implements 0C3A:2544:001D:84C4 ()
 *
 * Called From: 0C3A:2544:0017:C00F
 */
void f__0C3A_2544_001D_84C4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x30);
	if (!emu_flags.zf) { f__0C3A_25B2_0024_F3A2(); return; }
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2561); emu_cs = 0x34CD; ovl__34CD(11);
	f__0C3A_2561_000B_35CF();
}

/**
 * Decompiled function f__0C3A_2561_000B_35CF()
 *
 * @name f__0C3A_2561_000B_35CF
 * @implements 0C3A:2561:000B:35CF ()
 *
 * Called From: 0C3A:2561:001D:84C4
 */
void f__0C3A_2561_000B_35CF()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x25B2; emu_last_cs = 0x0C3A; emu_last_ip = 0x2564; emu_last_length = 0x000B; emu_last_crc = 0x35CF; emu_call(); return; } // Jump does not resolve
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x256C); emu_cs = 0x34CD; ovl__34CD(13);
	f__0C3A_256C_0027_8C2F();
}

/**
 * Decompiled function f__0C3A_256C_0027_8C2F()
 *
 * @name f__0C3A_256C_0027_8C2F
 * @implements 0C3A:256C:0027:8C2F ()
 *
 * Called From: 0C3A:256C:000B:35CF
 */
void f__0C3A_256C_0027_8C2F()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0xB);
	if (emu_flags.zf) { emu_ip = 0x25B2; emu_last_cs = 0x0C3A; emu_last_ip = 0x2570; emu_last_length = 0x0027; emu_last_crc = 0x8C2F; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x6);
	if (emu_flags.zf) { emu_ip = 0x25B2; emu_last_cs = 0x0C3A; emu_last_ip = 0x2576; emu_last_length = 0x0027; emu_last_crc = 0x8C2F; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x7);
	if (emu_flags.zf) { emu_ip = 0x25B2; emu_last_cs = 0x0C3A; emu_last_ip = 0x257C; emu_last_length = 0x0027; emu_last_crc = 0x8C2F; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__0C3A_25AD_0005_12A0(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { f__0C3A_259A_000C_5A73(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2593); emu_cs = 0x0F3F; f__0F3F_0360_0038_031A();
	f__0C3A_2593_0013_398A();
}

/**
 * Decompiled function f__0C3A_2593_0013_398A()
 *
 * @name f__0C3A_2593_0013_398A
 * @implements 0C3A:2593:0013:398A ()
 *
 * Called From: 0C3A:2593:0027:8C2F
 */
void f__0C3A_2593_0013_398A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_25AB_0002_03A6(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x25A6); emu_cs = 0x0F3F; f__0F3F_0360_0038_031A();
	f__0C3A_25A6_0007_2BA6();
}

/**
 * Decompiled function f__0C3A_259A_000C_5A73()
 *
 * @name f__0C3A_259A_000C_5A73
 * @implements 0C3A:259A:000C:5A73 ()
 *
 * Called From: 0C3A:2588:0027:8C2F
 */
void f__0C3A_259A_000C_5A73()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x25A6); emu_cs = 0x0F3F; f__0F3F_0360_0038_031A();
	f__0C3A_25A6_0007_2BA6();
}

/**
 * Decompiled function f__0C3A_25A6_0007_2BA6()
 *
 * @name f__0C3A_25A6_0007_2BA6
 * @implements 0C3A:25A6:0007:2BA6 ()
 *
 * Called From: 0C3A:25A6:000C:5A73
 * Called From: 0C3A:25A6:0013:398A
 */
void f__0C3A_25A6_0007_2BA6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	f__0C3A_25B2_0024_F3A2(); return;
}

/**
 * Decompiled function f__0C3A_25AB_0002_03A6()
 *
 * @name f__0C3A_25AB_0002_03A6
 * @implements 0C3A:25AB:0002:03A6 ()
 *
 * Called From: 0C3A:2598:0013:398A
 */
void f__0C3A_25AB_0002_03A6()
{
	f__0C3A_25B2_0024_F3A2(); return;
}

/**
 * Decompiled function f__0C3A_25AD_0005_12A0()
 *
 * @name f__0C3A_25AD_0005_12A0
 * @implements 0C3A:25AD:0005:12A0 ()
 *
 * Called From: 0C3A:2582:0027:8C2F
 */
void f__0C3A_25AD_0005_12A0()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_di);
	f__0C3A_25E0_0006_210C(); return;
}

/**
 * Decompiled function f__0C3A_25B2_0024_F3A2()
 *
 * @name f__0C3A_25B2_0024_F3A2
 * @implements 0C3A:25B2:0024:F3A2 ()
 *
 * Called From: 0C3A:252A:0012:E07B
 * Called From: 0C3A:2559:001D:84C4
 * Called From: 0C3A:25AB:0007:2BA6
 * Called From: 0C3A:25AB:0002:03A6
 */
void f__0C3A_25B2_0024_F3A2()
{
	emu_incw(&emu_si);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_cmpws(&emu_si, 0xF);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x25CA; emu_last_cs = 0x0C3A; emu_last_ip = 0x25B9; emu_last_length = 0x0024; emu_last_crc = 0xF3A2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__0C3A_25D6_000A_1EAA(); return; }
	emu_movw(&emu_ax.x, 0x10);
	emu_subw(&emu_ax.x, emu_si);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__0C3A_25D7_0009_06AB(); return;
}

/**
 * Decompiled function f__0C3A_25D6_000A_1EAA()
 *
 * @name f__0C3A_25D6_000A_1EAA
 * @implements 0C3A:25D6:000A:1EAA ()
 *
 * Called From: 0C3A:25C8:0024:F3A2
 */
void f__0C3A_25D6_000A_1EAA()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0C3A_25E0_0006_210C(); return; }
	f__0C3A_251B_0012_E07B(); return;
}

/**
 * Decompiled function f__0C3A_25D7_0009_06AB()
 *
 * @name f__0C3A_25D7_0009_06AB
 * @implements 0C3A:25D7:0009:06AB ()
 *
 * Called From: 0C3A:2518:000D:443F
 * Called From: 0C3A:25D4:0024:F3A2
 */
void f__0C3A_25D7_0009_06AB()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x25E0; emu_last_cs = 0x0C3A; emu_last_ip = 0x25DB; emu_last_length = 0x0009; emu_last_crc = 0x06AB; emu_call(); return; } // Jump does not resolve
	f__0C3A_251B_0012_E07B(); return;
}

/**
 * Decompiled function f__0C3A_25E0_0006_210C()
 *
 * @name f__0C3A_25E0_0006_210C
 * @implements 0C3A:25E0:0006:210C ()
 *
 * Called From: 0C3A:25B0:0005:12A0
 * Called From: 0C3A:25DB:000A:1EAA
 */
void f__0C3A_25E0_0006_210C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	f__0C3A_248C_0003_0616(); return;
}

/**
 * Decompiled function f__0C3A_25E6_0006_137A()
 *
 * @name f__0C3A_25E6_0006_137A
 * @implements 0C3A:25E6:0006:137A ()
 *
 * Called From: 0C3A:248C:0003:0616
 */
void f__0C3A_25E6_0006_137A()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_25EC_0011_6FF5()
 *
 * @name f__0C3A_25EC_0011_6FF5
 * @implements 0C3A:25EC:0011:6FF5 ()
 *
 * Called From: 0C3A:0117:0016:6687
 * Called From: 0C3A:14C4:0010:E04D
 * Called From: 10E4:1128:001C:D9C8
 */
void f__0C3A_25EC_0011_6FF5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_25FD_0031_0712(); return; }
	emu_ip = 0x270D; emu_last_cs = 0x0C3A; emu_last_ip = 0x25FA; emu_last_length = 0x0011; emu_last_crc = 0x6FF5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_25FD_0031_0712()
 *
 * @name f__0C3A_25FD_0031_0712
 * @implements 0C3A:25FD:0031:0712 ()
 *
 * Called From: 0C3A:25F8:0011:6FF5
 */
void f__0C3A_25FD_0031_0712()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x0);
	if (!emu_flags.zf) { f__0C3A_262E_002D_F3EF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x5);
	if (!emu_flags.zf) { f__0C3A_262E_002D_F3EF(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x2710; emu_last_cs = 0x0C3A; emu_last_ip = 0x262B; emu_last_length = 0x0031; emu_last_crc = 0x0712; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_2629_0005_0EA0()
 *
 * @name f__0C3A_2629_0005_0EA0
 * @implements 0C3A:2629:0005:0EA0 ()
 *
 * Called From: 0C3A:270D:0003:06D2
 */
void f__0C3A_2629_0005_0EA0()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C3A_2710_0004_0F7A(); return;
}

/**
 * Decompiled function f__0C3A_262E_002D_F3EF()
 *
 * @name f__0C3A_262E_002D_F3EF
 * @implements 0C3A:262E:002D:F3EF ()
 *
 * Called From: 0C3A:261D:0031:0712
 * Called From: 0C3A:2627:0031:0712
 */
void f__0C3A_262E_002D_F3EF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x2);
	if (!emu_flags.zf) { f__0C3A_265B_0053_0A6E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x265B; emu_last_cs = 0x0C3A; emu_last_ip = 0x2640; emu_last_length = 0x002D; emu_last_crc = 0xF3EF; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4E), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x265B; emu_last_cs = 0x0C3A; emu_last_ip = 0x264A; emu_last_length = 0x002D; emu_last_crc = 0xF3EF; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x5E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x265B; emu_last_cs = 0x0C3A; emu_last_ip = 0x2657; emu_last_length = 0x002D; emu_last_crc = 0xF3EF; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x2629; emu_last_cs = 0x0C3A; emu_last_ip = 0x2659; emu_last_length = 0x002D; emu_last_crc = 0xF3EF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_265B_0053_0A6E()
 *
 * @name f__0C3A_265B_0053_0A6E
 * @implements 0C3A:265B:0053:0A6E ()
 *
 * Called From: 0C3A:2636:002D:F3EF
 */
void f__0C3A_265B_0053_0A6E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4E));
	emu_movb(&emu_ax.h, 0x0);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x5A), 0x0);
	if (emu_flags.zf) { f__0C3A_26E2_002B_F191(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4E));
	emu_movb(&emu_ax.h, 0x0);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_incw(&emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x5A), emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0C3A_26E2_002B_F191(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { emu_ip = 0x26E0; emu_last_cs = 0x0C3A; emu_last_ip = 0x2694; emu_last_length = 0x0053; emu_last_crc = 0x0A6E; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4E), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x26E0; emu_last_cs = 0x0C3A; emu_last_ip = 0x269E; emu_last_length = 0x0053; emu_last_crc = 0x0A6E; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x26AE); emu_cs = 0x10BE; emu_ip = 0x2859; emu_last_cs = 0x0C3A; emu_last_ip = 0x26A9; emu_last_length = 0x0053; emu_last_crc = 0x0A6E; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0C3A_26E2_002B_F191()
 *
 * @name f__0C3A_26E2_002B_F191
 * @implements 0C3A:26E2:002B:F191 ()
 *
 * Called From: 0C3A:2670:0053:0A6E
 * Called From: 0C3A:268A:0053:0A6E
 */
void f__0C3A_26E2_002B_F191()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x7);
	if (!emu_flags.zf) { f__0C3A_270D_0003_06D2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x270D; emu_last_cs = 0x0C3A; emu_last_ip = 0x26F4; emu_last_length = 0x002B; emu_last_crc = 0xF191; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4E), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x270D; emu_last_cs = 0x0C3A; emu_last_ip = 0x26FE; emu_last_length = 0x002B; emu_last_crc = 0xF191; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x3);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x270D; emu_last_cs = 0x0C3A; emu_last_ip = 0x2705; emu_last_length = 0x002B; emu_last_crc = 0xF191; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x262B; emu_last_cs = 0x0C3A; emu_last_ip = 0x270A; emu_last_length = 0x002B; emu_last_crc = 0xF191; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_270D_0003_06D2()
 *
 * @name f__0C3A_270D_0003_06D2
 * @implements 0C3A:270D:0003:06D2 ()
 *
 * Called From: 0C3A:26EA:002B:F191
 */
void f__0C3A_270D_0003_06D2()
{
	f__0C3A_2629_0005_0EA0(); return;
}

/**
 * Decompiled function f__0C3A_2710_0004_0F7A()
 *
 * @name f__0C3A_2710_0004_0F7A
 * @implements 0C3A:2710:0004:0F7A ()
 *
 * Called From: 0C3A:262B:0005:0EA0
 */
void f__0C3A_2710_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_2814_0015_2939()
 *
 * @name f__0C3A_2814_0015_2939
 * @implements 0C3A:2814:0015:2939 ()
 *
 * Called From: 0AEC:121C:001C:E619
 * Called From: 0C3A:149C:0014:25E4
 */
void f__0C3A_2814_0015_2939()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_2829_0024_B55B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x2925; emu_last_cs = 0x0C3A; emu_last_ip = 0x2826; emu_last_length = 0x0015; emu_last_crc = 0x2939; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_2826_0003_04B8()
 *
 * @name f__0C3A_2826_0003_04B8
 * @implements 0C3A:2826:0003:04B8 ()
 *
 * Called From: 0C3A:2922:0005:1BA2
 * Called From: 0C3A:2922:000B:A025
 */
void f__0C3A_2826_0003_04B8()
{
	f__0C3A_2925_0004_07E2(); return;
}

/**
 * Decompiled function f__0C3A_2829_0024_B55B()
 *
 * @name f__0C3A_2829_0024_B55B
 * @implements 0C3A:2829:0024:B55B ()
 *
 * Called From: 0C3A:2822:0015:2939
 */
void f__0C3A_2829_0024_B55B()
{
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (!emu_flags.zf) { f__0C3A_2838_0015_0E1F(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x2851; emu_last_cs = 0x0C3A; emu_last_ip = 0x283B; emu_last_length = 0x0024; emu_last_crc = 0xB55B; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2000);
	if (!emu_flags.zf) { emu_ip = 0x284D; emu_last_cs = 0x0C3A; emu_last_ip = 0x2846; emu_last_length = 0x0024; emu_last_crc = 0xB55B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x284F; emu_last_cs = 0x0C3A; emu_last_ip = 0x284B; emu_last_length = 0x0024; emu_last_crc = 0xB55B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0C3A_2838_0015_0E1F()
 *
 * @name f__0C3A_2838_0015_0E1F
 * @implements 0C3A:2838:0015:0E1F ()
 *
 * Called From: 0C3A:2834:0024:B55B
 */
void f__0C3A_2838_0015_0E1F()
{
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__0C3A_2851_002A_D221(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2000);
	if (!emu_flags.zf) { emu_ip = 0x284D; emu_last_cs = 0x0C3A; emu_last_ip = 0x2846; emu_last_length = 0x0015; emu_last_crc = 0x0E1F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__0C3A_284F_002C_E22E(); return;
}

/**
 * Decompiled function f__0C3A_284F_002C_E22E()
 *
 * @name f__0C3A_284F_002C_E22E
 * @implements 0C3A:284F:002C:E22E ()
 *
 * Called From: 0C3A:284B:0015:0E1F
 */
void f__0C3A_284F_002C_E22E()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__0C3A_28AC_004C_2D38(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2000);
	if (emu_flags.zf) { emu_ip = 0x28AC; emu_last_cs = 0x0C3A; emu_last_ip = 0x285E; emu_last_length = 0x002C; emu_last_crc = 0xE22E; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x2886; emu_last_cs = 0x0C3A; emu_last_ip = 0x286C; emu_last_length = 0x002C; emu_last_crc = 0xE22E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x287B); emu_cs = 0x0FCB; emu_ip = 0x28DA; emu_last_cs = 0x0C3A; emu_last_ip = 0x2876; emu_last_length = 0x002C; emu_last_crc = 0xE22E; emu_call(); // Jump does not resolve
	f__0C3A_287B_0008_7E08();
}

/**
 * Decompiled function f__0C3A_2851_002A_D221()
 *
 * @name f__0C3A_2851_002A_D221
 * @implements 0C3A:2851:002A:D221 ()
 *
 * Called From: 0C3A:283B:0015:0E1F
 */
void f__0C3A_2851_002A_D221()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { emu_ip = 0x28AC; emu_last_cs = 0x0C3A; emu_last_ip = 0x2853; emu_last_length = 0x002A; emu_last_crc = 0xD221; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2000);
	if (emu_flags.zf) { f__0C3A_28AC_004C_2D38(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x2886; emu_last_cs = 0x0C3A; emu_last_ip = 0x286C; emu_last_length = 0x002A; emu_last_crc = 0xD221; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x287B); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__0C3A_287B_0008_7E08();
}

/**
 * Decompiled function f__0C3A_287B_0008_7E08()
 *
 * @name f__0C3A_287B_0008_7E08
 * @implements 0C3A:287B:0008:7E08 ()
 *
 * Called From: 0C3A:287B:002A:D221
 */
void f__0C3A_287B_0008_7E08()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2883); emu_cs = 0x10E4; f__10E4_09AB_0031_9946();
	f__0C3A_2883_0023_85AF();
}

/**
 * Decompiled function f__0C3A_2883_0023_85AF()
 *
 * @name f__0C3A_2883_0023_85AF
 * @implements 0C3A:2883:0023:85AF ()
 *
 * Called From: 0C3A:2883:0008:7E08
 */
void f__0C3A_2883_0023_85AF()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xDFFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xBFFF);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x28A6); emu_cs = 0x348B; ovl__348B(4);
	f__0C3A_28A6_0052_EEE5();
}

/**
 * Decompiled function f__0C3A_28A6_0052_EEE5()
 *
 * @name f__0C3A_28A6_0052_EEE5
 * @implements 0C3A:28A6:0052:EEE5 ()
 *
 * Called From: 0C3A:28A6:0023:85AF
 */
void f__0C3A_28A6_0052_EEE5()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_di, 0x1);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__0C3A_2920_0005_1BA2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2000);
	if (!emu_flags.zf) { emu_ip = 0x2920; emu_last_cs = 0x0C3A; emu_last_ip = 0x28B9; emu_last_length = 0x0052; emu_last_crc = 0xEEE5; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1A));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (emu_flags.zf) { emu_ip = 0x2920; emu_last_cs = 0x0C3A; emu_last_ip = 0x28DB; emu_last_length = 0x0052; emu_last_crc = 0xEEE5; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x2903; emu_last_cs = 0x0C3A; emu_last_ip = 0x28E9; emu_last_length = 0x0052; emu_last_crc = 0xEEE5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x28F8); emu_cs = 0x0FCB; emu_ip = 0x2957; emu_last_cs = 0x0C3A; emu_last_ip = 0x28F3; emu_last_length = 0x0052; emu_last_crc = 0xEEE5; emu_call(); // Jump does not resolve
	f__0C3A_28F8_0008_7E08();
}

/**
 * Decompiled function f__0C3A_28AC_004C_2D38()
 *
 * @name f__0C3A_28AC_004C_2D38
 * @implements 0C3A:28AC:004C:2D38 ()
 *
 * Called From: 0C3A:2853:002C:E22E
 * Called From: 0C3A:285E:002A:D221
 */
void f__0C3A_28AC_004C_2D38()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__0C3A_2920_0005_1BA2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2000);
	if (!emu_flags.zf) { emu_ip = 0x2920; emu_last_cs = 0x0C3A; emu_last_ip = 0x28B9; emu_last_length = 0x004C; emu_last_crc = 0x2D38; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1A));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (emu_flags.zf) { emu_ip = 0x2920; emu_last_cs = 0x0C3A; emu_last_ip = 0x28DB; emu_last_length = 0x004C; emu_last_crc = 0x2D38; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x2903; emu_last_cs = 0x0C3A; emu_last_ip = 0x28E9; emu_last_length = 0x004C; emu_last_crc = 0x2D38; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x28F8); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__0C3A_28F8_0008_7E08();
}

/**
 * Decompiled function f__0C3A_28F8_0008_7E08()
 *
 * @name f__0C3A_28F8_0008_7E08
 * @implements 0C3A:28F8:0008:7E08 ()
 *
 * Called From: 0C3A:28F8:004C:2D38
 */
void f__0C3A_28F8_0008_7E08()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2900); emu_cs = 0x10E4; f__10E4_09AB_0031_9946();
	f__0C3A_2900_001A_D9AC();
}

/**
 * Decompiled function f__0C3A_2900_001A_D9AC()
 *
 * @name f__0C3A_2900_001A_D9AC
 * @implements 0C3A:2900:001A:D9AC ()
 *
 * Called From: 0C3A:2900:0008:7E08
 */
void f__0C3A_2900_001A_D9AC()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x6000);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x291A); emu_cs = 0x348B; ovl__348B(5);
	f__0C3A_291A_000B_A025();
}

/**
 * Decompiled function f__0C3A_291A_000B_A025()
 *
 * @name f__0C3A_291A_000B_A025
 * @implements 0C3A:291A:000B:A025 ()
 *
 * Called From: 0C3A:291A:001A:D9AC
 */
void f__0C3A_291A_000B_A025()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_di, 0x1);
	emu_movw(&emu_ax.x, emu_di);
	f__0C3A_2826_0003_04B8(); return;
}

/**
 * Decompiled function f__0C3A_2920_0005_1BA2()
 *
 * @name f__0C3A_2920_0005_1BA2
 * @implements 0C3A:2920:0005:1BA2 ()
 *
 * Called From: 0C3A:28AE:004C:2D38
 * Called From: 0C3A:28AE:0052:EEE5
 */
void f__0C3A_2920_0005_1BA2()
{
	emu_movw(&emu_ax.x, emu_di);
	f__0C3A_2826_0003_04B8(); return;
}

/**
 * Decompiled function f__0C3A_2925_0004_07E2()
 *
 * @name f__0C3A_2925_0004_07E2
 * @implements 0C3A:2925:0004:07E2 ()
 *
 * Called From: 0C3A:2826:0003:04B8
 */
void f__0C3A_2925_0004_07E2()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
