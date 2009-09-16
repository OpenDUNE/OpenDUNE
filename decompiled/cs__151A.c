/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__151A_000E_0013_54E3()
 *
 * @name f__151A_000E_0013_54E3
 * @implements 151A:000E:0013:54E3 ()
 *
 * Called From: 0C3A:0B7F:0040:15F6
 * Called From: 0C3A:0B7F:0036:9D25
 * Called From: 176C:23B9:001D:F1C4
 * Called From: 1A34:0272:0012:E2AB
 */
void f__151A_000E_0013_54E3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0021); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__151A_0021_000A_22C5();
}

/**
 * Decompiled function f__151A_0021_000A_22C5()
 *
 * @name f__151A_0021_000A_22C5
 * @implements 151A:0021:000A:22C5 ()
 *
 * Called From: 151A:0021:0013:54E3
 */
void f__151A_0021_000A_22C5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x002B); f__151A_0114_0022_9DA5();
	f__151A_002B_0006_1B4C();
}

/**
 * Decompiled function f__151A_002B_0006_1B4C()
 *
 * @name f__151A_002B_0006_1B4C
 * @implements 151A:002B:0006:1B4C ()
 *
 * Called From: 151A:002B:000A:22C5
 */
void f__151A_002B_0006_1B4C()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_si, emu_si);
	f__151A_0102_0008_E9BA(); return;
}

/**
 * Decompiled function f__151A_0031_001A_8557()
 *
 * @name f__151A_0031_001A_8557
 * @implements 151A:0031:001A:8557 ()
 *
 * Called From: 151A:0107:0008:E9BA
 * Called From: 151A:0107:0009:65BA
 */
void f__151A_0031_001A_8557()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x11);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3956));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x9));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xB));
	if (emu_flags.zf) { f__151A_004B_00B6_637E(); return; }
	f__151A_0101_0009_65BA(); return;
}

/**
 * Decompiled function f__151A_004B_00B6_637E()
 *
 * @name f__151A_004B_00B6_637E
 * @implements 151A:004B:00B6:637E ()
 *
 * Called From: 151A:0046:001A:8557
 */
void f__151A_004B_00B6_637E()
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
	f__151A_010E_0006_137A(); return;
}

/**
 * Decompiled function f__151A_0101_0009_65BA()
 *
 * @name f__151A_0101_0009_65BA
 * @implements 151A:0101:0009:65BA ()
 *
 * Called From: 151A:0048:001A:8557
 */
void f__151A_0101_0009_65BA()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x70);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x010A; emu_last_cs = 0x151A; emu_last_ip = 0x0105; emu_last_length = 0x0009; emu_last_crc = 0x65BA; emu_call(); return; } // Jump does not resolve
	f__151A_0031_001A_8557(); return;
}

/**
 * Decompiled function f__151A_0102_0008_E9BA()
 *
 * @name f__151A_0102_0008_E9BA
 * @implements 151A:0102:0008:E9BA ()
 *
 * Called From: 151A:002E:0006:1B4C
 */
void f__151A_0102_0008_E9BA()
{
	emu_cmpws(&emu_si, 0x70);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x010A; emu_last_cs = 0x151A; emu_last_ip = 0x0105; emu_last_length = 0x0008; emu_last_crc = 0xE9BA; emu_call(); return; } // Jump does not resolve
	f__151A_0031_001A_8557(); return;
}

/**
 * Decompiled function f__151A_010E_0006_137A()
 *
 * @name f__151A_010E_0006_137A
 * @implements 151A:010E:0006:137A ()
 *
 * Called From: 151A:00FF:00B6:637E
 */
void f__151A_010E_0006_137A()
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
 * Decompiled function f__151A_0114_0022_9DA5()
 *
 * @name f__151A_0114_0022_9DA5
 * @implements 151A:0114:0022:9DA5 ()
 *
 * Called From: 151A:0028:000A:22C5
 * Called From: 176C:22EB:000A:268B
 */
void f__151A_0114_0022_9DA5()
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
	if (emu_flags.zf) { f__151A_018C_0004_0774(); return; }
	emu_xorw(&emu_si, emu_si);
	f__151A_0187_0009_CD35(); return;
}

