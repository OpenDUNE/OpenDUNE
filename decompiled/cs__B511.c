/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B511_0000_000E_B463()
 *
 * @name f__B511_0000_000E_B463
 * @implements B511:0000:000E:B463 ()
 *
 * Called From: 3511:0020:0005:0000
 */
void f__B511_0000_000E_B463()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x000E); f__B511_001E_0010_AE09();
	f__B511_000E_000E_C19A();
}

/**
 * Decompiled function f__B511_000E_000E_C19A()
 *
 * @name f__B511_000E_000E_C19A
 * @implements B511:000E:000E:C19A ()
 *
 */
void f__B511_000E_000E_C19A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x001C; emu_last_cs = 0xB511; emu_last_ip = 0x0015; emu_last_length = 0x000E; emu_last_crc = 0xC19A; emu_call(); return; }
	emu_push(emu_cs);
	emu_push(0x001C); f__B511_0C06_002A_8725();
	f__B511_001C_0002_2597();
}

/**
 * Decompiled function f__B511_001C_0002_2597()
 *
 * @name f__B511_001C_0002_2597
 * @implements B511:001C:0002:2597 ()
 *
 */
void f__B511_001C_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_001E_0010_AE09()
 *
 * @name f__B511_001E_0010_AE09
 * @implements B511:001E:0010:AE09 ()
 *
 * Called From: B511:000B:000E:B463
 */
void f__B511_001E_0010_AE09()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax, 0xFFFE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x002E); emu_cs = 0x3483; ovl__3483(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_002E_0006_5897();
}

/**
 * Decompiled function f__B511_002E_0006_5897()
 *
 * @name f__B511_002E_0006_5897
 * @implements B511:002E:0006:5897 ()
 *
 */
void f__B511_002E_0006_5897()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x0034); f__B511_0A8F_000E_EE64();
	f__B511_0034_000D_86FD();
}

/**
 * Decompiled function f__B511_0034_000D_86FD()
 *
 * @name f__B511_0034_000D_86FD
 * @implements B511:0034:000D:86FD ()
 *
 */
void f__B511_0034_000D_86FD()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0041); emu_cs = 0x34B5; ovl__34B5(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0041_000B_5F37();
}

/**
 * Decompiled function f__B511_0041_000B_5F37()
 *
 * @name f__B511_0041_000B_5F37
 * @implements B511:0041:000B:5F37 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_0041_000B_5F37()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x006B; emu_last_cs = 0xB511; emu_last_ip = 0x0045; emu_last_length = 0x000B; emu_last_crc = 0x5F37; emu_call(); return; }
	emu_push(emu_cs);
	emu_push(0x004C); f__B511_0091_001D_9C25();
	f__B511_004C_001F_8760();
}

/**
 * Decompiled function f__B511_004C_001F_8760()
 *
 * @name f__B511_004C_001F_8760
 * @implements B511:004C:001F:8760 ()
 *
 */
void f__B511_004C_001F_8760()
{
	emu_cmpw(&emu_si, 0x5);
	if (!emu_flags.cf) { f__B511_0069_0002_CFBA(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37F2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37F0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37F6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37F4), 0x0);
	f__B511_0069_0002_CFBA(); return;
}

/**
 * Decompiled function f__B511_0069_0002_CFBA()
 *
 * @name f__B511_0069_0002_CFBA
 * @implements B511:0069:0002:CFBA ()
 *
 * Called From: B511:004F:001F:8760
 */
void f__B511_0069_0002_CFBA()
{
	f__B511_008A_0007_924A(); return;
}

/**
 * Decompiled function f__B511_008A_0007_924A()
 *
 * @name f__B511_008A_0007_924A
 * @implements B511:008A:0007:924A ()
 *
 * Called From: B511:0069:001F:8760
 * Called From: B511:0069:0002:CFBA
 */
void f__B511_008A_0007_924A()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0091_001D_9C25()
 *
 * @name f__B511_0091_001D_9C25
 * @implements B511:0091:001D:9C25 ()
 *
 * Called From: B511:0049:000B:5F37
 * Called From: B511:0717:000C:C3E1
 */
void f__B511_0091_001D_9C25()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x0);
	emu_push(emu_cs); emu_push(0x00AE); emu_cs = 0x1082; emu_Building_Recount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_00AE_0005_D341();
}

/**
 * Decompiled function f__B511_00AE_0005_D341()
 *
 * @name f__B511_00AE_0005_D341
 * @implements B511:00AE:0005:D341 ()
 *
 */
void f__B511_00AE_0005_D341()
{
	emu_push(emu_cs); emu_push(0x00B3); emu_cs = 0x0FE4; emu_Unit_Recount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_00B3_0005_ACC2();
}

/**
 * Decompiled function f__B511_00B3_0005_ACC2()
 *
 * @name f__B511_00B3_0005_ACC2
 * @implements B511:00B3:0005:ACC2 ()
 *
 */
void f__B511_00B3_0005_ACC2()
{
	emu_push(emu_cs); emu_push(0x00B8); emu_cs = 0x104B; emu_AirUnit_Recount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_00B8_0005_6C97();
}

/**
 * Decompiled function f__B511_00B8_0005_6C97()
 *
 * @name f__B511_00B8_0005_6C97
 * @implements B511:00B8:0005:6C97 ()
 *
 */
void f__B511_00B8_0005_6C97()
{
	emu_xorw(&emu_di, emu_di);
	f__B511_013F_0009_2E15(); return;
}

/**
 * Decompiled function f__B511_00BD_0006_22E8()
 *
 * @name f__B511_00BD_0006_22E8
 * @implements B511:00BD:0006:22E8 ()
 *
 * Called From: B511:0145:0009:2E15
 * Called From: B511:0145:000A:3FD5
 * Called From: B511:0145:000C:1A4E
 */
void f__B511_00BD_0006_22E8()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00C3); emu_cs = 0x34CD; ovl__34CD(26);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_00C3_0031_A63E();
}

/**
 * Decompiled function f__B511_00C3_0031_A63E()
 *
 * @name f__B511_00C3_0031_A63E
 * @implements B511:00C3:0031:A63E ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_00C3_0031_A63E()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__B511_00DD_0017_80BE(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x1);
	if (!emu_flags.zf) { f__B511_00EE_0006_62E9(); return; }
	f__B511_00DD_0017_80BE(); return;
}

/**
 * Decompiled function f__B511_00DD_0017_80BE()
 *
 * @name f__B511_00DD_0017_80BE
 * @implements B511:00DD:0017:80BE ()
 *
 * Called From: B511:00D0:0031:A63E
 */
void f__B511_00DD_0017_80BE()
{
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xEF);
	f__B511_00EE_0006_62E9(); return;
}

/**
 * Decompiled function f__B511_00EE_0006_62E9()
 *
 * @name f__B511_00EE_0006_62E9
 * @implements B511:00EE:0006:62E9 ()
 *
 * Called From: B511:00DB:0031:A63E
 */
void f__B511_00EE_0006_62E9()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x00F4); emu_cs = 0x34CD; ovl__34CD(30);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_00F4_0048_84FE();
}

/**
 * Decompiled function f__B511_00F4_0048_84FE()
 *
 * @name f__B511_00F4_0048_84FE
 * @implements B511:00F4:0048:84FE ()
 *
 */
void f__B511_00F4_0048_84FE()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__B511_010E_002E_C197(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x1);
	if (!emu_flags.zf) { f__B511_011F_001D_05F8(); return; }
	f__B511_010E_002E_C197(); return;
}

/**
 * Decompiled function f__B511_010E_002E_C197()
 *
 * @name f__B511_010E_002E_C197
 * @implements B511:010E:002E:C197 ()
 *
 * Called From: B511:0101:0048:84FE
 */
void f__B511_010E_002E_C197()
{
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xDF);
	f__B511_011F_001D_05F8(); return;
}

/**
 * Decompiled function f__B511_011F_001D_05F8()
 *
 * @name f__B511_011F_001D_05F8
 * @implements B511:011F:001D:05F8 ()
 *
 * Called From: B511:010C:0048:84FE
 */
void f__B511_011F_001D_05F8()
{
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_flags.zf) { f__B511_013E_000A_3FD5(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x013C); emu_cs = 0x34CD; ovl__34CD(34);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_013C_000C_1A4E();
}

/**
 * Decompiled function f__B511_013C_000C_1A4E()
 *
 * @name f__B511_013C_000C_1A4E
 * @implements B511:013C:000C:1A4E ()
 *
 */
void f__B511_013C_000C_1A4E()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B511_013E_000A_3FD5(); return;
}

/**
 * Decompiled function f__B511_013E_000A_3FD5()
 *
 * @name f__B511_013E_000A_3FD5
 * @implements B511:013E:000A:3FD5 ()
 *
 * Called From: B511:0130:002E:C197
 * Called From: B511:0130:001D:05F8
 */
void f__B511_013E_000A_3FD5()
{
	emu_incw(&emu_di);
	f__B511_013F_0009_2E15(); return;
}

/**
 * Decompiled function f__B511_013F_0009_2E15()
 *
 * @name f__B511_013F_0009_2E15
 * @implements B511:013F:0009:2E15 ()
 *
 * Called From: B511:00BA:0005:6C97
 */
void f__B511_013F_0009_2E15()
{
	emu_cmpw(&emu_di, 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) { f__B511_0148_0013_5F86(); return; }
	f__B511_00BD_0006_22E8(); return;
}

/**
 * Decompiled function f__B511_0148_0013_5F86()
 *
 * @name f__B511_0148_0013_5F86
 * @implements B511:0148:0013:5F86 ()
 *
 * Called From: B511:0143:000A:3FD5
 * Called From: B511:0143:000C:1A4E
 */
void f__B511_0148_0013_5F86()
{
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x015B); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_015B_0005_9EAE();
}

/**
 * Decompiled function f__B511_015B_0005_9EAE()
 *
 * @name f__B511_015B_0005_9EAE
 * @implements B511:015B:0005:9EAE ()
 *
 */
void f__B511_015B_0005_9EAE()
{
	emu_addw(&emu_sp, 0x8);
	f__B511_0197_0021_84A6(); return;
}

/**
 * Decompiled function f__B511_0160_0016_EAC5()
 *
 * @name f__B511_0160_0016_EAC5
 * @implements B511:0160:0016:EAC5 ()
 *
 * Called From: B511:01A3:0021:84A6
 * Called From: B511:01A3:0023:CF90
 */
void f__B511_0160_0016_EAC5()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if (!emu_flags.zf) { f__B511_018A_000B_799F(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0176); emu_cs = 0x1A34; f__1A34_2B18_0011_E4D5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0176_0011_2C4F();
}

/**
 * Decompiled function f__B511_0176_0011_2C4F()
 *
 * @name f__B511_0176_0011_2C4F
 * @implements B511:0176:0011:2C4F ()
 *
 */
void f__B511_0176_0011_2C4F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0187); emu_cs = 0x34CD; ovl__34CD(22);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0187_000E_5BF5();
}

/**
 * Decompiled function f__B511_0187_000E_5BF5()
 *
 * @name f__B511_0187_000E_5BF5
 * @implements B511:0187:000E:5BF5 ()
 *
 */
void f__B511_0187_000E_5BF5()
{
	emu_addw(&emu_sp, 0x6);
	f__B511_018A_000B_799F(); return;
}

/**
 * Decompiled function f__B511_018A_000B_799F()
 *
 * @name f__B511_018A_000B_799F
 * @implements B511:018A:000B:799F ()
 *
 * Called From: B511:0169:0016:EAC5
 */
void f__B511_018A_000B_799F()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0195); emu_cs = 0x0FE4; emu_Unit_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0195_0023_CF90();
}

/**
 * Decompiled function f__B511_0195_0023_CF90()
 *
 * @name f__B511_0195_0023_CF90
 * @implements B511:0195:0023:CF90 ()
 *
 */
void f__B511_0195_0023_CF90()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B511_0197_0021_84A6(); return;
}

/**
 * Decompiled function f__B511_0197_0021_84A6()
 *
 * @name f__B511_0197_0021_84A6
 * @implements B511:0197:0021:84A6 ()
 *
 * Called From: B511:015E:0005:9EAE
 */
void f__B511_0197_0021_84A6()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__B511_0160_0016_EAC5(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x01B8); emu_cs = 0x1082; emu_Building_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_01B8_0006_D78F();
}

/**
 * Decompiled function f__B511_01B8_0006_D78F()
 *
 * @name f__B511_01B8_0006_D78F
 * @implements B511:01B8:0006:D78F ()
 *
 */
void f__B511_01B8_0006_D78F()
{
	emu_addw(&emu_sp, 0x8);
	f__B511_02F3_0011_CEBD(); return;
}

/**
 * Decompiled function f__B511_01BE_000E_2B7B()
 *
 * @name f__B511_01BE_000E_2B7B
 * @implements B511:01BE:000E:2B7B ()
 *
 * Called From: B511:0301:0011:CEBD
 * Called From: B511:0301:0013:858B
 */
void f__B511_01BE_000E_2B7B()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if (emu_flags.zf) { f__B511_01CC_000B_5450(); return; }
	f__B511_02E6_000B_166D(); return;
}

/**
 * Decompiled function f__B511_01CC_000B_5450()
 *
 * @name f__B511_01CC_000B_5450
 * @implements B511:01CC:000B:5450 ()
 *
 * Called From: B511:01C7:000E:2B7B
 */
