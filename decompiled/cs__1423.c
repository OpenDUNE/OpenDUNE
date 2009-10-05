/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1423_0009_0025_FE5D()
 *
 * @name f__1423_0009_0025_FE5D
 * @implements 1423:0009:0025:FE5D ()
 *
 * Called From: 1423:02D0:0004:038D
 */
void f__1423_0009_0025_FE5D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379E), 0x0);
	if (emu_flags.zf) { f__1423_0037_001F_CF6C(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x60AE);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x002E); emu_cs = 0x2B1E; emu_ip = 0x0189; emu_last_cs = 0x1423; emu_last_ip = 0x0029; emu_last_length = 0x0025; emu_last_crc = 0xFE5D; emu_call();
	/* Unresolved jump */ emu_ip = 0x002E; emu_last_cs = 0x1423; emu_last_ip = 0x002E; emu_last_length = 0x0025; emu_last_crc = 0xFE5D; emu_call();
}

/**
 * Decompiled function f__1423_0034_0003_9DB3()
 *
 * @name f__1423_0034_0003_9DB3
 * @implements 1423:0034:0003:9DB3 ()
 *
 * Called From: 1423:0054:001F:CF6C
 * Called From: 1423:0182:0005:C65F
 */
void f__1423_0034_0003_9DB3()
{
	f__1423_0185_0006_F7CE(); return;
}

/**
 * Decompiled function f__1423_0037_001F_CF6C()
 *
 * @name f__1423_0037_001F_CF6C
 * @implements 1423:0037:001F:CF6C ()
 *
 * Called From: 1423:0018:0025:FE5D
 */
void f__1423_0037_001F_CF6C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38AC));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38AE));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1423_0056_000B_8237(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0052; emu_last_cs = 0x1423; emu_last_ip = 0x004A; emu_last_length = 0x001F; emu_last_crc = 0xCF6C; emu_call(); return; }
	emu_cmpw(&emu_dx.x, 0x1C20);
	if (!emu_flags.cf) { f__1423_0056_000B_8237(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1423_0034_0003_9DB3(); return;
}

/**
 * Decompiled function f__1423_0056_000B_8237()
 *
 * @name f__1423_0056_000B_8237
 * @implements 1423:0056:000B:8237 ()
 *
 * Called From: 1423:0048:001F:CF6C
 * Called From: 1423:0050:001F:CF6C
 */
void f__1423_0056_000B_8237()
{
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D01), 0x3);
	if (!emu_flags.zf) { f__1423_0061_001A_9364(); return; }
	/* Unresolved jump */ emu_ip = 0x00FE; emu_last_cs = 0x1423; emu_last_ip = 0x005E; emu_last_length = 0x000B; emu_last_crc = 0x8237; emu_call();
}

/**
 * Decompiled function f__1423_0061_001A_9364()
 *
 * @name f__1423_0061_001A_9364
 * @implements 1423:0061:001A:9364 ()
 *
 * Called From: 1423:005C:000B:8237
 */
void f__1423_0061_001A_9364()
{
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x007B); emu_cs = 0x1082; emu_Building_FindFirst();
	f__1423_007B_0005_9FAE();
}

/**
 * Decompiled function f__1423_007B_0005_9FAE()
 *
 * @name f__1423_007B_0005_9FAE
 * @implements 1423:007B:0005:9FAE ()
 *
 * Called From: 1423:007B:001A:9364
 */
void f__1423_007B_0005_9FAE()
{
	emu_addws(&emu_sp, 0x8);
	f__1423_00B5_0046_FB00(); return;
}

/**
 * Decompiled function f__1423_0080_0025_A252()
 *
 * @name f__1423_0080_0025_A252
 * @implements 1423:0080:0025:A252 ()
 *
 * Called From: 1423:00C1:0046:FB00
 * Called From: 1423:00C1:0048:A2B2
 */
void f__1423_0080_0025_A252()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00A8; emu_last_cs = 0x1423; emu_last_ip = 0x0088; emu_last_length = 0x0025; emu_last_crc = 0xA252; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00A8; emu_last_cs = 0x1423; emu_last_ip = 0x0092; emu_last_length = 0x0025; emu_last_crc = 0xA252; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__1423_00A5_000E_2A33(); return; }
	emu_incw(&emu_di);
	f__1423_00A8_000B_166D(); return;
}

/**
 * Decompiled function f__1423_00A5_000E_2A33()
 *
 * @name f__1423_00A5_000E_2A33
 * @implements 1423:00A5:000E:2A33 ()
 *
 * Called From: 1423:00A0:0025:A252
 */
void f__1423_00A5_000E_2A33()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x00B3); emu_cs = 0x1082; emu_Building_FindNext();
	f__1423_00B3_0048_A2B2();
}

/**
 * Decompiled function f__1423_00A8_000B_166D()
 *
 * @name f__1423_00A8_000B_166D
 * @implements 1423:00A8:000B:166D ()
 *
 * Called From: 1423:00A3:0025:A252
 */
void f__1423_00A8_000B_166D()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x00B3); emu_cs = 0x1082; emu_Building_FindNext();
	f__1423_00B3_0048_A2B2();
}

/**
 * Decompiled function f__1423_00B3_0048_A2B2()
 *
 * @name f__1423_00B3_0048_A2B2
 * @implements 1423:00B3:0048:A2B2 ()
 *
 * Called From: 1423:00B3:000B:166D
 * Called From: 1423:00B3:000E:2A33
 */
void f__1423_00B3_0048_A2B2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1423_0080_0025_A252(); return; }
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D01), 0x1);
	if (emu_flags.zf) { f__1423_00D4_0027_06F3(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__1423_00D4_0027_06F3(); return; }
	emu_orws(&emu_si, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D01), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00E3; emu_last_cs = 0x1423; emu_last_ip = 0x00DA; emu_last_length = 0x0048; emu_last_crc = 0xA2B2; emu_call(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__1423_00E3_0018_9B05(); return; }
	emu_orws(&emu_si, 0x1);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00FE; emu_last_cs = 0x1423; emu_last_ip = 0x00E5; emu_last_length = 0x0048; emu_last_crc = 0xA2B2; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x60BA);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x00FB); emu_cs = 0x2B1E; emu_ip = 0x0189; emu_last_cs = 0x1423; emu_last_ip = 0x00F6; emu_last_length = 0x0048; emu_last_crc = 0xA2B2; emu_call();
	f__1423_00FB_0025_99AA();
}

/**
 * Decompiled function f__1423_00B5_0046_FB00()
 *
 * @name f__1423_00B5_0046_FB00
 * @implements 1423:00B5:0046:FB00 ()
 *
 * Called From: 1423:007E:0005:9FAE
 */
void f__1423_00B5_0046_FB00()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1423_0080_0025_A252(); return; }
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D01), 0x1);
	if (emu_flags.zf) { f__1423_00D4_0027_06F3(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00D4; emu_last_cs = 0x1423; emu_last_ip = 0x00CF; emu_last_length = 0x0046; emu_last_crc = 0xFB00; emu_call(); return; }
	emu_orws(&emu_si, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D01), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00E3; emu_last_cs = 0x1423; emu_last_ip = 0x00DA; emu_last_length = 0x0046; emu_last_crc = 0xFB00; emu_call(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00E3; emu_last_cs = 0x1423; emu_last_ip = 0x00DE; emu_last_length = 0x0046; emu_last_crc = 0xFB00; emu_call(); return; }
	emu_orws(&emu_si, 0x1);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00FE; emu_last_cs = 0x1423; emu_last_ip = 0x00E5; emu_last_length = 0x0046; emu_last_crc = 0xFB00; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x60BA);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x00FB); emu_cs = 0x2B1E; emu_ip = 0x0189; emu_last_cs = 0x1423; emu_last_ip = 0x00F6; emu_last_length = 0x0046; emu_last_crc = 0xFB00; emu_call();
	f__1423_00FB_0025_99AA();
}

/**
 * Decompiled function f__1423_00D4_0027_06F3()
 *
 * @name f__1423_00D4_0027_06F3
 * @implements 1423:00D4:0027:06F3 ()
 *
 * Called From: 1423:00C9:0048:A2B2
 * Called From: 1423:00C9:0046:FB00
 * Called From: 1423:00CF:0048:A2B2
 */
void f__1423_00D4_0027_06F3()
{
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D01), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00E3; emu_last_cs = 0x1423; emu_last_ip = 0x00DA; emu_last_length = 0x0027; emu_last_crc = 0x06F3; emu_call(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__1423_00E3_0018_9B05(); return; }
	emu_orws(&emu_si, 0x1);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00FE; emu_last_cs = 0x1423; emu_last_ip = 0x00E5; emu_last_length = 0x0027; emu_last_crc = 0x06F3; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x60BA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00FB); emu_cs = 0x2B1E; f__2B1E_0189_001B_E6CF();
	f__1423_00FB_0025_99AA();
}

/**
 * Decompiled function f__1423_00E3_0018_9B05()
 *
 * @name f__1423_00E3_0018_9B05
 * @implements 1423:00E3:0018:9B05 ()
 *
 * Called From: 1423:00DE:0027:06F3
 * Called From: 1423:00DE:0048:A2B2
 */
void f__1423_00E3_0018_9B05()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__1423_00FE_0022_DCFE(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x60BA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00FB); emu_cs = 0x2B1E; f__2B1E_0189_001B_E6CF();
	f__1423_00FB_0025_99AA();
}

/**
 * Decompiled function f__1423_00FB_0025_99AA()
 *
 * @name f__1423_00FB_0025_99AA
 * @implements 1423:00FB:0025:99AA ()
 *
 * Called From: 1423:00FB:0027:06F3
 * Called From: 1423:00FB:0018:9B05
 */
void f__1423_00FB_0025_99AA()
{
	emu_addws(&emu_sp, 0xA);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D01), 0x4);
	if (emu_flags.zf) { f__1423_013F_0022_C51B(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B6), 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x013F; emu_last_cs = 0x1423; emu_last_ip = 0x010B; emu_last_length = 0x0025; emu_last_crc = 0x99AA; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B6));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1423_0120_001C_E795(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x0122; emu_last_cs = 0x1423; emu_last_ip = 0x011E; emu_last_length = 0x0025; emu_last_crc = 0x99AA; emu_call();
}

/**
 * Decompiled function f__1423_00FE_0022_DCFE()
 *
 * @name f__1423_00FE_0022_DCFE
 * @implements 1423:00FE:0022:DCFE ()
 *
 * Called From: 1423:00E5:0018:9B05
 */
void f__1423_00FE_0022_DCFE()
{
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D01), 0x4);
	if (emu_flags.zf) { f__1423_013F_0022_C51B(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B6), 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x013F; emu_last_cs = 0x1423; emu_last_ip = 0x010B; emu_last_length = 0x0022; emu_last_crc = 0xDCFE; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B6));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1423_0120_001C_E795(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__1423_0122_001A_E4BD(); return;
}

/**
 * Decompiled function f__1423_0120_001C_E795()
 *
 * @name f__1423_0120_001C_E795
 * @implements 1423:0120:001C:E795 ()
 *
 * Called From: 1423:0119:0022:DCFE
 * Called From: 1423:0119:0025:99AA
 */
void f__1423_0120_001C_E795()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_orw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__1423_013F_0022_C51B(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x60C7);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x2B1E; f__2B1E_0189_001B_E6CF();
	f__1423_013C_0025_804F();
}

/**
 * Decompiled function f__1423_0122_001A_E4BD()
 *
 * @name f__1423_0122_001A_E4BD
 * @implements 1423:0122:001A:E4BD ()
 *
 * Called From: 1423:011E:0022:DCFE
 */
void f__1423_0122_001A_E4BD()
{
	emu_orw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x013F; emu_last_cs = 0x1423; emu_last_ip = 0x0126; emu_last_length = 0x001A; emu_last_crc = 0xE4BD; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x60C7);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x2B1E; f__2B1E_0189_001B_E6CF();
	f__1423_013C_0025_804F();
}

/**
 * Decompiled function f__1423_013C_0025_804F()
 *
 * @name f__1423_013C_0025_804F
 * @implements 1423:013C:0025:804F ()
 *
 * Called From: 1423:013C:001A:E4BD
 * Called From: 1423:013C:001C:E795
 */
void f__1423_013C_0025_804F()
{
	emu_addws(&emu_sp, 0xA);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D01), 0x8);
	if (emu_flags.zf) { f__1423_0180_0005_C65F(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38BA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0161; emu_last_cs = 0x1423; emu_last_ip = 0x0152; emu_last_length = 0x0025; emu_last_crc = 0x804F; emu_call(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x015C; emu_last_cs = 0x1423; emu_last_ip = 0x0154; emu_last_length = 0x0025; emu_last_crc = 0x804F; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38B8));
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0161; emu_last_cs = 0x1423; emu_last_ip = 0x015A; emu_last_length = 0x0025; emu_last_crc = 0x804F; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x0163; emu_last_cs = 0x1423; emu_last_ip = 0x015F; emu_last_length = 0x0025; emu_last_crc = 0x804F; emu_call();
}

