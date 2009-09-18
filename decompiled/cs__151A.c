/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__151A_000E_0013_5840()
 *
 * @name f__151A_000E_0013_5840
 * @implements 151A:000E:0013:5840 ()
 *
 * Called From: 0C3A:0B7F:0036:3381
 * Called From: 0C3A:0B7F:0040:CFBF
 * Called From: 0C3A:1108:0040:9962
 * Called From: 176C:23B9:001D:4782
 * Called From: 1A34:0272:0012:2E23
 */
void f__151A_000E_0013_5840()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0021); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__151A_0021_000A_F927();
}

/**
 * Decompiled function f__151A_0021_000A_F927()
 *
 * @name f__151A_0021_000A_F927
 * @implements 151A:0021:000A:F927 ()
 *
 * Called From: 151A:0021:0013:5840
 */
void f__151A_0021_000A_F927()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x002B); f__151A_0114_0022_0B6C();
	f__151A_002B_0006_5882();
}

/**
 * Decompiled function f__151A_002B_0006_5882()
 *
 * @name f__151A_002B_0006_5882
 * @implements 151A:002B:0006:5882 ()
 *
 * Called From: 151A:002B:000A:F927
 */
void f__151A_002B_0006_5882()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_si, emu_si);
	f__151A_0102_0008_D3BC(); return;
}

/**
 * Decompiled function f__151A_0031_001A_DA20()
 *
 * @name f__151A_0031_001A_DA20
 * @implements 151A:0031:001A:DA20 ()
 *
 * Called From: 151A:0107:0008:D3BC
 * Called From: 151A:0107:0009:D39F
 */
void f__151A_0031_001A_DA20()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x11);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3956));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x9));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xB));
	if (emu_flags.zf) { f__151A_004B_00B6_DC7F(); return; }
	f__151A_0101_0009_D39F(); return;
}

/**
 * Decompiled function f__151A_004B_00B6_DC7F()
 *
 * @name f__151A_004B_00B6_DC7F
 * @implements 151A:004B:00B6:DC7F ()
 *
 * Called From: 151A:0046:001A:DA20
 */
void f__151A_004B_00B6_DC7F()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x11);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3958));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3956));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xB), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x9), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x10));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x12));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xF), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xD), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60EA), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60E8), 0x0);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xF8);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x10));
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), emu_ax.l);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x40);
	emu_movw(&emu_ax.x, 0x1);
	f__151A_010E_0006_F7CE(); return;
}

/**
 * Decompiled function f__151A_0101_0009_D39F()
 *
 * @name f__151A_0101_0009_D39F
 * @implements 151A:0101:0009:D39F ()
 *
 * Called From: 151A:0048:001A:DA20
 */
void f__151A_0101_0009_D39F()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x70);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x010A; emu_last_cs = 0x151A; emu_last_ip = 0x0105; emu_last_length = 0x0009; emu_last_crc = 0xD39F; emu_call(); return; }
	f__151A_0031_001A_DA20(); return;
}

/**
 * Decompiled function f__151A_0102_0008_D3BC()
 *
 * @name f__151A_0102_0008_D3BC
 * @implements 151A:0102:0008:D3BC ()
 *
 * Called From: 151A:002E:0006:5882
 */
void f__151A_0102_0008_D3BC()
{
	emu_cmpws(&emu_si, 0x70);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x010A; emu_last_cs = 0x151A; emu_last_ip = 0x0105; emu_last_length = 0x0008; emu_last_crc = 0xD3BC; emu_call(); return; }
	f__151A_0031_001A_DA20(); return;
}

/**
 * Decompiled function f__151A_010E_0006_F7CE()
 *
 * @name f__151A_010E_0006_F7CE
 * @implements 151A:010E:0006:F7CE ()
 *
 * Called From: 151A:00FF:00B6:DC7F
 */
void f__151A_010E_0006_F7CE()
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
 * Decompiled function f__151A_0114_0022_0B6C()
 *
 * @name f__151A_0114_0022_0B6C
 * @implements 151A:0114:0022:0B6C ()
 *
 * Called From: 0C3A:1076:0015:2CC3
 * Called From: 151A:0028:000A:F927
 * Called From: 176C:22EB:000A:8EEA
 */
void f__151A_0114_0022_0B6C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x40);
	if (emu_flags.zf) { f__151A_018C_0004_9239(); return; }
	emu_xorw(&emu_si, emu_si);
	f__151A_0187_0009_19C9(); return;
}

/**
 * Decompiled function f__151A_0136_0034_AEFE()
 *
 * @name f__151A_0136_0034_AEFE
 * @implements 151A:0136:0034:AEFE ()
 *
 * Called From: 151A:018A:0009:19C9
 * Called From: 151A:018A:000A:0849
 */