void f__B511_01CC_000B_5450()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x01D7); emu_cs = 0x0C3A; f__0C3A_2433_0042_DBC6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_01D7_0024_B3E5();
}

/**
 * Decompiled function f__B511_01D7_0024_B3E5()
 *
 * @name f__B511_01D7_0024_B3E5
 * @implements B511:01D7:0024:B3E5 ()
 *
 */
void f__B511_01D7_0024_B3E5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xB);
	if (!emu_flags.zf) { f__B511_0258_0018_7FFC(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0258; emu_last_cs = 0xB511; emu_last_ip = 0x01EB; emu_last_length = 0x0024; emu_last_crc = 0xB3E5; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x3));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01FB); emu_cs = 0x0FE4; emu_ip = 0x05FD; emu_last_cs = 0xB511; emu_last_ip = 0x01F6; emu_last_length = 0x0024; emu_last_crc = 0xB3E5; emu_call();
	/* Unresolved jump */ emu_ip = 0x01FB; emu_last_cs = 0xB511; emu_last_ip = 0x01FB; emu_last_length = 0x0024; emu_last_crc = 0xB3E5; emu_call();
}

/**
 * Decompiled function f__B511_0258_0018_7FFC()
 *
 * @name f__B511_0258_0018_7FFC
 * @implements B511:0258:0018:7FFC ()
 *
 * Called From: B511:01E1:0024:B3E5
 */
void f__B511_0258_0018_7FFC()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0270); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0270_001B_5DD0();
}

/**
 * Decompiled function f__B511_0270_001B_5DD0()
 *
 * @name f__B511_0270_001B_5DD0
 * @implements B511:0270:001B:5DD0 ()
 *
 */
void f__B511_0270_001B_5DD0()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x2);
	if (!emu_flags.zf) { f__B511_02A3_000E_EBD1(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x028B); emu_cs = 0x10BE; emu_ip = 0x01AB; emu_last_cs = 0xB511; emu_last_ip = 0x0286; emu_last_length = 0x001B; emu_last_crc = 0x5DD0; emu_call();
	/* Unresolved jump */ emu_ip = 0x028B; emu_last_cs = 0xB511; emu_last_ip = 0x028B; emu_last_length = 0x001B; emu_last_crc = 0x5DD0; emu_call();
}

/**
 * Decompiled function f__B511_02A3_000E_EBD1()
 *
 * @name f__B511_02A3_000E_EBD1
 * @implements B511:02A3:000E:EBD1 ()
 *
 * Called From: B511:027B:001B:5DD0
 */
void f__B511_02A3_000E_EBD1()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02B1); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_02B1_001D_CE78();
}

/**
 * Decompiled function f__B511_02B1_001D_CE78()
 *
 * @name f__B511_02B1_001D_CE78
 * @implements B511:02B1:001D:CE78 ()
 *
 */
void f__B511_02B1_001D_CE78()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x20));
	if (!emu_flags.zf) { f__B511_02E6_000B_166D(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02CE); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_02CE_0023_44EC();
}

/**
 * Decompiled function f__B511_02CE_0023_44EC()
 *
 * @name f__B511_02CE_0023_44EC
 * @implements B511:02CE:0023:44EC ()
 *
 */
void f__B511_02CE_0023_44EC()
{
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_cx, emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_get_memory16(emu_es, emu_si, 0x20), emu_cx);
	emu_movw(&emu_get_memory16(emu_es, emu_si, 0x1E), emu_bx);
	f__B511_02E6_000B_166D(); return;
}

/**
 * Decompiled function f__B511_02E6_000B_166D()
 *
 * @name f__B511_02E6_000B_166D
 * @implements B511:02E6:000B:166D ()
 *
 * Called From: B511:01C9:000E:2B7B
 * Called From: B511:02BE:001D:CE78
 */
void f__B511_02E6_000B_166D()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x02F1); emu_cs = 0x1082; emu_Building_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_02F1_0013_858B();
}

/**
 * Decompiled function f__B511_02F1_0013_858B()
 *
 * @name f__B511_02F1_0013_858B
 * @implements B511:02F1:0013:858B ()
 *
 */
void f__B511_02F1_0013_858B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B511_02F3_0011_CEBD(); return;
}

/**
 * Decompiled function f__B511_02F3_0011_CEBD()
 *
 * @name f__B511_02F3_0011_CEBD
 * @implements B511:02F3:0011:CEBD ()
 *
 * Called From: B511:01BB:0006:D78F
 */
void f__B511_02F3_0011_CEBD()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__B511_0304_000B_E66F(); return; }
	f__B511_01BE_000E_2B7B(); return;
}

/**
 * Decompiled function f__B511_0304_000B_E66F()
 *
 * @name f__B511_0304_000B_E66F
 * @implements B511:0304:000B:E66F ()
 *
 * Called From: B511:02FF:0013:858B
 */
void f__B511_0304_000B_E66F()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x030F); emu_cs = 0x10BE; emu_House_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_030F_0002_DD3A();
}

/**
 * Decompiled function f__B511_030F_0002_DD3A()
 *
 * @name f__B511_030F_0002_DD3A
 * @implements B511:030F:0002:DD3A ()
 *
 */
void f__B511_030F_0002_DD3A()
{
	f__B511_034B_0019_B08E(); return;
}

/**
 * Decompiled function f__B511_0311_000B_3CA9()
 *
 * @name f__B511_0311_000B_3CA9
 * @implements B511:0311:000B:3CA9 ()
 *
 * Called From: B511:0359:0019:B08E
 */
void f__B511_0311_000B_3CA9()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x031C); emu_cs = 0x0C3A; f__0C3A_13BD_0022_D6F0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_031C_0017_D892();
}

/**
 * Decompiled function f__B511_031C_0017_D892()
 *
 * @name f__B511_031C_0017_D892
 * @implements B511:031C:0017:D892 ()
 *
 */
void f__B511_031C_0017_D892()
{
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x10), emu_dx);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0333); emu_cs = 0x1423; f__1423_0DC3_0029_D1E2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0333_000C_E8B5();
}

/**
 * Decompiled function f__B511_0333_000C_E8B5()
 *
 * @name f__B511_0333_000C_E8B5
 * @implements B511:0333:000C:E8B5 ()
 *
 */
void f__B511_0333_000C_E8B5()
{
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x033F); emu_cs = 0x0C3A; f__0C3A_1F70_0010_8DB3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_033F_000C_3391();
}

/**
 * Decompiled function f__B511_033F_000C_3391()
 *
 * @name f__B511_033F_000C_3391
 * @implements B511:033F:000C:3391 ()
 *
 */
void f__B511_033F_000C_3391()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x034B); emu_cs = 0x10BE; emu_House_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_034B_0019_B08E();
}

/**
 * Decompiled function f__B511_034B_0019_B08E()
 *
 * @name f__B511_034B_0019_B08E
 * @implements B511:034B:0019:B08E ()
 *
 * Called From: B511:030F:0002:DD3A
 */
void f__B511_034B_0019_B08E()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { f__B511_0311_000B_3CA9(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x0364); emu_cs = 0x34B8; ovl__34B8(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0364_0015_3476();
}

/**
 * Decompiled function f__B511_0364_0015_3476()
 *
 * @name f__B511_0364_0015_3476
 * @implements B511:0364:0015:3476 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_0364_0015_3476()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x2DCE);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x440);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0379); emu_cs = 0x34B8; ovl__34B8(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0379_0012_C11C();
}

/**
 * Decompiled function f__B511_0379_0012_C11C()
 *
 * @name f__B511_0379_0012_C11C
 * @implements B511:0379:0012:C11C ()
 *
 */
void f__B511_0379_0012_C11C()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8CFD), 0x290);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x038B); emu_cs = 0x0F78; f__0F78_02D5_0014_4ABC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_038B_0011_D3A9();
}

/**
 * Decompiled function f__B511_038B_0011_D3A9()
 *
 * @name f__B511_038B_0011_D3A9
 * @implements B511:038B:0011:D3A9 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_038B_0011_D3A9()
{
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38E8), 0xFFFF);
	if (emu_flags.zf) { f__B511_03A6_002C_6CEA(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E8));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x039C); emu_cs = 0x1082; emu_ip = 0x03A1; emu_last_cs = 0xB511; emu_last_ip = 0x0397; emu_last_length = 0x0011; emu_last_crc = 0xD3A9; emu_call();
	/* Unresolved jump */ emu_ip = 0x039C; emu_last_cs = 0xB511; emu_last_ip = 0x039C; emu_last_length = 0x0011; emu_last_crc = 0xD3A9; emu_call();
}

/**
 * Decompiled function f__B511_03A6_002C_6CEA()
 *
 * @name f__B511_03A6_002C_6CEA
 * @implements B511:03A6:002C:6CEA ()
 *
 * Called From: B511:0391:0011:D3A9
 */
void f__B511_03A6_002C_6CEA()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38E6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38E4), 0x0);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38E2), 0xFFFF);
	if (emu_flags.zf) { f__B511_03D5_0009_6093(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38E2));
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2C94);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x44));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x03D2); emu_cs = 0x0F78; emu_ip = 0x0285; emu_last_cs = 0xB511; emu_last_ip = 0x03CD; emu_last_length = 0x002C; emu_last_crc = 0x6CEA; emu_call();
	/* Unresolved jump */ emu_ip = 0x03D2; emu_last_cs = 0xB511; emu_last_ip = 0x03D2; emu_last_length = 0x002C; emu_last_crc = 0x6CEA; emu_call();
}

/**
 * Decompiled function f__B511_03D5_0009_6093()
 *
 * @name f__B511_03D5_0009_6093
 * @implements B511:03D5:0009:6093 ()
 *
 * Called From: B511:03B7:002C:6CEA
 */
void f__B511_03D5_0009_6093()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x03DE); emu_cs = 0x34CD; ovl__34CD(30);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_03DE_002D_9F7E();
}

/**
 * Decompiled function f__B511_03DE_002D_9F7E()
 *
 * @name f__B511_03DE_002D_9F7E
 * @implements B511:03DE:002D:9F7E ()
 *
 */
void f__B511_03DE_002D_9F7E()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__B511_040C_0009_C0FC(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2C94);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x44));
	emu_push(emu_cs); emu_push(0x040B); emu_cs = 0x0F78; f__0F78_0285_001C_04DB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_040B_000A_D6BC();
}

/**
 * Decompiled function f__B511_040B_000A_D6BC()
 *
 * @name f__B511_040B_000A_D6BC
 * @implements B511:040B:000A:D6BC ()
 *
 */
void f__B511_040B_000A_D6BC()
{
	emu_pop(&emu_cx);
	f__B511_040C_0009_C0FC(); return;
}

/**
 * Decompiled function f__B511_040C_0009_C0FC()
 *
 * @name f__B511_040C_0009_C0FC
 * @implements B511:040C:0009:C0FC ()
 *
 * Called From: B511:03EB:002D:9F7E
 */
void f__B511_040C_0009_C0FC()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x0415); emu_cs = 0x3483; ovl__3483(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0415_0031_D2AD();
}

/**
 * Decompiled function f__B511_0415_0031_D2AD()
 *
 * @name f__B511_0415_0031_D2AD
 * @implements B511:0415:0031:D2AD ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_0415_0031_D2AD()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	emu_addw(&emu_dx, 0x46);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38C2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38C0), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A12), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38B6), 0xFFFF);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), emu_ax);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
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
 * Decompiled function f__B511_0446_0013_E4E5()
 *
 * @name f__B511_0446_0013_E4E5
 * @implements B511:0446:0013:E4E5 ()
 *
 * Called From: 3511:002A:0005:0000
 */
void f__B511_0446_0013_E4E5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B511_0459_0009_C151(); return; }
	/* Unresolved jump */ emu_ip = 0x071E; emu_last_cs = 0xB511; emu_last_ip = 0x0456; emu_last_length = 0x0013; emu_last_crc = 0xE4E5; emu_call();
}

/**
 * Decompiled function f__B511_0459_0009_C151()
 *
 * @name f__B511_0459_0009_C151
 * @implements B511:0459:0009:C151 ()
 *
 * Called From: B511:0454:0013:E4E5
 */
void f__B511_0459_0009_C151()
{
	emu_movw(&emu_ax, 0xFFFE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0462); emu_cs = 0x3483; ovl__3483(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0462_0006_5E88();
}

/**
 * Decompiled function f__B511_0462_0006_5E88()
 *
 * @name f__B511_0462_0006_5E88
 * @implements B511:0462:0006:5E88 ()
 *
 */
void f__B511_0462_0006_5E88()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs);
	emu_push(0x0468); f__B511_0A8F_000E_EE64();
	f__B511_0468_000F_1E3D();
}

/**
 * Decompiled function f__B511_0468_000F_1E3D()
 *
 * @name f__B511_0468_000F_1E3D
 * @implements B511:0468:000F:1E3D ()
 *
 */
void f__B511_0468_000F_1E3D()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0477); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0477_000B_28F6();
}

/**
 * Decompiled function f__B511_0477_000B_28F6()
 *
 * @name f__B511_0477_000B_28F6
 * @implements B511:0477:000B:28F6 ()
 *
 */
void f__B511_0477_000B_28F6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B511_048D_0005_8EFD(); return; }
	emu_push(emu_cs); emu_push(0x0482); emu_cs = 0x3500; ovl__3500(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0482_0008_C68B();
}

