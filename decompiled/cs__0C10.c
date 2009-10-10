/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0C10_0008_0014_19CD()
 *
 * @name f__0C10_0008_0014_19CD
 * @implements 0C10:0008:0014:19CD ()
 *
 * Called From: 176C:0F0C:0008:9B67
 * Called From: 176C:2534:000B:9475
 * Called From: 1A34:1C95:0008:9B67
 */
void f__0C10_0008_0014_19CD()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x001C); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	f__0C10_001C_000B_D573();
}

/**
 * Decompiled function f__0C10_001C_000B_D573()
 *
 * @name f__0C10_001C_000B_D573
 * @implements 0C10:001C:000B:D573 ()
 *
 */
void f__0C10_001C_000B_D573()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x002C; emu_last_cs = 0x0C10; emu_last_ip = 0x001F; emu_last_length = 0x000B; emu_last_crc = 0xD573; emu_call(); return; }
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0027); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	f__0C10_0027_000A_9E3D();
}

/**
 * Decompiled function f__0C10_0027_000A_9E3D()
 *
 * @name f__0C10_0027_000A_9E3D
 * @implements 0C10:0027:000A:9E3D ()
 *
 */
void f__0C10_0027_000A_9E3D()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__0C10_0031_0006_5783(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__0C10_002E_0003_DD06(); return;
}

/**
 * Decompiled function f__0C10_002E_0003_DD06()
 *
 * @name f__0C10_002E_0003_DD06
 * @implements 0C10:002E:0003:DD06 ()
 *
 * Called From: 0C10:00C9:0009:46FF
 */
void f__0C10_002E_0003_DD06()
{
	f__0C10_00CC_0006_F7CE(); return;
}

/**
 * Decompiled function f__0C10_0031_0006_5783()
 *
 * @name f__0C10_0031_0006_5783
 * @implements 0C10:0031:0006:5783 ()
 *
 * Called From: 0C10:002A:000A:9E3D
 */
void f__0C10_0031_0006_5783()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0037); emu_cs = 0x167E; f__167E_02D8_000C_4C9F();
	f__0C10_0037_000D_AB27();
}

/**
 * Decompiled function f__0C10_0037_000D_AB27()
 *
 * @name f__0C10_0037_000D_AB27
 * @implements 0C10:0037:000D:AB27 ()
 *
 */
void f__0C10_0037_000D_AB27()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0044); emu_cs = 0x167E; f__167E_02D8_000C_4C9F();
	f__0C10_0044_0019_AB96();
}

/**
 * Decompiled function f__0C10_0044_0019_AB96()
 *
 * @name f__0C10_0044_0019_AB96
 * @implements 0C10:0044:0019:AB96 ()
 *
 */
void f__0C10_0044_0019_AB96()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x005B; emu_last_cs = 0x0C10; emu_last_ip = 0x0051; emu_last_length = 0x0019; emu_last_crc = 0xAB96; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__0C10_005D_000B_0B0F(); return; }
	/* Unresolved jump */ emu_ip = 0x002C; emu_last_cs = 0x0C10; emu_last_ip = 0x005B; emu_last_length = 0x0019; emu_last_crc = 0xAB96; emu_call();
}

/**
 * Decompiled function f__0C10_005D_000B_0B0F()
 *
 * @name f__0C10_005D_000B_0B0F
 * @implements 0C10:005D:000B:0B0F ()
 *
 * Called From: 0C10:0059:0019:AB96
 */
void f__0C10_005D_000B_0B0F()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0068); f__0C10_0168_0014_CEB0();
	f__0C10_0068_000E_57D7();
}

/**
 * Decompiled function f__0C10_0068_000E_57D7()
 *
 * @name f__0C10_0068_000E_57D7
 * @implements 0C10:0068:000E:57D7 ()
 *
 */
void f__0C10_0068_000E_57D7()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x0076); f__0C10_0168_0014_CEB0();
	f__0C10_0076_0012_339E();
}

/**
 * Decompiled function f__0C10_0076_0012_339E()
 *
 * @name f__0C10_0076_0012_339E
 * @implements 0C10:0076:0012:339E ()
 *
 */
void f__0C10_0076_0012_339E()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_flags.zf) { f__0C10_0097_000B_CBA9(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0088); f__0C10_0182_0012_B114();
	f__0C10_0088_000D_9624();
}

/**
 * Decompiled function f__0C10_0088_000D_9624()
 *
 * @name f__0C10_0088_000D_9624
 * @implements 0C10:0088:000D:9624 ()
 *
 */
