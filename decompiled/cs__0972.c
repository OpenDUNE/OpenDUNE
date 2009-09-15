/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0972_0007_0051_0104()
 *
 * @name f__0972_0007_0051_0104
 * @implements 0972:0007:0051:0104 ()
 *
 * Called From: 0642:03C7:0005:12EA
 */
void f__0972_0007_0051_0104()
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
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x003F; emu_last_cs = 0x0972; emu_last_ip = 0x002E; emu_last_length = 0x0051; emu_last_crc = 0x0104; emu_call(); return; } // Jump does not resolve
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_0038_0020_ED56(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if ((emu_flags.cf || emu_flags.zf)) { f__0972_003F_0019_69E4(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37AC), 0x0);
	if (emu_flags.zf) { f__0972_0070_0035_A67C(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3C);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0058); emu_cs = 0x07C9; emu_ip = 0x0067; emu_last_cs = 0x0972; emu_last_ip = 0x0053; emu_last_length = 0x0051; emu_last_crc = 0x0104; emu_call(); // Jump does not resolve
	f__0972_0058_004D_F5DA();
}

/**
 * Decompiled function f__0972_0038_0020_ED56()
 *
 * @name f__0972_0038_0020_ED56
 * @implements 0972:0038:0020:ED56 ()
 *
 * Called From: 0972:0030:0051:0104
 */
void f__0972_0038_0020_ED56()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37AC), 0x0);
	if (emu_flags.zf) { f__0972_0070_0035_A67C(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3C);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0058); emu_cs = 0x07C9; emu_ip = 0x0067; emu_last_cs = 0x0972; emu_last_ip = 0x0053; emu_last_length = 0x0020; emu_last_crc = 0xED56; emu_call(); // Jump does not resolve
	f__0972_0058_004D_F5DA();
}

/**
 * Decompiled function f__0972_003F_0019_69E4()
 *
 * @name f__0972_003F_0019_69E4
 * @implements 0972:003F:0019:69E4 ()
 *
 * Called From: 0972:0036:0051:0104
 */
void f__0972_003F_0019_69E4()
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
	emu_push(emu_cs); emu_push(0x0058); emu_cs = 0x07C9; f__07C9_000F_0050_0FEA();
	f__0972_0058_004D_F5DA();
}

/**
 * Decompiled function f__0972_0058_004D_F5DA()
 *
 * @name f__0972_0058_004D_F5DA
 * @implements 0972:0058:004D:F5DA ()
 *
 * Called From: 0972:0058:0019:69E4
 */
void f__0972_0058_004D_F5DA()
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x00BD; emu_last_cs = 0x0972; emu_last_ip = 0x007B; emu_last_length = 0x004D; emu_last_crc = 0xF5DA; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { f__0972_0085_0020_2F27(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x00BD; emu_last_cs = 0x0972; emu_last_ip = 0x0083; emu_last_length = 0x004D; emu_last_crc = 0xF5DA; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_00BD_006E_B658(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5460);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1518);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2A30);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00A5); emu_cs = 0x07C9; emu_ip = 0x00B4; emu_last_cs = 0x0972; emu_last_ip = 0x00A0; emu_last_length = 0x004D; emu_last_crc = 0xF5DA; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0972_0070_0035_A67C()
 *
 * @name f__0972_0070_0035_A67C
 * @implements 0972:0070:0035:A67C ()
 *
 * Called From: 0972:003D:0051:0104
 * Called From: 0972:003D:0020:ED56
 */
void f__0972_0070_0035_A67C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x341C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x341A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x00BD; emu_last_cs = 0x0972; emu_last_ip = 0x007B; emu_last_length = 0x0035; emu_last_crc = 0xA67C; emu_call(); return; } // Jump does not resolve
	if (!emu_flags.zf) { f__0972_0085_0020_2F27(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { emu_ip = 0x00BD; emu_last_cs = 0x0972; emu_last_ip = 0x0083; emu_last_length = 0x0035; emu_last_crc = 0xA67C; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_00BD_006E_B658(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5460);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1518);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2A30);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00A5); emu_cs = 0x07C9; emu_ip = 0x00B4; emu_last_cs = 0x0972; emu_last_ip = 0x00A0; emu_last_length = 0x0035; emu_last_crc = 0xA67C; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0972_0085_0020_2F27()
 *
 * @name f__0972_0085_0020_2F27
 * @implements 0972:0085:0020:2F27 ()
 *
 * Called From: 0972:007D:0035:A67C
 * Called From: 0972:007D:004D:F5DA
 */
void f__0972_0085_0020_2F27()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x1);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_00BD_006E_B658(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5460);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1518);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2A30);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00A5); emu_cs = 0x07C9; emu_ip = 0x00B4; emu_last_cs = 0x0972; emu_last_ip = 0x00A0; emu_last_length = 0x0020; emu_last_crc = 0x2F27; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0972_00BD_006E_B658()
 *
 * @name f__0972_00BD_006E_B658
 * @implements 0972:00BD:006E:B658 ()
 *
 * Called From: 0972:008A:004D:F5DA
 * Called From: 0972:008A:0035:A67C
 * Called From: 0972:008A:0020:2F27
 */
void f__0972_00BD_006E_B658()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3424));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3422));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_00EB_0040_A449(); return; }
	if (!emu_flags.zf) { emu_ip = 0x00D2; emu_last_cs = 0x0972; emu_last_ip = 0x00CA; emu_last_length = 0x006E; emu_last_crc = 0xB658; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__0972_00EB_0040_A449(); return; }
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
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_0119_0012_E44C(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0100; emu_last_cs = 0x0972; emu_last_ip = 0x00F8; emu_last_length = 0x006E; emu_last_crc = 0xB658; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__0972_0119_0012_E44C(); return; }
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
	emu_push(emu_cs); emu_push(0x012B); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__0972_012B_0006_3FE6();
}

/**
 * Decompiled function f__0972_00EB_0040_A449()
 *
 * @name f__0972_00EB_0040_A449
 * @implements 0972:00EB:0040:A449 ()
 *
 * Called From: 0972:00C8:006E:B658
 * Called From: 0972:00D0:006E:B658
 */
void f__0972_00EB_0040_A449()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3428));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3426));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_0119_0012_E44C(); return; }
	if (!emu_flags.zf) { emu_ip = 0x0100; emu_last_cs = 0x0972; emu_last_ip = 0x00F8; emu_last_length = 0x0040; emu_last_crc = 0xA449; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	if (!(emu_flags.cf || emu_flags.zf)) { f__0972_0119_0012_E44C(); return; }
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
	emu_push(emu_cs); emu_push(0x012B); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__0972_012B_0006_3FE6();
}

/**
 * Decompiled function f__0972_0119_0012_E44C()
 *
 * @name f__0972_0119_0012_E44C
 * @implements 0972:0119:0012:E44C ()
 *
 * Called From: 0972:00F6:0040:A449
 * Called From: 0972:00F6:006E:B658
 * Called From: 0972:00FE:006E:B658
 * Called From: 0972:00FE:0040:A449
 */
void f__0972_0119_0012_E44C()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x012B); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__0972_012B_0006_3FE6();
}

/**
 * Decompiled function f__0972_012B_0006_3FE6()
 *
 * @name f__0972_012B_0006_3FE6
 * @implements 0972:012B:0006:3FE6 ()
 *
 * Called From: 0972:012B:006E:B658
 * Called From: 0972:012B:0012:E44C
 * Called From: 0972:012B:0040:A449
 */
void f__0972_012B_0006_3FE6()
{
	emu_addws(&emu_sp, 0x8);
	f__0972_0A50_0013_8591(); return;
}

/**
 * Decompiled function f__0972_0131_0037_6290()
 *
 * @name f__0972_0131_0037_6290
 * @implements 0972:0131:0037:6290 ()
 *
 * Called From: 0972:0A60:0013:8591
 * Called From: 0972:0A60:0015:8B21
 */
void f__0972_0131_0037_6290()
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
	emu_push(emu_cs); emu_push(0x0168); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__0972_0168_0012_891B();
}

/**
 * Decompiled function f__0972_0168_0012_891B()
 *
 * @name f__0972_0168_0012_891B
 * @implements 0972:0168:0012:891B ()
 *
 * Called From: 0972:0168:0037:6290
 */
void f__0972_0168_0012_891B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x394C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x394A), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__0972_017A_0040_0730(); return; }
	emu_ip = 0x0A44; emu_last_cs = 0x0972; emu_last_ip = 0x0177; emu_last_length = 0x0012; emu_last_crc = 0x891B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_017A_0040_0730()
 *
 * @name f__0972_017A_0040_0730
 * @implements 0972:017A:0040:0730 ()
 *
 * Called From: 0972:0175:0012:891B
 */
