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
	emu_subws(&emu_sp, 0x1C);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3420));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x341E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if ((emu_flags.sf != emu_flags.of)) { f__0972_003F_0019_8B3A(); return; }
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_0038_0020_C146(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if ((emu_flags.cf || emu_flags.zf)) { f__0972_003F_0019_8B3A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37AC), 0x0);
	if (emu_flags.zf) { f__0972_0070_0035_11A8(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3C);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0058); emu_cs = 0x07C9; emu_ip = 0x000F; emu_last_cs = 0x0972; emu_last_ip = 0x0053; emu_last_length = 0x0051; emu_last_crc = 0x7645; emu_call();
	f__0972_0058_004D_2870();
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
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37AC), 0x0);
	if (emu_flags.zf) { f__0972_0070_0035_11A8(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3C);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0058); emu_cs = 0x07C9; emu_ip = 0x000F; emu_last_cs = 0x0972; emu_last_ip = 0x0053; emu_last_length = 0x0020; emu_last_crc = 0xC146; emu_call();
	f__0972_0058_004D_2870();
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
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3C);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0058); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	f__0972_0058_004D_2870();
}

/**
 * Decompiled function f__0972_0058_004D_2870()
 *
 * @name f__0972_0058_004D_2870
 * @implements 0972:0058:004D:2870 ()
 *
 * Called From: 0972:0058:0019:8B3A
 */
void f__0972_0058_004D_2870()
{
	emu_addws(&emu_sp, 0x8);
	emu_cwd();
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_adcw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3420), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x341E), emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x341C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x341A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x00BD; emu_last_cs = 0x0972; emu_last_ip = 0x007B; emu_last_length = 0x004D; emu_last_crc = 0x2870; emu_call(); return; }
	if (!emu_flags.zf) { f__0972_0085_0020_DE51(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__0972_00BD_006E_C639(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_00BD_006E_C639(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5460);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1518);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2A30);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x00A5); emu_cs = 0x07C9; emu_ip = 0x000F; emu_last_cs = 0x0972; emu_last_ip = 0x00A0; emu_last_length = 0x004D; emu_last_crc = 0x2870; emu_call();
	f__0972_00A5_0086_1AD2();
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
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x341C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x341A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_00BD_006E_C639(); return; }
	if (!emu_flags.zf) { f__0972_0085_0020_DE51(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__0972_00BD_006E_C639(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_00BD_006E_C639(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5460);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1518);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2A30);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00A5); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	f__0972_00A5_0086_1AD2();
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
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_00BD_006E_C639(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5460);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1518);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2A30);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x00A5); emu_cs = 0x07C9; emu_ip = 0x000F; emu_last_cs = 0x0972; emu_last_ip = 0x00A0; emu_last_length = 0x0020; emu_last_crc = 0xDE51; emu_call();
	f__0972_00A5_0086_1AD2();
}

/**
 * Decompiled function f__0972_00A5_0086_1AD2()
 *
 * @name f__0972_00A5_0086_1AD2
 * @implements 0972:00A5:0086:1AD2 ()
 *
 * Called From: 0972:00A5:0035:11A8
 */
void f__0972_00A5_0086_1AD2()
{
	emu_addws(&emu_sp, 0x8);
	emu_cwd();
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addw(&emu_cx.x, emu_ax.x);
	emu_adcw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x341C), emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x341A), emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3424));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3422));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x00EB; emu_last_cs = 0x0972; emu_last_ip = 0x00C8; emu_last_length = 0x0086; emu_last_crc = 0x1AD2; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00D2; emu_last_cs = 0x0972; emu_last_ip = 0x00CA; emu_last_length = 0x0086; emu_last_crc = 0x1AD2; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__0972_00EB_0040_E14D(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3424), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3422), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3428));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3426));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0119; emu_last_cs = 0x0972; emu_last_ip = 0x00F6; emu_last_length = 0x0086; emu_last_crc = 0x1AD2; emu_call(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0100; emu_last_cs = 0x0972; emu_last_ip = 0x00F8; emu_last_length = 0x0086; emu_last_crc = 0x1AD2; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__0972_0119_0012_F490(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3428), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3426), emu_dx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x012B); emu_cs = 0x1082; emu_ip = 0x00FD; emu_last_cs = 0x0972; emu_last_ip = 0x0126; emu_last_length = 0x0086; emu_last_crc = 0x1AD2; emu_call();
	f__0972_012B_0006_5385();
}

/**
 * Decompiled function f__0972_00BD_006E_C639()
 *
 * @name f__0972_00BD_006E_C639
 * @implements 0972:00BD:006E:C639 ()
 *
 * Called From: 0972:007B:0035:11A8
 * Called From: 0972:0083:0035:11A8
 * Called From: 0972:0083:004D:2870
 * Called From: 0972:008A:0020:DE51
 * Called From: 0972:008A:0035:11A8
 * Called From: 0972:008A:004D:2870
 */
void f__0972_00BD_006E_C639()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3424));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3422));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_00EB_0040_E14D(); return; }
	if (!emu_flags.zf) { f__0972_00D2_0059_A980(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__0972_00EB_0040_E14D(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3424), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3422), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3428));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3426));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_0119_0012_F490(); return; }
	if (!emu_flags.zf) { f__0972_0100_002B_22A3(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__0972_0119_0012_F490(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3428), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3426), emu_dx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x012B); emu_cs = 0x1082; f__1082_00FD_003A_D7E0();
	f__0972_012B_0006_5385();
}

/**
 * Decompiled function f__0972_00D2_0059_A980()
 *
 * @name f__0972_00D2_0059_A980
 * @implements 0972:00D2:0059:A980 ()
 *
 * Called From: 0972:00CA:006E:C639
 */
void f__0972_00D2_0059_A980()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x5);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3424), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3422), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3428));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3426));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x0119; emu_last_cs = 0x0972; emu_last_ip = 0x00F6; emu_last_length = 0x0059; emu_last_crc = 0xA980; emu_call(); return; }
	if (!emu_flags.zf) { f__0972_0100_002B_22A3(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0119; emu_last_cs = 0x0972; emu_last_ip = 0x00FE; emu_last_length = 0x0059; emu_last_crc = 0xA980; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3428), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3426), emu_dx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x012B); emu_cs = 0x1082; emu_ip = 0x00FD; emu_last_cs = 0x0972; emu_last_ip = 0x0126; emu_last_length = 0x0059; emu_last_crc = 0xA980; emu_call();
	f__0972_012B_0006_5385();
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
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3428));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3426));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_0119_0012_F490(); return; }
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0100; emu_last_cs = 0x0972; emu_last_ip = 0x00F8; emu_last_length = 0x0040; emu_last_crc = 0xE14D; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__0972_0119_0012_F490(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3428), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3426), emu_dx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x012B); emu_cs = 0x1082; f__1082_00FD_003A_D7E0();
	f__0972_012B_0006_5385();
}