/**
 * Decompiled function f__151A_0136_0034_68C8()
 *
 * @name f__151A_0136_0034_68C8
 * @implements 151A:0136:0034:68C8 ()
 *
 * Called From: 151A:018A:0009:CD35
 * Called From: 151A:018A:000A:D534
 */
void f__151A_0136_0034_68C8()
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
	if (emu_flags.zf) { f__151A_0186_000A_D534(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xD));
	emu_push(emu_cs); emu_push(0x016A); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__151A_016A_0014_F6B8();
}

/**
 * Decompiled function f__151A_016A_0014_F6B8()
 *
 * @name f__151A_016A_0014_F6B8
 * @implements 151A:016A:0014:F6B8 ()
 *
 * Called From: 151A:016A:0034:68C8
 */
void f__151A_016A_0014_F6B8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_di);
	if (!emu_flags.zf) { f__151A_0186_000A_D534(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x017E); f__151A_0310_0018_9006();
	f__151A_017E_0008_F428();
}

/**
 * Decompiled function f__151A_017E_0008_F428()
 *
 * @name f__151A_017E_0008_F428
 * @implements 151A:017E:0008:F428 ()
 *
 * Called From: 151A:017E:0014:F6B8
 */
void f__151A_017E_0008_F428()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__151A_0190_0006_137A(); return;
}

/**
 * Decompiled function f__151A_0184_0002_03B8()
 *
 * @name f__151A_0184_0002_03B8
 * @implements 151A:0184:0002:03B8 ()
 *
 * Called From: 151A:018E:0004:0774
 * Called From: 151A:018E:000A:D534
 */
void f__151A_0184_0002_03B8()
{
	f__151A_0190_0006_137A(); return;
}

/**
 * Decompiled function f__151A_0186_000A_D534()
 *
 * @name f__151A_0186_000A_D534
 * @implements 151A:0186:000A:D534 ()
 *
 * Called From: 151A:0158:0034:68C8
 * Called From: 151A:016E:0014:F6B8
 */
