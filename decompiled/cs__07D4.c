/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__07D4_0000_0027_FA61()
 *
 * @name f__07D4_0000_0027_FA61
 * @implements 07D4:0000:0027:FA61 ()
 *
 * Called From: 0642:03D4:0008:75E4
 * Called From: 10E4:213A:000A:1679
 */
void f__07D4_0000_0027_FA61()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x1);
	if (emu_flags.zf) { f__07D4_0027_000D_CDE2(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x3);
	if (emu_flags.zf) { f__07D4_0027_000D_CDE2(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x2);
	if (emu_flags.zf) { f__07D4_0027_000D_CDE2(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x4);
	if (emu_flags.zf) { f__07D4_0027_000D_CDE2(); return; }
	f__07D4_02F2_0006_F7CE(); return;
}

/**
 * Decompiled function f__07D4_0027_000D_CDE2()
 *
 * @name f__07D4_0027_000D_CDE2
 * @implements 07D4:0027:000D:CDE2 ()
 *
 * Called From: 07D4:000D:0027:FA61
 * Called From: 07D4:0014:0027:FA61
 * Called From: 07D4:001B:0027:FA61
 * Called From: 07D4:0022:0027:FA61
 */
void f__07D4_0027_000D_CDE2()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0034); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__07D4_0034_0015_CB18();
}

/**
 * Decompiled function f__07D4_0034_0015_CB18()
 *
 * @name f__07D4_0034_0015_CB18
 * @implements 07D4:0034:0015:CB18 ()
 *
 * Called From: 07D4:0034:000D:CDE2
 */
void f__07D4_0034_0015_CB18()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { f__07D4_0044_0005_E72D(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_push(emu_cs); emu_push(0x0049); emu_cs = 0x06F7; f__06F7_0602_0018_CEB0();
	f__07D4_0049_0005_EE7F();
}

/**
 * Decompiled function f__07D4_0044_0005_E72D()
 *
 * @name f__07D4_0044_0005_E72D
 * @implements 07D4:0044:0005:E72D ()
 *
 * Called From: 07D4:003C:0015:CB18
 */
void f__07D4_0044_0005_E72D()
{
	emu_push(emu_cs); emu_push(0x0049); emu_cs = 0x06F7; f__06F7_0602_0018_CEB0();
	f__07D4_0049_0005_EE7F();
}

/**
 * Decompiled function f__07D4_0049_0005_EE7F()
 *
 * @name f__07D4_0049_0005_EE7F
 * @implements 07D4:0049:0005:EE7F ()
 *
 * Called From: 07D4:0049:0015:CB18
 * Called From: 07D4:0049:0005:E72D
 */
void f__07D4_0049_0005_EE7F()
{
	emu_push(emu_cs); emu_push(0x004E); emu_cs = 0x151A; f__151A_0196_0018_AF63();
	f__07D4_004E_0005_2369();
}

/**
 * Decompiled function f__07D4_004E_0005_2369()
 *
 * @name f__07D4_004E_0005_2369
 * @implements 07D4:004E:0005:2369 ()
 *
 * Called From: 07D4:004E:0005:EE7F
 */
void f__07D4_004E_0005_2369()
{
	emu_push(emu_cs); emu_push(0x0053); emu_cs = 0x0FE4; f__0FE4_0002_0021_D0A9();
	f__07D4_0053_000A_5C8D();
}

/**
 * Decompiled function f__07D4_0053_000A_5C8D()
 *
 * @name f__07D4_0053_000A_5C8D
 * @implements 07D4:0053:000A:5C8D ()
 *
 * Called From: 07D4:0053:0005:2369
 */
void f__07D4_0053_000A_5C8D()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x0);
	if (emu_flags.zf) { f__07D4_005D_000C_C981(); return; }
	f__07D4_01F6_000F_E9F6(); return;
}

/**
 * Decompiled function f__07D4_005D_000C_C981()
 *
 * @name f__07D4_005D_000C_C981
 * @implements 07D4:005D:000C:C981 ()
 *
 * Called From: 07D4:0058:000A:5C8D
 */
void f__07D4_005D_000C_C981()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39FE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39FC));
	if (!emu_flags.zf) { f__07D4_0069_0009_B0BE(); return; }
	f__07D4_01F6_000F_E9F6(); return;
}

/**
 * Decompiled function f__07D4_0069_0009_B0BE()
 *
 * @name f__07D4_0069_0009_B0BE
 * @implements 07D4:0069:0009:B0BE ()
 *
 * Called From: 07D4:0064:000C:C981
 */
void f__07D4_0069_0009_B0BE()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FE));
	emu_push(emu_cs); emu_push(0x0072); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	f__07D4_0072_000D_FD25();
}

/**
 * Decompiled function f__07D4_0072_000D_FD25()
 *
 * @name f__07D4_0072_000D_FD25
 * @implements 07D4:0072:000D:FD25 ()
 *
 * Called From: 07D4:0072:0009:B0BE
 */
void f__07D4_0072_000D_FD25()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FE));
	emu_push(emu_cs); emu_push(0x007F); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	f__07D4_007F_000D_8CA0();
}

/**
 * Decompiled function f__07D4_007F_000D_8CA0()
 *
 * @name f__07D4_007F_000D_8CA0
 * @implements 07D4:007F:000D:8CA0 ()
 *
 * Called From: 07D4:007F:000D:FD25
 */
void f__07D4_007F_000D_8CA0()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x008C); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	f__07D4_008C_000F_1144();
}

/**
 * Decompiled function f__07D4_008C_000F_1144()
 *
 * @name f__07D4_008C_000F_1144
 * @implements 07D4:008C:000F:1144 ()
 *
 * Called From: 07D4:008C:000D:8CA0
 */
void f__07D4_008C_000F_1144()
{
	emu_pop(&emu_cx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x009B); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	f__07D4_009B_0010_3059();
}

/**
 * Decompiled function f__07D4_009B_0010_3059()
 *
 * @name f__07D4_009B_0010_3059
 * @implements 07D4:009B:0010:3059 ()
 *
 * Called From: 07D4:009B:000F:1144
 */
void f__07D4_009B_0010_3059()
{
	emu_pop(&emu_cx.x);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_00AB_0014_88E1(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__07D4_00AD_0012_2029(); return;
}

/**
 * Decompiled function f__07D4_00AB_0014_88E1()
 *
 * @name f__07D4_00AB_0014_88E1
 * @implements 07D4:00AB:0014:88E1 ()
 *
 * Called From: 07D4:00A3:0010:3059
 */
void f__07D4_00AB_0014_88E1()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xF);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_00BF_002C_F427(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__07D4_00C1_002A_1C8F(); return;
}

/**
 * Decompiled function f__07D4_00AD_0012_2029()
 *
 * @name f__07D4_00AD_0012_2029
 * @implements 07D4:00AD:0012:2029 ()
 *
 * Called From: 07D4:00A9:0010:3059
 */
void f__07D4_00AD_0012_2029()
{
	emu_movw(&emu_dx.x, 0xF);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_00BF_002C_F427(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__07D4_00C1_002A_1C8F(); return;
}

/**
 * Decompiled function f__07D4_00BF_002C_F427()
 *
 * @name f__07D4_00BF_002C_F427
 * @implements 07D4:00BF:002C:F427 ()
 *
 * Called From: 07D4:00B7:0012:2029
 * Called From: 07D4:00B7:0014:88E1
 */
void f__07D4_00BF_002C_F427()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0xA);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_00D5_0016_0C55(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_00E1_000A_5C09(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00EB; emu_last_cs = 0x07D4; emu_last_ip = 0x00E6; emu_last_length = 0x002C; emu_last_crc = 0xF427; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0174; emu_last_cs = 0x07D4; emu_last_ip = 0x00E8; emu_last_length = 0x002C; emu_last_crc = 0xF427; emu_call();
}

/**
 * Decompiled function f__07D4_00C1_002A_1C8F()
 *
 * @name f__07D4_00C1_002A_1C8F
 * @implements 07D4:00C1:002A:1C8F ()
 *
 * Called From: 07D4:00BD:0012:2029
 * Called From: 07D4:00BD:0014:88E1
 */
void f__07D4_00C1_002A_1C8F()
{
	emu_movw(&emu_dx.x, 0xA);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_00D5_0016_0C55(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_00E1_000A_5C09(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00EB; emu_last_cs = 0x07D4; emu_last_ip = 0x00E6; emu_last_length = 0x002A; emu_last_crc = 0x1C8F; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0174; emu_last_cs = 0x07D4; emu_last_ip = 0x00E8; emu_last_length = 0x002A; emu_last_crc = 0x1C8F; emu_call();
}

/**
 * Decompiled function f__07D4_00D5_0016_0C55()
 *
 * @name f__07D4_00D5_0016_0C55
 * @implements 07D4:00D5:0016:0C55 ()
 *
 * Called From: 07D4:00CD:002C:F427
 * Called From: 07D4:00CD:002A:1C8F
 */
void f__07D4_00D5_0016_0C55()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_00E1_000A_5C09(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00EB; emu_last_cs = 0x07D4; emu_last_ip = 0x00E6; emu_last_length = 0x0016; emu_last_crc = 0x0C55; emu_call(); return; }
	f__07D4_0174_0019_D3DB(); return;
}

/**
 * Decompiled function f__07D4_00E1_000A_5C09()
 *
 * @name f__07D4_00E1_000A_5C09
 * @implements 07D4:00E1:000A:5C09 ()
 *
 * Called From: 07D4:00D9:0016:0C55
 * Called From: 07D4:00D9:002C:F427
 * Called From: 07D4:00D9:002A:1C8F
 */
void f__07D4_00E1_000A_5C09()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x0);
	if (emu_flags.zf) { f__07D4_00EB_000E_5ED8(); return; }
	f__07D4_0174_0019_D3DB(); return;
}

/**
 * Decompiled function f__07D4_00EB_000E_5ED8()
 *
 * @name f__07D4_00EB_000E_5ED8
 * @implements 07D4:00EB:000E:5ED8 ()
 *
 * Called From: 07D4:00E6:000A:5C09
 */
void f__07D4_00EB_000E_5ED8()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xF);
	if (!emu_flags.zf) { f__07D4_00FA_0009_FDC6(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xA);
	if (!emu_flags.zf) { f__07D4_00FA_0009_FDC6(); return; }
	/* Unresolved jump */ emu_ip = 0x0174; emu_last_cs = 0x07D4; emu_last_ip = 0x00F7; emu_last_length = 0x000E; emu_last_crc = 0x5ED8; emu_call();
}

/**
 * Decompiled function f__07D4_00FA_0009_FDC6()
 *
 * @name f__07D4_00FA_0009_FDC6
 * @implements 07D4:00FA:0009:FDC6 ()
 *
 * Called From: 07D4:00EF:000E:5ED8
 * Called From: 07D4:00F5:000E:5ED8
 */
void f__07D4_00FA_0009_FDC6()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0103); emu_cs = 0x0F78; f__0F78_01B4_0016_23DD();
	f__07D4_0103_000F_5B83();
}

/**
 * Decompiled function f__07D4_0103_000F_5B83()
 *
 * @name f__07D4_0103_000F_5B83
 * @implements 07D4:0103:000F:5B83 ()
 *
 * Called From: 07D4:0103:0009:FDC6
 */
void f__07D4_0103_000F_5B83()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0112); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	f__07D4_0112_001E_949E();
}

/**
 * Decompiled function f__07D4_0112_001E_949E()
 *
 * @name f__07D4_0112_001E_949E
 * @implements 07D4:0112:001E:949E ()
 *
 * Called From: 07D4:0112:000F:5B83
 */
void f__07D4_0112_001E_949E()
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
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0130_0012_BCD1(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__07D4_0136_000C_1489(); return;
}

/**
 * Decompiled function f__07D4_0130_0012_BCD1()
 *
 * @name f__07D4_0130_0012_BCD1
 * @implements 07D4:0130:0012:BCD1 ()
 *
 * Called From: 07D4:012A:001E:949E
 */
void f__07D4_0130_0012_BCD1()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0142_0013_9BCD(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__07D4_0146_000F_62FC(); return;
}

/**
 * Decompiled function f__07D4_0136_000C_1489()
 *
 * @name f__07D4_0136_000C_1489
 * @implements 07D4:0136:000C:1489 ()
 *
 * Called From: 07D4:012E:001E:949E
 */
void f__07D4_0136_000C_1489()
{
	emu_addw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0142_0013_9BCD(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__07D4_0146_000F_62FC(); return;
}

/**
 * Decompiled function f__07D4_0142_0013_9BCD()
 *
 * @name f__07D4_0142_0013_9BCD
 * @implements 07D4:0142:0013:9BCD ()
 *
 * Called From: 07D4:013C:0012:BCD1
 * Called From: 07D4:013C:000C:1489
 */
void f__07D4_0142_0013_9BCD()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0155_0012_3299(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	f__07D4_0157_0010_9295(); return;
}

/**
 * Decompiled function f__07D4_0146_000F_62FC()
 *
 * @name f__07D4_0146_000F_62FC
 * @implements 07D4:0146:000F:62FC ()
 *
 * Called From: 07D4:0140:0012:BCD1
 * Called From: 07D4:0140:000C:1489
 */
void f__07D4_0146_000F_62FC()
{
	emu_push(emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0155_0012_3299(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	f__07D4_0157_0010_9295(); return;
}

/**
 * Decompiled function f__07D4_0155_0012_3299()
 *
 * @name f__07D4_0155_0012_3299
 * @implements 07D4:0155:0012:3299 ()
 *
 * Called From: 07D4:0149:000F:62FC
 * Called From: 07D4:0149:0013:9BCD
 */
void f__07D4_0155_0012_3299()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0167_0008_B465(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_shlw(&emu_ax.x, 0x1);
	f__07D4_0169_0006_86E5(); return;
}

/**
 * Decompiled function f__07D4_0157_0010_9295()
 *
 * @name f__07D4_0157_0010_9295
 * @implements 07D4:0157:0010:9295 ()
 *
 * Called From: 07D4:0153:000F:62FC
 * Called From: 07D4:0153:0013:9BCD
 */
void f__07D4_0157_0010_9295()
{
	emu_addw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0167_0008_B465(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_shlw(&emu_ax.x, 0x1);
	f__07D4_0169_0006_86E5(); return;
}

/**
 * Decompiled function f__07D4_0167_0008_B465()
 *
 * @name f__07D4_0167_0008_B465
 * @implements 07D4:0167:0008:B465 ()
 *
 * Called From: 07D4:015D:0012:3299
 * Called From: 07D4:015D:0010:9295
 */
void f__07D4_0167_0008_B465()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x016F); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	f__07D4_016F_0005_852E();
}

/**
 * Decompiled function f__07D4_0169_0006_86E5()
 *
 * @name f__07D4_0169_0006_86E5
 * @implements 07D4:0169:0006:86E5 ()
 *
 * Called From: 07D4:0165:0012:3299
 * Called From: 07D4:0165:0010:9295
 */
void f__07D4_0169_0006_86E5()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x016F); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	f__07D4_016F_0005_852E();
}

/**
 * Decompiled function f__07D4_016F_0005_852E()
 *
 * @name f__07D4_016F_0005_852E
 * @implements 07D4:016F:0005:852E ()
 *
 * Called From: 07D4:016F:0006:86E5
 * Called From: 07D4:016F:0008:B465
 */
void f__07D4_016F_0005_852E()
{
	emu_addws(&emu_sp, 0x10);
	f__07D4_017A_0013_BD94(); return;
}

/**
 * Decompiled function f__07D4_0174_0019_D3DB()
 *
 * @name f__07D4_0174_0019_D3DB
 * @implements 07D4:0174:0019:D3DB ()
 *
 * Called From: 07D4:00E8:0016:0C55
 * Called From: 07D4:00E8:000A:5C09
 */
void f__07D4_0174_0019_D3DB()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x1);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0180_000D_6793(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0186_0007_EFF5(); return; }
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__07D4_01F0_0015_AC7C(); return;
}

/**
 * Decompiled function f__07D4_017A_0013_BD94()
 *
 * @name f__07D4_017A_0013_BD94
 * @implements 07D4:017A:0013:BD94 ()
 *
 * Called From: 07D4:0172:0005:852E
 */
void f__07D4_017A_0013_BD94()
{
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0180_000D_6793(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0186_0007_EFF5(); return; }
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__07D4_01F0_0015_AC7C(); return;
}

/**
 * Decompiled function f__07D4_0180_000D_6793()
 *
 * @name f__07D4_0180_000D_6793
 * @implements 07D4:0180:000D:6793 ()
 *
 * Called From: 07D4:017C:0013:BD94
 * Called From: 07D4:017C:0019:D3DB
 */
void f__07D4_0180_000D_6793()
{
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0186_0007_EFF5(); return; }
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__07D4_01F0_0015_AC7C(); return;
}

/**
 * Decompiled function f__07D4_0186_0007_EFF5()
 *
 * @name f__07D4_0186_0007_EFF5
 * @implements 07D4:0186:0007:EFF5 ()
 *
 * Called From: 07D4:0182:0013:BD94
 * Called From: 07D4:0182:000D:6793
 * Called From: 07D4:0182:0019:D3DB
 */
void f__07D4_0186_0007_EFF5()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__07D4_01F0_0015_AC7C(); return;
}

/**
 * Decompiled function f__07D4_018D_0014_4BDF()
 *
 * @name f__07D4_018D_0014_4BDF
 * @implements 07D4:018D:0014:4BDF ()
 *
 * Called From: 07D4:01F4:0015:AC7C
 * Called From: 07D4:01F4:0024:9249
 * Called From: 07D4:01F4:0021:3AC0
 */
void f__07D4_018D_0014_4BDF()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movb(&emu_cx.l, 0x6);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	f__07D4_01E7_001E_B107(); return;
}

/**
 * Decompiled function f__07D4_01A1_0040_5DDA()
 *
 * @name f__07D4_01A1_0040_5DDA
 * @implements 07D4:01A1:0040:5DDA ()
 *
 * Called From: 07D4:01EB:001E:B107
 * Called From: 07D4:01EB:0024:9249
 * Called From: 07D4:01EB:0021:3AC0
 */