/**
 * Decompiled function f__1423_013F_0022_C51B()
 *
 * @name f__1423_013F_0022_C51B
 * @implements 1423:013F:0022:C51B ()
 *
 * Called From: 1423:0104:0022:DCFE
 * Called From: 1423:0104:0025:99AA
 * Called From: 1423:0126:001C:E795
 */
void f__1423_013F_0022_C51B()
{
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D01), 0x8);
	if (emu_flags.zf) { f__1423_0180_0005_C65F(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38BA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0161; emu_last_cs = 0x1423; emu_last_ip = 0x0152; emu_last_length = 0x0022; emu_last_crc = 0xC51B; emu_call(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x015C; emu_last_cs = 0x1423; emu_last_ip = 0x0154; emu_last_length = 0x0022; emu_last_crc = 0xC51B; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38B8));
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0161; emu_last_cs = 0x1423; emu_last_ip = 0x015A; emu_last_length = 0x0022; emu_last_crc = 0xC51B; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x0163; emu_last_cs = 0x1423; emu_last_ip = 0x015F; emu_last_length = 0x0022; emu_last_crc = 0xC51B; emu_call();
}

/**
 * Decompiled function f__1423_0180_0005_C65F()
 *
 * @name f__1423_0180_0005_C65F
 * @implements 1423:0180:0005:C65F ()
 *
 * Called From: 1423:0145:0022:C51B
 * Called From: 1423:0145:0025:804F
 */
void f__1423_0180_0005_C65F()
{
	emu_movw(&emu_ax.x, emu_si);
	f__1423_0034_0003_9DB3(); return;
}

/**
 * Decompiled function f__1423_0185_0006_F7CE()
 *
 * @name f__1423_0185_0006_F7CE
 * @implements 1423:0185:0006:F7CE ()
 *
 * Called From: 1423:0034:0003:9DB3
 */
void f__1423_0185_0006_F7CE()
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
 * Decompiled function f__1423_018B_0015_2B74()
 *
 * @name f__1423_018B_0015_2B74
 * @implements 1423:018B:0015:2B74 ()
 *
 * Called From: 1423:0321:0005:40D1
 */
void f__1423_018B_0015_2B74()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379E), 0x0);
	if (emu_flags.zf) { f__1423_01A0_000B_8236(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x029F; emu_last_cs = 0x1423; emu_last_ip = 0x019D; emu_last_length = 0x0015; emu_last_crc = 0x2B74; emu_call();
}

/**
 * Decompiled function f__1423_019D_0003_DD1F()
 *
 * @name f__1423_019D_0003_DD1F
 * @implements 1423:019D:0003:DD1F ()
 *
 * Called From: 1423:029C:0005:864B
 */
void f__1423_019D_0003_DD1F()
{
	f__1423_029F_0006_F7CE(); return;
}

/**
 * Decompiled function f__1423_01A0_000B_8236()
 *
 * @name f__1423_01A0_000B_8236
 * @implements 1423:01A0:000B:8236 ()
 *
 * Called From: 1423:0198:0015:2B74
 */
void f__1423_01A0_000B_8236()
{
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D03), 0x3);
	if (!emu_flags.zf) { f__1423_01AB_001A_9364(); return; }
	f__1423_0248_0028_8EE4(); return;
}

/**
 * Decompiled function f__1423_01AB_001A_9364()
 *
 * @name f__1423_01AB_001A_9364
 * @implements 1423:01AB:001A:9364 ()
 *
 * Called From: 1423:01A6:000B:8236
 */
void f__1423_01AB_001A_9364()
{
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x01C5); emu_cs = 0x1082; emu_Building_FindFirst();
	f__1423_01C5_0005_9AAE();
}

/**
 * Decompiled function f__1423_01C5_0005_9AAE()
 *
 * @name f__1423_01C5_0005_9AAE
 * @implements 1423:01C5:0005:9AAE ()
 *
 * Called From: 1423:01C5:001A:9364
 */
void f__1423_01C5_0005_9AAE()
{
	emu_addws(&emu_sp, 0x8);
	f__1423_0209_0024_E4AE(); return;
}

/**
 * Decompiled function f__1423_01CA_002F_9908()
 *
 * @name f__1423_01CA_002F_9908
 * @implements 1423:01CA:002F:9908 ()
 *
 * Called From: 1423:0215:0024:E4AE
 * Called From: 1423:0215:0026:8267
 */
void f__1423_01CA_002F_9908()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01FC; emu_last_cs = 0x1423; emu_last_ip = 0x01D2; emu_last_length = 0x002F; emu_last_crc = 0x9908; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01FC; emu_last_cs = 0x1423; emu_last_ip = 0x01DC; emu_last_length = 0x002F; emu_last_crc = 0x9908; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xE);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01FC; emu_last_cs = 0x1423; emu_last_ip = 0x01E6; emu_last_length = 0x002F; emu_last_crc = 0x9908; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__1423_01F9_000E_2A33(); return; }
	emu_incw(&emu_di);
	f__1423_01FC_000B_166D(); return;
}

/**
 * Decompiled function f__1423_01F9_000E_2A33()
 *
 * @name f__1423_01F9_000E_2A33
 * @implements 1423:01F9:000E:2A33 ()
 *
 * Called From: 1423:01F4:002F:9908
 */
void f__1423_01F9_000E_2A33()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0207); emu_cs = 0x1082; emu_Building_FindNext();
	f__1423_0207_0026_8267();
}

/**
 * Decompiled function f__1423_01FC_000B_166D()
 *
 * @name f__1423_01FC_000B_166D
 * @implements 1423:01FC:000B:166D ()
 *
 * Called From: 1423:01F7:002F:9908
 */
void f__1423_01FC_000B_166D()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0207); emu_cs = 0x1082; emu_Building_FindNext();
	f__1423_0207_0026_8267();
}

/**
 * Decompiled function f__1423_0207_0026_8267()
 *
 * @name f__1423_0207_0026_8267
 * @implements 1423:0207:0026:8267 ()
 *
 * Called From: 1423:0207:000B:166D
 * Called From: 1423:0207:000E:2A33
 */
void f__1423_0207_0026_8267()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1423_01CA_002F_9908(); return; }
	emu_movw(&emu_si, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D03), 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0231; emu_last_cs = 0x1423; emu_last_ip = 0x0220; emu_last_length = 0x0026; emu_last_crc = 0x8267; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__1423_022D_0015_5623(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__1423_022F_0013_57B7(); return;
}

/**
 * Decompiled function f__1423_0209_0024_E4AE()
 *
 * @name f__1423_0209_0024_E4AE
 * @implements 1423:0209:0024:E4AE ()
 *
 * Called From: 1423:01C8:0005:9AAE
 */
void f__1423_0209_0024_E4AE()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1423_01CA_002F_9908(); return; }
	emu_movw(&emu_si, 0x1);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D03), 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0231; emu_last_cs = 0x1423; emu_last_ip = 0x0220; emu_last_length = 0x0024; emu_last_crc = 0xE4AE; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x022D; emu_last_cs = 0x1423; emu_last_ip = 0x0226; emu_last_length = 0x0024; emu_last_crc = 0xE4AE; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x022F; emu_last_cs = 0x1423; emu_last_ip = 0x022B; emu_last_length = 0x0024; emu_last_crc = 0xE4AE; emu_call();
}

/**
 * Decompiled function f__1423_022D_0015_5623()
 *
 * @name f__1423_022D_0015_5623
 * @implements 1423:022D:0015:5623 ()
 *
 * Called From: 1423:0226:0026:8267
 */
void f__1423_022D_0015_5623()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_andw(&emu_si, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D03), 0x2);
	if (emu_flags.zf) { f__1423_0246_0002_C13A(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0242; emu_last_cs = 0x1423; emu_last_ip = 0x023B; emu_last_length = 0x0015; emu_last_crc = 0x5623; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x0244; emu_last_cs = 0x1423; emu_last_ip = 0x0240; emu_last_length = 0x0015; emu_last_crc = 0x5623; emu_call();
}

/**
 * Decompiled function f__1423_022F_0013_57B7()
 *
 * @name f__1423_022F_0013_57B7
 * @implements 1423:022F:0013:57B7 ()
 *
 * Called From: 1423:022B:0026:8267
 */
void f__1423_022F_0013_57B7()
{
	emu_andw(&emu_si, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D03), 0x2);
	if (emu_flags.zf) { f__1423_0246_0002_C13A(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0242; emu_last_cs = 0x1423; emu_last_ip = 0x023B; emu_last_length = 0x0013; emu_last_crc = 0x57B7; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x0244; emu_last_cs = 0x1423; emu_last_ip = 0x0240; emu_last_length = 0x0013; emu_last_crc = 0x57B7; emu_call();
}

/**
 * Decompiled function f__1423_0246_0002_C13A()
 *
 * @name f__1423_0246_0002_C13A
 * @implements 1423:0246:0002:C13A ()
 *
 * Called From: 1423:0237:0015:5623
 * Called From: 1423:0237:0013:57B7
 */
void f__1423_0246_0002_C13A()
{
	f__1423_024A_0026_BC08(); return;
}

/**
 * Decompiled function f__1423_0248_0028_8EE4()
 *
 * @name f__1423_0248_0028_8EE4
 * @implements 1423:0248:0028:8EE4 ()
 *
 * Called From: 1423:01A8:000B:8236
 */
void f__1423_0248_0028_8EE4()
{
	emu_xorw(&emu_si, emu_si);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D03), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0274; emu_last_cs = 0x1423; emu_last_ip = 0x0250; emu_last_length = 0x0028; emu_last_crc = 0x8EE4; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0274; emu_last_cs = 0x1423; emu_last_ip = 0x0254; emu_last_length = 0x0028; emu_last_crc = 0x8EE4; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B6), 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0274; emu_last_cs = 0x1423; emu_last_ip = 0x025B; emu_last_length = 0x0028; emu_last_crc = 0x8EE4; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B6));
	if (!(emu_flags.cf || emu_flags.zf)) { f__1423_0270_0026_4115(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__1423_0272_0024_8B15(); return;
}

/**
 * Decompiled function f__1423_024A_0026_BC08()
 *
 * @name f__1423_024A_0026_BC08
 * @implements 1423:024A:0026:BC08 ()
 *
 * Called From: 1423:0246:0002:C13A
 */
void f__1423_024A_0026_BC08()
{
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D03), 0x4);
	if (emu_flags.zf) { f__1423_0274_0022_251D(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0274; emu_last_cs = 0x1423; emu_last_ip = 0x0254; emu_last_length = 0x0026; emu_last_crc = 0xBC08; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B6), 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0274; emu_last_cs = 0x1423; emu_last_ip = 0x025B; emu_last_length = 0x0026; emu_last_crc = 0xBC08; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B6));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0270; emu_last_cs = 0x1423; emu_last_ip = 0x0269; emu_last_length = 0x0026; emu_last_crc = 0xBC08; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__1423_0272_0024_8B15(); return;
}

/**
 * Decompiled function f__1423_0270_0026_4115()
 *
 * @name f__1423_0270_0026_4115
 * @implements 1423:0270:0026:4115 ()
 *
 * Called From: 1423:0269:0028:8EE4
 */
void f__1423_0270_0026_4115()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D03), 0x8);
	if (emu_flags.zf) { f__1423_029A_0005_864B(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38BA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0296; emu_last_cs = 0x1423; emu_last_ip = 0x0287; emu_last_length = 0x0026; emu_last_crc = 0x4115; emu_call(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0291; emu_last_cs = 0x1423; emu_last_ip = 0x0289; emu_last_length = 0x0026; emu_last_crc = 0x4115; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38B8));
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0296; emu_last_cs = 0x1423; emu_last_ip = 0x028F; emu_last_length = 0x0026; emu_last_crc = 0x4115; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x0298; emu_last_cs = 0x1423; emu_last_ip = 0x0294; emu_last_length = 0x0026; emu_last_crc = 0x4115; emu_call();
}

/**
 * Decompiled function f__1423_0272_0024_8B15()
 *
 * @name f__1423_0272_0024_8B15
 * @implements 1423:0272:0024:8B15 ()
 *
 * Called From: 1423:026E:0028:8EE4
 * Called From: 1423:026E:0026:BC08
 */