/**
 * Decompiled function f__B511_0482_0008_C68B()
 *
 * @name f__B511_0482_0008_C68B
 * @implements B511:0482:0008:C68B ()
 *
 */
void f__B511_0482_0008_C68B()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x048A); emu_cs = 0x01F7; f__01F7_0377_000D_81BB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	/* Unresolved jump */ emu_ip = 0x048A; emu_last_cs = 0xB511; emu_last_ip = 0x048A; emu_last_length = 0x0008; emu_last_crc = 0xC68B; emu_call();
}

/**
 * Decompiled function f__B511_048D_0005_8EFD()
 *
 * @name f__B511_048D_0005_8EFD
 * @implements B511:048D:0005:8EFD ()
 *
 * Called From: B511:047B:000B:28F6
 */
void f__B511_048D_0005_8EFD()
{
	emu_push(emu_cs); emu_push(0x0492); emu_cs = 0x34B8; ovl__34B8(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0492_000B_4489();
}

/**
 * Decompiled function f__B511_0492_000B_4489()
 *
 * @name f__B511_0492_000B_4489
 * @implements B511:0492:000B:4489 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_0492_000B_4489()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x049D); emu_cs = 0x34B1; ovl__34B1(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_049D_000D_5685();
}

/**
 * Decompiled function f__B511_049D_000D_5685()
 *
 * @name f__B511_049D_000D_5685
 * @implements B511:049D:000D:5685 ()
 *
 */
void f__B511_049D_000D_5685()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04AA); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_04AA_0023_7B53();
}

/**
 * Decompiled function f__B511_04AA_0023_7B53()
 *
 * @name f__B511_04AA_0023_7B53
 * @implements B511:04AA:0023:7B53 ()
 *
 */
void f__B511_04AA_0023_7B53()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, 0x4F46);
	emu_movw(&emu_dx, 0x4E49);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x04CD); emu_cs = 0x34B1; ovl__34B1(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_04CD_000C_4C78();
}

/**
 * Decompiled function f__B511_04CD_000C_4C78()
 *
 * @name f__B511_04CD_000C_4C78
 * @implements B511:04CD:000C:4C78 ()
 *
 */
void f__B511_04CD_000C_4C78()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_si, emu_ax);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B511_04D9_000D_34BA(); return; }
	f__B511_06FA_0005_1E52(); return;
}

/**
 * Decompiled function f__B511_04D9_000D_34BA()
 *
 * @name f__B511_04D9_000D_34BA
 * @implements B511:04D9:000D:34BA ()
 *
 * Called From: B511:04D4:000C:4C78
 */
void f__B511_04D9_000D_34BA()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x290);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x04E6; emu_last_cs = 0xB511; emu_last_ip = 0x04E1; emu_last_length = 0x000D; emu_last_crc = 0x34BA; emu_call(); return; }
	f__B511_0592_000C_E98C(); return;
}

/**
 * Decompiled function f__B511_0592_000C_E98C()
 *
 * @name f__B511_0592_000C_E98C
 * @implements B511:0592:000C:E98C ()
 *
 * Called From: B511:04E3:000D:34BA
 */
void f__B511_0592_000C_E98C()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x059E); emu_cs = 0x34C4; ovl__34C4(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_059E_000A_88AF();
}

/**
 * Decompiled function f__B511_059E_000A_88AF()
 *
 * @name f__B511_059E_000A_88AF
 * @implements B511:059E:000A:88AF ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_059E_000A_88AF()
{
	emu_addw(&emu_sp, 0x6);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B511_05A8_0009_C506(); return; }
	/* Unresolved jump */ emu_ip = 0x06EA; emu_last_cs = 0xB511; emu_last_ip = 0x05A5; emu_last_length = 0x000A; emu_last_crc = 0x88AF; emu_call();
}

/**
 * Decompiled function f__B511_05A8_0009_C506()
 *
 * @name f__B511_05A8_0009_C506
 * @implements B511:05A8:0009:C506 ()
 *
 * Called From: B511:05A3:000A:88AF
 */
void f__B511_05A8_0009_C506()
{
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05B1); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_05B1_0023_4CA4();
}

/**
 * Decompiled function f__B511_05B1_0023_4CA4()
 *
 * @name f__B511_05B1_0023_4CA4
 * @implements B511:05B1:0023:4CA4 ()
 *
 */
void f__B511_05B1_0023_4CA4()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, 0x2050);
	emu_movw(&emu_dx, 0x414D);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x05D4); emu_cs = 0x34B1; ovl__34B1(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_05D4_0011_66E3();
}

/**
 * Decompiled function f__B511_05D4_0011_66E3()
 *
 * @name f__B511_05D4_0011_66E3
 * @implements B511:05D4:0011:66E3 ()
 *
 */
void f__B511_05D4_0011_66E3()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x05E5); emu_cs = 0x34C4; ovl__34C4(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_05E5_000C_4CAE();
}

/**
 * Decompiled function f__B511_05E5_000C_4CAE()
 *
 * @name f__B511_05E5_000C_4CAE
 * @implements B511:05E5:000C:4CAE ()
 *
 */
void f__B511_05E5_000C_4CAE()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05F1); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_05F1_0023_84C2();
}

/**
 * Decompiled function f__B511_05F1_0023_84C2()
 *
 * @name f__B511_05F1_0023_84C2
 * @implements B511:05F1:0023:84C2 ()
 *
 */
void f__B511_05F1_0023_84C2()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, 0x5259);
	emu_movw(&emu_dx, 0x4C50);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0614); emu_cs = 0x34B1; ovl__34B1(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0614_0011_96E3();
}

/**
 * Decompiled function f__B511_0614_0011_96E3()
 *
 * @name f__B511_0614_0011_96E3
 * @implements B511:0614:0011:96E3 ()
 *
 */
void f__B511_0614_0011_96E3()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0625); emu_cs = 0x34C4; ovl__34C4(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0625_000C_4CAE();
}

/**
 * Decompiled function f__B511_0625_000C_4CAE()
 *
 * @name f__B511_0625_000C_4CAE
 * @implements B511:0625:000C:4CAE ()
 *
 */
void f__B511_0625_000C_4CAE()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0631); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0631_0023_05E3();
}

/**
 * Decompiled function f__B511_0631_0023_05E3()
 *
 * @name f__B511_0631_0023_05E3
 * @implements B511:0631:0023:05E3 ()
 *
 */
void f__B511_0631_0023_05E3()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, 0x5449);
	emu_movw(&emu_dx, 0x4E55);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0654); emu_cs = 0x34B1; ovl__34B1(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0654_0011_C6E3();
}

/**
 * Decompiled function f__B511_0654_0011_C6E3()
 *
 * @name f__B511_0654_0011_C6E3
 * @implements B511:0654:0011:C6E3 ()
 *
 */
void f__B511_0654_0011_C6E3()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0665); emu_cs = 0x34C4; ovl__34C4(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0665_000C_4CAE();
}

/**
 * Decompiled function f__B511_0665_000C_4CAE()
 *
 * @name f__B511_0665_000C_4CAE
 * @implements B511:0665:000C:4CAE ()
 *
 */
void f__B511_0665_000C_4CAE()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0671); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0671_0023_6912();
}

/**
 * Decompiled function f__B511_0671_0023_6912()
 *
 * @name f__B511_0671_0023_6912
 * @implements B511:0671:0023:6912 ()
 *
 */
void f__B511_0671_0023_6912()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, 0x4744);
	emu_movw(&emu_dx, 0x4C42);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0694); emu_cs = 0x34B1; ovl__34B1(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0694_0011_76E2();
}

/**
 * Decompiled function f__B511_0694_0011_76E2()
 *
 * @name f__B511_0694_0011_76E2
 * @implements B511:0694:0011:76E2 ()
 *
 */
void f__B511_0694_0011_76E2()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x06A5); emu_cs = 0x34C4; ovl__34C4(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_06A5_000C_4CAE();
}

/**
 * Decompiled function f__B511_06A5_000C_4CAE()
 *
 * @name f__B511_06A5_000C_4CAE
 * @implements B511:06A5:000C:4CAE ()
 *
 */
void f__B511_06A5_000C_4CAE()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06B1); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_06B1_0023_C436();
}

/**
 * Decompiled function f__B511_06B1_0023_C436()
 *
 * @name f__B511_06B1_0023_C436
 * @implements B511:06B1:0023:C436 ()
 *
 */
void f__B511_06B1_0023_C436()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, 0x4D41);
	emu_movw(&emu_dx, 0x4554);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x06D4); emu_cs = 0x34B1; ovl__34B1(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_06D4_0011_A6E2();
}

/**
 * Decompiled function f__B511_06D4_0011_A6E2()
 *
 * @name f__B511_06D4_0011_A6E2
 * @implements B511:06D4:0011:A6E2 ()
 *
 */
void f__B511_06D4_0011_A6E2()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x06E5); emu_cs = 0x34C4; ovl__34C4(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_06E5_0005_83EE();
}

/**
 * Decompiled function f__B511_06E5_0005_83EE()
 *
 * @name f__B511_06E5_0005_83EE
 * @implements B511:06E5:0005:83EE ()
 *
 */
void f__B511_06E5_0005_83EE()
{
	emu_addw(&emu_sp, 0x6);
	f__B511_06F8_0002_C73A(); return;
}

/**
 * Decompiled function f__B511_06F8_0002_C73A()
 *
 * @name f__B511_06F8_0002_C73A
 * @implements B511:06F8:0002:C73A ()
 *
 * Called From: B511:06E8:0005:83EE
 */
void f__B511_06F8_0002_C73A()
{
	f__B511_0708_0006_42FE(); return;
}

/**
 * Decompiled function f__B511_06FA_0005_1E52()
 *
 * @name f__B511_06FA_0005_1E52
 * @implements B511:06FA:0005:1E52 ()
 *
 * Called From: B511:04D6:000C:4C78
 */
void f__B511_06FA_0005_1E52()
{
	emu_push(emu_cs); emu_push(0x06FF); emu_cs = 0x3500; ovl__3500(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_06FF_0008_C68B();
}

/**
 * Decompiled function f__B511_06FF_0008_C68B()
 *
 * @name f__B511_06FF_0008_C68B
 * @implements B511:06FF:0008:C68B ()
 *
 */
void f__B511_06FF_0008_C68B()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0707); emu_cs = 0x01F7; f__01F7_0377_000D_81BB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	/* Unresolved jump */ emu_ip = 0x0707; emu_last_cs = 0xB511; emu_last_ip = 0x0707; emu_last_length = 0x0008; emu_last_crc = 0xC68B; emu_call();
}

/**
 * Decompiled function f__B511_0708_0006_42FE()
 *
 * @name f__B511_0708_0006_42FE
 * @implements B511:0708:0006:42FE ()
 *
 * Called From: B511:06F8:0002:C73A
 */
void f__B511_0708_0006_42FE()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x070E); emu_cs = 0x34B1; ovl__34B1(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_070E_000C_C3E1();
}

/**
 * Decompiled function f__B511_070E_000C_C3E1()
 *
 * @name f__B511_070E_000C_C3E1
 * @implements B511:070E:000C:C3E1 ()
 *
 */
void f__B511_070E_000C_C3E1()
{
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BE), 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x071A; emu_last_cs = 0xB511; emu_last_ip = 0x0714; emu_last_length = 0x000C; emu_last_crc = 0xC3E1; emu_call(); return; }
	emu_push(emu_cs);
	emu_push(0x071A); f__B511_0091_001D_9C25();
	f__B511_071A_000A_7479();
}

/**
 * Decompiled function f__B511_071A_000A_7479()
 *
 * @name f__B511_071A_000A_7479
 * @implements B511:071A:000A:7479 ()
 *
 */
void f__B511_071A_000A_7479()
{
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
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
 * Decompiled function f__B511_0729_0016_F168()
 *
 * @name f__B511_0729_0016_F168
 * @implements B511:0729:0016:F168 ()
 *
 * Called From: 3511:0034:0005:0000
 */
void f__B511_0729_0016_F168()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x073F; emu_last_cs = 0xB511; emu_last_ip = 0x073A; emu_last_length = 0x0016; emu_last_crc = 0xF168; emu_call(); return; }
	f__B511_0800_000F_842C(); return;
}

/**
 * Decompiled function f__B511_0800_000F_842C()
 *
 * @name f__B511_0800_000F_842C
 * @implements B511:0800:000F:842C ()
 *
 * Called From: B511:073C:0016:F168
 */
void f__B511_0800_000F_842C()
{
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x080F); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_080F_0021_E6D5();
}

/**
 * Decompiled function f__B511_080F_0021_E6D5()
 *
 * @name f__B511_080F_0021_E6D5
 * @implements B511:080F:0021:E6D5 ()
 *
 */
void f__B511_080F_0021_E6D5()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4D52);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x4F46);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0830); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0830_001F_5866();
}

/**
 * Decompiled function f__B511_0830_001F_5866()
 *
 * @name f__B511_0830_001F_5866
 * @implements B511:0830:001F:5866 ()
 *
 */
void f__B511_0830_001F_5866()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x084F); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_084F_001F_AE21();
}

/**
 * Decompiled function f__B511_084F_001F_AE21()
 *
 * @name f__B511_084F_001F_AE21
 * @implements B511:084F:001F:AE21 ()
 *
 */
