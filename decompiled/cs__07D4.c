/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__07D4_0000_0027_B08E()
 *
 * @name f__07D4_0000_0027_B08E
 * @implements 07D4:0000:0027:B08E ()
 *
 * Called From: 0642:03D4:0008:571E
 * Called From: 10E4:213A:000A:EF9E
 */
void f__07D4_0000_0027_B08E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x1);
	if (emu_flags.zf) { f__07D4_0027_000D_D4F1(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x3);
	if (emu_flags.zf) { f__07D4_0027_000D_D4F1(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x2);
	if (emu_flags.zf) { f__07D4_0027_000D_D4F1(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x4);
	if (emu_flags.zf) { f__07D4_0027_000D_D4F1(); return; }
	emu_ip = 0x02F2; emu_last_cs = 0x07D4; emu_last_ip = 0x0024; emu_last_length = 0x0027; emu_last_crc = 0xB08E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_0027_000D_D4F1()
 *
 * @name f__07D4_0027_000D_D4F1
 * @implements 07D4:0027:000D:D4F1 ()
 *
 * Called From: 07D4:000D:0027:B08E
 * Called From: 07D4:0014:0027:B08E
 * Called From: 07D4:001B:0027:B08E
 * Called From: 07D4:0022:0027:B08E
 */
void f__07D4_0027_000D_D4F1()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0034); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__07D4_0034_0015_CD4B();
}

/**
 * Decompiled function f__07D4_0034_0015_CD4B()
 *
 * @name f__07D4_0034_0015_CD4B
 * @implements 07D4:0034:0015:CD4B ()
 *
 * Called From: 07D4:0034:000D:D4F1
 */
void f__07D4_0034_0015_CD4B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { f__07D4_0044_0005_1080(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_push(emu_cs); emu_push(0x0049); emu_cs = 0x06F7; f__06F7_0602_0018_3DB3();
	f__07D4_0049_0005_1A6A();
}

/**
 * Decompiled function f__07D4_0044_0005_1080()
 *
 * @name f__07D4_0044_0005_1080
 * @implements 07D4:0044:0005:1080 ()
 *
 * Called From: 07D4:003C:0015:CD4B
 */
void f__07D4_0044_0005_1080()
{
	emu_push(emu_cs); emu_push(0x0049); emu_cs = 0x06F7; f__06F7_0602_0018_3DB3();
	f__07D4_0049_0005_1A6A();
}

/**
 * Decompiled function f__07D4_0049_0005_1A6A()
 *
 * @name f__07D4_0049_0005_1A6A
 * @implements 07D4:0049:0005:1A6A ()
 *
 * Called From: 07D4:0049:0015:CD4B
 * Called From: 07D4:0049:0005:1080
 */
void f__07D4_0049_0005_1A6A()
{
	emu_push(emu_cs); emu_push(0x004E); emu_cs = 0x151A; f__151A_0196_0018_C5B8();
	f__07D4_004E_0005_10EE();
}

/**
 * Decompiled function f__07D4_004E_0005_10EE()
 *
 * @name f__07D4_004E_0005_10EE
 * @implements 07D4:004E:0005:10EE ()
 *
 * Called From: 07D4:004E:0005:1A6A
 */
void f__07D4_004E_0005_10EE()
{
	emu_push(emu_cs); emu_push(0x0053); emu_cs = 0x0FE4; f__0FE4_0002_0021_434D();
	f__07D4_0053_000A_749C();
}

/**
 * Decompiled function f__07D4_0053_000A_749C()
 *
 * @name f__07D4_0053_000A_749C
 * @implements 07D4:0053:000A:749C ()
 *
 * Called From: 07D4:0053:0005:10EE
 */
void f__07D4_0053_000A_749C()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x0);
	if (emu_flags.zf) { f__07D4_005D_000C_0FA3(); return; }
	f__07D4_01F6_000F_6135(); return;
}

/**
 * Decompiled function f__07D4_005D_000C_0FA3()
 *
 * @name f__07D4_005D_000C_0FA3
 * @implements 07D4:005D:000C:0FA3 ()
 *
 * Called From: 07D4:0058:000A:749C
 */
void f__07D4_005D_000C_0FA3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39FE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39FC));
	if (!emu_flags.zf) { f__07D4_0069_0009_A8DB(); return; }
	f__07D4_01F6_000F_6135(); return;
}

/**
 * Decompiled function f__07D4_0069_0009_A8DB()
 *
 * @name f__07D4_0069_0009_A8DB
 * @implements 07D4:0069:0009:A8DB ()
 *
 * Called From: 07D4:0064:000C:0FA3
 */
void f__07D4_0069_0009_A8DB()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FE));
	emu_push(emu_cs); emu_push(0x0072); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	f__07D4_0072_000D_F9A9();
}

/**
 * Decompiled function f__07D4_0072_000D_F9A9()
 *
 * @name f__07D4_0072_000D_F9A9
 * @implements 07D4:0072:000D:F9A9 ()
 *
 * Called From: 07D4:0072:0009:A8DB
 */
void f__07D4_0072_000D_F9A9()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FE));
	emu_push(emu_cs); emu_push(0x007F); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	f__07D4_007F_000D_E1D9();
}

/**
 * Decompiled function f__07D4_007F_000D_E1D9()
 *
 * @name f__07D4_007F_000D_E1D9
 * @implements 07D4:007F:000D:E1D9 ()
 *
 * Called From: 07D4:007F:000D:F9A9
 */
void f__07D4_007F_000D_E1D9()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x008C); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	f__07D4_008C_000F_F08D();
}

/**
 * Decompiled function f__07D4_008C_000F_F08D()
 *
 * @name f__07D4_008C_000F_F08D
 * @implements 07D4:008C:000F:F08D ()
 *
 * Called From: 07D4:008C:000D:E1D9
 */
void f__07D4_008C_000F_F08D()
{
	emu_pop(&emu_cx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x009B); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	f__07D4_009B_0010_BE55();
}

/**
 * Decompiled function f__07D4_009B_0010_BE55()
 *
 * @name f__07D4_009B_0010_BE55
 * @implements 07D4:009B:0010:BE55 ()
 *
 * Called From: 07D4:009B:000F:F08D
 */
void f__07D4_009B_0010_BE55()
{
	emu_pop(&emu_cx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_00AB_0014_A07D(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__07D4_00AD_0012_AEFD(); return;
}

/**
 * Decompiled function f__07D4_00AB_0014_A07D()
 *
 * @name f__07D4_00AB_0014_A07D
 * @implements 07D4:00AB:0014:A07D ()
 *
 * Called From: 07D4:00A3:0010:BE55
 */
void f__07D4_00AB_0014_A07D()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xF);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_00BF_002C_BC18(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__07D4_00C1_002A_3416(); return;
}

/**
 * Decompiled function f__07D4_00AD_0012_AEFD()
 *
 * @name f__07D4_00AD_0012_AEFD
 * @implements 07D4:00AD:0012:AEFD ()
 *
 * Called From: 07D4:00A9:0010:BE55
 */
void f__07D4_00AD_0012_AEFD()
{
	emu_movw(&emu_dx.x, 0xF);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_00BF_002C_BC18(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__07D4_00C1_002A_3416(); return;
}

/**
 * Decompiled function f__07D4_00BF_002C_BC18()
 *
 * @name f__07D4_00BF_002C_BC18
 * @implements 07D4:00BF:002C:BC18 ()
 *
 * Called From: 07D4:00B7:0012:AEFD
 * Called From: 07D4:00B7:0014:A07D
 */
void f__07D4_00BF_002C_BC18()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0xA);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_00D5_0016_8529(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_00E1_000A_74DE(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x0);
	if (emu_flags.zf) { emu_ip = 0x00EB; emu_last_cs = 0x07D4; emu_last_ip = 0x00E6; emu_last_length = 0x002C; emu_last_crc = 0xBC18; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0174; emu_last_cs = 0x07D4; emu_last_ip = 0x00E8; emu_last_length = 0x002C; emu_last_crc = 0xBC18; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_00C1_002A_3416()
 *
 * @name f__07D4_00C1_002A_3416
 * @implements 07D4:00C1:002A:3416 ()
 *
 * Called From: 07D4:00BD:0014:A07D
 * Called From: 07D4:00BD:0012:AEFD
 */
void f__07D4_00C1_002A_3416()
{
	emu_movw(&emu_dx.x, 0xA);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_00D5_0016_8529(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_00E1_000A_74DE(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x0);
	if (emu_flags.zf) { emu_ip = 0x00EB; emu_last_cs = 0x07D4; emu_last_ip = 0x00E6; emu_last_length = 0x002A; emu_last_crc = 0x3416; emu_call(); return; } // Jump does not resolve
	f__07D4_0174_0019_0B9A(); return;
}

/**
 * Decompiled function f__07D4_00D5_0016_8529()
 *
 * @name f__07D4_00D5_0016_8529
 * @implements 07D4:00D5:0016:8529 ()
 *
 * Called From: 07D4:00CD:002A:3416
 * Called From: 07D4:00CD:002C:BC18
 */
void f__07D4_00D5_0016_8529()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_00E1_000A_74DE(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x0);
	if (emu_flags.zf) { emu_ip = 0x00EB; emu_last_cs = 0x07D4; emu_last_ip = 0x00E6; emu_last_length = 0x0016; emu_last_crc = 0x8529; emu_call(); return; } // Jump does not resolve
	f__07D4_0174_0019_0B9A(); return;
}

/**
 * Decompiled function f__07D4_00E1_000A_74DE()
 *
 * @name f__07D4_00E1_000A_74DE
 * @implements 07D4:00E1:000A:74DE ()
 *
 * Called From: 07D4:00D9:0016:8529
 * Called From: 07D4:00D9:002A:3416
 * Called From: 07D4:00D9:002C:BC18
 */
void f__07D4_00E1_000A_74DE()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x0);
	if (emu_flags.zf) { f__07D4_00EB_000E_D873(); return; }
	f__07D4_0174_0019_0B9A(); return;
}

/**
 * Decompiled function f__07D4_00EB_000E_D873()
 *
 * @name f__07D4_00EB_000E_D873
 * @implements 07D4:00EB:000E:D873 ()
 *
 * Called From: 07D4:00E6:000A:74DE
 */
void f__07D4_00EB_000E_D873()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xF);
	if (!emu_flags.zf) { f__07D4_00FA_0009_FD77(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xA);
	if (!emu_flags.zf) { f__07D4_00FA_0009_FD77(); return; }
	emu_ip = 0x0174; emu_last_cs = 0x07D4; emu_last_ip = 0x00F7; emu_last_length = 0x000E; emu_last_crc = 0xD873; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_00FA_0009_FD77()
 *
 * @name f__07D4_00FA_0009_FD77
 * @implements 07D4:00FA:0009:FD77 ()
 *
 * Called From: 07D4:00EF:000E:D873
 * Called From: 07D4:00F5:000E:D873
 */
void f__07D4_00FA_0009_FD77()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0103); emu_cs = 0x0F78; f__0F78_01B4_0016_AE41();
	f__07D4_0103_000F_FC3F();
}

/**
 * Decompiled function f__07D4_0103_000F_FC3F()
 *
 * @name f__07D4_0103_000F_FC3F
 * @implements 07D4:0103:000F:FC3F ()
 *
 * Called From: 07D4:0103:0009:FD77
 */
void f__07D4_0103_000F_FC3F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0112); emu_cs = 0x2642; f__2642_0002_005E_D1F0();
	f__07D4_0112_001E_AAC6();
}

/**
 * Decompiled function f__07D4_0112_001E_AAC6()
 *
 * @name f__07D4_0112_001E_AAC6
 * @implements 07D4:0112:001E:AAC6 ()
 *
 * Called From: 07D4:0112:000F:FC3F
 */
void f__07D4_0112_001E_AAC6()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_shlw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0130_0012_1A6C(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__07D4_0136_000C_D955(); return;
}

/**
 * Decompiled function f__07D4_0130_0012_1A6C()
 *
 * @name f__07D4_0130_0012_1A6C
 * @implements 07D4:0130:0012:1A6C ()
 *
 * Called From: 07D4:012A:001E:AAC6
 */
void f__07D4_0130_0012_1A6C()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0142_0013_BA6B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__07D4_0146_000F_BC69(); return;
}

/**
 * Decompiled function f__07D4_0136_000C_D955()
 *
 * @name f__07D4_0136_000C_D955
 * @implements 07D4:0136:000C:D955 ()
 *
 * Called From: 07D4:012E:001E:AAC6
 */
void f__07D4_0136_000C_D955()
{
	emu_addw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0142_0013_BA6B(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__07D4_0146_000F_BC69(); return;
}

/**
 * Decompiled function f__07D4_0142_0013_BA6B()
 *
 * @name f__07D4_0142_0013_BA6B
 * @implements 07D4:0142:0013:BA6B ()
 *
 * Called From: 07D4:013C:000C:D955
 * Called From: 07D4:013C:0012:1A6C
 */
void f__07D4_0142_0013_BA6B()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0155_0012_2229(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	f__07D4_0157_0010_2365(); return;
}

/**
 * Decompiled function f__07D4_0146_000F_BC69()
 *
 * @name f__07D4_0146_000F_BC69
 * @implements 07D4:0146:000F:BC69 ()
 *
 * Called From: 07D4:0140:0012:1A6C
 * Called From: 07D4:0140:000C:D955
 */
void f__07D4_0146_000F_BC69()
{
	emu_push(emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0155_0012_2229(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	f__07D4_0157_0010_2365(); return;
}

/**
 * Decompiled function f__07D4_0155_0012_2229()
 *
 * @name f__07D4_0155_0012_2229
 * @implements 07D4:0155:0012:2229 ()
 *
 * Called From: 07D4:0149:000F:BC69
 * Called From: 07D4:0149:0013:BA6B
 */
void f__07D4_0155_0012_2229()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0167_0008_5798(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_shlw(&emu_ax.x, 0x1);
	f__07D4_0169_0006_0498(); return;
}

/**
 * Decompiled function f__07D4_0157_0010_2365()
 *
 * @name f__07D4_0157_0010_2365
 * @implements 07D4:0157:0010:2365 ()
 *
 * Called From: 07D4:0153:0013:BA6B
 * Called From: 07D4:0153:000F:BC69
 */
void f__07D4_0157_0010_2365()
{
	emu_addw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0167_0008_5798(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_shlw(&emu_ax.x, 0x1);
	f__07D4_0169_0006_0498(); return;
}

/**
 * Decompiled function f__07D4_0167_0008_5798()
 *
 * @name f__07D4_0167_0008_5798
 * @implements 07D4:0167:0008:5798 ()
 *
 * Called From: 07D4:015D:0010:2365
 * Called From: 07D4:015D:0012:2229
 */
void f__07D4_0167_0008_5798()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x016F); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	f__07D4_016F_0005_1F00();
}

/**
 * Decompiled function f__07D4_0169_0006_0498()
 *
 * @name f__07D4_0169_0006_0498
 * @implements 07D4:0169:0006:0498 ()
 *
 * Called From: 07D4:0165:0012:2229
 * Called From: 07D4:0165:0010:2365
 */
void f__07D4_0169_0006_0498()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x016F); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	f__07D4_016F_0005_1F00();
}

/**
 * Decompiled function f__07D4_016F_0005_1F00()
 *
 * @name f__07D4_016F_0005_1F00
 * @implements 07D4:016F:0005:1F00 ()
 *
 * Called From: 07D4:016F:0008:5798
 * Called From: 07D4:016F:0006:0498
 */
void f__07D4_016F_0005_1F00()
{
	emu_addws(&emu_sp, 0x10);
	f__07D4_017A_0013_843B(); return;
}

/**
 * Decompiled function f__07D4_0174_0019_0B9A()
 *
 * @name f__07D4_0174_0019_0B9A
 * @implements 07D4:0174:0019:0B9A ()
 *
 * Called From: 07D4:00E8:0016:8529
 * Called From: 07D4:00E8:000A:74DE
 * Called From: 07D4:00E8:002A:3416
 */
void f__07D4_0174_0019_0B9A()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0180_000D_8767(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0186_0007_6E6A(); return; }
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__07D4_01F0_0015_7132(); return;
}

/**
 * Decompiled function f__07D4_017A_0013_843B()
 *
 * @name f__07D4_017A_0013_843B
 * @implements 07D4:017A:0013:843B ()
 *
 * Called From: 07D4:0172:0005:1F00
 */
void f__07D4_017A_0013_843B()
{
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0180_000D_8767(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0186_0007_6E6A(); return; }
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__07D4_01F0_0015_7132(); return;
}

/**
 * Decompiled function f__07D4_0180_000D_8767()
 *
 * @name f__07D4_0180_000D_8767
 * @implements 07D4:0180:000D:8767 ()
 *
 * Called From: 07D4:017C:0013:843B
 * Called From: 07D4:017C:0019:0B9A
 */
void f__07D4_0180_000D_8767()
{
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0186_0007_6E6A(); return; }
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__07D4_01F0_0015_7132(); return;
}

/**
 * Decompiled function f__07D4_0186_0007_6E6A()
 *
 * @name f__07D4_0186_0007_6E6A
 * @implements 07D4:0186:0007:6E6A ()
 *
 * Called From: 07D4:0182:0013:843B
 * Called From: 07D4:0182:000D:8767
 * Called From: 07D4:0182:0019:0B9A
 */
void f__07D4_0186_0007_6E6A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__07D4_01F0_0015_7132(); return;
}

/**
 * Decompiled function f__07D4_018D_0014_891D()
 *
 * @name f__07D4_018D_0014_891D
 * @implements 07D4:018D:0014:891D ()
 *
 * Called From: 07D4:01F4:0015:7132
 * Called From: 07D4:01F4:0021:D2D7
 * Called From: 07D4:01F4:0024:DCDF
 */
void f__07D4_018D_0014_891D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movb(&emu_cx.l, 0x6);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	f__07D4_01E7_001E_D312(); return;
}

/**
 * Decompiled function f__07D4_01A1_0040_E2D4()
 *
 * @name f__07D4_01A1_0040_E2D4
 * @implements 07D4:01A1:0040:E2D4 ()
 *
 * Called From: 07D4:01EB:001E:D312
 * Called From: 07D4:01EB:0021:D2D7
 * Called From: 07D4:01EB:0024:DCDF
 */
void f__07D4_01A1_0040_E2D4()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_01C6_001B_3521(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_01C6_001B_3521(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_01C6_001B_3521(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_01C6_001B_3521(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x0);
	if (emu_flags.zf) { f__07D4_01E4_0021_D2D7(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x01E1); emu_cs = 0x34CD; emu_ip = 0x0292; emu_last_cs = 0x07D4; emu_last_ip = 0x01DC; emu_last_length = 0x0040; emu_last_crc = 0xE2D4; emu_call(); // Jump does not resolve
	f__07D4_01E1_0024_DCDF();
}

/**
 * Decompiled function f__07D4_01C6_001B_3521()
 *
 * @name f__07D4_01C6_001B_3521
 * @implements 07D4:01C6:001B:3521 ()
 *
 * Called From: 07D4:01A4:0040:E2D4
 * Called From: 07D4:01AE:0040:E2D4
 * Called From: 07D4:01B3:0040:E2D4
 * Called From: 07D4:01BD:0040:E2D4
 */
void f__07D4_01C6_001B_3521()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x01E1); emu_cs = 0x34CD; ovl__34CD(29);
	f__07D4_01E1_0024_DCDF();
}

/**
 * Decompiled function f__07D4_01E1_0024_DCDF()
 *
 * @name f__07D4_01E1_0024_DCDF
 * @implements 07D4:01E1:0024:DCDF ()
 *
 * Called From: 07D4:01E1:001B:3521
 */
void f__07D4_01E1_0024_DCDF()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xF);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_01A1_0040_E2D4(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xA);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_018D_0014_891D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { f__07D4_024B_0047_AFEF(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0205); emu_cs = 0x0F78; f__0F78_01B4_0016_AE41();
	f__07D4_0205_0008_355C();
}

/**
 * Decompiled function f__07D4_01E4_0021_D2D7()
 *
 * @name f__07D4_01E4_0021_D2D7
 * @implements 07D4:01E4:0021:D2D7 ()
 *
 * Called From: 07D4:01C4:0040:E2D4
 */