void f__0972_017A_0040_0730()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__0972_01E5_005A_6804(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x2);
	if (!emu_flags.zf) { f__0972_01E5_005A_6804(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x50), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01BB; emu_last_cs = 0x0972; emu_last_ip = 0x0194; emu_last_length = 0x0040; emu_last_crc = 0x0730; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x50));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x394C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A3C));
	if (!emu_flags.zf) { emu_ip = 0x01BB; emu_last_cs = 0x0972; emu_last_ip = 0x01A9; emu_last_length = 0x0040; emu_last_crc = 0x0730; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	if (!emu_flags.zf) { emu_ip = 0x01BB; emu_last_cs = 0x0972; emu_last_ip = 0x01AF; emu_last_length = 0x0040; emu_last_crc = 0x0730; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01BA); emu_cs = 0x10E4; emu_ip = 0x10D4; emu_last_cs = 0x0972; emu_last_ip = 0x01B5; emu_last_length = 0x0040; emu_last_crc = 0x0730; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0972_01E5_005A_6804()
 *
 * @name f__0972_01E5_005A_6804
 * @implements 0972:01E5:005A:6804 ()
 *
 * Called From: 0972:017E:0040:0730
 * Called From: 0972:0189:0040:0730
 */
void f__0972_01E5_005A_6804()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__0972_0242_0009_0C61(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x400);
	if (emu_flags.zf) { emu_ip = 0x0242; emu_last_cs = 0x0972; emu_last_ip = 0x01F5; emu_last_length = 0x005A; emu_last_crc = 0x6804; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x10));
	emu_sarw(&emu_ax.x, 0x1);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0242; emu_last_cs = 0x0972; emu_last_ip = 0x020B; emu_last_length = 0x005A; emu_last_crc = 0x6804; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, emu_bx.x,  0x3800));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x400);
	if (emu_flags.zf) { emu_ip = 0x022E; emu_last_cs = 0x0972; emu_last_ip = 0x022B; emu_last_length = 0x005A; emu_last_crc = 0x6804; emu_call(); return; } // Jump does not resolve
	emu_incw(&emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_cs); emu_push(0x023F); emu_cs = 0x0C3A; emu_ip = 0x1455; emu_last_cs = 0x0972; emu_last_ip = 0x023A; emu_last_length = 0x005A; emu_last_crc = 0x6804; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0972_0242_0009_0C61()
 *
 * @name f__0972_0242_0009_0C61
 * @implements 0972:0242:0009:0C61 ()
 *
 * Called From: 0972:01E9:005A:6804
 */
void f__0972_0242_0009_0C61()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (!emu_flags.zf) { f__0972_024B_000F_2E01(); return; }
	f__0972_0938_0009_0CD7(); return;
}

/**
 * Decompiled function f__0972_024B_000F_2E01()
 *
 * @name f__0972_024B_000F_2E01
 * @implements 0972:024B:000F:2E01 ()
 *
 * Called From: 0972:0246:0009:0C61
 */
void f__0972_024B_000F_2E01()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x025A; emu_last_cs = 0x0972; emu_last_ip = 0x0255; emu_last_length = 0x000F; emu_last_crc = 0x2E01; emu_call(); return; } // Jump does not resolve
	f__0972_0306_000F_25C9(); return;
}

/**
 * Decompiled function f__0972_0306_000F_25C9()
 *
 * @name f__0972_0306_000F_25C9
 * @implements 0972:0306:000F:25C9 ()
 *
 * Called From: 0972:0257:000F:2E01
 */
void f__0972_0306_000F_25C9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2000);
	if (!emu_flags.zf) { f__0972_0315_0011_6F70(); return; }
	f__0972_03B3_000F_3D87(); return;
}

/**
 * Decompiled function f__0972_0315_0011_6F70()
 *
 * @name f__0972_0315_0011_6F70
 * @implements 0972:0315:0011:6F70 ()
 *
 * Called From: 0972:0310:000F:25C9
 */
void f__0972_0315_0011_6F70()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x0326); emu_cs = 0x34C1; ovl__34C1(2);
	f__0972_0326_0012_EE06();
}

/**
 * Decompiled function f__0972_0326_0012_EE06()
 *
 * @name f__0972_0326_0012_EE06
 * @implements 0972:0326:0012:EE06 ()
 *
 * Called From: 0972:0326:0011:6F70
 */
void f__0972_0326_0012_EE06()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_push(emu_cs); emu_push(0x0338); emu_cs = 0x34C1; ovl__34C1(0);
	f__0972_0338_0037_2B27();
}

/**
 * Decompiled function f__0972_0338_0037_2B27()
 *
 * @name f__0972_0338_0037_2B27
 * @implements 0972:0338:0037:2B27 ()
 *
 * Called From: 0972:0338:0012:EE06
 */
void f__0972_0338_0037_2B27()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_si);
	if (emu_flags.cf) { emu_ip = 0x03A6; emu_last_cs = 0x0972; emu_last_ip = 0x0344; emu_last_length = 0x0037; emu_last_crc = 0x2B27; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__0972_036F_0037_E9BD(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x3);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x036F; emu_last_cs = 0x0972; emu_last_ip = 0x0362; emu_last_length = 0x0037; emu_last_crc = 0x2B27; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_addws(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x3);
	emu_ip = 0x0378; emu_last_cs = 0x0972; emu_last_ip = 0x036D; emu_last_length = 0x0037; emu_last_crc = 0x2B27; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_036F_0037_E9BD()
 *
 * @name f__0972_036F_0037_E9BD
 * @implements 0972:036F:0037:E9BD ()
 *
 * Called From: 0972:035B:0037:2B27
 */
void f__0972_036F_0037_E9BD()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_addws(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x5);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0972_03A4_0002_03B8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x9FFF);
	f__0972_03B0_0003_0556(); return;
}

/**
 * Decompiled function f__0972_03A4_0002_03B8()
 *
 * @name f__0972_03A4_0002_03B8
 * @implements 0972:03A4:0002:03B8 ()
 *
 * Called From: 0972:0388:0037:E9BD
 */
void f__0972_03A4_0002_03B8()
{
	f__0972_03B0_0003_0556(); return;
}

/**
 * Decompiled function f__0972_03B0_0003_0556()
 *
 * @name f__0972_03B0_0003_0556
 * @implements 0972:03B0:0003:0556 ()
 *
 * Called From: 0972:03A4:0002:03B8
 * Called From: 0972:03A4:0037:E9BD
 */
void f__0972_03B0_0003_0556()
{
	f__0972_0938_0009_0CD7(); return;
}

/**
 * Decompiled function f__0972_03B3_000F_3D87()
 *
 * @name f__0972_03B3_000F_3D87
 * @implements 0972:03B3:000F:3D87 ()
 *
 * Called From: 0972:0312:000F:25C9
 */
void f__0972_03B3_000F_3D87()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4000);
	if (emu_flags.zf) { f__0972_03C2_000E_6132(); return; }
	f__0972_0746_000E_4C0E(); return;
}

/**
 * Decompiled function f__0972_03C2_000E_6132()
 *
 * @name f__0972_03C2_000E_6132
 * @implements 0972:03C2:000E:6132 ()
 *
 * Called From: 0972:03BD:000F:3D87
 */
void f__0972_03C2_000E_6132()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x50), 0x0);
	if (!emu_flags.zf) { f__0972_03D0_000E_710A(); return; }
	f__0972_0746_000E_4C0E(); return;
}

/**
 * Decompiled function f__0972_03D0_000E_710A()
 *
 * @name f__0972_03D0_000E_710A
 * @implements 0972:03D0:000E:710A ()
 *
 * Called From: 0972:03CB:000E:6132
 */
void f__0972_03D0_000E_710A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { f__0972_03DE_000E_63E2(); return; }
	emu_ip = 0x0746; emu_last_cs = 0x0972; emu_last_ip = 0x03DB; emu_last_length = 0x000E; emu_last_crc = 0x710A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_03DE_000E_63E2()
 *
 * @name f__0972_03DE_000E_63E2
 * @implements 0972:03DE:000E:63E2 ()
 *
 * Called From: 0972:03D9:000E:710A
 */
void f__0972_03DE_000E_63E2()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x1);
	if (emu_flags.zf) { f__0972_03EC_000F_A79B(); return; }
	emu_ip = 0x0746; emu_last_cs = 0x0972; emu_last_ip = 0x03E9; emu_last_length = 0x000E; emu_last_crc = 0x63E2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_03EC_000F_A79B()
 *
 * @name f__0972_03EC_000F_A79B
 * @implements 0972:03EC:000F:A79B ()
 *
 * Called From: 0972:03E7:000E:63E2
 */
void f__0972_03EC_000F_A79B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2);
	if (!emu_flags.zf) { f__0972_03FB_0025_F66C(); return; }
	emu_ip = 0x0746; emu_last_cs = 0x0972; emu_last_ip = 0x03F8; emu_last_length = 0x000F; emu_last_crc = 0xA79B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_03FB_0025_F66C()
 *
 * @name f__0972_03FB_0025_F66C
 * @implements 0972:03FB:0025:F66C ()
 *
 * Called From: 0972:03F6:000F:A79B
 */
void f__0972_03FB_0025_F66C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (!emu_flags.zf) { emu_ip = 0x0420; emu_last_cs = 0x0972; emu_last_ip = 0x0404; emu_last_length = 0x0025; emu_last_crc = 0xF66C; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4C));
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	f__0972_045E_0017_C520(); return;
}

/**
 * Decompiled function f__0972_045E_0017_C520()
 *
 * @name f__0972_045E_0017_C520
 * @implements 0972:045E:0017:C520 ()
 *
 * Called From: 0972:041E:0025:F66C
 */