void f__07D4_01A1_0040_5DDA()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_01C6_001B_835B(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_01C6_001B_835B(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_01C6_001B_835B(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_01C6_001B_835B(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x0);
	if (emu_flags.zf) { f__07D4_01E4_0021_3AC0(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01E1); emu_cs = 0x34CD; emu_ip = 0x00B1; emu_last_cs = 0x07D4; emu_last_ip = 0x01DC; emu_last_length = 0x0040; emu_last_crc = 0x5DDA; emu_call();
	f__07D4_01E1_0024_9249();
}

/**
 * Decompiled function f__07D4_01C6_001B_835B()
 *
 * @name f__07D4_01C6_001B_835B
 * @implements 07D4:01C6:001B:835B ()
 *
 * Called From: 07D4:01A4:0040:5DDA
 * Called From: 07D4:01AE:0040:5DDA
 * Called From: 07D4:01B3:0040:5DDA
 * Called From: 07D4:01BD:0040:5DDA
 */
void f__07D4_01C6_001B_835B()
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
	f__07D4_01E1_0024_9249();
}

/**
 * Decompiled function f__07D4_01E1_0024_9249()
 *
 * @name f__07D4_01E1_0024_9249
 * @implements 07D4:01E1:0024:9249 ()
 *
 * Called From: 07D4:01E1:001B:835B
 */
void f__07D4_01E1_0024_9249()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xF);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_01A1_0040_5DDA(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xA);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_018D_0014_4BDF(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { f__07D4_024B_0047_8A56(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0205); emu_cs = 0x0F78; f__0F78_01B4_0016_23DD();
	f__07D4_0205_0008_9BD5();
}

/**
 * Decompiled function f__07D4_01E4_0021_3AC0()
 *
 * @name f__07D4_01E4_0021_3AC0
 * @implements 07D4:01E4:0021:3AC0 ()
 *
 * Called From: 07D4:01C4:0040:5DDA
 */
void f__07D4_01E4_0021_3AC0()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xF);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_01A1_0040_5DDA(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xA);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_018D_0014_4BDF(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x024B; emu_last_cs = 0x07D4; emu_last_ip = 0x01FA; emu_last_length = 0x0021; emu_last_crc = 0x3AC0; emu_call(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0205); emu_cs = 0x0F78; f__0F78_01B4_0016_23DD();
	f__07D4_0205_0008_9BD5();
}

/**
 * Decompiled function f__07D4_01E7_001E_B107()
 *
 * @name f__07D4_01E7_001E_B107
 * @implements 07D4:01E7:001E:B107 ()
 *
 * Called From: 07D4:019F:0014:4BDF
 */
void f__07D4_01E7_001E_B107()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xF);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_01A1_0040_5DDA(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xA);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x018D; emu_last_cs = 0x07D4; emu_last_ip = 0x01F4; emu_last_length = 0x001E; emu_last_crc = 0xB107; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x024B; emu_last_cs = 0x07D4; emu_last_ip = 0x01FA; emu_last_length = 0x001E; emu_last_crc = 0xB107; emu_call(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0205); emu_cs = 0x0F78; emu_ip = 0x01B4; emu_last_cs = 0x07D4; emu_last_ip = 0x0200; emu_last_length = 0x001E; emu_last_crc = 0xB107; emu_call();
	f__07D4_0205_0008_9BD5();
}

/**
 * Decompiled function f__07D4_01F0_0015_AC7C()
 *
 * @name f__07D4_01F0_0015_AC7C
 * @implements 07D4:01F0:0015:AC7C ()
 *
 * Called From: 07D4:018B:0007:EFF5
 * Called From: 07D4:018B:0013:BD94
 * Called From: 07D4:018B:000D:6793
 * Called From: 07D4:018B:0019:D3DB
 */
void f__07D4_01F0_0015_AC7C()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xA);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_018D_0014_4BDF(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x024B; emu_last_cs = 0x07D4; emu_last_ip = 0x01FA; emu_last_length = 0x0015; emu_last_crc = 0xAC7C; emu_call(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0205); emu_cs = 0x0F78; emu_ip = 0x01B4; emu_last_cs = 0x07D4; emu_last_ip = 0x0200; emu_last_length = 0x0015; emu_last_crc = 0xAC7C; emu_call();
	f__07D4_0205_0008_9BD5();
}

/**
 * Decompiled function f__07D4_01F6_000F_E9F6()
 *
 * @name f__07D4_01F6_000F_E9F6
 * @implements 07D4:01F6:000F:E9F6 ()
 *
 * Called From: 07D4:005A:000A:5C8D
 * Called From: 07D4:0066:000C:C981
 */
void f__07D4_01F6_000F_E9F6()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_flags.zf) { f__07D4_024B_0047_8A56(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0205); emu_cs = 0x0F78; emu_ip = 0x01B4; emu_last_cs = 0x07D4; emu_last_ip = 0x0200; emu_last_length = 0x000F; emu_last_crc = 0xE9F6; emu_call();
	f__07D4_0205_0008_9BD5();
}

/**
 * Decompiled function f__07D4_0205_0008_9BD5()
 *
 * @name f__07D4_0205_0008_9BD5
 * @implements 07D4:0205:0008:9BD5 ()
 *
 * Called From: 07D4:0205:0024:9249
 * Called From: 07D4:0205:0021:3AC0
 */
void f__07D4_0205_0008_9BD5()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	f__07D4_0245_004D_D411(); return;
}

/**
 * Decompiled function f__07D4_020D_0085_A17E()
 *
 * @name f__07D4_020D_0085_A17E
 * @implements 07D4:020D:0085:A17E ()
 *
 * Called From: 07D4:0249:004D:D411
 * Called From: 07D4:0249:0085:A17E
 */
void f__07D4_020D_0085_A17E()
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
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_020D_0085_A17E(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39FE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39FC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A00), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x0);
	if (emu_flags.zf) { f__07D4_02B4_000E_C5E6(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3348));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3346));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x02B4; emu_last_cs = 0x07D4; emu_last_ip = 0x0269; emu_last_length = 0x0085; emu_last_crc = 0xA17E; emu_call(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0273; emu_last_cs = 0x07D4; emu_last_ip = 0x026B; emu_last_length = 0x0085; emu_last_crc = 0xA17E; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { f__07D4_02B4_000E_C5E6(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x37BA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3348), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3346), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	f__07D4_02AE_0014_4168(); return;
}

/**
 * Decompiled function f__07D4_0245_004D_D411()
 *
 * @name f__07D4_0245_004D_D411
 * @implements 07D4:0245:004D:D411 ()
 *
 * Called From: 07D4:020B:0008:9BD5
 */
void f__07D4_0245_004D_D411()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xE);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_020D_0085_A17E(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39FE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39FC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A00), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02B4; emu_last_cs = 0x07D4; emu_last_ip = 0x025C; emu_last_length = 0x004D; emu_last_crc = 0xD411; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3348));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3346));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x02B4; emu_last_cs = 0x07D4; emu_last_ip = 0x0269; emu_last_length = 0x004D; emu_last_crc = 0xD411; emu_call(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0273; emu_last_cs = 0x07D4; emu_last_ip = 0x026B; emu_last_length = 0x004D; emu_last_crc = 0xD411; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x02B4; emu_last_cs = 0x07D4; emu_last_ip = 0x0271; emu_last_length = 0x004D; emu_last_crc = 0xD411; emu_call(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x37BA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3348), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3346), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	/* Unresolved jump */ emu_ip = 0x02AE; emu_last_cs = 0x07D4; emu_last_ip = 0x0290; emu_last_length = 0x004D; emu_last_crc = 0xD411; emu_call();
}

/**
 * Decompiled function f__07D4_024B_0047_8A56()
 *
 * @name f__07D4_024B_0047_8A56
 * @implements 07D4:024B:0047:8A56 ()
 *
 * Called From: 07D4:01FA:000F:E9F6
 * Called From: 07D4:01FA:0024:9249
 */
void f__07D4_024B_0047_8A56()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39FE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39FC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A00), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x0);
	if (emu_flags.zf) { f__07D4_02B4_000E_C5E6(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3348));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3346));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x02B4; emu_last_cs = 0x07D4; emu_last_ip = 0x0269; emu_last_length = 0x0047; emu_last_crc = 0x8A56; emu_call(); return; }
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_0273_001F_BB63(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	if (!emu_flags.cf) { f__07D4_02B4_000E_C5E6(); return; }
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x37BA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3348), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3346), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	f__07D4_02AE_0014_4168(); return;
}

/**
 * Decompiled function f__07D4_0273_001F_BB63()
 *
 * @name f__07D4_0273_001F_BB63
 * @implements 07D4:0273:001F:BB63 ()
 *
 * Called From: 07D4:026B:0047:8A56
 */
void f__07D4_0273_001F_BB63()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x37BA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76AE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76AC));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3348), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3346), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	f__07D4_02AE_0014_4168(); return;
}

/**
 * Decompiled function f__07D4_0292_0016_367F()
 *
 * @name f__07D4_0292_0016_367F
 * @implements 07D4:0292:0016:367F ()
 *
 * Called From: 07D4:02B2:0014:4168
 * Called From: 07D4:02B2:001A:7955
 */
void f__07D4_0292_0016_367F()
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
	f__07D4_02A8_001A_7955();
}

/**
 * Decompiled function f__07D4_02A8_001A_7955()
 *
 * @name f__07D4_02A8_001A_7955
 * @implements 07D4:02A8:001A:7955 ()
 *
 * Called From: 07D4:02A8:0016:367F
 */
void f__07D4_02A8_001A_7955()
{
	emu_addws(&emu_sp, 0x6);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xE);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_0292_0016_367F(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A12));
	emu_push(emu_cs);
	emu_push(0x02C2); f__07D4_034D_001F_FF64();
	f__07D4_02C2_0012_6EC2();
}

/**
 * Decompiled function f__07D4_02AE_0014_4168()
 *
 * @name f__07D4_02AE_0014_4168
 * @implements 07D4:02AE:0014:4168 ()
 *
 * Called From: 07D4:0290:001F:BB63
 * Called From: 07D4:0290:0047:8A56
 * Called From: 07D4:0290:0085:A17E
 */
void f__07D4_02AE_0014_4168()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xE);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_0292_0016_367F(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A12));
	emu_push(emu_cs);
	/* Unresolved call */ emu_push(0x02C2); emu_ip = 0x034D; emu_last_cs = 0x07D4; emu_last_ip = 0x02BF; emu_last_length = 0x0014; emu_last_crc = 0x4168; emu_call();
	f__07D4_02C2_0012_6EC2();
}

/**
 * Decompiled function f__07D4_02B4_000E_C5E6()
 *
 * @name f__07D4_02B4_000E_C5E6
 * @implements 07D4:02B4:000E:C5E6 ()
 *
 * Called From: 07D4:025C:0047:8A56
 * Called From: 07D4:025C:0085:A17E
 * Called From: 07D4:0271:0047:8A56
 * Called From: 07D4:0271:0085:A17E
 */
void f__07D4_02B4_000E_C5E6()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A12));
	emu_push(emu_cs);
	emu_push(0x02C2); f__07D4_034D_001F_FF64();
	f__07D4_02C2_0012_6EC2();
}

/**
 * Decompiled function f__07D4_02C2_0012_6EC2()
 *
 * @name f__07D4_02C2_0012_6EC2
 * @implements 07D4:02C2:0012:6EC2 ()
 *
 * Called From: 07D4:02C2:000E:C5E6
 * Called From: 07D4:02C2:001A:7955
 */
void f__07D4_02C2_0012_6EC2()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A12), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x02D4); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__07D4_02D4_000A_0B5A();
}

/**
 * Decompiled function f__07D4_02D4_000A_0B5A()
 *
 * @name f__07D4_02D4_000A_0B5A
 * @implements 07D4:02D4:000A:0B5A ()
 *
 * Called From: 07D4:02D4:0012:6EC2
 */
void f__07D4_02D4_000A_0B5A()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A00));
	emu_push(emu_cs); emu_push(0x02DE); emu_cs = 0x0F78; f__0F78_01B4_0016_23DD();
	f__07D4_02DE_000D_0FE3();
}

/**
 * Decompiled function f__07D4_02DE_000D_0FE3()
 *
 * @name f__07D4_02DE_000D_0FE3
 * @implements 07D4:02DE:000D:0FE3 ()
 *
 * Called From: 07D4:02DE:000A:0B5A
 */
void f__07D4_02DE_000D_0FE3()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x02EB); emu_cs = 0x0F78; f__0F78_0008_002C_AB63();
	f__07D4_02EB_0007_6375();
}

/**
 * Decompiled function f__07D4_02EB_0007_6375()
 *
 * @name f__07D4_02EB_0007_6375
 * @implements 07D4:02EB:0007:6375 ()
 *
 * Called From: 07D4:02EB:000D:0FE3
 */
void f__07D4_02EB_0007_6375()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x02F2); emu_cs = 0x2642; f__2642_0069_0008_D517();
	f__07D4_02F2_0006_F7CE();
}

/**
 * Decompiled function f__07D4_02F2_0006_F7CE()
 *
 * @name f__07D4_02F2_0006_F7CE
 * @implements 07D4:02F2:0006:F7CE ()
 *
 * Called From: 07D4:0024:0027:FA61
 * Called From: 07D4:02F2:0007:6375
 */
void f__07D4_02F2_0006_F7CE()
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
 * Decompiled function f__07D4_02F8_0055_0679()
 *
 * @name f__07D4_02F8_0055_0679
 * @implements 07D4:02F8:0055:0679 ()
 *
 * Called From: 151A:06AA:0009:9B66
 * Called From: B4CD:0477:0006:DF2B
 * Called From: B4CD:0477:0028:B587
 * Called From: B4CD:04AC:0009:86D1
 * Called From: B4CD:12FF:0017:38A6
 */
void f__07D4_02F8_0055_0679()
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
	if (emu_flags.zf) { f__07D4_031D_0030_7365(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_incw(&emu_ax.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x034B; emu_last_cs = 0x07D4; emu_last_ip = 0x031B; emu_last_length = 0x0055; emu_last_crc = 0x0679; emu_call(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_bx.x, emu_cx.l);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_andb(&emu_cx.l, 0x7);
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx.x, -0x6E1B), emu_ax.l);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x3344), 0xC8);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_034B_0002_2597(); return; }
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
 * Decompiled function f__07D4_031D_0030_7365()
 *
 * @name f__07D4_031D_0030_7365
 * @implements 07D4:031D:0030:7365 ()
 *
 * Called From: 07D4:0315:0055:0679
 */
void f__07D4_031D_0030_7365()
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
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_034B_0002_2597(); return; }
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
 * Decompiled function f__07D4_034B_0002_2597()
 *
 * @name f__07D4_034B_0002_2597
 * @implements 07D4:034B:0002:2597 ()
 *
 * Called From: 07D4:0338:0030:7365
 * Called From: 07D4:0338:0055:0679
 */
void f__07D4_034B_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__07D4_034D_001F_FF64()
 *
 * @name f__07D4_034D_001F_FF64
 * @implements 07D4:034D:001F:FF64 ()
 *
 * Called From: 07D4:02BF:000E:C5E6
 * Called From: 07D4:02BF:001A:7955
 */
void f__07D4_034D_001F_FF64()
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
	emu_push(emu_cs); emu_push(0x036C); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__07D4_036C_0014_D20F();
}

/**
 * Decompiled function f__07D4_036C_0014_D20F()
 *
 * @name f__07D4_036C_0014_D20F
 * @implements 07D4:036C:0014:D20F ()
 *
 * Called From: 07D4:036C:001F:FF64
 */
void f__07D4_036C_0014_D20F()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x14);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x56);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0380); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__07D4_0380_000C_DE03();
}

/**
 * Decompiled function f__07D4_0380_000C_DE03()
 *
 * @name f__07D4_0380_000C_DE03
 * @implements 07D4:0380:000C:DE03 ()
 *
 * Called From: 07D4:0380:0014:D20F
 */
void f__07D4_0380_000C_DE03()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x038C); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__07D4_038C_000D_FEBC();
}

/**
 * Decompiled function f__07D4_038C_000D_FEBC()
 *
 * @name f__07D4_038C_000D_FEBC
 * @implements 07D4:038C:000D:FEBC ()
 *
 * Called From: 07D4:038C:000C:DE03
 */
void f__07D4_038C_000D_FEBC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0399); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	f__07D4_0399_001A_BD55();
}

/**
 * Decompiled function f__07D4_0399_001A_BD55()
 *
 * @name f__07D4_0399_001A_BD55
 * @implements 07D4:0399:001A:BD55 ()
 *
 * Called From: 07D4:0399:000D:FEBC
 */
void f__07D4_0399_001A_BD55()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x39E2), 0x0);
	if (!emu_flags.zf) { f__07D4_03B3_0008_6BAE(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__07D4_03B3_0008_6BAE(); return; }
	f__07D4_05CF_0002_C83A(); return;
}

/**
 * Decompiled function f__07D4_03B3_0008_6BAE()
 *
 * @name f__07D4_03B3_0008_6BAE
 * @implements 07D4:03B3:0008:6BAE ()
 *
 * Called From: 07D4:03A8:001A:BD55
 * Called From: 07D4:03AE:001A:BD55
 */
void f__07D4_03B3_0008_6BAE()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	f__07D4_05C0_0009_07CD(); return;
}

/**
 * Decompiled function f__07D4_03BB_0015_EAC6()
 *
 * @name f__07D4_03BB_0015_EAC6
 * @implements 07D4:03BB:0015:EAC6 ()
 *
 * Called From: 07D4:05C6:0009:07CD
 * Called From: 07D4:05C6:000C:F735
 */
void f__07D4_03BB_0015_EAC6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x28);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__07D4_05A5_000B_BF85(); return;
}

/**
 * Decompiled function f__07D4_03D0_00A9_21D8()
 *
 * @name f__07D4_03D0_00A9_21D8
 * @implements 07D4:03D0:00A9:21D8 ()
 *
 * Called From: 07D4:05BA:000D:659A
 * Called From: 07D4:05BA:000B:F19B
 */
void f__07D4_03D0_00A9_21D8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x6);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x39FE));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xF);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0454_0025_993D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__07D4_0454_0025_993D(); return; }
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
	if (emu_flags.zf) { f__07D4_0454_0025_993D(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x56);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_042D_004C_FB93(); return; }
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
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_044F_002A_46DC(); return; }
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
	if (!emu_flags.zf) { f__07D4_0479_00CB_2318(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0479; emu_last_cs = 0x07D4; emu_last_ip = 0x0474; emu_last_length = 0x00A9; emu_last_crc = 0x21D8; emu_call(); return; }
	f__07D4_05A2_000E_839B(); return;
}

/**
 * Decompiled function f__07D4_042D_004C_FB93()
 *
 * @name f__07D4_042D_004C_FB93
 * @implements 07D4:042D:004C:FB93 ()
 *
 * Called From: 07D4:041B:00A9:21D8
 */
void f__07D4_042D_004C_FB93()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x42);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x044F; emu_last_cs = 0x07D4; emu_last_ip = 0x043D; emu_last_length = 0x004C; emu_last_crc = 0xFB93; emu_call(); return; }
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
	if (!emu_flags.zf) { f__07D4_0479_00CB_2318(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0479; emu_last_cs = 0x07D4; emu_last_ip = 0x0474; emu_last_length = 0x004C; emu_last_crc = 0xFB93; emu_call(); return; }
	f__07D4_05A2_000E_839B(); return;
}

/**
 * Decompiled function f__07D4_044F_002A_46DC()
 *
 * @name f__07D4_044F_002A_46DC
 * @implements 07D4:044F:002A:46DC ()
 *
 * Called From: 07D4:043D:00A9:21D8
 */
void f__07D4_044F_002A_46DC()
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
	if (!emu_flags.zf) { f__07D4_0479_00CB_2318(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0479; emu_last_cs = 0x07D4; emu_last_ip = 0x0474; emu_last_length = 0x002A; emu_last_crc = 0x46DC; emu_call(); return; }
	f__07D4_05A2_000E_839B(); return;
}

/**
 * Decompiled function f__07D4_0454_0025_993D()
 *
 * @name f__07D4_0454_0025_993D
 * @implements 07D4:0454:0025:993D ()
 *
 * Called From: 07D4:03E7:00A9:21D8
 * Called From: 07D4:03ED:00A9:21D8
 * Called From: 07D4:0409:00A9:21D8
 */
void f__07D4_0454_0025_993D()
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
	if (!emu_flags.zf) { f__07D4_0479_00CB_2318(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__07D4_0479_00CB_2318(); return; }
	f__07D4_05A2_000E_839B(); return;
}

/**
 * Decompiled function f__07D4_0479_00CB_2318()
 *
 * @name f__07D4_0479_00CB_2318
 * @implements 07D4:0479:00CB:2318 ()
 *
 * Called From: 07D4:046E:0025:993D
 * Called From: 07D4:046E:002A:46DC
 * Called From: 07D4:046E:004C:FB93
 * Called From: 07D4:046E:00A9:21D8
 * Called From: 07D4:0474:0025:993D
 */