void f__07D4_01E4_0021_D2D7()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xF);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_01A1_0040_E2D4(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xA);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_018D_0014_891D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { emu_ip = 0x024B; emu_last_cs = 0x07D4; emu_last_ip = 0x01FA; emu_last_length = 0x0021; emu_last_crc = 0xD2D7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0205); emu_cs = 0x0F78; f__0F78_01B4_0016_AE41();
	f__07D4_0205_0008_355C();
}

/**
 * Decompiled function f__07D4_01E7_001E_D312()
 *
 * @name f__07D4_01E7_001E_D312
 * @implements 07D4:01E7:001E:D312 ()
 *
 * Called From: 07D4:019F:0014:891D
 */
void f__07D4_01E7_001E_D312()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xF);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_01A1_0040_E2D4(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xA);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x018D; emu_last_cs = 0x07D4; emu_last_ip = 0x01F4; emu_last_length = 0x001E; emu_last_crc = 0xD312; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { emu_ip = 0x024B; emu_last_cs = 0x07D4; emu_last_ip = 0x01FA; emu_last_length = 0x001E; emu_last_crc = 0xD312; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0205); emu_cs = 0x0F78; emu_ip = 0x03B9; emu_last_cs = 0x07D4; emu_last_ip = 0x0200; emu_last_length = 0x001E; emu_last_crc = 0xD312; emu_call(); // Jump does not resolve
	f__07D4_0205_0008_355C();
}

/**
 * Decompiled function f__07D4_01F0_0015_7132()
 *
 * @name f__07D4_01F0_0015_7132
 * @implements 07D4:01F0:0015:7132 ()
 *
 * Called From: 07D4:018B:000D:8767
 * Called From: 07D4:018B:0007:6E6A
 * Called From: 07D4:018B:0013:843B
 * Called From: 07D4:018B:0019:0B9A
 */
void f__07D4_01F0_0015_7132()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xA);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_018D_0014_891D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { emu_ip = 0x024B; emu_last_cs = 0x07D4; emu_last_ip = 0x01FA; emu_last_length = 0x0015; emu_last_crc = 0x7132; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0205); emu_cs = 0x0F78; emu_ip = 0x03B9; emu_last_cs = 0x07D4; emu_last_ip = 0x0200; emu_last_length = 0x0015; emu_last_crc = 0x7132; emu_call(); // Jump does not resolve
	f__07D4_0205_0008_355C();
}

/**
 * Decompiled function f__07D4_01F6_000F_6135()
 *
 * @name f__07D4_01F6_000F_6135
 * @implements 07D4:01F6:000F:6135 ()
 *
 * Called From: 07D4:005A:000A:749C
 * Called From: 07D4:0066:000C:0FA3
 */
void f__07D4_01F6_000F_6135()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { f__07D4_024B_0047_AFEF(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0205); emu_cs = 0x0F78; emu_ip = 0x03B9; emu_last_cs = 0x07D4; emu_last_ip = 0x0200; emu_last_length = 0x000F; emu_last_crc = 0x6135; emu_call(); // Jump does not resolve
	f__07D4_0205_0008_355C();
}

/**
 * Decompiled function f__07D4_0205_0008_355C()
 *
 * @name f__07D4_0205_0008_355C
 * @implements 07D4:0205:0008:355C ()
 *
 * Called From: 07D4:0205:0024:DCDF
 * Called From: 07D4:0205:0021:D2D7
 */
void f__07D4_0205_0008_355C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	f__07D4_0245_004D_4DFF(); return;
}

/**
 * Decompiled function f__07D4_020D_0085_FEB8()
 *
 * @name f__07D4_020D_0085_FEB8
 * @implements 07D4:020D:0085:FEB8 ()
 *
 * Called From: 07D4:0249:004D:4DFF
 * Called From: 07D4:0249:0085:FEB8
 */
void f__07D4_020D_0085_FEB8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_addw(&emu_ax.x, 0x180);
	emu_movw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_cx.l, emu_dx.l);
	emu_andb(&emu_cx.l, 0x7);
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx.x, -0x701B), emu_ax.l);
	emu_movw(&emu_bx.x, emu_dx.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_cx.l, emu_dx.l);
	emu_andb(&emu_cx.l, 0x7);
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx.x, -0x721B), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x39E2));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xE);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_020D_0085_FEB8(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39FE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39FC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A00), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x0);
	if (emu_flags.zf) { f__07D4_02B4_000E_427A(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3348));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3346));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x02B4; emu_last_cs = 0x07D4; emu_last_ip = 0x0269; emu_last_length = 0x0085; emu_last_crc = 0xFEB8; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0273; emu_last_cs = 0x07D4; emu_last_ip = 0x026B; emu_last_length = 0x0085; emu_last_crc = 0xFEB8; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { f__07D4_02B4_000E_427A(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x37BA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3348), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3346), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	f__07D4_02AE_0014_4A05(); return;
}

/**
 * Decompiled function f__07D4_0245_004D_4DFF()
 *
 * @name f__07D4_0245_004D_4DFF
 * @implements 07D4:0245:004D:4DFF ()
 *
 * Called From: 07D4:020B:0008:355C
 */
void f__07D4_0245_004D_4DFF()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xE);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_020D_0085_FEB8(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39FE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39FC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A00), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x0);
	if (emu_flags.zf) { emu_ip = 0x02B4; emu_last_cs = 0x07D4; emu_last_ip = 0x025C; emu_last_length = 0x004D; emu_last_crc = 0x4DFF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3348));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3346));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x02B4; emu_last_cs = 0x07D4; emu_last_ip = 0x0269; emu_last_length = 0x004D; emu_last_crc = 0x4DFF; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0273; emu_last_cs = 0x07D4; emu_last_ip = 0x026B; emu_last_length = 0x004D; emu_last_crc = 0x4DFF; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { emu_ip = 0x02B4; emu_last_cs = 0x07D4; emu_last_ip = 0x0271; emu_last_length = 0x004D; emu_last_crc = 0x4DFF; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x37BA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3348), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3346), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_ip = 0x02AE; emu_last_cs = 0x07D4; emu_last_ip = 0x0290; emu_last_length = 0x004D; emu_last_crc = 0x4DFF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_024B_0047_AFEF()
 *
 * @name f__07D4_024B_0047_AFEF
 * @implements 07D4:024B:0047:AFEF ()
 *
 * Called From: 07D4:01FA:000F:6135
 * Called From: 07D4:01FA:0024:DCDF
 */
void f__07D4_024B_0047_AFEF()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39FE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39FC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A00), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x0);
	if (emu_flags.zf) { f__07D4_02B4_000E_427A(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3348));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3346));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x02B4; emu_last_cs = 0x07D4; emu_last_ip = 0x0269; emu_last_length = 0x0047; emu_last_crc = 0xAFEF; emu_call(); return; } // Jump does not resolve
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_0273_001F_F467(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { f__07D4_02B4_000E_427A(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x37BA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3348), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3346), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	f__07D4_02AE_0014_4A05(); return;
}

/**
 * Decompiled function f__07D4_0273_001F_F467()
 *
 * @name f__07D4_0273_001F_F467
 * @implements 07D4:0273:001F:F467 ()
 *
 * Called From: 07D4:026B:0047:AFEF
 */
void f__07D4_0273_001F_F467()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x37BA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3348), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3346), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	f__07D4_02AE_0014_4A05(); return;
}

/**
 * Decompiled function f__07D4_0292_0016_3859()
 *
 * @name f__07D4_0292_0016_3859
 * @implements 07D4:0292:0016:3859 ()
 *
 * Called From: 07D4:02B2:0014:4A05
 * Called From: 07D4:02B2:001A:BB86
 */
void f__07D4_0292_0016_3859()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39FE));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_addw(&emu_ax.x, 0x180);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02A8); emu_cs = 0x34CD; ovl__34CD(29);
	f__07D4_02A8_001A_BB86();
}

/**
 * Decompiled function f__07D4_02A8_001A_BB86()
 *
 * @name f__07D4_02A8_001A_BB86
 * @implements 07D4:02A8:001A:BB86 ()
 *
 * Called From: 07D4:02A8:0016:3859
 */
void f__07D4_02A8_001A_BB86()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xE);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_0292_0016_3859(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A12));
	emu_push(emu_cs);
	emu_push(0x02C2); f__07D4_034D_001F_64B1();
	f__07D4_02C2_0012_1D5A();
}

/**
 * Decompiled function f__07D4_02AE_0014_4A05()
 *
 * @name f__07D4_02AE_0014_4A05
 * @implements 07D4:02AE:0014:4A05 ()
 *
 * Called From: 07D4:0290:0047:AFEF
 * Called From: 07D4:0290:001F:F467
 * Called From: 07D4:0290:0085:FEB8
 */
void f__07D4_02AE_0014_4A05()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xE);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_0292_0016_3859(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A12));
	emu_push(emu_cs);
	emu_push(0x02C2); emu_ip = 0x034D; emu_last_cs = 0x07D4; emu_last_ip = 0x02BF; emu_last_length = 0x0014; emu_last_crc = 0x4A05; emu_call(); // Jump does not resolve
	f__07D4_02C2_0012_1D5A();
}

/**
 * Decompiled function f__07D4_02B4_000E_427A()
 *
 * @name f__07D4_02B4_000E_427A
 * @implements 07D4:02B4:000E:427A ()
 *
 * Called From: 07D4:025C:0047:AFEF
 * Called From: 07D4:025C:0085:FEB8
 * Called From: 07D4:0271:0047:AFEF
 * Called From: 07D4:0271:0085:FEB8
 */
void f__07D4_02B4_000E_427A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A12));
	emu_push(emu_cs);
	emu_push(0x02C2); f__07D4_034D_001F_64B1();
	f__07D4_02C2_0012_1D5A();
}

/**
 * Decompiled function f__07D4_02C2_0012_1D5A()
 *
 * @name f__07D4_02C2_0012_1D5A
 * @implements 07D4:02C2:0012:1D5A ()
 *
 * Called From: 07D4:02C2:000E:427A
 * Called From: 07D4:02C2:001A:BB86
 */
void f__07D4_02C2_0012_1D5A()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x02D4); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__07D4_02D4_000A_BB76();
}

/**
 * Decompiled function f__07D4_02D4_000A_BB76()
 *
 * @name f__07D4_02D4_000A_BB76
 * @implements 07D4:02D4:000A:BB76 ()
 *
 * Called From: 07D4:02D4:0012:1D5A
 */
void f__07D4_02D4_000A_BB76()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A00));
	emu_push(emu_cs); emu_push(0x02DE); emu_cs = 0x0F78; f__0F78_01B4_0016_AE41();
	f__07D4_02DE_000D_FA70();
}

/**
 * Decompiled function f__07D4_02DE_000D_FA70()
 *
 * @name f__07D4_02DE_000D_FA70
 * @implements 07D4:02DE:000D:FA70 ()
 *
 * Called From: 07D4:02DE:000A:BB76
 */
void f__07D4_02DE_000D_FA70()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x02EB); emu_cs = 0x0F78; f__0F78_0008_002C_2547();
	f__07D4_02EB_0007_2E54();
}

/**
 * Decompiled function f__07D4_02EB_0007_2E54()
 *
 * @name f__07D4_02EB_0007_2E54
 * @implements 07D4:02EB:0007:2E54 ()
 *
 * Called From: 07D4:02EB:000D:FA70
 */
void f__07D4_02EB_0007_2E54()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x02F2); emu_cs = 0x2642; f__2642_0069_0008_3016();
	f__07D4_02F2_0006_137A();
}

/**
 * Decompiled function f__07D4_02F2_0006_137A()
 *
 * @name f__07D4_02F2_0006_137A
 * @implements 07D4:02F2:0006:137A ()
 *
 * Called From: 07D4:02F2:0007:2E54
 */
void f__07D4_02F2_0006_137A()
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
 * Decompiled function f__07D4_02F8_0055_0AD5()
 *
 * @name f__07D4_02F8_0055_0AD5
 * @implements 07D4:02F8:0055:0AD5 ()
 *
 * Called From: 151A:06AA:0009:CB0F
 * Called From: B4CD:0477:0006:0A0E
 * Called From: B4CD:0477:0028:8081
 * Called From: B4CD:04AC:0009:5F8F
 * Called From: B4CD:12FF:0017:64F5
 */
void f__07D4_02F8_0055_0AD5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x, -0x6C1B));
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_andb(&emu_cx.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__07D4_031D_0030_6144(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_incw(&emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x034B; emu_last_cs = 0x07D4; emu_last_ip = 0x031B; emu_last_length = 0x0055; emu_last_crc = 0x0AD5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_andb(&emu_cx.l, 0x7);
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx.x, -0x6E1B), emu_ax.l);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x3344), 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_034B_0002_00E2(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3344));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7D70), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x3344));
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__07D4_031D_0030_6144()
 *
 * @name f__07D4_031D_0030_6144
 * @implements 07D4:031D:0030:6144 ()
 *
 * Called From: 07D4:0315:0055:0AD5
 */
void f__07D4_031D_0030_6144()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_andb(&emu_cx.l, 0x7);
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx.x, -0x6E1B), emu_ax.l);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x3344), 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_034B_0002_00E2(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3344));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7D70), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x3344));
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__07D4_034B_0002_00E2()
 *
 * @name f__07D4_034B_0002_00E2
 * @implements 07D4:034B:0002:00E2 ()
 *
 * Called From: 07D4:0338:0030:6144
 * Called From: 07D4:0338:0055:0AD5
 */
void f__07D4_034B_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__07D4_034D_001F_64B1()
 *
 * @name f__07D4_034D_001F_64B1
 * @implements 07D4:034D:001F:64B1 ()
 *
 * Called From: 07D4:02BF:000E:427A
 * Called From: 07D4:02BF:001A:BB86
 */
void f__07D4_034D_001F_64B1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x56);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_ax.x, 0x14);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x42);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x036C); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__07D4_036C_0014_BFEF();
}

/**
 * Decompiled function f__07D4_036C_0014_BFEF()
 *
 * @name f__07D4_036C_0014_BFEF
 * @implements 07D4:036C:0014:BFEF ()
 *
 * Called From: 07D4:036C:001F:64B1
 */
void f__07D4_036C_0014_BFEF()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x14);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x56);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0380); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__07D4_0380_000C_4765();
}

/**
 * Decompiled function f__07D4_0380_000C_4765()
 *
 * @name f__07D4_0380_000C_4765
 * @implements 07D4:0380:000C:4765 ()
 *
 * Called From: 07D4:0380:0014:BFEF
 */
void f__07D4_0380_000C_4765()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x038C); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__07D4_038C_000D_47F5();
}

/**
 * Decompiled function f__07D4_038C_000D_47F5()
 *
 * @name f__07D4_038C_000D_47F5
 * @implements 07D4:038C:000D:47F5 ()
 *
 * Called From: 07D4:038C:000C:4765
 */
void f__07D4_038C_000D_47F5()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0399); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	f__07D4_0399_001A_35E1();
}

/**
 * Decompiled function f__07D4_0399_001A_35E1()
 *
 * @name f__07D4_0399_001A_35E1
 * @implements 07D4:0399:001A:35E1 ()
 *
 * Called From: 07D4:0399:000D:47F5
 */
void f__07D4_0399_001A_35E1()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x39E2), 0x0);
	if (!emu_flags.zf) { f__07D4_03B3_0008_DC58(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__07D4_03B3_0008_DC58(); return; }
	f__07D4_05CF_0002_038C(); return;
}

/**
 * Decompiled function f__07D4_03B3_0008_DC58()
 *
 * @name f__07D4_03B3_0008_DC58
 * @implements 07D4:03B3:0008:DC58 ()
 *
 * Called From: 07D4:03A8:001A:35E1
 * Called From: 07D4:03AE:001A:35E1
 */
void f__07D4_03B3_0008_DC58()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	f__07D4_05C0_0009_0E6B(); return;
}

/**
 * Decompiled function f__07D4_03BB_0015_3711()
 *
 * @name f__07D4_03BB_0015_3711
 * @implements 07D4:03BB:0015:3711 ()
 *
 * Called From: 07D4:05C6:0009:0E6B
 * Called From: 07D4:05C6:000C:3E65
 */
void f__07D4_03BB_0015_3711()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x28);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__07D4_05A5_000B_DB7D(); return;
}

/**
 * Decompiled function f__07D4_03D0_00A9_0DE5()
 *
 * @name f__07D4_03D0_00A9_0DE5
 * @implements 07D4:03D0:00A9:0DE5 ()
 *
 * Called From: 07D4:05BA:000D:5A82
 * Called From: 07D4:05BA:000B:3A88
 */
void f__07D4_03D0_00A9_0DE5()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x6);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x39FE));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xF);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0454_0025_EAA5(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__07D4_0454_0025_EAA5(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x, -0x701B));
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x10));
	emu_andb(&emu_cx.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__07D4_0454_0025_EAA5(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x56);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_042D_004C_4794(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x56);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x42);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_044F_002A_9426(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x42);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x, -0x721B));
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x10));
	emu_andb(&emu_cx.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x0479; emu_last_cs = 0x07D4; emu_last_ip = 0x046E; emu_last_length = 0x00A9; emu_last_crc = 0x0DE5; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0479; emu_last_cs = 0x07D4; emu_last_ip = 0x0474; emu_last_length = 0x00A9; emu_last_crc = 0x0DE5; emu_call(); return; } // Jump does not resolve
	f__07D4_05A2_000E_3B45(); return;
}

/**
 * Decompiled function f__07D4_042D_004C_4794()
 *
 * @name f__07D4_042D_004C_4794
 * @implements 07D4:042D:004C:4794 ()
 *
 * Called From: 07D4:041B:00A9:0DE5
 */
void f__07D4_042D_004C_4794()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x42);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_044F_002A_9426(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x42);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x, -0x721B));
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x10));
	emu_andb(&emu_cx.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__07D4_0479_00CB_6E14(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0479; emu_last_cs = 0x07D4; emu_last_ip = 0x0474; emu_last_length = 0x004C; emu_last_crc = 0x4794; emu_call(); return; } // Jump does not resolve
	f__07D4_05A2_000E_3B45(); return;
}

/**
 * Decompiled function f__07D4_044F_002A_9426()
 *
 * @name f__07D4_044F_002A_9426
 * @implements 07D4:044F:002A:9426 ()
 *
 * Called From: 07D4:043D:00A9:0DE5
 * Called From: 07D4:043D:004C:4794
 */
void f__07D4_044F_002A_9426()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x, -0x721B));
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x10));
	emu_andb(&emu_cx.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__07D4_0479_00CB_6E14(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0479; emu_last_cs = 0x07D4; emu_last_ip = 0x0474; emu_last_length = 0x002A; emu_last_crc = 0x9426; emu_call(); return; } // Jump does not resolve
	f__07D4_05A2_000E_3B45(); return;
}

/**
 * Decompiled function f__07D4_0454_0025_EAA5()
 *
 * @name f__07D4_0454_0025_EAA5
 * @implements 07D4:0454:0025:EAA5 ()
 *
 * Called From: 07D4:03E7:00A9:0DE5
 * Called From: 07D4:03ED:00A9:0DE5
 * Called From: 07D4:0409:00A9:0DE5
 */
void f__07D4_0454_0025_EAA5()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x, -0x721B));
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x10));
	emu_andb(&emu_cx.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__07D4_0479_00CB_6E14(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__07D4_0479_00CB_6E14(); return; }
	f__07D4_05A2_000E_3B45(); return;
}

/**
 * Decompiled function f__07D4_0479_00CB_6E14()
 *
 * @name f__07D4_0479_00CB_6E14
 * @implements 07D4:0479:00CB:6E14 ()
 *
 * Called From: 07D4:046E:0025:EAA5
 * Called From: 07D4:046E:002A:9426
 * Called From: 07D4:046E:004C:4794
 * Called From: 07D4:0474:0025:EAA5
 */
void f__07D4_0479_00CB_6E14()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x10));
	emu_andb(&emu_cx.l, 0x7);
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx.x, -0x701B), emu_ax.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xF);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_04DD_0067_9AFB(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x56);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_04BB_0089_C08D(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x56);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x42);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_04DD_0067_9AFB(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x42);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_shrw(&emu_ax.x, 0x1);
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0549; emu_last_cs = 0x07D4; emu_last_ip = 0x051A; emu_last_length = 0x00CB; emu_last_crc = 0x6E14; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x39F2), emu_si);
	if (!emu_flags.zf) { emu_ip = 0x0549; emu_last_cs = 0x07D4; emu_last_ip = 0x0520; emu_last_length = 0x00CB; emu_last_crc = 0x6E14; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0544);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x053F; emu_last_length = 0x00CB; emu_last_crc = 0x6E14;
			emu_call();
			return;
	}
	f__07D4_0544_0005_1F6E();
}