void f__B511_084F_001F_AE21()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4E45);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x4353);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x086E); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_086E_000E_C613();
}

/**
 * Decompiled function f__B511_086E_000E_C613()
 *
 * @name f__B511_086E_000E_C613
 * @implements B511:086E:000E:C613 ()
 *
 */
void f__B511_086E_000E_C613()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__B511_087C_001C_2075(); return; }
	/* Unresolved jump */ emu_ip = 0x0922; emu_last_cs = 0xB511; emu_last_ip = 0x0879; emu_last_length = 0x000E; emu_last_crc = 0xC613; emu_call();
}

/**
 * Decompiled function f__B511_087C_001C_2075()
 *
 * @name f__B511_087C_001C_2075
 * @implements B511:087C:001C:2075 ()
 *
 * Called From: B511:0877:000E:C613
 */
void f__B511_087C_001C_2075()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x454D);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x414E);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0898); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0898_000E_9B98();
}

/**
 * Decompiled function f__B511_0898_000E_9B98()
 *
 * @name f__B511_0898_000E_9B98
 * @implements B511:0898:000E:9B98 ()
 *
 */
void f__B511_0898_000E_9B98()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x08A6); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_08A6_001B_5CCA();
}

/**
 * Decompiled function f__B511_08A6_001B_5CCA()
 *
 * @name f__B511_08A6_001B_5CCA
 * @implements B511:08A6:001B:5CCA ()
 *
 */
void f__B511_08A6_001B_5CCA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_dx, emu_dx);
	emu_addw(&emu_ax, 0x1);
	emu_adcw(&emu_dx, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x08C1); emu_cs = 0x2BC0; f__2BC0_0004_000F_950B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_08C1_001A_7CEF();
}

/**
 * Decompiled function f__B511_08C1_001A_7CEF()
 *
 * @name f__B511_08C1_001A_7CEF
 * @implements B511:08C1:001A:7CEF ()
 *
 */
void f__B511_08C1_001A_7CEF()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x4);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x4);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x08DB); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_08DB_0015_0963();
}

/**
 * Decompiled function f__B511_08DB_0015_0963()
 *
 * @name f__B511_08DB_0015_0963
 * @implements B511:08DB:0015:0963 ()
 *
 */
void f__B511_08DB_0015_0963()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x08F0); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_08F0_002F_3CDB();
}

/**
 * Decompiled function f__B511_08F0_002F_3CDB()
 *
 * @name f__B511_08F0_002F_3CDB
 * @implements B511:08F0:002F:3CDB ()
 *
 */
void f__B511_08F0_002F_3CDB()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_andw(&emu_dx, 0x1);
	emu_andw(&emu_ax, 0x0);
	emu_orw(&emu_dx, emu_ax);
	if (emu_flags.zf) { f__B511_0922_0009_C506(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x1);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xC);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x091F); emu_cs = 0x1FB5; f__1FB5_0E9C_001B_37D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_091F_000C_4FAE();
}

/**
 * Decompiled function f__B511_091F_000C_4FAE()
 *
 * @name f__B511_091F_000C_4FAE
 * @implements B511:091F:000C:4FAE ()
 *
 */
void f__B511_091F_000C_4FAE()
{
	emu_addw(&emu_sp, 0xA);
	f__B511_0922_0009_C506(); return;
}

/**
 * Decompiled function f__B511_0922_0009_C506()
 *
 * @name f__B511_0922_0009_C506
 * @implements B511:0922:0009:C506 ()
 *
 * Called From: B511:0901:002F:3CDB
 */
void f__B511_0922_0009_C506()
{
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x092B); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_092B_0012_F13A();
}

/**
 * Decompiled function f__B511_092B_0012_F13A()
 *
 * @name f__B511_092B_0012_F13A
 * @implements B511:092B:0012:F13A ()
 *
 */
void f__B511_092B_0012_F13A()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x093D); emu_cs = 0x350B; ovl__350B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_093D_001C_1421();
}

/**
 * Decompiled function f__B511_093D_001C_1421()
 *
 * @name f__B511_093D_001C_1421
 * @implements B511:093D:001C:1421 ()
 *
 */
void f__B511_093D_001C_1421()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, 0x4F46);
	emu_movw(&emu_dx, 0x4E49);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0959); emu_cs = 0x34B1; ovl__34B1(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0959_000C_4EAE();
}

/**
 * Decompiled function f__B511_0959_000C_4EAE()
 *
 * @name f__B511_0959_000C_4EAE
 * @implements B511:0959:000C:4EAE ()
 *
 */
void f__B511_0959_000C_4EAE()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0965); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0965_0012_513A();
}

/**
 * Decompiled function f__B511_0965_0012_513A()
 *
 * @name f__B511_0965_0012_513A
 * @implements B511:0965:0012:513A ()
 *
 */
void f__B511_0965_0012_513A()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0977); emu_cs = 0x350B; ovl__350B(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0977_001C_EBB0();
}

/**
 * Decompiled function f__B511_0977_001C_EBB0()
 *
 * @name f__B511_0977_001C_EBB0
 * @implements B511:0977:001C:EBB0 ()
 *
 */
void f__B511_0977_001C_EBB0()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, 0x5259);
	emu_movw(&emu_dx, 0x4C50);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0993); emu_cs = 0x34B1; ovl__34B1(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0993_000C_4EAE();
}

/**
 * Decompiled function f__B511_0993_000C_4EAE()
 *
 * @name f__B511_0993_000C_4EAE
 * @implements B511:0993:000C:4EAE ()
 *
 */
void f__B511_0993_000C_4EAE()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x099F); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_099F_0012_013A();
}

/**
 * Decompiled function f__B511_099F_0012_013A()
 *
 * @name f__B511_099F_0012_013A
 * @implements B511:099F:0012:013A ()
 *
 */
void f__B511_099F_0012_013A()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x09B1); emu_cs = 0x350B; ovl__350B(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_09B1_001C_6A91();
}

/**
 * Decompiled function f__B511_09B1_001C_6A91()
 *
 * @name f__B511_09B1_001C_6A91
 * @implements B511:09B1:001C:6A91 ()
 *
 */
void f__B511_09B1_001C_6A91()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, 0x5449);
	emu_movw(&emu_dx, 0x4E55);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x09CD); emu_cs = 0x34B1; ovl__34B1(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_09CD_000C_4EAE();
}

/**
 * Decompiled function f__B511_09CD_000C_4EAE()
 *
 * @name f__B511_09CD_000C_4EAE
 * @implements B511:09CD:000C:4EAE ()
 *
 */
void f__B511_09CD_000C_4EAE()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09D9); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_09D9_0012_B13B();
}

/**
 * Decompiled function f__B511_09D9_0012_B13B()
 *
 * @name f__B511_09D9_0012_B13B
 * @implements B511:09D9:0012:B13B ()
 *
 */
void f__B511_09D9_0012_B13B()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x09EB); emu_cs = 0x350B; ovl__350B(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_09EB_001C_0660();
}

/**
 * Decompiled function f__B511_09EB_001C_0660()
 *
 * @name f__B511_09EB_001C_0660
 * @implements B511:09EB:001C:0660 ()
 *
 */
void f__B511_09EB_001C_0660()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, 0x4744);
	emu_movw(&emu_dx, 0x4C42);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0A07); emu_cs = 0x34B1; ovl__34B1(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0A07_000C_4EAE();
}

/**
 * Decompiled function f__B511_0A07_000C_4EAE()
 *
 * @name f__B511_0A07_000C_4EAE
 * @implements B511:0A07:000C:4EAE ()
 *
 */
void f__B511_0A07_000C_4EAE()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A13); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0A13_0012_A13A();
}

/**
 * Decompiled function f__B511_0A13_0012_A13A()
 *
 * @name f__B511_0A13_0012_A13A
 * @implements B511:0A13:0012:A13A ()
 *
 */
void f__B511_0A13_0012_A13A()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0A25); emu_cs = 0x350B; ovl__350B(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0A25_001C_23D6();
}

/**
 * Decompiled function f__B511_0A25_001C_23D6()
 *
 * @name f__B511_0A25_001C_23D6
 * @implements B511:0A25:001C:23D6 ()
 *
 */
void f__B511_0A25_001C_23D6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, 0x2050);
	emu_movw(&emu_dx, 0x414D);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0A41); emu_cs = 0x34B1; ovl__34B1(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0A41_000C_4EAE();
}

/**
 * Decompiled function f__B511_0A41_000C_4EAE()
 *
 * @name f__B511_0A41_000C_4EAE
 * @implements B511:0A41:000C:4EAE ()
 *
 */
void f__B511_0A41_000C_4EAE()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A4D); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0A4D_0012_613B();
}

/**
 * Decompiled function f__B511_0A4D_0012_613B()
 *
 * @name f__B511_0A4D_0012_613B
 * @implements B511:0A4D:0012:613B ()
 *
 */
void f__B511_0A4D_0012_613B()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0A5F); emu_cs = 0x350B; ovl__350B(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0A5F_001C_AB44();
}

/**
 * Decompiled function f__B511_0A5F_001C_AB44()
 *
 * @name f__B511_0A5F_001C_AB44
 * @implements B511:0A5F:001C:AB44 ()
 *
 */
void f__B511_0A5F_001C_AB44()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax, 0x4D41);
	emu_movw(&emu_dx, 0x4554);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0A7B); emu_cs = 0x34B1; ovl__34B1(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0A7B_0009_260D();
}

/**
 * Decompiled function f__B511_0A7B_0009_260D()
 *
 * @name f__B511_0A7B_0009_260D
 * @implements B511:0A7B:0009:260D ()
 *
 */
void f__B511_0A7B_0009_260D()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0A84); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0A84_000B_5472();
}

/**
 * Decompiled function f__B511_0A84_000B_5472()
 *
 * @name f__B511_0A84_000B_5472
 * @implements B511:0A84:000B:5472 ()
 *
 */
void f__B511_0A84_000B_5472()
{
	emu_pop(&emu_cx);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
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
 * Decompiled function f__B511_0A8F_000E_EE64()
 *
 * @name f__B511_0A8F_000E_EE64
 * @implements B511:0A8F:000E:EE64 ()
 *
 * Called From: B511:0031:0006:5897
 * Called From: B511:0465:0006:5E88
 */
void f__B511_0A8F_000E_EE64()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0A9D); emu_cs = 0x0FE4; emu_Unit_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0A9D_000D_8BD5();
}

/**
 * Decompiled function f__B511_0A9D_000D_8BD5()
 *
 * @name f__B511_0A9D_000D_8BD5
 * @implements B511:0A9D:000D:8BD5 ()
 *
 */
void f__B511_0A9D_000D_8BD5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0AAA); emu_cs = 0x1082; emu_Building_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0AAA_000D_9BEB();
}

/**
 * Decompiled function f__B511_0AAA_000D_9BEB()
 *
 * @name f__B511_0AAA_000D_9BEB
 * @implements B511:0AAA:000D:9BEB ()
 *
 */
void f__B511_0AAA_000D_9BEB()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0AB7); emu_cs = 0x104B; emu_AirUnit_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0AB7_000D_CBD3();
}

/**
 * Decompiled function f__B511_0AB7_000D_CBD3()
 *
 * @name f__B511_0AB7_000D_CBD3
 * @implements B511:0AB7:000D:CBD3 ()
 *
 */
void f__B511_0AB7_000D_CBD3()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0AC4); emu_cs = 0x10BE; emu_House_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0AC4_0016_9707();
}

/**
 * Decompiled function f__B511_0AC4_0016_9707()
 *
 * @name f__B511_0AC4_0016_9707
 * @implements B511:0AC4:0016:9707 ()
 *
 */
void f__B511_0AC4_0016_9707()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x770);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3958));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3956));
	emu_push(emu_cs); emu_push(0x0ADA); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0ADA_0017_3E92();
}

/**
 * Decompiled function f__B511_0ADA_0017_3E92()
 *
 * @name f__B511_0ADA_0017_3E92
 * @implements B511:0ADA:0017:3E92 ()
 *
 */
void f__B511_0ADA_0017_3E92()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0x280);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x395C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x395A));
	emu_push(emu_cs); emu_push(0x0AF1); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0AF1_0017_AFF4();
}

/**
 * Decompiled function f__B511_0AF1_0017_AFF4()
 *
 * @name f__B511_0AF1_0017_AFF4
 * @implements B511:0AF1:0017:AFF4 ()
 *
 */
void f__B511_0AF1_0017_AFF4()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0x4000);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39EC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_push(emu_cs); emu_push(0x0B08); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0B08_0014_F77F();
}

/**
 * Decompiled function f__B511_0B08_0014_F77F()
 *
 * @name f__B511_0B08_0014_F77F
 * @implements B511:0B08:0014:F77F ()
 *
 */
void f__B511_0B08_0014_F77F()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0x200);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x95E5);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B1C); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0B1C_0014_F773();
}

/**
 * Decompiled function f__B511_0B1C_0014_F773()
 *
 * @name f__B511_0B1C_0014_F773
 * @implements B511:0B1C:0014:F773 ()
 *
 */
void f__B511_0B1C_0014_F773()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0x200);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x93E5);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B30); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0B30_0014_F777();
}

/**
 * Decompiled function f__B511_0B30_0014_F777()
 *
 * @name f__B511_0B30_0014_F777
 * @implements B511:0B30:0014:F777 ()
 *
 */