void f__151A_0136_0034_AEFE()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x11);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3958));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3956));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x9));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xB));
	if (emu_flags.zf) { f__151A_0186_000A_0849(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xD));
	emu_push(emu_cs); emu_push(0x016A); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__151A_016A_0014_9A3F();
}

/**
 * Decompiled function f__151A_016A_0014_9A3F()
 *
 * @name f__151A_016A_0014_9A3F
 * @implements 151A:016A:0014:9A3F ()
 *
 * Called From: 151A:016A:0034:AEFE
 */
void f__151A_016A_0014_9A3F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { f__151A_0186_000A_0849(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x017E); f__151A_0310_0018_831F();
	f__151A_017E_0008_4A72();
}

/**
 * Decompiled function f__151A_017E_0008_4A72()
 *
 * @name f__151A_017E_0008_4A72
 * @implements 151A:017E:0008:4A72 ()
 *
 * Called From: 151A:017E:0014:9A3F
 */
void f__151A_017E_0008_4A72()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__151A_0190_0006_F7CE(); return;
}

/**
 * Decompiled function f__151A_0184_0002_C53A()
 *
 * @name f__151A_0184_0002_C53A
 * @implements 151A:0184:0002:C53A ()
 *
 * Called From: 151A:018E:0004:9239
 * Called From: 151A:018E:000A:0849
 */
void f__151A_0184_0002_C53A()
{
	f__151A_0190_0006_F7CE(); return;
}

/**
 * Decompiled function f__151A_0186_000A_0849()
 *
 * @name f__151A_0186_000A_0849
 * @implements 151A:0186:000A:0849 ()
 *
 * Called From: 151A:0158:0034:AEFE
 * Called From: 151A:016E:0014:9A3F
 */
void f__151A_0186_000A_0849()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x70);
	if ((emu_flags.sf != emu_flags.of)) { f__151A_0136_0034_AEFE(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__151A_0184_0002_C53A(); return;
}

/**
 * Decompiled function f__151A_0187_0009_19C9()
 *
 * @name f__151A_0187_0009_19C9
 * @implements 151A:0187:0009:19C9 ()
 *
 * Called From: 151A:0134:0022:0B6C
 */
void f__151A_0187_0009_19C9()
{
	emu_cmpws(&emu_si, 0x70);
	if ((emu_flags.sf != emu_flags.of)) { f__151A_0136_0034_AEFE(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x0184; emu_last_cs = 0x151A; emu_last_ip = 0x018E; emu_last_length = 0x0009; emu_last_crc = 0x19C9; emu_call();
}

/**
 * Decompiled function f__151A_018C_0004_9239()
 *
 * @name f__151A_018C_0004_9239
 * @implements 151A:018C:0004:9239 ()
 *
 * Called From: 151A:0130:0022:0B6C
 */
void f__151A_018C_0004_9239()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__151A_0184_0002_C53A(); return;
}

/**
 * Decompiled function f__151A_0190_0006_F7CE()
 *
 * @name f__151A_0190_0006_F7CE
 * @implements 151A:0190:0006:F7CE ()
 *
 * Called From: 151A:0184:0002:C53A
 * Called From: 151A:0184:0008:4A72
 */
void f__151A_0190_0006_F7CE()
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
 * Decompiled function f__151A_0196_0018_AF63()
 *
 * @name f__151A_0196_0018_AF63
 * @implements 151A:0196:0018:AF63 ()
 *
 * Called From: 07D4:0049:0005:EE7F
 */
void f__151A_0196_0018_AF63()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x60EA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x60E8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__151A_01AE_000B_C3A0(); return; }
	f__151A_02A1_0009_5EAC(); return;
}

/**
 * Decompiled function f__151A_01AE_000B_C3A0()
 *
 * @name f__151A_01AE_000B_C3A0
 * @implements 151A:01AE:000B:C3A0 ()
 *
 * Called From: 151A:01A9:0018:AF63
 */
