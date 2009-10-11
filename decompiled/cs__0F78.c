/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0F78_0008_002C_AB63()
 *
 * @name f__0F78_0008_002C_AB63
 * @implements 0F78:0008:002C:AB63 ()
 *
 * Called From: 07D4:02E6:000D:0FE3
 * Called From: 07D4:1332:0011:E99F
 * Called From: 07D4:15D5:0016:4DD5
 */
void f__0F78_0008_002C_AB63()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_cmpw(&emu_si, 0xFFFF);
	if (!emu_flags.zf) {
		emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x3564));
		if (emu_flags.zf) {
			emu_orw(&emu_di, emu_di);
			if (emu_flags.zf) { f__0F78_0031_0003_9DBE(); return; }
		}
	}
	f__0F78_002A_000A_80BD(); return;
}

/**
 * Decompiled function f__0F78_002A_000A_80BD()
 *
 * @name f__0F78_002A_000A_80BD
 * @implements 0F78:002A:000A:80BD ()
 *
 * Called From: 0F78:0024:002C:AB63
 */
void f__0F78_002A_000A_80BD()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x0);
	if (!emu_flags.zf) { f__0F78_0034_0009_542B(); return; }
	f__0F78_0031_0003_9DBE(); return;
}

/**
 * Decompiled function f__0F78_0031_0003_9DBE()
 *
 * @name f__0F78_0031_0003_9DBE
 * @implements 0F78:0031:0003:9DBE ()
 *
 * Called From: 0F78:0028:002C:AB63
 */
void f__0F78_0031_0003_9DBE()
{
	f__0F78_01AE_0006_F7CE(); return;
}

/**
 * Decompiled function f__0F78_0034_0009_542B()
 *
 * @name f__0F78_0034_0009_542B
 * @implements 0F78:0034:0009:542B ()
 *
 * Called From: 0F78:002F:000A:80BD
 * Called From: 0F78:002F:002C:AB63
 */
void f__0F78_0034_0009_542B()
{
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x003D); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__0F78_003D_0020_7C2F(); return;
}

/**
 * Decompiled function f__0F78_003D_0020_7C2F()
 *
 * @name f__0F78_003D_0020_7C2F
 * @implements 0F78:003D:0020:7C2F ()
 *
 */
void f__0F78_003D_0020_7C2F()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3564), 0xFFFF);
	if (emu_flags.zf) { f__0F78_0096_0008_D046(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x3564));
	if (emu_flags.zf) { f__0F78_0096_0008_D046(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x3566);
	f__0F78_008D_0011_3449(); return;
}

/**
 * Decompiled function f__0F78_005D_002F_3722()
 *
 * @name f__0F78_005D_002F_3722
 * @implements 0F78:005D:002F:3722 ()
 *
 * Called From: 0F78:0094:0011:3449
 * Called From: 0F78:0094:0012:745F
 */
void f__0F78_005D_002F_3722()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3564));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_cl, 0x3);
	emu_sarw(&emu_bx, emu_cl);
	emu_movb(&emu_cl, emu_get_memory8(emu_ss, emu_bp, -0x12));
	emu_andb(&emu_cl, 0x7);
	emu_movb(&emu_al, 0x1);
	emu_shlb(&emu_al, emu_cl);
	emu_notb(&emu_al, emu_al);
	emu_andb(&emu_get_memory8(emu_ds, emu_bx, 0x93E5), emu_al);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x008C); emu_cs = 0x07D4; f__07D4_1625_001A_07E5();
	f__0F78_008C_0012_745F(); return;
}

/**
 * Decompiled function f__0F78_008C_0012_745F()
 *
 * @name f__0F78_008C_0012_745F
 * @implements 0F78:008C:0012:745F ()
 *
 */
void f__0F78_008C_0012_745F()
{
	emu_pop(&emu_cx);
	f__0F78_008D_0011_3449(); return;
}

/**
 * Decompiled function f__0F78_008D_0011_3449()
 *
 * @name f__0F78_008D_0011_3449
 * @implements 0F78:008D:0011:3449 ()
 *
 * Called From: 0F78:005B:0020:7C2F
 */
void f__0F78_008D_0011_3449()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (!emu_flags.zf) { f__0F78_005D_002F_3722(); return; }
	f__0F78_0096_0008_D046(); return;
}

/**
 * Decompiled function f__0F78_0096_0008_D046()
 *
 * @name f__0F78_0096_0008_D046
 * @implements 0F78:0096:0008:D046 ()
 *
 * Called From: 0F78:0046:0020:7C2F
 * Called From: 0F78:004C:0020:7C2F
 */
void f__0F78_0096_0008_D046()
{
	emu_cmpw(&emu_si, 0xFFFF);
	if (!emu_flags.zf) { f__0F78_009E_000D_43A4(); return; }
	f__0F78_0164_0011_C0E1(); return;
}