void f__07D4_0479_00CB_2318()
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
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_04DD_0067_E7F1(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x1);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x56);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_04BB_0089_9A1B(); return; }
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
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_04DD_0067_E7F1(); return; }
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
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0549; emu_last_cs = 0x07D4; emu_last_ip = 0x051A; emu_last_length = 0x00CB; emu_last_crc = 0x2318; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x39F2), emu_si);
	if (!emu_flags.zf) { f__07D4_0549_0031_9C05(); return; }
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

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0544);
	switch ((emu_cs << 16) + emu_ip) {
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x053F; emu_last_length = 0x00CB; emu_last_crc = 0x2318;
			emu_call();
			return;
	}
	f__07D4_0544_0005_A9EE();
}

/**
 * Decompiled function f__07D4_04BB_0089_9A1B()
 *
 * @name f__07D4_04BB_0089_9A1B
 * @implements 07D4:04BB:0089:9A1B ()
 *
 * Called From: 07D4:04A9:00CB:2318
 */
void f__07D4_04BB_0089_9A1B()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x42);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_04DD_0067_E7F1(); return; }
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
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0549; emu_last_cs = 0x07D4; emu_last_ip = 0x051A; emu_last_length = 0x0089; emu_last_crc = 0x9A1B; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x39F2), emu_si);
	if (!emu_flags.zf) { f__07D4_0549_0031_9C05(); return; }
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

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0544);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x053F; emu_last_length = 0x0089; emu_last_crc = 0x9A1B;
			emu_call();
			return;
	}
	f__07D4_0544_0005_A9EE();
}

/**
 * Decompiled function f__07D4_04DD_0067_E7F1()
 *
 * @name f__07D4_04DD_0067_E7F1
 * @implements 07D4:04DD:0067:E7F1 ()
 *
 * Called From: 07D4:0492:00CB:2318
 * Called From: 07D4:04CB:00CB:2318
 * Called From: 07D4:04CB:0089:9A1B
 */
void f__07D4_04DD_0067_E7F1()
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
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0549; emu_last_cs = 0x07D4; emu_last_ip = 0x051A; emu_last_length = 0x0067; emu_last_crc = 0xE7F1; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x39F2), emu_si);
	if (!emu_flags.zf) { f__07D4_0549_0031_9C05(); return; }
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

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x0544);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x053F; emu_last_length = 0x0067; emu_last_crc = 0xE7F1;
			emu_call();
			return;
	}
	f__07D4_0544_0005_A9EE();
}

/**
 * Decompiled function f__07D4_0544_0005_A9EE()
 *
 * @name f__07D4_0544_0005_A9EE
 * @implements 07D4:0544:0005:A9EE ()
 *
 * Called From: 07D4:0544:0089:9A1B
 * Called From: 07D4:0544:0067:E7F1
 */
void f__07D4_0544_0005_A9EE()
{
	emu_addws(&emu_sp, 0xA);
	f__07D4_05A2_000E_839B(); return;
}

/**
 * Decompiled function f__07D4_0549_0031_9C05()
 *
 * @name f__07D4_0549_0031_9C05
 * @implements 07D4:0549:0031:9C05 ()
 *
 * Called From: 07D4:0520:0067:E7F1
 * Called From: 07D4:0520:00CB:2318
 * Called From: 07D4:0520:0089:9A1B
 */
void f__07D4_0549_0031_9C05()
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

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x665C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x665E);
	emu_push(0x057A);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60B60: f__22A6_0B60_006A_2F61(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x0575; emu_last_length = 0x0031; emu_last_crc = 0x9C05;
			emu_call();
			return;
	}
	f__07D4_057A_0025_B028();
}

/**
 * Decompiled function f__07D4_057A_0025_B028()
 *
 * @name f__07D4_057A_0025_B028
 * @implements 07D4:057A:0025:B028 ()
 *
 * Called From: 07D4:057A:0031:9C05
 */
void f__07D4_057A_0025_B028()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__07D4_05A2_000E_839B(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05A2; emu_last_cs = 0x07D4; emu_last_ip = 0x0586; emu_last_length = 0x0025; emu_last_crc = 0xB028; emu_call(); return; }
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x3);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x665C);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x665E);
	emu_push(0x059F);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60B60: f__22A6_0B60_006A_2F61(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x059A; emu_last_length = 0x0025; emu_last_crc = 0xB028;
			emu_call();
			return;
	}
	f__07D4_059F_0011_D2DF();
}

/**
 * Decompiled function f__07D4_059F_0011_D2DF()
 *
 * @name f__07D4_059F_0011_D2DF
 * @implements 07D4:059F:0011:D2DF ()
 *
 * Called From: 07D4:059F:0025:B028
 */
void f__07D4_059F_0011_D2DF()
{
	emu_addws(&emu_sp, 0x8);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__07D4_05B0_000D_659A(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__07D4_05B2_000B_F19B(); return;
}

/**
 * Decompiled function f__07D4_05A2_000E_839B()
 *
 * @name f__07D4_05A2_000E_839B
 * @implements 07D4:05A2:000E:839B ()
 *
 * Called From: 07D4:0476:0025:993D
 * Called From: 07D4:0476:00A9:21D8
 * Called From: 07D4:0476:002A:46DC
 * Called From: 07D4:0476:004C:FB93
 * Called From: 07D4:0547:0005:A9EE
 * Called From: 07D4:057F:0025:B028
 */
void f__07D4_05A2_000E_839B()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__07D4_05B0_000D_659A(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__07D4_05B2_000B_F19B(); return;
}

/**
 * Decompiled function f__07D4_05A5_000B_BF85()
 *
 * @name f__07D4_05A5_000B_BF85
 * @implements 07D4:05A5:000B:BF85 ()
 *
 * Called From: 07D4:03CD:0015:EAC6
 */
void f__07D4_05A5_000B_BF85()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__07D4_05B0_000D_659A(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__07D4_05B2_000B_F19B(); return;
}

/**
 * Decompiled function f__07D4_05B0_000D_659A()
 *
 * @name f__07D4_05B0_000D_659A
 * @implements 07D4:05B0:000D:659A ()
 *
 * Called From: 07D4:05A9:000B:BF85
 * Called From: 07D4:05A9:000E:839B
 * Called From: 07D4:05A9:0011:D2DF
 */
void f__07D4_05B0_000D_659A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_addw(&emu_ax.x, 0xF);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_05BD_000C_F735(); return; }
	f__07D4_03D0_00A9_21D8(); return;
}

/**
 * Decompiled function f__07D4_05B2_000B_F19B()
 *
 * @name f__07D4_05B2_000B_F19B
 * @implements 07D4:05B2:000B:F19B ()
 *
 * Called From: 07D4:05AE:000B:BF85
 * Called From: 07D4:05AE:000E:839B
 * Called From: 07D4:05AE:0011:D2DF
 */
void f__07D4_05B2_000B_F19B()
{
	emu_addw(&emu_ax.x, 0xF);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_05BD_000C_F735(); return; }
	f__07D4_03D0_00A9_21D8(); return;
}

/**
 * Decompiled function f__07D4_05BD_000C_F735()
 *
 * @name f__07D4_05BD_000C_F735
 * @implements 07D4:05BD:000C:F735 ()
 *
 * Called From: 07D4:05B8:000D:659A
 * Called From: 07D4:05B8:000B:F19B
 */
void f__07D4_05BD_000C_F735()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xA);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_05C9_0008_86FD(); return; }
	f__07D4_03BB_0015_EAC6(); return;
}

/**
 * Decompiled function f__07D4_05C0_0009_07CD()
 *
 * @name f__07D4_05C0_0009_07CD
 * @implements 07D4:05C0:0009:07CD ()
 *
 * Called From: 07D4:03B8:0008:6BAE
 */
void f__07D4_05C0_0009_07CD()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xA);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x05C9; emu_last_cs = 0x07D4; emu_last_ip = 0x05C4; emu_last_length = 0x0009; emu_last_crc = 0x07CD; emu_call(); return; }
	f__07D4_03BB_0015_EAC6(); return;
}

/**
 * Decompiled function f__07D4_05C9_0008_86FD()
 *
 * @name f__07D4_05C9_0008_86FD
 * @implements 07D4:05C9:0008:86FD ()
 *
 * Called From: 07D4:05C4:000C:F735
 */
void f__07D4_05C9_0008_86FD()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39E2), 0x0);
	f__07D4_05E1_0012_E89D(); return;
}

/**
 * Decompiled function f__07D4_05CF_0002_C83A()
 *
 * @name f__07D4_05CF_0002_C83A
 * @implements 07D4:05CF:0002:C83A ()
 *
 * Called From: 07D4:03B0:001A:BD55
 */
void f__07D4_05CF_0002_C83A()
{
	f__07D4_05E1_0012_E89D(); return;
}

/**
 * Decompiled function f__07D4_05E1_0012_E89D()
 *
 * @name f__07D4_05E1_0012_E89D
 * @implements 07D4:05E1:0012:E89D ()
 *
 * Called From: 07D4:05CF:0008:86FD
 * Called From: 07D4:05CF:0002:C83A
 */
void f__07D4_05E1_0012_E89D()
{
	emu_movw(&emu_ax.x, 0x19);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05F3); emu_cs = 0x0FE4; f__0FE4_0243_003A_D5F2();
	f__07D4_05F3_0006_97B3();
}

/**
 * Decompiled function f__07D4_05F3_0006_97B3()
 *
 * @name f__07D4_05F3_0006_97B3
 * @implements 07D4:05F3:0006:97B3 ()
 *
 * Called From: 07D4:05F3:0012:E89D
 */
void f__07D4_05F3_0006_97B3()
{
	emu_addws(&emu_sp, 0x8);
	f__07D4_07BD_0011_D0EA(); return;
}

/**
 * Decompiled function f__07D4_05F9_0014_253E()
 *
 * @name f__07D4_05F9_0014_253E
 * @implements 07D4:05F9:0014:253E ()
 *
 * Called From: 07D4:07CB:0011:D0EA
 */
void f__07D4_05F9_0014_253E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1000);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x060D; emu_last_cs = 0x07D4; emu_last_ip = 0x0602; emu_last_length = 0x0014; emu_last_crc = 0x253E; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x060D; emu_last_cs = 0x07D4; emu_last_ip = 0x0608; emu_last_length = 0x0014; emu_last_crc = 0x253E; emu_call(); return; }
	f__07D4_07B1_000A_B122(); return;
}

/**
 * Decompiled function f__07D4_07B1_000A_B122()
 *
 * @name f__07D4_07B1_000A_B122
 * @implements 07D4:07B1:000A:B122 ()
 *
 * Called From: 07D4:060A:0014:253E
 */
void f__07D4_07B1_000A_B122()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07BB); emu_cs = 0x0FE4; f__0FE4_0283_0038_4950();
	f__07D4_07BB_0013_9BDC();
}

/**
 * Decompiled function f__07D4_07BB_0013_9BDC()
 *
 * @name f__07D4_07BB_0013_9BDC
 * @implements 07D4:07BB:0013:9BDC ()
 *
 * Called From: 07D4:07BB:000A:B122
 */
void f__07D4_07BB_0013_9BDC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_flags.zf) { f__07D4_07CE_0012_F55E(); return; }
	/* Unresolved jump */ emu_ip = 0x05F9; emu_last_cs = 0x07D4; emu_last_ip = 0x07CB; emu_last_length = 0x0013; emu_last_crc = 0x9BDC; emu_call();
}

/**
 * Decompiled function f__07D4_07BD_0011_D0EA()
 *
 * @name f__07D4_07BD_0011_D0EA
 * @implements 07D4:07BD:0011:D0EA ()
 *
 * Called From: 07D4:05F6:0006:97B3
 */
void f__07D4_07BD_0011_D0EA()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_flags.zf) { f__07D4_07CE_0012_F55E(); return; }
	f__07D4_05F9_0014_253E(); return;
}

/**
 * Decompiled function f__07D4_07CE_0012_F55E()
 *
 * @name f__07D4_07CE_0012_F55E
 * @implements 07D4:07CE:0012:F55E ()
 *
 * Called From: 07D4:07C9:0011:D0EA
 * Called From: 07D4:07C9:0013:9BDC
 */
void f__07D4_07CE_0012_F55E()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39E4), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__07D4_07E0_0010_9EB6(); return; }
	f__07D4_08FD_0016_5665(); return;
}

/**
 * Decompiled function f__07D4_07E0_0010_9EB6()
 *
 * @name f__07D4_07E0_0010_9EB6
 * @implements 07D4:07E0:0010:9EB6 ()
 *
 * Called From: 07D4:07DB:0012:F55E
 */
void f__07D4_07E0_0010_9EB6()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A08), 0x0);
	if (!emu_flags.zf) { f__07D4_07F0_0009_6097(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { f__07D4_07F0_0009_6097(); return; }
	f__07D4_08FD_0016_5665(); return;
}

/**
 * Decompiled function f__07D4_07F0_0009_6097()
 *
 * @name f__07D4_07F0_0009_6097
 * @implements 07D4:07F0:0009:6097 ()
 *
 * Called From: 07D4:07E5:0010:9EB6
 * Called From: 07D4:07EB:0010:9EB6
 */
void f__07D4_07F0_0009_6097()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A00));
	emu_push(emu_cs); emu_push(0x07F9); emu_cs = 0x34CD; ovl__34CD(30);
	f__07D4_07F9_0016_2EE4();
}

/**
 * Decompiled function f__07D4_07F9_0016_2EE4()
 *
 * @name f__07D4_07F9_0016_2EE4
 * @implements 07D4:07F9:0016:2EE4 ()
 *
 * Called From: 07D4:07F9:0009:6097
 */
void f__07D4_07F9_0016_2EE4()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__07D4_080F_0009_BD42(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x2);
	if (emu_flags.zf) { f__07D4_080F_0009_BD42(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x080F; emu_last_cs = 0x07D4; emu_last_ip = 0x080A; emu_last_length = 0x0016; emu_last_crc = 0x2EE4; emu_call(); return; }
	f__07D4_08FD_0016_5665(); return;
}

/**
 * Decompiled function f__07D4_080F_0009_BD42()
 *
 * @name f__07D4_080F_0009_BD42
 * @implements 07D4:080F:0009:BD42 ()
 *
 * Called From: 07D4:07FC:0016:2EE4
 * Called From: 07D4:0803:0016:2EE4
 */
void f__07D4_080F_0009_BD42()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A00));
	emu_push(emu_cs); emu_push(0x0818); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	f__07D4_0818_000B_84B1();
}

/**
 * Decompiled function f__07D4_0818_000B_84B1()
 *
 * @name f__07D4_0818_000B_84B1
 * @implements 07D4:0818:000B:84B1 ()
 *
 * Called From: 07D4:0818:0009:BD42
 */
void f__07D4_0818_000B_84B1()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x0823); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	f__07D4_0823_0013_FB83();
}

/**
 * Decompiled function f__07D4_0823_0013_FB83()
 *
 * @name f__07D4_0823_0013_FB83
 * @implements 07D4:0823:0013:FB83 ()
 *
 * Called From: 07D4:0823:000B:84B1
 */
void f__07D4_0823_0013_FB83()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_movw(&emu_si, emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A00));
	emu_push(emu_cs); emu_push(0x0836); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	f__07D4_0836_000B_F4B0();
}

/**
 * Decompiled function f__07D4_0836_000B_F4B0()
 *
 * @name f__07D4_0836_000B_F4B0
 * @implements 07D4:0836:000B:F4B0 ()
 *
 * Called From: 07D4:0836:0013:FB83
 */
void f__07D4_0836_000B_F4B0()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x0841); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	f__07D4_0841_0044_AA4E();
}

/**
 * Decompiled function f__07D4_0841_0044_AA4E()
 *
 * @name f__07D4_0841_0044_AA4E
 * @implements 07D4:0841:0044:AA4E ()
 *
 * Called From: 07D4:0841:000B:F4B0
 */
void f__07D4_0841_0044_AA4E()
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

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66C4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66C6);
	emu_push(0x0885);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A610DD: f__22A6_10DD_0023_B468(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x0880; emu_last_length = 0x0044; emu_last_crc = 0xAA4E;
			emu_call();
			return;
	}
	f__07D4_0885_0014_5D4C();
}

/**
 * Decompiled function f__07D4_0885_0014_5D4C()
 *
 * @name f__07D4_0885_0014_5D4C
 * @implements 07D4:0885:0014:5D4C ()
 *
 * Called From: 07D4:0885:0044:AA4E
 */
void f__07D4_0885_0014_5D4C()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0899); emu_cs = 0x251B; f__251B_0000_001E_7202();
	f__07D4_0899_0027_372D();
}

/**
 * Decompiled function f__07D4_0899_0027_372D()
 *
 * @name f__07D4_0899_0027_372D
 * @implements 07D4:0899:0027:372D ()
 *
 * Called From: 07D4:0899:0014:5D4C
 */
void f__07D4_0899_0027_372D()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38EC), 0x0);
	if (!emu_flags.zf) { f__07D4_08DC_0018_1A52(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x2);
	if (!emu_flags.zf) { f__07D4_08DC_0018_1A52(); return; }
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6656);
	emu_push(0x08C0);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x08BB; emu_last_length = 0x0027; emu_last_crc = 0x372D;
			emu_call();
			return;
	}
	f__07D4_08C0_0019_9BB9();
}

/**
 * Decompiled function f__07D4_08C0_0019_9BB9()
 *
 * @name f__07D4_08C0_0019_9BB9
 * @implements 07D4:08C0:0019:9BB9 ()
 *
 * Called From: 07D4:08C0:0027:372D
 */
void f__07D4_08C0_0019_9BB9()
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

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6654);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x6656);
	emu_push(0x08D9);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A6094D: f__22A6_094D_000C_EC7D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x08D4; emu_last_length = 0x0019; emu_last_crc = 0x9BB9;
			emu_call();
			return;
	}
	f__07D4_08D9_001B_4B47();
}

/**
 * Decompiled function f__07D4_08D9_001B_4B47()
 *
 * @name f__07D4_08D9_001B_4B47
 * @implements 07D4:08D9:001B:4B47 ()
 *
 * Called From: 07D4:08D9:0019:9BB9
 */
void f__07D4_08D9_001B_4B47()
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

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66C4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66C6);
	emu_push(0x08F4);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A610DD: f__22A6_10DD_0023_B468(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x08EF; emu_last_length = 0x001B; emu_last_crc = 0x4B47;
			emu_call();
			return;
	}
	f__07D4_08F4_001F_DD19();
}

/**
 * Decompiled function f__07D4_08DC_0018_1A52()
 *
 * @name f__07D4_08DC_0018_1A52
 * @implements 07D4:08DC:0018:1A52 ()
 *
 * Called From: 07D4:08A1:0027:372D
 * Called From: 07D4:08A8:0027:372D
 */
void f__07D4_08DC_0018_1A52()
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

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x66C4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x66C6);
	emu_push(0x08F4);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A610DD: f__22A6_10DD_0023_B468(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x08EF; emu_last_length = 0x0018; emu_last_crc = 0x1A52;
			emu_call();
			return;
	}
	f__07D4_08F4_001F_DD19();
}

/**
 * Decompiled function f__07D4_08F4_001F_DD19()
 *
 * @name f__07D4_08F4_001F_DD19
 * @implements 07D4:08F4:001F:DD19 ()
 *
 * Called From: 07D4:08F4:0018:1A52
 * Called From: 07D4:08F4:001B:4B47
 */
