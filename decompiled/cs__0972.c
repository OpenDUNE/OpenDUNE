/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0972_0007_0051_7645()
 *
 * @name f__0972_0007_0051_7645
 * @implements 0972:0007:0051:7645 ()
 *
 * Called From: 0642:03C7:0005:F04C
 */
void f__0972_0007_0051_7645()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x1C);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3420));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x341E));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((emu_flags.sf != emu_flags.of)) { f__0972_003F_0019_8B3A(); return; }
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_0038_0020_C146(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	if ((emu_flags.cf || emu_flags.zf)) { f__0972_003F_0019_8B3A(); return; }
	f__0972_0038_0020_C146(); return;
}

/**
 * Decompiled function f__0972_0038_0020_C146()
 *
 * @name f__0972_0038_0020_C146
 * @implements 0972:0038:0020:C146 ()
 *
 * Called From: 0972:0030:0051:7645
 */
void f__0972_0038_0020_C146()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37AC), 0x0);
	if (emu_flags.zf) { f__0972_0070_0035_11A8(); return; }
	f__0972_003F_0019_8B3A(); return;
}

/**
 * Decompiled function f__0972_003F_0019_8B3A()
 *
 * @name f__0972_003F_0019_8B3A
 * @implements 0972:003F:0019:8B3A ()
 *
 * Called From: 0972:002E:0051:7645
 * Called From: 0972:0036:0051:7645
 */
void f__0972_003F_0019_8B3A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x3C);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1E);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0058); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	f__0972_0058_004D_2870();
}

/**
 * Decompiled function f__0972_0058_004D_2870()
 *
 * @name f__0972_0058_004D_2870
 * @implements 0972:0058:004D:2870 ()
 *
 */
void f__0972_0058_004D_2870()
{
	emu_addw(&emu_sp, 0x8);
	emu_cwd();
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	emu_movw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	emu_addw(&emu_cx, emu_ax);
	emu_adcw(&emu_bx, emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3420), emu_bx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x341E), emu_cx);
	f__0972_0070_0035_11A8(); return;
}

/**
 * Decompiled function f__0972_0070_0035_11A8()
 *
 * @name f__0972_0070_0035_11A8
 * @implements 0972:0070:0035:11A8 ()
 *
 * Called From: 0972:003D:0051:7645
 * Called From: 0972:003D:0020:C146
 */
void f__0972_0070_0035_11A8()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x341C));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x341A));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_00BD_006E_C639(); return; }
	if (!emu_flags.zf) { f__0972_0085_0020_DE51(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__0972_00BD_006E_C639(); return; }
	f__0972_0085_0020_DE51(); return;
}

/**
 * Decompiled function f__0972_0085_0020_DE51()
 *
 * @name f__0972_0085_0020_DE51
 * @implements 0972:0085:0020:DE51 ()
 *
 * Called From: 0972:007D:0035:11A8
 * Called From: 0972:007D:004D:2870
 */
void f__0972_0085_0020_DE51()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_00BD_006E_C639(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x5460);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1518);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2A30);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00A5); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	f__0972_00A5_0086_1AD2();
}

/**
 * Decompiled function f__0972_00A5_0086_1AD2()
 *
 * @name f__0972_00A5_0086_1AD2
 * @implements 0972:00A5:0086:1AD2 ()
 *
 */
void f__0972_00A5_0086_1AD2()
{
	emu_addw(&emu_sp, 0x8);
	emu_cwd();
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	emu_movw(&emu_cx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	emu_addw(&emu_cx, emu_ax);
	emu_adcw(&emu_bx, emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x341C), emu_bx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x341A), emu_cx);
	f__0972_00BD_006E_C639(); return;
}

/**
 * Decompiled function f__0972_00BD_006E_C639()
 *
 * @name f__0972_00BD_006E_C639
 * @implements 0972:00BD:006E:C639 ()
 *
 * Called From: 0972:007B:0035:11A8
 * Called From: 0972:007B:004D:2870
 * Called From: 0972:0083:0035:11A8
 * Called From: 0972:0083:004D:2870
 * Called From: 0972:008A:0020:DE51
 * Called From: 0972:008A:0035:11A8
 * Called From: 0972:008A:004D:2870
 */
void f__0972_00BD_006E_C639()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3424));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3422));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_00EB_0040_E14D(); return; }
	if (!emu_flags.zf) { f__0972_00D2_0059_A980(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__0972_00EB_0040_E14D(); return; }
	f__0972_00D2_0059_A980(); return;
}

/**
 * Decompiled function f__0972_00D2_0059_A980()
 *
 * @name f__0972_00D2_0059_A980
 * @implements 0972:00D2:0059:A980 ()
 *
 * Called From: 0972:00CA:006E:C639
 * Called From: 0972:00CA:0086:1AD2
 */
void f__0972_00D2_0059_A980()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	emu_addw(&emu_dx, 0x5);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3424), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3422), emu_dx);
	f__0972_00EB_0040_E14D(); return;
}

/**
 * Decompiled function f__0972_00EB_0040_E14D()
 *
 * @name f__0972_00EB_0040_E14D
 * @implements 0972:00EB:0040:E14D ()
 *
 * Called From: 0972:00C8:006E:C639
 * Called From: 0972:00D0:006E:C639
 * Called From: 0972:00D0:0086:1AD2
 */
void f__0972_00EB_0040_E14D()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3428));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3426));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_0119_0012_F490(); return; }
	if (!emu_flags.zf) { f__0972_0100_002B_22A3(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__0972_0119_0012_F490(); return; }
	f__0972_0100_002B_22A3(); return;
}

/**
 * Decompiled function f__0972_0100_002B_22A3()
 *
 * @name f__0972_0100_002B_22A3
 * @implements 0972:0100:002B:22A3 ()
 *
 * Called From: 0972:00F8:0059:A980
 * Called From: 0972:00F8:006E:C639
 * Called From: 0972:00F8:0040:E14D
 */
void f__0972_0100_002B_22A3()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
	emu_addw(&emu_dx, 0x3C);
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3428), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3426), emu_dx);
	f__0972_0119_0012_F490(); return;
}

/**
 * Decompiled function f__0972_0119_0012_F490()
 *
 * @name f__0972_0119_0012_F490
 * @implements 0972:0119:0012:F490 ()
 *
 * Called From: 0972:00F6:0040:E14D
 * Called From: 0972:00F6:006E:C639
 * Called From: 0972:00FE:0040:E14D
 * Called From: 0972:00FE:006E:C639
 * Called From: 0972:00FE:0086:1AD2
 * Called From: 0972:00FE:0059:A980
 */
void f__0972_0119_0012_F490()
{
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x012B); emu_cs = 0x1082; emu_Building_FindFirst();
	f__0972_012B_0006_5385();
}

/**
 * Decompiled function f__0972_012B_0006_5385()
 *
 * @name f__0972_012B_0006_5385
 * @implements 0972:012B:0006:5385 ()
 *
 */
void f__0972_012B_0006_5385()
{
	emu_addw(&emu_sp, 0x8);
	f__0972_0A50_0013_04BA(); return;
}

/**
 * Decompiled function f__0972_0131_0037_A640()
 *
 * @name f__0972_0131_0037_A640
 * @implements 0972:0131:0037:A640 ()
 *
 * Called From: 0972:0A60:0013:04BA
 * Called From: 0972:0A60:0015:9677
 */
void f__0972_0131_0037_A640()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8432), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8430), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3950), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x394E), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0168); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	f__0972_0168_0012_8AC5();
}

/**
 * Decompiled function f__0972_0168_0012_8AC5()
 *
 * @name f__0972_0168_0012_8AC5
 * @implements 0972:0168:0012:8AC5 ()
 *
 */
void f__0972_0168_0012_8AC5()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x394C), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x394A), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_flags.zf) { f__0972_017A_0040_F4EB(); return; }
	f__0972_0A44_000A_DEF0(); return;
}

/**
 * Decompiled function f__0972_017A_0040_F4EB()
 *
 * @name f__0972_017A_0040_F4EB
 * @implements 0972:017A:0040:F4EB ()
 *
 * Called From: 0972:0175:0012:8AC5
 */
void f__0972_017A_0040_F4EB()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__0972_01E5_005A_6804(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x2);
	if (!emu_flags.zf) { f__0972_01E5_005A_6804(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01BB; emu_last_cs = 0x0972; emu_last_ip = 0x0194; emu_last_length = 0x0040; emu_last_crc = 0xF4EB; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x50));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x394C));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A3C));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01BB; emu_last_cs = 0x0972; emu_last_ip = 0x01A9; emu_last_length = 0x0040; emu_last_crc = 0xF4EB; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01BB; emu_last_cs = 0x0972; emu_last_ip = 0x01AF; emu_last_length = 0x0040; emu_last_crc = 0xF4EB; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01BA); emu_cs = 0x10E4; emu_ip = 0x0F1A; emu_last_cs = 0x0972; emu_last_ip = 0x01B5; emu_last_length = 0x0040; emu_last_crc = 0xF4EB; emu_call();
	/* Unresolved jump */ emu_ip = 0x01BA; emu_last_cs = 0x0972; emu_last_ip = 0x01BA; emu_last_length = 0x0040; emu_last_crc = 0xF4EB; emu_call();
}

/**
 * Decompiled function f__0972_01E5_005A_6804()
 *
 * @name f__0972_01E5_005A_6804
 * @implements 0972:01E5:005A:6804 ()
 *
 * Called From: 0972:017E:0040:F4EB
 * Called From: 0972:0189:0040:F4EB
 */
void f__0972_01E5_005A_6804()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__0972_0242_0009_920A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x400);
	if (emu_flags.zf) { f__0972_0242_0009_920A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_si, 0x10));
	emu_sarw(&emu_ax, 0x1);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_0242_0009_920A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x1E);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, emu_bx, 0x3800));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x400);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x022E; emu_last_cs = 0x0972; emu_last_ip = 0x022B; emu_last_length = 0x005A; emu_last_crc = 0x6804; emu_call(); return; }
	emu_incw(&emu_si);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x023F); emu_cs = 0x0C3A; f__0C3A_1216_0013_E56D();
	f__0972_023F_000C_1822();
}

/**
 * Decompiled function f__0972_023F_000C_1822()
 *
 * @name f__0972_023F_000C_1822
 * @implements 0972:023F:000C:1822 ()
 *
 */
void f__0972_023F_000C_1822()
{
	emu_addw(&emu_sp, 0x8);
	f__0972_0242_0009_920A(); return;
}

/**
 * Decompiled function f__0972_0242_0009_920A()
 *
 * @name f__0972_0242_0009_920A
 * @implements 0972:0242:0009:920A ()
 *
 * Called From: 0972:01E9:005A:6804
 * Called From: 0972:01F5:005A:6804
 * Called From: 0972:020B:005A:6804
 */
void f__0972_0242_0009_920A()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (!emu_flags.zf) { f__0972_024B_000F_7578(); return; }
	f__0972_0938_0009_11BD(); return;
}

/**
 * Decompiled function f__0972_024B_000F_7578()
 *
 * @name f__0972_024B_000F_7578
 * @implements 0972:024B:000F:7578 ()
 *
 * Called From: 0972:0246:0009:920A
 * Called From: 0972:0246:000C:1822
 */
void f__0972_024B_000F_7578()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x2);
	if (!emu_flags.zf) { f__0972_025A_001D_88F1(); return; }
	f__0972_0306_000F_7770(); return;
}

/**
 * Decompiled function f__0972_025A_001D_88F1()
 *
 * @name f__0972_025A_001D_88F1
 * @implements 0972:025A:001D:88F1 ()
 *
 * Called From: 0972:0255:000F:7578
 */
void f__0972_025A_001D_88F1()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_movw(&emu_bx, 0x28);
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_movw(&emu_si, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
	if (!emu_flags.cf) { f__0972_0277_006D_68DA(); return; }
	f__0972_02FA_000C_3415(); return;
}

/**
 * Decompiled function f__0972_0277_006D_68DA()
 *
 * @name f__0972_0277_006D_68DA
 * @implements 0972:0277:006D:68DA ()
 *
 * Called From: 0972:0272:001D:88F1
 */
void f__0972_0277_006D_68DA()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x4F));
	emu_addb(&emu_al, 0xFB);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x4F), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_02F8_0002_C4BA(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0x4E));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0xFFFD);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x8), 0x2);
	if (!emu_flags.zf) { f__0972_02D7_000D_FA04(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x4);
	if (!emu_flags.zf) { f__0972_02D7_000D_FA04(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4E), 0x2);
	if (!emu_flags.zf) { f__0972_02D7_000D_FA04(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x4E), 0x3);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x02E4); emu_cs = 0x0C3A; f__0C3A_25EC_0011_E453();
	f__0972_02E4_000A_817C();
}

/**
 * Decompiled function f__0972_02D7_000D_FA04()
 *
 * @name f__0972_02D7_000D_FA04
 * @implements 0972:02D7:000D:FA04 ()
 *
 * Called From: 0972:02B6:006D:68DA
 * Called From: 0972:02C1:006D:68DA
 * Called From: 0972:02CC:006D:68DA
 */
void f__0972_02D7_000D_FA04()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x02E4); emu_cs = 0x0C3A; f__0C3A_25EC_0011_E453();
	f__0972_02E4_000A_817C();
}

/**
 * Decompiled function f__0972_02E4_000A_817C()
 *
 * @name f__0972_02E4_000A_817C
 * @implements 0972:02E4:000A:817C ()
 *
 */
void f__0972_02E4_000A_817C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__0972_02EE_000C_2E19(); return; }
	emu_movb(&emu_al, 0x64);
	/* Unresolved jump */ emu_ip = 0x02F0; emu_last_cs = 0x0972; emu_last_ip = 0x02EC; emu_last_length = 0x000A; emu_last_crc = 0x817C; emu_call();
}

/**
 * Decompiled function f__0972_02EE_000C_2E19()
 *
 * @name f__0972_02EE_000C_2E19
 * @implements 0972:02EE:000C:2E19 ()
 *
 * Called From: 0972:02E8:000A:817C
 */
void f__0972_02EE_000C_2E19()
{
	emu_movb(&emu_al, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x4F), emu_al);
	f__0972_0303_0003_9E2C(); return;
}

/**
 * Decompiled function f__0972_02F8_0002_C4BA()
 *
 * @name f__0972_02F8_0002_C4BA
 * @implements 0972:02F8:0002:C4BA ()
 *
 * Called From: 0972:029A:006D:68DA
 */
void f__0972_02F8_0002_C4BA()
{
	f__0972_0303_0003_9E2C(); return;
}

/**
 * Decompiled function f__0972_02FA_000C_3415()
 *
 * @name f__0972_02FA_000C_3415
 * @implements 0972:02FA:000C:3415 ()
 *
 * Called From: 0972:0274:001D:88F1
 */
void f__0972_02FA_000C_3415()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0xFFFD);
	f__0972_0938_0009_11BD(); return;
}

/**
 * Decompiled function f__0972_0303_0003_9E2C()
 *
 * @name f__0972_0303_0003_9E2C
 * @implements 0972:0303:0003:9E2C ()
 *
 * Called From: 0972:02F8:0002:C4BA
 * Called From: 0972:02F8:000C:2E19
 */
void f__0972_0303_0003_9E2C()
{
	f__0972_0938_0009_11BD(); return;
}

/**
 * Decompiled function f__0972_0306_000F_7770()
 *
 * @name f__0972_0306_000F_7770
 * @implements 0972:0306:000F:7770 ()
 *
 * Called From: 0972:0257:000F:7578
 */
void f__0972_0306_000F_7770()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2000);
	if (!emu_flags.zf) { f__0972_0315_0011_1CBD(); return; }
	f__0972_03B3_000F_76FF(); return;
}

/**
 * Decompiled function f__0972_0315_0011_1CBD()
 *
 * @name f__0972_0315_0011_1CBD
 * @implements 0972:0315:0011:1CBD ()
 *
 * Called From: 0972:0310:000F:7770
 */
void f__0972_0315_0011_1CBD()
{
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x0326); emu_cs = 0x34C1; ovl__34C1(2);
	f__0972_0326_0012_74BB();
}

/**
 * Decompiled function f__0972_0326_0012_74BB()
 *
 * @name f__0972_0326_0012_74BB
 * @implements 0972:0326:0012:74BB ()
 *
 */