/**
 * Decompiled function f__0F78_009E_000D_43A4()
 *
 * @name f__0F78_009E_000D_43A4
 * @implements 0F78:009E:000D:43A4 ()
 *
 * Called From: 0F78:0099:0008:D046
 * Called From: 0F78:0099:0012:745F
 */
void f__0F78_009E_000D_43A4()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x3564));
	if (!emu_flags.zf) { f__0F78_00AB_0006_BB3C(); return; }
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__0F78_00AB_0006_BB3C(); return; }
	f__0F78_0164_0011_C0E1(); return;
}

/**
 * Decompiled function f__0F78_00AB_0006_BB3C()
 *
 * @name f__0F78_00AB_0006_BB3C
 * @implements 0F78:00AB:0006:BB3C ()
 *
 * Called From: 0F78:00A2:000D:43A4
 * Called From: 0F78:00A6:000D:43A4
 */
void f__0F78_00AB_0006_BB3C()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00B1); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	f__0F78_00B1_0035_3DDF(); return;
}

/**
 * Decompiled function f__0F78_00B1_0035_3DDF()
 *
 * @name f__0F78_00B1_0035_3DDF
 * @implements 0F78:00B1:0035:3DDF ()
 *
 */
void f__0F78_00B1_0035_3DDF()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C0E));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_incw(&emu_dx);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x100);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_incw(&emu_ax);
	emu_movw(&emu_dx, 0xE);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_dx, emu_ax);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00E6); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	f__0F78_00E6_0044_7B39(); return;
}

/**
 * Decompiled function f__0F78_00E6_0044_7B39()
 *
 * @name f__0F78_00E6_0044_7B39
 * @implements 0F78:00E6:0044:7B39 ()
 *
 */
void f__0F78_00E6_0044_7B39()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_subw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C10));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_incw(&emu_dx);
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x88);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_incw(&emu_ax);
	emu_movw(&emu_dx, 0x9);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_dx, emu_ax);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x012A); emu_cs = 0x251B; f__251B_0000_001E_7202();
	f__0F78_012A_000D_2FF9(); return;
}

/**
 * Decompiled function f__0F78_012A_000D_2FF9()
 *
 * @name f__0F78_012A_000D_2FF9
 * @implements 0F78:012A:000D:2FF9 ()
 *
 */
void f__0F78_012A_000D_2FF9()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x3566);
	f__0F78_015B_001A_32E3(); return;
}

/**
 * Decompiled function f__0F78_0137_003E_BA89()
 *
 * @name f__0F78_0137_003E_BA89
 * @implements 0F78:0137:003E:BA89 ()
 *
 * Called From: 0F78:0162:001A:32E3
 * Called From: 0F78:0162:003E:BA89
 */
void f__0F78_0137_003E_BA89()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_cl, 0x3);
	emu_sarw(&emu_bx, emu_cl);
	emu_movb(&emu_cl, emu_get_memory8(emu_ss, emu_bp, -0x12));
	emu_andb(&emu_cl, 0x7);
	emu_movb(&emu_al, 0x1);
	emu_shlb(&emu_al, emu_cl);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx, 0x93E5), emu_al);
	f__0F78_015B_001A_32E3(); return;
}

/**
 * Decompiled function f__0F78_015B_001A_32E3()
 *
 * @name f__0F78_015B_001A_32E3
 * @implements 0F78:015B:001A:32E3 ()
 *
 * Called From: 0F78:0135:000D:2FF9
 */
void f__0F78_015B_001A_32E3()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (!emu_flags.zf) { f__0F78_0137_003E_BA89(); return; }
	f__0F78_0164_0011_C0E1(); return;
}

/**
 * Decompiled function f__0F78_0164_0011_C0E1()
 *
 * @name f__0F78_0164_0011_C0E1
 * @implements 0F78:0164:0011:C0E1 ()
 *
 * Called From: 0F78:00A8:000D:43A4
 */
void f__0F78_0164_0011_C0E1()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) { f__0F78_01A1_0008_1199(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__0F78_01A1_0008_1199(); return; }
	emu_push(emu_cs); emu_push(0x0175); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	f__0F78_0175_0024_4F8D(); return;
}

/**
 * Decompiled function f__0F78_0175_0024_4F8D()
 *
 * @name f__0F78_0175_0024_4F8D
 * @implements 0F78:0175:0024:4F8D ()
 *
 */
void f__0F78_0175_0024_4F8D()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x40);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x88);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x20);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x88);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x20);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0199); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	f__0F78_0199_0008_43E5(); return;
}

/**
 * Decompiled function f__0F78_0199_0008_43E5()
 *
 * @name f__0F78_0199_0008_43E5
 * @implements 0F78:0199:0008:43E5 ()
 *
 */
void f__0F78_0199_0008_43E5()
{
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x01A1); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	f__0F78_01A1_0008_1199(); return;
}