/**
 * Decompiled function f__07D4_04BB_0089_C08D()
 *
 * @name f__07D4_04BB_0089_C08D
 * @implements 07D4:04BB:0089:C08D ()
 *
 * Called From: 07D4:04A9:00CB:6E14
 */
void f__07D4_04BB_0089_C08D()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x42);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_04DD_0067_9AFB(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x42);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_shrw(&emu_ax.x, 0x1);
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0549; emu_last_cs = 0x07D4; emu_last_ip = 0x051A; emu_last_length = 0x0089; emu_last_crc = 0xC08D; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x39F2), emu_si);
	if (!emu_flags.zf) { f__07D4_0549_0031_CE7F(); return; }
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0544);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x053F; emu_last_length = 0x0089; emu_last_crc = 0xC08D;
			emu_call();
			return;
	}
	f__07D4_0544_0005_1F6E();
}

/**
 * Decompiled function f__07D4_04DD_0067_9AFB()
 *
 * @name f__07D4_04DD_0067_9AFB
 * @implements 07D4:04DD:0067:9AFB ()
 *
 * Called From: 07D4:0492:00CB:6E14
 * Called From: 07D4:04CB:00CB:6E14
 * Called From: 07D4:04CB:0089:C08D
 */
void f__07D4_04DD_0067_9AFB()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_shrw(&emu_ax.x, 0x1);
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0549; emu_last_cs = 0x07D4; emu_last_ip = 0x051A; emu_last_length = 0x0067; emu_last_crc = 0x9AFB; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x39F2), emu_si);
	if (!emu_flags.zf) { f__07D4_0549_0031_CE7F(); return; }
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0544);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x053F; emu_last_length = 0x0067; emu_last_crc = 0x9AFB;
			emu_call();
			return;
	}
	f__07D4_0544_0005_1F6E();
}

/**
 * Decompiled function f__07D4_0544_0005_1F6E()
 *
 * @name f__07D4_0544_0005_1F6E
 * @implements 07D4:0544:0005:1F6E ()
 *
 * Called From: 07D4:0544:0089:C08D
 * Called From: 07D4:0544:0067:9AFB
 */
void f__07D4_0544_0005_1F6E()
{
	emu_addws(&emu_sp, 0xA);
	f__07D4_05A2_000E_3B45(); return;
}

/**
 * Decompiled function f__07D4_0549_0031_CE7F()
 *
 * @name f__07D4_0549_0031_CE7F
 * @implements 07D4:0549:0031:CE7F ()
 *
 * Called From: 07D4:0520:0067:9AFB
 * Called From: 07D4:0520:0089:C08D
 */
void f__07D4_0549_0031_CE7F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movb(&emu_ax.h, 0x0);
	emu_andw(&emu_ax.x, 0x7);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x3);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x665C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x665E);
	emu_push(0x057A);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60B60: f__22A6_0B60_006A_F46D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x0575; emu_last_length = 0x0031; emu_last_crc = 0xCE7F;
			emu_call();
			return;
	}
	f__07D4_057A_0025_E264();
}

/**
 * Decompiled function f__07D4_057A_0025_E264()
 *
 * @name f__07D4_057A_0025_E264
 * @implements 07D4:057A:0025:E264 ()
 *
 * Called From: 07D4:057A:0031:CE7F
 */
void f__07D4_057A_0025_E264()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__07D4_05A2_000E_3B45(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x05A2; emu_last_cs = 0x07D4; emu_last_ip = 0x0586; emu_last_length = 0x0025; emu_last_crc = 0xE264; emu_call(); return; } // Jump does not resolve
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x3);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x665C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x665E);
	emu_push(0x059F);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60B60: f__22A6_0B60_006A_F46D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x059A; emu_last_length = 0x0025; emu_last_crc = 0xE264;
			emu_call();
			return;
	}
	f__07D4_059F_0011_3A83();
}

/**
 * Decompiled function f__07D4_059F_0011_3A83()
 *
 * @name f__07D4_059F_0011_3A83
 * @implements 07D4:059F:0011:3A83 ()
 *
 * Called From: 07D4:059F:0025:E264
 */
void f__07D4_059F_0011_3A83()
{
	emu_addws(&emu_sp, 0x8);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__07D4_05B0_000D_5A82(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__07D4_05B2_000B_3A88(); return;
}

/**
 * Decompiled function f__07D4_05A2_000E_3B45()
 *
 * @name f__07D4_05A2_000E_3B45
 * @implements 07D4:05A2:000E:3B45 ()
 *
 * Called From: 07D4:0476:0025:EAA5
 * Called From: 07D4:0476:00A9:0DE5
 * Called From: 07D4:0476:002A:9426
 * Called From: 07D4:0476:004C:4794
 * Called From: 07D4:0547:0005:1F6E
 * Called From: 07D4:057F:0025:E264
 */
void f__07D4_05A2_000E_3B45()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__07D4_05B0_000D_5A82(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__07D4_05B2_000B_3A88(); return;
}

/**
 * Decompiled function f__07D4_05A5_000B_DB7D()
 *
 * @name f__07D4_05A5_000B_DB7D
 * @implements 07D4:05A5:000B:DB7D ()
 *
 * Called From: 07D4:03CD:0015:3711
 */
void f__07D4_05A5_000B_DB7D()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__07D4_05B0_000D_5A82(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__07D4_05B2_000B_3A88(); return;
}

/**
 * Decompiled function f__07D4_05B0_000D_5A82()
 *
 * @name f__07D4_05B0_000D_5A82
 * @implements 07D4:05B0:000D:5A82 ()
 *
 * Called From: 07D4:05A9:000B:DB7D
 * Called From: 07D4:05A9:000E:3B45
 * Called From: 07D4:05A9:0011:3A83
 */
void f__07D4_05B0_000D_5A82()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_ax.x, 0xF);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_05BD_000C_3E65(); return; }
	f__07D4_03D0_00A9_0DE5(); return;
}

/**
 * Decompiled function f__07D4_05B2_000B_3A88()
 *
 * @name f__07D4_05B2_000B_3A88
 * @implements 07D4:05B2:000B:3A88 ()
 *
 * Called From: 07D4:05AE:000B:DB7D
 * Called From: 07D4:05AE:000E:3B45
 * Called From: 07D4:05AE:0011:3A83
 */
void f__07D4_05B2_000B_3A88()
{
	emu_addw(&emu_ax.x, 0xF);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_05BD_000C_3E65(); return; }
	f__07D4_03D0_00A9_0DE5(); return;
}

/**
 * Decompiled function f__07D4_05BD_000C_3E65()
 *
 * @name f__07D4_05BD_000C_3E65
 * @implements 07D4:05BD:000C:3E65 ()
 *
 * Called From: 07D4:05B8:000D:5A82
 * Called From: 07D4:05B8:000B:3A88
 */
void f__07D4_05BD_000C_3E65()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xA);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_05C9_0008_F82C(); return; }
	f__07D4_03BB_0015_3711(); return;
}

/**
 * Decompiled function f__07D4_05C0_0009_0E6B()
 *
 * @name f__07D4_05C0_0009_0E6B
 * @implements 07D4:05C0:0009:0E6B ()
 *
 * Called From: 07D4:03B8:0008:DC58
 */
void f__07D4_05C0_0009_0E6B()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xA);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x05C9; emu_last_cs = 0x07D4; emu_last_ip = 0x05C4; emu_last_length = 0x0009; emu_last_crc = 0x0E6B; emu_call(); return; } // Jump does not resolve
	f__07D4_03BB_0015_3711(); return;
}

/**
 * Decompiled function f__07D4_05C9_0008_F82C()
 *
 * @name f__07D4_05C9_0008_F82C
 * @implements 07D4:05C9:0008:F82C ()
 *
 * Called From: 07D4:05C4:000C:3E65
 */
void f__07D4_05C9_0008_F82C()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39E2), 0x0);
	f__07D4_05E1_0012_E729(); return;
}

/**
 * Decompiled function f__07D4_05CF_0002_038C()
 *
 * @name f__07D4_05CF_0002_038C
 * @implements 07D4:05CF:0002:038C ()
 *
 * Called From: 07D4:03B0:001A:35E1
 */
void f__07D4_05CF_0002_038C()
{
	f__07D4_05E1_0012_E729(); return;
}

/**
 * Decompiled function f__07D4_05E1_0012_E729()
 *
 * @name f__07D4_05E1_0012_E729
 * @implements 07D4:05E1:0012:E729 ()
 *
 * Called From: 07D4:05CF:0008:F82C
 * Called From: 07D4:05CF:0002:038C
 */
void f__07D4_05E1_0012_E729()
{
	emu_movw(&emu_ax.x, 0x19);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05F3); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	f__07D4_05F3_0006_3C9A();
}

/**
 * Decompiled function f__07D4_05F3_0006_3C9A()
 *
 * @name f__07D4_05F3_0006_3C9A
 * @implements 07D4:05F3:0006:3C9A ()
 *
 * Called From: 07D4:05F3:0012:E729
 */
void f__07D4_05F3_0006_3C9A()
{
	emu_addws(&emu_sp, 0x8);
	f__07D4_07BD_0011_85BF(); return;
}

/**
 * Decompiled function f__07D4_05F9_0014_7118()
 *
 * @name f__07D4_05F9_0014_7118
 * @implements 07D4:05F9:0014:7118 ()
 *
 * Called From: 07D4:07CB:0011:85BF
 */
void f__07D4_05F9_0014_7118()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1000);
	if (!emu_flags.zf) { emu_ip = 0x060D; emu_last_cs = 0x07D4; emu_last_ip = 0x0602; emu_last_length = 0x0014; emu_last_crc = 0x7118; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x060D; emu_last_cs = 0x07D4; emu_last_ip = 0x0608; emu_last_length = 0x0014; emu_last_crc = 0x7118; emu_call(); return; } // Jump does not resolve
	f__07D4_07B1_000A_79EF(); return;
}

/**
 * Decompiled function f__07D4_07B1_000A_79EF()
 *
 * @name f__07D4_07B1_000A_79EF
 * @implements 07D4:07B1:000A:79EF ()
 *
 * Called From: 07D4:060A:0014:7118
 */
void f__07D4_07B1_000A_79EF()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07BB); emu_cs = 0x0FE4; f__0FE4_0283_0038_0940();
	f__07D4_07BB_0013_8613();
}

/**
 * Decompiled function f__07D4_07BB_0013_8613()
 *
 * @name f__07D4_07BB_0013_8613
 * @implements 07D4:07BB:0013:8613 ()
 *
 * Called From: 07D4:07BB:000A:79EF
 */
void f__07D4_07BB_0013_8613()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_flags.zf) { f__07D4_07CE_0012_3AEC(); return; }
	emu_ip = 0x05F9; emu_last_cs = 0x07D4; emu_last_ip = 0x07CB; emu_last_length = 0x0013; emu_last_crc = 0x8613; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_07BD_0011_85BF()
 *
 * @name f__07D4_07BD_0011_85BF
 * @implements 07D4:07BD:0011:85BF ()
 *
 * Called From: 07D4:05F6:0006:3C9A
 */
void f__07D4_07BD_0011_85BF()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_flags.zf) { f__07D4_07CE_0012_3AEC(); return; }
	f__07D4_05F9_0014_7118(); return;
}

/**
 * Decompiled function f__07D4_07CE_0012_3AEC()
 *
 * @name f__07D4_07CE_0012_3AEC
 * @implements 07D4:07CE:0012:3AEC ()
 *
 * Called From: 07D4:07C9:0011:85BF
 * Called From: 07D4:07C9:0013:8613
 */
void f__07D4_07CE_0012_3AEC()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39E4), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__07D4_07E0_0010_B975(); return; }
	f__07D4_08FD_0016_6387(); return;
}

/**
 * Decompiled function f__07D4_07E0_0010_B975()
 *
 * @name f__07D4_07E0_0010_B975
 * @implements 07D4:07E0:0010:B975 ()
 *
 * Called From: 07D4:07DB:0012:3AEC
 */
void f__07D4_07E0_0010_B975()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A08), 0x0);
	if (!emu_flags.zf) { f__07D4_07F0_0009_DDFD(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { f__07D4_07F0_0009_DDFD(); return; }
	f__07D4_08FD_0016_6387(); return;
}

/**
 * Decompiled function f__07D4_07F0_0009_DDFD()
 *
 * @name f__07D4_07F0_0009_DDFD
 * @implements 07D4:07F0:0009:DDFD ()
 *
 * Called From: 07D4:07E5:0010:B975
 * Called From: 07D4:07EB:0010:B975
 */
void f__07D4_07F0_0009_DDFD()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A00));
	emu_push(emu_cs); emu_push(0x07F9); emu_cs = 0x34CD; ovl__34CD(30);
	f__07D4_07F9_0016_0838();
}

/**
 * Decompiled function f__07D4_07F9_0016_0838()
 *
 * @name f__07D4_07F9_0016_0838
 * @implements 07D4:07F9:0016:0838 ()
 *
 * Called From: 07D4:07F9:0009:DDFD
 */
void f__07D4_07F9_0016_0838()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__07D4_080F_0009_D71B(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x2);
	if (emu_flags.zf) { f__07D4_080F_0009_D71B(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x080F; emu_last_cs = 0x07D4; emu_last_ip = 0x080A; emu_last_length = 0x0016; emu_last_crc = 0x0838; emu_call(); return; } // Jump does not resolve
	f__07D4_08FD_0016_6387(); return;
}

/**
 * Decompiled function f__07D4_080F_0009_D71B()
 *
 * @name f__07D4_080F_0009_D71B
 * @implements 07D4:080F:0009:D71B ()
 *
 * Called From: 07D4:07FC:0016:0838
 * Called From: 07D4:0803:0016:0838
 */
void f__07D4_080F_0009_D71B()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A00));
	emu_push(emu_cs); emu_push(0x0818); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	f__07D4_0818_000B_21D8();
}

/**
 * Decompiled function f__07D4_0818_000B_21D8()
 *
 * @name f__07D4_0818_000B_21D8
 * @implements 07D4:0818:000B:21D8 ()
 *
 * Called From: 07D4:0818:0009:D71B
 */
void f__07D4_0818_000B_21D8()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x0823); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	f__07D4_0823_0013_8507();
}

/**
 * Decompiled function f__07D4_0823_0013_8507()
 *
 * @name f__07D4_0823_0013_8507
 * @implements 07D4:0823:0013:8507 ()
 *
 * Called From: 07D4:0823:000B:21D8
 */
void f__07D4_0823_0013_8507()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_movw(&emu_si, emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A00));
	emu_push(emu_cs); emu_push(0x0836); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	f__07D4_0836_000B_20A8();
}

/**
 * Decompiled function f__07D4_0836_000B_20A8()
 *
 * @name f__07D4_0836_000B_20A8
 * @implements 07D4:0836:000B:20A8 ()
 *
 * Called From: 07D4:0836:0013:8507
 */
void f__07D4_0836_000B_20A8()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x0841); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	f__07D4_0841_0044_49B9();
}

/**
 * Decompiled function f__07D4_0841_0044_49B9()
 *
 * @name f__07D4_0841_0044_49B9
 * @implements 07D4:0841:0044:49B9 ()
 *
 * Called From: 07D4:0841:000B:20A8
 */
void f__07D4_0841_0044_49B9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_addws(&emu_dx.x, 0x28);
	emu_movw(&emu_di, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A04));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_si);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_decw(&emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A06));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_di);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_decw(&emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_dx.x);
	emu_movw(&emu_ax.x, 0xC7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xEF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66C4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66C6);
	emu_push(0x0885);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A610DD: f__22A6_10DD_0023_8292(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x0880; emu_last_length = 0x0044; emu_last_crc = 0x49B9;
			emu_call();
			return;
	}
	f__07D4_0885_0014_74D1();
}

/**
 * Decompiled function f__07D4_0885_0014_74D1()
 *
 * @name f__07D4_0885_0014_74D1
 * @implements 07D4:0885:0014:74D1 ()
 *
 * Called From: 07D4:0885:0044:49B9
 */
void f__07D4_0885_0014_74D1()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0899); emu_cs = 0x251B; f__251B_0000_001E_12D9();
	f__07D4_0899_0027_2D54();
}

/**
 * Decompiled function f__07D4_0899_0027_2D54()
 *
 * @name f__07D4_0899_0027_2D54
 * @implements 07D4:0899:0027:2D54 ()
 *
 * Called From: 07D4:0899:0014:74D1
 */
void f__07D4_0899_0027_2D54()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38EC), 0x0);
	if (!emu_flags.zf) { f__07D4_08DC_0018_EF0D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x2);
	if (!emu_flags.zf) { f__07D4_08DC_0018_EF0D(); return; }
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6656);
	emu_push(0x08C0);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_7956(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x08BB; emu_last_length = 0x0027; emu_last_crc = 0x2D54;
			emu_call();
			return;
	}
	f__07D4_08C0_0019_51EA();
}

/**
 * Decompiled function f__07D4_08C0_0019_51EA()
 *
 * @name f__07D4_08C0_0019_51EA
 * @implements 07D4:08C0:0019:51EA ()
 *
 * Called From: 07D4:08C0:0027:2D54
 */
void f__07D4_08C0_0019_51EA()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6656);
	emu_push(0x08D9);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_7956(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x08D4; emu_last_length = 0x0019; emu_last_crc = 0x51EA;
			emu_call();
			return;
	}
	f__07D4_08D9_001B_F30A();
}

/**
 * Decompiled function f__07D4_08D9_001B_F30A()
 *
 * @name f__07D4_08D9_001B_F30A
 * @implements 07D4:08D9:001B:F30A ()
 *
 * Called From: 07D4:08D9:0019:51EA
 */
void f__07D4_08D9_001B_F30A()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0xC7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x13F);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66C4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66C6);
	emu_push(0x08F4);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A610DD: f__22A6_10DD_0023_8292(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x08EF; emu_last_length = 0x001B; emu_last_crc = 0xF30A;
			emu_call();
			return;
	}
	f__07D4_08F4_001F_F7FA();
}

/**
 * Decompiled function f__07D4_08DC_0018_EF0D()
 *
 * @name f__07D4_08DC_0018_EF0D
 * @implements 07D4:08DC:0018:EF0D ()
 *
 * Called From: 07D4:08A1:0027:2D54
 * Called From: 07D4:08A8:0027:2D54
 */
void f__07D4_08DC_0018_EF0D()
{
	emu_movw(&emu_ax.x, 0xC7);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x13F);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66C4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66C6);
	emu_push(0x08F4);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A610DD: f__22A6_10DD_0023_8292(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x08EF; emu_last_length = 0x0018; emu_last_crc = 0xEF0D;
			emu_call();
			return;
	}
	f__07D4_08F4_001F_F7FA();
}

/**
 * Decompiled function f__07D4_08F4_001F_F7FA()
 *
 * @name f__07D4_08F4_001F_F7FA
 * @implements 07D4:08F4:001F:F7FA ()
 *
 * Called From: 07D4:08F4:0018:EF0D
 * Called From: 07D4:08F4:001B:F30A
 */
void f__07D4_08F4_001F_F7FA()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A08), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x39E6), 0x0);
	if (!emu_flags.zf) { f__07D4_0913_0012_E61A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__07D4_0913_0012_E61A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (!emu_flags.zf) { f__07D4_0913_0012_E61A(); return; }
	emu_ip = 0x0E64; emu_last_cs = 0x07D4; emu_last_ip = 0x0910; emu_last_length = 0x001F; emu_last_crc = 0xF7FA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_08FD_0016_6387()
 *
 * @name f__07D4_08FD_0016_6387
 * @implements 07D4:08FD:0016:6387 ()
 *
 * Called From: 07D4:07DD:0012:3AEC
 * Called From: 07D4:07ED:0010:B975
 * Called From: 07D4:080C:0016:0838
 */
void f__07D4_08FD_0016_6387()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x39E6), 0x0);
	if (!emu_flags.zf) { f__07D4_0913_0012_E61A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__07D4_0913_0012_E61A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (!emu_flags.zf) { f__07D4_0913_0012_E61A(); return; }
	f__07D4_0E64_0008_DF1A(); return;
}