/**
 * Decompiled function f__0972_0100_002B_22A3()
 *
 * @name f__0972_0100_002B_22A3
 * @implements 0972:0100:002B:22A3 ()
 *
 * Called From: 0972:00F8:0059:A980
 * Called From: 0972:00F8:006E:C639
 */
void f__0972_0100_002B_22A3()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_addws(&emu_dx.x, 0x3C);
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3428), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3426), emu_dx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x012B); emu_cs = 0x1082; f__1082_00FD_003A_D7E0();
	f__0972_012B_0006_5385();
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
 */
void f__0972_0119_0012_F490()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x012B); emu_cs = 0x1082; f__1082_00FD_003A_D7E0();
	f__0972_012B_0006_5385();
}

/**
 * Decompiled function f__0972_012B_0006_5385()
 *
 * @name f__0972_012B_0006_5385
 * @implements 0972:012B:0006:5385 ()
 *
 * Called From: 0972:012B:006E:C639
 * Called From: 0972:012B:0012:F490
 * Called From: 0972:012B:0040:E14D
 * Called From: 0972:012B:002B:22A3
 */
void f__0972_012B_0006_5385()
{
	emu_addws(&emu_sp, 0x8);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7BCE), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7BD0), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3950), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x394E), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0168); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__0972_0168_0012_8AC5();
}

/**
 * Decompiled function f__0972_0168_0012_8AC5()
 *
 * @name f__0972_0168_0012_8AC5
 * @implements 0972:0168:0012:8AC5 ()
 *
 * Called From: 0972:0168:0037:A640
 */
void f__0972_0168_0012_8AC5()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x394C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x394A), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
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
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__0972_01E5_005A_6804(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x2);
	if (!emu_flags.zf) { f__0972_01E5_005A_6804(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x50), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01BB; emu_last_cs = 0x0972; emu_last_ip = 0x0194; emu_last_length = 0x0040; emu_last_crc = 0xF4EB; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x50));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x394C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A3C));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01BB; emu_last_cs = 0x0972; emu_last_ip = 0x01A9; emu_last_length = 0x0040; emu_last_crc = 0xF4EB; emu_call(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01BB; emu_last_cs = 0x0972; emu_last_ip = 0x01AF; emu_last_length = 0x0040; emu_last_crc = 0xF4EB; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
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
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__0972_0242_0009_920A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x400);
	if (emu_flags.zf) { f__0972_0242_0009_920A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x10));
	emu_sarw(&emu_ax.x, 0x1);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_0242_0009_920A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, emu_bx.x,  0x3800));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x400);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x022E; emu_last_cs = 0x0972; emu_last_ip = 0x022B; emu_last_length = 0x005A; emu_last_crc = 0x6804; emu_call(); return; }
	emu_incw(&emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x023F); emu_cs = 0x0C3A; emu_ip = 0x1216; emu_last_cs = 0x0972; emu_last_ip = 0x023A; emu_last_length = 0x005A; emu_last_crc = 0x6804; emu_call();
	/* Unresolved jump */ emu_ip = 0x023F; emu_last_cs = 0x0972; emu_last_ip = 0x023F; emu_last_length = 0x005A; emu_last_crc = 0x6804; emu_call();
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
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
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
 */
void f__0972_024B_000F_7578()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x2);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x025A; emu_last_cs = 0x0972; emu_last_ip = 0x0255; emu_last_length = 0x000F; emu_last_crc = 0x7578; emu_call(); return; }
	f__0972_0306_000F_7770(); return;
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2000);
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
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x0326); emu_cs = 0x34C1; ovl__34C1(2);
	f__0972_0326_0012_74BB();
}

/**
 * Decompiled function f__0972_0326_0012_74BB()
 *
 * @name f__0972_0326_0012_74BB
 * @implements 0972:0326:0012:74BB ()
 *
 * Called From: 0972:0326:0011:1CBD
 */
void f__0972_0326_0012_74BB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x0338); emu_cs = 0x34C1; ovl__34C1(0);
	f__0972_0338_0037_B1C0();
}

/**
 * Decompiled function f__0972_0338_0037_B1C0()
 *
 * @name f__0972_0338_0037_B1C0
 * @implements 0972:0338:0037:B1C0 ()
 *
 * Called From: 0972:0338:0012:74BB
 */
void f__0972_0338_0037_B1C0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_si);
	if (emu_flags.cf) { f__0972_03A6_000D_B949(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__0972_036F_0037_C20A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x3);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x036F; emu_last_cs = 0x0972; emu_last_ip = 0x0362; emu_last_length = 0x0037; emu_last_crc = 0xB1C0; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_addws(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x3);
	/* Unresolved jump */ emu_ip = 0x0378; emu_last_cs = 0x0972; emu_last_ip = 0x036D; emu_last_length = 0x0037; emu_last_crc = 0xB1C0; emu_call();
}

/**
 * Decompiled function f__0972_036F_0037_C20A()
 *
 * @name f__0972_036F_0037_C20A
 * @implements 0972:036F:0037:C20A ()
 *
 * Called From: 0972:035B:0037:B1C0
 */
void f__0972_036F_0037_C20A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_addws(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x5);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_03A4_0002_C53A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x9FFF);
	f__0972_03B0_0003_5F81(); return;
}

/**
 * Decompiled function f__0972_03A4_0002_C53A()
 *
 * @name f__0972_03A4_0002_C53A
 * @implements 0972:03A4:0002:C53A ()
 *
 * Called From: 0972:0388:0037:C20A
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xDFFF);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4000);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x50), 0x0);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x1);
	if (emu_flags.zf) { f__0972_03EC_000F_9EC1(); return; }
	/* Unresolved jump */ emu_ip = 0x0746; emu_last_cs = 0x0972; emu_last_ip = 0x03E9; emu_last_length = 0x000E; emu_last_crc = 0x2D3F; emu_call();
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0420; emu_last_cs = 0x0972; emu_last_ip = 0x0404; emu_last_length = 0x0025; emu_last_crc = 0x521A; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4C));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	f__0972_045E_0017_5C13(); return;
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
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
 */
void f__0972_0475_0015_5CB8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x048A); emu_cs = 0x34C1; ovl__34C1(2);
	f__0972_048A_0026_FEE9();
}

/**
 * Decompiled function f__0972_048A_0026_FEE9()
 *
 * @name f__0972_048A_0026_FEE9
 * @implements 0972:048A:0026:FEE9 ()
 *
 * Called From: 0972:048A:0015:5CB8
 */
void f__0972_048A_0026_FEE9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__0972_04BD_0013_3438(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x5F);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x04B0; emu_last_cs = 0x0972; emu_last_ip = 0x04AA; emu_last_length = 0x0026; emu_last_crc = 0xFEE9; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	/* Unresolved jump */ emu_ip = 0x04BB; emu_last_cs = 0x0972; emu_last_ip = 0x04AE; emu_last_length = 0x0026; emu_last_crc = 0xFEE9; emu_call();
}

