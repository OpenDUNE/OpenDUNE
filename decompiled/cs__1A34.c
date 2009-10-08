/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1A34_0005_001F_38E2()
 *
 * @name f__1A34_0005_001F_38E2
 * @implements 1A34:0005:001F:38E2 ()
 *
 * Called From: 1A34:21C7:000B:7C30
 * Called From: 1A34:21C7:001C:C286
 */
void f__1A34_0005_001F_38E2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x20);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_0024_000D_C868(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x08F5; emu_last_cs = 0x1A34; emu_last_ip = 0x0021; emu_last_length = 0x001F; emu_last_crc = 0x38E2; emu_call();
}

/**
 * Decompiled function f__1A34_001F_0005_5880()
 *
 * @name f__1A34_001F_0005_5880
 * @implements 1A34:001F:0005:5880 ()
 *
 * Called From: 1A34:002F:000D:C868
 */
void f__1A34_001F_0005_5880()
{
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_08F5_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_0021_0003_5914()
 *
 * @name f__1A34_0021_0003_5914
 * @implements 1A34:0021:0003:5914 ()
 *
 * Called From: 1A34:07E5:0006:C124
 * Called From: 1A34:07E5:0009:8575
 * Called From: 1A34:08F2:0006:C896
 * Called From: 1A34:08F2:0008:9124
 */
void f__1A34_0021_0003_5914()
{
	f__1A34_08F5_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_0024_000D_C868()
 *
 * @name f__1A34_0024_000D_C868
 * @implements 1A34:0024:000D:C868 ()
 *
 * Called From: 1A34:001D:001F:38E2
 */
void f__1A34_0024_000D_C868()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x1);
	if (!emu_flags.zf) { f__1A34_0031_0035_A18F(); return; }
	f__1A34_001F_0005_5880(); return;
}

/**
 * Decompiled function f__1A34_0031_0035_A18F()
 *
 * @name f__1A34_0031_0035_A18F
 * @implements 1A34:0031:0035:A18F ()
 *
 * Called From: 1A34:002D:000D:C868
 */
void f__1A34_0031_0035_A18F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x64));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0066); emu_cs = 0x0F3F; f__0F3F_028E_0015_1153();
	f__1A34_0066_0020_ECD3();
}

/**
 * Decompiled function f__1A34_0066_0020_ECD3()
 *
 * @name f__1A34_0066_0020_ECD3
 * @implements 1A34:0066:0020:ECD3 ()
 *
 * Called From: 1A34:0066:0035:A18F
 */
void f__1A34_0066_0020_ECD3()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__1A34_0086_0014_BCC7(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1A34_0086_0014_BCC7(); return; }
	/* Unresolved jump */ emu_ip = 0x001F; emu_last_cs = 0x1A34; emu_last_ip = 0x0084; emu_last_length = 0x0020; emu_last_crc = 0xECD3; emu_call();
}

/**
 * Decompiled function f__1A34_0086_0014_BCC7()
 *
 * @name f__1A34_0086_0014_BCC7
 * @implements 1A34:0086:0014:BCC7 ()
 *
 * Called From: 1A34:007D:0020:ECD3
 * Called From: 1A34:0082:0020:ECD3
 */
void f__1A34_0086_0014_BCC7()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_andw(&emu_dx, 0xC000);
	emu_andw(&emu_ax, 0xC000);
	emu_orw(&emu_dx, emu_ax);
	if (!emu_flags.zf) { f__1A34_009A_0031_7529(); return; }
	f__1A34_011E_0023_DCFE(); return;
}

/**
 * Decompiled function f__1A34_009A_0031_7529()
 *
 * @name f__1A34_009A_0031_7529
 * @implements 1A34:009A:0031:7529 ()
 *
 * Called From: 1A34:0095:0014:BCC7
 */
void f__1A34_009A_0031_7529()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x80);
	if (emu_flags.zf) { f__1A34_00E6_000B_2449(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x64));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00CB); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__1A34_00CB_0016_183D();
}

/**
 * Decompiled function f__1A34_00CB_0016_183D()
 *
 * @name f__1A34_00CB_0016_183D
 * @implements 1A34:00CB:0016:183D ()
 *
 * Called From: 1A34:00CB:0031:7529
 */
void f__1A34_00CB_0016_183D()
{
	emu_andw(&emu_ax, 0xF);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_andw(&emu_dx, 0xFF);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x00E1); f__1A34_1E99_0012_1117();
	f__1A34_00E1_0005_8D6E();
}

/**
 * Decompiled function f__1A34_00E1_0005_8D6E()
 *
 * @name f__1A34_00E1_0005_8D6E
 * @implements 1A34:00E1:0005:8D6E ()
 *
 * Called From: 1A34:00E1:0016:183D
 */
void f__1A34_00E1_0005_8D6E()
{
	emu_addw(&emu_sp, 0xA);
	f__1A34_00F6_0020_5691(); return;
}

/**
 * Decompiled function f__1A34_00E6_000B_2449()
 *
 * @name f__1A34_00E6_000B_2449
 * @implements 1A34:00E6:000B:2449 ()
 *
 * Called From: 1A34:00A3:0031:7529
 * Called From: 1A34:011C:0008:87CF
 * Called From: 1A34:04C4:0006:0905
 */
void f__1A34_00E6_000B_2449()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x00F1); f__1A34_10EC_000E_A326();
	f__1A34_00F1_0005_8CD6();
}

/**
 * Decompiled function f__1A34_00F1_0005_8CD6()
 *
 * @name f__1A34_00F1_0005_8CD6
 * @implements 1A34:00F1:0005:8CD6 ()
 *
 * Called From: 1A34:00F1:000B:2449
 */
void f__1A34_00F1_0005_8CD6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__1A34_07E2_0006_C124(); return;
}

/**
 * Decompiled function f__1A34_00F6_0020_5691()
 *
 * @name f__1A34_00F6_0020_5691
 * @implements 1A34:00F6:0020:5691 ()
 *
 * Called From: 1A34:00E4:0005:8D6E
 */
void f__1A34_00F6_0020_5691()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x011E; emu_last_cs = 0x1A34; emu_last_ip = 0x00FF; emu_last_length = 0x0020; emu_last_crc = 0x5691; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x011E; emu_last_cs = 0x1A34; emu_last_ip = 0x0109; emu_last_length = 0x0020; emu_last_crc = 0x5691; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0116); emu_cs = 0x0C10; f__0C10_013D_0016_8C5C();
	f__1A34_0116_0008_87CF();
}

/**
 * Decompiled function f__1A34_0116_0008_87CF()
 *
 * @name f__1A34_0116_0008_87CF
 * @implements 1A34:0116:0008:87CF ()
 *
 * Called From: 1A34:0116:0020:5691
 */
void f__1A34_0116_0008_87CF()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1A34_011E_0023_DCFE(); return; }
	f__1A34_00E6_000B_2449(); return;
}

/**
 * Decompiled function f__1A34_011E_0023_DCFE()
 *
 * @name f__1A34_011E_0023_DCFE
 * @implements 1A34:011E:0023:DCFE ()
 *
 * Called From: 1A34:0097:0014:BCC7
 * Called From: 1A34:011A:0008:87CF
 */
void f__1A34_011E_0023_DCFE()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x6C), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x10);
	if (emu_flags.zf) { f__1A34_014A_0016_17F2(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x80);
	if (emu_flags.zf) { f__1A34_014A_0016_17F2(); return; }
	emu_push(emu_cs); emu_push(0x0141); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__1A34_0141_001F_F414();
}

/**
 * Decompiled function f__1A34_0141_001F_F414()
 *
 * @name f__1A34_0141_001F_F414
 * @implements 1A34:0141:001F:F414 ()
 *
 * Called From: 1A34:0141:0023:DCFE
 */
void f__1A34_0141_001F_F414()
{
	emu_andb(&emu_al, 0x7);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x6C), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4B));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x49));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0160); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__1A34_0160_0011_25DB();
}

/**
 * Decompiled function f__1A34_014A_0016_17F2()
 *
 * @name f__1A34_014A_0016_17F2
 * @implements 1A34:014A:0016:17F2 ()
 *
 * Called From: 1A34:012F:0023:DCFE
 * Called From: 1A34:013A:0023:DCFE
 */
void f__1A34_014A_0016_17F2()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4B));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x49));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0160); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__1A34_0160_0011_25DB();
}

/**
 * Decompiled function f__1A34_0160_0011_25DB()
 *
 * @name f__1A34_0160_0011_25DB
 * @implements 1A34:0160:0011:25DB ()
 *
 * Called From: 1A34:0160:001F:F414
 * Called From: 1A34:0160:0016:17F2
 */
void f__1A34_0160_0011_25DB()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0171); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__1A34_0171_0012_C55C();
}

/**
 * Decompiled function f__1A34_0171_0012_C55C()
 *
 * @name f__1A34_0171_0012_C55C
 * @implements 1A34:0171:0012:C55C ()
 *
 * Called From: 1A34:0171:0011:25DB
 */
void f__1A34_0171_0012_C55C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x20);
	if (!emu_flags.zf) { f__1A34_0183_0009_9146(); return; }
	f__1A34_027A_000E_8289(); return;
}

/**
 * Decompiled function f__1A34_0183_0009_9146()
 *
 * @name f__1A34_0183_0009_9146
 * @implements 1A34:0183:0009:9146 ()
 *
 * Called From: 1A34:017E:0012:C55C
 */
void f__1A34_0183_0009_9146()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x30);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_018C_0006_22E8(); return; }
	f__1A34_027A_000E_8289(); return;
}

/**
 * Decompiled function f__1A34_018C_0006_22E8()
 *
 * @name f__1A34_018C_0006_22E8
 * @implements 1A34:018C:0006:22E8 ()
 *
 * Called From: 1A34:0187:0009:9146
 */
void f__1A34_018C_0006_22E8()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0192); emu_cs = 0x34CD; ovl__34CD(26);
	f__1A34_0192_0052_7BDF();
}

/**
 * Decompiled function f__1A34_0192_0052_7BDF()
 *
 * @name f__1A34_0192_0052_7BDF
 * @implements 1A34:0192:0052:7BDF ()
 *
 * Called From: 1A34:0192:0006:22E8
 */
void f__1A34_0192_0052_7BDF()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_flags.zf) { f__1A34_0210_0006_12E4(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (!emu_flags.zf) { f__1A34_0210_0006_12E4(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0210; emu_last_cs = 0x1A34; emu_last_ip = 0x01C6; emu_last_length = 0x0052; emu_last_crc = 0x7BDF; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!emu_flags.zf) { f__1A34_01E6_000B_0192(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) { f__1A34_01E6_000B_0192(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x01E4); f__1A34_0F48_0018_0DB8();
	f__1A34_01E4_000D_CC00();
}

/**
 * Decompiled function f__1A34_01E4_000D_CC00()
 *
 * @name f__1A34_01E4_000D_CC00
 * @implements 1A34:01E4:000D:CC00 ()
 *
 * Called From: 1A34:01E4:0052:7BDF
 */
void f__1A34_01E4_000D_CC00()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs);
	emu_push(0x01F1); f__1A34_364E_0012_61B3();
	f__1A34_01F1_001A_B3E0();
}

/**
 * Decompiled function f__1A34_01E6_000B_0192()
 *
 * @name f__1A34_01E6_000B_0192
 * @implements 1A34:01E6:000B:0192 ()
 *
 * Called From: 1A34:01D2:0052:7BDF
 * Called From: 1A34:01D7:0052:7BDF
 */
void f__1A34_01E6_000B_0192()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs);
	emu_push(0x01F1); f__1A34_364E_0012_61B3();
	f__1A34_01F1_001A_B3E0();
}

/**
 * Decompiled function f__1A34_01F1_001A_B3E0()
 *
 * @name f__1A34_01F1_001A_B3E0
 * @implements 1A34:01F1:001A:B3E0 ()
 *
 * Called From: 1A34:01F1:000B:0192
 * Called From: 1A34:01F1:000D:CC00
 */
void f__1A34_01F1_001A_B3E0()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x20), 0x1);
	emu_movw(&emu_ax, 0xA);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs); emu_push(0x020B); emu_cs = 0x176C; f__176C_000E_000E_633D();
	f__1A34_020B_0005_B1EE();
}

/**
 * Decompiled function f__1A34_020B_0005_B1EE()
 *
 * @name f__1A34_020B_0005_B1EE
 * @implements 1A34:020B:0005:B1EE ()
 *
 * Called From: 1A34:020B:001A:B3E0
 */
void f__1A34_020B_0005_B1EE()
{
	emu_addw(&emu_sp, 0x6);
	f__1A34_027A_000E_8289(); return;
}

/**
 * Decompiled function f__1A34_0210_0006_12E4()
 *
 * @name f__1A34_0210_0006_12E4
 * @implements 1A34:0210:0006:12E4 ()
 *
 * Called From: 1A34:019F:0052:7BDF
 * Called From: 1A34:01BB:0052:7BDF
 */
void f__1A34_0210_0006_12E4()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0216); emu_cs = 0x34CD; ovl__34CD(13);
	f__1A34_0216_004F_3313();
}

/**
 * Decompiled function f__1A34_0216_004F_3313()
 *
 * @name f__1A34_0216_004F_3313
 * @implements 1A34:0216:004F:3313 ()
 *
 * Called From: 1A34:0216:0006:12E4
 */
void f__1A34_0216_004F_3313()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__1A34_0222_0043_57C5(); return; }
	emu_cmpw(&emu_si, 0x2);
	if (!emu_flags.zf) { f__1A34_027A_000E_8289(); return; }
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x1));
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1A34_027A_000E_8289(); return; }
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x64));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0265); emu_cs = 0x34CD; ovl__34CD(19);
	f__1A34_0265_0012_2E23();
}

/**
 * Decompiled function f__1A34_0222_0043_57C5()
 *
 * @name f__1A34_0222_0043_57C5
 * @implements 1A34:0222:0043:57C5 ()
 *
 * Called From: 1A34:021B:004F:3313
 */
void f__1A34_0222_0043_57C5()
{
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x1));
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1A34_027A_000E_8289(); return; }
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x64));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0265); emu_cs = 0x34CD; ovl__34CD(19);
	f__1A34_0265_0012_2E23();
}

/**
 * Decompiled function f__1A34_0265_0012_2E23()
 *
 * @name f__1A34_0265_0012_2E23
 * @implements 1A34:0265:0012:2E23 ()
 *
 * Called From: 1A34:0265:0043:57C5
 * Called From: 1A34:0265:004F:3313
 */
void f__1A34_0265_0012_2E23()
{
	emu_pop(&emu_cx);
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_dx, 0x33C8);
	emu_addw(&emu_ax, 0x0);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0277); emu_cs = 0x151A; f__151A_000E_0013_5840();
	f__1A34_0277_0011_DFCD();
}

/**
 * Decompiled function f__1A34_0277_0011_DFCD()
 *
 * @name f__1A34_0277_0011_DFCD
 * @implements 1A34:0277:0011:DFCD ()
 *
 * Called From: 1A34:0277:0012:2E23
 */
void f__1A34_0277_0011_DFCD()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0288); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_0288_0037_505C();
}

/**
 * Decompiled function f__1A34_027A_000E_8289()
 *
 * @name f__1A34_027A_000E_8289
 * @implements 1A34:027A:000E:8289 ()
 *
 * Called From: 1A34:0180:0012:C55C
 * Called From: 1A34:0189:0009:9146
 * Called From: 1A34:020E:0005:B1EE
 * Called From: 1A34:0220:004F:3313
 * Called From: 1A34:0239:0043:57C5
 * Called From: 1A34:0239:004F:3313
 */
void f__1A34_027A_000E_8289()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0288); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_0288_0037_505C();
}

/**
 * Decompiled function f__1A34_0288_0037_505C()
 *
 * @name f__1A34_0288_0037_505C
 * @implements 1A34:0288:0037:505C ()
 *
 * Called From: 1A34:0288:000E:8289
 * Called From: 1A34:0288:0011:DFCD
 */
void f__1A34_0288_0037_505C()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (!emu_flags.zf) { f__1A34_029D_0022_BC63(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x20);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4B));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x49));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x02BF); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__1A34_02BF_0013_C5DB();
}

/**
 * Decompiled function f__1A34_029D_0022_BC63()
 *
 * @name f__1A34_029D_0022_BC63
 * @implements 1A34:029D:0022:BC63 ()
 *
 * Called From: 1A34:0293:0037:505C
 */
void f__1A34_029D_0022_BC63()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4B));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x49));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x02BF); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__1A34_02BF_0013_C5DB();
}

/**
 * Decompiled function f__1A34_02BF_0013_C5DB()
 *
 * @name f__1A34_02BF_0013_C5DB
 * @implements 1A34:02BF:0013:C5DB ()
 *
 * Called From: 1A34:02BF:0022:BC63
 * Called From: 1A34:02BF:0037:505C
 */
void f__1A34_02BF_0013_C5DB()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x18);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02D2; emu_last_cs = 0x1A34; emu_last_ip = 0x02CD; emu_last_length = 0x0013; emu_last_crc = 0xC5DB; emu_call(); return; }
	f__1A34_03F8_000D_6192(); return;
}

/**
 * Decompiled function f__1A34_03F8_000D_6192()
 *
 * @name f__1A34_03F8_000D_6192
 * @implements 1A34:03F8:000D:6192 ()
 *
 * Called From: 1A34:02CF:0013:C5DB
 */
void f__1A34_03F8_000D_6192()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x17);
	if (emu_flags.zf) { f__1A34_0405_000B_4959(); return; }
	f__1A34_04C7_0017_222F(); return;
}

/**
 * Decompiled function f__1A34_0405_000B_4959()
 *
 * @name f__1A34_0405_000B_4959
 * @implements 1A34:0405:000B:4959 ()
 *
 * Called From: 1A34:0400:000D:6192
 */
void f__1A34_0405_000B_4959()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0410); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__1A34_0410_0008_5756();
}

/**
 * Decompiled function f__1A34_0410_0008_5756()
 *
 * @name f__1A34_0410_0008_5756
 * @implements 1A34:0410:0008:5756 ()
 *
 * Called From: 1A34:0410:000B:4959
 */
void f__1A34_0410_0008_5756()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0418); emu_cs = 0x34CD; ovl__34CD(13);
	f__1A34_0418_0019_BEE7();
}

/**
 * Decompiled function f__1A34_0418_0019_BEE7()
 *
 * @name f__1A34_0418_0019_BEE7
 * @implements 1A34:0418:0019:BEE7 ()
 *
 * Called From: 1A34:0418:0008:5756
 */
void f__1A34_0418_0019_BEE7()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_si, 0xB);
	if (emu_flags.zf) { f__1A34_0425_000C_09F0(); return; }
	emu_cmpw(&emu_si, 0xC);
	if (!emu_flags.zf) { f__1A34_0467_005A_1EF0(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4D));
	emu_push(emu_cs); emu_push(0x0431); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	f__1A34_0431_0011_C8E7();
}

/**
 * Decompiled function f__1A34_0425_000C_09F0()
 *
 * @name f__1A34_0425_000C_09F0
 * @implements 1A34:0425:000C:09F0 ()
 *
 * Called From: 1A34:041E:0019:BEE7
 */
void f__1A34_0425_000C_09F0()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4D));
	emu_push(emu_cs); emu_push(0x0431); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	f__1A34_0431_0011_C8E7();
}

/**
 * Decompiled function f__1A34_0431_0011_C8E7()
 *
 * @name f__1A34_0431_0011_C8E7
 * @implements 1A34:0431:0011:C8E7 ()
 *
 * Called From: 1A34:0431:0019:BEE7
 * Called From: 1A34:0431:000C:09F0
 */
void f__1A34_0431_0011_C8E7()
{
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x3);
	if (!emu_flags.zf) { f__1A34_0467_005A_1EF0(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0442); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__1A34_0442_007F_6425();
}

/**
 * Decompiled function f__1A34_0442_007F_6425()
 *
 * @name f__1A34_0442_007F_6425
 * @implements 1A34:0442:007F:6425 ()
 *
 * Called From: 1A34:0442:0011:C8E7
 */
void f__1A34_0442_007F_6425()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movb(&emu_ah, 0x0);
	emu_andw(&emu_ax, 0x7);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0467; emu_last_cs = 0x1A34; emu_last_ip = 0x0463; emu_last_length = 0x007F; emu_last_crc = 0x6425; emu_call(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_cmpw(&emu_si, 0xB);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0476; emu_last_cs = 0x1A34; emu_last_ip = 0x046A; emu_last_length = 0x007F; emu_last_crc = 0x6425; emu_call(); return; }
	emu_cmpw(&emu_si, 0xC);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0476; emu_last_cs = 0x1A34; emu_last_ip = 0x046F; emu_last_length = 0x007F; emu_last_crc = 0x6425; emu_call(); return; }
	emu_cmpw(&emu_si, 0x6);
	if (!emu_flags.zf) { f__1A34_04C7_0017_222F(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xA), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4D));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x54));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_movw(&emu_bx, 0xA);
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_andw(&emu_dx, 0x3);
	emu_push(emu_dx);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x04C1); emu_cs = 0x06F7; emu_ip = 0x0008; emu_last_cs = 0x1A34; emu_last_ip = 0x04BC; emu_last_length = 0x007F; emu_last_crc = 0x6425; emu_call();
	f__1A34_04C1_0006_0905();
}

/**
 * Decompiled function f__1A34_0467_005A_1EF0()
 *
 * @name f__1A34_0467_005A_1EF0
 * @implements 1A34:0467:005A:1EF0 ()
 *
 * Called From: 1A34:0423:0019:BEE7
 * Called From: 1A34:0435:0011:C8E7
 */
void f__1A34_0467_005A_1EF0()
{
	emu_cmpw(&emu_si, 0xB);
	if (emu_flags.zf) { f__1A34_0476_004B_AB24(); return; }
	emu_cmpw(&emu_si, 0xC);
	if (emu_flags.zf) { f__1A34_0476_004B_AB24(); return; }
	emu_cmpw(&emu_si, 0x6);
	if (!emu_flags.zf) { f__1A34_04C7_0017_222F(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xA), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4D));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x54));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_movw(&emu_bx, 0xA);
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_andw(&emu_dx, 0x3);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x04C1); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
	f__1A34_04C1_0006_0905();
}

/**
 * Decompiled function f__1A34_0476_004B_AB24()
 *
 * @name f__1A34_0476_004B_AB24
 * @implements 1A34:0476:004B:AB24 ()
 *
 * Called From: 1A34:046A:005A:1EF0
 * Called From: 1A34:046F:005A:1EF0
 */
void f__1A34_0476_004B_AB24()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xA), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4D));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x54));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_movw(&emu_bx, 0xA);
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_andw(&emu_dx, 0x3);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x04C1); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
	f__1A34_04C1_0006_0905();
}

/**
 * Decompiled function f__1A34_04C1_0006_0905()
 *
 * @name f__1A34_04C1_0006_0905
 * @implements 1A34:04C1:0006:0905 ()
 *
 * Called From: 1A34:04C1:004B:AB24
 * Called From: 1A34:04C1:005A:1EF0
 */
void f__1A34_04C1_0006_0905()
{
	emu_addw(&emu_sp, 0xA);
	f__1A34_00E6_000B_2449(); return;
}

/**
 * Decompiled function f__1A34_04C7_0017_222F()
 *
 * @name f__1A34_04C7_0017_222F
 * @implements 1A34:04C7:0017:222F ()
 *
 * Called From: 1A34:0402:000D:6192
 * Called From: 1A34:0474:005A:1EF0
 * Called From: 1A34:0474:007F:6425
 */
void f__1A34_04C7_0017_222F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x52));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_04D9_0005_D4FA(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x10);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_04DE_000E_A6CC(); return; }
	emu_movw(&emu_ax, 0x1);
	f__1A34_04E0_000C_A606(); return;
}

/**
 * Decompiled function f__1A34_04D9_0005_D4FA()
 *
 * @name f__1A34_04D9_0005_D4FA
 * @implements 1A34:04D9:0005:D4FA ()
 *
 * Called From: 1A34:04D1:0017:222F
 */
void f__1A34_04D9_0005_D4FA()
{
	emu_movw(&emu_ax, 0x1);
	f__1A34_04E0_000C_A606(); return;
}

/**
 * Decompiled function f__1A34_04DE_000E_A6CC()
 *
 * @name f__1A34_04DE_000E_A6CC
 * @implements 1A34:04DE:000E:A6CC ()
 *
 * Called From: 1A34:04D7:0017:222F
 */
void f__1A34_04DE_000E_A6CC()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x04EC; emu_last_cs = 0x1A34; emu_last_ip = 0x04E7; emu_last_length = 0x000E; emu_last_crc = 0xA6CC; emu_call(); return; }
	f__1A34_088A_002A_0918(); return;
}

/**
 * Decompiled function f__1A34_04E0_000C_A606()
 *
 * @name f__1A34_04E0_000C_A606
 * @implements 1A34:04E0:000C:A606 ()
 *
 * Called From: 1A34:04DC:0017:222F
 * Called From: 1A34:04DC:0005:D4FA
 */
void f__1A34_04E0_000C_A606()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__1A34_04EC_000E_19A4(); return; }
	/* Unresolved jump */ emu_ip = 0x088A; emu_last_cs = 0x1A34; emu_last_ip = 0x04E9; emu_last_length = 0x000C; emu_last_crc = 0xA606; emu_call();
}

/**
 * Decompiled function f__1A34_04EC_000E_19A4()
 *
 * @name f__1A34_04EC_000E_19A4
 * @implements 1A34:04EC:000E:19A4 ()
 *
 * Called From: 1A34:04E7:000C:A606
 */
void f__1A34_04EC_000E_19A4()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x2);
	if (!emu_flags.zf) { f__1A34_04FA_001A_5B9C(); return; }
	f__1A34_0670_000E_98BE(); return;
}

/**
 * Decompiled function f__1A34_04FA_001A_5B9C()
 *
 * @name f__1A34_04FA_001A_5B9C
 * @implements 1A34:04FA:001A:5B9C ()
 *
 * Called From: 1A34:04F5:000E:19A4
 */
void f__1A34_04FA_001A_5B9C()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x51));
	emu_movb(&emu_ah, 0x0);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__1A34_0514_0015_C50E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x14);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0514; emu_last_cs = 0x1A34; emu_last_ip = 0x050F; emu_last_length = 0x001A; emu_last_crc = 0x5B9C; emu_call(); return; }
	f__1A34_066D_0003_9C26(); return;
}

/**
 * Decompiled function f__1A34_0514_0015_C50E()
 *
 * @name f__1A34_0514_0015_C50E
 * @implements 1A34:0514:0015:C50E ()
 *
 * Called From: 1A34:0505:001A:5B9C
 */
void f__1A34_0514_0015_C50E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x12);
	if (!emu_flags.zf) { f__1A34_0586_000D_0128(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0529); emu_cs = 0x0F3F; emu_ip = 0x0076; emu_last_cs = 0x1A34; emu_last_ip = 0x0524; emu_last_length = 0x0015; emu_last_crc = 0xC50E; emu_call();
	/* Unresolved jump */ emu_ip = 0x0529; emu_last_cs = 0x1A34; emu_last_ip = 0x0529; emu_last_length = 0x0015; emu_last_crc = 0xC50E; emu_call();
}

/**
 * Decompiled function f__1A34_0586_000D_0128()
 *
 * @name f__1A34_0586_000D_0128
 * @implements 1A34:0586:000D:0128 ()
 *
 * Called From: 1A34:051C:0015:C50E
 */
void f__1A34_0586_000D_0128()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0xFFFF);
	if (!emu_flags.zf) { f__1A34_0593_001B_8929(); return; }
	/* Unresolved jump */ emu_ip = 0x065D; emu_last_cs = 0x1A34; emu_last_ip = 0x0590; emu_last_length = 0x000D; emu_last_crc = 0x0128; emu_call();
}

/**
 * Decompiled function f__1A34_0593_001B_8929()
 *
 * @name f__1A34_0593_001B_8929
 * @implements 1A34:0593:001B:8929 ()
 *
 * Called From: 1A34:058E:000D:0128
 */
void f__1A34_0593_001B_8929()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x800);
	if (emu_flags.zf) { f__1A34_0600_0020_17AB(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x05AE); emu_cs = 0x0F3F; emu_ip = 0x0086; emu_last_cs = 0x1A34; emu_last_ip = 0x05A9; emu_last_length = 0x001B; emu_last_crc = 0x8929; emu_call();
	/* Unresolved jump */ emu_ip = 0x05AE; emu_last_cs = 0x1A34; emu_last_ip = 0x05AE; emu_last_length = 0x001B; emu_last_crc = 0x8929; emu_call();
}

/**
 * Decompiled function f__1A34_0600_0020_17AB()
 *
 * @name f__1A34_0600_0020_17AB
 * @implements 1A34:0600:0020:17AB ()
 *
 * Called From: 1A34:059C:001B:8929
 */
void f__1A34_0600_0020_17AB()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x15);
	if (!emu_flags.zf) { f__1A34_0625_0035_322D(); return; }
	emu_movw(&emu_ax, 0x20);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x54));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0620); emu_cs = 0x06F7; emu_ip = 0x0402; emu_last_cs = 0x1A34; emu_last_ip = 0x061B; emu_last_length = 0x0020; emu_last_crc = 0x17AB; emu_call();
	/* Unresolved jump */ emu_ip = 0x0620; emu_last_cs = 0x1A34; emu_last_ip = 0x0620; emu_last_length = 0x0020; emu_last_crc = 0x17AB; emu_call();
}

/**
 * Decompiled function f__1A34_0625_0035_322D()
 *
 * @name f__1A34_0625_0035_322D
 * @implements 1A34:0625:0035:322D ()
 *
 * Called From: 1A34:0608:0020:17AB
 */
void f__1A34_0625_0035_322D()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4D));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x54));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_movw(&emu_bx, 0x14);
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_andw(&emu_dx, 0x3);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x065A); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
	f__1A34_065A_000E_C47C();
}

/**
 * Decompiled function f__1A34_065A_000E_C47C()
 *
 * @name f__1A34_065A_000E_C47C
 * @implements 1A34:065A:000E:C47C ()
 *
 * Called From: 1A34:065A:0035:322D
 */
void f__1A34_065A_000E_C47C()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0668); f__1A34_10EC_000E_A326();
	f__1A34_0668_0005_0ECD();
}

/**
 * Decompiled function f__1A34_0668_0005_0ECD()
 *
 * @name f__1A34_0668_0005_0ECD
 * @implements 1A34:0668:0005:0ECD ()
 *
 * Called From: 1A34:0668:000E:C47C
 */
void f__1A34_0668_0005_0ECD()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__1A34_08EF_0006_C896(); return;
}

/**
 * Decompiled function f__1A34_066D_0003_9C26()
 *
 * @name f__1A34_066D_0003_9C26
 * @implements 1A34:066D:0003:9C26 ()
 *
 * Called From: 1A34:0511:001A:5B9C
 */
void f__1A34_066D_0003_9C26()
{
	f__1A34_088A_002A_0918(); return;
}

/**
 * Decompiled function f__1A34_0670_000E_98BE()
 *
 * @name f__1A34_0670_000E_98BE
 * @implements 1A34:0670:000E:98BE ()
 *
 * Called From: 1A34:04F7:000E:19A4
 */
void f__1A34_0670_000E_98BE()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x40);
	if (!emu_flags.zf) { f__1A34_067E_005F_83A6(); return; }
	f__1A34_088A_002A_0918(); return;
}

/**
 * Decompiled function f__1A34_067E_005F_83A6()
 *
 * @name f__1A34_067E_005F_83A6
 * @implements 1A34:067E:005F:83A6 ()
 *
 * Called From: 1A34:0679:000E:98BE
 */
void f__1A34_067E_005F_83A6()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) { f__1A34_0692_004B_4188(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x5C));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x5A));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x60), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x5E), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x5C), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x5A), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4B), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x49), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x400);
	if (emu_flags.zf) { f__1A34_06F7_0020_BC73(); return; }
	emu_push(emu_cs); emu_push(0x06DD); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__1A34_06DD_0017_2B44();
}

/**
 * Decompiled function f__1A34_0692_004B_4188()
 *
 * @name f__1A34_0692_004B_4188
 * @implements 1A34:0692:004B:4188 ()
 *
 * Called From: 1A34:0684:005F:83A6
 */
void f__1A34_0692_004B_4188()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x5C));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x5A));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x60), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x5E), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x5C), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x5A), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4B), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x49), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x400);
	if (emu_flags.zf) { f__1A34_06F7_0020_BC73(); return; }
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x06DD); emu_cs = 0x2BB4; emu_ip = 0x0004; emu_last_cs = 0x1A34; emu_last_ip = 0x06D8; emu_last_length = 0x004B; emu_last_crc = 0x4188; emu_call();
	f__1A34_06DD_0017_2B44();
}

/**
 * Decompiled function f__1A34_06DD_0017_2B44()
 *
 * @name f__1A34_06DD_0017_2B44
 * @implements 1A34:06DD:0017:2B44 ()
 *
 * Called From: 1A34:06DD:005F:83A6
 */
void f__1A34_06DD_0017_2B44()
{
	emu_testw(&emu_ax, 0x3);
	if (!emu_flags.zf) { f__1A34_06F7_0020_BC73(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x06F4); f__1A34_0B71_0033_9787();
	f__1A34_06F4_0023_A822();
}

/**
 * Decompiled function f__1A34_06F4_0023_A822()
 *
 * @name f__1A34_06F4_0023_A822
 * @implements 1A34:06F4:0023:A822 ()
 *
 * Called From: 1A34:06F4:0017:2B44
 */
void f__1A34_06F4_0023_A822()
{
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_0774_000E_6A0F(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0759; emu_last_cs = 0x1A34; emu_last_ip = 0x0709; emu_last_length = 0x0023; emu_last_crc = 0xA822; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x56));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0717); emu_cs = 0x167E; emu_ip = 0x01BB; emu_last_cs = 0x1A34; emu_last_ip = 0x0712; emu_last_length = 0x0023; emu_last_crc = 0xA822; emu_call();
	/* Unresolved jump */ emu_ip = 0x0717; emu_last_cs = 0x1A34; emu_last_ip = 0x0717; emu_last_length = 0x0023; emu_last_crc = 0xA822; emu_call();
}

/**
 * Decompiled function f__1A34_06F7_0020_BC73()
 *
 * @name f__1A34_06F7_0020_BC73
 * @implements 1A34:06F7:0020:BC73 ()
 *
 * Called From: 1A34:06D6:005F:83A6
 * Called From: 1A34:06D6:004B:4188
 * Called From: 1A34:06E0:0017:2B44
 */
void f__1A34_06F7_0020_BC73()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_0774_000E_6A0F(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0759; emu_last_cs = 0x1A34; emu_last_ip = 0x0709; emu_last_length = 0x0020; emu_last_crc = 0xBC73; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x56));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0717); emu_cs = 0x167E; emu_ip = 0x01BB; emu_last_cs = 0x1A34; emu_last_ip = 0x0712; emu_last_length = 0x0020; emu_last_crc = 0xBC73; emu_call();
	/* Unresolved jump */ emu_ip = 0x0717; emu_last_cs = 0x1A34; emu_last_ip = 0x0717; emu_last_length = 0x0020; emu_last_crc = 0xBC73; emu_call();
}

/**
 * Decompiled function f__1A34_0774_000E_6A0F()
 *
 * @name f__1A34_0774_000E_6A0F
 * @implements 1A34:0774:000E:6A0F ()
 *
 * Called From: 1A34:06FF:0020:BC73
 * Called From: 1A34:06FF:0023:A822
 */
void f__1A34_0774_000E_6A0F()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0782); f__1A34_204C_0043_B1ED();
	f__1A34_0782_000D_9925();
}

/**
 * Decompiled function f__1A34_0782_000D_9925()
 *
 * @name f__1A34_0782_000D_9925
 * @implements 1A34:0782:000D:9925 ()
 *
 * Called From: 1A34:0782:000E:6A0F
 */
void f__1A34_0782_000D_9925()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x078F); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_078F_001A_619C();
}

/**
 * Decompiled function f__1A34_078F_001A_619C()
 *
 * @name f__1A34_078F_001A_619C
 * @implements 1A34:078F:001A:619C ()
 *
 * Called From: 1A34:078F:000D:9925
 */
void f__1A34_078F_001A_619C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x56));
	if (!emu_flags.zf) { f__1A34_07A3_0006_62E9(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x07A9); emu_cs = 0x34CD; ovl__34CD(30);
	f__1A34_07A9_0036_8D87();
}

/**
 * Decompiled function f__1A34_07A3_0006_62E9()
 *
 * @name f__1A34_07A3_0006_62E9
 * @implements 1A34:07A3:0006:62E9 ()
 *
 * Called From: 1A34:0798:001A:619C
 */
void f__1A34_07A3_0006_62E9()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x07A9); emu_cs = 0x34CD; ovl__34CD(30);
	f__1A34_07A9_0036_8D87();
}

/**
 * Decompiled function f__1A34_07A9_0036_8D87()
 *
 * @name f__1A34_07A9_0036_8D87
 * @implements 1A34:07A9:0036:8D87 ()
 *
 * Called From: 1A34:07A9:0006:62E9
 * Called From: 1A34:07A9:001A:619C
 */
void f__1A34_07A9_0036_8D87()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	emu_orw(&emu_ax, emu_dx);
	if (emu_flags.zf) { f__1A34_07E8_000D_998F(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x60), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x5E), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x5C), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x5A), emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x07DF); f__1A34_2C95_001B_89A2();
	f__1A34_07DF_0009_8575();
}

/**
 * Decompiled function f__1A34_07DF_0009_8575()
 *
 * @name f__1A34_07DF_0009_8575
 * @implements 1A34:07DF:0009:8575 ()
 *
 * Called From: 1A34:07DF:0036:8D87
 */
void f__1A34_07DF_0009_8575()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0x1);
	f__1A34_0021_0003_5914(); return;
}

/**
 * Decompiled function f__1A34_07E2_0006_C124()
 *
 * @name f__1A34_07E2_0006_C124
 * @implements 1A34:07E2:0006:C124 ()
 *
 * Called From: 1A34:00F3:0005:8CD6
 */
void f__1A34_07E2_0006_C124()
{
	emu_movw(&emu_ax, 0x1);
	f__1A34_0021_0003_5914(); return;
}

/**
 * Decompiled function f__1A34_07E8_000D_998F()
 *
 * @name f__1A34_07E8_000D_998F
 * @implements 1A34:07E8:000D:998F ()
 *
 * Called From: 1A34:07B2:0036:8D87
 */
void f__1A34_07E8_000D_998F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (!emu_flags.zf) { f__1A34_07F5_00BF_B2A7(); return; }
	f__1A34_088A_002A_0918(); return;
}

/**
 * Decompiled function f__1A34_07F5_00BF_B2A7()
 *
 * @name f__1A34_07F5_00BF_B2A7
 * @implements 1A34:07F5:00BF:B2A7 ()
 *
 * Called From: 1A34:07F0:000D:998F
 */
void f__1A34_07F5_00BF_B2A7()
{
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_andw(&emu_ax, 0x1FF);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39F4));
	if (!emu_flags.zf) { f__1A34_083E_0076_0B27(); return; }
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x323F));
	emu_andw(&emu_ax, 0x7FFF);
	emu_andw(&emu_ax, 0x1FF);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x1);
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_andw(&emu_ax, 0x1FF);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x39F4));
	emu_incw(&emu_dx);
	emu_cmpw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { f__1A34_088A_002A_0918(); return; }
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x323F));
	emu_andw(&emu_ax, 0x7FFF);
	emu_andw(&emu_ax, 0x1FF);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x52), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xA), emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x08B4); emu_cs = 0x34CD; emu_ip = 0x008E; emu_last_cs = 0x1A34; emu_last_ip = 0x08AF; emu_last_length = 0x00BF; emu_last_crc = 0xB2A7; emu_call();
	f__1A34_08B4_0014_A574();
}

/**
 * Decompiled function f__1A34_083E_0076_0B27()
 *
 * @name f__1A34_083E_0076_0B27
 * @implements 1A34:083E:0076:0B27 ()
 *
 * Called From: 1A34:080B:00BF:B2A7
 */
void f__1A34_083E_0076_0B27()
{
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_andw(&emu_ax, 0x1FF);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x39F4));
	emu_incw(&emu_dx);
	emu_cmpw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { f__1A34_088A_002A_0918(); return; }
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x323F));
	emu_andw(&emu_ax, 0x7FFF);
	emu_andw(&emu_ax, 0x1FF);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x52), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xA), emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x08B4); emu_cs = 0x34CD; emu_ip = 0x008E; emu_last_cs = 0x1A34; emu_last_ip = 0x08AF; emu_last_length = 0x0076; emu_last_crc = 0x0B27; emu_call();
	f__1A34_08B4_0014_A574();
}

/**
 * Decompiled function f__1A34_088A_002A_0918()
 *
 * @name f__1A34_088A_002A_0918
 * @implements 1A34:088A:002A:0918 ()
 *
 * Called From: 1A34:04E9:000E:A6CC
 * Called From: 1A34:066D:0003:9C26
 * Called From: 1A34:067B:000E:98BE
 * Called From: 1A34:07F2:000D:998F
 * Called From: 1A34:0857:0076:0B27
 * Called From: 1A34:0857:00BF:B2A7
 */
void f__1A34_088A_002A_0918()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x52), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xA), emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08B4); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_08B4_0014_A574();
}

/**
 * Decompiled function f__1A34_08B4_0014_A574()
 *
 * @name f__1A34_08B4_0014_A574
 * @implements 1A34:08B4:0014:A574 ()
 *
 * Called From: 1A34:08B4:002A:0918
 */
void f__1A34_08B4_0014_A574()
{
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	if (emu_flags.zf) { f__1A34_08D3_0011_09E4(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x08C8); emu_ip = 0x3623; emu_last_cs = 0x1A34; emu_last_ip = 0x08C5; emu_last_length = 0x0014; emu_last_crc = 0xA574; emu_call();
	/* Unresolved jump */ emu_ip = 0x08C8; emu_last_cs = 0x1A34; emu_last_ip = 0x08C8; emu_last_length = 0x0014; emu_last_crc = 0xA574; emu_call();
}

/**
 * Decompiled function f__1A34_08D3_0011_09E4()
 *
 * @name f__1A34_08D3_0011_09E4
 * @implements 1A34:08D3:0011:09E4 ()
 *
 * Called From: 1A34:08BB:0014:A574
 */
void f__1A34_08D3_0011_09E4()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (emu_flags.zf) { f__1A34_08EF_0006_C896(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x08E4); emu_Unit_GetHouseID();
	f__1A34_08E4_0009_EB67();
}

/**
 * Decompiled function f__1A34_08E4_0009_EB67()
 *
 * @name f__1A34_08E4_0009_EB67
 * @implements 1A34:08E4:0009:EB67 ()
 *
 * Called From: 1A34:08E4:0011:09E4
 */
void f__1A34_08E4_0009_EB67()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x08ED); emu_cs = 0x34CD; ovl__34CD(23);
	f__1A34_08ED_0008_9124();
}

/**
 * Decompiled function f__1A34_08ED_0008_9124()
 *
 * @name f__1A34_08ED_0008_9124
 * @implements 1A34:08ED:0008:9124 ()
 *
 * Called From: 1A34:08ED:0009:EB67
 */
void f__1A34_08ED_0008_9124()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__1A34_0021_0003_5914(); return;
}

/**
 * Decompiled function f__1A34_08EF_0006_C896()
 *
 * @name f__1A34_08EF_0006_C896
 * @implements 1A34:08EF:0006:C896 ()
 *
 * Called From: 1A34:066A:0005:0ECD
 * Called From: 1A34:08D7:0011:09E4
 */
void f__1A34_08EF_0006_C896()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__1A34_0021_0003_5914(); return;
}

/**
 * Decompiled function f__1A34_08F5_0006_F7CE()
 *
 * @name f__1A34_08F5_0006_F7CE
 * @implements 1A34:08F5:0006:F7CE ()
 *
 * Called From: 1A34:0021:0003:5914
 * Called From: 1A34:0021:0005:5880
 */
void f__1A34_08F5_0006_F7CE()
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
 * Decompiled function f__1A34_0B71_0033_9787()
 *
 * @name f__1A34_0B71_0033_9787
 * @implements 1A34:0B71:0033:9787 ()
 *
 * Called From: 06F7:00D2:0026:6889
 * Called From: 06F7:00D2:0035:5769
 * Called From: 1A34:06F1:0017:2B44
 */
void f__1A34_0B71_0033_9787()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_0BA4_000E_E505(); return; }
	/* Unresolved jump */ emu_ip = 0x0E23; emu_last_cs = 0x1A34; emu_last_ip = 0x0BA1; emu_last_length = 0x0033; emu_last_crc = 0x9787; emu_call();
}

/**
 * Decompiled function f__1A34_0BA4_000E_E505()
 *
 * @name f__1A34_0BA4_000E_E505
 * @implements 1A34:0BA4:000E:E505 ()
 *
 * Called From: 1A34:0B9F:0033:9787
 */
void f__1A34_0BA4_000E_E505()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if (!emu_flags.zf) { f__1A34_0BB2_0018_BF6D(); return; }
	f__1A34_0E23_0005_E392(); return;
}

/**
 * Decompiled function f__1A34_0BB2_0018_BF6D()
 *
 * @name f__1A34_0BB2_0018_BF6D
 * @implements 1A34:0BB2:0018:BF6D ()
 *
 * Called From: 1A34:0BAD:000E:E505
 */
void f__1A34_0BB2_0018_BF6D()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x8000);
	if (!emu_flags.zf) { f__1A34_0BCA_0021_5172(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_flags.zf) { f__1A34_0BCA_0021_5172(); return; }
	f__1A34_0E23_0005_E392(); return;
}

/**
 * Decompiled function f__1A34_0BCA_0021_5172()
 *
 * @name f__1A34_0BCA_0021_5172
 * @implements 1A34:0BCA:0021:5172 ()
 *
 * Called From: 1A34:0BBB:0018:BF6D
 * Called From: 1A34:0BC5:0018:BF6D
 */
void f__1A34_0BCA_0021_5172()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x0);
	if (emu_flags.zf) { f__1A34_0BD9_0012_EB24(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_0BEB_0017_66F8(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_di);
	f__1A34_0BF4_000E_A0B2(); return;
}

/**
 * Decompiled function f__1A34_0BD9_0012_EB24()
 *
 * @name f__1A34_0BD9_0012_EB24
 * @implements 1A34:0BD9:0012:EB24 ()
 *
 * Called From: 1A34:0BD2:0021:5172
 */
void f__1A34_0BD9_0012_EB24()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_0BEB_0017_66F8(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_di);
	f__1A34_0BF4_000E_A0B2(); return;
}

/**
 * Decompiled function f__1A34_0BEB_0017_66F8()
 *
 * @name f__1A34_0BEB_0017_66F8
 * @implements 1A34:0BEB:0017:66F8 ()
 *
 * Called From: 1A34:0BE0:0021:5172
 * Called From: 1A34:0BE0:0012:EB24
 */
void f__1A34_0BEB_0017_66F8()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C02); f__1A34_193F_0013_FA4D();
	f__1A34_0C02_0010_350C();
}

/**
 * Decompiled function f__1A34_0BF4_000E_A0B2()
 *
 * @name f__1A34_0BF4_000E_A0B2
 * @implements 1A34:0BF4:000E:A0B2 ()
 *
 * Called From: 1A34:0BE9:0021:5172
 * Called From: 1A34:0BE9:0012:EB24
 */
void f__1A34_0BF4_000E_A0B2()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C02); f__1A34_193F_0013_FA4D();
	f__1A34_0C02_0010_350C();
}

/**
 * Decompiled function f__1A34_0C02_0010_350C()
 *
 * @name f__1A34_0C02_0010_350C
 * @implements 1A34:0C02:0010:350C ()
 *
 * Called From: 1A34:0C02:000E:A0B2
 * Called From: 1A34:0C02:0017:66F8
 */
void f__1A34_0C02_0010_350C()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x0);
	if (emu_flags.zf) { f__1A34_0C12_000B_7668(); return; }
	f__1A34_0CC8_0020_EC24(); return;
}

/**
 * Decompiled function f__1A34_0C12_000B_7668()
 *
 * @name f__1A34_0C12_000B_7668
 * @implements 1A34:0C12:000B:7668 ()
 *
 * Called From: 1A34:0C0D:0010:350C
 */
void f__1A34_0C12_000B_7668()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C1D); f__1A34_379B_0015_B07B();
	f__1A34_0C1D_0029_43CA();
}

/**
 * Decompiled function f__1A34_0C1D_0029_43CA()
 *
 * @name f__1A34_0C1D_0029_43CA
 * @implements 1A34:0C1D:0029:43CA ()
 *
 * Called From: 1A34:0C1D:000B:7668
 */
void f__1A34_0C1D_0029_43CA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (!emu_flags.zf) { f__1A34_0C50_0013_038D(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x58));
	emu_movws(&emu_ax, emu_al);
	emu_movb(&emu_cl, 0x5);
	emu_sarw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0C46); emu_cs = 0x0F3F; emu_ip = 0x0086; emu_last_cs = 0x1A34; emu_last_ip = 0x0C41; emu_last_length = 0x0029; emu_last_crc = 0x43CA; emu_call();
	/* Unresolved jump */ emu_ip = 0x0C46; emu_last_cs = 0x1A34; emu_last_ip = 0x0C46; emu_last_length = 0x0029; emu_last_crc = 0x43CA; emu_call();
}

/**
 * Decompiled function f__1A34_0C50_0013_038D()
 *
 * @name f__1A34_0C50_0013_038D
 * @implements 1A34:0C50:0013:038D ()
 *
 * Called From: 1A34:0C27:0029:43CA
 */
void f__1A34_0C50_0013_038D()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_0C66_001C_BBBA(); return; }
	emu_movw(&emu_ax, 0x14);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0C63); emu_cs = 0x3483; emu_ip = 0x002A; emu_last_cs = 0x1A34; emu_last_ip = 0x0C5E; emu_last_length = 0x0013; emu_last_crc = 0x038D; emu_call();
	/* Unresolved jump */ emu_ip = 0x0C63; emu_last_cs = 0x1A34; emu_last_ip = 0x0C63; emu_last_length = 0x0013; emu_last_crc = 0x038D; emu_call();
}

/**
 * Decompiled function f__1A34_0C66_001C_BBBA()
 *
 * @name f__1A34_0C66_001C_BBBA
 * @implements 1A34:0C66:001C:BBBA ()
 *
 * Called From: 1A34:0C58:0013:038D
 */
void f__1A34_0C66_001C_BBBA()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x200);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0CAD; emu_last_cs = 0x1A34; emu_last_ip = 0x0C6F; emu_last_length = 0x001C; emu_last_crc = 0xBBBA; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { f__1A34_0CAD_000F_8015(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C82); emu_Unit_GetHouseID();
	f__1A34_0C82_001A_65BC();
}

/**
 * Decompiled function f__1A34_0C82_001A_65BC()
 *
 * @name f__1A34_0C82_001A_65BC
 * @implements 1A34:0C82:001A:65BC ()
 *
 * Called From: 1A34:0C82:001C:BBBA
 */
void f__1A34_0C82_001A_65BC()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_flags.zf) { f__1A34_0C91_000B_3756(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x3);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_0CA3_0009_33AF(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x0C9C); emu_ip = 0x3623; emu_last_cs = 0x1A34; emu_last_ip = 0x0C99; emu_last_length = 0x001A; emu_last_crc = 0x65BC; emu_call();
	f__1A34_0C9C_0007_4521();
}

/**
 * Decompiled function f__1A34_0C91_000B_3756()
 *
 * @name f__1A34_0C91_000B_3756
 * @implements 1A34:0C91:000B:3756 ()
 *
 * Called From: 1A34:0C88:001A:65BC
 */
void f__1A34_0C91_000B_3756()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C9C); emu_Unit_GetHouseID();
	f__1A34_0C9C_0007_4521();
}

/**
 * Decompiled function f__1A34_0C9C_0007_4521()
 *
 * @name f__1A34_0C9C_0007_4521
 * @implements 1A34:0C9C:0007:4521 ()
 *
 * Called From: 1A34:0C9C:000B:3756
 */
void f__1A34_0C9C_0007_4521()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0xE);
	f__1A34_0CA6_0006_3EF3(); return;
}

/**
 * Decompiled function f__1A34_0CA3_0009_33AF()
 *
 * @name f__1A34_0CA3_0009_33AF
 * @implements 1A34:0CA3:0009:33AF ()
 *
 * Called From: 1A34:0C8F:001A:65BC
 */
void f__1A34_0CA3_0009_33AF()
{
	emu_movw(&emu_ax, 0xD);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CAC); emu_cs = 0x3483; ovl__3483(2);
	f__1A34_0CAC_0010_804C();
}

/**
 * Decompiled function f__1A34_0CA6_0006_3EF3()
 *
 * @name f__1A34_0CA6_0006_3EF3
 * @implements 1A34:0CA6:0006:3EF3 ()
 *
 * Called From: 1A34:0CA1:0007:4521
 */
void f__1A34_0CA6_0006_3EF3()
{
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CAC); emu_cs = 0x3483; ovl__3483(2);
	f__1A34_0CAC_0010_804C();
}

/**
 * Decompiled function f__1A34_0CAC_0010_804C()
 *
 * @name f__1A34_0CAC_0010_804C
 * @implements 1A34:0CAC:0010:804C ()
 *
 * Called From: 1A34:0CAC:0009:33AF
 * Called From: 1A34:0CAC:0006:3EF3
 */
void f__1A34_0CAC_0010_804C()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0xA);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0CBC); emu_cs = 0x176C; f__176C_000E_000E_633D();
	f__1A34_0CBC_0009_79FF();
}

/**
 * Decompiled function f__1A34_0CAD_000F_8015()
 *
 * @name f__1A34_0CAD_000F_8015
 * @implements 1A34:0CAD:000F:8015 ()
 *
 * Called From: 1A34:0C75:001C:BBBA
 */
void f__1A34_0CAD_000F_8015()
{
	emu_movw(&emu_ax, 0xA);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0CBC); emu_cs = 0x176C; f__176C_000E_000E_633D();
	f__1A34_0CBC_0009_79FF();
}

/**
 * Decompiled function f__1A34_0CBC_0009_79FF()
 *
 * @name f__1A34_0CBC_0009_79FF
 * @implements 1A34:0CBC:0009:79FF ()
 *
 * Called From: 1A34:0CBC:0010:804C
 * Called From: 1A34:0CBC:000F:8015
 */
void f__1A34_0CBC_0009_79FF()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x1);
	f__1A34_0E28_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_0CC2_0003_DDB8()
 *
 * @name f__1A34_0CC2_0003_DDB8
 * @implements 1A34:0CC2:0003:DDB8 ()
 *
 * Called From: 1A34:0E25:0005:E392
 * Called From: 1A34:0E25:003C:0FC2
 * Called From: 1A34:0E25:001E:5369
 */
void f__1A34_0CC2_0003_DDB8()
{
	f__1A34_0E28_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_0CC8_0020_EC24()
 *
 * @name f__1A34_0CC8_0020_EC24
 * @implements 1A34:0CC8:0020:EC24 ()
 *
 * Called From: 1A34:0C0F:0010:350C
 */
void f__1A34_0CC8_0020_EC24()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { f__1A34_0CF4_000B_F77E(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_cmpw(&emu_di, 0x19);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0CE8; emu_last_cs = 0x1A34; emu_last_ip = 0x0CE2; emu_last_length = 0x0020; emu_last_crc = 0xEC24; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x0CEB; emu_last_cs = 0x1A34; emu_last_ip = 0x0CE6; emu_last_length = 0x0020; emu_last_crc = 0xEC24; emu_call();
}

/**
 * Decompiled function f__1A34_0CF4_000B_F77E()
 *
 * @name f__1A34_0CF4_000B_F77E
 * @implements 1A34:0CF4:000B:F77E ()
 *
 * Called From: 1A34:0CCC:0020:EC24
 */
void f__1A34_0CF4_000B_F77E()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0CFF); emu_Unit_GetHouseID();
	f__1A34_0CFF_002A_8079();
}

/**
 * Decompiled function f__1A34_0CFF_002A_8079()
 *
 * @name f__1A34_0CFF_002A_8079
 * @implements 1A34:0CFF:002A:8079 ()
 *
 * Called From: 1A34:0CFF:000B:F77E
 */
void f__1A34_0CFF_002A_8079()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_flags.zf) { f__1A34_0D2C_0017_4BB9(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x8);
	if (!emu_flags.zf) { f__1A34_0D2C_0017_4BB9(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D2C; emu_last_cs = 0x1A34; emu_last_ip = 0x0D19; emu_last_length = 0x002A; emu_last_crc = 0x8079; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0D29); emu_cs = 0x176C; emu_ip = 0x000E; emu_last_cs = 0x1A34; emu_last_ip = 0x0D24; emu_last_length = 0x002A; emu_last_crc = 0x8079; emu_call();
	/* Unresolved jump */ emu_ip = 0x0D29; emu_last_cs = 0x1A34; emu_last_ip = 0x0D29; emu_last_length = 0x002A; emu_last_crc = 0x8079; emu_call();
}

/**
 * Decompiled function f__1A34_0D2C_0017_4BB9()
 *
 * @name f__1A34_0D2C_0017_4BB9
 * @implements 1A34:0D2C:0017:4BB9 ()
 *
 * Called From: 1A34:0D05:002A:8079
 * Called From: 1A34:0D0F:002A:8079
 */
void f__1A34_0D2C_0017_4BB9()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_si, 0x10));
	emu_sarw(&emu_ax, 0x1);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_0D43_0019_C8A8(); return; }
	f__1A34_0E23_0005_E392(); return;
}

/**
 * Decompiled function f__1A34_0D43_0019_C8A8()
 *
 * @name f__1A34_0D43_0019_C8A8
 * @implements 1A34:0D43:0019:C8A8 ()
 *
 * Called From: 1A34:0D3E:0017:4BB9
 */
void f__1A34_0D43_0019_C8A8()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (!emu_flags.zf) { f__1A34_0D5F_0059_EBA0(); return; }
	emu_movw(&emu_ax, 0xA);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0D5C); emu_cs = 0x176C; f__176C_000E_000E_633D();
	f__1A34_0D5C_005C_6208();
}

/**
 * Decompiled function f__1A34_0D5C_005C_6208()
 *
 * @name f__1A34_0D5C_005C_6208
 * @implements 1A34:0D5C:005C:6208 ()
 *
 * Called From: 1A34:0D5C:0019:C8A8
 */
void f__1A34_0D5C_005C_6208()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x3);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D73; emu_last_cs = 0x1A34; emu_last_ip = 0x0D67; emu_last_length = 0x005C; emu_last_crc = 0x6208; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x2);
	if (!emu_flags.zf) { f__1A34_0DEC_003C_0FC2(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_addb(&emu_al, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x2), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0DB8); emu_cs = 0x34CD; emu_ip = 0x008E; emu_last_cs = 0x1A34; emu_last_ip = 0x0DB3; emu_last_length = 0x005C; emu_last_crc = 0x6208; emu_call();
	f__1A34_0DB8_0008_CBF5();
}

/**
 * Decompiled function f__1A34_0D5F_0059_EBA0()
 *
 * @name f__1A34_0D5F_0059_EBA0
 * @implements 1A34:0D5F:0059:EBA0 ()
 *
 * Called From: 1A34:0D4B:0019:C8A8
 */
void f__1A34_0D5F_0059_EBA0()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x3);
	if (emu_flags.zf) { f__1A34_0D73_0045_61A0(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x2);
	if (!emu_flags.zf) { f__1A34_0DEC_003C_0FC2(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_addb(&emu_al, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x2), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DB8); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_0DB8_0008_CBF5();
}

/**
 * Decompiled function f__1A34_0D73_0045_61A0()
 *
 * @name f__1A34_0D73_0045_61A0
 * @implements 1A34:0D73:0045:61A0 ()
 *
 * Called From: 1A34:0D67:0059:EBA0
 */
void f__1A34_0D73_0045_61A0()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_addb(&emu_al, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x2), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DB8); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_0DB8_0008_CBF5();
}

/**
 * Decompiled function f__1A34_0DB8_0008_CBF5()
 *
 * @name f__1A34_0DB8_0008_CBF5
 * @implements 1A34:0DB8:0008:CBF5 ()
 *
 * Called From: 1A34:0DB8:0059:EBA0
 * Called From: 1A34:0DB8:0045:61A0
 */
void f__1A34_0DB8_0008_CBF5()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x0DC0); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__1A34_0DC0_0029_C1D4();
}

/**
 * Decompiled function f__1A34_0DC0_0029_C1D4()
 *
 * @name f__1A34_0DC0_0029_C1D4
 * @implements 1A34:0DC0:0029:C1D4 ()
 *
 * Called From: 1A34:0DC0:0008:CBF5
 */
void f__1A34_0DC0_0029_C1D4()
{
	emu_andw(&emu_ax, 0xFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x1E);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_pop(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x37FC));
	if (!emu_flags.cf) { f__1A34_0DEC_003C_0FC2(); return; }
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0DE9); emu_cs = 0x176C; f__176C_000E_000E_633D();
	f__1A34_0DE9_003F_3AD3();
}

/**
 * Decompiled function f__1A34_0DE9_003F_3AD3()
 *
 * @name f__1A34_0DE9_003F_3AD3
 * @implements 1A34:0DE9:003F:3AD3 ()
 *
 * Called From: 1A34:0DE9:0029:C1D4
 */
void f__1A34_0DE9_003F_3AD3()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E0A; emu_last_cs = 0x1A34; emu_last_ip = 0x0DF4; emu_last_length = 0x003F; emu_last_crc = 0x3AD3; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E0A; emu_last_cs = 0x1A34; emu_last_ip = 0x0DFE; emu_last_length = 0x003F; emu_last_crc = 0x3AD3; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x3);
	if (!emu_flags.zf) { f__1A34_0E23_0005_E392(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x6D), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x70), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x0CC2; emu_last_cs = 0x1A34; emu_last_ip = 0x0E25; emu_last_length = 0x003F; emu_last_crc = 0x3AD3; emu_call();
}

/**
 * Decompiled function f__1A34_0DEC_003C_0FC2()
 *
 * @name f__1A34_0DEC_003C_0FC2
 * @implements 1A34:0DEC:003C:0FC2 ()
 *
 * Called From: 1A34:0D71:0059:EBA0
 * Called From: 1A34:0D71:005C:6208
 * Called From: 1A34:0DD8:0029:C1D4
 */
void f__1A34_0DEC_003C_0FC2()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x2);
	if (emu_flags.zf) { f__1A34_0E0A_001E_5369(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x1);
	if (emu_flags.zf) { f__1A34_0E0A_001E_5369(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x3);
	if (!emu_flags.zf) { f__1A34_0E23_0005_E392(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x6D), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x70), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_0CC2_0003_DDB8(); return;
}

/**
 * Decompiled function f__1A34_0E0A_001E_5369()
 *
 * @name f__1A34_0E0A_001E_5369
 * @implements 1A34:0E0A:001E:5369 ()
 *
 * Called From: 1A34:0DF4:003C:0FC2
 * Called From: 1A34:0DFE:003C:0FC2
 */
void f__1A34_0E0A_001E_5369()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x6D), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x70), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_0CC2_0003_DDB8(); return;
}

/**
 * Decompiled function f__1A34_0E23_0005_E392()
 *
 * @name f__1A34_0E23_0005_E392
 * @implements 1A34:0E23:0005:E392 ()
 *
 * Called From: 1A34:0BAF:000E:E505
 * Called From: 1A34:0BC7:0018:BF6D
 * Called From: 1A34:0D40:0017:4BB9
 * Called From: 1A34:0E08:003C:0FC2
 * Called From: 1A34:0E08:003F:3AD3
 */
void f__1A34_0E23_0005_E392()
{
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_0CC2_0003_DDB8(); return;
}

/**
 * Decompiled function f__1A34_0E28_0006_F7CE()
 *
 * @name f__1A34_0E28_0006_F7CE
 * @implements 1A34:0E28:0006:F7CE ()
 *
 * Called From: 1A34:0CC2:0003:DDB8
 * Called From: 1A34:0CC2:0009:79FF
 */
void f__1A34_0E28_0006_F7CE()
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
 * Decompiled function f__1A34_0E2E_0015_7E65()
 *
 * @name f__1A34_0E2E_0015_7E65
 * @implements 1A34:0E2E:0015:7E65 ()
 *
 * Called From: 176C:2822:0017:D1B6
 * Called From: 1A34:0AD4:000B:CA1A
 * Called From: 1A34:29CA:0013:0581
 * Called From: 1A34:29CA:0015:974C
 */
void f__1A34_0E2E_0015_7E65()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_0E43_0028_1D74(); return; }
	emu_movw(&emu_ax, 0x1);
	/* Unresolved jump */ emu_ip = 0x0F43; emu_last_cs = 0x1A34; emu_last_ip = 0x0E40; emu_last_length = 0x0015; emu_last_crc = 0x7E65; emu_call();
}

/**
 * Decompiled function f__1A34_0E3D_0006_FDAA()
 *
 * @name f__1A34_0E3D_0006_FDAA
 * @implements 1A34:0E3D:0006:FDAA ()
 *
 * Called From: 1A34:0E9F:002C:EBA6
 * Called From: 1A34:0F2B:0003:A2A3
 */
void f__1A34_0E3D_0006_FDAA()
{
	emu_movw(&emu_ax, 0x1);
	f__1A34_0F43_0005_8BCF(); return;
}

/**
 * Decompiled function f__1A34_0E40_0003_1DA0()
 *
 * @name f__1A34_0E40_0003_1DA0
 * @implements 1A34:0E40:0003:1DA0 ()
 *
 * Called From: 1A34:0F40:0005:238B
 */
void f__1A34_0E40_0003_1DA0()
{
	f__1A34_0F43_0005_8BCF(); return;
}

/**
 * Decompiled function f__1A34_0E43_0028_1D74()
 *
 * @name f__1A34_0E43_0028_1D74
 * @implements 1A34:0E43:0028:1D74 ()
 *
 * Called From: 1A34:0E3B:0015:7E65
 */
void f__1A34_0E43_0028_1D74()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0E6B); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__1A34_0E6B_000A_0A68();
}

/**
 * Decompiled function f__1A34_0E6B_000A_0A68()
 *
 * @name f__1A34_0E6B_000A_0A68
 * @implements 1A34:0E6B:000A:0A68 ()
 *
 * Called From: 1A34:0E6B:0028:1D74
 */
void f__1A34_0E6B_000A_0A68()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0E75); emu_cs = 0x34CD; ovl__34CD(13);
	f__1A34_0E75_002C_EBA6();
}

/**
 * Decompiled function f__1A34_0E75_002C_EBA6()
 *
 * @name f__1A34_0E75_002C_EBA6
 * @implements 1A34:0E75:002C:EBA6 ()
 *
 * Called From: 1A34:0E75:000A:0A68
 */
void f__1A34_0E75_002C_EBA6()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_dx, 0x1C);
	emu_imuluw(&emu_ax, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_pop(&emu_ax);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x3C));
	emu_movw(&emu_bx, emu_ax);
	emu_cmpb(&emu_get_memory8(emu_ds, emu_bx, 0x3A42), 0x0);
	if (!emu_flags.zf) { f__1A34_0EA1_0018_9569(); return; }
	f__1A34_0E3D_0006_FDAA(); return;
}

/**
 * Decompiled function f__1A34_0EA1_0018_9569()
 *
 * @name f__1A34_0EA1_0018_9569
 * @implements 1A34:0EA1:0018:9569 ()
 *
 * Called From: 1A34:0E9D:002C:EBA6
 */
void f__1A34_0EA1_0018_9569()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EB5; emu_last_cs = 0x1A34; emu_last_ip = 0x0EA9; emu_last_length = 0x0018; emu_last_crc = 0x9569; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (!emu_flags.zf) { f__1A34_0EB9_0006_26E8(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x0E40; emu_last_cs = 0x1A34; emu_last_ip = 0x0EB7; emu_last_length = 0x0018; emu_last_crc = 0x9569; emu_call();
}

/**
 * Decompiled function f__1A34_0EB9_0006_26E8()
 *
 * @name f__1A34_0EB9_0006_26E8
 * @implements 1A34:0EB9:0006:26E8 ()
 *
 * Called From: 1A34:0EB3:0018:9569
 */
void f__1A34_0EB9_0006_26E8()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0EBF); emu_cs = 0x34CD; ovl__34CD(26);
	f__1A34_0EBF_002A_B01D();
}

/**
 * Decompiled function f__1A34_0EBF_002A_B01D()
 *
 * @name f__1A34_0EBF_002A_B01D
 * @implements 1A34:0EBF:002A:B01D ()
 *
 * Called From: 1A34:0EBF:0006:26E8
 */
void f__1A34_0EBF_002A_B01D()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_0F2E_0006_66E9(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EDE; emu_last_cs = 0x1A34; emu_last_ip = 0x0ED7; emu_last_length = 0x002A; emu_last_crc = 0xB01D; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F2E; emu_last_cs = 0x1A34; emu_last_ip = 0x0EDC; emu_last_length = 0x002A; emu_last_crc = 0xB01D; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0EE9); emu_Unit_GetHouseID();
	f__1A34_0EE9_000E_D462();
}

/**
 * Decompiled function f__1A34_0EE9_000E_D462()
 *
 * @name f__1A34_0EE9_000E_D462
 * @implements 1A34:0EE9:000E:D462 ()
 *
 * Called From: 1A34:0EE9:002A:B01D
 */
void f__1A34_0EE9_000E_D462()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0EF7); emu_Unit_GetHouseID();
	f__1A34_0EF7_0008_9688();
}

/**
 * Decompiled function f__1A34_0EF7_0008_9688()
 *
 * @name f__1A34_0EF7_0008_9688
 * @implements 1A34:0EF7:0008:9688 ()
 *
 * Called From: 1A34:0EF7:000E:D462
 */
void f__1A34_0EF7_0008_9688()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EFF); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	f__1A34_0EFF_002F_81D1();
}

/**
 * Decompiled function f__1A34_0EFF_002F_81D1()
 *
 * @name f__1A34_0EFF_002F_81D1
 * @implements 1A34:0EFF:002F:81D1 ()
 *
 * Called From: 1A34:0EFF:0008:9688
 */
void f__1A34_0EFF_002F_81D1()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1A34_0F2B_0003_A2A3(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F2B; emu_last_cs = 0x1A34; emu_last_ip = 0x0F0D; emu_last_length = 0x002F; emu_last_crc = 0x81D1; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F2E; emu_last_cs = 0x1A34; emu_last_ip = 0x0F29; emu_last_length = 0x002F; emu_last_crc = 0x81D1; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0E3D; emu_last_cs = 0x1A34; emu_last_ip = 0x0F2B; emu_last_length = 0x002F; emu_last_crc = 0x81D1; emu_call();
}

/**
 * Decompiled function f__1A34_0F2B_0003_A2A3()
 *
 * @name f__1A34_0F2B_0003_A2A3
 * @implements 1A34:0F2B:0003:A2A3 ()
 *
 * Called From: 1A34:0F03:002F:81D1
 */
void f__1A34_0F2B_0003_A2A3()
{
	f__1A34_0E3D_0006_FDAA(); return;
}

/**
 * Decompiled function f__1A34_0F2E_0006_66E9()
 *
 * @name f__1A34_0F2E_0006_66E9
 * @implements 1A34:0F2E:0006:66E9 ()
 *
 * Called From: 1A34:0ECC:002A:B01D
 */
void f__1A34_0F2E_0006_66E9()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0F34); emu_cs = 0x34CD; ovl__34CD(30);
	f__1A34_0F34_000A_9457();
}

/**
 * Decompiled function f__1A34_0F34_000A_9457()
 *
 * @name f__1A34_0F34_000A_9457
 * @implements 1A34:0F34:000A:9457 ()
 *
 * Called From: 1A34:0F34:0006:66E9
 */
void f__1A34_0F34_000A_9457()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_flags.zf) { f__1A34_0F3E_0005_238B(); return; }
	emu_movw(&emu_ax, 0x1);
	/* Unresolved jump */ emu_ip = 0x0F40; emu_last_cs = 0x1A34; emu_last_ip = 0x0F3C; emu_last_length = 0x000A; emu_last_crc = 0x9457; emu_call();
}

/**
 * Decompiled function f__1A34_0F3E_0005_238B()
 *
 * @name f__1A34_0F3E_0005_238B
 * @implements 1A34:0F3E:0005:238B ()
 *
 * Called From: 1A34:0F37:000A:9457
 */
void f__1A34_0F3E_0005_238B()
{
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_0E40_0003_1DA0(); return;
}

/**
 * Decompiled function f__1A34_0F43_0005_8BCF()
 *
 * @name f__1A34_0F43_0005_8BCF
 * @implements 1A34:0F43:0005:8BCF ()
 *
 * Called From: 1A34:0E40:0003:1DA0
 * Called From: 1A34:0E40:0006:FDAA
 */
void f__1A34_0F43_0005_8BCF()
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
 * Decompiled function f__1A34_0F48_0018_0DB8()
 *
 * @name f__1A34_0F48_0018_0DB8
 * @implements 1A34:0F48:0018:0DB8 ()
 *
 * Called From: 0F78:0403:0025:77BC
 * Called From: 0F78:041B:0014:EE7E
 * Called From: 1A34:01E1:0052:7BDF
 * Called From: 1A34:1128:001E:722B
 * Called From: 1A34:2CC9:001C:F555
 * Called From: 1A34:3814:000A:AA19
 * Called From: B4E9:0299:000B:C287
 */
void f__1A34_0F48_0018_0DB8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (!emu_flags.zf) { f__1A34_0F60_006D_240C(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	if (!emu_flags.zf) { f__1A34_0F60_006D_240C(); return; }
	f__1A34_10EA_0002_2597(); return;
}

/**
 * Decompiled function f__1A34_0F60_006D_240C()
 *
 * @name f__1A34_0F60_006D_240C
 * @implements 1A34:0F60:006D:240C ()
 *
 * Called From: 1A34:0F55:0018:0DB8
 * Called From: 1A34:0F5B:0018:0DB8
 */
void f__1A34_0F60_006D_240C()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__1A34_0F84_0049_4084(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if (!emu_flags.zf) { f__1A34_0F84_0049_4084(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F84; emu_last_cs = 0x1A34; emu_last_ip = 0x0F78; emu_last_length = 0x006D; emu_last_crc = 0x240C; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0FB3; emu_last_cs = 0x1A34; emu_last_ip = 0x0F8A; emu_last_length = 0x006D; emu_last_crc = 0x240C; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x9));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_dx, 0x1);
	emu_movb(&emu_cl, emu_get_memory8(emu_ds, 0x00, 0x3A38));
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0FB3; emu_last_cs = 0x1A34; emu_last_ip = 0x0FA0; emu_last_length = 0x006D; emu_last_crc = 0x240C; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0FB3; emu_last_cs = 0x1A34; emu_last_ip = 0x0FA7; emu_last_length = 0x006D; emu_last_crc = 0x240C; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0FD0; emu_last_cs = 0x1A34; emu_last_ip = 0x0FBA; emu_last_length = 0x006D; emu_last_crc = 0x240C; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0FCD); emu_cs = 0x34CD; emu_ip = 0x008E; emu_last_cs = 0x1A34; emu_last_ip = 0x0FC8; emu_last_length = 0x006D; emu_last_crc = 0x240C; emu_call();
	f__1A34_0FCD_000E_16C2();
}

/**
 * Decompiled function f__1A34_0F84_0049_4084()
 *
 * @name f__1A34_0F84_0049_4084
 * @implements 1A34:0F84:0049:4084 ()
 *
 * Called From: 1A34:0F66:006D:240C
 * Called From: 1A34:0F71:006D:240C
 */
void f__1A34_0F84_0049_4084()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__1A34_0FB3_001A_8ABB(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x9));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_dx, 0x1);
	emu_movb(&emu_cl, emu_get_memory8(emu_ds, 0x00, 0x3A38));
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { f__1A34_0FB3_001A_8ABB(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0FB3; emu_last_cs = 0x1A34; emu_last_ip = 0x0FA7; emu_last_length = 0x0049; emu_last_crc = 0x4084; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_flags.zf) { f__1A34_0FD0_000B_34A8(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FCD); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_0FCD_000E_16C2();
}

/**
 * Decompiled function f__1A34_0FB3_001A_8ABB()
 *
 * @name f__1A34_0FB3_001A_8ABB
 * @implements 1A34:0FB3:001A:8ABB ()
 *
 * Called From: 1A34:0F8A:0049:4084
 * Called From: 1A34:0FA0:0049:4084
 */
void f__1A34_0FB3_001A_8ABB()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_flags.zf) { f__1A34_0FD0_000B_34A8(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FCD); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_0FCD_000E_16C2();
}

/**
 * Decompiled function f__1A34_0FCD_000E_16C2()
 *
 * @name f__1A34_0FCD_000E_16C2
 * @implements 1A34:0FCD:000E:16C2 ()
 *
 * Called From: 1A34:0FCD:001A:8ABB
 * Called From: 1A34:0FCD:0049:4084
 */
void f__1A34_0FCD_000E_16C2()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_0FDB_000B_B0F8(); return; }
	f__1A34_10D4_0015_80BA(); return;
}

/**
 * Decompiled function f__1A34_0FD0_000B_34A8()
 *
 * @name f__1A34_0FD0_000B_34A8
 * @implements 1A34:0FD0:000B:34A8 ()
 *
 * Called From: 1A34:0FBA:001A:8ABB
 * Called From: 1A34:0FBA:0049:4084
 */
void f__1A34_0FD0_000B_34A8()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_0FDB_000B_B0F8(); return; }
	f__1A34_10D4_0015_80BA(); return;
}

/**
 * Decompiled function f__1A34_0FDB_000B_B0F8()
 *
 * @name f__1A34_0FDB_000B_B0F8
 * @implements 1A34:0FDB:000B:B0F8 ()
 *
 * Called From: 1A34:0FD6:000B:34A8
 * Called From: 1A34:0FD6:000E:16C2
 */
void f__1A34_0FDB_000B_B0F8()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0FE6); emu_Unit_GetHouseID();
	f__1A34_0FE6_0029_2E9A();
}

/**
 * Decompiled function f__1A34_0FE6_0029_2E9A()
 *
 * @name f__1A34_0FE6_0029_2E9A
 * @implements 1A34:0FE6:0029:2E9A ()
 *
 * Called From: 1A34:0FE6:000B:B0F8
 */
void f__1A34_0FE6_0029_2E9A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (!emu_flags.zf) { f__1A34_1052_0025_D89D(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (!emu_flags.zf) { f__1A34_100F_0009_1DAE(); return; }
	emu_movw(&emu_ax, 0x12);
	f__1A34_1012_0006_0EF2(); return;
}

/**
 * Decompiled function f__1A34_100F_0009_1DAE()
 *
 * @name f__1A34_100F_0009_1DAE
 * @implements 1A34:100F:0009:1DAE ()
 *
 * Called From: 1A34:1008:0029:2E9A
 */
void f__1A34_100F_0009_1DAE()
{
	emu_movw(&emu_ax, 0x13);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1018); emu_cs = 0x3483; ovl__3483(5);
	f__1A34_1018_0038_DAAE();
}

/**
 * Decompiled function f__1A34_1012_0006_0EF2()
 *
 * @name f__1A34_1012_0006_0EF2
 * @implements 1A34:1012:0006:0EF2 ()
 *
 * Called From: 1A34:100D:0029:2E9A
 */
void f__1A34_1012_0006_0EF2()
{
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1018); emu_cs = 0x3483; ovl__3483(5);
	f__1A34_1018_0038_DAAE();
}

/**
 * Decompiled function f__1A34_1018_0038_DAAE()
 *
 * @name f__1A34_1018_0038_DAAE
 * @implements 1A34:1018:0038:DAAE ()
 *
 * Called From: 1A34:1018:0006:0EF2
 * Called From: 1A34:1018:0009:1DAE
 */
void f__1A34_1018_0038_DAAE()
{
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2B));
	emu_push(emu_cs); emu_push(0x1050); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
	f__1A34_1050_0027_BC2E();
}

/**
 * Decompiled function f__1A34_1050_0027_BC2E()
 *
 * @name f__1A34_1050_0027_BC2E
 * @implements 1A34:1050:0027:BC2E ()
 *
 * Called From: 1A34:1050:0038:DAAE
 */
void f__1A34_1050_0027_BC2E()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_flags.zf) { f__1A34_1091_000B_E874(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x106C; emu_last_cs = 0x1A34; emu_last_ip = 0x1065; emu_last_length = 0x0027; emu_last_crc = 0xBC2E; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1079; emu_last_cs = 0x1A34; emu_last_ip = 0x106A; emu_last_length = 0x0027; emu_last_crc = 0xBC2E; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1077); f__1A34_27A8_0012_7198();
	f__1A34_1077_0018_960E();
}

/**
 * Decompiled function f__1A34_1052_0025_D89D()
 *
 * @name f__1A34_1052_0025_D89D
 * @implements 1A34:1052:0025:D89D ()
 *
 * Called From: 1A34:0FEC:0029:2E9A
 */
void f__1A34_1052_0025_D89D()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_flags.zf) { f__1A34_1091_000B_E874(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x106C; emu_last_cs = 0x1A34; emu_last_ip = 0x1065; emu_last_length = 0x0025; emu_last_crc = 0xD89D; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1079; emu_last_cs = 0x1A34; emu_last_ip = 0x106A; emu_last_length = 0x0025; emu_last_crc = 0xD89D; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1077); f__1A34_27A8_0012_7198();
	f__1A34_1077_0018_960E();
}

/**
 * Decompiled function f__1A34_1077_0018_960E()
 *
 * @name f__1A34_1077_0018_960E
 * @implements 1A34:1077:0018:960E ()
 *
 * Called From: 1A34:1077:0027:BC2E
 * Called From: 1A34:1077:0025:D89D
 */
void f__1A34_1077_0018_960E()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A0C), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A0A), emu_dx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x108F); emu_cs = 0x10E4; f__10E4_0F1A_0088_7622();
	f__1A34_108F_0002_D1BA();
}

/**
 * Decompiled function f__1A34_108F_0002_D1BA()
 *
 * @name f__1A34_108F_0002_D1BA
 * @implements 1A34:108F:0002:D1BA ()
 *
 * Called From: 1A34:108F:0018:960E
 */
void f__1A34_108F_0002_D1BA()
{
	f__1A34_10B4_0012_6E18(); return;
}

/**
 * Decompiled function f__1A34_1091_000B_E874()
 *
 * @name f__1A34_1091_000B_E874
 * @implements 1A34:1091:000B:E874 ()
 *
 * Called From: 1A34:1059:0025:D89D
 * Called From: 1A34:1059:0027:BC2E
 */
void f__1A34_1091_000B_E874()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x109C); f__1A34_27A8_0012_7198();
	f__1A34_109C_0018_C7EE();
}

/**
 * Decompiled function f__1A34_109C_0018_C7EE()
 *
 * @name f__1A34_109C_0018_C7EE
 * @implements 1A34:109C:0018:C7EE ()
 *
 * Called From: 1A34:109C:000B:E874
 */
void f__1A34_109C_0018_C7EE()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A0C), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A0A), emu_dx);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10B4); emu_cs = 0x34E9; ovl__34E9(2);
	f__1A34_10B4_0012_6E18();
}

/**
 * Decompiled function f__1A34_10B4_0012_6E18()
 *
 * @name f__1A34_10B4_0012_6E18
 * @implements 1A34:10B4:0012:6E18 ()
 *
 * Called From: 1A34:108F:0002:D1BA
 * Called From: 1A34:10B4:0018:C7EE
 */
void f__1A34_10B4_0012_6E18()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10C6); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_10C6_000C_746E();
}

/**
 * Decompiled function f__1A34_10C6_000C_746E()
 *
 * @name f__1A34_10C6_000C_746E
 * @implements 1A34:10C6:000C:746E ()
 *
 * Called From: 1A34:10C6:0012:6E18
 */
void f__1A34_10C6_000C_746E()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10D2); emu_cs = 0x0F78; f__0F78_01B4_0016_23DD();
	f__1A34_10D2_0002_CABA();
}

/**
 * Decompiled function f__1A34_10D2_0002_CABA()
 *
 * @name f__1A34_10D2_0002_CABA
 * @implements 1A34:10D2:0002:CABA ()
 *
 * Called From: 1A34:10D2:000C:746E
 */
void f__1A34_10D2_0002_CABA()
{
	f__1A34_10E9_0003_2EB7(); return;
}

/**
 * Decompiled function f__1A34_10D4_0015_80BA()
 *
 * @name f__1A34_10D4_0015_80BA
 * @implements 1A34:10D4:0015:80BA ()
 *
 * Called From: 1A34:0FD8:000E:16C2
 * Called From: 1A34:0FD8:000B:34A8
 */
void f__1A34_10D4_0015_80BA()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A0C), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A0A), 0x0);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10E9); emu_cs = 0x34E9; ovl__34E9(2);
	f__1A34_10E9_0003_2EB7();
}

/**
 * Decompiled function f__1A34_10E9_0003_2EB7()
 *
 * @name f__1A34_10E9_0003_2EB7
 * @implements 1A34:10E9:0003:2EB7 ()
 *
 * Called From: 1A34:10D2:0002:CABA
 * Called From: 1A34:10E9:0015:80BA
 */
void f__1A34_10E9_0003_2EB7()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_10EA_0002_2597()
 *
 * @name f__1A34_10EA_0002_2597
 * @implements 1A34:10EA:0002:2597 ()
 *
 * Called From: 1A34:0F5D:0018:0DB8
 */
void f__1A34_10EA_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_10EC_000E_A326()
 *
 * @name f__1A34_10EC_000E_A326
 * @implements 1A34:10EC:000E:A326 ()
 *
 * Called From: 0C3A:06E3:0008:D276
 * Called From: 0C3A:0F15:001D:C1AF
 * Called From: 176C:12DA:0011:A5C5
 * Called From: 176C:173C:000E:1BB6
 * Called From: 1A34:00EE:000B:2449
 * Called From: 1A34:0665:000E:C47C
 * Called From: B4CD:14E0:0008:D276
 */
void f__1A34_10EC_000E_A326()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_10FA_0013_0DCB(); return; }
	f__1A34_117C_0002_2597(); return;
}

/**
 * Decompiled function f__1A34_10FA_0013_0DCB()
 *
 * @name f__1A34_10FA_0013_0DCB
 * @implements 1A34:10FA:0013:0DCB ()
 *
 * Called From: 1A34:10F5:000E:A326
 */
void f__1A34_10FA_0013_0DCB()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x110D); f__1A34_364E_0012_61B3();
	f__1A34_110D_001E_722B();
}

/**
 * Decompiled function f__1A34_110D_001E_722B()
 *
 * @name f__1A34_110D_001E_722B
 * @implements 1A34:110D:001E:722B ()
 *
 * Called From: 1A34:110D:0013:0DCB
 */
void f__1A34_110D_001E_722B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (!emu_flags.zf) { f__1A34_112D_0016_931E(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	if (!emu_flags.zf) { f__1A34_112D_0016_931E(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x112B); f__1A34_0F48_0018_0DB8();
	f__1A34_112B_0018_CAAC();
}

/**
 * Decompiled function f__1A34_112B_0018_CAAC()
 *
 * @name f__1A34_112B_0018_CAAC
 * @implements 1A34:112B:0018:CAAC ()
 *
 * Called From: 1A34:112B:001E:722B
 */
void f__1A34_112B_0018_CAAC()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x40);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1143); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_1143_0012_391F();
}

/**
 * Decompiled function f__1A34_112D_0016_931E()
 *
 * @name f__1A34_112D_0016_931E
 * @implements 1A34:112D:0016:931E ()
 *
 * Called From: 1A34:1119:001E:722B
 * Called From: 1A34:111F:001E:722B
 */
void f__1A34_112D_0016_931E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x40);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1143); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_1143_0012_391F();
}

/**
 * Decompiled function f__1A34_1143_0012_391F()
 *
 * @name f__1A34_1143_0012_391F
 * @implements 1A34:1143:0012:391F ()
 *
 * Called From: 1A34:1143:0016:931E
 * Called From: 1A34:1143:0018:CAAC
 */
void f__1A34_1143_0012_391F()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1155); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
	f__1A34_1155_0017_75C8();
}

/**
 * Decompiled function f__1A34_1155_0017_75C8()
 *
 * @name f__1A34_1155_0017_75C8
 * @implements 1A34:1155:0017:75C8 ()
 *
 * Called From: 1A34:1155:0012:391F
 */
void f__1A34_1155_0017_75C8()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3902);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x116C); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	f__1A34_116C_000E_BB32();
}

/**
 * Decompiled function f__1A34_116C_000E_BB32()
 *
 * @name f__1A34_116C_000E_BB32
 * @implements 1A34:116C:000E:BB32 ()
 *
 * Called From: 1A34:116C:0017:75C8
 */
void f__1A34_116C_000E_BB32()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x117A); emu_cs = 0x0FE4; emu_Unit_Free();
	f__1A34_117A_0004_BEB2();
}

/**
 * Decompiled function f__1A34_117A_0004_BEB2()
 *
 * @name f__1A34_117A_0004_BEB2
 * @implements 1A34:117A:0004:BEB2 ()
 *
 * Called From: 1A34:117A:000E:BB32
 */
void f__1A34_117A_0004_BEB2()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_117C_0002_2597()
 *
 * @name f__1A34_117C_0002_2597
 * @implements 1A34:117C:0002:2597 ()
 *
 * Called From: 1A34:10F7:000E:A326
 */
void f__1A34_117C_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_117E_001D_E17B()
 *
 * @name f__1A34_117E_001D_E17B
 * @implements 1A34:117E:001D:E17B ()
 *
 * Called From: 1A34:148E:0013:5581
 * Called From: 1A34:148E:001B:2CE0
 * Called From: 1A34:35CD:0029:C135
 */
void f__1A34_117E_001D_E17B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1196; emu_last_cs = 0x1A34; emu_last_ip = 0x118C; emu_last_length = 0x001D; emu_last_crc = 0xE17B; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__1A34_119B_000D_4469(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x1322; emu_last_cs = 0x1A34; emu_last_ip = 0x1198; emu_last_length = 0x001D; emu_last_crc = 0xE17B; emu_call();
}

/**
 * Decompiled function f__1A34_1196_0005_DC15()
 *
 * @name f__1A34_1196_0005_DC15
 * @implements 1A34:1196:0005:DC15 ()
 *
 * Called From: 1A34:11A6:000D:4469
 */
void f__1A34_1196_0005_DC15()
{
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_1322_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_1198_0003_DD81()
 *
 * @name f__1A34_1198_0003_DD81
 * @implements 1A34:1198:0003:DD81 ()
 *
 * Called From: 1A34:131F:0005:8669
 */
void f__1A34_1198_0003_DD81()
{
	f__1A34_1322_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_119B_000D_4469()
 *
 * @name f__1A34_119B_000D_4469
 * @implements 1A34:119B:000D:4469 ()
 *
 * Called From: 1A34:1194:001D:E17B
 */
void f__1A34_119B_000D_4469()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if (!emu_flags.zf) { f__1A34_11A8_0015_4615(); return; }
	f__1A34_1196_0005_DC15(); return;
}

/**
 * Decompiled function f__1A34_11A8_0015_4615()
 *
 * @name f__1A34_11A8_0015_4615
 * @implements 1A34:11A8:0015:4615 ()
 *
 * Called From: 1A34:11A4:000D:4469
 */
void f__1A34_11A8_0015_4615()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x9));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x11BD); emu_Unit_GetHouseID();
	f__1A34_11BD_0010_4E96();
}

/**
 * Decompiled function f__1A34_11BD_0010_4E96()
 *
 * @name f__1A34_11BD_0010_4E96
 * @implements 1A34:11BD:0010:4E96 ()
 *
 * Called From: 1A34:11BD:0015:4615
 */
void f__1A34_11BD_0010_4E96()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_dx, 0x1);
	emu_movb(&emu_cl, emu_al);
	emu_shlw(&emu_dx, emu_cl);
	emu_pop(&emu_ax);
	emu_testw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { f__1A34_11CD_000B_31E5(); return; }
	/* Unresolved jump */ emu_ip = 0x1196; emu_last_cs = 0x1A34; emu_last_ip = 0x11CB; emu_last_length = 0x0010; emu_last_crc = 0x4E96; emu_call();
}

/**
 * Decompiled function f__1A34_11CD_000B_31E5()
 *
 * @name f__1A34_11CD_000B_31E5
 * @implements 1A34:11CD:000B:31E5 ()
 *
 * Called From: 1A34:11C9:0010:4E96
 */
void f__1A34_11CD_000B_31E5()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x11D8); emu_Unit_GetHouseID();
	f__1A34_11D8_000E_4D9C();
}

/**
 * Decompiled function f__1A34_11D8_000E_4D9C()
 *
 * @name f__1A34_11D8_000E_4D9C
 * @implements 1A34:11D8:000E:4D9C ()
 *
 * Called From: 1A34:11D8:000B:31E5
 */
void f__1A34_11D8_000E_4D9C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x11E6); emu_Unit_GetHouseID();
	f__1A34_11E6_0008_9688();
}

/**
 * Decompiled function f__1A34_11E6_0008_9688()
 *
 * @name f__1A34_11E6_0008_9688
 * @implements 1A34:11E6:0008:9688 ()
 *
 * Called From: 1A34:11E6:000E:4D9C
 */
void f__1A34_11E6_0008_9688()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x11EE); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	f__1A34_11EE_0008_A3CF();
}

/**
 * Decompiled function f__1A34_11EE_0008_A3CF()
 *
 * @name f__1A34_11EE_0008_A3CF
 * @implements 1A34:11EE:0008:A3CF ()
 *
 * Called From: 1A34:11EE:0008:9688
 */
void f__1A34_11EE_0008_A3CF()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__1A34_11F6_0012_6DCF(); return; }
	/* Unresolved jump */ emu_ip = 0x1196; emu_last_cs = 0x1A34; emu_last_ip = 0x11F4; emu_last_length = 0x0008; emu_last_crc = 0xA3CF; emu_call();
}

/**
 * Decompiled function f__1A34_11F6_0012_6DCF()
 *
 * @name f__1A34_11F6_0012_6DCF
 * @implements 1A34:11F6:0012:6DCF ()
 *
 * Called From: 1A34:11F2:0008:A3CF
 */
void f__1A34_11F6_0012_6DCF()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1208; emu_last_cs = 0x1A34; emu_last_ip = 0x11FF; emu_last_length = 0x0012; emu_last_crc = 0x6DCF; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { f__1A34_1208_003E_8F72(); return; }
	/* Unresolved jump */ emu_ip = 0x1196; emu_last_cs = 0x1A34; emu_last_ip = 0x1206; emu_last_length = 0x0012; emu_last_crc = 0x6DCF; emu_call();
}

/**
 * Decompiled function f__1A34_1208_003E_8F72()
 *
 * @name f__1A34_1208_003E_8F72
 * @implements 1A34:1208:003E:8F72 ()
 *
 * Called From: 1A34:1204:0012:6DCF
 */
void f__1A34_1208_003E_8F72()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x2000);
	if (!emu_flags.zf) { f__1A34_1246_0018_EC6E(); return; }
	/* Unresolved jump */ emu_ip = 0x1196; emu_last_cs = 0x1A34; emu_last_ip = 0x1243; emu_last_length = 0x003E; emu_last_crc = 0x8F72; emu_call();
}

/**
 * Decompiled function f__1A34_1246_0018_EC6E()
 *
 * @name f__1A34_1246_0018_EC6E
 * @implements 1A34:1246:0018:EC6E ()
 *
 * Called From: 1A34:1241:003E:8F72
 */
void f__1A34_1246_0018_EC6E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (!emu_flags.zf) { f__1A34_128C_0010_14B9(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x1000);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x125E; emu_last_cs = 0x1A34; emu_last_ip = 0x1259; emu_last_length = 0x0018; emu_last_crc = 0xEC6E; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x1196; emu_last_cs = 0x1A34; emu_last_ip = 0x125B; emu_last_length = 0x0018; emu_last_crc = 0xEC6E; emu_call();
}

/**
 * Decompiled function f__1A34_128C_0010_14B9()
 *
 * @name f__1A34_128C_0010_14B9
 * @implements 1A34:128C:0010:14B9 ()
 *
 * Called From: 1A34:124E:0018:EC6E
 */
void f__1A34_128C_0010_14B9()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x129C); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__1A34_129C_0008_3755();
}

/**
 * Decompiled function f__1A34_129C_0008_3755()
 *
 * @name f__1A34_129C_0008_3755
 * @implements 1A34:129C:0008:3755 ()
 *
 * Called From: 1A34:129C:0010:14B9
 */
void f__1A34_129C_0008_3755()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12A4); emu_cs = 0x34CD; ovl__34CD(11);
	f__1A34_12A4_0008_88A7();
}

/**
 * Decompiled function f__1A34_12A4_0008_88A7()
 *
 * @name f__1A34_12A4_0008_88A7
 * @implements 1A34:12A4:0008:88A7 ()
 *
 * Called From: 1A34:12A4:0008:3755
 */
void f__1A34_12A4_0008_88A7()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1A34_12AC_001B_E25C(); return; }
	/* Unresolved jump */ emu_ip = 0x1196; emu_last_cs = 0x1A34; emu_last_ip = 0x12A9; emu_last_length = 0x0008; emu_last_crc = 0x88A7; emu_call();
}

/**
 * Decompiled function f__1A34_12AC_001B_E25C()
 *
 * @name f__1A34_12AC_001B_E25C
 * @implements 1A34:12AC:001B:E25C ()
 *
 * Called From: 1A34:12A7:0008:88A7
 */
void f__1A34_12AC_001B_E25C()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x12C7); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	f__1A34_12C7_0015_EDBF();
}

/**
 * Decompiled function f__1A34_12C7_0015_EDBF()
 *
 * @name f__1A34_12C7_0015_EDBF
 * @implements 1A34:12C7:0015:EDBF ()
 *
 * Called From: 1A34:12C7:001B:E25C
 */
void f__1A34_12C7_0015_EDBF()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x12DC); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__1A34_12DC_0008_3755();
}

/**
 * Decompiled function f__1A34_12DC_0008_3755()
 *
 * @name f__1A34_12DC_0008_3755
 * @implements 1A34:12DC:0008:3755 ()
 *
 * Called From: 1A34:12DC:0015:EDBF
 */
void f__1A34_12DC_0008_3755()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12E4); emu_cs = 0x34CD; ovl__34CD(11);
	f__1A34_12E4_0011_5611();
}

/**
 * Decompiled function f__1A34_12E4_0011_5611()
 *
 * @name f__1A34_12E4_0011_5611
 * @implements 1A34:12E4:0011:5611 ()
 *
 * Called From: 1A34:12E4:0008:3755
 */
void f__1A34_12E4_0011_5611()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1A34_12F5_0028_478E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_12F5_0028_478E(); return; }
	/* Unresolved jump */ emu_ip = 0x1196; emu_last_cs = 0x1A34; emu_last_ip = 0x12F2; emu_last_length = 0x0011; emu_last_crc = 0x5611; emu_call();
}

/**
 * Decompiled function f__1A34_12F5_0028_478E()
 *
 * @name f__1A34_12F5_0028_478E
 * @implements 1A34:12F5:0028:478E ()
 *
 * Called From: 1A34:12E7:0011:5611
 * Called From: 1A34:12F0:0011:5611
 */
void f__1A34_12F5_0028_478E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2F));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2D));
	emu_movw(&emu_si, emu_ax);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__1A34_1312_000B_BD26(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_di);
	emu_movw(&emu_si, emu_ax);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x7D00);
	if ((emu_flags.cf || emu_flags.zf)) { f__1A34_131D_0005_8669(); return; }
	emu_movw(&emu_ax, 0x7D00);
	/* Unresolved jump */ emu_ip = 0x131F; emu_last_cs = 0x1A34; emu_last_ip = 0x131B; emu_last_length = 0x0028; emu_last_crc = 0x478E; emu_call();
}

/**
 * Decompiled function f__1A34_1312_000B_BD26()
 *
 * @name f__1A34_1312_000B_BD26
 * @implements 1A34:1312:000B:BD26 ()
 *
 * Called From: 1A34:1307:0028:478E
 */
void f__1A34_1312_000B_BD26()
{
	emu_cmpw(&emu_si, 0x7D00);
	if ((emu_flags.cf || emu_flags.zf)) { f__1A34_131D_0005_8669(); return; }
	emu_movw(&emu_ax, 0x7D00);
	/* Unresolved jump */ emu_ip = 0x131F; emu_last_cs = 0x1A34; emu_last_ip = 0x131B; emu_last_length = 0x000B; emu_last_crc = 0xBD26; emu_call();
}

/**
 * Decompiled function f__1A34_131D_0005_8669()
 *
 * @name f__1A34_131D_0005_8669
 * @implements 1A34:131D:0005:8669 ()
 *
 * Called From: 1A34:1316:0028:478E
 * Called From: 1A34:1316:000B:BD26
 */
void f__1A34_131D_0005_8669()
{
	emu_movw(&emu_ax, emu_si);
	f__1A34_1198_0003_DD81(); return;
}

/**
 * Decompiled function f__1A34_1322_0006_F7CE()
 *
 * @name f__1A34_1322_0006_F7CE
 * @implements 1A34:1322:0006:F7CE ()
 *
 * Called From: 1A34:1198:0003:DD81
 * Called From: 1A34:1198:0005:DC15
 */
void f__1A34_1322_0006_F7CE()
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
 * Decompiled function f__1A34_1328_0026_C398()
 *
 * @name f__1A34_1328_0026_C398
 * @implements 1A34:1328:0026:C398 ()
 *
 * Called From: 1A34:3585:000B:BD96
 */
void f__1A34_1328_0026_C398()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_134E_002A_789C(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x14E0; emu_last_cs = 0x1A34; emu_last_ip = 0x134B; emu_last_length = 0x0026; emu_last_crc = 0xC398; emu_call();
}

/**
 * Decompiled function f__1A34_134B_0003_9D84()
 *
 * @name f__1A34_134B_0003_9D84
 * @implements 1A34:134B:0003:9D84 ()
 *
 * Called From: 1A34:14DD:0017:5D64
 * Called From: 1A34:14DD:0009:DBB6
 */
void f__1A34_134B_0003_9D84()
{
	f__1A34_14E0_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_134E_002A_789C()
 *
 * @name f__1A34_134E_002A_789C
 * @implements 1A34:134E:002A:789C ()
 *
 * Called From: 1A34:1345:0026:C398
 */
void f__1A34_134E_002A_789C()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4D), 0x0);
	if (!emu_flags.zf) { f__1A34_138B_000C_39D3(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x1378); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__1A34_1378_0008_A673();
}

/**
 * Decompiled function f__1A34_1378_0008_A673()
 *
 * @name f__1A34_1378_0008_A673
 * @implements 1A34:1378:0008:A673 ()
 *
 * Called From: 1A34:1378:002A:789C
 */
void f__1A34_1378_0008_A673()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1380); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_1380_000B_4473();
}

/**
 * Decompiled function f__1A34_1380_000B_4473()
 *
 * @name f__1A34_1380_000B_4473
 * @implements 1A34:1380:000B:4473 ()
 *
 * Called From: 1A34:1380:0008:A673
 */
void f__1A34_1380_000B_4473()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4D), emu_ax);
	f__1A34_139E_0040_DAC0(); return;
}

/**
 * Decompiled function f__1A34_138B_000C_39D3()
 *
 * @name f__1A34_138B_000C_39D3
 * @implements 1A34:138B:000C:39D3 ()
 *
 * Called From: 1A34:1356:002A:789C
 */
void f__1A34_138B_000C_39D3()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4D));
	emu_push(emu_cs); emu_push(0x1397); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	f__1A34_1397_0047_54FE();
}

/**
 * Decompiled function f__1A34_1397_0047_54FE()
 *
 * @name f__1A34_1397_0047_54FE
 * @implements 1A34:1397:0047:54FE ()
 *
 * Called From: 1A34:1397:000C:39D3
 */
void f__1A34_1397_0047_54FE()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x50));
	emu_movb(&emu_cl, 0x8);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_cmpw(&emu_si, 0x2);
	if (!emu_flags.zf) { f__1A34_13C6_0018_2009(); return; }
	emu_shlw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x13DE); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__1A34_13DE_0006_9737();
}

/**
 * Decompiled function f__1A34_139E_0040_DAC0()
 *
 * @name f__1A34_139E_0040_DAC0
 * @implements 1A34:139E:0040:DAC0 ()
 *
 * Called From: 1A34:1389:000B:4473
 */
void f__1A34_139E_0040_DAC0()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x50));
	emu_movb(&emu_cl, 0x8);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_cmpw(&emu_si, 0x2);
	if (!emu_flags.zf) { f__1A34_13C6_0018_2009(); return; }
	emu_shlw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x13DE); emu_cs = 0x0FE4; emu_ip = 0x0243; emu_last_cs = 0x1A34; emu_last_ip = 0x13D9; emu_last_length = 0x0040; emu_last_crc = 0xDAC0; emu_call();
	f__1A34_13DE_0006_9737();
}

/**
 * Decompiled function f__1A34_13C6_0018_2009()
 *
 * @name f__1A34_13C6_0018_2009
 * @implements 1A34:13C6:0018:2009 ()
 *
 * Called From: 1A34:13C1:0040:DAC0
 * Called From: 1A34:13C1:0047:54FE
 */
void f__1A34_13C6_0018_2009()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x13DE); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__1A34_13DE_0006_9737();
}

/**
 * Decompiled function f__1A34_13DE_0006_9737()
 *
 * @name f__1A34_13DE_0006_9737
 * @implements 1A34:13DE:0006:9737 ()
 *
 * Called From: 1A34:13DE:0018:2009
 * Called From: 1A34:13DE:0047:54FE
 */
void f__1A34_13DE_0006_9737()
{
	emu_addw(&emu_sp, 0x8);
	f__1A34_14B8_0011_9657(); return;
}

/**
 * Decompiled function f__1A34_13E4_000B_F2FA()
 *
 * @name f__1A34_13E4_000B_F2FA
 * @implements 1A34:13E4:000B:F2FA ()
 *
 * Called From: 1A34:14C6:0011:9657
 * Called From: 1A34:14C6:0013:DD61
 */
void f__1A34_13E4_000B_F2FA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x13EF); emu_Unit_GetHouseID();
	f__1A34_13EF_000E_56E0();
}

/**
 * Decompiled function f__1A34_13EF_000E_56E0()
 *
 * @name f__1A34_13EF_000E_56E0
 * @implements 1A34:13EF:000E:56E0 ()
 *
 * Called From: 1A34:13EF:000B:F2FA
 */
void f__1A34_13EF_000E_56E0()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x13FD); emu_Unit_GetHouseID();
	f__1A34_13FD_0008_9688();
}

/**
 * Decompiled function f__1A34_13FD_0008_9688()
 *
 * @name f__1A34_13FD_0008_9688
 * @implements 1A34:13FD:0008:9688 ()
 *
 * Called From: 1A34:13FD:000E:56E0
 */
void f__1A34_13FD_0008_9688()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1405); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	f__1A34_1405_0009_B79E();
}

/**
 * Decompiled function f__1A34_1405_0009_B79E()
 *
 * @name f__1A34_1405_0009_B79E
 * @implements 1A34:1405:0009:B79E ()
 *
 * Called From: 1A34:1405:0008:9688
 */
void f__1A34_1405_0009_B79E()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__1A34_140E_001C_B892(); return; }
	f__1A34_14AB_000B_799F(); return;
}

/**
 * Decompiled function f__1A34_140E_001C_B892()
 *
 * @name f__1A34_140E_001C_B892
 * @implements 1A34:140E:001C:B892 ()
 *
 * Called From: 1A34:1409:0009:B79E
 */
void f__1A34_140E_001C_B892()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x9));
	emu_movb(&emu_ah, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cl, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movw(&emu_dx, 0x1);
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { f__1A34_142A_0029_435F(); return; }
	f__1A34_14AB_000B_799F(); return;
}

/**
 * Decompiled function f__1A34_142A_0029_435F()
 *
 * @name f__1A34_142A_0029_435F
 * @implements 1A34:142A:0029:435F ()
 *
 * Called From: 1A34:1425:001C:B892
 */
void f__1A34_142A_0029_435F()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__1A34_147E_0013_5581(); return; }
	emu_cmpw(&emu_si, 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x147E; emu_last_cs = 0x1A34; emu_last_ip = 0x1431; emu_last_length = 0x0029; emu_last_crc = 0x435F; emu_call(); return; }
	emu_cmpw(&emu_si, 0x1);
	if (!emu_flags.zf) { f__1A34_145B_001B_B989(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1453); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__1A34_1453_0023_D010();
}

/**
 * Decompiled function f__1A34_1453_0023_D010()
 *
 * @name f__1A34_1453_0023_D010
 * @implements 1A34:1453:0023:D010 ()
 *
 * Called From: 1A34:1453:0029:435F
 */
void f__1A34_1453_0023_D010()
{
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_147E_0013_5581(); return; }
	emu_cmpw(&emu_si, 0x2);
	if (!emu_flags.zf) { f__1A34_14AB_000B_799F(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1476); emu_cs = 0x0F3F; emu_ip = 0x00B4; emu_last_cs = 0x1A34; emu_last_ip = 0x1471; emu_last_length = 0x0023; emu_last_crc = 0xD010; emu_call();
	f__1A34_1476_001B_2CE0();
}

/**
 * Decompiled function f__1A34_145B_001B_B989()
 *
 * @name f__1A34_145B_001B_B989
 * @implements 1A34:145B:001B:B989 ()
 *
 * Called From: 1A34:1436:0029:435F
 */
void f__1A34_145B_001B_B989()
{
	emu_cmpw(&emu_si, 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x14AB; emu_last_cs = 0x1A34; emu_last_ip = 0x145E; emu_last_length = 0x001B; emu_last_crc = 0xB989; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x1476); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__1A34_1476_001B_2CE0();
}

/**
 * Decompiled function f__1A34_1476_001B_2CE0()
 *
 * @name f__1A34_1476_001B_2CE0
 * @implements 1A34:1476:001B:2CE0 ()
 *
 * Called From: 1A34:1476:001B:B989
 */
void f__1A34_1476_001B_2CE0()
{
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_14AB_000B_799F(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1491); f__1A34_117E_001D_E17B();
	f__1A34_1491_0025_A83B();
}

/**
 * Decompiled function f__1A34_147E_0013_5581()
 *
 * @name f__1A34_147E_0013_5581
 * @implements 1A34:147E:0013:5581 ()
 *
 * Called From: 1A34:142C:0029:435F
 * Called From: 1A34:1459:0023:D010
 */
void f__1A34_147E_0013_5581()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1491); f__1A34_117E_001D_E17B();
	f__1A34_1491_0025_A83B();
}

/**
 * Decompiled function f__1A34_1491_0025_A83B()
 *
 * @name f__1A34_1491_0025_A83B
 * @implements 1A34:1491:0025:A83B ()
 *
 * Called From: 1A34:1491:0013:5581
 * Called From: 1A34:1491:001B:2CE0
 */
void f__1A34_1491_0025_A83B()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_14AB_000B_799F(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x14B6); emu_cs = 0x0FE4; emu_Unit_FindNext();
	f__1A34_14B6_0013_DD61();
}

/**
 * Decompiled function f__1A34_14AB_000B_799F()
 *
 * @name f__1A34_14AB_000B_799F
 * @implements 1A34:14AB:000B:799F ()
 *
 * Called From: 1A34:140B:0009:B79E
 * Called From: 1A34:1427:001C:B892
 * Called From: 1A34:145E:0023:D010
 * Called From: 1A34:147C:001B:2CE0
 * Called From: 1A34:149A:0025:A83B
 */
void f__1A34_14AB_000B_799F()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x14B6); emu_cs = 0x0FE4; emu_Unit_FindNext();
	f__1A34_14B6_0013_DD61();
}

/**
 * Decompiled function f__1A34_14B6_0013_DD61()
 *
 * @name f__1A34_14B6_0013_DD61
 * @implements 1A34:14B6:0013:DD61 ()
 *
 * Called From: 1A34:14B6:000B:799F
 * Called From: 1A34:14B6:0025:A83B
 */
void f__1A34_14B6_0013_DD61()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_14C9_0017_5D64(); return; }
	f__1A34_13E4_000B_F2FA(); return;
}

/**
 * Decompiled function f__1A34_14B8_0011_9657()
 *
 * @name f__1A34_14B8_0011_9657
 * @implements 1A34:14B8:0011:9657 ()
 *
 * Called From: 1A34:13E1:0006:9737
 */
void f__1A34_14B8_0011_9657()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_14C9_0017_5D64(); return; }
	f__1A34_13E4_000B_F2FA(); return;
}

/**
 * Decompiled function f__1A34_14C9_0017_5D64()
 *
 * @name f__1A34_14C9_0017_5D64
 * @implements 1A34:14C9:0017:5D64 ()
 *
 * Called From: 1A34:14C4:0013:DD61
 * Called From: 1A34:14C4:0011:9657
 */
void f__1A34_14C9_0017_5D64()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__1A34_14D7_0009_DBB6(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__1A34_134B_0003_9D84(); return;
}

/**
 * Decompiled function f__1A34_14D7_0009_DBB6()
 *
 * @name f__1A34_14D7_0009_DBB6
 * @implements 1A34:14D7:0009:DBB6 ()
 *
 * Called From: 1A34:14CB:0017:5D64
 */
void f__1A34_14D7_0009_DBB6()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__1A34_134B_0003_9D84(); return;
}

/**
 * Decompiled function f__1A34_14E0_0006_F7CE()
 *
 * @name f__1A34_14E0_0006_F7CE
 * @implements 1A34:14E0:0006:F7CE ()
 *
 * Called From: 1A34:134B:0003:9D84
 */
void f__1A34_14E0_0006_F7CE()
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
 * Decompiled function f__1A34_14E6_001F_FB1E()
 *
 * @name f__1A34_14E6_001F_FB1E
 * @implements 1A34:14E6:001F:FB1E ()
 *
 * Called From: 1A34:162C:0010:7C7F
 */
void f__1A34_14E6_001F_FB1E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1500; emu_last_cs = 0x1A34; emu_last_ip = 0x14F6; emu_last_length = 0x001F; emu_last_crc = 0xFB1E; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__1A34_1505_0010_14B9(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x15E6; emu_last_cs = 0x1A34; emu_last_ip = 0x1502; emu_last_length = 0x001F; emu_last_crc = 0xFB1E; emu_call();
}

/**
 * Decompiled function f__1A34_1502_0003_5D18()
 *
 * @name f__1A34_1502_0003_5D18
 * @implements 1A34:1502:0003:5D18 ()
 *
 * Called From: 1A34:15E3:0005:06F3
 * Called From: 1A34:15E3:0013:2DC6
 * Called From: 1A34:15E3:0027:2F0F
 */
void f__1A34_1502_0003_5D18()
{
	f__1A34_15E6_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_1505_0010_14B9()
 *
 * @name f__1A34_1505_0010_14B9
 * @implements 1A34:1505:0010:14B9 ()
 *
 * Called From: 1A34:14FE:001F:FB1E
 */
void f__1A34_1505_0010_14B9()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1515); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__1A34_1515_0008_9754();
}

/**
 * Decompiled function f__1A34_1515_0008_9754()
 *
 * @name f__1A34_1515_0008_9754
 * @implements 1A34:1515:0008:9754 ()
 *
 * Called From: 1A34:1515:0010:14B9
 */
void f__1A34_1515_0008_9754()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x151D); emu_cs = 0x34CD; ovl__34CD(9);
	f__1A34_151D_0008_77B2();
}

/**
 * Decompiled function f__1A34_151D_0008_77B2()
 *
 * @name f__1A34_151D_0008_77B2
 * @implements 1A34:151D:0008:77B2 ()
 *
 * Called From: 1A34:151D:0008:9754
 */
void f__1A34_151D_0008_77B2()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1A34_1525_002A_E54A(); return; }
	f__1A34_15E1_0005_06F3(); return;
}

/**
 * Decompiled function f__1A34_1525_002A_E54A()
 *
 * @name f__1A34_1525_002A_E54A
 * @implements 1A34:1525:002A:E54A ()
 *
 * Called From: 1A34:1520:0008:77B2
 */
void f__1A34_1525_002A_E54A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_xorw(&emu_si, emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x154F); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__1A34_154F_0008_5756();
}

/**
 * Decompiled function f__1A34_154F_0008_5756()
 *
 * @name f__1A34_154F_0008_5756
 * @implements 1A34:154F:0008:5756 ()
 *
 * Called From: 1A34:154F:002A:E54A
 */
void f__1A34_154F_0008_5756()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1557); emu_cs = 0x34CD; ovl__34CD(13);
	f__1A34_1557_0022_94AA();
}

/**
 * Decompiled function f__1A34_1557_0022_94AA()
 *
 * @name f__1A34_1557_0022_94AA
 * @implements 1A34:1557:0022:94AA ()
 *
 * Called From: 1A34:1557:0008:5756
 */
void f__1A34_1557_0022_94AA()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_dx, 0x1C);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A4C), 0x0);
	if (emu_flags.zf) { f__1A34_15E1_0005_06F3(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x3C));
	emu_cmpw(&emu_bx, 0x3);
	if (!(emu_flags.cf || emu_flags.zf)) { f__1A34_1588_0004_EEF9(); return; }
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x15EC);
	switch (emu_ip) {
		case 0x1579: f__1A34_1579_0005_42A4(); return;
		case 0x157E: f__1A34_157E_0005_814C(); return;
		case 0x1583: f__1A34_1583_0005_45A2(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1A34; emu_last_ip = 0x1574; emu_last_length = 0x0022; emu_last_crc = 0x94AA;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__1A34_1579_0005_42A4()
 *
 * @name f__1A34_1579_0005_42A4
 * @implements 1A34:1579:0005:42A4 ()
 *
 * Called From: 1A34:1574:0022:94AA
 */
void f__1A34_1579_0005_42A4()
{
	emu_movw(&emu_si, 0x3E8);
	f__1A34_158C_0033_7AA7(); return;
}

/**
 * Decompiled function f__1A34_157E_0005_814C()
 *
 * @name f__1A34_157E_0005_814C
 * @implements 1A34:157E:0005:814C ()
 *
 * Called From: 1A34:1574:0022:94AA
 */
void f__1A34_157E_0005_814C()
{
	emu_movw(&emu_si, 0x64);
	f__1A34_158C_0033_7AA7(); return;
}

/**
 * Decompiled function f__1A34_1583_0005_45A2()
 *
 * @name f__1A34_1583_0005_45A2
 * @implements 1A34:1583:0005:45A2 ()
 *
 * Called From: 1A34:1574:0022:94AA
 */
void f__1A34_1583_0005_45A2()
{
	emu_movw(&emu_si, 0x1388);
	f__1A34_158C_0033_7AA7(); return;
}

/**
 * Decompiled function f__1A34_1588_0004_EEF9()
 *
 * @name f__1A34_1588_0004_EEF9
 * @implements 1A34:1588:0004:EEF9 ()
 *
 * Called From: 1A34:1570:0022:94AA
 */
void f__1A34_1588_0004_EEF9()
{
	emu_xorw(&emu_si, emu_si);
	f__1A34_158C_0033_7AA7(); return;
}

/**
 * Decompiled function f__1A34_158C_0033_7AA7()
 *
 * @name f__1A34_158C_0033_7AA7
 * @implements 1A34:158C:0033:7AA7 ()
 *
 * Called From: 1A34:157C:0005:42A4
 * Called From: 1A34:1581:0005:814C
 * Called From: 1A34:1586:0005:45A2
 * Called From: 1A34:158A:0004:EEF9
 */
void f__1A34_158C_0033_7AA7()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x6A), 0x0);
	if (!emu_flags.zf) { f__1A34_15A0_001F_1633(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x51), 0x0);
	if (emu_flags.zf) { f__1A34_15A4_001B_E25C(); return; }
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_si, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x15BF); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	f__1A34_15BF_0027_2F0F();
}

/**
 * Decompiled function f__1A34_15A0_001F_1633()
 *
 * @name f__1A34_15A0_001F_1633
 * @implements 1A34:15A0:001F:1633 ()
 *
 * Called From: 1A34:1594:0033:7AA7
 */
void f__1A34_15A0_001F_1633()
{
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_si, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x15BF); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	f__1A34_15BF_0027_2F0F();
}

/**
 * Decompiled function f__1A34_15A4_001B_E25C()
 *
 * @name f__1A34_15A4_001B_E25C
 * @implements 1A34:15A4:001B:E25C ()
 *
 * Called From: 1A34:159E:0033:7AA7
 */
void f__1A34_15A4_001B_E25C()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x15BF); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	f__1A34_15BF_0027_2F0F();
}

/**
 * Decompiled function f__1A34_15BF_0027_2F0F()
 *
 * @name f__1A34_15BF_0027_2F0F
 * @implements 1A34:15BF:0027:2F0F ()
 *
 * Called From: 1A34:15BF:001B:E25C
 * Called From: 1A34:15BF:001F:1633
 * Called From: 1A34:15BF:0033:7AA7
 */
void f__1A34_15BF_0027_2F0F()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__1A34_15D3_0013_2DC6(); return; }
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__1A34_15D3_0013_2DC6(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_cwd();
	emu_idivw(&emu_ax, emu_di);
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_di, 0x2);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_15E1_0005_06F3(); return; }
	emu_movw(&emu_dx, 0x2);
	emu_movw(&emu_ax, emu_si);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_ax, emu_si);
	f__1A34_1502_0003_5D18(); return;
}

/**
 * Decompiled function f__1A34_15D3_0013_2DC6()
 *
 * @name f__1A34_15D3_0013_2DC6
 * @implements 1A34:15D3:0013:2DC6 ()
 *
 * Called From: 1A34:15C6:0027:2F0F
 * Called From: 1A34:15CA:0027:2F0F
 */
void f__1A34_15D3_0013_2DC6()
{
	emu_cmpw(&emu_di, 0x2);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_15E1_0005_06F3(); return; }
	emu_movw(&emu_dx, 0x2);
	emu_movw(&emu_ax, emu_si);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_ax, emu_si);
	f__1A34_1502_0003_5D18(); return;
}

/**
 * Decompiled function f__1A34_15E1_0005_06F3()
 *
 * @name f__1A34_15E1_0005_06F3
 * @implements 1A34:15E1:0005:06F3 ()
 *
 * Called From: 1A34:1522:0008:77B2
 * Called From: 1A34:1564:0022:94AA
 * Called From: 1A34:15D6:0027:2F0F
 * Called From: 1A34:15D6:0013:2DC6
 */
void f__1A34_15E1_0005_06F3()
{
	emu_movw(&emu_ax, emu_si);
	f__1A34_1502_0003_5D18(); return;
}

/**
 * Decompiled function f__1A34_15E6_0006_F7CE()
 *
 * @name f__1A34_15E6_0006_F7CE
 * @implements 1A34:15E6:0006:F7CE ()
 *
 * Called From: 1A34:1502:0003:5D18
 */
void f__1A34_15E6_0006_F7CE()
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
 * Decompiled function f__1A34_15F4_0026_EDA4()
 *
 * @name f__1A34_15F4_0026_EDA4
 * @implements 1A34:15F4:0026:EDA4 ()
 *
 * Called From: 176C:2BA5:0013:B226
 */
void f__1A34_15F4_0026_EDA4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x161A); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__1A34_161A_0005_9CAE();
}

/**
 * Decompiled function f__1A34_161A_0005_9CAE()
 *
 * @name f__1A34_161A_0005_9CAE
 * @implements 1A34:161A:0005:9CAE ()
 *
 * Called From: 1A34:161A:0026:EDA4
 */
void f__1A34_161A_0005_9CAE()
{
	emu_addw(&emu_sp, 0x8);
	f__1A34_1652_0024_0E3F(); return;
}

/**
 * Decompiled function f__1A34_161F_0010_7C7F()
 *
 * @name f__1A34_161F_0010_7C7F
 * @implements 1A34:161F:0010:7C7F ()
 *
 * Called From: 1A34:165E:0024:0E3F
 * Called From: 1A34:165E:0026:68F6
 */
void f__1A34_161F_0010_7C7F()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x162F); f__1A34_14E6_001F_FB1E();
	f__1A34_162F_0021_E7E1();
}

/**
 * Decompiled function f__1A34_162F_0021_E7E1()
 *
 * @name f__1A34_162F_0021_E7E1
 * @implements 1A34:162F:0021:E7E1 ()
 *
 * Called From: 1A34:162F:0010:7C7F
 */
void f__1A34_162F_0021_E7E1()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax);
	emu_cmpw(&emu_di, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_1646_000A_B112(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx);
	emu_movw(&emu_si, emu_di);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1650); emu_cs = 0x0FE4; emu_Unit_FindNext();
	f__1A34_1650_0026_68F6();
}

/**
 * Decompiled function f__1A34_1646_000A_B112()
 *
 * @name f__1A34_1646_000A_B112
 * @implements 1A34:1646:000A:B112 ()
 *
 * Called From: 1A34:1636:0021:E7E1
 */
void f__1A34_1646_000A_B112()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1650); emu_cs = 0x0FE4; emu_Unit_FindNext();
	f__1A34_1650_0026_68F6();
}

/**
 * Decompiled function f__1A34_1650_0026_68F6()
 *
 * @name f__1A34_1650_0026_68F6
 * @implements 1A34:1650:0026:68F6 ()
 *
 * Called From: 1A34:1650:0021:E7E1
 * Called From: 1A34:1650:000A:B112
 */
void f__1A34_1650_0026_68F6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!emu_flags.zf) { f__1A34_161F_0010_7C7F(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__1A34_166E_0008_E189(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	f__1A34_1676_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_1652_0024_0E3F()
 *
 * @name f__1A34_1652_0024_0E3F
 * @implements 1A34:1652:0024:0E3F ()
 *
 * Called From: 1A34:161D:0005:9CAE
 */
void f__1A34_1652_0024_0E3F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!emu_flags.zf) { f__1A34_161F_0010_7C7F(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x166E; emu_last_cs = 0x1A34; emu_last_ip = 0x1662; emu_last_length = 0x0024; emu_last_crc = 0x0E3F; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	/* Unresolved jump */ emu_ip = 0x1676; emu_last_cs = 0x1A34; emu_last_ip = 0x1674; emu_last_length = 0x0024; emu_last_crc = 0x0E3F; emu_call();
}

/**
 * Decompiled function f__1A34_166E_0008_E189()
 *
 * @name f__1A34_166E_0008_E189
 * @implements 1A34:166E:0008:E189 ()
 *
 * Called From: 1A34:1662:0026:68F6
 */
void f__1A34_166E_0008_E189()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	f__1A34_1676_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_1676_0006_F7CE()
 *
 * @name f__1A34_1676_0006_F7CE
 * @implements 1A34:1676:0006:F7CE ()
 *
 * Called From: 1A34:1674:0008:E189
 * Called From: 1A34:1674:0026:68F6
 */
void f__1A34_1676_0006_F7CE()
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
 * Decompiled function f__1A34_167C_0015_AA25()
 *
 * @name f__1A34_167C_0015_AA25
 * @implements 1A34:167C:0015:AA25 ()
 *
 * Called From: 176C:20DA:000D:565E
 */
void f__1A34_167C_0015_AA25()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_1691_003D_4150(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x1853; emu_last_cs = 0x1A34; emu_last_ip = 0x168E; emu_last_length = 0x0015; emu_last_crc = 0xAA25; emu_call();
}

/**
 * Decompiled function f__1A34_168C_0005_9C04()
 *
 * @name f__1A34_168C_0005_9C04
 * @implements 1A34:168C:0005:9C04 ()
 *
 * Called From: 1A34:173F:0003:E2B2
 */
void f__1A34_168C_0005_9C04()
{
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_1853_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_168E_0003_9D90()
 *
 * @name f__1A34_168E_0003_9D90
 * @implements 1A34:168E:0003:9D90 ()
 *
 * Called From: 1A34:1850:0009:0669
 */
void f__1A34_168E_0003_9D90()
{
	f__1A34_1853_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_1691_003D_4150()
 *
 * @name f__1A34_1691_003D_4150
 * @implements 1A34:1691:003D:4150 ()
 *
 * Called From: 1A34:168A:0015:AA25
 */
void f__1A34_1691_003D_4150()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x64));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_si, emu_ax);
	emu_addw(&emu_si, 0x10);
	emu_andw(&emu_si, 0xE0);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x16CE); f__1A34_1E99_0012_1117();
	f__1A34_16CE_0016_BD4A();
}

/**
 * Decompiled function f__1A34_16CE_0016_BD4A()
 *
 * @name f__1A34_16CE_0016_BD4A
 * @implements 1A34:16CE:0016:BD4A ()
 *
 * Called From: 1A34:16CE:003D:4150
 */
void f__1A34_16CE_0016_BD4A()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x16E4); f__1A34_1E99_0012_1117();
	f__1A34_16E4_0014_DAB1();
}

/**
 * Decompiled function f__1A34_16E4_0014_DAB1()
 *
 * @name f__1A34_16E4_0014_DAB1
 * @implements 1A34:16E4:0014:DAB1 ()
 *
 * Called From: 1A34:16E4:0016:BD4A
 */
void f__1A34_16E4_0014_DAB1()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x16F8); emu_cs = 0x34CD; ovl__34CD(15);
	f__1A34_16F8_0014_4C64();
}

/**
 * Decompiled function f__1A34_16F8_0014_4C64()
 *
 * @name f__1A34_16F8_0014_4C64
 * @implements 1A34:16F8:0014:4C64 ()
 *
 * Called From: 1A34:16F8:0014:DAB1
 */
void f__1A34_16F8_0014_4C64()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x170C); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__1A34_170C_0023_B77B();
}

/**
 * Decompiled function f__1A34_170C_0023_B77B()
 *
 * @name f__1A34_170C_0023_B77B
 * @implements 1A34:170C:0023:B77B ()
 *
 * Called From: 1A34:170C:0014:4C64
 */
void f__1A34_170C_0023_B77B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x52), 0x7FFF);
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x5);
	emu_sarw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x172F); f__1A34_3146_0018_6887();
	f__1A34_172F_0013_210D();
}

/**
 * Decompiled function f__1A34_172F_0013_210D()
 *
 * @name f__1A34_172F_0013_210D
 * @implements 1A34:172F:0013:210D ()
 *
 * Called From: 1A34:172F:0023:B77B
 */
void f__1A34_172F_0013_210D()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax);
	emu_cmpw(&emu_di, 0xFF);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_173F_0003_E2B2(); return; }
	emu_cmpw(&emu_di, 0xFFFF);
	if (!emu_flags.zf) { f__1A34_1742_0008_490A(); return; }
	/* Unresolved jump */ emu_ip = 0x168C; emu_last_cs = 0x1A34; emu_last_ip = 0x173F; emu_last_length = 0x0013; emu_last_crc = 0x210D; emu_call();
}

/**
 * Decompiled function f__1A34_173F_0003_E2B2()
 *
 * @name f__1A34_173F_0003_E2B2
 * @implements 1A34:173F:0003:E2B2 ()
 *
 * Called From: 1A34:1738:0013:210D
 */
void f__1A34_173F_0003_E2B2()
{
	f__1A34_168C_0005_9C04(); return;
}

/**
 * Decompiled function f__1A34_1742_0008_490A()
 *
 * @name f__1A34_1742_0008_490A
 * @implements 1A34:1742:0008:490A ()
 *
 * Called From: 1A34:173D:0013:210D
 */
void f__1A34_1742_0008_490A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x174A); emu_cs = 0x34CD; ovl__34CD(13);
	f__1A34_174A_008E_D045();
}

/**
 * Decompiled function f__1A34_174A_008E_D045()
 *
 * @name f__1A34_174A_008E_D045
 * @implements 1A34:174A:008E:D045 ()
 *
 * Called From: 1A34:174A:0008:490A
 */
void f__1A34_174A_008E_D045()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xC);
	if (!emu_flags.zf) { f__1A34_1759_007F_EC66(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xA);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx, 0x1C);
	emu_imuluw(&emu_ax, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x3C));
	emu_movw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_bx, 0x3A42));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_di, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_1785_0053_8778(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xB);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1785; emu_last_cs = 0x1A34; emu_last_ip = 0x1780; emu_last_length = 0x008E; emu_last_crc = 0xD045; emu_call(); return; }
	emu_movw(&emu_di, 0xFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFF7F);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx, 0x1C);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A48), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x17A8; emu_last_cs = 0x1A34; emu_last_ip = 0x179D; emu_last_length = 0x008E; emu_last_crc = 0xD045; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x80);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_sarw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x17CC; emu_last_cs = 0x1A34; emu_last_ip = 0x17B8; emu_last_length = 0x008E; emu_last_crc = 0xD045; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x17CC; emu_last_cs = 0x1A34; emu_last_ip = 0x17C2; emu_last_length = 0x008E; emu_last_crc = 0xD045; emu_call(); return; }
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_sarw(&emu_ax, emu_cl);
	emu_subw(&emu_di, emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x17D8); emu_ip = 0x204C; emu_last_cs = 0x1A34; emu_last_ip = 0x17D5; emu_last_length = 0x008E; emu_last_crc = 0xD045; emu_call();
	f__1A34_17D8_003E_03D1();
}

/**
 * Decompiled function f__1A34_1759_007F_EC66()
 *
 * @name f__1A34_1759_007F_EC66
 * @implements 1A34:1759:007F:EC66 ()
 *
 * Called From: 1A34:1752:008E:D045
 */
void f__1A34_1759_007F_EC66()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx, 0x1C);
	emu_imuluw(&emu_ax, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x3C));
	emu_movw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_bx, 0x3A42));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_di, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_1785_0053_8778(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xB);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1785; emu_last_cs = 0x1A34; emu_last_ip = 0x1780; emu_last_length = 0x007F; emu_last_crc = 0xEC66; emu_call(); return; }
	emu_movw(&emu_di, 0xFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFF7F);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx, 0x1C);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A48), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x17A8; emu_last_cs = 0x1A34; emu_last_ip = 0x179D; emu_last_length = 0x007F; emu_last_crc = 0xEC66; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x80);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_sarw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x17CC; emu_last_cs = 0x1A34; emu_last_ip = 0x17B8; emu_last_length = 0x007F; emu_last_crc = 0xEC66; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x17CC; emu_last_cs = 0x1A34; emu_last_ip = 0x17C2; emu_last_length = 0x007F; emu_last_crc = 0xEC66; emu_call(); return; }
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_sarw(&emu_ax, emu_cl);
	emu_subw(&emu_di, emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x17D8); emu_ip = 0x204C; emu_last_cs = 0x1A34; emu_last_ip = 0x17D5; emu_last_length = 0x007F; emu_last_crc = 0xEC66; emu_call();
	f__1A34_17D8_003E_03D1();
}

/**
 * Decompiled function f__1A34_1785_0053_8778()
 *
 * @name f__1A34_1785_0053_8778
 * @implements 1A34:1785:0053:8778 ()
 *
 * Called From: 1A34:177A:007F:EC66
 * Called From: 1A34:177A:008E:D045
 */
void f__1A34_1785_0053_8778()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFF7F);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx, 0x1C);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A48), 0x0);
	if (emu_flags.zf) { f__1A34_17A8_0030_AD6E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x80);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_sarw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_17CC_000C_E29A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x17CC; emu_last_cs = 0x1A34; emu_last_ip = 0x17C2; emu_last_length = 0x0053; emu_last_crc = 0x8778; emu_call(); return; }
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_sarw(&emu_ax, emu_cl);
	emu_subw(&emu_di, emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x17D8); f__1A34_204C_0043_B1ED();
	f__1A34_17D8_003E_03D1();
}

/**
 * Decompiled function f__1A34_17A8_0030_AD6E()
 *
 * @name f__1A34_17A8_0030_AD6E
 * @implements 1A34:17A8:0030:AD6E ()
 *
 * Called From: 1A34:179D:0053:8778
 */
void f__1A34_17A8_0030_AD6E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_sarw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_17CC_000C_E29A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x17CC; emu_last_cs = 0x1A34; emu_last_ip = 0x17C2; emu_last_length = 0x0030; emu_last_crc = 0xAD6E; emu_call(); return; }
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_sarw(&emu_ax, emu_cl);
	emu_subw(&emu_di, emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x17D8); f__1A34_204C_0043_B1ED();
	f__1A34_17D8_003E_03D1();
}

/**
 * Decompiled function f__1A34_17CC_000C_E29A()
 *
 * @name f__1A34_17CC_000C_E29A
 * @implements 1A34:17CC:000C:E29A ()
 *
 * Called From: 1A34:17B8:0053:8778
 * Called From: 1A34:17B8:0030:AD6E
 */
void f__1A34_17CC_000C_E29A()
{
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x17D8); f__1A34_204C_0043_B1ED();
	f__1A34_17D8_003E_03D1();
}

/**
 * Decompiled function f__1A34_17D8_003E_03D1()
 *
 * @name f__1A34_17D8_003E_03D1
 * @implements 1A34:17D8:003E:03D1 ()
 *
 * Called From: 1A34:17D8:000C:E29A
 * Called From: 1A34:17D8:0030:AD6E
 * Called From: 1A34:17D8:0053:8778
 */
void f__1A34_17D8_003E_03D1()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x5);
	if (emu_flags.zf) { f__1A34_182A_0020_D9F7(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xA), emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1816); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_1816_0034_D883();
}

/**
 * Decompiled function f__1A34_1816_0034_D883()
 *
 * @name f__1A34_1816_0034_D883
 * @implements 1A34:1816:0034:D883 ()
 *
 * Called From: 1A34:1816:003E:03D1
 */
void f__1A34_1816_0034_D883()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xA), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4B), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x49), emu_dx);
	emu_movw(&emu_ax, 0xA);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x184A); f__1A34_193F_0013_FA4D();
	f__1A34_184A_0009_0669();
}

/**
 * Decompiled function f__1A34_182A_0020_D9F7()
 *
 * @name f__1A34_182A_0020_D9F7
 * @implements 1A34:182A:0020:D9F7 ()
 *
 * Called From: 1A34:17E3:003E:03D1
 */
void f__1A34_182A_0020_D9F7()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4B), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x49), emu_dx);
	emu_movw(&emu_ax, 0xA);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x184A); f__1A34_193F_0013_FA4D();
	f__1A34_184A_0009_0669();
}

/**
 * Decompiled function f__1A34_184A_0009_0669()
 *
 * @name f__1A34_184A_0009_0669
 * @implements 1A34:184A:0009:0669 ()
 *
 * Called From: 1A34:184A:0034:D883
 * Called From: 1A34:184A:0020:D9F7
 */
void f__1A34_184A_0009_0669()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x1);
	f__1A34_168E_0003_9D90(); return;
}

/**
 * Decompiled function f__1A34_1853_0006_F7CE()
 *
 * @name f__1A34_1853_0006_F7CE
 * @implements 1A34:1853:0006:F7CE ()
 *
 * Called From: 1A34:168E:0003:9D90
 * Called From: 1A34:168E:0005:9C04
 */
void f__1A34_1853_0006_F7CE()
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
 * Decompiled function f__1A34_193F_0013_FA4D()
 *
 * @name f__1A34_193F_0013_FA4D
 * @implements 1A34:193F:0013:FA4D ()
 *
 * Called From: 176C:04C6:0017:CAF9
 * Called From: 176C:04C6:001A:EC5B
 * Called From: 176C:185E:0014:9267
 * Called From: 1A34:0BFF:000E:A0B2
 * Called From: 1A34:0BFF:0017:66F8
 * Called From: 1A34:1847:0034:D883
 * Called From: 1A34:1847:0020:D9F7
 */
void f__1A34_193F_0013_FA4D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_1952_000E_0518(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x1A62; emu_last_cs = 0x1A34; emu_last_ip = 0x194F; emu_last_length = 0x0013; emu_last_crc = 0xFA4D; emu_call();
}

/**
 * Decompiled function f__1A34_194D_0005_1C30()
 *
 * @name f__1A34_194D_0005_1C30
 * @implements 1A34:194D:0005:1C30 ()
 *
 * Called From: 1A34:195E:000E:0518
 */
void f__1A34_194D_0005_1C30()
{
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_1A62_0004_893F(); return;
}

/**
 * Decompiled function f__1A34_1952_000E_0518()
 *
 * @name f__1A34_1952_000E_0518
 * @implements 1A34:1952:000E:0518 ()
 *
 * Called From: 1A34:194B:0013:FA4D
 */
void f__1A34_1952_000E_0518()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x59));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1960; emu_last_cs = 0x1A34; emu_last_ip = 0x195C; emu_last_length = 0x000E; emu_last_crc = 0x0518; emu_call(); return; }
	f__1A34_194D_0005_1C30(); return;
}

/**
 * Decompiled function f__1A34_1A62_0004_893F()
 *
 * @name f__1A34_1A62_0004_893F
 * @implements 1A34:1A62:0004:893F ()
 *
 * Called From: 1A34:194F:0005:1C30
 */
void f__1A34_1A62_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_1A66_0011_34D4()
 *
 * @name f__1A34_1A66_0011_34D4
 * @implements 1A34:1A66:0011:34D4 ()
 *
 * Called From: 06F7:02E6:000E:1B8D
 * Called From: 06F7:02E6:0019:1195
 * Called From: 0AEC:042D:0010:A74E
 * Called From: 176C:14E7:002C:0682
 * Called From: 176C:157C:0013:7ED5
 */
void f__1A34_1A66_0011_34D4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A77); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	f__1A34_1A77_0010_017A();
}

/**
 * Decompiled function f__1A34_1A77_0010_017A()
 *
 * @name f__1A34_1A77_0010_017A
 * @implements 1A34:1A77:0010:017A ()
 *
 * Called From: 1A34:1A77:0011:34D4
 */
void f__1A34_1A77_0010_017A()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1A84; emu_last_cs = 0x1A34; emu_last_ip = 0x1A7A; emu_last_length = 0x0010; emu_last_crc = 0x017A; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_1A87_000C_4A8C(); return; }
	/* Unresolved jump */ emu_ip = 0x1B62; emu_last_cs = 0x1A34; emu_last_ip = 0x1A84; emu_last_length = 0x0010; emu_last_crc = 0x017A; emu_call();
}

/**
 * Decompiled function f__1A34_1A87_000C_4A8C()
 *
 * @name f__1A34_1A87_000C_4A8C
 * @implements 1A34:1A87:000C:4A8C ()
 *
 * Called From: 1A34:1A82:0010:017A
 */
void f__1A34_1A87_000C_4A8C()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), emu_si);
	if (!emu_flags.zf) { f__1A34_1A93_0006_57C6(); return; }
	f__1A34_1B62_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_1A93_0006_57C6()
 *
 * @name f__1A34_1A93_0006_57C6
 * @implements 1A34:1A93:0006:57C6 ()
 *
 * Called From: 1A34:1A8E:000C:4A8C
 */
void f__1A34_1A93_0006_57C6()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A99); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	f__1A34_1A99_000C_77A4();
}

/**
 * Decompiled function f__1A34_1A99_000C_77A4()
 *
 * @name f__1A34_1A99_000C_77A4
 * @implements 1A34:1A99:000C:77A4 ()
 *
 * Called From: 1A34:1A99:0006:57C6
 */
void f__1A34_1A99_000C_77A4()
{
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x1);
	if (!emu_flags.zf) { f__1A34_1AFA_000F_A6AC(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1AA5); emu_cs = 0x167E; f__167E_00B7_0034_F3DA();
	f__1A34_1AA5_0009_2834();
}

/**
 * Decompiled function f__1A34_1AA5_0009_2834()
 *
 * @name f__1A34_1AA5_0009_2834
 * @implements 1A34:1AA5:0009:2834 ()
 *
 * Called From: 1A34:1AA5:000C:77A4
 */
void f__1A34_1AA5_0009_2834()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1AAE); emu_cs = 0x34CD; ovl__34CD(26);
	f__1A34_1AAE_001E_E8B0();
}

/**
 * Decompiled function f__1A34_1AAE_001E_E8B0()
 *
 * @name f__1A34_1AAE_001E_E8B0
 * @implements 1A34:1AAE:001E:E8B0 ()
 *
 * Called From: 1A34:1AAE:0009:2834
 */
void f__1A34_1AAE_001E_E8B0()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_1AD2_0006_62E9(); return; }
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1ACC); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_1ACC_0006_1CFB();
}

/**
 * Decompiled function f__1A34_1ACC_0006_1CFB()
 *
 * @name f__1A34_1ACC_0006_1CFB
 * @implements 1A34:1ACC:0006:1CFB ()
 *
 * Called From: 1A34:1ACC:001E:E8B0
 */
void f__1A34_1ACC_0006_1CFB()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	f__1A34_1AFA_000F_A6AC(); return;
}

/**
 * Decompiled function f__1A34_1AD2_0006_62E9()
 *
 * @name f__1A34_1AD2_0006_62E9
 * @implements 1A34:1AD2:0006:62E9 ()
 *
 * Called From: 1A34:1ABB:001E:E8B0
 */
void f__1A34_1AD2_0006_62E9()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1AD8); emu_cs = 0x34CD; ovl__34CD(30);
	f__1A34_1AD8_001E_6C91();
}

/**
 * Decompiled function f__1A34_1AD8_001E_6C91()
 *
 * @name f__1A34_1AD8_001E_6C91
 * @implements 1A34:1AD8:001E:6C91 ()
 *
 * Called From: 1A34:1AD8:0006:62E9
 */
void f__1A34_1AD8_001E_6C91()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__1A34_1AFA_000F_A6AC(); return; }
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1AF6); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_1AF6_0013_A8EA();
}

/**
 * Decompiled function f__1A34_1AF6_0013_A8EA()
 *
 * @name f__1A34_1AF6_0013_A8EA
 * @implements 1A34:1AF6:0013:A8EA ()
 *
 * Called From: 1A34:1AF6:001E:6C91
 */
void f__1A34_1AF6_0013_A8EA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1B09); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_1B09_001A_C543();
}

/**
 * Decompiled function f__1A34_1AFA_000F_A6AC()
 *
 * @name f__1A34_1AFA_000F_A6AC
 * @implements 1A34:1AFA:000F:A6AC ()
 *
 * Called From: 1A34:1A9D:000C:77A4
 * Called From: 1A34:1AD0:0006:1CFB
 * Called From: 1A34:1AE5:001E:6C91
 */
void f__1A34_1AFA_000F_A6AC()
{
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1B09); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_1B09_001A_C543();
}

/**
 * Decompiled function f__1A34_1B09_001A_C543()
 *
 * @name f__1A34_1B09_001A_C543
 * @implements 1A34:1B09:001A:C543 ()
 *
 * Called From: 1A34:1B09:000F:A6AC
 * Called From: 1A34:1B09:0013:A8EA
 */
void f__1A34_1B09_001A_C543()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_si);
	if (!emu_flags.zf) { f__1A34_1B2F_0039_BAC8(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1B23); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__1A34_1B23_0008_A673();
}

/**
 * Decompiled function f__1A34_1B23_0008_A673()
 *
 * @name f__1A34_1B23_0008_A673
 * @implements 1A34:1B23:0008:A673 ()
 *
 * Called From: 1A34:1B23:001A:C543
 */
void f__1A34_1B23_0008_A673()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1B2B); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_1B2B_003D_2B4B();
}

/**
 * Decompiled function f__1A34_1B2B_003D_2B4B()
 *
 * @name f__1A34_1B2B_003D_2B4B
 * @implements 1A34:1B2B:003D:2B4B ()
 *
 * Called From: 1A34:1B2B:0008:A673
 */
void f__1A34_1B2B_003D_2B4B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x54), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x40);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1B62; emu_last_cs = 0x1A34; emu_last_ip = 0x1B51; emu_last_length = 0x003D; emu_last_crc = 0x2B4B; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x56), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x72), 0xFF);
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
 * Decompiled function f__1A34_1B2F_0039_BAC8()
 *
 * @name f__1A34_1B2F_0039_BAC8
 * @implements 1A34:1B2F:0039:BAC8 ()
 *
 * Called From: 1A34:1B0D:001A:C543
 */
void f__1A34_1B2F_0039_BAC8()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x54), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x40);
	if (!emu_flags.zf) { f__1A34_1B62_0006_F7CE(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x56), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x72), 0xFF);
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
 * Decompiled function f__1A34_1B62_0006_F7CE()
 *
 * @name f__1A34_1B62_0006_F7CE
 * @implements 1A34:1B62:0006:F7CE ()
 *
 * Called From: 1A34:1A90:000C:4A8C
 * Called From: 1A34:1B51:0039:BAC8
 */
void f__1A34_1B62_0006_F7CE()
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
 * Decompiled function f__1A34_1B68_0019_AAA0()
 *
 * @name f__1A34_1B68_0019_AAA0
 * @implements 1A34:1B68:0019:AAA0 ()
 *
 * Called From: 0AEC:040B:0010:476E
 * Called From: 1391:034A:000E:E4D8
 * Called From: 176C:1B28:000E:16A7
 * Called From: 176C:2A9B:0010:A4E6
 * Called From: 1A34:24AA:004E:C488
 */
void f__1A34_1B68_0019_AAA0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1B86; emu_last_cs = 0x1A34; emu_last_ip = 0x1B79; emu_last_length = 0x0019; emu_last_crc = 0xAAA0; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1B81); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	f__1A34_1B81_0008_F715();
}

/**
 * Decompiled function f__1A34_1B81_0008_F715()
 *
 * @name f__1A34_1B81_0008_F715
 * @implements 1A34:1B81:0008:F715 ()
 *
 * Called From: 1A34:1B81:0019:AAA0
 */
void f__1A34_1B81_0008_F715()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1A34_1B89_000C_023A(); return; }
	/* Unresolved jump */ emu_ip = 0x1CAB; emu_last_cs = 0x1A34; emu_last_ip = 0x1B86; emu_last_length = 0x0008; emu_last_crc = 0xF715; emu_call();
}

/**
 * Decompiled function f__1A34_1B89_000C_023A()
 *
 * @name f__1A34_1B89_000C_023A
 * @implements 1A34:1B89:000C:023A ()
 *
 * Called From: 1A34:1B84:0008:F715
 */
void f__1A34_1B89_000C_023A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), emu_si);
	if (!emu_flags.zf) { f__1A34_1B95_0006_57C6(); return; }
	f__1A34_1CAB_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_1B95_0006_57C6()
 *
 * @name f__1A34_1B95_0006_57C6
 * @implements 1A34:1B95:0006:57C6 ()
 *
 * Called From: 1A34:1B90:000C:023A
 */
void f__1A34_1B95_0006_57C6()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1B9B); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	f__1A34_1B9B_000C_77C4();
}

/**
 * Decompiled function f__1A34_1B9B_000C_77C4()
 *
 * @name f__1A34_1B9B_000C_77C4
 * @implements 1A34:1B9B:000C:77C4 ()
 *
 * Called From: 1A34:1B9B:0006:57C6
 */
void f__1A34_1B9B_000C_77C4()
{
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x1);
	if (!emu_flags.zf) { f__1A34_1C0C_0006_3784(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1BA7); emu_cs = 0x167E; f__167E_00B7_0034_F3DA();
	f__1A34_1BA7_0009_2834();
}

/**
 * Decompiled function f__1A34_1BA7_0009_2834()
 *
 * @name f__1A34_1BA7_0009_2834
 * @implements 1A34:1BA7:0009:2834 ()
 *
 * Called From: 1A34:1BA7:000C:77C4
 */
void f__1A34_1BA7_0009_2834()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1BB0); emu_cs = 0x34CD; ovl__34CD(26);
	f__1A34_1BB0_002E_EAD1();
}

/**
 * Decompiled function f__1A34_1BB0_002E_EAD1()
 *
 * @name f__1A34_1BB0_002E_EAD1
 * @implements 1A34:1BB0:002E:EAD1 ()
 *
 * Called From: 1A34:1BB0:0009:2834
 */
void f__1A34_1BB0_002E_EAD1()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_1BE4_0006_62E9(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1BCF; emu_last_cs = 0x1A34; emu_last_ip = 0x1BC8; emu_last_length = 0x002E; emu_last_crc = 0xEAD1; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_flags.zf) { f__1A34_1BE2_0002_D43A(); return; }
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1BDE); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_1BDE_0006_1CFB();
}

/**
 * Decompiled function f__1A34_1BDE_0006_1CFB()
 *
 * @name f__1A34_1BDE_0006_1CFB
 * @implements 1A34:1BDE:0006:1CFB ()
 *
 * Called From: 1A34:1BDE:002E:EAD1
 */
void f__1A34_1BDE_0006_1CFB()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	f__1A34_1C0C_0006_3784(); return;
}

/**
 * Decompiled function f__1A34_1BE2_0002_D43A()
 *
 * @name f__1A34_1BE2_0002_D43A
 * @implements 1A34:1BE2:0002:D43A ()
 *
 * Called From: 1A34:1BCD:002E:EAD1
 */
void f__1A34_1BE2_0002_D43A()
{
	f__1A34_1C0C_0006_3784(); return;
}

/**
 * Decompiled function f__1A34_1BE4_0006_62E9()
 *
 * @name f__1A34_1BE4_0006_62E9
 * @implements 1A34:1BE4:0006:62E9 ()
 *
 * Called From: 1A34:1BBD:002E:EAD1
 */
void f__1A34_1BE4_0006_62E9()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1BEA); emu_cs = 0x34CD; ovl__34CD(30);
	f__1A34_1BEA_001E_6C91();
}

/**
 * Decompiled function f__1A34_1BEA_001E_6C91()
 *
 * @name f__1A34_1BEA_001E_6C91
 * @implements 1A34:1BEA:001E:6C91 ()
 *
 * Called From: 1A34:1BEA:0006:62E9
 */
void f__1A34_1BEA_001E_6C91()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__1A34_1C0C_0006_3784(); return; }
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1C08); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_1C08_000A_2B08();
}

/**
 * Decompiled function f__1A34_1C08_000A_2B08()
 *
 * @name f__1A34_1C08_000A_2B08
 * @implements 1A34:1C08:000A:2B08 ()
 *
 * Called From: 1A34:1C08:001E:6C91
 */
void f__1A34_1C08_000A_2B08()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1C12); emu_cs = 0x167E; f__167E_02AE_000C_CC85();
	f__1A34_1C12_0023_2D66();
}

/**
 * Decompiled function f__1A34_1C0C_0006_3784()
 *
 * @name f__1A34_1C0C_0006_3784
 * @implements 1A34:1C0C:0006:3784 ()
 *
 * Called From: 1A34:1B9F:000C:77C4
 * Called From: 1A34:1BE2:0002:D43A
 * Called From: 1A34:1BE2:0006:1CFB
 * Called From: 1A34:1BF7:001E:6C91
 */
void f__1A34_1C0C_0006_3784()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1C12); emu_cs = 0x167E; f__167E_02AE_000C_CC85();
	f__1A34_1C12_0023_2D66();
}

/**
 * Decompiled function f__1A34_1C12_0023_2D66()
 *
 * @name f__1A34_1C12_0023_2D66
 * @implements 1A34:1C12:0023:2D66 ()
 *
 * Called From: 1A34:1C12:0006:3784
 * Called From: 1A34:1C12:000A:2B08
 */
void f__1A34_1C12_0023_2D66()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__1A34_1C9C_0015_88FE(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1C35); emu_Unit_GetHouseID();
	f__1A34_1C35_0018_2310();
}

/**
 * Decompiled function f__1A34_1C35_0018_2310()
 *
 * @name f__1A34_1C35_0018_2310
 * @implements 1A34:1C35:0018:2310 ()
 *
 * Called From: 1A34:1C35:0023:2D66
 */
void f__1A34_1C35_0018_2310()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (!emu_flags.zf) { f__1A34_1C9C_0015_88FE(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1C4D); f__1A34_3014_001B_858E();
	f__1A34_1C4D_0033_213E();
}

/**
 * Decompiled function f__1A34_1C4D_0033_213E()
 *
 * @name f__1A34_1C4D_0033_213E
 * @implements 1A34:1C4D:0033:213E ()
 *
 * Called From: 1A34:1C4D:0018:2310
 */
void f__1A34_1C4D_0033_213E()
{
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { f__1A34_1C71_000F_A6D7(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (!emu_flags.zf) { f__1A34_1C9C_0015_88FE(); return; }
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1C80); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_1C80_0012_CA6A();
}

/**
 * Decompiled function f__1A34_1C71_000F_A6D7()
 *
 * @name f__1A34_1C71_000F_A6D7
 * @implements 1A34:1C71:000F:A6D7 ()
 *
 * Called From: 1A34:1C53:0033:213E
 */
void f__1A34_1C71_000F_A6D7()
{
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1C80); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_1C80_0012_CA6A();
}

/**
 * Decompiled function f__1A34_1C80_0012_CA6A()
 *
 * @name f__1A34_1C80_0012_CA6A
 * @implements 1A34:1C80:0012:CA6A ()
 *
 * Called From: 1A34:1C80:0033:213E
 * Called From: 1A34:1C80:000F:A6D7
 */
void f__1A34_1C80_0012_CA6A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1C92); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_1C92_0008_9B67();
}

/**
 * Decompiled function f__1A34_1C92_0008_9B67()
 *
 * @name f__1A34_1C92_0008_9B67
 * @implements 1A34:1C92:0008:9B67 ()
 *
 * Called From: 1A34:1C92:0012:CA6A
 */
void f__1A34_1C92_0008_9B67()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1C9A); emu_cs = 0x0C10; f__0C10_0008_0014_19CD();
	f__1A34_1C9A_0017_EC4D();
}

/**
 * Decompiled function f__1A34_1C9A_0017_EC4D()
 *
 * @name f__1A34_1C9A_0017_EC4D
 * @implements 1A34:1C9A:0017:EC4D ()
 *
 * Called From: 1A34:1C9A:0008:9B67
 */
void f__1A34_1C9A_0017_EC4D()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x56), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x72), 0xFF);
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
 * Decompiled function f__1A34_1C9C_0015_88FE()
 *
 * @name f__1A34_1C9C_0015_88FE
 * @implements 1A34:1C9C:0015:88FE ()
 *
 * Called From: 1A34:1C1F:0023:2D66
 * Called From: 1A34:1C3A:0018:2310
 * Called From: 1A34:1C6F:0033:213E
 */
void f__1A34_1C9C_0015_88FE()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x56), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x72), 0xFF);
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
 * Decompiled function f__1A34_1CAB_0006_F7CE()
 *
 * @name f__1A34_1CAB_0006_F7CE
 * @implements 1A34:1CAB:0006:F7CE ()
 *
 * Called From: 1A34:1B92:000C:023A
 */
void f__1A34_1CAB_0006_F7CE()
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
 * Decompiled function f__1A34_1CB1_003A_B457()
 *
 * @name f__1A34_1CB1_003A_B457
 * @implements 1A34:1CB1:003A:B457 ()
 *
 * Called From: B4A2:06AC:0030:38D3
 */
void f__1A34_1CB1_003A_B457()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_subw(&emu_ax, 0x8);
	emu_movw(&emu_si, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x22);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_cs);
	emu_push(0x1CEB); emu_Unit_GetHouseID();
	f__1A34_1CEB_005D_8082();
}

/**
 * Decompiled function f__1A34_1CEB_005D_8082()
 *
 * @name f__1A34_1CEB_005D_8082
 * @implements 1A34:1CEB:005D:8082 ()
 *
 * Called From: 1A34:1CEB:003A:B457
 */
void f__1A34_1CEB_005D_8082()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_flags.zf) { f__1A34_1D06_0042_3307(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1D06; emu_last_cs = 0x1A34; emu_last_ip = 0x1CFC; emu_last_length = 0x005D; emu_last_crc = 0x8082; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C2A);
	emu_movw(&emu_ax, emu_si);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x50));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_di, emu_ax);
	emu_cmpw(&emu_di, 0xFFFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1D2D; emu_last_cs = 0x1A34; emu_last_ip = 0x1D20; emu_last_length = 0x005D; emu_last_crc = 0x8082; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x4F));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_di, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x59), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1D6F; emu_last_cs = 0x1A34; emu_last_ip = 0x1D36; emu_last_length = 0x005D; emu_last_crc = 0x8082; emu_call(); return; }
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x1D48); emu_ip = 0x193F; emu_last_cs = 0x1A34; emu_last_ip = 0x1D45; emu_last_length = 0x005D; emu_last_crc = 0x8082; emu_call();
	/* Unresolved jump */ emu_ip = 0x1D48; emu_last_cs = 0x1A34; emu_last_ip = 0x1D48; emu_last_length = 0x005D; emu_last_crc = 0x8082; emu_call();
}

/**
 * Decompiled function f__1A34_1D06_0042_3307()
 *
 * @name f__1A34_1D06_0042_3307
 * @implements 1A34:1D06:0042:3307 ()
 *
 * Called From: 1A34:1CF1:005D:8082
 */
void f__1A34_1D06_0042_3307()
{
	emu_movw(&emu_ax, emu_si);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x50));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_di, emu_ax);
	emu_cmpw(&emu_di, 0xFFFF);
	if (!emu_flags.zf) { f__1A34_1D2D_001B_E5E3(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x4F));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_di, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x59), 0x0);
	if (emu_flags.zf) { f__1A34_1D6F_000E_514C(); return; }
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x1D48); emu_ip = 0x193F; emu_last_cs = 0x1A34; emu_last_ip = 0x1D45; emu_last_length = 0x0042; emu_last_crc = 0x3307; emu_call();
	/* Unresolved jump */ emu_ip = 0x1D48; emu_last_cs = 0x1A34; emu_last_ip = 0x1D48; emu_last_length = 0x0042; emu_last_crc = 0x3307; emu_call();
}

/**
 * Decompiled function f__1A34_1D2D_001B_E5E3()
 *
 * @name f__1A34_1D2D_001B_E5E3
 * @implements 1A34:1D2D:001B:E5E3 ()
 *
 * Called From: 1A34:1D20:0042:3307
 */
void f__1A34_1D2D_001B_E5E3()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x59), 0x0);
	if (emu_flags.zf) { f__1A34_1D6F_000E_514C(); return; }
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x1D48); emu_ip = 0x193F; emu_last_cs = 0x1A34; emu_last_ip = 0x1D45; emu_last_length = 0x001B; emu_last_crc = 0xE5E3; emu_call();
	/* Unresolved jump */ emu_ip = 0x1D48; emu_last_cs = 0x1A34; emu_last_ip = 0x1D48; emu_last_length = 0x001B; emu_last_crc = 0xE5E3; emu_call();
}

/**
 * Decompiled function f__1A34_1D69_0006_FDA3()
 *
 * @name f__1A34_1D69_0006_FDA3
 * @implements 1A34:1D69:0006:FDA3 ()
 *
 * Called From: 1A34:1E90:0003:E215
 * Called From: 1A34:1E90:0006:8837
 */
void f__1A34_1D69_0006_FDA3()
{
	emu_movw(&emu_ax, 0x1);
	f__1A34_1E93_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_1D6F_000E_514C()
 *
 * @name f__1A34_1D6F_000E_514C
 * @implements 1A34:1D6F:000E:514C ()
 *
 * Called From: 1A34:1D36:0042:3307
 * Called From: 1A34:1D36:001B:E5E3
 */
void f__1A34_1D6F_000E_514C()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1D7D); emu_cs = 0x348B; ovl__348B(5);
	f__1A34_1D7D_0046_90CE();
}

/**
 * Decompiled function f__1A34_1D7D_0046_90CE()
 *
 * @name f__1A34_1D7D_0046_90CE
 * @implements 1A34:1D7D:0046:90CE ()
 *
 * Called From: 1A34:1D7D:000E:514C
 */
void f__1A34_1D7D_0046_90CE()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0xC);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2E8A);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x76));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0E));
	if (emu_flags.zf) { f__1A34_1DC7_000D_0971(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38F4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38F2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38F6), emu_si);
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0xC);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2E8A);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x76));
	emu_push(emu_cs); emu_push(0x1DC3); emu_cs = 0x34E9; ovl__34E9(2);
	f__1A34_1DC3_0004_CD17();
}

/**
 * Decompiled function f__1A34_1DC3_0004_CD17()
 *
 * @name f__1A34_1DC3_0004_CD17
 * @implements 1A34:1DC3:0004:CD17 ()
 *
 * Called From: 1A34:1DC3:0046:90CE
 */
void f__1A34_1DC3_0004_CD17()
{
	emu_pop(&emu_cx);
	f__1A34_1E90_0003_E215(); return;
}

/**
 * Decompiled function f__1A34_1DC7_000D_0971()
 *
 * @name f__1A34_1DC7_000D_0971
 * @implements 1A34:1DC7:000D:0971 ()
 *
 * Called From: 1A34:1D97:0046:90CE
 */
void f__1A34_1DC7_000D_0971()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_cs); emu_push(0x1DD4); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	f__1A34_1DD4_002D_D435();
}

/**
 * Decompiled function f__1A34_1DD4_002D_D435()
 *
 * @name f__1A34_1DD4_002D_D435
 * @implements 1A34:1DD4:002D:D435 ()
 *
 * Called From: 1A34:1DD4:000D:0971
 */
void f__1A34_1DD4_002D_D435()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x72), 0xFF);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_cs); emu_push(0x1E01); emu_cs = 0x176C; f__176C_000E_000E_633D();
	f__1A34_1E01_0038_A980();
}

/**
 * Decompiled function f__1A34_1E01_0038_A980()
 *
 * @name f__1A34_1E01_0038_A980
 * @implements 1A34:1E01:0038:A980 ()
 *
 * Called From: 1A34:1E01:002D:D435
 */
void f__1A34_1E01_0038_A980()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (!emu_flags.zf) { f__1A34_1E3A_0014_E870(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0xC);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2E8A);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x78));
	emu_push(emu_cs); emu_push(0x1E39); emu_cs = 0x3483; ovl__3483(5);
	f__1A34_1E39_0015_EAB8();
}

/**
 * Decompiled function f__1A34_1E39_0015_EAB8()
 *
 * @name f__1A34_1E39_0015_EAB8
 * @implements 1A34:1E39:0015:EAB8 ()
 *
 * Called From: 1A34:1E39:0038:A980
 */
void f__1A34_1E39_0015_EAB8()
{
	emu_pop(&emu_cx);
	emu_cmpw(&emu_di, emu_si);
	if (emu_flags.zf) { f__1A34_1E90_0003_E215(); return; }
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1E4E); emu_cs = 0x01F7; f__01F7_286D_0023_9A13();
	f__1A34_1E4E_0028_9B00();
}

/**
 * Decompiled function f__1A34_1E3A_0014_E870()
 *
 * @name f__1A34_1E3A_0014_E870
 * @implements 1A34:1E3A:0014:E870 ()
 *
 * Called From: 1A34:1E1F:0038:A980
 */
void f__1A34_1E3A_0014_E870()
{
	emu_cmpw(&emu_di, emu_si);
	if (emu_flags.zf) { f__1A34_1E90_0003_E215(); return; }
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1E4E); emu_cs = 0x01F7; f__01F7_286D_0023_9A13();
	f__1A34_1E4E_0028_9B00();
}

/**
 * Decompiled function f__1A34_1E4E_0028_9B00()
 *
 * @name f__1A34_1E4E_0028_9B00
 * @implements 1A34:1E4E:0028:9B00 ()
 *
 * Called From: 1A34:1E4E:0014:E870
 * Called From: 1A34:1E4E:0015:EAB8
 */
void f__1A34_1E4E_0028_9B00()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__1A34_1E90_0003_E215(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x1E76); emu_cs = 0x348B; ovl__348B(3);
	f__1A34_1E76_0017_4275();
}

/**
 * Decompiled function f__1A34_1E76_0017_4275()
 *
 * @name f__1A34_1E76_0017_4275
 * @implements 1A34:1E76:0017:4275 ()
 *
 * Called From: 1A34:1E76:0028:9B00
 */
void f__1A34_1E76_0017_4275()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1E8D); emu_cs = 0x348B; ovl__348B(4);
	f__1A34_1E8D_0006_8837();
}

/**
 * Decompiled function f__1A34_1E8D_0006_8837()
 *
 * @name f__1A34_1E8D_0006_8837
 * @implements 1A34:1E8D:0006:8837 ()
 *
 * Called From: 1A34:1E8D:0017:4275
 */
void f__1A34_1E8D_0006_8837()
{
	emu_addw(&emu_sp, 0x6);
	f__1A34_1D69_0006_FDA3(); return;
}

/**
 * Decompiled function f__1A34_1E90_0003_E215()
 *
 * @name f__1A34_1E90_0003_E215
 * @implements 1A34:1E90:0003:E215 ()
 *
 * Called From: 1A34:1DC4:0004:CD17
 * Called From: 1A34:1E3C:0014:E870
 * Called From: 1A34:1E3C:0015:EAB8
 * Called From: 1A34:1E5D:0028:9B00
 */
void f__1A34_1E90_0003_E215()
{
	f__1A34_1D69_0006_FDA3(); return;
}

/**
 * Decompiled function f__1A34_1E93_0006_F7CE()
 *
 * @name f__1A34_1E93_0006_F7CE
 * @implements 1A34:1E93:0006:F7CE ()
 *
 * Called From: 1A34:1D6C:0006:FDA3
 */
void f__1A34_1E93_0006_F7CE()
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
 * Decompiled function f__1A34_1E99_0012_1117()
 *
 * @name f__1A34_1E99_0012_1117
 * @implements 1A34:1E99:0012:1117 ()
 *
 * Called From: 0972:0DCF:0012:86B3
 * Called From: 0972:0DEF:0020:86C2
 * Called From: 176C:0351:0011:5754
 * Called From: 176C:041F:0011:5754
 * Called From: 176C:0B2C:001D:FC9E
 * Called From: 176C:0B2C:0020:7404
 * Called From: 176C:0B4D:0021:373B
 * Called From: 176C:11F9:001C:41F2
 * Called From: 176C:1956:0029:D0CC
 * Called From: 176C:1A2A:001C:19A0
 * Called From: 176C:1BD1:0026:E434
 * Called From: 176C:1BE9:0018:0010
 * Called From: 176C:1BE9:0015:AA98
 * Called From: 176C:1CED:0011:5754
 * Called From: 176C:20C8:0036:E4C2
 * Called From: 176C:20C8:004D:941A
 * Called From: 176C:2996:000E:0610
 * Called From: 1A34:00DE:0016:183D
 * Called From: 1A34:0955:001D:C7A9
 * Called From: 1A34:096C:0017:BFB1
 * Called From: 1A34:16CB:003D:4150
 * Called From: 1A34:16E1:0016:BD4A
 * Called From: B4B5:05EE:001F:E8C6
 * Called From: B4B5:060E:0020:9640
 */
void f__1A34_1E99_0012_1117()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_1EAB_0047_FBFA(); return; }
	/* Unresolved jump */ emu_ip = 0x1F50; emu_last_cs = 0x1A34; emu_last_ip = 0x1EA8; emu_last_length = 0x0012; emu_last_crc = 0x1117; emu_call();
}

/**
 * Decompiled function f__1A34_1EAB_0047_FBFA()
 *
 * @name f__1A34_1EAB_0047_FBFA
 * @implements 1A34:1EAB:0047:FBFA ()
 *
 * Called From: 1A34:1EA6:0012:1117
 */
void f__1A34_1EAB_0047_FBFA()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_dx, 0x62);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x0);
	if (emu_flags.zf) { f__1A34_1ECF_0023_1B0A(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_dx, 0x65);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x1), emu_al);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { f__1A34_1EF2_0063_C627(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x2), emu_al);
	f__1A34_1F50_0005_8BCF(); return;
}

/**
 * Decompiled function f__1A34_1ECF_0023_1B0A()
 *
 * @name f__1A34_1ECF_0023_1B0A
 * @implements 1A34:1ECF:0023:1B0A ()
 *
 * Called From: 1A34:1EBE:0047:FBFA
 */
void f__1A34_1ECF_0023_1B0A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x1), emu_al);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { f__1A34_1EF2_0063_C627(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x2), emu_al);
	f__1A34_1F50_0005_8BCF(); return;
}

/**
 * Decompiled function f__1A34_1EF2_0063_C627()
 *
 * @name f__1A34_1EF2_0063_C627
 * @implements 1A34:1EF2:0063:C627 ()
 *
 * Called From: 1A34:1EE4:0023:1B0A
 * Called From: 1A34:1EE4:0047:FBFA
 */
void f__1A34_1EF2_0063_C627()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movb(&emu_ah, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_flags.zf) { f__1A34_1F50_0005_8BCF(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x42));
	emu_movb(&emu_cl, 0x2);
	emu_shlb(&emu_al, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_subw(&emu_dx, emu_ax);
	emu_movw(&emu_si, emu_dx);
	emu_cmpw(&emu_si, 0xFF80);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_1F3C_0019_F4A2(); return; }
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_1F42_0013_6812(); return; }
	emu_cmpw(&emu_si, 0x80);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_1F50_0005_8BCF(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_negb(&emu_al, emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_1F3C_0019_F4A2()
 *
 * @name f__1A34_1F3C_0019_F4A2
 * @implements 1A34:1F3C:0019:F4A2 ()
 *
 * Called From: 1A34:1F36:0063:C627
 */
void f__1A34_1F3C_0019_F4A2()
{
	emu_cmpw(&emu_si, 0x80);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_1F50_0005_8BCF(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_negb(&emu_al, emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_1F42_0013_6812()
 *
 * @name f__1A34_1F42_0013_6812
 * @implements 1A34:1F42:0013:6812 ()
 *
 * Called From: 1A34:1F3A:0063:C627
 */
void f__1A34_1F42_0013_6812()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_negb(&emu_al, emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_1F50_0005_8BCF()
 *
 * @name f__1A34_1F50_0005_8BCF
 * @implements 1A34:1F50:0005:8BCF ()
 *
 * Called From: 1A34:1EF0:0023:1B0A
 * Called From: 1A34:1EF0:0047:FBFA
 * Called From: 1A34:1EFE:0063:C627
 * Called From: 1A34:1F40:0063:C627
 * Called From: 1A34:1F40:0019:F4A2
 */
void f__1A34_1F50_0005_8BCF()
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
 * Decompiled function f__1A34_1F55_0019_98DF()
 *
 * @name f__1A34_1F55_0019_98DF
 * @implements 1A34:1F55:0019:98DF ()
 *
 * Called From: 176C:043E:0014:F073
 * Called From: 176C:043E:001F:6A65
 * Called From: 176C:043E:001C:3F74
 * Called From: 176C:045E:0020:60D4
 */
void f__1A34_1F55_0019_98DF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__1A34_1F6E_0023_4692(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_dx, 0x62);
	f__1A34_1F77_001A_CB58(); return;
}

/**
 * Decompiled function f__1A34_1F6E_0023_4692()
 *
 * @name f__1A34_1F6E_0023_4692
 * @implements 1A34:1F6E:0023:4692 ()
 *
 * Called From: 1A34:1F61:0019:98DF
 */
void f__1A34_1F6E_0023_4692()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_dx, 0x65);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_di, emu_ax);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__1A34_1F91_003D_BF07(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_2046_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_1F77_001A_CB58()
 *
 * @name f__1A34_1F77_001A_CB58
 * @implements 1A34:1F77:001A:CB58 ()
 *
 * Called From: 1A34:1F6C:0019:98DF
 */
void f__1A34_1F77_001A_CB58()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_di, emu_ax);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__1A34_1F91_003D_BF07(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_2046_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_1F8A_0007_14FC()
 *
 * @name f__1A34_1F8A_0007_14FC
 * @implements 1A34:1F8A:0007:14FC ()
 *
 * Called From: 1A34:2043:0006:0893
 * Called From: 1A34:2043:0003:62B1
 */
void f__1A34_1F8A_0007_14FC()
{
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_2046_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_1F91_003D_BF07()
 *
 * @name f__1A34_1F91_003D_BF07
 * @implements 1A34:1F91:003D:BF07 ()
 *
 * Called From: 1A34:1F88:001A:CB58
 * Called From: 1A34:1F88:0023:4692
 */
void f__1A34_1F91_003D_BF07()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x1));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_si, 0x80);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_1FBB_0013_3590(); return; }
	emu_subw(&emu_si, 0x100);
	emu_cmpw(&emu_si, 0xFF80);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_1FC4_000A_FFB0(); return; }
	emu_addw(&emu_si, 0x100);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1FCE; emu_last_cs = 0x1A34; emu_last_ip = 0x1FC6; emu_last_length = 0x003D; emu_last_crc = 0xBF07; emu_call(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_negw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x1FD0; emu_last_cs = 0x1A34; emu_last_ip = 0x1FCC; emu_last_length = 0x003D; emu_last_crc = 0xBF07; emu_call();
}

/**
 * Decompiled function f__1A34_1FBB_0013_3590()
 *
 * @name f__1A34_1FBB_0013_3590
 * @implements 1A34:1FBB:0013:3590 ()
 *
 * Called From: 1A34:1FB5:003D:BF07
 */
void f__1A34_1FBB_0013_3590()
{
	emu_cmpw(&emu_si, 0xFF80);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_1FC4_000A_FFB0(); return; }
	emu_addw(&emu_si, 0x100);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_1FCE_0016_113F(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_negw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x1FD0; emu_last_cs = 0x1A34; emu_last_ip = 0x1FCC; emu_last_length = 0x0013; emu_last_crc = 0x3590; emu_call();
}

/**
 * Decompiled function f__1A34_1FC4_000A_FFB0()
 *
 * @name f__1A34_1FC4_000A_FFB0
 * @implements 1A34:1FC4:000A:FFB0 ()
 *
 * Called From: 1A34:1FBE:0013:3590
 * Called From: 1A34:1FBE:003D:BF07
 */
void f__1A34_1FC4_000A_FFB0()
{
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_1FCE_0016_113F(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_negw(&emu_ax, emu_ax);
	f__1A34_1FD0_0014_3B0D(); return;
}

/**
 * Decompiled function f__1A34_1FCE_0016_113F()
 *
 * @name f__1A34_1FCE_0016_113F
 * @implements 1A34:1FCE:0016:113F ()
 *
 * Called From: 1A34:1FC6:000A:FFB0
 * Called From: 1A34:1FC6:0013:3590
 */
void f__1A34_1FCE_0016_113F()
{
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_1FE4_0025_4F2D(); return; }
	emu_movw(&emu_ax, emu_di);
	emu_negw(&emu_ax, emu_ax);
	f__1A34_1FE6_0023_3B79(); return;
}

/**
 * Decompiled function f__1A34_1FD0_0014_3B0D()
 *
 * @name f__1A34_1FD0_0014_3B0D
 * @implements 1A34:1FD0:0014:3B0D ()
 *
 * Called From: 1A34:1FCC:000A:FFB0
 */
void f__1A34_1FD0_0014_3B0D()
{
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_1FE4_0025_4F2D(); return; }
	emu_movw(&emu_ax, emu_di);
	emu_negw(&emu_ax, emu_ax);
	f__1A34_1FE6_0023_3B79(); return;
}

/**
 * Decompiled function f__1A34_1FE4_0025_4F2D()
 *
 * @name f__1A34_1FE4_0025_4F2D
 * @implements 1A34:1FE4:0025:4F2D ()
 *
 * Called From: 1A34:1FDC:0016:113F
 * Called From: 1A34:1FDC:0014:3B0D
 */
void f__1A34_1FE4_0025_4F2D()
{
	emu_movw(&emu_ax, emu_di);
	emu_cmpw(&emu_ax, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_1FF7_0012_7060(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x2), emu_al);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x2009); emu_cs = 0x34CD; ovl__34CD(12);
	f__1A34_2009_000A_8761();
}

/**
 * Decompiled function f__1A34_1FE6_0023_3B79()
 *
 * @name f__1A34_1FE6_0023_3B79
 * @implements 1A34:1FE6:0023:3B79 ()
 *
 * Called From: 1A34:1FE2:0014:3B0D
 * Called From: 1A34:1FE2:0016:113F
 */
void f__1A34_1FE6_0023_3B79()
{
	emu_cmpw(&emu_ax, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_1FF7_0012_7060(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x2), emu_al);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x2009); emu_cs = 0x34CD; ovl__34CD(12);
	f__1A34_2009_000A_8761();
}

/**
 * Decompiled function f__1A34_1FF7_0012_7060()
 *
 * @name f__1A34_1FF7_0012_7060
 * @implements 1A34:1FF7:0012:7060 ()
 *
 * Called From: 1A34:1FE8:0025:4F2D
 * Called From: 1A34:1FE8:0023:3B79
 */
void f__1A34_1FF7_0012_7060()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x2), emu_al);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x2009); emu_cs = 0x34CD; ovl__34CD(12);
	f__1A34_2009_000A_8761();
}

/**
 * Decompiled function f__1A34_2009_000A_8761()
 *
 * @name f__1A34_2009_000A_8761
 * @implements 1A34:2009:000A:8761 ()
 *
 * Called From: 1A34:2009:0012:7060
 * Called From: 1A34:2009:0025:4F2D
 * Called From: 1A34:2009:0023:3B79
 */
void f__1A34_2009_000A_8761()
{
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x2013); emu_cs = 0x34CD; ovl__34CD(12);
	f__1A34_2013_000E_768B();
}

/**
 * Decompiled function f__1A34_2013_000E_768B()
 *
 * @name f__1A34_2013_000E_768B
 * @implements 1A34:2013:000E:768B ()
 *
 * Called From: 1A34:2013:000A:8761
 */
void f__1A34_2013_000E_768B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (!emu_flags.zf) { f__1A34_2031_000F_8D11(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x2021); emu_cs = 0x34CD; ovl__34CD(19);
	f__1A34_2021_000A_B763();
}

/**
 * Decompiled function f__1A34_2021_000A_B763()
 *
 * @name f__1A34_2021_000A_B763
 * @implements 1A34:2021:000A:B763 ()
 *
 * Called From: 1A34:2021:000E:768B
 */
void f__1A34_2021_000A_B763()
{
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x202B); emu_cs = 0x34CD; ovl__34CD(19);
	f__1A34_202B_0015_129A();
}

/**
 * Decompiled function f__1A34_202B_0015_129A()
 *
 * @name f__1A34_202B_0015_129A
 * @implements 1A34:202B:0015:129A ()
 *
 * Called From: 1A34:202B:000A:B763
 */
void f__1A34_202B_0015_129A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_flags.zf) { f__1A34_2043_0003_62B1(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2040); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_2040_0006_0893();
}

/**
 * Decompiled function f__1A34_2031_000F_8D11()
 *
 * @name f__1A34_2031_000F_8D11
 * @implements 1A34:2031:000F:8D11 ()
 *
 * Called From: 1A34:2017:000E:768B
 */
void f__1A34_2031_000F_8D11()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2040); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_2040_0006_0893();
}

/**
 * Decompiled function f__1A34_2040_0006_0893()
 *
 * @name f__1A34_2040_0006_0893
 * @implements 1A34:2040:0006:0893 ()
 *
 * Called From: 1A34:2040:000F:8D11
 * Called From: 1A34:2040:0015:129A
 */
void f__1A34_2040_0006_0893()
{
	emu_addw(&emu_sp, 0x6);
	f__1A34_1F8A_0007_14FC(); return;
}

/**
 * Decompiled function f__1A34_2043_0003_62B1()
 *
 * @name f__1A34_2043_0003_62B1
 * @implements 1A34:2043:0003:62B1 ()
 *
 * Called From: 1A34:202F:0015:129A
 */
void f__1A34_2043_0003_62B1()
{
	f__1A34_1F8A_0007_14FC(); return;
}

/**
 * Decompiled function f__1A34_2046_0006_F7CE()
 *
 * @name f__1A34_2046_0006_F7CE
 * @implements 1A34:2046:0006:F7CE ()
 *
 * Called From: 1A34:1F8E:001A:CB58
 * Called From: 1A34:1F8E:0007:14FC
 * Called From: 1A34:1F8E:0023:4692
 */
void f__1A34_2046_0006_F7CE()
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
 * Decompiled function f__1A34_204C_0043_B1ED()
 *
 * @name f__1A34_204C_0043_B1ED
 * @implements 1A34:204C:0043:B1ED ()
 *
 * Called From: 176C:0B5E:0011:575D
 * Called From: 176C:0FB0:0013:6D6D
 * Called From: 176C:1047:0013:A51E
 * Called From: 176C:1106:0010:D1EF
 * Called From: 176C:1275:0010:E384
 * Called From: 1A34:077F:000E:6A0F
 * Called From: 1A34:097D:0011:5032
 * Called From: 1A34:0AEF:000F:F7E4
 * Called From: 1A34:17D5:000C:E29A
 * Called From: 1A34:17D5:0030:AD6E
 * Called From: 1A34:17D5:0053:8778
 * Called From: B4B5:061F:0011:7F5A
 */
void f__1A34_204C_0043_B1ED()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x6A), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x69), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x68), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (!emu_flags.zf) { f__1A34_2094_0009_10FF(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x58));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0xFF);
	emu_subw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x208F); emu_cs = 0x34C1; ovl__34C1(0);
	f__1A34_208F_000E_1381();
}

/**
 * Decompiled function f__1A34_208F_000E_1381()
 *
 * @name f__1A34_208F_000E_1381
 * @implements 1A34:208F:000E:1381 ()
 *
 * Called From: 1A34:208F:0043:B1ED
 */
void f__1A34_208F_000E_1381()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__1A34_209D_000A_40EF(); return; }
	f__1A34_2128_000C_2E68(); return;
}

/**
 * Decompiled function f__1A34_2094_0009_10FF()
 *
 * @name f__1A34_2094_0009_10FF
 * @implements 1A34:2094:0009:10FF ()
 *
 * Called From: 1A34:2077:0043:B1ED
 */
void f__1A34_2094_0009_10FF()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__1A34_209D_000A_40EF(); return; }
	f__1A34_2128_000C_2E68(); return;
}

/**
 * Decompiled function f__1A34_209D_000A_40EF()
 *
 * @name f__1A34_209D_000A_40EF
 * @implements 1A34:209D:000A:40EF ()
 *
 * Called From: 1A34:2098:0009:10FF
 * Called From: 1A34:2098:000E:1381
 */
void f__1A34_209D_000A_40EF()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x100);
	if (emu_flags.cf) { f__1A34_20A7_002B_1C86(); return; }
	/* Unresolved jump */ emu_ip = 0x2128; emu_last_cs = 0x1A34; emu_last_ip = 0x20A4; emu_last_length = 0x000A; emu_last_crc = 0x40EF; emu_call();
}

/**
 * Decompiled function f__1A34_20A7_002B_1C86()
 *
 * @name f__1A34_20A7_002B_1C86
 * @implements 1A34:20A7:002B:1C86 ()
 *
 * Called From: 1A34:20A2:000A:40EF
 */
void f__1A34_20A7_002B_1C86()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x6B), emu_al);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x40));
	emu_push(emu_cs); emu_push(0x20D2); emu_cs = 0x34C1; ovl__34C1(0);
	f__1A34_20D2_0019_5DD9();
}

/**
 * Decompiled function f__1A34_20D2_0019_5DD9()
 *
 * @name f__1A34_20D2_0019_5DD9
 * @implements 1A34:20D2:0019:5DD9 ()
 *
 * Called From: 1A34:20D2:002B:1C86
 */
void f__1A34_20D2_0019_5DD9()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x20EB); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	f__1A34_20EB_0022_BFBA();
}

/**
 * Decompiled function f__1A34_20EB_0022_BFBA()
 *
 * @name f__1A34_20EB_0022_BFBA
 * @implements 1A34:20EB:0022:BFBA ()
 *
 * Called From: 1A34:20EB:0019:5DD9
 */
void f__1A34_20EB_0022_BFBA()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movb(&emu_cl, 0x4);
	emu_shrw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_cl);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__1A34_210D_001B_F80B(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	f__1A34_2112_0016_0896(); return;
}

/**
 * Decompiled function f__1A34_210D_001B_F80B()
 *
 * @name f__1A34_210D_001B_F80B
 * @implements 1A34:210D:001B:F80B ()
 *
 * Called From: 1A34:2104:0022:BFBA
 */
void f__1A34_210D_001B_F80B()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x6A), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x68), emu_al);
	f__1A34_2130_0004_893F(); return;
}

/**
 * Decompiled function f__1A34_2112_0016_0896()
 *
 * @name f__1A34_2112_0016_0896
 * @implements 1A34:2112:0016:0896 ()
 *
 * Called From: 1A34:210B:0022:BFBA
 */
void f__1A34_2112_0016_0896()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x6A), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x68), emu_al);
	f__1A34_2130_0004_893F(); return;
}

/**
 * Decompiled function f__1A34_2128_000C_2E68()
 *
 * @name f__1A34_2128_000C_2E68
 * @implements 1A34:2128:000C:2E68 ()
 *
 * Called From: 1A34:209A:0009:10FF
 * Called From: 1A34:209A:000E:1381
 */
void f__1A34_2128_000C_2E68()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x6B), 0x0);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2130_0004_893F()
 *
 * @name f__1A34_2130_0004_893F
 * @implements 1A34:2130:0004:893F ()
 *
 * Called From: 1A34:2126:001B:F80B
 * Called From: 1A34:2126:0016:0896
 */
void f__1A34_2130_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2134_001E_3E9A()
 *
 * @name f__1A34_2134_001E_3E9A
 * @implements 1A34:2134:001E:3E9A ()
 *
 * Called From: 176C:0368:000D:D0BA
 */
void f__1A34_2134_001E_3E9A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x6A));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_si, emu_ax);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__1A34_2152_0029_FB3F(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_21DA_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_214B_0007_54F3()
 *
 * @name f__1A34_214B_0007_54F3
 * @implements 1A34:214B:0007:54F3 ()
 *
 * Called From: 1A34:21D7:000D:A989
 * Called From: 1A34:21D7:0010:2113
 */
void f__1A34_214B_0007_54F3()
{
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_21DA_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_2152_0029_FB3F()
 *
 * @name f__1A34_2152_0029_FB3F
 * @implements 1A34:2152:0029:FB3F ()
 *
 * Called From: 1A34:2149:001E:3E9A
 */
void f__1A34_2152_0029_FB3F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x69));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x68));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x217B); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	f__1A34_217B_0033_EFF3();
}

/**
 * Decompiled function f__1A34_217B_0033_EFF3()
 *
 * @name f__1A34_217B_0033_EFF3
 * @implements 1A34:217B:0033:EFF3 ()
 *
 * Called From: 1A34:217B:0029:FB3F
 */
void f__1A34_217B_0033_EFF3()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF00);
	if (emu_flags.zf) { f__1A34_21CD_000D_A989(); return; }
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_si, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4B));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x49));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x21AE); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__1A34_21AE_001C_C286();
}

/**
 * Decompiled function f__1A34_21AE_001C_C286()
 *
 * @name f__1A34_21AE_001C_C286
 * @implements 1A34:21AE:001C:C286 ()
 *
 * Called From: 1A34:21AE:0033:EFF3
 */
void f__1A34_21AE_001C_C286()
{
	emu_addw(&emu_sp, 0x8);
	emu_addw(&emu_ax, 0x10);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	if (!emu_flags.cf) { f__1A34_21BF_000B_7C30(); return; }
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x21CA); f__1A34_0005_001F_38E2();
	f__1A34_21CA_0010_2113();
}

/**
 * Decompiled function f__1A34_21BF_000B_7C30()
 *
 * @name f__1A34_21BF_000B_7C30
 * @implements 1A34:21BF:000B:7C30 ()
 *
 * Called From: 1A34:21BA:001C:C286
 */
void f__1A34_21BF_000B_7C30()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x21CA); f__1A34_0005_001F_38E2();
	f__1A34_21CA_0010_2113();
}

/**
 * Decompiled function f__1A34_21CA_0010_2113()
 *
 * @name f__1A34_21CA_0010_2113
 * @implements 1A34:21CA:0010:2113 ()
 *
 * Called From: 1A34:21CA:000B:7C30
 * Called From: 1A34:21CA:001C:C286
 */
void f__1A34_21CA_0010_2113()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x69), emu_al);
	f__1A34_214B_0007_54F3(); return;
}

/**
 * Decompiled function f__1A34_21CD_000D_A989()
 *
 * @name f__1A34_21CD_000D_A989
 * @implements 1A34:21CD:000D:A989 ()
 *
 * Called From: 1A34:2188:0033:EFF3
 */
void f__1A34_21CD_000D_A989()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x69), emu_al);
	f__1A34_214B_0007_54F3(); return;
}

/**
 * Decompiled function f__1A34_21DA_0006_F7CE()
 *
 * @name f__1A34_21DA_0006_F7CE
 * @implements 1A34:21DA:0006:F7CE ()
 *
 * Called From: 1A34:214F:001E:3E9A
 * Called From: 1A34:214F:0007:54F3
 */
void f__1A34_21DA_0006_F7CE()
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
 * Decompiled function f__1A34_21E0_001A_547E()
 *
 * @name f__1A34_21E0_001A_547E
 * @implements 1A34:21E0:001A:547E ()
 *
 * Called From: 1391:05A9:0012:3EDC
 * Called From: 1391:05A9:0015:7A08
 */
void f__1A34_21E0_001A_547E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x21FA); emu_cs = 0x1082; emu_Building_FindFirst();
	f__1A34_21FA_0005_A42E();
}

/**
 * Decompiled function f__1A34_21FA_0005_A42E()
 *
 * @name f__1A34_21FA_0005_A42E
 * @implements 1A34:21FA:0005:A42E ()
 *
 * Called From: 1A34:21FA:001A:547E
 */
void f__1A34_21FA_0005_A42E()
{
	emu_addw(&emu_sp, 0x8);
	f__1A34_2241_001D_DE92(); return;
}

/**
 * Decompiled function f__1A34_21FF_0015_FCE4()
 *
 * @name f__1A34_21FF_0015_FCE4
 * @implements 1A34:21FF:0015:FCE4 ()
 *
 * Called From: 1A34:224D:001D:DE92
 * Called From: 1A34:224D:001F:6DF6
 */
void f__1A34_21FF_0015_FCE4()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x4);
	if (emu_flags.zf) { f__1A34_2234_000B_166D(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs);
	emu_push(0x2214); f__1A34_3491_0032_AFF8();
	f__1A34_2214_0020_1DD6();
}

/**
 * Decompiled function f__1A34_2214_0020_1DD6()
 *
 * @name f__1A34_2214_0020_1DD6
 * @implements 1A34:2214:0020:1DD6 ()
 *
 * Called From: 1A34:2214:0015:FCE4
 */
void f__1A34_2214_0020_1DD6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_2234_000B_166D(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (!emu_flags.zf) { f__1A34_2234_000B_166D(); return; }
	emu_movw(&emu_ax, 0x1);
	f__1A34_2327_0005_8BCF(); return;
}

/**
 * Decompiled function f__1A34_222E_0006_3D16()
 *
 * @name f__1A34_222E_0006_3D16
 * @implements 1A34:222E:0006:3D16 ()
 *
 * Called From: 1A34:2288:001C:7EB8
 * Called From: 1A34:22B5:0009:0824
 * Called From: 1A34:231F:0003:62A3
 */
void f__1A34_222E_0006_3D16()
{
	emu_movw(&emu_ax, 0x1);
	f__1A34_2327_0005_8BCF(); return;
}

/**
 * Decompiled function f__1A34_2231_0003_DD1C()
 *
 * @name f__1A34_2231_0003_DD1C
 * @implements 1A34:2231:0003:DD1C ()
 *
 * Called From: 1A34:2324:0005:E336
 */
void f__1A34_2231_0003_DD1C()
{
	f__1A34_2327_0005_8BCF(); return;
}

/**
 * Decompiled function f__1A34_2234_000B_166D()
 *
 * @name f__1A34_2234_000B_166D
 * @implements 1A34:2234:000B:166D ()
 *
 * Called From: 1A34:2207:0015:FCE4
 * Called From: 1A34:2222:0020:1DD6
 * Called From: 1A34:222C:0020:1DD6
 */
void f__1A34_2234_000B_166D()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x223F); emu_cs = 0x1082; emu_Building_FindNext();
	f__1A34_223F_001F_6DF6();
}

/**
 * Decompiled function f__1A34_223F_001F_6DF6()
 *
 * @name f__1A34_223F_001F_6DF6
 * @implements 1A34:223F:001F:6DF6 ()
 *
 * Called From: 1A34:223F:000B:166D
 */
void f__1A34_223F_001F_6DF6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { f__1A34_21FF_0015_FCE4(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x225E); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__1A34_225E_0005_9F2E();
}

/**
 * Decompiled function f__1A34_2241_001D_DE92()
 *
 * @name f__1A34_2241_001D_DE92
 * @implements 1A34:2241:001D:DE92 ()
 *
 * Called From: 1A34:21FD:0005:A42E
 */
void f__1A34_2241_001D_DE92()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { f__1A34_21FF_0015_FCE4(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x225E); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__1A34_225E_0005_9F2E();
}

/**
 * Decompiled function f__1A34_225E_0005_9F2E()
 *
 * @name f__1A34_225E_0005_9F2E
 * @implements 1A34:225E:0005:9F2E ()
 *
 * Called From: 1A34:225E:001F:6DF6
 * Called From: 1A34:225E:001D:DE92
 */
void f__1A34_225E_0005_9F2E()
{
	emu_addw(&emu_sp, 0x8);
	f__1A34_2297_0018_BCC2(); return;
}

/**
 * Decompiled function f__1A34_2263_000B_D285()
 *
 * @name f__1A34_2263_000B_D285
 * @implements 1A34:2263:000B:D285 ()
 *
 * Called From: 1A34:22A3:0018:BCC2
 * Called From: 1A34:22A3:001A:2AAE
 */
void f__1A34_2263_000B_D285()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x226E); f__1A34_3491_0032_AFF8();
	f__1A34_226E_001C_7EB8();
}

/**
 * Decompiled function f__1A34_226E_001C_7EB8()
 *
 * @name f__1A34_226E_001C_7EB8
 * @implements 1A34:226E:001C:7EB8 ()
 *
 * Called From: 1A34:226E:000B:D285
 */
void f__1A34_226E_001C_7EB8()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_228A_000B_799F(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (!emu_flags.zf) { f__1A34_228A_000B_799F(); return; }
	f__1A34_222E_0006_3D16(); return;
}

/**
 * Decompiled function f__1A34_228A_000B_799F()
 *
 * @name f__1A34_228A_000B_799F
 * @implements 1A34:228A:000B:799F ()
 *
 * Called From: 1A34:227C:001C:7EB8
 * Called From: 1A34:2286:001C:7EB8
 */
void f__1A34_228A_000B_799F()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2295); emu_cs = 0x0FE4; emu_Unit_FindNext();
	f__1A34_2295_001A_2AAE();
}

/**
 * Decompiled function f__1A34_2295_001A_2AAE()
 *
 * @name f__1A34_2295_001A_2AAE
 * @implements 1A34:2295:001A:2AAE ()
 *
 * Called From: 1A34:2295:000B:799F
 */
void f__1A34_2295_001A_2AAE()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1A34_2263_000B_D285(); return; }
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x22AF); emu_cs = 0x0FE4; f__0FE4_0333_000F_2B73();
	f__1A34_22AF_0009_0824();
}

/**
 * Decompiled function f__1A34_2297_0018_BCC2()
 *
 * @name f__1A34_2297_0018_BCC2
 * @implements 1A34:2297:0018:BCC2 ()
 *
 * Called From: 1A34:2261:0005:9F2E
 */
void f__1A34_2297_0018_BCC2()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1A34_2263_000B_D285(); return; }
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x22AF); emu_cs = 0x0FE4; f__0FE4_0333_000F_2B73();
	f__1A34_22AF_0009_0824();
}

/**
 * Decompiled function f__1A34_22AF_0009_0824()
 *
 * @name f__1A34_22AF_0009_0824
 * @implements 1A34:22AF:0009:0824 ()
 *
 * Called From: 1A34:22AF:0018:BCC2
 * Called From: 1A34:22AF:001A:2AAE
 */
void f__1A34_22AF_0009_0824()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__1A34_22B8_0010_8B9B(); return; }
	f__1A34_222E_0006_3D16(); return;
}

/**
 * Decompiled function f__1A34_22B8_0010_8B9B()
 *
 * @name f__1A34_22B8_0010_8B9B
 * @implements 1A34:22B8:0010:8B9B ()
 *
 * Called From: 1A34:22B3:0009:0824
 */
void f__1A34_22B8_0010_8B9B()
{
	emu_movw(&emu_ax, 0xC);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x22C8); emu_cs = 0x1082; emu_Building_FindFirst();
	f__1A34_22C8_001C_2671();
}

/**
 * Decompiled function f__1A34_22C8_001C_2671()
 *
 * @name f__1A34_22C8_001C_2671
 * @implements 1A34:22C8:001C:2671 ()
 *
 * Called From: 1A34:22C8:0010:8B9B
 */
void f__1A34_22C8_001C_2671()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_orw(&emu_ax, emu_dx);
	if (emu_flags.zf) { f__1A34_2322_0005_E336(); return; }
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x22E4); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_22E4_000D_82BF();
}

/**
 * Decompiled function f__1A34_22E4_000D_82BF()
 *
 * @name f__1A34_22E4_000D_82BF
 * @implements 1A34:22E4:000D:82BF ()
 *
 * Called From: 1A34:22E4:001C:2671
 */
void f__1A34_22E4_000D_82BF()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x22F1); f__1A34_232C_0011_B7DE();
	f__1A34_22F1_0023_B208();
}

/**
 * Decompiled function f__1A34_22F1_0023_B208()
 *
 * @name f__1A34_22F1_0023_B208
 * @implements 1A34:22F1:0023:B208 ()
 *
 * Called From: 1A34:22F1:000D:82BF
 */
void f__1A34_22F1_0023_B208()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x231F; emu_last_cs = 0x1A34; emu_last_ip = 0x2300; emu_last_length = 0x0023; emu_last_crc = 0xB208; emu_call(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (!emu_flags.zf) { f__1A34_231F_0003_62A3(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x32);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x2314); emu_cs = 0x0FCB; emu_ip = 0x005F; emu_last_cs = 0x1A34; emu_last_ip = 0x230F; emu_last_length = 0x0023; emu_last_crc = 0xB208; emu_call();
	/* Unresolved jump */ emu_ip = 0x2314; emu_last_cs = 0x1A34; emu_last_ip = 0x2314; emu_last_length = 0x0023; emu_last_crc = 0xB208; emu_call();
}

/**
 * Decompiled function f__1A34_231F_0003_62A3()
 *
 * @name f__1A34_231F_0003_62A3
 * @implements 1A34:231F:0003:62A3 ()
 *
 * Called From: 1A34:2306:0023:B208
 */
void f__1A34_231F_0003_62A3()
{
	f__1A34_222E_0006_3D16(); return;
}

/**
 * Decompiled function f__1A34_2322_0005_E336()
 *
 * @name f__1A34_2322_0005_E336
 * @implements 1A34:2322:0005:E336 ()
 *
 * Called From: 1A34:22D3:001C:2671
 */
void f__1A34_2322_0005_E336()
{
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_2231_0003_DD1C(); return;
}

/**
 * Decompiled function f__1A34_2327_0005_8BCF()
 *
 * @name f__1A34_2327_0005_8BCF
 * @implements 1A34:2327:0005:8BCF ()
 *
 * Called From: 1A34:2231:0003:DD1C
 * Called From: 1A34:2231:0006:3D16
 * Called From: 1A34:2231:0020:1DD6
 */
void f__1A34_2327_0005_8BCF()
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
 * Decompiled function f__1A34_232C_0011_B7DE()
 *
 * @name f__1A34_232C_0011_B7DE
 * @implements 1A34:232C:0011:B7DE ()
 *
 * Called From: 0AEC:058A:0010:F5AC
 * Called From: 1A34:22EE:000D:82BF
 */
void f__1A34_232C_0011_B7DE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x233D); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__1A34_233D_0009_1DF9();
}

/**
 * Decompiled function f__1A34_233D_0009_1DF9()
 *
 * @name f__1A34_233D_0009_1DF9
 * @implements 1A34:233D:0009:1DF9 ()
 *
 * Called From: 1A34:233D:0011:B7DE
 */
void f__1A34_233D_0009_1DF9()
{
	emu_andw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2346); emu_cs = 0x34CD; ovl__34CD(24);
	f__1A34_2346_0008_0AE5();
}

/**
 * Decompiled function f__1A34_2346_0008_0AE5()
 *
 * @name f__1A34_2346_0008_0AE5
 * @implements 1A34:2346:0008:0AE5 ()
 *
 * Called From: 1A34:2346:0009:1DF9
 */
void f__1A34_2346_0008_0AE5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x234E); emu_cs = 0x0F3F; f__0F3F_009D_0017_8464();
	f__1A34_234E_000D_9A60();
}

/**
 * Decompiled function f__1A34_234E_000D_9A60()
 *
 * @name f__1A34_234E_000D_9A60
 * @implements 1A34:234E:000D:9A60 ()
 *
 * Called From: 1A34:234E:0008:0AE5
 */
void f__1A34_234E_000D_9A60()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x235B); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	f__1A34_235B_001A_C4B6();
}

/**
 * Decompiled function f__1A34_235B_001A_C4B6()
 *
 * @name f__1A34_235B_001A_C4B6
 * @implements 1A34:235B:001A:C4B6 ()
 *
 * Called From: 1A34:235B:000D:9A60
 */
void f__1A34_235B_001A_C4B6()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_movw(&emu_ax, 0x2000);
	emu_movw(&emu_dx, 0x2000);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x2375); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	f__1A34_2375_0036_4CD2();
}

/**
 * Decompiled function f__1A34_2375_0036_4CD2()
 *
 * @name f__1A34_2375_0036_4CD2
 * @implements 1A34:2375:0036:4CD2 ()
 *
 * Called From: 1A34:2375:001A:C4B6
 */
void f__1A34_2375_0036_4CD2()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (!emu_flags.zf) { f__1A34_23EB_0019_E7B1(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x23AB); emu_ip = 0x08FB; emu_last_cs = 0x1A34; emu_last_ip = 0x23A8; emu_last_length = 0x0036; emu_last_crc = 0x4CD2; emu_call();
	/* Unresolved jump */ emu_ip = 0x23AB; emu_last_cs = 0x1A34; emu_last_ip = 0x23AB; emu_last_length = 0x0036; emu_last_crc = 0x4CD2; emu_call();
}

/**
 * Decompiled function f__1A34_23DF_0009_2420()
 *
 * @name f__1A34_23DF_0009_2420
 * @implements 1A34:23DF:0009:2420 ()
 *
 * Called From: 1A34:24B0:0006:0889
 */
void f__1A34_23DF_0009_2420()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__1A34_24F8_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_23EB_0019_E7B1()
 *
 * @name f__1A34_23EB_0019_E7B1
 * @implements 1A34:23EB:0019:E7B1 ()
 *
 * Called From: 1A34:2390:0036:4CD2
 */
void f__1A34_23EB_0019_E7B1()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2404); emu_Unit_Create();
	f__1A34_2404_0018_8B26();
}

/**
 * Decompiled function f__1A34_2404_0018_8B26()
 *
 * @name f__1A34_2404_0018_8B26
 * @implements 1A34:2404:0018:8B26 ()
 *
 * Called From: 1A34:2404:0019:E7B1
 */
void f__1A34_2404_0018_8B26()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1A34_241C_000A_D495(); return; }
	/* Unresolved jump */ emu_ip = 0x24DA; emu_last_cs = 0x1A34; emu_last_ip = 0x2419; emu_last_length = 0x0018; emu_last_crc = 0x8B26; emu_call();
}

/**
 * Decompiled function f__1A34_241C_000A_D495()
 *
 * @name f__1A34_241C_000A_D495
 * @implements 1A34:241C:000A:D495 ()
 *
 * Called From: 1A34:2417:0018:8B26
 */
void f__1A34_241C_000A_D495()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2426); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	f__1A34_2426_000F_6B18();
}

/**
 * Decompiled function f__1A34_2426_000F_6B18()
 *
 * @name f__1A34_2426_000F_6B18
 * @implements 1A34:2426:000F:6B18 ()
 *
 * Called From: 1A34:2426:000A:D495
 */
void f__1A34_2426_000F_6B18()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1A34_243B_0024_40BE(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2435); emu_cs = 0x0FE4; f__0FE4_0333_000F_2B73();
	f__1A34_2435_002A_0C1B();
}

/**
 * Decompiled function f__1A34_2435_002A_0C1B()
 *
 * @name f__1A34_2435_002A_0C1B
 * @implements 1A34:2435:002A:0C1B ()
 *
 * Called From: 1A34:2435:000F:6B18
 */
void f__1A34_2435_002A_0C1B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2444; emu_last_cs = 0x1A34; emu_last_ip = 0x2439; emu_last_length = 0x002A; emu_last_crc = 0x0C1B; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_movw(&emu_dx, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x245F); emu_Unit_Create();
	f__1A34_245F_004E_C488();
}

/**
 * Decompiled function f__1A34_243B_0024_40BE()
 *
 * @name f__1A34_243B_0024_40BE
 * @implements 1A34:243B:0024:40BE ()
 *
 * Called From: 1A34:242A:000F:6B18
 */
void f__1A34_243B_0024_40BE()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_movw(&emu_dx, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x245F); emu_Unit_Create();
	f__1A34_245F_004E_C488();
}

/**
 * Decompiled function f__1A34_245F_004E_C488()
 *
 * @name f__1A34_245F_004E_C488
 * @implements 1A34:245F:004E:C488 ()
 *
 * Called From: 1A34:245F:0024:40BE
 * Called From: 1A34:245F:002A:0C1B
 */
void f__1A34_245F_004E_C488()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x24B5; emu_last_cs = 0x1A34; emu_last_ip = 0x2472; emu_last_length = 0x004E; emu_last_crc = 0xC488; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x100);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_si, 0x0));
	emu_pop(&emu_es);
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x3), emu_al);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x249A; emu_last_cs = 0x1A34; emu_last_ip = 0x2490; emu_last_length = 0x004E; emu_last_crc = 0xC488; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x58), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x24B0; emu_last_cs = 0x1A34; emu_last_ip = 0x249E; emu_last_length = 0x004E; emu_last_crc = 0xC488; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x24AD); f__1A34_1B68_0019_AAA0();
	f__1A34_24AD_0006_0889();
}

/**
 * Decompiled function f__1A34_24AD_0006_0889()
 *
 * @name f__1A34_24AD_0006_0889
 * @implements 1A34:24AD:0006:0889 ()
 *
 * Called From: 1A34:24AD:004E:C488
 */
void f__1A34_24AD_0006_0889()
{
	emu_addw(&emu_sp, 0x6);
	f__1A34_23DF_0009_2420(); return;
}

/**
 * Decompiled function f__1A34_24F8_0006_F7CE()
 *
 * @name f__1A34_24F8_0006_F7CE
 * @implements 1A34:24F8:0006:F7CE ()
 *
 * Called From: 1A34:23E5:0009:2420
 */
void f__1A34_24F8_0006_F7CE()
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
 * Decompiled function f__1A34_24FE_002F_672A()
 *
 * @name f__1A34_24FE_002F_672A
 * @implements 1A34:24FE:002F:672A ()
 *
 * Called From: 0972:1302:001F:F082
 * Called From: 176C:180C:0017:CD04
 */
void f__1A34_24FE_002F_672A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x252D); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	f__1A34_252D_000F_5EE3();
}

/**
 * Decompiled function f__1A34_252D_000F_5EE3()
 *
 * @name f__1A34_252D_000F_5EE3
 * @implements 1A34:252D:000F:5EE3 ()
 *
 * Called From: 1A34:252D:002F:672A
 */
void f__1A34_252D_000F_5EE3()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x253C); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	f__1A34_253C_0008_768F();
}

/**
 * Decompiled function f__1A34_253C_0008_768F()
 *
 * @name f__1A34_253C_0008_768F
 * @implements 1A34:253C:0008:768F ()
 *
 * Called From: 1A34:253C:000F:5EE3
 */
void f__1A34_253C_0008_768F()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1A34_2544_000D_FA55(); return; }
	/* Unresolved jump */ emu_ip = 0x278C; emu_last_cs = 0x1A34; emu_last_ip = 0x2541; emu_last_length = 0x0008; emu_last_crc = 0x768F; emu_call();
}

/**
 * Decompiled function f__1A34_2544_000D_FA55()
 *
 * @name f__1A34_2544_000D_FA55
 * @implements 1A34:2544:000D:FA55 ()
 *
 * Called From: 1A34:253F:0008:768F
 */
void f__1A34_2544_000D_FA55()
{
	emu_movw(&emu_bx, emu_si);
	emu_subw(&emu_bx, 0x12);
	emu_cmpw(&emu_bx, 0x6);
	if ((emu_flags.cf || emu_flags.zf)) { f__1A34_2551_0007_FB98(); return; }
	/* Unresolved jump */ emu_ip = 0x278A; emu_last_cs = 0x1A34; emu_last_ip = 0x254E; emu_last_length = 0x000D; emu_last_crc = 0xFA55; emu_call();
}

/**
 * Decompiled function f__1A34_2551_0007_FB98()
 *
 * @name f__1A34_2551_0007_FB98
 * @implements 1A34:2551:0007:FB98 ()
 *
 * Called From: 1A34:254C:000D:FA55
 */
void f__1A34_2551_0007_FB98()
{
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x279A);
	switch (emu_ip) {
		case 0x2558: f__1A34_2558_0011_ABE2(); return;
		case 0x26AC: f__1A34_26AC_0011_ABE2(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1A34; emu_last_ip = 0x2553; emu_last_length = 0x0007; emu_last_crc = 0xFB98;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__1A34_2558_0011_ABE2()
 *
 * @name f__1A34_2558_0011_ABE2
 * @implements 1A34:2558:0011:ABE2 ()
 *
 * Called From: 1A34:2553:0007:FB98
 */
void f__1A34_2558_0011_ABE2()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2569); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	f__1A34_2569_001B_9AFF();
}

/**
 * Decompiled function f__1A34_2569_001B_9AFF()
 *
 * @name f__1A34_2569_001B_9AFF
 * @implements 1A34:2569:001B:9AFF ()
 *
 * Called From: 1A34:2569:0011:ABE2
 */
void f__1A34_2569_001B_9AFF()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2584); emu_Unit_Create();
	f__1A34_2584_0014_41D6();
}

/**
 * Decompiled function f__1A34_2584_0014_41D6()
 *
 * @name f__1A34_2584_0014_41D6
 * @implements 1A34:2584:0014:41D6 ()
 *
 * Called From: 1A34:2584:001B:9AFF
 */
void f__1A34_2584_0014_41D6()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1A34_2598_0012_84AB(); return; }
	f__1A34_26A9_0003_1D18(); return;
}

/**
 * Decompiled function f__1A34_2598_0012_84AB()
 *
 * @name f__1A34_2598_0012_84AB
 * @implements 1A34:2598:0012:84AB ()
 *
 * Called From: 1A34:2593:0014:41D6
 */
void f__1A34_2598_0012_84AB()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x58));
	emu_push(emu_cs); emu_push(0x25AA); emu_cs = 0x3483; ovl__3483(0);
	f__1A34_25AA_0038_84DA();
}

/**
 * Decompiled function f__1A34_25AA_0038_84DA()
 *
 * @name f__1A34_25AA_0038_84DA
 * @implements 1A34:25AA:0038:84DA ()
 *
 * Called From: 1A34:25AA:0012:84AB
 */
void f__1A34_25AA_0038_84DA()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x54), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4B), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x49), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x4000);
	if (emu_flags.zf) { f__1A34_262F_0016_7F42(); return; }
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x25E2); emu_cs = 0x2BB4; emu_ip = 0x0004; emu_last_cs = 0x1A34; emu_last_ip = 0x25DD; emu_last_length = 0x0038; emu_last_crc = 0x84DA; emu_call();
	/* Unresolved jump */ emu_ip = 0x25E2; emu_last_cs = 0x1A34; emu_last_ip = 0x25E2; emu_last_length = 0x0038; emu_last_crc = 0x84DA; emu_call();
}

/**
 * Decompiled function f__1A34_262F_0016_7F42()
 *
 * @name f__1A34_262F_0016_7F42
 * @implements 1A34:262F:0016:7F42 ()
 *
 * Called From: 1A34:25DB:0038:84DA
 */
void f__1A34_262F_0016_7F42()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x50));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x51), emu_al);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x2645); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	f__1A34_2645_0061_62F8();
}

/**
 * Decompiled function f__1A34_2645_0061_62F8()
 *
 * @name f__1A34_2645_0061_62F8
 * @implements 1A34:2645:0061:62F8 ()
 *
 * Called From: 1A34:2645:0016:7F42
 */
void f__1A34_2645_0061_62F8()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__1A34_2677_002F_A9D2(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (!emu_flags.zf) { f__1A34_2677_002F_A9D2(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlb(&emu_get_memory8(emu_es, emu_bx, 0x51), 0x1);
	emu_cmpw(&emu_si, 0x12);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x26A9; emu_last_cs = 0x1A34; emu_last_ip = 0x267A; emu_last_length = 0x0061; emu_last_crc = 0x62F8; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x9));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_dx, 0x1);
	emu_movb(&emu_cl, emu_get_memory8(emu_ds, 0x00, 0x3A38));
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x26A9; emu_last_cs = 0x1A34; emu_last_ip = 0x2690; emu_last_length = 0x0061; emu_last_crc = 0x62F8; emu_call(); return; }
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x26A6); emu_cs = 0x34CD; emu_ip = 0x00BB; emu_last_cs = 0x1A34; emu_last_ip = 0x26A1; emu_last_length = 0x0061; emu_last_crc = 0x62F8; emu_call();
	f__1A34_26A6_0006_773A();
}

/**
 * Decompiled function f__1A34_2677_002F_A9D2()
 *
 * @name f__1A34_2677_002F_A9D2
 * @implements 1A34:2677:002F:A9D2 ()
 *
 * Called From: 1A34:2652:0061:62F8
 * Called From: 1A34:266E:0061:62F8
 */
void f__1A34_2677_002F_A9D2()
{
	emu_cmpw(&emu_si, 0x12);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x26A9; emu_last_cs = 0x1A34; emu_last_ip = 0x267A; emu_last_length = 0x002F; emu_last_crc = 0xA9D2; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x9));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_dx, 0x1);
	emu_movb(&emu_cl, emu_get_memory8(emu_ds, 0x00, 0x3A38));
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x26A9; emu_last_cs = 0x1A34; emu_last_ip = 0x2690; emu_last_length = 0x002F; emu_last_crc = 0xA9D2; emu_call(); return; }
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x26A6); emu_cs = 0x34CD; ovl__34CD(31);
	f__1A34_26A6_0006_773A();
}

/**
 * Decompiled function f__1A34_26A6_0006_773A()
 *
 * @name f__1A34_26A6_0006_773A
 * @implements 1A34:26A6:0006:773A ()
 *
 * Called From: 1A34:26A6:002F:A9D2
 */
void f__1A34_26A6_0006_773A()
{
	emu_addw(&emu_sp, 0x6);
	f__1A34_278C_0008_C849(); return;
}

/**
 * Decompiled function f__1A34_26A9_0003_1D18()
 *
 * @name f__1A34_26A9_0003_1D18
 * @implements 1A34:26A9:0003:1D18 ()
 *
 * Called From: 1A34:2595:0014:41D6
 */
void f__1A34_26A9_0003_1D18()
{
	f__1A34_278C_0008_C849(); return;
}

/**
 * Decompiled function f__1A34_26AC_0011_ABE2()
 *
 * @name f__1A34_26AC_0011_ABE2
 * @implements 1A34:26AC:0011:ABE2 ()
 *
 * Called From: 1A34:2553:0007:FB98
 */
void f__1A34_26AC_0011_ABE2()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x26BD); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	f__1A34_26BD_0018_5400();
}

/**
 * Decompiled function f__1A34_26BD_0018_5400()
 *
 * @name f__1A34_26BD_0018_5400
 * @implements 1A34:26BD:0018:5400 ()
 *
 * Called From: 1A34:26BD:0011:ABE2
 */
void f__1A34_26BD_0018_5400()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_ax, 0x20);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x26D5); emu_cs = 0x0F3F; f__0F3F_028E_0015_1153();
	f__1A34_26D5_001B_C457();
}

/**
 * Decompiled function f__1A34_26D5_001B_C457()
 *
 * @name f__1A34_26D5_001B_C457
 * @implements 1A34:26D5:001B:C457 ()
 *
 * Called From: 1A34:26D5:0018:5400
 */
void f__1A34_26D5_001B_C457()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_ax, 0x80);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x26F0); emu_cs = 0x0F3F; f__0F3F_028E_0015_1153();
	f__1A34_26F0_001E_5D43();
}

/**
 * Decompiled function f__1A34_26F0_001E_5D43()
 *
 * @name f__1A34_26F0_001E_5D43
 * @implements 1A34:26F0:001E:5D43 ()
 *
 * Called From: 1A34:26F0:001B:C457
 */
void f__1A34_26F0_001E_5D43()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x270E); emu_Unit_Create();
	f__1A34_270E_0077_D7BC();
}

/**
 * Decompiled function f__1A34_270E_0077_D7BC()
 *
 * @name f__1A34_270E_0077_D7BC
 * @implements 1A34:270E:0077:D7BC ()
 *
 * Called From: 1A34:270E:001E:5D43
 */
void f__1A34_270E_0077_D7BC()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_2788_0002_C13A(); return; }
	emu_cmpw(&emu_si, 0x18);
	if (!emu_flags.zf) { f__1A34_2732_0053_7C9E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x50));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x51), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4B), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x49), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0xF);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x275B; emu_last_cs = 0x1A34; emu_last_ip = 0x2751; emu_last_length = 0x0077; emu_last_crc = 0xD7BC; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x40);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x9));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_dx, 0x1);
	emu_movb(&emu_cl, emu_get_memory8(emu_ds, 0x00, 0x3A38));
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2788; emu_last_cs = 0x1A34; emu_last_ip = 0x276F; emu_last_length = 0x0077; emu_last_crc = 0xD7BC; emu_call(); return; }
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x2785); emu_cs = 0x34CD; emu_ip = 0x00BB; emu_last_cs = 0x1A34; emu_last_ip = 0x2780; emu_last_length = 0x0077; emu_last_crc = 0xD7BC; emu_call();
	f__1A34_2785_0005_85EE();
}

/**
 * Decompiled function f__1A34_2732_0053_7C9E()
 *
 * @name f__1A34_2732_0053_7C9E
 * @implements 1A34:2732:0053:7C9E ()
 *
 * Called From: 1A34:2722:0077:D7BC
 */
void f__1A34_2732_0053_7C9E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4B), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x49), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0xF);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_275B_002A_9B6E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x40);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x9));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_dx, 0x1);
	emu_movb(&emu_cl, emu_get_memory8(emu_ds, 0x00, 0x3A38));
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2788; emu_last_cs = 0x1A34; emu_last_ip = 0x276F; emu_last_length = 0x0053; emu_last_crc = 0x7C9E; emu_call(); return; }
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x2785); emu_cs = 0x34CD; ovl__34CD(31);
	f__1A34_2785_0005_85EE();
}

/**
 * Decompiled function f__1A34_275B_002A_9B6E()
 *
 * @name f__1A34_275B_002A_9B6E
 * @implements 1A34:275B:002A:9B6E ()
 *
 * Called From: 1A34:2751:0053:7C9E
 */
void f__1A34_275B_002A_9B6E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x9));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_dx, 0x1);
	emu_movb(&emu_cl, emu_get_memory8(emu_ds, 0x00, 0x3A38));
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2788; emu_last_cs = 0x1A34; emu_last_ip = 0x276F; emu_last_length = 0x002A; emu_last_crc = 0x9B6E; emu_call(); return; }
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x2785); emu_cs = 0x34CD; ovl__34CD(31);
	f__1A34_2785_0005_85EE();
}

/**
 * Decompiled function f__1A34_2785_0005_85EE()
 *
 * @name f__1A34_2785_0005_85EE
 * @implements 1A34:2785:0005:85EE ()
 *
 * Called From: 1A34:2785:002A:9B6E
 * Called From: 1A34:2785:0053:7C9E
 */
void f__1A34_2785_0005_85EE()
{
	emu_addw(&emu_sp, 0x6);
	f__1A34_278C_0008_C849(); return;
}

/**
 * Decompiled function f__1A34_2788_0002_C13A()
 *
 * @name f__1A34_2788_0002_C13A
 * @implements 1A34:2788:0002:C13A ()
 *
 * Called From: 1A34:271D:0077:D7BC
 */
void f__1A34_2788_0002_C13A()
{
	f__1A34_278C_0008_C849(); return;
}

/**
 * Decompiled function f__1A34_278C_0008_C849()
 *
 * @name f__1A34_278C_0008_C849
 * @implements 1A34:278C:0008:C849 ()
 *
 * Called From: 1A34:26A9:0006:773A
 * Called From: 1A34:26A9:0003:1D18
 * Called From: 1A34:2788:0005:85EE
 * Called From: 1A34:2788:0002:C13A
 */
void f__1A34_278C_0008_C849()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__1A34_2794_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_2794_0006_F7CE()
 *
 * @name f__1A34_2794_0006_F7CE
 * @implements 1A34:2794:0006:F7CE ()
 *
 * Called From: 1A34:2792:0008:C849
 */
void f__1A34_2794_0006_F7CE()
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
 * Decompiled function f__1A34_27A8_0012_7198()
 *
 * @name f__1A34_27A8_0012_7198
 * @implements 1A34:27A8:0012:7198 ()
 *
 * Called From: 0642:035B:000D:A6BA
 * Called From: 0642:035B:002B:2F1D
 * Called From: 0AEC:0786:000E:A7DE
 * Called From: 1A34:1074:0025:D89D
 * Called From: 1A34:1074:0027:BC2E
 * Called From: 1A34:1099:000B:E874
 */
void f__1A34_27A8_0012_7198()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_27BA_0023_C5D9(); return; }
	f__1A34_2953_0005_8BCF(); return;
}

/**
 * Decompiled function f__1A34_27BA_0023_C5D9()
 *
 * @name f__1A34_27BA_0023_C5D9
 * @implements 1A34:27BA:0023:C5D9 ()
 *
 * Called From: 1A34:27B5:0012:7198
 */
void f__1A34_27BA_0023_C5D9()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x27DD); emu_Unit_GetHouseID();
	f__1A34_27DD_002C_C218();
}

/**
 * Decompiled function f__1A34_27DD_002C_C218()
 *
 * @name f__1A34_27DD_002C_C218
 * @implements 1A34:27DD:002C:C218 ()
 *
 * Called From: 1A34:27DD:0023:C5D9
 */
void f__1A34_27DD_002C_C218()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_dx, 0x1E);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x37FA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (!emu_flags.zf) { f__1A34_2820_0018_A4D6(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2809); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__1A34_2809_0012_6CE1();
}

/**
 * Decompiled function f__1A34_2809_0012_6CE1()
 *
 * @name f__1A34_2809_0012_6CE1
 * @implements 1A34:2809:0012:6CE1 ()
 *
 * Called From: 1A34:2809:002C:C218
 */
void f__1A34_2809_0012_6CE1()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x62EA);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x281B); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	f__1A34_281B_0005_A42E();
}

/**
 * Decompiled function f__1A34_281B_0005_A42E()
 *
 * @name f__1A34_281B_0005_A42E
 * @implements 1A34:281B:0005:A42E ()
 *
 * Called From: 1A34:281B:0012:6CE1
 */
void f__1A34_281B_0005_A42E()
{
	emu_addw(&emu_sp, 0xC);
	f__1A34_2863_0010_B737(); return;
}

/**
 * Decompiled function f__1A34_2820_0018_A4D6()
 *
 * @name f__1A34_2820_0018_A4D6
 * @implements 1A34:2820:0018:A4D6 ()
 *
 * Called From: 1A34:27FC:002C:C218
 */
void f__1A34_2820_0018_A4D6()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x1);
	if (!emu_flags.zf) { f__1A34_283D_000B_5F7D(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x2838); emu_cs = 0x0FCB; emu_ip = 0x005F; emu_last_cs = 0x1A34; emu_last_ip = 0x2833; emu_last_length = 0x0018; emu_last_crc = 0xA4D6; emu_call();
	/* Unresolved jump */ emu_ip = 0x2838; emu_last_cs = 0x1A34; emu_last_ip = 0x2838; emu_last_length = 0x0018; emu_last_crc = 0xA4D6; emu_call();
}

/**
 * Decompiled function f__1A34_283D_000B_5F7D()
 *
 * @name f__1A34_283D_000B_5F7D
 * @implements 1A34:283D:000B:5F7D ()
 *
 * Called From: 1A34:2825:0018:A4D6
 */
void f__1A34_283D_000B_5F7D()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2848); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__1A34_2848_0018_A7FE();
}

/**
 * Decompiled function f__1A34_2848_0018_A7FE()
 *
 * @name f__1A34_2848_0018_A7FE
 * @implements 1A34:2848:0018:A7FE ()
 *
 * Called From: 1A34:2848:000B:5F7D
 */
void f__1A34_2848_0018_A7FE()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x62ED);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2860); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	f__1A34_2860_0013_AF66();
}

/**
 * Decompiled function f__1A34_2860_0013_AF66()
 *
 * @name f__1A34_2860_0013_AF66
 * @implements 1A34:2860:0013:AF66 ()
 *
 * Called From: 1A34:2860:0018:A7FE
 */
void f__1A34_2860_0013_AF66()
{
	emu_addw(&emu_sp, 0x10);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, 0x10);
	if (emu_flags.zf) { f__1A34_2873_0027_D7D0(); return; }
	f__1A34_292E_0002_C03A(); return;
}

/**
 * Decompiled function f__1A34_2863_0010_B737()
 *
 * @name f__1A34_2863_0010_B737
 * @implements 1A34:2863:0010:B737 ()
 *
 * Called From: 1A34:281E:0005:A42E
 */
void f__1A34_2863_0010_B737()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, 0x10);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2873; emu_last_cs = 0x1A34; emu_last_ip = 0x286E; emu_last_length = 0x0010; emu_last_crc = 0xB737; emu_call(); return; }
	f__1A34_292E_0002_C03A(); return;
}

/**
 * Decompiled function f__1A34_2873_0027_D7D0()
 *
 * @name f__1A34_2873_0027_D7D0
 * @implements 1A34:2873:0027:D7D0 ()
 *
 * Called From: 1A34:286E:0013:AF66
 */
void f__1A34_2873_0027_D7D0()
{
	emu_movw(&emu_si, 0x79);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x5);
	if (!emu_flags.zf) { f__1A34_28B6_0016_FFBA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x58), 0x64);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_28B6_0016_FFBA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x289A); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__1A34_289A_0008_5756();
}

/**
 * Decompiled function f__1A34_289A_0008_5756()
 *
 * @name f__1A34_289A_0008_5756
 * @implements 1A34:289A:0008:5756 ()
 *
 * Called From: 1A34:289A:0027:D7D0
 */
void f__1A34_289A_0008_5756()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x28A2); emu_cs = 0x34CD; ovl__34CD(13);
	f__1A34_28A2_000D_6A6E();
}

/**
 * Decompiled function f__1A34_28A2_000D_6A6E()
 *
 * @name f__1A34_28A2_000D_6A6E
 * @implements 1A34:28A2:000D:6A6E ()
 *
 * Called From: 1A34:28A2:0008:5756
 */
void f__1A34_28A2_000D_6A6E()
{
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x8);
	if (emu_flags.zf) { f__1A34_28AF_0005_64CD(); return; }
	emu_cmpw(&emu_ax, 0x9);
	if (emu_flags.zf) { f__1A34_28AF_0005_64CD(); return; }
	f__1A34_28B4_0002_C03A(); return;
}

/**
 * Decompiled function f__1A34_28AF_0005_64CD()
 *
 * @name f__1A34_28AF_0005_64CD
 * @implements 1A34:28AF:0005:64CD ()
 *
 * Called From: 1A34:28A6:000D:6A6E
 * Called From: 1A34:28AB:000D:6A6E
 */
void f__1A34_28AF_0005_64CD()
{
	emu_movw(&emu_si, 0x7A);
	f__1A34_28B6_0016_FFBA(); return;
}

/**
 * Decompiled function f__1A34_28B4_0002_C03A()
 *
 * @name f__1A34_28B4_0002_C03A
 * @implements 1A34:28B4:0002:C03A ()
 *
 * Called From: 1A34:28AD:000D:6A6E
 */
void f__1A34_28B4_0002_C03A()
{
	f__1A34_28B6_0016_FFBA(); return;
}

/**
 * Decompiled function f__1A34_28B6_0016_FFBA()
 *
 * @name f__1A34_28B6_0016_FFBA
 * @implements 1A34:28B6:0016:FFBA ()
 *
 * Called From: 1A34:287E:0027:D7D0
 * Called From: 1A34:2888:0027:D7D0
 * Called From: 1A34:28B2:0005:64CD
 * Called From: 1A34:28B4:0002:C03A
 */
void f__1A34_28B6_0016_FFBA()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x1);
	if (!emu_flags.zf) { f__1A34_28D6_000B_C880(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x56));
	emu_push(emu_cs); emu_push(0x28CC); emu_cs = 0x167E; f__167E_02AE_000C_CC85();
	f__1A34_28CC_000A_3F60();
}

/**
 * Decompiled function f__1A34_28CC_000A_3F60()
 *
 * @name f__1A34_28CC_000A_3F60
 * @implements 1A34:28CC:000A:3F60 ()
 *
 * Called From: 1A34:28CC:0016:FFBA
 */
void f__1A34_28CC_000A_3F60()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_flags.zf) { f__1A34_28D6_000B_C880(); return; }
	emu_movw(&emu_si, 0x7B);
	f__1A34_28EA_001A_42E4(); return;
}

/**
 * Decompiled function f__1A34_28D6_000B_C880()
 *
 * @name f__1A34_28D6_000B_C880
 * @implements 1A34:28D6:000B:C880 ()
 *
 * Called From: 1A34:28BE:0016:FFBA
 * Called From: 1A34:28CF:000A:3F60
 */
void f__1A34_28D6_000B_C880()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x28E1); emu_cs = 0x0C10; f__0C10_013D_0016_8C5C();
	f__1A34_28E1_0023_135B();
}

/**
 * Decompiled function f__1A34_28E1_0023_135B()
 *
 * @name f__1A34_28E1_0023_135B
 * @implements 1A34:28E1:0023:135B ()
 *
 * Called From: 1A34:28E1:000B:C880
 */
void f__1A34_28E1_0023_135B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__1A34_28EA_001A_42E4(); return; }
	emu_movw(&emu_si, 0x7C);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x58));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x58));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1A34_2904_000C_5845(); return; }
	emu_movw(&emu_ax, 0x4);
	/* Unresolved jump */ emu_ip = 0x2906; emu_last_cs = 0x1A34; emu_last_ip = 0x2902; emu_last_length = 0x0023; emu_last_crc = 0x135B; emu_call();
}

/**
 * Decompiled function f__1A34_28EA_001A_42E4()
 *
 * @name f__1A34_28EA_001A_42E4
 * @implements 1A34:28EA:001A:42E4 ()
 *
 * Called From: 1A34:28D4:000A:3F60
 * Called From: 1A34:28E5:0023:135B
 */
void f__1A34_28EA_001A_42E4()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x58));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x58));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1A34_2904_000C_5845(); return; }
	emu_movw(&emu_ax, 0x4);
	f__1A34_2906_000A_5B6D(); return;
}

/**
 * Decompiled function f__1A34_2904_000C_5845()
 *
 * @name f__1A34_2904_000C_5845
 * @implements 1A34:2904:000C:5845 ()
 *
 * Called From: 1A34:28FD:001A:42E4
 * Called From: 1A34:28FD:0023:135B
 */
void f__1A34_2904_000C_5845()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, emu_si);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2910); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__1A34_2910_000D_2180();
}

/**
 * Decompiled function f__1A34_2906_000A_5B6D()
 *
 * @name f__1A34_2906_000A_5B6D
 * @implements 1A34:2906:000A:5B6D ()
 *
 * Called From: 1A34:2902:001A:42E4
 */
void f__1A34_2906_000A_5B6D()
{
	emu_movw(&emu_dx, emu_si);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2910); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__1A34_2910_000D_2180();
}

/**
 * Decompiled function f__1A34_2910_000D_2180()
 *
 * @name f__1A34_2910_000D_2180
 * @implements 1A34:2910:000D:2180 ()
 *
 * Called From: 1A34:2910:000A:5B6D
 * Called From: 1A34:2910:000C:5845
 */
void f__1A34_2910_000D_2180()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x291D); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	f__1A34_291D_000C_6F7F();
}

/**
 * Decompiled function f__1A34_291D_000C_6F7F()
 *
 * @name f__1A34_291D_000C_6F7F
 * @implements 1A34:291D:000C:6F7F ()
 *
 * Called From: 1A34:291D:000D:2180
 */
void f__1A34_291D_000C_6F7F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x9939);
	emu_push(emu_ds);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2929); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	f__1A34_2929_0005_846E();
}

/**
 * Decompiled function f__1A34_2929_0005_846E()
 *
 * @name f__1A34_2929_0005_846E
 * @implements 1A34:2929:0005:846E ()
 *
 * Called From: 1A34:2929:000C:6F7F
 */
void f__1A34_2929_0005_846E()
{
	emu_addw(&emu_sp, 0xA);
	f__1A34_2930_000F_BC4B(); return;
}

/**
 * Decompiled function f__1A34_292E_0002_C03A()
 *
 * @name f__1A34_292E_0002_C03A
 * @implements 1A34:292E:0002:C03A ()
 *
 * Called From: 1A34:2870:0013:AF66
 * Called From: 1A34:2870:0010:B737
 */
void f__1A34_292E_0002_C03A()
{
	f__1A34_2930_000F_BC4B(); return;
}

/**
 * Decompiled function f__1A34_2930_000F_BC4B()
 *
 * @name f__1A34_2930_000F_BC4B
 * @implements 1A34:2930:000F:BC4B ()
 *
 * Called From: 1A34:292C:0005:846E
 * Called From: 1A34:292E:0002:C03A
 */
void f__1A34_2930_000F_BC4B()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x62F3);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x293F); emu_cs = 0x01F7; f__01F7_384A_003F_AE43();
	f__1A34_293F_0011_8182();
}

/**
 * Decompiled function f__1A34_293F_0011_8182()
 *
 * @name f__1A34_293F_0011_8182
 * @implements 1A34:293F:0011:8182 ()
 *
 * Called From: 1A34:293F:000F:BC4B
 */
void f__1A34_293F_0011_8182()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2950); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__1A34_2950_0008_1147();
}

/**
 * Decompiled function f__1A34_2950_0008_1147()
 *
 * @name f__1A34_2950_0008_1147
 * @implements 1A34:2950:0008:1147 ()
 *
 * Called From: 1A34:2950:0011:8182
 */
void f__1A34_2950_0008_1147()
{
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2953_0005_8BCF()
 *
 * @name f__1A34_2953_0005_8BCF
 * @implements 1A34:2953:0005:8BCF ()
 *
 * Called From: 1A34:27B7:0012:7198
 */
void f__1A34_2953_0005_8BCF()
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
 * Decompiled function f__1A34_2958_0013_3A47()
 *
 * @name f__1A34_2958_0013_3A47
 * @implements 1A34:2958:0013:3A47 ()
 *
 * Called From: 0972:0D79:000F:5891
 * Called From: 176C:0ADF:000F:6094
 */
void f__1A34_2958_0013_3A47()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_296B_002B_7552(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x2AA6; emu_last_cs = 0x1A34; emu_last_ip = 0x2968; emu_last_length = 0x0013; emu_last_crc = 0x3A47; emu_call();
}

/**
 * Decompiled function f__1A34_2966_0005_DC3A()
 *
 * @name f__1A34_2966_0005_DC3A
 * @implements 1A34:2966:0005:DC3A ()
 *
 * Called From: 1A34:2AA3:000B:AEAC
 */
void f__1A34_2966_0005_DC3A()
{
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_2AA6_0004_893F(); return;
}

/**
 * Decompiled function f__1A34_2968_0003_DDAE()
 *
 * @name f__1A34_2968_0003_DDAE
 * @implements 1A34:2968:0003:DDAE ()
 *
 * Called From: 1A34:2A98:0009:8654
 */
void f__1A34_2968_0003_DDAE()
{
	f__1A34_2AA6_0004_893F(); return;
}

/**
 * Decompiled function f__1A34_296B_002B_7552()
 *
 * @name f__1A34_296B_002B_7552
 * @implements 1A34:296B:002B:7552 ()
 *
 * Called From: 1A34:2964:0013:3A47
 */
void f__1A34_296B_002B_7552()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFFB);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2996); emu_cs = 0x0F3F; f__0F3F_0275_0019_64C3();
	f__1A34_2996_0022_D8ED();
}

/**
 * Decompiled function f__1A34_2996_0022_D8ED()
 *
 * @name f__1A34_2996_0022_D8ED
 * @implements 1A34:2996:0022:D8ED ()
 *
 * Called From: 1A34:2996:002B:7552
 */
void f__1A34_2996_0022_D8ED()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_dx);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xA), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4D), 0x0);
	if (!emu_flags.zf) { f__1A34_29BA_0013_0581(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x29B8); f__1A34_3312_0017_29E8();
	f__1A34_29B8_0015_974C();
}

/**
 * Decompiled function f__1A34_29B8_0015_974C()
 *
 * @name f__1A34_29B8_0015_974C
 * @implements 1A34:29B8:0015:974C ()
 *
 * Called From: 1A34:29B8:0022:D8ED
 */
void f__1A34_29B8_0015_974C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x26), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x29CD); f__1A34_0E2E_0015_7E65();
	f__1A34_29CD_0009_B788();
}

/**
 * Decompiled function f__1A34_29BA_0013_0581()
 *
 * @name f__1A34_29BA_0013_0581
 * @implements 1A34:29BA:0013:0581 ()
 *
 * Called From: 1A34:29AB:0022:D8ED
 */
void f__1A34_29BA_0013_0581()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x26), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x29CD); f__1A34_0E2E_0015_7E65();
	f__1A34_29CD_0009_B788();
}

/**
 * Decompiled function f__1A34_29CD_0009_B788()
 *
 * @name f__1A34_29CD_0009_B788
 * @implements 1A34:29CD:0009:B788 ()
 *
 * Called From: 1A34:29CD:0013:0581
 * Called From: 1A34:29CD:0015:974C
 */
void f__1A34_29CD_0009_B788()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__1A34_29D6_002C_34BE(); return; }
	f__1A34_2A9B_000B_AEAC(); return;
}

/**
 * Decompiled function f__1A34_29D6_002C_34BE()
 *
 * @name f__1A34_29D6_002C_34BE
 * @implements 1A34:29D6:002C:34BE ()
 *
 * Called From: 1A34:29D1:0009:B788
 */
void f__1A34_29D6_002C_34BE()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4B), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x49), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2A02); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__1A34_2A02_0036_7718();
}

/**
 * Decompiled function f__1A34_2A02_0036_7718()
 *
 * @name f__1A34_2A02_0036_7718
 * @implements 1A34:2A02:0036:7718 ()
 *
 * Called From: 1A34:2A02:002C:34BE
 */
void f__1A34_2A02_0036_7718()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_flags.zf) { f__1A34_2A3B_002B_7FF3(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cl, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movb(&emu_al, 0x1);
	emu_shlb(&emu_al, emu_cl);
	emu_notb(&emu_al, emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2A38); emu_cs = 0x1423; f__1423_08CD_0012_0004();
	f__1A34_2A38_002E_5D99();
}

/**
 * Decompiled function f__1A34_2A38_002E_5D99()
 *
 * @name f__1A34_2A38_002E_5D99
 * @implements 1A34:2A38:002E:5D99 ()
 *
 * Called From: 1A34:2A38:0036:7718
 */
void f__1A34_2A38_002E_5D99()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (!emu_flags.zf) { f__1A34_2A5D_0009_7ADF(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_flags.zf) { f__1A34_2A5D_0009_7ADF(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_2A66_0012_2F8E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x48));
	/* Unresolved jump */ emu_ip = 0x2A6D; emu_last_cs = 0x1A34; emu_last_ip = 0x2A64; emu_last_length = 0x002E; emu_last_crc = 0x5D99; emu_call();
}

/**
 * Decompiled function f__1A34_2A3B_002B_7FF3()
 *
 * @name f__1A34_2A3B_002B_7FF3
 * @implements 1A34:2A3B:002B:7FF3 ()
 *
 * Called From: 1A34:2A13:0036:7718
 */
void f__1A34_2A3B_002B_7FF3()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (!emu_flags.zf) { f__1A34_2A5D_0009_7ADF(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2A5D; emu_last_cs = 0x1A34; emu_last_ip = 0x2A51; emu_last_length = 0x002B; emu_last_crc = 0x7FF3; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_2A66_0012_2F8E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x48));
	/* Unresolved jump */ emu_ip = 0x2A6D; emu_last_cs = 0x1A34; emu_last_ip = 0x2A64; emu_last_length = 0x002B; emu_last_crc = 0x7FF3; emu_call();
}

/**
 * Decompiled function f__1A34_2A5D_0009_7ADF()
 *
 * @name f__1A34_2A5D_0009_7ADF
 * @implements 1A34:2A5D:0009:7ADF ()
 *
 * Called From: 1A34:2A47:002B:7FF3
 * Called From: 1A34:2A47:002E:5D99
 * Called From: 1A34:2A51:002E:5D99
 */
void f__1A34_2A5D_0009_7ADF()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x48));
	f__1A34_2A6D_000B_F53C(); return;
}

/**
 * Decompiled function f__1A34_2A66_0012_2F8E()
 *
 * @name f__1A34_2A66_0012_2F8E
 * @implements 1A34:2A66:0012:2F8E ()
 *
 * Called From: 1A34:2A5B:002E:5D99
 * Called From: 1A34:2A5B:002B:7FF3
 */
void f__1A34_2A66_0012_2F8E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2A78); emu_cs = 0x176C; f__176C_000E_000E_633D();
	f__1A34_2A78_001A_5F59();
}

/**
 * Decompiled function f__1A34_2A6D_000B_F53C()
 *
 * @name f__1A34_2A6D_000B_F53C
 * @implements 1A34:2A6D:000B:F53C ()
 *
 * Called From: 1A34:2A64:0009:7ADF
 */
void f__1A34_2A6D_000B_F53C()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2A78); emu_cs = 0x176C; f__176C_000E_000E_633D();
	f__1A34_2A78_001A_5F59();
}

/**
 * Decompiled function f__1A34_2A78_001A_5F59()
 *
 * @name f__1A34_2A78_001A_5F59
 * @implements 1A34:2A78:001A:5F59 ()
 *
 * Called From: 1A34:2A78:000B:F53C
 * Called From: 1A34:2A78:0012:2F8E
 */
void f__1A34_2A78_001A_5F59()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x6D), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2A92); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_2A92_0009_8654();
}

/**
 * Decompiled function f__1A34_2A92_0009_8654()
 *
 * @name f__1A34_2A92_0009_8654
 * @implements 1A34:2A92:0009:8654 ()
 *
 * Called From: 1A34:2A92:001A:5F59
 */
void f__1A34_2A92_0009_8654()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x1);
	f__1A34_2968_0003_DDAE(); return;
}

/**
 * Decompiled function f__1A34_2A9B_000B_AEAC()
 *
 * @name f__1A34_2A9B_000B_AEAC
 * @implements 1A34:2A9B:000B:AEAC ()
 *
 * Called From: 1A34:29D3:0009:B788
 */
void f__1A34_2A9B_000B_AEAC()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	f__1A34_2966_0005_DC3A(); return;
}

/**
 * Decompiled function f__1A34_2AA6_0004_893F()
 *
 * @name f__1A34_2AA6_0004_893F
 * @implements 1A34:2AA6:0004:893F ()
 *
 * Called From: 1A34:2968:0003:DDAE
 * Called From: 1A34:2968:0005:DC3A
 */
void f__1A34_2AA6_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2AAA_000D_A3E6()
 *
 * @name f__1A34_2AAA_000D_A3E6
 * @implements 1A34:2AAA:000D:A3E6 ()
 *
 * Called From: 176C:0EE0:000E:44F7
 * Called From: 1A34:2D1D:0018:E247
 */
void f__1A34_2AAA_000D_A3E6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_2AB7_0016_931E(); return; }
	/* Unresolved jump */ emu_ip = 0x2B16; emu_last_cs = 0x1A34; emu_last_ip = 0x2AB5; emu_last_length = 0x000D; emu_last_crc = 0xA3E6; emu_call();
}

/**
 * Decompiled function f__1A34_2AB7_0016_931E()
 *
 * @name f__1A34_2AB7_0016_931E
 * @implements 1A34:2AB7:0016:931E ()
 *
 * Called From: 1A34:2AB3:000D:A3E6
 */
void f__1A34_2AB7_0016_931E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x40);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2ACD); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_2ACD_001F_0A02();
}

/**
 * Decompiled function f__1A34_2ACD_001F_0A02()
 *
 * @name f__1A34_2ACD_001F_0A02
 * @implements 1A34:2ACD:001F:0A02 ()
 *
 * Called From: 1A34:2ACD:0016:931E
 */
void f__1A34_2ACD_001F_0A02()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFBF);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3902);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2AEC); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	f__1A34_2AEC_000E_C4E8();
}

/**
 * Decompiled function f__1A34_2AEC_000E_C4E8()
 *
 * @name f__1A34_2AEC_000E_C4E8
 * @implements 1A34:2AEC:000E:C4E8 ()
 *
 * Called From: 1A34:2AEC:001F:0A02
 */
void f__1A34_2AEC_000E_C4E8()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2AFA); f__1A34_364E_0012_61B3();
	f__1A34_2AFA_0019_3A5B();
}

/**
 * Decompiled function f__1A34_2AFA_0019_3A5B()
 *
 * @name f__1A34_2AFA_0019_3A5B
 * @implements 1A34:2AFA:0019:3A5B ()
 *
 * Called From: 1A34:2AFA:000E:C4E8
 */
void f__1A34_2AFA_0019_3A5B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2B13); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
	f__1A34_2B13_0005_6143();
}

/**
 * Decompiled function f__1A34_2B13_0005_6143()
 *
 * @name f__1A34_2B13_0005_6143
 * @implements 1A34:2B13:0005:6143 ()
 *
 * Called From: 1A34:2B13:0019:3A5B
 */
void f__1A34_2B13_0005_6143()
{
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2B18_0011_E4D5()
 *
 * @name f__1A34_2B18_0011_E4D5
 * @implements 1A34:2B18:0011:E4D5 ()
 *
 * Called From: 176C:26D8:0010:041C
 * Called From: B511:0171:0016:EAC5
 */
void f__1A34_2B18_0011_E4D5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x6);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_2B29_0038_02DF(); return; }
	/* Unresolved jump */ emu_ip = 0x2BB1; emu_last_cs = 0x1A34; emu_last_ip = 0x2B26; emu_last_length = 0x0011; emu_last_crc = 0xE4D5; emu_call();
}

/**
 * Decompiled function f__1A34_2B29_0038_02DF()
 *
 * @name f__1A34_2B29_0038_02DF
 * @implements 1A34:2B29:0038:02DF ()
 *
 * Called From: 1A34:2B24:0011:E4D5
 */
void f__1A34_2B29_0038_02DF()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2BB1; emu_last_cs = 0x1A34; emu_last_ip = 0x2B32; emu_last_length = 0x0038; emu_last_crc = 0x02DF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0xFFFF);
	if (!emu_flags.zf) { f__1A34_2B45_001C_B665(); return; }
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0xFFFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2BB1; emu_last_cs = 0x1A34; emu_last_ip = 0x2B43; emu_last_length = 0x0038; emu_last_crc = 0x02DF; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2BB1; emu_last_cs = 0x1A34; emu_last_ip = 0x2B50; emu_last_length = 0x0038; emu_last_crc = 0x02DF; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x2B61); emu_ip = 0x3623; emu_last_cs = 0x1A34; emu_last_ip = 0x2B5E; emu_last_length = 0x0038; emu_last_crc = 0x02DF; emu_call();
	f__1A34_2B61_0008_9688();
}

/**
 * Decompiled function f__1A34_2B45_001C_B665()
 *
 * @name f__1A34_2B45_001C_B665
 * @implements 1A34:2B45:001C:B665 ()
 *
 * Called From: 1A34:2B3C:0038:02DF
 */
void f__1A34_2B45_001C_B665()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2BB1; emu_last_cs = 0x1A34; emu_last_ip = 0x2B50; emu_last_length = 0x001C; emu_last_crc = 0xB665; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2B61); emu_Unit_GetHouseID();
	f__1A34_2B61_0008_9688();
}

/**
 * Decompiled function f__1A34_2B61_0008_9688()
 *
 * @name f__1A34_2B61_0008_9688
 * @implements 1A34:2B61:0008:9688 ()
 *
 * Called From: 1A34:2B61:001C:B665
 */
void f__1A34_2B61_0008_9688()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2B69); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	f__1A34_2B69_0045_736F();
}

/**
 * Decompiled function f__1A34_2B69_0045_736F()
 *
 * @name f__1A34_2B69_0045_736F
 * @implements 1A34:2B69:0045:736F ()
 *
 * Called From: 1A34:2B69:0008:9688
 */
void f__1A34_2B69_0045_736F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__1A34_2BB1_0004_893F(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), 0x0);
	if (emu_flags.zf) { f__1A34_2BB1_0004_893F(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x2BAE); emu_cs = 0x34CD; ovl__34CD(31);
	f__1A34_2BAE_0007_980A();
}

/**
 * Decompiled function f__1A34_2BAE_0007_980A()
 *
 * @name f__1A34_2BAE_0007_980A
 * @implements 1A34:2BAE:0007:980A ()
 *
 * Called From: 1A34:2BAE:0045:736F
 */
void f__1A34_2BAE_0007_980A()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2BB1_0004_893F()
 *
 * @name f__1A34_2BB1_0004_893F
 * @implements 1A34:2BB1:0004:893F ()
 *
 * Called From: 1A34:2B6D:0045:736F
 * Called From: 1A34:2B8F:0045:736F
 */
void f__1A34_2BB1_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2BB5_0025_30B8()
 *
 * @name f__1A34_2BB5_0025_30B8
 * @implements 1A34:2BB5:0025:30B8 ()
 *
 * Called From: 0972:0BBE:0015:DC2E
 * Called From: 176C:2509:000B:7D3A
 */
void f__1A34_2BB5_0025_30B8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2BDA); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__1A34_2BDA_0005_92AE();
}

/**
 * Decompiled function f__1A34_2BDA_0005_92AE()
 *
 * @name f__1A34_2BDA_0005_92AE
 * @implements 1A34:2BDA:0005:92AE ()
 *
 * Called From: 1A34:2BDA:0025:30B8
 */
void f__1A34_2BDA_0005_92AE()
{
	emu_addw(&emu_sp, 0x8);
	f__1A34_2C0E_0038_AC99(); return;
}

/**
 * Decompiled function f__1A34_2BDF_0022_6DF3()
 *
 * @name f__1A34_2BDF_0022_6DF3
 * @implements 1A34:2BDF:0022:6DF3 ()
 *
 * Called From: 1A34:2C1A:0038:AC99
 */
void f__1A34_2BDF_0022_6DF3()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (!emu_flags.zf) { f__1A34_2C01_000B_799F(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2C01; emu_last_cs = 0x1A34; emu_last_ip = 0x2BF1; emu_last_length = 0x0022; emu_last_crc = 0x6DF3; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	f__1A34_2C1C_002A_C573(); return;
}

/**
 * Decompiled function f__1A34_2C01_000B_799F()
 *
 * @name f__1A34_2C01_000B_799F
 * @implements 1A34:2C01:000B:799F ()
 *
 * Called From: 1A34:2BE7:0022:6DF3
 */
void f__1A34_2C01_000B_799F()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2C0C); emu_cs = 0x0FE4; emu_Unit_FindNext();
	f__1A34_2C0C_003A_3AF5();
}

/**
 * Decompiled function f__1A34_2C0C_003A_3AF5()
 *
 * @name f__1A34_2C0C_003A_3AF5
 * @implements 1A34:2C0C:003A:3AF5 ()
 *
 * Called From: 1A34:2C0C:000B:799F
 */
void f__1A34_2C0C_003A_3AF5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2BDF; emu_last_cs = 0x1A34; emu_last_ip = 0x2C1A; emu_last_length = 0x003A; emu_last_crc = 0x3AF5; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { f__1A34_2C64_0020_54FF(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2C64; emu_last_cs = 0x1A34; emu_last_ip = 0x2C28; emu_last_length = 0x003A; emu_last_crc = 0x3AF5; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2C64; emu_last_cs = 0x1A34; emu_last_ip = 0x2C2C; emu_last_length = 0x003A; emu_last_crc = 0x3AF5; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_movw(&emu_ax, 0x60);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x2C46); emu_ip = 0x08FB; emu_last_cs = 0x1A34; emu_last_ip = 0x2C43; emu_last_length = 0x003A; emu_last_crc = 0x3AF5; emu_call();
	f__1A34_2C46_003E_E039();
}

/**
 * Decompiled function f__1A34_2C0E_0038_AC99()
 *
 * @name f__1A34_2C0E_0038_AC99
 * @implements 1A34:2C0E:0038:AC99 ()
 *
 * Called From: 1A34:2BDD:0005:92AE
 */
void f__1A34_2C0E_0038_AC99()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1A34_2BDF_0022_6DF3(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { f__1A34_2C64_0020_54FF(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2C64; emu_last_cs = 0x1A34; emu_last_ip = 0x2C28; emu_last_length = 0x0038; emu_last_crc = 0xAC99; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2C64; emu_last_cs = 0x1A34; emu_last_ip = 0x2C2C; emu_last_length = 0x0038; emu_last_crc = 0xAC99; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_movw(&emu_ax, 0x60);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2C46); emu_Unit_Create();
	f__1A34_2C46_003E_E039();
}

/**
 * Decompiled function f__1A34_2C1C_002A_C573()
 *
 * @name f__1A34_2C1C_002A_C573
 * @implements 1A34:2C1C:002A:C573 ()
 *
 * Called From: 1A34:2BFF:0022:6DF3
 */
void f__1A34_2C1C_002A_C573()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { f__1A34_2C64_0020_54FF(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2C64; emu_last_cs = 0x1A34; emu_last_ip = 0x2C28; emu_last_length = 0x002A; emu_last_crc = 0xC573; emu_call(); return; }
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2C64; emu_last_cs = 0x1A34; emu_last_ip = 0x2C2C; emu_last_length = 0x002A; emu_last_crc = 0xC573; emu_call(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_movw(&emu_ax, 0x60);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x2C46); emu_ip = 0x08FB; emu_last_cs = 0x1A34; emu_last_ip = 0x2C43; emu_last_length = 0x002A; emu_last_crc = 0xC573; emu_call();
	f__1A34_2C46_003E_E039();
}

/**
 * Decompiled function f__1A34_2C46_003E_E039()
 *
 * @name f__1A34_2C46_003E_E039
 * @implements 1A34:2C46:003E:E039 ()
 *
 * Called From: 1A34:2C46:0038:AC99
 */
void f__1A34_2C46_003E_E039()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2C64; emu_last_cs = 0x1A34; emu_last_ip = 0x2C59; emu_last_length = 0x003E; emu_last_crc = 0xE039; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2C87; emu_last_cs = 0x1A34; emu_last_ip = 0x2C6A; emu_last_length = 0x003E; emu_last_crc = 0xE039; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x56), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x2C84); emu_cs = 0x0C10; f__0C10_00D2_000F_D61E();
	f__1A34_2C84_000B_89DA();
}

/**
 * Decompiled function f__1A34_2C64_0020_54FF()
 *
 * @name f__1A34_2C64_0020_54FF
 * @implements 1A34:2C64:0020:54FF ()
 *
 * Called From: 1A34:2C20:002A:C573
 * Called From: 1A34:2C20:0038:AC99
 * Called From: 1A34:2C20:003A:3AF5
 */
void f__1A34_2C64_0020_54FF()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__1A34_2C87_0008_D8C9(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x56), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x2C84); emu_cs = 0x0C10; f__0C10_00D2_000F_D61E();
	f__1A34_2C84_000B_89DA();
}

/**
 * Decompiled function f__1A34_2C84_000B_89DA()
 *
 * @name f__1A34_2C84_000B_89DA
 * @implements 1A34:2C84:000B:89DA ()
 *
 * Called From: 1A34:2C84:0020:54FF
 * Called From: 1A34:2C84:003E:E039
 */
void f__1A34_2C84_000B_89DA()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__1A34_2C8F_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_2C87_0008_D8C9()
 *
 * @name f__1A34_2C87_0008_D8C9
 * @implements 1A34:2C87:0008:D8C9 ()
 *
 * Called From: 1A34:2C6A:0020:54FF
 */
void f__1A34_2C87_0008_D8C9()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__1A34_2C8F_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_2C8F_0006_F7CE()
 *
 * @name f__1A34_2C8F_0006_F7CE
 * @implements 1A34:2C8F:0006:F7CE ()
 *
 * Called From: 1A34:2C8D:000B:89DA
 * Called From: 1A34:2C8D:0008:D8C9
 */
void f__1A34_2C8F_0006_F7CE()
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
 * Decompiled function f__1A34_2C95_001B_89A2()
 *
 * @name f__1A34_2C95_001B_89A2
 * @implements 1A34:2C95:001B:89A2 ()
 *
 * Called From: 176C:0A0A:0008:45F1
 * Called From: 1A34:07DC:0036:8D87
 */
void f__1A34_2C95_001B_89A2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2CAD; emu_last_cs = 0x1A34; emu_last_ip = 0x2CA3; emu_last_length = 0x001B; emu_last_crc = 0x89A2; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__1A34_2CB0_001C_F555(); return; }
	/* Unresolved jump */ emu_ip = 0x2F98; emu_last_cs = 0x1A34; emu_last_ip = 0x2CAD; emu_last_length = 0x001B; emu_last_crc = 0x89A2; emu_call();
}

/**
 * Decompiled function f__1A34_2CB0_001C_F555()
 *
 * @name f__1A34_2CB0_001C_F555
 * @implements 1A34:2CB0:001C:F555 ()
 *
 * Called From: 1A34:2CAB:001B:89A2
 */
void f__1A34_2CB0_001C_F555()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (!emu_flags.zf) { f__1A34_2CCE_0037_71AE(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	if (!emu_flags.zf) { f__1A34_2CCE_0037_71AE(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x2CCC); f__1A34_0F48_0018_0DB8();
	f__1A34_2CCC_0039_A882();
}

/**
 * Decompiled function f__1A34_2CCC_0039_A882()
 *
 * @name f__1A34_2CCC_0039_A882
 * @implements 1A34:2CCC:0039:A882 ()
 *
 * Called From: 1A34:2CCC:001C:F555
 */
void f__1A34_2CCC_0039_A882()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2CFB; emu_last_cs = 0x1A34; emu_last_ip = 0x2CEF; emu_last_length = 0x0039; emu_last_crc = 0xA882; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x0);
	if (!emu_flags.zf) { f__1A34_2D08_0018_E247(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x2D05); emu_ip = 0x10EC; emu_last_cs = 0x1A34; emu_last_ip = 0x2D02; emu_last_length = 0x0039; emu_last_crc = 0xA882; emu_call();
	/* Unresolved jump */ emu_ip = 0x2D05; emu_last_cs = 0x1A34; emu_last_ip = 0x2D05; emu_last_length = 0x0039; emu_last_crc = 0xA882; emu_call();
}

/**
 * Decompiled function f__1A34_2CCE_0037_71AE()
 *
 * @name f__1A34_2CCE_0037_71AE
 * @implements 1A34:2CCE:0037:71AE ()
 *
 * Called From: 1A34:2CBA:001C:F555
 * Called From: 1A34:2CC0:001C:F555
 */
void f__1A34_2CCE_0037_71AE()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2CFB; emu_last_cs = 0x1A34; emu_last_ip = 0x2CEF; emu_last_length = 0x0037; emu_last_crc = 0x71AE; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x0);
	if (!emu_flags.zf) { f__1A34_2D08_0018_E247(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x2D05); emu_ip = 0x10EC; emu_last_cs = 0x1A34; emu_last_ip = 0x2D02; emu_last_length = 0x0037; emu_last_crc = 0x71AE; emu_call();
	/* Unresolved jump */ emu_ip = 0x2D05; emu_last_cs = 0x1A34; emu_last_ip = 0x2D05; emu_last_length = 0x0037; emu_last_crc = 0x71AE; emu_call();
}

/**
 * Decompiled function f__1A34_2D08_0018_E247()
 *
 * @name f__1A34_2D08_0018_E247
 * @implements 1A34:2D08:0018:E247 ()
 *
 * Called From: 1A34:2CF9:0037:71AE
 * Called From: 1A34:2CF9:0039:A882
 */
void f__1A34_2D08_0018_E247()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x9));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2D20); f__1A34_2AAA_000D_A3E6();
	f__1A34_2D20_000D_AA58();
}

/**
 * Decompiled function f__1A34_2D20_000D_AA58()
 *
 * @name f__1A34_2D20_000D_AA58
 * @implements 1A34:2D20:000D:AA58 ()
 *
 * Called From: 1A34:2D20:0018:E247
 */
void f__1A34_2D20_000D_AA58()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2D2D); emu_Unit_GetHouseID();
	f__1A34_2D2D_0011_DBC6();
}

/**
 * Decompiled function f__1A34_2D2D_0011_DBC6()
 *
 * @name f__1A34_2D2D_0011_DBC6
 * @implements 1A34:2D2D:0011:DBC6 ()
 *
 * Called From: 1A34:2D2D:000D:AA58
 */
void f__1A34_2D2D_0011_DBC6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2D3E); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	f__1A34_2D3E_0009_B78D();
}

/**
 * Decompiled function f__1A34_2D3E_0009_B78D()
 *
 * @name f__1A34_2D3E_0009_B78D
 * @implements 1A34:2D3E:0009:B78D ()
 *
 * Called From: 1A34:2D3E:0011:DBC6
 */
void f__1A34_2D3E_0009_B78D()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1A34_2D47_0010_93D7(); return; }
	f__1A34_2E38_001D_0BE3(); return;
}

/**
 * Decompiled function f__1A34_2D47_0010_93D7()
 *
 * @name f__1A34_2D47_0010_93D7
 * @implements 1A34:2D47:0010:93D7 ()
 *
 * Called From: 1A34:2D42:0009:B78D
 */
void f__1A34_2D47_0010_93D7()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x10);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2D57; emu_last_cs = 0x1A34; emu_last_ip = 0x2D50; emu_last_length = 0x0010; emu_last_crc = 0x93D7; emu_call(); return; }
	emu_movw(&emu_ax, 0x2);
	f__1A34_2D5A_000C_2FC2(); return;
}

/**
 * Decompiled function f__1A34_2D5A_000C_2FC2()
 *
 * @name f__1A34_2D5A_000C_2FC2
 * @implements 1A34:2D5A:000C:2FC2 ()
 *
 * Called From: 1A34:2D55:0010:93D7
 */
void f__1A34_2D5A_000C_2FC2()
{
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2D66); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	f__1A34_2D66_0010_0111();
}

/**
 * Decompiled function f__1A34_2D66_0010_0111()
 *
 * @name f__1A34_2D66_0010_0111
 * @implements 1A34:2D66:0010:0111 ()
 *
 * Called From: 1A34:2D66:000C:2FC2
 */
void f__1A34_2D66_0010_0111()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xD);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x2D76; emu_last_cs = 0x1A34; emu_last_ip = 0x2D71; emu_last_length = 0x0010; emu_last_crc = 0x0111; emu_call(); return; }
	f__1A34_2E18_0020_ACCF(); return;
}

/**
 * Decompiled function f__1A34_2E18_0020_ACCF()
 *
 * @name f__1A34_2E18_0020_ACCF
 * @implements 1A34:2E18:0020:ACCF ()
 *
 * Called From: 1A34:2D73:0010:0111
 */
void f__1A34_2E18_0020_ACCF()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x3));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x3), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_si, 0x0));
	emu_pop(&emu_es);
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x3), emu_al);
	f__1A34_2F98_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_2E38_001D_0BE3()
 *
 * @name f__1A34_2E38_001D_0BE3
 * @implements 1A34:2E38:001D:0BE3 ()
 *
 * Called From: 1A34:2D44:0009:B78D
 */
void f__1A34_2E38_001D_0BE3()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_2E68_0019_2B5A(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1F4);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x2E55); emu_cs = 0x0C3A; emu_ip = 0x1216; emu_last_cs = 0x1A34; emu_last_ip = 0x2E50; emu_last_length = 0x001D; emu_last_crc = 0x0BE3; emu_call();
	/* Unresolved jump */ emu_ip = 0x2E55; emu_last_cs = 0x1A34; emu_last_ip = 0x2E55; emu_last_length = 0x001D; emu_last_crc = 0x0BE3; emu_call();
}

/**
 * Decompiled function f__1A34_2E68_0019_2B5A()
 *
 * @name f__1A34_2E68_0019_2B5A
 * @implements 1A34:2E68:0019:2B5A ()
 *
 * Called From: 1A34:2E40:001D:0BE3
 */
void f__1A34_2E68_0019_2B5A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_si, 0x10));
	emu_movb(&emu_cl, 0x2);
	emu_sarw(&emu_ax, emu_cl);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x2E81; emu_last_cs = 0x1A34; emu_last_ip = 0x2E7C; emu_last_length = 0x0019; emu_last_crc = 0x2B5A; emu_call(); return; }
	f__1A34_2F44_0023_D47C(); return;
}

/**
 * Decompiled function f__1A34_2F44_0023_D47C()
 *
 * @name f__1A34_2F44_0023_D47C
 * @implements 1A34:2F44:0023:D47C ()
 *
 * Called From: 1A34:2E7E:0019:2B5A
 */
void f__1A34_2F44_0023_D47C()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_sarw(&emu_ax, 0x1);
	emu_movw(&emu_di, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_shlw(&emu_ax, 0x1);
	emu_cmpw(&emu_ax, emu_di);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x2F67; emu_last_cs = 0x1A34; emu_last_ip = 0x2F5A; emu_last_length = 0x0023; emu_last_crc = 0xD47C; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_shlw(&emu_ax, 0x1);
	f__1A34_2F69_0012_F102(); return;
}

/**
 * Decompiled function f__1A34_2F69_0012_F102()
 *
 * @name f__1A34_2F69_0012_F102
 * @implements 1A34:2F69:0012:F102 ()
 *
 * Called From: 1A34:2F65:0023:D47C
 */
void f__1A34_2F69_0012_F102()
{
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2F7B); emu_cs = 0x0C3A; f__0C3A_1216_0013_E56D();
	f__1A34_2F7B_000E_2A03();
}

/**
 * Decompiled function f__1A34_2F7B_000E_2A03()
 *
 * @name f__1A34_2F7B_000E_2A03
 * @implements 1A34:2F7B:000E:2A03 ()
 *
 * Called From: 1A34:2F7B:0012:F102
 */
void f__1A34_2F7B_000E_2A03()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2F89); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	f__1A34_2F89_000D_542A();
}

/**
 * Decompiled function f__1A34_2F89_000D_542A()
 *
 * @name f__1A34_2F89_000D_542A
 * @implements 1A34:2F89:000D:542A ()
 *
 * Called From: 1A34:2F89:000E:2A03
 */
void f__1A34_2F89_000D_542A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2F96); emu_cs = 0x0FE4; emu_Unit_Free();
	f__1A34_2F96_0008_AE7C();
}

/**
 * Decompiled function f__1A34_2F96_0008_AE7C()
 *
 * @name f__1A34_2F96_0008_AE7C
 * @implements 1A34:2F96:0008:AE7C ()
 *
 * Called From: 1A34:2F96:000D:542A
 */
void f__1A34_2F96_0008_AE7C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
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
 * Decompiled function f__1A34_2F98_0006_F7CE()
 *
 * @name f__1A34_2F98_0006_F7CE
 * @implements 1A34:2F98:0006:F7CE ()
 *
 * Called From: 1A34:2E35:0020:ACCF
 */
void f__1A34_2F98_0006_F7CE()
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
 * Decompiled function f__1A34_2F9E_0016_5A55()
 *
 * @name f__1A34_2F9E_0016_5A55
 * @implements 1A34:2F9E:0016:5A55 ()
 *
 * Called From: 0AEC:03C7:0035:696E
 * Called From: 0AEC:073B:0008:C3DB
 * Called From: 0AEC:07CE:000F:8BC4
 */
void f__1A34_2F9E_0016_5A55()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x2);
	if (!emu_flags.zf) { f__1A34_2FB4_0006_66E9(); return; }
	emu_movw(&emu_ax, emu_si);
	/* Unresolved jump */ emu_ip = 0x300E; emu_last_cs = 0x1A34; emu_last_ip = 0x2FB2; emu_last_length = 0x0016; emu_last_crc = 0x5A55; emu_call();
}

/**
 * Decompiled function f__1A34_2FB0_0004_45F2()
 *
 * @name f__1A34_2FB0_0004_45F2
 * @implements 1A34:2FB0:0004:45F2 ()
 *
 * Called From: 1A34:2FBF:0007:DD5F
 * Called From: 1A34:2FCD:0008:8187
 * Called From: 1A34:300C:0008:F390
 * Called From: 1A34:300C:0007:B490
 */
void f__1A34_2FB0_0004_45F2()
{
	emu_movw(&emu_ax, emu_si);
	f__1A34_300E_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_2FB2_0002_ED3A()
 *
 * @name f__1A34_2FB2_0002_ED3A
 * @implements 1A34:2FB2:0002:ED3A ()
 *
 * Called From: 1A34:3004:0004:0D1F
 */
void f__1A34_2FB2_0002_ED3A()
{
	f__1A34_300E_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_2FB4_0006_66E9()
 *
 * @name f__1A34_2FB4_0006_66E9
 * @implements 1A34:2FB4:0006:66E9 ()
 *
 * Called From: 1A34:2FAE:0016:5A55
 */
void f__1A34_2FB4_0006_66E9()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2FBA); emu_cs = 0x34CD; ovl__34CD(30);
	f__1A34_2FBA_0007_DD5F();
}

/**
 * Decompiled function f__1A34_2FBA_0007_DD5F()
 *
 * @name f__1A34_2FBA_0007_DD5F
 * @implements 1A34:2FBA:0007:DD5F ()
 *
 * Called From: 1A34:2FBA:0006:66E9
 */
void f__1A34_2FBA_0007_DD5F()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_flags.zf) { f__1A34_2FC1_0006_16E4(); return; }
	f__1A34_2FB0_0004_45F2(); return;
}

/**
 * Decompiled function f__1A34_2FC1_0006_16E4()
 *
 * @name f__1A34_2FC1_0006_16E4
 * @implements 1A34:2FC1:0006:16E4 ()
 *
 * Called From: 1A34:2FBD:0007:DD5F
 */
void f__1A34_2FC1_0006_16E4()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2FC7); emu_cs = 0x34CD; ovl__34CD(13);
	f__1A34_2FC7_0008_8187();
}

/**
 * Decompiled function f__1A34_2FC7_0008_8187()
 *
 * @name f__1A34_2FC7_0008_8187
 * @implements 1A34:2FC7:0008:8187 ()
 *
 * Called From: 1A34:2FC7:0006:16E4
 */
void f__1A34_2FC7_0008_8187()
{
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xE);
	if (!emu_flags.zf) { f__1A34_2FCF_0004_F5D9(); return; }
	f__1A34_2FB0_0004_45F2(); return;
}

/**
 * Decompiled function f__1A34_2FCF_0004_F5D9()
 *
 * @name f__1A34_2FCF_0004_F5D9
 * @implements 1A34:2FCF:0004:F5D9 ()
 *
 * Called From: 1A34:2FCB:0008:8187
 */
void f__1A34_2FCF_0004_F5D9()
{
	emu_xorw(&emu_di, emu_di);
	f__1A34_3007_0007_B490(); return;
}

/**
 * Decompiled function f__1A34_2FD3_0010_0BCE()
 *
 * @name f__1A34_2FD3_0010_0BCE
 * @implements 1A34:2FD3:0010:0BCE ()
 *
 * Called From: 1A34:300A:0007:B490
 * Called From: 1A34:300A:0008:F390
 */
void f__1A34_2FD3_0010_0BCE()
{
	emu_movw(&emu_bx, emu_di);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x62D8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2FE3); emu_cs = 0x34CD; ovl__34CD(26);
	f__1A34_2FE3_001F_2746();
}

/**
 * Decompiled function f__1A34_2FE3_001F_2746()
 *
 * @name f__1A34_2FE3_001F_2746
 * @implements 1A34:2FE3:001F:2746 ()
 *
 * Called From: 1A34:2FE3:0010:0BCE
 */
void f__1A34_2FE3_001F_2746()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_3006_0008_F390(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x3002); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__1A34_3002_0004_0D1F();
}

/**
 * Decompiled function f__1A34_3002_0004_0D1F()
 *
 * @name f__1A34_3002_0004_0D1F
 * @implements 1A34:3002:0004:0D1F ()
 *
 * Called From: 1A34:3002:001F:2746
 */
void f__1A34_3002_0004_0D1F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__1A34_2FB2_0002_ED3A(); return;
}

/**
 * Decompiled function f__1A34_3006_0008_F390()
 *
 * @name f__1A34_3006_0008_F390
 * @implements 1A34:3006:0008:F390 ()
 *
 * Called From: 1A34:2FF0:001F:2746
 */
void f__1A34_3006_0008_F390()
{
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x9);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_2FD3_0010_0BCE(); return; }
	f__1A34_2FB0_0004_45F2(); return;
}

/**
 * Decompiled function f__1A34_3007_0007_B490()
 *
 * @name f__1A34_3007_0007_B490
 * @implements 1A34:3007:0007:B490 ()
 *
 * Called From: 1A34:2FD1:0004:F5D9
 */
void f__1A34_3007_0007_B490()
{
	emu_cmpw(&emu_di, 0x9);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_2FD3_0010_0BCE(); return; }
	f__1A34_2FB0_0004_45F2(); return;
}

/**
 * Decompiled function f__1A34_300E_0006_F7CE()
 *
 * @name f__1A34_300E_0006_F7CE
 * @implements 1A34:300E:0006:F7CE ()
 *
 * Called From: 1A34:2FB2:0002:ED3A
 * Called From: 1A34:2FB2:0004:45F2
 */
void f__1A34_300E_0006_F7CE()
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
 * Decompiled function f__1A34_3014_001B_858E()
 *
 * @name f__1A34_3014_001B_858E
 * @implements 1A34:3014:001B:858E ()
 *
 * Called From: 1A34:1C4A:0018:2310
 * Called From: 1A34:3268:001F:93C6
 */
void f__1A34_3014_001B_858E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xC);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x302A; emu_last_cs = 0x1A34; emu_last_ip = 0x3020; emu_last_length = 0x001B; emu_last_crc = 0x858E; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__1A34_302F_003F_CF75(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x3142; emu_last_cs = 0x1A34; emu_last_ip = 0x302C; emu_last_length = 0x001B; emu_last_crc = 0x858E; emu_call();
}

/**
 * Decompiled function f__1A34_302A_0005_DC30()
 *
 * @name f__1A34_302A_0005_DC30
 * @implements 1A34:302A:0005:DC30 ()
 *
 * Called From: 1A34:313F:0003:621A
 */
void f__1A34_302A_0005_DC30()
{
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_3142_0004_893F(); return;
}

/**
 * Decompiled function f__1A34_302C_0003_DDA4()
 *
 * @name f__1A34_302C_0003_DDA4
 * @implements 1A34:302C:0003:DDA4 ()
 *
 * Called From: 1A34:312A:0006:420D
 * Called From: 1A34:312A:000D:8B73
 * Called From: 1A34:313C:0006:C211
 * Called From: 1A34:313C:0010:5340
 */
void f__1A34_302C_0003_DDA4()
{
	f__1A34_3142_0004_893F(); return;
}

/**
 * Decompiled function f__1A34_302F_003F_CF75()
 *
 * @name f__1A34_302F_003F_CF75
 * @implements 1A34:302F:003F:CF75 ()
 *
 * Called From: 1A34:3028:001B:858E
 */
void f__1A34_302F_003F_CF75()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x306E); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_306E_0014_5E5F();
}

/**
 * Decompiled function f__1A34_306E_0014_5E5F()
 *
 * @name f__1A34_306E_0014_5E5F
 * @implements 1A34:306E:0014:5E5F ()
 *
 * Called From: 1A34:306E:003F:CF75
 */
void f__1A34_306E_0014_5E5F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x3082); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_3082_0010_2E6C();
}

/**
 * Decompiled function f__1A34_3082_0010_2E6C()
 *
 * @name f__1A34_3082_0010_2E6C
 * @implements 1A34:3082:0010:2E6C ()
 *
 * Called From: 1A34:3082:0014:5E5F
 */
void f__1A34_3082_0010_2E6C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3092); emu_Unit_GetHouseID();
	f__1A34_3092_0028_4B4E();
}

/**
 * Decompiled function f__1A34_3092_0028_4B4E()
 *
 * @name f__1A34_3092_0028_4B4E
 * @implements 1A34:3092:0028:4B4E ()
 *
 * Called From: 1A34:3092:0010:2E6C
 */
void f__1A34_3092_0028_4B4E()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_flags.zf) { f__1A34_30F1_0011_EA5C(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_30BA_0024_9E02(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x56));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x30BA; emu_last_cs = 0x1A34; emu_last_ip = 0x30B6; emu_last_length = 0x0028; emu_last_crc = 0x4B4E; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x3127; emu_last_cs = 0x1A34; emu_last_ip = 0x30B8; emu_last_length = 0x0028; emu_last_crc = 0x4B4E; emu_call();
}

/**
 * Decompiled function f__1A34_30BA_0024_9E02()
 *
 * @name f__1A34_30BA_0024_9E02
 * @implements 1A34:30BA:0024:9E02 ()
 *
 * Called From: 1A34:30AA:0028:4B4E
 */
void f__1A34_30BA_0024_9E02()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (!emu_flags.zf) { f__1A34_30EF_0002_E73A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x80);
	if (emu_flags.zf) { f__1A34_30EF_0002_E73A(); return; }
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x30DE); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_30DE_000D_EC73();
}

/**
 * Decompiled function f__1A34_30DE_000D_EC73()
 *
 * @name f__1A34_30DE_000D_EC73
 * @implements 1A34:30DE:000D:EC73 ()
 *
 * Called From: 1A34:30DE:0024:9E02
 */
void f__1A34_30DE_000D_EC73()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x56));
	if (!emu_flags.zf) { f__1A34_30ED_0002_E53A(); return; }
	f__1A34_3127_0006_420D(); return;
}

/**
 * Decompiled function f__1A34_30ED_0002_E53A()
 *
 * @name f__1A34_30ED_0002_E53A
 * @implements 1A34:30ED:0002:E53A ()
 *
 * Called From: 1A34:30E7:000D:EC73
 */
void f__1A34_30ED_0002_E53A()
{
	f__1A34_3139_0006_C211(); return;
}

/**
 * Decompiled function f__1A34_30EF_0002_E73A()
 *
 * @name f__1A34_30EF_0002_E73A
 * @implements 1A34:30EF:0002:E73A ()
 *
 * Called From: 1A34:30C2:0024:9E02
 * Called From: 1A34:30CD:0024:9E02
 */
void f__1A34_30EF_0002_E73A()
{
	f__1A34_313F_0003_621A(); return;
}

/**
 * Decompiled function f__1A34_30F1_0011_EA5C()
 *
 * @name f__1A34_30F1_0011_EA5C
 * @implements 1A34:30F1:0011:EA5C ()
 *
 * Called From: 1A34:30A0:0028:4B4E
 */
void f__1A34_30F1_0011_EA5C()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cl, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_xorw(&emu_dx, emu_dx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_cs); emu_push(0x3102); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	f__1A34_3102_001E_AED8();
}

/**
 * Decompiled function f__1A34_3102_001E_AED8()
 *
 * @name f__1A34_3102_001E_AED8
 * @implements 1A34:3102:001E:AED8 ()
 *
 * Called From: 1A34:3102:0011:EA5C
 */
void f__1A34_3102_001E_AED8()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_cx, emu_get_memory16(emu_es, emu_bx, 0x34));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x32));
	emu_andw(&emu_bx, emu_ax);
	emu_andw(&emu_cx, emu_dx);
	emu_orw(&emu_bx, emu_cx);
	if (emu_flags.zf) { f__1A34_313F_0003_621A(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x3120); emu_cs = 0x0C10; f__0C10_0168_0014_CEB0();
	f__1A34_3120_000D_8B73();
}

/**
 * Decompiled function f__1A34_3120_000D_8B73()
 *
 * @name f__1A34_3120_000D_8B73
 * @implements 1A34:3120:000D:8B73 ()
 *
 * Called From: 1A34:3120:001E:AED8
 */
void f__1A34_3120_000D_8B73()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { f__1A34_312F_0010_5340(); return; }
	emu_movw(&emu_ax, 0x2);
	f__1A34_302C_0003_DDA4(); return;
}

/**
 * Decompiled function f__1A34_3127_0006_420D()
 *
 * @name f__1A34_3127_0006_420D
 * @implements 1A34:3127:0006:420D ()
 *
 * Called From: 1A34:30E9:000D:EC73
 */
void f__1A34_3127_0006_420D()
{
	emu_movw(&emu_ax, 0x2);
	f__1A34_302C_0003_DDA4(); return;
}

/**
 * Decompiled function f__1A34_312F_0010_5340()
 *
 * @name f__1A34_312F_0010_5340
 * @implements 1A34:312F:0010:5340 ()
 *
 * Called From: 1A34:3125:000D:8B73
 */
void f__1A34_312F_0010_5340()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (!emu_flags.zf) { f__1A34_313F_0003_621A(); return; }
	emu_movw(&emu_ax, 0x1);
	f__1A34_302C_0003_DDA4(); return;
}

/**
 * Decompiled function f__1A34_3139_0006_C211()
 *
 * @name f__1A34_3139_0006_C211
 * @implements 1A34:3139:0006:C211 ()
 *
 * Called From: 1A34:30ED:0002:E53A
 */
void f__1A34_3139_0006_C211()
{
	emu_movw(&emu_ax, 0x1);
	f__1A34_302C_0003_DDA4(); return;
}

/**
 * Decompiled function f__1A34_313F_0003_621A()
 *
 * @name f__1A34_313F_0003_621A
 * @implements 1A34:313F:0003:621A ()
 *
 * Called From: 1A34:30EF:0002:E73A
 * Called From: 1A34:3113:001E:AED8
 * Called From: 1A34:3137:0010:5340
 */
void f__1A34_313F_0003_621A()
{
	f__1A34_302A_0005_DC30(); return;
}

/**
 * Decompiled function f__1A34_3142_0004_893F()
 *
 * @name f__1A34_3142_0004_893F
 * @implements 1A34:3142:0004:893F ()
 *
 * Called From: 1A34:302C:0003:DDA4
 * Called From: 1A34:302C:0005:DC30
 */
void f__1A34_3142_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_3146_0018_6887()
 *
 * @name f__1A34_3146_0018_6887
 * @implements 1A34:3146:0018:6887 ()
 *
 * Called From: 176C:1F38:001C:8C6C
 * Called From: 1A34:172C:0023:B77B
 */
void f__1A34_3146_0018_6887()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_315E_001E_8618(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x330C; emu_last_cs = 0x1A34; emu_last_ip = 0x315B; emu_last_length = 0x0018; emu_last_crc = 0x6887; emu_call();
}

/**
 * Decompiled function f__1A34_315B_0003_9D8B()
 *
 * @name f__1A34_315B_0003_9D8B
 * @implements 1A34:315B:0003:9D8B ()
 *
 * Called From: 1A34:3278:0010:77A5
 * Called From: 1A34:3280:0006:9214
 * Called From: 1A34:3309:0005:C667
 * Called From: 1A34:3309:0008:7C67
 */
void f__1A34_315B_0003_9D8B()
{
	f__1A34_330C_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_315E_001E_8618()
 *
 * @name f__1A34_315E_001E_8618
 * @implements 1A34:315E:001E:8618 ()
 *
 * Called From: 1A34:3157:0018:6887
 */
void f__1A34_315E_001E_8618()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x317C); emu_cs = 0x34CD; ovl__34CD(11);
	f__1A34_317C_0012_0298();
}

/**
 * Decompiled function f__1A34_317C_0012_0298()
 *
 * @name f__1A34_317C_0012_0298
 * @implements 1A34:317C:0012:0298 ()
 *
 * Called From: 1A34:317C:001E:8618
 */
void f__1A34_317C_0012_0298()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1A34_318E_0006_22E8(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x318E; emu_last_cs = 0x1A34; emu_last_ip = 0x3189; emu_last_length = 0x0012; emu_last_crc = 0x0298; emu_call(); return; }
	f__1A34_327D_0006_9214(); return;
}

/**
 * Decompiled function f__1A34_318E_0006_22E8()
 *
 * @name f__1A34_318E_0006_22E8
 * @implements 1A34:318E:0006:22E8 ()
 *
 * Called From: 1A34:317F:0012:0298
 */
void f__1A34_318E_0006_22E8()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x3194); emu_cs = 0x34CD; ovl__34CD(26);
	f__1A34_3194_0012_71A5();
}

/**
 * Decompiled function f__1A34_3194_0012_71A5()
 *
 * @name f__1A34_3194_0012_71A5
 * @implements 1A34:3194:0012:71A5 ()
 *
 * Called From: 1A34:3194:0006:22E8
 */
void f__1A34_3194_0012_71A5()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1A34_31A6_0013_CF39(); return; }
	f__1A34_3246_0006_62E9(); return;
}

/**
 * Decompiled function f__1A34_31A6_0013_CF39()
 *
 * @name f__1A34_31A6_0013_CF39
 * @implements 1A34:31A6:0013:CF39 ()
 *
 * Called From: 1A34:31A1:0012:71A5
 */
void f__1A34_31A6_0013_CF39()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x31B9; emu_last_cs = 0x1A34; emu_last_ip = 0x31AF; emu_last_length = 0x0013; emu_last_crc = 0xCF39; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { f__1A34_31B9_000D_D98A(); return; }
	f__1A34_3246_0006_62E9(); return;
}

/**
 * Decompiled function f__1A34_31B9_000D_D98A()
 *
 * @name f__1A34_31B9_000D_D98A
 * @implements 1A34:31B9:000D:D98A ()
 *
 * Called From: 1A34:31B4:0013:CF39
 */
void f__1A34_31B9_000D_D98A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (!emu_flags.zf) { f__1A34_31C6_0019_2E66(); return; }
	f__1A34_3246_0006_62E9(); return;
}

/**
 * Decompiled function f__1A34_31C6_0019_2E66()
 *
 * @name f__1A34_31C6_0019_2E66
 * @implements 1A34:31C6:0019:2E66 ()
 *
 * Called From: 1A34:31C1:000D:D98A
 */
void f__1A34_31C6_0019_2E66()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_31ED_000B_21FD(); return; }
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x31DF); emu_cs = 0x167E; emu_ip = 0x00F3; emu_last_cs = 0x1A34; emu_last_ip = 0x31DA; emu_last_length = 0x0019; emu_last_crc = 0x2E66; emu_call();
	/* Unresolved jump */ emu_ip = 0x31DF; emu_last_cs = 0x1A34; emu_last_ip = 0x31DF; emu_last_length = 0x0019; emu_last_crc = 0x2E66; emu_call();
}

/**
 * Decompiled function f__1A34_31ED_000B_21FD()
 *
 * @name f__1A34_31ED_000B_21FD
 * @implements 1A34:31ED:000B:21FD ()
 *
 * Called From: 1A34:31CE:0019:2E66
 */
void f__1A34_31ED_000B_21FD()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x31F8); emu_Unit_GetHouseID();
	f__1A34_31F8_000E_95EC();
}

/**
 * Decompiled function f__1A34_31F8_000E_95EC()
 *
 * @name f__1A34_31F8_000E_95EC
 * @implements 1A34:31F8:000E:95EC ()
 *
 * Called From: 1A34:31F8:000B:21FD
 */
void f__1A34_31F8_000E_95EC()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x3206); emu_Unit_GetHouseID();
	f__1A34_3206_0008_9688();
}

/**
 * Decompiled function f__1A34_3206_0008_9688()
 *
 * @name f__1A34_3206_0008_9688
 * @implements 1A34:3206:0008:9688 ()
 *
 * Called From: 1A34:3206:000E:95EC
 */
void f__1A34_3206_0008_9688()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x320E); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	f__1A34_320E_0038_9680();
}

/**
 * Decompiled function f__1A34_320E_0038_9680()
 *
 * @name f__1A34_320E_0038_9680
 * @implements 1A34:320E:0038:9680 ()
 *
 * Called From: 1A34:320E:0008:9688
 */
void f__1A34_320E_0038_9680()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__1A34_3244_0002_DBBA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (!emu_flags.zf) { f__1A34_3244_0002_DBBA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x1);
	if (emu_flags.zf) { f__1A34_3246_0006_62E9(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x2);
	if (emu_flags.zf) { f__1A34_3246_0006_62E9(); return; }
	f__1A34_327D_0006_9214(); return;
}

/**
 * Decompiled function f__1A34_3244_0002_DBBA()
 *
 * @name f__1A34_3244_0002_DBBA
 * @implements 1A34:3244:0002:DBBA ()
 *
 * Called From: 1A34:3212:0038:9680
 * Called From: 1A34:322E:0038:9680
 */
void f__1A34_3244_0002_DBBA()
{
	f__1A34_327D_0006_9214(); return;
}

/**
 * Decompiled function f__1A34_3246_0006_62E9()
 *
 * @name f__1A34_3246_0006_62E9
 * @implements 1A34:3246:0006:62E9 ()
 *
 * Called From: 1A34:31A3:0012:71A5
 * Called From: 1A34:31B6:0013:CF39
 * Called From: 1A34:31C3:000D:D98A
 * Called From: 1A34:3238:0038:9680
 * Called From: 1A34:3242:0038:9680
 */
void f__1A34_3246_0006_62E9()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x324C); emu_cs = 0x34CD; ovl__34CD(30);
	f__1A34_324C_001F_93C6();
}

/**
 * Decompiled function f__1A34_324C_001F_93C6()
 *
 * @name f__1A34_324C_001F_93C6
 * @implements 1A34:324C:001F:93C6 ()
 *
 * Called From: 1A34:324C:0006:62E9
 */
void f__1A34_324C_001F_93C6()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_3283_0006_12E4(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x326B); f__1A34_3014_001B_858E();
	f__1A34_326B_0010_77A5();
}

/**
 * Decompiled function f__1A34_326B_0010_77A5()
 *
 * @name f__1A34_326B_0010_77A5
 * @implements 1A34:326B:0010:77A5 ()
 *
 * Called From: 1A34:326B:001F:93C6
 */
void f__1A34_326B_0010_77A5()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__1A34_327D_0006_9214(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_negw(&emu_ax, emu_ax);
	f__1A34_315B_0003_9D8B(); return;
}

/**
 * Decompiled function f__1A34_327D_0006_9214()
 *
 * @name f__1A34_327D_0006_9214
 * @implements 1A34:327D:0006:9214 ()
 *
 * Called From: 1A34:318B:0012:0298
 * Called From: 1A34:3244:0038:9680
 * Called From: 1A34:3244:0002:DBBA
 * Called From: 1A34:3272:0010:77A5
 */
void f__1A34_327D_0006_9214()
{
	emu_movw(&emu_ax, 0x100);
	f__1A34_315B_0003_9D8B(); return;
}

/**
 * Decompiled function f__1A34_3283_0006_12E4()
 *
 * @name f__1A34_3283_0006_12E4
 * @implements 1A34:3283:0006:12E4 ()
 *
 * Called From: 1A34:3259:001F:93C6
 */
void f__1A34_3283_0006_12E4()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x3289); emu_cs = 0x34CD; ovl__34CD(13);
	f__1A34_3289_0051_2FE9();
}

/**
 * Decompiled function f__1A34_3289_0051_2FE9()
 *
 * @name f__1A34_3289_0051_2FE9
 * @implements 1A34:3289:0051:2FE9 ()
 *
 * Called From: 1A34:3289:0006:12E4
 */
void f__1A34_3289_0051_2FE9()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx, 0x1C);
	emu_imuluw(&emu_ax, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x3C));
	emu_movw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_bx, 0x3A42));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_si, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_32E3_0021_3D72(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0xB);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x32E3; emu_last_cs = 0x1A34; emu_last_ip = 0x32B4; emu_last_length = 0x0051; emu_last_crc = 0x2FE9; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movb(&emu_ah, 0x0);
	emu_andw(&emu_ax, 0x7);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x32DA); emu_cs = 0x1423; emu_ip = 0x0F34; emu_last_cs = 0x1A34; emu_last_ip = 0x32D5; emu_last_length = 0x0051; emu_last_crc = 0x2FE9; emu_call();
	/* Unresolved jump */ emu_ip = 0x32DA; emu_last_cs = 0x1A34; emu_last_ip = 0x32DA; emu_last_length = 0x0051; emu_last_crc = 0x2FE9; emu_call();
}

/**
 * Decompiled function f__1A34_32E3_0021_3D72()
 *
 * @name f__1A34_32E3_0021_3D72
 * @implements 1A34:32E3:0021:3D72 ()
 *
 * Called From: 1A34:32AE:0051:2FE9
 */
void f__1A34_32E3_0021_3D72()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__1A34_3304_0008_7C67(); return; }
	emu_xorw(&emu_si, 0xFF);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x1);
	if (emu_flags.zf) { f__1A34_3302_0002_C1BA(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_sarw(&emu_ax, emu_cl);
	emu_movw(&emu_dx, emu_si);
	emu_movb(&emu_cl, 0x3);
	emu_sarw(&emu_dx, emu_cl);
	emu_addw(&emu_ax, emu_dx);
	emu_subw(&emu_si, emu_ax);
	f__1A34_3307_0005_C667(); return;
}

/**
 * Decompiled function f__1A34_3302_0002_C1BA()
 *
 * @name f__1A34_3302_0002_C1BA
 * @implements 1A34:3302:0002:C1BA ()
 *
 * Called From: 1A34:32F0:0021:3D72
 */
void f__1A34_3302_0002_C1BA()
{
	f__1A34_3307_0005_C667(); return;
}

/**
 * Decompiled function f__1A34_3304_0008_7C67()
 *
 * @name f__1A34_3304_0008_7C67
 * @implements 1A34:3304:0008:7C67 ()
 *
 * Called From: 1A34:32E5:0021:3D72
 */
void f__1A34_3304_0008_7C67()
{
	emu_movw(&emu_si, 0x100);
	emu_movw(&emu_ax, emu_si);
	f__1A34_315B_0003_9D8B(); return;
}

/**
 * Decompiled function f__1A34_3307_0005_C667()
 *
 * @name f__1A34_3307_0005_C667
 * @implements 1A34:3307:0005:C667 ()
 *
 * Called From: 1A34:3302:0002:C1BA
 * Called From: 1A34:3302:0021:3D72
 */
void f__1A34_3307_0005_C667()
{
	emu_movw(&emu_ax, emu_si);
	f__1A34_315B_0003_9D8B(); return;
}

/**
 * Decompiled function f__1A34_330C_0006_F7CE()
 *
 * @name f__1A34_330C_0006_F7CE
 * @implements 1A34:330C:0006:F7CE ()
 *
 * Called From: 1A34:315B:0003:9D8B
 */
void f__1A34_330C_0006_F7CE()
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
 * Decompiled function f__1A34_3312_0017_29E8()
 *
 * @name f__1A34_3312_0017_29E8
 * @implements 1A34:3312:0017:29E8 ()
 *
 * Called From: 176C:1E08:000D:B2F8
 * Called From: 176C:1E08:0023:0DDB
 * Called From: 1A34:09D6:000B:5F01
 * Called From: 1A34:29B5:0022:D8ED
 */
void f__1A34_3312_0017_29E8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4D), 0x0);
	if (emu_flags.zf) { f__1A34_3329_0012_5256(); return; }
	emu_movw(&emu_ax, 0x1);
	f__1A34_332B_0010_F25A(); return;
}

/**
 * Decompiled function f__1A34_3329_0012_5256()
 *
 * @name f__1A34_3329_0012_5256
 * @implements 1A34:3329:0012:5256 ()
 *
 * Called From: 1A34:3322:0017:29E8
 */
void f__1A34_3329_0012_5256()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_flags.zf) { f__1A34_333B_001B_415B(); return; }
	f__1A34_3461_0014_BCA2(); return;
}

/**
 * Decompiled function f__1A34_332B_0010_F25A()
 *
 * @name f__1A34_332B_0010_F25A
 * @implements 1A34:332B:0010:F25A ()
 *
 * Called From: 1A34:3327:0017:29E8
 */
void f__1A34_332B_0010_F25A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_flags.zf) { f__1A34_333B_001B_415B(); return; }
	/* Unresolved jump */ emu_ip = 0x3461; emu_last_cs = 0x1A34; emu_last_ip = 0x3338; emu_last_length = 0x0010; emu_last_crc = 0xF25A; emu_call();
}

/**
 * Decompiled function f__1A34_333B_001B_415B()
 *
 * @name f__1A34_333B_001B_415B
 * @implements 1A34:333B:001B:415B ()
 *
 * Called From: 1A34:3336:0010:F25A
 * Called From: 1A34:3336:0012:5256
 */
void f__1A34_333B_001B_415B()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax, 0xC);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3356); emu_Unit_GetHouseID();
	f__1A34_3356_000E_DA27();
}

/**
 * Decompiled function f__1A34_3356_000E_DA27()
 *
 * @name f__1A34_3356_000E_DA27
 * @implements 1A34:3356:000E:DA27 ()
 *
 * Called From: 1A34:3356:001B:415B
 */
void f__1A34_3356_000E_DA27()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x3364); emu_cs = 0x1082; emu_Building_FindFirst();
	f__1A34_3364_0005_A3AE();
}

/**
 * Decompiled function f__1A34_3364_0005_A3AE()
 *
 * @name f__1A34_3364_0005_A3AE
 * @implements 1A34:3364:0005:A3AE ()
 *
 * Called From: 1A34:3364:000E:DA27
 */
void f__1A34_3364_0005_A3AE()
{
	emu_addw(&emu_sp, 0x8);
	f__1A34_33B6_0025_0EF7(); return;
}

/**
 * Decompiled function f__1A34_3369_0025_D9FB()
 *
 * @name f__1A34_3369_0025_D9FB
 * @implements 1A34:3369:0025:D9FB ()
 *
 * Called From: 1A34:33C2:0025:0EF7
 * Called From: 1A34:33C2:0027:6A44
 */
void f__1A34_3369_0025_D9FB()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x1);
	if (!emu_flags.zf) { f__1A34_33A9_000B_166D(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x338E); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__1A34_338E_0026_4EDC();
}

/**
 * Decompiled function f__1A34_338E_0026_4EDC()
 *
 * @name f__1A34_338E_0026_4EDC
 * @implements 1A34:338E:0026:4EDC ()
 *
 * Called From: 1A34:338E:0025:D9FB
 */
void f__1A34_338E_0026_4EDC()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__1A34_339B_0019_4CA8(); return; }
	emu_cmpw(&emu_di, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x33A9; emu_last_cs = 0x1A34; emu_last_ip = 0x3399; emu_last_length = 0x0026; emu_last_crc = 0x4EDC; emu_call(); return; }
	emu_movw(&emu_si, emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x33B4); emu_cs = 0x1082; emu_ip = 0x013D; emu_last_cs = 0x1A34; emu_last_ip = 0x33AF; emu_last_length = 0x0026; emu_last_crc = 0x4EDC; emu_call();
	f__1A34_33B4_0027_6A44();
}

/**
 * Decompiled function f__1A34_339B_0019_4CA8()
 *
 * @name f__1A34_339B_0019_4CA8
 * @implements 1A34:339B:0019:4CA8 ()
 *
 * Called From: 1A34:3395:0026:4EDC
 */
void f__1A34_339B_0019_4CA8()
{
	emu_movw(&emu_si, emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x33B4); emu_cs = 0x1082; emu_Building_FindNext();
	f__1A34_33B4_0027_6A44();
}

/**
 * Decompiled function f__1A34_33A9_000B_166D()
 *
 * @name f__1A34_33A9_000B_166D
 * @implements 1A34:33A9:000B:166D ()
 *
 * Called From: 1A34:3371:0025:D9FB
 */
void f__1A34_33A9_000B_166D()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x33B4); emu_cs = 0x1082; emu_Building_FindNext();
	f__1A34_33B4_0027_6A44();
}

/**
 * Decompiled function f__1A34_33B4_0027_6A44()
 *
 * @name f__1A34_33B4_0027_6A44
 * @implements 1A34:33B4:0027:6A44 ()
 *
 * Called From: 1A34:33B4:000B:166D
 * Called From: 1A34:33B4:0019:4CA8
 */
void f__1A34_33B4_0027_6A44()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__1A34_3369_0025_D9FB(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!emu_flags.zf) { f__1A34_343F_0017_3A91(); return; }
	emu_movw(&emu_ax, 0xC);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x33DB); emu_Unit_GetHouseID();
	f__1A34_33DB_000E_DA27();
}

/**
 * Decompiled function f__1A34_33B6_0025_0EF7()
 *
 * @name f__1A34_33B6_0025_0EF7
 * @implements 1A34:33B6:0025:0EF7 ()
 *
 * Called From: 1A34:3367:0005:A3AE
 */
void f__1A34_33B6_0025_0EF7()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__1A34_3369_0025_D9FB(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x343F; emu_last_cs = 0x1A34; emu_last_ip = 0x33CA; emu_last_length = 0x0025; emu_last_crc = 0x0EF7; emu_call(); return; }
	emu_movw(&emu_ax, 0xC);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x33DB); emu_Unit_GetHouseID();
	f__1A34_33DB_000E_DA27();
}

/**
 * Decompiled function f__1A34_33DB_000E_DA27()
 *
 * @name f__1A34_33DB_000E_DA27
 * @implements 1A34:33DB:000E:DA27 ()
 *
 * Called From: 1A34:33DB:0027:6A44
 * Called From: 1A34:33DB:0025:0EF7
 */
void f__1A34_33DB_000E_DA27()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x33E9); emu_cs = 0x1082; emu_Building_FindFirst();
	f__1A34_33E9_0005_A4AE();
}

/**
 * Decompiled function f__1A34_33E9_0005_A4AE()
 *
 * @name f__1A34_33E9_0005_A4AE
 * @implements 1A34:33E9:0005:A4AE ()
 *
 * Called From: 1A34:33E9:000E:DA27
 */
void f__1A34_33E9_0005_A4AE()
{
	emu_addw(&emu_sp, 0x8);
	f__1A34_3431_0025_3518(); return;
}

/**
 * Decompiled function f__1A34_33EE_001B_E20F()
 *
 * @name f__1A34_33EE_001B_E20F
 * @implements 1A34:33EE:001B:E20F ()
 *
 * Called From: 1A34:343D:0025:3518
 * Called From: 1A34:343D:0027:51AB
 */
void f__1A34_33EE_001B_E20F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x3409); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__1A34_3409_0026_4EDC();
}

/**
 * Decompiled function f__1A34_3409_0026_4EDC()
 *
 * @name f__1A34_3409_0026_4EDC
 * @implements 1A34:3409:0026:4EDC ()
 *
 * Called From: 1A34:3409:001B:E20F
 */
void f__1A34_3409_0026_4EDC()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__1A34_3416_0019_4CA8(); return; }
	emu_cmpw(&emu_di, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_3424_000B_166D(); return; }
	emu_movw(&emu_si, emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x342F); emu_cs = 0x1082; emu_Building_FindNext();
	f__1A34_342F_0027_51AB();
}

/**
 * Decompiled function f__1A34_3416_0019_4CA8()
 *
 * @name f__1A34_3416_0019_4CA8
 * @implements 1A34:3416:0019:4CA8 ()
 *
 * Called From: 1A34:3410:0026:4EDC
 */
void f__1A34_3416_0019_4CA8()
{
	emu_movw(&emu_si, emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x342F); emu_cs = 0x1082; emu_Building_FindNext();
	f__1A34_342F_0027_51AB();
}

/**
 * Decompiled function f__1A34_3424_000B_166D()
 *
 * @name f__1A34_3424_000B_166D
 * @implements 1A34:3424:000B:166D ()
 *
 * Called From: 1A34:3414:0026:4EDC
 */
void f__1A34_3424_000B_166D()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x342F); emu_cs = 0x1082; emu_Building_FindNext();
	f__1A34_342F_0027_51AB();
}

/**
 * Decompiled function f__1A34_342F_0027_51AB()
 *
 * @name f__1A34_342F_0027_51AB
 * @implements 1A34:342F:0027:51AB ()
 *
 * Called From: 1A34:342F:0019:4CA8
 * Called From: 1A34:342F:0026:4EDC
 * Called From: 1A34:342F:000B:166D
 */
void f__1A34_342F_0027_51AB()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__1A34_33EE_001B_E20F(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x345F; emu_last_cs = 0x1A34; emu_last_ip = 0x3445; emu_last_length = 0x0027; emu_last_crc = 0x51AB; emu_call(); return; }
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x3456); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_3456_000B_5F73();
}

/**
 * Decompiled function f__1A34_3431_0025_3518()
 *
 * @name f__1A34_3431_0025_3518
 * @implements 1A34:3431:0025:3518 ()
 *
 * Called From: 1A34:33EC:0005:A4AE
 */
void f__1A34_3431_0025_3518()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__1A34_33EE_001B_E20F(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { f__1A34_345F_0002_D2BA(); return; }
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x3456); emu_cs = 0x167E; emu_ip = 0x00F3; emu_last_cs = 0x1A34; emu_last_ip = 0x3451; emu_last_length = 0x0025; emu_last_crc = 0x3518; emu_call();
	f__1A34_3456_000B_5F73();
}

/**
 * Decompiled function f__1A34_343F_0017_3A91()
 *
 * @name f__1A34_343F_0017_3A91
 * @implements 1A34:343F:0017:3A91 ()
 *
 * Called From: 1A34:33CA:0027:6A44
 */
void f__1A34_343F_0017_3A91()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x345F; emu_last_cs = 0x1A34; emu_last_ip = 0x3445; emu_last_length = 0x0017; emu_last_crc = 0x3A91; emu_call(); return; }
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x3456); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_3456_000B_5F73();
}

/**
 * Decompiled function f__1A34_3456_000B_5F73()
 *
 * @name f__1A34_3456_000B_5F73
 * @implements 1A34:3456:000B:5F73 ()
 *
 * Called From: 1A34:3456:0027:51AB
 * Called From: 1A34:3456:0017:3A91
 */
void f__1A34_3456_000B_5F73()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4D), emu_ax);
	f__1A34_3486_0005_BBA6(); return;
}

/**
 * Decompiled function f__1A34_345F_0002_D2BA()
 *
 * @name f__1A34_345F_0002_D2BA
 * @implements 1A34:345F:0002:D2BA ()
 *
 * Called From: 1A34:3445:0025:3518
 */
void f__1A34_345F_0002_D2BA()
{
	f__1A34_3486_0005_BBA6(); return;
}

/**
 * Decompiled function f__1A34_3461_0014_BCA2()
 *
 * @name f__1A34_3461_0014_BCA2
 * @implements 1A34:3461:0014:BCA2 ()
 *
 * Called From: 1A34:3338:0012:5256
 */
void f__1A34_3461_0014_BCA2()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x3475); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__1A34_3475_0008_A673();
}

/**
 * Decompiled function f__1A34_3475_0008_A673()
 *
 * @name f__1A34_3475_0008_A673
 * @implements 1A34:3475:0008:A673 ()
 *
 * Called From: 1A34:3475:0014:BCA2
 */
void f__1A34_3475_0008_A673()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x347D); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_347D_000E_0297();
}

/**
 * Decompiled function f__1A34_347D_000E_0297()
 *
 * @name f__1A34_347D_000E_0297
 * @implements 1A34:347D:000E:0297 ()
 *
 * Called From: 1A34:347D:0008:A673
 */
void f__1A34_347D_000E_0297()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4D), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1A34_348B_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_3486_0005_BBA6()
 *
 * @name f__1A34_3486_0005_BBA6
 * @implements 1A34:3486:0005:BBA6 ()
 *
 * Called From: 1A34:345F:000B:5F73
 * Called From: 1A34:345F:0002:D2BA
 */
void f__1A34_3486_0005_BBA6()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1A34_348B_0006_F7CE(); return;
}

/**
 * Decompiled function f__1A34_348B_0006_F7CE()
 *
 * @name f__1A34_348B_0006_F7CE
 * @implements 1A34:348B:0006:F7CE ()
 *
 * Called From: 1A34:3489:000E:0297
 * Called From: 1A34:3489:0005:BBA6
 */
void f__1A34_348B_0006_F7CE()
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
 * Decompiled function f__1A34_3491_0032_AFF8()
 *
 * @name f__1A34_3491_0032_AFF8
 * @implements 1A34:3491:0032:AFF8 ()
 *
 * Called From: 0972:0B53:0012:0F5D
 * Called From: 0972:0C77:000D:A320
 * Called From: 0C10:0119:003D:FEA4
 * Called From: 0C10:028B:003C:67AC
 * Called From: 176C:27F5:000D:8210
 * Called From: 1A34:2211:0015:FCE4
 * Called From: 1A34:226B:000B:D285
 */
void f__1A34_3491_0032_AFF8()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x34C6; emu_last_cs = 0x1A34; emu_last_ip = 0x349D; emu_last_length = 0x0032; emu_last_crc = 0xAFF8; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_flags.zf) { f__1A34_34C6_0006_5EA9(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x3));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x34C3); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	f__1A34_34C3_0003_C81A();
}

/**
 * Decompiled function f__1A34_34C3_0003_C81A()
 *
 * @name f__1A34_34C3_0003_C81A
 * @implements 1A34:34C3:0003:C81A ()
 *
 * Called From: 1A34:34C3:0032:AFF8
 */
void f__1A34_34C3_0003_C81A()
{
	emu_pop(&emu_cx);
	f__1A34_34CC_0004_893F(); return;
}

/**
 * Decompiled function f__1A34_34C4_0002_C33A()
 *
 * @name f__1A34_34C4_0002_C33A
 * @implements 1A34:34C4:0002:C33A ()
 *
 * Called From: 1A34:34CA:0006:5EA9
 */
void f__1A34_34C4_0002_C33A()
{
	f__1A34_34CC_0004_893F(); return;
}

/**
 * Decompiled function f__1A34_34C6_0006_5EA9()
 *
 * @name f__1A34_34C6_0006_5EA9
 * @implements 1A34:34C6:0006:5EA9 ()
 *
 * Called From: 1A34:34B3:0032:AFF8
 */
void f__1A34_34C6_0006_5EA9()
{
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_34C4_0002_C33A(); return;
}

/**
 * Decompiled function f__1A34_34CC_0004_893F()
 *
 * @name f__1A34_34CC_0004_893F
 * @implements 1A34:34CC:0004:893F ()
 *
 * Called From: 1A34:34C4:0002:C33A
 * Called From: 1A34:34C4:0003:C81A
 */
void f__1A34_34CC_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_34D0_0032_E0A4()
 *
 * @name f__1A34_34D0_0032_E0A4
 * @implements 1A34:34D0:0032:E0A4 ()
 *
 * Called From: 0972:064C:000D:B324
 */
void f__1A34_34D0_0032_E0A4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x3505; emu_last_cs = 0x1A34; emu_last_ip = 0x34DC; emu_last_length = 0x0032; emu_last_crc = 0xE0A4; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x3505; emu_last_cs = 0x1A34; emu_last_ip = 0x34F2; emu_last_length = 0x0032; emu_last_crc = 0xE0A4; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x3));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x3502); emu_cs = 0x1082; emu_Building_Get_ByIndex();
	f__1A34_3502_0003_C81A();
}

/**
 * Decompiled function f__1A34_3502_0003_C81A()
 *
 * @name f__1A34_3502_0003_C81A
 * @implements 1A34:3502:0003:C81A ()
 *
 * Called From: 1A34:3502:0032:E0A4
 */
void f__1A34_3502_0003_C81A()
{
	emu_pop(&emu_cx);
	f__1A34_350B_0004_893F(); return;
}

/**
 * Decompiled function f__1A34_350B_0004_893F()
 *
 * @name f__1A34_350B_0004_893F
 * @implements 1A34:350B:0004:893F ()
 *
 * Called From: 1A34:3503:0003:C81A
 */
void f__1A34_350B_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_350F_0021_9B04()
 *
 * @name f__1A34_350F_0021_9B04
 * @implements 1A34:350F:0021:9B04 ()
 *
 * Called From: 176C:0876:0023:E780
 */
void f__1A34_350F_0021_9B04()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_3530_0011_412D(); return; }
	emu_xorw(&emu_ax, emu_ax);
	/* Unresolved jump */ emu_ip = 0x361E; emu_last_cs = 0x1A34; emu_last_ip = 0x352D; emu_last_length = 0x0021; emu_last_crc = 0x9B04; emu_call();
}

/**
 * Decompiled function f__1A34_352B_0005_9C8F()
 *
 * @name f__1A34_352B_0005_9C8F
 * @implements 1A34:352B:0005:9C8F ()
 *
 * Called From: 1A34:361B:0003:22A3
 */
void f__1A34_352B_0005_9C8F()
{
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_361E_0005_8BCF(); return;
}

/**
 * Decompiled function f__1A34_352D_0003_9D1B()
 *
 * @name f__1A34_352D_0003_9D1B
 * @implements 1A34:352D:0003:9D1B ()
 *
 * Called From: 1A34:3618:0005:7069
 */
void f__1A34_352D_0003_9D1B()
{
	f__1A34_361E_0005_8BCF(); return;
}

/**
 * Decompiled function f__1A34_3530_0011_412D()
 *
 * @name f__1A34_3530_0011_412D
 * @implements 1A34:3530:0011:412D ()
 *
 * Called From: 1A34:3529:0021:9B04
 */
void f__1A34_3530_0011_412D()
{
	emu_cmpw(&emu_si, 0x4);
	if (!emu_flags.zf) { f__1A34_357D_000B_BD96(); return; }
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x3541); emu_cs = 0x0C3A; emu_ip = 0x22CD; emu_last_cs = 0x1A34; emu_last_ip = 0x353C; emu_last_length = 0x0011; emu_last_crc = 0x412D; emu_call();
	/* Unresolved jump */ emu_ip = 0x3541; emu_last_cs = 0x1A34; emu_last_ip = 0x3541; emu_last_length = 0x0011; emu_last_crc = 0x412D; emu_call();
}

/**
 * Decompiled function f__1A34_3571_000A_2159()
 *
 * @name f__1A34_3571_000A_2159
 * @implements 1A34:3571:000A:2159 ()
 *
 * Called From: 1A34:35ED:000A:236B
 * Called From: 1A34:35EF:0002:803A
 */
void f__1A34_3571_000A_2159()
{
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__1A34_360E_0008_443E(); return;
}

/**
 * Decompiled function f__1A34_357D_000B_BD96()
 *
 * @name f__1A34_357D_000B_BD96
 * @implements 1A34:357D:000B:BD96 ()
 *
 * Called From: 1A34:3533:0011:412D
 */
void f__1A34_357D_000B_BD96()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3588); f__1A34_1328_0026_C398();
	f__1A34_3588_001F_BC73();
}

/**
 * Decompiled function f__1A34_3588_001F_BC73()
 *
 * @name f__1A34_3588_001F_BC73
 * @implements 1A34:3588:001F:BC73 ()
 *
 * Called From: 1A34:3588:000B:BD96
 */
void f__1A34_3588_001F_BC73()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x35B0; emu_last_cs = 0x1A34; emu_last_ip = 0x3599; emu_last_length = 0x001F; emu_last_crc = 0xBC73; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x35A7); emu_cs = 0x0C3A; f__0C3A_22CD_0029_8F46();
	f__1A34_35A7_0029_C135();
}

/**
 * Decompiled function f__1A34_35A7_0029_C135()
 *
 * @name f__1A34_35A7_0029_C135
 * @implements 1A34:35A7:0029:C135 ()
 *
 * Called From: 1A34:35A7:001F:BC73
 */
void f__1A34_35A7_0029_C135()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_35F5_000A_3979(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__1A34_35F5_000A_3979(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x35D0); f__1A34_117E_001D_E17B();
	f__1A34_35D0_0015_9E61();
}

/**
 * Decompiled function f__1A34_35D0_0015_9E61()
 *
 * @name f__1A34_35D0_0015_9E61
 * @implements 1A34:35D0:0015:9E61 ()
 *
 * Called From: 1A34:35D0:0029:C135
 */
void f__1A34_35D0_0015_9E61()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x35E5); emu_cs = 0x0C3A; f__0C3A_2207_001D_EDF2();
	f__1A34_35E5_000A_236B();
}

/**
 * Decompiled function f__1A34_35E5_000A_236B()
 *
 * @name f__1A34_35E5_000A_236B
 * @implements 1A34:35E5:000A:236B ()
 *
 * Called From: 1A34:35E5:0015:9E61
 */
void f__1A34_35E5_000A_236B()
{
	emu_addw(&emu_sp, 0x8);
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if ((emu_flags.cf || emu_flags.zf)) { f__1A34_35F3_0002_C93A(); return; }
	f__1A34_3571_000A_2159(); return;
}

/**
 * Decompiled function f__1A34_35EF_0002_803A()
 *
 * @name f__1A34_35EF_0002_803A
 * @implements 1A34:35EF:0002:803A ()
 *
 * Called From: 1A34:35FD:000A:3979
 */
void f__1A34_35EF_0002_803A()
{
	f__1A34_3571_000A_2159(); return;
}

/**
 * Decompiled function f__1A34_35F3_0002_C93A()
 *
 * @name f__1A34_35F3_0002_C93A
 * @implements 1A34:35F3:0002:C93A ()
 *
 * Called From: 1A34:35EB:000A:236B
 */
void f__1A34_35F3_0002_C93A()
{
	f__1A34_3607_000F_A6D7(); return;
}

/**
 * Decompiled function f__1A34_35F5_000A_3979()
 *
 * @name f__1A34_35F5_000A_3979
 * @implements 1A34:35F5:000A:3979 ()
 *
 * Called From: 1A34:35B6:0029:C135
 * Called From: 1A34:35BE:0029:C135
 */
void f__1A34_35F5_000A_3979()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_35FF_0017_BAEA(); return; }
	f__1A34_35EF_0002_803A(); return;
}

/**
 * Decompiled function f__1A34_35FF_0017_BAEA()
 *
 * @name f__1A34_35FF_0017_BAEA
 * @implements 1A34:35FF:0017:BAEA ()
 *
 * Called From: 1A34:35FB:000A:3979
 */
void f__1A34_35FF_0017_BAEA()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__1A34_361B_0003_22A3(); return; }
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x3616); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_3616_0005_7069();
}

/**
 * Decompiled function f__1A34_3607_000F_A6D7()
 *
 * @name f__1A34_3607_000F_A6D7
 * @implements 1A34:3607:000F:A6D7 ()
 *
 * Called From: 1A34:35F3:0002:C93A
 */
void f__1A34_3607_000F_A6D7()
{
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x3616); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_3616_0005_7069();
}

/**
 * Decompiled function f__1A34_360E_0008_443E()
 *
 * @name f__1A34_360E_0008_443E
 * @implements 1A34:360E:0008:443E ()
 *
 * Called From: 1A34:3578:000A:2159
 */
void f__1A34_360E_0008_443E()
{
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x3616); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_3616_0005_7069();
}

/**
 * Decompiled function f__1A34_3616_0005_7069()
 *
 * @name f__1A34_3616_0005_7069
 * @implements 1A34:3616:0005:7069 ()
 *
 * Called From: 1A34:3616:000F:A6D7
 * Called From: 1A34:3616:0008:443E
 * Called From: 1A34:3616:0017:BAEA
 */
void f__1A34_3616_0005_7069()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__1A34_352D_0003_9D1B(); return;
}

/**
 * Decompiled function f__1A34_361B_0003_22A3()
 *
 * @name f__1A34_361B_0003_22A3
 * @implements 1A34:361B:0003:22A3 ()
 *
 * Called From: 1A34:3605:0017:BAEA
 */
void f__1A34_361B_0003_22A3()
{
	f__1A34_352B_0005_9C8F(); return;
}

/**
 * Decompiled function f__1A34_361E_0005_8BCF()
 *
 * @name f__1A34_361E_0005_8BCF
 * @implements 1A34:361E:0005:8BCF ()
 *
 * Called From: 1A34:352D:0005:9C8F
 * Called From: 1A34:352D:0003:9D1B
 */
void f__1A34_361E_0005_8BCF()
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
 * Decompiled function f__1A34_364E_0012_61B3()
 *
 * @name f__1A34_364E_0012_61B3
 * @implements 1A34:364E:0012:61B3 ()
 *
 * Called From: 1A34:01EE:000B:0192
 * Called From: 1A34:01EE:000D:CC00
 * Called From: 1A34:110A:0013:0DCB
 * Called From: 1A34:2AF7:000E:C4E8
 */
void f__1A34_364E_0012_61B3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_3660_000F_A6AC(); return; }
	/* Unresolved jump */ emu_ip = 0x3796; emu_last_cs = 0x1A34; emu_last_ip = 0x365D; emu_last_length = 0x0012; emu_last_crc = 0x61B3; emu_call();
}

/**
 * Decompiled function f__1A34_3660_000F_A6AC()
 *
 * @name f__1A34_3660_000F_A6AC
 * @implements 1A34:3660:000F:A6AC ()
 *
 * Called From: 1A34:365B:0012:61B3
 */
void f__1A34_3660_000F_A6AC()
{
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x366F); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__1A34_366F_000F_DCEB();
}

/**
 * Decompiled function f__1A34_366F_000F_DCEB()
 *
 * @name f__1A34_366F_000F_DCEB
 * @implements 1A34:366F:000F:DCEB ()
 *
 * Called From: 1A34:366F:000F:A6AC
 */
void f__1A34_366F_000F_DCEB()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x367E); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	f__1A34_367E_0014_005F();
}

/**
 * Decompiled function f__1A34_367E_0014_005F()
 *
 * @name f__1A34_367E_0014_005F
 * @implements 1A34:367E:0014:005F ()
 *
 * Called From: 1A34:367E:000F:DCEB
 */
void f__1A34_367E_0014_005F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x3692); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__1A34_3692_0005_A22E();
}

/**
 * Decompiled function f__1A34_3692_0005_A22E()
 *
 * @name f__1A34_3692_0005_A22E
 * @implements 1A34:3692:0005:A22E ()
 *
 * Called From: 1A34:3692:0014:005F
 */
void f__1A34_3692_0005_A22E()
{
	emu_addw(&emu_sp, 0x8);
	f__1A34_36E5_0020_1221(); return;
}

/**
 * Decompiled function f__1A34_3697_002F_3E26()
 *
 * @name f__1A34_3697_002F_3E26
 * @implements 1A34:3697:002F:3E26 ()
 *
 * Called From: 1A34:36F1:0020:1221
 * Called From: 1A34:36F1:0022:7EB7
 */
void f__1A34_3697_002F_3E26()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), emu_si);
	if (!emu_flags.zf) { f__1A34_36A9_001D_281D(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), emu_si);
	if (!emu_flags.zf) { f__1A34_36BB_000B_70FD(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x36C6); emu_cs = 0x0C10; f__0C10_0168_0014_CEB0();
	f__1A34_36C6_0011_21E1();
}

/**
 * Decompiled function f__1A34_36A9_001D_281D()
 *
 * @name f__1A34_36A9_001D_281D
 * @implements 1A34:36A9:001D:281D ()
 *
 * Called From: 1A34:369E:002F:3E26
 */
void f__1A34_36A9_001D_281D()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), emu_si);
	if (!emu_flags.zf) { f__1A34_36BB_000B_70FD(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x36C6); emu_cs = 0x0C10; f__0C10_0168_0014_CEB0();
	f__1A34_36C6_0011_21E1();
}

/**
 * Decompiled function f__1A34_36BB_000B_70FD()
 *
 * @name f__1A34_36BB_000B_70FD
 * @implements 1A34:36BB:000B:70FD ()
 *
 * Called From: 1A34:36B0:001D:281D
 * Called From: 1A34:36B0:002F:3E26
 */
void f__1A34_36BB_000B_70FD()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x36C6); emu_cs = 0x0C10; f__0C10_0168_0014_CEB0();
	f__1A34_36C6_0011_21E1();
}

/**
 * Decompiled function f__1A34_36C6_0011_21E1()
 *
 * @name f__1A34_36C6_0011_21E1
 * @implements 1A34:36C6:0011:21E1 ()
 *
 * Called From: 1A34:36C6:000B:70FD
 * Called From: 1A34:36C6:002F:3E26
 * Called From: 1A34:36C6:001D:281D
 */
void f__1A34_36C6_0011_21E1()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_si);
	if (!emu_flags.zf) { f__1A34_36D9_000A_B13A(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x36D7); emu_cs = 0x0C10; emu_ip = 0x0182; emu_last_cs = 0x1A34; emu_last_ip = 0x36D2; emu_last_length = 0x0011; emu_last_crc = 0x21E1; emu_call();
	/* Unresolved jump */ emu_ip = 0x36D7; emu_last_cs = 0x1A34; emu_last_ip = 0x36D7; emu_last_length = 0x0011; emu_last_crc = 0x21E1; emu_call();
}

/**
 * Decompiled function f__1A34_36D9_000A_B13A()
 *
 * @name f__1A34_36D9_000A_B13A
 * @implements 1A34:36D9:000A:B13A ()
 *
 * Called From: 1A34:36CA:0011:21E1
 */
void f__1A34_36D9_000A_B13A()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x36E3); emu_cs = 0x0FE4; emu_Unit_FindNext();
	f__1A34_36E3_0022_7EB7();
}

/**
 * Decompiled function f__1A34_36E3_0022_7EB7()
 *
 * @name f__1A34_36E3_0022_7EB7
 * @implements 1A34:36E3:0022:7EB7 ()
 *
 * Called From: 1A34:36E3:000A:B13A
 */
void f__1A34_36E3_0022_7EB7()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1A34_3697_002F_3E26(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x3705); emu_cs = 0x1082; emu_Building_FindFirst();
	f__1A34_3705_0005_9C2E();
}

/**
 * Decompiled function f__1A34_36E5_0020_1221()
 *
 * @name f__1A34_36E5_0020_1221
 * @implements 1A34:36E5:0020:1221 ()
 *
 * Called From: 1A34:3695:0005:A22E
 */
void f__1A34_36E5_0020_1221()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1A34_3697_002F_3E26(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x3705); emu_cs = 0x1082; emu_ip = 0x00FD; emu_last_cs = 0x1A34; emu_last_ip = 0x3700; emu_last_length = 0x0020; emu_last_crc = 0x1221; emu_call();
	f__1A34_3705_0005_9C2E();
}

/**
 * Decompiled function f__1A34_3705_0005_9C2E()
 *
 * @name f__1A34_3705_0005_9C2E
 * @implements 1A34:3705:0005:9C2E ()
 *
 * Called From: 1A34:3705:0022:7EB7
 */
void f__1A34_3705_0005_9C2E()
{
	emu_addw(&emu_sp, 0x8);
	f__1A34_373C_0019_E290(); return;
}

/**
 * Decompiled function f__1A34_370A_0030_FE88()
 *
 * @name f__1A34_370A_0030_FE88
 * @implements 1A34:370A:0030:FE88 ()
 *
 * Called From: 1A34:3748:0019:E290
 * Called From: 1A34:3748:001B:D4DB
 */
void f__1A34_370A_0030_FE88()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xF);
	if (emu_flags.zf) { f__1A34_371E_001C_757B(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (!emu_flags.zf) { f__1A34_3730_000A_DEC8(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x22), emu_si);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x3730; emu_last_cs = 0x1A34; emu_last_ip = 0x3725; emu_last_length = 0x0030; emu_last_crc = 0xFE88; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x22), 0x0);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x373A); emu_cs = 0x1082; emu_ip = 0x013D; emu_last_cs = 0x1A34; emu_last_ip = 0x3735; emu_last_length = 0x0030; emu_last_crc = 0xFE88; emu_call();
	f__1A34_373A_001B_D4DB();
}

/**
 * Decompiled function f__1A34_371E_001C_757B()
 *
 * @name f__1A34_371E_001C_757B
 * @implements 1A34:371E:001C:757B ()
 *
 * Called From: 1A34:3712:0030:FE88
 */
void f__1A34_371E_001C_757B()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x22), emu_si);
	if (!emu_flags.zf) { f__1A34_3730_000A_DEC8(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x22), 0x0);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x373A); emu_cs = 0x1082; emu_Building_FindNext();
	f__1A34_373A_001B_D4DB();
}

/**
 * Decompiled function f__1A34_3730_000A_DEC8()
 *
 * @name f__1A34_3730_000A_DEC8
 * @implements 1A34:3730:000A:DEC8 ()
 *
 * Called From: 1A34:371C:0030:FE88
 * Called From: 1A34:3725:001C:757B
 */
void f__1A34_3730_000A_DEC8()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x373A); emu_cs = 0x1082; emu_Building_FindNext();
	f__1A34_373A_001B_D4DB();
}

/**
 * Decompiled function f__1A34_373A_001B_D4DB()
 *
 * @name f__1A34_373A_001B_D4DB
 * @implements 1A34:373A:001B:D4DB ()
 *
 * Called From: 1A34:373A:000A:DEC8
 * Called From: 1A34:373A:001C:757B
 */
void f__1A34_373A_001B_D4DB()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1A34_370A_0030_FE88(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x3755); emu_cs = 0x16BC; f__16BC_0044_0027_CB92();
	f__1A34_3755_0010_2991();
}

/**
 * Decompiled function f__1A34_373C_0019_E290()
 *
 * @name f__1A34_373C_0019_E290
 * @implements 1A34:373C:0019:E290 ()
 *
 * Called From: 1A34:3708:0005:9C2E
 */
void f__1A34_373C_0019_E290()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1A34_370A_0030_FE88(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x3755); emu_cs = 0x16BC; f__16BC_0044_0027_CB92();
	f__1A34_3755_0010_2991();
}

/**
 * Decompiled function f__1A34_3755_0010_2991()
 *
 * @name f__1A34_3755_0010_2991
 * @implements 1A34:3755:0010:2991 ()
 *
 * Called From: 1A34:3755:001B:D4DB
 * Called From: 1A34:3755:0019:E290
 */
void f__1A34_3755_0010_2991()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x3765); emu_cs = 0x104B; emu_AirUnit_FindFirst();
	f__1A34_3765_0005_8BEE();
}

/**
 * Decompiled function f__1A34_3765_0005_8BEE()
 *
 * @name f__1A34_3765_0005_8BEE
 * @implements 1A34:3765:0005:8BEE ()
 *
 * Called From: 1A34:3765:0010:2991
 */
void f__1A34_3765_0005_8BEE()
{
	emu_addw(&emu_sp, 0x6);
	f__1A34_3788_0013_96D3(); return;
}

/**
 * Decompiled function f__1A34_376A_001C_4064()
 *
 * @name f__1A34_376A_001C_4064
 * @implements 1A34:376A:001C:4064 ()
 *
 * Called From: 1A34:3794:0013:96D3
 * Called From: 1A34:3794:0015:041E
 */
void f__1A34_376A_001C_4064()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1A), emu_si);
	if (!emu_flags.zf) { f__1A34_377C_000A_CED6(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x1A), 0x0);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x3786); emu_cs = 0x104B; emu_ip = 0x00F8; emu_last_cs = 0x1A34; emu_last_ip = 0x3781; emu_last_length = 0x001C; emu_last_crc = 0x4064; emu_call();
	f__1A34_3786_0015_041E();
}

/**
 * Decompiled function f__1A34_377C_000A_CED6()
 *
 * @name f__1A34_377C_000A_CED6
 * @implements 1A34:377C:000A:CED6 ()
 *
 * Called From: 1A34:3771:001C:4064
 */
void f__1A34_377C_000A_CED6()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x3786); emu_cs = 0x104B; emu_AirUnit_FindNext();
	f__1A34_3786_0015_041E();
}

/**
 * Decompiled function f__1A34_3786_0015_041E()
 *
 * @name f__1A34_3786_0015_041E
 * @implements 1A34:3786:0015:041E ()
 *
 * Called From: 1A34:3786:000A:CED6
 */
void f__1A34_3786_0015_041E()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { f__1A34_376A_001C_4064(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_3788_0013_96D3()
 *
 * @name f__1A34_3788_0013_96D3
 * @implements 1A34:3788:0013:96D3 ()
 *
 * Called From: 1A34:3768:0005:8BEE
 */
void f__1A34_3788_0013_96D3()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { f__1A34_376A_001C_4064(); return; }
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_379B_0015_B07B()
 *
 * @name f__1A34_379B_0015_B07B
 * @implements 1A34:379B:0015:B07B ()
 *
 * Called From: 176C:171D:0023:1E72
 * Called From: 1A34:0C1A:000B:7668
 */
void f__1A34_379B_0015_B07B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x381E; emu_last_cs = 0x1A34; emu_last_ip = 0x37A4; emu_last_length = 0x0015; emu_last_crc = 0xB07B; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x37B0); emu_Unit_GetHouseID();
	f__1A34_37B0_0026_D835();
}

/**
 * Decompiled function f__1A34_37B0_0026_D835()
 *
 * @name f__1A34_37B0_0026_D835
 * @implements 1A34:37B0:0026:D835 ()
 *
 * Called From: 1A34:37B0:0015:B07B
 */
void f__1A34_37B0_0026_D835()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (!emu_flags.zf) { f__1A34_381E_0004_9539(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x381E; emu_last_cs = 0x1A34; emu_last_ip = 0x37C1; emu_last_length = 0x0026; emu_last_crc = 0xD835; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFFD);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x37D6); emu_cs = 0x16BC; f__16BC_0044_0027_CB92();
	f__1A34_37D6_0036_C636();
}

/**
 * Decompiled function f__1A34_37D6_0036_C636()
 *
 * @name f__1A34_37D6_0036_C636
 * @implements 1A34:37D6:0036:C636 ()
 *
 * Called From: 1A34:37D6:0026:D835
 */
void f__1A34_37D6_0036_C636()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (!emu_flags.zf) { f__1A34_3819_0005_D7FA(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	if (!emu_flags.zf) { f__1A34_3819_0005_D7FA(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x1);
	if (!emu_flags.zf) { f__1A34_380D_000A_AA19(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38F4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38F2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38F6), 0xFFFF);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x380C); emu_cs = 0x34E9; emu_ip = 0x002A; emu_last_cs = 0x1A34; emu_last_ip = 0x3807; emu_last_length = 0x0036; emu_last_crc = 0xC636; emu_call();
	/* Unresolved jump */ emu_ip = 0x380C; emu_last_cs = 0x1A34; emu_last_ip = 0x380C; emu_last_length = 0x0036; emu_last_crc = 0xC636; emu_call();
}

/**
 * Decompiled function f__1A34_380D_000A_AA19()
 *
 * @name f__1A34_380D_000A_AA19
 * @implements 1A34:380D:000A:AA19 ()
 *
 * Called From: 1A34:37EF:0036:C636
 */
void f__1A34_380D_000A_AA19()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x3817); f__1A34_0F48_0018_0DB8();
	f__1A34_3817_0007_B349();
}

/**
 * Decompiled function f__1A34_3817_0007_B349()
 *
 * @name f__1A34_3817_0007_B349
 * @implements 1A34:3817:0007:B349 ()
 *
 * Called From: 1A34:3817:000A:AA19
 */
void f__1A34_3817_0007_B349()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x1);
	f__1A34_3822_0002_2597(); return;
}

/**
 * Decompiled function f__1A34_3819_0005_D7FA()
 *
 * @name f__1A34_3819_0005_D7FA
 * @implements 1A34:3819:0005:D7FA ()
 *
 * Called From: 1A34:37E2:0036:C636
 * Called From: 1A34:37E8:0036:C636
 */
void f__1A34_3819_0005_D7FA()
{
	emu_movw(&emu_ax, 0x1);
	f__1A34_3822_0002_2597(); return;
}

/**
 * Decompiled function f__1A34_381C_0002_C23A()
 *
 * @name f__1A34_381C_0002_C23A
 * @implements 1A34:381C:0002:C23A ()
 *
 * Called From: 1A34:3820:0004:9539
 */
void f__1A34_381C_0002_C23A()
{
	f__1A34_3822_0002_2597(); return;
}

/**
 * Decompiled function f__1A34_381E_0004_9539()
 *
 * @name f__1A34_381E_0004_9539
 * @implements 1A34:381E:0004:9539 ()
 *
 * Called From: 1A34:37B6:0026:D835
 */
void f__1A34_381E_0004_9539()
{
	emu_xorw(&emu_ax, emu_ax);
	f__1A34_381C_0002_C23A(); return;
}

/**
 * Decompiled function f__1A34_3822_0002_2597()
 *
 * @name f__1A34_3822_0002_2597
 * @implements 1A34:3822:0002:2597 ()
 *
 * Called From: 1A34:381C:0002:C23A
 * Called From: 1A34:381C:0005:D7FA
 * Called From: 1A34:381C:0007:B349
 */
void f__1A34_3822_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