/**
 * Decompiled function f__07D4_0913_0012_E61A()
 *
 * @name f__07D4_0913_0012_E61A
 * @implements 07D4:0913:0012:E61A ()
 *
 * Called From: 07D4:0902:0016:6387
 * Called From: 07D4:0902:001F:F7FA
 * Called From: 07D4:0908:001F:F7FA
 * Called From: 07D4:0908:0016:6387
 * Called From: 07D4:090E:001F:F7FA
 * Called From: 07D4:090E:0016:6387
 */
void f__07D4_0913_0012_E61A()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0925); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	f__07D4_0925_0006_3F0A();
}

/**
 * Decompiled function f__07D4_0925_0006_3F0A()
 *
 * @name f__07D4_0925_0006_3F0A
 * @implements 07D4:0925:0006:3F0A ()
 *
 * Called From: 07D4:0925:0012:E61A
 */
void f__07D4_0925_0006_3F0A()
{
	emu_addws(&emu_sp, 0x8);
	f__07D4_0E4D_0011_862F(); return;
}

/**
 * Decompiled function f__07D4_092B_000C_1577()
 *
 * @name f__07D4_092B_000C_1577
 * @implements 07D4:092B:000C:1577 ()
 *
 * Called From: 07D4:0E5B:0011:862F
 * Called From: 07D4:0E5B:0013:8583
 */
void f__07D4_092B_000C_1577()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x14);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0937_000C_0A85(); return; }
	f__07D4_0E41_000A_79EF(); return;
}

/**
 * Decompiled function f__07D4_0937_000C_0A85()
 *
 * @name f__07D4_0937_000C_0A85
 * @implements 07D4:0937:000C:0A85 ()
 *
 * Called From: 07D4:0932:000C:1577
 */
void f__07D4_0937_000C_0A85()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x65);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_0943_0025_C574(); return; }
	emu_ip = 0x0E41; emu_last_cs = 0x07D4; emu_last_ip = 0x0940; emu_last_length = 0x000C; emu_last_crc = 0x0A85; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_0943_0025_C574()
 *
 * @name f__07D4_0943_0025_C574
 * @implements 07D4:0943:0025:C574 ()
 *
 * Called From: 07D4:093E:000C:0A85
 */
void f__07D4_0943_0025_C574()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_andw(&emu_ax.x, 0x1004);
	emu_cmpw(&emu_ax.x, 0x1000);
	if (emu_flags.zf) { f__07D4_099A_0019_0DC5(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__07D4_099A_0019_0DC5(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0968); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__07D4_0968_001F_BAAE();
}

/**
 * Decompiled function f__07D4_0968_001F_BAAE()
 *
 * @name f__07D4_0968_001F_BAAE
 * @implements 07D4:0968:001F:BAAE ()
 *
 * Called From: 07D4:0968:0025:C574
 */
void f__07D4_0968_001F_BAAE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x, -0x701B));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0987); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__07D4_0987_0013_0AFE();
}

/**
 * Decompiled function f__07D4_0987_0013_0AFE()
 *
 * @name f__07D4_0987_0013_0AFE
 * @implements 07D4:0987:0013:0AFE ()
 *
 * Called From: 07D4:0987:001F:BAAE
 */
void f__07D4_0987_0013_0AFE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_andb(&emu_ax.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_pop(&emu_ax.x);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__07D4_099A_0019_0DC5(); return; }
	f__07D4_0E41_000A_79EF(); return;
}

/**
 * Decompiled function f__07D4_099A_0019_0DC5()
 *
 * @name f__07D4_099A_0019_0DC5
 * @implements 07D4:099A:0019:0DC5 ()
 *
 * Called From: 07D4:0950:0025:C574
 * Called From: 07D4:0956:0025:C574
 * Called From: 07D4:0995:0013:0AFE
 */
void f__07D4_099A_0019_0DC5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xEFFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x09B3); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__07D4_09B3_0023_7FE8();
}

/**
 * Decompiled function f__07D4_09B3_0023_7FE8()
 *
 * @name f__07D4_09B3_0023_7FE8
 * @implements 07D4:09B3:0023:7FE8 ()
 *
 * Called From: 07D4:09B3:0019:0DC5
 */
void f__07D4_09B3_0023_7FE8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { f__07D4_09D6_0031_8B25(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x09D6; emu_last_cs = 0x07D4; emu_last_ip = 0x09D1; emu_last_length = 0x0023; emu_last_crc = 0x7FE8; emu_call(); return; } // Jump does not resolve
	f__07D4_0E41_000A_79EF(); return;
}

/**
 * Decompiled function f__07D4_09D6_0031_8B25()
 *
 * @name f__07D4_09D6_0031_8B25
 * @implements 07D4:09D6:0031:8B25 ()
 *
 * Called From: 07D4:09CA:0023:7FE8
 */
void f__07D4_09D6_0031_8B25()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs);
	emu_push(0x0A07); f__07D4_196B_0073_7B75();
	f__07D4_0A07_000B_34EB();
}

/**
 * Decompiled function f__07D4_0A07_000B_34EB()
 *
 * @name f__07D4_0A07_000B_34EB
 * @implements 07D4:0A07:000B:34EB ()
 *
 * Called From: 07D4:0A07:0031:8B25
 */
void f__07D4_0A07_000B_34EB()
{
	emu_addws(&emu_sp, 0xC);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__07D4_0A12_0045_2721(); return; }
	f__07D4_0E41_000A_79EF(); return;
}

/**
 * Decompiled function f__07D4_0A12_0045_2721()
 *
 * @name f__07D4_0A12_0045_2721
 * @implements 07D4:0A12:0045:2721 ()
 *
 * Called From: 07D4:0A0D:000B:34EB
 */
void f__07D4_0A12_0045_2721()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6C));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, 0x2DCE);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6C));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, 0x2DCE);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A57); emu_cs = 0x34CD; ovl__34CD(19);
	f__07D4_0A57_001A_5FAD();
}

/**
 * Decompiled function f__07D4_0A57_001A_5FAD()
 *
 * @name f__07D4_0A57_001A_5FAD
 * @implements 07D4:0A57:001A:5FAD ()
 *
 * Called From: 07D4:0A57:0045:2721
 */
void f__07D4_0A57_001A_5FAD()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0A71_0015_E9B7(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4C), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0A71; emu_last_cs = 0x07D4; emu_last_ip = 0x0A6C; emu_last_length = 0x001A; emu_last_crc = 0x5FAD; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0B0E; emu_last_cs = 0x07D4; emu_last_ip = 0x0A6E; emu_last_length = 0x001A; emu_last_crc = 0x5FAD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_0A71_0015_E9B7()
 *
 * @name f__07D4_0A71_0015_E9B7
 * @implements 07D4:0A71:0015:E9B7 ()
 *
 * Called From: 07D4:0A62:001A:5FAD
 */
void f__07D4_0A71_0015_E9B7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x44));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4A));
	emu_cmpws(&emu_bx.x, 0x4);
	if ((emu_flags.cf || emu_flags.zf)) { f__07D4_0A87_0007_5D22(); return; }
	emu_ip = 0x0B04; emu_last_cs = 0x07D4; emu_last_ip = 0x0A84; emu_last_length = 0x0015; emu_last_crc = 0xE9B7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_0A87_0007_5D22()
 *
 * @name f__07D4_0A87_0007_5D22
 * @implements 07D4:0A87:0007:5D22 ()
 *
 * Called From: 07D4:0A82:0015:E9B7
 */
void f__07D4_0A87_0007_5D22()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1590);
	switch (emu_ip) {
		case 0x0A8E: f__07D4_0A8E_000C_232D(); return;
		case 0x0AB1: f__07D4_0AB1_0025_9A23(); return;
		case 0x0AD6: f__07D4_0AD6_002C_4712(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x0A89; emu_last_length = 0x0007; emu_last_crc = 0x5D22;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__07D4_0A8E_000C_232D()
 *
 * @name f__07D4_0A8E_000C_232D
 * @implements 07D4:0A8E:000C:232D ()
 *
 * Called From: 07D4:0A89:0007:5D22
 */
void f__07D4_0A8E_000C_232D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x5);
	if (!emu_flags.zf) { f__07D4_0A9B_0016_E0B5(); return; }
	emu_ip = 0x0B0C; emu_last_cs = 0x07D4; emu_last_ip = 0x0A98; emu_last_length = 0x000C; emu_last_crc = 0x232D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_0A9B_0016_E0B5()
 *
 * @name f__07D4_0A9B_0016_E0B5
 * @implements 07D4:0A9B:0016:E0B5 ()
 *
 * Called From: 07D4:0A96:000C:232D
 */
void f__07D4_0A9B_0016_E0B5()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_si, emu_get_memory16(emu_ds, emu_bx.x,  0x32A4));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x32A6));
	f__07D4_0AFD_0005_1D80(); return;
}

/**
 * Decompiled function f__07D4_0AB1_0025_9A23()
 *
 * @name f__07D4_0AB1_0025_9A23
 * @implements 07D4:0AB1:0025:9A23 ()
 *
 * Called From: 07D4:0A89:0007:5D22
 */
void f__07D4_0AB1_0025_9A23()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x32C4));
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_andw(&emu_ax.x, 0x3);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x334A));
	emu_movws(&emu_ax.x, emu_ax.l);
	f__07D4_0AF1_0011_B796(); return;
}

/**
 * Decompiled function f__07D4_0AD6_002C_4712()
 *
 * @name f__07D4_0AD6_002C_4712
 * @implements 07D4:0AD6:002C:4712 ()
 *
 * Called From: 07D4:0A89:0007:5D22
 */
void f__07D4_0AD6_002C_4712()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x32C4));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_andw(&emu_ax.x, 0x3);
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x32C6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x721D), emu_ax.x);
	f__07D4_0B0C_0002_0394(); return;
}

/**
 * Decompiled function f__07D4_0AF1_0011_B796()
 *
 * @name f__07D4_0AF1_0011_B796
 * @implements 07D4:0AF1:0011:B796 ()
 *
 * Called From: 07D4:0AD4:0025:9A23
 */
void f__07D4_0AF1_0011_B796()
{
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x32C6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x721D), emu_ax.x);
	f__07D4_0B0C_0002_0394(); return;
}

/**
 * Decompiled function f__07D4_0AFD_0005_1D80()
 *
 * @name f__07D4_0AFD_0005_1D80
 * @implements 07D4:0AFD:0005:1D80 ()
 *
 * Called From: 07D4:0AAF:0016:E0B5
 */
void f__07D4_0AFD_0005_1D80()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x721D), emu_ax.x);
	f__07D4_0B0C_0002_0394(); return;
}

/**
 * Decompiled function f__07D4_0B0C_0002_0394()
 *
 * @name f__07D4_0B0C_0002_0394
 * @implements 07D4:0B0C:0002:0394 ()
 *
 * Called From: 07D4:0B00:0011:B796
 * Called From: 07D4:0B00:0005:1D80
 * Called From: 07D4:0B00:002C:4712
 */
void f__07D4_0B0C_0002_0394()
{
	f__07D4_0B2A_000F_41BF(); return;
}

/**
 * Decompiled function f__07D4_0B2A_000F_41BF()
 *
 * @name f__07D4_0B2A_000F_41BF
 * @implements 07D4:0B2A:000F:41BF ()
 *
 * Called From: 07D4:0B0C:0002:0394
 */
void f__07D4_0B2A_000F_41BF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x59), 0x0);
	if (emu_flags.zf) { f__07D4_0B39_000B_03A3(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_ip = 0x0B46; emu_last_cs = 0x07D4; emu_last_ip = 0x0B37; emu_last_length = 0x000F; emu_last_crc = 0x41BF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_0B39_000B_03A3()
 *
 * @name f__07D4_0B39_000B_03A3
 * @implements 07D4:0B39:000B:03A3 ()
 *
 * Called From: 07D4:0B32:000F:41BF
 */
void f__07D4_0B39_000B_03A3()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs); emu_push(0x0B44); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__07D4_0B44_0008_6D3E();
}

/**
 * Decompiled function f__07D4_0B44_0008_6D3E()
 *
 * @name f__07D4_0B44_0008_6D3E
 * @implements 07D4:0B44:0008:6D3E ()
 *
 * Called From: 07D4:0B44:000B:03A3
 */
void f__07D4_0B44_0008_6D3E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0B4C); f__07D4_18BD_0016_A865();
	f__07D4_0B4C_0066_13FD();
}

/**
 * Decompiled function f__07D4_0B4C_0066_13FD()
 *
 * @name f__07D4_0B4C_0066_13FD
 * @implements 07D4:0B4C:0066:13FD ()
 *
 * Called From: 07D4:0B4C:0008:6D3E
 */
void f__07D4_0B4C_0066_13FD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (emu_flags.zf) { emu_ip = 0x0B70; emu_last_cs = 0x07D4; emu_last_ip = 0x0B5D; emu_last_length = 0x0066; emu_last_crc = 0x13FD; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x800);
	if (emu_flags.zf) { f__07D4_0B70_0042_3779(); return; }
	emu_orw(&emu_get_memory16(emu_ds, 0x00, -0x721D), 0x100);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x20);
	if (emu_flags.zf) { f__07D4_0B81_0031_6D90(); return; }
	emu_orw(&emu_get_memory16(emu_ds, 0x00, -0x721D), 0x200);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C40));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C3E));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8420);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x721D));
	emu_orw(&emu_ax.x, 0xE000);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x0BB2); emu_cs = 0x2903; emu_ip = 0x0D0A; emu_last_cs = 0x07D4; emu_last_ip = 0x0BAD; emu_last_length = 0x0066; emu_last_crc = 0x13FD; emu_call(); // Jump does not resolve
	f__07D4_0BB2_0010_7835();
}

/**
 * Decompiled function f__07D4_0B70_0042_3779()
 *
 * @name f__07D4_0B70_0042_3779
 * @implements 07D4:0B70:0042:3779 ()
 *
 * Called From: 07D4:0B68:0066:13FD
 */
void f__07D4_0B70_0042_3779()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x20);
	if (emu_flags.zf) { f__07D4_0B81_0031_6D90(); return; }
	emu_orw(&emu_get_memory16(emu_ds, 0x00, -0x721D), 0x200);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C40));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C3E));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8420);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x721D));
	emu_orw(&emu_ax.x, 0xE000);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x0BB2); emu_cs = 0x2903; emu_ip = 0x0D0A; emu_last_cs = 0x07D4; emu_last_ip = 0x0BAD; emu_last_length = 0x0042; emu_last_crc = 0x3779; emu_call(); // Jump does not resolve
	f__07D4_0BB2_0010_7835();
}

/**
 * Decompiled function f__07D4_0B81_0031_6D90()
 *
 * @name f__07D4_0B81_0031_6D90
 * @implements 07D4:0B81:0031:6D90 ()
 *
 * Called From: 07D4:0B79:0042:3779
 * Called From: 07D4:0B79:0066:13FD
 */
void f__07D4_0B81_0031_6D90()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C40));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C3E));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8420);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x721D));
	emu_orw(&emu_ax.x, 0xE000);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x0BB2); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__07D4_0BB2_0010_7835();
}

/**
 * Decompiled function f__07D4_0BB2_0010_7835()
 *
 * @name f__07D4_0BB2_0010_7835
 * @implements 07D4:0BB2:0010:7835 ()
 *
 * Called From: 07D4:0BB2:0031:6D90
 */
void f__07D4_0BB2_0010_7835()
{
	emu_addws(&emu_sp, 0x18);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (emu_flags.zf) { f__07D4_0BC2_000D_5ADE(); return; }
	f__07D4_0C8E_000D_490C(); return;
}

/**
 * Decompiled function f__07D4_0BC2_000D_5ADE()
 *
 * @name f__07D4_0BC2_000D_5ADE
 * @implements 07D4:0BC2:000D:5ADE ()
 *
 * Called From: 07D4:0BBD:0010:7835
 */
void f__07D4_0BC2_000D_5ADE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x5);
	if (emu_flags.zf) { f__07D4_0BCF_000D_4B8A(); return; }
	f__07D4_0C8E_000D_490C(); return;
}

/**
 * Decompiled function f__07D4_0BCF_000D_4B8A()
 *
 * @name f__07D4_0BCF_000D_4B8A
 * @implements 07D4:0BCF:000D:4B8A ()
 *
 * Called From: 07D4:0BCA:000D:5ADE
 */
void f__07D4_0BCF_000D_4B8A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0BDC_0017_7230(); return; }
	emu_ip = 0x0C8E; emu_last_cs = 0x07D4; emu_last_ip = 0x0BD9; emu_last_length = 0x000D; emu_last_crc = 0x4B8A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_0BDC_0017_7230()
 *
 * @name f__07D4_0BDC_0017_7230
 * @implements 07D4:0BDC:0017:7230 ()
 *
 * Called From: 07D4:0BD7:000D:4B8A
 */
void f__07D4_0BDC_0017_7230()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x5);
	if (emu_flags.zf) { f__07D4_0BF3_0008_EE0C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x1);
	if (emu_flags.zf) { emu_ip = 0x0BF3; emu_last_cs = 0x07D4; emu_last_ip = 0x0BEE; emu_last_length = 0x0017; emu_last_crc = 0x7230; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0C8E; emu_last_cs = 0x07D4; emu_last_ip = 0x0BF0; emu_last_length = 0x0017; emu_last_crc = 0x7230; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_0BF3_0008_EE0C()
 *
 * @name f__07D4_0BF3_0008_EE0C
 * @implements 07D4:0BF3:0008:EE0C ()
 *
 * Called From: 07D4:0BE4:0017:7230
 */
void f__07D4_0BF3_0008_EE0C()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0BFB); emu_cs = 0x34CD; ovl__34CD(13);
	f__07D4_0BFB_000E_9264();
}

/**
 * Decompiled function f__07D4_0BFB_000E_9264()
 *
 * @name f__07D4_0BFB_000E_9264
 * @implements 07D4:0BFB:000E:9264 ()
 *
 * Called From: 07D4:0BFB:0008:EE0C
 */
void f__07D4_0BFB_000E_9264()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x8);
	if (emu_flags.zf) { f__07D4_0C09_0030_4CB8(); return; }
	emu_cmpw(&emu_ax.x, 0x9);
	if (emu_flags.zf) { f__07D4_0C09_0030_4CB8(); return; }
	f__07D4_0C8C_0002_03AC(); return;
}

/**
 * Decompiled function f__07D4_0C09_0030_4CB8()
 *
 * @name f__07D4_0C09_0030_4CB8
 * @implements 07D4:0C09:0030:4CB8 ()
 *
 * Called From: 07D4:0BFF:000E:9264
 * Called From: 07D4:0C04:000E:9264
 */
void f__07D4_0C09_0030_4CB8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_bx.x, 0x3);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_si, emu_dx.x);
	emu_addw(&emu_si, 0xDF);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x32A4));
	emu_movw(&emu_dx.x, 0x3);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs); emu_push(0x0C39); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__07D4_0C39_0008_6D08();
}

/**
 * Decompiled function f__07D4_0C39_0008_6D08()
 *
 * @name f__07D4_0C39_0008_6D08
 * @implements 07D4:0C39:0008:6D08 ()
 *
 * Called From: 07D4:0C39:0030:4CB8
 */
void f__07D4_0C39_0008_6D08()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0C41); f__07D4_18BD_0016_A865();
	f__07D4_0C41_0046_0190();
}

/**
 * Decompiled function f__07D4_0C41_0046_0190()
 *
 * @name f__07D4_0C41_0046_0190
 * @implements 07D4:0C41:0046:0190 ()
 *
 * Called From: 07D4:0C41:0008:6D08
 */
void f__07D4_0C41_0046_0190()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x32A6));
	emu_orw(&emu_ax.x, 0xC000);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3350));
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x334E));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x0C87); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__07D4_0C87_0005_1FF8();
}

/**
 * Decompiled function f__07D4_0C87_0005_1FF8()
 *
 * @name f__07D4_0C87_0005_1FF8
 * @implements 07D4:0C87:0005:1FF8 ()
 *
 * Called From: 07D4:0C87:0046:0190
 */
void f__07D4_0C87_0005_1FF8()
{
	emu_addws(&emu_sp, 0xE);
	f__07D4_0C8E_000D_490C(); return;
}

/**
 * Decompiled function f__07D4_0C8C_0002_03AC()
 *
 * @name f__07D4_0C8C_0002_03AC
 * @implements 07D4:0C8C:0002:03AC ()
 *
 * Called From: 07D4:0C06:000E:9264
 */
void f__07D4_0C8C_0002_03AC()
{
	f__07D4_0C8E_000D_490C(); return;
}