void f__0972_045E_0017_C520()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	if (!emu_flags.zf) { f__0972_0475_0015_744D(); return; }
	emu_movw(&emu_si, 0x100);
	f__0972_048E_0022_A66F(); return;
}

/**
 * Decompiled function f__0972_0475_0015_744D()
 *
 * @name f__0972_0475_0015_744D
 * @implements 0972:0475:0015:744D ()
 *
 * Called From: 0972:046E:0017:C520
 */
void f__0972_0475_0015_744D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x048A); emu_cs = 0x34C1; ovl__34C1(2);
	f__0972_048A_0026_B43F();
}

/**
 * Decompiled function f__0972_048A_0026_B43F()
 *
 * @name f__0972_048A_0026_B43F
 * @implements 0972:048A:0026:B43F ()
 *
 * Called From: 0972:048A:0015:744D
 */
void f__0972_048A_0026_B43F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__0972_04BD_0013_0ACF(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x5F);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x04B0; emu_last_cs = 0x0972; emu_last_ip = 0x04AA; emu_last_length = 0x0026; emu_last_crc = 0xB43F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_ip = 0x04BB; emu_last_cs = 0x0972; emu_last_ip = 0x04AE; emu_last_length = 0x0026; emu_last_crc = 0xB43F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_048E_0022_A66F()
 *
 * @name f__0972_048E_0022_A66F
 * @implements 0972:048E:0022:A66F ()
 *
 * Called From: 0972:0473:0017:C520
 */
void f__0972_048E_0022_A66F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__0972_04BD_0013_0ACF(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_movw(&emu_dx.x, 0x14);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x5F);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x04B0; emu_last_cs = 0x0972; emu_last_ip = 0x04AA; emu_last_length = 0x0022; emu_last_crc = 0xA66F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_ip = 0x04BB; emu_last_cs = 0x0972; emu_last_ip = 0x04AE; emu_last_length = 0x0022; emu_last_crc = 0xA66F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_04BD_0013_0ACF()
 *
 * @name f__0972_04BD_0013_0ACF
 * @implements 0972:04BD:0013:0ACF ()
 *
 * Called From: 0972:049B:0022:A66F
 * Called From: 0972:049B:0026:B43F
 */
void f__0972_04BD_0013_0ACF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x18));
	emu_push(emu_cs); emu_push(0x04D0); emu_cs = 0x34C1; ovl__34C1(2);
	f__0972_04D0_0014_CB50();
}

/**
 * Decompiled function f__0972_04D0_0014_CB50()
 *
 * @name f__0972_04D0_0014_CB50
 * @implements 0972:04D0:0014:CB50 ()
 *
 * Called From: 0972:04D0:0013:0ACF
 */
void f__0972_04D0_0014_CB50()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_cmpw(&emu_si, 0x100);
	if (emu_flags.zf) { f__0972_04E9_001B_A3BE(); return; }
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x04E4); emu_cs = 0x34C1; ovl__34C1(0);
	f__0972_04E4_0020_A3EE();
}

/**
 * Decompiled function f__0972_04E4_0020_A3EE()
 *
 * @name f__0972_04E4_0020_A3EE
 * @implements 0972:04E4:0020:A3EE ()
 *
 * Called From: 0972:04E4:0014:CB50
 */
void f__0972_04E4_0020_A3EE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xD);
	if (!emu_flags.zf) { f__0972_050A_0028_6CB7(); return; }
	emu_movb(&emu_cx.l, 0x2);
	emu_shrw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_cx.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0504; emu_last_cs = 0x0972; emu_last_ip = 0x04FD; emu_last_length = 0x0020; emu_last_crc = 0xA3EE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ip = 0x0507; emu_last_cs = 0x0972; emu_last_ip = 0x0502; emu_last_length = 0x0020; emu_last_crc = 0xA3EE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_04E9_001B_A3BE()
 *
 * @name f__0972_04E9_001B_A3BE
 * @implements 0972:04E9:001B:A3BE ()
 *
 * Called From: 0972:04D9:0014:CB50
 */
void f__0972_04E9_001B_A3BE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xD);
	if (!emu_flags.zf) { f__0972_050A_0028_6CB7(); return; }
	emu_movb(&emu_cx.l, 0x2);
	emu_shrw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_cx.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x0504; emu_last_cs = 0x0972; emu_last_ip = 0x04FD; emu_last_length = 0x001B; emu_last_crc = 0xA3BE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ip = 0x0507; emu_last_cs = 0x0972; emu_last_ip = 0x0502; emu_last_length = 0x001B; emu_last_crc = 0xA3BE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_050A_0028_6CB7()
 *
 * @name f__0972_050A_0028_6CB7
 * @implements 0972:050A:0028:6CB7 ()
 *
 * Called From: 0972:04F2:001B:A3BE
 * Called From: 0972:04F2:0020:A3EE
 */
void f__0972_050A_0028_6CB7()
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
	if (!emu_flags.cf) { f__0972_0532_001D_7F3B(); return; }
	emu_ip = 0x0716; emu_last_cs = 0x0972; emu_last_ip = 0x052F; emu_last_length = 0x0028; emu_last_crc = 0x6CB7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_0532_001D_7F3B()
 *
 * @name f__0972_0532_001D_7F3B
 * @implements 0972:0532:001D:7F3B ()
 *
 * Called From: 0972:052D:0028:6CB7
 */
void f__0972_0532_001D_7F3B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_andw(&emu_ax.x, 0xFF);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x52), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x054F); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__0972_054F_001F_52A4();
}

/**
 * Decompiled function f__0972_054F_001F_52A4()
 *
 * @name f__0972_054F_001F_52A4
 * @implements 0972:054F:001F:52A4 ()
 *
 * Called From: 0972:054F:001D:7F3B
 */
void f__0972_054F_001F_52A4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_es, emu_dx.x);
	emu_xchgw(&emu_ax.x, &emu_bx.x);
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x50), emu_si);
	if (emu_flags.cf) { f__0972_056E_0018_B192(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0x50), emu_si);
	f__0972_0578_000E_62F6(); return;
}

/**
 * Decompiled function f__0972_056E_0018_B192()
 *
 * @name f__0972_056E_0018_B192
 * @implements 0972:056E:0018:B192 ()
 *
 * Called From: 0972:0562:001F:52A4
 */
void f__0972_056E_0018_B192()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x50), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x50), 0x0);
	if (emu_flags.zf) { f__0972_0586_001B_53D6(); return; }
	emu_ip = 0x0714; emu_last_cs = 0x0972; emu_last_ip = 0x0583; emu_last_length = 0x0018; emu_last_crc = 0xB192; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_0578_000E_62F6()
 *
 * @name f__0972_0578_000E_62F6
 * @implements 0972:0578:000E:62F6 ()
 *
 * Called From: 0972:056C:001F:52A4
 */
void f__0972_0578_000E_62F6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x50), 0x0);
	if (emu_flags.zf) { f__0972_0586_001B_53D6(); return; }
	f__0972_0714_0002_03CC(); return;
}

/**
 * Decompiled function f__0972_0586_001B_53D6()
 *
 * @name f__0972_0586_001B_53D6
 * @implements 0972:0586:001B:53D6 ()
 *
 * Called From: 0972:0581:000E:62F6
 * Called From: 0972:0581:0018:B192
 */
void f__0972_0586_001B_53D6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x52), 0x0);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_cs); emu_push(0x05A1); emu_cs = 0x0C3A; f__0C3A_1398_000D_C7C7();
	f__0972_05A1_0015_E62C();
}

/**
 * Decompiled function f__0972_05A1_0015_E62C()
 *
 * @name f__0972_05A1_0015_E62C
 * @implements 0972:05A1:0015:E62C ()
 *
 * Called From: 0972:05A1:001B:53D6
 */
void f__0972_05A1_0015_E62C()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__0972_05B6_002B_ABFE(); return; }
	emu_ip = 0x0636; emu_last_cs = 0x0972; emu_last_ip = 0x05B3; emu_last_length = 0x0015; emu_last_crc = 0xE62C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_05B6_002B_ABFE()
 *
 * @name f__0972_05B6_002B_ABFE
 * @implements 0972:05B6:002B:ABFE ()
 *
 * Called From: 0972:05B1:0015:E62C
 */
void f__0972_05B6_002B_ABFE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xA);
	if (emu_flags.zf) { emu_ip = 0x0633; emu_last_cs = 0x0972; emu_last_ip = 0x05BF; emu_last_length = 0x002B; emu_last_crc = 0xABFE; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x7);
	if (emu_flags.zf) { emu_ip = 0x0633; emu_last_cs = 0x0972; emu_last_ip = 0x05CA; emu_last_length = 0x002B; emu_last_crc = 0xABFE; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, 0x5);
	if (emu_flags.zf) { emu_ip = 0x05E6; emu_last_cs = 0x0972; emu_last_ip = 0x05D8; emu_last_length = 0x002B; emu_last_crc = 0xABFE; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x8);
	if (emu_flags.zf) { f__0972_05E1_0005_1C78(); return; }
	emu_ip = 0x05EB; emu_last_cs = 0x0972; emu_last_ip = 0x05DF; emu_last_length = 0x002B; emu_last_crc = 0xABFE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_05E1_0005_1C78()
 *
 * @name f__0972_05E1_0005_1C78
 * @implements 0972:05E1:0005:1C78 ()
 *
 * Called From: 0972:05DD:002B:ABFE
 */