void f__0972_0326_0012_74BB()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_cs); emu_push(0x0338); emu_cs = 0x34C1; ovl__34C1(0);
	f__0972_0338_0037_B1C0();
}

/**
 * Decompiled function f__0972_0338_0037_B1C0()
 *
 * @name f__0972_0338_0037_B1C0
 * @implements 0972:0338:0037:B1C0 ()
 *
 */
void f__0972_0338_0037_B1C0()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
	if (emu_flags.cf) { f__0972_03A6_000D_B949(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_flags.zf) { f__0972_036F_0037_C20A(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x3);
	if (!(emu_flags.sf != emu_flags.of)) { f__0972_036F_0037_C20A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x3);
	f__0972_0378_002E_1744(); return;
}

/**
 * Decompiled function f__0972_036F_0037_C20A()
 *
 * @name f__0972_036F_0037_C20A
 * @implements 0972:036F:0037:C20A ()
 *
 * Called From: 0972:035B:0037:B1C0
 * Called From: 0972:0362:0037:B1C0
 */
void f__0972_036F_0037_C20A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x5);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_03A4_0002_C53A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x9FFF);
	f__0972_03B0_0003_5F81(); return;
}

/**
 * Decompiled function f__0972_0378_002E_1744()
 *
 * @name f__0972_0378_002E_1744
 * @implements 0972:0378:002E:1744 ()
 *
 * Called From: 0972:036D:0037:B1C0
 */
void f__0972_0378_002E_1744()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_03A4_0002_C53A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x9FFF);
	f__0972_03B0_0003_5F81(); return;
}

/**
 * Decompiled function f__0972_03A4_0002_C53A()
 *
 * @name f__0972_03A4_0002_C53A
 * @implements 0972:03A4:0002:C53A ()
 *
 * Called From: 0972:0388:0037:C20A
 * Called From: 0972:0388:002E:1744
 */
void f__0972_03A4_0002_C53A()
{
	f__0972_03B0_0003_5F81(); return;
}

/**
 * Decompiled function f__0972_03A6_000D_B949()
 *
 * @name f__0972_03A6_000D_B949
 * @implements 0972:03A6:000D:B949 ()
 *
 * Called From: 0972:0344:0037:B1C0
 */
void f__0972_03A6_000D_B949()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xDFFF);
	f__0972_0938_0009_11BD(); return;
}

/**
 * Decompiled function f__0972_03B0_0003_5F81()
 *
 * @name f__0972_03B0_0003_5F81
 * @implements 0972:03B0:0003:5F81 ()
 *
 * Called From: 0972:03A4:0002:C53A
 * Called From: 0972:03A4:0037:C20A
 * Called From: 0972:03A4:002E:1744
 */
void f__0972_03B0_0003_5F81()
{
	f__0972_0938_0009_11BD(); return;
}

/**
 * Decompiled function f__0972_03B3_000F_76FF()
 *
 * @name f__0972_03B3_000F_76FF
 * @implements 0972:03B3:000F:76FF ()
 *
 * Called From: 0972:0312:000F:7770
 */
void f__0972_03B3_000F_76FF()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4000);
	if (emu_flags.zf) { f__0972_03C2_000E_2934(); return; }
	f__0972_0746_000E_1C8C(); return;
}

/**
 * Decompiled function f__0972_03C2_000E_2934()
 *
 * @name f__0972_03C2_000E_2934
 * @implements 0972:03C2:000E:2934 ()
 *
 * Called From: 0972:03BD:000F:76FF
 */
void f__0972_03C2_000E_2934()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (!emu_flags.zf) { f__0972_03D0_000E_D597(); return; }
	f__0972_0746_000E_1C8C(); return;
}

/**
 * Decompiled function f__0972_03D0_000E_D597()
 *
 * @name f__0972_03D0_000E_D597
 * @implements 0972:03D0:000E:D597 ()
 *
 * Called From: 0972:03CB:000E:2934
 */
void f__0972_03D0_000E_D597()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (!emu_flags.zf) { f__0972_03DE_000E_2D3F(); return; }
	/* Unresolved jump */ emu_ip = 0x0746; emu_last_cs = 0x0972; emu_last_ip = 0x03DB; emu_last_length = 0x000E; emu_last_crc = 0xD597; emu_call();
}

/**
 * Decompiled function f__0972_03DE_000E_2D3F()
 *
 * @name f__0972_03DE_000E_2D3F
 * @implements 0972:03DE:000E:2D3F ()
 *
 * Called From: 0972:03D9:000E:D597
 */
void f__0972_03DE_000E_2D3F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x1);
	if (emu_flags.zf) { f__0972_03EC_000F_9EC1(); return; }
	f__0972_0746_000E_1C8C(); return;
}

/**
 * Decompiled function f__0972_03EC_000F_9EC1()
 *
 * @name f__0972_03EC_000F_9EC1
 * @implements 0972:03EC:000F:9EC1 ()
 *
 * Called From: 0972:03E7:000E:2D3F
 */
void f__0972_03EC_000F_9EC1()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x2);
	if (!emu_flags.zf) { f__0972_03FB_0025_521A(); return; }
	/* Unresolved jump */ emu_ip = 0x0746; emu_last_cs = 0x0972; emu_last_ip = 0x03F8; emu_last_length = 0x000F; emu_last_crc = 0x9EC1; emu_call();
}

/**
 * Decompiled function f__0972_03FB_0025_521A()
 *
 * @name f__0972_03FB_0025_521A
 * @implements 0972:03FB:0025:521A ()
 *
 * Called From: 0972:03F6:000F:9EC1
 */
void f__0972_03FB_0025_521A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (!emu_flags.zf) { f__0972_0420_001A_C1B0(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4C));
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	f__0972_045E_0017_5C13(); return;
}

/**
 * Decompiled function f__0972_0420_001A_C1B0()
 *
 * @name f__0972_0420_001A_C1B0
 * @implements 0972:0420:001A:C1B0 ()
 *
 * Called From: 0972:0404:0025:521A
 */
void f__0972_0420_001A_C1B0()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xD);
	if (!emu_flags.zf) { f__0972_0446_002F_A3FF(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x3));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x043A); emu_cs = 0x0FE4; emu_ip = 0x05FD; emu_last_cs = 0x0972; emu_last_ip = 0x0435; emu_last_length = 0x001A; emu_last_crc = 0xC1B0; emu_call();
	/* Unresolved jump */ emu_ip = 0x043A; emu_last_cs = 0x0972; emu_last_ip = 0x043A; emu_last_length = 0x001A; emu_last_crc = 0xC1B0; emu_call();
}

/**
 * Decompiled function f__0972_0446_002F_A3FF()
 *
 * @name f__0972_0446_002F_A3FF
 * @implements 0972:0446:002F:A3FF ()
 *
 * Called From: 0972:0429:001A:C1B0
 */
void f__0972_0446_002F_A3FF()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4C));
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	if (!emu_flags.zf) { f__0972_0475_0015_5CB8(); return; }
	emu_movw(&emu_si, 0x100);
	f__0972_048E_0022_3628(); return;
}

/**
 * Decompiled function f__0972_045E_0017_5C13()
 *
 * @name f__0972_045E_0017_5C13
 * @implements 0972:045E:0017:5C13 ()
 *
 * Called From: 0972:041E:0025:521A
 */
void f__0972_045E_0017_5C13()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	if (!emu_flags.zf) { f__0972_0475_0015_5CB8(); return; }
	emu_movw(&emu_si, 0x100);
	f__0972_048E_0022_3628(); return;
}

/**
 * Decompiled function f__0972_0475_0015_5CB8()
 *
 * @name f__0972_0475_0015_5CB8
 * @implements 0972:0475:0015:5CB8 ()
 *
 * Called From: 0972:046E:0017:5C13
 * Called From: 0972:046E:002F:A3FF
 */
void f__0972_0475_0015_5CB8()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x048A); emu_cs = 0x34C1; ovl__34C1(2);
	f__0972_048A_0026_FEE9();
}

/**
 * Decompiled function f__0972_048A_0026_FEE9()
 *
 * @name f__0972_048A_0026_FEE9
 * @implements 0972:048A:0026:FEE9 ()
 *
 */
void f__0972_048A_0026_FEE9()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	f__0972_048E_0022_3628(); return;
}

/**
 * Decompiled function f__0972_048E_0022_3628()
 *
 * @name f__0972_048E_0022_3628
 * @implements 0972:048E:0022:3628 ()
 *
 * Called From: 0972:0473:0017:5C13
 * Called From: 0972:0473:002F:A3FF
 */
void f__0972_048E_0022_3628()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_flags.zf) { f__0972_04BD_0013_3438(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B2));
	emu_movw(&emu_dx, 0x14);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x5F);
	emu_cmpw(&emu_ax, emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { f__0972_04B0_0020_BD61(); return; }
	emu_movw(&emu_ax, emu_si);
	f__0972_04BB_0015_306F(); return;
}

/**
 * Decompiled function f__0972_04B0_0020_BD61()
 *
 * @name f__0972_04B0_0020_BD61
 * @implements 0972:04B0:0020:BD61 ()
 *
 * Called From: 0972:04AA:0022:3628
 * Called From: 0972:04AA:0026:FEE9
 */
void f__0972_04B0_0020_BD61()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B2));
	emu_movw(&emu_dx, 0x14);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x5F);
	f__0972_04BB_0015_306F(); return;
}

/**
 * Decompiled function f__0972_04BB_0015_306F()
 *
 * @name f__0972_04BB_0015_306F
 * @implements 0972:04BB:0015:306F ()
 *
 * Called From: 0972:04AE:0026:FEE9
 */
void f__0972_04BB_0015_306F()
{
	emu_movw(&emu_si, emu_ax);
	f__0972_04BD_0013_3438(); return;
}

/**
 * Decompiled function f__0972_04BD_0013_3438()
 *
 * @name f__0972_04BD_0013_3438
 * @implements 0972:04BD:0013:3438 ()
 *
 * Called From: 0972:049B:0022:3628
 * Called From: 0972:049B:0026:FEE9
 */
void f__0972_04BD_0013_3438()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x18));
	emu_push(emu_cs); emu_push(0x04D0); emu_cs = 0x34C1; ovl__34C1(2);
	f__0972_04D0_0014_1BB6();
}

/**
 * Decompiled function f__0972_04D0_0014_1BB6()
 *
 * @name f__0972_04D0_0014_1BB6
 * @implements 0972:04D0:0014:1BB6 ()
 *
 */
void f__0972_04D0_0014_1BB6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_cmpw(&emu_si, 0x100);
	if (emu_flags.zf) { f__0972_04E9_001B_C395(); return; }
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x04E4); emu_cs = 0x34C1; ovl__34C1(0);
	f__0972_04E4_0020_4CEA();
}

/**
 * Decompiled function f__0972_04E4_0020_4CEA()
 *
 * @name f__0972_04E4_0020_4CEA
 * @implements 0972:04E4:0020:4CEA ()
 *
 */
void f__0972_04E4_0020_4CEA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	f__0972_04E9_001B_C395(); return;
}

/**
 * Decompiled function f__0972_04E9_001B_C395()
 *
 * @name f__0972_04E9_001B_C395
 * @implements 0972:04E9:001B:C395 ()
 *
 * Called From: 0972:04D9:0014:1BB6
 */
void f__0972_04E9_001B_C395()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xD);
	if (!emu_flags.zf) { f__0972_050A_0028_2428(); return; }
	emu_movb(&emu_cl, 0x2);
	emu_shrw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_cl);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0504; emu_last_cs = 0x0972; emu_last_ip = 0x04FD; emu_last_length = 0x001B; emu_last_crc = 0xC395; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	/* Unresolved jump */ emu_ip = 0x0507; emu_last_cs = 0x0972; emu_last_ip = 0x0502; emu_last_length = 0x001B; emu_last_crc = 0xC395; emu_call();
}

/**
 * Decompiled function f__0972_050A_0028_2428()
 *
 * @name f__0972_050A_0028_2428
 * @implements 0972:050A:0028:2428 ()
 *
 * Called From: 0972:04F2:001B:C395
 * Called From: 0972:04F2:0020:4CEA
 */
void f__0972_050A_0028_2428()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x52));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_cl, 0x8);
	emu_shrw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (!emu_flags.cf) { f__0972_0532_001D_84CA(); return; }
	f__0972_0716_0025_6D67(); return;
}

/**
 * Decompiled function f__0972_0532_001D_84CA()
 *
 * @name f__0972_0532_001D_84CA
 * @implements 0972:0532:001D:84CA ()
 *
 * Called From: 0972:052D:0028:2428
 */
void f__0972_0532_001D_84CA()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_andw(&emu_ax, 0xFF);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x52), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x054F); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	f__0972_054F_001F_939F();
}

/**
 * Decompiled function f__0972_054F_001F_939F()
 *
 * @name f__0972_054F_001F_939F
 * @implements 0972:054F:001F:939F ()
 *
 */
void f__0972_054F_001F_939F()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_es, emu_dx);
	emu_xchgw(&emu_ax, &emu_bx);
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), emu_si);
	if (emu_flags.cf) { f__0972_056E_0018_A8ED(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x50), emu_si);
	f__0972_0578_000E_2802(); return;
}

/**
 * Decompiled function f__0972_056E_0018_A8ED()
 *
 * @name f__0972_056E_0018_A8ED
 * @implements 0972:056E:0018:A8ED ()
 *
 * Called From: 0972:0562:001F:939F
 */
void f__0972_056E_0018_A8ED()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (emu_flags.zf) { f__0972_0586_001B_DC71(); return; }
	f__0972_0714_0002_D83A(); return;
}

/**
 * Decompiled function f__0972_0578_000E_2802()
 *
 * @name f__0972_0578_000E_2802
 * @implements 0972:0578:000E:2802 ()
 *
 * Called From: 0972:056C:001F:939F
 */
void f__0972_0578_000E_2802()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (emu_flags.zf) { f__0972_0586_001B_DC71(); return; }
	f__0972_0714_0002_D83A(); return;
}

/**
 * Decompiled function f__0972_0586_001B_DC71()
 *
 * @name f__0972_0586_001B_DC71
 * @implements 0972:0586:001B:DC71 ()
 *
 * Called From: 0972:0581:000E:2802
 * Called From: 0972:0581:0018:A8ED
 */
void f__0972_0586_001B_DC71()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x52), 0x0);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x05A1); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	f__0972_05A1_0015_71F0();
}

/**
 * Decompiled function f__0972_05A1_0015_71F0()
 *
 * @name f__0972_05A1_0015_71F0
 * @implements 0972:05A1:0015:71F0 ()
 *
 */
void f__0972_05A1_0015_71F0()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_flags.zf) { f__0972_05B6_002B_35CA(); return; }
	f__0972_0636_000E_0830(); return;
}

/**
 * Decompiled function f__0972_05B6_002B_35CA()
 *
 * @name f__0972_05B6_002B_35CA
 * @implements 0972:05B6:002B:35CA ()
 *
 * Called From: 0972:05B1:0015:71F0
 */
void f__0972_05B6_002B_35CA()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xA);
	if (emu_flags.zf) { f__0972_0633_0003_9D17(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x7);
	if (emu_flags.zf) { f__0972_0633_0003_9D17(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, 0x5);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05E6; emu_last_cs = 0x0972; emu_last_ip = 0x05D8; emu_last_length = 0x002B; emu_last_crc = 0x35CA; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x8);
	if (emu_flags.zf) { f__0972_05E1_0005_E0CA(); return; }
	f__0972_05EB_0005_F5CA(); return;
}

/**
 * Decompiled function f__0972_05E1_0005_E0CA()
 *
 * @name f__0972_05E1_0005_E0CA
 * @implements 0972:05E1:0005:E0CA ()
 *
 * Called From: 0972:05DD:002B:35CA
 */
void f__0972_05E1_0005_E0CA()
{
	emu_movw(&emu_di, 0x82);
	f__0972_05F0_0006_6F66(); return;
}

/**
 * Decompiled function f__0972_05EB_0005_F5CA()
 *
 * @name f__0972_05EB_0005_F5CA
 * @implements 0972:05EB:0005:F5CA ()
 *
 * Called From: 0972:05DF:002B:35CA
 */
void f__0972_05EB_0005_F5CA()
{
	emu_movw(&emu_di, 0x83);
	f__0972_05F0_0006_6F66(); return;
}