/**
 * Decompiled function f__0F78_01A1_0008_1199()
 *
 * @name f__0F78_01A1_0008_1199
 * @implements 0F78:01A1:0008:1199 ()
 *
 * Called From: 0F78:0168:003E:BA89
 * Called From: 0F78:0168:0011:C0E1
 * Called From: 0F78:016E:003E:BA89
 */
void f__0F78_01A1_0008_1199()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x01A9); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	f__0F78_01A9_000B_91F4(); return;
}

/**
 * Decompiled function f__0F78_01A9_000B_91F4()
 *
 * @name f__0F78_01A9_000B_91F4
 * @implements 0F78:01A9:000B:91F4 ()
 *
 */
void f__0F78_01A9_000B_91F4()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3564), emu_si);
	f__0F78_01AE_0006_F7CE(); return;
}

/**
 * Decompiled function f__0F78_01AE_0006_F7CE()
 *
 * @name f__0F78_01AE_0006_F7CE
 * @implements 0F78:01AE:0006:F7CE ()
 *
 * Called From: 0F78:0031:0003:9DBE
 */
void f__0F78_01AE_0006_F7CE()
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
 * Decompiled function f__0F78_01B4_0016_23DD()
 *
 * @name f__0F78_01B4_0016_23DD
 * @implements 0F78:01B4:0016:23DD ()
 *
 * Called From: 0642:0216:0012:4ECE
 * Called From: 0642:0220:000A:0B5A
 * Called From: 07D4:00FE:0009:FDC6
 * Called From: 07D4:0200:0024:9249
 * Called From: 07D4:0200:0021:3AC0
 * Called From: 07D4:0200:000F:E9F6
 * Called From: 07D4:02D9:000A:0B5A
 * Called From: 0F78:029E:001C:04DB
 * Called From: 0F78:02C7:0029:1FEE
 * Called From: 1A34:10CD:000C:746E
 */
void f__0F78_01B4_0016_23DD()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x35C4));
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x35C4));
	if (!emu_flags.zf) { f__0F78_01CA_0012_8D4D(); return; }
	f__0F78_01C6_0004_7052(); return;
}

/**
 * Decompiled function f__0F78_01C6_0004_7052()
 *
 * @name f__0F78_01C6_0004_7052
 * @implements 0F78:01C6:0004:7052 ()
 *
 * Called From: 0F78:01F9:0008:9F16
 * Called From: 0F78:01F9:0006:C6A4
 */
void f__0F78_01C6_0004_7052()
{
	emu_movw(&emu_ax, emu_di);
	f__0F78_01FB_0004_DE52(); return;
}

/**
 * Decompiled function f__0F78_01CA_0012_8D4D()
 *
 * @name f__0F78_01CA_0012_8D4D
 * @implements 0F78:01CA:0012:8D4D ()
 *
 * Called From: 0F78:01C4:0016:23DD
 */
void f__0F78_01CA_0012_8D4D()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x35C4));
	if (emu_flags.zf) { f__0F78_01DE_0015_BDA3(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x35C4));
	emu_push(emu_cs);
	emu_push(0x01DC); f__0F78_01FF_0010_E2F2();
	f__0F78_01DC_0017_D910(); return;
}

/**
 * Decompiled function f__0F78_01DC_0017_D910()
 *
 * @name f__0F78_01DC_0017_D910
 * @implements 0F78:01DC:0017:D910 ()
 *
 */
void f__0F78_01DC_0017_D910()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__0F78_01DE_0015_BDA3(); return;
}

/**
 * Decompiled function f__0F78_01DE_0015_BDA3()
 *
 * @name f__0F78_01DE_0015_BDA3
 * @implements 0F78:01DE:0015:BDA3 ()
 *
 * Called From: 0F78:01CE:0012:8D4D
 */
void f__0F78_01DE_0015_BDA3()
{
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_flags.zf) { f__0F78_01F5_0006_C6A4(); return; }
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x35C4));
	if (emu_flags.zf) { f__0F78_01F5_0006_C6A4(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x01F3); f__0F78_01FF_0010_E2F2();
	f__0F78_01F3_0008_9F16(); return;
}

/**
 * Decompiled function f__0F78_01F3_0008_9F16()
 *
 * @name f__0F78_01F3_0008_9F16
 * @implements 0F78:01F3:0008:9F16 ()
 *
 */
void f__0F78_01F3_0008_9F16()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__0F78_01F5_0006_C6A4(); return;
}

/**
 * Decompiled function f__0F78_01F5_0006_C6A4()
 *
 * @name f__0F78_01F5_0006_C6A4
 * @implements 0F78:01F5:0006:C6A4 ()
 *
 * Called From: 0F78:01E1:0017:D910
 * Called From: 0F78:01E7:0015:BDA3
 */