void f__1423_0272_0024_8B15()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D03), 0x8);
	if (emu_flags.zf) { f__1423_029A_0005_864B(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38BA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0296; emu_last_cs = 0x1423; emu_last_ip = 0x0287; emu_last_length = 0x0024; emu_last_crc = 0x8B15; emu_call(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0291; emu_last_cs = 0x1423; emu_last_ip = 0x0289; emu_last_length = 0x0024; emu_last_crc = 0x8B15; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38B8));
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0296; emu_last_cs = 0x1423; emu_last_ip = 0x028F; emu_last_length = 0x0024; emu_last_crc = 0x8B15; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x0298; emu_last_cs = 0x1423; emu_last_ip = 0x0294; emu_last_length = 0x0024; emu_last_crc = 0x8B15; emu_call();
}

/**
 * Decompiled function f__1423_0274_0022_251D()
 *
 * @name f__1423_0274_0022_251D
 * @implements 1423:0274:0022:251D ()
 *
 * Called From: 1423:0250:0026:BC08
 */
void f__1423_0274_0022_251D()
{
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x8D03), 0x8);
	if (emu_flags.zf) { f__1423_029A_0005_864B(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38BA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0296; emu_last_cs = 0x1423; emu_last_ip = 0x0287; emu_last_length = 0x0022; emu_last_crc = 0x251D; emu_call(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0291; emu_last_cs = 0x1423; emu_last_ip = 0x0289; emu_last_length = 0x0022; emu_last_crc = 0x251D; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38B8));
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0296; emu_last_cs = 0x1423; emu_last_ip = 0x028F; emu_last_length = 0x0022; emu_last_crc = 0x251D; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x0298; emu_last_cs = 0x1423; emu_last_ip = 0x0294; emu_last_length = 0x0022; emu_last_crc = 0x251D; emu_call();
}

/**
 * Decompiled function f__1423_029A_0005_864B()
 *
 * @name f__1423_029A_0005_864B
 * @implements 1423:029A:0005:864B ()
 *
 * Called From: 1423:027A:0024:8B15
 * Called From: 1423:027A:0026:4115
 * Called From: 1423:027A:0022:251D
 */
void f__1423_029A_0005_864B()
{
	emu_movw(&emu_ax.x, emu_si);
	f__1423_019D_0003_DD1F(); return;
}

/**
 * Decompiled function f__1423_029F_0006_F7CE()
 *
 * @name f__1423_029F_0006_F7CE
 * @implements 1423:029F:0006:F7CE ()
 *
 * Called From: 1423:019D:0003:DD1F
 */
void f__1423_029F_0006_F7CE()
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
 * Decompiled function f__1423_02A5_002A_29F1()
 *
 * @name f__1423_02A5_002A_29F1
 * @implements 1423:02A5:002A:29F1 ()
 *
 * Called From: 0642:03FD:0016:21F1
 */
void f__1423_02A5_002A_29F1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x60A4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x60A2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if ((emu_flags.sf != emu_flags.of)) { f__1423_02CF_0004_038D(); return; }
	if (!emu_flags.zf) { f__1423_02C5_000A_113F(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (emu_flags.cf) { f__1423_02CF_0004_038D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379E), 0x0);
	if (!emu_flags.zf) { f__1423_02CF_0004_038D(); return; }
	f__1423_04E9_0005_BBA6(); return;
}

/**
 * Decompiled function f__1423_02C5_000A_113F()
 *
 * @name f__1423_02C5_000A_113F
 * @implements 1423:02C5:000A:113F ()
 *
 * Called From: 1423:02BD:002A:29F1
 */
void f__1423_02C5_000A_113F()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379E), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02CF; emu_last_cs = 0x1423; emu_last_ip = 0x02CA; emu_last_length = 0x000A; emu_last_crc = 0x113F; emu_call(); return; }
	f__1423_04E9_0005_BBA6(); return;
}

/**
 * Decompiled function f__1423_02CF_0004_038D()
 *
 * @name f__1423_02CF_0004_038D
 * @implements 1423:02CF:0004:038D ()
 *
 * Called From: 1423:02BB:002A:29F1
 * Called From: 1423:02C3:002A:29F1
 * Called From: 1423:02CA:002A:29F1
 */
void f__1423_02CF_0004_038D()
{
	emu_push(emu_cs);
	emu_push(0x02D3); f__1423_0009_0025_FE5D();
	f__1423_02D3_000E_17FE();
}

/**
 * Decompiled function f__1423_02D3_000E_17FE()
 *
 * @name f__1423_02D3_000E_17FE
 * @implements 1423:02D3:000E:17FE ()
 *
 * Called From: 1423:02D3:0004:038D
 */
void f__1423_02D3_000E_17FE()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1423_02E1_0008_FC73(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379E), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02E1; emu_last_cs = 0x1423; emu_last_ip = 0x02DC; emu_last_length = 0x000E; emu_last_crc = 0x17FE; emu_call(); return; }
	f__1423_04D4_001A_F01A(); return;
}

/**
 * Decompiled function f__1423_02E1_0008_FC73()
 *
 * @name f__1423_02E1_0008_FC73
 * @implements 1423:02E1:0008:FC73 ()
 *
 * Called From: 1423:02D5:000E:17FE
 */
void f__1423_02E1_0008_FC73()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02E9); emu_cs = 0x3483; ovl__3483(1);
	f__1423_02E9_0021_6A50();
}

/**
 * Decompiled function f__1423_02E9_0021_6A50()
 *
 * @name f__1423_02E9_0021_6A50
 * @implements 1423:02E9:0021:6A50 ()
 *
 * Called From: 1423:02E9:0008:FC73
 */
void f__1423_02E9_0021_6A50()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A34), 0x0);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x442));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x440));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x030A); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	f__1423_030A_000C_4B79();
}

/**
 * Decompiled function f__1423_030A_000C_4B79()
 *
 * @name f__1423_030A_000C_4B79
 * @implements 1423:030A:000C:4B79 ()
 *
 * Called From: 1423:030A:0021:6A50
 */
void f__1423_030A_000C_4B79()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0316); emu_cs = 0x3483; ovl__3483(2);
	f__1423_0316_0009_0C45();
}

/**
 * Decompiled function f__1423_0316_0009_0C45()
 *
 * @name f__1423_0316_0009_0C45
 * @implements 1423:0316:0009:0C45 ()
 *
 * Called From: 1423:0316:000C:4B79
 */
void f__1423_0316_0009_0C45()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x031F); emu_cs = 0x34E9; ovl__34E9(2);
	f__1423_031F_0005_40D1();
}

/**
 * Decompiled function f__1423_031F_0005_40D1()
 *
 * @name f__1423_031F_0005_40D1
 * @implements 1423:031F:0005:40D1 ()
 *
 * Called From: 1423:031F:0009:0C45
 */
void f__1423_031F_0005_40D1()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs);
	emu_push(0x0324); f__1423_018B_0015_2B74();
	f__1423_0324_0007_EE13();
}

/**
 * Decompiled function f__1423_0324_0007_EE13()
 *
 * @name f__1423_0324_0007_EE13
 * @implements 1423:0324:0007:EE13 ()
 *
 * Called From: 1423:0324:0005:40D1
 */
void f__1423_0324_0007_EE13()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1423_032B_0009_16AF(); return; }
	f__1423_0466_0009_17AF(); return;
}

/**
 * Decompiled function f__1423_032B_0009_16AF()
 *
 * @name f__1423_032B_0009_16AF
 * @implements 1423:032B:0009:16AF ()
 *
 * Called From: 1423:0326:0007:EE13
 */
void f__1423_032B_0009_16AF()
{
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0334); emu_cs = 0x3483; ovl__3483(2);
	f__1423_0334_000E_1BB4();
}

/**
 * Decompiled function f__1423_0334_000E_1BB4()
 *
 * @name f__1423_0334_000E_1BB4
 * @implements 1423:0334:000E:1BB4 ()
 *
 * Called From: 1423:0334:0009:16AF
 */
void f__1423_0334_000E_1BB4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x52);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0342); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__1423_0342_0008_250B();
}

/**
 * Decompiled function f__1423_0342_0008_250B()
 *
 * @name f__1423_0342_0008_250B
 * @implements 1423:0342:0008:250B ()
 *
 * Called From: 1423:0342:000E:1BB4
 */
void f__1423_0342_0008_250B()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x10E4; f__10E4_0273_0029_DCE5();
	f__1423_034A_0008_54DF();
}

/**
 * Decompiled function f__1423_034A_0008_54DF()
 *
 * @name f__1423_034A_0008_54DF
 * @implements 1423:034A:0008:54DF ()
 *
 * Called From: 1423:034A:0008:250B
 */
void f__1423_034A_0008_54DF()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x0352); emu_cs = 0x3511; ovl__3511(5);
	f__1423_0352_0005_4EFC();
}

/**
 * Decompiled function f__1423_0352_0005_4EFC()
 *
 * @name f__1423_0352_0005_4EFC
 * @implements 1423:0352:0005:4EFC ()
 *
 * Called From: 1423:0352:0008:54DF
 */
void f__1423_0352_0005_4EFC()
{
	emu_push(emu_cs); emu_push(0x0357); emu_cs = 0x34B8; ovl__34B8(1);
	f__1423_0357_0029_31D8();
}

/**
 * Decompiled function f__1423_0357_0029_31D8()
 *
 * @name f__1423_0357_0029_31D8
 * @implements 1423:0357:0029:31D8 ()
 *
 * Called From: 1423:0357:0005:4EFC
 */
void f__1423_0357_0029_31D8()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8CFF));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8D41));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8D3F));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8D3D));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8D3B));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8D39));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8D37));
	emu_push(emu_cs); emu_push(0x0380); emu_cs = 0x3518; ovl__3518(0);
	f__1423_0380_000F_DD38();
}

/**
 * Decompiled function f__1423_0380_000F_DD38()
 *
 * @name f__1423_0380_000F_DD38
 * @implements 1423:0380:000F:DD38 ()
 *
 * Called From: 1423:0380:0029:31D8
 */
void f__1423_0380_000F_DD38()
{
	emu_addws(&emu_sp, 0x10);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x9);
	if (!emu_flags.zf) { f__1423_03BF_0005_6168(); return; }
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x038F); emu_cs = 0x2B6C; emu_ip = 0x0137; emu_last_cs = 0x1423; emu_last_ip = 0x038A; emu_last_length = 0x000F; emu_last_crc = 0xDD38; emu_call();
	/* Unresolved jump */ emu_ip = 0x038F; emu_last_cs = 0x1423; emu_last_ip = 0x038F; emu_last_length = 0x000F; emu_last_crc = 0xDD38; emu_call();
}

/**
 * Decompiled function f__1423_03BF_0005_6168()
 *
 * @name f__1423_03BF_0005_6168
 * @implements 1423:03BF:0005:6168 ()
 *
 * Called From: 1423:0388:000F:DD38
 */
void f__1423_03BF_0005_6168()
{
	emu_push(emu_cs); emu_push(0x03C4); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	f__1423_03C4_0005_9EF9();
}

/**
 * Decompiled function f__1423_03C4_0005_9EF9()
 *
 * @name f__1423_03C4_0005_9EF9
 * @implements 1423:03C4:0005:9EF9 ()
 *
 * Called From: 1423:03C4:0005:6168
 */
void f__1423_03C4_0005_9EF9()
{
	emu_push(emu_cs); emu_push(0x03C9); emu_cs = 0x34AE; ovl__34AE(0);
	f__1423_03C9_0005_816D();
}

/**
 * Decompiled function f__1423_03C9_0005_816D()
 *
 * @name f__1423_03C9_0005_816D
 * @implements 1423:03C9:0005:816D ()
 *
 * Called From: 1423:03C9:0005:9EF9
 */
void f__1423_03C9_0005_816D()
{
	emu_push(emu_cs); emu_push(0x03CE); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	f__1423_03CE_0019_16A3();
}

/**
 * Decompiled function f__1423_03CE_0019_16A3()
 *
 * @name f__1423_03CE_0019_16A3
 * @implements 1423:03CE:0019:16A3 ()
 *
 * Called From: 1423:03CE:0005:816D
 */
void f__1423_03CE_0019_16A3()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x60DF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03E7); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	f__1423_03E7_0010_D5EE();
}

/**
 * Decompiled function f__1423_03E7_0010_D5EE()
 *
 * @name f__1423_03E7_0010_D5EE
 * @implements 1423:03E7:0010:D5EE ()
 *
 * Called From: 1423:03E7:0019:16A3
 */
void f__1423_03E7_0010_D5EE()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_push(emu_cs); emu_push(0x03F7); emu_cs = 0x3503; ovl__3503(0);
	f__1423_03F7_0016_5986();
}