void f__07D4_08F4_001F_DD19()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A08), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x39E6), 0x0);
	if (!emu_flags.zf) { f__07D4_0913_0012_9B62(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__07D4_0913_0012_9B62(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (!emu_flags.zf) { f__07D4_0913_0012_9B62(); return; }
	f__07D4_0E64_0008_1222(); return;
}

/**
 * Decompiled function f__07D4_08FD_0016_5665()
 *
 * @name f__07D4_08FD_0016_5665
 * @implements 07D4:08FD:0016:5665 ()
 *
 * Called From: 07D4:07DD:0012:F55E
 * Called From: 07D4:07ED:0010:9EB6
 * Called From: 07D4:080C:0016:2EE4
 */
void f__07D4_08FD_0016_5665()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x39E6), 0x0);
	if (!emu_flags.zf) { f__07D4_0913_0012_9B62(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__07D4_0913_0012_9B62(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (!emu_flags.zf) { f__07D4_0913_0012_9B62(); return; }
	f__07D4_0E64_0008_1222(); return;
}

/**
 * Decompiled function f__07D4_0913_0012_9B62()
 *
 * @name f__07D4_0913_0012_9B62
 * @implements 07D4:0913:0012:9B62 ()
 *
 * Called From: 07D4:0902:0016:5665
 * Called From: 07D4:0902:001F:DD19
 * Called From: 07D4:0908:001F:DD19
 * Called From: 07D4:0908:0016:5665
 * Called From: 07D4:090E:001F:DD19
 * Called From: 07D4:090E:0016:5665
 */
void f__07D4_0913_0012_9B62()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0925); emu_cs = 0x0FE4; f__0FE4_0243_003A_D5F2();
	f__07D4_0925_0006_158A();
}

/**
 * Decompiled function f__07D4_0925_0006_158A()
 *
 * @name f__07D4_0925_0006_158A
 * @implements 07D4:0925:0006:158A ()
 *
 * Called From: 07D4:0925:0012:9B62
 */
void f__07D4_0925_0006_158A()
{
	emu_addws(&emu_sp, 0x8);
	f__07D4_0E4D_0011_52D3(); return;
}

/**
 * Decompiled function f__07D4_092B_000C_84EC()
 *
 * @name f__07D4_092B_000C_84EC
 * @implements 07D4:092B:000C:84EC ()
 *
 * Called From: 07D4:0E5B:0011:52D3
 * Called From: 07D4:0E5B:0013:19E5
 */
void f__07D4_092B_000C_84EC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x14);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0937_000C_4048(); return; }
	f__07D4_0E41_000A_B122(); return;
}

/**
 * Decompiled function f__07D4_0937_000C_4048()
 *
 * @name f__07D4_0937_000C_4048
 * @implements 07D4:0937:000C:4048 ()
 *
 * Called From: 07D4:0932:000C:84EC
 */
void f__07D4_0937_000C_4048()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x65);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_0943_0025_DC26(); return; }
	f__07D4_0E41_000A_B122(); return;
}

/**
 * Decompiled function f__07D4_0943_0025_DC26()
 *
 * @name f__07D4_0943_0025_DC26
 * @implements 07D4:0943:0025:DC26 ()
 *
 * Called From: 07D4:093E:000C:4048
 */
void f__07D4_0943_0025_DC26()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_andw(&emu_ax.x, 0x1004);
	emu_cmpw(&emu_ax.x, 0x1000);
	if (emu_flags.zf) { f__07D4_099A_0019_1306(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__07D4_099A_0019_1306(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0968); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__07D4_0968_001F_FE51();
}

/**
 * Decompiled function f__07D4_0968_001F_FE51()
 *
 * @name f__07D4_0968_001F_FE51
 * @implements 07D4:0968:001F:FE51 ()
 *
 * Called From: 07D4:0968:0025:DC26
 */
void f__07D4_0968_001F_FE51()
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
	emu_push(emu_cs); emu_push(0x0987); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__07D4_0987_0013_AC94();
}

/**
 * Decompiled function f__07D4_0987_0013_AC94()
 *
 * @name f__07D4_0987_0013_AC94
 * @implements 07D4:0987:0013:AC94 ()
 *
 * Called From: 07D4:0987:001F:FE51
 */
void f__07D4_0987_0013_AC94()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_andb(&emu_ax.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_pop(&emu_ax.x);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__07D4_099A_0019_1306(); return; }
	f__07D4_0E41_000A_B122(); return;
}

/**
 * Decompiled function f__07D4_099A_0019_1306()
 *
 * @name f__07D4_099A_0019_1306
 * @implements 07D4:099A:0019:1306 ()
 *
 * Called From: 07D4:0950:0025:DC26
 * Called From: 07D4:0956:0025:DC26
 * Called From: 07D4:0995:0013:AC94
 */
void f__07D4_099A_0019_1306()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xEFFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x09B3); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__07D4_09B3_0023_8A21();
}

/**
 * Decompiled function f__07D4_09B3_0023_8A21()
 *
 * @name f__07D4_09B3_0023_8A21
 * @implements 07D4:09B3:0023:8A21 ()
 *
 * Called From: 07D4:09B3:0019:1306
 */
void f__07D4_09B3_0023_8A21()
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
	if (!emu_flags.zf) { f__07D4_09D6_0031_066B(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09D6; emu_last_cs = 0x07D4; emu_last_ip = 0x09D1; emu_last_length = 0x0023; emu_last_crc = 0x8A21; emu_call(); return; }
	f__07D4_0E41_000A_B122(); return;
}

/**
 * Decompiled function f__07D4_09D6_0031_066B()
 *
 * @name f__07D4_09D6_0031_066B
 * @implements 07D4:09D6:0031:066B ()
 *
 * Called From: 07D4:09CA:0023:8A21
 */
void f__07D4_09D6_0031_066B()
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
	emu_push(0x0A07); f__07D4_196B_0073_56C1();
	f__07D4_0A07_000B_C026();
}

/**
 * Decompiled function f__07D4_0A07_000B_C026()
 *
 * @name f__07D4_0A07_000B_C026
 * @implements 07D4:0A07:000B:C026 ()
 *
 * Called From: 07D4:0A07:0031:066B
 */
void f__07D4_0A07_000B_C026()
{
	emu_addws(&emu_sp, 0xC);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__07D4_0A12_0045_4F52(); return; }
	f__07D4_0E41_000A_B122(); return;
}

/**
 * Decompiled function f__07D4_0A12_0045_4F52()
 *
 * @name f__07D4_0A12_0045_4F52
 * @implements 07D4:0A12:0045:4F52 ()
 *
 * Called From: 07D4:0A0D:000B:C026
 */
void f__07D4_0A12_0045_4F52()
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
	f__07D4_0A57_001A_90D6();
}

/**
 * Decompiled function f__07D4_0A57_001A_90D6()
 *
 * @name f__07D4_0A57_001A_90D6
 * @implements 07D4:0A57:001A:90D6 ()
 *
 * Called From: 07D4:0A57:0045:4F52
 */
void f__07D4_0A57_001A_90D6()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0A71_0015_14BA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4C), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A71; emu_last_cs = 0x07D4; emu_last_ip = 0x0A6C; emu_last_length = 0x001A; emu_last_crc = 0x90D6; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0B0E; emu_last_cs = 0x07D4; emu_last_ip = 0x0A6E; emu_last_length = 0x001A; emu_last_crc = 0x90D6; emu_call();
}

/**
 * Decompiled function f__07D4_0A71_0015_14BA()
 *
 * @name f__07D4_0A71_0015_14BA
 * @implements 07D4:0A71:0015:14BA ()
 *
 * Called From: 07D4:0A62:001A:90D6
 */
void f__07D4_0A71_0015_14BA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x44));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4A));
	emu_cmpws(&emu_bx.x, 0x4);
	if ((emu_flags.cf || emu_flags.zf)) { f__07D4_0A87_0007_629A(); return; }
	/* Unresolved jump */ emu_ip = 0x0B04; emu_last_cs = 0x07D4; emu_last_ip = 0x0A84; emu_last_length = 0x0015; emu_last_crc = 0x14BA; emu_call();
}

/**
 * Decompiled function f__07D4_0A87_0007_629A()
 *
 * @name f__07D4_0A87_0007_629A
 * @implements 07D4:0A87:0007:629A ()
 *
 * Called From: 07D4:0A82:0015:14BA
 */
void f__07D4_0A87_0007_629A()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1590);
	switch (emu_ip) {
		case 0x0A8E: f__07D4_0A8E_000C_2053(); return;
		case 0x0AB1: f__07D4_0AB1_0025_DD85(); return;
		case 0x0AD6: f__07D4_0AD6_002C_03ED(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x0A89; emu_last_length = 0x0007; emu_last_crc = 0x629A;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__07D4_0A8E_000C_2053()
 *
 * @name f__07D4_0A8E_000C_2053
 * @implements 07D4:0A8E:000C:2053 ()
 *
 * Called From: 07D4:0A89:0007:629A
 */
void f__07D4_0A8E_000C_2053()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x5);
	if (!emu_flags.zf) { f__07D4_0A9B_0016_C9F0(); return; }
	/* Unresolved jump */ emu_ip = 0x0B0C; emu_last_cs = 0x07D4; emu_last_ip = 0x0A98; emu_last_length = 0x000C; emu_last_crc = 0x2053; emu_call();
}

/**
 * Decompiled function f__07D4_0A9B_0016_C9F0()
 *
 * @name f__07D4_0A9B_0016_C9F0
 * @implements 07D4:0A9B:0016:C9F0 ()
 *
 * Called From: 07D4:0A96:000C:2053
 */
void f__07D4_0A9B_0016_C9F0()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_si, emu_get_memory16(emu_ds, emu_bx.x,  0x32A4));
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x32A6));
	f__07D4_0AFD_0005_E18C(); return;
}

/**
 * Decompiled function f__07D4_0AB1_0025_DD85()
 *
 * @name f__07D4_0AB1_0025_DD85
 * @implements 07D4:0AB1:0025:DD85 ()
 *
 * Called From: 07D4:0A89:0007:629A
 */
void f__07D4_0AB1_0025_DD85()
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
	f__07D4_0AF1_0011_EBB7(); return;
}

/**
 * Decompiled function f__07D4_0AD6_002C_03ED()
 *
 * @name f__07D4_0AD6_002C_03ED
 * @implements 07D4:0AD6:002C:03ED ()
 *
 * Called From: 07D4:0A89:0007:629A
 */
void f__07D4_0AD6_002C_03ED()
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
	f__07D4_0B0C_0002_CE3A(); return;
}

/**
 * Decompiled function f__07D4_0AF1_0011_EBB7()
 *
 * @name f__07D4_0AF1_0011_EBB7
 * @implements 07D4:0AF1:0011:EBB7 ()
 *
 * Called From: 07D4:0AD4:0025:DD85
 */
void f__07D4_0AF1_0011_EBB7()
{
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x32C6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x721D), emu_ax.x);
	f__07D4_0B0C_0002_CE3A(); return;
}

/**
 * Decompiled function f__07D4_0AFD_0005_E18C()
 *
 * @name f__07D4_0AFD_0005_E18C
 * @implements 07D4:0AFD:0005:E18C ()
 *
 * Called From: 07D4:0AAF:0016:C9F0
 */
void f__07D4_0AFD_0005_E18C()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x721D), emu_ax.x);
	f__07D4_0B0C_0002_CE3A(); return;
}

/**
 * Decompiled function f__07D4_0B0C_0002_CE3A()
 *
 * @name f__07D4_0B0C_0002_CE3A
 * @implements 07D4:0B0C:0002:CE3A ()
 *
 * Called From: 07D4:0B00:0011:EBB7
 * Called From: 07D4:0B00:0005:E18C
 * Called From: 07D4:0B00:002C:03ED
 */
void f__07D4_0B0C_0002_CE3A()
{
	f__07D4_0B2A_000F_1371(); return;
}

/**
 * Decompiled function f__07D4_0B2A_000F_1371()
 *
 * @name f__07D4_0B2A_000F_1371
 * @implements 07D4:0B2A:000F:1371 ()
 *
 * Called From: 07D4:0B0C:0002:CE3A
 */
void f__07D4_0B2A_000F_1371()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x59), 0x0);
	if (emu_flags.zf) { f__07D4_0B39_000B_451F(); return; }
	emu_movw(&emu_ax.x, 0x2);
	/* Unresolved jump */ emu_ip = 0x0B46; emu_last_cs = 0x07D4; emu_last_ip = 0x0B37; emu_last_length = 0x000F; emu_last_crc = 0x1371; emu_call();
}

/**
 * Decompiled function f__07D4_0B39_000B_451F()
 *
 * @name f__07D4_0B39_000B_451F
 * @implements 07D4:0B39:000B:451F ()
 *
 * Called From: 07D4:0B32:000F:1371
 */
void f__07D4_0B39_000B_451F()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs); emu_push(0x0B44); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__07D4_0B44_0008_A09F();
}

/**
 * Decompiled function f__07D4_0B44_0008_A09F()
 *
 * @name f__07D4_0B44_0008_A09F
 * @implements 07D4:0B44:0008:A09F ()
 *
 * Called From: 07D4:0B44:000B:451F
 */
void f__07D4_0B44_0008_A09F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0B4C); f__07D4_18BD_0016_68BB();
	f__07D4_0B4C_0066_F087();
}

/**
 * Decompiled function f__07D4_0B4C_0066_F087()
 *
 * @name f__07D4_0B4C_0066_F087
 * @implements 07D4:0B4C:0066:F087 ()
 *
 * Called From: 07D4:0B4C:0008:A09F
 */
void f__07D4_0B4C_0066_F087()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B70; emu_last_cs = 0x07D4; emu_last_ip = 0x0B5D; emu_last_length = 0x0066; emu_last_crc = 0xF087; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x800);
	if (emu_flags.zf) { f__07D4_0B70_0042_98CD(); return; }
	emu_orw(&emu_get_memory16(emu_ds, 0x00, -0x721D), 0x100);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x20);
	if (emu_flags.zf) { f__07D4_0B81_0031_A814(); return; }
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
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0BB2); emu_cs = 0x2903; emu_ip = 0x0158; emu_last_cs = 0x07D4; emu_last_ip = 0x0BAD; emu_last_length = 0x0066; emu_last_crc = 0xF087; emu_call();
	f__07D4_0BB2_0010_7568();
}

/**
 * Decompiled function f__07D4_0B70_0042_98CD()
 *
 * @name f__07D4_0B70_0042_98CD
 * @implements 07D4:0B70:0042:98CD ()
 *
 * Called From: 07D4:0B68:0066:F087
 */
void f__07D4_0B70_0042_98CD()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x20);
	if (emu_flags.zf) { f__07D4_0B81_0031_A814(); return; }
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
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0BB2); emu_cs = 0x2903; emu_ip = 0x0158; emu_last_cs = 0x07D4; emu_last_ip = 0x0BAD; emu_last_length = 0x0042; emu_last_crc = 0x98CD; emu_call();
	f__07D4_0BB2_0010_7568();
}

/**
 * Decompiled function f__07D4_0B81_0031_A814()
 *
 * @name f__07D4_0B81_0031_A814
 * @implements 07D4:0B81:0031:A814 ()
 *
 * Called From: 07D4:0B79:0042:98CD
 * Called From: 07D4:0B79:0066:F087
 */
void f__07D4_0B81_0031_A814()
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
	emu_push(emu_cs); emu_push(0x0BB2); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__07D4_0BB2_0010_7568();
}

/**
 * Decompiled function f__07D4_0BB2_0010_7568()
 *
 * @name f__07D4_0BB2_0010_7568
 * @implements 07D4:0BB2:0010:7568 ()
 *
 * Called From: 07D4:0BB2:0031:A814
 */
void f__07D4_0BB2_0010_7568()
{
	emu_addws(&emu_sp, 0x18);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (emu_flags.zf) { f__07D4_0BC2_000D_690C(); return; }
	f__07D4_0C8E_000D_7DAB(); return;
}

/**
 * Decompiled function f__07D4_0BC2_000D_690C()
 *
 * @name f__07D4_0BC2_000D_690C
 * @implements 07D4:0BC2:000D:690C ()
 *
 * Called From: 07D4:0BBD:0010:7568
 */
void f__07D4_0BC2_000D_690C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x5);
	if (emu_flags.zf) { f__07D4_0BCF_000D_3D03(); return; }
	f__07D4_0C8E_000D_7DAB(); return;
}

/**
 * Decompiled function f__07D4_0BCF_000D_3D03()
 *
 * @name f__07D4_0BCF_000D_3D03
 * @implements 07D4:0BCF:000D:3D03 ()
 *
 * Called From: 07D4:0BCA:000D:690C
 */
void f__07D4_0BCF_000D_3D03()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0BDC_0017_79D0(); return; }
	/* Unresolved jump */ emu_ip = 0x0C8E; emu_last_cs = 0x07D4; emu_last_ip = 0x0BD9; emu_last_length = 0x000D; emu_last_crc = 0x3D03; emu_call();
}

/**
 * Decompiled function f__07D4_0BDC_0017_79D0()
 *
 * @name f__07D4_0BDC_0017_79D0
 * @implements 07D4:0BDC:0017:79D0 ()
 *
 * Called From: 07D4:0BD7:000D:3D03
 */
void f__07D4_0BDC_0017_79D0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x5);
	if (emu_flags.zf) { f__07D4_0BF3_0008_710A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0BF3; emu_last_cs = 0x07D4; emu_last_ip = 0x0BEE; emu_last_length = 0x0017; emu_last_crc = 0x79D0; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x0C8E; emu_last_cs = 0x07D4; emu_last_ip = 0x0BF0; emu_last_length = 0x0017; emu_last_crc = 0x79D0; emu_call();
}

/**
 * Decompiled function f__07D4_0BF3_0008_710A()
 *
 * @name f__07D4_0BF3_0008_710A
 * @implements 07D4:0BF3:0008:710A ()
 *
 * Called From: 07D4:0BE4:0017:79D0
 */
void f__07D4_0BF3_0008_710A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0BFB); emu_cs = 0x34CD; ovl__34CD(13);
	f__07D4_0BFB_000E_2753();
}

/**
 * Decompiled function f__07D4_0BFB_000E_2753()
 *
 * @name f__07D4_0BFB_000E_2753
 * @implements 07D4:0BFB:000E:2753 ()
 *
 * Called From: 07D4:0BFB:0008:710A
 */
void f__07D4_0BFB_000E_2753()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x8);
	if (emu_flags.zf) { f__07D4_0C09_0030_DC22(); return; }
	emu_cmpw(&emu_ax.x, 0x9);
	if (emu_flags.zf) { f__07D4_0C09_0030_DC22(); return; }
	f__07D4_0C8C_0002_C03A(); return;
}

/**
 * Decompiled function f__07D4_0C09_0030_DC22()
 *
 * @name f__07D4_0C09_0030_DC22
 * @implements 07D4:0C09:0030:DC22 ()
 *
 * Called From: 07D4:0BFF:000E:2753
 * Called From: 07D4:0C04:000E:2753
 */
void f__07D4_0C09_0030_DC22()
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
	emu_push(emu_cs); emu_push(0x0C39); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__07D4_0C39_0008_E01C();
}

/**
 * Decompiled function f__07D4_0C39_0008_E01C()
 *
 * @name f__07D4_0C39_0008_E01C
 * @implements 07D4:0C39:0008:E01C ()
 *
 * Called From: 07D4:0C39:0030:DC22
 */
void f__07D4_0C39_0008_E01C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0C41); f__07D4_18BD_0016_68BB();
	f__07D4_0C41_0046_7ED9();
}

/**
 * Decompiled function f__07D4_0C41_0046_7ED9()
 *
 * @name f__07D4_0C41_0046_7ED9
 * @implements 07D4:0C41:0046:7ED9 ()
 *
 * Called From: 07D4:0C41:0008:E01C
 */
void f__07D4_0C41_0046_7ED9()
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
	emu_push(emu_cs); emu_push(0x0C87); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__07D4_0C87_0005_84EE();
}