void f__151A_0186_000A_D534()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x70);
	if ((emu_flags.sf != emu_flags.of)) { f__151A_0136_0034_68C8(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__151A_0184_0002_03B8(); return;
}

/**
 * Decompiled function f__151A_0187_0009_CD35()
 *
 * @name f__151A_0187_0009_CD35
 * @implements 151A:0187:0009:CD35 ()
 *
 * Called From: 151A:0134:0022:9DA5
 */
void f__151A_0187_0009_CD35()
{
	emu_cmpws(&emu_si, 0x70);
	if ((emu_flags.sf != emu_flags.of)) { f__151A_0136_0034_68C8(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0184; emu_last_cs = 0x151A; emu_last_ip = 0x018E; emu_last_length = 0x0009; emu_last_crc = 0xCD35; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__151A_018C_0004_0774()
 *
 * @name f__151A_018C_0004_0774
 * @implements 151A:018C:0004:0774 ()
 *
 * Called From: 151A:0130:0022:9DA5
 */
void f__151A_018C_0004_0774()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__151A_0184_0002_03B8(); return;
}

/**
 * Decompiled function f__151A_0190_0006_137A()
 *
 * @name f__151A_0190_0006_137A
 * @implements 151A:0190:0006:137A ()
 *
 * Called From: 151A:0184:0002:03B8
 * Called From: 151A:0184:0008:F428
 */
void f__151A_0190_0006_137A()
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
 * Decompiled function f__151A_0196_0018_C5B8()
 *
 * @name f__151A_0196_0018_C5B8
 * @implements 151A:0196:0018:C5B8 ()
 *
 * Called From: 07D4:0049:0005:1A6A
 */
void f__151A_0196_0018_C5B8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x60EA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x60E8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__151A_01AE_000B_AD9B(); return; }
	f__151A_02A1_0009_770D(); return;
}

/**
 * Decompiled function f__151A_01AE_000B_AD9B()
 *
 * @name f__151A_01AE_000B_AD9B
 * @implements 151A:01AE:000B:AD9B ()
 *
 * Called From: 151A:01A9:0018:C5B8
 */
void f__151A_01AE_000B_AD9B()
{
	if (!emu_flags.zf) { f__151A_01B9_0010_CFBE(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if ((emu_flags.cf || emu_flags.zf)) { f__151A_01B9_0010_CFBE(); return; }
	f__151A_02A1_0009_770D(); return;
}

/**
 * Decompiled function f__151A_01B9_0010_CFBE()
 *
 * @name f__151A_01B9_0010_CFBE
 * @implements 151A:01B9:0010:CFBE ()
 *
 * Called From: 151A:01AE:000B:AD9B
 * Called From: 151A:01B4:000B:AD9B
 */
void f__151A_01B9_0010_CFBE()
{
	emu_addw(&emu_get_memory16(emu_ds, 0x00,  0x60E8), 0x2710);
	emu_adcws(&emu_get_memory16(emu_ds, 0x00,  0x60EA), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__151A_0299_0008_E986(); return;
}

/**
 * Decompiled function f__151A_01C9_0096_67B3()
 *
 * @name f__151A_01C9_0096_67B3
 * @implements 151A:01C9:0096:67B3 ()
 *
 * Called From: 151A:029E:0008:E986
 * Called From: 151A:029E:0009:6586
 * Called From: 151A:029E:003F:8901
 * Called From: 151A:029E:0042:8A83
 * Called From: 151A:029E:001A:8B6F
 */
void f__151A_01C9_0096_67B3()
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
	if (emu_flags.zf) { f__151A_0262_003F_8901(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__151A_0262_003F_8901(); return; }
	if (!emu_flags.zf) { f__151A_0205_005A_A438(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!(emu_flags.cf || emu_flags.zf)) { f__151A_0262_003F_8901(); return; }
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
	if (emu_flags.zf) { f__151A_0235_002A_08A8(); return; }
	emu_orw(&emu_di, 0xF000);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0xC);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_andw(&emu_ax.x, 0xF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x024D; emu_last_cs = 0x151A; emu_last_ip = 0x0246; emu_last_length = 0x0096; emu_last_crc = 0x67B3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, emu_bx.x,  0x60EC);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, emu_bx.x,  0x60EE);
	emu_push(0x025F);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x151A; emu_last_ip = 0x025B; emu_last_length = 0x0096; emu_last_crc = 0x67B3;
			emu_call();
			return;
	}
	f__151A_025F_0042_8A83();
}

/**
 * Decompiled function f__151A_0205_005A_A438()
 *
 * @name f__151A_0205_005A_A438
 * @implements 151A:0205:005A:A438 ()
 *
 * Called From: 151A:01FD:0096:67B3
 */
void f__151A_0205_005A_A438()
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
	if (emu_flags.zf) { f__151A_0235_002A_08A8(); return; }
	emu_orw(&emu_di, 0xF000);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0xC);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_andw(&emu_ax.x, 0xF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x024D; emu_last_cs = 0x151A; emu_last_ip = 0x0246; emu_last_length = 0x005A; emu_last_crc = 0xA438; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, emu_bx.x,  0x60EC);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, emu_bx.x,  0x60EE);
	emu_push(0x025F);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x151A; emu_last_ip = 0x025B; emu_last_length = 0x005A; emu_last_crc = 0xA438;
			emu_call();
			return;
	}
	f__151A_025F_0042_8A83();
}

/**
 * Decompiled function f__151A_0235_002A_08A8()
 *
 * @name f__151A_0235_002A_08A8
 * @implements 151A:0235:002A:08A8 ()
 *
 * Called From: 151A:022F:0096:67B3
 * Called From: 151A:022F:005A:A438
 */
void f__151A_0235_002A_08A8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0xC);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_andw(&emu_ax.x, 0xF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__151A_024D_0012_C84B(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, emu_bx.x,  0x60EC);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, emu_bx.x,  0x60EE);
	emu_push(0x025F);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x151A; emu_last_ip = 0x025B; emu_last_length = 0x002A; emu_last_crc = 0x08A8;
			emu_call();
			return;
	}
	f__151A_025F_0042_8A83();
}

/**
 * Decompiled function f__151A_024D_0012_C84B()
 *
 * @name f__151A_024D_0012_C84B
 * @implements 151A:024D:0012:C84B ()
 *
 * Called From: 151A:0246:002A:08A8
 */
