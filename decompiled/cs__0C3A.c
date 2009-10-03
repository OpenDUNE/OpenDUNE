/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0C3A_0009_0029_BF94()
 *
 * @name f__0C3A_0009_0029_BF94
 * @implements 0C3A:0009:0029:BF94 ()
 *
 * Called From: 0C3A:1A99:0022:A4D7
 * Called From: B4B5:0826:0012:21EC
 */
void f__0C3A_0009_0029_BF94()
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
	emu_push(emu_cs); emu_push(0x0032); emu_cs = 0x1082; emu_Memory_Building_Allocate();
	f__0C3A_0032_0017_67B7();
}

/**
 * Decompiled function f__0C3A_0032_0017_67B7()
 *
 * @name f__0C3A_0032_0017_67B7
 * @implements 0C3A:0032:0017:67B7 ()
 *
 * Called From: 0C3A:0032:0029:BF94
 */
void f__0C3A_0032_0017_67B7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__0C3A_0049_00D1_D261(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x01B4; emu_last_cs = 0x0C3A; emu_last_ip = 0x0046; emu_last_length = 0x0017; emu_last_crc = 0x67B7; emu_call();
}

/**
 * Decompiled function f__0C3A_0046_0003_DDBA()
 *
 * @name f__0C3A_0046_0003_DDBA
 * @implements 0C3A:0046:0003:DDBA ()
 *
 * Called From: 0C3A:01B1:0009:DB80
 */
void f__0C3A_0046_0003_DDBA()
{
	f__0C3A_01B4_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_0049_00D1_D261()
 *
 * @name f__0C3A_0049_00D1_D261
 * @implements 0C3A:0049:00D1:D261 ()
 *
 * Called From: 0C3A:0040:0017:67B7
 */
void f__0C3A_0049_00D1_D261()
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
	if (emu_flags.zf) { f__0C3A_0095_0085_1C53(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	emu_cmpws(&emu_si, 0xF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00B5; emu_last_cs = 0x0C3A; emu_last_ip = 0x0098; emu_last_length = 0x00D1; emu_last_crc = 0xD261; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x49), emu_ax.x);
	emu_cmpws(&emu_si, 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00D5; emu_last_cs = 0x0C3A; emu_last_ip = 0x00B8; emu_last_length = 0x00D1; emu_last_crc = 0xD261; emu_call(); return; }
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
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0104; emu_last_cs = 0x0C3A; emu_last_ip = 0x00F5; emu_last_length = 0x00D1; emu_last_crc = 0xD261; emu_call(); return; }
	emu_cmpws(&emu_si, 0x3);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0104; emu_last_cs = 0x0C3A; emu_last_ip = 0x00FA; emu_last_length = 0x00D1; emu_last_crc = 0xD261; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x4E), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x012D; emu_last_cs = 0x0C3A; emu_last_ip = 0x010D; emu_last_length = 0x00D1; emu_last_crc = 0xD261; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x011A); emu_ip = 0x25EC; emu_last_cs = 0x0C3A; emu_last_ip = 0x0117; emu_last_length = 0x00D1; emu_last_crc = 0xD261; emu_call();
	f__0C3A_011A_000A_817C();
}

/**
 * Decompiled function f__0C3A_0095_0085_1C53()
 *
 * @name f__0C3A_0095_0085_1C53
 * @implements 0C3A:0095:0085:1C53 ()
 *
 * Called From: 0C3A:008A:00D1:D261
 */
void f__0C3A_0095_0085_1C53()
{
	emu_cmpws(&emu_si, 0xF);
	if (!emu_flags.zf) { f__0C3A_00B5_0065_E213(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x49), emu_ax.x);
	emu_cmpws(&emu_si, 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00D5; emu_last_cs = 0x0C3A; emu_last_ip = 0x00B8; emu_last_length = 0x0085; emu_last_crc = 0x1C53; emu_call(); return; }
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
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0104; emu_last_cs = 0x0C3A; emu_last_ip = 0x00F5; emu_last_length = 0x0085; emu_last_crc = 0x1C53; emu_call(); return; }
	emu_cmpws(&emu_si, 0x3);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0104; emu_last_cs = 0x0C3A; emu_last_ip = 0x00FA; emu_last_length = 0x0085; emu_last_crc = 0x1C53; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x4E), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x012D; emu_last_cs = 0x0C3A; emu_last_ip = 0x010D; emu_last_length = 0x0085; emu_last_crc = 0x1C53; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x011A); emu_ip = 0x25EC; emu_last_cs = 0x0C3A; emu_last_ip = 0x0117; emu_last_length = 0x0085; emu_last_crc = 0x1C53; emu_call();
	f__0C3A_011A_000A_817C();
}

/**
 * Decompiled function f__0C3A_00B5_0065_E213()
 *
 * @name f__0C3A_00B5_0065_E213
 * @implements 0C3A:00B5:0065:E213 ()
 *
 * Called From: 0C3A:0098:0085:1C53
 */
void f__0C3A_00B5_0065_E213()
{
	emu_cmpws(&emu_si, 0x10);
	if (!emu_flags.zf) { f__0C3A_00D5_0045_1FBC(); return; }
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
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0104; emu_last_cs = 0x0C3A; emu_last_ip = 0x00F5; emu_last_length = 0x0065; emu_last_crc = 0xE213; emu_call(); return; }
	emu_cmpws(&emu_si, 0x3);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0104; emu_last_cs = 0x0C3A; emu_last_ip = 0x00FA; emu_last_length = 0x0065; emu_last_crc = 0xE213; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x4E), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x012D; emu_last_cs = 0x0C3A; emu_last_ip = 0x010D; emu_last_length = 0x0065; emu_last_crc = 0xE213; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x011A); emu_ip = 0x25EC; emu_last_cs = 0x0C3A; emu_last_ip = 0x0117; emu_last_length = 0x0065; emu_last_crc = 0xE213; emu_call();
	f__0C3A_011A_000A_817C();
}

/**
 * Decompiled function f__0C3A_00D5_0045_1FBC()
 *
 * @name f__0C3A_00D5_0045_1FBC
 * @implements 0C3A:00D5:0045:1FBC ()
 *
 * Called From: 0C3A:00B8:0065:E213
 */
void f__0C3A_00D5_0045_1FBC()
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
	if (!emu_flags.zf) { f__0C3A_0104_0016_49D5(); return; }
	emu_cmpws(&emu_si, 0x3);
	if (!emu_flags.zf) { f__0C3A_0104_0016_49D5(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x4E), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x012D; emu_last_cs = 0x0C3A; emu_last_ip = 0x010D; emu_last_length = 0x0045; emu_last_crc = 0x1FBC; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x011A); emu_ip = 0x25EC; emu_last_cs = 0x0C3A; emu_last_ip = 0x0117; emu_last_length = 0x0045; emu_last_crc = 0x1FBC; emu_call();
	f__0C3A_011A_000A_817C();
}

/**
 * Decompiled function f__0C3A_0104_0016_49D5()
 *
 * @name f__0C3A_0104_0016_49D5
 * @implements 0C3A:0104:0016:49D5 ()
 *
 * Called From: 0C3A:00F5:0045:1FBC
 * Called From: 0C3A:00FA:0045:1FBC
 */
void f__0C3A_0104_0016_49D5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
	if (emu_flags.zf) { f__0C3A_012D_0018_BE44(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x011A); f__0C3A_25EC_0011_E453();
	f__0C3A_011A_000A_817C();
}

/**
 * Decompiled function f__0C3A_011A_000A_817C()
 *
 * @name f__0C3A_011A_000A_817C
 * @implements 0C3A:011A:000A:817C ()
 *
 * Called From: 0C3A:011A:0016:49D5
 */
void f__0C3A_011A_000A_817C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0C3A_0124_0021_1CAC(); return; }
	emu_movb(&emu_ax.l, 0x64);
	/* Unresolved jump */ emu_ip = 0x0126; emu_last_cs = 0x0C3A; emu_last_ip = 0x0122; emu_last_length = 0x000A; emu_last_crc = 0x817C; emu_call();
}

/**
 * Decompiled function f__0C3A_0124_0021_1CAC()
 *
 * @name f__0C3A_0124_0021_1CAC
 * @implements 0C3A:0124:0021:1CAC ()
 *
 * Called From: 0C3A:011E:000A:817C
 */
void f__0C3A_0124_0021_1CAC()
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
	emu_push(0x0145); f__0C3A_142D_0018_6667();
	f__0C3A_0145_0017_EAF4();
}

/**
 * Decompiled function f__0C3A_012D_0018_BE44()
 *
 * @name f__0C3A_012D_0018_BE44
 * @implements 0C3A:012D:0018:BE44 ()
 *
 * Called From: 0C3A:010D:0016:49D5
 */
void f__0C3A_012D_0018_BE44()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4C), 0xFFFF);
	emu_movw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0145); f__0C3A_142D_0018_6667();
	f__0C3A_0145_0017_EAF4();
}

/**
 * Decompiled function f__0C3A_0145_0017_EAF4()
 *
 * @name f__0C3A_0145_0017_EAF4
 * @implements 0C3A:0145:0017:EAF4 ()
 *
 * Called From: 0C3A:0145:0021:1CAC
 * Called From: 0C3A:0145:0018:BE44
 */
void f__0C3A_0145_0017_EAF4()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x50), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__0C3A_017C_0011_A05B(); return; }
	/* Unresolved jump */ emu_ip = 0x0163; emu_last_cs = 0x0C3A; emu_last_ip = 0x015A; emu_last_length = 0x0017; emu_last_crc = 0xEAF4; emu_call();
}

/**
 * Decompiled function f__0C3A_017C_0011_A05B()
 *
 * @name f__0C3A_017C_0011_A05B
 * @implements 0C3A:017C:0011:A05B ()
 *
 * Called From: 0C3A:0158:0017:EAF4
 */
void f__0C3A_017C_0011_A05B()
{
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__0C3A_01AB_0009_DB80(); return; }
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x018D); f__0C3A_01BA_0018_69C9();
	f__0C3A_018D_0012_30C8();
}

/**
 * Decompiled function f__0C3A_018D_0012_30C8()
 *
 * @name f__0C3A_018D_0012_30C8
 * @implements 0C3A:018D:0012:30C8 ()
 *
 * Called From: 0C3A:018D:0011:A05B
 */
void f__0C3A_018D_0012_30C8()
{
	emu_addws(&emu_sp, 0x6);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0C3A_01AB_0009_DB80(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x019F); emu_cs = 0x1082; emu_ip = 0x0325; emu_last_cs = 0x0C3A; emu_last_ip = 0x019A; emu_last_length = 0x0012; emu_last_crc = 0x30C8; emu_call();
	/* Unresolved jump */ emu_ip = 0x019F; emu_last_cs = 0x0C3A; emu_last_ip = 0x019F; emu_last_length = 0x0012; emu_last_crc = 0x30C8; emu_call();
}

/**
 * Decompiled function f__0C3A_01AB_0009_DB80()
 *
 * @name f__0C3A_01AB_0009_DB80
 * @implements 0C3A:01AB:0009:DB80 ()
 *
 * Called From: 0C3A:017F:0011:A05B
 * Called From: 0C3A:0192:0012:30C8
 */
void f__0C3A_01AB_0009_DB80()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0C3A_0046_0003_DDBA(); return;
}

/**
 * Decompiled function f__0C3A_01B4_0006_F7CE()
 *
 * @name f__0C3A_01B4_0006_F7CE
 * @implements 0C3A:01B4:0006:F7CE ()
 *
 * Called From: 0C3A:0046:0003:DDBA
 */
void f__0C3A_01B4_0006_F7CE()
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
 * Decompiled function f__0C3A_01BA_0018_69C9()
 *
 * @name f__0C3A_01BA_0018_69C9
 * @implements 0C3A:01BA:0018:69C9 ()
 *
 * Called From: 0AEC:0509:0024:77D8
 * Called From: 0C3A:018A:0011:A05B
 */
void f__0C3A_01BA_0018_69C9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x14);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_01D2_0032_D9DB(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x0768; emu_last_cs = 0x0C3A; emu_last_ip = 0x01CF; emu_last_length = 0x0018; emu_last_crc = 0x69C9; emu_call();
}

/**
 * Decompiled function f__0C3A_01CD_0005_9E11()
 *
 * @name f__0C3A_01CD_0005_9E11
 * @implements 0C3A:01CD:0005:9E11 ()
 *
 * Called From: 0C3A:052F:001B:8208
 */
void f__0C3A_01CD_0005_9E11()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C3A_0768_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_01CF_0003_9F85()
 *
 * @name f__0C3A_01CF_0003_9F85
 * @implements 0C3A:01CF:0003:9F85 ()
 *
 * Called From: 0C3A:0505:0006:4D2D
 * Called From: 0C3A:0505:0008:149F
 * Called From: 0C3A:0765:0015:B17D
 */
void f__0C3A_01CF_0003_9F85()
{
	f__0C3A_0768_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_01D2_0032_D9DB()
 *
 * @name f__0C3A_01D2_0032_D9DB
 * @implements 0C3A:01D2:0032:D9DB ()
 *
 * Called From: 0C3A:01CB:0018:69C9
 */
void f__0C3A_01D2_0032_D9DB()
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
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01FF; emu_last_cs = 0x0C3A; emu_last_ip = 0x01F6; emu_last_length = 0x0032; emu_last_crc = 0xD9DB; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__0C3A_0204_000C_ED4B(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x0206; emu_last_cs = 0x0C3A; emu_last_ip = 0x0202; emu_last_length = 0x0032; emu_last_crc = 0xD9DB; emu_call();
}

/**
 * Decompiled function f__0C3A_0204_000C_ED4B()
 *
 * @name f__0C3A_0204_000C_ED4B
 * @implements 0C3A:0204:000C:ED4B ()
 *
 * Called From: 0C3A:01FD:0032:D9DB
 */
void f__0C3A_0204_000C_ED4B()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpws(&emu_di, 0xFF);
	if (!emu_flags.zf) { f__0C3A_0210_000D_8593(); return; }
	/* Unresolved jump */ emu_ip = 0x01CD; emu_last_cs = 0x0C3A; emu_last_ip = 0x020E; emu_last_length = 0x000C; emu_last_crc = 0xED4B; emu_call();
}

/**
 * Decompiled function f__0C3A_0210_000D_8593()
 *
 * @name f__0C3A_0210_000D_8593
 * @implements 0C3A:0210:000D:8593 ()
 *
 * Called From: 0C3A:020C:000C:ED4B
 */
void f__0C3A_0210_000D_8593()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xE);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x021D; emu_last_cs = 0x0C3A; emu_last_ip = 0x0218; emu_last_length = 0x000D; emu_last_crc = 0x8593; emu_call(); return; }
	f__0C3A_02E1_0017_9836(); return;
}

/**
 * Decompiled function f__0C3A_02E1_0017_9836()
 *
 * @name f__0C3A_02E1_0017_9836
 * @implements 0C3A:02E1:0017:9836 ()
 *
 * Called From: 0C3A:021A:000D:8593
 */
void f__0C3A_02E1_0017_9836()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x0);
	if (emu_flags.zf) { f__0C3A_02F8_0032_8358(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02F8; emu_last_cs = 0x0C3A; emu_last_ip = 0x02F3; emu_last_length = 0x0017; emu_last_crc = 0x9836; emu_call(); return; }
	f__0C3A_0508_000F_9479(); return;
}

/**
 * Decompiled function f__0C3A_02F8_0032_8358()
 *
 * @name f__0C3A_02F8_0032_8358
 * @implements 0C3A:02F8:0032:8358 ()
 *
 * Called From: 0C3A:02E9:0017:9836
 */
void f__0C3A_02F8_0032_8358()
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
	f__0C3A_03F2_000B_9B2A(); return;
}

/**
 * Decompiled function f__0C3A_032A_0017_3BFA()
 *
 * @name f__0C3A_032A_0017_3BFA
 * @implements 0C3A:032A:0017:3BFA ()
 *
 * Called From: 0C3A:03FA:000B:9B2A
 */
void f__0C3A_032A_0017_3BFA()
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
	emu_push(0x0341); f__0C3A_0C5C_004D_2837();
	f__0C3A_0341_0009_B798();
}

/**
 * Decompiled function f__0C3A_0341_0009_B798()
 *
 * @name f__0C3A_0341_0009_B798
 * @implements 0C3A:0341:0009:B798 ()
 *
 * Called From: 0C3A:0341:0017:3BFA
 */
void f__0C3A_0341_0009_B798()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0C3A_034A_006A_8924(); return; }
	f__0C3A_03EF_000E_A634(); return;
}

/**
 * Decompiled function f__0C3A_034A_006A_8924()
 *
 * @name f__0C3A_034A_006A_8924
 * @implements 0C3A:034A:006A:8924 ()
 *
 * Called From: 0C3A:0345:0009:B798
 */
void f__0C3A_034A_006A_8924()
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
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03BF; emu_last_cs = 0x0C3A; emu_last_ip = 0x03A8; emu_last_length = 0x006A; emu_last_crc = 0x8924; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03B4); emu_cs = 0x0F3F; f__0F3F_009D_0017_8464();
	f__0C3A_03B4_0008_F74D();
}

/**
 * Decompiled function f__0C3A_03B4_0008_F74D()
 *
 * @name f__0C3A_03B4_0008_F74D
 * @implements 0C3A:03B4:0008:F74D ()
 *
 * Called From: 0C3A:03B4:006A:8924
 */
void f__0C3A_03B4_0008_F74D()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03BC); emu_cs = 0x34CD; ovl__34CD(31);
	f__0C3A_03BC_0009_92AB();
}

/**
 * Decompiled function f__0C3A_03BC_0009_92AB()
 *
 * @name f__0C3A_03BC_0009_92AB
 * @implements 0C3A:03BC:0009:92AB ()
 *
 * Called From: 0C3A:03BC:0008:F74D
 */
void f__0C3A_03BC_0009_92AB()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03C5); emu_cs = 0x34CD; ovl__34CD(9);
	f__0C3A_03C5_0022_C3F8();
}

/**
 * Decompiled function f__0C3A_03C5_0022_C3F8()
 *
 * @name f__0C3A_03C5_0022_C3F8
 * @implements 0C3A:03C5:0022:C3F8 ()
 *
 * Called From: 0C3A:03C5:0009:92AB
 */
void f__0C3A_03C5_0022_C3F8()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03DB; emu_last_cs = 0x0C3A; emu_last_ip = 0x03C8; emu_last_length = 0x0022; emu_last_crc = 0xC3F8; emu_call(); return; }
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
	f__0C3A_03E7_0016_22E6();
}

/**
 * Decompiled function f__0C3A_03E7_0016_22E6()
 *
 * @name f__0C3A_03E7_0016_22E6
 * @implements 0C3A:03E7:0016:22E6 ()
 *
 * Called From: 0C3A:03E7:0022:C3F8
 */
void f__0C3A_03E7_0016_22E6()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_03FD_000D_F99B(); return; }
	/* Unresolved jump */ emu_ip = 0x032A; emu_last_cs = 0x0C3A; emu_last_ip = 0x03FA; emu_last_length = 0x0016; emu_last_crc = 0x22E6; emu_call();
}

/**
 * Decompiled function f__0C3A_03EF_000E_A634()
 *
 * @name f__0C3A_03EF_000E_A634
 * @implements 0C3A:03EF:000E:A634 ()
 *
 * Called From: 0C3A:0347:0009:B798
 */
void f__0C3A_03EF_000E_A634()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_03FD_000D_F99B(); return; }
	/* Unresolved jump */ emu_ip = 0x032A; emu_last_cs = 0x0C3A; emu_last_ip = 0x03FA; emu_last_length = 0x000E; emu_last_crc = 0xA634; emu_call();
}

/**
 * Decompiled function f__0C3A_03F2_000B_9B2A()
 *
 * @name f__0C3A_03F2_000B_9B2A
 * @implements 0C3A:03F2:000B:9B2A ()
 *
 * Called From: 0C3A:0327:0032:8358
 */
void f__0C3A_03F2_000B_9B2A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x03FD; emu_last_cs = 0x0C3A; emu_last_ip = 0x03F8; emu_last_length = 0x000B; emu_last_crc = 0x9B2A; emu_call(); return; }
	f__0C3A_032A_0017_3BFA(); return;
}

/**
 * Decompiled function f__0C3A_03FD_000D_F99B()
 *
 * @name f__0C3A_03FD_000D_F99B
 * @implements 0C3A:03FD:000D:F99B ()
 *
 * Called From: 0C3A:03F8:0016:22E6
 * Called From: 0C3A:03F8:000E:A634
 */
void f__0C3A_03FD_000D_F99B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x040A; emu_last_cs = 0x0C3A; emu_last_ip = 0x0405; emu_last_length = 0x000D; emu_last_crc = 0xF99B; emu_call(); return; }
	f__0C3A_04EF_0011_FFC9(); return;
}

/**
 * Decompiled function f__0C3A_04EF_0011_FFC9()
 *
 * @name f__0C3A_04EF_0011_FFC9
 * @implements 0C3A:04EF:0011:FFC9 ()
 *
 * Called From: 0C3A:0407:000D:F99B
 */
void f__0C3A_04EF_0011_FFC9()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	if (emu_flags.zf) { f__0C3A_0502_0006_4D2D(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0500); emu_cs = 0x1082; emu_Memory_Building_Free();
	f__0C3A_0500_0008_149F();
}

/**
 * Decompiled function f__0C3A_0500_0008_149F()
 *
 * @name f__0C3A_0500_0008_149F
 * @implements 0C3A:0500:0008:149F ()
 *
 * Called From: 0C3A:0500:0011:FFC9
 */
void f__0C3A_0500_0008_149F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	f__0C3A_01CF_0003_9F85(); return;
}

/**
 * Decompiled function f__0C3A_0502_0006_4D2D()
 *
 * @name f__0C3A_0502_0006_4D2D
 * @implements 0C3A:0502:0006:4D2D ()
 *
 * Called From: 0C3A:04F3:0011:FFC9
 */
void f__0C3A_0502_0006_4D2D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	f__0C3A_01CF_0003_9F85(); return;
}

/**
 * Decompiled function f__0C3A_0508_000F_9479()
 *
 * @name f__0C3A_0508_000F_9479
 * @implements 0C3A:0508:000F:9479 ()
 *
 * Called From: 0C3A:02F5:0017:9836
 */
void f__0C3A_0508_000F_9479()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0517); f__0C3A_0C5C_004D_2837();
	f__0C3A_0517_001B_8208();
}

/**
 * Decompiled function f__0C3A_0517_001B_8208()
 *
 * @name f__0C3A_0517_001B_8208
 * @implements 0C3A:0517:001B:8208 ()
 *
 * Called From: 0C3A:0517:000F:9479
 */
void f__0C3A_0517_001B_8208()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0532; emu_last_cs = 0x0C3A; emu_last_ip = 0x0520; emu_last_length = 0x001B; emu_last_crc = 0x8208; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__0C3A_0532_0018_2318(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0532; emu_last_cs = 0x0C3A; emu_last_ip = 0x052D; emu_last_length = 0x001B; emu_last_crc = 0x8208; emu_call(); return; }
	f__0C3A_01CD_0005_9E11(); return;
}

/**
 * Decompiled function f__0C3A_0532_0018_2318()
 *
 * @name f__0C3A_0532_0018_2318
 * @implements 0C3A:0532:0018:2318 ()
 *
 * Called From: 0C3A:0526:001B:8208
 */
void f__0C3A_0532_0018_2318()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0555; emu_last_cs = 0x0C3A; emu_last_ip = 0x053E; emu_last_length = 0x0018; emu_last_crc = 0x2318; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x054A); emu_cs = 0x0F3F; f__0F3F_009D_0017_8464();
	f__0C3A_054A_0008_F74D();
}

/**
 * Decompiled function f__0C3A_054A_0008_F74D()
 *
 * @name f__0C3A_054A_0008_F74D
 * @implements 0C3A:054A:0008:F74D ()
 *
 * Called From: 0C3A:054A:0018:2318
 */
void f__0C3A_054A_0008_F74D()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0552); emu_cs = 0x34CD; ovl__34CD(31);
	f__0C3A_0552_0039_9E74();
}

/**
 * Decompiled function f__0C3A_0552_0039_9E74()
 *
 * @name f__0C3A_0552_0039_9E74
 * @implements 0C3A:0552:0039:9E74 ()
 *
 * Called From: 0C3A:0552:0008:F74D
 */
void f__0C3A_0552_0039_9E74()
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
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x057D; emu_last_cs = 0x0C3A; emu_last_ip = 0x0573; emu_last_length = 0x0039; emu_last_crc = 0x9E74; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFB);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x058B); emu_cs = 0x0F3F; f__0F3F_009D_0017_8464();
	f__0C3A_058B_0050_EE73();
}

/**
 * Decompiled function f__0C3A_058B_0050_EE73()
 *
 * @name f__0C3A_058B_0050_EE73
 * @implements 0C3A:058B:0050:EE73 ()
 *
 * Called From: 0C3A:058B:0039:9E74
 */
void f__0C3A_058B_0050_EE73()
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
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_060C_0039_762F(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_shlw(&emu_bx.x, 0x1);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x2D52));
	emu_push(emu_cs); emu_push(0x05DB); emu_cs = 0x34C1; ovl__34C1(2);
	f__0C3A_05DB_0017_30AE();
}

/**
 * Decompiled function f__0C3A_05DB_0017_30AE()
 *
 * @name f__0C3A_05DB_0017_30AE
 * @implements 0C3A:05DB:0017:30AE ()
 *
 * Called From: 0C3A:05DB:0050:EE73
 */
void f__0C3A_05DB_0017_30AE()
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
	f__0C3A_05F2_001A_CD9A();
}

/**
 * Decompiled function f__0C3A_05F2_001A_CD9A()
 *
 * @name f__0C3A_05F2_001A_CD9A
 * @implements 0C3A:05F2:001A:CD9A ()
 *
 * Called From: 0C3A:05F2:0017:30AE
 */
void f__0C3A_05F2_001A_CD9A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x400);
	f__0C3A_061A_002B_9E18(); return;
}

/**
 * Decompiled function f__0C3A_060C_0039_762F()
 *
 * @name f__0C3A_060C_0039_762F
 * @implements 0C3A:060C:0039:762F ()
 *
 * Called From: 0C3A:05C1:0050:EE73
 */
void f__0C3A_060C_0039_762F()
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
	emu_push(emu_cs); emu_push(0x0645); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	f__0C3A_0645_003D_0EC1();
}

/**
 * Decompiled function f__0C3A_061A_002B_9E18()
 *
 * @name f__0C3A_061A_002B_9E18
 * @implements 0C3A:061A:002B:9E18 ()
 *
 * Called From: 0C3A:060A:001A:CD9A
 */
void f__0C3A_061A_002B_9E18()
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
	emu_push(emu_cs); emu_push(0x0645); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	f__0C3A_0645_003D_0EC1();
}

/**
 * Decompiled function f__0C3A_0645_003D_0EC1()
 *
 * @name f__0C3A_0645_003D_0EC1
 * @implements 0C3A:0645:003D:0EC1 ()
 *
 * Called From: 0C3A:0645:0039:762F
 * Called From: 0C3A:0645:002B:9E18
 */
void f__0C3A_0645_003D_0EC1()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1E), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x0);
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x06A0; emu_last_cs = 0x0C3A; emu_last_ip = 0x065D; emu_last_length = 0x003D; emu_last_crc = 0x0EC1; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0682); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	f__0C3A_0682_001B_2708();
}

/**
 * Decompiled function f__0C3A_0682_001B_2708()
 *
 * @name f__0C3A_0682_001B_2708
 * @implements 0C3A:0682:001B:2708 ()
 *
 * Called From: 0C3A:0682:003D:0EC1
 */
void f__0C3A_0682_001B_2708()
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
	emu_push(emu_cs); emu_push(0x069D); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
	f__0C3A_069D_002C_57D1();
}