void f__0F78_01F5_0006_C6A4()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x35C4), emu_si);
	f__0F78_01C6_0004_7052(); return;
}

/**
 * Decompiled function f__0F78_01FB_0004_DE52()
 *
 * @name f__0F78_01FB_0004_DE52
 * @implements 0F78:01FB:0004:DE52 ()
 *
 * Called From: 0F78:01C8:0016:23DD
 * Called From: 0F78:01C8:0004:7052
 */
void f__0F78_01FB_0004_DE52()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F78_01FF_0010_E2F2()
 *
 * @name f__0F78_01FF_0010_E2F2
 * @implements 0F78:01FF:0010:E2F2 ()
 *
 * Called From: 0F78:01D9:0012:8D4D
 * Called From: 0F78:01F0:0017:D910
 */
void f__0F78_01FF_0010_E2F2()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0xFFFF);
	if (!emu_flags.zf) { f__0F78_020F_0004_DCD9(); return; }
	f__0F78_027F_0006_F7CE(); return;
}

/**
 * Decompiled function f__0F78_020F_0004_DCD9()
 *
 * @name f__0F78_020F_0004_DCD9
 * @implements 0F78:020F:0004:DCD9 ()
 *
 * Called From: 0F78:020B:0010:E2F2
 */
void f__0F78_020F_0004_DCD9()
{
	emu_xorw(&emu_di, emu_di);
	f__0F78_0279_000C_48CC(); return;
}

/**
 * Decompiled function f__0F78_0213_0004_C379()
 *
 * @name f__0F78_0213_0004_C379
 * @implements 0F78:0213:0004:C379 ()
 *
 * Called From: 0F78:027D:000C:48CC
 * Called From: 0F78:027D:0014:6FE1
 * Called From: 0F78:027D:002B:0E75
 */
void f__0F78_0213_0004_C379()
{
	emu_xorw(&emu_si, emu_si);
	f__0F78_0272_0013_0FE5(); return;
}

/**
 * Decompiled function f__0F78_0217_0007_5B94()
 *
 * @name f__0F78_0217_0007_5B94
 * @implements 0F78:0217:0007:5B94 ()
 *
 * Called From: 0F78:0276:0013:0FE5
 * Called From: 0F78:0276:0014:6FE1
 * Called From: 0F78:0276:002B:0E75
 */
void f__0F78_0217_0007_5B94()
{
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x021E); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	f__0F78_021E_001C_FC04(); return;
}

/**
 * Decompiled function f__0F78_021E_001C_FC04()
 *
 * @name f__0F78_021E_001C_FC04
 * @implements 0F78:021E:001C:FC04 ()
 *
 */
void f__0F78_021E_001C_FC04()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x023A); emu_cs = 0x34CD; ovl__34CD(29);
	f__0F78_023A_0020_F0F7(); return;
}

/**
 * Decompiled function f__0F78_023A_0020_F0F7()
 *
 * @name f__0F78_023A_0020_F0F7
 * @implements 0F78:023A:0020:F0F7 ()
 *
 */
void f__0F78_023A_0020_F0F7()
{
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_flags.zf) { f__0F78_025A_002B_0E75(); return; }
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cl, 0x3);
	emu_sarw(&emu_bx, emu_cl);
	emu_movb(&emu_cl, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_andb(&emu_cl, 0x7);
	emu_movb(&emu_al, 0x1);
	emu_shlb(&emu_al, emu_cl);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx, 0x95E5), emu_al);
	f__0F78_0271_0014_6FE1(); return;
}

/**
 * Decompiled function f__0F78_025A_002B_0E75()
 *
 * @name f__0F78_025A_002B_0E75
 * @implements 0F78:025A:002B:0E75 ()
 *
 * Called From: 0F78:0241:0020:F0F7
 */
void f__0F78_025A_002B_0E75()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cl, 0x3);
	emu_sarw(&emu_bx, emu_cl);
	emu_movb(&emu_cl, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_andb(&emu_cl, 0x7);
	emu_movb(&emu_al, 0x1);
	emu_shlb(&emu_al, emu_cl);
	emu_notb(&emu_al, emu_al);
	emu_andb(&emu_get_memory8(emu_ds, emu_bx, 0x95E5), emu_al);
	f__0F78_0271_0014_6FE1(); return;
}

/**
 * Decompiled function f__0F78_0271_0014_6FE1()
 *
 * @name f__0F78_0271_0014_6FE1
 * @implements 0F78:0271:0014:6FE1 ()
 *
 * Called From: 0F78:0258:0020:F0F7
 */
void f__0F78_0271_0014_6FE1()
{
	emu_incw(&emu_si);
	f__0F78_0272_0013_0FE5(); return;
}

/**
 * Decompiled function f__0F78_0272_0013_0FE5()
 *
 * @name f__0F78_0272_0013_0FE5
 * @implements 0F78:0272:0013:0FE5 ()
 *
 * Called From: 0F78:0215:0004:C379
 */