/**
 * Decompiled function f__0972_048E_0022_3628()
 *
 * @name f__0972_048E_0022_3628
 * @implements 0972:048E:0022:3628 ()
 *
 * Called From: 0972:0473:0017:5C13
 */
void f__0972_048E_0022_3628()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__0972_04BD_0013_3438(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x5F);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x04B0; emu_last_cs = 0x0972; emu_last_ip = 0x04AA; emu_last_length = 0x0022; emu_last_crc = 0x3628; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_si);
	/* Unresolved jump */ emu_ip = 0x04BB; emu_last_cs = 0x0972; emu_last_ip = 0x04AE; emu_last_length = 0x0022; emu_last_crc = 0x3628; emu_call();
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x18));
	emu_push(emu_cs); emu_push(0x04D0); emu_cs = 0x34C1; ovl__34C1(2);
	f__0972_04D0_0014_1BB6();
}

/**
 * Decompiled function f__0972_04D0_0014_1BB6()
 *
 * @name f__0972_04D0_0014_1BB6
 * @implements 0972:04D0:0014:1BB6 ()
 *
 * Called From: 0972:04D0:0013:3438
 */
void f__0972_04D0_0014_1BB6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
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
 * Called From: 0972:04E4:0014:1BB6
 */
void f__0972_04E4_0020_4CEA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xD);
	if (!emu_flags.zf) { f__0972_050A_0028_2428(); return; }
	emu_movb(&emu_cx.l, 0x2);
	emu_shrw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_cx.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0504; emu_last_cs = 0x0972; emu_last_ip = 0x04FD; emu_last_length = 0x0020; emu_last_crc = 0x4CEA; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	/* Unresolved jump */ emu_ip = 0x0507; emu_last_cs = 0x0972; emu_last_ip = 0x0502; emu_last_length = 0x0020; emu_last_crc = 0x4CEA; emu_call();
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xD);
	if (!emu_flags.zf) { f__0972_050A_0028_2428(); return; }
	emu_movb(&emu_cx.l, 0x2);
	emu_shrw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_cx.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x0504; emu_last_cs = 0x0972; emu_last_ip = 0x04FD; emu_last_length = 0x001B; emu_last_crc = 0xC395; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x52));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_cx.l, 0x8);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_andw(&emu_ax.x, 0xFF);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x52), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x054F); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__0972_054F_001F_939F();
}

/**
 * Decompiled function f__0972_054F_001F_939F()
 *
 * @name f__0972_054F_001F_939F
 * @implements 0972:054F:001F:939F ()
 *
 * Called From: 0972:054F:001D:84CA
 */
void f__0972_054F_001F_939F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_es, emu_dx.x);
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x50), emu_si);
	if (emu_flags.cf) { f__0972_056E_0018_A8ED(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0x50), emu_si);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x50), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x50), 0x0);
	if (emu_flags.zf) { f__0972_0586_001B_DC71(); return; }
	/* Unresolved jump */ emu_ip = 0x0714; emu_last_cs = 0x0972; emu_last_ip = 0x0583; emu_last_length = 0x0018; emu_last_crc = 0xA8ED; emu_call();
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x50), 0x0);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x52), 0x0);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_cs); emu_push(0x05A1); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	f__0972_05A1_0015_71F0();
}

/**
 * Decompiled function f__0972_05A1_0015_71F0()
 *
 * @name f__0972_05A1_0015_71F0
 * @implements 0972:05A1:0015:71F0 ()
 *
 * Called From: 0972:05A1:001B:DC71
 */
void f__0972_05A1_0015_71F0()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__0972_05B6_002B_35CA(); return; }
	/* Unresolved jump */ emu_ip = 0x0636; emu_last_cs = 0x0972; emu_last_ip = 0x05B3; emu_last_length = 0x0015; emu_last_crc = 0x71F0; emu_call();
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xA);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0633; emu_last_cs = 0x0972; emu_last_ip = 0x05BF; emu_last_length = 0x002B; emu_last_crc = 0x35CA; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x7);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0633; emu_last_cs = 0x0972; emu_last_ip = 0x05CA; emu_last_length = 0x002B; emu_last_crc = 0x35CA; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, 0x5);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05E6; emu_last_cs = 0x0972; emu_last_ip = 0x05D8; emu_last_length = 0x002B; emu_last_crc = 0x35CA; emu_call(); return; }
	emu_cmpw(&emu_ax.x, 0x8);
	if (emu_flags.zf) { f__0972_05E1_0005_E0CA(); return; }
	/* Unresolved jump */ emu_ip = 0x05EB; emu_last_cs = 0x0972; emu_last_ip = 0x05DF; emu_last_length = 0x002B; emu_last_crc = 0x35CA; emu_call();
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
 * Decompiled function f__0972_05F0_0006_6F66()
 *
 * @name f__0972_05F0_0006_6F66
 * @implements 0972:05F0:0006:6F66 ()
 *
 * Called From: 0972:05E4:0005:E0CA
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
 * Called From: 0972:05F6:0006:6F66
 */
void f__0972_05F6_000F_119B()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_push(emu_cs); emu_push(0x0605); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0972_0605_0012_6987();
}

/**
 * Decompiled function f__0972_0605_0012_6987()
 *
 * @name f__0972_0605_0012_6987
 * @implements 0972:0605:0012:6987 ()
 *
 * Called From: 0972:0605:000F:119B
 */
void f__0972_0605_0012_6987()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x342A);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0617); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	f__0972_0617_0010_DEE5();
}

/**
 * Decompiled function f__0972_0617_0010_DEE5()
 *
 * @name f__0972_0617_0010_DEE5
 * @implements 0972:0617:0010:DEE5 ()
 *
 * Called From: 0972:0617:0012:6987
 */
void f__0972_0617_0010_DEE5()
{
	emu_addws(&emu_sp, 0x10);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0627); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__0972_0627_000B_5D60();
}

/**
 * Decompiled function f__0972_0627_000B_5D60()
 *
 * @name f__0972_0627_000B_5D60
 * @implements 0972:0627:000B:5D60 ()
 *
 * Called From: 0972:0627:0010:DEE5
 */
void f__0972_0627_000B_5D60()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0632); emu_cs = 0x3483; ovl__3483(2);
	f__0972_0632_0004_0D12();
}

/**
 * Decompiled function f__0972_0632_0004_0D12()
 *
 * @name f__0972_0632_0004_0D12
 * @implements 0972:0632:0004:0D12 ()
 *
 * Called From: 0972:0632:000B:5D60
 */
void f__0972_0632_0004_0D12()
{
	emu_pop(&emu_cx.x);
	f__0972_0714_0002_D83A(); return;
}