void f__B511_0B30_0014_F777()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0x200);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x91E5);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B44); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0B44_0014_F74B();
}

/**
 * Decompiled function f__B511_0B44_0014_F74B()
 *
 * @name f__B511_0B44_0014_F74B
 * @implements B511:0B44:0014:F74B ()
 *
 */
void f__B511_0B44_0014_F74B()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0x200);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8FE5);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B58); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0B58_0014_F74F();
}

/**
 * Decompiled function f__B511_0B58_0014_F74F()
 *
 * @name f__B511_0B58_0014_F74F
 * @implements B511:0B58:0014:F74F ()
 *
 */
void f__B511_0B58_0014_F74F()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0x200);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8DE5);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B6C); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0B6C_001D_7B37();
}

/**
 * Decompiled function f__B511_0B6C_001D_7B37()
 *
 * @name f__B511_0B6C_001D_7B37
 * @implements B511:0B6C:001D:7B37 ()
 *
 */
void f__B511_0B6C_001D_7B37()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38B4), 0x0);
	emu_movw(&emu_ax, 0x2080);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2E9C);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x323F);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B89); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0B89_0014_F14D();
}

/**
 * Decompiled function f__B511_0B89_0014_F14D()
 *
 * @name f__B511_0B89_0014_F14D
 * @implements B511:0B89:0014:F14D ()
 *
 */
void f__B511_0B89_0014_F14D()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0x36);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x97E7);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B9D); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0B9D_000C_4B79();
}

/**
 * Decompiled function f__B511_0B9D_000C_4B79()
 *
 * @name f__B511_0B9D_000C_4B79
 * @implements B511:0B9D:000C:4B79 ()
 *
 */
void f__B511_0B9D_000C_4B79()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0xFFFE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BA9); emu_cs = 0x3483; ovl__3483(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0BA9_0058_9298();
}

/**
 * Decompiled function f__B511_0BA9_0058_9298()
 *
 * @name f__B511_0BA9_0058_9298
 * @implements B511:0BA9:0058:9298 ()
 *
 */
void f__B511_0BA9_0058_9298()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38FE), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38FC), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38FA), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38F4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38F2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38F6), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38E2), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38E6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38E4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38EC), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38EE), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38F0), 0x0);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0C01); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0C01_0005_6143();
}

/**
 * Decompiled function f__B511_0C01_0005_6143()
 *
 * @name f__B511_0C01_0005_6143
 * @implements B511:0C01:0005:6143 ()
 *
 */
void f__B511_0C01_0005_6143()
{
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0C06_002A_8725()
 *
 * @name f__B511_0C06_002A_8725
 * @implements B511:0C06:002A:8725 ()
 *
 * Called From: B511:0019:000E:C19A
 */
void f__B511_0C06_002A_8725()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_movw(&emu_dx, 0x1E);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3810));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8D0D);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B2));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs);
	emu_push(0x0C30); f__B511_0C93_0014_2A98();
	f__B511_0C30_0005_60C3();
}

/**
 * Decompiled function f__B511_0C30_0005_60C3()
 *
 * @name f__B511_0C30_0005_60C3
 * @implements B511:0C30:0005:60C3 ()
 *
 */
void f__B511_0C30_0005_60C3()
{
	emu_addw(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0C35_002A_C70F()
 *
 * @name f__B511_0C35_002A_C70F
 * @implements B511:0C35:002A:C70F ()
 *
 * Called From: 3511:0039:0005:0000
 */
void f__B511_0C35_002A_C70F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_movw(&emu_dx, 0x1E);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x380C));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8D1B);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B2));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs);
	emu_push(0x0C5F); f__B511_0C93_0014_2A98();
	f__B511_0C5F_0005_60C3();
}

/**
 * Decompiled function f__B511_0C5F_0005_60C3()
 *
 * @name f__B511_0C5F_0005_60C3
 * @implements B511:0C5F:0005:60C3 ()
 *
 */
void f__B511_0C5F_0005_60C3()
{
	emu_addw(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0C64_002A_C757()
 *
 * @name f__B511_0C64_002A_C757
 * @implements B511:0C64:002A:C757 ()
 *
 * Called From: 3511:003E:0005:0000
 */
void f__B511_0C64_002A_C757()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_movw(&emu_dx, 0x1E);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x380E));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x8D29);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B2));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs);
	emu_push(0x0C8E); f__B511_0C93_0014_2A98();
	f__B511_0C8E_0005_60C3();
}

/**
 * Decompiled function f__B511_0C8E_0005_60C3()
 *
 * @name f__B511_0C8E_0005_60C3
 * @implements B511:0C8E:0005:60C3 ()
 *
 */
void f__B511_0C8E_0005_60C3()
{
	emu_addw(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0C93_0014_2A98()
 *
 * @name f__B511_0C93_0014_2A98
 * @implements B511:0C93:0014:2A98 ()
 *
 * Called From: B511:0C2D:002A:8725
 * Called From: B511:0C5C:002A:C70F
 * Called From: B511:0C8B:002A:C757
 */
void f__B511_0C93_0014_2A98()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37AE), 0x0);
	if (emu_flags.zf) { f__B511_0CA7_0015_7EAD(); return; }
	/* Unresolved jump */ emu_ip = 0x0E3F; emu_last_cs = 0xB511; emu_last_ip = 0x0CA4; emu_last_length = 0x0014; emu_last_crc = 0x2A98; emu_call();
}

/**
 * Decompiled function f__B511_0CA7_0015_7EAD()
 *
 * @name f__B511_0CA7_0015_7EAD
 * @implements B511:0CA7:0015:7EAD ()
 *
 * Called From: B511:0CA2:0014:2A98
 */
void f__B511_0CA7_0015_7EAD()
{
	emu_movw(&emu_ax, 0x2DCE);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x440);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CBC); emu_cs = 0x34B8; ovl__34B8(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0CBC_001E_3AA6();
}

/**
 * Decompiled function f__B511_0CBC_001E_3AA6()
 *
 * @name f__B511_0CBC_001E_3AA6
 * @implements B511:0CBC:001E:3AA6 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_0CBC_001E_3AA6()
{
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xA8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xA8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xAF);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CDA); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0CDA_000F_E74D();
}

/**
 * Decompiled function f__B511_0CDA_000F_E74D()
 *
 * @name f__B511_0CDA_000F_E74D
 * @implements B511:0CDA:000F:E74D ()
 *
 */
void f__B511_0CDA_000F_E74D()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CE9); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0CE9_000B_6BAA();
}

/**
 * Decompiled function f__B511_0CE9_000B_6BAA()
 *
 * @name f__B511_0CE9_000B_6BAA
 * @implements B511:0CE9:000B:6BAA ()
 *
 */
void f__B511_0CE9_000B_6BAA()
{
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CF4); emu_cs = 0x34B8; ovl__34B8(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0CF4_0024_CF16();
}

/**
 * Decompiled function f__B511_0CF4_0024_CF16()
 *
 * @name f__B511_0CF4_0024_CF16
 * @implements B511:0CF4:0024:CF16 ()
 *
 */
void f__B511_0CF4_0024_CF16()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xA8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xF0);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xB0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D18); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0D18_000F_E74D();
}

/**
 * Decompiled function f__B511_0D18_000F_E74D()
 *
 * @name f__B511_0D18_000F_E74D
 * @implements B511:0D18:000F:E74D ()
 *
 */
void f__B511_0D18_000F_E74D()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D27); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0D27_000B_68AA();
}

/**
 * Decompiled function f__B511_0D27_000B_68AA()
 *
 * @name f__B511_0D27_000B_68AA
 * @implements B511:0D27:000B:68AA ()
 *
 */
void f__B511_0D27_000B_68AA()
{
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D32); emu_cs = 0x34B8; ovl__34B8(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0D32_001A_F3E0();
}

/**
 * Decompiled function f__B511_0D32_001A_F3E0()
 *
 * @name f__B511_0D32_001A_F3E0
 * @implements B511:0D32:001A:F3E0 ()
 *
 */
void f__B511_0D32_001A_F3E0()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0D4C); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0D4C_0012_77BF();
}

/**
 * Decompiled function f__B511_0D4C_0012_77BF()
 *
 * @name f__B511_0D4C_0012_77BF
 * @implements B511:0D4C:0012:77BF ()
 *
 */
void f__B511_0D4C_0012_77BF()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, 0xFFFE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D5E); emu_cs = 0x3483; ovl__3483(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0D5E_000C_5509();
}

/**
 * Decompiled function f__B511_0D5E_000C_5509()
 *
 * @name f__B511_0D5E_000C_5509
 * @implements B511:0D5E:000C:5509 ()
 *
 */
void f__B511_0D5E_000C_5509()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0D6A); emu_cs = 0x1DD7; f__1DD7_022D_0015_1956();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0D6A_0008_8F41();
}

/**
 * Decompiled function f__B511_0D6A_0008_8F41()
 *
 * @name f__B511_0D6A_0008_8F41
 * @implements B511:0D6A:0008:8F41 ()
 *
 */
void f__B511_0D6A_0008_8F41()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0D72); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0D72_0023_911C();
}

/**
 * Decompiled function f__B511_0D72_0023_911C()
 *
 * @name f__B511_0D72_0023_911C
 * @implements B511:0D72:0023:911C ()
 *
 */
void f__B511_0D72_0023_911C()
{
	emu_pop(&emu_cx);
	f__B511_0D73_0022_9A3C(); return;
}

/**
 * Decompiled function f__B511_0D73_0022_9A3C()
 *
 * @name f__B511_0D73_0022_9A3C
 * @implements B511:0D73:0022:9A3C ()
 *
 * Called From: B511:0E01:0003:A2BB
 */
void f__B511_0D73_0022_9A3C()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx, 0x1E);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2BDD);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D95); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0D95_001C_BDE5();
}

/**
 * Decompiled function f__B511_0D95_001C_BDE5()
 *
 * @name f__B511_0D95_001C_BDE5
 * @implements B511:0D95:001C:BDE5 ()
 *
 */
void f__B511_0D95_001C_BDE5()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DB1); emu_cs = 0x0642; f__0642_075D_0011_C164();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0DB1_0009_DAE3();
}

/**
 * Decompiled function f__B511_0DB1_0009_DAE3()
 *
 * @name f__B511_0DB1_0009_DAE3
 * @implements B511:0DB1:0009:DAE3 ()
 *
 */
void f__B511_0DB1_0009_DAE3()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DBA); emu_cs = 0x0FCB; f__0FCB_0088_0016_2DD9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0DBA_0018_314D();
}

/**
 * Decompiled function f__B511_0DBA_0018_314D()
 *
 * @name f__B511_0DBA_0018_314D
 * @implements B511:0DBA:0018:314D ()
 *
 */
void f__B511_0DBA_0018_314D()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x0DD2); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0DD2_0020_BA81();
}

/**
 * Decompiled function f__B511_0DD2_0020_BA81()
 *
 * @name f__B511_0DD2_0020_BA81
 * @implements B511:0DD2:0020:BA81 ()
 *
 */
void f__B511_0DD2_0020_BA81()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs);
	emu_push(0x0DF2); f__B511_0E44_000C_24F5();
	f__B511_0DF2_000F_F258();
}

/**
 * Decompiled function f__B511_0DF2_000F_F258()
 *
 * @name f__B511_0DF2_000F_F258
 * @implements B511:0DF2:000F:F258 ()
 *
 */
void f__B511_0DF2_000F_F258()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x8002);
	if (emu_flags.zf) { f__B511_0E01_0003_A2BB(); return; }
	f__B511_0E04_000B_9749(); return;
}

/**
 * Decompiled function f__B511_0E01_0003_A2BB()
 *
 * @name f__B511_0E01_0003_A2BB
 * @implements B511:0E01:0003:A2BB ()
 *
 * Called From: B511:0DFD:000F:F258
 */
void f__B511_0E01_0003_A2BB()
{
	f__B511_0D73_0022_9A3C(); return;
}

/**
 * Decompiled function f__B511_0E04_000B_9749()
 *
 * @name f__B511_0E04_000B_9749
 * @implements B511:0E04:000B:9749 ()
 *
 * Called From: B511:0DFF:000F:F258
 */
void f__B511_0E04_000B_9749()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0E0F); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E0F_000D_4AD9();
}

/**
 * Decompiled function f__B511_0E0F_000D_4AD9()
 *
 * @name f__B511_0E0F_000D_4AD9
 * @implements B511:0E0F:000D:4AD9 ()
 *
 */
void f__B511_0E0F_000D_4AD9()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0E1C); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E1C_000C_15CC();
}

/**
 * Decompiled function f__B511_0E1C_000C_15CC()
 *
 * @name f__B511_0E1C_000C_15CC
 * @implements B511:0E1C:000C:15CC ()
 *
 */
void f__B511_0E1C_000C_15CC()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E28; emu_last_cs = 0xB511; emu_last_ip = 0x0E21; emu_last_length = 0x000C; emu_last_crc = 0x15CC; emu_call(); return; }
	emu_push(emu_cs); emu_push(0x0E28); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E28_0014_36BE();
}

/**
 * Decompiled function f__B511_0E28_0014_36BE()
 *
 * @name f__B511_0E28_0014_36BE
 * @implements B511:0E28:0014:36BE ()
 *
 */