void f__0F78_0272_0013_0FE5()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x3A04));
	if ((emu_flags.sf != emu_flags.of)) { f__0F78_0217_0007_5B94(); return; }
	emu_incw(&emu_di);
	f__0F78_0279_000C_48CC(); return;
}

/**
 * Decompiled function f__0F78_0279_000C_48CC()
 *
 * @name f__0F78_0279_000C_48CC
 * @implements 0F78:0279:000C:48CC ()
 *
 * Called From: 0F78:0211:0004:DCD9
 */
void f__0F78_0279_000C_48CC()
{
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x3A06));
	if ((emu_flags.sf != emu_flags.of)) { f__0F78_0213_0004_C379(); return; }
	f__0F78_027F_0006_F7CE(); return;
}

/**
 * Decompiled function f__0F78_027F_0006_F7CE()
 *
 * @name f__0F78_027F_0006_F7CE
 * @implements 0F78:027F:0006:F7CE ()
 *
 * Called From: 0F78:020D:0010:E2F2
 */
void f__0F78_027F_0006_F7CE()
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
 * Decompiled function f__0F78_0285_001C_04DB()
 *
 * @name f__0F78_0285_001C_04DB
 * @implements 0F78:0285:001C:04DB ()
 *
 * Called From: 0F78:03BB:0021:A39A
 * Called From: 0F78:03D2:0007:80C9
 * Called From: B4E9:02BE:001A:E38F
 * Called From: B511:0406:002D:9F7E
 */
void f__0F78_0285_001C_04DB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x35C6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x02CB; emu_last_cs = 0x0F78; emu_last_ip = 0x0297; emu_last_length = 0x001C; emu_last_crc = 0x04DB; emu_call(); return; }
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x02A1); f__0F78_01B4_0016_23DD();
	f__0F78_02A1_0029_1FEE(); return;
}

/**
 * Decompiled function f__0F78_02A1_0029_1FEE()
 *
 * @name f__0F78_02A1_0029_1FEE
 * @implements 0F78:02A1:0029:1FEE ()
 *
 */
void f__0F78_02A1_0029_1FEE()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x35C6), emu_si);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2E40));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A04), emu_ax);
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2E42));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A06), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x02CA); f__0F78_01B4_0016_23DD();
	f__0F78_02CA_0006_DFE7(); return;
}

/**
 * Decompiled function f__0F78_02CA_0006_DFE7()
 *
 * @name f__0F78_02CA_0006_DFE7
 * @implements 0F78:02CA:0006:DFE7 ()
 *
 */
void f__0F78_02CA_0006_DFE7()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__0F78_02D0_0005_8BCF(); return;
}

/**
 * Decompiled function f__0F78_02D0_0005_8BCF()
 *
 * @name f__0F78_02D0_0005_8BCF
 * @implements 0F78:02D0:0005:8BCF ()
 *
 * Called From: 0F78:02CE:0006:DFE7
 */
void f__0F78_02D0_0005_8BCF()
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
 * Decompiled function f__0F78_02D5_0014_4ABC()
 *
 * @name f__0F78_02D5_0014_4ABC
 * @implements 0F78:02D5:0014:4ABC ()
 *
 * Called From: 0AEC:0040:0007:0BB0
 * Called From: 0AEC:0778:0006:0B02
 * Called From: 0AEC:07E1:0005:5303
 * Called From: 0AEC:07E1:000F:54F3
 * Called From: B4E9:00DE:0009:049C
 * Called From: B511:0386:0012:C11C
 */
void f__0F78_02D5_0014_4ABC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x1);
	if (!emu_flags.zf) { f__0F78_02E9_0011_CCF5(); return; }
	f__0F78_0430_0005_8BCF(); return;
}

/**
 * Decompiled function f__0F78_02E9_0011_CCF5()
 *
 * @name f__0F78_02E9_0011_CCF5
 * @implements 0F78:02E9:0011:CCF5 ()
 *
 * Called From: 0F78:02E4:0014:4ABC
 */
void f__0F78_02E9_0011_CCF5()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x2);
	if (!emu_flags.zf) { f__0F78_0302_0025_B4FB(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E2));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02FA); emu_cs = 0x0C3A; f__0C3A_0C5C_004D_2837();
	f__0F78_02FA_0008_CF79(); return;
}

/**
 * Decompiled function f__0F78_02FA_0008_CF79()
 *
 * @name f__0F78_02FA_0008_CF79
 * @implements 0F78:02FA:0008:CF79 ()
 *
 */
void f__0F78_02FA_0008_CF79()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38EC), emu_ax);
	f__0F78_042C_0009_D58F(); return;
}

/**
 * Decompiled function f__0F78_0302_0025_B4FB()
 *
 * @name f__0F78_0302_0025_B4FB
 * @implements 0F78:0302:0025:B4FB ()
 *
 * Called From: 0F78:02EE:0011:CCF5
 */