/**
 * Decompiled function f__0972_0714_0002_D83A()
 *
 * @name f__0972_0714_0002_D83A
 * @implements 0972:0714:0002:D83A ()
 *
 * Called From: 0972:0583:000E:2802
 * Called From: 0972:0633:0004:0D12
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0746; emu_last_cs = 0x0972; emu_last_ip = 0x0723; emu_last_length = 0x0025; emu_last_crc = 0x6D67; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4000);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x84);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x073B); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0972_073B_0008_A466();
}

/**
 * Decompiled function f__0972_073B_0008_A466()
 *
 * @name f__0972_073B_0008_A466
 * @implements 0972:073B:0008:A466 ()
 *
 * Called From: 0972:073B:0025:6D67
 */
void f__0972_073B_0008_A466()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0743); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__0972_0743_0011_51C8();
}

/**
 * Decompiled function f__0972_0743_0011_51C8()
 *
 * @name f__0972_0743_0011_51C8
 * @implements 0972:0743:0011:51C8 ()
 *
 * Called From: 0972:0743:0008:A466
 */
void f__0972_0743_0011_51C8()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xD);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0754; emu_last_cs = 0x0972; emu_last_ip = 0x074F; emu_last_length = 0x0011; emu_last_crc = 0x51C8; emu_call(); return; }
	f__0972_0874_000F_CCB9(); return;
}

/**
 * Decompiled function f__0972_0746_000E_1C8C()
 *
 * @name f__0972_0746_000E_1C8C
 * @implements 0972:0746:000E:1C8C ()
 *
 * Called From: 0972:03BF:000F:76FF
 * Called From: 0972:03CD:000E:2934
 * Called From: 0972:0714:0002:D83A
 */
void f__0972_0746_000E_1C8C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xD);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0754; emu_last_cs = 0x0972; emu_last_ip = 0x074F; emu_last_length = 0x000E; emu_last_crc = 0x1C8C; emu_call(); return; }
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
 */
void f__0972_0874_000F_CCB9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08A4; emu_last_cs = 0x0972; emu_last_ip = 0x089F; emu_last_length = 0x0012; emu_last_crc = 0x3529; emu_call(); return; }
	f__0972_0938_0009_11BD(); return;
}

/**
 * Decompiled function f__0972_0938_0009_11BD()
 *
 * @name f__0972_0938_0009_11BD
 * @implements 0972:0938:0009:11BD ()
 *
 * Called From: 0972:0248:0009:920A
 * Called From: 0972:03B0:0003:5F81
 * Called From: 0972:03B0:000D:B949
 * Called From: 0972:0880:000F:CCB9
 * Called From: 0972:088F:000F:F77A
 * Called From: 0972:08A1:0012:3529
 */
void f__0972_0938_0009_11BD()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
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
 */
void f__0972_0941_000E_E81A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x0);
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
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x095F); emu_cs = 0x15C2; f__15C2_0526_000F_EA1E();
	f__0972_095F_0009_7794();
}

/**
 * Decompiled function f__0972_095F_0009_7794()
 *
 * @name f__0972_095F_0009_7794
 * @implements 0972:095F:0009:7794 ()
 *
 * Called From: 0972:095F:0010:E581
 */
void f__0972_095F_0009_7794()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0972_0968_005A_5668(); return; }
	/* Unresolved jump */ emu_ip = 0x09FE; emu_last_cs = 0x0972; emu_last_ip = 0x0965; emu_last_length = 0x0009; emu_last_crc = 0x7794; emu_call();
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x9);
	if (!emu_flags.zf) { f__0972_097B_0047_4D03(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x37A4));
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x37A4));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { f__0972_09B2_0010_1586(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37A4), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x37A2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1D));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0xF);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x37A8));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x09B2; emu_last_cs = 0x0972; emu_last_ip = 0x099E; emu_last_length = 0x005A; emu_last_crc = 0x5668; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1D));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0xF);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37A8), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x09C2); emu_cs = 0x15C2; emu_ip = 0x0559; emu_last_cs = 0x0972; emu_last_ip = 0x09BD; emu_last_length = 0x005A; emu_last_crc = 0x5668; emu_call();
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
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { f__0972_09B2_0010_1586(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37A4), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x37A2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1D));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0xF);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x37A8));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x09B2; emu_last_cs = 0x0972; emu_last_ip = 0x099E; emu_last_length = 0x0047; emu_last_crc = 0x4D03; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1D));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0xF);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37A8), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x09C2); emu_cs = 0x15C2; emu_ip = 0x0559; emu_last_cs = 0x0972; emu_last_ip = 0x09BD; emu_last_length = 0x0047; emu_last_crc = 0x4D03; emu_call();
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
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09C2); emu_cs = 0x15C2; f__15C2_0559_0015_E98A();
	f__0972_09C2_0009_F797();
}

/**
 * Decompiled function f__0972_09C2_0009_F797()
 *
 * @name f__0972_09C2_0009_F797
 * @implements 0972:09C2:0009:F797 ()
 *
 * Called From: 0972:09C2:0010:1586
 */
void f__0972_09C2_0009_F797()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0972_09CB_0010_1586(); return; }
	/* Unresolved jump */ emu_ip = 0x0A63; emu_last_cs = 0x0972; emu_last_ip = 0x09C8; emu_last_length = 0x0009; emu_last_crc = 0xF797; emu_call();
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
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09DB); emu_cs = 0x15C2; f__15C2_0559_0015_E98A();
	f__0972_09DB_0009_37AE();
}

/**
 * Decompiled function f__0972_09DB_0009_37AE()
 *
 * @name f__0972_09DB_0009_37AE
 * @implements 0972:09DB:0009:37AE ()
 *
 * Called From: 0972:09DB:0010:1586
 */
void f__0972_09DB_0009_37AE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
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
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09F4); emu_cs = 0x15C2; f__15C2_0559_0015_E98A();
	f__0972_09F4_0008_D04F();
}

/**
 * Decompiled function f__0972_09F4_0008_D04F()
 *
 * @name f__0972_09F4_0008_D04F
 * @implements 0972:09F4:0008:D04F ()
 *
 * Called From: 0972:09F4:0010:1586
 */
void f__0972_09F4_0008_D04F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A4E); emu_cs = 0x1082; f__1082_013D_0038_4AF1();
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
 * Called From: 0972:0A3A:0002:C43A
 */
void f__0972_0A44_000A_DEF0()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A4E); emu_cs = 0x1082; f__1082_013D_0038_4AF1();
	f__0972_0A4E_0015_9677();
}

/**
 * Decompiled function f__0972_0A4E_0015_9677()
 *
 * @name f__0972_0A4E_0015_9677
 * @implements 0972:0A4E:0015:9677 ()
 *
 * Called From: 0972:0A4E:000A:DEF0
 * Called From: 0972:0A4E:0012:2599
 */
void f__0972_0A4E_0015_9677()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7BCA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7BCC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	if (emu_flags.zf) { f__0972_0A63_0006_F7CE(); return; }
	f__0972_0131_0037_A640(); return;
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
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7BCA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7BCC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	if (emu_flags.zf) { f__0972_0A63_0006_F7CE(); return; }
	f__0972_0131_0037_A640(); return;
}