/**
 * Decompiled function f__0972_05F0_0006_6F66()
 *
 * @name f__0972_05F0_0006_6F66
 * @implements 0972:05F0:0006:6F66 ()
 *
 * Called From: 0972:05E4:0005:E0CA
 * Called From: 0972:05EE:0005:F5CA
 */
void f__0972_05F0_0006_6F66()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x05F6); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0972_05F6_000F_119B();
}

/**
 * Decompiled function f__0972_05F6_000F_119B()
 *
 * @name f__0972_05F6_000F_119B
 * @implements 0972:05F6:000F:119B ()
 *
 */
void f__0972_05F6_000F_119B()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_cs); emu_push(0x0605); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0972_0605_0012_6987();
}

/**
 * Decompiled function f__0972_0605_0012_6987()
 *
 * @name f__0972_0605_0012_6987
 * @implements 0972:0605:0012:6987 ()
 *
 */
void f__0972_0605_0012_6987()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x342A);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0617); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	f__0972_0617_0010_DEE5();
}

/**
 * Decompiled function f__0972_0617_0010_DEE5()
 *
 * @name f__0972_0617_0010_DEE5
 * @implements 0972:0617:0010:DEE5 ()
 *
 */
void f__0972_0617_0010_DEE5()
{
	emu_addw(&emu_sp, 0x10);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0627); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__0972_0627_000B_5D60();
}

/**
 * Decompiled function f__0972_0627_000B_5D60()
 *
 * @name f__0972_0627_000B_5D60
 * @implements 0972:0627:000B:5D60 ()
 *
 */
void f__0972_0627_000B_5D60()
{
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0632); emu_cs = 0x3483; ovl__3483(2);
	f__0972_0632_0004_0D12();
}

/**
 * Decompiled function f__0972_0632_0004_0D12()
 *
 * @name f__0972_0632_0004_0D12
 * @implements 0972:0632:0004:0D12 ()
 *
 */
void f__0972_0632_0004_0D12()
{
	emu_pop(&emu_cx);
	f__0972_0633_0003_9D17(); return;
}

/**
 * Decompiled function f__0972_0633_0003_9D17()
 *
 * @name f__0972_0633_0003_9D17
 * @implements 0972:0633:0003:9D17 ()
 *
 * Called From: 0972:05BF:002B:35CA
 * Called From: 0972:05CA:002B:35CA
 */
void f__0972_0633_0003_9D17()
{
	f__0972_0714_0002_D83A(); return;
}

/**
 * Decompiled function f__0972_0636_000E_0830()
 *
 * @name f__0972_0636_000E_0830
 * @implements 0972:0636:000E:0830 ()
 *
 * Called From: 0972:05B3:0015:71F0
 */
void f__0972_0636_000E_0830()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_flags.zf) { f__0972_0644_000D_B324(); return; }
	f__0972_0714_0002_D83A(); return;
}

/**
 * Decompiled function f__0972_0644_000D_B324()
 *
 * @name f__0972_0644_000D_B324
 * @implements 0972:0644:000D:B324 ()
 *
 * Called From: 0972:063F:000E:0830
 */
void f__0972_0644_000D_B324()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0651); emu_cs = 0x1A34; f__1A34_34D0_0032_E0A4();
	f__0972_0651_0021_1BFA();
}

/**
 * Decompiled function f__0972_0651_0021_1BFA()
 *
 * @name f__0972_0651_0021_1BFA
 * @implements 0972:0651:0021:1BFA ()
 *
 */
void f__0972_0651_0021_1BFA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0672); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	f__0972_0672_0007_CF6C();
}

/**
 * Decompiled function f__0972_0672_0007_CF6C()
 *
 * @name f__0972_0672_0007_CF6C
 * @implements 0972:0672:0007:CF6C ()
 *
 */
void f__0972_0672_0007_CF6C()
{
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_di, emu_di);
	f__0972_06DC_0036_4B86(); return;
}

/**
 * Decompiled function f__0972_0679_0035_CC9F()
 *
 * @name f__0972_0679_0035_CC9F
 * @implements 0972:0679:0035:CC9F ()
 *
 * Called From: 0972:06DF:0036:4B86
 */
void f__0972_0679_0035_CC9F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_addw(&emu_bx, emu_dx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2E));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x06DB; emu_last_cs = 0x0972; emu_last_ip = 0x0691; emu_last_length = 0x0035; emu_last_crc = 0xCC9F; emu_call(); return; }
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x30));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs); emu_push(0x06AE); emu_cs = 0x0C3A; f__0C3A_01BA_0018_69C9();
	f__0972_06AE_002D_14AC();
}

/**
 * Decompiled function f__0972_06AE_002D_14AC()
 *
 * @name f__0972_06AE_002D_14AC
 * @implements 0972:06AE:002D:14AC ()
 *
 */
void f__0972_06AE_002D_14AC()
{
	emu_addw(&emu_sp, 0x6);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x06DB; emu_last_cs = 0x0972; emu_last_ip = 0x06B3; emu_last_length = 0x002D; emu_last_crc = 0x14AC; emu_call(); return; }
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x0);
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x30), 0x0);
	f__0972_06E1_0031_1FDA(); return;
}

/**
 * Decompiled function f__0972_06DC_0036_4B86()
 *
 * @name f__0972_06DC_0036_4B86
 * @implements 0972:06DC:0036:4B86 ()
 *
 * Called From: 0972:0677:0007:CF6C
 */
void f__0972_06DC_0036_4B86()
{
	emu_cmpw(&emu_di, 0x5);
	if ((emu_flags.sf != emu_flags.of)) { f__0972_0679_0035_CC9F(); return; }
	f__0972_06E1_0031_1FDA(); return;
}

/**
 * Decompiled function f__0972_06E1_0031_1FDA()
 *
 * @name f__0972_06E1_0031_1FDA
 * @implements 0972:06E1:0031:1FDA ()
 *
 * Called From: 0972:06D9:002D:14AC
 */
void f__0972_06E1_0031_1FDA()
{
	emu_cmpw(&emu_di, 0x5);
	if (!emu_flags.zf) { f__0972_0714_0002_D83A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2C94);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0712); emu_cs = 0x1082; emu_ip = 0x0325; emu_last_cs = 0x0972; emu_last_ip = 0x070D; emu_last_length = 0x0031; emu_last_crc = 0x1FDA; emu_call();
	/* Unresolved jump */ emu_ip = 0x0712; emu_last_cs = 0x0972; emu_last_ip = 0x0712; emu_last_length = 0x0031; emu_last_crc = 0x1FDA; emu_call();
}

/**
 * Decompiled function f__0972_0714_0002_D83A()
 *
 * @name f__0972_0714_0002_D83A
 * @implements 0972:0714:0002:D83A ()
 *
 * Called From: 0972:0583:000E:2802
 * Called From: 0972:0633:0004:0D12
 * Called From: 0972:0633:0003:9D17
 * Called From: 0972:0641:000E:0830
 * Called From: 0972:06E4:0031:1FDA
 */
void f__0972_0714_0002_D83A()
{
	f__0972_0746_000E_1C8C(); return;
}

/**
 * Decompiled function f__0972_0716_0025_6D67()
 *
 * @name f__0972_0716_0025_6D67
 * @implements 0972:0716:0025:6D67 ()
 *
 * Called From: 0972:052F:0028:2428
 */
void f__0972_0716_0025_6D67()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (!emu_flags.zf) { f__0972_0746_000E_1C8C(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4000);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x84);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x073B); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0972_073B_0008_A466();
}

/**
 * Decompiled function f__0972_073B_0008_A466()
 *
 * @name f__0972_073B_0008_A466
 * @implements 0972:073B:0008:A466 ()
 *
 */
void f__0972_073B_0008_A466()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0743); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__0972_0743_0011_51C8();
}

/**
 * Decompiled function f__0972_0743_0011_51C8()
 *
 * @name f__0972_0743_0011_51C8
 * @implements 0972:0743:0011:51C8 ()
 *
 */
void f__0972_0743_0011_51C8()
{
	emu_addw(&emu_sp, 0x6);
	f__0972_0746_000E_1C8C(); return;
}

/**
 * Decompiled function f__0972_0746_000E_1C8C()
 *
 * @name f__0972_0746_000E_1C8C
 * @implements 0972:0746:000E:1C8C ()
 *
 * Called From: 0972:03BF:000F:76FF
 * Called From: 0972:03CD:000E:2934
 * Called From: 0972:03E9:000E:2D3F
 * Called From: 0972:0714:0002:D83A
 * Called From: 0972:0723:0025:6D67
 */
void f__0972_0746_000E_1C8C()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xD);
	if (emu_flags.zf) { f__0972_0754_000F_7761(); return; }
	f__0972_0874_000F_CCB9(); return;
}

/**
 * Decompiled function f__0972_0754_000F_7761()
 *
 * @name f__0972_0754_000F_7761
 * @implements 0972:0754:000F:7761 ()
 *
 * Called From: 0972:074F:000E:1C8C
 */
void f__0972_0754_000F_7761()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4000);
	if (emu_flags.zf) { f__0972_0763_000E_A892(); return; }
	/* Unresolved jump */ emu_ip = 0x085F; emu_last_cs = 0x0972; emu_last_ip = 0x0760; emu_last_length = 0x000F; emu_last_crc = 0x7761; emu_call();
}

/**
 * Decompiled function f__0972_0763_000E_A892()
 *
 * @name f__0972_0763_000E_A892
 * @implements 0972:0763:000E:A892 ()
 *
 * Called From: 0972:075E:000F:7761
 */
void f__0972_0763_000E_A892()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0771; emu_last_cs = 0x0972; emu_last_ip = 0x076C; emu_last_length = 0x000E; emu_last_crc = 0xA892; emu_call(); return; }
	f__0972_085D_0002_CABA(); return;
}

/**
 * Decompiled function f__0972_085D_0002_CABA()
 *
 * @name f__0972_085D_0002_CABA
 * @implements 0972:085D:0002:CABA ()
 *
 * Called From: 0972:076E:000E:A892
 */
void f__0972_085D_0002_CABA()
{
	f__0972_0874_000F_CCB9(); return;
}

/**
 * Decompiled function f__0972_0874_000F_CCB9()
 *
 * @name f__0972_0874_000F_CCB9
 * @implements 0972:0874:000F:CCB9 ()
 *
 * Called From: 0972:0751:000E:1C8C
 * Called From: 0972:0751:0011:51C8
 * Called From: 0972:085D:0002:CABA
 */
void f__0972_0874_000F_CCB9()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
	if (!emu_flags.zf) { f__0972_0883_000F_F77A(); return; }
	f__0972_0938_0009_11BD(); return;
}

/**
 * Decompiled function f__0972_0883_000F_F77A()
 *
 * @name f__0972_0883_000F_F77A
 * @implements 0972:0883:000F:F77A ()
 *
 * Called From: 0972:087E:000F:CCB9
 */
void f__0972_0883_000F_F77A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if (!emu_flags.zf) { f__0972_0892_0012_3529(); return; }
	f__0972_0938_0009_11BD(); return;
}

/**
 * Decompiled function f__0972_0892_0012_3529()
 *
 * @name f__0972_0892_0012_3529
 * @implements 0972:0892:0012:3529 ()
 *
 * Called From: 0972:088D:000F:F77A
 */
void f__0972_0892_0012_3529()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (!emu_flags.zf) { f__0972_08A4_000E_8FFB(); return; }
	f__0972_0938_0009_11BD(); return;
}

/**
 * Decompiled function f__0972_08A4_000E_8FFB()
 *
 * @name f__0972_08A4_000E_8FFB
 * @implements 0972:08A4:000E:8FFB ()
 *
 * Called From: 0972:089F:0012:3529
 */
void f__0972_08A4_000E_8FFB()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), 0x0);
	if (!emu_flags.zf) { f__0972_08B2_0038_5CE7(); return; }
	f__0972_0938_0009_11BD(); return;
}

/**
 * Decompiled function f__0972_08B2_0038_5CE7()
 *
 * @name f__0972_08B2_0038_5CE7
 * @implements 0972:08B2:0038:5CE7 ()
 *
 * Called From: 0972:08AD:000E:8FFB
 */
void f__0972_08B2_0038_5CE7()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_si, 0x10));
	emu_sarw(&emu_ax, 0x1);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	if (!(emu_flags.sf != emu_flags.of)) { f__0972_08EF_002F_F6E4(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08EF; emu_last_cs = 0x0972; emu_last_ip = 0x08D1; emu_last_length = 0x0038; emu_last_crc = 0x5CE7; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x08EA); emu_cs = 0x0C3A; f__0C3A_2814_0015_76F0();
	f__0972_08EA_0005_A1EE();
}

/**
 * Decompiled function f__0972_08EA_0005_A1EE()
 *
 * @name f__0972_08EA_0005_A1EE
 * @implements 0972:08EA:0005:A1EE ()
 *
 */
void f__0972_08EA_0005_A1EE()
{
	emu_addw(&emu_sp, 0xA);
	f__0972_0938_0009_11BD(); return;
}

/**
 * Decompiled function f__0972_08EF_002F_F6E4()
 *
 * @name f__0972_08EF_002F_F6E4
 * @implements 0972:08EF:002F:F6E4 ()
 *
 * Called From: 0972:08C6:0038:5CE7
 */
void f__0972_08EF_002F_F6E4()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x2);
	if (emu_flags.zf) { f__0972_0938_0009_11BD(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (!emu_flags.zf) { f__0972_0938_0009_11BD(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (!emu_flags.zf) { f__0972_0938_0009_11BD(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x091E); emu_cs = 0x1423; f__1423_0C74_0015_3419();
	f__0972_091E_0017_403F();
}

/**
 * Decompiled function f__0972_091E_0017_403F()
 *
 * @name f__0972_091E_0017_403F
 * @implements 0972:091E:0017:403F ()
 *
 */
void f__0972_091E_0017_403F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_flags.zf) { f__0972_0938_0009_11BD(); return; }
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0935); emu_cs = 0x0C3A; f__0C3A_142D_0018_6667();
	f__0972_0935_000C_9815();
}

/**
 * Decompiled function f__0972_0935_000C_9815()
 *
 * @name f__0972_0935_000C_9815
 * @implements 0972:0935:000C:9815 ()
 *
 */
void f__0972_0935_000C_9815()
{
	emu_addw(&emu_sp, 0x6);
	f__0972_0938_0009_11BD(); return;
}

/**
 * Decompiled function f__0972_0938_0009_11BD()
 *
 * @name f__0972_0938_0009_11BD
 * @implements 0972:0938:0009:11BD ()
 *
 * Called From: 0972:0248:0009:920A
 * Called From: 0972:0248:000C:1822
 * Called From: 0972:0303:0003:9E2C
 * Called From: 0972:0303:000C:3415
 * Called From: 0972:03B0:0003:5F81
 * Called From: 0972:03B0:000D:B949
 * Called From: 0972:0880:000F:CCB9
 * Called From: 0972:088F:000F:F77A
 * Called From: 0972:08A1:0012:3529
 * Called From: 0972:08AF:000E:8FFB
 * Called From: 0972:08ED:0005:A1EE
 * Called From: 0972:08F9:002F:F6E4
 * Called From: 0972:0904:002F:F6E4
 * Called From: 0972:090F:002F:F6E4
 * Called From: 0972:0925:0017:403F
 */
void f__0972_0938_0009_11BD()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0972_0941_000E_E81A(); return; }
	f__0972_0A44_000A_DEF0(); return;
}

/**
 * Decompiled function f__0972_0941_000E_E81A()
 *
 * @name f__0972_0941_000E_E81A
 * @implements 0972:0941:000E:E81A ()
 *
 * Called From: 0972:093C:0009:11BD
 * Called From: 0972:093C:000C:9815
 */
void f__0972_0941_000E_E81A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x10), 0x0);
	if (emu_flags.zf) { f__0972_094F_0010_E581(); return; }
	f__0972_0A3C_0012_2599(); return;
}

/**
 * Decompiled function f__0972_094F_0010_E581()
 *
 * @name f__0972_094F_0010_E581
 * @implements 0972:094F:0010:E581 ()
 *
 * Called From: 0972:094A:000E:E81A
 */