/**
 * Decompiled function f__07D4_0C8E_000D_490C()
 *
 * @name f__07D4_0C8E_000D_490C
 * @implements 07D4:0C8E:000D:490C ()
 *
 * Called From: 07D4:0BBF:0010:7835
 * Called From: 07D4:0BCC:000D:5ADE
 * Called From: 07D4:0C8A:0005:1FF8
 * Called From: 07D4:0C8C:0002:03AC
 */
void f__07D4_0C8E_000D_490C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0C9B_000D_4418(); return; }
	emu_ip = 0x0DAE; emu_last_cs = 0x07D4; emu_last_ip = 0x0C98; emu_last_length = 0x000D; emu_last_crc = 0x490C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_0C9B_000D_4418()
 *
 * @name f__07D4_0C9B_000D_4418
 * @implements 07D4:0C9B:000D:4418 ()
 *
 * Called From: 07D4:0C96:000D:490C
 */
void f__07D4_0C9B_000D_4418()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x46), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x0CA8; emu_last_cs = 0x07D4; emu_last_ip = 0x0CA3; emu_last_length = 0x000D; emu_last_crc = 0x4418; emu_call(); return; } // Jump does not resolve
	f__07D4_0DAE_0055_313F(); return;
}

/**
 * Decompiled function f__07D4_0DAE_0055_313F()
 *
 * @name f__07D4_0DAE_0055_313F
 * @implements 07D4:0DAE:0055:313F ()
 *
 * Called From: 07D4:0CA5:000D:4418
 */
void f__07D4_0DAE_0055_313F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	if (emu_flags.zf) { f__07D4_0E06_0038_B797(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_andw(&emu_ax.x, 0x3);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2C), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2C), 0x3);
	if (!emu_flags.zf) { emu_ip = 0x0DD2; emu_last_cs = 0x07D4; emu_last_ip = 0x0DCB; emu_last_length = 0x0055; emu_last_crc = 0x313F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2C), 0x1);
	emu_movw(&emu_ax.x, 0xC000);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, 0xFFF2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x712));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x710));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x0E03); emu_cs = 0x2903; emu_ip = 0x0F5B; emu_last_cs = 0x07D4; emu_last_ip = 0x0DFE; emu_last_length = 0x0055; emu_last_crc = 0x313F; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__07D4_0E06_0038_B797()
 *
 * @name f__07D4_0E06_0038_B797
 * @implements 07D4:0E06:0038:B797 ()
 *
 * Called From: 07D4:0DB7:0055:313F
 */
void f__07D4_0E06_0038_B797()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (!emu_flags.zf) { f__07D4_0E41_000A_79EF(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	if (!emu_flags.zf) { f__07D4_0E41_000A_79EF(); return; }
	emu_movw(&emu_ax.x, 0xC000);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x45A));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x458));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x0E3E); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__07D4_0E3E_000D_29F3();
}

/**
 * Decompiled function f__07D4_0E3E_000D_29F3()
 *
 * @name f__07D4_0E3E_000D_29F3
 * @implements 07D4:0E3E:000D:29F3 ()
 *
 * Called From: 07D4:0E3E:0038:B797
 */
void f__07D4_0E3E_000D_29F3()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E4B); emu_cs = 0x0FE4; f__0FE4_0283_0038_0940();
	f__07D4_0E4B_0013_8583();
}

/**
 * Decompiled function f__07D4_0E41_000A_79EF()
 *
 * @name f__07D4_0E41_000A_79EF
 * @implements 07D4:0E41:000A:79EF ()
 *
 * Called From: 07D4:0934:000C:1577
 * Called From: 07D4:0997:0013:0AFE
 * Called From: 07D4:09D3:0023:7FE8
 * Called From: 07D4:0A0F:000B:34EB
 * Called From: 07D4:0E10:0038:B797
 * Called From: 07D4:0E16:0038:B797
 */
void f__07D4_0E41_000A_79EF()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E4B); emu_cs = 0x0FE4; f__0FE4_0283_0038_0940();
	f__07D4_0E4B_0013_8583();
}

/**
 * Decompiled function f__07D4_0E4B_0013_8583()
 *
 * @name f__07D4_0E4B_0013_8583
 * @implements 07D4:0E4B:0013:8583 ()
 *
 * Called From: 07D4:0E4B:000A:79EF
 * Called From: 07D4:0E4B:000D:29F3
 */
void f__07D4_0E4B_0013_8583()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_flags.zf) { f__07D4_0E5E_000E_7724(); return; }
	f__07D4_092B_000C_1577(); return;
}

/**
 * Decompiled function f__07D4_0E4D_0011_862F()
 *
 * @name f__07D4_0E4D_0011_862F
 * @implements 07D4:0E4D:0011:862F ()
 *
 * Called From: 07D4:0928:0006:3F0A
 */
void f__07D4_0E4D_0011_862F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_flags.zf) { emu_ip = 0x0E5E; emu_last_cs = 0x07D4; emu_last_ip = 0x0E59; emu_last_length = 0x0011; emu_last_crc = 0x862F; emu_call(); return; } // Jump does not resolve
	f__07D4_092B_000C_1577(); return;
}

/**
 * Decompiled function f__07D4_0E5E_000E_7724()
 *
 * @name f__07D4_0E5E_000E_7724
 * @implements 07D4:0E5E:000E:7724 ()
 *
 * Called From: 07D4:0E59:0013:8583
 */
void f__07D4_0E5E_000E_7724()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39E6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__07D4_0FA0_0009_0329(); return;
}

/**
 * Decompiled function f__07D4_0E64_0008_DF1A()
 *
 * @name f__07D4_0E64_0008_DF1A
 * @implements 07D4:0E64:0008:DF1A ()
 *
 * Called From: 07D4:0910:0016:6387
 */
void f__07D4_0E64_0008_DF1A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__07D4_0FA0_0009_0329(); return;
}

/**
 * Decompiled function f__07D4_0E6C_0028_E091()
 *
 * @name f__07D4_0E6C_0028_E091
 * @implements 07D4:0E6C:0028:E091 ()
 *
 * Called From: 07D4:0FA6:0009:0329
 * Called From: 07D4:0FA6:000C:0B27
 * Called From: 07D4:0FA6:000F:CB55
 */
void f__07D4_0E6C_0028_E091()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x395C));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x395A));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x0E94); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__07D4_0E94_001F_4420();
}

/**
 * Decompiled function f__07D4_0E94_001F_4420()
 *
 * @name f__07D4_0E94_001F_4420
 * @implements 07D4:0E94:001F:4420 ()
 *
 * Called From: 07D4:0E94:0028:E091
 */
void f__07D4_0E94_001F_4420()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x, -0x701B));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x0EB3); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__07D4_0EB3_0028_3BCB();
}

/**
 * Decompiled function f__07D4_0EB3_0028_3BCB()
 *
 * @name f__07D4_0EB3_0028_3BCB
 * @implements 07D4:0EB3:0028:3BCB ()
 *
 * Called From: 07D4:0EB3:001F:4420
 */
void f__07D4_0EB3_0028_3BCB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_andb(&emu_ax.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_pop(&emu_ax.x);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__07D4_0ECB_0010_150C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (!emu_flags.zf) { f__07D4_0EDB_0013_DA8F(); return; }
	f__07D4_0F9D_000C_0B27(); return;
}

/**
 * Decompiled function f__07D4_0ECB_0010_150C()
 *
 * @name f__07D4_0ECB_0010_150C
 * @implements 07D4:0ECB:0010:150C ()
 *
 * Called From: 07D4:0EC1:0028:3BCB
 */
void f__07D4_0ECB_0010_150C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (!emu_flags.zf) { f__07D4_0EDB_0013_DA8F(); return; }
	f__07D4_0F9D_000C_0B27(); return;
}

/**
 * Decompiled function f__07D4_0EDB_0013_DA8F()
 *
 * @name f__07D4_0EDB_0013_DA8F
 * @implements 07D4:0EDB:0013:DA8F ()
 *
 * Called From: 07D4:0ED6:0028:3BCB
 * Called From: 07D4:0ED6:0010:150C
 */
void f__07D4_0EDB_0013_DA8F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), 0x0);
	if (!emu_flags.zf) { f__07D4_0EEE_000D_AF4B(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0EEE; emu_last_cs = 0x07D4; emu_last_ip = 0x0EE9; emu_last_length = 0x0013; emu_last_crc = 0xDA8F; emu_call(); return; } // Jump does not resolve
	f__07D4_0F9D_000C_0B27(); return;
}

/**
 * Decompiled function f__07D4_0EEE_000D_AF4B()
 *
 * @name f__07D4_0EEE_000D_AF4B
 * @implements 07D4:0EEE:000D:AF4B ()
 *
 * Called From: 07D4:0EE3:0013:DA8F
 */
void f__07D4_0EEE_000D_AF4B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xA), 0x0);
	if (!emu_flags.zf) { f__07D4_0EFB_0018_8F1C(); return; }
	emu_ip = 0x0F9D; emu_last_cs = 0x07D4; emu_last_ip = 0x0EF8; emu_last_length = 0x000D; emu_last_crc = 0xAF4B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_0EFB_0018_8F1C()
 *
 * @name f__07D4_0EFB_0018_8F1C
 * @implements 07D4:0EFB:0018:8F1C ()
 *
 * Called From: 07D4:0EF6:000D:AF4B
 */
void f__07D4_0EFB_0018_8F1C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x0F13); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__07D4_0F13_0039_7E5C();
}

/**
 * Decompiled function f__07D4_0F13_0039_7E5C()
 *
 * @name f__07D4_0F13_0039_7E5C
 * @implements 07D4:0F13:0039:7E5C ()
 *
 * Called From: 07D4:0F13:0018:8F1C
 */
void f__07D4_0F13_0039_7E5C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { f__07D4_0F33_0019_9359(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__07D4_0F9D_000C_0B27(); return; }
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs);
	emu_push(0x0F4C); emu_ip = 0x196B; emu_last_cs = 0x07D4; emu_last_ip = 0x0F49; emu_last_length = 0x0039; emu_last_crc = 0x7E5C; emu_call(); // Jump does not resolve
	f__07D4_0F4C_0023_041C();
}

/**
 * Decompiled function f__07D4_0F33_0019_9359()
 *
 * @name f__07D4_0F33_0019_9359
 * @implements 07D4:0F33:0019:9359 ()
 *
 * Called From: 07D4:0F2A:0039:7E5C
 */
void f__07D4_0F33_0019_9359()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs);
	emu_push(0x0F4C); f__07D4_196B_0073_7B75();
	f__07D4_0F4C_0023_041C();
}

/**
 * Decompiled function f__07D4_0F4C_0023_041C()
 *
 * @name f__07D4_0F4C_0023_041C
 * @implements 07D4:0F4C:0023:041C ()
 *
 * Called From: 07D4:0F4C:0019:9359
 */
void f__07D4_0F4C_0023_041C()
{
	emu_addws(&emu_sp, 0xC);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__07D4_0F9D_000C_0B27(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x721D), 0xC000);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs);
	emu_push(0x0F6F); f__07D4_18BD_0016_A865();
	f__07D4_0F6F_002B_044B();
}

/**
 * Decompiled function f__07D4_0F6F_002B_044B()
 *
 * @name f__07D4_0F6F_002B_044B
 * @implements 07D4:0F6F:002B:044B ()
 *
 * Called From: 07D4:0F6F:0023:041C
 */
void f__07D4_0F6F_002B_044B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8420);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x721D));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x0F9A); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__07D4_0F9A_000F_CB55();
}

/**
 * Decompiled function f__07D4_0F9A_000F_CB55()
 *
 * @name f__07D4_0F9A_000F_CB55
 * @implements 07D4:0F9A:000F:CB55 ()
 *
 * Called From: 07D4:0F9A:002B:044B
 */
void f__07D4_0F9A_000F_CB55()
{
	emu_addws(&emu_sp, 0x12);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0FA9; emu_last_cs = 0x07D4; emu_last_ip = 0x0FA4; emu_last_length = 0x000F; emu_last_crc = 0xCB55; emu_call(); return; } // Jump does not resolve
	f__07D4_0E6C_0028_E091(); return;
}

/**
 * Decompiled function f__07D4_0F9D_000C_0B27()
 *
 * @name f__07D4_0F9D_000C_0B27
 * @implements 07D4:0F9D:000C:0B27 ()
 *
 * Called From: 07D4:0ED8:0010:150C
 * Called From: 07D4:0ED8:0028:3BCB
 * Called From: 07D4:0EEB:0013:DA8F
 * Called From: 07D4:0F31:0039:7E5C
 * Called From: 07D4:0F52:0023:041C
 */
void f__07D4_0F9D_000C_0B27()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0FA9_0016_60BD(); return; }
	f__07D4_0E6C_0028_E091(); return;
}

/**
 * Decompiled function f__07D4_0FA0_0009_0329()
 *
 * @name f__07D4_0FA0_0009_0329
 * @implements 07D4:0FA0:0009:0329 ()
 *
 * Called From: 07D4:0E69:000E:7724
 * Called From: 07D4:0E69:0008:DF1A
 */
void f__07D4_0FA0_0009_0329()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0FA9; emu_last_cs = 0x07D4; emu_last_ip = 0x0FA4; emu_last_length = 0x0009; emu_last_crc = 0x0329; emu_call(); return; } // Jump does not resolve
	f__07D4_0E6C_0028_E091(); return;
}

/**
 * Decompiled function f__07D4_0FA9_0016_60BD()
 *
 * @name f__07D4_0FA9_0016_60BD
 * @implements 07D4:0FA9:0016:60BD ()
 *
 * Called From: 07D4:0FA4:000C:0B27
 */
void f__07D4_0FA9_0016_60BD()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x39E8), 0x0);
	if (!emu_flags.zf) { f__07D4_0FBF_0012_E61A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__07D4_0FBF_0012_E61A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (!emu_flags.zf) { f__07D4_0FBF_0012_E61A(); return; }
	f__07D4_1263_0017_0B8A(); return;
}

/**
 * Decompiled function f__07D4_0FBF_0012_E61A()
 *
 * @name f__07D4_0FBF_0012_E61A
 * @implements 07D4:0FBF:0012:E61A ()
 *
 * Called From: 07D4:0FAE:0016:60BD
 * Called From: 07D4:0FB4:0016:60BD
 * Called From: 07D4:0FBA:0016:60BD
 */
void f__07D4_0FBF_0012_E61A()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0FD1); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	f__07D4_0FD1_0006_3E58();
}

/**
 * Decompiled function f__07D4_0FD1_0006_3E58()
 *
 * @name f__07D4_0FD1_0006_3E58
 * @implements 07D4:0FD1:0006:3E58 ()
 *
 * Called From: 07D4:0FD1:0012:E61A
 */
void f__07D4_0FD1_0006_3E58()
{
	emu_addws(&emu_sp, 0x8);
	f__07D4_124C_0011_84FD(); return;
}

/**
 * Decompiled function f__07D4_0FD7_000C_1285()
 *
 * @name f__07D4_0FD7_000C_1285
 * @implements 07D4:0FD7:000C:1285 ()
 *
 * Called From: 07D4:125A:0011:84FD
 * Called From: 07D4:125A:0013:8751
 */
void f__07D4_0FD7_000C_1285()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xF);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_0FE3_0025_C574(); return; }
	f__07D4_1240_000A_79EF(); return;
}

/**
 * Decompiled function f__07D4_0FE3_0025_C574()
 *
 * @name f__07D4_0FE3_0025_C574
 * @implements 07D4:0FE3:0025:C574 ()
 *
 * Called From: 07D4:0FDE:000C:1285
 */
void f__07D4_0FE3_0025_C574()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_andw(&emu_ax.x, 0x1004);
	emu_cmpw(&emu_ax.x, 0x1000);
	if (emu_flags.zf) { f__07D4_103A_0019_0DC5(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__07D4_103A_0019_0DC5(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1008); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__07D4_1008_001F_BAAE();
}

/**
 * Decompiled function f__07D4_1008_001F_BAAE()
 *
 * @name f__07D4_1008_001F_BAAE
 * @implements 07D4:1008:001F:BAAE ()
 *
 * Called From: 07D4:1008:0025:C574
 */
void f__07D4_1008_001F_BAAE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x, -0x701B));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1027); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__07D4_1027_0013_0876();
}

/**
 * Decompiled function f__07D4_1027_0013_0876()
 *
 * @name f__07D4_1027_0013_0876
 * @implements 07D4:1027:0013:0876 ()
 *
 * Called From: 07D4:1027:001F:BAAE
 */
void f__07D4_1027_0013_0876()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_andb(&emu_ax.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_pop(&emu_ax.x);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__07D4_103A_0019_0DC5(); return; }
	f__07D4_1240_000A_79EF(); return;
}

/**
 * Decompiled function f__07D4_103A_0019_0DC5()
 *
 * @name f__07D4_103A_0019_0DC5
 * @implements 07D4:103A:0019:0DC5 ()
 *
 * Called From: 07D4:0FF0:0025:C574
 * Called From: 07D4:0FF6:0025:C574
 * Called From: 07D4:1035:0013:0876
 */
void f__07D4_103A_0019_0DC5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xEFFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1053); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__07D4_1053_0023_7D66();
}

/**
 * Decompiled function f__07D4_1053_0023_7D66()
 *
 * @name f__07D4_1053_0023_7D66
 * @implements 07D4:1053:0023:7D66 ()
 *
 * Called From: 07D4:1053:0019:0DC5
 */
void f__07D4_1053_0023_7D66()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { f__07D4_1076_0031_89AB(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1076; emu_last_cs = 0x07D4; emu_last_ip = 0x1071; emu_last_length = 0x0023; emu_last_crc = 0x7D66; emu_call(); return; } // Jump does not resolve
	f__07D4_1240_000A_79EF(); return;
}

/**
 * Decompiled function f__07D4_1076_0031_89AB()
 *
 * @name f__07D4_1076_0031_89AB
 * @implements 07D4:1076:0031:89AB ()
 *
 * Called From: 07D4:106A:0023:7D66
 */
void f__07D4_1076_0031_89AB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs);
	emu_push(0x10A7); f__07D4_196B_0073_7B75();
	f__07D4_10A7_000B_3665();
}

/**
 * Decompiled function f__07D4_10A7_000B_3665()
 *
 * @name f__07D4_10A7_000B_3665
 * @implements 07D4:10A7:000B:3665 ()
 *
 * Called From: 07D4:10A7:0031:89AB
 */
void f__07D4_10A7_000B_3665()
{
	emu_addws(&emu_sp, 0xC);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__07D4_10B2_002C_8DAE(); return; }
	f__07D4_1240_000A_79EF(); return;
}

/**
 * Decompiled function f__07D4_10B2_002C_8DAE()
 *
 * @name f__07D4_10B2_002C_8DAE
 * @implements 07D4:10B2:002C:8DAE ()
 *
 * Called From: 07D4:10AD:000B:3665
 */
void f__07D4_10B2_002C_8DAE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x44));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x721D), 0xC000);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4A));
	emu_cmpws(&emu_bx.x, 0x5);
	if ((emu_flags.cf || emu_flags.zf)) { f__07D4_10DE_0007_5EB2(); return; }
	emu_ip = 0x1171; emu_last_cs = 0x07D4; emu_last_ip = 0x10DB; emu_last_length = 0x002C; emu_last_crc = 0x8DAE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_10DE_0007_5EB2()
 *
 * @name f__07D4_10DE_0007_5EB2
 * @implements 07D4:10DE:0007:5EB2 ()
 *
 * Called From: 07D4:10D9:002C:8DAE
 */
void f__07D4_10DE_0007_5EB2()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1574);
	switch (emu_ip) {
		case 0x10E5: f__07D4_10E5_000F_D06E(); return;
		case 0x10F4: f__07D4_10F4_0006_022C(); return;
		case 0x110F: f__07D4_110F_0006_001C(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x10E0; emu_last_length = 0x0007; emu_last_crc = 0x5EB2;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__07D4_10E5_000F_D06E()
 *
 * @name f__07D4_10E5_000F_D06E
 * @implements 07D4:10E5:000F:D06E ()
 *
 * Called From: 07D4:10E0:0007:5EB2
 */
void f__07D4_10E5_000F_D06E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x40);
	if (emu_flags.zf) { f__07D4_10F1_0003_0544(); return; }
	emu_incw(&emu_si);
	emu_ip = 0x1177; emu_last_cs = 0x07D4; emu_last_ip = 0x10F1; emu_last_length = 0x000F; emu_last_crc = 0xD06E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_10F1_0003_0544()
 *
 * @name f__07D4_10F1_0003_0544
 * @implements 07D4:10F1:0003:0544 ()
 *
 * Called From: 07D4:10EE:000F:D06E
 */
void f__07D4_10F1_0003_0544()
{
	f__07D4_1177_003C_BFAC(); return;
}

/**
 * Decompiled function f__07D4_10F4_0006_022C()
 *
 * @name f__07D4_10F4_0006_022C
 * @implements 07D4:10F4:0006:022C ()
 *
 * Called From: 07D4:10E0:0007:5EB2
 */
void f__07D4_10F4_0006_022C()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x10FA); emu_cs = 0x34CD; ovl__34CD(19);
	f__07D4_10FA_0015_459D();
}