/**
 * Decompiled function f__0C3A_069D_002C_57D1()
 *
 * @name f__0C3A_069D_002C_57D1
 * @implements 0C3A:069D:002C:57D1 ()
 *
 * Called From: 0C3A:069D:001B:2708
 */
void f__0C3A_069D_002C_57D1()
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
	f__0C3A_06EB_001D_DCB3(); return;
}

/**
 * Decompiled function f__0C3A_06C9_0017_F9DE()
 *
 * @name f__0C3A_06C9_0017_F9DE
 * @implements 0C3A:06C9:0017:F9DE ()
 *
 * Called From: 0C3A:06EE:001D:DCB3
 * Called From: 0C3A:06EE:0020:6FF2
 */
void f__0C3A_06C9_0017_F9DE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x06E0); emu_cs = 0x34CD; ovl__34CD(26);
	f__0C3A_06E0_0008_D276();
}

/**
 * Decompiled function f__0C3A_06E0_0008_D276()
 *
 * @name f__0C3A_06E0_0008_D276
 * @implements 0C3A:06E0:0008:D276 ()
 *
 * Called From: 0C3A:06E0:0017:F9DE
 */
void f__0C3A_06E0_0008_D276()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06E8); emu_cs = 0x1A34; f__1A34_10EC_000E_A326();
	f__0C3A_06E8_0020_6FF2();
}

/**
 * Decompiled function f__0C3A_06E8_0020_6FF2()
 *
 * @name f__0C3A_06E8_0020_6FF2
 * @implements 0C3A:06E8:0020:6FF2 ()
 *
 * Called From: 0C3A:06E8:0008:D276
 */
void f__0C3A_06E8_0020_6FF2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_06C9_0017_F9DE(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x9);
	if (!emu_flags.zf) { f__0C3A_0711_0015_4096(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0708); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__0C3A_0708_001E_737A();
}

/**
 * Decompiled function f__0C3A_06EB_001D_DCB3()
 *
 * @name f__0C3A_06EB_001D_DCB3
 * @implements 0C3A:06EB:001D:DCB3 ()
 *
 * Called From: 0C3A:06C7:002C:57D1
 */
void f__0C3A_06EB_001D_DCB3()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_06C9_0017_F9DE(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x9);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0711; emu_last_cs = 0x0C3A; emu_last_ip = 0x06F8; emu_last_length = 0x001D; emu_last_crc = 0xDCB3; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0708); emu_cs = 0x10BE; emu_ip = 0x01AB; emu_last_cs = 0x0C3A; emu_last_ip = 0x0703; emu_last_length = 0x001D; emu_last_crc = 0xDCB3; emu_call();
	f__0C3A_0708_001E_737A();
}

/**
 * Decompiled function f__0C3A_0708_001E_737A()
 *
 * @name f__0C3A_0708_001E_737A
 * @implements 0C3A:0708:001E:737A ()
 *
 * Called From: 0C3A:0708:0020:6FF2
 */
void f__0C3A_0708_001E_737A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0x1A));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0727; emu_last_cs = 0x0C3A; emu_last_ip = 0x0716; emu_last_length = 0x001E; emu_last_crc = 0x737A; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0726); f__0C3A_1F70_0010_8DB3();
	f__0C3A_0726_000C_E6D9();
}

/**
 * Decompiled function f__0C3A_0711_0015_4096()
 *
 * @name f__0C3A_0711_0015_4096
 * @implements 0C3A:0711:0015:4096 ()
 *
 * Called From: 0C3A:06F8:0020:6FF2
 */
void f__0C3A_0711_0015_4096()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { f__0C3A_0727_000B_E349(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0726); f__0C3A_1F70_0010_8DB3();
	f__0C3A_0726_000C_E6D9();
}

/**
 * Decompiled function f__0C3A_0726_000C_E6D9()
 *
 * @name f__0C3A_0726_000C_E6D9
 * @implements 0C3A:0726:000C:E6D9 ()
 *
 * Called From: 0C3A:0726:001E:737A
 * Called From: 0C3A:0726:0015:4096
 */
void f__0C3A_0726_000C_E6D9()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0732); f__0C3A_092A_0013_A4A8();
	f__0C3A_0732_0010_5523();
}

/**
 * Decompiled function f__0C3A_0727_000B_E349()
 *
 * @name f__0C3A_0727_000B_E349
 * @implements 0C3A:0727:000B:E349 ()
 *
 * Called From: 0C3A:0716:0015:4096
 */
void f__0C3A_0727_000B_E349()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0732); f__0C3A_092A_0013_A4A8();
	f__0C3A_0732_0010_5523();
}

/**
 * Decompiled function f__0C3A_0732_0010_5523()
 *
 * @name f__0C3A_0732_0010_5523
 * @implements 0C3A:0732:0010:5523 ()
 *
 * Called From: 0C3A:0732:000B:E349
 * Called From: 0C3A:0732:000C:E6D9
 */
void f__0C3A_0732_0010_5523()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0742); f__0C3A_13BD_0022_D6F0();
	f__0C3A_0742_0011_6CE1();
}

/**
 * Decompiled function f__0C3A_0742_0011_6CE1()
 *
 * @name f__0C3A_0742_0011_6CE1
 * @implements 0C3A:0742:0011:6CE1 ()
 *
 * Called From: 0C3A:0742:0010:5523
 */
void f__0C3A_0742_0011_6CE1()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0753); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__0C3A_0753_0015_B17D();
}

/**
 * Decompiled function f__0C3A_0753_0015_B17D()
 *
 * @name f__0C3A_0753_0015_B17D
 * @implements 0C3A:0753:0015:B17D ()
 *
 * Called From: 0C3A:0753:0011:6CE1
 */
void f__0C3A_0753_0015_B17D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	f__0C3A_01CF_0003_9F85(); return;
}

/**
 * Decompiled function f__0C3A_0768_0006_F7CE()
 *
 * @name f__0C3A_0768_0006_F7CE
 * @implements 0C3A:0768:0006:F7CE ()
 *
 * Called From: 0C3A:01CF:0003:9F85
 * Called From: 0C3A:01CF:0005:9E11
 */
void f__0C3A_0768_0006_F7CE()
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
 * Decompiled function f__0C3A_092A_0013_A4A8()
 *
 * @name f__0C3A_092A_0013_A4A8
 * @implements 0C3A:092A:0013:A4A8 ()
 *
 * Called From: 0C3A:072F:000B:E349
 * Called From: 0C3A:072F:000C:E6D9
 * Called From: 0C3A:13B6:0014:7F45
 * Called From: 0F78:03C5:000C:C461
 * Called From: 10E4:21A1:000B:C1F1
 */
void f__0C3A_092A_0013_A4A8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_093D_000E_250F(); return; }
	/* Unresolved jump */ emu_ip = 0x0B8D; emu_last_cs = 0x0C3A; emu_last_ip = 0x093A; emu_last_length = 0x0013; emu_last_crc = 0xA4A8; emu_call();
}

/**
 * Decompiled function f__0C3A_093D_000E_250F()
 *
 * @name f__0C3A_093D_000E_250F
 * @implements 0C3A:093D:000E:250F ()
 *
 * Called From: 0C3A:0938:0013:A4A8
 */
void f__0C3A_093D_000E_250F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (!emu_flags.zf) { f__0C3A_094B_000E_A510(); return; }
	f__0C3A_0B8D_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_094B_000E_A510()
 *
 * @name f__0C3A_094B_000E_A510
 * @implements 0C3A:094B:000E:A510 ()
 *
 * Called From: 0C3A:0946:000E:250F
 */
void f__0C3A_094B_000E_A510()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (emu_flags.zf) { f__0C3A_0959_0028_6D6C(); return; }
	/* Unresolved jump */ emu_ip = 0x0B8D; emu_last_cs = 0x0C3A; emu_last_ip = 0x0956; emu_last_length = 0x000E; emu_last_crc = 0xA510; emu_call();
}

/**
 * Decompiled function f__0C3A_0959_0028_6D6C()
 *
 * @name f__0C3A_0959_0028_6D6C
 * @implements 0C3A:0959:0028:6D6C ()
 *
 * Called From: 0C3A:0954:000E:A510
 */
void f__0C3A_0959_0028_6D6C()
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
	emu_push(emu_cs); emu_push(0x0981); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__0C3A_0981_0061_F8F6();
}

/**
 * Decompiled function f__0C3A_0981_0061_F8F6()
 *
 * @name f__0C3A_0981_0061_F8F6
 * @implements 0C3A:0981:0061:F8F6 ()
 *
 * Called From: 0C3A:0981:0028:6D6C
 */
void f__0C3A_0981_0061_F8F6()
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
	f__0C3A_0AEA_0008_C20B(); return;
}

/**
 * Decompiled function f__0C3A_09E2_001D_98C0()
 *
 * @name f__0C3A_09E2_001D_98C0
 * @implements 0C3A:09E2:001D:98C0 ()
 *
 * Called From: 0C3A:0AEF:0008:C20B
 * Called From: 0C3A:0AEF:000C:CB80
 */
void f__0C3A_09E2_001D_98C0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x09FF); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__0C3A_09FF_00E7_CC50();
}

/**
 * Decompiled function f__0C3A_09FF_00E7_CC50()
 *
 * @name f__0C3A_09FF_00E7_CC50
 * @implements 0C3A:09FF:00E7:CC50 ()
 *
 * Called From: 0C3A:09FF:001D:98C0
 */
void f__0C3A_09FF_00E7_CC50()
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
	if (emu_flags.cf) { f__0C3A_0AC6_0020_3555(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_shrw(&emu_ax.x, 0x1);
	emu_andw(&emu_ax.x, 0x7F);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	if ((emu_flags.cf || emu_flags.zf)) { f__0C3A_0AD8_000E_24E3(); return; }
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
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0AE6); emu_cs = 0x34CD; emu_ip = 0x00B1; emu_last_cs = 0x0C3A; emu_last_ip = 0x0AE1; emu_last_length = 0x00E7; emu_last_crc = 0xCC50; emu_call();
	f__0C3A_0AE6_000C_CB80();
}

/**
 * Decompiled function f__0C3A_0AC6_0020_3555()
 *
 * @name f__0C3A_0AC6_0020_3555
 * @implements 0C3A:0AC6:0020:3555 ()
 *
 * Called From: 0C3A:0AA8:00E7:CC50
 */
void f__0C3A_0AC6_0020_3555()
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
	f__0C3A_0AE6_000C_CB80();
}

/**
 * Decompiled function f__0C3A_0AD8_000E_24E3()
 *
 * @name f__0C3A_0AD8_000E_24E3
 * @implements 0C3A:0AD8:000E:24E3 ()
 *
 * Called From: 0C3A:0AC4:00E7:CC50
 */
void f__0C3A_0AD8_000E_24E3()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0AE6); emu_cs = 0x34CD; ovl__34CD(29);
	f__0C3A_0AE6_000C_CB80();
}

/**
 * Decompiled function f__0C3A_0AE6_000C_CB80()
 *
 * @name f__0C3A_0AE6_000C_CB80
 * @implements 0C3A:0AE6:000C:CB80 ()
 *
 * Called From: 0C3A:0AE6:0020:3555
 * Called From: 0C3A:0AE6:000E:24E3
 */
void f__0C3A_0AE6_000C_CB80()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_0AF2_001A_CFD7(); return; }
	f__0C3A_09E2_001D_98C0(); return;
}

/**
 * Decompiled function f__0C3A_0AEA_0008_C20B()
 *
 * @name f__0C3A_0AEA_0008_C20B
 * @implements 0C3A:0AEA:0008:C20B ()
 *
 * Called From: 0C3A:09DF:0061:F8F6
 */
void f__0C3A_0AEA_0008_C20B()
{
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0AF2; emu_last_cs = 0x0C3A; emu_last_ip = 0x0AED; emu_last_length = 0x0008; emu_last_crc = 0xC20B; emu_call(); return; }
	f__0C3A_09E2_001D_98C0(); return;
}

/**
 * Decompiled function f__0C3A_0AF2_001A_CFD7()
 *
 * @name f__0C3A_0AF2_001A_CFD7
 * @implements 0C3A:0AF2:001A:CFD7 ()
 *
 * Called From: 0C3A:0AED:000C:CB80
 */
void f__0C3A_0AF2_001A_CFD7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_0B44_0040_CFBF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_cmpws(&emu_di, 0x2);
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_0B0C_0038_BBC8(); return; }
	emu_movw(&emu_ax.x, emu_di);
	f__0C3A_0B0F_0035_03CC(); return;
}

/**
 * Decompiled function f__0C3A_0B0C_0038_BBC8()
 *
 * @name f__0C3A_0B0C_0038_BBC8
 * @implements 0C3A:0B0C:0038:BBC8 ()
 *
 * Called From: 0C3A:0B06:001A:CFD7
 */
void f__0C3A_0B0C_0038_BBC8()
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
	if (!emu_flags.zf) { f__0C3A_0B29_001B_8966(); return; }
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
	/* Unresolved jump */ emu_ip = 0x0B4E; emu_last_cs = 0x0C3A; emu_last_ip = 0x0B42; emu_last_length = 0x0038; emu_last_crc = 0xBBC8; emu_call();
}

/**
 * Decompiled function f__0C3A_0B0F_0035_03CC()
 *
 * @name f__0C3A_0B0F_0035_03CC
 * @implements 0C3A:0B0F:0035:03CC ()
 *
 * Called From: 0C3A:0B0A:001A:CFD7
 */
void f__0C3A_0B0F_0035_03CC()
{
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3E));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x40));
	if (!emu_flags.zf) { f__0C3A_0B29_001B_8966(); return; }
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
	/* Unresolved jump */ emu_ip = 0x0B4E; emu_last_cs = 0x0C3A; emu_last_ip = 0x0B42; emu_last_length = 0x0035; emu_last_crc = 0x03CC; emu_call();
}

/**
 * Decompiled function f__0C3A_0B29_001B_8966()
 *
 * @name f__0C3A_0B29_001B_8966
 * @implements 0C3A:0B29:001B:8966 ()
 *
 * Called From: 0C3A:0B24:0035:03CC
 * Called From: 0C3A:0B24:0038:BBC8
 */
void f__0C3A_0B29_001B_8966()
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
	f__0C3A_0B4E_0036_3381(); return;
}

/**
 * Decompiled function f__0C3A_0B44_0040_CFBF()
 *
 * @name f__0C3A_0B44_0040_CFBF
 * @implements 0C3A:0B44:0040:CFBF ()
 *
 * Called From: 0C3A:0AFA:001A:CFD7
 */
void f__0C3A_0B44_0040_CFBF()
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
	emu_push(emu_cs); emu_push(0x0B84); emu_cs = 0x151A; f__151A_000E_0013_5840();
	f__0C3A_0B84_000F_E7B4();
}

/**
 * Decompiled function f__0C3A_0B4E_0036_3381()
 *
 * @name f__0C3A_0B4E_0036_3381
 * @implements 0C3A:0B4E:0036:3381 ()
 *
 * Called From: 0C3A:0B42:001B:8966
 */
void f__0C3A_0B4E_0036_3381()
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
	emu_push(emu_cs); emu_push(0x0B84); emu_cs = 0x151A; f__151A_000E_0013_5840();
	f__0C3A_0B84_000F_E7B4();
}

/**
 * Decompiled function f__0C3A_0B84_000F_E7B4()
 *
 * @name f__0C3A_0B84_000F_E7B4
 * @implements 0C3A:0B84:000F:E7B4 ()
 *
 * Called From: 0C3A:0B84:0040:CFBF
 * Called From: 0C3A:0B84:0036:3381
 */
void f__0C3A_0B84_000F_E7B4()
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
 * Decompiled function f__0C3A_0B8D_0006_F7CE()
 *
 * @name f__0C3A_0B8D_0006_F7CE
 * @implements 0C3A:0B8D:0006:F7CE ()
 *
 * Called From: 0C3A:0948:000E:250F
 */
void f__0C3A_0B8D_0006_F7CE()
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
 * Decompiled function f__0C3A_0B93_0034_3B6D()
 *
 * @name f__0C3A_0B93_0034_3B6D
 * @implements 0C3A:0B93:0034:3B6D ()
 *
 * Called From: 0C3A:1897:001E:1AEF
 */
void f__0C3A_0B93_0034_3B6D()
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
	if (!emu_flags.zf) { f__0C3A_0BC7_0008_E857(); return; }
	f__0C3A_0C54_0002_B73A(); return;
}

/**
 * Decompiled function f__0C3A_0BC7_0008_E857()
 *
 * @name f__0C3A_0BC7_0008_E857
 * @implements 0C3A:0BC7:0008:E857 ()
 *
 * Called From: 0C3A:0BC2:0034:3B6D
 */
void f__0C3A_0BC7_0008_E857()
{
	emu_cmpws(&emu_di, 0x1);
	if (!emu_flags.zf) { f__0C3A_0BCF_0004_D579(); return; }
	/* Unresolved jump */ emu_ip = 0x0C54; emu_last_cs = 0x0C3A; emu_last_ip = 0x0BCC; emu_last_length = 0x0008; emu_last_crc = 0xE857; emu_call();
}

/**
 * Decompiled function f__0C3A_0BCF_0004_D579()
 *
 * @name f__0C3A_0BCF_0004_D579
 * @implements 0C3A:0BCF:0004:D579 ()
 *
 * Called From: 0C3A:0BCA:0008:E857
 */
void f__0C3A_0BCF_0004_D579()
{
	emu_xorw(&emu_si, emu_si);
	f__0C3A_0C4A_000A_45BF(); return;
}

/**
 * Decompiled function f__0C3A_0BD3_0021_C4A1()
 *
 * @name f__0C3A_0BD3_0021_C4A1
 * @implements 0C3A:0BD3:0021:C4A1 ()
 *
 * Called From: 0C3A:0C4E:000A:45BF
 * Called From: 0C3A:0C4E:000B:85B7
 */
void f__0C3A_0BD3_0021_C4A1()
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
	f__0C3A_0C36_0013_31B9(); return;
}

/**
 * Decompiled function f__0C3A_0BF4_0017_6A02()
 *
 * @name f__0C3A_0BF4_0017_6A02
 * @implements 0C3A:0BF4:0017:6A02 ()
 *
 * Called From: 0C3A:0C3C:0013:31B9
 * Called From: 0C3A:0C3C:0016:4F85
 */
void f__0C3A_0BF4_0017_6A02()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0C0B); emu_cs = 0x34CD; ovl__34CD(13);
	f__0C3A_0C0B_0028_CFFD();
}

/**
 * Decompiled function f__0C3A_0C0B_0028_CFFD()
 *
 * @name f__0C3A_0C0B_0028_CFFD
 * @implements 0C3A:0C0B:0028:CFFD ()
 *
 * Called From: 0C3A:0C0B:0017:6A02
 */
void f__0C3A_0C0B_0028_CFFD()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0xA);
	if (!emu_flags.zf) { f__0C3A_0C2C_0007_DB95(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movb(&emu_ax.h, 0x0);
	emu_andw(&emu_ax.x, 0x7);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__0C3A_0C33_0016_4F85(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	/* Unresolved jump */ emu_ip = 0x0C3E; emu_last_cs = 0x0C3A; emu_last_ip = 0x0C31; emu_last_length = 0x0028; emu_last_crc = 0xCFFD; emu_call();
}

/**
 * Decompiled function f__0C3A_0C2C_0007_DB95()
 *
 * @name f__0C3A_0C2C_0007_DB95
 * @implements 0C3A:0C2C:0007:DB95 ()
 *
 * Called From: 0C3A:0C0F:0028:CFFD
 */
void f__0C3A_0C2C_0007_DB95()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	f__0C3A_0C3E_000B_B878(); return;
}

/**
 * Decompiled function f__0C3A_0C33_0016_4F85()
 *
 * @name f__0C3A_0C33_0016_4F85
 * @implements 0C3A:0C33:0016:4F85 ()
 *
 * Called From: 0C3A:0C2A:0028:CFFD
 */
void f__0C3A_0C33_0016_4F85()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_0BF4_0017_6A02(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0C49; emu_last_cs = 0x0C3A; emu_last_ip = 0x0C42; emu_last_length = 0x0016; emu_last_crc = 0x4F85; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0C3A_0C56_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_0C36_0013_31B9()
 *
 * @name f__0C3A_0C36_0013_31B9
 * @implements 0C3A:0C36:0013:31B9 ()
 *
 * Called From: 0C3A:0BF2:0021:C4A1
 */
void f__0C3A_0C36_0013_31B9()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_0BF4_0017_6A02(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0C49; emu_last_cs = 0x0C3A; emu_last_ip = 0x0C42; emu_last_length = 0x0013; emu_last_crc = 0x31B9; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x0C56; emu_last_cs = 0x0C3A; emu_last_ip = 0x0C47; emu_last_length = 0x0013; emu_last_crc = 0x31B9; emu_call();
}

/**
 * Decompiled function f__0C3A_0C3E_000B_B878()
 *
 * @name f__0C3A_0C3E_000B_B878
 * @implements 0C3A:0C3E:000B:B878 ()
 *
 * Called From: 0C3A:0C31:0007:DB95
 */
void f__0C3A_0C3E_000B_B878()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__0C3A_0C49_000B_85B7(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x0C56; emu_last_cs = 0x0C3A; emu_last_ip = 0x0C47; emu_last_length = 0x000B; emu_last_crc = 0xB878; emu_call();
}

/**
 * Decompiled function f__0C3A_0C44_0005_D37A()
 *
 * @name f__0C3A_0C44_0005_D37A
 * @implements 0C3A:0C44:0005:D37A ()
 *
 * Called From: 0C3A:0C54:0002:B73A
 */
void f__0C3A_0C44_0005_D37A()
{
	emu_movw(&emu_ax.x, 0x1);
	f__0C3A_0C56_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_0C47_0002_C6BA()
 *
 * @name f__0C3A_0C47_0002_C6BA
 * @implements 0C3A:0C47:0002:C6BA ()
 *
 * Called From: 0C3A:0C52:000B:85B7
 */
void f__0C3A_0C47_0002_C6BA()
{
	f__0C3A_0C56_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_0C49_000B_85B7()
 *
 * @name f__0C3A_0C49_000B_85B7
 * @implements 0C3A:0C49:000B:85B7 ()
 *
 * Called From: 0C3A:0C42:000B:B878
 */
void f__0C3A_0C49_000B_85B7()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_0BD3_0021_C4A1(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C3A_0C47_0002_C6BA(); return;
}

/**
 * Decompiled function f__0C3A_0C4A_000A_45BF()
 *
 * @name f__0C3A_0C4A_000A_45BF
 * @implements 0C3A:0C4A:000A:45BF ()
 *
 * Called From: 0C3A:0BD1:0004:D579
 */
void f__0C3A_0C4A_000A_45BF()
{
	emu_cmpw(&emu_si, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_0BD3_0021_C4A1(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x0C47; emu_last_cs = 0x0C3A; emu_last_ip = 0x0C52; emu_last_length = 0x000A; emu_last_crc = 0x45BF; emu_call();
}

/**
 * Decompiled function f__0C3A_0C54_0002_B73A()
 *
 * @name f__0C3A_0C54_0002_B73A
 * @implements 0C3A:0C54:0002:B73A ()
 *
 * Called From: 0C3A:0BC4:0034:3B6D
 */
void f__0C3A_0C54_0002_B73A()
{
	f__0C3A_0C44_0005_D37A(); return;
}

/**
 * Decompiled function f__0C3A_0C56_0006_F7CE()
 *
 * @name f__0C3A_0C56_0006_F7CE
 * @implements 0C3A:0C56:0006:F7CE ()
 *
 * Called From: 0C3A:0C47:0002:C6BA
 * Called From: 0C3A:0C47:0005:D37A
 * Called From: 0C3A:0C47:0016:4F85
 */
void f__0C3A_0C56_0006_F7CE()
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
 * Decompiled function f__0C3A_0C5C_004D_2837()
 *
 * @name f__0C3A_0C5C_004D_2837
 * @implements 0C3A:0C5C:004D:2837 ()
 *
 * Called From: 0AEC:10FD:002B:C27D
 * Called From: 0C3A:033E:0017:3BFA
 * Called From: 0C3A:0514:000F:9479
 * Called From: 0F78:02F5:0011:CCF5
 */
void f__0C3A_0C5C_004D_2837()
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
	f__0C3A_0D4E_0008_7AA3(); return;
}

/**
 * Decompiled function f__0C3A_0CA9_0018_FD80()
 *
 * @name f__0C3A_0CA9_0018_FD80
 * @implements 0C3A:0CA9:0018:FD80 ()
 *
 * Called From: 0C3A:0D53:0008:7AA3
 * Called From: 0C3A:0D53:0009:FA80
 */
void f__0C3A_0CA9_0018_FD80()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0CC1); emu_cs = 0x34CD; ovl__34CD(13);
	f__0C3A_0CC1_0020_9673();
}

/**
 * Decompiled function f__0C3A_0CC1_0020_9673()
 *
 * @name f__0C3A_0CC1_0020_9673
 * @implements 0C3A:0CC1:0020:9673 ()
 *
 * Called From: 0C3A:0CC1:0018:FD80
 */
void f__0C3A_0CC1_0020_9673()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__0C3A_0CE3_0008_0909(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x3A4E), 0x0);
	if (!emu_flags.zf) { f__0C3A_0CE1_0002_EDBA(); return; }
	emu_xorw(&emu_si, emu_si);
	/* Unresolved jump */ emu_ip = 0x0D56; emu_last_cs = 0x0C3A; emu_last_ip = 0x0CDF; emu_last_length = 0x0020; emu_last_crc = 0x9673; emu_call();
}

/**
 * Decompiled function f__0C3A_0CDD_0004_D479()
 *
 * @name f__0C3A_0CDD_0004_D479
 * @implements 0C3A:0CDD:0004:D479 ()
 *
 * Called From: 0C3A:0CF0:0007:CF4F
 * Called From: 0C3A:0D15:0025:5E43
 * Called From: 0C3A:0D31:001A:F51B
 * Called From: 0C3A:0D4B:0007:E2DF
 */
void f__0C3A_0CDD_0004_D479()
{
	emu_xorw(&emu_si, emu_si);
	f__0C3A_0D56_000A_F202(); return;
}

/**
 * Decompiled function f__0C3A_0CE1_0002_EDBA()
 *
 * @name f__0C3A_0CE1_0002_EDBA
 * @implements 0C3A:0CE1:0002:EDBA ()
 *
 * Called From: 0C3A:0CDB:0020:9673
 */
void f__0C3A_0CE1_0002_EDBA()
{
	f__0C3A_0D3E_0008_7900(); return;
}

/**
 * Decompiled function f__0C3A_0CE3_0008_0909()
 *
 * @name f__0C3A_0CE3_0008_0909
 * @implements 0C3A:0CE3:0008:0909 ()
 *
 * Called From: 0C3A:0CCA:0020:9673
 */
void f__0C3A_0CE3_0008_0909()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0CEB); emu_cs = 0x34CD; ovl__34CD(11);
	f__0C3A_0CEB_0007_CF4F();
}

/**
 * Decompiled function f__0C3A_0CEB_0007_CF4F()
 *
 * @name f__0C3A_0CEB_0007_CF4F
 * @implements 0C3A:0CEB:0007:CF4F ()
 *
 * Called From: 0C3A:0CEB:0008:0909
 */
void f__0C3A_0CEB_0007_CF4F()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0C3A_0CF2_0025_5E43(); return; }
	f__0C3A_0CDD_0004_D479(); return;
}

/**
 * Decompiled function f__0C3A_0CF2_0025_5E43()
 *
 * @name f__0C3A_0CF2_0025_5E43
 * @implements 0C3A:0CF2:0025:5E43 ()
 *
 * Called From: 0C3A:0CEE:0007:CF4F
 */