void f__0972_05E1_0005_1C78()
{
	emu_movw(&emu_di, 0x82);
	f__0972_05F0_0006_0042(); return;
}

/**
 * Decompiled function f__0972_05F0_0006_0042()
 *
 * @name f__0972_05F0_0006_0042
 * @implements 0972:05F0:0006:0042 ()
 *
 * Called From: 0972:05E4:0005:1C78
 */
void f__0972_05F0_0006_0042()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x05F6); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__0972_05F6_000F_8CBD();
}

/**
 * Decompiled function f__0972_05F6_000F_8CBD()
 *
 * @name f__0972_05F6_000F_8CBD
 * @implements 0972:05F6:000F:8CBD ()
 *
 * Called From: 0972:05F6:0006:0042
 */
void f__0972_05F6_000F_8CBD()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_push(emu_cs); emu_push(0x0605); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__0972_0605_0012_F1C2();
}

/**
 * Decompiled function f__0972_0605_0012_F1C2()
 *
 * @name f__0972_0605_0012_F1C2
 * @implements 0972:0605:0012:F1C2 ()
 *
 * Called From: 0972:0605:000F:8CBD
 */
void f__0972_0605_0012_F1C2()
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
	emu_push(emu_cs); emu_push(0x0617); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	f__0972_0617_0010_9364();
}

/**
 * Decompiled function f__0972_0617_0010_9364()
 *
 * @name f__0972_0617_0010_9364
 * @implements 0972:0617:0010:9364 ()
 *
 * Called From: 0972:0617:0012:F1C2
 */
void f__0972_0617_0010_9364()
{
	emu_addws(&emu_sp, 0x10);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0627); emu_cs = 0x10E4; f__10E4_09AB_0031_9946();
	f__0972_0627_000B_5083();
}

/**
 * Decompiled function f__0972_0627_000B_5083()
 *
 * @name f__0972_0627_000B_5083
 * @implements 0972:0627:000B:5083 ()
 *
 * Called From: 0972:0627:0010:9364
 */
void f__0972_0627_000B_5083()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0632); emu_cs = 0x3483; ovl__3483(2);
	f__0972_0632_0004_01A0();
}

/**
 * Decompiled function f__0972_0632_0004_01A0()
 *
 * @name f__0972_0632_0004_01A0
 * @implements 0972:0632:0004:01A0 ()
 *
 * Called From: 0972:0632:000B:5083
 */
void f__0972_0632_0004_01A0()
{
	emu_pop(&emu_cx.x);
	f__0972_0714_0002_03CC(); return;
}

/**
 * Decompiled function f__0972_0714_0002_03CC()
 *
 * @name f__0972_0714_0002_03CC
 * @implements 0972:0714:0002:03CC ()
 *
 * Called From: 0972:0583:000E:62F6
 * Called From: 0972:0633:0004:01A0
 */
void f__0972_0714_0002_03CC()
{
	f__0972_0746_000E_4C0E(); return;
}

/**
 * Decompiled function f__0972_0746_000E_4C0E()
 *
 * @name f__0972_0746_000E_4C0E
 * @implements 0972:0746:000E:4C0E ()
 *
 * Called From: 0972:03BF:000F:3D87
 * Called From: 0972:03CD:000E:6132
 * Called From: 0972:0714:0002:03CC
 */
void f__0972_0746_000E_4C0E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xD);
	if (emu_flags.zf) { emu_ip = 0x0754; emu_last_cs = 0x0972; emu_last_ip = 0x074F; emu_last_length = 0x000E; emu_last_crc = 0x4C0E; emu_call(); return; } // Jump does not resolve
	f__0972_0874_000F_3961(); return;
}

/**
 * Decompiled function f__0972_0874_000F_3961()
 *
 * @name f__0972_0874_000F_3961
 * @implements 0972:0874:000F:3961 ()
 *
 * Called From: 0972:0751:000E:4C0E
 */
void f__0972_0874_000F_3961()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394A));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	if (!emu_flags.zf) { f__0972_0883_000F_2C29(); return; }
	f__0972_0938_0009_0CD7(); return;
}

/**
 * Decompiled function f__0972_0883_000F_2C29()
 *
 * @name f__0972_0883_000F_2C29
 * @implements 0972:0883:000F:2C29 ()
 *
 * Called From: 0972:087E:000F:3961
 */
void f__0972_0883_000F_2C29()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (!emu_flags.zf) { f__0972_0892_0012_FA4C(); return; }
	emu_ip = 0x0938; emu_last_cs = 0x0972; emu_last_ip = 0x088F; emu_last_length = 0x000F; emu_last_crc = 0x2C29; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_0892_0012_FA4C()
 *
 * @name f__0972_0892_0012_FA4C
 * @implements 0972:0892:0012:FA4C ()
 *
 * Called From: 0972:088D:000F:2C29
 */
void f__0972_0892_0012_FA4C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x08A4; emu_last_cs = 0x0972; emu_last_ip = 0x089F; emu_last_length = 0x0012; emu_last_crc = 0xFA4C; emu_call(); return; } // Jump does not resolve
	f__0972_0938_0009_0CD7(); return;
}

/**
 * Decompiled function f__0972_0938_0009_0CD7()
 *
 * @name f__0972_0938_0009_0CD7
 * @implements 0972:0938:0009:0CD7 ()
 *
 * Called From: 0972:0248:0009:0C61
 * Called From: 0972:03B0:0003:0556
 * Called From: 0972:0880:000F:3961
 * Called From: 0972:08A1:0012:FA4C
 */
void f__0972_0938_0009_0CD7()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0972_0941_000E_4378(); return; }
	f__0972_0A44_000A_7BB1(); return;
}

/**
 * Decompiled function f__0972_0941_000E_4378()
 *
 * @name f__0972_0941_000E_4378
 * @implements 0972:0941:000E:4378 ()
 *
 * Called From: 0972:093C:0009:0CD7
 */
void f__0972_0941_000E_4378()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x0);
	if (emu_flags.zf) { f__0972_094F_0010_62B2(); return; }
	f__0972_0A3C_0012_68F9(); return;
}

/**
 * Decompiled function f__0972_094F_0010_62B2()
 *
 * @name f__0972_094F_0010_62B2
 * @implements 0972:094F:0010:62B2 ()
 *
 * Called From: 0972:094A:000E:4378
 */
void f__0972_094F_0010_62B2()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x095F); emu_cs = 0x15C2; f__15C2_0526_000F_1707();
	f__0972_095F_0009_D500();
}

/**
 * Decompiled function f__0972_095F_0009_D500()
 *
 * @name f__0972_095F_0009_D500
 * @implements 0972:095F:0009:D500 ()
 *
 * Called From: 0972:095F:0010:62B2
 */
void f__0972_095F_0009_D500()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0972_0968_005A_D10E(); return; }
	emu_ip = 0x09FE; emu_last_cs = 0x0972; emu_last_ip = 0x0965; emu_last_length = 0x0009; emu_last_crc = 0xD500; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_0968_005A_D10E()
 *
 * @name f__0972_0968_005A_D10E
 * @implements 0972:0968:005A:D10E ()
 *
 * Called From: 0972:0963:0009:D500
 */
void f__0972_0968_005A_D10E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x9);
	if (!emu_flags.zf) { f__0972_097B_0047_DAC4(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x37A4));
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x37A4));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { f__0972_09B2_0010_6542(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37A4), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x37A2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1D));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0xF);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x37A8));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x09B2; emu_last_cs = 0x0972; emu_last_ip = 0x099E; emu_last_length = 0x005A; emu_last_crc = 0xD10E; emu_call(); return; } // Jump does not resolve
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
	emu_push(emu_cs); emu_push(0x09C2); emu_cs = 0x15C2; emu_ip = 0x0F1B; emu_last_cs = 0x0972; emu_last_ip = 0x09BD; emu_last_length = 0x005A; emu_last_crc = 0xD10E; emu_call(); // Jump does not resolve
	f__0972_09C2_0009_D538();
}

/**
 * Decompiled function f__0972_097B_0047_DAC4()
 *
 * @name f__0972_097B_0047_DAC4
 * @implements 0972:097B:0047:DAC4 ()
 *
 * Called From: 0972:0971:005A:D10E
 */
void f__0972_097B_0047_DAC4()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (emu_flags.zf) { f__0972_09B2_0010_6542(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37A4), 0x0);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x37A2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1D));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0xF);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x37A8));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x09B2; emu_last_cs = 0x0972; emu_last_ip = 0x099E; emu_last_length = 0x0047; emu_last_crc = 0xDAC4; emu_call(); return; } // Jump does not resolve
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
	emu_push(emu_cs); emu_push(0x09C2); emu_cs = 0x15C2; emu_ip = 0x0F1B; emu_last_cs = 0x0972; emu_last_ip = 0x09BD; emu_last_length = 0x0047; emu_last_crc = 0xDAC4; emu_call(); // Jump does not resolve
	f__0972_09C2_0009_D538();
}

/**
 * Decompiled function f__0972_09B2_0010_6542()
 *
 * @name f__0972_09B2_0010_6542
 * @implements 0972:09B2:0010:6542 ()
 *
 * Called From: 0972:0980:0047:DAC4
 * Called From: 0972:0980:005A:D10E
 */