void f__0C10_0088_000D_9624()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x0095); f__0C10_0182_0012_B114();
	f__0C10_0095_000D_063B();
}

/**
 * Decompiled function f__0C10_0095_000D_063B()
 *
 * @name f__0C10_0095_000D_063B
 * @implements 0C10:0095:000D:063B ()
 *
 */
void f__0C10_0095_000D_063B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__0C10_0097_000B_CBA9(); return;
}

/**
 * Decompiled function f__0C10_0097_000B_CBA9()
 *
 * @name f__0C10_0097_000B_CBA9
 * @implements 0C10:0097:000B:CBA9 ()
 *
 * Called From: 0C10:007B:0012:339E
 */
void f__0C10_0097_000B_CBA9()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x00A2); f__0C10_013D_0016_8C5C();
	f__0C10_00A2_0012_93B0();
}

/**
 * Decompiled function f__0C10_00A2_0012_93B0()
 *
 * @name f__0C10_00A2_0012_93B0
 * @implements 0C10:00A2:0012:93B0 ()
 *
 */
void f__0C10_00A2_0012_93B0()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00C6; emu_last_cs = 0x0C10; emu_last_ip = 0x00A6; emu_last_length = 0x0012; emu_last_crc = 0x93B0; emu_call(); return; }
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x00B4); f__0C10_00D2_000F_D61E();
	f__0C10_00B4_000F_EBFF();
}

/**
 * Decompiled function f__0C10_00B4_000F_EBFF()
 *
 * @name f__0C10_00B4_000F_EBFF
 * @implements 0C10:00B4:000F:EBFF ()
 *
 */
void f__0C10_00B4_000F_EBFF()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x00C3); f__0C10_00D2_000F_D61E();
	f__0C10_00C3_0009_46FF();
}

/**
 * Decompiled function f__0C10_00C3_0009_46FF()
 *
 * @name f__0C10_00C3_0009_46FF
 * @implements 0C10:00C3:0009:46FF ()
 *
 */
void f__0C10_00C3_0009_46FF()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x1);
	f__0C10_002E_0003_DD06(); return;
}

/**
 * Decompiled function f__0C10_00CC_0006_F7CE()
 *
 * @name f__0C10_00CC_0006_F7CE
 * @implements 0C10:00CC:0006:F7CE ()
 *
 * Called From: 0C10:002E:0003:DD06
 */
void f__0C10_00CC_0006_F7CE()
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
 * Decompiled function f__0C10_00D2_000F_D61E()
 *
 * @name f__0C10_00D2_000F_D61E
 * @implements 0C10:00D2:000F:D61E ()
 *
 * Called From: 0972:0BF0:0012:0853
 * Called From: 0C10:00B1:0012:93B0
 * Called From: 0C10:00C0:000F:EBFF
 * Called From: 1A34:2C7F:0020:54FF
 * Called From: 1A34:2C7F:003E:E039
 */
void f__0C10_00D2_000F_D61E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C10_00E1_003D_FEA4(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__0C10_00DF_0002_ED3A(); return;
}

/**
 * Decompiled function f__0C10_00DF_0002_ED3A()
 *
 * @name f__0C10_00DF_0002_ED3A
 * @implements 0C10:00DF:0002:ED3A ()
 *
 * Called From: 0C10:0139:0005:87FA
 * Called From: 0C10:0139:0008:1D72
 */
void f__0C10_00DF_0002_ED3A()
{
	f__0C10_013B_0002_2597(); return;
}

/**
 * Decompiled function f__0C10_00E1_003D_FEA4()
 *
 * @name f__0C10_00E1_003D_FEA4
 * @implements 0C10:00E1:003D:FEA4 ()
 *
 * Called From: 0C10:00DB:000F:D61E
 */
void f__0C10_00E1_003D_FEA4()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x26), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x1);
	if (!emu_flags.zf) { f__0C10_0136_0005_87FA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2C94);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x16), 0x10);
	if (emu_flags.zf) { f__0C10_0136_0005_87FA(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x011E); emu_cs = 0x1A34; f__1A34_3491_0032_AFF8();
	f__0C10_011E_0015_46CA();
}

/**
 * Decompiled function f__0C10_011E_0015_46CA()
 *
 * @name f__0C10_011E_0015_46CA
 * @implements 0C10:011E:0015:46CA ()
 *
 */
void f__0C10_011E_0015_46CA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { f__0C10_0136_0005_87FA(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0133); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	f__0C10_0133_0008_1D72();
}

/**
 * Decompiled function f__0C10_0133_0008_1D72()
 *
 * @name f__0C10_0133_0008_1D72
 * @implements 0C10:0133:0008:1D72 ()
 *
 */