void f__151A_024D_0012_C84B()
{
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, emu_bx.x,  0x60EC);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, emu_bx.x,  0x60EE);
	emu_push(0x025F);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x151A02E8: f__151A_02E8_0010_940B(); break;
		case 0x151A0310: f__151A_0310_0018_9006(); break;
		case 0x151A03ED: f__151A_03ED_0014_A6F4(); break;
		case 0x151A043B: f__151A_043B_0018_8630(); break;
		case 0x151A046F: f__151A_046F_0017_BECC(); break;
		case 0x151A0526: f__151A_0526_0028_A1C7(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x151A; emu_last_ip = 0x025B; emu_last_length = 0x0012; emu_last_crc = 0xC84B;
			emu_call();
			return;
	}
	f__151A_025F_0042_8A83();
}

/**
 * Decompiled function f__151A_025F_0042_8A83()
 *
 * @name f__151A_025F_0042_8A83
 * @implements 151A:025F:0042:8A83 ()
 *
 * Called From: 151A:025F:0012:C84B
 */
void f__151A_025F_0042_8A83()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x9));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xB));
	if (emu_flags.zf) { f__151A_0298_0009_6586(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x60EA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__151A_0298_0009_6586(); return; }
	if ((emu_flags.sf != emu_flags.of)) { f__151A_0287_001A_8B6F(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x60E8));
	if (!emu_flags.cf) { f__151A_0298_0009_6586(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60EA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60E8), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x70);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x02A1; emu_last_cs = 0x151A; emu_last_ip = 0x029C; emu_last_length = 0x0042; emu_last_crc = 0x8A83; emu_call(); return; } // Jump does not resolve
	f__151A_01C9_0096_67B3(); return;
}

/**
 * Decompiled function f__151A_0262_003F_8901()
 *
 * @name f__151A_0262_003F_8901
 * @implements 151A:0262:003F:8901 ()
 *
 * Called From: 151A:01EB:0096:67B3
 * Called From: 151A:01FB:0096:67B3
 * Called From: 151A:0203:0096:67B3
 */
void f__151A_0262_003F_8901()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x9));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xB));
	if (emu_flags.zf) { f__151A_0298_0009_6586(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x60EA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__151A_0298_0009_6586(); return; }
	if ((emu_flags.sf != emu_flags.of)) { f__151A_0287_001A_8B6F(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x60E8));
	if (!emu_flags.cf) { f__151A_0298_0009_6586(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60EA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60E8), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x70);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x02A1; emu_last_cs = 0x151A; emu_last_ip = 0x029C; emu_last_length = 0x003F; emu_last_crc = 0x8901; emu_call(); return; } // Jump does not resolve
	f__151A_01C9_0096_67B3(); return;
}

/**
 * Decompiled function f__151A_0287_001A_8B6F()
 *
 * @name f__151A_0287_001A_8B6F
 * @implements 151A:0287:001A:8B6F ()
 *
 * Called From: 151A:027F:0042:8A83
 * Called From: 151A:027F:003F:8901
 */
void f__151A_0287_001A_8B6F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60EA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60E8), emu_dx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x70);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x02A1; emu_last_cs = 0x151A; emu_last_ip = 0x029C; emu_last_length = 0x001A; emu_last_crc = 0x8B6F; emu_call(); return; } // Jump does not resolve
	f__151A_01C9_0096_67B3(); return;
}

/**
 * Decompiled function f__151A_0298_0009_6586()
 *
 * @name f__151A_0298_0009_6586
 * @implements 151A:0298:0009:6586 ()
 *
 * Called From: 151A:026D:003F:8901
 * Called From: 151A:026D:0042:8A83
 * Called From: 151A:027D:0042:8A83
 * Called From: 151A:027D:003F:8901
 * Called From: 151A:0285:0042:8A83
 * Called From: 151A:0285:003F:8901
 */
void f__151A_0298_0009_6586()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x70);
	if (!(emu_flags.sf != emu_flags.of)) { f__151A_02A1_0009_770D(); return; }
	f__151A_01C9_0096_67B3(); return;
}