void f__B511_0E28_0014_36BE()
{
	emu_movw(&emu_ax, 0x2DCE);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x440);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E3C); emu_cs = 0x34B8; ovl__34B8(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E3C_0008_2947();
}

/**
 * Decompiled function f__B511_0E3C_0008_2947()
 *
 * @name f__B511_0E3C_0008_2947
 * @implements B511:0E3C:0008:2947 ()
 *
 */
void f__B511_0E3C_0008_2947()
{
	emu_addw(&emu_sp, 0x8);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B511_0E44_000C_24F5()
 *
 * @name f__B511_0E44_000C_24F5
 * @implements B511:0E44:000C:24F5 ()
 *
 * Called From: B511:0DEF:0020:BA81
 * Called From: B511:1363:0023:0A38
 */
void f__B511_0E44_000C_24F5()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0E50); emu_cs = 0x34B8; ovl__34B8(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E50_000F_89E9();
}

/**
 * Decompiled function f__B511_0E50_000F_89E9()
 *
 * @name f__B511_0E50_000F_89E9
 * @implements B511:0E50:000F:89E9 ()
 *
 */
void f__B511_0E50_000F_89E9()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0E5F); emu_cs = 0x34DA; ovl__34DA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E5F_000C_DD83();
}

/**
 * Decompiled function f__B511_0E5F_000C_DD83()
 *
 * @name f__B511_0E5F_000C_DD83
 * @implements B511:0E5F:000C:DD83 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_0E5F_000C_DD83()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E6B); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E6B_000A_9968();
}

/**
 * Decompiled function f__B511_0E6B_000A_9968()
 *
 * @name f__B511_0E6B_000A_9968
 * @implements B511:0E6B:000A:9968 ()
 *
 */
void f__B511_0E6B_000A_9968()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E75); emu_cs = 0x07AE; f__07AE_00E4_000D_9955();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E75_0023_E3A4();
}

/**
 * Decompiled function f__B511_0E75_0023_E3A4()
 *
 * @name f__B511_0E75_0023_E3A4
 * @implements B511:0E75:0023:E3A4 ()
 *
 */
void f__B511_0E75_0023_E3A4()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0EE0; emu_last_cs = 0xB511; emu_last_ip = 0x0E7C; emu_last_length = 0x0023; emu_last_crc = 0xE3A4; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE9));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE7));
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E98); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0E98_000E_204B();
}

/**
 * Decompiled function f__B511_0E98_000E_204B()
 *
 * @name f__B511_0E98_000E_204B
 * @implements B511:0E98:000E:204B ()
 *
 */
void f__B511_0E98_000E_204B()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0EA6); emu_cs = 0x352A; ovl__352A(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0EA6_002A_894B();
}

/**
 * Decompiled function f__B511_0EA6_002A_894B()
 *
 * @name f__B511_0EA6_002A_894B
 * @implements B511:0EA6:002A:894B ()
 *
 */
void f__B511_0EA6_002A_894B()
{
	emu_addw(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0ED0); emu_cs = 0x352A; ovl__352A(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0ED0_000E_1EBD();
}

/**
 * Decompiled function f__B511_0ED0_000E_1EBD()
 *
 * @name f__B511_0ED0_000E_1EBD
 * @implements B511:0ED0:000E:1EBD ()
 *
 */
void f__B511_0ED0_000E_1EBD()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0EDE); emu_cs = 0x352A; ovl__352A(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0EDE_000B_1AF2();
}

/**
 * Decompiled function f__B511_0EDE_000B_1AF2()
 *
 * @name f__B511_0EDE_000B_1AF2
 * @implements B511:0EDE:000B:1AF2 ()
 *
 */
void f__B511_0EDE_000B_1AF2()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EE9); emu_cs = 0x34DA; ovl__34DA(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0EE9_0009_E4DB();
}

/**
 * Decompiled function f__B511_0EE9_0009_E4DB()
 *
 * @name f__B511_0EE9_0009_E4DB
 * @implements B511:0EE9:0009:E4DB ()
 *
 */
void f__B511_0EE9_0009_E4DB()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EF2); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0EF2_0006_0569();
}

/**
 * Decompiled function f__B511_0EF2_0006_0569()
 *
 * @name f__B511_0EF2_0006_0569
 * @implements B511:0EF2:0006:0569 ()
 *
 */
void f__B511_0EF2_0006_0569()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x0EF8); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0EF8_0020_001D();
}

/**
 * Decompiled function f__B511_0EF8_0020_001D()
 *
 * @name f__B511_0EF8_0020_001D
 * @implements B511:0EF8:0020:001D ()
 *
 */
void f__B511_0EF8_0020_001D()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xC8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F18); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F18_0008_43E5();
}

/**
 * Decompiled function f__B511_0F18_0008_43E5()
 *
 * @name f__B511_0F18_0008_43E5
 * @implements B511:0F18:0008:43E5 ()
 *
 */
void f__B511_0F18_0008_43E5()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0F20); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F20_0011_9942();
}

/**
 * Decompiled function f__B511_0F20_0011_9942()
 *
 * @name f__B511_0F20_0011_9942
 * @implements B511:0F20:0011:9942 ()
 *
 */
void f__B511_0F20_0011_9942()
{
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0F31); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F31_0024_AB3F();
}

/**
 * Decompiled function f__B511_0F31_0024_AB3F()
 *
 * @name f__B511_0F31_0024_AB3F
 * @implements B511:0F31:0024:AB3F ()
 *
 */
void f__B511_0F31_0024_AB3F()
{
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0F55); emu_cs = 0x34DA; ovl__34DA(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F55_0018_A36B();
}

/**
 * Decompiled function f__B511_0F55_0018_A36B()
 *
 * @name f__B511_0F55_0018_A36B
 * @implements B511:0F55:0018:A36B ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_0F55_0018_A36B()
{
	emu_addw(&emu_sp, 0x12);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) { f__B511_0F92_0005_E089(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0F6D); emu_cs = 0x348B; ovl__348B(7);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F6D_000D_C913();
}

/**
 * Decompiled function f__B511_0F6D_000D_C913()
 *
 * @name f__B511_0F6D_000D_C913
 * @implements B511:0F6D:000D:C913 ()
 *
 */
void f__B511_0F6D_000D_C913()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B511_0F6F_000B_0481(); return;
}

/**
 * Decompiled function f__B511_0F6F_000B_0481()
 *
 * @name f__B511_0F6F_000B_0481
 * @implements B511:0F6F:000B:0481 ()
 *
 * Called From: B511:0F90:000C:C06C
 */
void f__B511_0F6F_000B_0481()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0F7A); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F7A_0009_0F5C();
}

/**
 * Decompiled function f__B511_0F7A_0009_0F5C()
 *
 * @name f__B511_0F7A_0009_0F5C
 * @implements B511:0F7A:0009:0F5C ()
 *
 */
void f__B511_0F7A_0009_0F5C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_cs); emu_push(0x0F83); emu_cs = 0x0642; f__0642_0559_0027_3560();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F83_0008_4C65();
}

/**
 * Decompiled function f__B511_0F83_0008_4C65()
 *
 * @name f__B511_0F83_0008_4C65
 * @implements B511:0F83:0008:4C65 ()
 *
 */
void f__B511_0F83_0008_4C65()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F8B); emu_cs = 0x34DA; ovl__34DA(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F8B_000C_C06C();
}

/**
 * Decompiled function f__B511_0F8B_000C_C06C()
 *
 * @name f__B511_0F8B_000C_C06C
 * @implements B511:0F8B:000C:C06C ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_0F8B_000C_C06C()
{
	emu_pop(&emu_cx);
	emu_testw(&emu_si, 0x8000);
	if (emu_flags.zf) { f__B511_0F6F_000B_0481(); return; }
	f__B511_0F92_0005_E089(); return;
}

/**
 * Decompiled function f__B511_0F92_0005_E089()
 *
 * @name f__B511_0F92_0005_E089
 * @implements B511:0F92:0005:E089 ()
 *
 * Called From: B511:0F60:0018:A36B
 */
void f__B511_0F92_0005_E089()
{
	emu_push(emu_cs); emu_push(0x0F97); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0F97_000B_9995();
}

/**
 * Decompiled function f__B511_0F97_000B_9995()
 *
 * @name f__B511_0F97_000B_9995
 * @implements B511:0F97:000B:9995 ()
 *
 */
void f__B511_0F97_000B_9995()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_flags.zf) { f__B511_0FA7_0004_68F2(); return; }
	emu_push(emu_cs); emu_push(0x0FA2); emu_cs = 0x34DA; ovl__34DA(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0FA2_0005_8EFD();
}

/**
 * Decompiled function f__B511_0FA2_0005_8EFD()
 *
 * @name f__B511_0FA2_0005_8EFD
 * @implements B511:0FA2:0005:8EFD ()
 *
 */
void f__B511_0FA2_0005_8EFD()
{
	emu_push(emu_cs); emu_push(0x0FA7); emu_cs = 0x34B8; ovl__34B8(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0FA7_0004_68F2();
}

/**
 * Decompiled function f__B511_0FA7_0004_68F2()
 *
 * @name f__B511_0FA7_0004_68F2
 * @implements B511:0FA7:0004:68F2 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B511:0F9B:000B:9995
 */
void f__B511_0FA7_0004_68F2()
{
	emu_movw(&emu_ax, emu_si);
	f__B511_0FAB_0005_8BCF(); return;
}

/**
 * Decompiled function f__B511_0FAB_0005_8BCF()
 *
 * @name f__B511_0FAB_0005_8BCF
 * @implements B511:0FAB:0005:8BCF ()
 *
 * Called From: B511:0FA9:0004:68F2
 */
void f__B511_0FAB_0005_8BCF()
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
 * Decompiled function f__B511_0FB0_0028_02A0()
 *
 * @name f__B511_0FB0_0028_02A0
 * @implements B511:0FB0:0028:02A0 ()
 *
 * Called From: 3511:0043:0005:0000
 */
void f__B511_0FB0_0028_02A0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x314);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, 0x5);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax, 0x300);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x314);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FD8); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0FD8_000E_7213();
}

/**
 * Decompiled function f__B511_0FD8_000E_7213()
 *
 * @name f__B511_0FD8_000E_7213
 * @implements B511:0FD8:000E:7213 ()
 *
 */
void f__B511_0FD8_000E_7213()
{
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0FE6); emu_cs = 0x1DD7; f__1DD7_022D_0015_1956();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0FE6_000B_EDE5();
}

/**
 * Decompiled function f__B511_0FE6_000B_EDE5()
 *
 * @name f__B511_0FE6_000B_EDE5
 * @implements B511:0FE6:000B:EDE5 ()
 *
 */
void f__B511_0FE6_000B_EDE5()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0FF1); emu_cs = 0x3483; ovl__3483(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_0FF1_0016_1AAC();
}

/**
 * Decompiled function f__B511_0FF1_0016_1AAC()
 *
 * @name f__B511_0FF1_0016_1AAC
 * @implements B511:0FF1:0016:1AAC ()
 *
 */
void f__B511_0FF1_0016_1AAC()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x2DCE);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x440);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1007); emu_cs = 0x34B8; ovl__34B8(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1007_0008_CE1B();
}

/**
 * Decompiled function f__B511_1007_0008_CE1B()
 *
 * @name f__B511_1007_0008_CE1B
 * @implements B511:1007:0008:CE1B ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_1007_0008_CE1B()
{
	emu_addw(&emu_sp, 0x8);
	f__B511_100A_0005_6C93(); return;
}

/**
 * Decompiled function f__B511_100A_0005_6C93()
 *
 * @name f__B511_100A_0005_6C93
 * @implements B511:100A:0005:6C93 ()
 *
 * Called From: B511:14A9:0003:E0B7
 */
void f__B511_100A_0005_6C93()
{
	emu_xorw(&emu_di, emu_di);
	f__B511_10A1_0008_5BBF(); return;
}

/**
 * Decompiled function f__B511_100F_0010_D0C5()
 *
 * @name f__B511_100F_0010_D0C5
 * @implements B511:100F:0010:D0C5 ()
 *
 * Called From: B511:10A6:0008:5BBF
 * Called From: B511:10A6:0012:7CF2
 */
void f__B511_100F_0010_D0C5()
{
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x3C);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x101F); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_101F_0043_8F6D();
}

/**
 * Decompiled function f__B511_101F_0043_8F6D()
 *
 * @name f__B511_101F_0043_8F6D
 * @implements B511:101F:0043:8F6D ()
 *
 */
void f__B511_101F_0043_8F6D()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_di);
	emu_movw(&emu_dx, 0x6);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2BAE));
	emu_movw(&emu_ax, emu_di);
	emu_movw(&emu_dx, 0x6);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2BAC));
	emu_movw(&emu_ax, emu_di);
	emu_movw(&emu_dx, 0x6);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2BB0));
	emu_movw(&emu_ax, emu_di);
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1062); emu_cs = 0x34B8; ovl__34B8(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1062_0035_7C26();
}

/**
 * Decompiled function f__B511_1062_0035_7C26()
 *
 * @name f__B511_1062_0035_7C26
 * @implements B511:1062:0035:7C26 ()
 *
 */
void f__B511_1062_0035_7C26()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x11C0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x22), 0x60);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x24), 0x68);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1097); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1097_0012_7CF2();
}