void f__151A_01AE_000B_C3A0()
{
	if (!emu_flags.zf) { f__151A_01B9_0010_58AE(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if ((emu_flags.cf || emu_flags.zf)) { f__151A_01B9_0010_58AE(); return; }
	f__151A_02A1_0009_5EAC(); return;
}

/**
 * Decompiled function f__151A_01B9_0010_58AE()
 *
 * @name f__151A_01B9_0010_58AE
 * @implements 151A:01B9:0010:58AE ()
 *
 * Called From: 151A:01AE:000B:C3A0
 * Called From: 151A:01B4:000B:C3A0
 */
void f__151A_01B9_0010_58AE()
{
	emu_addw(&emu_get_memory16(emu_ds, 0x00,  0x60E8), 0x2710);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x60EA), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__151A_0299_0008_13BF(); return;
}

/**
 * Decompiled function f__151A_01C9_0096_C671()
 *
 * @name f__151A_01C9_0096_C671
 * @implements 151A:01C9:0096:C671 ()
 *
 * Called From: 151A:029E:0008:13BF
 * Called From: 151A:029E:0009:139C
 * Called From: 151A:029E:001A:9FFC
 * Called From: 151A:029E:003F:09CA
 * Called From: 151A:029E:0042:ABEC
 */
void f__151A_01C9_0096_C671()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x11);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3958));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3956));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x9));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xB));
	if (emu_flags.zf) { f__151A_0262_003F_09CA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__151A_0262_003F_09CA(); return; }
	if (!emu_flags.zf) { f__151A_0205_005A_397D(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!(emu_flags.cf || emu_flags.zf)) { f__151A_0262_003F_09CA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x7));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x7));
	emu_movb(&emu_ax.h, 0x0);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x9));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax.x, 0xFFF);
	emu_movw(&emu_di, emu_ax.x);
	emu_testw(&emu_di, 0x800);
	if (emu_flags.zf) { f__151A_0235_002A_9F9F(); return; }
	emu_orw(&emu_di, 0xF000);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0xC);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_andw(&emu_ax.x, 0xF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x024D; emu_last_cs = 0x151A; emu_last_ip = 0x0246; emu_last_length = 0x0096; emu_last_crc = 0xC671; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, emu_bx.x,  0x60EC);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, emu_bx.x,  0x60EE);
	emu_push(0x025F);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x151A; emu_last_ip = 0x025B; emu_last_length = 0x0096; emu_last_crc = 0xC671;
			emu_call();
			return;
	}
	f__151A_025F_0042_ABEC();
}

/**
 * Decompiled function f__151A_0205_005A_397D()
 *
 * @name f__151A_0205_005A_397D
 * @implements 151A:0205:005A:397D ()
 *
 * Called From: 151A:01FD:0096:C671
 */
void f__151A_0205_005A_397D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x7));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0x7));
	emu_movb(&emu_ax.h, 0x0);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x9));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax.x, 0xFFF);
	emu_movw(&emu_di, emu_ax.x);
	emu_testw(&emu_di, 0x800);
	if (emu_flags.zf) { f__151A_0235_002A_9F9F(); return; }
	emu_orw(&emu_di, 0xF000);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0xC);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_andw(&emu_ax.x, 0xF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x024D; emu_last_cs = 0x151A; emu_last_ip = 0x0246; emu_last_length = 0x005A; emu_last_crc = 0x397D; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, emu_bx.x,  0x60EC);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, emu_bx.x,  0x60EE);
	emu_push(0x025F);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x151A; emu_last_ip = 0x025B; emu_last_length = 0x005A; emu_last_crc = 0x397D;
			emu_call();
			return;
	}
	f__151A_025F_0042_ABEC();
}

/**
 * Decompiled function f__151A_0235_002A_9F9F()
 *
 * @name f__151A_0235_002A_9F9F
 * @implements 151A:0235:002A:9F9F ()
 *
 * Called From: 151A:022F:005A:397D
 * Called From: 151A:022F:0096:C671
 */
void f__151A_0235_002A_9F9F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0xC);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_andw(&emu_ax.x, 0xF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__151A_024D_0012_A9B9(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, emu_bx.x,  0x60EC);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, emu_bx.x,  0x60EE);
	emu_push(0x025F);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x151A; emu_last_ip = 0x025B; emu_last_length = 0x002A; emu_last_crc = 0x9F9F;
			emu_call();
			return;
	}
	f__151A_025F_0042_ABEC();
}

/**
 * Decompiled function f__151A_024D_0012_A9B9()
 *
 * @name f__151A_024D_0012_A9B9
 * @implements 151A:024D:0012:A9B9 ()
 *
 * Called From: 151A:0246:002A:9F9F
 */
void f__151A_024D_0012_A9B9()
{
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, emu_bx.x,  0x60EC);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, emu_bx.x,  0x60EE);
	emu_push(0x025F);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x151A02C8: f__151A_02C8_0016_FA9C(); break;
		case 0x151A02E8: f__151A_02E8_0010_6B15(); break;
		case 0x151A0310: f__151A_0310_0018_831F(); break;
		case 0x151A03ED: f__151A_03ED_0014_6217(); break;
		case 0x151A043B: f__151A_043B_0018_36C4(); break;
		case 0x151A046F: f__151A_046F_0017_2508(); break;
		case 0x151A0526: f__151A_0526_0028_A3A6(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x151A; emu_last_ip = 0x025B; emu_last_length = 0x0012; emu_last_crc = 0xA9B9;
			emu_call();
			return;
	}
	f__151A_025F_0042_ABEC();
}