/**
 * Decompiled function f__151A_0299_0008_E986()
 *
 * @name f__151A_0299_0008_E986
 * @implements 151A:0299:0008:E986 ()
 *
 * Called From: 151A:01C6:0010:CFBE
 */
void f__151A_0299_0008_E986()
{
	emu_cmpws(&emu_si, 0x70);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x02A1; emu_last_cs = 0x151A; emu_last_ip = 0x029C; emu_last_length = 0x0008; emu_last_crc = 0xE986; emu_call(); return; } // Jump does not resolve
	f__151A_01C9_0096_67B3(); return;
}

/**
 * Decompiled function f__151A_02A1_0009_770D()
 *
 * @name f__151A_02A1_0009_770D
 * @implements 151A:02A1:0009:770D ()
 *
 * Called From: 151A:01AB:0018:C5B8
 * Called From: 151A:01B6:000B:AD9B
 * Called From: 151A:029C:0009:6586
 */
void f__151A_02A1_0009_770D()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x60EA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x60E8));
	f__151A_02AA_0006_137A(); return;
}

/**
 * Decompiled function f__151A_02AA_0006_137A()
 *
 * @name f__151A_02AA_0006_137A
 * @implements 151A:02AA:0006:137A ()
 *
 * Called From: 151A:02A8:0009:770D
 */
void f__151A_02AA_0006_137A()
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
 * Decompiled function f__151A_02E8_0010_940B()
 *
 * @name f__151A_02E8_0010_940B
 * @implements 151A:02E8:0010:940B ()
 *
 * Called From: 151A:025B:0012:C84B
 */
void f__151A_02E8_0010_940B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), 0x0);
	emu_movw(&emu_ax.x, 0x1);
	f__151A_02F8_0002_00E2(); return;
}

/**
 * Decompiled function f__151A_02F8_0002_00E2()
 *
 * @name f__151A_02F8_0002_00E2
 * @implements 151A:02F8:0002:00E2 ()
 *
 * Called From: 151A:02F6:0010:940B
 */
void f__151A_02F8_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__151A_0310_0018_9006()
 *
 * @name f__151A_0310_0018_9006
 * @implements 151A:0310:0018:9006 ()
 *
 * Called From: 151A:017B:0014:F6B8
 * Called From: 151A:025B:0012:C84B
 */
void f__151A_0310_0018_9006()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xD));
	emu_push(emu_cs); emu_push(0x0328); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__151A_0328_0030_A14B();
}

/**
 * Decompiled function f__151A_0328_0030_A14B()
 *
 * @name f__151A_0328_0030_A14B
 * @implements 151A:0328:0030:A14B ()
 *
 * Called From: 151A:0328:0018:9006
 */
void f__151A_0328_0030_A14B()
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
	f__151A_03C5_0022_FB69(); return;
}

/**
 * Decompiled function f__151A_0358_0047_CBC4()
 *
 * @name f__151A_0358_0047_CBC4
 * @implements 151A:0358:0047:CBC4 ()
 *
 * Called From: 151A:03D2:0022:FB69
 * Called From: 151A:03D2:0026:C171
 */
void f__151A_0358_0047_CBC4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_si, emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x0);
	if (emu_flags.zf) { f__151A_0399_0006_014C(); return; }
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
	f__151A_039F_0022_EFCA();
}

/**
 * Decompiled function f__151A_0399_0006_014C()
 *
 * @name f__151A_0399_0006_014C
 * @implements 151A:0399:0006:014C ()
 *
 * Called From: 151A:036F:0047:CBC4
 */
void f__151A_0399_0006_014C()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x039F); emu_cs = 0x34CD; ovl__34CD(9);
	f__151A_039F_0022_EFCA();
}

/**
 * Decompiled function f__151A_039F_0022_EFCA()
 *
 * @name f__151A_039F_0022_EFCA
 * @implements 151A:039F:0022:EFCA ()
 *
 * Called From: 151A:039F:0047:CBC4
 * Called From: 151A:039F:0006:014C
 */
void f__151A_039F_0022_EFCA()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__151A_03B5_000C_F088(); return; }
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
	f__151A_03C1_0026_C171();
}