void f__0F78_0302_0025_B4FB()
{
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x1));
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39F2));
	if (!emu_flags.zf) { f__0F78_0327_0006_66E9(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (!emu_flags.zf) { f__0F78_0327_0006_66E9(); return; }
	/* Unresolved jump */ emu_ip = 0x0424; emu_last_cs = 0x0F78; emu_last_ip = 0x0324; emu_last_length = 0x0025; emu_last_crc = 0xB4FB; emu_call();
}

/**
 * Decompiled function f__0F78_0327_0006_66E9()
 *
 * @name f__0F78_0327_0006_66E9
 * @implements 0F78:0327:0006:66E9 ()
 *
 * Called From: 0F78:031B:0025:B4FB
 */
void f__0F78_0327_0006_66E9()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x032D); emu_cs = 0x34CD; ovl__34CD(30);
	f__0F78_032D_0012_B1AE(); return;
}

/**
 * Decompiled function f__0F78_032D_0012_B1AE()
 *
 * @name f__0F78_032D_0012_B1AE
 * @implements 0F78:032D:0012:B1AE ()
 *
 */
void f__0F78_032D_0012_B1AE()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__0F78_033F_004C_F314(); return; }
	f__0F78_03CE_0007_80C9(); return;
}

/**
 * Decompiled function f__0F78_033F_004C_F314()
 *
 * @name f__0F78_033F_004C_F314
 * @implements 0F78:033F:004C:F314 ()
 *
 * Called From: 0F78:033A:0012:B1AE
 */
void f__0F78_033F_004C_F314()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	emu_movws(&emu_ax, emu_al);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (!emu_flags.zf) { f__0F78_038D_0010_1771(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x0);
	if (emu_flags.zf) { f__0F78_038D_0010_1771(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2C94);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2C94);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x35));
	emu_push(emu_cs); emu_push(0x038B); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
	f__0F78_038B_0012_7BE7(); return;
}

/**
 * Decompiled function f__0F78_038B_0012_7BE7()
 *
 * @name f__0F78_038B_0012_7BE7
 * @implements 0F78:038B:0012:7BE7 ()
 *
 */
void f__0F78_038B_0012_7BE7()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__0F78_038D_0010_1771(); return;
}

/**
 * Decompiled function f__0F78_038D_0010_1771()
 *
 * @name f__0F78_038D_0010_1771
 * @implements 0F78:038D:0010:1771 ()
 *
 * Called From: 0F78:034B:004C:F314
 * Called From: 0F78:0352:004C:F314
 */
void f__0F78_038D_0010_1771()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x039D); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	f__0F78_039D_0021_A39A(); return;
}

/**
 * Decompiled function f__0F78_039D_0021_A39A()
 *
 * @name f__0F78_039D_0021_A39A
 * @implements 0F78:039D:0021:A39A ()
 *
 */
void f__0F78_039D_0021_A39A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, 0x60);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2C94);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x44));
	emu_push(emu_cs);
	emu_push(0x03BE); f__0F78_0285_001C_04DB();
	f__0F78_03BE_000C_C461(); return;
}

/**
 * Decompiled function f__0F78_03BE_000C_C461()
 *
 * @name f__0F78_03BE_000C_C461
 * @implements 0F78:03BE:000C:C461 ()
 *
 */
void f__0F78_03BE_000C_C461()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x03CA); emu_cs = 0x0C3A; f__0C3A_092A_0013_A4A8();
	f__0F78_03CA_0004_5F1F(); return;
}

/**
 * Decompiled function f__0F78_03CA_0004_5F1F()
 *
 * @name f__0F78_03CA_0004_5F1F
 * @implements 0F78:03CA:0004:5F1F ()
 *
 */
void f__0F78_03CA_0004_5F1F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__0F78_03D6_000D_0707(); return;
}

/**
 * Decompiled function f__0F78_03CE_0007_80C9()
 *
 * @name f__0F78_03CE_0007_80C9
 * @implements 0F78:03CE:0007:80C9 ()
 *
 * Called From: 0F78:033C:0012:B1AE
 */
void f__0F78_03CE_0007_80C9()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03D5); f__0F78_0285_001C_04DB();
	f__0F78_03D5_000E_0663(); return;
}

/**
 * Decompiled function f__0F78_03D5_000E_0663()
 *
 * @name f__0F78_03D5_000E_0663
 * @implements 0F78:03D5:000E:0663 ()
 *
 */
void f__0F78_03D5_000E_0663()
{
	emu_pop(&emu_cx);
	f__0F78_03D6_000D_0707(); return;
}

/**
 * Decompiled function f__0F78_03D6_000D_0707()
 *
 * @name f__0F78_03D6_000D_0707
 * @implements 0F78:03D6:000D:0707 ()
 *
 * Called From: 0F78:03CC:0004:5F1F
 */