/**
 * Decompiled function f__151A_025F_0042_ABEC()
 *
 * @name f__151A_025F_0042_ABEC
 * @implements 151A:025F:0042:ABEC ()
 *
 * Called From: 151A:025F:0012:A9B9
 */
void f__151A_025F_0042_ABEC()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x9));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xB));
	if (emu_flags.zf) { f__151A_0298_0009_139C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x60EA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__151A_0298_0009_139C(); return; }
	if ((emu_flags.sf != emu_flags.of)) { f__151A_0287_001A_9FFC(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x60E8));
	if (!emu_flags.cf) { f__151A_0298_0009_139C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60EA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60E8), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x70);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x02A1; emu_last_cs = 0x151A; emu_last_ip = 0x029C; emu_last_length = 0x0042; emu_last_crc = 0xABEC; emu_call(); return; }
	f__151A_01C9_0096_C671(); return;
}

/**
 * Decompiled function f__151A_0262_003F_09CA()
 *
 * @name f__151A_0262_003F_09CA
 * @implements 151A:0262:003F:09CA ()
 *
 * Called From: 151A:01EB:0096:C671
 * Called From: 151A:01FB:0096:C671
 * Called From: 151A:0203:0096:C671
 */
void f__151A_0262_003F_09CA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x9));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xB));
	if (emu_flags.zf) { f__151A_0298_0009_139C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x60EA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__151A_0298_0009_139C(); return; }
	if ((emu_flags.sf != emu_flags.of)) { f__151A_0287_001A_9FFC(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x60E8));
	if (!emu_flags.cf) { f__151A_0298_0009_139C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60EA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60E8), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x70);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x02A1; emu_last_cs = 0x151A; emu_last_ip = 0x029C; emu_last_length = 0x003F; emu_last_crc = 0x09CA; emu_call(); return; }
	f__151A_01C9_0096_C671(); return;
}

/**
 * Decompiled function f__151A_0287_001A_9FFC()
 *
 * @name f__151A_0287_001A_9FFC
 * @implements 151A:0287:001A:9FFC ()
 *
 * Called From: 151A:027F:0042:ABEC
 * Called From: 151A:027F:003F:09CA
 */
void f__151A_0287_001A_9FFC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60EA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60E8), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x70);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x02A1; emu_last_cs = 0x151A; emu_last_ip = 0x029C; emu_last_length = 0x001A; emu_last_crc = 0x9FFC; emu_call(); return; }
	f__151A_01C9_0096_C671(); return;
}

/**
 * Decompiled function f__151A_0298_0009_139C()
 *
 * @name f__151A_0298_0009_139C
 * @implements 151A:0298:0009:139C ()
 *
 * Called From: 151A:026D:003F:09CA
 * Called From: 151A:026D:0042:ABEC
 * Called From: 151A:027D:003F:09CA
 * Called From: 151A:027D:0042:ABEC
 * Called From: 151A:0285:003F:09CA
 * Called From: 151A:0285:0042:ABEC
 */
void f__151A_0298_0009_139C()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x70);
	if (!(emu_flags.sf != emu_flags.of)) { f__151A_02A1_0009_5EAC(); return; }
	f__151A_01C9_0096_C671(); return;
}

/**
 * Decompiled function f__151A_0299_0008_13BF()
 *
 * @name f__151A_0299_0008_13BF
 * @implements 151A:0299:0008:13BF ()
 *
 * Called From: 151A:01C6:0010:58AE
 */
void f__151A_0299_0008_13BF()
{
	emu_cmpws(&emu_si, 0x70);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x02A1; emu_last_cs = 0x151A; emu_last_ip = 0x029C; emu_last_length = 0x0008; emu_last_crc = 0x13BF; emu_call(); return; }
	f__151A_01C9_0096_C671(); return;
}

/**
 * Decompiled function f__151A_02A1_0009_5EAC()
 *
 * @name f__151A_02A1_0009_5EAC
 * @implements 151A:02A1:0009:5EAC ()
 *
 * Called From: 151A:01AB:0018:AF63
 * Called From: 151A:01B6:000B:C3A0
 * Called From: 151A:029C:0009:139C
 */
void f__151A_02A1_0009_5EAC()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x60EA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x60E8));
	f__151A_02AA_0006_F7CE(); return;
}