/**
 * Decompiled function f__1423_03F7_0016_5986()
 *
 * @name f__1423_03F7_0016_5986
 * @implements 1423:03F7:0016:5986 ()
 *
 * Called From: 1423:03F7:0010:D5EE
 */
void f__1423_03F7_0016_5986()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B0), emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x040D); emu_cs = 0x259E; f__259E_0006_0016_858A();
	f__1423_040D_0026_1D48();
}

/**
 * Decompiled function f__1423_040D_0026_1D48()
 *
 * @name f__1423_040D_0026_1D48
 * @implements 1423:040D:0026:1D48 ()
 *
 * Called From: 1423:040D:0016:5986
 */
void f__1423_040D_0026_1D48()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x1);
	if (emu_flags.zf) { f__1423_041E_0015_7EAD(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x7);
	if (!emu_flags.zf) { f__1423_0464_0002_DEBA(); return; }
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0433); emu_cs = 0x34B8; emu_ip = 0x0034; emu_last_cs = 0x1423; emu_last_ip = 0x042E; emu_last_length = 0x0026; emu_last_crc = 0x1D48; emu_call();
	f__1423_0433_0008_AC6D();
}

/**
 * Decompiled function f__1423_041E_0015_7EAD()
 *
 * @name f__1423_041E_0015_7EAD
 * @implements 1423:041E:0015:7EAD ()
 *
 * Called From: 1423:0415:0026:1D48
 */
void f__1423_041E_0015_7EAD()
{
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0433); emu_cs = 0x34B8; ovl__34B8(4);
	f__1423_0433_0008_AC6D();
}

/**
 * Decompiled function f__1423_0433_0008_AC6D()
 *
 * @name f__1423_0433_0008_AC6D
 * @implements 1423:0433:0008:AC6D ()
 *
 * Called From: 1423:0433:0015:7EAD
 */
void f__1423_0433_0008_AC6D()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x043B); emu_cs = 0x34DA; ovl__34DA(5);
	f__1423_043B_0009_66BD();
}

/**
 * Decompiled function f__1423_043B_0009_66BD()
 *
 * @name f__1423_043B_0009_66BD
 * @implements 1423:043B:0009:66BD ()
 *
 * Called From: 1423:043B:0008:AC6D
 */
void f__1423_043B_0009_66BD()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1423_044D_0014_36BE(); return; }
	emu_push(emu_cs); emu_push(0x0444); emu_cs = 0x3500; ovl__3500(0);
	f__1423_0444_0008_C68B();
}

/**
 * Decompiled function f__1423_0444_0008_C68B()
 *
 * @name f__1423_0444_0008_C68B
 * @implements 1423:0444:0008:C68B ()
 *
 * Called From: 1423:0444:0009:66BD
 */
void f__1423_0444_0008_C68B()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x044C); emu_cs = 0x01F7; f__01F7_0377_000D_81BB();
	/* Unresolved jump */ emu_ip = 0x044C; emu_last_cs = 0x1423; emu_last_ip = 0x044C; emu_last_length = 0x0008; emu_last_crc = 0xC68B; emu_call();
}

/**
 * Decompiled function f__1423_044D_0014_36BE()
 *
 * @name f__1423_044D_0014_36BE
 * @implements 1423:044D:0014:36BE ()
 *
 * Called From: 1423:043D:0009:66BD
 */
void f__1423_044D_0014_36BE()
{
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0461); emu_cs = 0x34B8; ovl__34B8(4);
	f__1423_0461_0005_9BAE();
}

/**
 * Decompiled function f__1423_0461_0005_9BAE()
 *
 * @name f__1423_0461_0005_9BAE
 * @implements 1423:0461:0005:9BAE ()
 *
 * Called From: 1423:0461:0014:36BE
 */
void f__1423_0461_0005_9BAE()
{
	emu_addws(&emu_sp, 0x8);
	f__1423_04A3_001D_CDDA(); return;
}

/**
 * Decompiled function f__1423_0464_0002_DEBA()
 *
 * @name f__1423_0464_0002_DEBA
 * @implements 1423:0464:0002:DEBA ()
 *
 * Called From: 1423:041C:0026:1D48
 */
void f__1423_0464_0002_DEBA()
{
	f__1423_04A3_001D_CDDA(); return;
}

/**
 * Decompiled function f__1423_0466_0009_17AF()
 *
 * @name f__1423_0466_0009_17AF
 * @implements 1423:0466:0009:17AF ()
 *
 * Called From: 1423:0328:0007:EE13
 */
void f__1423_0466_0009_17AF()
{
	emu_movw(&emu_ax.x, 0x29);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x046F); emu_cs = 0x3483; ovl__3483(2);
	f__1423_046F_000E_1AB4();
}

/**
 * Decompiled function f__1423_046F_000E_1AB4()
 *
 * @name f__1423_046F_000E_1AB4
 * @implements 1423:046F:000E:1AB4 ()
 *
 * Called From: 1423:046F:0009:17AF
 */
void f__1423_046F_000E_1AB4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x53);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x047D); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__1423_047D_0008_250B();
}

/**
 * Decompiled function f__1423_047D_0008_250B()
 *
 * @name f__1423_047D_0008_250B
 * @implements 1423:047D:0008:250B ()
 *
 * Called From: 1423:047D:000E:1AB4
 */
void f__1423_047D_0008_250B()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0485); emu_cs = 0x10E4; f__10E4_0273_0029_DCE5();
	f__1423_0485_0008_24DF();
}

/**
 * Decompiled function f__1423_0485_0008_24DF()
 *
 * @name f__1423_0485_0008_24DF
 * @implements 1423:0485:0008:24DF ()
 *
 * Called From: 1423:0485:0008:250B
 */
void f__1423_0485_0008_24DF()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x048D); emu_cs = 0x3511; ovl__3511(6);
	f__1423_048D_0005_4EFC();
}

/**
 * Decompiled function f__1423_048D_0005_4EFC()
 *
 * @name f__1423_048D_0005_4EFC
 * @implements 1423:048D:0005:4EFC ()
 *
 * Called From: 1423:048D:0008:24DF
 */
void f__1423_048D_0005_4EFC()
{
	emu_push(emu_cs); emu_push(0x0492); emu_cs = 0x34B8; ovl__34B8(1);
	f__1423_0492_000C_9E61();
}

/**
 * Decompiled function f__1423_0492_000C_9E61()
 *
 * @name f__1423_0492_000C_9E61
 * @implements 1423:0492:000C:9E61 ()
 *
 * Called From: 1423:0492:0005:4EFC
 */
void f__1423_0492_000C_9E61()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_push(emu_cs); emu_push(0x049E); emu_cs = 0x3503; ovl__3503(0);
	f__1423_049E_0022_C10E();
}

/**
 * Decompiled function f__1423_049E_0022_C10E()
 *
 * @name f__1423_049E_0022_C10E
 * @implements 1423:049E:0022:C10E ()
 *
 * Called From: 1423:049E:000C:9E61
 */
void f__1423_049E_0022_C10E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B0), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFB);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04C0); emu_cs = 0x34B8; ovl__34B8(4);
	f__1423_04C0_0008_2C75();
}

/**
 * Decompiled function f__1423_04A3_001D_CDDA()
 *
 * @name f__1423_04A3_001D_CDDA
 * @implements 1423:04A3:001D:CDDA ()
 *
 * Called From: 1423:0464:0005:9BAE
 * Called From: 1423:0464:0002:DEBA
 */
void f__1423_04A3_001D_CDDA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFB);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04C0); emu_cs = 0x34B8; ovl__34B8(4);
	f__1423_04C0_0008_2C75();
}

/**
 * Decompiled function f__1423_04C0_0008_2C75()
 *
 * @name f__1423_04C0_0008_2C75
 * @implements 1423:04C0:0008:2C75 ()
 *
 * Called From: 1423:04C0:0022:C10E
 * Called From: 1423:04C0:001D:CDDA
 */
void f__1423_04C0_0008_2C75()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x04C8); emu_cs = 0x34B8; ovl__34B8(5);
	f__1423_04C8_0026_FD9C();
}

/**
 * Decompiled function f__1423_04C8_0026_FD9C()
 *
 * @name f__1423_04C8_0026_FD9C
 * @implements 1423:04C8:0026:FD9C ()
 *
 * Called From: 1423:04C8:0008:2C75
 */
void f__1423_04C8_0026_FD9C()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38BE), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x379E), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x12C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60A4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60A2), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1423_04EE_0004_893F(); return;
}

/**
 * Decompiled function f__1423_04D4_001A_F01A()
 *
 * @name f__1423_04D4_001A_F01A
 * @implements 1423:04D4:001A:F01A ()
 *
 * Called From: 1423:02DE:000E:17FE
 */
void f__1423_04D4_001A_F01A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_dx.x, 0x12C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60A4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x60A2), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1423_04EE_0004_893F(); return;
}

/**
 * Decompiled function f__1423_04E9_0005_BBA6()
 *
 * @name f__1423_04E9_0005_BBA6
 * @implements 1423:04E9:0005:BBA6 ()
 *
 * Called From: 1423:02CC:002A:29F1
 * Called From: 1423:02CC:000A:113F
 */
void f__1423_04E9_0005_BBA6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1423_04EE_0004_893F(); return;
}

/**
 * Decompiled function f__1423_04EE_0004_893F()
 *
 * @name f__1423_04EE_0004_893F
 * @implements 1423:04EE:0004:893F ()
 *
 * Called From: 1423:04EC:001A:F01A
 * Called From: 1423:04EC:0005:BBA6
 * Called From: 1423:04EC:0026:FD9C
 */
void f__1423_04EE_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1423_08CD_0012_0004()
 *
 * @name f__1423_08CD_0012_0004
 * @implements 1423:08CD:0012:0004 ()
 *
 * Called From: 1A34:2A33:0036:7718
 * Called From: B4B5:05CF:001F:CB42
 * Called From: B4CD:027A:000F:00DA
 * Called From: B4CD:027A:0030:FE42
 * Called From: B4CD:1310:0008:0671
 * Called From: B4CD:1479:0008:0671
 */
void f__1423_08CD_0012_0004()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1423_08DF_0008_EB39(); return; }
	f__1423_0BC7_0005_8BCF(); return;
}

/**
 * Decompiled function f__1423_08DF_0008_EB39()
 *
 * @name f__1423_08DF_0008_EB39
 * @implements 1423:08DF:0008:EB39 ()
 *
 * Called From: 1423:08DA:0012:0004
 */
void f__1423_08DF_0008_EB39()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x08E7); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	f__1423_08E7_004C_E110();
}

/**
 * Decompiled function f__1423_08E7_004C_E110()
 *
 * @name f__1423_08E7_004C_E110
 * @implements 1423:08E7:004C:E110 ()
 *
 * Called From: 1423:08E7:0008:EB39
 */
void f__1423_08E7_004C_E110()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x1);
	if (!emu_flags.zf) { f__1423_090D_0026_628E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (emu_flags.zf) { f__1423_090D_0026_628E(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_testw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.zf) { f__1423_0933_002A_E8FA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	if (emu_flags.zf) { f__1423_0933_002A_E8FA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xA));
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
	f__1423_0BC7_0005_8BCF(); return;
}

/**
 * Decompiled function f__1423_090D_0026_628E()
 *
 * @name f__1423_090D_0026_628E
 * @implements 1423:090D:0026:628E ()
 *
 * Called From: 1423:08FD:004C:E110
 * Called From: 1423:0907:004C:E110
 */
void f__1423_090D_0026_628E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_testw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.zf) { f__1423_0933_002A_E8FA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	if (emu_flags.zf) { f__1423_0933_002A_E8FA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xA));
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
	f__1423_0BC7_0005_8BCF(); return;
}

/**
 * Decompiled function f__1423_0933_002A_E8FA()
 *
 * @name f__1423_0933_002A_E8FA
 * @implements 1423:0933:002A:E8FA ()
 *
 * Called From: 1423:0919:004C:E110
 * Called From: 1423:0919:0026:628E
 * Called From: 1423:0924:0026:628E
 * Called From: 1423:0924:004C:E110
 */
void f__1423_0933_002A_E8FA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x8000);
	if (!emu_flags.zf) { f__1423_095D_001C_4305(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (emu_flags.zf) { f__1423_095D_001C_4305(); return; }
	/* Unresolved jump */ emu_ip = 0x0BC7; emu_last_cs = 0x1423; emu_last_ip = 0x095A; emu_last_length = 0x002A; emu_last_crc = 0xE8FA; emu_call();
}

/**
 * Decompiled function f__1423_095D_001C_4305()
 *
 * @name f__1423_095D_001C_4305
 * @implements 1423:095D:001C:4305 ()
 *
 * Called From: 1423:094E:002A:E8FA
 * Called From: 1423:0958:002A:E8FA
 */
void f__1423_095D_001C_4305()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_testw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { f__1423_0997_002A_3456(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0979); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__1423_0979_0008_229F();
}

/**
 * Decompiled function f__1423_0979_0008_229F()
 *
 * @name f__1423_0979_0008_229F
 * @implements 1423:0979:0008:229F ()
 *
 * Called From: 1423:0979:001C:4305
 */
void f__1423_0979_0008_229F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0981); f__1423_0F34_0017_464D();
	f__1423_0981_000F_177E();
}