/**
 * Decompiled function f__B511_1097_0012_7CF2()
 *
 * @name f__B511_1097_0012_7CF2
 * @implements B511:1097:0012:7CF2 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_1097_0012_7CF2()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_incw(&emu_di);
	f__B511_10A1_0008_5BBF(); return;
}

/**
 * Decompiled function f__B511_10A1_0008_5BBF()
 *
 * @name f__B511_10A1_0008_5BBF
 * @implements B511:10A1:0008:5BBF ()
 *
 * Called From: B511:100C:0008:CE1B
 * Called From: B511:100C:0005:6C93
 */
void f__B511_10A1_0008_5BBF()
{
	emu_cmpw(&emu_di, 0x2);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B511_10A9_001C_9617(); return; }
	f__B511_100F_0010_D0C5(); return;
}

/**
 * Decompiled function f__B511_10A9_001C_9617()
 *
 * @name f__B511_10A9_001C_9617
 * @implements B511:10A9:001C:9617 ()
 *
 * Called From: B511:10A4:0012:7CF2
 */
void f__B511_10A9_001C_9617()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2BE4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10C5); emu_cs = 0x0642; f__0642_075D_0011_C164();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_10C5_0009_0769();
}

/**
 * Decompiled function f__B511_10C5_0009_0769()
 *
 * @name f__B511_10C5_0009_0769
 * @implements B511:10C5:0009:0769 ()
 *
 */
void f__B511_10C5_0009_0769()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10CE); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_10CE_001B_4375();
}

/**
 * Decompiled function f__B511_10CE_001B_4375()
 *
 * @name f__B511_10CE_001B_4375
 * @implements B511:10CE:001B:4375 ()
 *
 */
void f__B511_10CE_001B_4375()
{
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6630);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6632);
	emu_push(0x10E9);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A604A5: f__22A6_04A5_000F_3B8F(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB511; emu_last_ip = 0x10E4; emu_last_length = 0x001B; emu_last_crc = 0x4375;
			emu_call();
			return;
	}
	f__B511_10E9_0008_C3E0();
}

/**
 * Decompiled function f__B511_10E9_0008_C3E0()
 *
 * @name f__B511_10E9_0008_C3E0
 * @implements B511:10E9:0008:C3E0 ()
 *
 */
void f__B511_10E9_0008_C3E0()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x10F1); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_10F1_0020_001D();
}

/**
 * Decompiled function f__B511_10F1_0020_001D()
 *
 * @name f__B511_10F1_0020_001D
 * @implements B511:10F1:0020:001D ()
 *
 */
void f__B511_10F1_0020_001D()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xC8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x28);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1111); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1111_0014_B1CE();
}

/**
 * Decompiled function f__B511_1111_0014_B1CE()
 *
 * @name f__B511_1111_0014_B1CE
 * @implements B511:1111:0014:B1CE ()
 *
 */
void f__B511_1111_0014_B1CE()
{
	emu_addw(&emu_sp, 0x10);
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x1125); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1125_0008_1BE5();
}

/**
 * Decompiled function f__B511_1125_0008_1BE5()
 *
 * @name f__B511_1125_0008_1BE5
 * @implements B511:1125:0008:1BE5 ()
 *
 */
void f__B511_1125_0008_1BE5()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x112D); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_112D_0005_18A5();
}

/**
 * Decompiled function f__B511_112D_0005_18A5()
 *
 * @name f__B511_112D_0005_18A5
 * @implements B511:112D:0005:18A5 ()
 *
 */
void f__B511_112D_0005_18A5()
{
	emu_movw(&emu_si, 0xFFFE);
	f__B511_1177_000A_673D(); return;
}

/**
 * Decompiled function f__B511_1132_000B_D4F4()
 *
 * @name f__B511_1132_000B_D4F4
 * @implements B511:1132:000B:D4F4 ()
 *
 * Called From: B511:117A:000A:673D
 */
void f__B511_1132_000B_D4F4()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x113D); emu_cs = 0x34A2; ovl__34A2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_113D_000A_C086();
}

/**
 * Decompiled function f__B511_113D_000A_C086()
 *
 * @name f__B511_113D_000A_C086
 * @implements B511:113D:000A:C086 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_113D_000A_C086()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_push(emu_cs); emu_push(0x1147); emu_cs = 0x0642; f__0642_0559_0027_3560();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1147_0020_6FFF();
}

/**
 * Decompiled function f__B511_1147_0020_6FFF()
 *
 * @name f__B511_1147_0020_6FFF
 * @implements B511:1147:0020:6FFF ()
 *
 */
void f__B511_1147_0020_6FFF()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x800);
	if (emu_flags.zf) { f__B511_1153_0014_A689(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__B511_1153_0014_A689(); return;
}

/**
 * Decompiled function f__B511_1153_0014_A689()
 *
 * @name f__B511_1153_0014_A689
 * @implements B511:1153:0014:A689 ()
 *
 * Called From: B511:114C:0020:6FFF
 */
void f__B511_1153_0014_A689()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_cmpw(&emu_ax, 0x8001);
	if (emu_flags.zf) { f__B511_1167_0005_D04A(); return; }
	emu_cmpw(&emu_ax, 0x8002);
	if (emu_flags.zf) { f__B511_116C_0005_E6CA(); return; }
	emu_cmpw(&emu_ax, 0x8003);
	if (emu_flags.zf) { f__B511_1171_0004_EFF9(); return; }
	f__B511_1175_0002_C03A(); return;
}

/**
 * Decompiled function f__B511_1167_0005_D04A()
 *
 * @name f__B511_1167_0005_D04A
 * @implements B511:1167:0005:D04A ()
 *
 * Called From: B511:1159:0014:A689
 */
void f__B511_1167_0005_D04A()
{
	emu_movw(&emu_si, 0x1);
	f__B511_1177_000A_673D(); return;
}

/**
 * Decompiled function f__B511_116C_0005_E6CA()
 *
 * @name f__B511_116C_0005_E6CA
 * @implements B511:116C:0005:E6CA ()
 *
 * Called From: B511:115E:0014:A689
 */
void f__B511_116C_0005_E6CA()
{
	emu_movw(&emu_si, 0x2);
	f__B511_1177_000A_673D(); return;
}

/**
 * Decompiled function f__B511_1171_0004_EFF9()
 *
 * @name f__B511_1171_0004_EFF9
 * @implements B511:1171:0004:EFF9 ()
 *
 * Called From: B511:1163:0014:A689
 */
void f__B511_1171_0004_EFF9()
{
	emu_xorw(&emu_si, emu_si);
	f__B511_1177_000A_673D(); return;
}

/**
 * Decompiled function f__B511_1175_0002_C03A()
 *
 * @name f__B511_1175_0002_C03A
 * @implements B511:1175:0002:C03A ()
 *
 * Called From: B511:1165:0014:A689
 * Called From: B511:1165:0020:6FFF
 */
void f__B511_1175_0002_C03A()
{
	f__B511_1177_000A_673D(); return;
}

/**
 * Decompiled function f__B511_1177_000A_673D()
 *
 * @name f__B511_1177_000A_673D
 * @implements B511:1177:000A:673D ()
 *
 * Called From: B511:1130:0005:18A5
 * Called From: B511:116A:0005:D04A
 * Called From: B511:116F:0005:E6CA
 * Called From: B511:1173:0004:EFF9
 * Called From: B511:1175:0002:C03A
 */
void f__B511_1177_000A_673D()
{
	emu_cmpw(&emu_si, 0xFFFE);
	if (emu_flags.zf) { f__B511_1132_000B_D4F4(); return; }
	emu_push(emu_cs); emu_push(0x1181); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1181_0014_18D0();
}

/**
 * Decompiled function f__B511_1181_0014_18D0()
 *
 * @name f__B511_1181_0014_18D0
 * @implements B511:1181:0014:18D0 ()
 *
 */
void f__B511_1181_0014_18D0()
{
	emu_cmpw(&emu_si, 0xFFFF);
	if (!emu_flags.zf) { f__B511_119B_0012_75BC(); return; }
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x314);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1195); emu_cs = 0x259E; emu_ip = 0x0006; emu_last_cs = 0xB511; emu_last_ip = 0x1190; emu_last_length = 0x0014; emu_last_crc = 0x18D0; emu_call();
	/* Unresolved jump */ emu_ip = 0x1195; emu_last_cs = 0xB511; emu_last_ip = 0x1195; emu_last_length = 0x0014; emu_last_crc = 0x18D0; emu_call();
}

/**
 * Decompiled function f__B511_119B_0012_75BC()
 *
 * @name f__B511_119B_0012_75BC
 * @implements B511:119B:0012:75BC ()
 *
 * Called From: B511:1184:0014:18D0
 */
void f__B511_119B_0012_75BC()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x0);
	if (emu_flags.zf) { f__B511_11B9_0002_D4BA(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, 0x3E);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x11AD); emu_cs = 0x3483; emu_ip = 0x002A; emu_last_cs = 0xB511; emu_last_ip = 0x11A8; emu_last_length = 0x0012; emu_last_crc = 0x75BC; emu_call();
	/* Unresolved jump */ emu_ip = 0x11AD; emu_last_cs = 0xB511; emu_last_ip = 0x11AD; emu_last_length = 0x0012; emu_last_crc = 0x75BC; emu_call();
}

/**
 * Decompiled function f__B511_11B9_0002_D4BA()
 *
 * @name f__B511_11B9_0002_D4BA
 * @implements B511:11B9:0002:D4BA ()
 *
 * Called From: B511:11A0:0012:75BC
 */
void f__B511_11B9_0002_D4BA()
{
	f__B511_11E4_0017_51C5(); return;
}

/**
 * Decompiled function f__B511_11BB_001B_9F2E()
 *
 * @name f__B511_11BB_001B_9F2E
 * @implements B511:11BB:001B:9F2E ()
 *
 * Called From: B511:11EA:0017:51C5
 * Called From: B511:11EA:0025:9022
 */
void f__B511_11BB_001B_9F2E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x11D6); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_11D6_0025_9022();
}

/**
 * Decompiled function f__B511_11D6_0025_9022()
 *
 * @name f__B511_11D6_0025_9022
 * @implements B511:11D6:0025:9022 ()
 *
 */
void f__B511_11D6_0025_9022()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	f__B511_11E4_0017_51C5(); return;
}

/**
 * Decompiled function f__B511_11E4_0017_51C5()
 *
 * @name f__B511_11E4_0017_51C5
 * @implements B511:11E4:0017:51C5 ()
 *
 * Called From: B511:11B9:0002:D4BA
 */
void f__B511_11E4_0017_51C5()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__B511_11BB_001B_9F2E(); return; }
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x314);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x11FB); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_11FB_0014_EDAC();
}

/**
 * Decompiled function f__B511_11FB_0014_EDAC()
 *
 * @name f__B511_11FB_0014_EDAC
 * @implements B511:11FB:0014:EDAC ()
 *
 */
void f__B511_11FB_0014_EDAC()
{
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37AE), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x120C; emu_last_cs = 0xB511; emu_last_ip = 0x1203; emu_last_length = 0x0014; emu_last_crc = 0xEDAC; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_flags.zf) { f__B511_1212_0024_1AEB(); return; }
	/* Unresolved jump */ emu_ip = 0x14AC; emu_last_cs = 0xB511; emu_last_ip = 0x120C; emu_last_length = 0x0014; emu_last_crc = 0xEDAC; emu_call();
}

/**
 * Decompiled function f__B511_1212_0024_1AEB()
 *
 * @name f__B511_1212_0024_1AEB
 * @implements B511:1212:0024:1AEB ()
 *
 * Called From: B511:120A:0014:EDAC
 */
void f__B511_1212_0024_1AEB()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xA8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xA8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x6B);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1236); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1236_000F_E74D();
}

/**
 * Decompiled function f__B511_1236_000F_E74D()
 *
 * @name f__B511_1236_000F_E74D
 * @implements B511:1236:000F:E74D ()
 *
 */
void f__B511_1236_000F_E74D()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1245); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1245_000B_6BAA();
}

/**
 * Decompiled function f__B511_1245_000B_6BAA()
 *
 * @name f__B511_1245_000B_6BAA
 * @implements B511:1245:000B:6BAA ()
 *
 */
void f__B511_1245_000B_6BAA()
{
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1250); emu_cs = 0x34B8; ovl__34B8(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1250_001A_4715();
}

/**
 * Decompiled function f__B511_1250_001A_4715()
 *
 * @name f__B511_1250_001A_4715
 * @implements B511:1250:001A:4715 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_1250_001A_4715()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x126A); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_126A_0024_2BD7();
}

/**
 * Decompiled function f__B511_126A_0024_2BD7()
 *
 * @name f__B511_126A_0024_2BD7
 * @implements B511:126A:0024:2BD7 ()
 *
 */
void f__B511_126A_0024_2BD7()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xA8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xF0);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x6C);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x128E); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_128E_000F_E74D();
}

/**
 * Decompiled function f__B511_128E_000F_E74D()
 *
 * @name f__B511_128E_000F_E74D
 * @implements B511:128E:000F:E74D ()
 *
 */
void f__B511_128E_000F_E74D()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x129D); emu_cs = 0x29DA; f__29DA_00D0_0013_E21A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_129D_000B_68AA();
}

/**
 * Decompiled function f__B511_129D_000B_68AA()
 *
 * @name f__B511_129D_000B_68AA
 * @implements B511:129D:000B:68AA ()
 *
 */