/**
 * Decompiled function f__151A_02AA_0006_F7CE()
 *
 * @name f__151A_02AA_0006_F7CE
 * @implements 151A:02AA:0006:F7CE ()
 *
 * Called From: 151A:02A8:0009:5EAC
 */
void f__151A_02AA_0006_F7CE()
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
 * Decompiled function f__151A_02C8_0016_FA9C()
 *
 * @name f__151A_02C8_0016_FA9C
 * @implements 151A:02C8:0016:FA9C ()
 *
 * Called From: 151A:025B:0012:A9B9
 */
void f__151A_02C8_0016_FA9C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xD));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x02DE); emu_cs = 0x3483; ovl__3483(0);
	f__151A_02DE_0008_4F72();
}

/**
 * Decompiled function f__151A_02DE_0008_4F72()
 *
 * @name f__151A_02DE_0008_4F72
 * @implements 151A:02DE:0008:4F72 ()
 *
 * Called From: 151A:02DE:0016:FA9C
 */
void f__151A_02DE_0008_4F72()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__151A_02E6_0002_2597(); return;
}

/**
 * Decompiled function f__151A_02E6_0002_2597()
 *
 * @name f__151A_02E6_0002_2597
 * @implements 151A:02E6:0002:2597 ()
 *
 * Called From: 151A:02E4:0008:4F72
 */
void f__151A_02E6_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__151A_02E8_0010_6B15()
 *
 * @name f__151A_02E8_0010_6B15
 * @implements 151A:02E8:0010:6B15 ()
 *
 * Called From: 151A:025B:0012:A9B9
 */
void f__151A_02E8_0010_6B15()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), 0x0);
	emu_movw(&emu_ax.x, 0x1);
	f__151A_02F8_0002_2597(); return;
}

/**
 * Decompiled function f__151A_02F8_0002_2597()
 *
 * @name f__151A_02F8_0002_2597
 * @implements 151A:02F8:0002:2597 ()
 *
 * Called From: 151A:02F6:0010:6B15
 */
void f__151A_02F8_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__151A_0310_0018_831F()
 *
 * @name f__151A_0310_0018_831F
 * @implements 151A:0310:0018:831F ()
 *
 * Called From: 151A:017B:0014:9A3F
 * Called From: 151A:025B:0012:A9B9
 */
void f__151A_0310_0018_831F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xD));
	emu_push(emu_cs); emu_push(0x0328); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__151A_0328_0030_62EB();
}

/**
 * Decompiled function f__151A_0328_0030_62EB()
 *
 * @name f__151A_0328_0030_62EB
 * @implements 151A:0328:0030:62EB ()
 *
 * Called From: 151A:0328:0018:831F
 */
void f__151A_0328_0030_62EB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xBF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_dx.x, 0x12);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x2C64);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_xorw(&emu_di, emu_di);
	f__151A_03C5_0022_23AF(); return;
}

/**
 * Decompiled function f__151A_0358_0047_DAF8()
 *
 * @name f__151A_0358_0047_DAF8
 * @implements 151A:0358:0047:DAF8 ()
 *
 * Called From: 151A:03D2:0022:23AF
 * Called From: 151A:03D2:0026:416D
 */
void f__151A_0358_0047_DAF8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_si, emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x0);
	if (emu_flags.zf) { f__151A_0399_0006_D6E6(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x323F));
	emu_andw(&emu_ax.x, 0x7FFF);
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_dx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x039F); emu_cs = 0x34CD; ovl__34CD(9);
	f__151A_039F_0022_C3F8();
}

/**
 * Decompiled function f__151A_0399_0006_D6E6()
 *
 * @name f__151A_0399_0006_D6E6
 * @implements 151A:0399:0006:D6E6 ()
 *
 * Called From: 151A:036F:0047:DAF8
 */
void f__151A_0399_0006_D6E6()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x039F); emu_cs = 0x34CD; ovl__34CD(9);
	f__151A_039F_0022_C3F8();
}

/**
 * Decompiled function f__151A_039F_0022_C3F8()
 *
 * @name f__151A_039F_0022_C3F8
 * @implements 151A:039F:0022:C3F8 ()
 *
 * Called From: 151A:039F:0047:DAF8
 * Called From: 151A:039F:0006:D6E6
 */
void f__151A_039F_0022_C3F8()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__151A_03B5_000C_4178(); return; }
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
	emu_push(emu_cs); emu_push(0x03C1); emu_cs = 0x34CD; ovl__34CD(29);
	f__151A_03C1_0026_416D();
}

/**
 * Decompiled function f__151A_03B5_000C_4178()
 *
 * @name f__151A_03B5_000C_4178
 * @implements 151A:03B5:000C:4178 ()
 *
 * Called From: 151A:03A2:0022:C3F8
 */