void f__0C3A_0CF2_0025_5E43()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x8);
	if (emu_flags.zf) { f__0C3A_0D19_001A_F51B(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x3A4E), 0x0);
	if (!emu_flags.zf) { f__0C3A_0D17_0002_D2BA(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D17; emu_last_cs = 0x0C3A; emu_last_ip = 0x0D13; emu_last_length = 0x0025; emu_last_crc = 0x5E43; emu_call(); return; }
	f__0C3A_0CDD_0004_D479(); return;
}

/**
 * Decompiled function f__0C3A_0D17_0002_D2BA()
 *
 * @name f__0C3A_0D17_0002_D2BA
 * @implements 0C3A:0D17:0002:D2BA ()
 *
 * Called From: 0C3A:0D0C:0025:5E43
 */
void f__0C3A_0D17_0002_D2BA()
{
	f__0C3A_0D3E_0008_7900(); return;
}

/**
 * Decompiled function f__0C3A_0D19_001A_F51B()
 *
 * @name f__0C3A_0D19_001A_F51B
 * @implements 0C3A:0D19:001A:F51B ()
 *
 * Called From: 0C3A:0CFB:0025:5E43
 */
void f__0C3A_0D19_001A_F51B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x3A4A), 0x0);
	if (!emu_flags.zf) { f__0C3A_0D35_0011_8902(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D35; emu_last_cs = 0x0C3A; emu_last_ip = 0x0D2F; emu_last_length = 0x001A; emu_last_crc = 0xF51B; emu_call(); return; }
	f__0C3A_0CDD_0004_D479(); return;
}

/**
 * Decompiled function f__0C3A_0D35_0011_8902()
 *
 * @name f__0C3A_0D35_0011_8902
 * @implements 0C3A:0D35:0011:8902 ()
 *
 * Called From: 0C3A:0D28:001A:F51B
 */
void f__0C3A_0D35_0011_8902()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xA);
	if (emu_flags.zf) { f__0C3A_0D3E_0008_7900(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0D46); emu_cs = 0x34CD; ovl__34CD(32);
	f__0C3A_0D46_0007_E2DF();
}

/**
 * Decompiled function f__0C3A_0D3E_0008_7900()
 *
 * @name f__0C3A_0D3E_0008_7900
 * @implements 0C3A:0D3E:0008:7900 ()
 *
 * Called From: 0C3A:0CE1:0002:EDBA
 * Called From: 0C3A:0D17:0002:D2BA
 * Called From: 0C3A:0D39:0011:8902
 */
void f__0C3A_0D3E_0008_7900()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0D46); emu_cs = 0x34CD; ovl__34CD(32);
	f__0C3A_0D46_0007_E2DF();
}

/**
 * Decompiled function f__0C3A_0D46_0007_E2DF()
 *
 * @name f__0C3A_0D46_0007_E2DF
 * @implements 0C3A:0D46:0007:E2DF ()
 *
 * Called From: 0C3A:0D46:0008:7900
 * Called From: 0C3A:0D46:0011:8902
 */
void f__0C3A_0D46_0007_E2DF()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__0C3A_0D4D_0009_FA80(); return; }
	f__0C3A_0CDD_0004_D479(); return;
}

/**
 * Decompiled function f__0C3A_0D4D_0009_FA80()
 *
 * @name f__0C3A_0D4D_0009_FA80
 * @implements 0C3A:0D4D:0009:FA80 ()
 *
 * Called From: 0C3A:0D49:0007:E2DF
 */
void f__0C3A_0D4D_0009_FA80()
{
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_0D56_000A_F202(); return; }
	f__0C3A_0CA9_0018_FD80(); return;
}

/**
 * Decompiled function f__0C3A_0D4E_0008_7AA3()
 *
 * @name f__0C3A_0D4E_0008_7AA3
 * @implements 0C3A:0D4E:0008:7AA3 ()
 *
 * Called From: 0C3A:0CA6:004D:2837
 */
void f__0C3A_0D4E_0008_7AA3()
{
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D56; emu_last_cs = 0x0C3A; emu_last_ip = 0x0D51; emu_last_length = 0x0008; emu_last_crc = 0x7AA3; emu_call(); return; }
	f__0C3A_0CA9_0018_FD80(); return;
}

/**
 * Decompiled function f__0C3A_0D56_000A_F202()
 *
 * @name f__0C3A_0D56_000A_F202
 * @implements 0C3A:0D56:000A:F202 ()
 *
 * Called From: 0C3A:0CDF:0004:D479
 * Called From: 0C3A:0D51:0009:FA80
 */
void f__0C3A_0D56_000A_F202()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (emu_flags.zf) { f__0C3A_0D60_0007_76B6(); return; }
	f__0C3A_0E15_0011_01CC(); return;
}

/**
 * Decompiled function f__0C3A_0D60_0007_76B6()
 *
 * @name f__0C3A_0D60_0007_76B6
 * @implements 0C3A:0D60:0007:76B6 ()
 *
 * Called From: 0C3A:0D5B:000A:F202
 */
void f__0C3A_0D60_0007_76B6()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__0C3A_0D67_0009_B0F0(); return; }
	f__0C3A_0E15_0011_01CC(); return;
}

/**
 * Decompiled function f__0C3A_0D67_0009_B0F0()
 *
 * @name f__0C3A_0D67_0009_B0F0
 * @implements 0C3A:0D67:0009:B0F0 ()
 *
 * Called From: 0C3A:0D62:0007:76B6
 */
void f__0C3A_0D67_0009_B0F0()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x8);
	if (!emu_flags.zf) { f__0C3A_0D70_000A_6E17(); return; }
	/* Unresolved jump */ emu_ip = 0x0E15; emu_last_cs = 0x0C3A; emu_last_ip = 0x0D6D; emu_last_length = 0x0009; emu_last_crc = 0xB0F0; emu_call();
}

/**
 * Decompiled function f__0C3A_0D70_000A_6E17()
 *
 * @name f__0C3A_0D70_000A_6E17
 * @implements 0C3A:0D70:000A:6E17 ()
 *
 * Called From: 0C3A:0D6B:0009:B0F0
 */
void f__0C3A_0D70_000A_6E17()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__0C3A_0D7A_0007_34F1(); return; }
	/* Unresolved jump */ emu_ip = 0x0E15; emu_last_cs = 0x0C3A; emu_last_ip = 0x0D77; emu_last_length = 0x000A; emu_last_crc = 0x6E17; emu_call();
}

/**
 * Decompiled function f__0C3A_0D7A_0007_34F1()
 *
 * @name f__0C3A_0D7A_0007_34F1
 * @implements 0C3A:0D7A:0007:34F1 ()
 *
 * Called From: 0C3A:0D75:000A:6E17
 */
void f__0C3A_0D7A_0007_34F1()
{
	emu_xorw(&emu_si, emu_si);
	emu_xorw(&emu_di, emu_di);
	f__0C3A_0E0D_0008_93AD(); return;
}

/**
 * Decompiled function f__0C3A_0D81_0020_A84F()
 *
 * @name f__0C3A_0D81_0020_A84F
 * @implements 0C3A:0D81:0020:A84F ()
 *
 * Called From: 0C3A:0E12:0008:93AD
 * Called From: 0C3A:0E12:0009:138E
 */
void f__0C3A_0D81_0020_A84F()
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
	if (!emu_flags.zf) { f__0C3A_0DA1_0011_5F85(); return; }
	f__0C3A_0E15_0011_01CC(); return;
}

/**
 * Decompiled function f__0C3A_0DA1_0011_5F85()
 *
 * @name f__0C3A_0DA1_0011_5F85
 * @implements 0C3A:0DA1:0011:5F85 ()
 *
 * Called From: 0C3A:0D9D:0020:A84F
 */
void f__0C3A_0DA1_0011_5F85()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0DB2); emu_cs = 0x34CD; ovl__34CD(30);
	f__0C3A_0DB2_001F_4E36();
}

/**
 * Decompiled function f__0C3A_0DB2_001F_4E36()
 *
 * @name f__0C3A_0DB2_001F_4E36
 * @implements 0C3A:0DB2:001F:4E36 ()
 *
 * Called From: 0C3A:0DB2:0011:5F85
 */
void f__0C3A_0DB2_001F_4E36()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_flags.zf) { f__0C3A_0DD3_0008_690A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__0C3A_0DD1_0002_DCBA(); return; }
	f__0C3A_0E07_0005_D14A(); return;
}

/**
 * Decompiled function f__0C3A_0DD1_0002_DCBA()
 *
 * @name f__0C3A_0DD1_0002_DCBA
 * @implements 0C3A:0DD1:0002:DCBA ()
 *
 * Called From: 0C3A:0DCD:001F:4E36
 */
void f__0C3A_0DD1_0002_DCBA()
{
	f__0C3A_0E0C_0009_138E(); return;
}

/**
 * Decompiled function f__0C3A_0DD3_0008_690A()
 *
 * @name f__0C3A_0DD3_0008_690A
 * @implements 0C3A:0DD3:0008:690A ()
 *
 * Called From: 0C3A:0DBF:001F:4E36
 */
void f__0C3A_0DD3_0008_690A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0DDB); emu_cs = 0x34CD; ovl__34CD(13);
	f__0C3A_0DDB_0031_69EF();
}

/**
 * Decompiled function f__0C3A_0DDB_0031_69EF()
 *
 * @name f__0C3A_0DDB_0031_69EF
 * @implements 0C3A:0DDB:0031:69EF ()
 *
 * Called From: 0C3A:0DDB:0008:690A
 */
void f__0C3A_0DDB_0031_69EF()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xA);
	if (emu_flags.zf) { f__0C3A_0DEB_0021_51DA(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xB);
	if (!emu_flags.zf) { f__0C3A_0E0C_0009_138E(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movb(&emu_ax.h, 0x0);
	emu_andw(&emu_ax.x, 0x3);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E0C; emu_last_cs = 0x0C3A; emu_last_ip = 0x0E05; emu_last_length = 0x0031; emu_last_crc = 0x69EF; emu_call(); return; }
	emu_movw(&emu_si, 0x1);
	/* Unresolved jump */ emu_ip = 0x0E15; emu_last_cs = 0x0C3A; emu_last_ip = 0x0E0A; emu_last_length = 0x0031; emu_last_crc = 0x69EF; emu_call();
}

/**
 * Decompiled function f__0C3A_0DEB_0021_51DA()
 *
 * @name f__0C3A_0DEB_0021_51DA
 * @implements 0C3A:0DEB:0021:51DA ()
 *
 * Called From: 0C3A:0DE3:0031:69EF
 */
void f__0C3A_0DEB_0021_51DA()
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
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E0C; emu_last_cs = 0x0C3A; emu_last_ip = 0x0E05; emu_last_length = 0x0021; emu_last_crc = 0x51DA; emu_call(); return; }
	emu_movw(&emu_si, 0x1);
	f__0C3A_0E15_0011_01CC(); return;
}

/**
 * Decompiled function f__0C3A_0E07_0005_D14A()
 *
 * @name f__0C3A_0E07_0005_D14A
 * @implements 0C3A:0E07:0005:D14A ()
 *
 * Called From: 0C3A:0DCF:001F:4E36
 */
void f__0C3A_0E07_0005_D14A()
{
	emu_movw(&emu_si, 0x1);
	f__0C3A_0E15_0011_01CC(); return;
}

/**
 * Decompiled function f__0C3A_0E0C_0009_138E()
 *
 * @name f__0C3A_0E0C_0009_138E
 * @implements 0C3A:0E0C:0009:138E ()
 *
 * Called From: 0C3A:0DD1:0002:DCBA
 * Called From: 0C3A:0DE9:0031:69EF
 */
void f__0C3A_0E0C_0009_138E()
{
	emu_incw(&emu_di);
	emu_cmpws(&emu_di, 0x10);
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_0E15_0011_01CC(); return; }
	f__0C3A_0D81_0020_A84F(); return;
}

/**
 * Decompiled function f__0C3A_0E0D_0008_93AD()
 *
 * @name f__0C3A_0E0D_0008_93AD
 * @implements 0C3A:0E0D:0008:93AD ()
 *
 * Called From: 0C3A:0D7E:0007:34F1
 */
void f__0C3A_0E0D_0008_93AD()
{
	emu_cmpws(&emu_di, 0x10);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0E15; emu_last_cs = 0x0C3A; emu_last_ip = 0x0E10; emu_last_length = 0x0008; emu_last_crc = 0x93AD; emu_call(); return; }
	f__0C3A_0D81_0020_A84F(); return;
}

/**
 * Decompiled function f__0C3A_0E15_0011_01CC()
 *
 * @name f__0C3A_0E15_0011_01CC
 * @implements 0C3A:0E15:0011:01CC ()
 *
 * Called From: 0C3A:0D5D:000A:F202
 * Called From: 0C3A:0D64:0007:76B6
 * Called From: 0C3A:0D9F:0020:A84F
 * Called From: 0C3A:0E0A:0005:D14A
 * Called From: 0C3A:0E0A:0021:51DA
 * Called From: 0C3A:0E10:0009:138E
 */
void f__0C3A_0E15_0011_01CC()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__0C3A_0E2B_0004_9539(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { f__0C3A_0E26_0005_D7FA(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_negw(&emu_ax.x, emu_ax.x);
	f__0C3A_0E29_0002_C23A(); return;
}

/**
 * Decompiled function f__0C3A_0E26_0005_D7FA()
 *
 * @name f__0C3A_0E26_0005_D7FA
 * @implements 0C3A:0E26:0005:D7FA ()
 *
 * Called From: 0C3A:0E1D:0011:01CC
 */
void f__0C3A_0E26_0005_D7FA()
{
	emu_movw(&emu_ax.x, 0x1);
	f__0C3A_0E2F_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_0E29_0002_C23A()
 *
 * @name f__0C3A_0E29_0002_C23A
 * @implements 0C3A:0E29:0002:C23A ()
 *
 * Called From: 0C3A:0E24:0011:01CC
 * Called From: 0C3A:0E2D:0004:9539
 */
void f__0C3A_0E29_0002_C23A()
{
	f__0C3A_0E2F_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_0E2B_0004_9539()
 *
 * @name f__0C3A_0E2B_0004_9539
 * @implements 0C3A:0E2B:0004:9539 ()
 *
 * Called From: 0C3A:0E17:0011:01CC
 */
void f__0C3A_0E2B_0004_9539()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C3A_0E29_0002_C23A(); return;
}

/**
 * Decompiled function f__0C3A_0E2F_0006_F7CE()
 *
 * @name f__0C3A_0E2F_0006_F7CE
 * @implements 0C3A:0E2F:0006:F7CE ()
 *
 * Called From: 0C3A:0E29:0005:D7FA
 * Called From: 0C3A:0E29:0002:C23A
 */
void f__0C3A_0E2F_0006_F7CE()
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
 * Decompiled function f__0C3A_0E35_0013_A551()
 *
 * @name f__0C3A_0E35_0013_A551
 * @implements 0C3A:0E35:0013:A551 ()
 *
 * Called From: 0C3A:0EE6:0007:C8A0
 * Called From: 0C3A:12E5:000A:2EA7
 */
void f__0C3A_0E35_0013_A551()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_0E48_0012_F3DE(); return; }
	/* Unresolved jump */ emu_ip = 0x0FFC; emu_last_cs = 0x0C3A; emu_last_ip = 0x0E45; emu_last_length = 0x0013; emu_last_crc = 0xA551; emu_call();
}

/**
 * Decompiled function f__0C3A_0E48_0012_F3DE()
 *
 * @name f__0C3A_0E48_0012_F3DE
 * @implements 0C3A:0E48:0012:F3DE ()
 *
 * Called From: 0C3A:0E43:0013:A551
 */
void f__0C3A_0E48_0012_F3DE()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__0C3A_0E5F_002F_78FA(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0E5A); emu_ip = 0x1002; emu_last_cs = 0x0C3A; emu_last_ip = 0x0E57; emu_last_length = 0x0012; emu_last_crc = 0xF3DE; emu_call();
	/* Unresolved jump */ emu_ip = 0x0E5A; emu_last_cs = 0x0C3A; emu_last_ip = 0x0E5A; emu_last_length = 0x0012; emu_last_crc = 0xF3DE; emu_call();
}

/**
 * Decompiled function f__0C3A_0E5F_002F_78FA()
 *
 * @name f__0C3A_0E5F_002F_78FA
 * @implements 0C3A:0E5F:002F:78FA ()
 *
 * Called From: 0C3A:0E4D:0012:F3DE
 */
void f__0C3A_0E5F_002F_78FA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1E), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xDFFD);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x0);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3918);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E8E); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	f__0C3A_0E8E_001B_2708();
}

/**
 * Decompiled function f__0C3A_0E8E_001B_2708()
 *
 * @name f__0C3A_0E8E_001B_2708
 * @implements 0C3A:0E8E:001B:2708 ()
 *
 * Called From: 0C3A:0E8E:002F:78FA
 */
void f__0C3A_0E8E_001B_2708()
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
	emu_push(emu_cs); emu_push(0x0EA9); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
	f__0C3A_0EA9_0017_48E7();
}

/**
 * Decompiled function f__0C3A_0EA9_0017_48E7()
 *
 * @name f__0C3A_0EA9_0017_48E7
 * @implements 0C3A:0EA9:0017:48E7 ()
 *
 * Called From: 0C3A:0EA9:001B:2708
 */
void f__0C3A_0EA9_0017_48E7()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_ax.x, 0x2C);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0EC0); emu_cs = 0x3483; ovl__3483(0);
	f__0C3A_0EC0_0022_A2EF();
}

/**
 * Decompiled function f__0C3A_0EC0_0022_A2EF()
 *
 * @name f__0C3A_0EC0_0022_A2EF
 * @implements 0C3A:0EC0:0022:A2EF ()
 *
 * Called From: 0C3A:0EC0:0017:48E7
 */
void f__0C3A_0EC0_0022_A2EF()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__0C3A_0F24_000E_E431(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EF5; emu_last_cs = 0x0C3A; emu_last_ip = 0x0EDA; emu_last_length = 0x0022; emu_last_crc = 0xA2EF; emu_call(); return; }
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0EE2); emu_cs = 0x1082; emu_Building_Get_ByIndex();
	f__0C3A_0EE2_0007_C8A0();
}

/**
 * Decompiled function f__0C3A_0EE2_0007_C8A0()
 *
 * @name f__0C3A_0EE2_0007_C8A0
 * @implements 0C3A:0EE2:0007:C8A0 ()
 *
 * Called From: 0C3A:0EE2:0022:A2EF
 */
void f__0C3A_0EE2_0007_C8A0()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0EE9); f__0C3A_0E35_0013_A551();
	f__0C3A_0EE9_000C_F099();
}

/**
 * Decompiled function f__0C3A_0EE9_000C_F099()
 *
 * @name f__0C3A_0EE9_000C_F099
 * @implements 0C3A:0EE9:000C:F099 ()
 *
 * Called From: 0C3A:0EE9:0007:C8A0
 */
void f__0C3A_0EE9_000C_F099()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	f__0C3A_0F24_000E_E431(); return;
}

/**
 * Decompiled function f__0C3A_0F24_000E_E431()
 *
 * @name f__0C3A_0F24_000E_E431
 * @implements 0C3A:0F24:000E:E431 ()
 *
 * Called From: 0C3A:0ED0:0022:A2EF
 * Called From: 0C3A:0EF3:000C:F099
 */
void f__0C3A_0F24_000E_E431()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F32); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__0C3A_0F32_001A_0CFD();
}

/**
 * Decompiled function f__0C3A_0F32_001A_0CFD()
 *
 * @name f__0C3A_0F32_001A_0CFD
 * @implements 0C3A:0F32:001A:0CFD ()
 *
 * Called From: 0C3A:0F32:000E:E431
 */
void f__0C3A_0F32_001A_0CFD()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_push(emu_cs); emu_push(0x0F4C); emu_cs = 0x34C1; ovl__34C1(2);
	f__0C3A_0F4C_0023_AAA0();
}

/**
 * Decompiled function f__0C3A_0F4C_0023_AAA0()
 *
 * @name f__0C3A_0F4C_0023_AAA0
 * @implements 0C3A:0F4C:0023:AAA0 ()
 *
 * Called From: 0C3A:0F4C:001A:0CFD
 */
void f__0C3A_0F4C_0023_AAA0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x40));
	emu_push(emu_cs); emu_push(0x0F6F); emu_cs = 0x34C1; ovl__34C1(0);
	f__0C3A_0F6F_0011_D10A();
}

/**
 * Decompiled function f__0C3A_0F6F_0011_D10A()
 *
 * @name f__0C3A_0F6F_0011_D10A
 * @implements 0C3A:0F6F:0011:D10A ()
 *
 * Called From: 0C3A:0F6F:0023:AAA0
 */
void f__0C3A_0F6F_0011_D10A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { f__0C3A_0F80_0052_C8F5(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__0C3A_0F87_004B_9036(); return;
}

/**
 * Decompiled function f__0C3A_0F80_0052_C8F5()
 *
 * @name f__0C3A_0F80_0052_C8F5
 * @implements 0C3A:0F80:0052:C8F5 ()
 *
 * Called From: 0C3A:0F7A:0011:D10A
 */
void f__0C3A_0F80_0052_C8F5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__0C3A_0FDB_0018_9CA0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x7);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0FC4; emu_last_cs = 0x0C3A; emu_last_ip = 0x0FBC; emu_last_length = 0x0052; emu_last_crc = 0xC8F5; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_sarw(&emu_ax.x, 0x1);
	emu_addw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0FD2); emu_cs = 0x10BE; emu_ip = 0x01AB; emu_last_cs = 0x0C3A; emu_last_ip = 0x0FCD; emu_last_length = 0x0052; emu_last_crc = 0xC8F5; emu_call();
	/* Unresolved jump */ emu_ip = 0x0FD2; emu_last_cs = 0x0C3A; emu_last_ip = 0x0FD2; emu_last_length = 0x0052; emu_last_crc = 0xC8F5; emu_call();
}

/**
 * Decompiled function f__0C3A_0F87_004B_9036()
 *
 * @name f__0C3A_0F87_004B_9036
 * @implements 0C3A:0F87:004B:9036 ()
 *
 * Called From: 0C3A:0F7E:0011:D10A
 */
void f__0C3A_0F87_004B_9036()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__0C3A_0FDB_0018_9CA0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x7);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0FC4; emu_last_cs = 0x0C3A; emu_last_ip = 0x0FBC; emu_last_length = 0x004B; emu_last_crc = 0x9036; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_sarw(&emu_ax.x, 0x1);
	emu_addw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0FD2); emu_cs = 0x10BE; emu_ip = 0x01AB; emu_last_cs = 0x0C3A; emu_last_ip = 0x0FCD; emu_last_length = 0x004B; emu_last_crc = 0x9036; emu_call();
	/* Unresolved jump */ emu_ip = 0x0FD2; emu_last_cs = 0x0C3A; emu_last_ip = 0x0FD2; emu_last_length = 0x004B; emu_last_crc = 0x9036; emu_call();
}

/**
 * Decompiled function f__0C3A_0FDB_0018_9CA0()
 *
 * @name f__0C3A_0FDB_0018_9CA0
 * @implements 0C3A:0FDB:0018:9CA0 ()
 *
 * Called From: 0C3A:0F9C:004B:9036
 * Called From: 0C3A:0F9C:0052:C8F5
 */
void f__0C3A_0FDB_0018_9CA0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x9);
	if (!emu_flags.zf) { f__0C3A_0FFC_0006_F7CE(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0FF3); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__0C3A_0FF3_000F_09D7();
}

/**
 * Decompiled function f__0C3A_0FF3_000F_09D7()
 *
 * @name f__0C3A_0FF3_000F_09D7
 * @implements 0C3A:0FF3:000F:09D7 ()
 *
 * Called From: 0C3A:0FF3:0018:9CA0
 */
void f__0C3A_0FF3_000F_09D7()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x1A));
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
 * Decompiled function f__0C3A_0FFC_0006_F7CE()
 *
 * @name f__0C3A_0FFC_0006_F7CE
 * @implements 0C3A:0FFC:0006:F7CE ()
 *
 * Called From: 0C3A:0FE3:0018:9CA0
 */
void f__0C3A_0FFC_0006_F7CE()
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
 * Decompiled function f__0C3A_1002_0013_651A()
 *
 * @name f__0C3A_1002_0013_651A
 * @implements 0C3A:1002:0013:651A ()
 *
 * Called From: 0972:15C8:0012:FF55
 */
void f__0C3A_1002_0013_651A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_1015_0010_1489(); return; }
	/* Unresolved jump */ emu_ip = 0x1210; emu_last_cs = 0x0C3A; emu_last_ip = 0x1012; emu_last_length = 0x0013; emu_last_crc = 0x651A; emu_call();
}

/**
 * Decompiled function f__0C3A_1015_0010_1489()
 *
 * @name f__0C3A_1015_0010_1489
 * @implements 0C3A:1015:0010:1489 ()
 *
 * Called From: 0C3A:1010:0013:651A
 */
void f__0C3A_1015_0010_1489()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1025); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__0C3A_1025_0041_AB17();
}

/**
 * Decompiled function f__0C3A_1025_0041_AB17()
 *
 * @name f__0C3A_1025_0041_AB17
 * @implements 0C3A:1025:0041:AB17 ()
 *
 * Called From: 0C3A:1025:0010:1489
 */
void f__0C3A_1025_0041_AB17()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
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
	emu_xorw(&emu_si, emu_si);
	f__0C3A_10CE_003F_9924(); return;
}

/**
 * Decompiled function f__0C3A_1066_0015_2CC3()
 *
 * @name f__0C3A_1066_0015_2CC3
 * @implements 0C3A:1066:0015:2CC3 ()
 *
 * Called From: 0C3A:10DB:003F:9924
 * Called From: 0C3A:10DB:0040:9962
 */
void f__0C3A_1066_0015_2CC3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_di, emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x107B); emu_cs = 0x151A; f__151A_0114_0022_0B6C();
	f__0C3A_107B_0092_3D1E();
}

/**
 * Decompiled function f__0C3A_107B_0092_3D1E()
 *
 * @name f__0C3A_107B_0092_3D1E
 * @implements 0C3A:107B:0092:3D1E ()
 *
 * Called From: 0C3A:107B:0015:2CC3
 */
void f__0C3A_107B_0092_3D1E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xDF);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__0C3A_10CD_0040_9962(); return; }
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x323F));
	emu_andw(&emu_ax.x, 0x7FFF);
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_dx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), 0x1);
	emu_incw(&emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2D52), emu_si);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1066; emu_last_cs = 0x0C3A; emu_last_ip = 0x10DB; emu_last_length = 0x0092; emu_last_crc = 0x3D1E; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1110; emu_last_cs = 0x0C3A; emu_last_ip = 0x10E2; emu_last_length = 0x0092; emu_last_crc = 0x3D1E; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x3C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_ax.x, 0x2C6F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x0);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x110D); emu_cs = 0x151A; emu_ip = 0x000E; emu_last_cs = 0x0C3A; emu_last_ip = 0x1108; emu_last_length = 0x0092; emu_last_crc = 0x3D1E; emu_call();
	f__0C3A_110D_0011_B975();
}

/**
 * Decompiled function f__0C3A_10CD_0040_9962()
 *
 * @name f__0C3A_10CD_0040_9962
 * @implements 0C3A:10CD:0040:9962 ()
 *
 * Called From: 0C3A:1092:0092:3D1E
 */
void f__0C3A_10CD_0040_9962()
{
	emu_incw(&emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2D52), emu_si);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0C3A_1066_0015_2CC3(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1110; emu_last_cs = 0x0C3A; emu_last_ip = 0x10E2; emu_last_length = 0x0040; emu_last_crc = 0x9962; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x3C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_ax.x, 0x2C6F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x110D); emu_cs = 0x151A; f__151A_000E_0013_5840();
	f__0C3A_110D_0011_B975();
}