void f__0972_094F_0010_E581()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x095F); emu_cs = 0x15C2; f__15C2_0526_000F_EA1E();
	f__0972_095F_0009_7794();
}

/**
 * Decompiled function f__0972_095F_0009_7794()
 *
 * @name f__0972_095F_0009_7794
 * @implements 0972:095F:0009:7794 ()
 *
 */
void f__0972_095F_0009_7794()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__0972_0968_005A_5668(); return; }
	f__0972_09FE_001C_5B8B(); return;
}

/**
 * Decompiled function f__0972_0968_005A_5668()
 *
 * @name f__0972_0968_005A_5668
 * @implements 0972:0968:005A:5668 ()
 *
 * Called From: 0972:0963:0009:7794
 */
void f__0972_0968_005A_5668()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x9);
	if (!emu_flags.zf) { f__0972_097B_0047_4D03(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x37A4));
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x37A4));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (emu_flags.zf) { f__0972_09B2_0010_1586(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37A4), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x37A2));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x1D));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0xF);
	emu_subw(&emu_dx, emu_ax);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x37A8));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x09B2; emu_last_cs = 0x0972; emu_last_ip = 0x099E; emu_last_length = 0x005A; emu_last_crc = 0x5668; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x1D));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0xF);
	emu_subw(&emu_dx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37A8), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09C2); emu_cs = 0x15C2; f__15C2_0559_0015_E98A();
	f__0972_09C2_0009_F797();
}

/**
 * Decompiled function f__0972_097B_0047_4D03()
 *
 * @name f__0972_097B_0047_4D03
 * @implements 0972:097B:0047:4D03 ()
 *
 * Called From: 0972:0971:005A:5668
 */
void f__0972_097B_0047_4D03()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (emu_flags.zf) { f__0972_09B2_0010_1586(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37A4), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x37A2));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x1D));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0xF);
	emu_subw(&emu_dx, emu_ax);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x37A8));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x09B2; emu_last_cs = 0x0972; emu_last_ip = 0x099E; emu_last_length = 0x0047; emu_last_crc = 0x4D03; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x1D));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0xF);
	emu_subw(&emu_dx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37A8), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09C2); emu_cs = 0x15C2; f__15C2_0559_0015_E98A();
	f__0972_09C2_0009_F797();
}

/**
 * Decompiled function f__0972_09B2_0010_1586()
 *
 * @name f__0972_09B2_0010_1586
 * @implements 0972:09B2:0010:1586 ()
 *
 * Called From: 0972:0980:0047:4D03
 * Called From: 0972:0980:005A:5668
 */
void f__0972_09B2_0010_1586()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09C2); emu_cs = 0x15C2; f__15C2_0559_0015_E98A();
	f__0972_09C2_0009_F797();
}

/**
 * Decompiled function f__0972_09C2_0009_F797()
 *
 * @name f__0972_09C2_0009_F797
 * @implements 0972:09C2:0009:F797 ()
 *
 */
void f__0972_09C2_0009_F797()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__0972_09CB_0010_1586(); return; }
	f__0972_0A63_0006_F7CE(); return;
}

/**
 * Decompiled function f__0972_09CB_0010_1586()
 *
 * @name f__0972_09CB_0010_1586
 * @implements 0972:09CB:0010:1586 ()
 *
 * Called From: 0972:09C6:0009:F797
 */
void f__0972_09CB_0010_1586()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09DB); emu_cs = 0x15C2; f__15C2_0559_0015_E98A();
	f__0972_09DB_0009_37AE();
}

/**
 * Decompiled function f__0972_09DB_0009_37AE()
 *
 * @name f__0972_09DB_0009_37AE
 * @implements 0972:09DB:0009:37AE ()
 *
 */
void f__0972_09DB_0009_37AE()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__0972_09E4_0010_1586(); return; }
	/* Unresolved jump */ emu_ip = 0x0A63; emu_last_cs = 0x0972; emu_last_ip = 0x09E1; emu_last_length = 0x0009; emu_last_crc = 0x37AE; emu_call();
}

/**
 * Decompiled function f__0972_09E4_0010_1586()
 *
 * @name f__0972_09E4_0010_1586
 * @implements 0972:09E4:0010:1586 ()
 *
 * Called From: 0972:09DF:0009:37AE
 */
void f__0972_09E4_0010_1586()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09F4); emu_cs = 0x15C2; f__15C2_0559_0015_E98A();
	f__0972_09F4_0008_D04F();
}

/**
 * Decompiled function f__0972_09F4_0008_D04F()
 *
 * @name f__0972_09F4_0008_D04F
 * @implements 0972:09F4:0008:D04F ()
 *
 */
void f__0972_09F4_0008_D04F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__0972_09FC_0002_DE3A(); return; }
	/* Unresolved jump */ emu_ip = 0x0A63; emu_last_cs = 0x0972; emu_last_ip = 0x09FA; emu_last_length = 0x0008; emu_last_crc = 0xD04F; emu_call();
}

/**
 * Decompiled function f__0972_09FC_0002_DE3A()
 *
 * @name f__0972_09FC_0002_DE3A
 * @implements 0972:09FC:0002:DE3A ()
 *
 * Called From: 0972:09F8:0008:D04F
 */
void f__0972_09FC_0002_DE3A()
{
	f__0972_0A3A_0002_C43A(); return;
}

/**
 * Decompiled function f__0972_09FE_001C_5B8B()
 *
 * @name f__0972_09FE_001C_5B8B
 * @implements 0972:09FE:001C:5B8B ()
 *
 * Called From: 0972:0965:0009:7794
 */
void f__0972_09FE_001C_5B8B()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A1A); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	f__0972_0A1A_001D_C13E();
}

/**
 * Decompiled function f__0972_0A1A_001D_C13E()
 *
 * @name f__0972_0A1A_001D_C13E
 * @implements 0972:0A1A:001D:C13E ()
 *
 */
void f__0972_0A1A_001D_C13E()
{
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A37); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
	f__0972_0A37_0005_80EE();
}

/**
 * Decompiled function f__0972_0A37_0005_80EE()
 *
 * @name f__0972_0A37_0005_80EE
 * @implements 0972:0A37:0005:80EE ()
 *
 */
void f__0972_0A37_0005_80EE()
{
	emu_addw(&emu_sp, 0x6);
	f__0972_0A3A_0002_C43A(); return;
}

/**
 * Decompiled function f__0972_0A3A_0002_C43A()
 *
 * @name f__0972_0A3A_0002_C43A
 * @implements 0972:0A3A:0002:C43A ()
 *
 * Called From: 0972:09FC:0002:DE3A
 */
void f__0972_0A3A_0002_C43A()
{
	f__0972_0A44_000A_DEF0(); return;
}

/**
 * Decompiled function f__0972_0A3C_0012_2599()
 *
 * @name f__0972_0A3C_0012_2599
 * @implements 0972:0A3C:0012:2599 ()
 *
 * Called From: 0972:094C:000E:E81A
 */
void f__0972_0A3C_0012_2599()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A4E); emu_cs = 0x1082; emu_Building_FindNext();
	f__0972_0A4E_0015_9677();
}

/**
 * Decompiled function f__0972_0A44_000A_DEF0()
 *
 * @name f__0972_0A44_000A_DEF0
 * @implements 0972:0A44:000A:DEF0 ()
 *
 * Called From: 0972:0177:0012:8AC5
 * Called From: 0972:093E:0009:11BD
 * Called From: 0972:093E:000C:9815
 * Called From: 0972:0A3A:0002:C43A
 * Called From: 0972:0A3A:0005:80EE
 */
void f__0972_0A44_000A_DEF0()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A4E); emu_cs = 0x1082; emu_Building_FindNext();
	f__0972_0A4E_0015_9677();
}

/**
 * Decompiled function f__0972_0A4E_0015_9677()
 *
 * @name f__0972_0A4E_0015_9677
 * @implements 0972:0A4E:0015:9677 ()
 *
 */
void f__0972_0A4E_0015_9677()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__0972_0A50_0013_04BA(); return;
}

/**
 * Decompiled function f__0972_0A50_0013_04BA()
 *
 * @name f__0972_0A50_0013_04BA
 * @implements 0972:0A50:0013:04BA ()
 *
 * Called From: 0972:012E:0006:5385
 */
void f__0972_0A50_0013_04BA()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8436), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8434), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8436));
	if (emu_flags.zf) { f__0972_0A63_0006_F7CE(); return; }
	f__0972_0131_0037_A640(); return;
}

/**
 * Decompiled function f__0972_0A63_0006_F7CE()
 *
 * @name f__0972_0A63_0006_F7CE
 * @implements 0972:0A63:0006:F7CE ()
 *
 * Called From: 0972:09C8:0009:F797
 * Called From: 0972:0A5E:0015:9677
 * Called From: 0972:0A5E:0013:04BA
 */
void f__0972_0A63_0006_F7CE()
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
 * Decompiled function f__0972_0A72_000D_024E()
 *
 * @name f__0972_0A72_000D_024E
 * @implements 0972:0A72:000D:024E ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_0A72_000D_024E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x54));
	f__0972_0A7F_0002_2597(); return;
}

/**
 * Decompiled function f__0972_0A7F_0002_2597()
 *
 * @name f__0972_0A7F_0002_2597
 * @implements 0972:0A7F:0002:2597 ()
 *
 * Called From: 0972:0A7D:000D:024E
 */
void f__0972_0A7F_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_0A81_0017_2EC7()
 *
 * @name f__0972_0A81_0017_2EC7
 * @implements 0972:0A81:0017:2EC7 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_0A81_0017_2EC7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0A98); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__0972_0A98_0012_C6CB();
}

/**
 * Decompiled function f__0972_0A98_0012_C6CB()
 *
 * @name f__0972_0A98_0012_C6CB
 * @implements 0972:0A98:0012:C6CB ()
 *
 */
void f__0972_0A98_0012_C6CB()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0AAA); emu_cs = 0x0C10; f__0C10_0168_0014_CEB0();
	f__0972_0AAA_000A_8B0A();
}

/**
 * Decompiled function f__0972_0AAA_000A_8B0A()
 *
 * @name f__0972_0AAA_000A_8B0A
 * @implements 0972:0AAA:000A:8B0A ()
 *
 */
void f__0972_0AAA_000A_8B0A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0AB4); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	f__0972_0AB4_0012_B5DA();
}

/**
 * Decompiled function f__0972_0AB4_0012_B5DA()
 *
 * @name f__0972_0AB4_0012_B5DA
 * @implements 0972:0AB4:0012:B5DA ()
 *
 */
void f__0972_0AB4_0012_B5DA()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0AC6); emu_cs = 0x0C10; f__0C10_0168_0014_CEB0();
	f__0972_0AC6_0011_6245();
}

/**
 * Decompiled function f__0972_0AC6_0011_6245()
 *
 * @name f__0972_0AC6_0011_6245
 * @implements 0972:0AC6:0011:6245 ()
 *
 */
void f__0972_0AC6_0011_6245()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__0972_0AD7_000B_D0F3(); return; }
	emu_movw(&emu_ax, emu_si);
	f__0972_0AD5_0002_D03A(); return;
}

/**
 * Decompiled function f__0972_0AD5_0002_D03A()
 *
 * @name f__0972_0AD5_0002_D03A
 * @implements 0972:0AD5:0002:D03A ()
 *
 * Called From: 0972:0AF5:0006:E1F0
 */
void f__0972_0AD5_0002_D03A()
{
	f__0972_0AF7_0005_8BCF(); return;
}

/**
 * Decompiled function f__0972_0AD7_000B_D0F3()
 *
 * @name f__0972_0AD7_000B_D0F3
 * @implements 0972:0AD7:000B:D0F3 ()
 *
 * Called From: 0972:0AD1:0011:6245
 */
void f__0972_0AD7_000B_D0F3()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0AE2); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	f__0972_0AE2_000F_3656();
}

/**
 * Decompiled function f__0972_0AE2_000F_3656()
 *
 * @name f__0972_0AE2_000F_3656
 * @implements 0972:0AE2:000F:3656 ()
 *
 */
void f__0972_0AE2_000F_3656()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0AF1); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	f__0972_0AF1_0006_E1F0();
}

/**
 * Decompiled function f__0972_0AF1_0006_E1F0()
 *
 * @name f__0972_0AF1_0006_E1F0
 * @implements 0972:0AF1:0006:E1F0 ()
 *
 */
void f__0972_0AF1_0006_E1F0()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	f__0972_0AD5_0002_D03A(); return;
}

/**
 * Decompiled function f__0972_0AF7_0005_8BCF()
 *
 * @name f__0972_0AF7_0005_8BCF
 * @implements 0972:0AF7:0005:8BCF ()
 *
 * Called From: 0972:0AD5:0002:D03A
 * Called From: 0972:0AD5:0011:6245
 */
void f__0972_0AF7_0005_8BCF()
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
 * Decompiled function f__0972_0AFC_0016_0DC9()
 *
 * @name f__0972_0AFC_0016_0DC9
 * @implements 0972:0AFC:0016:0DC9 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_0AFC_0016_0DC9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x2);
	if (emu_flags.zf) { f__0972_0B12_000E_738D(); return; }
	f__0972_0BFC_0002_8A3A(); return;
}

/**
 * Decompiled function f__0972_0B12_000E_738D()
 *
 * @name f__0972_0B12_000E_738D
 * @implements 0972:0B12:000E:738D ()
 *
 * Called From: 0972:0B0D:0016:0DC9
 */
void f__0972_0B12_000E_738D()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (!emu_flags.zf) { f__0972_0B20_0026_CA0B(); return; }
	/* Unresolved jump */ emu_ip = 0x0BFC; emu_last_cs = 0x0972; emu_last_ip = 0x0B1D; emu_last_length = 0x000E; emu_last_crc = 0x738D; emu_call();
}

/**
 * Decompiled function f__0972_0B20_0026_CA0B()
 *
 * @name f__0972_0B20_0026_CA0B
 * @implements 0972:0B20:0026:CA0B ()
 *
 * Called From: 0972:0B1B:000E:738D
 */
void f__0972_0B20_0026_CA0B()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0B46); emu_cs = 0x0C3A; f__0C3A_247A_0015_EA04();
	f__0972_0B46_0012_0F5D();
}

/**
 * Decompiled function f__0972_0B46_0012_0F5D()
 *
 * @name f__0972_0B46_0012_0F5D
 * @implements 0972:0B46:0012:0F5D ()
 *
 */
void f__0972_0B46_0012_0F5D()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_di, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0B58); emu_cs = 0x1A34; f__1A34_3491_0032_AFF8();
	f__0972_0B58_003E_7C5A();
}

/**
 * Decompiled function f__0972_0B58_003E_7C5A()
 *
 * @name f__0972_0B58_003E_7C5A
 * @implements 0972:0B58:003E:7C5A ()
 *
 */
void f__0972_0B58_003E_7C5A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (!emu_flags.zf) { f__0972_0B96_0018_4D07(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B96; emu_last_cs = 0x0972; emu_last_ip = 0x0B75; emu_last_length = 0x003E; emu_last_crc = 0x7C5A; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (!emu_flags.zf) { f__0972_0B96_0018_4D07(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x5A));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x5C));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B96; emu_last_cs = 0x0972; emu_last_ip = 0x0B8C; emu_last_length = 0x003E; emu_last_crc = 0x7C5A; emu_call(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B96; emu_last_cs = 0x0972; emu_last_ip = 0x0B90; emu_last_length = 0x003E; emu_last_crc = 0x7C5A; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__0972_0BFE_0006_F7CE(); return;
}

/**
 * Decompiled function f__0972_0B92_0004_DC39()
 *
 * @name f__0972_0B92_0004_DC39
 * @implements 0972:0B92:0004:DC39 ()
 *
 * Called From: 0972:0BFC:0002:8A3A
 */
void f__0972_0B92_0004_DC39()
{
	emu_xorw(&emu_ax, emu_ax);
	f__0972_0B94_0002_F43A(); return;
}

/**
 * Decompiled function f__0972_0B94_0002_F43A()
 *
 * @name f__0972_0B94_0002_F43A
 * @implements 0972:0B94:0002:F43A ()
 *
 * Called From: 0972:0BFA:0007:35C7
 */
void f__0972_0B94_0002_F43A()
{
	f__0972_0BFE_0006_F7CE(); return;
}