/**
 * Decompiled function f__07D4_10FA_0015_459D()
 *
 * @name f__07D4_10FA_0015_459D
 * @implements 07D4:10FA:0015:459D ()
 *
 * Called From: 07D4:10FA:0006:022C
 */
void f__07D4_10FA_0015_459D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x32E4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_ax.x);
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x28));
	f__07D4_1161_0010_7EB9(); return;
}

/**
 * Decompiled function f__07D4_110F_0006_001C()
 *
 * @name f__07D4_110F_0006_001C
 * @implements 07D4:110F:0006:001C ()
 *
 * Called From: 07D4:10E0:0007:5EB2
 */
void f__07D4_110F_0006_001C()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1115); emu_cs = 0x34CD; ovl__34CD(12);
	f__07D4_1115_001F_4184();
}

/**
 * Decompiled function f__07D4_1115_001F_4184()
 *
 * @name f__07D4_1115_001F_4184
 * @implements 07D4:1115:001F:4184 ()
 *
 * Called From: 07D4:1115:0006:001C
 */
void f__07D4_1115_001F_4184()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3304));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_ax.x);
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3306));
	f__07D4_116B_0006_0B78(); return;
}

/**
 * Decompiled function f__07D4_1161_0010_7EB9()
 *
 * @name f__07D4_1161_0010_7EB9
 * @implements 07D4:1161:0010:7EB9 ()
 *
 * Called From: 07D4:110D:0015:459D
 */
void f__07D4_1161_0010_7EB9()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x32E6));
	emu_orw(&emu_get_memory16(emu_ds, 0x00, -0x721D), emu_ax.x);
	f__07D4_1177_003C_BFAC(); return;
}

/**
 * Decompiled function f__07D4_116B_0006_0B78()
 *
 * @name f__07D4_116B_0006_0B78
 * @implements 07D4:116B:0006:0B78 ()
 *
 * Called From: 07D4:1132:001F:4184
 */
void f__07D4_116B_0006_0B78()
{
	emu_orw(&emu_get_memory16(emu_ds, 0x00, -0x721D), emu_ax.x);
	f__07D4_1177_003C_BFAC(); return;
}

/**
 * Decompiled function f__07D4_1177_003C_BFAC()
 *
 * @name f__07D4_1177_003C_BFAC
 * @implements 07D4:1177:003C:BFAC ()
 *
 * Called From: 07D4:10F1:0003:0544
 * Called From: 07D4:116F:0006:0B78
 * Called From: 07D4:116F:0010:7EB9
 */
void f__07D4_1177_003C_BFAC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x2000);
	if (emu_flags.zf) { f__07D4_1190_0023_0F43(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x20);
	if (emu_flags.zf) { f__07D4_1190_0023_0F43(); return; }
	emu_addws(&emu_si, 0x5);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x0);
	if (!emu_flags.zf) { f__07D4_11A8_000B_03A3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x100);
	if (emu_flags.zf) { emu_ip = 0x11A8; emu_last_cs = 0x07D4; emu_last_ip = 0x11A3; emu_last_length = 0x003C; emu_last_crc = 0xBFAC; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_si, 0x3);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs); emu_push(0x11B3); emu_cs = 0x1A34; emu_ip = 0x47D6; emu_last_cs = 0x07D4; emu_last_ip = 0x11AE; emu_last_length = 0x003C; emu_last_crc = 0xBFAC; emu_call(); // Jump does not resolve
	f__07D4_11B3_0008_6CE6();
}

/**
 * Decompiled function f__07D4_1190_0023_0F43()
 *
 * @name f__07D4_1190_0023_0F43
 * @implements 07D4:1190:0023:0F43 ()
 *
 * Called From: 07D4:1180:003C:BFAC
 * Called From: 07D4:118B:003C:BFAC
 */
void f__07D4_1190_0023_0F43()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x0);
	if (!emu_flags.zf) { f__07D4_11A8_000B_03A3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x100);
	if (emu_flags.zf) { f__07D4_11A8_000B_03A3(); return; }
	emu_addws(&emu_si, 0x3);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs); emu_push(0x11B3); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__07D4_11B3_0008_6CE6();
}

/**
 * Decompiled function f__07D4_11A8_000B_03A3()
 *
 * @name f__07D4_11A8_000B_03A3
 * @implements 07D4:11A8:000B:03A3 ()
 *
 * Called From: 07D4:1198:0023:0F43
 * Called From: 07D4:1198:003C:BFAC
 * Called From: 07D4:11A3:0023:0F43
 */
void f__07D4_11A8_000B_03A3()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs); emu_push(0x11B3); emu_cs = 0x1A34; f__1A34_3623_0010_3F68();
	f__07D4_11B3_0008_6CE6();
}

/**
 * Decompiled function f__07D4_11B3_0008_6CE6()
 *
 * @name f__07D4_11B3_0008_6CE6
 * @implements 07D4:11B3:0008:6CE6 ()
 *
 * Called From: 07D4:11B3:000B:03A3
 * Called From: 07D4:11B3:0023:0F43
 */
void f__07D4_11B3_0008_6CE6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x11BB); f__07D4_18BD_0016_A865();
	f__07D4_11BB_0049_5323();
}

/**
 * Decompiled function f__07D4_11BB_0049_5323()
 *
 * @name f__07D4_11BB_0049_5323
 * @implements 07D4:11BB:0049:5323 ()
 *
 * Called From: 07D4:11BB:0008:6CE6
 */
void f__07D4_11BB_0049_5323()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2C), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x1);
	if (emu_flags.zf) { f__07D4_1207_0036_A278(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C3C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C3A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x721D));
	emu_andw(&emu_ax.x, 0xDFFF);
	emu_orw(&emu_ax.x, 0x300);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x1204); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__07D4_1204_0039_6A79();
}

/**
 * Decompiled function f__07D4_1204_0039_6A79()
 *
 * @name f__07D4_1204_0039_6A79
 * @implements 07D4:1204:0039:6A79 ()
 *
 * Called From: 07D4:1204:0049:5323
 */
void f__07D4_1204_0039_6A79()
{
	emu_addws(&emu_sp, 0x14);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x20);
	if (emu_flags.zf) { f__07D4_1218_0025_0CED(); return; }
	emu_orw(&emu_get_memory16(emu_ds, 0x00, -0x721D), 0x200);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8420);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x721D));
	emu_orw(&emu_ax.x, 0x2000);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x123D); emu_cs = 0x2903; emu_ip = 0x1395; emu_last_cs = 0x07D4; emu_last_ip = 0x1238; emu_last_length = 0x0039; emu_last_crc = 0x6A79; emu_call(); // Jump does not resolve
	f__07D4_123D_000D_C9F3();
}

/**
 * Decompiled function f__07D4_1207_0036_A278()
 *
 * @name f__07D4_1207_0036_A278
 * @implements 07D4:1207:0036:A278 ()
 *
 * Called From: 07D4:11CD:0049:5323
 */
void f__07D4_1207_0036_A278()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x20);
	if (emu_flags.zf) { f__07D4_1218_0025_0CED(); return; }
	emu_orw(&emu_get_memory16(emu_ds, 0x00, -0x721D), 0x200);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8420);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x721D));
	emu_orw(&emu_ax.x, 0x2000);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x123D); emu_cs = 0x2903; emu_ip = 0x1395; emu_last_cs = 0x07D4; emu_last_ip = 0x1238; emu_last_length = 0x0036; emu_last_crc = 0xA278; emu_call(); // Jump does not resolve
	f__07D4_123D_000D_C9F3();
}

/**
 * Decompiled function f__07D4_1218_0025_0CED()
 *
 * @name f__07D4_1218_0025_0CED
 * @implements 07D4:1218:0025:0CED ()
 *
 * Called From: 07D4:1210:0036:A278
 * Called From: 07D4:1210:0039:6A79
 */
void f__07D4_1218_0025_0CED()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8420);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x721D));
	emu_orw(&emu_ax.x, 0x2000);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x123D); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__07D4_123D_000D_C9F3();
}

/**
 * Decompiled function f__07D4_123D_000D_C9F3()
 *
 * @name f__07D4_123D_000D_C9F3
 * @implements 07D4:123D:000D:C9F3 ()
 *
 * Called From: 07D4:123D:0025:0CED
 */
void f__07D4_123D_000D_C9F3()
{
	emu_addws(&emu_sp, 0x12);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x124A); emu_cs = 0x0FE4; f__0FE4_0283_0038_0940();
	f__07D4_124A_0013_8751();
}

/**
 * Decompiled function f__07D4_1240_000A_79EF()
 *
 * @name f__07D4_1240_000A_79EF
 * @implements 07D4:1240:000A:79EF ()
 *
 * Called From: 07D4:0FE0:000C:1285
 * Called From: 07D4:1037:0013:0876
 * Called From: 07D4:1073:0023:7D66
 * Called From: 07D4:10AF:000B:3665
 */
void f__07D4_1240_000A_79EF()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x124A); emu_cs = 0x0FE4; f__0FE4_0283_0038_0940();
	f__07D4_124A_0013_8751();
}

/**
 * Decompiled function f__07D4_124A_0013_8751()
 *
 * @name f__07D4_124A_0013_8751
 * @implements 07D4:124A:0013:8751 ()
 *
 * Called From: 07D4:124A:000A:79EF
 * Called From: 07D4:124A:000D:C9F3
 */
void f__07D4_124A_0013_8751()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_flags.zf) { f__07D4_125D_001D_2F95(); return; }
	f__07D4_0FD7_000C_1285(); return;
}

/**
 * Decompiled function f__07D4_124C_0011_84FD()
 *
 * @name f__07D4_124C_0011_84FD
 * @implements 07D4:124C:0011:84FD ()
 *
 * Called From: 07D4:0FD4:0006:3E58
 */
void f__07D4_124C_0011_84FD()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_flags.zf) { emu_ip = 0x125D; emu_last_cs = 0x07D4; emu_last_ip = 0x1258; emu_last_length = 0x0011; emu_last_crc = 0x84FD; emu_call(); return; } // Jump does not resolve
	f__07D4_0FD7_000C_1285(); return;
}

/**
 * Decompiled function f__07D4_125D_001D_2F95()
 *
 * @name f__07D4_125D_001D_2F95
 * @implements 07D4:125D:001D:2F95 ()
 *
 * Called From: 07D4:1258:0013:8751
 */
void f__07D4_125D_001D_2F95()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39E8), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (emu_flags.zf) { f__07D4_1291_000A_248C(); return; }
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8DE5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x127A); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__07D4_127A_0014_447A();
}

/**
 * Decompiled function f__07D4_1263_0017_0B8A()
 *
 * @name f__07D4_1263_0017_0B8A
 * @implements 07D4:1263:0017:0B8A ()
 *
 * Called From: 07D4:0FBC:0016:60BD
 */
void f__07D4_1263_0017_0B8A()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (emu_flags.zf) { f__07D4_1291_000A_248C(); return; }
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8DE5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x127A); emu_cs = 0x01F7; emu_ip = 0x3BC1; emu_last_cs = 0x07D4; emu_last_ip = 0x1275; emu_last_length = 0x0017; emu_last_crc = 0x0B8A; emu_call(); // Jump does not resolve
	f__07D4_127A_0014_447A();
}

/**
 * Decompiled function f__07D4_127A_0014_447A()
 *
 * @name f__07D4_127A_0014_447A
 * @implements 07D4:127A:0014:447A ()
 *
 * Called From: 07D4:127A:001D:2F95
 */
void f__07D4_127A_0014_447A()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8FE5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x128E); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	f__07D4_128E_000D_4490();
}

/**
 * Decompiled function f__07D4_128E_000D_4490()
 *
 * @name f__07D4_128E_000D_4490
 * @implements 07D4:128E:000D:4490 ()
 *
 * Called From: 07D4:128E:0014:447A
 */
void f__07D4_128E_000D_4490()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3344), 0x0);
	if (!emu_flags.zf) { f__07D4_129B_0010_935A(); return; }
	f__07D4_13D0_0049_A79E(); return;
}

/**
 * Decompiled function f__07D4_1291_000A_248C()
 *
 * @name f__07D4_1291_000A_248C
 * @implements 07D4:1291:000A:248C ()
 *
 * Called From: 07D4:1267:0017:0B8A
 * Called From: 07D4:1267:001D:2F95
 */
void f__07D4_1291_000A_248C()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3344), 0x0);
	if (!emu_flags.zf) { f__07D4_129B_0010_935A(); return; }
	f__07D4_13D0_0049_A79E(); return;
}

/**
 * Decompiled function f__07D4_129B_0010_935A()
 *
 * @name f__07D4_129B_0010_935A
 * @implements 07D4:129B:0010:935A ()
 *
 * Called From: 07D4:1296:000D:4490
 * Called From: 07D4:1296:000A:248C
 */
void f__07D4_129B_0010_935A()
{
	emu_xorw(&emu_si, emu_si);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__07D4_131B_000B_8E02(); return;
}

/**
 * Decompiled function f__07D4_12AB_0033_5D66()
 *
 * @name f__07D4_12AB_0033_5D66
 * @implements 07D4:12AB:0033:5D66 ()
 *
 * Called From: 07D4:1324:000B:8E02
 * Called From: 07D4:1324:000E:AE3A
 * Called From: 07D4:1324:0033:303D
 */
void f__07D4_12AB_0033_5D66()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x, -0x7D70));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x10));
	emu_andb(&emu_cx.l, 0x7);
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_notb(&emu_ax.l, emu_ax.l);
	emu_andb(&emu_get_memory8(emu_ds, emu_bx.x, -0x6E1B), emu_ax.l);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__07D4_12EC_0007_7B6E(); return; }
	emu_movw(&emu_si, 0x1);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12DE); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__07D4_12DE_000D_6D27();
}

/**
 * Decompiled function f__07D4_12DE_000D_6D27()
 *
 * @name f__07D4_12DE_000D_6D27
 * @implements 07D4:12DE:000D:6D27 ()
 *
 * Called From: 07D4:12DE:0033:5D66
 */
void f__07D4_12DE_000D_6D27()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12EB); emu_cs = 0x2642; f__2642_0002_005E_D1F0();
	f__07D4_12EB_0008_226E();
}

/**
 * Decompiled function f__07D4_12EB_0008_226E()
 *
 * @name f__07D4_12EB_0008_226E
 * @implements 07D4:12EB:0008:226E ()
 *
 * Called From: 07D4:12EB:000D:6D27
 */
void f__07D4_12EB_0008_226E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs);
	emu_push(0x12F3); f__07D4_1625_001A_C935();
	f__07D4_12F3_0033_303D();
}

/**
 * Decompiled function f__07D4_12EC_0007_7B6E()
 *
 * @name f__07D4_12EC_0007_7B6E
 * @implements 07D4:12EC:0007:7B6E ()
 *
 * Called From: 07D4:12D0:0033:5D66
 */
void f__07D4_12EC_0007_7B6E()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs);
	emu_push(0x12F3); f__07D4_1625_001A_C935();
	f__07D4_12F3_0033_303D();
}

/**
 * Decompiled function f__07D4_12F3_0033_303D()
 *
 * @name f__07D4_12F3_0033_303D
 * @implements 07D4:12F3:0033:303D ()
 *
 * Called From: 07D4:12F3:0008:226E
 * Called From: 07D4:12F3:0007:7B6E
 */
void f__07D4_12F3_0033_303D()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__07D4_1318_000E_AE3A(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x, -0x6C1B));
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x10));
	emu_andb(&emu_cx.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__07D4_1318_000E_AE3A(); return; }
	emu_movw(&emu_di, 0x1);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3344));
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_1326_0011_3AB9(); return; }
	f__07D4_12AB_0033_5D66(); return;
}

/**
 * Decompiled function f__07D4_1318_000E_AE3A()
 *
 * @name f__07D4_1318_000E_AE3A
 * @implements 07D4:1318:000E:AE3A ()
 *
 * Called From: 07D4:12F7:0033:303D
 * Called From: 07D4:1313:0033:303D
 */
void f__07D4_1318_000E_AE3A()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3344));
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_1326_0011_3AB9(); return; }
	f__07D4_12AB_0033_5D66(); return;
}

/**
 * Decompiled function f__07D4_131B_000B_8E02()
 *
 * @name f__07D4_131B_000B_8E02
 * @implements 07D4:131B:000B:8E02 ()
 *
 * Called From: 07D4:12A9:0010:935A
 */
void f__07D4_131B_000B_8E02()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3344));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x1326; emu_last_cs = 0x07D4; emu_last_ip = 0x1322; emu_last_length = 0x000B; emu_last_crc = 0x8E02; emu_call(); return; } // Jump does not resolve
	f__07D4_12AB_0033_5D66(); return;
}

/**
 * Decompiled function f__07D4_1326_0011_3AB9()
 *
 * @name f__07D4_1326_0011_3AB9
 * @implements 07D4:1326:0011:3AB9 ()
 *
 * Called From: 07D4:1322:000E:AE3A
 * Called From: 07D4:1322:0033:303D
 */
void f__07D4_1326_0011_3AB9()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__07D4_1339_0028_495B(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x1337); emu_cs = 0x0F78; f__0F78_0008_002C_2547();
	f__07D4_1337_002A_9F5A();
}

/**
 * Decompiled function f__07D4_1337_002A_9F5A()
 *
 * @name f__07D4_1337_002A_9F5A
 * @implements 07D4:1337:002A:9F5A ()
 *
 * Called From: 07D4:1337:0011:3AB9
 */
void f__07D4_1337_002A_9F5A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x1372; emu_last_cs = 0x07D4; emu_last_ip = 0x133B; emu_last_length = 0x002A; emu_last_crc = 0x9F5A; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_movw(&emu_ax.x, 0x40);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x88);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x88);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1361); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	f__07D4_1361_000B_C4ED();
}

/**
 * Decompiled function f__07D4_1339_0028_495B()
 *
 * @name f__07D4_1339_0028_495B
 * @implements 07D4:1339:0028:495B ()
 *
 * Called From: 07D4:1328:0011:3AB9
 */
void f__07D4_1339_0028_495B()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x1372; emu_last_cs = 0x07D4; emu_last_ip = 0x133B; emu_last_length = 0x0028; emu_last_crc = 0x495B; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_movw(&emu_ax.x, 0x40);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x88);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x88);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1361); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	f__07D4_1361_000B_C4ED();
}

/**
 * Decompiled function f__07D4_1361_000B_C4ED()
 *
 * @name f__07D4_1361_000B_C4ED
 * @implements 07D4:1361:000B:C4ED ()
 *
 * Called From: 07D4:1361:002A:9F5A
 * Called From: 07D4:1361:0028:495B
 */
void f__07D4_1361_000B_C4ED()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs); emu_push(0x136C); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__07D4_136C_0006_02D4();
}

/**
 * Decompiled function f__07D4_136C_0006_02D4()
 *
 * @name f__07D4_136C_0006_02D4
 * @implements 07D4:136C:0006:02D4 ()
 *
 * Called From: 07D4:136C:000B:C4ED
 */
void f__07D4_136C_0006_02D4()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x1372); emu_cs = 0x2642; f__2642_0069_0008_3016();
	f__07D4_1372_0015_9310();
}

/**
 * Decompiled function f__07D4_1372_0015_9310()
 *
 * @name f__07D4_1372_0015_9310
 * @implements 07D4:1372:0015:9310 ()
 *
 * Called From: 07D4:1372:0006:02D4
 */
void f__07D4_1372_0015_9310()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x3344), 0xC8);
	if (!emu_flags.zf) { f__07D4_13CA_004F_17F7(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3344), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__07D4_13C1_0009_0699(); return;
}