/**
 * Decompiled function f__0C3A_10CE_003F_9924()
 *
 * @name f__0C3A_10CE_003F_9924
 * @implements 0C3A:10CE:003F:9924 ()
 *
 * Called From: 0C3A:1064:0041:AB17
 */
void f__0C3A_10CE_003F_9924()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2D52), emu_si);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0C3A_1066_0015_2CC3(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1110; emu_last_cs = 0x0C3A; emu_last_ip = 0x10E2; emu_last_length = 0x003F; emu_last_crc = 0x9924; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x3C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_ax.x, 0x2C6F);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x0);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x110D); emu_cs = 0x151A; emu_ip = 0x000E; emu_last_cs = 0x0C3A; emu_last_ip = 0x1108; emu_last_length = 0x003F; emu_last_crc = 0x9924; emu_call();
	f__0C3A_110D_0011_B975();
}

/**
 * Decompiled function f__0C3A_110D_0011_B975()
 *
 * @name f__0C3A_110D_0011_B975
 * @implements 0C3A:110D:0011:B975 ()
 *
 * Called From: 0C3A:110D:0040:9962
 */
void f__0C3A_110D_0011_B975()
{
	emu_addws(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x111E); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__0C3A_111E_000B_268A();
}

/**
 * Decompiled function f__0C3A_111E_000B_268A()
 *
 * @name f__0C3A_111E_000B_268A
 * @implements 0C3A:111E:000B:268A ()
 *
 * Called From: 0C3A:111E:0011:B975
 */
void f__0C3A_111E_000B_268A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__0C3A_1176_0010_D090(); return;
}

/**
 * Decompiled function f__0C3A_1129_0039_970B()
 *
 * @name f__0C3A_1129_0039_970B
 * @implements 0C3A:1129:0039:970B ()
 *
 * Called From: 0C3A:1179:0010:D090
 * Called From: 0C3A:1179:0011:F390
 */
void f__0C3A_1129_0039_970B()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x0);
	if (!emu_flags.zf) { f__0C3A_1175_0011_F390(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1162); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__0C3A_1162_0013_466D();
}

/**
 * Decompiled function f__0C3A_1162_0013_466D()
 *
 * @name f__0C3A_1162_0013_466D
 * @implements 0C3A:1162:0013:466D ()
 *
 * Called From: 0C3A:1162:0039:970B
 */
void f__0C3A_1162_0013_466D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x30), emu_ax.x);
	f__0C3A_117B_000B_C6E5(); return;
}

/**
 * Decompiled function f__0C3A_1175_0011_F390()
 *
 * @name f__0C3A_1175_0011_F390
 * @implements 0C3A:1175:0011:F390 ()
 *
 * Called From: 0C3A:1139:0039:970B
 */
void f__0C3A_1175_0011_F390()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_1129_0039_970B(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1186); emu_cs = 0x1082; emu_ip = 0x0325; emu_last_cs = 0x0C3A; emu_last_ip = 0x1181; emu_last_length = 0x0011; emu_last_crc = 0xF390; emu_call();
	f__0C3A_1186_000D_A5C0();
}

/**
 * Decompiled function f__0C3A_1176_0010_D090()
 *
 * @name f__0C3A_1176_0010_D090
 * @implements 0C3A:1176:0010:D090 ()
 *
 * Called From: 0C3A:1127:000B:268A
 */
void f__0C3A_1176_0010_D090()
{
	emu_cmpws(&emu_si, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_1129_0039_970B(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1186); emu_cs = 0x1082; emu_ip = 0x0325; emu_last_cs = 0x0C3A; emu_last_ip = 0x1181; emu_last_length = 0x0010; emu_last_crc = 0xD090; emu_call();
	f__0C3A_1186_000D_A5C0();
}

/**
 * Decompiled function f__0C3A_117B_000B_C6E5()
 *
 * @name f__0C3A_117B_000B_C6E5
 * @implements 0C3A:117B:000B:C6E5 ()
 *
 * Called From: 0C3A:1173:0013:466D
 */
void f__0C3A_117B_000B_C6E5()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1186); emu_cs = 0x1082; emu_Memory_Building_Free();
	f__0C3A_1186_000D_A5C0();
}

/**
 * Decompiled function f__0C3A_1186_000D_A5C0()
 *
 * @name f__0C3A_1186_000D_A5C0
 * @implements 0C3A:1186:000D:A5C0 ()
 *
 * Called From: 0C3A:1186:000B:C6E5
 */
void f__0C3A_1186_000D_A5C0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1193); f__0C3A_2929_0012_B10B();
	f__0C3A_1193_0010_123B();
}

/**
 * Decompiled function f__0C3A_1193_0010_123B()
 *
 * @name f__0C3A_1193_0010_123B
 * @implements 0C3A:1193:0010:123B ()
 *
 * Called From: 0C3A:1193:000D:A5C0
 */
void f__0C3A_1193_0010_123B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x11A3); f__0C3A_13BD_0022_D6F0();
	f__0C3A_11A3_0011_6CE1();
}

/**
 * Decompiled function f__0C3A_11A3_0011_6CE1()
 *
 * @name f__0C3A_11A3_0011_6CE1
 * @implements 0C3A:11A3:0011:6CE1 ()
 *
 * Called From: 0C3A:11A3:0010:123B
 */
void f__0C3A_11A3_0011_6CE1()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x11B4); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__0C3A_11B4_001D_6961();
}

/**
 * Decompiled function f__0C3A_11B4_001D_6961()
 *
 * @name f__0C3A_11B4_001D_6961
 * @implements 0C3A:11B4:001D:6961 ()
 *
 * Called From: 0C3A:11B4:0011:6CE1
 */
void f__0C3A_11B4_001D_6961()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x11D1); emu_cs = 0x1423; f__1423_0DC3_0029_D1E2();
	f__0C3A_11D1_001C_E0EE();
}

/**
 * Decompiled function f__0C3A_11D1_001C_E0EE()
 *
 * @name f__0C3A_11D1_001C_E0EE
 * @implements 0C3A:11D1:001C:E0EE ()
 *
 * Called From: 0C3A:11D1:001D:6961
 */
void f__0C3A_11D1_001C_E0EE()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1210; emu_last_cs = 0x0C3A; emu_last_ip = 0x11D7; emu_last_length = 0x001C; emu_last_crc = 0xE0EE; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, 0x9);
	if (emu_flags.zf) { f__0C3A_11ED_000E_67F9(); return; }
	emu_cmpw(&emu_ax.x, 0x12);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x11FE; emu_last_cs = 0x0C3A; emu_last_ip = 0x11E9; emu_last_length = 0x001C; emu_last_crc = 0xE0EE; emu_call(); return; }
	f__0C3A_120E_0002_C03A(); return;
}

/**
 * Decompiled function f__0C3A_11ED_000E_67F9()
 *
 * @name f__0C3A_11ED_000E_67F9
 * @implements 0C3A:11ED:000E:67F9 ()
 *
 * Called From: 0C3A:11E4:001C:E0EE
 */
void f__0C3A_11ED_000E_67F9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x11FB); f__0C3A_1F70_0010_8DB3();
	f__0C3A_11FB_0003_C21A();
}

/**
 * Decompiled function f__0C3A_11FB_0003_C21A()
 *
 * @name f__0C3A_11FB_0003_C21A
 * @implements 0C3A:11FB:0003:C21A ()
 *
 * Called From: 0C3A:11FB:000E:67F9
 */
void f__0C3A_11FB_0003_C21A()
{
	emu_pop(&emu_cx.x);
	f__0C3A_1210_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_120E_0002_C03A()
 *
 * @name f__0C3A_120E_0002_C03A
 * @implements 0C3A:120E:0002:C03A ()
 *
 * Called From: 0C3A:11EB:001C:E0EE
 */
void f__0C3A_120E_0002_C03A()
{
	f__0C3A_1210_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_1210_0006_F7CE()
 *
 * @name f__0C3A_1210_0006_F7CE
 * @implements 0C3A:1210:0006:F7CE ()
 *
 * Called From: 0C3A:11FC:0003:C21A
 * Called From: 0C3A:120E:0002:C03A
 */
void f__0C3A_1210_0006_F7CE()
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
 * Decompiled function f__0C3A_1216_0013_E56D()
 *
 * @name f__0C3A_1216_0013_E56D
 * @implements 0C3A:1216:0013:E56D ()
 *
 * Called From: 06F7:0372:0010:92A7
 * Called From: 0972:023A:005A:6804
 * Called From: 0C3A:21DD:003B:F488
 * Called From: 0C3A:21DD:0032:57F2
 * Called From: 1A34:2F76:0012:F102
 */
void f__0C3A_1216_0013_E56D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_1229_0009_D04A(); return; }
	/* Unresolved jump */ emu_ip = 0x138E; emu_last_cs = 0x0C3A; emu_last_ip = 0x1226; emu_last_length = 0x0013; emu_last_crc = 0xE56D; emu_call();
}

/**
 * Decompiled function f__0C3A_1229_0009_D04A()
 *
 * @name f__0C3A_1229_0009_D04A
 * @implements 0C3A:1229:0009:D04A ()
 *
 * Called From: 0C3A:1224:0013:E56D
 */
void f__0C3A_1229_0009_D04A()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__0C3A_1232_000D_F900(); return; }
	/* Unresolved jump */ emu_ip = 0x138E; emu_last_cs = 0x0C3A; emu_last_ip = 0x122F; emu_last_length = 0x0009; emu_last_crc = 0xD04A; emu_call();
}

/**
 * Decompiled function f__0C3A_1232_000D_F900()
 *
 * @name f__0C3A_1232_000D_F900
 * @implements 0C3A:1232:000D:F900 ()
 *
 * Called From: 0C3A:122D:0009:D04A
 */
void f__0C3A_1232_000D_F900()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x1E), 0x1);
	if (!emu_flags.zf) { f__0C3A_123F_0030_4F84(); return; }
	/* Unresolved jump */ emu_ip = 0x138E; emu_last_cs = 0x0C3A; emu_last_ip = 0x123C; emu_last_length = 0x000D; emu_last_crc = 0xF900; emu_call();
}

/**
 * Decompiled function f__0C3A_123F_0030_4F84()
 *
 * @name f__0C3A_123F_0030_4F84
 * @implements 0C3A:123F:0030:4F84 ()
 *
 * Called From: 0C3A:123A:000D:F900
 */
void f__0C3A_123F_0030_4F84()
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
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_126F_0016_E805(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	f__0C3A_1278_000D_7D89(); return;
}

/**
 * Decompiled function f__0C3A_126F_0016_E805()
 *
 * @name f__0C3A_126F_0016_E805
 * @implements 0C3A:126F:0016:E805 ()
 *
 * Called From: 0C3A:1261:0030:4F84
 */
void f__0C3A_126F_0016_E805()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x0);
	if (emu_flags.zf) { f__0C3A_1285_002A_34D0(); return; }
	/* Unresolved jump */ emu_ip = 0x134E; emu_last_cs = 0x0C3A; emu_last_ip = 0x1282; emu_last_length = 0x0016; emu_last_crc = 0xE805; emu_call();
}

/**
 * Decompiled function f__0C3A_1278_000D_7D89()
 *
 * @name f__0C3A_1278_000D_7D89
 * @implements 0C3A:1278:000D:7D89 ()
 *
 * Called From: 0C3A:126D:0030:4F84
 */
void f__0C3A_1278_000D_7D89()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x0);
	if (emu_flags.zf) { f__0C3A_1285_002A_34D0(); return; }
	f__0C3A_134E_002F_8FCE(); return;
}

/**
 * Decompiled function f__0C3A_1285_002A_34D0()
 *
 * @name f__0C3A_1285_002A_34D0
 * @implements 0C3A:1285:002A:34D0 ()
 *
 * Called From: 0C3A:1280:000D:7D89
 * Called From: 0C3A:1280:0016:E805
 */
void f__0C3A_1285_002A_34D0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_movw(&emu_bx.x, 0x64);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x12AF; emu_last_cs = 0x0C3A; emu_last_ip = 0x12A9; emu_last_length = 0x002A; emu_last_crc = 0x34D0; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__0C3A_12B2_0014_56D0(); return;
}

/**
 * Decompiled function f__0C3A_12B2_0014_56D0()
 *
 * @name f__0C3A_12B2_0014_56D0
 * @implements 0C3A:12B2:0014:56D0 ()
 *
 * Called From: 0C3A:12AD:002A:34D0
 */
void f__0C3A_12B2_0014_56D0()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12C6); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	f__0C3A_12C6_0010_70EE();
}

/**
 * Decompiled function f__0C3A_12C6_0010_70EE()
 *
 * @name f__0C3A_12C6_0010_70EE
 * @implements 0C3A:12C6:0010:70EE ()
 *
 * Called From: 0C3A:12C6:0014:56D0
 */
void f__0C3A_12C6_0010_70EE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x12D6; emu_last_cs = 0x0C3A; emu_last_ip = 0x12CA; emu_last_length = 0x0010; emu_last_crc = 0x70EE; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x8D3B));
	emu_subw(&emu_get_memory16(emu_ds, 0x00,  0x8CFF), emu_si);
	f__0C3A_12DE_000A_2EA7(); return;
}

/**
 * Decompiled function f__0C3A_12DE_000A_2EA7()
 *
 * @name f__0C3A_12DE_000A_2EA7
 * @implements 0C3A:12DE:000A:2EA7 ()
 *
 * Called From: 0C3A:12D4:0010:70EE
 */
void f__0C3A_12DE_000A_2EA7()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x12E8); f__0C3A_0E35_0013_A551();
	f__0C3A_12E8_002B_6503();
}

/**
 * Decompiled function f__0C3A_12E8_002B_6503()
 *
 * @name f__0C3A_12E8_002B_6503
 * @implements 0C3A:12E8:002B:6503 ()
 *
 * Called From: 0C3A:12E8:000A:2EA7
 */
void f__0C3A_12E8_002B_6503()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1330; emu_last_cs = 0x0C3A; emu_last_ip = 0x12F6; emu_last_length = 0x002B; emu_last_crc = 0x6503; emu_call(); return; }
	emu_movw(&emu_di, 0xFFFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0C3A_1313_0005_A243(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__0C3A_1318_0005_B0C3(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__0C3A_131D_0005_4743(); return; }
	/* Unresolved jump */ emu_ip = 0x1322; emu_last_cs = 0x0C3A; emu_last_ip = 0x1311; emu_last_length = 0x002B; emu_last_crc = 0x6503; emu_call();
}

/**
 * Decompiled function f__0C3A_1313_0005_A243()
 *
 * @name f__0C3A_1313_0005_A243
 * @implements 0C3A:1313:0005:A243 ()
 *
 * Called From: 0C3A:1305:002B:6503
 */
void f__0C3A_1313_0005_A243()
{
	emu_movw(&emu_di, 0x16);
	f__0C3A_1327_0006_22F3(); return;
}

/**
 * Decompiled function f__0C3A_1318_0005_B0C3()
 *
 * @name f__0C3A_1318_0005_B0C3
 * @implements 0C3A:1318:0005:B0C3 ()
 *
 * Called From: 0C3A:130A:002B:6503
 */
void f__0C3A_1318_0005_B0C3()
{
	emu_movw(&emu_di, 0x17);
	f__0C3A_1327_0006_22F3(); return;
}

/**
 * Decompiled function f__0C3A_131D_0005_4743()
 *
 * @name f__0C3A_131D_0005_4743
 * @implements 0C3A:131D:0005:4743 ()
 *
 * Called From: 0C3A:130F:002B:6503
 */
void f__0C3A_131D_0005_4743()
{
	emu_movw(&emu_di, 0x18);
	f__0C3A_1327_0006_22F3(); return;
}

/**
 * Decompiled function f__0C3A_1327_0006_22F3()
 *
 * @name f__0C3A_1327_0006_22F3
 * @implements 0C3A:1327:0006:22F3 ()
 *
 * Called From: 0C3A:1316:0005:A243
 * Called From: 0C3A:131B:0005:B0C3
 * Called From: 0C3A:1320:0005:4743
 */
void f__0C3A_1327_0006_22F3()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x132D); emu_cs = 0x3483; ovl__3483(2);
	f__0C3A_132D_0003_CE1A();
}

/**
 * Decompiled function f__0C3A_132D_0003_CE1A()
 *
 * @name f__0C3A_132D_0003_CE1A
 * @implements 0C3A:132D:0003:CE1A ()
 *
 * Called From: 0C3A:132D:0006:22F3
 */
void f__0C3A_132D_0003_CE1A()
{
	emu_pop(&emu_cx.x);
	f__0C3A_133A_000B_E94E(); return;
}

/**
 * Decompiled function f__0C3A_133A_000B_E94E()
 *
 * @name f__0C3A_133A_000B_E94E
 * @implements 0C3A:133A:000B:E94E ()
 *
 * Called From: 0C3A:132E:0003:CE1A
 */
void f__0C3A_133A_000B_E94E()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1345); f__0C3A_2929_0012_B10B();
	f__0C3A_1345_0007_9249();
}

/**
 * Decompiled function f__0C3A_1345_0007_9249()
 *
 * @name f__0C3A_1345_0007_9249
 * @implements 0C3A:1345:0007:9249 ()
 *
 * Called From: 0C3A:1345:000B:E94E
 */
void f__0C3A_1345_0007_9249()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__0C3A_1392_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_134A_0002_E33A()
 *
 * @name f__0C3A_134A_0002_E33A
 * @implements 0C3A:134A:0002:E33A ()
 *
 * Called From: 0C3A:1390:0004:B439
 * Called From: 0C3A:1390:0007:A56C
 */
void f__0C3A_134A_0002_E33A()
{
	f__0C3A_1392_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_134E_002F_8FCE()
 *
 * @name f__0C3A_134E_002F_8FCE
 * @implements 0C3A:134E:002F:8FCE ()
 *
 * Called From: 0C3A:1282:000D:7D89
 */
void f__0C3A_134E_002F_8FCE()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { f__0C3A_138E_0004_B439(); return; }
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
	emu_push(emu_cs); emu_push(0x137D); emu_cs = 0x0F3F; f__0F3F_00F3_0011_5E67();
	f__0C3A_137D_000E_7330();
}

/**
 * Decompiled function f__0C3A_137D_000E_7330()
 *
 * @name f__0C3A_137D_000E_7330
 * @implements 0C3A:137D:000E:7330 ()
 *
 * Called From: 0C3A:137D:002F:8FCE
 */
void f__0C3A_137D_000E_7330()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x138B); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
	f__0C3A_138B_0007_A56C();
}

/**
 * Decompiled function f__0C3A_138B_0007_A56C()
 *
 * @name f__0C3A_138B_0007_A56C
 * @implements 0C3A:138B:0007:A56C ()
 *
 * Called From: 0C3A:138B:000E:7330
 */
void f__0C3A_138B_0007_A56C()
{
	emu_addws(&emu_sp, 0xA);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C3A_134A_0002_E33A(); return;
}

/**
 * Decompiled function f__0C3A_138E_0004_B439()
 *
 * @name f__0C3A_138E_0004_B439
 * @implements 0C3A:138E:0004:B439 ()
 *
 * Called From: 0C3A:1352:002F:8FCE
 */
void f__0C3A_138E_0004_B439()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C3A_134A_0002_E33A(); return;
}

/**
 * Decompiled function f__0C3A_1392_0006_F7CE()
 *
 * @name f__0C3A_1392_0006_F7CE
 * @implements 0C3A:1392:0006:F7CE ()
 *
 * Called From: 0C3A:134A:0002:E33A
 * Called From: 0C3A:134A:0007:9249
 */
void f__0C3A_1392_0006_F7CE()
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
 * Decompiled function f__0C3A_1398_000D_8766()
 *
 * @name f__0C3A_1398_000D_8766
 * @implements 0C3A:1398:000D:8766 ()
 *
 * Called From: 0972:059C:001B:DC71
 * Called From: 0972:0C4B:000E:BD9B
 * Called From: 0972:0C4B:0010:51A9
 * Called From: 0972:0E2A:001D:966A
 * Called From: 0C10:012E:0015:46CA
 * Called From: 0C10:029F:0014:0758
 * Called From: 0C3A:1B08:004E:E6F7
 * Called From: 1A34:2D61:000C:2FC2
 */
void f__0C3A_1398_000D_8766()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_13A5_0014_7F45(); return; }
	/* Unresolved jump */ emu_ip = 0x13BB; emu_last_cs = 0x0C3A; emu_last_ip = 0x13A3; emu_last_length = 0x000D; emu_last_crc = 0x8766; emu_call();
}

/**
 * Decompiled function f__0C3A_13A5_0014_7F45()
 *
 * @name f__0C3A_13A5_0014_7F45
 * @implements 0C3A:13A5:0014:7F45 ()
 *
 * Called From: 0C3A:13A1:000D:8766
 */
void f__0C3A_13A5_0014_7F45()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x13B9); f__0C3A_092A_0013_A4A8();
	f__0C3A_13B9_0004_BEB2();
}

/**
 * Decompiled function f__0C3A_13B9_0004_BEB2()
 *
 * @name f__0C3A_13B9_0004_BEB2
 * @implements 0C3A:13B9:0004:BEB2 ()
 *
 * Called From: 0C3A:13B9:0014:7F45
 */
void f__0C3A_13B9_0004_BEB2()
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
 * Decompiled function f__0C3A_13BD_0022_D6F0()
 *
 * @name f__0C3A_13BD_0022_D6F0
 * @implements 0C3A:13BD:0022:D6F0 ()
 *
 * Called From: 0C3A:073F:0010:5523
 * Called From: 0C3A:11A0:0010:123B
 * Called From: B511:0317:000B:3CA9
 */
void f__0C3A_13BD_0022_D6F0()
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
	emu_push(emu_cs); emu_push(0x13DF); emu_cs = 0x1082; f__1082_00FD_003A_D7E0();
	f__0C3A_13DF_0005_92AE();
}

/**
 * Decompiled function f__0C3A_13DF_0005_92AE()
 *
 * @name f__0C3A_13DF_0005_92AE
 * @implements 0C3A:13DF:0005:92AE ()
 *
 * Called From: 0C3A:13DF:0022:D6F0
 */
void f__0C3A_13DF_0005_92AE()
{
	emu_addws(&emu_sp, 0x8);
	f__0C3A_1413_0016_7F60(); return;
}

/**
 * Decompiled function f__0C3A_13E4_001C_C40E()
 *
 * @name f__0C3A_13E4_001C_C40E
 * @implements 0C3A:13E4:001C:C40E ()
 *
 * Called From: 0C3A:141F:0016:7F60
 * Called From: 0C3A:141F:0018:26D2
 */
void f__0C3A_13E4_001C_C40E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (!emu_flags.zf) { f__0C3A_1406_000B_166D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_cs); emu_push(0x1400); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	f__0C3A_1400_0011_5D2C();
}

/**
 * Decompiled function f__0C3A_1400_0011_5D2C()
 *
 * @name f__0C3A_1400_0011_5D2C
 * @implements 0C3A:1400:0011:5D2C ()
 *
 * Called From: 0C3A:1400:001C:C40E
 */
void f__0C3A_1400_0011_5D2C()
{
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1411); emu_cs = 0x1082; emu_Building_Find();
	f__0C3A_1411_0018_26D2();
}

/**
 * Decompiled function f__0C3A_1406_000B_166D()
 *
 * @name f__0C3A_1406_000B_166D
 * @implements 0C3A:1406:000B:166D ()
 *
 * Called From: 0C3A:13ED:001C:C40E
 */
void f__0C3A_1406_000B_166D()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1411); emu_cs = 0x1082; emu_Building_Find();
	f__0C3A_1411_0018_26D2();
}

/**
 * Decompiled function f__0C3A_1411_0018_26D2()
 *
 * @name f__0C3A_1411_0018_26D2
 * @implements 0C3A:1411:0018:26D2 ()
 *
 * Called From: 0C3A:1411:000B:166D
 * Called From: 0C3A:1411:0011:5D2C
 */
void f__0C3A_1411_0018_26D2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__0C3A_13E4_001C_C40E(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__0C3A_1429_0004_893F(); return;
}

/**
 * Decompiled function f__0C3A_1413_0016_7F60()
 *
 * @name f__0C3A_1413_0016_7F60
 * @implements 0C3A:1413:0016:7F60 ()
 *
 * Called From: 0C3A:13E2:0005:92AE
 */
void f__0C3A_1413_0016_7F60()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__0C3A_13E4_001C_C40E(); return; }
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__0C3A_1429_0004_893F(); return;
}

/**
 * Decompiled function f__0C3A_1429_0004_893F()
 *
 * @name f__0C3A_1429_0004_893F
 * @implements 0C3A:1429:0004:893F ()
 *
 * Called From: 0C3A:1427:0018:26D2
 * Called From: 0C3A:1427:0016:7F60
 */
void f__0C3A_1429_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_142D_0018_6667()
 *
 * @name f__0C3A_142D_0018_6667
 * @implements 0C3A:142D:0018:6667 ()
 *
 * Called From: 0AEC:114C:0012:7EA1
 * Called From: 0AEC:11E6:0041:E018
 * Called From: 0C3A:0142:0021:1CAC
 * Called From: 0C3A:0142:0018:BE44
 */
void f__0C3A_142D_0018_6667()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x60);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_1445_0031_D8A7(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x1B73; emu_last_cs = 0x0C3A; emu_last_ip = 0x1442; emu_last_length = 0x0018; emu_last_crc = 0x6667; emu_call();
}

/**
 * Decompiled function f__0C3A_1440_0005_9F3F()
 *
 * @name f__0C3A_1440_0005_9F3F
 * @implements 0C3A:1440:0005:9F3F ()
 *
 * Called From: 0C3A:175C:000F:F56E
 * Called From: 0C3A:1810:000A:F946
 * Called From: 0C3A:18C9:0010:4512
 * Called From: 0C3A:1B70:0003:2113
 */
void f__0C3A_1440_0005_9F3F()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C3A_1B73_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_1442_0003_9EAB()
 *
 * @name f__0C3A_1442_0003_9EAB
 * @implements 0C3A:1442:0003:9EAB ()
 *
 * Called From: 0C3A:1B4A:0009:855A
 */
void f__0C3A_1442_0003_9EAB()
{
	f__0C3A_1B73_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_1445_0031_D8A7()
 *
 * @name f__0C3A_1445_0031_D8A7
 * @implements 0C3A:1445:0031:D8A7 ()
 *
 * Called From: 0C3A:143E:0018:6667
 */
void f__0C3A_1445_0031_D8A7()
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
	emu_push(emu_cs); emu_push(0x1476); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__0C3A_1476_0015_E07B();
}

/**
 * Decompiled function f__0C3A_1476_0015_E07B()
 *
 * @name f__0C3A_1476_0015_E07B
 * @implements 0C3A:1476:0015:E07B ()
 *
 * Called From: 0C3A:1476:0031:D8A7
 */
void f__0C3A_1476_0015_E07B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
	if (!emu_flags.zf) { f__0C3A_148B_0014_8AFF(); return; }
	f__0C3A_1B70_0003_2113(); return;
}

/**
 * Decompiled function f__0C3A_148B_0014_8AFF()
 *
 * @name f__0C3A_148B_0014_8AFF
 * @implements 0C3A:148B:0014:8AFF ()
 *
 * Called From: 0C3A:1486:0015:E07B
 */
void f__0C3A_148B_0014_8AFF()
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
	emu_push(0x149F); f__0C3A_2814_0015_76F0();
	f__0C3A_149F_000B_C8FB();
}

/**
 * Decompiled function f__0C3A_149F_000B_C8FB()
 *
 * @name f__0C3A_149F_000B_C8FB
 * @implements 0C3A:149F:000B:C8FB ()
 *
 * Called From: 0C3A:149F:0014:8AFF
 */