/**
 * Decompiled function f__0972_0B96_0018_4D07()
 *
 * @name f__0972_0B96_0018_4D07
 * @implements 0972:0B96:0018:4D07 ()
 *
 * Called From: 0972:0B6D:003E:7C5A
 * Called From: 0972:0B7F:003E:7C5A
 */
void f__0972_0B96_0018_4D07()
{
	emu_movw(&emu_ax, emu_di);
	emu_negw(&emu_ax, emu_ax);
	emu_sbbw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0BAE); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__0972_0BAE_0015_DC2E();
}

/**
 * Decompiled function f__0972_0BAE_0015_DC2E()
 *
 * @name f__0972_0BAE_0015_DC2E
 * @implements 0972:0BAE:0015:DC2E ()
 *
 */
void f__0972_0BAE_0015_DC2E()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0BC3); emu_cs = 0x1A34; f__1A34_2BB5_0025_30B8();
	f__0972_0BC3_0020_614B();
}

/**
 * Decompiled function f__0972_0BC3_0020_614B()
 *
 * @name f__0972_0BC3_0020_614B
 * @implements 0972:0BC3:0020:614B ()
 *
 */
void f__0972_0BC3_0020_614B()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__0972_0BFC_0002_8A3A(); return; }
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0BE3); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__0972_0BE3_0012_0853();
}

/**
 * Decompiled function f__0972_0BE3_0012_0853()
 *
 * @name f__0972_0BE3_0012_0853
 * @implements 0972:0BE3:0012:0853 ()
 *
 */
void f__0972_0BE3_0012_0853()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0BF5); emu_cs = 0x0C10; f__0C10_00D2_000F_D61E();
	f__0972_0BF5_0007_35C7();
}

/**
 * Decompiled function f__0972_0BF5_0007_35C7()
 *
 * @name f__0972_0BF5_0007_35C7
 * @implements 0972:0BF5:0007:35C7 ()
 *
 */
void f__0972_0BF5_0007_35C7()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, emu_si);
	f__0972_0B94_0002_F43A(); return;
}

/**
 * Decompiled function f__0972_0BFC_0002_8A3A()
 *
 * @name f__0972_0BFC_0002_8A3A
 * @implements 0972:0BFC:0002:8A3A ()
 *
 * Called From: 0972:0B0F:0016:0DC9
 * Called From: 0972:0BD2:0020:614B
 */
void f__0972_0BFC_0002_8A3A()
{
	f__0972_0B92_0004_DC39(); return;
}

/**
 * Decompiled function f__0972_0BFE_0006_F7CE()
 *
 * @name f__0972_0BFE_0006_F7CE
 * @implements 0972:0BFE:0006:F7CE ()
 *
 * Called From: 0972:0B94:003E:7C5A
 * Called From: 0972:0B94:0002:F43A
 * Called From: 0972:0B94:0004:DC39
 */
void f__0972_0BFE_0006_F7CE()
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
 * Decompiled function f__0972_0C04_0037_B310()
 *
 * @name f__0972_0C04_0037_B310
 * @implements 0972:0C04:0037:B310 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_0C04_0037_B310()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_cmpw(&emu_si, 0xFFFE);
	if (!emu_flags.zf) { f__0972_0C42_000E_BD9B(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_flags.zf) { f__0972_0C40_0010_51A9(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0C3B; emu_last_cs = 0x0972; emu_last_ip = 0x0C34; emu_last_length = 0x0037; emu_last_crc = 0xB310; emu_call(); return; }
	emu_movw(&emu_si, 0x1);
	f__0972_0C3E_0002_C13A(); return;
}

/**
 * Decompiled function f__0972_0C3E_0002_C13A()
 *
 * @name f__0972_0C3E_0002_C13A
 * @implements 0972:0C3E:0002:C13A ()
 *
 * Called From: 0972:0C39:0037:B310
 */
void f__0972_0C3E_0002_C13A()
{
	f__0972_0C42_000E_BD9B(); return;
}

/**
 * Decompiled function f__0972_0C40_0010_51A9()
 *
 * @name f__0972_0C40_0010_51A9
 * @implements 0972:0C40:0010:51A9 ()
 *
 * Called From: 0972:0C29:0037:B310
 */
void f__0972_0C40_0010_51A9()
{
	emu_xorw(&emu_si, emu_si);
	f__0972_0C42_000E_BD9B(); return;
}

/**
 * Decompiled function f__0972_0C42_000E_BD9B()
 *
 * @name f__0972_0C42_000E_BD9B
 * @implements 0972:0C42:000E:BD9B ()
 *
 * Called From: 0972:0C1E:0037:B310
 * Called From: 0972:0C3E:0002:C13A
 */
void f__0972_0C42_000E_BD9B()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0C50); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	f__0972_0C50_0007_F90C();
}

/**
 * Decompiled function f__0972_0C50_0007_F90C()
 *
 * @name f__0972_0C50_0007_F90C
 * @implements 0972:0C50:0007:F90C ()
 *
 */
void f__0972_0C50_0007_F90C()
{
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	f__0972_0C57_0003_2E57(); return;
}

/**
 * Decompiled function f__0972_0C57_0003_2E57()
 *
 * @name f__0972_0C57_0003_2E57
 * @implements 0972:0C57:0003:2E57 ()
 *
 * Called From: 0972:0C55:0007:F90C
 */
void f__0972_0C57_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_0C5A_0015_E00A()
 *
 * @name f__0972_0C5A_0015_E00A
 * @implements 0972:0C5A:0015:E00A ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_0C5A_0015_E00A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (!emu_flags.zf) { f__0972_0C6F_000D_A320(); return; }
	f__0972_0E7D_0005_E39C(); return;
}

/**
 * Decompiled function f__0972_0C6F_000D_A320()
 *
 * @name f__0972_0C6F_000D_A320
 * @implements 0972:0C6F:000D:A320 ()
 *
 * Called From: 0972:0C6A:0015:E00A
 */
void f__0972_0C6F_000D_A320()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0C7C); emu_cs = 0x1A34; f__1A34_3491_0032_AFF8();
	f__0972_0C7C_0027_52E8();
}

/**
 * Decompiled function f__0972_0C7C_0027_52E8()
 *
 * @name f__0972_0C7C_0027_52E8
 * @implements 0972:0C7C:0027:52E8 ()
 *
 */
void f__0972_0C7C_0027_52E8()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x5A);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2D07);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0CA3; emu_last_cs = 0x0972; emu_last_ip = 0x0C9E; emu_last_length = 0x0027; emu_last_crc = 0x52E8; emu_call(); return; }
	f__0972_0D27_000F_A4DF(); return;
}

/**
 * Decompiled function f__0972_0D21_0006_3DBC()
 *
 * @name f__0972_0D21_0006_3DBC
 * @implements 0972:0D21:0006:3DBC ()
 *
 * Called From: 0972:0E7A:0004:F20C
 * Called From: 0972:0E7A:0003:6209
 */
void f__0972_0D21_0006_3DBC()
{
	emu_movw(&emu_ax, 0x1);
	f__0972_0D24_0003_DDB6(); return;
}

/**
 * Decompiled function f__0972_0D24_0003_DDB6()
 *
 * @name f__0972_0D24_0003_DDB6
 * @implements 0972:0D24:0003:DDB6 ()
 *
 * Called From: 0972:0E7F:0005:E39C
 */
void f__0972_0D24_0003_DDB6()
{
	f__0972_0E82_0005_8BCF(); return;
}

/**
 * Decompiled function f__0972_0D27_000F_A4DF()
 *
 * @name f__0972_0D27_000F_A4DF
 * @implements 0972:0D27:000F:A4DF ()
 *
 * Called From: 0972:0CA0:0027:52E8
 */
void f__0972_0D27_000F_A4DF()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (!emu_flags.zf) { f__0972_0D36_0010_1B5F(); return; }
	emu_movw(&emu_ax, 0x1);
	f__0972_0D38_000E_9B6D(); return;
}

/**
 * Decompiled function f__0972_0D36_0010_1B5F()
 *
 * @name f__0972_0D36_0010_1B5F
 * @implements 0972:0D36:0010:1B5F ()
 *
 * Called From: 0972:0D2F:000F:A4DF
 */
void f__0972_0D36_0010_1B5F()
{
	emu_xorw(&emu_ax, emu_ax);
	f__0972_0D38_000E_9B6D(); return;
}

/**
 * Decompiled function f__0972_0D38_000E_9B6D()
 *
 * @name f__0972_0D38_000E_9B6D
 * @implements 0972:0D38:000E:9B6D ()
 *
 * Called From: 0972:0D34:000F:A4DF
 */
void f__0972_0D38_000E_9B6D()
{
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0D46); emu_cs = 0x0C3A; f__0C3A_247A_0015_EA04();
	f__0972_0D46_000C_CFFA();
}

/**
 * Decompiled function f__0972_0D46_000C_CFFA()
 *
 * @name f__0972_0D46_000C_CFFA
 * @implements 0972:0D46:000C:CFFA ()
 *
 */
void f__0972_0D46_000C_CFFA()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__0972_0D52_0015_DD16(); return; }
	f__0972_0E7D_0005_E39C(); return;
}

/**
 * Decompiled function f__0972_0D52_0015_DD16()
 *
 * @name f__0972_0D52_0015_DD16
 * @implements 0972:0D52:0015:DD16 ()
 *
 * Called From: 0972:0D4D:000C:CFFA
 */
void f__0972_0D52_0015_DD16()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x9));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0D67); emu_cs = 0x0F3F; f__0F3F_009D_0017_8464();
	f__0972_0D67_0008_8ABD();
}

/**
 * Decompiled function f__0972_0D67_0008_8ABD()
 *
 * @name f__0972_0D67_0008_8ABD
 * @implements 0972:0D67:0008:8ABD ()
 *
 */
void f__0972_0D67_0008_8ABD()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D6F); emu_cs = 0x0F3F; f__0F3F_0275_0019_64C3();
	f__0972_0D6F_000F_5891();
}

/**
 * Decompiled function f__0972_0D6F_000F_5891()
 *
 * @name f__0972_0D6F_000F_5891
 * @implements 0972:0D6F:000F:5891 ()
 *
 */
void f__0972_0D6F_000F_5891()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0D7E); emu_cs = 0x1A34; f__1A34_2958_0013_3A47();
	f__0972_0D7E_000A_4602();
}

/**
 * Decompiled function f__0972_0D7E_000A_4602()
 *
 * @name f__0972_0D7E_000A_4602
 * @implements 0972:0D7E:000A:4602 ()
 *
 */
void f__0972_0D7E_000A_4602()
{
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__0972_0D88_003A_00C4(); return; }
	/* Unresolved jump */ emu_ip = 0x0E7D; emu_last_cs = 0x0972; emu_last_ip = 0x0D85; emu_last_length = 0x000A; emu_last_crc = 0x4602; emu_call();
}

/**
 * Decompiled function f__0972_0D88_003A_00C4()
 *
 * @name f__0972_0D88_003A_00C4
 * @implements 0972:0D88:003A:00C4 ()
 *
 * Called From: 0972:0D83:000A:4602
 */
void f__0972_0D88_003A_00C4()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x3));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x3), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0DC2); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	f__0972_0DC2_0012_86B3();
}

/**
 * Decompiled function f__0972_0DC2_0012_86B3()
 *
 * @name f__0972_0DC2_0012_86B3
 * @implements 0972:0DC2:0012:86B3 ()
 *
 */
void f__0972_0DC2_0012_86B3()
{
	emu_addw(&emu_sp, 0x8);
	emu_andw(&emu_ax, 0xE0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0DD4); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	f__0972_0DD4_0020_86C2();
}

/**
 * Decompiled function f__0972_0DD4_0020_86C2()
 *
 * @name f__0972_0DD4_0020_86C2
 * @implements 0972:0DD4:0020:86C2 ()
 *
 */
void f__0972_0DD4_0020_86C2()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x64));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0DF4); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	f__0972_0DF4_001E_8A47();
}

/**
 * Decompiled function f__0972_0DF4_001E_8A47()
 *
 * @name f__0972_0DF4_001E_8A47
 * @implements 0972:0DF4:001E:8A47 ()
 *
 */
void f__0972_0DF4_001E_8A47()
{
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (!emu_flags.zf) { f__0972_0E14_001B_5BF8(); return; }
	emu_movw(&emu_ax, 0x6A);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1B);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E12); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
	f__0972_0E12_001D_966A();
}

/**
 * Decompiled function f__0972_0E12_001D_966A()
 *
 * @name f__0972_0E12_001D_966A
 * @implements 0972:0E12:001D:966A ()
 *
 */
void f__0972_0E12_001D_966A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__0972_0E14_001B_5BF8(); return;
}

/**
 * Decompiled function f__0972_0E14_001B_5BF8()
 *
 * @name f__0972_0E14_001B_5BF8
 * @implements 0972:0E14:001B:5BF8 ()
 *
 * Called From: 0972:0E03:001E:8A47
 */
void f__0972_0E14_001B_5BF8()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E32; emu_last_cs = 0x0972; emu_last_ip = 0x0E1D; emu_last_length = 0x001B; emu_last_crc = 0x5BF8; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0E2F); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	f__0972_0E2F_0010_0DA8();
}

/**
 * Decompiled function f__0972_0E2F_0010_0DA8()
 *
 * @name f__0972_0E2F_0010_0DA8
 * @implements 0972:0E2F:0010:0DA8 ()
 *
 */
void f__0972_0E2F_0010_0DA8()
{
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0E3F); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	f__0972_0E3F_002E_C784();
}

/**
 * Decompiled function f__0972_0E3F_002E_C784()
 *
 * @name f__0972_0E3F_002E_C784
 * @implements 0972:0E3F:002E:C784 ()
 *
 */
void f__0972_0E3F_002E_C784()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (!emu_flags.zf) { f__0972_0E7A_0003_6209(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xD);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E7A; emu_last_cs = 0x0972; emu_last_ip = 0x0E59; emu_last_length = 0x002E; emu_last_crc = 0xC784; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (!emu_flags.zf) { f__0972_0E6D_000C_A466(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_addw(&emu_ax, 0x44);
	f__0972_0E73_0006_3EF3(); return;
}

/**
 * Decompiled function f__0972_0E6D_000C_A466()
 *
 * @name f__0972_0E6D_000C_A466
 * @implements 0972:0E6D:000C:A466 ()
 *
 * Called From: 0972:0E63:002E:C784
 */
void f__0972_0E6D_000C_A466()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_addw(&emu_ax, 0x1E);
	f__0972_0E73_0006_3EF3(); return;
}

/**
 * Decompiled function f__0972_0E73_0006_3EF3()
 *
 * @name f__0972_0E73_0006_3EF3
 * @implements 0972:0E73:0006:3EF3 ()
 *
 * Called From: 0972:0E6B:002E:C784
 */
void f__0972_0E73_0006_3EF3()
{
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E79); emu_cs = 0x3483; ovl__3483(2);
	f__0972_0E79_0004_F20C();
}

/**
 * Decompiled function f__0972_0E79_0004_F20C()
 *
 * @name f__0972_0E79_0004_F20C
 * @implements 0972:0E79:0004:F20C ()
 *
 */
void f__0972_0E79_0004_F20C()
{
	emu_pop(&emu_cx);
	f__0972_0E7A_0003_6209(); return;
}

/**
 * Decompiled function f__0972_0E7A_0003_6209()
 *
 * @name f__0972_0E7A_0003_6209
 * @implements 0972:0E7A:0003:6209 ()
 *
 * Called From: 0972:0E4E:002E:C784
 */
void f__0972_0E7A_0003_6209()
{
	f__0972_0D21_0006_3DBC(); return;
}

/**
 * Decompiled function f__0972_0E7D_0005_E39C()
 *
 * @name f__0972_0E7D_0005_E39C
 * @implements 0972:0E7D:0005:E39C ()
 *
 * Called From: 0972:0C6C:0015:E00A
 * Called From: 0972:0D4F:000C:CFFA
 */
void f__0972_0E7D_0005_E39C()
{
	emu_xorw(&emu_ax, emu_ax);
	f__0972_0D24_0003_DDB6(); return;
}

/**
 * Decompiled function f__0972_0E82_0005_8BCF()
 *
 * @name f__0972_0E82_0005_8BCF
 * @implements 0972:0E82:0005:8BCF ()
 *
 * Called From: 0972:0D24:0006:3DBC
 * Called From: 0972:0D24:0003:DDB6
 */