/**
 * Decompiled function f__0972_0A63_0006_F7CE()
 *
 * @name f__0972_0A63_0006_F7CE
 * @implements 0972:0A63:0006:F7CE ()
 *
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x54));
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
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x0A98); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__0972_0A98_0012_C6CB();
}

/**
 * Decompiled function f__0972_0A98_0012_C6CB()
 *
 * @name f__0972_0A98_0012_C6CB
 * @implements 0972:0A98:0012:C6CB ()
 *
 * Called From: 0972:0A98:0017:2EC7
 */
void f__0972_0A98_0012_C6CB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x0AAA); emu_cs = 0x0C10; f__0C10_0168_0014_CEB0();
	f__0972_0AAA_000A_8B0A();
}

/**
 * Decompiled function f__0972_0AAA_000A_8B0A()
 *
 * @name f__0972_0AAA_000A_8B0A
 * @implements 0972:0AAA:000A:8B0A ()
 *
 * Called From: 0972:0AAA:0012:C6CB
 */
void f__0972_0AAA_000A_8B0A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
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
 * Called From: 0972:0AB4:000A:8B0A
 */
void f__0972_0AB4_0012_B5DA()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
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
 * Called From: 0972:0AC6:0012:B5DA
 */
void f__0972_0AC6_0011_6245()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__0972_0AD7_000B_D0F3(); return; }
	emu_movw(&emu_ax.x, emu_si);
	/* Unresolved jump */ emu_ip = 0x0AF7; emu_last_cs = 0x0972; emu_last_ip = 0x0AD5; emu_last_length = 0x0011; emu_last_crc = 0x6245; emu_call();
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
 * Called From: 0972:0AE2:000B:D0F3
 */
void f__0972_0AE2_000F_3656()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x0AF1); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	f__0972_0AF1_0006_E1F0();
}

/**
 * Decompiled function f__0972_0AF1_0006_E1F0()
 *
 * @name f__0972_0AF1_0006_E1F0
 * @implements 0972:0AF1:0006:E1F0 ()
 *
 * Called From: 0972:0AF1:000F:3656
 */
void f__0972_0AF1_0006_E1F0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0972_0AD5_0002_D03A(); return;
}

/**
 * Decompiled function f__0972_0AF7_0005_8BCF()
 *
 * @name f__0972_0AF7_0005_8BCF
 * @implements 0972:0AF7:0005:8BCF ()
 *
 * Called From: 0972:0AD5:0002:D03A
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
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x2);
	if (emu_flags.zf) { f__0972_0B12_000E_738D(); return; }
	/* Unresolved jump */ emu_ip = 0x0BFC; emu_last_cs = 0x0972; emu_last_ip = 0x0B0F; emu_last_length = 0x0016; emu_last_crc = 0x0DC9; emu_call();
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_cs); emu_push(0x0B46); emu_cs = 0x0C3A; f__0C3A_247A_0015_EA04();
	f__0972_0B46_0012_0F5D();
}

/**
 * Decompiled function f__0972_0B46_0012_0F5D()
 *
 * @name f__0972_0B46_0012_0F5D
 * @implements 0972:0B46:0012:0F5D ()
 *
 * Called From: 0972:0B46:0026:CA0B
 */
void f__0972_0B46_0012_0F5D()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x0B58); emu_cs = 0x1A34; f__1A34_3491_0032_AFF8();
	f__0972_0B58_003E_7C5A();
}

/**
 * Decompiled function f__0972_0B58_003E_7C5A()
 *
 * @name f__0972_0B58_003E_7C5A
 * @implements 0972:0B58:003E:7C5A ()
 *
 * Called From: 0972:0B58:0012:0F5D
 */
void f__0972_0B58_003E_7C5A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B96; emu_last_cs = 0x0972; emu_last_ip = 0x0B6D; emu_last_length = 0x003E; emu_last_crc = 0x7C5A; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B96; emu_last_cs = 0x0972; emu_last_ip = 0x0B75; emu_last_length = 0x003E; emu_last_crc = 0x7C5A; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B96; emu_last_cs = 0x0972; emu_last_ip = 0x0B7F; emu_last_length = 0x003E; emu_last_crc = 0x7C5A; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x5A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x5C));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B96; emu_last_cs = 0x0972; emu_last_ip = 0x0B8C; emu_last_length = 0x003E; emu_last_crc = 0x7C5A; emu_call(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0B96; emu_last_cs = 0x0972; emu_last_ip = 0x0B90; emu_last_length = 0x003E; emu_last_crc = 0x7C5A; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0972_0BFE_0006_F7CE(); return;
}

/**
 * Decompiled function f__0972_0BFE_0006_F7CE()
 *
 * @name f__0972_0BFE_0006_F7CE
 * @implements 0972:0BFE:0006:F7CE ()
 *
 * Called From: 0972:0B94:003E:7C5A
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_cmpws(&emu_si, 0xFE);
	if (!emu_flags.zf) { f__0972_0C42_000E_BD9B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (emu_flags.zf) { f__0972_0C40_0010_51A9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x50), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0C3B; emu_last_cs = 0x0972; emu_last_ip = 0x0C34; emu_last_length = 0x0037; emu_last_crc = 0xB310; emu_call(); return; }
	emu_movw(&emu_si, 0x1);
	/* Unresolved jump */ emu_ip = 0x0C3E; emu_last_cs = 0x0972; emu_last_ip = 0x0C39; emu_last_length = 0x0037; emu_last_crc = 0xB310; emu_call();
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
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_cs); emu_push(0x0C50); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	f__0972_0C50_0007_F90C();
}

/**
 * Decompiled function f__0972_0C42_000E_BD9B()
 *
 * @name f__0972_0C42_000E_BD9B
 * @implements 0972:0C42:000E:BD9B ()
 *
 * Called From: 0972:0C1E:0037:B310
 */
void f__0972_0C42_000E_BD9B()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_cs); emu_push(0x0C50); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	f__0972_0C50_0007_F90C();
}

/**
 * Decompiled function f__0972_0C50_0007_F90C()
 *
 * @name f__0972_0C50_0007_F90C
 * @implements 0972:0C50:0007:F90C ()
 *
 * Called From: 0972:0C50:000E:BD9B
 * Called From: 0972:0C50:0010:51A9
 */
void f__0972_0C50_0007_F90C()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
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
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { f__0972_0C6F_000D_A320(); return; }
	/* Unresolved jump */ emu_ip = 0x0E7D; emu_last_cs = 0x0972; emu_last_ip = 0x0C6C; emu_last_length = 0x0015; emu_last_crc = 0xE00A; emu_call();
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
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_cs); emu_push(0x0C7C); emu_cs = 0x1A34; f__1A34_3491_0032_AFF8();
	f__0972_0C7C_0027_52E8();
}