/**
 * Decompiled function f__1423_0981_000F_177E()
 *
 * @name f__1423_0981_000F_177E
 * @implements 1423:0981:000F:177E ()
 *
 * Called From: 1423:0981:0008:229F
 */
void f__1423_0981_000F_177E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__1423_0990_0031_1AE7(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0xC));
	f__1423_0997_002A_3456(); return;
}

/**
 * Decompiled function f__1423_0990_0031_1AE7()
 *
 * @name f__1423_0990_0031_1AE7
 * @implements 1423:0990:0031:1AE7 ()
 *
 * Called From: 1423:0985:000F:177E
 */
void f__1423_0990_0031_1AE7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09EF; emu_last_cs = 0x1423; emu_last_ip = 0x09B1; emu_last_length = 0x0031; emu_last_crc = 0x1AE7; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x09C1); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__1423_09C1_0008_22A9();
}

/**
 * Decompiled function f__1423_0997_002A_3456()
 *
 * @name f__1423_0997_002A_3456
 * @implements 1423:0997:002A:3456 ()
 *
 * Called From: 1423:0969:001C:4305
 * Called From: 1423:098E:000F:177E
 */
void f__1423_0997_002A_3456()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09EF; emu_last_cs = 0x1423; emu_last_ip = 0x09B1; emu_last_length = 0x002A; emu_last_crc = 0x3456; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x09C1); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__1423_09C1_0008_22A9();
}

/**
 * Decompiled function f__1423_09C1_0008_22A9()
 *
 * @name f__1423_09C1_0008_22A9
 * @implements 1423:09C1:0008:22A9 ()
 *
 * Called From: 1423:09C1:002A:3456
 * Called From: 1423:09C1:0031:1AE7
 */
void f__1423_09C1_0008_22A9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x09C9); f__1423_0F34_0017_464D();
	f__1423_09C9_001C_D7D2();
}

/**
 * Decompiled function f__1423_09C9_001C_D7D2()
 *
 * @name f__1423_09C9_001C_D7D2
 * @implements 1423:09C9:001C:D7D2 ()
 *
 * Called From: 1423:09C9:0008:22A9
 */
void f__1423_09C9_001C_D7D2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1423_09EF_000C_0A4C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09E5); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	f__1423_09E5_0016_B67B();
}

/**
 * Decompiled function f__1423_09E5_0016_B67B()
 *
 * @name f__1423_09E5_0016_B67B
 * @implements 1423:09E5:0016:B67B ()
 *
 * Called From: 1423:09E5:001C:D7D2
 */
void f__1423_09E5_0016_B67B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1423_09FB_000A_00B4(); return; }
	/* Unresolved jump */ emu_ip = 0x0B61; emu_last_cs = 0x1423; emu_last_ip = 0x09F8; emu_last_length = 0x0016; emu_last_crc = 0xB67B; emu_call();
}

/**
 * Decompiled function f__1423_09EF_000C_0A4C()
 *
 * @name f__1423_09EF_000C_0A4C
 * @implements 1423:09EF:000C:0A4C ()
 *
 * Called From: 1423:09CD:001C:D7D2
 */
void f__1423_09EF_000C_0A4C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1423_09FB_000A_00B4(); return; }
	f__1423_0B61_0011_CB22(); return;
}

/**
 * Decompiled function f__1423_09FB_000A_00B4()
 *
 * @name f__1423_09FB_000A_00B4
 * @implements 1423:09FB:000A:00B4 ()
 *
 * Called From: 1423:09F6:000C:0A4C
 * Called From: 1423:09F6:0016:B67B
 */
void f__1423_09FB_000A_00B4()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x0);
	if (!emu_flags.zf) { f__1423_0A05_000F_1810(); return; }
	f__1423_0B61_0011_CB22(); return;
}

/**
 * Decompiled function f__1423_0A05_000F_1810()
 *
 * @name f__1423_0A05_000F_1810
 * @implements 1423:0A05:000F:1810 ()
 *
 * Called From: 1423:0A00:000A:00B4
 */
void f__1423_0A05_000F_1810()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0A14); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__1423_0A14_0008_E2B5();
}

/**
 * Decompiled function f__1423_0A14_0008_E2B5()
 *
 * @name f__1423_0A14_0008_E2B5
 * @implements 1423:0A14:0008:E2B5 ()
 *
 * Called From: 1423:0A14:000F:1810
 */
void f__1423_0A14_0008_E2B5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0A1C); f__1423_0F34_0017_464D();
	f__1423_0A1C_0013_FF6C();
}

/**
 * Decompiled function f__1423_0A1C_0013_FF6C()
 *
 * @name f__1423_0A1C_0013_FF6C
 * @implements 1423:0A1C:0013:FF6C ()
 *
 * Called From: 1423:0A1C:0008:E2B5
 */
void f__1423_0A1C_0013_FF6C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__1423_0A2F_002B_16F9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (emu_flags.zf) { f__1423_0A2F_002B_16F9(); return; }
	f__1423_0B61_0011_CB22(); return;
}

/**
 * Decompiled function f__1423_0A2F_002B_16F9()
 *
 * @name f__1423_0A2F_002B_16F9
 * @implements 1423:0A2F:002B:16F9 ()
 *
 * Called From: 1423:0A20:0013:FF6C
 * Called From: 1423:0A2A:0013:FF6C
 */
void f__1423_0A2F_002B_16F9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (!emu_flags.zf) { f__1423_0A7E_000E_A895(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x0);
	if (!emu_flags.zf) { f__1423_0A7B_0003_DD18(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3E52), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A51; emu_last_cs = 0x1423; emu_last_ip = 0x0A49; emu_last_length = 0x002B; emu_last_crc = 0x16F9; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3E52), 0x1);
	emu_movw(&emu_ax.x, 0x25);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A5A); emu_cs = 0x3483; ovl__3483(2);
	f__1423_0A5A_0015_B691();
}

/**
 * Decompiled function f__1423_0A5A_0015_B691()
 *
 * @name f__1423_0A5A_0015_B691
 * @implements 1423:0A5A:0015:B691 ()
 *
 * Called From: 1423:0A5A:002B:16F9
 */
void f__1423_0A5A_0015_B691()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B6), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A71; emu_last_cs = 0x1423; emu_last_ip = 0x0A60; emu_last_length = 0x0015; emu_last_crc = 0xB691; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x69);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1C);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A6F); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
	f__1423_0A6F_000F_5EC0();
}

/**
 * Decompiled function f__1423_0A6F_000F_5EC0()
 *
 * @name f__1423_0A6F_000F_5EC0
 * @implements 1423:0A6F:000F:5EC0 ()
 *
 * Called From: 1423:0A6F:0015:B691
 */
void f__1423_0A6F_000F_5EC0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x8);
	f__1423_0B61_0011_CB22(); return;
}

/**
 * Decompiled function f__1423_0A7B_0003_DD18()
 *
 * @name f__1423_0A7B_0003_DD18
 * @implements 1423:0A7B:0003:DD18 ()
 *
 * Called From: 1423:0A42:002B:16F9
 */
void f__1423_0A7B_0003_DD18()
{
	f__1423_0B61_0011_CB22(); return;
}

/**
 * Decompiled function f__1423_0A7E_000E_A895()
 *
 * @name f__1423_0A7E_000E_A895
 * @implements 1423:0A7E:000E:A895 ()
 *
 * Called From: 1423:0A37:002B:16F9
 */
void f__1423_0A7E_000E_A895()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x24), 0x0);
	if (emu_flags.zf) { f__1423_0A8C_0020_4946(); return; }
	f__1423_0B3B_000E_3343(); return;
}

/**
 * Decompiled function f__1423_0A8C_0020_4946()
 *
 * @name f__1423_0A8C_0020_4946
 * @implements 1423:0A8C:0020:4946 ()
 *
 * Called From: 1423:0A87:000E:A895
 */
void f__1423_0A8C_0020_4946()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3E52), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A99; emu_last_cs = 0x1423; emu_last_ip = 0x0A91; emu_last_length = 0x0020; emu_last_crc = 0x4946; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3E52), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x6);
	if (!emu_flags.zf) { f__1423_0AB0_001A_235A(); return; }
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0AAC); emu_cs = 0x3483; emu_ip = 0x002A; emu_last_cs = 0x1423; emu_last_ip = 0x0AA7; emu_last_length = 0x0020; emu_last_crc = 0x4946; emu_call();
	/* Unresolved jump */ emu_ip = 0x0AAC; emu_last_cs = 0x1423; emu_last_ip = 0x0AAC; emu_last_length = 0x0020; emu_last_crc = 0x4946; emu_call();
}

/**
 * Decompiled function f__1423_0AB0_001A_235A()
 *
 * @name f__1423_0AB0_001A_235A
 * @implements 1423:0AB0:001A:235A ()
 *
 * Called From: 1423:0AA1:0020:4946
 */
void f__1423_0AB0_001A_235A()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B0), 0x3);
	if (!emu_flags.cf) { f__1423_0B1F_0011_A442(); return; }
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0ACA); emu_cs = 0x1082; emu_Building_FindFirst();
	f__1423_0ACA_002C_6E18();
}

/**
 * Decompiled function f__1423_0ACA_002C_6E18()
 *
 * @name f__1423_0ACA_002C_6E18
 * @implements 1423:0ACA:002C:6E18 ()
 *
 * Called From: 1423:0ACA:001A:235A
 */
void f__1423_0ACA_002C_6E18()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B13; emu_last_cs = 0x1423; emu_last_ip = 0x0AD9; emu_last_length = 0x002C; emu_last_crc = 0x6E18; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0AF6); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	f__1423_0AF6_0009_AAB4();
}

/**
 * Decompiled function f__1423_0AF6_0009_AAB4()
 *
 * @name f__1423_0AF6_0009_AAB4
 * @implements 1423:0AF6:0009:AAB4 ()
 *
 * Called From: 1423:0AF6:002C:6E18
 */
void f__1423_0AF6_0009_AAB4()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0AFF); emu_cs = 0x34CD; ovl__34CD(19);
	f__1423_0AFF_0014_A87B();
}

/**
 * Decompiled function f__1423_0AFF_0014_A87B()
 *
 * @name f__1423_0AFF_0014_A87B
 * @implements 1423:0AFF:0014:A87B ()
 *
 * Called From: 1423:0AFF:0009:AAB4
 */
void f__1423_0AFF_0014_A87B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_incw(&emu_si);
	emu_andws(&emu_si, 0x7);
	emu_movw(&emu_ax.x, emu_si);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x2);
	f__1423_0B16_0006_3EF3(); return;
}

/**
 * Decompiled function f__1423_0B16_0006_3EF3()
 *
 * @name f__1423_0B16_0006_3EF3
 * @implements 1423:0B16:0006:3EF3 ()
 *
 * Called From: 1423:0B11:0014:A87B
 */
void f__1423_0B16_0006_3EF3()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B1C); emu_cs = 0x3483; ovl__3483(2);
	f__1423_0B1C_0003_C21A();
}

/**
 * Decompiled function f__1423_0B1C_0003_C21A()
 *
 * @name f__1423_0B1C_0003_C21A
 * @implements 1423:0B1C:0003:C21A ()
 *
 * Called From: 1423:0B1C:0006:3EF3
 */
void f__1423_0B1C_0003_C21A()
{
	emu_pop(&emu_cx.x);
	f__1423_0B31_0018_B454(); return;
}

/**
 * Decompiled function f__1423_0B1F_0011_A442()
 *
 * @name f__1423_0B1F_0011_A442
 * @implements 1423:0B1F:0011:A442 ()
 *
 * Called From: 1423:0AB5:001A:235A
 */
void f__1423_0B1F_0011_A442()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_addw(&emu_ax.x, 0x6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B30); emu_cs = 0x3483; ovl__3483(2);
	f__1423_0B30_0019_3478();
}

/**
 * Decompiled function f__1423_0B30_0019_3478()
 *
 * @name f__1423_0B30_0019_3478
 * @implements 1423:0B30:0019:3478 ()
 *
 * Called From: 1423:0B30:0011:A442
 */