void f__151A_03B5_000C_4178()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03C1); emu_cs = 0x34CD; ovl__34CD(29);
	f__151A_03C1_0026_416D();
}

/**
 * Decompiled function f__151A_03C1_0026_416D()
 *
 * @name f__151A_03C1_0026_416D
 * @implements 151A:03C1:0026:416D ()
 *
 * Called From: 151A:03C1:000C:4178
 * Called From: 151A:03C1:0022:C3F8
 */
void f__151A_03C1_0026_416D()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2D52), emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__151A_0358_0047_DAF8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xB), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x9), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__151A_03E7_0006_F7CE(); return;
}

/**
 * Decompiled function f__151A_03C5_0022_23AF()
 *
 * @name f__151A_03C5_0022_23AF
 * @implements 151A:03C5:0022:23AF ()
 *
 * Called From: 151A:0356:0030:62EB
 */
void f__151A_03C5_0022_23AF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2D52), emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__151A_0358_0047_DAF8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xB), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x9), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x03E7; emu_last_cs = 0x151A; emu_last_ip = 0x03E5; emu_last_length = 0x0022; emu_last_crc = 0x23AF; emu_call();
}

/**
 * Decompiled function f__151A_03E7_0006_F7CE()
 *
 * @name f__151A_03E7_0006_F7CE
 * @implements 151A:03E7:0006:F7CE ()
 *
 * Called From: 151A:03E5:0026:416D
 */
void f__151A_03E7_0006_F7CE()
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
 * Decompiled function f__151A_03ED_0014_6217()
 *
 * @name f__151A_03ED_0014_6217
 * @implements 151A:03ED:0014:6217 ()
 *
 * Called From: 151A:025B:0012:A9B9
 */
void f__151A_03ED_0014_6217()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xD));
	emu_push(emu_cs); emu_push(0x0401); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__151A_0401_0021_A7FB();
}

/**
 * Decompiled function f__151A_0401_0021_A7FB()
 *
 * @name f__151A_0401_0021_A7FB
 * @implements 151A:0401:0021:A7FB ()
 *
 * Called From: 151A:0401:0014:6217
 */
void f__151A_0401_0021_A7FB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xBF);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0422); emu_cs = 0x34CD; ovl__34CD(29);
	f__151A_0422_0016_0046();
}

/**
 * Decompiled function f__151A_0422_0016_0046()
 *
 * @name f__151A_0422_0016_0046
 * @implements 151A:0422:0016:0046 ()
 *
 * Called From: 151A:0422:0021:A7FB
 */
void f__151A_0422_0016_0046()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xB), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x9), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__151A_0438_0003_2E57(); return;
}

/**
 * Decompiled function f__151A_0438_0003_2E57()
 *
 * @name f__151A_0438_0003_2E57
 * @implements 151A:0438:0003:2E57 ()
 *
 * Called From: 151A:0436:0016:0046
 */
void f__151A_0438_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__151A_043B_0018_36C4()
 *
 * @name f__151A_043B_0018_36C4
 * @implements 151A:043B:0018:36C4 ()
 *
 * Called From: 151A:025B:0012:A9B9
 */
void f__151A_043B_0018_36C4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_adcw(&emu_ax.x, 0x0);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0453); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__151A_0453_0019_67AA();
}

/**
 * Decompiled function f__151A_0453_0019_67AA()
 *
 * @name f__151A_0453_0019_67AA
 * @implements 151A:0453:0019:67AA ()
 *
 * Called From: 151A:0453:0018:36C4
 */
void f__151A_0453_0019_67AA()
{
	emu_andw(&emu_ax.x, 0x3);
	emu_pop(&emu_dx.x);
	emu_pop(&emu_bx.x);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_adcws(&emu_dx.x, 0x0);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_si,  0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_si,  0x0), emu_bx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__151A_046C_0003_2E57(); return;
}

/**
 * Decompiled function f__151A_046C_0003_2E57()
 *
 * @name f__151A_046C_0003_2E57
 * @implements 151A:046C:0003:2E57 ()
 *
 * Called From: 151A:046A:0019:67AA
 */
void f__151A_046C_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__151A_046F_0017_2508()
 *
 * @name f__151A_046F_0017_2508
 * @implements 151A:046F:0017:2508 ()
 *
 * Called From: 151A:025B:0012:A9B9
 */
void f__151A_046F_0017_2508()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xD));
	emu_push(emu_cs); emu_push(0x0486); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__151A_0486_000A_CA6A();
}