/**
 * Decompiled function f__0972_0C7C_0027_52E8()
 *
 * @name f__0972_0C7C_0027_52E8
 * @implements 0972:0C7C:0027:52E8 ()
 *
 * Called From: 0972:0C7C:000D:A320
 */
void f__0972_0C7C_0027_52E8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
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
 */
void f__0972_0D21_0006_3DBC()
{
	emu_movw(&emu_ax.x, 0x1);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0D36; emu_last_cs = 0x0972; emu_last_ip = 0x0D2F; emu_last_length = 0x000F; emu_last_crc = 0xA4DF; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x1);
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
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_cs); emu_push(0x0D46); emu_cs = 0x0C3A; f__0C3A_247A_0015_EA04();
	f__0972_0D46_000C_CFFA();
}

/**
 * Decompiled function f__0972_0D46_000C_CFFA()
 *
 * @name f__0972_0D46_000C_CFFA
 * @implements 0972:0D46:000C:CFFA ()
 *
 * Called From: 0972:0D46:000E:9B6D
 */
void f__0972_0D46_000C_CFFA()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__0972_0D52_0015_DD16(); return; }
	/* Unresolved jump */ emu_ip = 0x0E7D; emu_last_cs = 0x0972; emu_last_ip = 0x0D4F; emu_last_length = 0x000C; emu_last_crc = 0xCFFA; emu_call();
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
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
 * Called From: 0972:0D67:0015:DD16
 */
void f__0972_0D67_0008_8ABD()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D6F); emu_cs = 0x0F3F; f__0F3F_0275_0019_64C3();
	f__0972_0D6F_000F_5891();
}

/**
 * Decompiled function f__0972_0D6F_000F_5891()
 *
 * @name f__0972_0D6F_000F_5891
 * @implements 0972:0D6F:000F:5891 ()
 *
 * Called From: 0972:0D6F:0008:8ABD
 */
void f__0972_0D6F_000F_5891()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
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
 * Called From: 0972:0D7E:000F:5891
 */
void f__0972_0D7E_000A_4602()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0DC2); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	f__0972_0DC2_0012_86B3();
}

/**
 * Decompiled function f__0972_0DC2_0012_86B3()
 *
 * @name f__0972_0DC2_0012_86B3
 * @implements 0972:0DC2:0012:86B3 ()
 *
 * Called From: 0972:0DC2:003A:00C4
 */
void f__0972_0DC2_0012_86B3()
{
	emu_addws(&emu_sp, 0x8);
	emu_andw(&emu_ax.x, 0xE0);
	emu_push(emu_ax.x);
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
 * Called From: 0972:0DD4:0012:86B3
 */
void f__0972_0DD4_0020_86C2()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
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
 * Called From: 0972:0DF4:0020:86C2
 */
void f__0972_0DF4_001E_8A47()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E14; emu_last_cs = 0x0972; emu_last_ip = 0x0E03; emu_last_length = 0x001E; emu_last_crc = 0x8A47; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x6A);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E12); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
	f__0972_0E12_001D_966A();
}

/**
 * Decompiled function f__0972_0E12_001D_966A()
 *
 * @name f__0972_0E12_001D_966A
 * @implements 0972:0E12:001D:966A ()
 *
 * Called From: 0972:0E12:001E:8A47
 */
void f__0972_0E12_001D_966A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E32; emu_last_cs = 0x0972; emu_last_ip = 0x0E1D; emu_last_length = 0x001D; emu_last_crc = 0x966A; emu_call(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_cs); emu_push(0x0E2F); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	f__0972_0E2F_0010_0DA8();
}

/**
 * Decompiled function f__0972_0E2F_0010_0DA8()
 *
 * @name f__0972_0E2F_0010_0DA8
 * @implements 0972:0E2F:0010:0DA8 ()
 *
 * Called From: 0972:0E2F:001D:966A
 */
void f__0972_0E2F_0010_0DA8()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x0E3F); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	f__0972_0E3F_002E_C784();
}

/**
 * Decompiled function f__0972_0E3F_002E_C784()
 *
 * @name f__0972_0E3F_002E_C784
 * @implements 0972:0E3F:002E:C784 ()
 *
 * Called From: 0972:0E3F:0010:0DA8
 */
void f__0972_0E3F_002E_C784()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E7A; emu_last_cs = 0x0972; emu_last_ip = 0x0E4E; emu_last_length = 0x002E; emu_last_crc = 0xC784; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xD);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E7A; emu_last_cs = 0x0972; emu_last_ip = 0x0E59; emu_last_length = 0x002E; emu_last_crc = 0xC784; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E6D; emu_last_cs = 0x0972; emu_last_ip = 0x0E63; emu_last_length = 0x002E; emu_last_crc = 0xC784; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_addw(&emu_ax.x, 0x44);
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
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E79); emu_cs = 0x3483; ovl__3483(2);
	f__0972_0E79_0004_F20C();
}

/**
 * Decompiled function f__0972_0E79_0004_F20C()
 *
 * @name f__0972_0E79_0004_F20C
 * @implements 0972:0E79:0004:F20C ()
 *
 * Called From: 0972:0E79:0006:3EF3
 */
void f__0972_0E79_0004_F20C()
{
	emu_pop(&emu_cx.x);
	f__0972_0D21_0006_3DBC(); return;
}

/**
 * Decompiled function f__0972_0E82_0005_8BCF()
 *
 * @name f__0972_0E82_0005_8BCF
 * @implements 0972:0E82:0005:8BCF ()
 *
 * Called From: 0972:0D24:0006:3DBC
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x13A9; emu_last_cs = 0x0972; emu_last_ip = 0x138B; emu_last_length = 0x002B; emu_last_crc = 0xA9E3; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x13A6); emu_cs = 0x34CD; ovl__34CD(31);
	f__0972_13A6_0007_F90C();
}

/**
 * Decompiled function f__0972_13A6_0007_F90C()
 *
 * @name f__0972_13A6_0007_F90C
 * @implements 0972:13A6:0007:F90C ()
 *
 * Called From: 0972:13A6:002B:A9E3
 */
void f__0972_13A6_0007_F90C()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0972_13AD_0002_2597(); return;
}

/**
 * Decompiled function f__0972_13AD_0002_2597()
 *
 * @name f__0972_13AD_0002_2597
 * @implements 0972:13AD:0002:2597 ()
 *
 * Called From: 0972:13AB:0007:F90C
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
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { f__0972_13C4_000F_D368(); return; }
	/* Unresolved jump */ emu_ip = 0x1508; emu_last_cs = 0x0972; emu_last_ip = 0x13C1; emu_last_length = 0x0015; emu_last_crc = 0x619A; emu_call();
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x13D3); emu_cs = 0x0FE4; f__0FE4_05FD_002C_15BA();
	f__0972_13D3_001C_1549();
}