void f__0972_0E82_0005_8BCF()
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
 * Decompiled function f__0972_0E87_0047_4065()
 *
 * @name f__0972_0E87_0047_4065
 * @implements 0972:0E87:0047:4065 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_0E87_0047_4065()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x14);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x7D00);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_cwd();
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0ECE); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	f__0972_0ECE_0006_973D();
}

/**
 * Decompiled function f__0972_0ECE_0006_973D()
 *
 * @name f__0972_0ECE_0006_973D
 * @implements 0972:0ECE:0006:973D ()
 *
 */
void f__0972_0ECE_0006_973D()
{
	emu_addw(&emu_sp, 0x8);
	f__0972_0FD0_0011_96ED(); return;
}

/**
 * Decompiled function f__0972_0ED4_0015_753E()
 *
 * @name f__0972_0ED4_0015_753E
 * @implements 0972:0ED4:0015:753E ()
 *
 * Called From: 0972:0FDE:0011:96ED
 * Called From: 0972:0FDE:0013:DDDB
 */
void f__0972_0ED4_0015_753E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0EE9); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	f__0972_0EE9_0008_9688();
}

/**
 * Decompiled function f__0972_0EE9_0008_9688()
 *
 * @name f__0972_0EE9_0008_9688
 * @implements 0972:0EE9:0008:9688 ()
 *
 */
void f__0972_0EE9_0008_9688()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EF1); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	f__0972_0EF1_0009_B78B();
}

/**
 * Decompiled function f__0972_0EF1_0009_B78B()
 *
 * @name f__0972_0EF1_0009_B78B
 * @implements 0972:0EF1:0009:B78B ()
 *
 */
void f__0972_0EF1_0009_B78B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__0972_0EFA_0027_A697(); return; }
	f__0972_0FC3_000B_799F(); return;
}

/**
 * Decompiled function f__0972_0EFA_0027_A697()
 *
 * @name f__0972_0EFA_0027_A697
 * @implements 0972:0EFA:0027:A697 ()
 *
 * Called From: 0972:0EF5:0009:B78B
 */
void f__0972_0EFA_0027_A697()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F21; emu_last_cs = 0x0972; emu_last_ip = 0x0F02; emu_last_length = 0x0027; emu_last_crc = 0xA697; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x9));
	emu_movb(&emu_ah, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_cl, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movw(&emu_dx, 0x1);
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { f__0972_0F21_001C_C333(); return; }
	f__0972_0FC3_000B_799F(); return;
}

/**
 * Decompiled function f__0972_0F21_001C_C333()
 *
 * @name f__0972_0F21_001C_C333
 * @implements 0972:0F21:001C:C333 ()
 *
 * Called From: 0972:0F1C:0027:A697
 */
void f__0972_0F21_001C_C333()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0F3D); emu_cs = 0x0F3F; f__0F3F_00B4_002A_89B2();
	f__0972_0F3D_0036_4859();
}

/**
 * Decompiled function f__0972_0F3D_0036_4859()
 *
 * @name f__0972_0F3D_0036_4859
 * @implements 0972:0F3D:0036:4859 ()
 *
 */
void f__0972_0F3D_0036_4859()
{
	emu_addw(&emu_sp, 0x8);
	emu_cwd();
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0FC3; emu_last_cs = 0x0972; emu_last_ip = 0x0F50; emu_last_length = 0x0036; emu_last_crc = 0x4859; emu_call(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0F59; emu_last_cs = 0x0972; emu_last_ip = 0x0F52; emu_last_length = 0x0036; emu_last_crc = 0x4859; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x0FC3; emu_last_cs = 0x0972; emu_last_ip = 0x0F57; emu_last_length = 0x0036; emu_last_crc = 0x4859; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x1);
	if (!emu_flags.zf) { f__0972_0F99_0035_1D8A(); return; }
	emu_movw(&emu_cx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_xorw(&emu_dx, emu_dx);
	emu_movw(&emu_ax, 0x3);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0F73); emu_cs = 0x01F7; emu_ip = 0x03B2; emu_last_cs = 0x0972; emu_last_ip = 0x0F6E; emu_last_length = 0x0036; emu_last_crc = 0x4859; emu_call();
	/* Unresolved jump */ emu_ip = 0x0F73; emu_last_cs = 0x0972; emu_last_ip = 0x0F73; emu_last_length = 0x0036; emu_last_crc = 0x4859; emu_call();
}

/**
 * Decompiled function f__0972_0F99_0035_1D8A()
 *
 * @name f__0972_0F99_0035_1D8A
 * @implements 0972:0F99:0035:1D8A ()
 *
 * Called From: 0972:0F61:0036:4859
 */
void f__0972_0F99_0035_1D8A()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0FC3; emu_last_cs = 0x0972; emu_last_ip = 0x0FA2; emu_last_length = 0x0035; emu_last_crc = 0x1D8A; emu_call(); return; }
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0FAB; emu_last_cs = 0x0972; emu_last_ip = 0x0FA4; emu_last_length = 0x0035; emu_last_crc = 0x1D8A; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!emu_flags.cf) { f__0972_0FC3_000B_799F(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx);
	f__0972_0FC3_000B_799F(); return;
}

/**
 * Decompiled function f__0972_0FC3_000B_799F()
 *
 * @name f__0972_0FC3_000B_799F
 * @implements 0972:0FC3:000B:799F ()
 *
 * Called From: 0972:0EF7:0009:B78B
 * Called From: 0972:0F1E:0027:A697
 * Called From: 0972:0FA9:0035:1D8A
 */
void f__0972_0FC3_000B_799F()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0FCE); emu_cs = 0x0FE4; emu_Unit_FindNext();
	f__0972_0FCE_0013_DDDB();
}

/**
 * Decompiled function f__0972_0FCE_0013_DDDB()
 *
 * @name f__0972_0FCE_0013_DDDB
 * @implements 0972:0FCE:0013:DDDB ()
 *
 */
void f__0972_0FCE_0013_DDDB()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__0972_0FD0_0011_96ED(); return;
}

/**
 * Decompiled function f__0972_0FD0_0011_96ED()
 *
 * @name f__0972_0FD0_0011_96ED
 * @implements 0972:0FD0:0011:96ED ()
 *
 * Called From: 0972:0ED1:0006:973D
 */
void f__0972_0FD0_0011_96ED()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__0972_0FE1_0017_BA46(); return; }
	f__0972_0ED4_0015_753E(); return;
}

/**
 * Decompiled function f__0972_0FE1_0017_BA46()
 *
 * @name f__0972_0FE1_0017_BA46
 * @implements 0972:0FE1:0017:BA46 ()
 *
 * Called From: 0972:0FDC:0013:DDDB
 */
void f__0972_0FE1_0017_BA46()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (emu_flags.zf) { f__0972_0FFC_0004_9539(); return; }
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0FF8); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__0972_0FF8_0004_591F();
}

/**
 * Decompiled function f__0972_0FF8_0004_591F()
 *
 * @name f__0972_0FF8_0004_591F
 * @implements 0972:0FF8:0004:591F ()
 *
 */
void f__0972_0FF8_0004_591F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__0972_0FFA_0002_C23A(); return;
}

/**
 * Decompiled function f__0972_0FFA_0002_C23A()
 *
 * @name f__0972_0FFA_0002_C23A
 * @implements 0972:0FFA:0002:C23A ()
 *
 * Called From: 0972:0FFE:0004:9539
 */
void f__0972_0FFA_0002_C23A()
{
	f__0972_1000_0004_893F(); return;
}

/**
 * Decompiled function f__0972_0FFC_0004_9539()
 *
 * @name f__0972_0FFC_0004_9539
 * @implements 0972:0FFC:0004:9539 ()
 *
 * Called From: 0972:0FE7:0017:BA46
 */
void f__0972_0FFC_0004_9539()
{
	emu_xorw(&emu_ax, emu_ax);
	f__0972_0FFA_0002_C23A(); return;
}

/**
 * Decompiled function f__0972_1000_0004_893F()
 *
 * @name f__0972_1000_0004_893F
 * @implements 0972:1000:0004:893F ()
 *
 * Called From: 0972:0FFA:0002:C23A
 * Called From: 0972:0FFA:0004:591F
 */
void f__0972_1000_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_1004_0029_E69D()
 *
 * @name f__0972_1004_0029_E69D
 * @implements 0972:1004:0029:E69D ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_1004_0029_E69D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__0972_102D_0008_180B(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__0972_1149_0006_F7CE(); return;
}

/**
 * Decompiled function f__0972_1028_0005_1C33()
 *
 * @name f__0972_1028_0005_1C33
 * @implements 0972:1028:0005:1C33 ()
 *
 * Called From: 0972:1146:0003:A217
 */
void f__0972_1028_0005_1C33()
{
	emu_xorw(&emu_ax, emu_ax);
	f__0972_102A_0003_1DA7(); return;
}

/**
 * Decompiled function f__0972_102A_0003_1DA7()
 *
 * @name f__0972_102A_0003_1DA7
 * @implements 0972:102A:0003:1DA7 ()
 *
 * Called From: 0972:1143:0009:C65E
 */
void f__0972_102A_0003_1DA7()
{
	f__0972_1149_0006_F7CE(); return;
}

/**
 * Decompiled function f__0972_102D_0008_180B()
 *
 * @name f__0972_102D_0008_180B
 * @implements 0972:102D:0008:180B ()
 *
 * Called From: 0972:1026:0029:E69D
 */
void f__0972_102D_0008_180B()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x1035); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	f__0972_1035_0008_BAF2();
}

/**
 * Decompiled function f__0972_1035_0008_BAF2()
 *
 * @name f__0972_1035_0008_BAF2
 * @implements 0972:1035:0008:BAF2 ()
 *
 */
void f__0972_1035_0008_BAF2()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x103D); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__0972_103D_0016_DE64();
}

/**
 * Decompiled function f__0972_103D_0016_DE64()
 *
 * @name f__0972_103D_0016_DE64
 * @implements 0972:103D:0016:DE64 ()
 *
 */
void f__0972_103D_0016_DE64()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1053); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__0972_1053_001A_D4A1();
}

/**
 * Decompiled function f__0972_1053_001A_D4A1()
 *
 * @name f__0972_1053_001A_D4A1
 * @implements 0972:1053:001A:D4A1 ()
 *
 */
void f__0972_1053_001A_D4A1()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (!emu_flags.zf) { f__0972_106D_0041_C9BE(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x30));
	/* Unresolved jump */ emu_ip = 0x1075; emu_last_cs = 0x0972; emu_last_ip = 0x106B; emu_last_length = 0x001A; emu_last_crc = 0xD4A1; emu_call();
}

/**
 * Decompiled function f__0972_106D_0041_C9BE()
 *
 * @name f__0972_106D_0041_C9BE
 * @implements 0972:106D:0041:C9BE ()
 *
 * Called From: 0972:1061:001A:D4A1
 */
void f__0972_106D_0041_C9BE()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_andw(&emu_ax, 0x1FF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_si, emu_ax);
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x10AB; emu_last_cs = 0x0972; emu_last_ip = 0x10A4; emu_last_length = 0x0041; emu_last_crc = 0xC9BE; emu_call(); return; }
	emu_cmpw(&emu_si, 0x8);
	if ((emu_flags.sf != emu_flags.of)) { f__0972_10AE_0008_04B9(); return; }
	/* Unresolved jump */ emu_ip = 0x1140; emu_last_cs = 0x0972; emu_last_ip = 0x10AB; emu_last_length = 0x0041; emu_last_crc = 0xC9BE; emu_call();
}

/**
 * Decompiled function f__0972_10AE_0008_04B9()
 *
 * @name f__0972_10AE_0008_04B9
 * @implements 0972:10AE:0008:04B9 ()
 *
 * Called From: 0972:10A9:0041:C9BE
 */
void f__0972_10AE_0008_04B9()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x10B6); emu_cs = 0x0F3F; f__0F3F_009D_0017_8464();
	f__0972_10B6_000B_281A();
}

/**
 * Decompiled function f__0972_10B6_000B_281A()
 *
 * @name f__0972_10B6_000B_281A
 * @implements 0972:10B6:000B:281A ()
 *
 */
void f__0972_10B6_000B_281A()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x10C1); emu_cs = 0x0F3F; f__0F3F_009D_0017_8464();
	f__0972_10C1_0008_8AD8();
}

/**
 * Decompiled function f__0972_10C1_0008_8AD8()
 *
 * @name f__0972_10C1_0008_8AD8
 * @implements 0972:10C1:0008:8AD8 ()
 *
 */
void f__0972_10C1_0008_8AD8()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10C9); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	f__0972_10C9_0012_27F9();
}

/**
 * Decompiled function f__0972_10C9_0012_27F9()
 *
 * @name f__0972_10C9_0012_27F9
 * @implements 0972:10C9:0012:27F9 ()
 *
 */
void f__0972_10C9_0012_27F9()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10DB); emu_cs = 0x34CD; ovl__34CD(19);
	f__0972_10DB_0012_DC63();
}

/**
 * Decompiled function f__0972_10DB_0012_DC63()
 *
 * @name f__0972_10DB_0012_DC63
 * @implements 0972:10DB:0012:DC63 ()
 *
 */
void f__0972_10DB_0012_DC63()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_si);
	if (emu_flags.zf) { f__0972_1146_0003_A217(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_subw(&emu_ax, emu_si);
	emu_movw(&emu_di, emu_ax);
	f__0972_10F0_0007_D398(); return;
}

/**
 * Decompiled function f__0972_10ED_000A_7B2F()
 *
 * @name f__0972_10ED_000A_7B2F
 * @implements 0972:10ED:000A:7B2F ()
 *
 * Called From: 0972:10F3:0007:D398
 */
void f__0972_10ED_000A_7B2F()
{
	emu_subw(&emu_di, 0x8);
	f__0972_10F0_0007_D398(); return;
}

/**
 * Decompiled function f__0972_10F0_0007_D398()
 *
 * @name f__0972_10F0_0007_D398
 * @implements 0972:10F0:0007:D398 ()
 *
 * Called From: 0972:10EB:0012:DC63
 */
void f__0972_10F0_0007_D398()
{
	emu_cmpw(&emu_di, 0x4);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_10ED_000A_7B2F(); return; }
	f__0972_10FA_000C_2996(); return;
}

/**
 * Decompiled function f__0972_10FA_000C_2996()
 *
 * @name f__0972_10FA_000C_2996
 * @implements 0972:10FA:000C:2996 ()
 *
 * Called From: 0972:10F5:000A:7B2F
 * Called From: 0972:10F5:0007:D398
 */
void f__0972_10FA_000C_2996()
{
	emu_cmpw(&emu_di, 0xFFFC);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x10F7; emu_last_cs = 0x0972; emu_last_ip = 0x10FD; emu_last_length = 0x000C; emu_last_crc = 0x2996; emu_call(); return; }
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__0972_1106_0037_38DE(); return; }
	emu_decw(&emu_si);
	f__0972_1107_0036_3852(); return;
}

/**
 * Decompiled function f__0972_1106_0037_38DE()
 *
 * @name f__0972_1106_0037_38DE
 * @implements 0972:1106:0037:38DE ()
 *
 * Called From: 0972:1101:000C:2996
 */
void f__0972_1106_0037_38DE()
{
	emu_incw(&emu_si);
	f__0972_1107_0036_3852(); return;
}

/**
 * Decompiled function f__0972_1107_0036_3852()
 *
 * @name f__0972_1107_0036_3852
 * @implements 0972:1107:0036:3852 ()
 *
 * Called From: 0972:1104:000C:2996
 */
void f__0972_1107_0036_3852()
{
	emu_andw(&emu_si, 0x7);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax, emu_si);
	emu_andw(&emu_ax, 0x1FF);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x49), emu_si);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x113D); emu_cs = 0x34CD; ovl__34CD(29);
	f__0972_113D_0009_C65E();
}

/**
 * Decompiled function f__0972_113D_0009_C65E()
 *
 * @name f__0972_113D_0009_C65E
 * @implements 0972:113D:0009:C65E ()
 *
 */
void f__0972_113D_0009_C65E()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x1);
	f__0972_102A_0003_1DA7(); return;
}