/**
 * Decompiled function f__151A_0486_000A_CA6A()
 *
 * @name f__151A_0486_000A_CA6A
 * @implements 151A:0486:000A:CA6A ()
 *
 * Called From: 151A:0486:0017:2508
 */
void f__151A_0486_000A_CA6A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0490); emu_cs = 0x34CD; ovl__34CD(9);
	f__151A_0490_0008_77BC();
}

/**
 * Decompiled function f__151A_0490_0008_77BC()
 *
 * @name f__151A_0490_0008_77BC
 * @implements 151A:0490:0008:77BC ()
 *
 * Called From: 151A:0490:000A:CA6A
 */
void f__151A_0490_0008_77BC()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__151A_0498_0081_CC96(); return; }
	f__151A_051C_0005_D5FA(); return;
}

/**
 * Decompiled function f__151A_0498_0081_CC96()
 *
 * @name f__151A_0498_0081_CC96
 * @implements 151A:0498:0081:CC96 ()
 *
 * Called From: 151A:0493:0008:77BC
 */
void f__151A_0498_0081_CC96()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movb(&emu_ax.h, 0x0);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x39F0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_bx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_dx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), 0x1);
	emu_shlb(&emu_ax.l, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), emu_ax.l);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xF8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_dx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), emu_ax.l);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0519); emu_cs = 0x34CD; ovl__34CD(29);
	f__151A_0519_0008_4F72();
}

/**
 * Decompiled function f__151A_0519_0008_4F72()
 *
 * @name f__151A_0519_0008_4F72
 * @implements 151A:0519:0008:4F72 ()
 *
 * Called From: 151A:0519:0081:CC96
 */
void f__151A_0519_0008_4F72()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__151A_0521_0005_8BCF(); return;
}

/**
 * Decompiled function f__151A_051C_0005_D5FA()
 *
 * @name f__151A_051C_0005_D5FA
 * @implements 151A:051C:0005:D5FA ()
 *
 * Called From: 151A:0495:0008:77BC
 */
void f__151A_051C_0005_D5FA()
{
	emu_movw(&emu_ax.x, 0x1);
	f__151A_0521_0005_8BCF(); return;
}

/**
 * Decompiled function f__151A_0521_0005_8BCF()
 *
 * @name f__151A_0521_0005_8BCF
 * @implements 151A:0521:0005:8BCF ()
 *
 * Called From: 151A:051F:0008:4F72
 * Called From: 151A:051F:0005:D5FA
 */
void f__151A_0521_0005_8BCF()
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
 * Decompiled function f__151A_0526_0028_A3A6()
 *
 * @name f__151A_0526_0028_A3A6
 * @implements 151A:0526:0028:A3A6 ()
 *
 * Called From: 151A:025B:0012:A9B9
 */
void f__151A_0526_0028_A3A6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2D52));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xD));
	emu_push(emu_cs); emu_push(0x054E); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__151A_054E_0055_2F02();
}

/**
 * Decompiled function f__151A_054E_0055_2F02()
 *
 * @name f__151A_054E_0055_2F02
 * @implements 151A:054E:0055:2F02 ()
 *
 * Called From: 151A:054E:0028:A3A6
 */
void f__151A_054E_0055_2F02()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movb(&emu_ax.h, 0x0);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x39F0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_bx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { f__151A_05DA_001A_7AC5(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x17);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x059D; emu_last_cs = 0x151A; emu_last_ip = 0x0591; emu_last_length = 0x0055; emu_last_crc = 0x2F02; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x18);
	if (!emu_flags.zf) { f__151A_05DA_001A_7AC5(); return; }
	emu_push(emu_si);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x05A3); emu_cs = 0x34CD; emu_ip = 0x00B6; emu_last_cs = 0x151A; emu_last_ip = 0x059E; emu_last_length = 0x0055; emu_last_crc = 0x2F02; emu_call();
	/* Unresolved jump */ emu_ip = 0x05A3; emu_last_cs = 0x151A; emu_last_ip = 0x05A3; emu_last_length = 0x0055; emu_last_crc = 0x2F02; emu_call();
}

/**
 * Decompiled function f__151A_05DA_001A_7AC5()
 *
 * @name f__151A_05DA_001A_7AC5
 * @implements 151A:05DA:001A:7AC5 ()
 *
 * Called From: 151A:0587:0055:2F02
 * Called From: 151A:059B:0055:2F02
 */
void f__151A_05DA_001A_7AC5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_dx.x, 0x12);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x2C64);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_xorw(&emu_di, emu_di);
	f__151A_06B1_0008_62B9(); return;
}