void f__0972_09B2_0010_6542()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09C2); emu_cs = 0x15C2; f__15C2_0559_0015_6879();
	f__0972_09C2_0009_D538();
}

/**
 * Decompiled function f__0972_09C2_0009_D538()
 *
 * @name f__0972_09C2_0009_D538
 * @implements 0972:09C2:0009:D538 ()
 *
 * Called From: 0972:09C2:0010:6542
 */
void f__0972_09C2_0009_D538()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0972_09CB_0010_6542(); return; }
	emu_ip = 0x0A63; emu_last_cs = 0x0972; emu_last_ip = 0x09C8; emu_last_length = 0x0009; emu_last_crc = 0xD538; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_09CB_0010_6542()
 *
 * @name f__0972_09CB_0010_6542
 * @implements 0972:09CB:0010:6542 ()
 *
 * Called From: 0972:09C6:0009:D538
 */
void f__0972_09CB_0010_6542()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09DB); emu_cs = 0x15C2; f__15C2_0559_0015_6879();
	f__0972_09DB_0009_D6A4();
}

/**
 * Decompiled function f__0972_09DB_0009_D6A4()
 *
 * @name f__0972_09DB_0009_D6A4
 * @implements 0972:09DB:0009:D6A4 ()
 *
 * Called From: 0972:09DB:0010:6542
 */
void f__0972_09DB_0009_D6A4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0972_09E4_0010_6542(); return; }
	emu_ip = 0x0A63; emu_last_cs = 0x0972; emu_last_ip = 0x09E1; emu_last_length = 0x0009; emu_last_crc = 0xD6A4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_09E4_0010_6542()
 *
 * @name f__0972_09E4_0010_6542
 * @implements 0972:09E4:0010:6542 ()
 *
 * Called From: 0972:09DF:0009:D6A4
 */
void f__0972_09E4_0010_6542()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x09F4); emu_cs = 0x15C2; f__15C2_0559_0015_6879();
	f__0972_09F4_0008_6B62();
}

/**
 * Decompiled function f__0972_09F4_0008_6B62()
 *
 * @name f__0972_09F4_0008_6B62
 * @implements 0972:09F4:0008:6B62 ()
 *
 * Called From: 0972:09F4:0010:6542
 */
void f__0972_09F4_0008_6B62()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0972_09FC_0002_03D4(); return; }
	emu_ip = 0x0A63; emu_last_cs = 0x0972; emu_last_ip = 0x09FA; emu_last_length = 0x0008; emu_last_crc = 0x6B62; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_09FC_0002_03D4()
 *
 * @name f__0972_09FC_0002_03D4
 * @implements 0972:09FC:0002:03D4 ()
 *
 * Called From: 0972:09F8:0008:6B62
 */
void f__0972_09FC_0002_03D4()
{
	f__0972_0A3A_0002_03BC(); return;
}

/**
 * Decompiled function f__0972_0A3A_0002_03BC()
 *
 * @name f__0972_0A3A_0002_03BC
 * @implements 0972:0A3A:0002:03BC ()
 *
 * Called From: 0972:09FC:0002:03D4
 */
void f__0972_0A3A_0002_03BC()
{
	f__0972_0A44_000A_7BB1(); return;
}

/**
 * Decompiled function f__0972_0A3C_0012_68F9()
 *
 * @name f__0972_0A3C_0012_68F9
 * @implements 0972:0A3C:0012:68F9 ()
 *
 * Called From: 0972:094C:000E:4378
 */
void f__0972_0A3C_0012_68F9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_decw(&emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A4E); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	f__0972_0A4E_0015_8B21();
}

/**
 * Decompiled function f__0972_0A44_000A_7BB1()
 *
 * @name f__0972_0A44_000A_7BB1
 * @implements 0972:0A44:000A:7BB1 ()
 *
 * Called From: 0972:093E:0009:0CD7
 * Called From: 0972:0A3A:0002:03BC
 */
void f__0972_0A44_000A_7BB1()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A4E); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	f__0972_0A4E_0015_8B21();
}

/**
 * Decompiled function f__0972_0A4E_0015_8B21()
 *
 * @name f__0972_0A4E_0015_8B21
 * @implements 0972:0A4E:0015:8B21 ()
 *
 * Called From: 0972:0A4E:000A:7BB1
 * Called From: 0972:0A4E:0012:68F9
 */
void f__0972_0A4E_0015_8B21()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7BCA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7BCC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	if (emu_flags.zf) { f__0972_0A63_0006_137A(); return; }
	f__0972_0131_0037_6290(); return;
}

/**
 * Decompiled function f__0972_0A50_0013_8591()
 *
 * @name f__0972_0A50_0013_8591
 * @implements 0972:0A50:0013:8591 ()
 *
 * Called From: 0972:012E:0006:3FE6
 */
void f__0972_0A50_0013_8591()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7BCA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7BCC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	if (emu_flags.zf) { emu_ip = 0x0A63; emu_last_cs = 0x0972; emu_last_ip = 0x0A5E; emu_last_length = 0x0013; emu_last_crc = 0x8591; emu_call(); return; } // Jump does not resolve
	f__0972_0131_0037_6290(); return;
}

/**
 * Decompiled function f__0972_0A63_0006_137A()
 *
 * @name f__0972_0A63_0006_137A
 * @implements 0972:0A63:0006:137A ()
 *
 * Called From: 0972:0A5E:0015:8B21
 */
void f__0972_0A63_0006_137A()
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
 * Decompiled function f__0972_0A72_000D_379A()
 *
 * @name f__0972_0A72_000D_379A
 * @implements 0972:0A72:000D:379A ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0972_0A72_000D_379A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x54));
	f__0972_0A7F_0002_00E2(); return;
}

/**
 * Decompiled function f__0972_0A7F_0002_00E2()
 *
 * @name f__0972_0A7F_0002_00E2
 * @implements 0972:0A7F:0002:00E2 ()
 *
 * Called From: 0972:0A7D:000D:379A
 */
void f__0972_0A7F_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_0A81_0017_BB46()
 *
 * @name f__0972_0A81_0017_BB46
 * @implements 0972:0A81:0017:BB46 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0972_0A81_0017_BB46()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x0A98); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__0972_0A98_0012_918D();
}

/**
 * Decompiled function f__0972_0A98_0012_918D()
 *
 * @name f__0972_0A98_0012_918D
 * @implements 0972:0A98:0012:918D ()
 *
 * Called From: 0972:0A98:0017:BB46
 */
void f__0972_0A98_0012_918D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x0AAA); emu_cs = 0x0C10; f__0C10_0168_0014_CCE7();
	f__0972_0AAA_000A_2A45();
}

/**
 * Decompiled function f__0972_0AAA_000A_2A45()
 *
 * @name f__0972_0AAA_000A_2A45
 * @implements 0972:0AAA:000A:2A45 ()
 *
 * Called From: 0972:0AAA:0012:918D
 */
void f__0972_0AAA_000A_2A45()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0AB4); emu_cs = 0x167E; f__167E_0284_000C_AAF8();
	f__0972_0AB4_0012_72ED();
}

/**
 * Decompiled function f__0972_0AB4_0012_72ED()
 *
 * @name f__0972_0AB4_0012_72ED
 * @implements 0972:0AB4:0012:72ED ()
 *
 * Called From: 0972:0AB4:000A:2A45
 */
void f__0972_0AB4_0012_72ED()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0AC6); emu_cs = 0x0C10; f__0C10_0168_0014_CCE7();
	f__0972_0AC6_0011_3D04();
}

/**
 * Decompiled function f__0972_0AC6_0011_3D04()
 *
 * @name f__0972_0AC6_0011_3D04
 * @implements 0972:0AC6:0011:3D04 ()
 *
 * Called From: 0972:0AC6:0012:72ED
 */
void f__0972_0AC6_0011_3D04()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__0972_0AD7_000B_3C37(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_ip = 0x0AF7; emu_last_cs = 0x0972; emu_last_ip = 0x0AD5; emu_last_length = 0x0011; emu_last_crc = 0x3D04; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_0AD5_0002_03EC()
 *
 * @name f__0972_0AD5_0002_03EC
 * @implements 0972:0AD5:0002:03EC ()
 *
 * Called From: 0972:0AF5:0006:1A40
 */
void f__0972_0AD5_0002_03EC()
{
	f__0972_0AF7_0005_04BA(); return;
}

/**
 * Decompiled function f__0972_0AD7_000B_3C37()
 *
 * @name f__0972_0AD7_000B_3C37
 * @implements 0972:0AD7:000B:3C37 ()
 *
 * Called From: 0972:0AD1:0011:3D04
 */
void f__0972_0AD7_000B_3C37()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0AE2); emu_cs = 0x0C10; f__0C10_0182_0012_8DA5();
	f__0972_0AE2_000F_DE55();
}

/**
 * Decompiled function f__0972_0AE2_000F_DE55()
 *
 * @name f__0972_0AE2_000F_DE55
 * @implements 0972:0AE2:000F:DE55 ()
 *
 * Called From: 0972:0AE2:000B:3C37
 */
void f__0972_0AE2_000F_DE55()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x0AF1); emu_cs = 0x0C10; f__0C10_0182_0012_8DA5();
	f__0972_0AF1_0006_1A40();
}