void f__B511_129D_000B_68AA()
{
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12A8); emu_cs = 0x34B8; ovl__34B8(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_12A8_001A_4715();
}

/**
 * Decompiled function f__B511_12A8_001A_4715()
 *
 * @name f__B511_12A8_001A_4715
 * @implements B511:12A8:001A:4715 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_12A8_001A_4715()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x12C2); emu_cs = 0x348B; ovl__348B(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_12C2_002A_D28B();
}

/**
 * Decompiled function f__B511_12C2_002A_D28B()
 *
 * @name f__B511_12C2_002A_D28B
 * @implements B511:12C2:002A:D28B ()
 *
 */
void f__B511_12C2_002A_D28B()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x1E);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2BDD);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x12EC); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_12EC_001C_D688();
}

/**
 * Decompiled function f__B511_12EC_001C_D688()
 *
 * @name f__B511_12EC_001C_D688
 * @implements B511:12EC:001C:D688 ()
 *
 */
void f__B511_12EC_001C_D688()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1308); emu_cs = 0x0642; f__0642_075D_0011_C164();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1308_0009_DAE3();
}

/**
 * Decompiled function f__B511_1308_0009_DAE3()
 *
 * @name f__B511_1308_0009_DAE3
 * @implements B511:1308:0009:DAE3 ()
 *
 */
void f__B511_1308_0009_DAE3()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1311); emu_cs = 0x0FCB; f__0FCB_0088_0016_2DD9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1311_0018_314D();
}

/**
 * Decompiled function f__B511_1311_0018_314D()
 *
 * @name f__B511_1311_0018_314D
 * @implements B511:1311:0018:314D ()
 *
 */
void f__B511_1311_0018_314D()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x1329); emu_cs = 0x2502; f__2502_0008_0015_FFBD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1329_0011_4468();
}

/**
 * Decompiled function f__B511_1329_0011_4468()
 *
 * @name f__B511_1329_0011_4468
 * @implements B511:1329:0011:4468 ()
 *
 */
void f__B511_1329_0011_4468()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0x5);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x133A); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_133A_0009_70CE();
}

/**
 * Decompiled function f__B511_133A_0009_70CE()
 *
 * @name f__B511_133A_0009_70CE
 * @implements B511:133A:0009:70CE ()
 *
 */
void f__B511_133A_0009_70CE()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_push(emu_cs); emu_push(0x1343); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1343_0023_0A38();
}

/**
 * Decompiled function f__B511_1343_0023_0A38()
 *
 * @name f__B511_1343_0023_0A38
 * @implements B511:1343:0023:0A38 ()
 *
 */
void f__B511_1343_0023_0A38()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2BC0));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2BBE));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs);
	emu_push(0x1366); f__B511_0E44_000C_24F5();
	f__B511_1366_0021_27D9();
}

/**
 * Decompiled function f__B511_1366_0021_27D9()
 *
 * @name f__B511_1366_0021_27D9
 * @implements B511:1366:0021:27D9 ()
 *
 */
void f__B511_1366_0021_27D9()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2C0A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1387); emu_cs = 0x0642; f__0642_075D_0011_C164();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1387_0009_0769();
}

/**
 * Decompiled function f__B511_1387_0009_0769()
 *
 * @name f__B511_1387_0009_0769
 * @implements B511:1387:0009:0769 ()
 *
 */
void f__B511_1387_0009_0769()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1390); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1390_0008_DBE0();
}

/**
 * Decompiled function f__B511_1390_0008_DBE0()
 *
 * @name f__B511_1390_0008_DBE0
 * @implements B511:1390:0008:DBE0 ()
 *
 */
void f__B511_1390_0008_DBE0()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x1398); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1398_0020_F01E();
}

/**
 * Decompiled function f__B511_1398_0020_F01E()
 *
 * @name f__B511_1398_0020_F01E
 * @implements B511:1398:0020:F01E ()
 *
 */
void f__B511_1398_0020_F01E()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1A);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x13B8); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_13B8_002C_FE1E();
}

/**
 * Decompiled function f__B511_13B8_002C_FE1E()
 *
 * @name f__B511_13B8_002C_FE1E
 * @implements B511:13B8:002C:FE1E ()
 *
 */
void f__B511_13B8_002C_FE1E()
{
	emu_addw(&emu_sp, 0x10);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xD);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1A);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x18);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x18);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x13E4); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_13E4_000E_0FF5();
}

/**
 * Decompiled function f__B511_13E4_000E_0FF5()
 *
 * @name f__B511_13E4_000E_0FF5
 * @implements B511:13E4:000E:0FF5 ()
 *
 */
void f__B511_13E4_000E_0FF5()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x13F2); emu_cs = 0x348B; ovl__348B(7);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_13F2_0007_E5DE();
}

/**
 * Decompiled function f__B511_13F2_0007_E5DE()
 *
 * @name f__B511_13F2_0007_E5DE
 * @implements B511:13F2:0007:E5DE ()
 *
 */
void f__B511_13F2_0007_E5DE()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x13F9); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_13F9_0029_4034();
}

/**
 * Decompiled function f__B511_13F9_0029_4034()
 *
 * @name f__B511_13F9_0029_4034
 * @implements B511:13F9:0029:4034 ()
 *
 * Called From: B511:142D:0019:858B
 */
void f__B511_13F9_0029_4034()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2BC0));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2BBE));
	emu_push(emu_cs); emu_push(0x1422); emu_cs = 0x34DA; ovl__34DA(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1422_0019_858B();
}

/**
 * Decompiled function f__B511_1422_0019_858B()
 *
 * @name f__B511_1422_0019_858B
 * @implements B511:1422:0019:858B ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_1422_0019_858B()
{
	emu_addw(&emu_sp, 0x12);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x8000);
	if (emu_flags.zf) { f__B511_13F9_0029_4034(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x8001);
	if (!emu_flags.zf) { f__B511_143D_000F_CDB2(); return; }
	emu_push(emu_cs); emu_push(0x143B); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_143B_0002_C93A();
}

/**
 * Decompiled function f__B511_143B_0002_C93A()
 *
 * @name f__B511_143B_0002_C93A
 * @implements B511:143B:0002:C93A ()
 *
 */
void f__B511_143B_0002_C93A()
{
	f__B511_144F_0002_D4BA(); return;
}

/**
 * Decompiled function f__B511_143D_000F_CDB2()
 *
 * @name f__B511_143D_000F_CDB2
 * @implements B511:143D:000F:CDB2 ()
 *
 * Called From: B511:1434:0019:858B
 */
void f__B511_143D_000F_CDB2()
{
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x314);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x144C); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_144C_0005_906E();
}

/**
 * Decompiled function f__B511_144C_0005_906E()
 *
 * @name f__B511_144C_0005_906E
 * @implements B511:144C:0005:906E ()
 *
 */
void f__B511_144C_0005_906E()
{
	emu_addw(&emu_sp, 0x6);
	f__B511_144F_0002_D4BA(); return;
}

/**
 * Decompiled function f__B511_144F_0002_D4BA()
 *
 * @name f__B511_144F_0002_D4BA
 * @implements B511:144F:0002:D4BA ()
 *
 * Called From: B511:143B:0002:C93A
 */
void f__B511_144F_0002_D4BA()
{
	f__B511_147A_000D_5E94(); return;
}

/**
 * Decompiled function f__B511_1451_001B_8EEC()
 *
 * @name f__B511_1451_001B_8EEC
 * @implements B511:1451:001B:8EEC ()
 *
 * Called From: B511:1480:000D:5E94
 * Called From: B511:1480:001B:0682
 */
void f__B511_1451_001B_8EEC()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x146C); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_146C_001B_0682();
}

/**
 * Decompiled function f__B511_146C_001B_0682()
 *
 * @name f__B511_146C_001B_0682
 * @implements B511:146C:001B:0682 ()
 *
 */
void f__B511_146C_001B_0682()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	f__B511_147A_000D_5E94(); return;
}

/**
 * Decompiled function f__B511_147A_000D_5E94()
 *
 * @name f__B511_147A_000D_5E94
 * @implements B511:147A:000D:5E94 ()
 *
 * Called From: B511:144F:0005:906E
 * Called From: B511:144F:0002:D4BA
 */
void f__B511_147A_000D_5E94()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!emu_flags.zf) { f__B511_1451_001B_8EEC(); return; }
	emu_push(emu_cs); emu_push(0x1487); emu_cs = 0x34DA; ovl__34DA(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1487_0005_8EFD();
}

/**
 * Decompiled function f__B511_1487_0005_8EFD()
 *
 * @name f__B511_1487_0005_8EFD
 * @implements B511:1487:0005:8EFD ()
 *
 */
void f__B511_1487_0005_8EFD()
{
	emu_push(emu_cs); emu_push(0x148C); emu_cs = 0x34B8; ovl__34B8(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_148C_0008_1199();
}

/**
 * Decompiled function f__B511_148C_0008_1199()
 *
 * @name f__B511_148C_0008_1199
 * @implements B511:148C:0008:1199 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_148C_0008_1199()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1494); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_1494_0003_CB1A();
}

/**
 * Decompiled function f__B511_1494_0003_CB1A()
 *
 * @name f__B511_1494_0003_CB1A
 * @implements B511:1494:0003:CB1A ()
 *
 */
void f__B511_1494_0003_CB1A()
{
	emu_pop(&emu_cx);
	f__B511_1497_0005_7A4B(); return;
}

/**
 * Decompiled function f__B511_1497_0005_7A4B()
 *
 * @name f__B511_1497_0005_7A4B
 * @implements B511:1497:0005:7A4B ()
 *
 * Called From: B511:1495:0003:CB1A
 */
void f__B511_1497_0005_7A4B()
{
	emu_push(emu_cs); emu_push(0x149C); emu_cs = 0x1DD7; f__1DD7_01EB_0013_9C3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_149C_000D_A79B();
}

/**
 * Decompiled function f__B511_149C_000D_A79B()
 *
 * @name f__B511_149C_000D_A79B
 * @implements B511:149C:000D:A79B ()
 *
 */
void f__B511_149C_000D_A79B()
{
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1497; emu_last_cs = 0xB511; emu_last_ip = 0x149E; emu_last_length = 0x000D; emu_last_crc = 0xA79B; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x8001);
	if (!emu_flags.zf) { f__B511_14A9_0003_E0B7(); return; }
	f__B511_14AC_0008_FC73(); return;
}

/**
 * Decompiled function f__B511_14A9_0003_E0B7()
 *
 * @name f__B511_14A9_0003_E0B7
 * @implements B511:14A9:0003:E0B7 ()
 *
 * Called From: B511:14A5:000D:A79B
 */
void f__B511_14A9_0003_E0B7()
{
	f__B511_100A_0005_6C93(); return;
}

/**
 * Decompiled function f__B511_14AC_0008_FC73()
 *
 * @name f__B511_14AC_0008_FC73
 * @implements B511:14AC:0008:FC73 ()
 *
 * Called From: B511:14A7:000D:A79B
 */
void f__B511_14AC_0008_FC73()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x14B4); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_14B4_0007_B64F();
}

/**
 * Decompiled function f__B511_14B4_0007_B64F()
 *
 * @name f__B511_14B4_0007_B64F
 * @implements B511:14B4:0007:B64F ()
 *
 */
void f__B511_14B4_0007_B64F()
{
	emu_pop(&emu_cx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x14BB); emu_cs = 0x34B8; ovl__34B8(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_14BB_0015_3476();
}

/**
 * Decompiled function f__B511_14BB_0015_3476()
 *
 * @name f__B511_14BB_0015_3476
 * @implements B511:14BB:0015:3476 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B511_14BB_0015_3476()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x2DCE);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x440);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x14D0); emu_cs = 0x34B8; ovl__34B8(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_14D0_0008_4201();
}

/**
 * Decompiled function f__B511_14D0_0008_4201()
 *
 * @name f__B511_14D0_0008_4201
 * @implements B511:14D0:0008:4201 ()
 *
 */
void f__B511_14D0_0008_4201()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x14D8); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_14D8_0005_816D();
}

/**
 * Decompiled function f__B511_14D8_0005_816D()
 *
 * @name f__B511_14D8_0005_816D
 * @implements B511:14D8:0005:816D ()
 *
 */
void f__B511_14D8_0005_816D()
{
	emu_push(emu_cs); emu_push(0x14DD); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_14DD_000F_CDB2();
}

/**
 * Decompiled function f__B511_14DD_000F_CDB2()
 *
 * @name f__B511_14DD_000F_CDB2
 * @implements B511:14DD:000F:CDB2 ()
 *
 */
void f__B511_14DD_000F_CDB2()
{
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x314);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x14EC); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x3511) { ovl__3511(0xFF); }
	f__B511_14EC_0007_79C7();
}

/**
 * Decompiled function f__B511_14EC_0007_79C7()
 *
 * @name f__B511_14EC_0007_79C7
 * @implements B511:14EC:0007:79C7 ()
 *
 */
void f__B511_14EC_0007_79C7()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, emu_si);
	f__B511_14F3_0006_F7CE(); return;
}

/**
 * Decompiled function f__B511_14F3_0006_F7CE()
 *
 * @name f__B511_14F3_0006_F7CE
 * @implements B511:14F3:0006:F7CE ()
 *
 * Called From: B511:14F1:0007:79C7
 */
void f__B511_14F3_0006_F7CE()
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