/**
 * Decompiled function f__151A_05F4_001D_0441()
 *
 * @name f__151A_05F4_001D_0441
 * @implements 151A:05F4:001D:0441 ()
 *
 * Called From: 151A:06B6:0008:62B9
 * Called From: 151A:06B6:000A:F4DA
 * Called From: 151A:06B6:0009:E29A
 */
void f__151A_05F4_001D_0441()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xD));
	emu_push(emu_cs); emu_push(0x0611); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__151A_0611_0073_AC77();
}

/**
 * Decompiled function f__151A_0611_0073_AC77()
 *
 * @name f__151A_0611_0073_AC77
 * @implements 151A:0611:0073:AC77 ()
 *
 * Called From: 151A:0611:001D:0441
 */
void f__151A_0611_0073_AC77()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x2);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { f__151A_06B0_0009_E29A(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
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
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_dx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), emu_ax.l);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0684); emu_cs = 0x34CD; ovl__34CD(9);
	f__151A_0684_0022_C3F8();
}

/**
 * Decompiled function f__151A_0684_0022_C3F8()
 *
 * @name f__151A_0684_0022_C3F8
 * @implements 151A:0684:0022:C3F8 ()
 *
 * Called From: 151A:0684:0073:AC77
 */
void f__151A_0684_0022_C3F8()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__151A_069A_000C_4178(); return; }
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
	emu_push(emu_cs); emu_push(0x06A6); emu_cs = 0x34CD; ovl__34CD(29);
	f__151A_06A6_0009_9B66();
}

/**
 * Decompiled function f__151A_069A_000C_4178()
 *
 * @name f__151A_069A_000C_4178
 * @implements 151A:069A:000C:4178 ()
 *
 * Called From: 151A:0687:0022:C3F8
 */
void f__151A_069A_000C_4178()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06A6); emu_cs = 0x34CD; ovl__34CD(29);
	f__151A_06A6_0009_9B66();
}

/**
 * Decompiled function f__151A_06A6_0009_9B66()
 *
 * @name f__151A_06A6_0009_9B66
 * @implements 151A:06A6:0009:9B66 ()
 *
 * Called From: 151A:06A6:000C:4178
 * Called From: 151A:06A6:0022:C3F8
 */
void f__151A_06A6_0009_9B66()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06AF); emu_cs = 0x07D4; f__07D4_02F8_0055_0679();
	f__151A_06AF_000A_F4DA();
}

/**
 * Decompiled function f__151A_06AF_000A_F4DA()
 *
 * @name f__151A_06AF_000A_F4DA
 * @implements 151A:06AF:000A:F4DA ()
 *
 * Called From: 151A:06AF:0009:9B66
 */
void f__151A_06AF_000A_F4DA()
{
	emu_pop(&emu_cx.x);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!(emu_flags.sf != emu_flags.of)) { f__151A_06B9_0005_D5FA(); return; }
	f__151A_05F4_001D_0441(); return;
}

/**
 * Decompiled function f__151A_06B0_0009_E29A()
 *
 * @name f__151A_06B0_0009_E29A
 * @implements 151A:06B0:0009:E29A ()
 *
 * Called From: 151A:063A:0073:AC77
 */
void f__151A_06B0_0009_E29A()
{
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!(emu_flags.sf != emu_flags.of)) { f__151A_06B9_0005_D5FA(); return; }
	f__151A_05F4_001D_0441(); return;
}

/**
 * Decompiled function f__151A_06B1_0008_62B9()
 *
 * @name f__151A_06B1_0008_62B9
 * @implements 151A:06B1:0008:62B9 ()
 *
 * Called From: 151A:05F1:001A:7AC5
 */
void f__151A_06B1_0008_62B9()
{
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x06B9; emu_last_cs = 0x151A; emu_last_ip = 0x06B4; emu_last_length = 0x0008; emu_last_crc = 0x62B9; emu_call(); return; }
	f__151A_05F4_001D_0441(); return;
}

/**
 * Decompiled function f__151A_06B9_0005_D5FA()
 *
 * @name f__151A_06B9_0005_D5FA
 * @implements 151A:06B9:0005:D5FA ()
 *
 * Called From: 151A:06B4:000A:F4DA
 * Called From: 151A:06B4:0009:E29A
 */
void f__151A_06B9_0005_D5FA()
{
	emu_movw(&emu_ax.x, 0x1);
	f__151A_06BE_0006_F7CE(); return;
}

/**
 * Decompiled function f__151A_06BE_0006_F7CE()
 *
 * @name f__151A_06BE_0006_F7CE
 * @implements 151A:06BE:0006:F7CE ()
 *
 * Called From: 151A:06BC:0005:D5FA
 */
void f__151A_06BE_0006_F7CE()
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