void f__0F78_03D6_000D_0707()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x1);
	if (emu_flags.zf) { f__0F78_0422_0002_C43A(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03E3); emu_cs = 0x34CD; ovl__34CD(26);
	f__0F78_03E3_0025_77BC(); return;
}

/**
 * Decompiled function f__0F78_03E3_0025_77BC()
 *
 * @name f__0F78_03E3_0025_77BC
 * @implements 0F78:03E3:0025:77BC ()
 *
 */
void f__0F78_03E3_0025_77BC()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__0F78_040C_0014_EE7E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if (emu_flags.zf) { f__0F78_040A_0002_CB3A(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0408); emu_cs = 0x1A34; f__1A34_0F48_0018_0DB8();
	f__0F78_0408_0004_501F(); return;
}

/**
 * Decompiled function f__0F78_0408_0004_501F()
 *
 * @name f__0F78_0408_0004_501F
 * @implements 0F78:0408:0004:501F ()
 *
 */
void f__0F78_0408_0004_501F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__0F78_040A_0002_CB3A(); return;
}

/**
 * Decompiled function f__0F78_040A_0002_CB3A()
 *
 * @name f__0F78_040A_0002_CB3A
 * @implements 0F78:040A:0002:CB3A ()
 *
 * Called From: 0F78:03FB:0025:77BC
 */
void f__0F78_040A_0002_CB3A()
{
	f__0F78_0422_0002_C43A(); return;
}

/**
 * Decompiled function f__0F78_040C_0014_EE7E()
 *
 * @name f__0F78_040C_0014_EE7E
 * @implements 0F78:040C:0014:EE7E ()
 *
 * Called From: 0F78:03F0:0025:77BC
 */
void f__0F78_040C_0014_EE7E()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_flags.zf) { f__0F78_0422_0002_C43A(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0420); emu_cs = 0x1A34; f__1A34_0F48_0018_0DB8();
	f__0F78_0420_0004_5F1F(); return;
}

/**
 * Decompiled function f__0F78_0420_0004_5F1F()
 *
 * @name f__0F78_0420_0004_5F1F
 * @implements 0F78:0420:0004:5F1F ()
 *
 */
void f__0F78_0420_0004_5F1F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__0F78_0422_0002_C43A(); return;
}

/**
 * Decompiled function f__0F78_0422_0002_C43A()
 *
 * @name f__0F78_0422_0002_C43A
 * @implements 0F78:0422:0002:C43A ()
 *
 * Called From: 0F78:03DB:000E:0663
 * Called From: 0F78:040A:0004:501F
 * Called From: 0F78:040A:0002:CB3A
 * Called From: 0F78:0413:0014:EE7E
 */
void f__0F78_0422_0002_C43A()
{
	f__0F78_042C_0009_D58F(); return;
}

/**
 * Decompiled function f__0F78_042C_0009_D58F()
 *
 * @name f__0F78_042C_0009_D58F
 * @implements 0F78:042C:0009:D58F ()
 *
 * Called From: 0F78:02FF:0008:CF79
 * Called From: 0F78:0422:0002:C43A
 * Called From: 0F78:0422:0004:5F1F
 */
void f__0F78_042C_0009_D58F()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A02), emu_si);
	f__0F78_0430_0005_8BCF(); return;
}

/**
 * Decompiled function f__0F78_0430_0005_8BCF()
 *
 * @name f__0F78_0430_0005_8BCF
 * @implements 0F78:0430:0005:8BCF ()
 *
 * Called From: 0F78:02E6:0014:4ABC
 */
void f__0F78_0430_0005_8BCF()
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
 * Decompiled function f__0F78_0435_000E_32E0()
 *
 * @name f__0F78_0435_000E_32E0
 * @implements 0F78:0435:000E:32E0 ()
 *
 * Called From: 0642:04E3:0006:13CC
 * Called From: 0642:04E3:0009:1090
 * Called From: 0AEC:01ED:0016:5CAC
 * Called From: 0AEC:01ED:0022:10B3
 */
void f__0F78_0435_000E_32E0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x0443); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	f__0F78_0443_0017_6AE3(); return;
}

/**
 * Decompiled function f__0F78_0443_0017_6AE3()
 *
 * @name f__0F78_0443_0017_6AE3
 * @implements 0F78:0443:0017:6AE3 ()
 *
 */
void f__0F78_0443_0017_6AE3()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x35C8));
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x045A); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	f__0F78_045A_0020_E45E(); return;
}

/**
 * Decompiled function f__0F78_045A_0020_E45E()
 *
 * @name f__0F78_045A_0020_E45E
 * @implements 0F78:045A:0020:E45E ()
 *
 */
void f__0F78_045A_0020_E45E()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x35CA));
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3C0E), emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__0F78_047A_0020_30BA(); return; }
	emu_movw(&emu_ax, emu_si);
	f__0F78_0486_0014_085E(); return;
}