/**
 * Decompiled function f__07D4_0C87_0005_84EE()
 *
 * @name f__07D4_0C87_0005_84EE
 * @implements 07D4:0C87:0005:84EE ()
 *
 * Called From: 07D4:0C87:0046:7ED9
 */
void f__07D4_0C87_0005_84EE()
{
	emu_addws(&emu_sp, 0xE);
	f__07D4_0C8E_000D_7DAB(); return;
}

/**
 * Decompiled function f__07D4_0C8C_0002_C03A()
 *
 * @name f__07D4_0C8C_0002_C03A
 * @implements 07D4:0C8C:0002:C03A ()
 *
 * Called From: 07D4:0C06:000E:2753
 */
void f__07D4_0C8C_0002_C03A()
{
	f__07D4_0C8E_000D_7DAB(); return;
}

/**
 * Decompiled function f__07D4_0C8E_000D_7DAB()
 *
 * @name f__07D4_0C8E_000D_7DAB
 * @implements 07D4:0C8E:000D:7DAB ()
 *
 * Called From: 07D4:0BBF:0010:7568
 * Called From: 07D4:0BCC:000D:690C
 * Called From: 07D4:0C8A:0005:84EE
 * Called From: 07D4:0C8C:0002:C03A
 */
void f__07D4_0C8E_000D_7DAB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0C9B_000D_C1BA(); return; }
	/* Unresolved jump */ emu_ip = 0x0DAE; emu_last_cs = 0x07D4; emu_last_ip = 0x0C98; emu_last_length = 0x000D; emu_last_crc = 0x7DAB; emu_call();
}

/**
 * Decompiled function f__07D4_0C9B_000D_C1BA()
 *
 * @name f__07D4_0C9B_000D_C1BA
 * @implements 07D4:0C9B:000D:C1BA ()
 *
 * Called From: 07D4:0C96:000D:7DAB
 */
void f__07D4_0C9B_000D_C1BA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x46), 0xFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0CA8; emu_last_cs = 0x07D4; emu_last_ip = 0x0CA3; emu_last_length = 0x000D; emu_last_crc = 0xC1BA; emu_call(); return; }
	f__07D4_0DAE_0055_A271(); return;
}

/**
 * Decompiled function f__07D4_0DAE_0055_A271()
 *
 * @name f__07D4_0DAE_0055_A271
 * @implements 07D4:0DAE:0055:A271 ()
 *
 * Called From: 07D4:0CA5:000D:C1BA
 */
void f__07D4_0DAE_0055_A271()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	if (emu_flags.zf) { f__07D4_0E06_0038_77DF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6D));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_andw(&emu_ax.x, 0x3);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2C), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2C), 0x3);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0DD2; emu_last_cs = 0x07D4; emu_last_ip = 0x0DCB; emu_last_length = 0x0055; emu_last_crc = 0xA271; emu_call(); return; }
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
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0E03); emu_cs = 0x2903; emu_ip = 0x0158; emu_last_cs = 0x07D4; emu_last_ip = 0x0DFE; emu_last_length = 0x0055; emu_last_crc = 0xA271; emu_call();
	/* Unresolved jump */ emu_ip = 0x0E03; emu_last_cs = 0x07D4; emu_last_ip = 0x0E03; emu_last_length = 0x0055; emu_last_crc = 0xA271; emu_call();
}

/**
 * Decompiled function f__07D4_0E06_0038_77DF()
 *
 * @name f__07D4_0E06_0038_77DF
 * @implements 07D4:0E06:0038:77DF ()
 *
 * Called From: 07D4:0DB7:0055:A271
 */
void f__07D4_0E06_0038_77DF()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (!emu_flags.zf) { f__07D4_0E41_000A_B122(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	if (!emu_flags.zf) { f__07D4_0E41_000A_B122(); return; }
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
	emu_push(emu_cs); emu_push(0x0E3E); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__07D4_0E3E_000D_6567();
}

/**
 * Decompiled function f__07D4_0E3E_000D_6567()
 *
 * @name f__07D4_0E3E_000D_6567
 * @implements 07D4:0E3E:000D:6567 ()
 *
 * Called From: 07D4:0E3E:0038:77DF
 */
void f__07D4_0E3E_000D_6567()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E4B); emu_cs = 0x0FE4; f__0FE4_0283_0038_4950();
	f__07D4_0E4B_0013_19E5();
}

/**
 * Decompiled function f__07D4_0E41_000A_B122()
 *
 * @name f__07D4_0E41_000A_B122
 * @implements 07D4:0E41:000A:B122 ()
 *
 * Called From: 07D4:0934:000C:84EC
 * Called From: 07D4:0940:000C:4048
 * Called From: 07D4:0997:0013:AC94
 * Called From: 07D4:09D3:0023:8A21
 * Called From: 07D4:0A0F:000B:C026
 * Called From: 07D4:0E10:0038:77DF
 * Called From: 07D4:0E16:0038:77DF
 */
void f__07D4_0E41_000A_B122()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E4B); emu_cs = 0x0FE4; f__0FE4_0283_0038_4950();
	f__07D4_0E4B_0013_19E5();
}

/**
 * Decompiled function f__07D4_0E4B_0013_19E5()
 *
 * @name f__07D4_0E4B_0013_19E5
 * @implements 07D4:0E4B:0013:19E5 ()
 *
 * Called From: 07D4:0E4B:000A:B122
 * Called From: 07D4:0E4B:000D:6567
 */
void f__07D4_0E4B_0013_19E5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_flags.zf) { f__07D4_0E5E_000E_0F59(); return; }
	f__07D4_092B_000C_84EC(); return;
}

/**
 * Decompiled function f__07D4_0E4D_0011_52D3()
 *
 * @name f__07D4_0E4D_0011_52D3
 * @implements 07D4:0E4D:0011:52D3 ()
 *
 * Called From: 07D4:0928:0006:158A
 */
void f__07D4_0E4D_0011_52D3()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E5E; emu_last_cs = 0x07D4; emu_last_ip = 0x0E59; emu_last_length = 0x0011; emu_last_crc = 0x52D3; emu_call(); return; }
	f__07D4_092B_000C_84EC(); return;
}

/**
 * Decompiled function f__07D4_0E5E_000E_0F59()
 *
 * @name f__07D4_0E5E_000E_0F59
 * @implements 07D4:0E5E:000E:0F59 ()
 *
 * Called From: 07D4:0E59:0013:19E5
 */
void f__07D4_0E5E_000E_0F59()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39E6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__07D4_0FA0_0009_EE5D(); return;
}

/**
 * Decompiled function f__07D4_0E64_0008_1222()
 *
 * @name f__07D4_0E64_0008_1222
 * @implements 07D4:0E64:0008:1222 ()
 *
 * Called From: 07D4:0910:0016:5665
 * Called From: 07D4:0910:001F:DD19
 */
void f__07D4_0E64_0008_1222()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__07D4_0FA0_0009_EE5D(); return;
}

/**
 * Decompiled function f__07D4_0E6C_0028_D70C()
 *
 * @name f__07D4_0E6C_0028_D70C
 * @implements 07D4:0E6C:0028:D70C ()
 *
 * Called From: 07D4:0FA6:0009:EE5D
 * Called From: 07D4:0FA6:000C:1D25
 * Called From: 07D4:0FA6:000F:8834
 */
void f__07D4_0E6C_0028_D70C()
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
	emu_push(emu_cs); emu_push(0x0E94); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__07D4_0E94_001F_9139();
}

/**
 * Decompiled function f__07D4_0E94_001F_9139()
 *
 * @name f__07D4_0E94_001F_9139
 * @implements 07D4:0E94:001F:9139 ()
 *
 * Called From: 07D4:0E94:0028:D70C
 */
void f__07D4_0E94_001F_9139()
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
	emu_push(emu_cs); emu_push(0x0EB3); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__07D4_0EB3_0028_1884();
}

/**
 * Decompiled function f__07D4_0EB3_0028_1884()
 *
 * @name f__07D4_0EB3_0028_1884
 * @implements 07D4:0EB3:0028:1884 ()
 *
 * Called From: 07D4:0EB3:001F:9139
 */
void f__07D4_0EB3_0028_1884()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_andb(&emu_ax.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_pop(&emu_ax.x);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__07D4_0ECB_0010_F9C8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (!emu_flags.zf) { f__07D4_0EDB_0013_61EC(); return; }
	f__07D4_0F9D_000C_1D25(); return;
}

/**
 * Decompiled function f__07D4_0ECB_0010_F9C8()
 *
 * @name f__07D4_0ECB_0010_F9C8
 * @implements 07D4:0ECB:0010:F9C8 ()
 *
 * Called From: 07D4:0EC1:0028:1884
 */
void f__07D4_0ECB_0010_F9C8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (!emu_flags.zf) { f__07D4_0EDB_0013_61EC(); return; }
	f__07D4_0F9D_000C_1D25(); return;
}

/**
 * Decompiled function f__07D4_0EDB_0013_61EC()
 *
 * @name f__07D4_0EDB_0013_61EC
 * @implements 07D4:0EDB:0013:61EC ()
 *
 * Called From: 07D4:0ED6:0010:F9C8
 * Called From: 07D4:0ED6:0028:1884
 */
void f__07D4_0EDB_0013_61EC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), 0x0);
	if (!emu_flags.zf) { f__07D4_0EEE_000D_FD8F(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EEE; emu_last_cs = 0x07D4; emu_last_ip = 0x0EE9; emu_last_length = 0x0013; emu_last_crc = 0x61EC; emu_call(); return; }
	f__07D4_0F9D_000C_1D25(); return;
}

/**
 * Decompiled function f__07D4_0EEE_000D_FD8F()
 *
 * @name f__07D4_0EEE_000D_FD8F
 * @implements 07D4:0EEE:000D:FD8F ()
 *
 * Called From: 07D4:0EE3:0013:61EC
 */
void f__07D4_0EEE_000D_FD8F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xA), 0x0);
	if (!emu_flags.zf) { f__07D4_0EFB_0018_85E3(); return; }
	f__07D4_0F9D_000C_1D25(); return;
}

/**
 * Decompiled function f__07D4_0EFB_0018_85E3()
 *
 * @name f__07D4_0EFB_0018_85E3
 * @implements 07D4:0EFB:0018:85E3 ()
 *
 * Called From: 07D4:0EF6:000D:FD8F
 */
void f__07D4_0EFB_0018_85E3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x7), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x0F13); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__07D4_0F13_0039_35C0();
}

/**
 * Decompiled function f__07D4_0F13_0039_35C0()
 *
 * @name f__07D4_0F13_0039_35C0
 * @implements 07D4:0F13:0039:35C0 ()
 *
 * Called From: 07D4:0F13:0018:85E3
 */
void f__07D4_0F13_0039_35C0()
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
	if (!emu_flags.zf) { f__07D4_0F33_0019_6454(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__07D4_0F9D_000C_1D25(); return; }
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
	/* Unresolved call */ emu_push(0x0F4C); emu_ip = 0x196B; emu_last_cs = 0x07D4; emu_last_ip = 0x0F49; emu_last_length = 0x0039; emu_last_crc = 0x35C0; emu_call();
	f__07D4_0F4C_0023_CCB8();
}

/**
 * Decompiled function f__07D4_0F33_0019_6454()
 *
 * @name f__07D4_0F33_0019_6454
 * @implements 07D4:0F33:0019:6454 ()
 *
 * Called From: 07D4:0F2A:0039:35C0
 */
void f__07D4_0F33_0019_6454()
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
	emu_push(0x0F4C); f__07D4_196B_0073_56C1();
	f__07D4_0F4C_0023_CCB8();
}

/**
 * Decompiled function f__07D4_0F4C_0023_CCB8()
 *
 * @name f__07D4_0F4C_0023_CCB8
 * @implements 07D4:0F4C:0023:CCB8 ()
 *
 * Called From: 07D4:0F4C:0019:6454
 */
void f__07D4_0F4C_0023_CCB8()
{
	emu_addws(&emu_sp, 0xC);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__07D4_0F9D_000C_1D25(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x721D), 0xC000);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs);
	emu_push(0x0F6F); f__07D4_18BD_0016_68BB();
	f__07D4_0F6F_002B_0C2A();
}

/**
 * Decompiled function f__07D4_0F6F_002B_0C2A()
 *
 * @name f__07D4_0F6F_002B_0C2A
 * @implements 07D4:0F6F:002B:0C2A ()
 *
 * Called From: 07D4:0F6F:0023:CCB8
 */
void f__07D4_0F6F_002B_0C2A()
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
	emu_push(emu_cs); emu_push(0x0F9A); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__07D4_0F9A_000F_8834();
}

/**
 * Decompiled function f__07D4_0F9A_000F_8834()
 *
 * @name f__07D4_0F9A_000F_8834
 * @implements 07D4:0F9A:000F:8834 ()
 *
 * Called From: 07D4:0F9A:002B:0C2A
 */
void f__07D4_0F9A_000F_8834()
{
	emu_addws(&emu_sp, 0x12);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0FA9; emu_last_cs = 0x07D4; emu_last_ip = 0x0FA4; emu_last_length = 0x000F; emu_last_crc = 0x8834; emu_call(); return; }
	f__07D4_0E6C_0028_D70C(); return;
}

/**
 * Decompiled function f__07D4_0F9D_000C_1D25()
 *
 * @name f__07D4_0F9D_000C_1D25
 * @implements 07D4:0F9D:000C:1D25 ()
 *
 * Called From: 07D4:0ED8:0010:F9C8
 * Called From: 07D4:0ED8:0028:1884
 * Called From: 07D4:0EEB:0013:61EC
 * Called From: 07D4:0EF8:000D:FD8F
 * Called From: 07D4:0F31:0039:35C0
 * Called From: 07D4:0F52:0023:CCB8
 */
void f__07D4_0F9D_000C_1D25()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0FA9_0016_F5D8(); return; }
	f__07D4_0E6C_0028_D70C(); return;
}

/**
 * Decompiled function f__07D4_0FA0_0009_EE5D()
 *
 * @name f__07D4_0FA0_0009_EE5D
 * @implements 07D4:0FA0:0009:EE5D ()
 *
 * Called From: 07D4:0E69:000E:0F59
 * Called From: 07D4:0E69:0008:1222
 */
void f__07D4_0FA0_0009_EE5D()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x20);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_0FA9_0016_F5D8(); return; }
	f__07D4_0E6C_0028_D70C(); return;
}

/**
 * Decompiled function f__07D4_0FA9_0016_F5D8()
 *
 * @name f__07D4_0FA9_0016_F5D8
 * @implements 07D4:0FA9:0016:F5D8 ()
 *
 * Called From: 07D4:0FA4:000C:1D25
 * Called From: 07D4:0FA4:0009:EE5D
 */
void f__07D4_0FA9_0016_F5D8()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x39E8), 0x0);
	if (!emu_flags.zf) { f__07D4_0FBF_0012_9B62(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__07D4_0FBF_0012_9B62(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (!emu_flags.zf) { f__07D4_0FBF_0012_9B62(); return; }
	f__07D4_1263_0017_2F38(); return;
}

/**
 * Decompiled function f__07D4_0FBF_0012_9B62()
 *
 * @name f__07D4_0FBF_0012_9B62
 * @implements 07D4:0FBF:0012:9B62 ()
 *
 * Called From: 07D4:0FAE:0016:F5D8
 * Called From: 07D4:0FB4:0016:F5D8
 * Called From: 07D4:0FBA:0016:F5D8
 */
void f__07D4_0FBF_0012_9B62()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0FD1); emu_cs = 0x0FE4; f__0FE4_0243_003A_D5F2();
	f__07D4_0FD1_0006_D61F();
}

/**
 * Decompiled function f__07D4_0FD1_0006_D61F()
 *
 * @name f__07D4_0FD1_0006_D61F
 * @implements 07D4:0FD1:0006:D61F ()
 *
 * Called From: 07D4:0FD1:0012:9B62
 */
void f__07D4_0FD1_0006_D61F()
{
	emu_addws(&emu_sp, 0x8);
	f__07D4_124C_0011_917E(); return;
}

/**
 * Decompiled function f__07D4_0FD7_000C_2B61()
 *
 * @name f__07D4_0FD7_000C_2B61
 * @implements 07D4:0FD7:000C:2B61 ()
 *
 * Called From: 07D4:125A:0011:917E
 * Called From: 07D4:125A:0013:DA48
 */
void f__07D4_0FD7_000C_2B61()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xF);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_0FE3_0025_DC26(); return; }
	f__07D4_1240_000A_B122(); return;
}

/**
 * Decompiled function f__07D4_0FE3_0025_DC26()
 *
 * @name f__07D4_0FE3_0025_DC26
 * @implements 07D4:0FE3:0025:DC26 ()
 *
 * Called From: 07D4:0FDE:000C:2B61
 */
void f__07D4_0FE3_0025_DC26()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_andw(&emu_ax.x, 0x1004);
	emu_cmpw(&emu_ax.x, 0x1000);
	if (emu_flags.zf) { f__07D4_103A_0019_1306(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (!emu_flags.zf) { f__07D4_103A_0019_1306(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1008); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__07D4_1008_001F_FE51();
}

/**
 * Decompiled function f__07D4_1008_001F_FE51()
 *
 * @name f__07D4_1008_001F_FE51
 * @implements 07D4:1008:001F:FE51 ()
 *
 * Called From: 07D4:1008:0025:DC26
 */
void f__07D4_1008_001F_FE51()
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
	emu_push(emu_cs); emu_push(0x1027); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__07D4_1027_0013_EFBC();
}

/**
 * Decompiled function f__07D4_1027_0013_EFBC()
 *
 * @name f__07D4_1027_0013_EFBC
 * @implements 07D4:1027:0013:EFBC ()
 *
 * Called From: 07D4:1027:001F:FE51
 */
void f__07D4_1027_0013_EFBC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_andb(&emu_ax.l, 0x7);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_pop(&emu_ax.x);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__07D4_103A_0019_1306(); return; }
	f__07D4_1240_000A_B122(); return;
}

/**
 * Decompiled function f__07D4_103A_0019_1306()
 *
 * @name f__07D4_103A_0019_1306
 * @implements 07D4:103A:0019:1306 ()
 *
 * Called From: 07D4:0FF0:0025:DC26
 * Called From: 07D4:0FF6:0025:DC26
 * Called From: 07D4:1035:0013:EFBC
 */
void f__07D4_103A_0019_1306()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xEFFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1053); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__07D4_1053_0023_C889();
}

/**
 * Decompiled function f__07D4_1053_0023_C889()
 *
 * @name f__07D4_1053_0023_C889
 * @implements 07D4:1053:0023:C889 ()
 *
 * Called From: 07D4:1053:0019:1306
 */
void f__07D4_1053_0023_C889()
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
	if (!emu_flags.zf) { f__07D4_1076_0031_05C3(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1076; emu_last_cs = 0x07D4; emu_last_ip = 0x1071; emu_last_length = 0x0023; emu_last_crc = 0xC889; emu_call(); return; }
	f__07D4_1240_000A_B122(); return;
}

/**
 * Decompiled function f__07D4_1076_0031_05C3()
 *
 * @name f__07D4_1076_0031_05C3
 * @implements 07D4:1076:0031:05C3 ()
 *
 * Called From: 07D4:106A:0023:C889
 */
void f__07D4_1076_0031_05C3()
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
	emu_push(0x10A7); f__07D4_196B_0073_56C1();
	f__07D4_10A7_000B_828E();
}

/**
 * Decompiled function f__07D4_10A7_000B_828E()
 *
 * @name f__07D4_10A7_000B_828E
 * @implements 07D4:10A7:000B:828E ()
 *
 * Called From: 07D4:10A7:0031:05C3
 */