void f__0C3A_149F_000B_C8FB()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpws(&emu_di, 0xFD);
	if (!emu_flags.zf) { f__0C3A_14AA_000D_7C1F(); return; }
	/* Unresolved jump */ emu_ip = 0x1819; emu_last_cs = 0x0C3A; emu_last_ip = 0x14A7; emu_last_length = 0x000B; emu_last_crc = 0xC8FB; emu_call();
}

/**
 * Decompiled function f__0C3A_14AA_000D_7C1F()
 *
 * @name f__0C3A_14AA_000D_7C1F
 * @implements 0C3A:14AA:000D:7C1F ()
 *
 * Called From: 0C3A:14A5:000B:C8FB
 */
void f__0C3A_14AA_000D_7C1F()
{
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__0C3A_14B7_0010_2429(); return; }
	emu_cmpws(&emu_di, 0xFE);
	if (emu_flags.zf) { f__0C3A_14B7_0010_2429(); return; }
	f__0C3A_19EE_001E_E768(); return;
}

/**
 * Decompiled function f__0C3A_14B7_0010_2429()
 *
 * @name f__0C3A_14B7_0010_2429
 * @implements 0C3A:14B7:0010:2429 ()
 *
 * Called From: 0C3A:14AD:000D:7C1F
 * Called From: 0C3A:14B2:000D:7C1F
 */
void f__0C3A_14B7_0010_2429()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x14C7); f__0C3A_25EC_0011_E453();
	f__0C3A_14C7_005E_1A99();
}

/**
 * Decompiled function f__0C3A_14C7_005E_1A99()
 *
 * @name f__0C3A_14C7_005E_1A99
 * @implements 0C3A:14C7:005E:1A99 ()
 *
 * Called From: 0C3A:14C7:0010:2429
 */
void f__0C3A_14C7_005E_1A99()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0C3A_14EC_0039_DBD9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x14EC; emu_last_cs = 0x0C3A; emu_last_ip = 0x14DB; emu_last_length = 0x005E; emu_last_crc = 0x1A99; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_cwd();
	emu_subw(&emu_ax.x, emu_dx.x);
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x150B; emu_last_cs = 0x0C3A; emu_last_ip = 0x14F0; emu_last_length = 0x005E; emu_last_crc = 0x1A99; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x5);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x150B; emu_last_cs = 0x0C3A; emu_last_ip = 0x14FA; emu_last_length = 0x005E; emu_last_crc = 0x1A99; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x150B; emu_last_cs = 0x0C3A; emu_last_ip = 0x1504; emu_last_length = 0x005E; emu_last_crc = 0x1A99; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xB);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x151A; emu_last_cs = 0x0C3A; emu_last_ip = 0x1513; emu_last_length = 0x005E; emu_last_crc = 0x1A99; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x1525); emu_ip = 0x1B79; emu_last_cs = 0x0C3A; emu_last_ip = 0x1522; emu_last_length = 0x005E; emu_last_crc = 0x1A99; emu_call();
	f__0C3A_1525_001C_FCB7();
}

/**
 * Decompiled function f__0C3A_14EC_0039_DBD9()
 *
 * @name f__0C3A_14EC_0039_DBD9
 * @implements 0C3A:14EC:0039:DBD9 ()
 *
 * Called From: 0C3A:14CB:005E:1A99
 */
void f__0C3A_14EC_0039_DBD9()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_flags.zf) { f__0C3A_150B_001A_38D1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x5);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x150B; emu_last_cs = 0x0C3A; emu_last_ip = 0x14FA; emu_last_length = 0x0039; emu_last_crc = 0xDBD9; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x150B; emu_last_cs = 0x0C3A; emu_last_ip = 0x1504; emu_last_length = 0x0039; emu_last_crc = 0xDBD9; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xB);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x151A; emu_last_cs = 0x0C3A; emu_last_ip = 0x1513; emu_last_length = 0x0039; emu_last_crc = 0xDBD9; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x1525); emu_ip = 0x1B79; emu_last_cs = 0x0C3A; emu_last_ip = 0x1522; emu_last_length = 0x0039; emu_last_crc = 0xDBD9; emu_call();
	f__0C3A_1525_001C_FCB7();
}

/**
 * Decompiled function f__0C3A_150B_001A_38D1()
 *
 * @name f__0C3A_150B_001A_38D1
 * @implements 0C3A:150B:001A:38D1 ()
 *
 * Called From: 0C3A:14F0:0039:DBD9
 */
void f__0C3A_150B_001A_38D1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xB);
	if (!emu_flags.zf) { f__0C3A_151A_000B_E0E2(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x1525); emu_ip = 0x1B79; emu_last_cs = 0x0C3A; emu_last_ip = 0x1522; emu_last_length = 0x001A; emu_last_crc = 0x38D1; emu_call();
	f__0C3A_1525_001C_FCB7();
}

/**
 * Decompiled function f__0C3A_151A_000B_E0E2()
 *
 * @name f__0C3A_151A_000B_E0E2
 * @implements 0C3A:151A:000B:E0E2 ()
 *
 * Called From: 0C3A:1513:001A:38D1
 */
void f__0C3A_151A_000B_E0E2()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1525); f__0C3A_1B79_0021_8C40();
	f__0C3A_1525_001C_FCB7();
}

/**
 * Decompiled function f__0C3A_1525_001C_FCB7()
 *
 * @name f__0C3A_1525_001C_FCB7
 * @implements 0C3A:1525:001C:FCB7 ()
 *
 * Called From: 0C3A:1525:000B:E0E2
 */
void f__0C3A_1525_001C_FCB7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (!emu_flags.zf) { f__0C3A_1541_0021_9E80(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4C), 0x0);
	/* Unresolved jump */ emu_ip = 0x1440; emu_last_cs = 0x0C3A; emu_last_ip = 0x153E; emu_last_length = 0x001C; emu_last_crc = 0xFCB7; emu_call();
}

/**
 * Decompiled function f__0C3A_1541_0021_9E80()
 *
 * @name f__0C3A_1541_0021_9E80
 * @implements 0C3A:1541:0021:9E80 ()
 *
 * Called From: 0C3A:1533:001C:FCB7
 */
void f__0C3A_1541_0021_9E80()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x159D; emu_last_cs = 0x0C3A; emu_last_ip = 0x1549; emu_last_length = 0x0021; emu_last_crc = 0x9E80; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8BE8), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	f__0C3A_1594_0009_EDF2(); return;
}

/**
 * Decompiled function f__0C3A_1562_000D_A32C()
 *
 * @name f__0C3A_1562_000D_A32C
 * @implements 0C3A:1562:000D:A32C ()
 *
 * Called From: 0C3A:1598:0009:EDF2
 * Called From: 0C3A:1598:0010:94FA
 */
void f__0C3A_1562_000D_A32C()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs); emu_push(0x156F); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	f__0C3A_156F_001E_FBF5();
}

/**
 * Decompiled function f__0C3A_156F_001E_FBF5()
 *
 * @name f__0C3A_156F_001E_FBF5
 * @implements 0C3A:156F:001E:FBF5 ()
 *
 * Called From: 0C3A:156F:000D:A32C
 */
void f__0C3A_156F_001E_FBF5()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_andw(&emu_cx.x, emu_ax.x);
	emu_andw(&emu_bx.x, emu_dx.x);
	emu_orw(&emu_cx.x, emu_bx.x);
	if (emu_flags.zf) { f__0C3A_158D_0010_94FA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), 0x1);
	emu_cmpws(&emu_di, 0xFE);
	if (!emu_flags.zf) { f__0C3A_158D_0010_94FA(); return; }
	f__0C3A_1750_000F_F56E(); return;
}

/**
 * Decompiled function f__0C3A_158D_0010_94FA()
 *
 * @name f__0C3A_158D_0010_94FA
 * @implements 0C3A:158D:0010:94FA ()
 *
 * Called From: 0C3A:157B:001E:FBF5
 * Called From: 0C3A:1588:001E:FBF5
 */
void f__0C3A_158D_0010_94FA()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x60);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x13);
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_1562_000D_A32C(); return; }
	f__0C3A_176C_0008_9161(); return;
}

/**
 * Decompiled function f__0C3A_1594_0009_EDF2()
 *
 * @name f__0C3A_1594_0009_EDF2
 * @implements 0C3A:1594:0009:EDF2 ()
 *
 * Called From: 0C3A:1560:0021:9E80
 */
void f__0C3A_1594_0009_EDF2()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x13);
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_1562_000D_A32C(); return; }
	/* Unresolved jump */ emu_ip = 0x176C; emu_last_cs = 0x0C3A; emu_last_ip = 0x159A; emu_last_length = 0x0009; emu_last_crc = 0xEDF2; emu_call();
}

/**
 * Decompiled function f__0C3A_1750_000F_F56E()
 *
 * @name f__0C3A_1750_000F_F56E
 * @implements 0C3A:1750:000F:F56E ()
 *
 * Called From: 0C3A:158A:001E:FBF5
 */
void f__0C3A_1750_000F_F56E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4C), emu_ax.x);
	f__0C3A_1440_0005_9F3F(); return;
}

/**
 * Decompiled function f__0C3A_176C_0008_9161()
 *
 * @name f__0C3A_176C_0008_9161
 * @implements 0C3A:176C:0008:9161 ()
 *
 * Called From: 0C3A:159A:0010:94FA
 */
void f__0C3A_176C_0008_9161()
{
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { f__0C3A_1774_0005_4EFC(); return; }
	/* Unresolved jump */ emu_ip = 0x19E7; emu_last_cs = 0x0C3A; emu_last_ip = 0x1771; emu_last_length = 0x0008; emu_last_crc = 0x9161; emu_call();
}

/**
 * Decompiled function f__0C3A_1774_0005_4EFC()
 *
 * @name f__0C3A_1774_0005_4EFC
 * @implements 0C3A:1774:0005:4EFC ()
 *
 * Called From: 0C3A:176F:0008:9161
 */
void f__0C3A_1774_0005_4EFC()
{
	emu_push(emu_cs); emu_push(0x1779); emu_cs = 0x34B8; ovl__34B8(1);
	f__0C3A_1779_0019_CC8F();
}

/**
 * Decompiled function f__0C3A_1779_0019_CC8F()
 *
 * @name f__0C3A_1779_0019_CC8F
 * @implements 0C3A:1779:0019:CC8F ()
 *
 * Called From: 0C3A:1779:0005:4EFC
 */
void f__0C3A_1779_0019_CC8F()
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
	emu_push(emu_cs); emu_push(0x1792); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	f__0C3A_1792_000B_DD7F();
}

/**
 * Decompiled function f__0C3A_1792_000B_DD7F()
 *
 * @name f__0C3A_1792_000B_DD7F
 * @implements 0C3A:1792:000B:DD7F ()
 *
 * Called From: 0C3A:1792:0019:CC8F
 */
void f__0C3A_1792_000B_DD7F()
{
	emu_addws(&emu_sp, 0xC);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x179D); emu_cs = 0x34E9; ovl__34E9(2);
	f__0C3A_179D_0009_AC45();
}

/**
 * Decompiled function f__0C3A_179D_0009_AC45()
 *
 * @name f__0C3A_179D_0009_AC45
 * @implements 0C3A:179D:0009:AC45 ()
 *
 * Called From: 0C3A:179D:000B:DD7F
 */
void f__0C3A_179D_0009_AC45()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x17A6); emu_cs = 0x34E9; ovl__34E9(0);
	f__0C3A_17A6_0013_9F23();
}

/**
 * Decompiled function f__0C3A_17A6_0013_9F23()
 *
 * @name f__0C3A_17A6_0013_9F23
 * @implements 0C3A:17A6:0013:9F23 ()
 *
 * Called From: 0C3A:17A6:0009:AC45
 */
void f__0C3A_17A6_0013_9F23()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xB);
	if (!emu_flags.zf) { f__0C3A_17B9_000C_D272(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x17BB; emu_last_cs = 0x0C3A; emu_last_ip = 0x17B7; emu_last_length = 0x0013; emu_last_crc = 0x9F23; emu_call();
}

/**
 * Decompiled function f__0C3A_17B9_000C_D272()
 *
 * @name f__0C3A_17B9_000C_D272
 * @implements 0C3A:17B9:000C:D272 ()
 *
 * Called From: 0C3A:17B2:0013:9F23
 */
void f__0C3A_17B9_000C_D272()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8BE8));
	emu_push(emu_cs); emu_push(0x17C5); emu_cs = 0x3495; ovl__3495(0);
	f__0C3A_17C5_000F_DABC();
}

/**
 * Decompiled function f__0C3A_17C5_000F_DABC()
 *
 * @name f__0C3A_17C5_000F_DABC
 * @implements 0C3A:17C5:000F:DABC ()
 *
 * Called From: 0C3A:17C5:000C:D272
 */
void f__0C3A_17C5_000F_DABC()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x17D4); emu_cs = 0x34E9; ovl__34E9(0);
	f__0C3A_17D4_0006_EAFC();
}

/**
 * Decompiled function f__0C3A_17D4_0006_EAFC()
 *
 * @name f__0C3A_17D4_0006_EAFC
 * @implements 0C3A:17D4:0006:EAFC ()
 *
 * Called From: 0C3A:17D4:000F:DABC
 */
void f__0C3A_17D4_0006_EAFC()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x17DA); emu_cs = 0x34B8; ovl__34B8(5);
	f__0C3A_17DA_000D_A409();
}

/**
 * Decompiled function f__0C3A_17DA_000D_A409()
 *
 * @name f__0C3A_17DA_000D_A409
 * @implements 0C3A:17DA:000D:A409 ()
 *
 * Called From: 0C3A:17DA:0006:EAFC
 */
void f__0C3A_17DA_000D_A409()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x17E7); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	f__0C3A_17E7_0016_5077();
}

/**
 * Decompiled function f__0C3A_17E7_0016_5077()
 *
 * @name f__0C3A_17E7_0016_5077
 * @implements 0C3A:17E7:0016:5077 ()
 *
 * Called From: 0C3A:17E7:000D:A409
 */
void f__0C3A_17E7_0016_5077()
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
	f__0C3A_17FD_000C_309D();
}

/**
 * Decompiled function f__0C3A_17FD_000C_309D()
 *
 * @name f__0C3A_17FD_000C_309D
 * @implements 0C3A:17FD:000C:309D ()
 *
 * Called From: 0C3A:17FD:0016:5077
 */
void f__0C3A_17FD_000C_309D()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1809); emu_cs = 0x34E9; ovl__34E9(2);
	f__0C3A_1809_000A_F946();
}

/**
 * Decompiled function f__0C3A_1809_000A_F946()
 *
 * @name f__0C3A_1809_000A_F946
 * @implements 0C3A:1809:000A:F946 ()
 *
 * Called From: 0C3A:1809:000C:309D
 */
void f__0C3A_1809_000A_F946()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x0);
	if (!emu_flags.zf) { f__0C3A_1813_001B_AF52(); return; }
	f__0C3A_1440_0005_9F3F(); return;
}

/**
 * Decompiled function f__0C3A_1813_001B_AF52()
 *
 * @name f__0C3A_1813_001B_AF52
 * @implements 0C3A:1813:001B:AF52 ()
 *
 * Called From: 0C3A:180E:000A:F946
 */
void f__0C3A_1813_001B_AF52()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x2);
	if (!emu_flags.zf) { f__0C3A_1834_0009_D5AF(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x182E); emu_ip = 0x2714; emu_last_cs = 0x0C3A; emu_last_ip = 0x182B; emu_last_length = 0x001B; emu_last_crc = 0xAF52; emu_call();
	/* Unresolved jump */ emu_ip = 0x182E; emu_last_cs = 0x0C3A; emu_last_ip = 0x182E; emu_last_length = 0x001B; emu_last_crc = 0xAF52; emu_call();
}

/**
 * Decompiled function f__0C3A_1834_0009_D5AF()
 *
 * @name f__0C3A_1834_0009_D5AF
 * @implements 0C3A:1834:0009:D5AF ()
 *
 * Called From: 0C3A:1817:001B:AF52
 */
void f__0C3A_1834_0009_D5AF()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x1);
	if (emu_flags.zf) { f__0C3A_183D_0008_BA0A(); return; }
	f__0C3A_19E5_0002_C3BA(); return;
}

/**
 * Decompiled function f__0C3A_183D_0008_BA0A()
 *
 * @name f__0C3A_183D_0008_BA0A
 * @implements 0C3A:183D:0008:BA0A ()
 *
 * Called From: 0C3A:1838:0009:D5AF
 */
void f__0C3A_183D_0008_BA0A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	f__0C3A_19DC_0009_CA41(); return;
}

/**
 * Decompiled function f__0C3A_1845_0014_DDE8()
 *
 * @name f__0C3A_1845_0014_DDE8
 * @implements 0C3A:1845:0014:DDE8 ()
 *
 * Called From: 0C3A:19E2:0009:CA41
 * Called From: 0C3A:19E2:000C:3FB9
 */
void f__0C3A_1845_0014_DDE8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_dx.x, 0xB);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ds, emu_bx.x,  0x8BEC), 0x0);
	if (!emu_flags.zf) { f__0C3A_1859_0023_A7FF(); return; }
	f__0C3A_19D9_000C_3FB9(); return;
}

/**
 * Decompiled function f__0C3A_1859_0023_A7FF()
 *
 * @name f__0C3A_1859_0023_A7FF
 * @implements 0C3A:1859:0023:A7FF ()
 *
 * Called From: 0C3A:1854:0014:DDE8
 */
void f__0C3A_1859_0023_A7FF()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_dx.x, 0xB);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x,  0x8BEA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xB);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x18CF; emu_last_cs = 0x0C3A; emu_last_ip = 0x186F; emu_last_length = 0x0023; emu_last_crc = 0xA7FF; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x187C); f__0C3A_1E67_0011_E44A();
	f__0C3A_187C_001E_1AEF();
}

/**
 * Decompiled function f__0C3A_187C_001E_1AEF()
 *
 * @name f__0C3A_187C_001E_1AEF
 * @implements 0C3A:187C:001E:1AEF ()
 *
 * Called From: 0C3A:187C:0023:A7FF
 */
void f__0C3A_187C_001E_1AEF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4C), emu_di);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x8BE8), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x18CC; emu_last_cs = 0x0C3A; emu_last_ip = 0x188A; emu_last_length = 0x001E; emu_last_crc = 0x1AEF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x189A); f__0C3A_0B93_0034_3B6D();
	f__0C3A_189A_0022_9131();
}

/**
 * Decompiled function f__0C3A_189A_0022_9131()
 *
 * @name f__0C3A_189A_0022_9131
 * @implements 0C3A:189A:0022:9131 ()
 *
 * Called From: 0C3A:189A:001E:1AEF
 */
void f__0C3A_189A_0022_9131()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0C3A_18CC_0003_9DA2(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_movw(&emu_ax.x, 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x18BC); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
	f__0C3A_18BC_0010_4512();
}

/**
 * Decompiled function f__0C3A_18BC_0010_4512()
 *
 * @name f__0C3A_18BC_0010_4512
 * @implements 0C3A:18BC:0010:4512 ()
 *
 * Called From: 0C3A:18BC:0022:9131
 */
void f__0C3A_18BC_0010_4512()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0C3A_18CC_0003_9DA2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4C), emu_di);
	f__0C3A_1440_0005_9F3F(); return;
}

/**
 * Decompiled function f__0C3A_18CC_0003_9DA2()
 *
 * @name f__0C3A_18CC_0003_9DA2
 * @implements 0C3A:18CC:0003:9DA2 ()
 *
 * Called From: 0C3A:189E:0022:9131
 * Called From: 0C3A:18C0:0010:4512
 */
void f__0C3A_18CC_0003_9DA2()
{
	f__0C3A_19D9_000C_3FB9(); return;
}

/**
 * Decompiled function f__0C3A_19D9_000C_3FB9()
 *
 * @name f__0C3A_19D9_000C_3FB9
 * @implements 0C3A:19D9:000C:3FB9 ()
 *
 * Called From: 0C3A:1856:0014:DDE8
 * Called From: 0C3A:18CC:0003:9DA2
 */
void f__0C3A_19D9_000C_3FB9()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x19);
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_19E5_0002_C3BA(); return; }
	f__0C3A_1845_0014_DDE8(); return;
}

/**
 * Decompiled function f__0C3A_19DC_0009_CA41()
 *
 * @name f__0C3A_19DC_0009_CA41
 * @implements 0C3A:19DC:0009:CA41 ()
 *
 * Called From: 0C3A:1842:0008:BA0A
 */
void f__0C3A_19DC_0009_CA41()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x19);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x19E5; emu_last_cs = 0x0C3A; emu_last_ip = 0x19E0; emu_last_length = 0x0009; emu_last_crc = 0xCA41; emu_call(); return; }
	f__0C3A_1845_0014_DDE8(); return;
}

/**
 * Decompiled function f__0C3A_19E5_0002_C3BA()
 *
 * @name f__0C3A_19E5_0002_C3BA
 * @implements 0C3A:19E5:0002:C3BA ()
 *
 * Called From: 0C3A:183A:0009:D5AF
 * Called From: 0C3A:19E0:000C:3FB9
 */
void f__0C3A_19E5_0002_C3BA()
{
	f__0C3A_19EE_001E_E768(); return;
}

/**
 * Decompiled function f__0C3A_19EE_001E_E768()
 *
 * @name f__0C3A_19EE_001E_E768
 * @implements 0C3A:19EE:001E:E768 ()
 *
 * Called From: 0C3A:14B4:000D:7C1F
 * Called From: 0C3A:19E5:0002:C3BA
 */
void f__0C3A_19EE_001E_E768()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xB);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1A10; emu_last_cs = 0x0C3A; emu_last_ip = 0x19F6; emu_last_length = 0x001E; emu_last_crc = 0xE768; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x4C), emu_di);
	if (emu_flags.zf) { f__0C3A_1A0E_0002_C1BA(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1A0C); f__0C3A_1E67_0011_E44A();
	f__0C3A_1A0C_0004_5A9F();
}

/**
 * Decompiled function f__0C3A_1A0C_0004_5A9F()
 *
 * @name f__0C3A_1A0C_0004_5A9F
 * @implements 0C3A:1A0C:0004:5A9F ()
 *
 * Called From: 0C3A:1A0C:001E:E768
 */
void f__0C3A_1A0C_0004_5A9F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__0C3A_1A13_000D_4137(); return;
}

/**
 * Decompiled function f__0C3A_1A0E_0002_C1BA()
 *
 * @name f__0C3A_1A0E_0002_C1BA
 * @implements 0C3A:1A0E:0002:C1BA ()
 *
 * Called From: 0C3A:19FF:001E:E768
 */
void f__0C3A_1A0E_0002_C1BA()
{
	f__0C3A_1A13_000D_4137(); return;
}

/**
 * Decompiled function f__0C3A_1A13_000D_4137()
 *
 * @name f__0C3A_1A13_000D_4137
 * @implements 0C3A:1A13:000D:4137 ()
 *
 * Called From: 0C3A:1A0E:0002:C1BA
 * Called From: 0C3A:1A0E:0004:5A9F
 */
void f__0C3A_1A13_000D_4137()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (emu_flags.zf) { f__0C3A_1A20_0008_50E7(); return; }
	/* Unresolved jump */ emu_ip = 0x1B70; emu_last_cs = 0x0C3A; emu_last_ip = 0x1A1D; emu_last_length = 0x000D; emu_last_crc = 0x4137; emu_call();
}

/**
 * Decompiled function f__0C3A_1A20_0008_50E7()
 *
 * @name f__0C3A_1A20_0008_50E7
 * @implements 0C3A:1A20:0008:50E7 ()
 *
 * Called From: 0C3A:1A1B:000D:4137
 */
void f__0C3A_1A20_0008_50E7()
{
	emu_cmpws(&emu_di, 0xFF);
	if (!emu_flags.zf) { f__0C3A_1A28_0034_3030(); return; }
	f__0C3A_1B70_0003_2113(); return;
}

/**
 * Decompiled function f__0C3A_1A28_0034_3030()
 *
 * @name f__0C3A_1A28_0034_3030
 * @implements 0C3A:1A28:0034:3030 ()
 *
 * Called From: 0C3A:1A23:0008:50E7
 */
void f__0C3A_1A28_0034_3030()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (emu_flags.zf) { f__0C3A_1A7A_0022_A4D7(); return; }
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
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1A5C); emu_cs = 0x1A34; emu_ip = 0x08FB; emu_last_cs = 0x0C3A; emu_last_ip = 0x1A57; emu_last_length = 0x0034; emu_last_crc = 0x3030; emu_call();
	/* Unresolved jump */ emu_ip = 0x1A5C; emu_last_cs = 0x0C3A; emu_last_ip = 0x1A5C; emu_last_length = 0x0034; emu_last_crc = 0x3030; emu_call();
}

/**
 * Decompiled function f__0C3A_1A7A_0022_A4D7()
 *
 * @name f__0C3A_1A7A_0022_A4D7
 * @implements 0C3A:1A7A:0022:A4D7 ()
 *
 * Called From: 0C3A:1A30:0034:3030
 */
void f__0C3A_1A7A_0022_A4D7()
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
	emu_push(0x1A9C); f__0C3A_0009_0029_BF94();
	f__0C3A_1A9C_0021_A062();
}

/**
 * Decompiled function f__0C3A_1A9C_0021_A062()
 *
 * @name f__0C3A_1A9C_0021_A062
 * @implements 0C3A:1A9C:0021:A062 ()
 *
 * Called From: 0C3A:1A9C:0022:A4D7
 */
void f__0C3A_1A9C_0021_A062()
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
	emu_push(emu_cs); emu_push(0x1ABD); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0C3A_1ABD_004E_E6F7();
}

/**
 * Decompiled function f__0C3A_1ABD_004E_E6F7()
 *
 * @name f__0C3A_1ABD_004E_E6F7
 * @implements 0C3A:1ABD:004E:E6F7 ()
 *
 * Called From: 0C3A:1ABD:0021:A062
 */
void f__0C3A_1ABD_004E_E6F7()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xBFFF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1B4F; emu_last_cs = 0x0C3A; emu_last_ip = 0x1AD3; emu_last_length = 0x004E; emu_last_crc = 0xE6F7; emu_call(); return; }
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
	emu_push(0x1B0B); f__0C3A_1398_000D_8766();
	f__0C3A_1B0B_001B_3C60();
}

/**
 * Decompiled function f__0C3A_1B0B_001B_3C60()
 *
 * @name f__0C3A_1B0B_001B_3C60
 * @implements 0C3A:1B0B:001B:3C60 ()
 *
 * Called From: 0C3A:1B0B:004E:E6F7
 */
void f__0C3A_1B0B_001B_3C60()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1B47; emu_last_cs = 0x0C3A; emu_last_ip = 0x1B15; emu_last_length = 0x001B; emu_last_crc = 0x3C60; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_movw(&emu_ax.x, 0x89);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1B26); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0C3A_1B26_000D_A042();
}

/**
 * Decompiled function f__0C3A_1B26_000D_A042()
 *
 * @name f__0C3A_1B26_000D_A042
 * @implements 0C3A:1B26:000D:A042 ()
 *
 * Called From: 0C3A:1B26:001B:3C60
 */
void f__0C3A_1B26_000D_A042()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1B33); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	f__0C3A_1B33_0011_8982();
}

/**
 * Decompiled function f__0C3A_1B33_0011_8982()
 *
 * @name f__0C3A_1B33_0011_8982
 * @implements 0C3A:1B33:0011:8982 ()
 *
 * Called From: 0C3A:1B33:000D:A042
 */
void f__0C3A_1B33_0011_8982()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1B44); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__0C3A_1B44_0009_855A();
}

/**
 * Decompiled function f__0C3A_1B44_0009_855A()
 *
 * @name f__0C3A_1B44_0009_855A
 * @implements 0C3A:1B44:0009:855A ()
 *
 * Called From: 0C3A:1B44:0011:8982
 */