/**
 * Decompiled function f__0972_13D3_001C_1549()
 *
 * @name f__0972_13D3_001C_1549
 * @implements 0972:13D3:001C:1549 ()
 *
 * Called From: 0972:13D3:000F:D368
 */
void f__0972_13D3_001C_1549()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x13EF); emu_cs = 0x34C1; ovl__34C1(2);
	f__0972_13EF_0011_0306();
}

/**
 * Decompiled function f__0972_13EF_0011_0306()
 *
 * @name f__0972_13EF_0011_0306
 * @implements 0972:13EF:0011:0306 ()
 *
 * Called From: 0972:13EF:001C:1549
 */
void f__0972_13EF_0011_0306()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1400); emu_cs = 0x34C1; ovl__34C1(0);
	f__0972_1400_0017_1CE2();
}

/**
 * Decompiled function f__0972_1400_0017_1CE2()
 *
 * @name f__0972_1400_0017_1CE2
 * @implements 0972:1400:0017:1CE2 ()
 *
 * Called From: 0972:1400:0011:0306
 */
void f__0972_1400_0017_1CE2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x58));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.cf || emu_flags.zf)) { f__0972_1417_0020_E839(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x58));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), 0x0);
	if (emu_flags.zf) { f__0972_143D_0009_D10D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { f__0972_1437_000F_5710(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
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
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x143D; emu_last_cs = 0x0972; emu_last_ip = 0x142A; emu_last_length = 0x0018; emu_last_crc = 0x99E8; emu_call(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { /* Unresolved jump */ emu_ip = 0x1437; emu_last_cs = 0x0972; emu_last_ip = 0x1430; emu_last_length = 0x0018; emu_last_crc = 0x99E8; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__0972_143A_000C_2715(); return;
}

/**
 * Decompiled function f__0972_1437_000F_5710()
 *
 * @name f__0972_1437_000F_5710
 * @implements 0972:1437:000F:5710 ()
 *
 * Called From: 0972:1430:0020:E839
 */
void f__0972_1437_000F_5710()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0972_1446_0019_C3D9(); return; }
	/* Unresolved jump */ emu_ip = 0x1506; emu_last_cs = 0x0972; emu_last_ip = 0x1443; emu_last_length = 0x000F; emu_last_crc = 0x5710; emu_call();
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
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0972_1446_0019_C3D9(); return; }
	/* Unresolved jump */ emu_ip = 0x1506; emu_last_cs = 0x0972; emu_last_ip = 0x1443; emu_last_length = 0x000C; emu_last_crc = 0x2715; emu_call();
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
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1446; emu_last_cs = 0x0972; emu_last_ip = 0x1441; emu_last_length = 0x0009; emu_last_crc = 0xD10D; emu_call(); return; }
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__0972_1469_001A_3E69(); return; }
	emu_movw(&emu_si, 0x7);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x145F); emu_cs = 0x2BB4; emu_ip = 0x0004; emu_last_cs = 0x0972; emu_last_ip = 0x145A; emu_last_length = 0x0019; emu_last_crc = 0xC3D9; emu_call();
	/* Unresolved jump */ emu_ip = 0x145F; emu_last_cs = 0x0972; emu_last_ip = 0x145F; emu_last_length = 0x0019; emu_last_crc = 0xC3D9; emu_call();
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
	emu_movw(&emu_ax.x, emu_si);
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1483); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	f__0972_1483_0017_52C3();
}

/**
 * Decompiled function f__0972_1483_0017_52C3()
 *
 * @name f__0972_1483_0017_52C3
 * @implements 0972:1483:0017:52C3 ()
 *
 * Called From: 0972:1483:001A:3E69
 */
void f__0972_1483_0017_52C3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x14A2; emu_last_cs = 0x0972; emu_last_ip = 0x1487; emu_last_length = 0x0017; emu_last_crc = 0x52C3; emu_call(); return; }
	emu_addw(&emu_get_memory16(emu_ds, 0x00, -0x72C1), emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, -0x72C1), 0xFDE8);
	if (!emu_flags.cf) { /* Unresolved jump */ emu_ip = 0x149A; emu_last_cs = 0x0972; emu_last_ip = 0x1493; emu_last_length = 0x0017; emu_last_crc = 0x52C3; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x72C1));
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
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x72C1), emu_ax.x);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x14C8); emu_cs = 0x10BE; f__10BE_01AB_002F_0E7B();
	f__0972_14C8_003E_B41A();
}

/**
 * Decompiled function f__0972_14C8_003E_B41A()
 *
 * @name f__0972_14C8_003E_B41A
 * @implements 0972:14C8:003E:B41A ()
 *
 * Called From: 0972:14C8:000F:377B
 */
void f__0972_14C8_003E_B41A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_addw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x58));
	emu_subb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x58));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0972_14F7_000F_98A9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFEFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x6);
	emu_movw(&emu_ax.x, 0x1);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__0972_151F_0005_8BCF(); return;
}

/**
 * Decompiled function f__0972_1504_0002_CCBA()
 *
 * @name f__0972_1504_0002_CCBA
 * @implements 0972:1504:0002:CCBA ()
 *
 * Called From: 0972:151D:0004:9AB9
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
 * Decompiled function f__0972_151B_0004_9AB9()
 *
 * @name f__0972_151B_0004_9AB9
 * @implements 0972:151B:0004:9AB9 ()
 *
 * Called From: 0972:1506:0002:C9BA
 */
void f__0972_151B_0004_9AB9()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
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
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x153C); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__0972_153C_001F_E4E3();
}

/**
 * Decompiled function f__0972_153C_001F_E4E3()
 *
 * @name f__0972_153C_001F_E4E3
 * @implements 0972:153C:001F:E4E3 ()
 *
 * Called From: 0972:153C:0018:014D
 */
void f__0972_153C_001F_E4E3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_movw(&emu_dx.x, 0x12);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x2C64);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
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
 * Called From: 0972:1579:001E:7AB4
 */
void f__0972_1579_000C_582A()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1585); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
	f__0972_1585_0018_CD47();
}

/**
 * Decompiled function f__0972_1585_0018_CD47()
 *
 * @name f__0972_1585_0018_CD47
 * @implements 0972:1585:0018:CD47 ()
 *
 * Called From: 0972:1585:000C:582A
 */
void f__0972_1585_0018_CD47()
{
	emu_addws(&emu_sp, 0xA);
	emu_incw(&emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2D52), emu_si);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_155B_001E_7AB4(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0972_159D_0005_8BCF(); return;
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2D52), emu_si);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_155B_001E_7AB4(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x159D; emu_last_cs = 0x0972; emu_last_ip = 0x159B; emu_last_length = 0x0014; emu_last_crc = 0x65FF; emu_call();
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
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x15BB); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__0972_15BB_0012_FF55();
}

/**
 * Decompiled function f__0972_15BB_0012_FF55()
 *
 * @name f__0972_15BB_0012_FF55
 * @implements 0972:15BB:0012:FF55 ()
 *
 * Called From: 0972:15BB:0019:AB1E
 */