void f__0C10_0133_0008_1D72()
{
	emu_addw(&emu_sp, 0x6);
	f__0C10_0136_0005_87FA(); return;
}

/**
 * Decompiled function f__0C10_0136_0005_87FA()
 *
 * @name f__0C10_0136_0005_87FA
 * @implements 0C10:0136:0005:87FA ()
 *
 * Called From: 0C10:00F4:003D:FEA4
 * Called From: 0C10:0111:003D:FEA4
 * Called From: 0C10:0122:0015:46CA
 */
void f__0C10_0136_0005_87FA()
{
	emu_movw(&emu_ax, 0x1);
	f__0C10_00DF_0002_ED3A(); return;
}

/**
 * Decompiled function f__0C10_013B_0002_2597()
 *
 * @name f__0C10_013B_0002_2597
 * @implements 0C10:013B:0002:2597 ()
 *
 * Called From: 0C10:00DF:0002:ED3A
 */
void f__0C10_013B_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C10_013D_0016_8C5C()
 *
 * @name f__0C10_013D_0016_8C5C
 * @implements 0C10:013D:0016:8C5C ()
 *
 * Called From: 0C10:009F:000B:CBA9
 * Called From: 0C10:009F:000D:063B
 * Called From: 176C:247C:0015:C163
 * Called From: 1A34:0111:0020:5691
 * Called From: 1A34:28DC:000B:C880
 */
void f__0C10_013D_0016_8C5C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0162; emu_last_cs = 0x0C10; emu_last_ip = 0x0146; emu_last_length = 0x0016; emu_last_crc = 0x8C5C; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0153); f__0C10_0168_0014_CEB0();
	f__0C10_0153_000B_B65C();
}

/**
 * Decompiled function f__0C10_0153_000B_B65C()
 *
 * @name f__0C10_0153_000B_B65C
 * @implements 0C10:0153:000B:B65C ()
 *
 */
void f__0C10_0153_000B_B65C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__0C10_015E_0004_EA39(); return; }
	emu_movw(&emu_ax, 0x1);
	f__0C10_0160_0002_C23A(); return;
}

/**
 * Decompiled function f__0C10_015E_0004_EA39()
 *
 * @name f__0C10_015E_0004_EA39
 * @implements 0C10:015E:0004:EA39 ()
 *
 * Called From: 0C10:0157:000B:B65C
 */
void f__0C10_015E_0004_EA39()
{
	emu_xorw(&emu_ax, emu_ax);
	f__0C10_0160_0002_C23A(); return;
}

/**
 * Decompiled function f__0C10_0160_0002_C23A()
 *
 * @name f__0C10_0160_0002_C23A
 * @implements 0C10:0160:0002:C23A ()
 *
 * Called From: 0C10:015C:000B:B65C
 */
void f__0C10_0160_0002_C23A()
{
	f__0C10_0166_0002_2597(); return;
}

/**
 * Decompiled function f__0C10_0166_0002_2597()
 *
 * @name f__0C10_0166_0002_2597
 * @implements 0C10:0166:0002:2597 ()
 *
 * Called From: 0C10:0160:0004:EA39
 * Called From: 0C10:0160:0002:C23A
 */
void f__0C10_0166_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C10_0168_0014_CEB0()
 *
 * @name f__0C10_0168_0014_CEB0
 * @implements 0C10:0168:0014:CEB0 ()
 *
 * Called From: 0972:0AA5:0012:C6CB
 * Called From: 0972:0AC1:0012:B5DA
 * Called From: 0C10:0065:000B:0B0F
 * Called From: 0C10:0073:000E:57D7
 * Called From: 0C10:0150:0016:8C5C
 * Called From: 0C3A:2979:000B:70FD
 * Called From: 176C:0F1B:000F:9658
 * Called From: 176C:2BE4:0014:2C56
 * Called From: 1A34:311B:001E:AED8
 * Called From: 1A34:36C1:000B:70FD
 * Called From: 1A34:36C1:001D:281D
 * Called From: 1A34:36C1:002F:3E26
 */
void f__0C10_0168_0014_CEB0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__0C10_017C_0004_9539(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x26));
	f__0C10_0180_0002_2597(); return;
}

/**
 * Decompiled function f__0C10_017A_0002_C23A()
 *
 * @name f__0C10_017A_0002_C23A
 * @implements 0C10:017A:0002:C23A ()
 *
 * Called From: 0C10:017E:0004:9539
 */
void f__0C10_017A_0002_C23A()
{
	f__0C10_0180_0002_2597(); return;
}