void f__0C3A_1B44_0009_855A()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__0C3A_1442_0003_9EAB(); return;
}

/**
 * Decompiled function f__0C3A_1B70_0003_2113()
 *
 * @name f__0C3A_1B70_0003_2113
 * @implements 0C3A:1B70:0003:2113 ()
 *
 * Called From: 0C3A:1488:0015:E07B
 * Called From: 0C3A:1A25:0008:50E7
 */
void f__0C3A_1B70_0003_2113()
{
	f__0C3A_1440_0005_9F3F(); return;
}

/**
 * Decompiled function f__0C3A_1B73_0006_F7CE()
 *
 * @name f__0C3A_1B73_0006_F7CE
 * @implements 0C3A:1B73:0006:F7CE ()
 *
 * Called From: 0C3A:1442:0005:9F3F
 * Called From: 0C3A:1442:0003:9EAB
 */
void f__0C3A_1B73_0006_F7CE()
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
 * Decompiled function f__0C3A_1B79_0021_8C40()
 *
 * @name f__0C3A_1B79_0021_8C40
 * @implements 0C3A:1B79:0021:8C40 ()
 *
 * Called From: 0AEC:05EF:001A:1D41
 * Called From: 0C3A:1522:000B:E0E2
 */
void f__0C3A_1B79_0021_8C40()
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
	if (!emu_flags.zf) { f__0C3A_1B9A_0026_93A4(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x1E4F; emu_last_cs = 0x0C3A; emu_last_ip = 0x1B97; emu_last_length = 0x0021; emu_last_crc = 0x8C40; emu_call();
}

/**
 * Decompiled function f__0C3A_1B97_0003_5C0D()
 *
 * @name f__0C3A_1B97_0003_5C0D
 * @implements 0C3A:1B97:0003:5C0D ()
 *
 * Called From: 0C3A:1E4C:0009:5A36
 */
void f__0C3A_1B97_0003_5C0D()
{
	f__0C3A_1E4F_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_1B9A_0026_93A4()
 *
 * @name f__0C3A_1B9A_0026_93A4
 * @implements 0C3A:1B9A:0026:93A4 ()
 *
 * Called From: 0C3A:1B91:0021:8C40
 */
void f__0C3A_1B9A_0026_93A4()
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
	emu_push(emu_cs); emu_push(0x1BC0); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__0C3A_1BC0_0028_37B2();
}

/**
 * Decompiled function f__0C3A_1BC0_0028_37B2()
 *
 * @name f__0C3A_1BC0_0028_37B2
 * @implements 0C3A:1BC0:0028:37B2 ()
 *
 * Called From: 0C3A:1BC0:0026:93A4
 */
void f__0C3A_1BC0_0028_37B2()
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
	if ((emu_flags.cf || emu_flags.zf)) { f__0C3A_1BE8_0007_272B(); return; }
	/* Unresolved jump */ emu_ip = 0x1E3A; emu_last_cs = 0x0C3A; emu_last_ip = 0x1BE5; emu_last_length = 0x0028; emu_last_crc = 0x37B2; emu_call();
}

/**
 * Decompiled function f__0C3A_1BE8_0007_272B()
 *
 * @name f__0C3A_1BE8_0007_272B
 * @implements 0C3A:1BE8:0007:272B ()
 *
 * Called From: 0C3A:1BE3:0028:37B2
 */
void f__0C3A_1BE8_0007_272B()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1E55);
	switch (emu_ip) {
		case 0x1BEF: f__0C3A_1BEF_0019_E86F(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0C3A; emu_last_ip = 0x1BEA; emu_last_length = 0x0007; emu_last_crc = 0x272B;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__0C3A_1BEF_0019_E86F()
 *
 * @name f__0C3A_1BEF_0019_E86F
 * @implements 0C3A:1BEF:0019:E86F ()
 *
 * Called From: 0C3A:1BEA:0007:272B
 */
void f__0C3A_1BEF_0019_E86F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xA);
	emu_xorw(&emu_si, emu_si);
	f__0C3A_1D16_0008_1F0E(); return;
}

/**
 * Decompiled function f__0C3A_1C08_0069_2044()
 *
 * @name f__0C3A_1C08_0069_2044
 * @implements 0C3A:1C08:0069:2044 ()
 *
 * Called From: 0C3A:1D1B:0008:1F0E
 * Called From: 0C3A:1D1B:001D:9D99
 */
void f__0C3A_1C08_0069_2044()
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
	if (!emu_flags.zf) { f__0C3A_1C4A_0027_2378(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x0);
	if (!emu_flags.zf) { f__0C3A_1C4A_0027_2378(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x1);
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_1C4A_0027_2378(); return; }
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0xFBFF);
	emu_andws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0xFF);
	emu_movw(&emu_di, 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_andw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_andw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1C60; emu_last_cs = 0x0C3A; emu_last_ip = 0x1C59; emu_last_length = 0x0069; emu_last_crc = 0x2044; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1C71; emu_last_cs = 0x0C3A; emu_last_ip = 0x1C5E; emu_last_length = 0x0069; emu_last_crc = 0x2044; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1C71; emu_last_cs = 0x0C3A; emu_last_ip = 0x1C6C; emu_last_length = 0x0069; emu_last_crc = 0x2044; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x1D01; emu_last_cs = 0x0C3A; emu_last_ip = 0x1C6E; emu_last_length = 0x0069; emu_last_crc = 0x2044; emu_call();
}

/**
 * Decompiled function f__0C3A_1C4A_0027_2378()
 *
 * @name f__0C3A_1C4A_0027_2378
 * @implements 0C3A:1C4A:0027:2378 ()
 *
 * Called From: 0C3A:1C2B:0069:2044
 * Called From: 0C3A:1C35:0069:2044
 * Called From: 0C3A:1C3C:0069:2044
 */
void f__0C3A_1C4A_0027_2378()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_andw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_andw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!emu_flags.zf) { f__0C3A_1C60_0011_5C72(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__0C3A_1C71_0068_B126(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1C71; emu_last_cs = 0x0C3A; emu_last_ip = 0x1C6C; emu_last_length = 0x0027; emu_last_crc = 0x2378; emu_call(); return; }
	f__0C3A_1D01_001D_9D99(); return;
}

/**
 * Decompiled function f__0C3A_1C60_0011_5C72()
 *
 * @name f__0C3A_1C60_0011_5C72
 * @implements 0C3A:1C60:0011:5C72 ()
 *
 * Called From: 0C3A:1C59:0027:2378
 */
void f__0C3A_1C60_0011_5C72()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1C71; emu_last_cs = 0x0C3A; emu_last_ip = 0x1C6C; emu_last_length = 0x0011; emu_last_crc = 0x5C72; emu_call(); return; }
	f__0C3A_1D01_001D_9D99(); return;
}

/**
 * Decompiled function f__0C3A_1C71_0068_B126()
 *
 * @name f__0C3A_1C71_0068_B126
 * @implements 0C3A:1C71:0068:B126 ()
 *
 * Called From: 0C3A:1C5E:0027:2378
 */
void f__0C3A_1C71_0068_B126()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x0);
	if (emu_flags.zf) { f__0C3A_1C83_0056_A39E(); return; }
	emu_cmpws(&emu_si, 0x3);
	if (!emu_flags.zf) { f__0C3A_1C83_0056_A39E(); return; }
	emu_movw(&emu_di, 0x2);
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0C3A_1D01_001D_9D99(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x31));
	emu_movb(&emu_ax.h, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1D01; emu_last_cs = 0x0C3A; emu_last_ip = 0x1CA3; emu_last_length = 0x0068; emu_last_crc = 0xB126; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x21));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4E));
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x1CC3; emu_last_cs = 0x0C3A; emu_last_ip = 0x1CB3; emu_last_length = 0x0068; emu_last_crc = 0xB126; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1CD9; emu_last_cs = 0x0C3A; emu_last_ip = 0x1CC1; emu_last_length = 0x0068; emu_last_crc = 0xB126; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x1D01; emu_last_cs = 0x0C3A; emu_last_ip = 0x1CD7; emu_last_length = 0x0068; emu_last_crc = 0xB126; emu_call();
}

/**
 * Decompiled function f__0C3A_1C83_0056_A39E()
 *
 * @name f__0C3A_1C83_0056_A39E
 * @implements 0C3A:1C83:0056:A39E ()
 *
 * Called From: 0C3A:1C79:0068:B126
 * Called From: 0C3A:1C7E:0068:B126
 */
void f__0C3A_1C83_0056_A39E()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_decw(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0C3A_1D01_001D_9D99(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x31));
	emu_movb(&emu_ax.h, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1D01; emu_last_cs = 0x0C3A; emu_last_ip = 0x1CA3; emu_last_length = 0x0056; emu_last_crc = 0xA39E; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x21));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4E));
	if ((emu_flags.cf || emu_flags.zf)) { f__0C3A_1CC3_0016_6D58(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1CD9; emu_last_cs = 0x0C3A; emu_last_ip = 0x1CC1; emu_last_length = 0x0056; emu_last_crc = 0xA39E; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x1D01; emu_last_cs = 0x0C3A; emu_last_ip = 0x1CD7; emu_last_length = 0x0056; emu_last_crc = 0xA39E; emu_call();
}

/**
 * Decompiled function f__0C3A_1CC3_0016_6D58()
 *
 * @name f__0C3A_1CC3_0016_6D58
 * @implements 0C3A:1CC3:0016:6D58 ()
 *
 * Called From: 0C3A:1CB3:0056:A39E
 */
void f__0C3A_1CC3_0016_6D58()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2A), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	f__0C3A_1D01_001D_9D99(); return;
}

/**
 * Decompiled function f__0C3A_1D01_001D_9D99()
 *
 * @name f__0C3A_1D01_001D_9D99
 * @implements 0C3A:1D01:001D:9D99 ()
 *
 * Called From: 0C3A:1C6E:0027:2378
 * Called From: 0C3A:1C6E:0011:5C72
 * Called From: 0C3A:1C8A:0056:A39E
 * Called From: 0C3A:1C8A:0068:B126
 * Called From: 0C3A:1CD7:0016:6D58
 */
void f__0C3A_1D01_001D_9D99()
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
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_1D1E_0003_5DA9(); return; }
	f__0C3A_1C08_0069_2044(); return;
}

/**
 * Decompiled function f__0C3A_1D16_0008_1F0E()
 *
 * @name f__0C3A_1D16_0008_1F0E
 * @implements 0C3A:1D16:0008:1F0E ()
 *
 * Called From: 0C3A:1C05:0019:E86F
 */
void f__0C3A_1D16_0008_1F0E()
{
	emu_cmpws(&emu_si, 0x13);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1D1E; emu_last_cs = 0x0C3A; emu_last_ip = 0x1D19; emu_last_length = 0x0008; emu_last_crc = 0x1F0E; emu_call(); return; }
	f__0C3A_1C08_0069_2044(); return;
}

/**
 * Decompiled function f__0C3A_1D1E_0003_5DA9()
 *
 * @name f__0C3A_1D1E_0003_5DA9
 * @implements 0C3A:1D1E:0003:5DA9 ()
 *
 * Called From: 0C3A:1D19:001D:9D99
 */
void f__0C3A_1D1E_0003_5DA9()
{
	f__0C3A_1E46_0009_5A36(); return;
}

/**
 * Decompiled function f__0C3A_1E46_0009_5A36()
 *
 * @name f__0C3A_1E46_0009_5A36
 * @implements 0C3A:1E46:0009:5A36 ()
 *
 * Called From: 0C3A:1D1E:0003:5DA9
 */
void f__0C3A_1E46_0009_5A36()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0C3A_1B97_0003_5C0D(); return;
}

/**
 * Decompiled function f__0C3A_1E4F_0006_F7CE()
 *
 * @name f__0C3A_1E4F_0006_F7CE
 * @implements 0C3A:1E4F:0006:F7CE ()
 *
 * Called From: 0C3A:1B97:0003:5C0D
 */
void f__0C3A_1E4F_0006_F7CE()
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
 * Decompiled function f__0C3A_1E67_0011_E44A()
 *
 * @name f__0C3A_1E67_0011_E44A
 * @implements 0C3A:1E67:0011:E44A ()
 *
 * Called From: 0C3A:1879:0023:A7FF
 * Called From: 0C3A:1A09:001E:E768
 */
void f__0C3A_1E67_0011_E44A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_1E78_000D_8192(); return; }
	/* Unresolved jump */ emu_ip = 0x1F6C; emu_last_cs = 0x0C3A; emu_last_ip = 0x1E75; emu_last_length = 0x0011; emu_last_crc = 0xE44A; emu_call();
}

/**
 * Decompiled function f__0C3A_1E78_000D_8192()
 *
 * @name f__0C3A_1E78_000D_8192
 * @implements 0C3A:1E78:000D:8192 ()
 *
 * Called From: 0C3A:1E73:0011:E44A
 */
void f__0C3A_1E78_000D_8192()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { f__0C3A_1E85_0018_6B6F(); return; }
	f__0C3A_1F6C_0004_893F(); return;
}

/**
 * Decompiled function f__0C3A_1E85_0018_6B6F()
 *
 * @name f__0C3A_1E85_0018_6B6F
 * @implements 0C3A:1E85:0018:6B6F ()
 *
 * Called From: 0C3A:1E80:000D:8192
 */
void f__0C3A_1E85_0018_6B6F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1EC8; emu_last_cs = 0x0C3A; emu_last_ip = 0x1E8D; emu_last_length = 0x0018; emu_last_crc = 0x6B6F; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1E9D); emu_cs = 0x1082; emu_Building_Get_ByIndex();
	f__0C3A_1E9D_0012_F3F8();
}

/**
 * Decompiled function f__0C3A_1E9D_0012_F3F8()
 *
 * @name f__0C3A_1E9D_0012_F3F8
 * @implements 0C3A:1E9D:0012:F3F8 ()
 *
 * Called From: 0C3A:1E9D:0018:6B6F
 */
void f__0C3A_1E9D_0012_F3F8()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1EAF); emu_cs = 0x1082; emu_Memory_Building_Free();
	f__0C3A_1EAF_0019_AC4B();
}

/**
 * Decompiled function f__0C3A_1EAF_0019_AC4B()
 *
 * @name f__0C3A_1EAF_0019_AC4B
 * @implements 0C3A:1EAF:0019:AC4B ()
 *
 * Called From: 0C3A:1EAF:0012:F3F8
 */
void f__0C3A_1EAF_0019_AC4B()
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
	f__0C3A_1EFF_0024_7F8D(); return;
}

/**
 * Decompiled function f__0C3A_1EFF_0024_7F8D()
 *
 * @name f__0C3A_1EFF_0024_7F8D
 * @implements 0C3A:1EFF:0024:7F8D ()
 *
 * Called From: 0C3A:1EC6:0019:AC4B
 */
void f__0C3A_1EFF_0024_7F8D()
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
	f__0C3A_1F23_0014_9D7F();
}

/**
 * Decompiled function f__0C3A_1F23_0014_9D7F()
 *
 * @name f__0C3A_1F23_0014_9D7F
 * @implements 0C3A:1F23:0014:9D7F ()
 *
 * Called From: 0C3A:1F23:0024:7F8D
 */
void f__0C3A_1F23_0014_9D7F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x1F37); emu_cs = 0x34C1; ovl__34C1(0);
	f__0C3A_1F37_0011_68E8();
}

/**
 * Decompiled function f__0C3A_1F37_0011_68E8()
 *
 * @name f__0C3A_1F37_0011_68E8
 * @implements 0C3A:1F37:0011:68E8 ()
 *
 * Called From: 0C3A:1F37:0014:9D7F
 */
void f__0C3A_1F37_0011_68E8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1F48); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__0C3A_1F48_0028_F5E4();
}

/**
 * Decompiled function f__0C3A_1F48_0028_F5E4()
 *
 * @name f__0C3A_1F48_0028_F5E4
 * @implements 0C3A:1F48:0028:F5E4 ()
 *
 * Called From: 0C3A:1F48:0011:68E8
 */
void f__0C3A_1F48_0028_F5E4()
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
 * Decompiled function f__0C3A_1F6C_0004_893F()
 *
 * @name f__0C3A_1F6C_0004_893F
 * @implements 0C3A:1F6C:0004:893F ()
 *
 * Called From: 0C3A:1E82:000D:8192
 */
void f__0C3A_1F6C_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_1F70_0010_8DB3()
 *
 * @name f__0C3A_1F70_0010_8DB3
 * @implements 0C3A:1F70:0010:8DB3 ()
 *
 * Called From: 0C3A:0723:0015:4096
 * Called From: 0C3A:0723:001E:737A
 * Called From: 0C3A:11F8:000E:67F9
 * Called From: 1391:077C:000C:2418
 * Called From: B511:033A:000C:E8B5
 */
void f__0C3A_1F70_0010_8DB3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1F80); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__0C3A_1F80_0012_95B8();
}

/**
 * Decompiled function f__0C3A_1F80_0012_95B8()
 *
 * @name f__0C3A_1F80_0012_95B8
 * @implements 0C3A:1F80:0012:95B8 ()
 *
 * Called From: 0C3A:1F80:0010:8DB3
 */
void f__0C3A_1F80_0012_95B8()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!emu_flags.zf) { f__0C3A_1F92_0022_E6F2(); return; }
	/* Unresolved jump */ emu_ip = 0x20D5; emu_last_cs = 0x0C3A; emu_last_ip = 0x1F8F; emu_last_length = 0x0012; emu_last_crc = 0x95B8; emu_call();
}

/**
 * Decompiled function f__0C3A_1F92_0022_E6F2()
 *
 * @name f__0C3A_1F92_0022_E6F2
 * @implements 0C3A:1F92:0022:E6F2 ()
 *
 * Called From: 0C3A:1F8D:0012:95B8
 */
void f__0C3A_1F92_0022_E6F2()
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
	emu_push(emu_cs); emu_push(0x1FB4); emu_cs = 0x1082; f__1082_00FD_003A_D7E0();
	f__0C3A_1FB4_0006_D729();
}

/**
 * Decompiled function f__0C3A_1FB4_0006_D729()
 *
 * @name f__0C3A_1FB4_0006_D729
 * @implements 0C3A:1FB4:0006:D729 ()
 *
 * Called From: 0C3A:1FB4:0022:E6F2
 */
void f__0C3A_1FB4_0006_D729()
{
	emu_addws(&emu_sp, 0x8);
	f__0C3A_2067_0011_DA22(); return;
}

/**
 * Decompiled function f__0C3A_1FBA_0053_1870()
 *
 * @name f__0C3A_1FBA_0053_1870
 * @implements 0C3A:1FBA:0053:1870 ()
 *
 * Called From: 0C3A:2075:0011:DA22
 * Called From: 0C3A:2075:0013:9114
 */
void f__0C3A_1FBA_0053_1870()
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
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_2050_0015_64A0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_2043_000D_1BB4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x200D); emu_cs = 0x34C1; ovl__34C1(2);
	f__0C3A_200D_000E_D0A4();
}

/**
 * Decompiled function f__0C3A_200D_000E_D0A4()
 *
 * @name f__0C3A_200D_000E_D0A4
 * @implements 0C3A:200D:000E:D0A4 ()
 *
 * Called From: 0C3A:200D:0053:1870
 */
void f__0C3A_200D_000E_D0A4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, 0x80);
	if ((emu_flags.cf || emu_flags.zf)) { f__0C3A_201B_000F_00C3(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__0C3A_201E_000C_72C2(); return;
}

/**
 * Decompiled function f__0C3A_201B_000F_00C3()
 *
 * @name f__0C3A_201B_000F_00C3
 * @implements 0C3A:201B:000F:00C3 ()
 *
 * Called From: 0C3A:2015:000E:D0A4
 */
void f__0C3A_201B_000F_00C3()
{
	emu_movw(&emu_ax.x, 0x80);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, 0xFF);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x202A; emu_last_cs = 0x0C3A; emu_last_ip = 0x2024; emu_last_length = 0x000F; emu_last_crc = 0x00C3; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__0C3A_202D_0012_1AF4(); return;
}

/**
 * Decompiled function f__0C3A_201E_000C_72C2()
 *
 * @name f__0C3A_201E_000C_72C2
 * @implements 0C3A:201E:000C:72C2 ()
 *
 * Called From: 0C3A:2019:000E:D0A4
 */
void f__0C3A_201E_000C_72C2()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, 0xFF);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x202A; emu_last_cs = 0x0C3A; emu_last_ip = 0x2024; emu_last_length = 0x000C; emu_last_crc = 0x72C2; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__0C3A_202D_0012_1AF4(); return;
}

/**
 * Decompiled function f__0C3A_202D_0012_1AF4()
 *
 * @name f__0C3A_202D_0012_1AF4
 * @implements 0C3A:202D:0012:1AF4 ()
 *
 * Called From: 0C3A:2028:000F:00C3
 * Called From: 0C3A:2028:000C:72C2
 */
void f__0C3A_202D_0012_1AF4()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x203F); emu_cs = 0x34C1; ovl__34C1(0);
	f__0C3A_203F_0004_5F9F();
}

/**
 * Decompiled function f__0C3A_203F_0004_5F9F()
 *
 * @name f__0C3A_203F_0004_5F9F
 * @implements 0C3A:203F:0004:5F9F ()
 *
 * Called From: 0C3A:203F:0012:1AF4
 */
void f__0C3A_203F_0004_5F9F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__0C3A_204C_0004_EA3A(); return;
}

/**
 * Decompiled function f__0C3A_2043_000D_1BB4()
 *
 * @name f__0C3A_2043_000D_1BB4
 * @implements 0C3A:2043:000D:1BB4 ()
 *
 * Called From: 0C3A:1FF8:0053:1870
 */
void f__0C3A_2043_000D_1BB4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_di, emu_ax.x);
	f__0C3A_205A_000B_166D(); return;
}

/**
 * Decompiled function f__0C3A_204C_0004_EA3A()
 *
 * @name f__0C3A_204C_0004_EA3A
 * @implements 0C3A:204C:0004:EA3A ()
 *
 * Called From: 0C3A:2041:0004:5F9F
 */
void f__0C3A_204C_0004_EA3A()
{
	emu_addw(&emu_di, emu_ax.x);
	f__0C3A_205A_000B_166D(); return;
}

/**
 * Decompiled function f__0C3A_2050_0015_64A0()
 *
 * @name f__0C3A_2050_0015_64A0
 * @implements 0C3A:2050:0015:64A0 ()
 *
 * Called From: 0C3A:1FE8:0053:1870
 */
void f__0C3A_2050_0015_64A0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x38));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2065); emu_cs = 0x1082; emu_Building_Find();
	f__0C3A_2065_0013_9114();
}

/**
 * Decompiled function f__0C3A_205A_000B_166D()
 *
 * @name f__0C3A_205A_000B_166D
 * @implements 0C3A:205A:000B:166D ()
 *
 * Called From: 0C3A:204E:0004:EA3A
 * Called From: 0C3A:204E:000D:1BB4
 */
void f__0C3A_205A_000B_166D()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2065); emu_cs = 0x1082; emu_Building_Find();
	f__0C3A_2065_0013_9114();
}

/**
 * Decompiled function f__0C3A_2065_0013_9114()
 *
 * @name f__0C3A_2065_0013_9114
 * @implements 0C3A:2065:0013:9114 ()
 *
 * Called From: 0C3A:2065:0015:64A0
 * Called From: 0C3A:2065:000B:166D
 */
void f__0C3A_2065_0013_9114()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.zf) { f__0C3A_2078_002C_9F6D(); return; }
	f__0C3A_1FBA_0053_1870(); return;
}

/**
 * Decompiled function f__0C3A_2067_0011_DA22()
 *
 * @name f__0C3A_2067_0011_DA22
 * @implements 0C3A:2067:0011:DA22 ()
 *
 * Called From: 0C3A:1FB7:0006:D729
 */
void f__0C3A_2067_0011_DA22()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_flags.zf) { f__0C3A_2078_002C_9F6D(); return; }
	f__0C3A_1FBA_0053_1870(); return;
}

/**
 * Decompiled function f__0C3A_2078_002C_9F6D()
 *
 * @name f__0C3A_2078_002C_9F6D
 * @implements 0C3A:2078:002C:9F6D ()
 *
 * Called From: 0C3A:2073:0013:9114
 * Called From: 0C3A:2073:0011:DA22
 */
void f__0C3A_2078_002C_9F6D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__0C3A_20AF_002C_4899(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0C3A_20AF_002C_4899(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x10E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x20A4); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0C3A_20A4_0008_A466();
}

/**
 * Decompiled function f__0C3A_20A4_0008_A466()
 *
 * @name f__0C3A_20A4_0008_A466
 * @implements 0C3A:20A4:0008:A466 ()
 *
 * Called From: 0C3A:20A4:002C:9F6D
 */
void f__0C3A_20A4_0008_A466()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x20AC); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__0C3A_20AC_002F_7D88();
}

/**
 * Decompiled function f__0C3A_20AC_002F_7D88()
 *
 * @name f__0C3A_20AC_002F_7D88
 * @implements 0C3A:20AC:002F:7D88 ()
 *
 * Called From: 0C3A:20AC:0008:A466
 */
void f__0C3A_20AC_002F_7D88()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x20D5; emu_last_cs = 0x0C3A; emu_last_ip = 0x20B9; emu_last_length = 0x002F; emu_last_crc = 0x7D88; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	if (!emu_flags.zf) { f__0C3A_20D5_0006_F7CE(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x20D5; emu_last_cs = 0x0C3A; emu_last_ip = 0x20CD; emu_last_length = 0x002F; emu_last_crc = 0x7D88; emu_call(); return; }
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
 * Decompiled function f__0C3A_20AF_002C_4899()
 *
 * @name f__0C3A_20AF_002C_4899
 * @implements 0C3A:20AF:002C:4899 ()
 *
 * Called From: 0C3A:2090:002C:9F6D
 * Called From: 0C3A:2095:002C:9F6D
 */
void f__0C3A_20AF_002C_4899()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__0C3A_20D5_0006_F7CE(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	if (!emu_flags.zf) { f__0C3A_20D5_0006_F7CE(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x20D5; emu_last_cs = 0x0C3A; emu_last_ip = 0x20CD; emu_last_length = 0x002C; emu_last_crc = 0x4899; emu_call(); return; }
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
 * Decompiled function f__0C3A_20D5_0006_F7CE()
 *
 * @name f__0C3A_20D5_0006_F7CE
 * @implements 0C3A:20D5:0006:F7CE ()
 *
 * Called From: 0C3A:20B9:002C:4899
 * Called From: 0C3A:20C6:002C:4899
 * Called From: 0C3A:20C6:002F:7D88
 */
void f__0C3A_20D5_0006_F7CE()
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
 * Decompiled function f__0C3A_20DB_0011_DA16()
 *
 * @name f__0C3A_20DB_0011_DA16
 * @implements 0C3A:20DB:0011:DA16 ()
 *
 * Called From: 1391:0789:000D:5BF0
 */
void f__0C3A_20DB_0011_DA16()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x14);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x20EC); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__0C3A_20EC_0027_F812();
}

/**
 * Decompiled function f__0C3A_20EC_0027_F812()
 *
 * @name f__0C3A_20EC_0027_F812
 * @implements 0C3A:20EC:0027:F812 ()
 *
 * Called From: 0C3A:20EC:0011:DA16
 */
void f__0C3A_20EC_0027_F812()
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
	if (!emu_flags.zf) { f__0C3A_2114_000B_0CED(); return; }
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2113); emu_cs = 0x34CD; ovl__34CD(16);
	f__0C3A_2113_000C_097D();
}

/**
 * Decompiled function f__0C3A_2113_000C_097D()
 *
 * @name f__0C3A_2113_000C_097D
 * @implements 0C3A:2113:000C:097D ()
 *
 * Called From: 0C3A:2113:0027:F812
 */