void f__1423_0B30_0019_3478()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B49); emu_cs = 0x104B; emu_AirUnit_Get_ByIndex();
	f__1423_0B49_0029_9196();
}

/**
 * Decompiled function f__1423_0B31_0018_B454()
 *
 * @name f__1423_0B31_0018_B454
 * @implements 1423:0B31:0018:B454 ()
 *
 * Called From: 1423:0B1D:0003:C21A
 */
void f__1423_0B31_0018_B454()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B49); emu_cs = 0x104B; emu_AirUnit_Get_ByIndex();
	f__1423_0B49_0029_9196();
}

/**
 * Decompiled function f__1423_0B3B_000E_3343()
 *
 * @name f__1423_0B3B_000E_3343
 * @implements 1423:0B3B:000E:3343 ()
 *
 * Called From: 1423:0A89:000E:A895
 */
void f__1423_0B3B_000E_3343()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B49); emu_cs = 0x104B; emu_AirUnit_Get_ByIndex();
	f__1423_0B49_0029_9196();
}

/**
 * Decompiled function f__1423_0B49_0029_9196()
 *
 * @name f__1423_0B49_0029_9196
 * @implements 1423:0B49:0029:9196 ()
 *
 * Called From: 1423:0B49:0018:B454
 * Called From: 1423:0B49:000E:3343
 * Called From: 1423:0B49:0019:3478
 */
void f__1423_0B49_0029_9196()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B61; emu_last_cs = 0x1423; emu_last_ip = 0x0B56; emu_last_length = 0x0029; emu_last_crc = 0x9196; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x32), 0x1);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0B72); f__1423_0F34_0017_464D();
	f__1423_0B72_001F_C162();
}

/**
 * Decompiled function f__1423_0B61_0011_CB22()
 *
 * @name f__1423_0B61_0011_CB22
 * @implements 1423:0B61:0011:CB22 ()
 *
 * Called From: 1423:09F8:000C:0A4C
 * Called From: 1423:0A02:000A:00B4
 * Called From: 1423:0A2C:0013:FF6C
 * Called From: 1423:0A7B:000F:5EC0
 * Called From: 1423:0A7B:0003:DD18
 */
void f__1423_0B61_0011_CB22()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0B72); f__1423_0F34_0017_464D();
	f__1423_0B72_001F_C162();
}

/**
 * Decompiled function f__1423_0B72_001F_C162()
 *
 * @name f__1423_0B72_001F_C162
 * @implements 1423:0B72:001F:C162 ()
 *
 * Called From: 1423:0B72:0011:CB22
 * Called From: 1423:0B72:0029:9196
 */
void f__1423_0B72_001F_C162()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1423_0B94_0029_549A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x8);
	if (!emu_flags.zf) { f__1423_0B94_0029_549A(); return; }
	emu_movw(&emu_ax.x, 0xB);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0B91); emu_cs = 0x176C; f__176C_000E_000E_633D();
	f__1423_0B91_002C_DD32();
}

/**
 * Decompiled function f__1423_0B91_002C_DD32()
 *
 * @name f__1423_0B91_002C_DD32
 * @implements 1423:0B91:002C:DD32 ()
 *
 * Called From: 1423:0B91:001F:C162
 */
void f__1423_0B91_002C_DD32()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0BB3; emu_last_cs = 0x1423; emu_last_ip = 0x0BA0; emu_last_length = 0x002C; emu_last_crc = 0xDD32; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x3);
	if (!emu_flags.zf) { f__1423_0BBD_000F_EB03(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0BBD; emu_last_cs = 0x1423; emu_last_ip = 0x0BB1; emu_last_length = 0x002C; emu_last_crc = 0xDD32; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0xFF);
	/* Unresolved jump */ emu_ip = 0x0BC7; emu_last_cs = 0x1423; emu_last_ip = 0x0BBB; emu_last_length = 0x002C; emu_last_crc = 0xDD32; emu_call();
}

/**
 * Decompiled function f__1423_0B94_0029_549A()
 *
 * @name f__1423_0B94_0029_549A
 * @implements 1423:0B94:0029:549A ()
 *
 * Called From: 1423:0B76:001F:C162
 * Called From: 1423:0B80:001F:C162
 */
void f__1423_0B94_0029_549A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1423_0BB3_000A_6782(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), 0x3);
	if (!emu_flags.zf) { f__1423_0BBD_000F_EB03(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0x1);
	if (!emu_flags.zf) { f__1423_0BBD_000F_EB03(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0xFF);
	f__1423_0BC7_0005_8BCF(); return;
}

/**
 * Decompiled function f__1423_0BB3_000A_6782()
 *
 * @name f__1423_0BB3_000A_6782
 * @implements 1423:0BB3:000A:6782 ()
 *
 * Called From: 1423:0BA0:0029:549A
 */
void f__1423_0BB3_000A_6782()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0xFF);
	f__1423_0BC7_0005_8BCF(); return;
}

/**
 * Decompiled function f__1423_0BBD_000F_EB03()
 *
 * @name f__1423_0BBD_000F_EB03
 * @implements 1423:0BBD:000F:EB03 ()
 *
 * Called From: 1423:0BAA:0029:549A
 * Called From: 1423:0BAA:002C:DD32
 * Called From: 1423:0BB1:0029:549A
 */
void f__1423_0BBD_000F_EB03()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0xA));
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1423_0BC7_0005_8BCF()
 *
 * @name f__1423_0BC7_0005_8BCF
 * @implements 1423:0BC7:0005:8BCF ()
 *
 * Called From: 1423:08DC:0012:0004
 * Called From: 1423:0930:0026:628E
 * Called From: 1423:0930:004C:E110
 * Called From: 1423:0BBB:000A:6782
 * Called From: 1423:0BBB:0029:549A
 */
void f__1423_0BC7_0005_8BCF()
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
 * Decompiled function f__1423_0BCC_0012_111A()
 *
 * @name f__1423_0BCC_0012_111A
 * @implements 1423:0BCC:0012:111A ()
 *
 * Called From: 176C:1349:0019:5069
 * Called From: 176C:1349:0011:9DAE
 * Called From: 1A34:1150:0012:391F
 * Called From: 1A34:2B0E:0019:3A5B
 * Called From: B4CD:028B:000F:10BA
 */
void f__1423_0BCC_0012_111A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1423_0BDE_000D_BD9D(); return; }
	/* Unresolved jump */ emu_ip = 0x0C6F; emu_last_cs = 0x1423; emu_last_ip = 0x0BDB; emu_last_length = 0x0012; emu_last_crc = 0x111A; emu_call();
}

/**
 * Decompiled function f__1423_0BDE_000D_BD9D()
 *
 * @name f__1423_0BDE_000D_BD9D
 * @implements 1423:0BDE:000D:BD9D ()
 *
 * Called From: 1423:0BD9:0012:111A
 */
void f__1423_0BDE_000D_BD9D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0x0);
	if (!emu_flags.zf) { f__1423_0BEB_000B_E66F(); return; }
	f__1423_0C6F_0005_8BCF(); return;
}

/**
 * Decompiled function f__1423_0BEB_000B_E66F()
 *
 * @name f__1423_0BEB_000B_E66F
 * @implements 1423:0BEB:000B:E66F ()
 *
 * Called From: 1423:0BE6:000D:BD9D
 */
void f__1423_0BEB_000B_E66F()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0BF6); emu_cs = 0x10BE; emu_House_FindFirst();
	f__1423_0BF6_0002_F3BA();
}

/**
 * Decompiled function f__1423_0BF6_0002_F3BA()
 *
 * @name f__1423_0BF6_0002_F3BA
 * @implements 1423:0BF6:0002:F3BA ()
 *
 * Called From: 1423:0BF6:000B:E66F
 */
void f__1423_0BF6_0002_F3BA()
{
	f__1423_0C5F_0015_7C3E(); return;
}

/**
 * Decompiled function f__1423_0BF8_0029_9DEB()
 *
 * @name f__1423_0BF8_0029_9DEB
 * @implements 1423:0BF8:0029:9DEB ()
 *
 * Called From: 1423:0C6D:0015:7C3E
 */
void f__1423_0BF8_0029_9DEB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__1423_0C54_000B_3601(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0C21); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__1423_0C21_0008_21B1();
}

/**
 * Decompiled function f__1423_0C21_0008_21B1()
 *
 * @name f__1423_0C21_0008_21B1
 * @implements 1423:0C21:0008:21B1 ()
 *
 * Called From: 1423:0C21:0029:9DEB
 */
void f__1423_0C21_0008_21B1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0C29); f__1423_0F34_0017_464D();
	f__1423_0C29_000F_B7B6();
}

/**
 * Decompiled function f__1423_0C29_000F_B7B6()
 *
 * @name f__1423_0C29_000F_B7B6
 * @implements 1423:0C29:000F:B7B6 ()
 *
 * Called From: 1423:0C29:0008:21B1
 */
void f__1423_0C29_000F_B7B6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1423_0C38_0027_642F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0xA));
	f__1423_0C3F_0020_A3B7(); return;
}

/**
 * Decompiled function f__1423_0C38_0027_642F()
 *
 * @name f__1423_0C38_0027_642F
 * @implements 1423:0C38:0027:642F ()
 *
 * Called From: 1423:0C2D:000F:B7B6
 */
void f__1423_0C38_0027_642F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_notb(&emu_ax.l, emu_ax.l);
	emu_pop(&emu_es);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0C5F); emu_cs = 0x10BE; emu_House_FindNext();
	f__1423_0C5F_0015_7C3E();
}

/**
 * Decompiled function f__1423_0C3F_0020_A3B7()
 *
 * @name f__1423_0C3F_0020_A3B7
 * @implements 1423:0C3F:0020:A3B7 ()
 *
 * Called From: 1423:0C36:000F:B7B6
 */
void f__1423_0C3F_0020_A3B7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_notb(&emu_ax.l, emu_ax.l);
	emu_pop(&emu_es);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0C5F); emu_cs = 0x10BE; emu_House_FindNext();
	f__1423_0C5F_0015_7C3E();
}

/**
 * Decompiled function f__1423_0C54_000B_3601()
 *
 * @name f__1423_0C54_000B_3601
 * @implements 1423:0C54:000B:3601 ()
 *
 * Called From: 1423:0C0E:0029:9DEB
 */
void f__1423_0C54_000B_3601()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0C5F); emu_cs = 0x10BE; emu_House_FindNext();
	f__1423_0C5F_0015_7C3E();
}

/**
 * Decompiled function f__1423_0C5F_0015_7C3E()
 *
 * @name f__1423_0C5F_0015_7C3E
 * @implements 1423:0C5F:0015:7C3E ()
 *
 * Called From: 1423:0BF6:0002:F3BA
 * Called From: 1423:0C5F:000B:3601
 * Called From: 1423:0C5F:0027:642F
 * Called From: 1423:0C5F:0020:A3B7
 */
void f__1423_0C5F_0015_7C3E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1423_0BF8_0029_9DEB(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1423_0C6F_0005_8BCF()
 *
 * @name f__1423_0C6F_0005_8BCF
 * @implements 1423:0C6F:0005:8BCF ()
 *
 * Called From: 1423:0BE8:000D:BD9D
 */
void f__1423_0C6F_0005_8BCF()
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
 * Decompiled function f__1423_0C74_0015_3419()
 *
 * @name f__1423_0C74_0015_3419
 * @implements 1423:0C74:0015:3419 ()
 *
 * Called From: 0972:0919:002F:F6E4
 */
void f__1423_0C74_0015_3419()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_movw(&emu_si, 0xFFFF);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1423_0C89_000E_E431(); return; }
	/* Unresolved jump */ emu_ip = 0x0DB9; emu_last_cs = 0x1423; emu_last_ip = 0x0C86; emu_last_length = 0x0015; emu_last_crc = 0x3419; emu_call();
}

/**
 * Decompiled function f__1423_0C89_000E_E431()
 *
 * @name f__1423_0C89_000E_E431
 * @implements 1423:0C89:000E:E431 ()
 *
 * Called From: 1423:0C84:0015:3419
 */
void f__1423_0C89_000E_E431()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C97); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	f__1423_0C97_0012_C249();
}

/**
 * Decompiled function f__1423_0C97_0012_C249()
 *
 * @name f__1423_0C97_0012_C249
 * @implements 1423:0C97:0012:C249 ()
 *
 * Called From: 1423:0C97:000E:E431
 */
void f__1423_0C97_0012_C249()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0CA9); emu_cs = 0x0C3A; f__0C3A_1B79_0021_8C40();
	f__1423_0CA9_0029_7965();
}

/**
 * Decompiled function f__1423_0CA9_0029_7965()
 *
 * @name f__1423_0CA9_0029_7965
 * @implements 1423:0CA9:0029:7965 ()
 *
 * Called From: 1423:0CA9:0012:C249
 */