void f__07D4_10A7_000B_828E()
{
	emu_addws(&emu_sp, 0xC);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__07D4_10B2_002C_ED43(); return; }
	f__07D4_1240_000A_B122(); return;
}

/**
 * Decompiled function f__07D4_10B2_002C_ED43()
 *
 * @name f__07D4_10B2_002C_ED43
 * @implements 07D4:10B2:002C:ED43 ()
 *
 * Called From: 07D4:10AD:000B:828E
 */
void f__07D4_10B2_002C_ED43()
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
	if ((emu_flags.cf || emu_flags.zf)) { f__07D4_10DE_0007_62A3(); return; }
	/* Unresolved jump */ emu_ip = 0x1171; emu_last_cs = 0x07D4; emu_last_ip = 0x10DB; emu_last_length = 0x002C; emu_last_crc = 0xED43; emu_call();
}

/**
 * Decompiled function f__07D4_10DE_0007_62A3()
 *
 * @name f__07D4_10DE_0007_62A3
 * @implements 07D4:10DE:0007:62A3 ()
 *
 * Called From: 07D4:10D9:002C:ED43
 */
void f__07D4_10DE_0007_62A3()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1574);
	switch (emu_ip) {
		case 0x10E5: f__07D4_10E5_000F_A7CE(); return;
		case 0x10F4: f__07D4_10F4_0006_F2E5(); return;
		case 0x110F: f__07D4_110F_0006_C2E7(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x10E0; emu_last_length = 0x0007; emu_last_crc = 0x62A3;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__07D4_10E5_000F_A7CE()
 *
 * @name f__07D4_10E5_000F_A7CE
 * @implements 07D4:10E5:000F:A7CE ()
 *
 * Called From: 07D4:10E0:0007:62A3
 */
void f__07D4_10E5_000F_A7CE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x40);
	if (emu_flags.zf) { f__07D4_10F1_0003_DD00(); return; }
	emu_incw(&emu_si);
	/* Unresolved jump */ emu_ip = 0x1177; emu_last_cs = 0x07D4; emu_last_ip = 0x10F1; emu_last_length = 0x000F; emu_last_crc = 0xA7CE; emu_call();
}

/**
 * Decompiled function f__07D4_10F1_0003_DD00()
 *
 * @name f__07D4_10F1_0003_DD00
 * @implements 07D4:10F1:0003:DD00 ()
 *
 * Called From: 07D4:10EE:000F:A7CE
 */
void f__07D4_10F1_0003_DD00()
{
	f__07D4_1177_003C_1BA2(); return;
}

/**
 * Decompiled function f__07D4_10F4_0006_F2E5()
 *
 * @name f__07D4_10F4_0006_F2E5
 * @implements 07D4:10F4:0006:F2E5 ()
 *
 * Called From: 07D4:10E0:0007:62A3
 */
void f__07D4_10F4_0006_F2E5()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x10FA); emu_cs = 0x34CD; ovl__34CD(19);
	f__07D4_10FA_0015_B78B();
}

/**
 * Decompiled function f__07D4_10FA_0015_B78B()
 *
 * @name f__07D4_10FA_0015_B78B
 * @implements 07D4:10FA:0015:B78B ()
 *
 * Called From: 07D4:10FA:0006:F2E5
 */
void f__07D4_10FA_0015_B78B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x32E4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x28), emu_ax.x);
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x28));
	f__07D4_1161_0010_4321(); return;
}

/**
 * Decompiled function f__07D4_110F_0006_C2E7()
 *
 * @name f__07D4_110F_0006_C2E7
 * @implements 07D4:110F:0006:C2E7 ()
 *
 * Called From: 07D4:10E0:0007:62A3
 */
void f__07D4_110F_0006_C2E7()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1115); emu_cs = 0x34CD; ovl__34CD(12);
	f__07D4_1115_001F_2FB5();
}

/**
 * Decompiled function f__07D4_1115_001F_2FB5()
 *
 * @name f__07D4_1115_001F_2FB5
 * @implements 07D4:1115:001F:2FB5 ()
 *
 * Called From: 07D4:1115:0006:C2E7
 */
void f__07D4_1115_001F_2FB5()
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
	f__07D4_116B_0006_C6A4(); return;
}

/**
 * Decompiled function f__07D4_1161_0010_4321()
 *
 * @name f__07D4_1161_0010_4321
 * @implements 07D4:1161:0010:4321 ()
 *
 * Called From: 07D4:110D:0015:B78B
 */
void f__07D4_1161_0010_4321()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x32E6));
	emu_orw(&emu_get_memory16(emu_ds, 0x00, -0x721D), emu_ax.x);
	f__07D4_1177_003C_1BA2(); return;
}

/**
 * Decompiled function f__07D4_116B_0006_C6A4()
 *
 * @name f__07D4_116B_0006_C6A4
 * @implements 07D4:116B:0006:C6A4 ()
 *
 * Called From: 07D4:1132:001F:2FB5
 */
void f__07D4_116B_0006_C6A4()
{
	emu_orw(&emu_get_memory16(emu_ds, 0x00, -0x721D), emu_ax.x);
	f__07D4_1177_003C_1BA2(); return;
}

/**
 * Decompiled function f__07D4_1177_003C_1BA2()
 *
 * @name f__07D4_1177_003C_1BA2
 * @implements 07D4:1177:003C:1BA2 ()
 *
 * Called From: 07D4:10F1:0003:DD00
 * Called From: 07D4:116F:0006:C6A4
 * Called From: 07D4:116F:0010:4321
 */
void f__07D4_1177_003C_1BA2()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x2000);
	if (emu_flags.zf) { f__07D4_1190_0023_84F1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x20);
	if (emu_flags.zf) { f__07D4_1190_0023_84F1(); return; }
	emu_addws(&emu_si, 0x5);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x0);
	if (!emu_flags.zf) { f__07D4_11A8_000B_451F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x100);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x11A8; emu_last_cs = 0x07D4; emu_last_ip = 0x11A3; emu_last_length = 0x003C; emu_last_crc = 0x1BA2; emu_call(); return; }
	emu_addws(&emu_si, 0x3);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x11B3); emu_cs = 0x1A34; emu_ip = 0x3623; emu_last_cs = 0x07D4; emu_last_ip = 0x11AE; emu_last_length = 0x003C; emu_last_crc = 0x1BA2; emu_call();
	f__07D4_11B3_0008_6583();
}

/**
 * Decompiled function f__07D4_1190_0023_84F1()
 *
 * @name f__07D4_1190_0023_84F1
 * @implements 07D4:1190:0023:84F1 ()
 *
 * Called From: 07D4:1180:003C:1BA2
 * Called From: 07D4:118B:003C:1BA2
 */
void f__07D4_1190_0023_84F1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x0);
	if (!emu_flags.zf) { f__07D4_11A8_000B_451F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x100);
	if (emu_flags.zf) { f__07D4_11A8_000B_451F(); return; }
	emu_addws(&emu_si, 0x3);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs); emu_push(0x11B3); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__07D4_11B3_0008_6583();
}

/**
 * Decompiled function f__07D4_11A8_000B_451F()
 *
 * @name f__07D4_11A8_000B_451F
 * @implements 07D4:11A8:000B:451F ()
 *
 * Called From: 07D4:1198:0023:84F1
 * Called From: 07D4:1198:003C:1BA2
 * Called From: 07D4:11A3:0023:84F1
 */
void f__07D4_11A8_000B_451F()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs); emu_push(0x11B3); emu_cs = 0x1A34; f__1A34_3623_0010_B11C();
	f__07D4_11B3_0008_6583();
}

/**
 * Decompiled function f__07D4_11B3_0008_6583()
 *
 * @name f__07D4_11B3_0008_6583
 * @implements 07D4:11B3:0008:6583 ()
 *
 * Called From: 07D4:11B3:000B:451F
 * Called From: 07D4:11B3:0023:84F1
 */
void f__07D4_11B3_0008_6583()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x11BB); f__07D4_18BD_0016_68BB();
	f__07D4_11BB_0049_B9BB();
}

/**
 * Decompiled function f__07D4_11BB_0049_B9BB()
 *
 * @name f__07D4_11BB_0049_B9BB
 * @implements 07D4:11BB:0049:B9BB ()
 *
 * Called From: 07D4:11BB:0008:6583
 */
void f__07D4_11BB_0049_B9BB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2A), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2C), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x1);
	if (emu_flags.zf) { f__07D4_1207_0036_A4AC(); return; }
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
	emu_push(emu_cs); emu_push(0x1204); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__07D4_1204_0039_E0C5();
}

/**
 * Decompiled function f__07D4_1204_0039_E0C5()
 *
 * @name f__07D4_1204_0039_E0C5
 * @implements 07D4:1204:0039:E0C5 ()
 *
 * Called From: 07D4:1204:0049:B9BB
 */
void f__07D4_1204_0039_E0C5()
{
	emu_addws(&emu_sp, 0x14);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x20);
	if (emu_flags.zf) { f__07D4_1218_0025_37A1(); return; }
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
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x123D); emu_cs = 0x2903; emu_ip = 0x0158; emu_last_cs = 0x07D4; emu_last_ip = 0x1238; emu_last_length = 0x0039; emu_last_crc = 0xE0C5; emu_call();
	f__07D4_123D_000D_E564();
}

/**
 * Decompiled function f__07D4_1207_0036_A4AC()
 *
 * @name f__07D4_1207_0036_A4AC
 * @implements 07D4:1207:0036:A4AC ()
 *
 * Called From: 07D4:11CD:0049:B9BB
 */
void f__07D4_1207_0036_A4AC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x20);
	if (emu_flags.zf) { f__07D4_1218_0025_37A1(); return; }
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
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x123D); emu_cs = 0x2903; emu_ip = 0x0158; emu_last_cs = 0x07D4; emu_last_ip = 0x1238; emu_last_length = 0x0036; emu_last_crc = 0xA4AC; emu_call();
	f__07D4_123D_000D_E564();
}

/**
 * Decompiled function f__07D4_1218_0025_37A1()
 *
 * @name f__07D4_1218_0025_37A1
 * @implements 07D4:1218:0025:37A1 ()
 *
 * Called From: 07D4:1210:0036:A4AC
 * Called From: 07D4:1210:0039:E0C5
 */
void f__07D4_1218_0025_37A1()
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
	emu_push(emu_cs); emu_push(0x123D); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__07D4_123D_000D_E564();
}

/**
 * Decompiled function f__07D4_123D_000D_E564()
 *
 * @name f__07D4_123D_000D_E564
 * @implements 07D4:123D:000D:E564 ()
 *
 * Called From: 07D4:123D:0025:37A1
 */
void f__07D4_123D_000D_E564()
{
	emu_addws(&emu_sp, 0x12);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x124A); emu_cs = 0x0FE4; f__0FE4_0283_0038_4950();
	f__07D4_124A_0013_DA48();
}

/**
 * Decompiled function f__07D4_1240_000A_B122()
 *
 * @name f__07D4_1240_000A_B122
 * @implements 07D4:1240:000A:B122 ()
 *
 * Called From: 07D4:0FE0:000C:2B61
 * Called From: 07D4:1037:0013:EFBC
 * Called From: 07D4:1073:0023:C889
 * Called From: 07D4:10AF:000B:828E
 */
void f__07D4_1240_000A_B122()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x124A); emu_cs = 0x0FE4; f__0FE4_0283_0038_4950();
	f__07D4_124A_0013_DA48();
}

/**
 * Decompiled function f__07D4_124A_0013_DA48()
 *
 * @name f__07D4_124A_0013_DA48
 * @implements 07D4:124A:0013:DA48 ()
 *
 * Called From: 07D4:124A:000A:B122
 * Called From: 07D4:124A:000D:E564
 */
void f__07D4_124A_0013_DA48()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_flags.zf) { f__07D4_125D_001D_1903(); return; }
	f__07D4_0FD7_000C_2B61(); return;
}

/**
 * Decompiled function f__07D4_124C_0011_917E()
 *
 * @name f__07D4_124C_0011_917E
 * @implements 07D4:124C:0011:917E ()
 *
 * Called From: 07D4:0FD4:0006:D61F
 */
void f__07D4_124C_0011_917E()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x125D; emu_last_cs = 0x07D4; emu_last_ip = 0x1258; emu_last_length = 0x0011; emu_last_crc = 0x917E; emu_call(); return; }
	f__07D4_0FD7_000C_2B61(); return;
}

/**
 * Decompiled function f__07D4_125D_001D_1903()
 *
 * @name f__07D4_125D_001D_1903
 * @implements 07D4:125D:001D:1903 ()
 *
 * Called From: 07D4:1258:0013:DA48
 */
void f__07D4_125D_001D_1903()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39E8), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (emu_flags.zf) { f__07D4_1291_000A_0ABC(); return; }
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8DE5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x127A); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__07D4_127A_0014_F74B();
}

/**
 * Decompiled function f__07D4_1263_0017_2F38()
 *
 * @name f__07D4_1263_0017_2F38
 * @implements 07D4:1263:0017:2F38 ()
 *
 * Called From: 07D4:0FBC:0016:F5D8
 */
void f__07D4_1263_0017_2F38()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (emu_flags.zf) { f__07D4_1291_000A_0ABC(); return; }
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8DE5);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x127A); emu_cs = 0x01F7; emu_ip = 0x2947; emu_last_cs = 0x07D4; emu_last_ip = 0x1275; emu_last_length = 0x0017; emu_last_crc = 0x2F38; emu_call();
	f__07D4_127A_0014_F74B();
}

/**
 * Decompiled function f__07D4_127A_0014_F74B()
 *
 * @name f__07D4_127A_0014_F74B
 * @implements 07D4:127A:0014:F74B ()
 *
 * Called From: 07D4:127A:001D:1903
 */
void f__07D4_127A_0014_F74B()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x200);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8FE5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x128E); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	f__07D4_128E_000D_1EF9();
}

/**
 * Decompiled function f__07D4_128E_000D_1EF9()
 *
 * @name f__07D4_128E_000D_1EF9
 * @implements 07D4:128E:000D:1EF9 ()
 *
 * Called From: 07D4:128E:0014:F74B
 */
void f__07D4_128E_000D_1EF9()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3344), 0x0);
	if (!emu_flags.zf) { f__07D4_129B_0010_0725(); return; }
	f__07D4_13D0_0049_AA00(); return;
}

/**
 * Decompiled function f__07D4_1291_000A_0ABC()
 *
 * @name f__07D4_1291_000A_0ABC
 * @implements 07D4:1291:000A:0ABC ()
 *
 * Called From: 07D4:1267:0017:2F38
 * Called From: 07D4:1267:001D:1903
 */
void f__07D4_1291_000A_0ABC()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3344), 0x0);
	if (!emu_flags.zf) { f__07D4_129B_0010_0725(); return; }
	f__07D4_13D0_0049_AA00(); return;
}

/**
 * Decompiled function f__07D4_129B_0010_0725()
 *
 * @name f__07D4_129B_0010_0725
 * @implements 07D4:129B:0010:0725 ()
 *
 * Called From: 07D4:1296:000D:1EF9
 * Called From: 07D4:1296:000A:0ABC
 */
void f__07D4_129B_0010_0725()
{
	emu_xorw(&emu_si, emu_si);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__07D4_131B_000B_0980(); return;
}

/**
 * Decompiled function f__07D4_12AB_0033_D6E7()
 *
 * @name f__07D4_12AB_0033_D6E7
 * @implements 07D4:12AB:0033:D6E7 ()
 *
 * Called From: 07D4:1324:000B:0980
 * Called From: 07D4:1324:000E:355E
 * Called From: 07D4:1324:0033:2621
 */
void f__07D4_12AB_0033_D6E7()
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
	if (!emu_flags.zf) { f__07D4_12EC_0007_A2F3(); return; }
	emu_movw(&emu_si, 0x1);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12DE); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__07D4_12DE_000D_CD87();
}

/**
 * Decompiled function f__07D4_12DE_000D_CD87()
 *
 * @name f__07D4_12DE_000D_CD87
 * @implements 07D4:12DE:000D:CD87 ()
 *
 * Called From: 07D4:12DE:0033:D6E7
 */
void f__07D4_12DE_000D_CD87()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12EB); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	f__07D4_12EB_0008_FBF3();
}

/**
 * Decompiled function f__07D4_12EB_0008_FBF3()
 *
 * @name f__07D4_12EB_0008_FBF3
 * @implements 07D4:12EB:0008:FBF3 ()
 *
 * Called From: 07D4:12EB:000D:CD87
 */
void f__07D4_12EB_0008_FBF3()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs);
	emu_push(0x12F3); f__07D4_1625_001A_07E5();
	f__07D4_12F3_0033_2621();
}

/**
 * Decompiled function f__07D4_12EC_0007_A2F3()
 *
 * @name f__07D4_12EC_0007_A2F3
 * @implements 07D4:12EC:0007:A2F3 ()
 *
 * Called From: 07D4:12D0:0033:D6E7
 */
void f__07D4_12EC_0007_A2F3()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs);
	emu_push(0x12F3); f__07D4_1625_001A_07E5();
	f__07D4_12F3_0033_2621();
}

/**
 * Decompiled function f__07D4_12F3_0033_2621()
 *
 * @name f__07D4_12F3_0033_2621
 * @implements 07D4:12F3:0033:2621 ()
 *
 * Called From: 07D4:12F3:0008:FBF3
 * Called From: 07D4:12F3:0007:A2F3
 */
void f__07D4_12F3_0033_2621()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__07D4_1318_000E_355E(); return; }
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
	if (emu_flags.zf) { f__07D4_1318_000E_355E(); return; }
	emu_movw(&emu_di, 0x1);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3344));
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_1326_0011_E99F(); return; }
	f__07D4_12AB_0033_D6E7(); return;
}

/**
 * Decompiled function f__07D4_1318_000E_355E()
 *
 * @name f__07D4_1318_000E_355E
 * @implements 07D4:1318:000E:355E ()
 *
 * Called From: 07D4:12F7:0033:2621
 * Called From: 07D4:1313:0033:2621
 */
void f__07D4_1318_000E_355E()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3344));
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_1326_0011_E99F(); return; }
	f__07D4_12AB_0033_D6E7(); return;
}

/**
 * Decompiled function f__07D4_131B_000B_0980()
 *
 * @name f__07D4_131B_000B_0980
 * @implements 07D4:131B:000B:0980 ()
 *
 * Called From: 07D4:12A9:0010:0725
 */
void f__07D4_131B_000B_0980()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3344));
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_1326_0011_E99F(); return; }
	f__07D4_12AB_0033_D6E7(); return;
}

/**
 * Decompiled function f__07D4_1326_0011_E99F()
 *
 * @name f__07D4_1326_0011_E99F
 * @implements 07D4:1326:0011:E99F ()
 *
 * Called From: 07D4:1322:000E:355E
 * Called From: 07D4:1322:0033:2621
 * Called From: 07D4:1322:000B:0980
 */
void f__07D4_1326_0011_E99F()
{
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__07D4_1339_0028_958D(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x1337); emu_cs = 0x0F78; f__0F78_0008_002C_AB63();
	f__07D4_1337_002A_03E1();
}

/**
 * Decompiled function f__07D4_1337_002A_03E1()
 *
 * @name f__07D4_1337_002A_03E1
 * @implements 07D4:1337:002A:03E1 ()
 *
 * Called From: 07D4:1337:0011:E99F
 */
void f__07D4_1337_002A_03E1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1372; emu_last_cs = 0x07D4; emu_last_ip = 0x133B; emu_last_length = 0x002A; emu_last_crc = 0x03E1; emu_call(); return; }
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
	emu_push(emu_cs); emu_push(0x1361); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	f__07D4_1361_000B_2081();
}