/**
 * Decompiled function f__0972_0AF1_0006_1A40()
 *
 * @name f__0972_0AF1_0006_1A40
 * @implements 0972:0AF1:0006:1A40 ()
 *
 * Called From: 0972:0AF1:000F:DE55
 */
void f__0972_0AF1_0006_1A40()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0972_0AD5_0002_03EC(); return;
}

/**
 * Decompiled function f__0972_0AF7_0005_04BA()
 *
 * @name f__0972_0AF7_0005_04BA
 * @implements 0972:0AF7:0005:04BA ()
 *
 * Called From: 0972:0AD5:0002:03EC
 */
void f__0972_0AF7_0005_04BA()
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
 * Decompiled function f__0972_0AFC_0016_ECDD()
 *
 * @name f__0972_0AFC_0016_ECDD
 * @implements 0972:0AFC:0016:ECDD ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0972_0AFC_0016_ECDD()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x2);
	if (emu_flags.zf) { f__0972_0B12_000E_3BDE(); return; }
	emu_ip = 0x0BFC; emu_last_cs = 0x0972; emu_last_ip = 0x0B0F; emu_last_length = 0x0016; emu_last_crc = 0xECDD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_0B12_000E_3BDE()
 *
 * @name f__0972_0B12_000E_3BDE
 * @implements 0972:0B12:000E:3BDE ()
 *
 * Called From: 0972:0B0D:0016:ECDD
 */
void f__0972_0B12_000E_3BDE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { f__0972_0B20_0026_F5DA(); return; }
	emu_ip = 0x0BFC; emu_last_cs = 0x0972; emu_last_ip = 0x0B1D; emu_last_length = 0x000E; emu_last_crc = 0x3BDE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_0B20_0026_F5DA()
 *
 * @name f__0972_0B20_0026_F5DA
 * @implements 0972:0B20:0026:F5DA ()
 *
 * Called From: 0972:0B1B:000E:3BDE
 */
void f__0972_0B20_0026_F5DA()
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
	emu_push(emu_cs); emu_push(0x0B46); emu_cs = 0x0C3A; f__0C3A_247A_0015_692D();
	f__0972_0B46_0012_9DB2();
}

/**
 * Decompiled function f__0972_0B46_0012_9DB2()
 *
 * @name f__0972_0B46_0012_9DB2
 * @implements 0972:0B46:0012:9DB2 ()
 *
 * Called From: 0972:0B46:0026:F5DA
 */
void f__0972_0B46_0012_9DB2()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x0B58); emu_cs = 0x1A34; f__1A34_3491_0032_DE4A();
	f__0972_0B58_003E_7EDF();
}

/**
 * Decompiled function f__0972_0B58_003E_7EDF()
 *
 * @name f__0972_0B58_003E_7EDF
 * @implements 0972:0B58:003E:7EDF ()
 *
 * Called From: 0972:0B58:0012:9DB2
 */
void f__0972_0B58_003E_7EDF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x0B96; emu_last_cs = 0x0972; emu_last_ip = 0x0B6D; emu_last_length = 0x003E; emu_last_crc = 0x7EDF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x0B96; emu_last_cs = 0x0972; emu_last_ip = 0x0B75; emu_last_length = 0x003E; emu_last_crc = 0x7EDF; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { emu_ip = 0x0B96; emu_last_cs = 0x0972; emu_last_ip = 0x0B7F; emu_last_length = 0x003E; emu_last_crc = 0x7EDF; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x5A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x5C));
	if (!emu_flags.zf) { emu_ip = 0x0B96; emu_last_cs = 0x0972; emu_last_ip = 0x0B8C; emu_last_length = 0x003E; emu_last_crc = 0x7EDF; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x0B96; emu_last_cs = 0x0972; emu_last_ip = 0x0B90; emu_last_length = 0x003E; emu_last_crc = 0x7EDF; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0972_0BFE_0006_137A(); return;
}

/**
 * Decompiled function f__0972_0BFE_0006_137A()
 *
 * @name f__0972_0BFE_0006_137A
 * @implements 0972:0BFE:0006:137A ()
 *
 * Called From: 0972:0B94:003E:7EDF
 */
void f__0972_0BFE_0006_137A()
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
 * Decompiled function f__0972_0C04_0037_F372()
 *
 * @name f__0972_0C04_0037_F372
 * @implements 0972:0C04:0037:F372 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0972_0C04_0037_F372()
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
	if (!emu_flags.zf) { f__0972_0C42_000E_49A3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (emu_flags.zf) { f__0972_0C40_0010_49EB(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x50), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0C3B; emu_last_cs = 0x0972; emu_last_ip = 0x0C34; emu_last_length = 0x0037; emu_last_crc = 0xF372; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, 0x1);
	emu_ip = 0x0C3E; emu_last_cs = 0x0972; emu_last_ip = 0x0C39; emu_last_length = 0x0037; emu_last_crc = 0xF372; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_0C40_0010_49EB()
 *
 * @name f__0972_0C40_0010_49EB
 * @implements 0972:0C40:0010:49EB ()
 *
 * Called From: 0972:0C29:0037:F372
 */
void f__0972_0C40_0010_49EB()
{
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_cs); emu_push(0x0C50); emu_cs = 0x0C3A; f__0C3A_1398_000D_C7C7();
	f__0972_0C50_0007_76DC();
}

/**
 * Decompiled function f__0972_0C42_000E_49A3()
 *
 * @name f__0972_0C42_000E_49A3
 * @implements 0972:0C42:000E:49A3 ()
 *
 * Called From: 0972:0C1E:0037:F372
 */
void f__0972_0C42_000E_49A3()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_cs); emu_push(0x0C50); emu_cs = 0x0C3A; f__0C3A_1398_000D_C7C7();
	f__0972_0C50_0007_76DC();
}

/**
 * Decompiled function f__0972_0C50_0007_76DC()
 *
 * @name f__0972_0C50_0007_76DC
 * @implements 0972:0C50:0007:76DC ()
 *
 * Called From: 0972:0C50:000E:49A3
 * Called From: 0972:0C50:0010:49EB
 */
void f__0972_0C50_0007_76DC()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0972_0C57_0003_0212(); return;
}

/**
 * Decompiled function f__0972_0C57_0003_0212()
 *
 * @name f__0972_0C57_0003_0212
 * @implements 0972:0C57:0003:0212 ()
 *
 * Called From: 0972:0C55:0007:76DC
 */
void f__0972_0C57_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_0C5A_0015_761B()
 *
 * @name f__0972_0C5A_0015_761B
 * @implements 0972:0C5A:0015:761B ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0972_0C5A_0015_761B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { f__0972_0C6F_000D_C80A(); return; }
	emu_ip = 0x0E7D; emu_last_cs = 0x0972; emu_last_ip = 0x0C6C; emu_last_length = 0x0015; emu_last_crc = 0x761B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_0C6F_000D_C80A()
 *
 * @name f__0972_0C6F_000D_C80A
 * @implements 0972:0C6F:000D:C80A ()
 *
 * Called From: 0972:0C6A:0015:761B
 */
void f__0972_0C6F_000D_C80A()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_cs); emu_push(0x0C7C); emu_cs = 0x1A34; f__1A34_3491_0032_DE4A();
	f__0972_0C7C_0027_CEA6();
}

/**
 * Decompiled function f__0972_0C7C_0027_CEA6()
 *
 * @name f__0972_0C7C_0027_CEA6
 * @implements 0972:0C7C:0027:CEA6 ()
 *
 * Called From: 0972:0C7C:000D:C80A
 */
void f__0972_0C7C_0027_CEA6()
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
	if (emu_flags.zf) { emu_ip = 0x0CA3; emu_last_cs = 0x0972; emu_last_ip = 0x0C9E; emu_last_length = 0x0027; emu_last_crc = 0xCEA6; emu_call(); return; } // Jump does not resolve
	f__0972_0D27_000F_A715(); return;
}

/**
 * Decompiled function f__0972_0D21_0006_2806()
 *
 * @name f__0972_0D21_0006_2806
 * @implements 0972:0D21:0006:2806 ()
 *
 * Called From: 0972:0E7A:0004:01B4
 */
void f__0972_0D21_0006_2806()
{
	emu_movw(&emu_ax.x, 0x1);
	f__0972_0E82_0005_04BA(); return;
}

/**
 * Decompiled function f__0972_0D27_000F_A715()
 *
 * @name f__0972_0D27_000F_A715
 * @implements 0972:0D27:000F:A715 ()
 *
 * Called From: 0972:0CA0:0027:CEA6
 */
void f__0972_0D27_000F_A715()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { emu_ip = 0x0D36; emu_last_cs = 0x0972; emu_last_ip = 0x0D2F; emu_last_length = 0x000F; emu_last_crc = 0xA715; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__0972_0D38_000E_C63A(); return;
}

/**
 * Decompiled function f__0972_0D38_000E_C63A()
 *
 * @name f__0972_0D38_000E_C63A
 * @implements 0972:0D38:000E:C63A ()
 *
 * Called From: 0972:0D34:000F:A715
 */
void f__0972_0D38_000E_C63A()
{
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_cs); emu_push(0x0D46); emu_cs = 0x0C3A; f__0C3A_247A_0015_692D();
	f__0972_0D46_000C_DF79();
}