void f__0972_15BB_0012_FF55()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_cs); emu_push(0x15CD); emu_cs = 0x0C3A; f__0C3A_1002_0013_651A();
	f__0972_15CD_001D_73EF();
}

/**
 * Decompiled function f__0972_15CD_001D_73EF()
 *
 * @name f__0972_15CD_001D_73EF
 * @implements 0972:15CD:001D:73EF ()
 *
 * Called From: 0972:15CD:0012:FF55
 */
void f__0972_15CD_001D_73EF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_movw(&emu_dx.x, 0x12);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x2C64);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_push(emu_cs); emu_push(0x15FF); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	f__0972_15FF_000D_2DFE();
}

/**
 * Decompiled function f__0972_15FF_000D_2DFE()
 *
 * @name f__0972_15FF_000D_2DFE
 * @implements 0972:15FF:000D:2DFE ()
 *
 * Called From: 0972:15FF:0015:06AF
 */
void f__0972_15FF_000D_2DFE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
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
 * Called From: 0972:1611:0005:517D
 */
void f__0972_1611_0009_0491()
{
	emu_push(emu_ax.x);
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
 * Called From: 0972:161A:0009:0491
 */
void f__0972_161A_001A_3A56()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1634); emu_cs = 0x1A34; f__1A34_08FB_002C_D192();
	f__0972_1634_0014_31F2();
}

/**
 * Decompiled function f__0972_1634_0014_31F2()
 *
 * @name f__0972_1634_0014_31F2
 * @implements 0972:1634:0014:31F2 ()
 *
 * Called From: 0972:1634:001A:3A56
 */
void f__0972_1634_0014_31F2()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
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
 * Called From: 0972:164D:0005:517D
 */
void f__0972_164D_0015_7914()
{
	emu_orw(&emu_ax.x, 0x3);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0x2D07);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x178));
	emu_push(emu_cs); emu_push(0x1662); emu_cs = 0x34C1; ovl__34C1(0);
	f__0972_1662_0028_49BE();
}

/**
 * Decompiled function f__0972_1662_0028_49BE()
 *
 * @name f__0972_1662_0028_49BE
 * @implements 0972:1662:0028:49BE ()
 *
 * Called From: 0972:1662:0015:7914
 */
void f__0972_1662_0028_49BE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__0972_168F_000F_4845(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x168A); emu_cs = 0x176C; emu_ip = 0x000E; emu_last_cs = 0x0972; emu_last_ip = 0x1685; emu_last_length = 0x0028; emu_last_crc = 0x49BE; emu_call();
	/* Unresolved jump */ emu_ip = 0x168A; emu_last_cs = 0x0972; emu_last_ip = 0x168A; emu_last_length = 0x0028; emu_last_crc = 0x49BE; emu_call();
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
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
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
 * Called From: 0972:169E:000F:4845
 */
void f__0972_169E_001F_6F53()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x16BD); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	f__0972_16BD_000A_CB50();
}

/**
 * Decompiled function f__0972_16BD_000A_CB50()
 *
 * @name f__0972_16BD_000A_CB50
 * @implements 0972:16BD:000A:CB50 ()
 *
 * Called From: 0972:16BD:001F:6F53
 */
void f__0972_16BD_000A_CB50()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x16C7); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__0972_16C7_0008_A673();
}

/**
 * Decompiled function f__0972_16C7_0008_A673()
 *
 * @name f__0972_16C7_0008_A673
 * @implements 0972:16C7:0008:A673 ()
 *
 * Called From: 0972:16C7:000A:CB50
 */
void f__0972_16C7_0008_A673()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x16CF); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	f__0972_16CF_001D_7CD7();
}

/**
 * Decompiled function f__0972_16CF_001D_7CD7()
 *
 * @name f__0972_16CF_001D_7CD7
 * @implements 0972:16CF:001D:7CD7 ()
 *
 * Called From: 0972:16CF:0008:A673
 */
void f__0972_16CF_001D_7CD7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_ax.x);
	emu_incw(&emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2D52), emu_si);
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
 */
void f__0972_16D8_0014_1F04()
{
	emu_incw(&emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2D52), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_16EC_000A_EE18(); return; }
	f__0972_15EA_0015_06AF(); return;
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x3A));
	emu_shlw(&emu_bx.x, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx.x,  0x2D52), emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x16EC; emu_last_cs = 0x0972; emu_last_ip = 0x16E7; emu_last_length = 0x0013; emu_last_crc = 0x7F00; emu_call(); return; }
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
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
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
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__0972_1708_0010_9DFE(); return; }
	/* Unresolved jump */ emu_ip = 0x179B; emu_last_cs = 0x0972; emu_last_ip = 0x1705; emu_last_length = 0x0012; emu_last_crc = 0xF520; emu_call();
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
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B6), 0x1);
	if (!emu_flags.zf) { f__0972_1745_0009_F63A(); return; }
	emu_movw(&emu_ax.x, 0x85);
	emu_push(emu_ax.x);
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
	emu_movw(&emu_ax.x, 0x85);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x174E); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0972_174E_0010_7163();
}

/**
 * Decompiled function f__0972_174E_0010_7163()
 *
 * @name f__0972_174E_0010_7163
 * @implements 0972:174E:0010:7163 ()
 *
 * Called From: 0972:174E:0009:F63A
 */
void f__0972_174E_0010_7163()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_push(emu_cs); emu_push(0x175E); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	f__0972_175E_002A_4005();
}

/**
 * Decompiled function f__0972_175E_002A_4005()
 *
 * @name f__0972_175E_002A_4005
 * @implements 0972:175E:002A:4005 ()
 *
 * Called From: 0972:175E:0010:7163
 */
void f__0972_175E_002A_4005()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x37FA));
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x37F8));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3430);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1788); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	f__0972_1788_0010_DEF5();
}

/**
 * Decompiled function f__0972_1788_0010_DEF5()
 *
 * @name f__0972_1788_0010_DEF5
 * @implements 0972:1788:0010:DEF5 ()
 *
 * Called From: 0972:1788:002A:4005
 */
void f__0972_1788_0010_DEF5()
{
	emu_addws(&emu_sp, 0x14);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1798); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	f__0972_1798_0007_F90C();
}

/**
 * Decompiled function f__0972_1798_0007_F90C()
 *
 * @name f__0972_1798_0007_F90C
 * @implements 0972:1798:0007:F90C ()
 *
 * Called From: 0972:1798:0010:DEF5
 */
void f__0972_1798_0007_F90C()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0972_179F_0006_F7CE(); return;
}

/**
 * Decompiled function f__0972_179F_0006_F7CE()
 *
 * @name f__0972_179F_0006_F7CE
 * @implements 0972:179F:0006:F7CE ()
 *
 * Called From: 0972:179D:0007:F90C
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