/**
 * Decompiled function f__151A_03B5_000C_F088()
 *
 * @name f__151A_03B5_000C_F088
 * @implements 151A:03B5:000C:F088 ()
 *
 * Called From: 151A:03A2:0022:EFCA
 */
void f__151A_03B5_000C_F088()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03C1); emu_cs = 0x34CD; ovl__34CD(29);
	f__151A_03C1_0026_C171();
}

/**
 * Decompiled function f__151A_03C1_0026_C171()
 *
 * @name f__151A_03C1_0026_C171
 * @implements 151A:03C1:0026:C171 ()
 *
 * Called From: 151A:03C1:0022:EFCA
 * Called From: 151A:03C1:000C:F088
 */
void f__151A_03C1_0026_C171()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2D52), emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__151A_0358_0047_CBC4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xB), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x9), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__151A_03E7_0006_137A(); return;
}

/**
 * Decompiled function f__151A_03C5_0022_FB69()
 *
 * @name f__151A_03C5_0022_FB69
 * @implements 151A:03C5:0022:FB69 ()
 *
 * Called From: 151A:0356:0030:A14B
 */
void f__151A_03C5_0022_FB69()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2D52), emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__151A_0358_0047_CBC4(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xB), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x9), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x03E7; emu_last_cs = 0x151A; emu_last_ip = 0x03E5; emu_last_length = 0x0022; emu_last_crc = 0xFB69; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__151A_03E7_0006_137A()
 *
 * @name f__151A_03E7_0006_137A
 * @implements 151A:03E7:0006:137A ()
 *
 * Called From: 151A:03E5:0026:C171
 */
void f__151A_03E7_0006_137A()
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
 * Decompiled function f__151A_03ED_0014_A6F4()
 *
 * @name f__151A_03ED_0014_A6F4
 * @implements 151A:03ED:0014:A6F4 ()
 *
 * Called From: 151A:025B:0012:C84B
 */
void f__151A_03ED_0014_A6F4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xD));
	emu_push(emu_cs); emu_push(0x0401); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__151A_0401_0021_2EC3();
}

/**
 * Decompiled function f__151A_0401_0021_2EC3()
 *
 * @name f__151A_0401_0021_2EC3
 * @implements 151A:0401:0021:2EC3 ()
 *
 * Called From: 151A:0401:0014:A6F4
 */
void f__151A_0401_0021_2EC3()
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
	f__151A_0422_0016_4C3C();
}

/**
 * Decompiled function f__151A_0422_0016_4C3C()
 *
 * @name f__151A_0422_0016_4C3C
 * @implements 151A:0422:0016:4C3C ()
 *
 * Called From: 151A:0422:0021:2EC3
 */
void f__151A_0422_0016_4C3C()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xB), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x9), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__151A_0438_0003_0212(); return;
}

/**
 * Decompiled function f__151A_0438_0003_0212()
 *
 * @name f__151A_0438_0003_0212
 * @implements 151A:0438:0003:0212 ()
 *
 * Called From: 151A:0436:0016:4C3C
 */
void f__151A_0438_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__151A_043B_0018_8630()
 *
 * @name f__151A_043B_0018_8630
 * @implements 151A:043B:0018:8630 ()
 *
 * Called From: 151A:025B:0012:C84B
 */
void f__151A_043B_0018_8630()
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
	emu_push(emu_cs); emu_push(0x0453); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__151A_0453_0019_1CFC();
}

/**
 * Decompiled function f__151A_0453_0019_1CFC()
 *
 * @name f__151A_0453_0019_1CFC
 * @implements 151A:0453:0019:1CFC ()
 *
 * Called From: 151A:0453:0018:8630
 */
void f__151A_0453_0019_1CFC()
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
	f__151A_046C_0003_0212(); return;
}

/**
 * Decompiled function f__151A_046C_0003_0212()
 *
 * @name f__151A_046C_0003_0212
 * @implements 151A:046C:0003:0212 ()
 *
 * Called From: 151A:046A:0019:1CFC
 */
void f__151A_046C_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__151A_046F_0017_BECC()
 *
 * @name f__151A_046F_0017_BECC
 * @implements 151A:046F:0017:BECC ()
 *
 * Called From: 151A:025B:0012:C84B
 */