/**
 * Decompiled function f__0972_0D46_000C_DF79()
 *
 * @name f__0972_0D46_000C_DF79
 * @implements 0972:0D46:000C:DF79 ()
 *
 * Called From: 0972:0D46:000E:C63A
 */
void f__0972_0D46_000C_DF79()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__0972_0D52_0015_9E5F(); return; }
	emu_ip = 0x0E7D; emu_last_cs = 0x0972; emu_last_ip = 0x0D4F; emu_last_length = 0x000C; emu_last_crc = 0xDF79; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_0D52_0015_9E5F()
 *
 * @name f__0972_0D52_0015_9E5F
 * @implements 0972:0D52:0015:9E5F ()
 *
 * Called From: 0972:0D4D:000C:DF79
 */
void f__0972_0D52_0015_9E5F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0D67); emu_cs = 0x0F3F; f__0F3F_009D_0017_C9BF();
	f__0972_0D67_0008_70E2();
}

/**
 * Decompiled function f__0972_0D67_0008_70E2()
 *
 * @name f__0972_0D67_0008_70E2
 * @implements 0972:0D67:0008:70E2 ()
 *
 * Called From: 0972:0D67:0015:9E5F
 */
void f__0972_0D67_0008_70E2()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D6F); emu_cs = 0x0F3F; f__0F3F_0275_0019_B286();
	f__0972_0D6F_000F_B05E();
}

/**
 * Decompiled function f__0972_0D6F_000F_B05E()
 *
 * @name f__0972_0D6F_000F_B05E
 * @implements 0972:0D6F:000F:B05E ()
 *
 * Called From: 0972:0D6F:0008:70E2
 */
void f__0972_0D6F_000F_B05E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0D7E); emu_cs = 0x1A34; f__1A34_2958_0013_AFBB();
	f__0972_0D7E_000A_B38F();
}

/**
 * Decompiled function f__0972_0D7E_000A_B38F()
 *
 * @name f__0972_0D7E_000A_B38F
 * @implements 0972:0D7E:000A:B38F ()
 *
 * Called From: 0972:0D7E:000F:B05E
 */
void f__0972_0D7E_000A_B38F()
{
	emu_addws(&emu_sp, 0x8);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__0972_0D88_003A_2770(); return; }
	emu_ip = 0x0E7D; emu_last_cs = 0x0972; emu_last_ip = 0x0D85; emu_last_length = 0x000A; emu_last_crc = 0xB38F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_0D88_003A_2770()
 *
 * @name f__0972_0D88_003A_2770
 * @implements 0972:0D88:003A:2770 ()
 *
 * Called From: 0972:0D83:000A:B38F
 */
void f__0972_0D88_003A_2770()
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
	emu_push(emu_cs); emu_push(0x0DC2); emu_cs = 0x0F3F; f__0F3F_0125_000D_0828();
	f__0972_0DC2_0012_BE60();
}

/**
 * Decompiled function f__0972_0DC2_0012_BE60()
 *
 * @name f__0972_0DC2_0012_BE60
 * @implements 0972:0DC2:0012:BE60 ()
 *
 * Called From: 0972:0DC2:003A:2770
 */
void f__0972_0DC2_0012_BE60()
{
	emu_addws(&emu_sp, 0x8);
	emu_andw(&emu_ax.x, 0xE0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0DD4); emu_cs = 0x1A34; f__1A34_1E99_0012_0D98();
	f__0972_0DD4_0020_9366();
}

/**
 * Decompiled function f__0972_0DD4_0020_9366()
 *
 * @name f__0972_0DD4_0020_9366
 * @implements 0972:0DD4:0020:9366 ()
 *
 * Called From: 0972:0DD4:0012:BE60
 */
void f__0972_0DD4_0020_9366()
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
	emu_push(emu_cs); emu_push(0x0DF4); emu_cs = 0x1A34; f__1A34_1E99_0012_0D98();
	f__0972_0DF4_001E_F554();
}

/**
 * Decompiled function f__0972_0DF4_001E_F554()
 *
 * @name f__0972_0DF4_001E_F554
 * @implements 0972:0DF4:001E:F554 ()
 *
 * Called From: 0972:0DF4:0020:9366
 */
void f__0972_0DF4_001E_F554()
{
	emu_addws(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x0E14; emu_last_cs = 0x0972; emu_last_ip = 0x0E03; emu_last_length = 0x001E; emu_last_crc = 0xF554; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x6A);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E12); emu_cs = 0x10E4; f__10E4_0117_0015_0AFA();
	f__0972_0E12_001D_F723();
}

/**
 * Decompiled function f__0972_0E12_001D_F723()
 *
 * @name f__0972_0E12_001D_F723
 * @implements 0972:0E12:001D:F723 ()
 *
 * Called From: 0972:0E12:001E:F554
 */
void f__0972_0E12_001D_F723()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x0E32; emu_last_cs = 0x0972; emu_last_ip = 0x0E1D; emu_last_length = 0x001D; emu_last_crc = 0xF723; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCA));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_cs); emu_push(0x0E2F); emu_cs = 0x0C3A; f__0C3A_1398_000D_C7C7();
	f__0972_0E2F_0010_9E8F();
}

/**
 * Decompiled function f__0972_0E2F_0010_9E8F()
 *
 * @name f__0972_0E2F_0010_9E8F
 * @implements 0972:0E2F:0010:9E8F ()
 *
 * Called From: 0972:0E2F:001D:F723
 */
void f__0972_0E2F_0010_9E8F()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x394E));
	emu_push(emu_cs); emu_push(0x0E3F); emu_cs = 0x0C10; f__0C10_0182_0012_8DA5();
	f__0972_0E3F_002E_6545();
}

/**
 * Decompiled function f__0972_0E3F_002E_6545()
 *
 * @name f__0972_0E3F_002E_6545
 * @implements 0972:0E3F:002E:6545 ()
 *
 * Called From: 0972:0E3F:0010:9E8F
 */
void f__0972_0E3F_002E_6545()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x0E7A; emu_last_cs = 0x0972; emu_last_ip = 0x0E4E; emu_last_length = 0x002E; emu_last_crc = 0x6545; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xD);
	if (emu_flags.zf) { emu_ip = 0x0E7A; emu_last_cs = 0x0972; emu_last_ip = 0x0E59; emu_last_length = 0x002E; emu_last_crc = 0x6545; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { emu_ip = 0x0E6D; emu_last_cs = 0x0972; emu_last_ip = 0x0E63; emu_last_length = 0x002E; emu_last_crc = 0x6545; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_addw(&emu_ax.x, 0x44);
	f__0972_0E73_0006_0784(); return;
}

/**
 * Decompiled function f__0972_0E73_0006_0784()
 *
 * @name f__0972_0E73_0006_0784
 * @implements 0972:0E73:0006:0784 ()
 *
 * Called From: 0972:0E6B:002E:6545
 */
void f__0972_0E73_0006_0784()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E79); emu_cs = 0x3483; ovl__3483(2);
	f__0972_0E79_0004_01B4();
}

/**
 * Decompiled function f__0972_0E79_0004_01B4()
 *
 * @name f__0972_0E79_0004_01B4
 * @implements 0972:0E79:0004:01B4 ()
 *
 * Called From: 0972:0E79:0006:0784
 */
void f__0972_0E79_0004_01B4()
{
	emu_pop(&emu_cx.x);
	f__0972_0D21_0006_2806(); return;
}

/**
 * Decompiled function f__0972_0E82_0005_04BA()
 *
 * @name f__0972_0E82_0005_04BA
 * @implements 0972:0E82:0005:04BA ()
 *
 * Called From: 0972:0D24:0006:2806
 */
void f__0972_0E82_0005_04BA()
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
 * Decompiled function f__0972_137B_002B_7AF6()
 *
 * @name f__0972_137B_002B_7AF6
 * @implements 0972:137B:002B:7AF6 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0972_137B_002B_7AF6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x13A9; emu_last_cs = 0x0972; emu_last_ip = 0x138B; emu_last_length = 0x002B; emu_last_crc = 0x7AF6; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x13A6); emu_cs = 0x34CD; ovl__34CD(31);
	f__0972_13A6_0007_76DC();
}

/**
 * Decompiled function f__0972_13A6_0007_76DC()
 *
 * @name f__0972_13A6_0007_76DC
 * @implements 0972:13A6:0007:76DC ()
 *
 * Called From: 0972:13A6:002B:7AF6
 */
void f__0972_13A6_0007_76DC()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0972_13AD_0002_00E2(); return;
}

/**
 * Decompiled function f__0972_13AD_0002_00E2()
 *
 * @name f__0972_13AD_0002_00E2
 * @implements 0972:13AD:0002:00E2 ()
 *
 * Called From: 0972:13AB:0007:76DC
 */
void f__0972_13AD_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_13AF_0015_7737()
 *
 * @name f__0972_13AF_0015_7737
 * @implements 0972:13AF:0015:7737 ()
 *
 * Called From: 15C2:0932:003A:F833
 */