/**
 * Decompiled function f__07D4_1339_0028_958D()
 *
 * @name f__07D4_1339_0028_958D
 * @implements 07D4:1339:0028:958D ()
 *
 * Called From: 07D4:1328:0011:E99F
 */
void f__07D4_1339_0028_958D()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__07D4_1372_0015_D44C(); return; }
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
	emu_push(emu_cs); emu_push(0x1361); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	f__07D4_1361_000B_2081();
}

/**
 * Decompiled function f__07D4_1361_000B_2081()
 *
 * @name f__07D4_1361_000B_2081
 * @implements 07D4:1361:000B:2081 ()
 *
 * Called From: 07D4:1361:002A:03E1
 * Called From: 07D4:1361:0028:958D
 */
void f__07D4_1361_000B_2081()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs); emu_push(0x136C); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__07D4_136C_0006_63C7();
}

/**
 * Decompiled function f__07D4_136C_0006_63C7()
 *
 * @name f__07D4_136C_0006_63C7
 * @implements 07D4:136C:0006:63C7 ()
 *
 * Called From: 07D4:136C:000B:2081
 */
void f__07D4_136C_0006_63C7()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x1372); emu_cs = 0x2642; f__2642_0069_0008_D517();
	f__07D4_1372_0015_D44C();
}

/**
 * Decompiled function f__07D4_1372_0015_D44C()
 *
 * @name f__07D4_1372_0015_D44C
 * @implements 07D4:1372:0015:D44C ()
 *
 * Called From: 07D4:133B:0028:958D
 * Called From: 07D4:1372:0006:63C7
 */
void f__07D4_1372_0015_D44C()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x3344), 0xC8);
	if (!emu_flags.zf) { f__07D4_13CA_004F_072B(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3344), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__07D4_13C1_0009_EBF9(); return;
}

/**
 * Decompiled function f__07D4_1387_0037_4BAC()
 *
 * @name f__07D4_1387_0037_4BAC
 * @implements 07D4:1387:0037:4BAC ()
 *
 * Called From: 07D4:13C6:0009:EBF9
 * Called From: 07D4:13C6:000C:1881
 */
void f__07D4_1387_0037_4BAC()
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
	if (emu_flags.zf) { f__07D4_13BE_000C_1881(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3344));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x7D70), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x3344));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00,  0x3344), 0xC8);
	if (!emu_flags.zf) { f__07D4_13BE_000C_1881(); return; }
	/* Unresolved jump */ emu_ip = 0x13C8; emu_last_cs = 0x07D4; emu_last_ip = 0x13BC; emu_last_length = 0x0037; emu_last_crc = 0x4BAC; emu_call();
}

/**
 * Decompiled function f__07D4_13BE_000C_1881()
 *
 * @name f__07D4_13BE_000C_1881
 * @implements 07D4:13BE:000C:1881 ()
 *
 * Called From: 07D4:13A1:0037:4BAC
 * Called From: 07D4:13BA:0037:4BAC
 */
void f__07D4_13BE_000C_1881()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_1387_0037_4BAC(); return; }
	f__07D4_13D0_0049_AA00(); return;
}

/**
 * Decompiled function f__07D4_13C1_0009_EBF9()
 *
 * @name f__07D4_13C1_0009_EBF9
 * @implements 07D4:13C1:0009:EBF9 ()
 *
 * Called From: 07D4:1385:0015:D44C
 */
void f__07D4_13C1_0009_EBF9()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_1387_0037_4BAC(); return; }
	/* Unresolved jump */ emu_ip = 0x13D0; emu_last_cs = 0x07D4; emu_last_ip = 0x13C8; emu_last_length = 0x0009; emu_last_crc = 0xEBF9; emu_call();
}

/**
 * Decompiled function f__07D4_13CA_004F_072B()
 *
 * @name f__07D4_13CA_004F_072B
 * @implements 07D4:13CA:004F:072B ()
 *
 * Called From: 07D4:1378:0015:D44C
 */
void f__07D4_13CA_004F_072B()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3344), 0x0);
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x1);
	if (emu_flags.zf) { f__07D4_1426_0009_919E(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x37BC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x37BE));
	if (emu_flags.zf) { f__07D4_1426_0009_919E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x36), 0xE);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_13F9_0020_16B6(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4A), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_13F9_0020_16B6(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x13F9; emu_last_cs = 0x07D4; emu_last_ip = 0x13F1; emu_last_length = 0x004F; emu_last_crc = 0x072B; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1426; emu_last_cs = 0x07D4; emu_last_ip = 0x13F7; emu_last_length = 0x004F; emu_last_crc = 0x072B; emu_call(); return; }
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
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1419); emu_cs = 0x10E4; emu_ip = 0x1EF1; emu_last_cs = 0x07D4; emu_last_ip = 0x1414; emu_last_length = 0x004F; emu_last_crc = 0x072B; emu_call();
	f__07D4_1419_0016_80CC();
}

/**
 * Decompiled function f__07D4_13D0_0049_AA00()
 *
 * @name f__07D4_13D0_0049_AA00
 * @implements 07D4:13D0:0049:AA00 ()
 *
 * Called From: 07D4:1298:000A:0ABC
 * Called From: 07D4:1298:000D:1EF9
 * Called From: 07D4:13C8:000C:1881
 */
void f__07D4_13D0_0049_AA00()
{
	emu_testw(&emu_get_memory16(emu_ds, 0x00,  0x37BA), 0x1);
	if (emu_flags.zf) { f__07D4_1426_0009_919E(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x37BC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x37BE));
	if (emu_flags.zf) { f__07D4_1426_0009_919E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x36), 0xE);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_13F9_0020_16B6(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4A), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_13F9_0020_16B6(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x13F9; emu_last_cs = 0x07D4; emu_last_ip = 0x13F1; emu_last_length = 0x0049; emu_last_crc = 0xAA00; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1426; emu_last_cs = 0x07D4; emu_last_ip = 0x13F7; emu_last_length = 0x0049; emu_last_crc = 0xAA00; emu_call(); return; }
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
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1419); emu_cs = 0x10E4; emu_ip = 0x1EF1; emu_last_cs = 0x07D4; emu_last_ip = 0x1414; emu_last_length = 0x0049; emu_last_crc = 0xAA00; emu_call();
	f__07D4_1419_0016_80CC();
}

/**
 * Decompiled function f__07D4_13F9_0020_16B6()
 *
 * @name f__07D4_13F9_0020_16B6
 * @implements 07D4:13F9:0020:16B6 ()
 *
 * Called From: 07D4:13E5:004F:072B
 * Called From: 07D4:13E5:0049:AA00
 * Called From: 07D4:13EB:0049:AA00
 * Called From: 07D4:13EB:004F:072B
 */
void f__07D4_13F9_0020_16B6()
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
	emu_push(emu_cs); emu_push(0x1419); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	f__07D4_1419_0016_80CC();
}

/**
 * Decompiled function f__07D4_1419_0016_80CC()
 *
 * @name f__07D4_1419_0016_80CC
 * @implements 07D4:1419:0016:80CC ()
 *
 * Called From: 07D4:1419:0020:16B6
 */
void f__07D4_1419_0016_80CC()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x36), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4A), 0xE);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (!emu_flags.zf) { f__07D4_142F_0009_D05C(); return; }
	f__07D4_155C_0008_5999(); return;
}

/**
 * Decompiled function f__07D4_1426_0009_919E()
 *
 * @name f__07D4_1426_0009_919E
 * @implements 07D4:1426:0009:919E ()
 *
 * Called From: 07D4:13D6:0049:AA00
 * Called From: 07D4:13D6:004F:072B
 * Called From: 07D4:13DF:0049:AA00
 * Called From: 07D4:13DF:004F:072B
 */
void f__07D4_1426_0009_919E()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (!emu_flags.zf) { f__07D4_142F_0009_D05C(); return; }
	f__07D4_155C_0008_5999(); return;
}

/**
 * Decompiled function f__07D4_142F_0009_D05C()
 *
 * @name f__07D4_142F_0009_D05C
 * @implements 07D4:142F:0009:D05C ()
 *
 * Called From: 07D4:142A:0009:919E
 * Called From: 07D4:142A:0016:80CC
 */
void f__07D4_142F_0009_D05C()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__07D4_1438_0010_9618(); return; }
	f__07D4_155C_0008_5999(); return;
}

/**
 * Decompiled function f__07D4_1438_0010_9618()
 *
 * @name f__07D4_1438_0010_9618
 * @implements 07D4:1438:0010:9618 ()
 *
 * Called From: 07D4:1433:0009:D05C
 */
void f__07D4_1438_0010_9618()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A14), 0x0);
	if (emu_flags.zf) { f__07D4_147E_000A_9E24(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_push(emu_cs); emu_push(0x1448); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	f__07D4_1448_0025_2165();
}

/**
 * Decompiled function f__07D4_1448_0025_2165()
 *
 * @name f__07D4_1448_0025_2165
 * @implements 07D4:1448:0025:2165 ()
 *
 * Called From: 07D4:1448:0010:9618
 */
void f__07D4_1448_0025_2165()
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
	emu_push(emu_cs); emu_push(0x146D); emu_cs = 0x2C17; f__2C17_000C_002F_3016();
	f__07D4_146D_0008_C54E();
}

/**
 * Decompiled function f__07D4_146D_0008_C54E()
 *
 * @name f__07D4_146D_0008_C54E
 * @implements 07D4:146D:0008:C54E ()
 *
 * Called From: 07D4:146D:0025:2165
 */
void f__07D4_146D_0008_C54E()
{
	emu_addws(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1475); emu_cs = 0x2642; f__2642_0069_0008_D517();
	f__07D4_1475_0009_F35C();
}

/**
 * Decompiled function f__07D4_1475_0009_F35C()
 *
 * @name f__07D4_1475_0009_F35C
 * @implements 07D4:1475:0009:F35C ()
 *
 * Called From: 07D4:1475:0008:C54E
 */
void f__07D4_1475_0009_F35C()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A14), 0x0);
	f__07D4_155C_0008_5999(); return;
}

/**
 * Decompiled function f__07D4_147E_000A_9E24()
 *
 * @name f__07D4_147E_000A_9E24
 * @implements 07D4:147E:000A:9E24 ()
 *
 * Called From: 07D4:143D:0010:9618
 */
void f__07D4_147E_000A_9E24()
{
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__07D4_154A_0009_C6E0(); return;
}

/**
 * Decompiled function f__07D4_1488_0042_D8CF()
 *
 * @name f__07D4_1488_0042_D8CF
 * @implements 07D4:1488:0042:D8CF ()
 *
 * Called From: 07D4:1550:0009:C6E0
 * Called From: 07D4:1550:000C:3598
 * Called From: 07D4:1550:000F:B089
 */
void f__07D4_1488_0042_D8CF()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) { f__07D4_14AC_001E_5C2A(); return; }
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
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_14CB_0051_4C81(); return; }
	/* Unresolved jump */ emu_ip = 0x1547; emu_last_cs = 0x07D4; emu_last_ip = 0x14C8; emu_last_length = 0x0042; emu_last_crc = 0xD8CF; emu_call();
}

/**
 * Decompiled function f__07D4_14AC_001E_5C2A()
 *
 * @name f__07D4_14AC_001E_5C2A
 * @implements 07D4:14AC:001E:5C2A ()
 *
 * Called From: 07D4:148C:0042:D8CF
 */
void f__07D4_14AC_001E_5C2A()
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
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_14CB_0051_4C81(); return; }
	f__07D4_1547_000C_3598(); return;
}

/**
 * Decompiled function f__07D4_14CB_0051_4C81()
 *
 * @name f__07D4_14CB_0051_4C81
 * @implements 07D4:14CB:0051:4C81 ()
 *
 * Called From: 07D4:14C6:001E:5C2A
 * Called From: 07D4:14C6:0042:D8CF
 */
void f__07D4_14CB_0051_4C81()
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
	if (!emu_flags.zf) { f__07D4_1526_001E_A3D1(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D5D));
	emu_push(emu_cs); emu_push(0x151C); emu_cs = 0x2642; f__2642_0002_005E_87F6();
	f__07D4_151C_0028_94C8();
}

/**
 * Decompiled function f__07D4_151C_0028_94C8()
 *
 * @name f__07D4_151C_0028_94C8
 * @implements 07D4:151C:0028:94C8 ()
 *
 * Called From: 07D4:151C:0051:4C81
 */
void f__07D4_151C_0028_94C8()
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
	emu_push(emu_cs); emu_push(0x1544); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	f__07D4_1544_000F_B089();
}

/**
 * Decompiled function f__07D4_1526_001E_A3D1()
 *
 * @name f__07D4_1526_001E_A3D1
 * @implements 07D4:1526:001E:A3D1 ()
 *
 * Called From: 07D4:1511:0051:4C81
 */
void f__07D4_1526_001E_A3D1()
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
	emu_push(emu_cs); emu_push(0x1544); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	f__07D4_1544_000F_B089();
}

/**
 * Decompiled function f__07D4_1544_000F_B089()
 *
 * @name f__07D4_1544_000F_B089
 * @implements 07D4:1544:000F:B089 ()
 *
 * Called From: 07D4:1544:0028:94C8
 * Called From: 07D4:1544:001E:A3D1
 */
void f__07D4_1544_000F_B089()
{
	emu_addws(&emu_sp, 0x10);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0xA);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_1553_0009_652B(); return; }
	f__07D4_1488_0042_D8CF(); return;
}

/**
 * Decompiled function f__07D4_1547_000C_3598()
 *
 * @name f__07D4_1547_000C_3598
 * @implements 07D4:1547:000C:3598 ()
 *
 * Called From: 07D4:14C8:001E:5C2A
 */
void f__07D4_1547_000C_3598()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0xA);
	if (!(emu_flags.sf != emu_flags.of)) { f__07D4_1553_0009_652B(); return; }
	f__07D4_1488_0042_D8CF(); return;
}

/**
 * Decompiled function f__07D4_154A_0009_C6E0()
 *
 * @name f__07D4_154A_0009_C6E0
 * @implements 07D4:154A:0009:C6E0 ()
 *
 * Called From: 07D4:1485:000A:9E24
 */
void f__07D4_154A_0009_C6E0()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0xA);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1553; emu_last_cs = 0x07D4; emu_last_ip = 0x154E; emu_last_length = 0x0009; emu_last_crc = 0xC6E0; emu_call(); return; }
	f__07D4_1488_0042_D8CF(); return;
}

/**
 * Decompiled function f__07D4_1553_0009_652B()
 *
 * @name f__07D4_1553_0009_652B
 * @implements 07D4:1553:0009:652B ()
 *
 * Called From: 07D4:154E:000C:3598
 * Called From: 07D4:154E:000F:B089
 */
void f__07D4_1553_0009_652B()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x155C; emu_last_cs = 0x07D4; emu_last_ip = 0x1555; emu_last_length = 0x0009; emu_last_crc = 0x652B; emu_call(); return; }
	emu_push(emu_cs); emu_push(0x155C); emu_cs = 0x2642; f__2642_0069_0008_D517();
	f__07D4_155C_0008_5999();
}

/**
 * Decompiled function f__07D4_155C_0008_5999()
 *
 * @name f__07D4_155C_0008_5999
 * @implements 07D4:155C:0008:5999 ()
 *
 * Called From: 07D4:142C:0009:919E
 * Called From: 07D4:142C:0016:80CC
 * Called From: 07D4:1435:0009:D05C
 * Called From: 07D4:147B:0009:F35C
 * Called From: 07D4:155C:0009:652B
 */
void f__07D4_155C_0008_5999()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x1564); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__07D4_1564_0009_50B8();
}

/**
 * Decompiled function f__07D4_1564_0009_50B8()
 *
 * @name f__07D4_1564_0009_50B8
 * @implements 07D4:1564:0009:50B8 ()
 *
 * Called From: 07D4:1564:0008:5999
 */
void f__07D4_1564_0009_50B8()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x156D); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	f__07D4_156D_0007_F77C();
}

/**
 * Decompiled function f__07D4_156D_0007_F77C()
 *
 * @name f__07D4_156D_0007_F77C
 * @implements 07D4:156D:0007:F77C ()
 *
 * Called From: 07D4:156D:0009:50B8
 */
void f__07D4_156D_0007_F77C()
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
 * Decompiled function f__07D4_159A_001D_F971()
 *
 * @name f__07D4_159A_001D_F971
 * @implements 07D4:159A:001D:F971 ()
 *
 * Called From: 10E4:2130:0012:8D21
 */
void f__07D4_159A_001D_F971()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__07D4_15BB_0004_EAF9(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x15B7); emu_cs = 0x2598; emu_ip = 0x0000; emu_last_cs = 0x07D4; emu_last_ip = 0x15B2; emu_last_length = 0x001D; emu_last_crc = 0xF971; emu_call();
	/* Unresolved jump */ emu_ip = 0x15B7; emu_last_cs = 0x07D4; emu_last_ip = 0x15B7; emu_last_length = 0x001D; emu_last_crc = 0xF971; emu_call();
}

/**
 * Decompiled function f__07D4_15BB_0004_EAF9()
 *
 * @name f__07D4_15BB_0004_EAF9
 * @implements 07D4:15BB:0004:EAF9 ()
 *
 * Called From: 07D4:15AC:001D:F971
 */
void f__07D4_15BB_0004_EAF9()
{
	emu_xorw(&emu_si, emu_si);
	f__07D4_15C7_0013_6F1B(); return;
}

/**
 * Decompiled function f__07D4_15BF_0005_BFA8()
 *
 * @name f__07D4_15BF_0005_BFA8
 * @implements 07D4:15BF:0005:BFA8 ()
 *
 * Called From: 07D4:15CB:0013:6F1B
 * Called From: 07D4:15CB:0016:4DD5
 */
void f__07D4_15BF_0005_BFA8()
{
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x15C4); f__07D4_1625_001A_07E5();
	f__07D4_15C4_0016_4DD5();
}

/**
 * Decompiled function f__07D4_15C4_0016_4DD5()
 *
 * @name f__07D4_15C4_0016_4DD5
 * @implements 07D4:15C4:0016:4DD5 ()
 *
 * Called From: 07D4:15C4:0005:BFA8
 */