void f__1423_0CA9_0029_7965()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x5);
	if (!emu_flags.zf) { f__1423_0CE1_0023_6CB4(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0CD2); emu_cs = 0x0FE4; emu_ip = 0x0243; emu_last_cs = 0x1423; emu_last_ip = 0x0CCD; emu_last_length = 0x0029; emu_last_crc = 0x7965; emu_call();
	/* Unresolved jump */ emu_ip = 0x0CD2; emu_last_cs = 0x1423; emu_last_ip = 0x0CD2; emu_last_length = 0x0029; emu_last_crc = 0x7965; emu_call();
}

/**
 * Decompiled function f__1423_0CE1_0023_6CB4()
 *
 * @name f__1423_0CE1_0023_6CB4
 * @implements 1423:0CE1:0023:6CB4 ()
 *
 * Called From: 1423:0CB9:0029:7965
 */
void f__1423_0CE1_0023_6CB4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x4);
	if (!emu_flags.zf) { f__1423_0CF3_0011_24ED(); return; }
	emu_andws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFF);
	emu_andws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFC);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D4C; emu_last_cs = 0x1423; emu_last_ip = 0x0CFB; emu_last_length = 0x0023; emu_last_crc = 0x6CB4; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	/* Unresolved jump */ emu_ip = 0x0D41; emu_last_cs = 0x1423; emu_last_ip = 0x0D02; emu_last_length = 0x0023; emu_last_crc = 0x6CB4; emu_call();
}

/**
 * Decompiled function f__1423_0CF3_0011_24ED()
 *
 * @name f__1423_0CF3_0011_24ED
 * @implements 1423:0CF3:0011:24ED ()
 *
 * Called From: 1423:0CE9:0023:6CB4
 */
void f__1423_0CF3_0011_24ED()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { f__1423_0D4C_0007_EE65(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	f__1423_0D41_000B_D382(); return;
}

/**
 * Decompiled function f__1423_0D04_0026_095B()
 *
 * @name f__1423_0D04_0026_095B
 * @implements 1423:0D04:0026:095B ()
 *
 * Called From: 1423:0D45:000B:D382
 * Called From: 1423:0D45:000E:EFDC
 */
void f__1423_0D04_0026_095B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__1423_0D3E_000E_EFDC(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0xC));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0D2A); emu_cs = 0x01F7; emu_ip = 0x058E; emu_last_cs = 0x1423; emu_last_ip = 0x0D25; emu_last_length = 0x0026; emu_last_crc = 0x095B; emu_call();
	/* Unresolved jump */ emu_ip = 0x0D2A; emu_last_cs = 0x1423; emu_last_ip = 0x0D2A; emu_last_length = 0x0026; emu_last_crc = 0x095B; emu_call();
}

/**
 * Decompiled function f__1423_0D3B_0003_1D00()
 *
 * @name f__1423_0D3B_0003_1D00
 * @implements 1423:0D3B:0003:1D00 ()
 *
 * Called From: 1423:0D4A:000E:EFDC
 * Called From: 1423:0DBB:0005:46EB
 * Called From: 1423:0DBB:000E:4DA2
 */
void f__1423_0D3B_0003_1D00()
{
	f__1423_0DBE_0005_8BCF(); return;
}

/**
 * Decompiled function f__1423_0D3E_000E_EFDC()
 *
 * @name f__1423_0D3E_000E_EFDC
 * @implements 1423:0D3E:000E:EFDC ()
 *
 * Called From: 1423:0D1B:0026:095B
 */
void f__1423_0D3E_000E_EFDC()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__1423_0D04_0026_095B(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	f__1423_0D3B_0003_1D00(); return;
}

/**
 * Decompiled function f__1423_0D41_000B_D382()
 *
 * @name f__1423_0D41_000B_D382
 * @implements 1423:0D41:000B:D382 ()
 *
 * Called From: 1423:0D02:0011:24ED
 */
void f__1423_0D41_000B_D382()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__1423_0D04_0026_095B(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	/* Unresolved jump */ emu_ip = 0x0D3B; emu_last_cs = 0x1423; emu_last_ip = 0x0D4A; emu_last_length = 0x000B; emu_last_crc = 0xD382; emu_call();
}

/**
 * Decompiled function f__1423_0D4C_0007_EE65()
 *
 * @name f__1423_0D4C_0007_EE65
 * @implements 1423:0D4C:0007:EE65 ()
 *
 * Called From: 1423:0CFB:0011:24ED
 */
void f__1423_0D4C_0007_EE65()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	f__1423_0DB3_000B_71FC(); return;
}

/**
 * Decompiled function f__1423_0D53_000D_D32C()
 *
 * @name f__1423_0D53_000D_D32C
 * @implements 1423:0D53:000D:D32C ()
 *
 * Called From: 1423:0DB7:000B:71FC
 * Called From: 1423:0DB7:000E:4DA2
 * Called From: 1423:0DB7:0011:FC55
 */
void f__1423_0D53_000D_D32C()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0D60); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	f__1423_0D60_0013_2198();
}

/**
 * Decompiled function f__1423_0D60_0013_2198()
 *
 * @name f__1423_0D60_0013_2198
 * @implements 1423:0D60:0013:2198 ()
 *
 * Called From: 1423:0D60:000D:D32C
 */
void f__1423_0D60_0013_2198()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_cx.x, emu_ax.x);
	emu_andw(&emu_bx.x, emu_dx.x);
	emu_orw(&emu_cx.x, emu_bx.x);
	if (emu_flags.zf) { f__1423_0DB0_000E_4DA2(); return; }
	emu_push(emu_cs); emu_push(0x0D73); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__1423_0D73_000A_1B8E();
}

/**
 * Decompiled function f__1423_0D73_000A_1B8E()
 *
 * @name f__1423_0D73_000A_1B8E
 * @implements 1423:0D73:000A:1B8E ()
 *
 * Called From: 1423:0D73:0013:2198
 */
void f__1423_0D73_000A_1B8E()
{
	emu_testw(&emu_ax.x, 0x3);
	if (!emu_flags.zf) { f__1423_0D7D_0041_028B(); return; }
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__1423_0DB9_0005_46EB(); return;
}

/**
 * Decompiled function f__1423_0D7D_0041_028B()
 *
 * @name f__1423_0D7D_0041_028B
 * @implements 1423:0D7D:0041:028B ()
 *
 * Called From: 1423:0D76:000A:1B8E
 */
void f__1423_0D7D_0041_028B()
{
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__1423_0DAD_0011_FC55(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2D));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_pop(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2D));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1423_0DB0_000E_4DA2(); return; }
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x20);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0D53; emu_last_cs = 0x1423; emu_last_ip = 0x0DB7; emu_last_length = 0x0041; emu_last_crc = 0x028B; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	/* Unresolved jump */ emu_ip = 0x0D3B; emu_last_cs = 0x1423; emu_last_ip = 0x0DBB; emu_last_length = 0x0041; emu_last_crc = 0x028B; emu_call();
}

/**
 * Decompiled function f__1423_0DAD_0011_FC55()
 *
 * @name f__1423_0DAD_0011_FC55
 * @implements 1423:0DAD:0011:FC55 ()
 *
 * Called From: 1423:0D80:0041:028B
 */
void f__1423_0DAD_0011_FC55()
{
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x20);
	if ((emu_flags.sf != emu_flags.of)) { f__1423_0D53_000D_D32C(); return; }
	emu_movw(&emu_ax.x, emu_si);
	/* Unresolved jump */ emu_ip = 0x0D3B; emu_last_cs = 0x1423; emu_last_ip = 0x0DBB; emu_last_length = 0x0011; emu_last_crc = 0xFC55; emu_call();
}

/**
 * Decompiled function f__1423_0DB0_000E_4DA2()
 *
 * @name f__1423_0DB0_000E_4DA2
 * @implements 1423:0DB0:000E:4DA2 ()
 *
 * Called From: 1423:0D6C:0013:2198
 * Called From: 1423:0DAB:0041:028B
 */
void f__1423_0DB0_000E_4DA2()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x20);
	if ((emu_flags.sf != emu_flags.of)) { f__1423_0D53_000D_D32C(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__1423_0D3B_0003_1D00(); return;
}

/**
 * Decompiled function f__1423_0DB3_000B_71FC()
 *
 * @name f__1423_0DB3_000B_71FC
 * @implements 1423:0DB3:000B:71FC ()
 *
 * Called From: 1423:0D51:0007:EE65
 */
void f__1423_0DB3_000B_71FC()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x20);
	if ((emu_flags.sf != emu_flags.of)) { f__1423_0D53_000D_D32C(); return; }
	emu_movw(&emu_ax.x, emu_si);
	/* Unresolved jump */ emu_ip = 0x0D3B; emu_last_cs = 0x1423; emu_last_ip = 0x0DBB; emu_last_length = 0x000B; emu_last_crc = 0x71FC; emu_call();
}

/**
 * Decompiled function f__1423_0DB9_0005_46EB()
 *
 * @name f__1423_0DB9_0005_46EB
 * @implements 1423:0DB9:0005:46EB ()
 *
 * Called From: 1423:0D7B:000A:1B8E
 */
void f__1423_0DB9_0005_46EB()
{
	emu_movw(&emu_ax.x, emu_si);
	f__1423_0D3B_0003_1D00(); return;
}

/**
 * Decompiled function f__1423_0DBE_0005_8BCF()
 *
 * @name f__1423_0DBE_0005_8BCF
 * @implements 1423:0DBE:0005:8BCF ()
 *
 * Called From: 1423:0D3B:0003:1D00
 */
void f__1423_0DBE_0005_8BCF()
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
 * Decompiled function f__1423_0DC3_0029_D1E2()
 *
 * @name f__1423_0DC3_0029_D1E2
 * @implements 1423:0DC3:0029:D1E2 ()
 *
 * Called From: 0C3A:11CC:001D:6961
 * Called From: B511:032E:0017:D892
 */
void f__1423_0DC3_0029_D1E2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38BC), 0x0);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0DEC); emu_cs = 0x1082; emu_Building_FindFirst();
	f__1423_0DEC_0005_962E();
}

/**
 * Decompiled function f__1423_0DEC_0005_962E()
 *
 * @name f__1423_0DEC_0005_962E
 * @implements 1423:0DEC:0005:962E ()
 *
 * Called From: 1423:0DEC:0029:D1E2
 */
void f__1423_0DEC_0005_962E()
{
	emu_addws(&emu_sp, 0x8);
	f__1423_0E17_0018_0C7D(); return;
}

/**
 * Decompiled function f__1423_0DF1_0024_7F0A()
 *
 * @name f__1423_0DF1_0024_7F0A
 * @implements 1423:0DF1:0024:7F0A ()
 *
 * Called From: 1423:0E23:0018:0C7D
 * Called From: 1423:0E23:001A:9A11
 */
void f__1423_0DF1_0024_7F0A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_addw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x40));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0E15); emu_cs = 0x1082; emu_Building_FindNext();
	f__1423_0E15_001A_9A11();
}

/**
 * Decompiled function f__1423_0E15_001A_9A11()
 *
 * @name f__1423_0E15_001A_9A11
 * @implements 1423:0E15:001A:9A11 ()
 *
 * Called From: 1423:0E15:0024:7F0A
 */
void f__1423_0E15_001A_9A11()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1423_0DF1_0024_7F0A(); return; }
	emu_cmpw(&emu_si, 0x7D00);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0E2F; emu_last_cs = 0x1423; emu_last_ip = 0x0E29; emu_last_length = 0x001A; emu_last_crc = 0x9A11; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__1423_0E32_0008_EA34(); return;
}

/**
 * Decompiled function f__1423_0E17_0018_0C7D()
 *
 * @name f__1423_0E17_0018_0C7D
 * @implements 1423:0E17:0018:0C7D ()
 *
 * Called From: 1423:0DEF:0005:962E
 */
void f__1423_0E17_0018_0C7D()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1423_0DF1_0024_7F0A(); return; }
	emu_cmpw(&emu_si, 0x7D00);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0E2F; emu_last_cs = 0x1423; emu_last_ip = 0x0E29; emu_last_length = 0x0018; emu_last_crc = 0x0C7D; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	f__1423_0E32_0008_EA34(); return;
}

/**
 * Decompiled function f__1423_0E32_0008_EA34()
 *
 * @name f__1423_0E32_0008_EA34
 * @implements 1423:0E32:0008:EA34 ()
 *
 * Called From: 1423:0E2D:001A:9A11
 * Called From: 1423:0E2D:0018:0C7D
 */
void f__1423_0E32_0008_EA34()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0E3A); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	f__1423_0E3A_0015_C6CF();
}