void f__151A_046F_0017_BECC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xD));
	emu_push(emu_cs); emu_push(0x0486); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__151A_0486_000A_244D();
}

/**
 * Decompiled function f__151A_0486_000A_244D()
 *
 * @name f__151A_0486_000A_244D
 * @implements 151A:0486:000A:244D ()
 *
 * Called From: 151A:0486:0017:BECC
 */
void f__151A_0486_000A_244D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0490); emu_cs = 0x34CD; ovl__34CD(9);
	f__151A_0490_0008_6748();
}

/**
 * Decompiled function f__151A_0490_0008_6748()
 *
 * @name f__151A_0490_0008_6748
 * @implements 151A:0490:0008:6748 ()
 *
 * Called From: 151A:0490:000A:244D
 */
void f__151A_0490_0008_6748()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__151A_0498_0081_DDEB(); return; }
	emu_ip = 0x051C; emu_last_cs = 0x151A; emu_last_ip = 0x0495; emu_last_length = 0x0008; emu_last_crc = 0x6748; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__151A_0498_0081_DDEB()
 *
 * @name f__151A_0498_0081_DDEB
 * @implements 151A:0498:0081:DDEB ()
 *
 * Called From: 151A:0493:0008:6748
 */
void f__151A_0498_0081_DDEB()
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
	f__151A_0519_0008_F43C();
}

/**
 * Decompiled function f__151A_0519_0008_F43C()
 *
 * @name f__151A_0519_0008_F43C
 * @implements 151A:0519:0008:F43C ()
 *
 * Called From: 151A:0519:0081:DDEB
 */
void f__151A_0519_0008_F43C()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__151A_0521_0005_04BA(); return;
}

/**
 * Decompiled function f__151A_0521_0005_04BA()
 *
 * @name f__151A_0521_0005_04BA
 * @implements 151A:0521:0005:04BA ()
 *
 * Called From: 151A:051F:0008:F43C
 */
void f__151A_0521_0005_04BA()
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
 * Decompiled function f__151A_0526_0028_A1C7()
 *
 * @name f__151A_0526_0028_A1C7
 * @implements 151A:0526:0028:A1C7 ()
 *
 * Called From: 151A:025B:0012:C84B
 */
void f__151A_0526_0028_A1C7()
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
	emu_push(emu_cs); emu_push(0x054E); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__151A_054E_0055_F294();
}

/**
 * Decompiled function f__151A_054E_0055_F294()
 *
 * @name f__151A_054E_0055_F294
 * @implements 151A:054E:0055:F294 ()
 *
 * Called From: 151A:054E:0028:A1C7
 */
void f__151A_054E_0055_F294()
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
	if ((emu_flags.cf || emu_flags.zf)) { f__151A_05DA_001A_EB5E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x17);
	if (emu_flags.zf) { emu_ip = 0x059D; emu_last_cs = 0x151A; emu_last_ip = 0x0591; emu_last_length = 0x0055; emu_last_crc = 0xF294; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x18);
	if (!emu_flags.zf) { f__151A_05DA_001A_EB5E(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x05A3); emu_cs = 0x34CD; emu_ip = 0x0659; emu_last_cs = 0x151A; emu_last_ip = 0x059E; emu_last_length = 0x0055; emu_last_crc = 0xF294; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__151A_05DA_001A_EB5E()
 *
 * @name f__151A_05DA_001A_EB5E
 * @implements 151A:05DA:001A:EB5E ()
 *
 * Called From: 151A:0587:0055:F294
 * Called From: 151A:059B:0055:F294
 */
void f__151A_05DA_001A_EB5E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_dx.x, 0x12);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x2C64);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_xorw(&emu_di, emu_di);
	f__151A_06B1_0008_314A(); return;
}

/**
 * Decompiled function f__151A_05F4_001D_EE4F()
 *
 * @name f__151A_05F4_001D_EE4F
 * @implements 151A:05F4:001D:EE4F ()
 *
 * Called From: 151A:06B6:0008:314A
 * Called From: 151A:06B6:000A:DB4B
 * Called From: 151A:06B6:0009:BF4A
 */