void f__0C3A_2113_000C_097D()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x211F); emu_cs = 0x34C1; ovl__34C1(2);
	f__0C3A_211F_0011_B618();
}

/**
 * Decompiled function f__0C3A_2114_000B_0CED()
 *
 * @name f__0C3A_2114_000B_0CED
 * @implements 0C3A:2114:000B:0CED ()
 *
 * Called From: 0C3A:210B:0027:F812
 */
void f__0C3A_2114_000B_0CED()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x211F); emu_cs = 0x34C1; ovl__34C1(2);
	f__0C3A_211F_0011_B618();
}

/**
 * Decompiled function f__0C3A_211F_0011_B618()
 *
 * @name f__0C3A_211F_0011_B618
 * @implements 0C3A:211F:0011:B618 ()
 *
 * Called From: 0C3A:211F:000C:097D
 * Called From: 0C3A:211F:000B:0CED
 */
void f__0C3A_211F_0011_B618()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x100);
	if (!emu_flags.cf) { f__0C3A_2130_0016_7245(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__0C3A_2133_0013_8247(); return;
}

/**
 * Decompiled function f__0C3A_2130_0016_7245()
 *
 * @name f__0C3A_2130_0016_7245
 * @implements 0C3A:2130:0016:7245 ()
 *
 * Called From: 0C3A:2129:0011:B618
 */
void f__0C3A_2130_0016_7245()
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
	emu_push(emu_cs); emu_push(0x2146); emu_cs = 0x1082; f__1082_00FD_003A_D7E0();
	f__0C3A_2146_0006_972B();
}

/**
 * Decompiled function f__0C3A_2133_0013_8247()
 *
 * @name f__0C3A_2133_0013_8247
 * @implements 0C3A:2133:0013:8247 ()
 *
 * Called From: 0C3A:212E:0011:B618
 */
void f__0C3A_2133_0013_8247()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2146); emu_cs = 0x1082; f__1082_00FD_003A_D7E0();
	f__0C3A_2146_0006_972B();
}

/**
 * Decompiled function f__0C3A_2146_0006_972B()
 *
 * @name f__0C3A_2146_0006_972B
 * @implements 0C3A:2146:0006:972B ()
 *
 * Called From: 0C3A:2146:0016:7245
 * Called From: 0C3A:2146:0013:8247
 */
void f__0C3A_2146_0006_972B()
{
	emu_addws(&emu_sp, 0x8);
	f__0C3A_21F0_0011_A6C7(); return;
}

/**
 * Decompiled function f__0C3A_214C_0033_3F6A()
 *
 * @name f__0C3A_214C_0033_3F6A
 * @implements 0C3A:214C:0033:3F6A ()
 *
 * Called From: 0C3A:21FE:0011:A6C7
 * Called From: 0C3A:21FE:0013:EDF1
 */
void f__0C3A_214C_0033_3F6A()
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
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x21E3; emu_last_cs = 0x0C3A; emu_last_ip = 0x216E; emu_last_length = 0x0033; emu_last_crc = 0x3F6A; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x217F); emu_cs = 0x34C1; ovl__34C1(0);
	f__0C3A_217F_0026_4E19();
}

/**
 * Decompiled function f__0C3A_217F_0026_4E19()
 *
 * @name f__0C3A_217F_0026_4E19
 * @implements 0C3A:217F:0026:4E19 ()
 *
 * Called From: 0C3A:217F:0033:3F6A
 */
void f__0C3A_217F_0026_4E19()
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
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0C3A_21A5_003B_F488(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x56));
	f__0C3A_21AE_0032_57F2(); return;
}

/**
 * Decompiled function f__0C3A_21A5_003B_F488()
 *
 * @name f__0C3A_21A5_003B_F488
 * @implements 0C3A:21A5:003B:F488 ()
 *
 * Called From: 0C3A:219A:0026:4E19
 */
void f__0C3A_21A5_003B_F488()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_sarw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x56));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_21E3_000B_166D(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x21E3; emu_last_cs = 0x0C3A; emu_last_ip = 0x21CE; emu_last_length = 0x003B; emu_last_crc = 0xF488; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs);
	emu_push(0x21E0); f__0C3A_1216_0013_E56D();
	f__0C3A_21E0_000E_34E7();
}

/**
 * Decompiled function f__0C3A_21AE_0032_57F2()
 *
 * @name f__0C3A_21AE_0032_57F2
 * @implements 0C3A:21AE:0032:57F2 ()
 *
 * Called From: 0C3A:21A3:0026:4E19
 */
void f__0C3A_21AE_0032_57F2()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x56));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_21E3_000B_166D(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x21E3; emu_last_cs = 0x0C3A; emu_last_ip = 0x21CE; emu_last_length = 0x0032; emu_last_crc = 0x57F2; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs);
	emu_push(0x21E0); f__0C3A_1216_0013_E56D();
	f__0C3A_21E0_000E_34E7();
}

/**
 * Decompiled function f__0C3A_21E0_000E_34E7()
 *
 * @name f__0C3A_21E0_000E_34E7
 * @implements 0C3A:21E0:000E:34E7 ()
 *
 * Called From: 0C3A:21E0:003B:F488
 */
void f__0C3A_21E0_000E_34E7()
{
	emu_addws(&emu_sp, 0x8);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x21EE); emu_cs = 0x1082; emu_Building_Find();
	f__0C3A_21EE_0013_EDF1();
}

/**
 * Decompiled function f__0C3A_21E3_000B_166D()
 *
 * @name f__0C3A_21E3_000B_166D
 * @implements 0C3A:21E3:000B:166D ()
 *
 * Called From: 0C3A:21C3:0032:57F2
 * Called From: 0C3A:21C3:003B:F488
 */
void f__0C3A_21E3_000B_166D()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x21EE); emu_cs = 0x1082; emu_Building_Find();
	f__0C3A_21EE_0013_EDF1();
}

/**
 * Decompiled function f__0C3A_21EE_0013_EDF1()
 *
 * @name f__0C3A_21EE_0013_EDF1
 * @implements 0C3A:21EE:0013:EDF1 ()
 *
 * Called From: 0C3A:21EE:000B:166D
 * Called From: 0C3A:21EE:000E:34E7
 */
void f__0C3A_21EE_0013_EDF1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.zf) { f__0C3A_2201_0006_F7CE(); return; }
	f__0C3A_214C_0033_3F6A(); return;
}

/**
 * Decompiled function f__0C3A_21F0_0011_A6C7()
 *
 * @name f__0C3A_21F0_0011_A6C7
 * @implements 0C3A:21F0:0011:A6C7 ()
 *
 * Called From: 0C3A:2149:0006:972B
 */
void f__0C3A_21F0_0011_A6C7()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.zf) { f__0C3A_2201_0006_F7CE(); return; }
	f__0C3A_214C_0033_3F6A(); return;
}

/**
 * Decompiled function f__0C3A_2201_0006_F7CE()
 *
 * @name f__0C3A_2201_0006_F7CE
 * @implements 0C3A:2201:0006:F7CE ()
 *
 * Called From: 0C3A:21FC:0013:EDF1
 * Called From: 0C3A:21FC:0011:A6C7
 */
void f__0C3A_2201_0006_F7CE()
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
 * Decompiled function f__0C3A_2207_001D_EDF2()
 *
 * @name f__0C3A_2207_001D_EDF2
 * @implements 0C3A:2207:001D:EDF2 ()
 *
 * Called From: 0C3A:23D3:0010:BC47
 * Called From: 1A34:35E0:0015:9E61
 */
void f__0C3A_2207_001D_EDF2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x221F; emu_last_cs = 0x0C3A; emu_last_ip = 0x2215; emu_last_length = 0x001D; emu_last_crc = 0xEDF2; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__0C3A_2224_0014_B608(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x22C7; emu_last_cs = 0x0C3A; emu_last_ip = 0x2221; emu_last_length = 0x001D; emu_last_crc = 0xEDF2; emu_call();
}

/**
 * Decompiled function f__0C3A_221F_0005_DC9C()
 *
 * @name f__0C3A_221F_0005_DC9C
 * @implements 0C3A:221F:0005:DC9C ()
 *
 * Called From: 0C3A:2246:0008:984F
 */
void f__0C3A_221F_0005_DC9C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C3A_22C7_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_2221_0003_DD08()
 *
 * @name f__0C3A_2221_0003_DD08
 * @implements 0C3A:2221:0003:DD08 ()
 *
 * Called From: 0C3A:22C4:0005:86E2
 */
void f__0C3A_2221_0003_DD08()
{
	f__0C3A_22C7_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_2224_0014_B608()
 *
 * @name f__0C3A_2224_0014_B608
 * @implements 0C3A:2224:0014:B608 ()
 *
 * Called From: 0C3A:221D:001D:EDF2
 */
void f__0C3A_2224_0014_B608()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2238); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__0C3A_2238_0008_9688();
}

/**
 * Decompiled function f__0C3A_2238_0008_9688()
 *
 * @name f__0C3A_2238_0008_9688
 * @implements 0C3A:2238:0008:9688 ()
 *
 * Called From: 0C3A:2238:0014:B608
 */
void f__0C3A_2238_0008_9688()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2240); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	f__0C3A_2240_0008_984F();
}

/**
 * Decompiled function f__0C3A_2240_0008_984F()
 *
 * @name f__0C3A_2240_0008_984F
 * @implements 0C3A:2240:0008:984F ()
 *
 * Called From: 0C3A:2240:0008:9688
 */
void f__0C3A_2240_0008_984F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__0C3A_2248_001B_BBAA(); return; }
	f__0C3A_221F_0005_DC9C(); return;
}

/**
 * Decompiled function f__0C3A_2248_001B_BBAA()
 *
 * @name f__0C3A_2248_001B_BBAA
 * @implements 0C3A:2248:001B:BBAA ()
 *
 * Called From: 0C3A:2244:0008:984F
 */
void f__0C3A_2248_001B_BBAA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__0C3A_2263_0043_67B1(); return; }
	/* Unresolved jump */ emu_ip = 0x221F; emu_last_cs = 0x0C3A; emu_last_ip = 0x2261; emu_last_length = 0x001B; emu_last_crc = 0xBBAA; emu_call();
}

/**
 * Decompiled function f__0C3A_2263_0043_67B1()
 *
 * @name f__0C3A_2263_0043_67B1
 * @implements 0C3A:2263:0043:67B1 ()
 *
 * Called From: 0C3A:225F:001B:BBAA
 */
void f__0C3A_2263_0043_67B1()
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
	emu_push(emu_cs); emu_push(0x22A6); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	f__0C3A_22A6_001C_0224();
}

/**
 * Decompiled function f__0C3A_22A6_001C_0224()
 *
 * @name f__0C3A_22A6_001C_0224
 * @implements 0C3A:22A6:001C:0224 ()
 *
 * Called From: 0C3A:22A6:0043:67B1
 */
void f__0C3A_22A6_001C_0224()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x22B7; emu_last_cs = 0x0C3A; emu_last_ip = 0x22AD; emu_last_length = 0x001C; emu_last_crc = 0x0224; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_di);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, 0x7D00);
	if ((emu_flags.cf || emu_flags.zf)) { f__0C3A_22C2_0005_86E2(); return; }
	emu_movw(&emu_ax.x, 0x7D00);
	/* Unresolved jump */ emu_ip = 0x22C4; emu_last_cs = 0x0C3A; emu_last_ip = 0x22C0; emu_last_length = 0x001C; emu_last_crc = 0x0224; emu_call();
}

/**
 * Decompiled function f__0C3A_22C2_0005_86E2()
 *
 * @name f__0C3A_22C2_0005_86E2
 * @implements 0C3A:22C2:0005:86E2 ()
 *
 * Called From: 0C3A:22BB:001C:0224
 */
void f__0C3A_22C2_0005_86E2()
{
	emu_movw(&emu_ax.x, emu_si);
	f__0C3A_2221_0003_DD08(); return;
}

/**
 * Decompiled function f__0C3A_22C7_0006_F7CE()
 *
 * @name f__0C3A_22C7_0006_F7CE
 * @implements 0C3A:22C7:0006:F7CE ()
 *
 * Called From: 0C3A:2221:0005:DC9C
 * Called From: 0C3A:2221:0003:DD08
 */
void f__0C3A_22C7_0006_F7CE()
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
 * Decompiled function f__0C3A_22CD_0029_8F46()
 *
 * @name f__0C3A_22CD_0029_8F46
 * @implements 0C3A:22CD:0029:8F46 ()
 *
 * Called From: 1A34:35A2:001F:BC73
 */
void f__0C3A_22CD_0029_8F46()
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
	if (!emu_flags.zf) { f__0C3A_22F6_000C_39D3(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x242D; emu_last_cs = 0x0C3A; emu_last_ip = 0x22F3; emu_last_length = 0x0029; emu_last_crc = 0x8F46; emu_call();
}

/**
 * Decompiled function f__0C3A_22F3_0003_DDAD()
 *
 * @name f__0C3A_22F3_0003_DDAD
 * @implements 0C3A:22F3:0003:DDAD ()
 *
 * Called From: 0C3A:242A:0019:1EF3
 * Called From: 0C3A:242A:0009:9B9D
 */
void f__0C3A_22F3_0003_DDAD()
{
	f__0C3A_242D_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_22F6_000C_39D3()
 *
 * @name f__0C3A_22F6_000C_39D3
 * @implements 0C3A:22F6:000C:39D3 ()
 *
 * Called From: 0C3A:22ED:0029:8F46
 */
void f__0C3A_22F6_000C_39D3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4D));
	emu_push(emu_cs); emu_push(0x2302); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	f__0C3A_2302_003A_85DA();
}

/**
 * Decompiled function f__0C3A_2302_003A_85DA()
 *
 * @name f__0C3A_2302_003A_85DA
 * @implements 0C3A:2302:003A:85DA ()
 *
 * Called From: 0C3A:2302:000C:39D3
 */
void f__0C3A_2302_003A_85DA()
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
	emu_push(emu_cs); emu_push(0x233C); emu_cs = 0x1082; f__1082_00FD_003A_D7E0();
	f__0C3A_233C_0006_D732();
}

/**
 * Decompiled function f__0C3A_233C_0006_D732()
 *
 * @name f__0C3A_233C_0006_D732
 * @implements 0C3A:233C:0006:D732 ()
 *
 * Called From: 0C3A:233C:003A:85DA
 */
void f__0C3A_233C_0006_D732()
{
	emu_addws(&emu_sp, 0x8);
	f__0C3A_2403_0011_D65A(); return;
}

/**
 * Decompiled function f__0C3A_2342_005A_53AA()
 *
 * @name f__0C3A_2342_005A_53AA
 * @implements 0C3A:2342:005A:53AA ()
 *
 * Called From: 0C3A:2411:0011:D65A
 * Called From: 0C3A:2411:0013:9D6C
 */
void f__0C3A_2342_005A_53AA()
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
	if (emu_flags.zf) { f__0C3A_23C6_0010_BC47(); return; }
	emu_cmpws(&emu_di, 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x23C6; emu_last_cs = 0x0C3A; emu_last_ip = 0x237F; emu_last_length = 0x005A; emu_last_crc = 0x53AA; emu_call(); return; }
	emu_cmpws(&emu_di, 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x23A4; emu_last_cs = 0x0C3A; emu_last_ip = 0x2384; emu_last_length = 0x005A; emu_last_crc = 0x53AA; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x239C); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__0C3A_239C_001E_17E0();
}

/**
 * Decompiled function f__0C3A_239C_001E_17E0()
 *
 * @name f__0C3A_239C_001E_17E0
 * @implements 0C3A:239C:001E:17E0 ()
 *
 * Called From: 0C3A:239C:005A:53AA
 */
void f__0C3A_239C_001E_17E0()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0C3A_23C6_0010_BC47(); return; }
	emu_cmpws(&emu_di, 0x2);
	if (!emu_flags.zf) { f__0C3A_23F6_000B_166D(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x23BA); emu_cs = 0x0F3F; emu_ip = 0x00B4; emu_last_cs = 0x0C3A; emu_last_ip = 0x23B5; emu_last_length = 0x001E; emu_last_crc = 0x17E0; emu_call();
	/* Unresolved jump */ emu_ip = 0x23BA; emu_last_cs = 0x0C3A; emu_last_ip = 0x23BA; emu_last_length = 0x001E; emu_last_crc = 0x17E0; emu_call();
}

/**
 * Decompiled function f__0C3A_23C6_0010_BC47()
 *
 * @name f__0C3A_23C6_0010_BC47
 * @implements 0C3A:23C6:0010:BC47 ()
 *
 * Called From: 0C3A:237A:005A:53AA
 * Called From: 0C3A:23A2:001E:17E0
 */
void f__0C3A_23C6_0010_BC47()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x23D6); f__0C3A_2207_001D_EDF2();
	f__0C3A_23D6_002B_25DC();
}

/**
 * Decompiled function f__0C3A_23D6_002B_25DC()
 *
 * @name f__0C3A_23D6_002B_25DC
 * @implements 0C3A:23D6:002B:25DC ()
 *
 * Called From: 0C3A:23D6:0010:BC47
 */
void f__0C3A_23D6_002B_25DC()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((emu_flags.sf != emu_flags.of)) { f__0C3A_23F6_000B_166D(); return; }
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
	emu_push(emu_cs); emu_push(0x2401); emu_cs = 0x1082; emu_Building_Find();
	f__0C3A_2401_0013_9D6C();
}

/**
 * Decompiled function f__0C3A_23F6_000B_166D()
 *
 * @name f__0C3A_23F6_000B_166D
 * @implements 0C3A:23F6:000B:166D ()
 *
 * Called From: 0C3A:23A7:001E:17E0
 * Called From: 0C3A:23E2:002B:25DC
 */
void f__0C3A_23F6_000B_166D()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2401); emu_cs = 0x1082; emu_Building_Find();
	f__0C3A_2401_0013_9D6C();
}

/**
 * Decompiled function f__0C3A_2401_0013_9D6C()
 *
 * @name f__0C3A_2401_0013_9D6C
 * @implements 0C3A:2401:0013:9D6C ()
 *
 * Called From: 0C3A:2401:002B:25DC
 * Called From: 0C3A:2401:000B:166D
 */
void f__0C3A_2401_0013_9D6C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__0C3A_2414_0019_1EF3(); return; }
	f__0C3A_2342_005A_53AA(); return;
}

/**
 * Decompiled function f__0C3A_2403_0011_D65A()
 *
 * @name f__0C3A_2403_0011_D65A
 * @implements 0C3A:2403:0011:D65A ()
 *
 * Called From: 0C3A:233F:0006:D732
 */
void f__0C3A_2403_0011_D65A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__0C3A_2414_0019_1EF3(); return; }
	f__0C3A_2342_005A_53AA(); return;
}

/**
 * Decompiled function f__0C3A_2414_0019_1EF3()
 *
 * @name f__0C3A_2414_0019_1EF3
 * @implements 0C3A:2414:0019:1EF3 ()
 *
 * Called From: 0C3A:240F:0013:9D6C
 * Called From: 0C3A:240F:0011:D65A
 */
void f__0C3A_2414_0019_1EF3()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (!emu_flags.zf) { f__0C3A_2424_0009_9B9D(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__0C3A_22F3_0003_DDAD(); return;
}

/**
 * Decompiled function f__0C3A_2424_0009_9B9D()
 *
 * @name f__0C3A_2424_0009_9B9D
 * @implements 0C3A:2424:0009:9B9D ()
 *
 * Called From: 0C3A:2418:0019:1EF3
 */
void f__0C3A_2424_0009_9B9D()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__0C3A_22F3_0003_DDAD(); return;
}

/**
 * Decompiled function f__0C3A_242D_0006_F7CE()
 *
 * @name f__0C3A_242D_0006_F7CE
 * @implements 0C3A:242D:0006:F7CE ()
 *
 * Called From: 0C3A:22F3:0003:DDAD
 */
void f__0C3A_242D_0006_F7CE()
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
 * Decompiled function f__0C3A_2433_0042_DBC6()
 *
 * @name f__0C3A_2433_0042_DBC6
 * @implements 0C3A:2433:0042:DBC6 ()
 *
 * Called From: B511:01D2:000B:5450
 */
void f__0C3A_2433_0042_DBC6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2478; emu_last_cs = 0x0C3A; emu_last_ip = 0x243C; emu_last_length = 0x0042; emu_last_crc = 0xDBC6; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2478; emu_last_cs = 0x0C3A; emu_last_ip = 0x244A; emu_last_length = 0x0042; emu_last_crc = 0xDBC6; emu_call(); return; }
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
	f__0C3A_2475_0005_6143();
}

/**
 * Decompiled function f__0C3A_2475_0005_6143()
 *
 * @name f__0C3A_2475_0005_6143
 * @implements 0C3A:2475:0005:6143 ()
 *
 * Called From: 0C3A:2475:0042:DBC6
 */
void f__0C3A_2475_0005_6143()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_247A_0015_EA04()
 *
 * @name f__0C3A_247A_0015_EA04
 * @implements 0C3A:247A:0015:EA04 ()
 *
 * Called From: 0972:0B41:0026:CA0B
 * Called From: 0972:0D41:000E:9B6D
 */
void f__0C3A_247A_0015_EA04()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x14);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_248F_0028_5D23(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x25E6; emu_last_cs = 0x0C3A; emu_last_ip = 0x248C; emu_last_length = 0x0015; emu_last_crc = 0xEA04; emu_call();
}

/**
 * Decompiled function f__0C3A_248C_0003_DDB5()
 *
 * @name f__0C3A_248C_0003_DDB5
 * @implements 0C3A:248C:0003:DDB5 ()
 *
 * Called From: 0C3A:25E3:0006:EC34
 */
void f__0C3A_248C_0003_DDB5()
{
	f__0C3A_25E6_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C3A_248F_0028_5D23()
 *
 * @name f__0C3A_248F_0028_5D23
 * @implements 0C3A:248F:0028:5D23 ()
 *
 * Called From: 0C3A:2488:0015:EA04
 */
void f__0C3A_248F_0028_5D23()
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
	emu_push(emu_cs); emu_push(0x24B7); emu_cs = 0x0F3F; f__0F3F_0275_0019_64C3();
	f__0C3A_24B7_0009_3ADE();
}

/**
 * Decompiled function f__0C3A_24B7_0009_3ADE()
 *
 * @name f__0C3A_24B7_0009_3ADE
 * @implements 0C3A:24B7:0009:3ADE ()
 *
 * Called From: 0C3A:24B7:0028:5D23
 */
void f__0C3A_24B7_0009_3ADE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x24C0); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__0C3A_24C0_0039_31C8();
}

/**
 * Decompiled function f__0C3A_24C0_0039_31C8()
 *
 * @name f__0C3A_24C0_0039_31C8
 * @implements 0C3A:24C0:0039:31C8 ()
 *
 * Called From: 0C3A:24C0:0009:3ADE
 */
void f__0C3A_24C0_0039_31C8()
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
	if (emu_flags.zf) { f__0C3A_24FF_000F_8F80(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x24F9); emu_cs = 0x34CD; ovl__34CD(27);
	f__0C3A_24F9_0015_A882();
}

/**
 * Decompiled function f__0C3A_24F9_0015_A882()
 *
 * @name f__0C3A_24F9_0015_A882
 * @implements 0C3A:24F9:0015:A882 ()
 *
 * Called From: 0C3A:24F9:0039:31C8
 */
void f__0C3A_24F9_0015_A882()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_push(emu_cs); emu_push(0x250E); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__0C3A_250E_000D_6849();
}

/**
 * Decompiled function f__0C3A_24FF_000F_8F80()
 *
 * @name f__0C3A_24FF_000F_8F80
 * @implements 0C3A:24FF:000F:8F80 ()
 *
 * Called From: 0C3A:24E2:0039:31C8
 */
void f__0C3A_24FF_000F_8F80()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_push(emu_cs); emu_push(0x250E); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__0C3A_250E_000D_6849();
}

/**
 * Decompiled function f__0C3A_250E_000D_6849()
 *
 * @name f__0C3A_250E_000D_6849
 * @implements 0C3A:250E:000D:6849 ()
 *
 * Called From: 0C3A:250E:000F:8F80
 * Called From: 0C3A:250E:0015:A882
 */
void f__0C3A_250E_000D_6849()
{
	emu_andw(&emu_ax.x, 0xF);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x10);
	f__0C3A_25D7_0009_6EC3(); return;
}

/**
 * Decompiled function f__0C3A_251B_0012_24A4()
 *
 * @name f__0C3A_251B_0012_24A4
 * @implements 0C3A:251B:0012:24A4 ()
 *
 * Called From: 0C3A:25DD:0009:6EC3
 * Called From: 0C3A:25DD:000A:7F43
 */
void f__0C3A_251B_0012_24A4()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__0C3A_252D_0017_AE9B(); return; }
	f__0C3A_25B2_0024_F4A5(); return;
}

/**
 * Decompiled function f__0C3A_252D_0017_AE9B()
 *
 * @name f__0C3A_252D_0017_AE9B
 * @implements 0C3A:252D:0017:AE9B ()
 *
 * Called From: 0C3A:2528:0012:24A4
 */
void f__0C3A_252D_0017_AE9B()
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
	f__0C3A_2544_001D_434D();
}

/**
 * Decompiled function f__0C3A_2544_001D_434D()
 *
 * @name f__0C3A_2544_001D_434D
 * @implements 0C3A:2544:001D:434D ()
 *
 * Called From: 0C3A:2544:0017:AE9B
 */
void f__0C3A_2544_001D_434D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x30);
	if (!emu_flags.zf) { f__0C3A_25B2_0024_F4A5(); return; }
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2561); emu_cs = 0x34CD; ovl__34CD(11);
	f__0C3A_2561_000B_44D7();
}

/**
 * Decompiled function f__0C3A_2561_000B_44D7()
 *
 * @name f__0C3A_2561_000B_44D7
 * @implements 0C3A:2561:000B:44D7 ()
 *
 * Called From: 0C3A:2561:001D:434D
 */
void f__0C3A_2561_000B_44D7()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x25B2; emu_last_cs = 0x0C3A; emu_last_ip = 0x2564; emu_last_length = 0x000B; emu_last_crc = 0x44D7; emu_call(); return; }
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x256C); emu_cs = 0x34CD; ovl__34CD(13);
	f__0C3A_256C_0027_DC19();
}

/**
 * Decompiled function f__0C3A_256C_0027_DC19()
 *
 * @name f__0C3A_256C_0027_DC19
 * @implements 0C3A:256C:0027:DC19 ()
 *
 * Called From: 0C3A:256C:000B:44D7
 */
void f__0C3A_256C_0027_DC19()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0xB);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x25B2; emu_last_cs = 0x0C3A; emu_last_ip = 0x2570; emu_last_length = 0x0027; emu_last_crc = 0xDC19; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x6);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x25B2; emu_last_cs = 0x0C3A; emu_last_ip = 0x2576; emu_last_length = 0x0027; emu_last_crc = 0xDC19; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x7);
	if (emu_flags.zf) { f__0C3A_25B2_0024_F4A5(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__0C3A_25AD_0005_2D35(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { f__0C3A_259A_000C_9CB0(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2593); emu_cs = 0x0F3F; f__0F3F_0360_0038_97C0();
	f__0C3A_2593_0013_A3B5();
}

/**
 * Decompiled function f__0C3A_2593_0013_A3B5()
 *
 * @name f__0C3A_2593_0013_A3B5
 * @implements 0C3A:2593:0013:A3B5 ()
 *
 * Called From: 0C3A:2593:0027:DC19
 */
void f__0C3A_2593_0013_A3B5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!(emu_flags.sf != emu_flags.of)) { f__0C3A_25AB_0002_C2BA(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x25A6); emu_cs = 0x0F3F; f__0F3F_0360_0038_97C0();
	f__0C3A_25A6_0007_DC45();
}

/**
 * Decompiled function f__0C3A_259A_000C_9CB0()
 *
 * @name f__0C3A_259A_000C_9CB0
 * @implements 0C3A:259A:000C:9CB0 ()
 *
 * Called From: 0C3A:2588:0027:DC19
 */
void f__0C3A_259A_000C_9CB0()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x25A6); emu_cs = 0x0F3F; f__0F3F_0360_0038_97C0();
	f__0C3A_25A6_0007_DC45();
}