/**
 * Decompiled function f__0972_1146_0003_A217()
 *
 * @name f__0972_1146_0003_A217
 * @implements 0972:1146:0003:A217 ()
 *
 * Called From: 0972:10E2:0012:DC63
 */
void f__0972_1146_0003_A217()
{
	f__0972_1028_0005_1C33(); return;
}

/**
 * Decompiled function f__0972_1149_0006_F7CE()
 *
 * @name f__0972_1149_0006_F7CE
 * @implements 0972:1149:0006:F7CE ()
 *
 * Called From: 0972:102A:0005:1C33
 * Called From: 0972:102A:0003:1DA7
 * Called From: 0972:102A:0029:E69D
 */
void f__0972_1149_0006_F7CE()
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
 * Decompiled function f__0972_121E_0030_5DAA()
 *
 * @name f__0972_121E_0030_5DAA
 * @implements 0972:121E:0030:5DAA ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_121E_0030_5DAA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x22));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__0972_124E_0019_3598(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__0972_1336_0006_F7CE(); return;
}

/**
 * Decompiled function f__0972_124B_0003_1D1A()
 *
 * @name f__0972_124B_0003_1D1A
 * @implements 0972:124B:0003:1D1A ()
 *
 * Called From: 0972:1330:000F:3459
 */
void f__0972_124B_0003_1D1A()
{
	f__0972_1336_0006_F7CE(); return;
}

/**
 * Decompiled function f__0972_124E_0019_3598()
 *
 * @name f__0972_124E_0019_3598
 * @implements 0972:124E:0019:3598 ()
 *
 * Called From: 0972:1247:0030:5DAA
 */
void f__0972_124E_0019_3598()
{
	emu_movw(&emu_si, 0xFFFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (!emu_flags.zf) { f__0972_1282_0022_DA59(); return; }
	emu_movw(&emu_si, 0x14);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1267); emu_cs = 0x167E; emu_ip = 0x01BB; emu_last_cs = 0x0972; emu_last_ip = 0x1262; emu_last_length = 0x0019; emu_last_crc = 0x3598; emu_call();
	/* Unresolved jump */ emu_ip = 0x1267; emu_last_cs = 0x0972; emu_last_ip = 0x1267; emu_last_length = 0x0019; emu_last_crc = 0x3598; emu_call();
}

/**
 * Decompiled function f__0972_1282_0022_DA59()
 *
 * @name f__0972_1282_0022_DA59
 * @implements 0972:1282:0022:DA59 ()
 *
 * Called From: 0972:125A:0019:3598
 */
void f__0972_1282_0022_DA59()
{
	emu_movw(&emu_si, 0x17);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x80);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x80);
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_ax, emu_si);
	emu_cmpw(&emu_ax, 0x14);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x12A4; emu_last_cs = 0x0972; emu_last_ip = 0x129B; emu_last_length = 0x0022; emu_last_crc = 0xDA59; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x17);
	if (emu_flags.zf) { f__0972_12C9_001A_E9DB(); return; }
	/* Unresolved jump */ emu_ip = 0x12E3; emu_last_cs = 0x0972; emu_last_ip = 0x12A2; emu_last_length = 0x0022; emu_last_crc = 0xDA59; emu_call();
}

/**
 * Decompiled function f__0972_12BC_0005_B762()
 *
 * @name f__0972_12BC_0005_B762
 * @implements 0972:12BC:0005:B762 ()
 *
 * Called From: 0972:12E1:001A:E9DB
 */
void f__0972_12BC_0005_B762()
{
	emu_push(emu_cs); emu_push(0x12C1); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	f__0972_12C1_0008_163E();
}

/**
 * Decompiled function f__0972_12C1_0008_163E()
 *
 * @name f__0972_12C1_0008_163E
 * @implements 0972:12C1:0008:163E ()
 *
 */
void f__0972_12C1_0008_163E()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	f__0972_12E8_001F_F082(); return;
}

/**
 * Decompiled function f__0972_12C9_001A_E9DB()
 *
 * @name f__0972_12C9_001A_E9DB
 * @implements 0972:12C9:001A:E9DB ()
 *
 * Called From: 0972:12A0:0022:DA59
 */
void f__0972_12C9_001A_E9DB()
{
	emu_movw(&emu_di, 0x14);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2D07);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, 0x00, 0x378));
	f__0972_12BC_0005_B762(); return;
}

/**
 * Decompiled function f__0972_12E8_001F_F082()
 *
 * @name f__0972_12E8_001F_F082
 * @implements 0972:12E8:001F:F082 ()
 *
 * Called From: 0972:12C7:0008:163E
 */
void f__0972_12E8_001F_F082()
{
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1333; emu_last_cs = 0x0972; emu_last_ip = 0x12EB; emu_last_length = 0x001F; emu_last_crc = 0xF082; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1307); emu_cs = 0x1A34; f__1A34_24FE_002F_672A();
	f__0972_1307_001D_FAC5();
}

/**
 * Decompiled function f__0972_1307_001D_FAC5()
 *
 * @name f__0972_1307_001D_FAC5
 * @implements 0972:1307:001D:FAC5 ()
 *
 */
void f__0972_1307_001D_FAC5()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_orw(&emu_ax, emu_dx);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1333; emu_last_cs = 0x0972; emu_last_ip = 0x1312; emu_last_length = 0x001D; emu_last_crc = 0xFAC5; emu_call(); return; }
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1324); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__0972_1324_000F_3459();
}

/**
 * Decompiled function f__0972_1324_000F_3459()
 *
 * @name f__0972_1324_000F_3459
 * @implements 0972:1324:000F:3459 ()
 *
 */
void f__0972_1324_000F_3459()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4D), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__0972_124B_0003_1D1A(); return;
}

/**
 * Decompiled function f__0972_1336_0006_F7CE()
 *
 * @name f__0972_1336_0006_F7CE
 * @implements 0972:1336:0006:F7CE ()
 *
 * Called From: 0972:124B:0003:1D1A
 */
void f__0972_1336_0006_F7CE()
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
 * Decompiled function f__0972_137B_002B_A9E3()
 *
 * @name f__0972_137B_002B_A9E3
 * @implements 0972:137B:002B:A9E3 ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_137B_002B_A9E3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (!emu_flags.zf) { f__0972_13A9_0004_E839(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x13A6); emu_cs = 0x34CD; ovl__34CD(31);
	f__0972_13A6_0007_F90C();
}

/**
 * Decompiled function f__0972_13A6_0007_F90C()
 *
 * @name f__0972_13A6_0007_F90C
 * @implements 0972:13A6:0007:F90C ()
 *
 */
void f__0972_13A6_0007_F90C()
{
	emu_addw(&emu_sp, 0x6);
	f__0972_13A9_0004_E839(); return;
}

/**
 * Decompiled function f__0972_13A9_0004_E839()
 *
 * @name f__0972_13A9_0004_E839
 * @implements 0972:13A9:0004:E839 ()
 *
 * Called From: 0972:138B:002B:A9E3
 */
void f__0972_13A9_0004_E839()
{
	emu_xorw(&emu_ax, emu_ax);
	f__0972_13AD_0002_2597(); return;
}

/**
 * Decompiled function f__0972_13AD_0002_2597()
 *
 * @name f__0972_13AD_0002_2597
 * @implements 0972:13AD:0002:2597 ()
 *
 * Called From: 0972:13AB:0007:F90C
 * Called From: 0972:13AB:0004:E839
 */
void f__0972_13AD_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_13AF_0015_619A()
 *
 * @name f__0972_13AF_0015_619A
 * @implements 0972:13AF:0015:619A ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_13AF_0015_619A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (!emu_flags.zf) { f__0972_13C4_000F_D368(); return; }
	f__0972_1508_0010_3DB1(); return;
}

/**
 * Decompiled function f__0972_13C4_000F_D368()
 *
 * @name f__0972_13C4_000F_D368
 * @implements 0972:13C4:000F:D368 ()
 *
 * Called From: 0972:13BF:0015:619A
 */
void f__0972_13C4_000F_D368()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x3));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x13D3); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	f__0972_13D3_001C_1549();
}

/**
 * Decompiled function f__0972_13D3_001C_1549()
 *
 * @name f__0972_13D3_001C_1549
 * @implements 0972:13D3:001C:1549 ()
 *
 */
void f__0972_13D3_001C_1549()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x13EF); emu_cs = 0x34C1; ovl__34C1(2);
	f__0972_13EF_0011_0306();
}

/**
 * Decompiled function f__0972_13EF_0011_0306()
 *
 * @name f__0972_13EF_0011_0306
 * @implements 0972:13EF:0011:0306 ()
 *
 */
void f__0972_13EF_0011_0306()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1400); emu_cs = 0x34C1; ovl__34C1(0);
	f__0972_1400_0017_1CE2();
}

/**
 * Decompiled function f__0972_1400_0017_1CE2()
 *
 * @name f__0972_1400_0017_1CE2
 * @implements 0972:1400:0017:1CE2 ()
 *
 */
void f__0972_1400_0017_1CE2()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x58));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.cf || emu_flags.zf)) { f__0972_1417_0020_E839(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__0972_141F_0018_99E8(); return;
}

/**
 * Decompiled function f__0972_1417_0020_E839()
 *
 * @name f__0972_1417_0020_E839
 * @implements 0972:1417:0020:E839 ()
 *
 * Called From: 0972:1410:0017:1CE2
 */
void f__0972_1417_0020_E839()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x58));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x58), 0x0);
	if (emu_flags.zf) { f__0972_143D_0009_D10D(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { f__0972_1437_000F_5710(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__0972_143A_000C_2715(); return;
}

/**
 * Decompiled function f__0972_141F_0018_99E8()
 *
 * @name f__0972_141F_0018_99E8
 * @implements 0972:141F:0018:99E8 ()
 *
 * Called From: 0972:1415:0017:1CE2
 */
void f__0972_141F_0018_99E8()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x58), 0x0);
	if (emu_flags.zf) { f__0972_143D_0009_D10D(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { f__0972_1437_000F_5710(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__0972_143A_000C_2715(); return;
}

/**
 * Decompiled function f__0972_1437_000F_5710()
 *
 * @name f__0972_1437_000F_5710
 * @implements 0972:1437:000F:5710 ()
 *
 * Called From: 0972:1430:0020:E839
 * Called From: 0972:1430:0018:99E8
 */
void f__0972_1437_000F_5710()
{
	emu_movw(&emu_ax, 0x1);
	f__0972_143A_000C_2715(); return;
}

/**
 * Decompiled function f__0972_143A_000C_2715()
 *
 * @name f__0972_143A_000C_2715
 * @implements 0972:143A:000C:2715 ()
 *
 * Called From: 0972:1435:0018:99E8
 * Called From: 0972:1435:0020:E839
 */
void f__0972_143A_000C_2715()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	f__0972_143D_0009_D10D(); return;
}

/**
 * Decompiled function f__0972_143D_0009_D10D()
 *
 * @name f__0972_143D_0009_D10D
 * @implements 0972:143D:0009:D10D ()
 *
 * Called From: 0972:142A:0020:E839
 */
void f__0972_143D_0009_D10D()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0972_1446_0019_C3D9(); return; }
	f__0972_1506_0002_C9BA(); return;
}

/**
 * Decompiled function f__0972_1446_0019_C3D9()
 *
 * @name f__0972_1446_0019_C3D9
 * @implements 0972:1446:0019:C3D9 ()
 *
 * Called From: 0972:1441:000F:5710
 * Called From: 0972:1441:000C:2715
 */
void f__0972_1446_0019_C3D9()
{
	emu_movw(&emu_si, 0x7);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_flags.zf) { f__0972_1469_001A_3E69(); return; }
	emu_movw(&emu_si, 0x7);
	emu_push(emu_cs); emu_push(0x145F); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__0972_145F_0024_B930();
}

/**
 * Decompiled function f__0972_145F_0024_B930()
 *
 * @name f__0972_145F_0024_B930
 * @implements 0972:145F:0024:B930 ()
 *
 */
void f__0972_145F_0024_B930()
{
	emu_andw(&emu_ax, 0x3);
	emu_movw(&emu_dx, emu_si);
	emu_addw(&emu_dx, emu_ax);
	emu_movw(&emu_si, emu_dx);
	emu_decw(&emu_si);
	f__0972_1469_001A_3E69(); return;
}

/**
 * Decompiled function f__0972_1469_001A_3E69()
 *
 * @name f__0972_1469_001A_3E69
 * @implements 0972:1469:001A:3E69 ()
 *
 * Called From: 0972:1455:0019:C3D9
 */
void f__0972_1469_001A_3E69()
{
	emu_movw(&emu_ax, emu_si);
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1483); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	f__0972_1483_0017_52C3();
}

/**
 * Decompiled function f__0972_1483_0017_52C3()
 *
 * @name f__0972_1483_0017_52C3
 * @implements 0972:1483:0017:52C3 ()
 *
 */
void f__0972_1483_0017_52C3()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__0972_14A2_0011_84A2(); return; }
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x8D3F), emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8D3F), 0xFDE8);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x149A; emu_last_cs = 0x0972; emu_last_ip = 0x1493; emu_last_length = 0x0017; emu_last_crc = 0x52C3; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8D3F));
	f__0972_149D_0005_2F01(); return;
}

/**
 * Decompiled function f__0972_149D_0005_2F01()
 *
 * @name f__0972_149D_0005_2F01
 * @implements 0972:149D:0005:2F01 ()
 *
 * Called From: 0972:1498:0017:52C3
 */
void f__0972_149D_0005_2F01()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8D3F), emu_ax);
	f__0972_14B9_000F_377B(); return;
}

/**
 * Decompiled function f__0972_14A2_0011_84A2()
 *
 * @name f__0972_14A2_0011_84A2
 * @implements 0972:14A2:0011:84A2 ()
 *
 * Called From: 0972:1487:0017:52C3
 */
void f__0972_14A2_0011_84A2()
{
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x8D41), emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8D3F), 0xFDE8);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x14B3; emu_last_cs = 0x0972; emu_last_ip = 0x14AC; emu_last_length = 0x0011; emu_last_crc = 0x84A2; emu_call(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8D3F));
	f__0972_14B6_0012_D75E(); return;
}

/**
 * Decompiled function f__0972_14B6_0012_D75E()
 *
 * @name f__0972_14B6_0012_D75E
 * @implements 0972:14B6:0012:D75E ()
 *
 * Called From: 0972:14B1:0011:84A2
 */
void f__0972_14B6_0012_D75E()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x8D41), emu_ax);
	f__0972_14B9_000F_377B(); return;
}

/**
 * Decompiled function f__0972_14B9_000F_377B()
 *
 * @name f__0972_14B9_000F_377B
 * @implements 0972:14B9:000F:377B ()
 *
 * Called From: 0972:14A0:0005:2F01
 */
void f__0972_14B9_000F_377B()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x14C8); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	f__0972_14C8_003E_B41A();
}

/**
 * Decompiled function f__0972_14C8_003E_B41A()
 *
 * @name f__0972_14C8_003E_B41A
 * @implements 0972:14C8:003E:B41A ()
 *
 */
void f__0972_14C8_003E_B41A()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x58));
	emu_subb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x58), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x58));
	emu_movws(&emu_ax, emu_al);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__0972_14F7_000F_98A9(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFEFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x10), 0x6);
	emu_movw(&emu_ax, 0x1);
	f__0972_151F_0005_8BCF(); return;
}

/**
 * Decompiled function f__0972_14F7_000F_98A9()
 *
 * @name f__0972_14F7_000F_98A9
 * @implements 0972:14F7:000F:98A9 ()
 *
 * Called From: 0972:14EC:003E:B41A
 */
void f__0972_14F7_000F_98A9()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x10), 0x6);
	emu_movw(&emu_ax, 0x1);
	f__0972_151F_0005_8BCF(); return;
}

/**
 * Decompiled function f__0972_1504_0002_CCBA()
 *
 * @name f__0972_1504_0002_CCBA
 * @implements 0972:1504:0002:CCBA ()
 *
 * Called From: 0972:151D:0004:9AB9
 * Called From: 0972:151D:0007:8B8C
 */
void f__0972_1504_0002_CCBA()
{
	f__0972_151F_0005_8BCF(); return;
}