/**
 * Decompiled function f__0C10_017C_0004_9539()
 *
 * @name f__0C10_017C_0004_9539
 * @implements 0C10:017C:0004:9539 ()
 *
 * Called From: 0C10:0171:0014:CEB0
 */
void f__0C10_017C_0004_9539()
{
	emu_xorw(&emu_ax, emu_ax);
	f__0C10_017A_0002_C23A(); return;
}

/**
 * Decompiled function f__0C10_0180_0002_2597()
 *
 * @name f__0C10_0180_0002_2597
 * @implements 0C10:0180:0002:2597 ()
 *
 * Called From: 0C10:017A:0014:CEB0
 * Called From: 0C10:017A:0002:C23A
 */
void f__0C10_0180_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C10_0182_0012_B114()
 *
 * @name f__0C10_0182_0012_B114
 * @implements 0C10:0182:0012:B114 ()
 *
 * Called From: 0972:0ADD:000B:D0F3
 * Called From: 0972:0AEC:000F:3656
 * Called From: 0972:0E3A:0010:0DA8
 * Called From: 0972:11FD:0012:15D4
 * Called From: 0AEC:0392:0011:A949
 * Called From: 0C10:0085:0012:339E
 * Called From: 0C10:0092:000D:9624
 * Called From: 0C3A:2954:000F:DCEB
 * Called From: 176C:0A1A:0010:0D90
 * Called From: 176C:0BA4:0046:5A28
 * Called From: 176C:0C3E:0017:BC9C
 * Called From: 176C:2C65:000D:8532
 * Called From: 1A34:1DCF:000D:0971
 * Called From: 1A34:2F84:000E:2A03
 * Called From: 1A34:3679:000F:DCEB
 */
void f__0C10_0182_0012_B114()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C10_0194_000D_4CEC(); return; }
	f__0C10_023E_0004_E839(); return;
}

/**
 * Decompiled function f__0C10_0194_000D_4CEC()
 *
 * @name f__0C10_0194_000D_4CEC
 * @implements 0C10:0194:000D:4CEC ()
 *
 * Called From: 0C10:018F:0012:B114
 */
void f__0C10_0194_000D_4CEC()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x26));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01A1); emu_cs = 0x167E; f__167E_02D8_000C_4C9F();
	f__0C10_01A1_0012_26F5();
}

/**
 * Decompiled function f__0C10_01A1_0012_26F5()
 *
 * @name f__0C10_01A1_0012_26F5
 * @implements 0C10:01A1:0012:26F5 ()
 *
 */
void f__0C10_01A1_0012_26F5()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x01B3); f__0C10_0247_000D_A5E6();
	f__0C10_01B3_000D_063C();
}

/**
 * Decompiled function f__0C10_01B3_000D_063C()
 *
 * @name f__0C10_01B3_000D_063C
 * @implements 0C10:01B3:000D:063C ()
 *
 */
void f__0C10_01B3_000D_063C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x01C0); f__0C10_0247_000D_A5E6();
	f__0C10_01C0_0016_1D4B();
}

/**
 * Decompiled function f__0C10_01C0_0016_1D4B()
 *
 * @name f__0C10_01C0_0016_1D4B
 * @implements 0C10:01C0:0016:1D4B ()
 *
 */
void f__0C10_01C0_0016_1D4B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__0C10_023E_0004_E839(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01D6); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	f__0C10_01D6_0036_61BA();
}

/**
 * Decompiled function f__0C10_01D6_0036_61BA()
 *
 * @name f__0C10_01D6_0036_61BA
 * @implements 0C10:01D6:0036:61BA ()
 *
 */
void f__0C10_01D6_0036_61BA()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__0C10_020C_0006_3784(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x56));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x26));
	if (!emu_flags.zf) { f__0C10_020A_0002_CC3A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	f__0C10_0224_001E_CED9(); return;
}

/**
 * Decompiled function f__0C10_020A_0002_CC3A()
 *
 * @name f__0C10_020A_0002_CC3A
 * @implements 0C10:020A:0002:CC3A ()
 *
 * Called From: 0C10:01FF:0036:61BA
 */
void f__0C10_020A_0002_CC3A()
{
	f__0C10_0224_001E_CED9(); return;
}

/**
 * Decompiled function f__0C10_020C_0006_3784()
 *
 * @name f__0C10_020C_0006_3784
 * @implements 0C10:020C:0006:3784 ()
 *
 * Called From: 0C10:01E3:0036:61BA
 */
void f__0C10_020C_0006_3784()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0212); emu_cs = 0x167E; f__167E_02AE_000C_CC85();
	f__0C10_0212_000B_6134();
}