/**
 * Decompiled function f__0C3A_25A6_0007_DC45()
 *
 * @name f__0C3A_25A6_0007_DC45
 * @implements 0C3A:25A6:0007:DC45 ()
 *
 * Called From: 0C3A:25A6:000C:9CB0
 * Called From: 0C3A:25A6:0013:A3B5
 */
void f__0C3A_25A6_0007_DC45()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	f__0C3A_25B2_0024_F4A5(); return;
}

/**
 * Decompiled function f__0C3A_25AB_0002_C2BA()
 *
 * @name f__0C3A_25AB_0002_C2BA
 * @implements 0C3A:25AB:0002:C2BA ()
 *
 * Called From: 0C3A:2598:0013:A3B5
 */
void f__0C3A_25AB_0002_C2BA()
{
	f__0C3A_25B2_0024_F4A5(); return;
}

/**
 * Decompiled function f__0C3A_25AD_0005_2D35()
 *
 * @name f__0C3A_25AD_0005_2D35
 * @implements 0C3A:25AD:0005:2D35 ()
 *
 * Called From: 0C3A:2582:0027:DC19
 */
void f__0C3A_25AD_0005_2D35()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_di);
	f__0C3A_25E0_0006_EC34(); return;
}

/**
 * Decompiled function f__0C3A_25B2_0024_F4A5()
 *
 * @name f__0C3A_25B2_0024_F4A5
 * @implements 0C3A:25B2:0024:F4A5 ()
 *
 * Called From: 0C3A:252A:0012:24A4
 * Called From: 0C3A:2559:001D:434D
 * Called From: 0C3A:257C:0027:DC19
 * Called From: 0C3A:25AB:0007:DC45
 * Called From: 0C3A:25AB:0002:C2BA
 */
void f__0C3A_25B2_0024_F4A5()
{
	emu_incw(&emu_si);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_cmpws(&emu_si, 0xF);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0C3A_25CA_000C_BCCD(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__0C3A_25D6_000A_7F43(); return; }
	emu_movw(&emu_ax.x, 0x10);
	emu_subw(&emu_ax.x, emu_si);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__0C3A_25D7_0009_6EC3(); return;
}

/**
 * Decompiled function f__0C3A_25CA_000C_BCCD()
 *
 * @name f__0C3A_25CA_000C_BCCD
 * @implements 0C3A:25CA:000C:BCCD ()
 *
 * Called From: 0C3A:25B9:0024:F4A5
 */
void f__0C3A_25CA_000C_BCCD()
{
	emu_movw(&emu_ax.x, 0x10);
	emu_subw(&emu_ax.x, emu_si);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__0C3A_25D7_0009_6EC3(); return;
}

/**
 * Decompiled function f__0C3A_25D6_000A_7F43()
 *
 * @name f__0C3A_25D6_000A_7F43
 * @implements 0C3A:25D6:000A:7F43 ()
 *
 * Called From: 0C3A:25C8:0024:F4A5
 */
void f__0C3A_25D6_000A_7F43()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0C3A_25E0_0006_EC34(); return; }
	f__0C3A_251B_0012_24A4(); return;
}

/**
 * Decompiled function f__0C3A_25D7_0009_6EC3()
 *
 * @name f__0C3A_25D7_0009_6EC3
 * @implements 0C3A:25D7:0009:6EC3 ()
 *
 * Called From: 0C3A:2518:000D:6849
 * Called From: 0C3A:25D4:000C:BCCD
 * Called From: 0C3A:25D4:0024:F4A5
 */
void f__0C3A_25D7_0009_6EC3()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0C3A_25E0_0006_EC34(); return; }
	f__0C3A_251B_0012_24A4(); return;
}

/**
 * Decompiled function f__0C3A_25E0_0006_EC34()
 *
 * @name f__0C3A_25E0_0006_EC34
 * @implements 0C3A:25E0:0006:EC34 ()
 *
 * Called From: 0C3A:25B0:0005:2D35
 * Called From: 0C3A:25DB:0009:6EC3
 * Called From: 0C3A:25DB:000A:7F43
 */
void f__0C3A_25E0_0006_EC34()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	f__0C3A_248C_0003_DDB5(); return;
}

/**
 * Decompiled function f__0C3A_25E6_0006_F7CE()
 *
 * @name f__0C3A_25E6_0006_F7CE
 * @implements 0C3A:25E6:0006:F7CE ()
 *
 * Called From: 0C3A:248C:0003:DDB5
 */
void f__0C3A_25E6_0006_F7CE()
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
 * Decompiled function f__0C3A_25EC_0011_E453()
 *
 * @name f__0C3A_25EC_0011_E453
 * @implements 0C3A:25EC:0011:E453 ()
 *
 * Called From: 0C3A:0117:0016:49D5
 * Called From: 0C3A:14C4:0010:2429
 * Called From: 10E4:1128:001C:695F
 * Called From: B4C4:04B0:0018:10C7
 */
void f__0C3A_25EC_0011_E453()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_25FD_0031_9CBA(); return; }
	/* Unresolved jump */ emu_ip = 0x270D; emu_last_cs = 0x0C3A; emu_last_ip = 0x25FA; emu_last_length = 0x0011; emu_last_crc = 0xE453; emu_call();
}

/**
 * Decompiled function f__0C3A_25FD_0031_9CBA()
 *
 * @name f__0C3A_25FD_0031_9CBA
 * @implements 0C3A:25FD:0031:9CBA ()
 *
 * Called From: 0C3A:25F8:0011:E453
 */
void f__0C3A_25FD_0031_9CBA()
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
	if (!emu_flags.zf) { f__0C3A_262E_002D_6AAB(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x5);
	if (!emu_flags.zf) { f__0C3A_262E_002D_6AAB(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x2710; emu_last_cs = 0x0C3A; emu_last_ip = 0x262B; emu_last_length = 0x0031; emu_last_crc = 0x9CBA; emu_call();
}

/**
 * Decompiled function f__0C3A_2629_0005_9C8C()
 *
 * @name f__0C3A_2629_0005_9C8C
 * @implements 0C3A:2629:0005:9C8C ()
 *
 * Called From: 0C3A:270D:0003:22A6
 */
void f__0C3A_2629_0005_9C8C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0C3A_2710_0004_893F(); return;
}

/**
 * Decompiled function f__0C3A_262E_002D_6AAB()
 *
 * @name f__0C3A_262E_002D_6AAB
 * @implements 0C3A:262E:002D:6AAB ()
 *
 * Called From: 0C3A:261D:0031:9CBA
 * Called From: 0C3A:2627:0031:9CBA
 */
void f__0C3A_262E_002D_6AAB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x2);
	if (!emu_flags.zf) { f__0C3A_265B_0053_01A6(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x4);
	if (!emu_flags.zf) { f__0C3A_265B_0053_01A6(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4E), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x265B; emu_last_cs = 0x0C3A; emu_last_ip = 0x264A; emu_last_length = 0x002D; emu_last_crc = 0x6AAB; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x5E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x265B; emu_last_cs = 0x0C3A; emu_last_ip = 0x2657; emu_last_length = 0x002D; emu_last_crc = 0x6AAB; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x2629; emu_last_cs = 0x0C3A; emu_last_ip = 0x2659; emu_last_length = 0x002D; emu_last_crc = 0x6AAB; emu_call();
}

/**
 * Decompiled function f__0C3A_265B_0053_01A6()
 *
 * @name f__0C3A_265B_0053_01A6
 * @implements 0C3A:265B:0053:01A6 ()
 *
 * Called From: 0C3A:2636:002D:6AAB
 * Called From: 0C3A:2640:002D:6AAB
 */
void f__0C3A_265B_0053_01A6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4E));
	emu_movb(&emu_ax.h, 0x0);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x5A), 0x0);
	if (emu_flags.zf) { f__0C3A_26E2_002B_23E9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4E));
	emu_movb(&emu_ax.h, 0x0);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_incw(&emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x5A), emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0C3A_26E2_002B_23E9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x26E0; emu_last_cs = 0x0C3A; emu_last_ip = 0x2694; emu_last_length = 0x0053; emu_last_crc = 0x01A6; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4E), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x26E0; emu_last_cs = 0x0C3A; emu_last_ip = 0x269E; emu_last_length = 0x0053; emu_last_crc = 0x01A6; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x26AE); emu_cs = 0x10BE; emu_ip = 0x01AB; emu_last_cs = 0x0C3A; emu_last_ip = 0x26A9; emu_last_length = 0x0053; emu_last_crc = 0x01A6; emu_call();
	/* Unresolved jump */ emu_ip = 0x26AE; emu_last_cs = 0x0C3A; emu_last_ip = 0x26AE; emu_last_length = 0x0053; emu_last_crc = 0x01A6; emu_call();
}

/**
 * Decompiled function f__0C3A_26E2_002B_23E9()
 *
 * @name f__0C3A_26E2_002B_23E9
 * @implements 0C3A:26E2:002B:23E9 ()
 *
 * Called From: 0C3A:2670:0053:01A6
 * Called From: 0C3A:268A:0053:01A6
 */
void f__0C3A_26E2_002B_23E9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x7);
	if (!emu_flags.zf) { f__0C3A_270D_0003_22A6(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x270D; emu_last_cs = 0x0C3A; emu_last_ip = 0x26F4; emu_last_length = 0x002B; emu_last_crc = 0x23E9; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4E), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x270D; emu_last_cs = 0x0C3A; emu_last_ip = 0x26FE; emu_last_length = 0x002B; emu_last_crc = 0x23E9; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x3);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x270D; emu_last_cs = 0x0C3A; emu_last_ip = 0x2705; emu_last_length = 0x002B; emu_last_crc = 0x23E9; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x262B; emu_last_cs = 0x0C3A; emu_last_ip = 0x270A; emu_last_length = 0x002B; emu_last_crc = 0x23E9; emu_call();
}

/**
 * Decompiled function f__0C3A_270D_0003_22A6()
 *
 * @name f__0C3A_270D_0003_22A6
 * @implements 0C3A:270D:0003:22A6 ()
 *
 * Called From: 0C3A:26EA:002B:23E9
 */
void f__0C3A_270D_0003_22A6()
{
	f__0C3A_2629_0005_9C8C(); return;
}

/**
 * Decompiled function f__0C3A_2710_0004_893F()
 *
 * @name f__0C3A_2710_0004_893F
 * @implements 0C3A:2710:0004:893F ()
 *
 * Called From: 0C3A:262B:0005:9C8C
 */
void f__0C3A_2710_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_2814_0015_76F0()
 *
 * @name f__0C3A_2814_0015_76F0
 * @implements 0C3A:2814:0015:76F0 ()
 *
 * Called From: 0AEC:121C:001C:6F1D
 * Called From: 0C3A:149C:0014:8AFF
 */
void f__0C3A_2814_0015_76F0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_2829_0024_5E4A(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x2925; emu_last_cs = 0x0C3A; emu_last_ip = 0x2826; emu_last_length = 0x0015; emu_last_crc = 0x76F0; emu_call();
}

/**
 * Decompiled function f__0C3A_2826_0003_1D1F()
 *
 * @name f__0C3A_2826_0003_1D1F
 * @implements 0C3A:2826:0003:1D1F ()
 *
 * Called From: 0C3A:2922:0005:56F4
 * Called From: 0C3A:2922:000B:B8E5
 */
void f__0C3A_2826_0003_1D1F()
{
	f__0C3A_2925_0004_DE52(); return;
}

/**
 * Decompiled function f__0C3A_2829_0024_5E4A()
 *
 * @name f__0C3A_2829_0024_5E4A
 * @implements 0C3A:2829:0024:5E4A ()
 *
 * Called From: 0C3A:2822:0015:76F0
 */
void f__0C3A_2829_0024_5E4A()
{
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (!emu_flags.zf) { f__0C3A_2838_0015_335F(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2851; emu_last_cs = 0x0C3A; emu_last_ip = 0x283B; emu_last_length = 0x0024; emu_last_crc = 0x5E4A; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2000);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x284D; emu_last_cs = 0x0C3A; emu_last_ip = 0x2846; emu_last_length = 0x0024; emu_last_crc = 0x5E4A; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x284F; emu_last_cs = 0x0C3A; emu_last_ip = 0x284B; emu_last_length = 0x0024; emu_last_crc = 0x5E4A; emu_call();
}

/**
 * Decompiled function f__0C3A_2838_0015_335F()
 *
 * @name f__0C3A_2838_0015_335F
 * @implements 0C3A:2838:0015:335F ()
 *
 * Called From: 0C3A:2834:0024:5E4A
 */
void f__0C3A_2838_0015_335F()
{
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__0C3A_2851_002A_363F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2000);
	if (!emu_flags.zf) { f__0C3A_284D_002E_3E5B(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__0C3A_284F_002C_3E91(); return;
}

/**
 * Decompiled function f__0C3A_284D_002E_3E5B()
 *
 * @name f__0C3A_284D_002E_3E5B
 * @implements 0C3A:284D:002E:3E5B ()
 *
 * Called From: 0C3A:2846:0015:335F
 */
void f__0C3A_284D_002E_3E5B()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x28AC; emu_last_cs = 0x0C3A; emu_last_ip = 0x2853; emu_last_length = 0x002E; emu_last_crc = 0x3E5B; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2000);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x28AC; emu_last_cs = 0x0C3A; emu_last_ip = 0x285E; emu_last_length = 0x002E; emu_last_crc = 0x3E5B; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2886; emu_last_cs = 0x0C3A; emu_last_ip = 0x286C; emu_last_length = 0x002E; emu_last_crc = 0x3E5B; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x287B); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0C3A_287B_0008_A466();
}

/**
 * Decompiled function f__0C3A_284F_002C_3E91()
 *
 * @name f__0C3A_284F_002C_3E91
 * @implements 0C3A:284F:002C:3E91 ()
 *
 * Called From: 0C3A:284B:0015:335F
 */
void f__0C3A_284F_002C_3E91()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__0C3A_28AC_004C_0493(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2000);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x28AC; emu_last_cs = 0x0C3A; emu_last_ip = 0x285E; emu_last_length = 0x002C; emu_last_crc = 0x3E91; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2886; emu_last_cs = 0x0C3A; emu_last_ip = 0x286C; emu_last_length = 0x002C; emu_last_crc = 0x3E91; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8A);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x287B); emu_cs = 0x0FCB; emu_ip = 0x005F; emu_last_cs = 0x0C3A; emu_last_ip = 0x2876; emu_last_length = 0x002C; emu_last_crc = 0x3E91; emu_call();
	f__0C3A_287B_0008_A466();
}

/**
 * Decompiled function f__0C3A_2851_002A_363F()
 *
 * @name f__0C3A_2851_002A_363F
 * @implements 0C3A:2851:002A:363F ()
 *
 * Called From: 0C3A:283B:0015:335F
 */
void f__0C3A_2851_002A_363F()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x28AC; emu_last_cs = 0x0C3A; emu_last_ip = 0x2853; emu_last_length = 0x002A; emu_last_crc = 0x363F; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2000);
	if (emu_flags.zf) { f__0C3A_28AC_004C_0493(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2886; emu_last_cs = 0x0C3A; emu_last_ip = 0x286C; emu_last_length = 0x002A; emu_last_crc = 0x363F; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x287B); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0C3A_287B_0008_A466();
}

/**
 * Decompiled function f__0C3A_287B_0008_A466()
 *
 * @name f__0C3A_287B_0008_A466
 * @implements 0C3A:287B:0008:A466 ()
 *
 * Called From: 0C3A:287B:002A:363F
 * Called From: 0C3A:287B:002E:3E5B
 */
void f__0C3A_287B_0008_A466()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2883); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__0C3A_2883_0023_35DC();
}

/**
 * Decompiled function f__0C3A_2883_0023_35DC()
 *
 * @name f__0C3A_2883_0023_35DC
 * @implements 0C3A:2883:0023:35DC ()
 *
 * Called From: 0C3A:2883:0008:A466
 */
void f__0C3A_2883_0023_35DC()
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
	f__0C3A_28A6_0052_D8B0();
}

/**
 * Decompiled function f__0C3A_28A6_0052_D8B0()
 *
 * @name f__0C3A_28A6_0052_D8B0
 * @implements 0C3A:28A6:0052:D8B0 ()
 *
 * Called From: 0C3A:28A6:0023:35DC
 */
void f__0C3A_28A6_0052_D8B0()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_di, 0x1);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__0C3A_2920_0005_56F4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2000);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2920; emu_last_cs = 0x0C3A; emu_last_ip = 0x28B9; emu_last_length = 0x0052; emu_last_crc = 0xD8B0; emu_call(); return; }
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
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2920; emu_last_cs = 0x0C3A; emu_last_ip = 0x28DB; emu_last_length = 0x0052; emu_last_crc = 0xD8B0; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2903; emu_last_cs = 0x0C3A; emu_last_ip = 0x28E9; emu_last_length = 0x0052; emu_last_crc = 0xD8B0; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8B);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x28F8); emu_cs = 0x0FCB; emu_ip = 0x005F; emu_last_cs = 0x0C3A; emu_last_ip = 0x28F3; emu_last_length = 0x0052; emu_last_crc = 0xD8B0; emu_call();
	f__0C3A_28F8_0008_A466();
}

/**
 * Decompiled function f__0C3A_28AC_004C_0493()
 *
 * @name f__0C3A_28AC_004C_0493
 * @implements 0C3A:28AC:004C:0493 ()
 *
 * Called From: 0C3A:2853:002C:3E91
 * Called From: 0C3A:285E:002A:363F
 */
void f__0C3A_28AC_004C_0493()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__0C3A_2920_0005_56F4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2000);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2920; emu_last_cs = 0x0C3A; emu_last_ip = 0x28B9; emu_last_length = 0x004C; emu_last_crc = 0x0493; emu_call(); return; }
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
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2920; emu_last_cs = 0x0C3A; emu_last_ip = 0x28DB; emu_last_length = 0x004C; emu_last_crc = 0x0493; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2903; emu_last_cs = 0x0C3A; emu_last_ip = 0x28E9; emu_last_length = 0x004C; emu_last_crc = 0x0493; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x28F8); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0C3A_28F8_0008_A466();
}

/**
 * Decompiled function f__0C3A_28F8_0008_A466()
 *
 * @name f__0C3A_28F8_0008_A466
 * @implements 0C3A:28F8:0008:A466 ()
 *
 * Called From: 0C3A:28F8:004C:0493
 */
void f__0C3A_28F8_0008_A466()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2900); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__0C3A_2900_001A_5465();
}

/**
 * Decompiled function f__0C3A_2900_001A_5465()
 *
 * @name f__0C3A_2900_001A_5465
 * @implements 0C3A:2900:001A:5465 ()
 *
 * Called From: 0C3A:2900:0008:A466
 */
void f__0C3A_2900_001A_5465()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x6000);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x291A); emu_cs = 0x348B; ovl__348B(5);
	f__0C3A_291A_000B_B8E5();
}

/**
 * Decompiled function f__0C3A_291A_000B_B8E5()
 *
 * @name f__0C3A_291A_000B_B8E5
 * @implements 0C3A:291A:000B:B8E5 ()
 *
 * Called From: 0C3A:291A:001A:5465
 */
void f__0C3A_291A_000B_B8E5()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_di, 0x1);
	emu_movw(&emu_ax.x, emu_di);
	f__0C3A_2826_0003_1D1F(); return;
}

/**
 * Decompiled function f__0C3A_2920_0005_56F4()
 *
 * @name f__0C3A_2920_0005_56F4
 * @implements 0C3A:2920:0005:56F4 ()
 *
 * Called From: 0C3A:28AE:004C:0493
 * Called From: 0C3A:28AE:0052:D8B0
 */
void f__0C3A_2920_0005_56F4()
{
	emu_movw(&emu_ax.x, emu_di);
	f__0C3A_2826_0003_1D1F(); return;
}

/**
 * Decompiled function f__0C3A_2925_0004_DE52()
 *
 * @name f__0C3A_2925_0004_DE52
 * @implements 0C3A:2925:0004:DE52 ()
 *
 * Called From: 0C3A:2826:0003:1D1F
 */
void f__0C3A_2925_0004_DE52()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_2929_0012_B10B()
 *
 * @name f__0C3A_2929_0012_B10B
 * @implements 0C3A:2929:0012:B10B ()
 *
 * Called From: 0C3A:1190:000D:A5C0
 * Called From: 0C3A:1342:000B:E94E
 */
void f__0C3A_2929_0012_B10B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C3A_293B_000F_A6A8(); return; }
	/* Unresolved jump */ emu_ip = 0x2A11; emu_last_cs = 0x0C3A; emu_last_ip = 0x2938; emu_last_length = 0x0012; emu_last_crc = 0xB10B; emu_call();
}

/**
 * Decompiled function f__0C3A_293B_000F_A6A8()
 *
 * @name f__0C3A_293B_000F_A6A8
 * @implements 0C3A:293B:000F:A6A8 ()
 *
 * Called From: 0C3A:2936:0012:B10B
 */
void f__0C3A_293B_000F_A6A8()
{
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x294A); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__0C3A_294A_000F_DCEB();
}

/**
 * Decompiled function f__0C3A_294A_000F_DCEB()
 *
 * @name f__0C3A_294A_000F_DCEB
 * @implements 0C3A:294A:000F:DCEB ()
 *
 * Called From: 0C3A:294A:000F:A6A8
 */
void f__0C3A_294A_000F_DCEB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2959); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	f__0C3A_2959_0015_CD4B();
}

/**
 * Decompiled function f__0C3A_2959_0015_CD4B()
 *
 * @name f__0C3A_2959_0015_CD4B
 * @implements 0C3A:2959:0015:CD4B ()
 *
 * Called From: 0C3A:2959:000F:DCEB
 */
void f__0C3A_2959_0015_CD4B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x296E); emu_cs = 0x0FE4; f__0FE4_0243_003A_D5F2();
	f__0C3A_296E_0005_A2AE();
}

/**
 * Decompiled function f__0C3A_296E_0005_A2AE()
 *
 * @name f__0C3A_296E_0005_A2AE
 * @implements 0C3A:296E:0005:A2AE ()
 *
 * Called From: 0C3A:296E:0015:CD4B
 */
void f__0C3A_296E_0005_A2AE()
{
	emu_addws(&emu_sp, 0x8);
	f__0C3A_29C2_001D_67B9(); return;
}

/**
 * Decompiled function f__0C3A_2973_000B_70FD()
 *
 * @name f__0C3A_2973_000B_70FD
 * @implements 0C3A:2973:000B:70FD ()
 *
 * Called From: 0C3A:29CE:001D:67B9
 * Called From: 0C3A:29CE:001F:D4DD
 */
void f__0C3A_2973_000B_70FD()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x297E); emu_cs = 0x0C10; f__0C10_0168_0014_CEB0();
	f__0C3A_297E_0011_21E1();
}

/**
 * Decompiled function f__0C3A_297E_0011_21E1()
 *
 * @name f__0C3A_297E_0011_21E1
 * @implements 0C3A:297E:0011:21E1 ()
 *
 * Called From: 0C3A:297E:000B:70FD
 */
void f__0C3A_297E_0011_21E1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_si);
	if (!emu_flags.zf) { f__0C3A_2991_002F_3744(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x298F); emu_cs = 0x0C10; emu_ip = 0x0182; emu_last_cs = 0x0C3A; emu_last_ip = 0x298A; emu_last_length = 0x0011; emu_last_crc = 0x21E1; emu_call();
	/* Unresolved jump */ emu_ip = 0x298F; emu_last_cs = 0x0C3A; emu_last_ip = 0x298F; emu_last_length = 0x0011; emu_last_crc = 0x21E1; emu_call();
}

/**
 * Decompiled function f__0C3A_2991_002F_3744()
 *
 * @name f__0C3A_2991_002F_3744
 * @implements 0C3A:2991:002F:3744 ()
 *
 * Called From: 0C3A:2982:0011:21E1
 */
void f__0C3A_2991_002F_3744()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_si);
	if (!emu_flags.zf) { f__0C3A_29A3_001D_217F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), emu_si);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x29B5; emu_last_cs = 0x0C3A; emu_last_ip = 0x29AA; emu_last_length = 0x002F; emu_last_crc = 0x3744; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x29C0); emu_cs = 0x0FE4; f__0FE4_0283_0038_4950();
	f__0C3A_29C0_001F_D4DD();
}

/**
 * Decompiled function f__0C3A_29A3_001D_217F()
 *
 * @name f__0C3A_29A3_001D_217F
 * @implements 0C3A:29A3:001D:217F ()
 *
 * Called From: 0C3A:2998:002F:3744
 */
void f__0C3A_29A3_001D_217F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), emu_si);
	if (!emu_flags.zf) { f__0C3A_29B5_000B_799F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x29C0); emu_cs = 0x0FE4; f__0FE4_0283_0038_4950();
	f__0C3A_29C0_001F_D4DD();
}

/**
 * Decompiled function f__0C3A_29B5_000B_799F()
 *
 * @name f__0C3A_29B5_000B_799F
 * @implements 0C3A:29B5:000B:799F ()
 *
 * Called From: 0C3A:29AA:001D:217F
 */
void f__0C3A_29B5_000B_799F()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x29C0); emu_cs = 0x0FE4; f__0FE4_0283_0038_4950();
	f__0C3A_29C0_001F_D4DD();
}

/**
 * Decompiled function f__0C3A_29C0_001F_D4DD()
 *
 * @name f__0C3A_29C0_001F_D4DD
 * @implements 0C3A:29C0:001F:D4DD ()
 *
 * Called From: 0C3A:29C0:000B:799F
 * Called From: 0C3A:29C0:002F:3744
 * Called From: 0C3A:29C0:001D:217F
 */
void f__0C3A_29C0_001F_D4DD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__0C3A_2973_000B_70FD(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x29DF); emu_cs = 0x104B; f__104B_00C2_0030_20A6();
	f__0C3A_29DF_0005_8B6E();
}

/**
 * Decompiled function f__0C3A_29C2_001D_67B9()
 *
 * @name f__0C3A_29C2_001D_67B9
 * @implements 0C3A:29C2:001D:67B9 ()
 *
 * Called From: 0C3A:2971:0005:A2AE
 */
void f__0C3A_29C2_001D_67B9()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__0C3A_2973_000B_70FD(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x29DF); emu_cs = 0x104B; emu_ip = 0x00C2; emu_last_cs = 0x0C3A; emu_last_ip = 0x29DA; emu_last_length = 0x001D; emu_last_crc = 0x67B9; emu_call();
	f__0C3A_29DF_0005_8B6E();
}

/**
 * Decompiled function f__0C3A_29DF_0005_8B6E()
 *
 * @name f__0C3A_29DF_0005_8B6E
 * @implements 0C3A:29DF:0005:8B6E ()
 *
 * Called From: 0C3A:29DF:001F:D4DD
 */
void f__0C3A_29DF_0005_8B6E()
{
	emu_addws(&emu_sp, 0x6);
	f__0C3A_2A03_0013_00E2(); return;
}

/**
 * Decompiled function f__0C3A_2A03_0013_00E2()
 *
 * @name f__0C3A_2A03_0013_00E2
 * @implements 0C3A:2A03:0013:00E2 ()
 *
 * Called From: 0C3A:29E2:0005:8B6E
 */
void f__0C3A_2A03_0013_00E2()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x29E4; emu_last_cs = 0x0C3A; emu_last_ip = 0x2A0F; emu_last_length = 0x0013; emu_last_crc = 0x00E2; emu_call(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