/**
 * Decompiled function f__1423_0E3A_0015_C6CF()
 *
 * @name f__1423_0E3A_0015_C6CF
 * @implements 1423:0E3A:0015:C6CF ()
 *
 * Called From: 1423:0E3A:0008:EA34
 */
void f__1423_0E3A_0015_C6CF()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38BC), emu_ax.x);
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
 * Decompiled function f__1423_0E4F_0010_843C()
 *
 * @name f__1423_0E4F_0010_843C
 * @implements 1423:0E4F:0010:843C ()
 *
 * Called From: 06F7:0362:000E:E9D8
 * Called From: 06F7:0362:0049:CA1D
 */
void f__1423_0E4F_0010_843C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0E5F); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	f__1423_0E5F_001D_3375();
}

/**
 * Decompiled function f__1423_0E5F_001D_3375()
 *
 * @name f__1423_0E5F_001D_3375
 * @implements 1423:0E5F:001D:3375 ()
 *
 * Called From: 1423:0E5F:0010:843C
 */
void f__1423_0E5F_001D_3375()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1423_0E7C_0026_4424(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (emu_flags.zf) { f__1423_0E7C_0026_4424(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1423_0F2F_0005_8BCF(); return;
}

/**
 * Decompiled function f__1423_0E79_0003_DD0C()
 *
 * @name f__1423_0E79_0003_DD0C
 * @implements 1423:0E79:0003:DD0C ()
 *
 * Called From: 1423:0F2C:0006:02B8
 * Called From: 1423:0F2C:0014:94E9
 */
void f__1423_0E79_0003_DD0C()
{
	f__1423_0F2F_0005_8BCF(); return;
}

/**
 * Decompiled function f__1423_0E7C_0026_4424()
 *
 * @name f__1423_0E7C_0026_4424
 * @implements 1423:0E7C:0026:4424 ()
 *
 * Called From: 1423:0E6A:001D:3375
 * Called From: 1423:0E75:001D:3375
 */
void f__1423_0E7C_0026_4424()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (emu_flags.zf) { f__1423_0EAE_000F_99F1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x28), 0x0);
	if (!emu_flags.zf) { f__1423_0EAC_0002_FDBA(); return; }
	emu_movw(&emu_ax.x, 0x30);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0EA2); emu_cs = 0x3483; ovl__3483(2);
	f__1423_0EA2_000C_D503();
}

/**
 * Decompiled function f__1423_0EA2_000C_D503()
 *
 * @name f__1423_0EA2_000C_D503
 * @implements 1423:0EA2:000C:D503 ()
 *
 * Called From: 1423:0EA2:0026:4424
 */
void f__1423_0EA2_000C_D503()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x28), 0x8);
	f__1423_0F29_0006_02B8(); return;
}

/**
 * Decompiled function f__1423_0EAC_0002_FDBA()
 *
 * @name f__1423_0EAC_0002_FDBA
 * @implements 1423:0EAC:0002:FDBA ()
 *
 * Called From: 1423:0E97:0026:4424
 */
void f__1423_0EAC_0002_FDBA()
{
	f__1423_0F29_0006_02B8(); return;
}

/**
 * Decompiled function f__1423_0EAE_000F_99F1()
 *
 * @name f__1423_0EAE_000F_99F1
 * @implements 1423:0EAE:000F:99F1 ()
 *
 * Called From: 1423:0E8D:0026:4424
 */
void f__1423_0EAE_000F_99F1()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0EBD); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__1423_0EBD_0005_A9AE();
}

/**
 * Decompiled function f__1423_0EBD_0005_A9AE()
 *
 * @name f__1423_0EBD_0005_A9AE
 * @implements 1423:0EBD:0005:A9AE ()
 *
 * Called From: 1423:0EBD:000F:99F1
 */
void f__1423_0EBD_0005_A9AE()
{
	emu_addws(&emu_sp, 0x8);
	f__1423_0F1B_0014_94E9(); return;
}

/**
 * Decompiled function f__1423_0F1B_0014_94E9()
 *
 * @name f__1423_0F1B_0014_94E9
 * @implements 1423:0F1B:0014:94E9 ()
 *
 * Called From: 1423:0EC0:0005:A9AE
 */
void f__1423_0F1B_0014_94E9()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EC2; emu_last_cs = 0x1423; emu_last_ip = 0x0F27; emu_last_length = 0x0014; emu_last_crc = 0x94E9; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__1423_0E79_0003_DD0C(); return;
}

/**
 * Decompiled function f__1423_0F29_0006_02B8()
 *
 * @name f__1423_0F29_0006_02B8
 * @implements 1423:0F29:0006:02B8 ()
 *
 * Called From: 1423:0EAC:000C:D503
 * Called From: 1423:0EAC:0002:FDBA
 */
void f__1423_0F29_0006_02B8()
{
	emu_movw(&emu_ax.x, 0x1);
	f__1423_0E79_0003_DD0C(); return;
}

/**
 * Decompiled function f__1423_0F2F_0005_8BCF()
 *
 * @name f__1423_0F2F_0005_8BCF
 * @implements 1423:0F2F:0005:8BCF ()
 *
 * Called From: 1423:0E79:0003:DD0C
 * Called From: 1423:0E79:001D:3375
 */
void f__1423_0F2F_0005_8BCF()
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
 * Decompiled function f__1423_0F34_0017_464D()
 *
 * @name f__1423_0F34_0017_464D
 * @implements 1423:0F34:0017:464D ()
 *
 * Called From: 06F7:0134:0008:9688
 * Called From: 0972:147E:001A:3E69
 * Called From: 0972:147E:0024:B930
 * Called From: 0C3A:12C1:0014:56D0
 * Called From: 0C3A:12C1:0017:53A0
 * Called From: 0C3A:223B:0008:9688
 * Called From: 0FE4:0079:005B:3AE9
 * Called From: 1423:097E:0008:229F
 * Called From: 1423:09C6:0008:22A9
 * Called From: 1423:0A19:0008:E2B5
 * Called From: 1423:0B6F:0011:CB22
 * Called From: 1423:0B6F:0029:9196
 * Called From: 1423:0C26:0008:21B1
 * Called From: 1A34:0EFA:0008:9688
 * Called From: 1A34:11E9:0008:9688
 * Called From: 1A34:1400:0008:9688
 * Called From: 1A34:2421:000A:D495
 * Called From: 1A34:2B64:0008:9688
 * Called From: 1A34:2D39:0011:DBC6
 * Called From: 1A34:3209:0008:9688
 * Called From: B4CD:02AD:0008:9688
 * Called From: B518:0FED:0008:9688
 */
void f__1423_0F34_0017_464D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpws(&emu_dx.x, 0xFF);
	if (emu_flags.zf) { f__1423_0F47_0004_F0B9(); return; }
	emu_cmpws(&emu_bx.x, 0xFF);
	if (!emu_flags.zf) { f__1423_0F4B_0006_69E5(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1423_0F7C_0002_2597(); return;
}

/**
 * Decompiled function f__1423_0F47_0004_F0B9()
 *
 * @name f__1423_0F47_0004_F0B9
 * @implements 1423:0F47:0004:F0B9 ()
 *
 * Called From: 1423:0F40:0017:464D
 * Called From: 1423:0F67:0002:AF3A
 * Called From: 1423:0F75:000E:CCF9
 * Called From: 1423:0F75:0002:A83A
 */
void f__1423_0F47_0004_F0B9()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1423_0F7C_0002_2597(); return;
}

/**
 * Decompiled function f__1423_0F49_0002_D8BA()
 *
 * @name f__1423_0F49_0002_D8BA
 * @implements 1423:0F49:0002:D8BA ()
 *
 * Called From: 1423:0F7A:0005:B37A
 */
void f__1423_0F49_0002_D8BA()
{
	f__1423_0F7C_0002_2597(); return;
}

/**
 * Decompiled function f__1423_0F4B_0006_69E5()
 *
 * @name f__1423_0F4B_0006_69E5
 * @implements 1423:0F4B:0006:69E5 ()
 *
 * Called From: 1423:0F45:0017:464D
 */
void f__1423_0F4B_0006_69E5()
{
	emu_cmpw(&emu_dx.x, emu_bx.x);
	if (!emu_flags.zf) { f__1423_0F51_0016_7BD9(); return; }
	f__1423_0F77_0005_B37A(); return;
}

/**
 * Decompiled function f__1423_0F51_0016_7BD9()
 *
 * @name f__1423_0F51_0016_7BD9
 * @implements 1423:0F51:0016:7BD9 ()
 *
 * Called From: 1423:0F4D:0006:69E5
 */
void f__1423_0F51_0016_7BD9()
{
	emu_cmpws(&emu_dx.x, 0x3);
	if (emu_flags.zf) { f__1423_0F5B_000C_3825(); return; }
	emu_cmpws(&emu_bx.x, 0x3);
	if (!emu_flags.zf) { f__1423_0F69_000E_CCF9(); return; }
	emu_cmpws(&emu_dx.x, 0x1);
	if (emu_flags.zf) { f__1423_0F65_0002_C83A(); return; }
	emu_cmpws(&emu_bx.x, 0x1);
	if (!emu_flags.zf) { f__1423_0F67_0002_AF3A(); return; }
	/* Unresolved jump */ emu_ip = 0x0F77; emu_last_cs = 0x1423; emu_last_ip = 0x0F65; emu_last_length = 0x0016; emu_last_crc = 0x7BD9; emu_call();
}

/**
 * Decompiled function f__1423_0F5B_000C_3825()
 *
 * @name f__1423_0F5B_000C_3825
 * @implements 1423:0F5B:000C:3825 ()
 *
 * Called From: 1423:0F54:0016:7BD9
 */
void f__1423_0F5B_000C_3825()
{
	emu_cmpws(&emu_dx.x, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F65; emu_last_cs = 0x1423; emu_last_ip = 0x0F5E; emu_last_length = 0x000C; emu_last_crc = 0x3825; emu_call(); return; }
	emu_cmpws(&emu_bx.x, 0x1);
	if (!emu_flags.zf) { f__1423_0F67_0002_AF3A(); return; }
	f__1423_0F77_0005_B37A(); return;
}

/**
 * Decompiled function f__1423_0F65_0002_C83A()
 *
 * @name f__1423_0F65_0002_C83A
 * @implements 1423:0F65:0002:C83A ()
 *
 * Called From: 1423:0F5E:0016:7BD9
 */
void f__1423_0F65_0002_C83A()
{
	f__1423_0F77_0005_B37A(); return;
}

/**
 * Decompiled function f__1423_0F67_0002_AF3A()
 *
 * @name f__1423_0F67_0002_AF3A
 * @implements 1423:0F67:0002:AF3A ()
 *
 * Called From: 1423:0F63:000C:3825
 * Called From: 1423:0F63:0016:7BD9
 */
void f__1423_0F67_0002_AF3A()
{
	f__1423_0F47_0004_F0B9(); return;
}

/**
 * Decompiled function f__1423_0F69_000E_CCF9()
 *
 * @name f__1423_0F69_000E_CCF9
 * @implements 1423:0F69:000E:CCF9 ()
 *
 * Called From: 1423:0F59:0016:7BD9
 */
void f__1423_0F69_000E_CCF9()
{
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1423_0F75_0002_A83A(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__1423_0F77_0005_B37A(); return; }
	f__1423_0F47_0004_F0B9(); return;
}

/**
 * Decompiled function f__1423_0F75_0002_A83A()
 *
 * @name f__1423_0F75_0002_A83A
 * @implements 1423:0F75:0002:A83A ()
 *
 * Called From: 1423:0F6D:000E:CCF9
 */
void f__1423_0F75_0002_A83A()
{
	f__1423_0F47_0004_F0B9(); return;
}

/**
 * Decompiled function f__1423_0F77_0005_B37A()
 *
 * @name f__1423_0F77_0005_B37A
 * @implements 1423:0F77:0005:B37A ()
 *
 * Called From: 1423:0F4F:0006:69E5
 * Called From: 1423:0F65:000C:3825
 * Called From: 1423:0F65:0002:C83A
 * Called From: 1423:0F73:000E:CCF9
 */
void f__1423_0F77_0005_B37A()
{
	emu_movw(&emu_ax.x, 0x1);
	f__1423_0F49_0002_D8BA(); return;
}

/**
 * Decompiled function f__1423_0F7C_0002_2597()
 *
 * @name f__1423_0F7C_0002_2597
 * @implements 1423:0F7C:0002:2597 ()
 *
 * Called From: 1423:0F49:0002:D8BA
 * Called From: 1423:0F49:0004:F0B9
 * Called From: 1423:0F49:0017:464D
 */
void f__1423_0F7C_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