void f__151A_05F4_001D_EE4F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xD));
	emu_push(emu_cs); emu_push(0x0611); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__151A_0611_0073_5CEB();
}

/**
 * Decompiled function f__151A_0611_0073_5CEB()
 *
 * @name f__151A_0611_0073_5CEB
 * @implements 151A:0611:0073:5CEB ()
 *
 * Called From: 151A:0611:001D:EE4F
 */
void f__151A_0611_0073_5CEB()
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
	if (emu_flags.zf) { f__151A_06B0_0009_BF4A(); return; }
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
	f__151A_0684_0022_EFCA();
}

/**
 * Decompiled function f__151A_0684_0022_EFCA()
 *
 * @name f__151A_0684_0022_EFCA
 * @implements 151A:0684:0022:EFCA ()
 *
 * Called From: 151A:0684:0073:5CEB
 */
void f__151A_0684_0022_EFCA()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__151A_069A_000C_F088(); return; }
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
	f__151A_06A6_0009_CB0F();
}

/**
 * Decompiled function f__151A_069A_000C_F088()
 *
 * @name f__151A_069A_000C_F088
 * @implements 151A:069A:000C:F088 ()
 *
 * Called From: 151A:0687:0022:EFCA
 */
void f__151A_069A_000C_F088()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06A6); emu_cs = 0x34CD; ovl__34CD(29);
	f__151A_06A6_0009_CB0F();
}

/**
 * Decompiled function f__151A_06A6_0009_CB0F()
 *
 * @name f__151A_06A6_0009_CB0F
 * @implements 151A:06A6:0009:CB0F ()
 *
 * Called From: 151A:06A6:0022:EFCA
 * Called From: 151A:06A6:000C:F088
 */
void f__151A_06A6_0009_CB0F()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06AF); emu_cs = 0x07D4; f__07D4_02F8_0055_0AD5();
	f__151A_06AF_000A_DB4B();
}

/**
 * Decompiled function f__151A_06AF_000A_DB4B()
 *
 * @name f__151A_06AF_000A_DB4B
 * @implements 151A:06AF:000A:DB4B ()
 *
 * Called From: 151A:06AF:0009:CB0F
 */
void f__151A_06AF_000A_DB4B()
{
	emu_pop(&emu_cx.x);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!(emu_flags.sf != emu_flags.of)) { f__151A_06B9_0005_14BC(); return; }
	f__151A_05F4_001D_EE4F(); return;
}

/**
 * Decompiled function f__151A_06B0_0009_BF4A()
 *
 * @name f__151A_06B0_0009_BF4A
 * @implements 151A:06B0:0009:BF4A ()
 *
 * Called From: 151A:063A:0073:5CEB
 */
void f__151A_06B0_0009_BF4A()
{
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!(emu_flags.sf != emu_flags.of)) { f__151A_06B9_0005_14BC(); return; }
	f__151A_05F4_001D_EE4F(); return;
}

/**
 * Decompiled function f__151A_06B1_0008_314A()
 *
 * @name f__151A_06B1_0008_314A
 * @implements 151A:06B1:0008:314A ()
 *
 * Called From: 151A:05F1:001A:EB5E
 */
void f__151A_06B1_0008_314A()
{
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x06B9; emu_last_cs = 0x151A; emu_last_ip = 0x06B4; emu_last_length = 0x0008; emu_last_crc = 0x314A; emu_call(); return; } // Jump does not resolve
	f__151A_05F4_001D_EE4F(); return;
}

/**
 * Decompiled function f__151A_06B9_0005_14BC()
 *
 * @name f__151A_06B9_0005_14BC
 * @implements 151A:06B9:0005:14BC ()
 *
 * Called From: 151A:06B4:000A:DB4B
 * Called From: 151A:06B4:0009:BF4A
 */
void f__151A_06B9_0005_14BC()
{
	emu_movw(&emu_ax.x, 0x1);
	f__151A_06BE_0006_137A(); return;
}

/**
 * Decompiled function f__151A_06BE_0006_137A()
 *
 * @name f__151A_06BE_0006_137A
 * @implements 151A:06BE:0006:137A ()
 *
 * Called From: 151A:06BC:0005:14BC
 */
void f__151A_06BE_0006_137A()
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