void f__07D4_15C4_0016_4DD5()
{
	emu_pop(&emu_cx.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_15BF_0005_BFA8(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_cs); emu_push(0x15DA); emu_cs = 0x0F78; f__0F78_0008_002C_AB63();
	f__07D4_15DA_000E_A50F();
}

/**
 * Decompiled function f__07D4_15C7_0013_6F1B()
 *
 * @name f__07D4_15C7_0013_6F1B
 * @implements 07D4:15C7:0013:6F1B ()
 *
 * Called From: 07D4:15BD:0004:EAF9
 */
void f__07D4_15C7_0013_6F1B()
{
	emu_cmpw(&emu_si, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_15BF_0005_BFA8(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x15DA); emu_cs = 0x0F78; emu_ip = 0x0008; emu_last_cs = 0x07D4; emu_last_ip = 0x15D5; emu_last_length = 0x0013; emu_last_crc = 0x6F1B; emu_call();
	f__07D4_15DA_000E_A50F();
}

/**
 * Decompiled function f__07D4_15DA_000E_A50F()
 *
 * @name f__07D4_15DA_000E_A50F
 * @implements 07D4:15DA:000E:A50F ()
 *
 * Called From: 07D4:15DA:0016:4DD5
 */
void f__07D4_15DA_000E_A50F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__07D4_161F_0006_F7CE(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x15E8); emu_cs = 0x2598; emu_ip = 0x0000; emu_last_cs = 0x07D4; emu_last_ip = 0x15E3; emu_last_length = 0x000E; emu_last_crc = 0xA50F; emu_call();
	/* Unresolved jump */ emu_ip = 0x15E8; emu_last_cs = 0x07D4; emu_last_ip = 0x15E8; emu_last_length = 0x000E; emu_last_crc = 0xA50F; emu_call();
}

/**
 * Decompiled function f__07D4_161F_0006_F7CE()
 *
 * @name f__07D4_161F_0006_F7CE
 * @implements 07D4:161F:0006:F7CE ()
 *
 * Called From: 07D4:15DE:000E:A50F
 */
void f__07D4_161F_0006_F7CE()
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
 * Decompiled function f__07D4_1625_001A_07E5()
 *
 * @name f__07D4_1625_001A_07E5
 * @implements 07D4:1625:001A:07E5 ()
 *
 * Called From: 07D4:12F0:0008:FBF3
 * Called From: 07D4:12F0:0007:A2F3
 * Called From: 07D4:15C1:0005:BFA8
 * Called From: 0F78:0087:002F:3722
 */
void f__07D4_1625_001A_07E5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xC);
	emu_movw(&emu_di, 0xFFFF);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x1000);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_163F_0008_04D1(); return; }
	/* Unresolved jump */ emu_ip = 0x18B7; emu_last_cs = 0x07D4; emu_last_ip = 0x163C; emu_last_length = 0x001A; emu_last_crc = 0x07E5; emu_call();
}

/**
 * Decompiled function f__07D4_163F_0008_04D1()
 *
 * @name f__07D4_163F_0008_04D1
 * @implements 07D4:163F:0008:04D1 ()
 *
 * Called From: 07D4:163A:001A:07E5
 */
void f__07D4_163F_0008_04D1()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1647); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	f__07D4_1647_000C_40AE();
}

/**
 * Decompiled function f__07D4_1647_000C_40AE()
 *
 * @name f__07D4_1647_000C_40AE
 * @implements 07D4:1647:000C:40AE ()
 *
 * Called From: 07D4:1647:0008:04D1
 */
void f__07D4_1647_000C_40AE()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1653); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	f__07D4_1653_0012_553F();
}

/**
 * Decompiled function f__07D4_1653_0012_553F()
 *
 * @name f__07D4_1653_0012_553F
 * @implements 07D4:1653:0012:553F ()
 *
 * Called From: 07D4:1653:000C:40AE
 */
void f__07D4_1653_0012_553F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_incw(&emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1665); emu_cs = 0x34CD; ovl__34CD(11);
	f__07D4_1665_0008_F68F();
}

/**
 * Decompiled function f__07D4_1665_0008_F68F()
 *
 * @name f__07D4_1665_0008_F68F
 * @implements 07D4:1665:0008:F68F ()
 *
 * Called From: 07D4:1665:0012:553F
 */
void f__07D4_1665_0008_F68F()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__07D4_166D_0023_2B60(); return; }
	f__07D4_18B7_0006_F7CE(); return;
}

/**
 * Decompiled function f__07D4_166D_0023_2B60()
 *
 * @name f__07D4_166D_0023_2B60
 * @implements 07D4:166D:0023:2B60 ()
 *
 * Called From: 07D4:1668:0008:F68F
 */
void f__07D4_166D_0023_2B60()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__07D4_1690_002A_C5EA(); return; }
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
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1690; emu_last_cs = 0x07D4; emu_last_ip = 0x168B; emu_last_length = 0x0023; emu_last_crc = 0x2B60; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x18B7; emu_last_cs = 0x07D4; emu_last_ip = 0x168D; emu_last_length = 0x0023; emu_last_crc = 0x2B60; emu_call();
}

/**
 * Decompiled function f__07D4_1690_002A_C5EA()
 *
 * @name f__07D4_1690_002A_C5EA
 * @implements 07D4:1690:002A:C5EA ()
 *
 * Called From: 07D4:166F:0023:2B60
 */
void f__07D4_1690_002A_C5EA()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (emu_flags.zf) { f__07D4_16B0_000A_AEB9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x16BA; emu_last_cs = 0x07D4; emu_last_ip = 0x16AE; emu_last_length = 0x002A; emu_last_crc = 0xC5EA; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x16BA; emu_last_cs = 0x07D4; emu_last_ip = 0x16B5; emu_last_length = 0x002A; emu_last_crc = 0xC5EA; emu_call(); return; }
	f__07D4_17BA_0008_D904(); return;
}

/**
 * Decompiled function f__07D4_16B0_000A_AEB9()
 *
 * @name f__07D4_16B0_000A_AEB9
 * @implements 07D4:16B0:000A:AEB9 ()
 *
 * Called From: 07D4:16A2:002A:C5EA
 */
void f__07D4_16B0_000A_AEB9()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x16BA; emu_last_cs = 0x07D4; emu_last_ip = 0x16B5; emu_last_length = 0x000A; emu_last_crc = 0xAEB9; emu_call(); return; }
	f__07D4_17BA_0008_D904(); return;
}

/**
 * Decompiled function f__07D4_17BA_0008_D904()
 *
 * @name f__07D4_17BA_0008_D904
 * @implements 07D4:17BA:0008:D904 ()
 *
 * Called From: 07D4:16B7:000A:AEB9
 * Called From: 07D4:16B7:002A:C5EA
 */
void f__07D4_17BA_0008_D904()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x17C2); emu_cs = 0x34CD; ovl__34CD(30);
	f__07D4_17C2_0037_AF83();
}

/**
 * Decompiled function f__07D4_17C2_0037_AF83()
 *
 * @name f__07D4_17C2_0037_AF83
 * @implements 07D4:17C2:0037:AF83 ()
 *
 * Called From: 07D4:17C2:0008:D904
 */
void f__07D4_17C2_0037_AF83()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) { f__07D4_1811_0011_2BD8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__07D4_1811_0011_2BD8(); return; }
	emu_cmpws(&emu_si, 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x17F9; emu_last_cs = 0x07D4; emu_last_ip = 0x17E2; emu_last_length = 0x0037; emu_last_crc = 0xAF83; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_si);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_addws(&emu_dx.x, 0x1D);
	emu_movw(&emu_di, emu_dx.x);
	f__07D4_180F_0002_CB3A(); return;
}

/**
 * Decompiled function f__07D4_180F_0002_CB3A()
 *
 * @name f__07D4_180F_0002_CB3A
 * @implements 07D4:180F:0002:CB3A ()
 *
 * Called From: 07D4:17F7:0037:AF83
 */
void f__07D4_180F_0002_CB3A()
{
	f__07D4_1827_0069_7F32(); return;
}

/**
 * Decompiled function f__07D4_1811_0011_2BD8()
 *
 * @name f__07D4_1811_0011_2BD8
 * @implements 07D4:1811:0011:2BD8 ()
 *
 * Called From: 07D4:17CF:0037:AF83
 * Called From: 07D4:17DD:0037:AF83
 */
void f__07D4_1811_0011_2BD8()
{
	emu_cmpws(&emu_si, 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1822; emu_last_cs = 0x07D4; emu_last_ip = 0x1814; emu_last_length = 0x0011; emu_last_crc = 0x2BD8; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3AFE));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	f__07D4_1827_0069_7F32(); return;
}

/**
 * Decompiled function f__07D4_1827_0069_7F32()
 *
 * @name f__07D4_1827_0069_7F32
 * @implements 07D4:1827:0069:7F32 ()
 *
 * Called From: 07D4:180F:0002:CB3A
 * Called From: 07D4:1820:0011:2BD8
 */
void f__07D4_1827_0069_7F32()
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
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1895; emu_last_cs = 0x07D4; emu_last_ip = 0x1848; emu_last_length = 0x0069; emu_last_crc = 0x7F32; emu_call(); return; }
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
	emu_push(emu_cs); emu_push(0x1890); emu_cs = 0x2903; f__2903_0158_001A_2931();
	f__07D4_1890_0005_8AEE();
}

/**
 * Decompiled function f__07D4_1890_0005_8AEE()
 *
 * @name f__07D4_1890_0005_8AEE
 * @implements 07D4:1890:0005:8AEE ()
 *
 * Called From: 07D4:1890:0069:7F32
 */
void f__07D4_1890_0005_8AEE()
{
	emu_addws(&emu_sp, 0xE);
	f__07D4_18B3_000A_6E63(); return;
}

/**
 * Decompiled function f__07D4_18B3_000A_6E63()
 *
 * @name f__07D4_18B3_000A_6E63
 * @implements 07D4:18B3:000A:6E63 ()
 *
 * Called From: 07D4:1893:0005:8AEE
 */
void f__07D4_18B3_000A_6E63()
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
 * Decompiled function f__07D4_18B7_0006_F7CE()
 *
 * @name f__07D4_18B7_0006_F7CE
 * @implements 07D4:18B7:0006:F7CE ()
 *
 * Called From: 07D4:166A:0008:F68F
 */
void f__07D4_18B7_0006_F7CE()
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
 * Decompiled function f__07D4_18BD_0016_68BB()
 *
 * @name f__07D4_18BD_0016_68BB
 * @implements 07D4:18BD:0016:68BB ()
 *
 * Called From: 07D4:0B49:0008:A09F
 * Called From: 07D4:0C3E:0008:E01C
 * Called From: 07D4:0F6C:0023:CCB8
 * Called From: 07D4:11B8:0008:6583
 */
void f__07D4_18BD_0016_68BB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x163);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_18D3_0026_670B(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x1965; emu_last_cs = 0x07D4; emu_last_ip = 0x18D0; emu_last_length = 0x0016; emu_last_crc = 0x68BB; emu_call();
}

/**
 * Decompiled function f__07D4_18D0_0003_9D04()
 *
 * @name f__07D4_18D0_0003_9D04
 * @implements 07D4:18D0:0003:9D04 ()
 *
 * Called From: 07D4:1962:0013:DC4D
 * Called From: 07D4:1962:0022:E93A
 * Called From: 07D4:1962:0009:9B3E
 */
void f__07D4_18D0_0003_9D04()
{
	f__07D4_1965_0006_F7CE(); return;
}

/**
 * Decompiled function f__07D4_18D3_0026_670B()
 *
 * @name f__07D4_18D3_0026_670B
 * @implements 07D4:18D3:0026:670B ()
 *
 * Called From: 07D4:18CA:0016:68BB
 */
void f__07D4_18D3_0026_670B()
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
	if (!emu_flags.zf) { f__07D4_18F9_000B_8253(); return; }
	/* Unresolved jump */ emu_ip = 0x18CC; emu_last_cs = 0x07D4; emu_last_ip = 0x18F7; emu_last_length = 0x0026; emu_last_crc = 0x670B; emu_call();
}

/**
 * Decompiled function f__07D4_18F9_000B_8253()
 *
 * @name f__07D4_18F9_000B_8253
 * @implements 07D4:18F9:000B:8253 ()
 *
 * Called From: 07D4:18F5:0026:670B
 */
void f__07D4_18F9_000B_8253()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1904); emu_cs = 0x2903; f__2903_00CA_0015_756E();
	f__07D4_1904_0009_6BA3();
}

/**
 * Decompiled function f__07D4_1904_0009_6BA3()
 *
 * @name f__07D4_1904_0009_6BA3
 * @implements 07D4:1904:0009:6BA3 ()
 *
 * Called From: 07D4:1904:000B:8253
 */
void f__07D4_1904_0009_6BA3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_testw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { f__07D4_190E_0057_050D(); return; }
	f__07D4_195C_0009_9B3E(); return;
}

/**
 * Decompiled function f__07D4_190E_0057_050D()
 *
 * @name f__07D4_190E_0057_050D
 * @implements 07D4:190E:0057:050D ()
 *
 * Called From: 07D4:1909:0009:6BA3
 */
void f__07D4_190E_0057_050D()
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
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1952; emu_last_cs = 0x07D4; emu_last_ip = 0x1946; emu_last_length = 0x0057; emu_last_crc = 0x050D; emu_call(); return; }
	emu_cmpb(&emu_ax.l, 0x98);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_1952_0013_DC4D(); return; }
	emu_cmpb(&emu_ax.l, 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1955; emu_last_cs = 0x07D4; emu_last_ip = 0x194E; emu_last_length = 0x0057; emu_last_crc = 0x050D; emu_call(); return; }
	emu_addb(&emu_ax.l, emu_bx.l);
	emu_stosb();
	if (--emu_cx.x != 0) { /* Unresolved jump */ emu_ip = 0x1943; emu_last_cs = 0x07D4; emu_last_ip = 0x1953; emu_last_length = 0x0057; emu_last_crc = 0x050D; emu_call(); }
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	/* Unresolved jump */ emu_ip = 0x18D0; emu_last_cs = 0x07D4; emu_last_ip = 0x1962; emu_last_length = 0x0057; emu_last_crc = 0x050D; emu_call();
}

/**
 * Decompiled function f__07D4_1943_0022_E93A()
 *
 * @name f__07D4_1943_0022_E93A
 * @implements 07D4:1943:0022:E93A ()
 *
 * Called From: 07D4:1953:0013:DC4D
 * Called From: 07D4:1953:0022:E93A
 */
void f__07D4_1943_0022_E93A()
{
	emu_lodsb(emu_ds);
	emu_cmpb(&emu_ax.l, 0x90);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_1952_0013_DC4D(); return; }
	emu_cmpb(&emu_ax.l, 0x98);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_1952_0013_DC4D(); return; }
	emu_cmpb(&emu_ax.l, 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1955; emu_last_cs = 0x07D4; emu_last_ip = 0x194E; emu_last_length = 0x0022; emu_last_crc = 0xE93A; emu_call(); return; }
	emu_addb(&emu_ax.l, emu_bx.l);
	emu_stosb();
	if (--emu_cx.x != 0) { f__07D4_1943_0022_E93A(); return; }
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__07D4_18D0_0003_9D04(); return;
}

/**
 * Decompiled function f__07D4_1952_0013_DC4D()
 *
 * @name f__07D4_1952_0013_DC4D
 * @implements 07D4:1952:0013:DC4D ()
 *
 * Called From: 07D4:1946:0022:E93A
 * Called From: 07D4:194A:0057:050D
 * Called From: 07D4:194A:0022:E93A
 */
void f__07D4_1952_0013_DC4D()
{
	emu_stosb();
	if (--emu_cx.x != 0) { f__07D4_1943_0022_E93A(); return; }
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_ax.x);
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__07D4_18D0_0003_9D04(); return;
}

/**
 * Decompiled function f__07D4_195C_0009_9B3E()
 *
 * @name f__07D4_195C_0009_9B3E
 * @implements 07D4:195C:0009:9B3E ()
 *
 * Called From: 07D4:190B:0009:6BA3
 */
void f__07D4_195C_0009_9B3E()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__07D4_18D0_0003_9D04(); return;
}

/**
 * Decompiled function f__07D4_1965_0006_F7CE()
 *
 * @name f__07D4_1965_0006_F7CE
 * @implements 07D4:1965:0006:F7CE ()
 *
 * Called From: 07D4:18D0:0003:9D04
 */
void f__07D4_1965_0006_F7CE()
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
 * Decompiled function f__07D4_196B_0073_56C1()
 *
 * @name f__07D4_196B_0073_56C1
 * @implements 07D4:196B:0073:56C1 ()
 *
 * Called From: 07D4:0A04:0031:066B
 * Called From: 07D4:0F49:0019:6454
 * Called From: 07D4:10A4:0031:05C3
 * Called From: 176C:06F4:0029:3063
 */
void f__07D4_196B_0073_56C1()
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
	if (emu_flags.zf) { f__07D4_19AF_002F_75C1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x19C0; emu_last_cs = 0x07D4; emu_last_ip = 0x19B5; emu_last_length = 0x0073; emu_last_crc = 0x56C1; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xF0);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_19DA_0004_EAB9(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x100);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_19DA_0004_EAB9(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xF0);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_19DA_0004_EAB9(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_19DE_0005_A97A(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__07D4_19E3_0004_893F(); return;
}

/**
 * Decompiled function f__07D4_19AF_002F_75C1()
 *
 * @name f__07D4_19AF_002F_75C1
 * @implements 07D4:19AF:002F:75C1 ()
 *
 * Called From: 07D4:19A4:0073:56C1
 */
void f__07D4_19AF_002F_75C1()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) { f__07D4_19C0_001E_03DD(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xF0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x19DA; emu_last_cs = 0x07D4; emu_last_ip = 0x19C4; emu_last_length = 0x002F; emu_last_crc = 0x75C1; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x100);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x19DA; emu_last_cs = 0x07D4; emu_last_ip = 0x19CB; emu_last_length = 0x002F; emu_last_crc = 0x75C1; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xF0);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x19DA; emu_last_cs = 0x07D4; emu_last_ip = 0x19D1; emu_last_length = 0x002F; emu_last_crc = 0x75C1; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x19DE; emu_last_cs = 0x07D4; emu_last_ip = 0x19D8; emu_last_length = 0x002F; emu_last_crc = 0x75C1; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x19E3; emu_last_cs = 0x07D4; emu_last_ip = 0x19DC; emu_last_length = 0x002F; emu_last_crc = 0x75C1; emu_call();
}

/**
 * Decompiled function f__07D4_19C0_001E_03DD()
 *
 * @name f__07D4_19C0_001E_03DD
 * @implements 07D4:19C0:001E:03DD ()
 *
 * Called From: 07D4:19B5:002F:75C1
 */
void f__07D4_19C0_001E_03DD()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xF0);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_19DA_0004_EAB9(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x100);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_19DA_0004_EAB9(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xF0);
	if ((emu_flags.sf != emu_flags.of)) { f__07D4_19DA_0004_EAB9(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xB0);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__07D4_19DE_0005_A97A(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__07D4_19E3_0004_893F(); return;
}

/**
 * Decompiled function f__07D4_19DA_0004_EAB9()
 *
 * @name f__07D4_19DA_0004_EAB9
 * @implements 07D4:19DA:0004:EAB9 ()
 *
 * Called From: 07D4:19C4:001E:03DD
 * Called From: 07D4:19C4:0073:56C1
 * Called From: 07D4:19CB:001E:03DD
 * Called From: 07D4:19CB:0073:56C1
 * Called From: 07D4:19D1:001E:03DD
 * Called From: 07D4:19D1:0073:56C1
 */
void f__07D4_19DA_0004_EAB9()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__07D4_19E3_0004_893F(); return;
}

/**
 * Decompiled function f__07D4_19DC_0002_C2BA()
 *
 * @name f__07D4_19DC_0002_C2BA
 * @implements 07D4:19DC:0002:C2BA ()
 *
 * Called From: 07D4:19E1:0005:A97A
 */
void f__07D4_19DC_0002_C2BA()
{
	f__07D4_19E3_0004_893F(); return;
}

/**
 * Decompiled function f__07D4_19DE_0005_A97A()
 *
 * @name f__07D4_19DE_0005_A97A
 * @implements 07D4:19DE:0005:A97A ()
 *
 * Called From: 07D4:19D8:0073:56C1
 * Called From: 07D4:19D8:001E:03DD
 */
void f__07D4_19DE_0005_A97A()
{
	emu_movw(&emu_ax.x, 0x1);
	f__07D4_19DC_0002_C2BA(); return;
}

/**
 * Decompiled function f__07D4_19E3_0004_893F()
 *
 * @name f__07D4_19E3_0004_893F
 * @implements 07D4:19E3:0004:893F ()
 *
 * Called From: 07D4:19DC:0002:C2BA
 * Called From: 07D4:19DC:0004:EAB9
 * Called From: 07D4:19DC:001E:03DD
 * Called From: 07D4:19DC:0073:56C1
 */
void f__07D4_19E3_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