/**
 * Decompiled function f__07D4_1387_0037_F047()
 *
 * @name f__07D4_1387_0037_F047
 * @implements 07D4:1387:0037:F047 ()
 *
 * Called From: 07D4:13C6:0009:0699
 * Called From: 07D4:13C6:000C:0E97
 */
void f__07D4_1387_0037_F047()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x, -0x6E1B));
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0xE));
	emu_andb(&emu_cx.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__07D4_13BE_000C_0E97(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3344));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7D70), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x3344));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x3344), 0xC8);
	if (!emu_flags.zf) { f__07D4_13BE_000C_0E97(); return; }
	emu_ip = 0x13C8; emu_last_cs = 0x07D4; emu_last_ip = 0x13BC; emu_last_length = 0x0037; emu_last_crc = 0xF047; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_13BE_000C_0E97()
 *
 * @name f__07D4_13BE_000C_0E97
 * @implements 07D4:13BE:000C:0E97 ()
 *
 * Called From: 07D4:13A1:0037:F047
 * Called From: 07D4:13BA:0037:F047
 */
void f__07D4_13BE_000C_0E97()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_1387_0037_F047(); return; }
	f__07D4_13D0_0049_A79E(); return;
}

/**
 * Decompiled function f__07D4_13C1_0009_0699()
 *
 * @name f__07D4_13C1_0009_0699
 * @implements 07D4:13C1:0009:0699 ()
 *
 * Called From: 07D4:1385:0015:9310
 */
void f__07D4_13C1_0009_0699()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_1387_0037_F047(); return; }
	emu_ip = 0x13D0; emu_last_cs = 0x07D4; emu_last_ip = 0x13C8; emu_last_length = 0x0009; emu_last_crc = 0x0699; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_13CA_004F_17F7()
 *
 * @name f__07D4_13CA_004F_17F7
 * @implements 07D4:13CA:004F:17F7 ()
 *
 * Called From: 07D4:1378:0015:9310
 */
void f__07D4_13CA_004F_17F7()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3344), 0x0);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x1);
	if (emu_flags.zf) { f__07D4_1426_0009_066F(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x37BC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x37BE));
	if (emu_flags.zf) { emu_ip = 0x1426; emu_last_cs = 0x07D4; emu_last_ip = 0x13DF; emu_last_length = 0x004F; emu_last_crc = 0x17F7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x36), 0xE);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_13F9_0020_6C82(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4A), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_13F9_0020_6C82(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x13F9; emu_last_cs = 0x07D4; emu_last_ip = 0x13F1; emu_last_length = 0x004F; emu_last_crc = 0x17F7; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1426; emu_last_cs = 0x07D4; emu_last_ip = 0x13F7; emu_last_length = 0x004F; emu_last_crc = 0x17F7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x132);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8B);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x70);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x37BE));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x37BC));
	emu_push(emu_cs); emu_push(0x1419); emu_cs = 0x10E4; emu_ip = 0x330A; emu_last_cs = 0x07D4; emu_last_ip = 0x1414; emu_last_length = 0x004F; emu_last_crc = 0x17F7; emu_call(); // Jump does not resolve
	f__07D4_1419_0016_A8C9();
}

/**
 * Decompiled function f__07D4_13D0_0049_A79E()
 *
 * @name f__07D4_13D0_0049_A79E
 * @implements 07D4:13D0:0049:A79E ()
 *
 * Called From: 07D4:1298:000A:248C
 * Called From: 07D4:1298:000D:4490
 * Called From: 07D4:13C8:000C:0E97
 */
void f__07D4_13D0_0049_A79E()
{
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x1);
	if (emu_flags.zf) { f__07D4_1426_0009_066F(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x37BC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x37BE));
	if (emu_flags.zf) { emu_ip = 0x1426; emu_last_cs = 0x07D4; emu_last_ip = 0x13DF; emu_last_length = 0x0049; emu_last_crc = 0xA79E; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x36), 0xE);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_13F9_0020_6C82(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4A), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_13F9_0020_6C82(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x13F9; emu_last_cs = 0x07D4; emu_last_ip = 0x13F1; emu_last_length = 0x0049; emu_last_crc = 0xA79E; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1426; emu_last_cs = 0x07D4; emu_last_ip = 0x13F7; emu_last_length = 0x0049; emu_last_crc = 0xA79E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x132);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8B);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x70);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x37BE));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x37BC));
	emu_push(emu_cs); emu_push(0x1419); emu_cs = 0x10E4; emu_ip = 0x330A; emu_last_cs = 0x07D4; emu_last_ip = 0x1414; emu_last_length = 0x0049; emu_last_crc = 0xA79E; emu_call(); // Jump does not resolve
	f__07D4_1419_0016_A8C9();
}

/**
 * Decompiled function f__07D4_13F9_0020_6C82()
 *
 * @name f__07D4_13F9_0020_6C82
 * @implements 07D4:13F9:0020:6C82 ()
 *
 * Called From: 07D4:13E5:004F:17F7
 * Called From: 07D4:13E5:0049:A79E
 * Called From: 07D4:13EB:0049:A79E
 * Called From: 07D4:13EB:004F:17F7
 */
void f__07D4_13F9_0020_6C82()
{
	emu_movw(&emu_ax.x, 0x132);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x8B);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x70);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x37BE));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x37BC));
	emu_push(emu_cs); emu_push(0x1419); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	f__07D4_1419_0016_A8C9();
}

/**
 * Decompiled function f__07D4_1419_0016_A8C9()
 *
 * @name f__07D4_1419_0016_A8C9
 * @implements 07D4:1419:0016:A8C9 ()
 *
 * Called From: 07D4:1419:0020:6C82
 */
void f__07D4_1419_0016_A8C9()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x36), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4A), 0xE);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (!emu_flags.zf) { f__07D4_142F_0009_746B(); return; }
	f__07D4_155C_0008_EE6A(); return;
}

/**
 * Decompiled function f__07D4_1426_0009_066F()
 *
 * @name f__07D4_1426_0009_066F
 * @implements 07D4:1426:0009:066F ()
 *
 * Called From: 07D4:13D6:0049:A79E
 * Called From: 07D4:13D6:004F:17F7
 */
void f__07D4_1426_0009_066F()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (!emu_flags.zf) { f__07D4_142F_0009_746B(); return; }
	f__07D4_155C_0008_EE6A(); return;
}

/**
 * Decompiled function f__07D4_142F_0009_746B()
 *
 * @name f__07D4_142F_0009_746B
 * @implements 07D4:142F:0009:746B ()
 *
 * Called From: 07D4:142A:0009:066F
 * Called From: 07D4:142A:0016:A8C9
 */
void f__07D4_142F_0009_746B()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__07D4_1438_0010_F378(); return; }
	f__07D4_155C_0008_EE6A(); return;
}

/**
 * Decompiled function f__07D4_1438_0010_F378()
 *
 * @name f__07D4_1438_0010_F378
 * @implements 07D4:1438:0010:F378 ()
 *
 * Called From: 07D4:1433:0009:746B
 */
void f__07D4_1438_0010_F378()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A14), 0x0);
	if (emu_flags.zf) { f__07D4_147E_000A_FCC1(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_push(emu_cs); emu_push(0x1448); emu_cs = 0x2642; f__2642_0002_005E_D1F0();
	f__07D4_1448_0025_920B();
}

/**
 * Decompiled function f__07D4_1448_0025_920B()
 *
 * @name f__07D4_1448_0025_920B
 * @implements 07D4:1448:0025:920B ()
 *
 * Called From: 07D4:1448:0010:F378
 */
void f__07D4_1448_0025_920B()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_push(emu_cs); emu_push(0x146D); emu_cs = 0x2C17; f__2C17_000C_002F_E104();
	f__07D4_146D_0008_F194();
}

/**
 * Decompiled function f__07D4_146D_0008_F194()
 *
 * @name f__07D4_146D_0008_F194
 * @implements 07D4:146D:0008:F194 ()
 *
 * Called From: 07D4:146D:0025:920B
 */
void f__07D4_146D_0008_F194()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1475); emu_cs = 0x2642; f__2642_0069_0008_3016();
	f__07D4_1475_0009_88B1();
}

/**
 * Decompiled function f__07D4_1475_0009_88B1()
 *
 * @name f__07D4_1475_0009_88B1
 * @implements 07D4:1475:0009:88B1 ()
 *
 * Called From: 07D4:1475:0008:F194
 */
void f__07D4_1475_0009_88B1()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A14), 0x0);
	f__07D4_155C_0008_EE6A(); return;
}

/**
 * Decompiled function f__07D4_147E_000A_FCC1()
 *
 * @name f__07D4_147E_000A_FCC1
 * @implements 07D4:147E:000A:FCC1 ()
 *
 * Called From: 07D4:143D:0010:F378
 */
void f__07D4_147E_000A_FCC1()
{
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__07D4_154A_0009_0A73(); return;
}

/**
 * Decompiled function f__07D4_1488_0042_103B()
 *
 * @name f__07D4_1488_0042_103B
 * @implements 07D4:1488:0042:103B ()
 *
 * Called From: 07D4:1550:0009:0A73
 * Called From: 07D4:1550:000C:027D
 * Called From: 07D4:1550:000F:820F
 */
void f__07D4_1488_0042_103B()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) { f__07D4_14AC_001E_4569(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x42);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x56);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), 0xE);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x56);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_dx.x, emu_bp - 0x42);
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_14CB_0051_7C78(); return; }
	emu_ip = 0x1547; emu_last_cs = 0x07D4; emu_last_ip = 0x14C8; emu_last_length = 0x0042; emu_last_crc = 0x103B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_14AC_001E_4569()
 *
 * @name f__07D4_14AC_001E_4569
 * @implements 07D4:14AC:001E:4569 ()
 *
 * Called From: 07D4:148C:0042:103B
 */
void f__07D4_14AC_001E_4569()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x56);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_dx.x, emu_bp - 0x42);
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_14CB_0051_7C78(); return; }
	f__07D4_1547_000C_027D(); return;
}

/**
 * Decompiled function f__07D4_14CB_0051_7C78()
 *
 * @name f__07D4_14CB_0051_7C78
 * @implements 07D4:14CB:0051:7C78 ()
 *
 * Called From: 07D4:14C6:001E:4569
 * Called From: 07D4:14C6:0042:103B
 */
void f__07D4_14CB_0051_7C78()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x42);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x28);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x56);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_dx.x, emu_bp - 0x42);
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_incw(&emu_ax.x);
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x10);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__07D4_1526_001E_0E68(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_push(emu_cs); emu_push(0x151C); emu_cs = 0x2642; f__2642_0002_005E_D1F0();
	f__07D4_151C_0028_0696();
}

/**
 * Decompiled function f__07D4_151C_0028_0696()
 *
 * @name f__07D4_151C_0028_0696
 * @implements 07D4:151C:0028:0696 ()
 *
 * Called From: 07D4:151C:0051:7C78
 */
void f__07D4_151C_0028_0696()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37A4), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1544); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	f__07D4_1544_000F_820F();
}

/**
 * Decompiled function f__07D4_1526_001E_0E68()
 *
 * @name f__07D4_1526_001E_0E68
 * @implements 07D4:1526:001E:0E68 ()
 *
 * Called From: 07D4:1511:0051:7C78
 */
void f__07D4_1526_001E_0E68()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1544); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	f__07D4_1544_000F_820F();
}

/**
 * Decompiled function f__07D4_1544_000F_820F()
 *
 * @name f__07D4_1544_000F_820F
 * @implements 07D4:1544:000F:820F ()
 *
 * Called From: 07D4:1544:0028:0696
 * Called From: 07D4:1544:001E:0E68
 */
void f__07D4_1544_000F_820F()
{
	emu_addws(&emu_sp, 0x10);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0xA);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_1553_0009_CFD4(); return; }
	f__07D4_1488_0042_103B(); return;
}

/**
 * Decompiled function f__07D4_1547_000C_027D()
 *
 * @name f__07D4_1547_000C_027D
 * @implements 07D4:1547:000C:027D ()
 *
 * Called From: 07D4:14C8:001E:4569
 */
void f__07D4_1547_000C_027D()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0xA);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_1553_0009_CFD4(); return; }
	f__07D4_1488_0042_103B(); return;
}

/**
 * Decompiled function f__07D4_154A_0009_0A73()
 *
 * @name f__07D4_154A_0009_0A73
 * @implements 07D4:154A:0009:0A73 ()
 *
 * Called From: 07D4:1485:000A:FCC1
 */
void f__07D4_154A_0009_0A73()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0xA);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x1553; emu_last_cs = 0x07D4; emu_last_ip = 0x154E; emu_last_length = 0x0009; emu_last_crc = 0x0A73; emu_call(); return; } // Jump does not resolve
	f__07D4_1488_0042_103B(); return;
}

/**
 * Decompiled function f__07D4_1553_0009_CFD4()
 *
 * @name f__07D4_1553_0009_CFD4
 * @implements 07D4:1553:0009:CFD4 ()
 *
 * Called From: 07D4:154E:000F:820F
 * Called From: 07D4:154E:000C:027D
 */
void f__07D4_1553_0009_CFD4()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x155C; emu_last_cs = 0x07D4; emu_last_ip = 0x1555; emu_last_length = 0x0009; emu_last_crc = 0xCFD4; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x155C); emu_cs = 0x2642; f__2642_0069_0008_3016();
	f__07D4_155C_0008_EE6A();
}

/**
 * Decompiled function f__07D4_155C_0008_EE6A()
 *
 * @name f__07D4_155C_0008_EE6A
 * @implements 07D4:155C:0008:EE6A ()
 *
 * Called From: 07D4:142C:0009:066F
 * Called From: 07D4:142C:0016:A8C9
 * Called From: 07D4:1435:0009:746B
 * Called From: 07D4:147B:0009:88B1
 * Called From: 07D4:155C:0009:CFD4
 */
void f__07D4_155C_0008_EE6A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x1564); emu_cs = 0x2598; f__2598_0000_0017_D681();
	f__07D4_1564_0009_5D76();
}

/**
 * Decompiled function f__07D4_1564_0009_5D76()
 *
 * @name f__07D4_1564_0009_5D76
 * @implements 07D4:1564:0009:5D76 ()
 *
 * Called From: 07D4:1564:0008:EE6A
 */
void f__07D4_1564_0009_5D76()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x156D); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	f__07D4_156D_0007_3FFA();
}

/**
 * Decompiled function f__07D4_156D_0007_3FFA()
 *
 * @name f__07D4_156D_0007_3FFA
 * @implements 07D4:156D:0007:3FFA ()
 *
 * Called From: 07D4:156D:0009:5D76
 */
void f__07D4_156D_0007_3FFA()
{
	emu_pop(&emu_cx.x);
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
 * Decompiled function f__07D4_159A_001D_F67E()
 *
 * @name f__07D4_159A_001D_F67E
 * @implements 07D4:159A:001D:F67E ()
 *
 * Called From: 10E4:2130:0012:8964
 */
void f__07D4_159A_001D_F67E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__07D4_15BB_0004_073C(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x15B7); emu_cs = 0x2598; emu_ip = 0x15B7; emu_last_cs = 0x07D4; emu_last_ip = 0x15B2; emu_last_length = 0x001D; emu_last_crc = 0xF67E; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__07D4_15BB_0004_073C()
 *
 * @name f__07D4_15BB_0004_073C
 * @implements 07D4:15BB:0004:073C ()
 *
 * Called From: 07D4:15AC:001D:F67E
 */
void f__07D4_15BB_0004_073C()
{
	emu_xorw(&emu_si, emu_si);
	f__07D4_15C7_0013_7D8B(); return;
}

/**
 * Decompiled function f__07D4_15BF_0005_0CE4()
 *
 * @name f__07D4_15BF_0005_0CE4
 * @implements 07D4:15BF:0005:0CE4 ()
 *
 * Called From: 07D4:15CB:0013:7D8B
 * Called From: 07D4:15CB:0016:56CB
 */
void f__07D4_15BF_0005_0CE4()
{
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x15C4); f__07D4_1625_001A_C935();
	f__07D4_15C4_0016_56CB();
}

/**
 * Decompiled function f__07D4_15C4_0016_56CB()
 *
 * @name f__07D4_15C4_0016_56CB
 * @implements 07D4:15C4:0016:56CB ()
 *
 * Called From: 07D4:15C4:0005:0CE4
 */
void f__07D4_15C4_0016_56CB()
{
	emu_pop(&emu_cx.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_15BF_0005_0CE4(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x15DA); emu_cs = 0x0F78; f__0F78_0008_002C_2547();
	f__07D4_15DA_000E_68F1();
}

/**
 * Decompiled function f__07D4_15C7_0013_7D8B()
 *
 * @name f__07D4_15C7_0013_7D8B
 * @implements 07D4:15C7:0013:7D8B ()
 *
 * Called From: 07D4:15BD:0004:073C
 */
void f__07D4_15C7_0013_7D8B()
{
	emu_cmpw(&emu_si, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_15BF_0005_0CE4(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x15DA); emu_cs = 0x0F78; emu_ip = 0x15E2; emu_last_cs = 0x07D4; emu_last_ip = 0x15D5; emu_last_length = 0x0013; emu_last_crc = 0x7D8B; emu_call(); // Jump does not resolve
	f__07D4_15DA_000E_68F1();
}

/**
 * Decompiled function f__07D4_15DA_000E_68F1()
 *
 * @name f__07D4_15DA_000E_68F1
 * @implements 07D4:15DA:000E:68F1 ()
 *
 * Called From: 07D4:15DA:0016:56CB
 */
void f__07D4_15DA_000E_68F1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__07D4_161F_0006_137A(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x15E8); emu_cs = 0x2598; emu_ip = 0x15E8; emu_last_cs = 0x07D4; emu_last_ip = 0x15E3; emu_last_length = 0x000E; emu_last_crc = 0x68F1; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__07D4_161F_0006_137A()
 *
 * @name f__07D4_161F_0006_137A
 * @implements 07D4:161F:0006:137A ()
 *
 * Called From: 07D4:15DE:000E:68F1
 */
void f__07D4_161F_0006_137A()
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
 * Decompiled function f__07D4_1625_001A_C935()
 *
 * @name f__07D4_1625_001A_C935
 * @implements 07D4:1625:001A:C935 ()
 *
 * Called From: 07D4:12F0:0008:226E
 * Called From: 07D4:12F0:0007:7B6E
 * Called From: 07D4:15C1:0005:0CE4
 * Called From: 0F78:0087:002F:17B3
 */
void f__07D4_1625_001A_C935()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xC);
	emu_movw(&emu_di, 0xFFFF);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x1000);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_163F_0008_D41A(); return; }
	emu_ip = 0x18B7; emu_last_cs = 0x07D4; emu_last_ip = 0x163C; emu_last_length = 0x001A; emu_last_crc = 0xC935; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_163F_0008_D41A()
 *
 * @name f__07D4_163F_0008_D41A
 * @implements 07D4:163F:0008:D41A ()
 *
 * Called From: 07D4:163A:001A:C935
 */
void f__07D4_163F_0008_D41A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1647); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	f__07D4_1647_000C_E96B();
}

/**
 * Decompiled function f__07D4_1647_000C_E96B()
 *
 * @name f__07D4_1647_000C_E96B
 * @implements 07D4:1647:000C:E96B ()
 *
 * Called From: 07D4:1647:0008:D41A
 */
void f__07D4_1647_000C_E96B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1653); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	f__07D4_1653_0012_AC82();
}

/**
 * Decompiled function f__07D4_1653_0012_AC82()
 *
 * @name f__07D4_1653_0012_AC82
 * @implements 07D4:1653:0012:AC82 ()
 *
 * Called From: 07D4:1653:000C:E96B
 */
void f__07D4_1653_0012_AC82()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_incw(&emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1665); emu_cs = 0x34CD; ovl__34CD(11);
	f__07D4_1665_0008_6474();
}

/**
 * Decompiled function f__07D4_1665_0008_6474()
 *
 * @name f__07D4_1665_0008_6474
 * @implements 07D4:1665:0008:6474 ()
 *
 * Called From: 07D4:1665:0012:AC82
 */
void f__07D4_1665_0008_6474()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__07D4_166D_0023_AD6E(); return; }
	f__07D4_18B7_0006_137A(); return;
}

/**
 * Decompiled function f__07D4_166D_0023_AD6E()
 *
 * @name f__07D4_166D_0023_AD6E
 * @implements 07D4:166D:0023:AD6E ()
 *
 * Called From: 07D4:1668:0008:6474
 */