void f__0972_13AF_0015_7737()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { f__0972_13C4_000F_925E(); return; }
	emu_ip = 0x1508; emu_last_cs = 0x0972; emu_last_ip = 0x13C1; emu_last_length = 0x0015; emu_last_crc = 0x7737; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_13C4_000F_925E()
 *
 * @name f__0972_13C4_000F_925E
 * @implements 0972:13C4:000F:925E ()
 *
 * Called From: 0972:13BF:0015:7737
 */
void f__0972_13C4_000F_925E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x13D3); emu_cs = 0x0FE4; f__0FE4_05FD_002C_E199();
	f__0972_13D3_001C_9D4C();
}

/**
 * Decompiled function f__0972_13D3_001C_9D4C()
 *
 * @name f__0972_13D3_001C_9D4C
 * @implements 0972:13D3:001C:9D4C ()
 *
 * Called From: 0972:13D3:000F:925E
 */
void f__0972_13D3_001C_9D4C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BD0));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x13EF); emu_cs = 0x34C1; ovl__34C1(2);
	f__0972_13EF_0011_9D83();
}

/**
 * Decompiled function f__0972_13EF_0011_9D83()
 *
 * @name f__0972_13EF_0011_9D83
 * @implements 0972:13EF:0011:9D83 ()
 *
 * Called From: 0972:13EF:001C:9D4C
 */
void f__0972_13EF_0011_9D83()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1400); emu_cs = 0x34C1; ovl__34C1(0);
	f__0972_1400_0017_BA14();
}

/**
 * Decompiled function f__0972_1400_0017_BA14()
 *
 * @name f__0972_1400_0017_BA14
 * @implements 0972:1400:0017:BA14 ()
 *
 * Called From: 0972:1400:0011:9D83
 */
void f__0972_1400_0017_BA14()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x58));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((emu_flags.cf || emu_flags.zf)) { f__0972_1417_0020_2920(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__0972_141F_0018_21FA(); return;
}

/**
 * Decompiled function f__0972_1417_0020_2920()
 *
 * @name f__0972_1417_0020_2920
 * @implements 0972:1417:0020:2920 ()
 *
 * Called From: 0972:1410:0017:BA14
 */
void f__0972_1417_0020_2920()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x58));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), 0x0);
	if (emu_flags.zf) { f__0972_143D_0009_0FD9(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { f__0972_1437_000F_078C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__0972_143A_000C_47D0(); return;
}

/**
 * Decompiled function f__0972_141F_0018_21FA()
 *
 * @name f__0972_141F_0018_21FA
 * @implements 0972:141F:0018:21FA ()
 *
 * Called From: 0972:1415:0017:BA14
 */
void f__0972_141F_0018_21FA()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), 0x0);
	if (emu_flags.zf) { emu_ip = 0x143D; emu_last_cs = 0x0972; emu_last_ip = 0x142A; emu_last_length = 0x0018; emu_last_crc = 0x21FA; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x1437; emu_last_cs = 0x0972; emu_last_ip = 0x1430; emu_last_length = 0x0018; emu_last_crc = 0x21FA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__0972_143A_000C_47D0(); return;
}

/**
 * Decompiled function f__0972_1437_000F_078C()
 *
 * @name f__0972_1437_000F_078C
 * @implements 0972:1437:000F:078C ()
 *
 * Called From: 0972:1430:0020:2920
 */
void f__0972_1437_000F_078C()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0972_1446_0019_45D8(); return; }
	emu_ip = 0x1506; emu_last_cs = 0x0972; emu_last_ip = 0x1443; emu_last_length = 0x000F; emu_last_crc = 0x078C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_143A_000C_47D0()
 *
 * @name f__0972_143A_000C_47D0
 * @implements 0972:143A:000C:47D0 ()
 *
 * Called From: 0972:1435:0018:21FA
 * Called From: 0972:1435:0020:2920
 */
void f__0972_143A_000C_47D0()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__0972_1446_0019_45D8(); return; }
	emu_ip = 0x1506; emu_last_cs = 0x0972; emu_last_ip = 0x1443; emu_last_length = 0x000C; emu_last_crc = 0x47D0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__0972_143D_0009_0FD9()
 *
 * @name f__0972_143D_0009_0FD9
 * @implements 0972:143D:0009:0FD9 ()
 *
 * Called From: 0972:142A:0020:2920
 */
void f__0972_143D_0009_0FD9()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1446; emu_last_cs = 0x0972; emu_last_ip = 0x1441; emu_last_length = 0x0009; emu_last_crc = 0x0FD9; emu_call(); return; } // Jump does not resolve
	f__0972_1506_0002_038A(); return;
}

/**
 * Decompiled function f__0972_1446_0019_45D8()
 *
 * @name f__0972_1446_0019_45D8
 * @implements 0972:1446:0019:45D8 ()
 *
 * Called From: 0972:1441:000F:078C
 * Called From: 0972:1441:000C:47D0
 */
void f__0972_1446_0019_45D8()
{
	emu_movw(&emu_si, 0x7);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__0972_1469_001A_D13D(); return; }
	emu_movw(&emu_si, 0x7);
	emu_push(emu_cs); emu_push(0x145F); emu_cs = 0x2BB4; emu_ip = 0x1463; emu_last_cs = 0x0972; emu_last_ip = 0x145A; emu_last_length = 0x0019; emu_last_crc = 0x45D8; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__0972_1469_001A_D13D()
 *
 * @name f__0972_1469_001A_D13D
 * @implements 0972:1469:001A:D13D ()
 *
 * Called From: 0972:1455:0019:45D8
 */
void f__0972_1469_001A_D13D()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1483); emu_cs = 0x1423; f__1423_0F34_0017_4318();
	f__0972_1483_0017_FDAF();
}

/**
 * Decompiled function f__0972_1483_0017_FDAF()
 *
 * @name f__0972_1483_0017_FDAF
 * @implements 0972:1483:0017:FDAF ()
 *
 * Called From: 0972:1483:001A:D13D
 */
void f__0972_1483_0017_FDAF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x14A2; emu_last_cs = 0x0972; emu_last_ip = 0x1487; emu_last_length = 0x0017; emu_last_crc = 0xFDAF; emu_call(); return; } // Jump does not resolve
	emu_addw(&emu_get_memory16(emu_ds, 0x00, -0x72C1), emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, -0x72C1), 0xFDE8);
	if (!emu_flags.cf) { emu_ip = 0x149A; emu_last_cs = 0x0972; emu_last_ip = 0x1493; emu_last_length = 0x0017; emu_last_crc = 0xFDAF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x72C1));
	f__0972_149D_0005_107A(); return;
}

/**
 * Decompiled function f__0972_149D_0005_107A()
 *
 * @name f__0972_149D_0005_107A
 * @implements 0972:149D:0005:107A ()
 *
 * Called From: 0972:1498:0017:FDAF
 */
void f__0972_149D_0005_107A()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x72C1), emu_ax.x);
	f__0972_14B9_000F_9D48(); return;
}

/**
 * Decompiled function f__0972_14B9_000F_9D48()
 *
 * @name f__0972_14B9_000F_9D48
 * @implements 0972:14B9:000F:9D48 ()
 *
 * Called From: 0972:14A0:0005:107A
 */
void f__0972_14B9_000F_9D48()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x14C8); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__0972_14C8_003E_4D19();
}

/**
 * Decompiled function f__0972_14C8_003E_4D19()
 *
 * @name f__0972_14C8_003E_4D19
 * @implements 0972:14C8:003E:4D19 ()
 *
 * Called From: 0972:14C8:000F:9D48
 */
void f__0972_14C8_003E_4D19()
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
	if (!emu_flags.zf) { f__0972_14F7_000F_E5E7(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFEFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__0972_151F_0005_04BA(); return;
}

/**
 * Decompiled function f__0972_14F7_000F_E5E7()
 *
 * @name f__0972_14F7_000F_E5E7
 * @implements 0972:14F7:000F:E5E7 ()
 *
 * Called From: 0972:14EC:003E:4D19
 */
void f__0972_14F7_000F_E5E7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00, -0x7BCC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__0972_151F_0005_04BA(); return;
}

/**
 * Decompiled function f__0972_1504_0002_039E()
 *
 * @name f__0972_1504_0002_039E
 * @implements 0972:1504:0002:039E ()
 *
 * Called From: 0972:151D:0004:0756
 */
void f__0972_1504_0002_039E()
{
	f__0972_151F_0005_04BA(); return;
}

/**
 * Decompiled function f__0972_1506_0002_038A()
 *
 * @name f__0972_1506_0002_038A
 * @implements 0972:1506:0002:038A ()
 *
 * Called From: 0972:1443:0009:0FD9
 */
void f__0972_1506_0002_038A()
{
	f__0972_151B_0004_0756(); return;
}

/**
 * Decompiled function f__0972_151B_0004_0756()
 *
 * @name f__0972_151B_0004_0756
 * @implements 0972:151B:0004:0756 ()
 *
 * Called From: 0972:1506:0002:038A
 */
void f__0972_151B_0004_0756()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__0972_1504_0002_039E(); return;
}

/**
 * Decompiled function f__0972_151F_0005_04BA()
 *
 * @name f__0972_151F_0005_04BA
 * @implements 0972:151F:0005:04BA ()
 *
 * Called From: 0972:1504:003E:4D19
 * Called From: 0972:1504:0002:039E
 * Called From: 0972:1504:000F:E5E7
 */
void f__0972_151F_0005_04BA()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