/**
 * Decompiled function f__0C10_0212_000B_6134()
 *
 * @name f__0C10_0212_000B_6134
 * @implements 0C10:0212:000B:6134 ()
 *
 */
void f__0C10_0212_000B_6134()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0224; emu_last_cs = 0x0C10; emu_last_ip = 0x0215; emu_last_length = 0x000B; emu_last_crc = 0x6134; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x021D); emu_cs = 0x167E; f__167E_02AE_000C_CC85();
	f__0C10_021D_0025_6A21();
}

/**
 * Decompiled function f__0C10_021D_0025_6A21()
 *
 * @name f__0C10_021D_0025_6A21
 * @implements 0C10:021D:0025:6A21 ()
 *
 */
void f__0C10_021D_0025_6A21()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	f__0C10_0224_001E_CED9(); return;
}

/**
 * Decompiled function f__0C10_0224_001E_CED9()
 *
 * @name f__0C10_0224_001E_CED9
 * @implements 0C10:0224:001E:CED9 ()
 *
 * Called From: 0C10:020A:0036:61BA
 * Called From: 0C10:020A:0002:CC3A
 */
void f__0C10_0224_001E_CED9()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0235; emu_last_cs = 0x0C10; emu_last_ip = 0x022A; emu_last_length = 0x001E; emu_last_crc = 0xCED9; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x26), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x26), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	f__0C10_0242_0005_8BCF(); return;
}

/**
 * Decompiled function f__0C10_023E_0004_E839()
 *
 * @name f__0C10_023E_0004_E839
 * @implements 0C10:023E:0004:E839 ()
 *
 * Called From: 0C10:0191:0012:B114
 * Called From: 0C10:01C4:0016:1D4B
 */
void f__0C10_023E_0004_E839()
{
	emu_xorw(&emu_ax, emu_ax);
	f__0C10_0242_0005_8BCF(); return;
}

/**
 * Decompiled function f__0C10_0242_0005_8BCF()
 *
 * @name f__0C10_0242_0005_8BCF
 * @implements 0C10:0242:0005:8BCF ()
 *
 * Called From: 0C10:0240:0004:E839
 * Called From: 0C10:0240:0025:6A21
 * Called From: 0C10:0240:001E:CED9
 */
void f__0C10_0242_0005_8BCF()
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
 * Decompiled function f__0C10_0247_000D_A5E6()
 *
 * @name f__0C10_0247_000D_A5E6
 * @implements 0C10:0247:000D:A5E6 ()
 *
 * Called From: 0C10:01B0:0012:26F5
 * Called From: 0C10:01BD:000D:063C
 */
void f__0C10_0247_000D_A5E6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__0C10_0254_003C_67AC(); return; }
	f__0C10_02A7_0002_2597(); return;
}

/**
 * Decompiled function f__0C10_0254_003C_67AC()
 *
 * @name f__0C10_0254_003C_67AC
 * @implements 0C10:0254:003C:67AC ()
 *
 * Called From: 0C10:0250:000D:A5E6
 */
void f__0C10_0254_003C_67AC()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x26), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x1);
	if (!emu_flags.zf) { f__0C10_02A7_0002_2597(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2C94);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x16), 0x10);
	if (emu_flags.zf) { f__0C10_02A7_0002_2597(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0290); emu_cs = 0x1A34; f__1A34_3491_0032_AFF8();
	f__0C10_0290_0014_0758();
}

/**
 * Decompiled function f__0C10_0290_0014_0758()
 *
 * @name f__0C10_0290_0014_0758
 * @implements 0C10:0290:0014:0758 ()
 *
 */
void f__0C10_0290_0014_0758()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { f__0C10_02A7_0002_2597(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x02A4); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	f__0C10_02A4_0005_6143();
}

/**
 * Decompiled function f__0C10_02A4_0005_6143()
 *
 * @name f__0C10_02A4_0005_6143
 * @implements 0C10:02A4:0005:6143 ()
 *
 */
void f__0C10_02A4_0005_6143()
{
	emu_addw(&emu_sp, 0x6);
	f__0C10_02A7_0002_2597(); return;
}

/**
 * Decompiled function f__0C10_02A7_0002_2597()
 *
 * @name f__0C10_02A7_0002_2597
 * @implements 0C10:02A7:0002:2597 ()
 *
 * Called From: 0C10:0252:000D:A5E6
 * Called From: 0C10:0266:003C:67AC
 * Called From: 0C10:0283:003C:67AC
 * Called From: 0C10:0294:0014:0758
 */
void f__0C10_02A7_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