/**
 * Decompiled function f__0F78_047A_0020_30BA()
 *
 * @name f__0F78_047A_0020_30BA
 * @implements 0F78:047A:0020:30BA ()
 *
 * Called From: 0F78:0474:0020:E45E
 */
void f__0F78_047A_0020_30BA()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C0E));
	f__0F78_0486_0014_085E(); return;
}

/**
 * Decompiled function f__0F78_0486_0014_085E()
 *
 * @name f__0F78_0486_0014_085E
 * @implements 0F78:0486:0014:085E ()
 *
 * Called From: 0F78:0478:0020:E45E
 */
void f__0F78_0486_0014_085E()
{
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3C10), emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__0F78_049A_0031_D0D9(); return; }
	emu_movw(&emu_ax, emu_di);
	f__0F78_04A6_0025_A2F9(); return;
}

/**
 * Decompiled function f__0F78_049A_0031_D0D9()
 *
 * @name f__0F78_049A_0031_D0D9
 * @implements 0F78:049A:0031:D0D9 ()
 *
 * Called From: 0F78:0494:0014:085E
 * Called From: 0F78:0494:0020:30BA
 */
void f__0F78_049A_0031_D0D9()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C10));
	f__0F78_04A6_0025_A2F9(); return;
}

/**
 * Decompiled function f__0F78_04A6_0025_A2F9()
 *
 * @name f__0F78_04A6_0025_A2F9
 * @implements 0F78:04A6:0025:A2F9 ()
 *
 * Called From: 0F78:0498:0014:085E
 * Called From: 0F78:0498:0020:30BA
 */
void f__0F78_04A6_0025_A2F9()
{
	emu_movw(&emu_di, emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C0E));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C12));
	emu_addw(&emu_ax, 0xFFF1);
	emu_cmpw(&emu_ax, emu_si);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0F78_04CB_0040_9F1F(); return; }
	emu_movw(&emu_ax, emu_si);
	f__0F78_04E6_0025_1314(); return;
}

/**
 * Decompiled function f__0F78_04CB_0040_9F1F()
 *
 * @name f__0F78_04CB_0040_9F1F
 * @implements 0F78:04CB:0040:9F1F ()
 *
 * Called From: 0F78:04C5:0025:A2F9
 * Called From: 0F78:04C5:0031:D0D9
 */
void f__0F78_04CB_0040_9F1F()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C0E));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C12));
	emu_addw(&emu_ax, 0xFFF1);
	f__0F78_04E6_0025_1314(); return;
}

/**
 * Decompiled function f__0F78_04E6_0025_1314()
 *
 * @name f__0F78_04E6_0025_1314
 * @implements 0F78:04E6:0025:1314 ()
 *
 * Called From: 0F78:04C9:0025:A2F9
 * Called From: 0F78:04C9:0031:D0D9
 */
void f__0F78_04E6_0025_1314()
{
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C10));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C14));
	emu_addw(&emu_ax, 0xFFF6);
	emu_cmpw(&emu_ax, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__0F78_050B_0024_7C89(); return; }
	emu_movw(&emu_ax, emu_di);
	f__0F78_0526_0009_23D1(); return;
}

/**
 * Decompiled function f__0F78_050B_0024_7C89()
 *
 * @name f__0F78_050B_0024_7C89
 * @implements 0F78:050B:0024:7C89 ()
 *
 * Called From: 0F78:0505:0025:1314
 * Called From: 0F78:0505:0040:9F1F
 */
void f__0F78_050B_0024_7C89()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C10));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x8D09));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C14));
	emu_addw(&emu_ax, 0xFFF6);
	f__0F78_0526_0009_23D1(); return;
}

/**
 * Decompiled function f__0F78_0526_0009_23D1()
 *
 * @name f__0F78_0526_0009_23D1
 * @implements 0F78:0526:0009:23D1 ()
 *
 * Called From: 0F78:0509:0025:1314
 * Called From: 0F78:0509:0040:9F1F
 */
void f__0F78_0526_0009_23D1()
{
	emu_movw(&emu_di, emu_ax);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x052F); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	f__0F78_052F_000A_F28D(); return;
}

/**
 * Decompiled function f__0F78_052F_000A_F28D()
 *
 * @name f__0F78_052F_000A_F28D
 * @implements 0F78:052F:000A:F28D ()
 *
 */
void f__0F78_052F_000A_F28D()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x39FE), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39FE));
	f__0F78_0539_0004_DE52(); return;
}

/**
 * Decompiled function f__0F78_0539_0004_DE52()
 *
 * @name f__0F78_0539_0004_DE52
 * @implements 0F78:0539:0004:DE52 ()
 *
 * Called From: 0F78:0537:000A:F28D
 */
void f__0F78_0539_0004_DE52()
{
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