/**
 * Decompiled function f__0972_1506_0002_C9BA()
 *
 * @name f__0972_1506_0002_C9BA
 * @implements 0972:1506:0002:C9BA ()
 *
 * Called From: 0972:1443:0009:D10D
 */
void f__0972_1506_0002_C9BA()
{
	f__0972_151B_0004_9AB9(); return;
}

/**
 * Decompiled function f__0972_1508_0010_3DB1()
 *
 * @name f__0972_1508_0010_3DB1
 * @implements 0972:1508:0010:3DB1 ()
 *
 * Called From: 0972:13C1:0015:619A
 */
void f__0972_1508_0010_3DB1()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x1518); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	f__0972_1518_0007_8B8C();
}

/**
 * Decompiled function f__0972_1518_0007_8B8C()
 *
 * @name f__0972_1518_0007_8B8C
 * @implements 0972:1518:0007:8B8C ()
 *
 */
void f__0972_1518_0007_8B8C()
{
	emu_addw(&emu_sp, 0x6);
	f__0972_151B_0004_9AB9(); return;
}

/**
 * Decompiled function f__0972_151B_0004_9AB9()
 *
 * @name f__0972_151B_0004_9AB9
 * @implements 0972:151B:0004:9AB9 ()
 *
 * Called From: 0972:1506:0002:C9BA
 */
void f__0972_151B_0004_9AB9()
{
	emu_xorw(&emu_ax, emu_ax);
	f__0972_1504_0002_CCBA(); return;
}

/**
 * Decompiled function f__0972_151F_0005_8BCF()
 *
 * @name f__0972_151F_0005_8BCF
 * @implements 0972:151F:0005:8BCF ()
 *
 * Called From: 0972:1504:003E:B41A
 * Called From: 0972:1504:0002:CCBA
 * Called From: 0972:1504:000F:98A9
 */
void f__0972_151F_0005_8BCF()
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
 * Decompiled function f__0972_1524_0018_014D()
 *
 * @name f__0972_1524_0018_014D
 * @implements 0972:1524:0018:014D ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_1524_0018_014D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x153C); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__0972_153C_001F_E4E3();
}

/**
 * Decompiled function f__0972_153C_001F_E4E3()
 *
 * @name f__0972_153C_001F_E4E3
 * @implements 0972:153C:001F:E4E3 ()
 *
 */
void f__0972_153C_001F_E4E3()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x3A));
	emu_movw(&emu_dx, 0x12);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x2C64);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_xorw(&emu_si, emu_si);
	f__0972_1589_0014_65FF(); return;
}

/**
 * Decompiled function f__0972_155B_001E_7AB4()
 *
 * @name f__0972_155B_001E_7AB4
 * @implements 0972:155B:001E:7AB4 ()
 *
 * Called From: 0972:1597:0014:65FF
 * Called From: 0972:1597:0018:CD47
 */
void f__0972_155B_001E_7AB4()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1579); emu_cs = 0x0F3F; f__0F3F_009D_0017_8464();
	f__0972_1579_000C_582A();
}

/**
 * Decompiled function f__0972_1579_000C_582A()
 *
 * @name f__0972_1579_000C_582A
 * @implements 0972:1579:000C:582A ()
 *
 */
void f__0972_1579_000C_582A()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1585); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
	f__0972_1585_0018_CD47();
}

/**
 * Decompiled function f__0972_1585_0018_CD47()
 *
 * @name f__0972_1585_0018_CD47
 * @implements 0972:1585:0018:CD47 ()
 *
 */
void f__0972_1585_0018_CD47()
{
	emu_addw(&emu_sp, 0xA);
	emu_incw(&emu_si);
	f__0972_1589_0014_65FF(); return;
}

/**
 * Decompiled function f__0972_1589_0014_65FF()
 *
 * @name f__0972_1589_0014_65FF
 * @implements 0972:1589:0014:65FF ()
 *
 * Called From: 0972:1559:001F:E4E3
 */
void f__0972_1589_0014_65FF()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x3A));
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x2D52), emu_si);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_155B_001E_7AB4(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__0972_159D_0005_8BCF(); return;
}

/**
 * Decompiled function f__0972_159D_0005_8BCF()
 *
 * @name f__0972_159D_0005_8BCF
 * @implements 0972:159D:0005:8BCF ()
 *
 * Called From: 0972:159B:0018:CD47
 */
void f__0972_159D_0005_8BCF()
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
 * Decompiled function f__0972_15A2_0019_AB1E()
 *
 * @name f__0972_15A2_0019_AB1E
 * @implements 0972:15A2:0019:AB1E ()
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_15A2_0019_AB1E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x15BB); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__0972_15BB_0012_FF55();
}

/**
 * Decompiled function f__0972_15BB_0012_FF55()
 *
 * @name f__0972_15BB_0012_FF55
 * @implements 0972:15BB:0012:FF55 ()
 *
 */
void f__0972_15BB_0012_FF55()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x15CD); emu_cs = 0x0C3A; f__0C3A_1002_0013_651A();
	f__0972_15CD_001D_73EF();
}

/**
 * Decompiled function f__0972_15CD_001D_73EF()
 *
 * @name f__0972_15CD_001D_73EF
 * @implements 0972:15CD:001D:73EF ()
 *
 */
void f__0972_15CD_001D_73EF()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x3A));
	emu_movw(&emu_dx, 0x12);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x2C64);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_xorw(&emu_si, emu_si);
	f__0972_16D9_0013_7F00(); return;
}

/**
 * Decompiled function f__0972_15EA_0015_06AF()
 *
 * @name f__0972_15EA_0015_06AF
 * @implements 0972:15EA:0015:06AF ()
 *
 * Called From: 0972:16E9:0013:7F00
 * Called From: 0972:16E9:0014:1F04
 * Called From: 0972:16E9:001D:7CD7
 */
void f__0972_15EA_0015_06AF()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_push(emu_cs); emu_push(0x15FF); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__0972_15FF_000D_2DFE();
}

/**
 * Decompiled function f__0972_15FF_000D_2DFE()
 *
 * @name f__0972_15FF_000D_2DFE
 * @implements 0972:15FF:000D:2DFE ()
 *
 */
void f__0972_15FF_000D_2DFE()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if (emu_flags.cf) { f__0972_160C_0005_517D(); return; }
	f__0972_16D8_0014_1F04(); return;
}

/**
 * Decompiled function f__0972_160C_0005_517D()
 *
 * @name f__0972_160C_0005_517D
 * @implements 0972:160C:0005:517D ()
 *
 * Called From: 0972:1607:000D:2DFE
 */
void f__0972_160C_0005_517D()
{
	emu_push(emu_cs); emu_push(0x1611); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__0972_1611_0009_0491();
}

/**
 * Decompiled function f__0972_1611_0009_0491()
 *
 * @name f__0972_1611_0009_0491
 * @implements 0972:1611:0009:0491 ()
 *
 */
void f__0972_1611_0009_0491()
{
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x161A); emu_cs = 0x0F3F; f__0F3F_009D_0017_8464();
	f__0972_161A_001A_3A56();
}

/**
 * Decompiled function f__0972_161A_001A_3A56()
 *
 * @name f__0972_161A_001A_3A56
 * @implements 0972:161A:001A:3A56 ()
 *
 */
void f__0972_161A_001A_3A56()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1634); emu_cs = 0x1A34; emu_Unit_Create();
	f__0972_1634_0014_31F2();
}

/**
 * Decompiled function f__0972_1634_0014_31F2()
 *
 * @name f__0972_1634_0014_31F2
 * @implements 0972:1634:0014:31F2 ()
 *
 */
void f__0972_1634_0014_31F2()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { f__0972_1648_0005_517D(); return; }
	/* Unresolved jump */ emu_ip = 0x16D8; emu_last_cs = 0x0972; emu_last_ip = 0x1645; emu_last_length = 0x0014; emu_last_crc = 0x31F2; emu_call();
}

/**
 * Decompiled function f__0972_1648_0005_517D()
 *
 * @name f__0972_1648_0005_517D
 * @implements 0972:1648:0005:517D ()
 *
 * Called From: 0972:1643:0014:31F2
 */
void f__0972_1648_0005_517D()
{
	emu_push(emu_cs); emu_push(0x164D); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__0972_164D_0015_7914();
}

/**
 * Decompiled function f__0972_164D_0015_7914()
 *
 * @name f__0972_164D_0015_7914
 * @implements 0972:164D:0015:7914 ()
 *
 */
void f__0972_164D_0015_7914()
{
	emu_orw(&emu_ax, 0x3);
	emu_movw(&emu_di, emu_ax);
	emu_push(emu_di);
	emu_movw(&emu_ax, 0x2D07);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, 0x00, 0x178));
	emu_push(emu_cs); emu_push(0x1662); emu_cs = 0x34C1; ovl__34C1(0);
	f__0972_1662_0028_49BE();
}

/**
 * Decompiled function f__0972_1662_0028_49BE()
 *
 * @name f__0972_1662_0028_49BE
 * @implements 0972:1662:0028:49BE ()
 *
 */
void f__0972_1662_0028_49BE()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_flags.zf) { f__0972_168F_000F_4845(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x168A); emu_cs = 0x176C; f__176C_000E_000E_633D();
	f__0972_168A_0005_A06E();
}

/**
 * Decompiled function f__0972_168A_0005_A06E()
 *
 * @name f__0972_168A_0005_A06E
 * @implements 0972:168A:0005:A06E ()
 *
 */
void f__0972_168A_0005_A06E()
{
	emu_addw(&emu_sp, 0x6);
	f__0972_16D8_0014_1F04(); return;
}

/**
 * Decompiled function f__0972_168F_000F_4845()
 *
 * @name f__0972_168F_000F_4845
 * @implements 0972:168F:000F:4845 ()
 *
 * Called From: 0972:167A:0028:49BE
 */
void f__0972_168F_000F_4845()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x169E); emu_cs = 0x176C; f__176C_000E_000E_633D();
	f__0972_169E_001F_6F53();
}

/**
 * Decompiled function f__0972_169E_001F_6F53()
 *
 * @name f__0972_169E_001F_6F53
 * @implements 0972:169E:001F:6F53 ()
 *
 */
void f__0972_169E_001F_6F53()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x20);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x16BD); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	f__0972_16BD_000A_CB50();
}

/**
 * Decompiled function f__0972_16BD_000A_CB50()
 *
 * @name f__0972_16BD_000A_CB50
 * @implements 0972:16BD:000A:CB50 ()
 *
 */
void f__0972_16BD_000A_CB50()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x16C7); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__0972_16C7_0008_A673();
}

/**
 * Decompiled function f__0972_16C7_0008_A673()
 *
 * @name f__0972_16C7_0008_A673
 * @implements 0972:16C7:0008:A673 ()
 *
 */
void f__0972_16C7_0008_A673()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x16CF); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__0972_16CF_001D_7CD7();
}

/**
 * Decompiled function f__0972_16CF_001D_7CD7()
 *
 * @name f__0972_16CF_001D_7CD7
 * @implements 0972:16CF:001D:7CD7 ()
 *
 */
void f__0972_16CF_001D_7CD7()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x56), emu_ax);
	emu_incw(&emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x3A));
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x2D52), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_16EC_000A_EE18(); return; }
	f__0972_15EA_0015_06AF(); return;
}

/**
 * Decompiled function f__0972_16D8_0014_1F04()
 *
 * @name f__0972_16D8_0014_1F04
 * @implements 0972:16D8:0014:1F04 ()
 *
 * Called From: 0972:1609:000D:2DFE
 * Called From: 0972:168D:0005:A06E
 */
void f__0972_16D8_0014_1F04()
{
	emu_incw(&emu_si);
	f__0972_16D9_0013_7F00(); return;
}

/**
 * Decompiled function f__0972_16D9_0013_7F00()
 *
 * @name f__0972_16D9_0013_7F00
 * @implements 0972:16D9:0013:7F00 ()
 *
 * Called From: 0972:15E7:001D:73EF
 */
void f__0972_16D9_0013_7F00()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x3A));
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x2D52), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_16EC_000A_EE18(); return; }
	f__0972_15EA_0015_06AF(); return;
}

/**
 * Decompiled function f__0972_16EC_000A_EE18()
 *
 * @name f__0972_16EC_000A_EE18
 * @implements 0972:16EC:000A:EE18 ()
 *
 * Called From: 0972:16E7:0014:1F04
 * Called From: 0972:16E7:001D:7CD7
 */
void f__0972_16EC_000A_EE18()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_flags.zf) { f__0972_16F6_0012_F520(); return; }
	/* Unresolved jump */ emu_ip = 0x179B; emu_last_cs = 0x0972; emu_last_ip = 0x16F3; emu_last_length = 0x000A; emu_last_crc = 0xEE18; emu_call();
}

/**
 * Decompiled function f__0972_16F6_0012_F520()
 *
 * @name f__0972_16F6_0012_F520
 * @implements 0972:16F6:0012:F520 ()
 *
 * Called From: 0972:16F1:000A:EE18
 */
void f__0972_16F6_0012_F520()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_flags.zf) { f__0972_1708_0010_9DFE(); return; }
	f__0972_179B_0004_E839(); return;
}

/**
 * Decompiled function f__0972_1708_0010_9DFE()
 *
 * @name f__0972_1708_0010_9DFE
 * @implements 0972:1708:0010:9DFE ()
 *
 * Called From: 0972:1703:0012:F520
 */
void f__0972_1708_0010_9DFE()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x1);
	if (!emu_flags.zf) { f__0972_1745_0009_F63A(); return; }
	emu_movw(&emu_ax, 0x85);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1718); emu_cs = 0x0FCB; emu_ip = 0x005F; emu_last_cs = 0x0972; emu_last_ip = 0x1713; emu_last_length = 0x0010; emu_last_crc = 0x9DFE; emu_call();
	/* Unresolved jump */ emu_ip = 0x1718; emu_last_cs = 0x0972; emu_last_ip = 0x1718; emu_last_length = 0x0010; emu_last_crc = 0x9DFE; emu_call();
}

/**
 * Decompiled function f__0972_1745_0009_F63A()
 *
 * @name f__0972_1745_0009_F63A
 * @implements 0972:1745:0009:F63A ()
 *
 * Called From: 0972:170D:0010:9DFE
 */
void f__0972_1745_0009_F63A()
{
	emu_movw(&emu_ax, 0x85);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x174E); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0972_174E_0010_7163();
}

/**
 * Decompiled function f__0972_174E_0010_7163()
 *
 * @name f__0972_174E_0010_7163
 * @implements 0972:174E:0010:7163 ()
 *
 */
void f__0972_174E_0010_7163()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_cs); emu_push(0x175E); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0972_175E_002A_4005();
}

/**
 * Decompiled function f__0972_175E_002A_4005()
 *
 * @name f__0972_175E_002A_4005
 * @implements 0972:175E:002A:4005 ()
 *
 */
void f__0972_175E_002A_4005()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x1E);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37FA));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3430);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1788); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	f__0972_1788_0010_DEF5();
}

/**
 * Decompiled function f__0972_1788_0010_DEF5()
 *
 * @name f__0972_1788_0010_DEF5
 * @implements 0972:1788:0010:DEF5 ()
 *
 */
void f__0972_1788_0010_DEF5()
{
	emu_addw(&emu_sp, 0x14);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1798); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__0972_1798_0007_F90C();
}

/**
 * Decompiled function f__0972_1798_0007_F90C()
 *
 * @name f__0972_1798_0007_F90C
 * @implements 0972:1798:0007:F90C ()
 *
 */
void f__0972_1798_0007_F90C()
{
	emu_addw(&emu_sp, 0x6);
	f__0972_179B_0004_E839(); return;
}

/**
 * Decompiled function f__0972_179B_0004_E839()
 *
 * @name f__0972_179B_0004_E839
 * @implements 0972:179B:0004:E839 ()
 *
 * Called From: 0972:1705:0012:F520
 */
void f__0972_179B_0004_E839()
{
	emu_xorw(&emu_ax, emu_ax);
	f__0972_179F_0006_F7CE(); return;
}

/**
 * Decompiled function f__0972_179F_0006_F7CE()
 *
 * @name f__0972_179F_0006_F7CE
 * @implements 0972:179F:0006:F7CE ()
 *
 * Called From: 0972:179D:0007:F90C
 * Called From: 0972:179D:0004:E839
 */
void f__0972_179F_0006_F7CE()
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