void f__07D4_166D_0023_AD6E()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__07D4_1690_002A_6C31(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x, -0x6C1B));
	emu_movb(&emu_ax.h, 0x0);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_andb(&emu_cx.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x1690; emu_last_cs = 0x07D4; emu_last_ip = 0x168B; emu_last_length = 0x0023; emu_last_crc = 0xAD6E; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x18B7; emu_last_cs = 0x07D4; emu_last_ip = 0x168D; emu_last_length = 0x0023; emu_last_crc = 0xAD6E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_1690_002A_6C31()
 *
 * @name f__07D4_1690_002A_6C31
 * @implements 07D4:1690:002A:6C31 ()
 *
 * Called From: 07D4:166F:0023:AD6E
 */
void f__07D4_1690_002A_6C31()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (emu_flags.zf) { f__07D4_16B0_000A_C258(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x10);
	if (!emu_flags.zf) { f__07D4_16BA_0008_D38C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x16BA; emu_last_cs = 0x07D4; emu_last_ip = 0x16B5; emu_last_length = 0x002A; emu_last_crc = 0x6C31; emu_call(); return; } // Jump does not resolve
	f__07D4_17BA_0008_DEFC(); return;
}

/**
 * Decompiled function f__07D4_16B0_000A_C258()
 *
 * @name f__07D4_16B0_000A_C258
 * @implements 07D4:16B0:000A:C258 ()
 *
 * Called From: 07D4:16A2:002A:6C31
 */
void f__07D4_16B0_000A_C258()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x16BA; emu_last_cs = 0x07D4; emu_last_ip = 0x16B5; emu_last_length = 0x000A; emu_last_crc = 0xC258; emu_call(); return; } // Jump does not resolve
	f__07D4_17BA_0008_DEFC(); return;
}

/**
 * Decompiled function f__07D4_16BA_0008_D38C()
 *
 * @name f__07D4_16BA_0008_D38C
 * @implements 07D4:16BA:0008:D38C ()
 *
 * Called From: 07D4:16AE:002A:6C31
 */
void f__07D4_16BA_0008_D38C()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x16C2); emu_cs = 0x34CD; ovl__34CD(13);
	f__07D4_16C2_0020_1738();
}

/**
 * Decompiled function f__07D4_16C2_0020_1738()
 *
 * @name f__07D4_16C2_0020_1738
 * @implements 07D4:16C2:0020:1738 ()
 *
 * Called From: 07D4:16C2:0008:D38C
 */
void f__07D4_16C2_0020_1738()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpws(&emu_si, 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x16E2; emu_last_cs = 0x07D4; emu_last_ip = 0x16C9; emu_last_length = 0x0020; emu_last_crc = 0x1738; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3A56));
	emu_decw(&emu_dx.x);
	emu_movw(&emu_di, emu_dx.x);
	f__07D4_16F3_003F_4267(); return;
}

/**
 * Decompiled function f__07D4_16F3_003F_4267()
 *
 * @name f__07D4_16F3_003F_4267
 * @implements 07D4:16F3:003F:4267 ()
 *
 * Called From: 07D4:16E0:0020:1738
 */
void f__07D4_16F3_003F_4267()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x3A54), 0xFF);
	if (!emu_flags.zf) { f__07D4_1743_0008_DFBC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movb(&emu_ax.h, 0x0);
	emu_andw(&emu_ax.x, 0x7);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_cmpws(&emu_si, 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1732; emu_last_cs = 0x07D4; emu_last_ip = 0x1720; emu_last_length = 0x003F; emu_last_crc = 0x4267; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_si);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_addws(&emu_dx.x, 0x1D);
	emu_movw(&emu_di, emu_dx.x);
	emu_ip = 0x1743; emu_last_cs = 0x07D4; emu_last_ip = 0x1730; emu_last_length = 0x003F; emu_last_crc = 0x4267; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_1743_0008_DFBC()
 *
 * @name f__07D4_1743_0008_DFBC
 * @implements 07D4:1743:0008:DFBC ()
 *
 * Called From: 07D4:1702:003F:4267
 */
void f__07D4_1743_0008_DFBC()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x174B); emu_cs = 0x34CD; ovl__34CD(26);
	f__07D4_174B_0027_6BF8();
}

/**
 * Decompiled function f__07D4_174B_0027_6BF8()
 *
 * @name f__07D4_174B_0027_6BF8
 * @implements 07D4:174B:0027:6BF8 ()
 *
 * Called From: 07D4:174B:0008:DFBC
 */
void f__07D4_174B_0027_6BF8()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_flags.zf) { f__07D4_17B8_0002_0376(); return; }
	emu_cmpws(&emu_si, 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x178C; emu_last_cs = 0x07D4; emu_last_ip = 0x175D; emu_last_length = 0x0027; emu_last_crc = 0x6BF8; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (!emu_flags.zf) { emu_ip = 0x1772; emu_last_cs = 0x07D4; emu_last_ip = 0x1767; emu_last_length = 0x0027; emu_last_crc = 0x6BF8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x35);
	emu_movw(&emu_di, emu_ax.x);
	emu_ip = 0x178A; emu_last_cs = 0x07D4; emu_last_ip = 0x1770; emu_last_length = 0x0027; emu_last_crc = 0x6BF8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_17B8_0002_0376()
 *
 * @name f__07D4_17B8_0002_0376
 * @implements 07D4:17B8:0002:0376 ()
 *
 * Called From: 07D4:1758:0027:6BF8
 */
void f__07D4_17B8_0002_0376()
{
	f__07D4_1827_0069_D7A9(); return;
}

/**
 * Decompiled function f__07D4_17BA_0008_DEFC()
 *
 * @name f__07D4_17BA_0008_DEFC
 * @implements 07D4:17BA:0008:DEFC ()
 *
 * Called From: 07D4:16B7:000A:C258
 * Called From: 07D4:16B7:002A:6C31
 */
void f__07D4_17BA_0008_DEFC()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x17C2); emu_cs = 0x34CD; ovl__34CD(30);
	f__07D4_17C2_0037_CF61();
}

/**
 * Decompiled function f__07D4_17C2_0037_CF61()
 *
 * @name f__07D4_17C2_0037_CF61
 * @implements 07D4:17C2:0037:CF61 ()
 *
 * Called From: 07D4:17C2:0008:DEFC
 */
void f__07D4_17C2_0037_CF61()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) { f__07D4_1811_0011_99B8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x1811; emu_last_cs = 0x07D4; emu_last_ip = 0x17DD; emu_last_length = 0x0037; emu_last_crc = 0xCF61; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x17F9; emu_last_cs = 0x07D4; emu_last_ip = 0x17E2; emu_last_length = 0x0037; emu_last_crc = 0xCF61; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_si);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_addws(&emu_dx.x, 0x1D);
	emu_movw(&emu_di, emu_dx.x);
	f__07D4_180F_0002_0380(); return;
}

/**
 * Decompiled function f__07D4_180F_0002_0380()
 *
 * @name f__07D4_180F_0002_0380
 * @implements 07D4:180F:0002:0380 ()
 *
 * Called From: 07D4:17F7:0037:CF61
 */
void f__07D4_180F_0002_0380()
{
	f__07D4_1827_0069_D7A9(); return;
}

/**
 * Decompiled function f__07D4_1811_0011_99B8()
 *
 * @name f__07D4_1811_0011_99B8
 * @implements 07D4:1811:0011:99B8 ()
 *
 * Called From: 07D4:17CF:0037:CF61
 */
void f__07D4_1811_0011_99B8()
{
	emu_cmpws(&emu_si, 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1822; emu_last_cs = 0x07D4; emu_last_ip = 0x1814; emu_last_length = 0x0011; emu_last_crc = 0x99B8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3AFE));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	f__07D4_1827_0069_D7A9(); return;
}

/**
 * Decompiled function f__07D4_1827_0069_D7A9()
 *
 * @name f__07D4_1827_0069_D7A9
 * @implements 07D4:1827:0069:D7A9 ()
 *
 * Called From: 07D4:17B8:0002:0376
 * Called From: 07D4:180F:0002:0380
 * Called From: 07D4:1820:0011:99B8
 */
void f__07D4_1827_0069_D7A9()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C0E));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3C10));
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { emu_ip = 0x1895; emu_last_cs = 0x07D4; emu_last_ip = 0x1848; emu_last_length = 0x0069; emu_last_crc = 0xD7A9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_incw(&emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_incw(&emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, 0x4000);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x1890); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	f__07D4_1890_0005_1FC0();
}

/**
 * Decompiled function f__07D4_1890_0005_1FC0()
 *
 * @name f__07D4_1890_0005_1FC0
 * @implements 07D4:1890:0005:1FC0 ()
 *
 * Called From: 07D4:1890:0069:D7A9
 */
void f__07D4_1890_0005_1FC0()
{
	emu_addws(&emu_sp, 0xE);
	f__07D4_18B3_000A_5EF9(); return;
}

/**
 * Decompiled function f__07D4_18B3_000A_5EF9()
 *
 * @name f__07D4_18B3_000A_5EF9
 * @implements 07D4:18B3:000A:5EF9 ()
 *
 * Called From: 07D4:1893:0005:1FC0
 */
void f__07D4_18B3_000A_5EF9()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x37A6));
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
 * Decompiled function f__07D4_18B7_0006_137A()
 *
 * @name f__07D4_18B7_0006_137A
 * @implements 07D4:18B7:0006:137A ()
 *
 * Called From: 07D4:166A:0008:6474
 */
void f__07D4_18B7_0006_137A()
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
 * Decompiled function f__07D4_18BD_0016_A865()
 *
 * @name f__07D4_18BD_0016_A865
 * @implements 07D4:18BD:0016:A865 ()
 *
 * Called From: 07D4:0B49:0008:6D3E
 * Called From: 07D4:0C3E:0008:6D08
 * Called From: 07D4:0F6C:0023:041C
 * Called From: 07D4:11B8:0008:6CE6
 */
void f__07D4_18BD_0016_A865()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x163);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_18D3_0026_BF0E(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x1965; emu_last_cs = 0x07D4; emu_last_ip = 0x18D0; emu_last_length = 0x0016; emu_last_crc = 0xA865; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_18D0_0003_0500()
 *
 * @name f__07D4_18D0_0003_0500
 * @implements 07D4:18D0:0003:0500 ()
 *
 * Called From: 07D4:1962:0013:EEB3
 * Called From: 07D4:1962:0022:3CEA
 * Called From: 07D4:1962:0009:1DDB
 */
void f__07D4_18D0_0003_0500()
{
	f__07D4_1965_0006_137A(); return;
}

/**
 * Decompiled function f__07D4_18D3_0026_BF0E()
 *
 * @name f__07D4_18D3_0026_BF0E
 * @implements 07D4:18D3:0026:BF0E ()
 *
 * Called From: 07D4:18CA:0016:A865
 */
void f__07D4_18D3_0026_BF0E()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x442));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x440));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__07D4_18F9_000B_38B9(); return; }
	emu_ip = 0x18CC; emu_last_cs = 0x07D4; emu_last_ip = 0x18F7; emu_last_length = 0x0026; emu_last_crc = 0xBF0E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_18F9_000B_38B9()
 *
 * @name f__07D4_18F9_000B_38B9
 * @implements 07D4:18F9:000B:38B9 ()
 *
 * Called From: 07D4:18F5:0026:BF0E
 */
void f__07D4_18F9_000B_38B9()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1904); emu_cs = 0x2903; f__2903_00CA_0015_B203();
	f__07D4_1904_0009_BBBA();
}

/**
 * Decompiled function f__07D4_1904_0009_BBBA()
 *
 * @name f__07D4_1904_0009_BBBA
 * @implements 07D4:1904:0009:BBBA ()
 *
 * Called From: 07D4:1904:000B:38B9
 */
void f__07D4_1904_0009_BBBA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_testw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { f__07D4_190E_0057_C34C(); return; }
	f__07D4_195C_0009_1DDB(); return;
}

/**
 * Decompiled function f__07D4_190E_0057_C34C()
 *
 * @name f__07D4_190E_0057_C34C
 * @implements 07D4:190E:0057:C34C ()
 *
 * Called From: 07D4:1909:0009:BBBA
 */
void f__07D4_190E_0057_C34C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x8420);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_ax.x);
	emu_push(emu_bx.x);
	emu_push(emu_cx.x);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_cx.x, 0x10);
	emu_lodsb(emu_ds);
	emu_cmpb(&emu_ax.l, 0x90);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x1952; emu_last_cs = 0x07D4; emu_last_ip = 0x1946; emu_last_length = 0x0057; emu_last_crc = 0xC34C; emu_call(); return; } // Jump does not resolve
	emu_cmpb(&emu_ax.l, 0x98);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_1952_0013_EEB3(); return; }
	emu_cmpb(&emu_ax.l, 0xFF);
	if (emu_flags.zf) { emu_ip = 0x1955; emu_last_cs = 0x07D4; emu_last_ip = 0x194E; emu_last_length = 0x0057; emu_last_crc = 0xC34C; emu_call(); return; } // Jump does not resolve
	emu_addb(&emu_ax.l, emu_bx.l);
	emu_stosb();
	if (--emu_cx.x != 0) { emu_ip = 0x1943; emu_last_cs = 0x07D4; emu_last_ip = 0x1953; emu_last_length = 0x0057; emu_last_crc = 0xC34C; emu_call(); } // Jump does not resolve
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ip = 0x18D0; emu_last_cs = 0x07D4; emu_last_ip = 0x1962; emu_last_length = 0x0057; emu_last_crc = 0xC34C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_1943_0022_3CEA()
 *
 * @name f__07D4_1943_0022_3CEA
 * @implements 07D4:1943:0022:3CEA ()
 *
 * Called From: 07D4:1953:0013:EEB3
 * Called From: 07D4:1953:0022:3CEA
 */
void f__07D4_1943_0022_3CEA()
{
	emu_lodsb(emu_ds);
	emu_cmpb(&emu_ax.l, 0x90);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_1952_0013_EEB3(); return; }
	emu_cmpb(&emu_ax.l, 0x98);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_1952_0013_EEB3(); return; }
	emu_cmpb(&emu_ax.l, 0xFF);
	if (emu_flags.zf) { emu_ip = 0x1955; emu_last_cs = 0x07D4; emu_last_ip = 0x194E; emu_last_length = 0x0022; emu_last_crc = 0x3CEA; emu_call(); return; } // Jump does not resolve
	emu_addb(&emu_ax.l, emu_bx.l);
	emu_stosb();
	if (--emu_cx.x != 0) { f__07D4_1943_0022_3CEA(); return; }
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__07D4_18D0_0003_0500(); return;
}

/**
 * Decompiled function f__07D4_1952_0013_EEB3()
 *
 * @name f__07D4_1952_0013_EEB3
 * @implements 07D4:1952:0013:EEB3 ()
 *
 * Called From: 07D4:1946:0022:3CEA
 * Called From: 07D4:194A:0057:C34C
 * Called From: 07D4:194A:0022:3CEA
 */
void f__07D4_1952_0013_EEB3()
{
	emu_stosb();
	if (--emu_cx.x != 0) { f__07D4_1943_0022_3CEA(); return; }
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__07D4_18D0_0003_0500(); return;
}

/**
 * Decompiled function f__07D4_195C_0009_1DDB()
 *
 * @name f__07D4_195C_0009_1DDB
 * @implements 07D4:195C:0009:1DDB ()
 *
 * Called From: 07D4:190B:0009:BBBA
 */
void f__07D4_195C_0009_1DDB()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__07D4_18D0_0003_0500(); return;
}

/**
 * Decompiled function f__07D4_1965_0006_137A()
 *
 * @name f__07D4_1965_0006_137A
 * @implements 07D4:1965:0006:137A ()
 *
 * Called From: 07D4:18D0:0003:0500
 */
void f__07D4_1965_0006_137A()
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
 * Decompiled function f__07D4_196B_0073_7B75()
 *
 * @name f__07D4_196B_0073_7B75
 * @implements 07D4:196B:0073:7B75 ()
 *
 * Called From: 07D4:0A04:0031:8B25
 * Called From: 07D4:0F49:0019:9359
 * Called From: 07D4:10A4:0031:89AB
 * Called From: 176C:06F4:0029:F7D6
 */
void f__07D4_196B_0073_7B75()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movb(&emu_cx.l, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x39FE));
	emu_andws(&emu_bx.x, 0x3F);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_subw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movb(&emu_cx.l, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x39FE));
	emu_andw(&emu_bx.x, 0xFC0);
	emu_movb(&emu_cx.l, 0x2);
	emu_shrw(&emu_bx.x, emu_cx.l);
	emu_subw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { f__07D4_19AF_002F_767C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) { emu_ip = 0x19C0; emu_last_cs = 0x07D4; emu_last_ip = 0x19B5; emu_last_length = 0x0073; emu_last_crc = 0x7B75; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xF0);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_19DA_0004_0696(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x100);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_19DA_0004_0696(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xF0);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_19DA_0004_0696(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_19DE_0005_154E(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__07D4_19E3_0004_0F7A(); return;
}

/**
 * Decompiled function f__07D4_19AF_002F_767C()
 *
 * @name f__07D4_19AF_002F_767C
 * @implements 07D4:19AF:002F:767C ()
 *
 * Called From: 07D4:19A4:0073:7B75
 */
void f__07D4_19AF_002F_767C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) { f__07D4_19C0_001E_6ADD(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xF0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x19DA; emu_last_cs = 0x07D4; emu_last_ip = 0x19C4; emu_last_length = 0x002F; emu_last_crc = 0x767C; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x100);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x19DA; emu_last_cs = 0x07D4; emu_last_ip = 0x19CB; emu_last_length = 0x002F; emu_last_crc = 0x767C; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xF0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x19DA; emu_last_cs = 0x07D4; emu_last_ip = 0x19D1; emu_last_length = 0x002F; emu_last_crc = 0x767C; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x19DE; emu_last_cs = 0x07D4; emu_last_ip = 0x19D8; emu_last_length = 0x002F; emu_last_crc = 0x767C; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x19E3; emu_last_cs = 0x07D4; emu_last_ip = 0x19DC; emu_last_length = 0x002F; emu_last_crc = 0x767C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__07D4_19C0_001E_6ADD()
 *
 * @name f__07D4_19C0_001E_6ADD
 * @implements 07D4:19C0:001E:6ADD ()
 *
 * Called From: 07D4:19B5:002F:767C
 */
void f__07D4_19C0_001E_6ADD()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xF0);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_19DA_0004_0696(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x100);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_19DA_0004_0696(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xF0);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_19DA_0004_0696(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_19DE_0005_154E(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__07D4_19E3_0004_0F7A(); return;
}

/**
 * Decompiled function f__07D4_19DA_0004_0696()
 *
 * @name f__07D4_19DA_0004_0696
 * @implements 07D4:19DA:0004:0696 ()
 *
 * Called From: 07D4:19C4:001E:6ADD
 * Called From: 07D4:19C4:0073:7B75
 * Called From: 07D4:19CB:001E:6ADD
 * Called From: 07D4:19CB:0073:7B75
 * Called From: 07D4:19D1:001E:6ADD
 * Called From: 07D4:19D1:0073:7B75
 */
void f__07D4_19DA_0004_0696()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__07D4_19E3_0004_0F7A(); return;
}

/**
 * Decompiled function f__07D4_19DC_0002_03A6()
 *
 * @name f__07D4_19DC_0002_03A6
 * @implements 07D4:19DC:0002:03A6 ()
 *
 * Called From: 07D4:19E1:0005:154E
 */
void f__07D4_19DC_0002_03A6()
{
	f__07D4_19E3_0004_0F7A(); return;
}

/**
 * Decompiled function f__07D4_19DE_0005_154E()
 *
 * @name f__07D4_19DE_0005_154E
 * @implements 07D4:19DE:0005:154E ()
 *
 * Called From: 07D4:19D8:0073:7B75
 * Called From: 07D4:19D8:001E:6ADD
 */
void f__07D4_19DE_0005_154E()
{
	emu_movw(&emu_ax.x, 0x1);
	f__07D4_19DC_0002_03A6(); return;
}

/**
 * Decompiled function f__07D4_19E3_0004_0F7A()
 *
 * @name f__07D4_19E3_0004_0F7A
 * @implements 07D4:19E3:0004:0F7A ()
 *
 * Called From: 07D4:19DC:0002:03A6
 * Called From: 07D4:19DC:0004:0696
 * Called From: 07D4:19DC:001E:6ADD
 * Called From: 07D4:19DC:0073:7B75
 */
void f__07D4_19E3_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
