/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4B8_0000_001F_3BC3()
 *
 * @name f__B4B8_0000_001F_3BC3
 * @implements B4B8:0000:001F:3BC3 ()
 *
 * Called From: 34B8:003E:0005:0000
 */
void f__B4B8_0000_001F_3BC3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x126);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x76A4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x76A2), emu_dx);
	emu_movw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x001F); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_001F_000B_153A(); return;
}

/**
 * Decompiled function f__B4B8_001F_000B_153A()
 *
 * @name f__B4B8_001F_000B_153A
 * @implements B4B8:001F:000B:153A ()
 *
 */
void f__B4B8_001F_000B_153A()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_xorw(&emu_di, emu_di);
	f__B4B8_004E_000B_175E(); return;
}

/**
 * Decompiled function f__B4B8_002A_0005_517D()
 *
 * @name f__B4B8_002A_0005_517D
 * @implements B4B8:002A:0005:517D ()
 *
 * Called From: B4B8:0052:000B:175E
 * Called From: B4B8:0052:000C:132E
 * Called From: B4B8:0052:002A:0E34
 */
void f__B4B8_002A_0005_517D()
{
	emu_push(emu_cs); emu_push(0x002F); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_002F_002A_0E34(); return;
}

/**
 * Decompiled function f__B4B8_002F_002A_0E34()
 *
 * @name f__B4B8_002F_002A_0E34
 * @implements B4B8:002F:002A:0E34 ()
 *
 */
void f__B4B8_002F_002A_0E34()
{
	emu_andb(&emu_al, 0xF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx, emu_di);
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx, emu_di);
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xA);
	if (!(emu_flags.cf || emu_flags.zf)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
		emu_addw(&emu_bx, emu_di);
		emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xA);
	}
	f__B4B8_004D_000C_132E(); return;
}

/**
 * Decompiled function f__B4B8_004D_000C_132E()
 *
 * @name f__B4B8_004D_000C_132E
 * @implements B4B8:004D:000C:132E ()
 *
 * Called From: B4B8:0042:002A:0E34
 */
void f__B4B8_004D_000C_132E()
{
	emu_incw(&emu_di);
	f__B4B8_004E_000B_175E(); return;
}

/**
 * Decompiled function f__B4B8_004E_000B_175E()
 *
 * @name f__B4B8_004E_000B_175E
 * @implements B4B8:004E:000B:175E ()
 *
 * Called From: B4B8:0028:000B:153A
 */
void f__B4B8_004E_000B_175E()
{
	emu_cmpw(&emu_di, 0x110);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_002A_0005_517D(); return; }
	emu_push(emu_cs); emu_push(0x0059); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0059_0007_6578(); return;
}

/**
 * Decompiled function f__B4B8_0059_0007_6578()
 *
 * @name f__B4B8_0059_0007_6578
 * @implements B4B8:0059:0007:6578 ()
 *
 */
void f__B4B8_0059_0007_6578()
{
	emu_andw(&emu_ax, 0xF);
	emu_movw(&emu_di, emu_ax);
	f__B4B8_00CC_0009_6E80(); return;
}

/**
 * Decompiled function f__B4B8_0060_0005_517D()
 *
 * @name f__B4B8_0060_0005_517D
 * @implements B4B8:0060:0005:517D ()
 *
 * Called From: B4B8:00CE:0009:6E80
 * Called From: B4B8:00CE:002C:7BC6
 */
void f__B4B8_0060_0005_517D()
{
	emu_push(emu_cs); emu_push(0x0065); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0065_000D_0E57(); return;
}

/**
 * Decompiled function f__B4B8_0065_000D_0E57()
 *
 * @name f__B4B8_0065_000D_0E57
 * @implements B4B8:0065:000D:0E57 ()
 *
 */
void f__B4B8_0065_000D_0E57()
{
	emu_andw(&emu_ax, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4B8_00C5_0010_CDEF(); return;
}

/**
 * Decompiled function f__B4B8_0072_001A_F649()
 *
 * @name f__B4B8_0072_001A_F649
 * @implements B4B8:0072:001A:F649 ()
 *
 * Called From: B4B8:00C9:0010:CDEF
 * Called From: B4B8:00C9:002C:7BC6
 */
void f__B4B8_0072_001A_F649()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_bx, 0x2006));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_008C_0012_07F6(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__B4B8_008F_000F_E42E(); return;
}

/**
 * Decompiled function f__B4B8_008C_0012_07F6()
 *
 * @name f__B4B8_008C_0012_07F6
 * @implements B4B8:008C:0012:07F6 ()
 *
 * Called From: B4B8:0086:001A:F649
 */
void f__B4B8_008C_0012_07F6()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__B4B8_008F_000F_E42E(); return;
}

/**
 * Decompiled function f__B4B8_008F_000F_E42E()
 *
 * @name f__B4B8_008F_000F_E42E
 * @implements B4B8:008F:000F:E42E ()
 *
 * Called From: B4B8:008A:001A:F649
 */
void f__B4B8_008F_000F_E42E()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x110);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_009E_000B_411E(); return; }
	emu_movw(&emu_ax, 0x110);
	f__B4B8_00A1_0008_30F2(); return;
}

/**
 * Decompiled function f__B4B8_009E_000B_411E()
 *
 * @name f__B4B8_009E_000B_411E
 * @implements B4B8:009E:000B:411E ()
 *
 * Called From: B4B8:0097:0012:07F6
 * Called From: B4B8:0097:000F:E42E
 */
void f__B4B8_009E_000B_411E()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__B4B8_00A1_0008_30F2(); return;
}

/**
 * Decompiled function f__B4B8_00A1_0008_30F2()
 *
 * @name f__B4B8_00A1_0008_30F2
 * @implements B4B8:00A1:0008:30F2 ()
 *
 * Called From: B4B8:009C:0012:07F6
 */
void f__B4B8_00A1_0008_30F2()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_push(emu_cs); emu_push(0x00A9); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_00A9_002C_7BC6(); return;
}

/**
 * Decompiled function f__B4B8_00A9_002C_7BC6()
 *
 * @name f__B4B8_00A9_002C_7BC6
 * @implements B4B8:00A9:002C:7BC6 ()
 *
 */
void f__B4B8_00A9_002C_7BC6()
{
	emu_andb(&emu_al, 0xF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_dl, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_addb(&emu_dl, emu_al);
	emu_andb(&emu_dl, 0xF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_dl);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4B8_00C5_0010_CDEF(); return;
}

/**
 * Decompiled function f__B4B8_00C5_0010_CDEF()
 *
 * @name f__B4B8_00C5_0010_CDEF
 * @implements B4B8:00C5:0010:CDEF ()
 *
 * Called From: B4B8:0070:000D:0E57
 */
void f__B4B8_00C5_0010_CDEF()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x15);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_0072_001A_F649(); return; }
	emu_decw(&emu_di);
	f__B4B8_00CC_0009_6E80(); return;
}

/**
 * Decompiled function f__B4B8_00CC_0009_6E80()
 *
 * @name f__B4B8_00CC_0009_6E80
 * @implements B4B8:00CC:0009:6E80 ()
 *
 * Called From: B4B8:005E:0007:6578
 */
void f__B4B8_00CC_0009_6E80()
{
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_0060_0005_517D(); return; }
	emu_push(emu_cs); emu_push(0x00D5); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_00D5_0007_4C78(); return;
}

/**
 * Decompiled function f__B4B8_00D5_0007_4C78()
 *
 * @name f__B4B8_00D5_0007_4C78
 * @implements B4B8:00D5:0007:4C78 ()
 *
 */
void f__B4B8_00D5_0007_4C78()
{
	emu_andw(&emu_ax, 0x3);
	emu_movw(&emu_di, emu_ax);
	f__B4B8_013A_000B_81FA(); return;
}

/**
 * Decompiled function f__B4B8_00DC_0005_517D()
 *
 * @name f__B4B8_00DC_0005_517D
 * @implements B4B8:00DC:0005:517D ()
 *
 * Called From: B4B8:013C:000B:81FA
 * Called From: B4B8:013C:0020:37E6
 */
void f__B4B8_00DC_0005_517D()
{
	emu_push(emu_cs); emu_push(0x00E1); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_00E1_000D_0557(); return;
}

/**
 * Decompiled function f__B4B8_00E1_000D_0557()
 *
 * @name f__B4B8_00E1_000D_0557
 * @implements B4B8:00E1:000D:0557 ()
 *
 */
void f__B4B8_00E1_000D_0557()
{
	emu_andw(&emu_ax, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4B8_0133_0012_F921(); return;
}

/**
 * Decompiled function f__B4B8_00EE_001A_F649()
 *
 * @name f__B4B8_00EE_001A_F649
 * @implements B4B8:00EE:001A:F649 ()
 *
 * Called From: B4B8:0137:0012:F921
 * Called From: B4B8:0137:0020:37E6
 */
void f__B4B8_00EE_001A_F649()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_al, emu_get_memory8(emu_ds, emu_bx, 0x2006));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_0108_0012_07F6(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__B4B8_010B_000F_E42E(); return;
}

/**
 * Decompiled function f__B4B8_0108_0012_07F6()
 *
 * @name f__B4B8_0108_0012_07F6
 * @implements B4B8:0108:0012:07F6 ()
 *
 * Called From: B4B8:0102:001A:F649
 */
void f__B4B8_0108_0012_07F6()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__B4B8_010B_000F_E42E(); return;
}

/**
 * Decompiled function f__B4B8_010B_000F_E42E()
 *
 * @name f__B4B8_010B_000F_E42E
 * @implements B4B8:010B:000F:E42E ()
 *
 * Called From: B4B8:0106:001A:F649
 */
void f__B4B8_010B_000F_E42E()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x110);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_011A_000B_411E(); return; }
	emu_movw(&emu_ax, 0x110);
	f__B4B8_011D_0008_30F2(); return;
}

/**
 * Decompiled function f__B4B8_011A_000B_411E()
 *
 * @name f__B4B8_011A_000B_411E
 * @implements B4B8:011A:000B:411E ()
 *
 * Called From: B4B8:0113:0012:07F6
 * Called From: B4B8:0113:000F:E42E
 */
void f__B4B8_011A_000B_411E()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__B4B8_011D_0008_30F2(); return;
}

/**
 * Decompiled function f__B4B8_011D_0008_30F2()
 *
 * @name f__B4B8_011D_0008_30F2
 * @implements B4B8:011D:0008:30F2 ()
 *
 * Called From: B4B8:0118:0012:07F6
 */
void f__B4B8_011D_0008_30F2()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_push(emu_cs); emu_push(0x0125); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0125_0020_37E6(); return;
}

/**
 * Decompiled function f__B4B8_0125_0020_37E6()
 *
 * @name f__B4B8_0125_0020_37E6
 * @implements B4B8:0125:0020:37E6 ()
 *
 */
void f__B4B8_0125_0020_37E6()
{
	emu_andb(&emu_al, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4B8_0133_0012_F921(); return;
}

/**
 * Decompiled function f__B4B8_0133_0012_F921()
 *
 * @name f__B4B8_0133_0012_F921
 * @implements B4B8:0133:0012:F921 ()
 *
 * Called From: B4B8:00EC:000D:0557
 */
void f__B4B8_0133_0012_F921()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x15);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_00EE_001A_F649(); return; }
	emu_decw(&emu_di);
	f__B4B8_013A_000B_81FA(); return;
}

/**
 * Decompiled function f__B4B8_013A_000B_81FA()
 *
 * @name f__B4B8_013A_000B_81FA
 * @implements B4B8:013A:000B:81FA ()
 *
 * Called From: B4B8:00DA:0007:4C78
 */
void f__B4B8_013A_000B_81FA()
{
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_00DC_0005_517D(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	f__B4B8_0181_0010_B61D(); return;
}

/**
 * Decompiled function f__B4B8_0145_0007_CBF5()
 *
 * @name f__B4B8_0145_0007_CBF5
 * @implements B4B8:0145:0007:CBF5 ()
 *
 * Called From: B4B8:0185:0010:B61D
 * Called From: B4B8:0185:0031:B17A
 */
void f__B4B8_0145_0007_CBF5()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__B4B8_0177_001A_22EE(); return;
}

/**
 * Decompiled function f__B4B8_014C_0014_309A()
 *
 * @name f__B4B8_014C_0014_309A
 * @implements B4B8:014C:0014:309A ()
 *
 * Called From: B4B8:017B:001A:22EE
 * Called From: B4B8:017B:0031:B17A
 */
void f__B4B8_014C_0014_309A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movb(&emu_ah, 0x0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0160); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0160_0031_B17A(); return;
}

/**
 * Decompiled function f__B4B8_0160_0031_B17A()
 *
 * @name f__B4B8_0160_0031_B17A
 * @implements B4B8:0160:0031:B17A ()
 *
 */
void f__B4B8_0160_0031_B17A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_pop(&emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x4);
	f__B4B8_0177_001A_22EE(); return;
}

/**
 * Decompiled function f__B4B8_0177_001A_22EE()
 *
 * @name f__B4B8_0177_001A_22EE
 * @implements B4B8:0177:001A:22EE ()
 *
 * Called From: B4B8:014A:0007:CBF5
 */
void f__B4B8_0177_001A_22EE()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_014C_0014_309A(); return; }
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x4);
	f__B4B8_0181_0010_B61D(); return;
}

/**
 * Decompiled function f__B4B8_0181_0010_B61D()
 *
 * @name f__B4B8_0181_0010_B61D
 * @implements B4B8:0181:0010:B61D ()
 *
 * Called From: B4B8:0143:0020:37E6
 */
void f__B4B8_0181_0010_B61D()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_0145_0007_CBF5(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	f__B4B8_02AF_0009_EE52(); return;
}

/**
 * Decompiled function f__B4B8_0191_0008_7A2D()
 *
 * @name f__B4B8_0191_0008_7A2D
 * @implements B4B8:0191:0008:7A2D ()
 *
 * Called From: B4B8:02B5:0009:EE52
 * Called From: B4B8:02B5:000D:3328
 */
void f__B4B8_0191_0008_7A2D()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__B4B8_02A2_0009_2E43(); return;
}

/**
 * Decompiled function f__B4B8_0199_0009_B615()
 *
 * @name f__B4B8_0199_0009_B615
 * @implements B4B8:0199:0009:B615 ()
 *
 * Called From: B4B8:02A8:0009:2E43
 * Called From: B4B8:02A8:000D:3338
 */
void f__B4B8_0199_0009_B615()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4B8_01A2_0012_69D1(); return; }
	emu_movw(&emu_ax, 0x1);
	f__B4B8_01A4_0010_C9DD(); return;
}

/**
 * Decompiled function f__B4B8_01A2_0012_69D1()
 *
 * @name f__B4B8_01A2_0012_69D1
 * @implements B4B8:01A2:0012:69D1 ()
 *
 * Called From: B4B8:019B:0009:B615
 */
void f__B4B8_01A2_0012_69D1()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B4B8_01A4_0010_C9DD(); return;
}

/**
 * Decompiled function f__B4B8_01A4_0010_C9DD()
 *
 * @name f__B4B8_01A4_0010_C9DD
 * @implements B4B8:01A4:0010:C9DD ()
 *
 * Called From: B4B8:01A0:0009:B615
 */
void f__B4B8_01A4_0010_C9DD()
{
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_dx, 0x15);
	emu_movw(&emu_ax, emu_si);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_di, emu_si);
	f__B4B8_0292_000C_84C2(); return;
}

/**
 * Decompiled function f__B4B8_01B4_0021_1F5E()
 *
 * @name f__B4B8_01B4_0021_1F5E
 * @implements B4B8:01B4:0021:1F5E ()
 *
 * Called From: B4B8:029B:000C:84C2
 * Called From: B4B8:029B:004C:860B
 * Called From: B4B8:029B:000D:BCC0
 */
void f__B4B8_01B4_0021_1F5E()
{
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201D));
	emu_push(emu_ax);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201B));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01D5); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_01D5_0026_1563(); return;
}

/**
 * Decompiled function f__B4B8_01D5_0026_1563()
 *
 * @name f__B4B8_01D5_0026_1563
 * @implements B4B8:01D5:0026:1563 ()
 *
 */
void f__B4B8_01D5_0026_1563()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2021));
	emu_push(emu_ax);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201F));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01FB); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_01FB_0031_C155(); return;
}

/**
 * Decompiled function f__B4B8_01FB_0031_C155()
 *
 * @name f__B4B8_01FB_0031_C155
 * @implements B4B8:01FB:0031:C155 ()
 *
 */
void f__B4B8_01FB_0031_C155()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_shrw(&emu_ax, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201D));
	emu_push(emu_ax);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201B));
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x022C); f__B4B8_09B6_0013_F1B4();
	f__B4B8_022C_0026_EC41(); return;
}

/**
 * Decompiled function f__B4B8_022C_0026_EC41()
 *
 * @name f__B4B8_022C_0026_EC41
 * @implements B4B8:022C:0026:EC41 ()
 *
 */
void f__B4B8_022C_0026_EC41()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2021));
	emu_push(emu_ax);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x201F));
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0252); f__B4B8_09B6_0013_F1B4();
	f__B4B8_0252_004C_860B(); return;
}

/**
 * Decompiled function f__B4B8_0252_004C_860B()
 *
 * @name f__B4B8_0252_004C_860B
 * @implements B4B8:0252:004C:860B ()
 *
 */
void f__B4B8_0252_004C_860B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xF000);
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
		emu_movb(&emu_cl, 0x2);
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
		emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x12));
		emu_movb(&emu_cl, 0x2);
		emu_shlw(&emu_dx, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_dx);
		emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
		emu_incw(&emu_ax);
		emu_shrw(&emu_ax, 0x1);
		emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x14));
		emu_movb(&emu_cl, 0x2);
		emu_shlw(&emu_dx, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_dx);
		emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	}
	f__B4B8_0291_000D_BCC0(); return;
}

/**
 * Decompiled function f__B4B8_0291_000D_BCC0()
 *
 * @name f__B4B8_0291_000D_BCC0
 * @implements B4B8:0291:000D:BCC0 ()
 *
 * Called From: B4B8:025C:004C:860B
 */
void f__B4B8_0291_000D_BCC0()
{
	emu_incw(&emu_di);
	f__B4B8_0292_000C_84C2(); return;
}

/**
 * Decompiled function f__B4B8_0292_000C_84C2()
 *
 * @name f__B4B8_0292_000C_84C2
 * @implements B4B8:0292:000C:84C2 ()
 *
 * Called From: B4B8:01B1:0010:C9DD
 * Called From: B4B8:01B1:0012:69D1
 */
void f__B4B8_0292_000C_84C2()
{
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, 0x15);
	emu_cmpw(&emu_ax, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_029E_000D_3338(); return; }
	f__B4B8_01B4_0021_1F5E(); return;
}

/**
 * Decompiled function f__B4B8_029E_000D_3338()
 *
 * @name f__B4B8_029E_000D_3338
 * @implements B4B8:029E:000D:3338 ()
 *
 * Called From: B4B8:0299:004C:860B
 */
void f__B4B8_029E_000D_3338()
{
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x4);
	f__B4B8_02A2_0009_2E43(); return;
}

/**
 * Decompiled function f__B4B8_02A2_0009_2E43()
 *
 * @name f__B4B8_02A2_0009_2E43
 * @implements B4B8:02A2:0009:2E43 ()
 *
 * Called From: B4B8:0196:0008:7A2D
 */
void f__B4B8_02A2_0009_2E43()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_02AB_000D_3328(); return; }
	f__B4B8_0199_0009_B615(); return;
}

/**
 * Decompiled function f__B4B8_02AB_000D_3328()
 *
 * @name f__B4B8_02AB_000D_3328
 * @implements B4B8:02AB:000D:3328 ()
 *
 * Called From: B4B8:02A6:000D:3338
 */
void f__B4B8_02AB_000D_3328()
{
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x4);
	f__B4B8_02AF_0009_EE52(); return;
}

/**
 * Decompiled function f__B4B8_02AF_0009_EE52()
 *
 * @name f__B4B8_02AF_0009_EE52
 * @implements B4B8:02AF:0009:EE52 ()
 *
 * Called From: B4B8:018E:0031:B17A
 */
void f__B4B8_02AF_0009_EE52()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_02B8_0012_2C51(); return; }
	f__B4B8_0191_0008_7A2D(); return;
}

/**
 * Decompiled function f__B4B8_02B8_0012_2C51()
 *
 * @name f__B4B8_02B8_0012_2C51
 * @implements B4B8:02B8:0012:2C51 ()
 *
 * Called From: B4B8:02B3:000D:3328
 */
void f__B4B8_02B8_0012_2C51()
{
	emu_movw(&emu_ax, 0x80);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02CA); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_02CA_0018_139C(); return;
}

/**
 * Decompiled function f__B4B8_02CA_0018_139C()
 *
 * @name f__B4B8_02CA_0018_139C
 * @implements B4B8:02CA:0018:139C ()
 *
 */
void f__B4B8_02CA_0018_139C()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39EC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	f__B4B8_0439_0009_AE4C(); return;
}

/**
 * Decompiled function f__B4B8_02E2_0015_4DA7()
 *
 * @name f__B4B8_02E2_0015_4DA7
 * @implements B4B8:02E2:0015:4DA7 ()
 *
 * Called From: B4B8:043F:0009:AE4C
 * Called From: B4B8:043F:000C:5C34
 */
void f__B4B8_02E2_0015_4DA7()
{
	emu_movw(&emu_ax, 0x80);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02F7); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_02F7_000A_E5C7(); return;
}

/**
 * Decompiled function f__B4B8_02F7_000A_E5C7()
 *
 * @name f__B4B8_02F7_000A_E5C7
 * @implements B4B8:02F7:000A:E5C7 ()
 *
 */
void f__B4B8_02F7_000A_E5C7()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0x0);
	f__B4B8_0321_000E_5A5A(); return;
}

/**
 * Decompiled function f__B4B8_0301_002E_E825()
 *
 * @name f__B4B8_0301_002E_E825
 * @implements B4B8:0301:002E:E825 ()
 *
 * Called From: B4B8:0325:000E:5A5A
 * Called From: B4B8:0325:002E:E825
 */
void f__B4B8_0301_002E_E825()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_si, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_si, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bx, 0x0), emu_ax);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x26));
	f__B4B8_0321_000E_5A5A(); return;
}

/**
 * Decompiled function f__B4B8_0321_000E_5A5A()
 *
 * @name f__B4B8_0321_000E_5A5A
 * @implements B4B8:0321:000E:5A5A ()
 *
 * Called From: B4B8:02FF:000A:E5C7
 */
void f__B4B8_0321_000E_5A5A()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_0301_002E_E825(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__B4B8_042D_0009_EE46(); return;
}

/**
 * Decompiled function f__B4B8_032F_0107_3FC4()
 *
 * @name f__B4B8_032F_0107_3FC4
 * @implements B4B8:032F:0107:3FC4 ()
 *
 * Called From: B4B8:0433:0009:EE46
 * Called From: B4B8:0433:0038:0D2C
 */
void f__B4B8_032F_0107_3FC4()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0xA6);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0xA4);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x124);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x104));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x100));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xFC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x128);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0xA8);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ax);
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	}
	f__B4B8_03C8_006E_477E(); return;
}

/**
 * Decompiled function f__B4B8_03C8_006E_477E()
 *
 * @name f__B4B8_03C8_006E_477E
 * @implements B4B8:03C8:006E:477E ()
 *
 * Called From: B4B8:03BA:0107:3FC4
 */
void f__B4B8_03C8_006E_477E()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax);
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax);
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ax);
	}
	f__B4B8_03DA_005C_7497(); return;
}

/**
 * Decompiled function f__B4B8_03DA_005C_7497()
 *
 * @name f__B4B8_03DA_005C_7497
 * @implements B4B8:03DA:005C:7497 ()
 *
 * Called From: B4B8:03CC:0107:3FC4
 * Called From: B4B8:03CC:006E:477E
 */
void f__B4B8_03DA_005C_7497()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x3F);
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax);
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax);
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax);
	}
	f__B4B8_03EC_004A_385B(); return;
}

/**
 * Decompiled function f__B4B8_03EC_004A_385B()
 *
 * @name f__B4B8_03EC_004A_385B
 * @implements B4B8:03EC:004A:385B ()
 *
 * Called From: B4B8:03DE:0107:3FC4
 * Called From: B4B8:03DE:005C:7497
 * Called From: B4B8:03DE:006E:477E
 */
void f__B4B8_03EC_004A_385B()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x3F);
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax);
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax);
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	}
	f__B4B8_03FE_0038_0D2C(); return;
}

/**
 * Decompiled function f__B4B8_03FE_0038_0D2C()
 *
 * @name f__B4B8_03FE_0038_0D2C
 * @implements B4B8:03FE:0038:0D2C ()
 *
 * Called From: B4B8:03F0:004A:385B
 * Called From: B4B8:03F0:006E:477E
 * Called From: B4B8:03F0:005C:7497
 */
void f__B4B8_03FE_0038_0D2C()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_bx, 0x9);
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_bx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__B4B8_042D_0009_EE46(); return;
}

/**
 * Decompiled function f__B4B8_042D_0009_EE46()
 *
 * @name f__B4B8_042D_0009_EE46
 * @implements B4B8:042D:0009:EE46 ()
 *
 * Called From: B4B8:032C:002E:E825
 */
void f__B4B8_042D_0009_EE46()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_0436_000C_5C34(); return; }
	f__B4B8_032F_0107_3FC4(); return;
}

/**
 * Decompiled function f__B4B8_0436_000C_5C34()
 *
 * @name f__B4B8_0436_000C_5C34
 * @implements B4B8:0436:000C:5C34 ()
 *
 * Called From: B4B8:0431:004A:385B
 * Called From: B4B8:0431:005C:7497
 */
void f__B4B8_0436_000C_5C34()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__B4B8_0439_0009_AE4C(); return;
}

/**
 * Decompiled function f__B4B8_0439_0009_AE4C()
 *
 * @name f__B4B8_0439_0009_AE4C
 * @implements B4B8:0439:0009:AE4C ()
 *
 * Called From: B4B8:02DF:0018:139C
 */
void f__B4B8_0439_0009_AE4C()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_0442_0005_517D(); return; }
	f__B4B8_02E2_0015_4DA7(); return;
}

/**
 * Decompiled function f__B4B8_0442_0005_517D()
 *
 * @name f__B4B8_0442_0005_517D
 * @implements B4B8:0442:0005:517D ()
 *
 * Called From: B4B8:043D:000C:5C34
 */
void f__B4B8_0442_0005_517D()
{
	emu_push(emu_cs); emu_push(0x0447); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0447_000F_3A31(); return;
}

/**
 * Decompiled function f__B4B8_0447_000F_3A31()
 *
 * @name f__B4B8_0447_000F_3A31
 * @implements B4B8:0447:000F:3A31 ()
 *
 */
void f__B4B8_0447_000F_3A31()
{
	emu_andw(&emu_ax, 0xF);
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_si, 0x8);
	if (!emu_flags.cf) { f__B4B8_0456_000E_062D(); return; }
	emu_movw(&emu_ax, 0x8);
	f__B4B8_0458_000C_3407(); return;
}

/**
 * Decompiled function f__B4B8_0456_000E_062D()
 *
 * @name f__B4B8_0456_000E_062D
 * @implements B4B8:0456:000E:062D ()
 *
 * Called From: B4B8:044F:000F:3A31
 */
void f__B4B8_0456_000E_062D()
{
	emu_movw(&emu_ax, emu_si);
	f__B4B8_0458_000C_3407(); return;
}

/**
 * Decompiled function f__B4B8_0458_000C_3407()
 *
 * @name f__B4B8_0458_000C_3407
 * @implements B4B8:0458:000C:3407 ()
 *
 * Called From: B4B8:0454:000F:3A31
 */
void f__B4B8_0458_000C_3407()
{
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_si, 0xC);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4B8_0464_0009_D62D(); return; }
	emu_movw(&emu_ax, 0xC);
	/* Unresolved jump */ emu_ip = 0x0466; emu_last_cs = 0xB4B8; emu_last_ip = 0x0462; emu_last_length = 0x000C; emu_last_crc = 0x3407; emu_call();
}

/**
 * Decompiled function f__B4B8_0464_0009_D62D()
 *
 * @name f__B4B8_0464_0009_D62D
 * @implements B4B8:0464:0009:D62D ()
 *
 * Called From: B4B8:045D:000C:3407
 * Called From: B4B8:045D:000E:062D
 */
void f__B4B8_0464_0009_D62D()
{
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_cs); emu_push(0x046D); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_046D_0018_31BE(); return;
}

/**
 * Decompiled function f__B4B8_046D_0018_31BE()
 *
 * @name f__B4B8_046D_0018_31BE
 * @implements B4B8:046D:0018:31BE ()
 *
 */
void f__B4B8_046D_0018_31BE()
{
	emu_andw(&emu_ax, 0x3);
	emu_decw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_subw(&emu_ax, 0x3);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!emu_flags.cf) { f__B4B8_0485_0017_626D(); return; }
	emu_movw(&emu_ax, emu_si);
	emu_subw(&emu_ax, 0x3);
	f__B4B8_0488_0014_7CFA(); return;
}

/**
 * Decompiled function f__B4B8_0485_0017_626D()
 *
 * @name f__B4B8_0485_0017_626D
 * @implements B4B8:0485:0017:626D ()
 *
 * Called From: B4B8:047C:0018:31BE
 */
void f__B4B8_0485_0017_626D()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	f__B4B8_0488_0014_7CFA(); return;
}

/**
 * Decompiled function f__B4B8_0488_0014_7CFA()
 *
 * @name f__B4B8_0488_0014_7CFA
 * @implements B4B8:0488:0014:7CFA ()
 *
 * Called From: B4B8:0483:0018:31BE
 */
void f__B4B8_0488_0014_7CFA()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39EC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_dx);
	emu_xorw(&emu_di, emu_di);
	f__B4B8_04E2_000B_8E57(); return;
}

/**
 * Decompiled function f__B4B8_049C_001F_3168()
 *
 * @name f__B4B8_049C_001F_3168
 * @implements B4B8:049C:001F:3168 ()
 *
 * Called From: B4B8:04E6:000B:8E57
 * Called From: B4B8:04E6:0019:D3E8
 * Called From: B4B8:04E6:0026:950C
 */
void f__B4B8_049C_001F_3168()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, 0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!emu_flags.cf) { f__B4B8_04BB_000C_6772(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x6);
	f__B4B8_04D4_0019_D3E8(); return;
}

/**
 * Decompiled function f__B4B8_04BB_000C_6772()
 *
 * @name f__B4B8_04BB_000C_6772
 * @implements B4B8:04BB:000C:6772 ()
 *
 * Called From: B4B8:04B2:001F:3168
 */
void f__B4B8_04BB_000C_6772()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_si);
	if (emu_flags.cf) { f__B4B8_04C7_0026_950C(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x4);
	f__B4B8_04D4_0019_D3E8(); return;
}

/**
 * Decompiled function f__B4B8_04C7_0026_950C()
 *
 * @name f__B4B8_04C7_0026_950C
 * @implements B4B8:04C7:0026:950C ()
 *
 * Called From: B4B8:04BE:000C:6772
 */
void f__B4B8_04C7_0026_950C()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((emu_flags.cf || emu_flags.zf)) {
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x2);
	}
	f__B4B8_04D4_0019_D3E8(); return;
}

/**
 * Decompiled function f__B4B8_04D4_0019_D3E8()
 *
 * @name f__B4B8_04D4_0019_D3E8
 * @implements B4B8:04D4:0019:D3E8 ()
 *
 * Called From: B4B8:04B9:001F:3168
 * Called From: B4B8:04C5:000C:6772
 * Called From: B4B8:04CD:0026:950C
 */
void f__B4B8_04D4_0019_D3E8()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	emu_incw(&emu_di);
	f__B4B8_04E2_000B_8E57(); return;
}

/**
 * Decompiled function f__B4B8_04E2_000B_8E57()
 *
 * @name f__B4B8_04E2_000B_8E57
 * @implements B4B8:04E2:000B:8E57 ()
 *
 * Called From: B4B8:049A:0017:626D
 * Called From: B4B8:049A:0014:7CFA
 */
void f__B4B8_04E2_000B_8E57()
{
	emu_cmpw(&emu_di, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_049C_001F_3168(); return; }
	emu_push(emu_cs); emu_push(0x04ED); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_04ED_0008_BC0F(); return;
}

/**
 * Decompiled function f__B4B8_04ED_0008_BC0F()
 *
 * @name f__B4B8_04ED_0008_BC0F
 * @implements B4B8:04ED:0008:BC0F ()
 *
 */
void f__B4B8_04ED_0008_BC0F()
{
	emu_andw(&emu_ax, 0x2F);
	emu_movw(&emu_si, emu_ax);
	f__B4B8_058F_0007_4902(); return;
}

/**
 * Decompiled function f__B4B8_04F5_0005_517D()
 *
 * @name f__B4B8_04F5_0005_517D
 * @implements B4B8:04F5:0005:517D ()
 *
 * Called From: B4B8:0593:0007:4902
 * Called From: B4B8:0593:0014:3C98
 * Called From: B4B8:0593:0010:4B6C
 */
void f__B4B8_04F5_0005_517D()
{
	emu_push(emu_cs); emu_push(0x04FA); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_04FA_0009_AE6E(); return;
}

/**
 * Decompiled function f__B4B8_04FA_0009_AE6E()
 *
 * @name f__B4B8_04FA_0009_AE6E
 * @implements B4B8:04FA:0009:AE6E ()
 *
 */
void f__B4B8_04FA_0009_AE6E()
{
	emu_andw(&emu_ax, 0x3F);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0503); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0503_0009_FC28(); return;
}

/**
 * Decompiled function f__B4B8_0503_0009_FC28()
 *
 * @name f__B4B8_0503_0009_FC28
 * @implements B4B8:0503:0009:FC28 ()
 *
 */
void f__B4B8_0503_0009_FC28()
{
	emu_andw(&emu_ax, 0x3F);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x050C); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_050C_0028_CA07(); return;
}

/**
 * Decompiled function f__B4B8_050C_0028_CA07()
 *
 * @name f__B4B8_050C_0028_CA07
 * @implements B4B8:050C:0028:CA07 ()
 *
 */
void f__B4B8_050C_0028_CA07()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_dx, 0x1C);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A50), 0x0);
	if (emu_flags.zf) { f__B4B8_058F_0007_4902(); return; }
	emu_push(emu_cs); emu_push(0x0534); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0534_000D_1B27(); return;
}

/**
 * Decompiled function f__B4B8_0534_000D_1B27()
 *
 * @name f__B4B8_0534_000D_1B27
 * @implements B4B8:0534:000D:1B27 ()
 *
 */
void f__B4B8_0534_000D_1B27()
{
	emu_andw(&emu_ax, 0x1F);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	f__B4B8_0586_0010_4B6C(); return;
}

/**
 * Decompiled function f__B4B8_0541_0009_1020()
 *
 * @name f__B4B8_0541_0009_1020
 * @implements B4B8:0541:0009:1020 ()
 *
 * Called From: B4B8:0572:001A:D0F6
 * Called From: B4B8:058C:0010:4B6C
 * Called From: B4B8:058C:0014:3C98
 */
void f__B4B8_0541_0009_1020()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x054A); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_054A_000C_B6C6(); return;
}

/**
 * Decompiled function f__B4B8_054A_000C_B6C6()
 *
 * @name f__B4B8_054A_000C_B6C6
 * @implements B4B8:054A:000C:B6C6 ()
 *
 */
void f__B4B8_054A_000C_B6C6()
{
	emu_andw(&emu_ax, 0x3F);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0556); emu_cs = 0x0F3F; f__0F3F_009D_0017_8464();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0556_0008_CAD0(); return;
}

/**
 * Decompiled function f__B4B8_0556_0008_CAD0()
 *
 * @name f__B4B8_0556_0008_CAD0
 * @implements B4B8:0556:0008:CAD0 ()
 *
 */
void f__B4B8_0556_0008_CAD0()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x055E); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_055E_000A_CB50(); return;
}

/**
 * Decompiled function f__B4B8_055E_000A_CB50()
 *
 * @name f__B4B8_055E_000A_CB50
 * @implements B4B8:055E:000A:CB50 ()
 *
 */
void f__B4B8_055E_000A_CB50()
{
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0568); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0568_001A_D0F6(); return;
}

/**
 * Decompiled function f__B4B8_0568_001A_D0F6()
 *
 * @name f__B4B8_0568_001A_D0F6
 * @implements B4B8:0568:001A:D0F6 ()
 *
 */
void f__B4B8_0568_001A_D0F6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_0541_0009_1020(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_0541_0009_1020(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs);
	emu_push(0x0582); f__B4B8_0899_002D_EBA1();
	f__B4B8_0582_0014_3C98(); return;
}

/**
 * Decompiled function f__B4B8_0582_0014_3C98()
 *
 * @name f__B4B8_0582_0014_3C98
 * @implements B4B8:0582:0014:3C98 ()
 *
 */
void f__B4B8_0582_0014_3C98()
{
	emu_pop(&emu_cx);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x10));
	f__B4B8_0586_0010_4B6C(); return;
}

/**
 * Decompiled function f__B4B8_0586_0010_4B6C()
 *
 * @name f__B4B8_0586_0010_4B6C
 * @implements B4B8:0586:0010:4B6C ()
 *
 * Called From: B4B8:053F:000D:1B27
 */
void f__B4B8_0586_0010_4B6C()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_0541_0009_1020(); return; }
	emu_decw(&emu_si);
	f__B4B8_058F_0007_4902(); return;
}

/**
 * Decompiled function f__B4B8_058F_0007_4902()
 *
 * @name f__B4B8_058F_0007_4902
 * @implements B4B8:058F:0007:4902 ()
 *
 * Called From: B4B8:04F2:0008:BC0F
 * Called From: B4B8:052D:0028:CA07
 */
void f__B4B8_058F_0007_4902()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4B8_0596_0014_9233(); return; }
	f__B4B8_04F5_0005_517D(); return;
}

/**
 * Decompiled function f__B4B8_0596_0014_9233()
 *
 * @name f__B4B8_0596_0014_9233
 * @implements B4B8:0596:0014:9233 ()
 *
 * Called From: B4B8:0591:0014:3C98
 */
void f__B4B8_0596_0014_9233()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39EC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	f__B4B8_05CA_000E_61B9(); return;
}

/**
 * Decompiled function f__B4B8_05AA_002E_A7A6()
 *
 * @name f__B4B8_05AA_002E_A7A6
 * @implements B4B8:05AA:002E:A7A6 ()
 *
 * Called From: B4B8:05CE:000E:61B9
 * Called From: B4B8:05CE:002E:A7A6
 */
void f__B4B8_05AA_002E_A7A6()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_si, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_si, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bx, 0x0), emu_ax);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
	f__B4B8_05CA_000E_61B9(); return;
}

/**
 * Decompiled function f__B4B8_05CA_000E_61B9()
 *
 * @name f__B4B8_05CA_000E_61B9
 * @implements B4B8:05CA:000E:61B9 ()
 *
 * Called From: B4B8:05A8:0014:9233
 */
void f__B4B8_05CA_000E_61B9()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_05AA_002E_A7A6(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	f__B4B8_07CA_0009_EE65(); return;
}

/**
 * Decompiled function f__B4B8_05D8_0015_4DA7()
 *
 * @name f__B4B8_05D8_0015_4DA7
 * @implements B4B8:05D8:0015:4DA7 ()
 *
 * Called From: B4B8:07D0:0009:EE65
 * Called From: B4B8:07D0:000C:1C1D
 */
void f__B4B8_05D8_0015_4DA7()
{
	emu_movw(&emu_ax, 0x80);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xA6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05ED); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_05ED_000A_E477(); return;
}

/**
 * Decompiled function f__B4B8_05ED_000A_E477()
 *
 * @name f__B4B8_05ED_000A_E477
 * @implements B4B8:05ED:000A:E477 ()
 *
 */
void f__B4B8_05ED_000A_E477()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	f__B4B8_0617_000E_99A3(); return;
}

/**
 * Decompiled function f__B4B8_05F7_002E_5FBC()
 *
 * @name f__B4B8_05F7_002E_5FBC
 * @implements B4B8:05F7:002E:5FBC ()
 *
 * Called From: B4B8:061B:000E:99A3
 * Called From: B4B8:061B:002E:5FBC
 */
void f__B4B8_05F7_002E_5FBC()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x126);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_si, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_si, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bx, 0x0), emu_ax);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
	f__B4B8_0617_000E_99A3(); return;
}

/**
 * Decompiled function f__B4B8_0617_000E_99A3()
 *
 * @name f__B4B8_0617_000E_99A3
 * @implements B4B8:0617:000E:99A3 ()
 *
 * Called From: B4B8:05F5:000A:E477
 */
void f__B4B8_0617_000E_99A3()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_05F7_002E_5FBC(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__B4B8_07BE_0009_2E6F(); return;
}

/**
 * Decompiled function f__B4B8_0625_00CD_5050()
 *
 * @name f__B4B8_0625_00CD_5050
 * @implements B4B8:0625:00CD:5050 ()
 *
 * Called From: B4B8:07C4:0009:2E6F
 * Called From: B4B8:07C4:0019:E64C
 * Called From: B4B8:07C4:0023:A413
 */
void f__B4B8_0625_00CD_5050()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0xA6);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x124);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x100));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_bp - 0x128);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax);
	}
	f__B4B8_0678_007A_730C(); return;
}

/**
 * Decompiled function f__B4B8_0678_007A_730C()
 *
 * @name f__B4B8_0678_007A_730C
 * @implements B4B8:0678:007A:730C ()
 *
 * Called From: B4B8:0670:00CD:5050
 */
void f__B4B8_0678_007A_730C()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax);
	}
	f__B4B8_0684_006E_41F7(); return;
}

/**
 * Decompiled function f__B4B8_0684_006E_41F7()
 *
 * @name f__B4B8_0684_006E_41F7
 * @implements B4B8:0684:006E:41F7 ()
 *
 * Called From: B4B8:067C:00CD:5050
 * Called From: B4B8:067C:007A:730C
 */
void f__B4B8_0684_006E_41F7()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x3F);
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax);
	}
	f__B4B8_0690_0062_127F(); return;
}

/**
 * Decompiled function f__B4B8_0690_0062_127F()
 *
 * @name f__B4B8_0690_0062_127F
 * @implements B4B8:0690:0062:127F ()
 *
 * Called From: B4B8:0688:00CD:5050
 * Called From: B4B8:0688:007A:730C
 * Called From: B4B8:0688:006E:41F7
 */
void f__B4B8_0690_0062_127F()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x3F);
	if (emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax);
	}
	f__B4B8_069C_0056_9745(); return;
}

/**
 * Decompiled function f__B4B8_069C_0056_9745()
 *
 * @name f__B4B8_069C_0056_9745
 * @implements B4B8:069C:0056:9745 ()
 *
 * Called From: B4B8:0694:0062:127F
 * Called From: B4B8:0694:007A:730C
 * Called From: B4B8:0694:006E:41F7
 */
void f__B4B8_069C_0056_9745()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	if (!emu_flags.zf) { f__B4B8_06F2_0050_6E54(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x6);
		if (!emu_flags.zf) { f__B4B8_06B9_0039_C839(); return; }
	}
	f__B4B8_06B5_003D_9480(); return;
}

/**
 * Decompiled function f__B4B8_06B5_003D_9480()
 *
 * @name f__B4B8_06B5_003D_9480
 * @implements B4B8:06B5:003D:9480 ()
 *
 * Called From: B4B8:06AD:0056:9745
 */
void f__B4B8_06B5_003D_9480()
{
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
	f__B4B8_06B9_0039_C839(); return;
}

/**
 * Decompiled function f__B4B8_06B9_0039_C839()
 *
 * @name f__B4B8_06B9_0039_C839
 * @implements B4B8:06B9:0039:C839 ()
 *
 * Called From: B4B8:06B3:0056:9745
 */
void f__B4B8_06B9_0039_C839()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x6);
		if (!emu_flags.zf) { f__B4B8_06CB_0027_BF4A(); return; }
	}
	f__B4B8_06C7_002B_CEAF(); return;
}

/**
 * Decompiled function f__B4B8_06C7_002B_CEAF()
 *
 * @name f__B4B8_06C7_002B_CEAF
 * @implements B4B8:06C7:002B:CEAF ()
 *
 * Called From: B4B8:06BF:003D:9480
 * Called From: B4B8:06BF:0039:C839
 * Called From: B4B8:06BF:0056:9745
 */
void f__B4B8_06C7_002B_CEAF()
{
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	f__B4B8_06CB_0027_BF4A(); return;
}

/**
 * Decompiled function f__B4B8_06CB_0027_BF4A()
 *
 * @name f__B4B8_06CB_0027_BF4A
 * @implements B4B8:06CB:0027:BF4A ()
 *
 * Called From: B4B8:06C5:003D:9480
 * Called From: B4B8:06C5:0039:C839
 */
void f__B4B8_06CB_0027_BF4A()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x6);
		if (!emu_flags.zf) { f__B4B8_06DD_0015_4AB7(); return; }
	}
	f__B4B8_06D9_0019_9522(); return;
}

/**
 * Decompiled function f__B4B8_06D9_0019_9522()
 *
 * @name f__B4B8_06D9_0019_9522
 * @implements B4B8:06D9:0019:9522 ()
 *
 * Called From: B4B8:06D1:002B:CEAF
 * Called From: B4B8:06D1:0027:BF4A
 * Called From: B4B8:06D1:003D:9480
 * Called From: B4B8:06D1:0056:9745
 */
void f__B4B8_06D9_0019_9522()
{
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	f__B4B8_06DD_0015_4AB7(); return;
}

/**
 * Decompiled function f__B4B8_06DD_0015_4AB7()
 *
 * @name f__B4B8_06DD_0015_4AB7
 * @implements B4B8:06DD:0015:4AB7 ()
 *
 * Called From: B4B8:06D7:002B:CEAF
 * Called From: B4B8:06D7:0027:BF4A
 * Called From: B4B8:06D7:0056:9745
 */
void f__B4B8_06DD_0015_4AB7()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x6);
		if (!emu_flags.zf) { f__B4B8_06EF_0003_1D00(); return; }
	}
	f__B4B8_06EB_0007_A357(); return;
}

/**
 * Decompiled function f__B4B8_06EB_0007_A357()
 *
 * @name f__B4B8_06EB_0007_A357
 * @implements B4B8:06EB:0007:A357 ()
 *
 * Called From: B4B8:06E3:0019:9522
 * Called From: B4B8:06E3:0015:4AB7
 * Called From: B4B8:06E3:002B:CEAF
 * Called From: B4B8:06E3:003D:9480
 */
void f__B4B8_06EB_0007_A357()
{
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	f__B4B8_06EF_0003_1D00(); return;
}

/**
 * Decompiled function f__B4B8_06EF_0003_1D00()
 *
 * @name f__B4B8_06EF_0003_1D00
 * @implements B4B8:06EF:0003:1D00 ()
 *
 * Called From: B4B8:06E9:0019:9522
 * Called From: B4B8:06E9:0015:4AB7
 */
void f__B4B8_06EF_0003_1D00()
{
	f__B4B8_0772_0055_17EF(); return;
}

/**
 * Decompiled function f__B4B8_06F2_0050_6E54()
 *
 * @name f__B4B8_06F2_0050_6E54
 * @implements B4B8:06F2:0050:6E54 ()
 *
 * Called From: B4B8:06A5:0056:9745
 * Called From: B4B8:06A5:0062:127F
 * Called From: B4B8:06A5:006E:41F7
 */
void f__B4B8_06F2_0050_6E54()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (!emu_flags.zf) { f__B4B8_0742_0085_EEF7(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x9);
		if (!emu_flags.zf) { f__B4B8_070A_0038_B396(); return; }
	}
	f__B4B8_0706_003C_C12F(); return;
}

/**
 * Decompiled function f__B4B8_0706_003C_C12F()
 *
 * @name f__B4B8_0706_003C_C12F
 * @implements B4B8:0706:003C:C12F ()
 *
 * Called From: B4B8:06FE:0050:6E54
 */
void f__B4B8_0706_003C_C12F()
{
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
	f__B4B8_070A_0038_B396(); return;
}

/**
 * Decompiled function f__B4B8_070A_0038_B396()
 *
 * @name f__B4B8_070A_0038_B396
 * @implements B4B8:070A:0038:B396 ()
 *
 * Called From: B4B8:0704:0050:6E54
 */
void f__B4B8_070A_0038_B396()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x9);
		if (!emu_flags.zf) { f__B4B8_071C_0026_2D78(); return; }
	}
	f__B4B8_0718_002A_E79B(); return;
}

/**
 * Decompiled function f__B4B8_0718_002A_E79B()
 *
 * @name f__B4B8_0718_002A_E79B
 * @implements B4B8:0718:002A:E79B ()
 *
 * Called From: B4B8:0710:003C:C12F
 * Called From: B4B8:0710:0038:B396
 * Called From: B4B8:0710:0050:6E54
 */
void f__B4B8_0718_002A_E79B()
{
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	f__B4B8_071C_0026_2D78(); return;
}

/**
 * Decompiled function f__B4B8_071C_0026_2D78()
 *
 * @name f__B4B8_071C_0026_2D78
 * @implements B4B8:071C:0026:2D78 ()
 *
 * Called From: B4B8:0716:003C:C12F
 * Called From: B4B8:0716:0038:B396
 */
void f__B4B8_071C_0026_2D78()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x9);
		if (!emu_flags.zf) { f__B4B8_072E_0014_3692(); return; }
	}
	f__B4B8_072A_0018_1D2D(); return;
}

/**
 * Decompiled function f__B4B8_072A_0018_1D2D()
 *
 * @name f__B4B8_072A_0018_1D2D
 * @implements B4B8:072A:0018:1D2D ()
 *
 * Called From: B4B8:0722:003C:C12F
 * Called From: B4B8:0722:0026:2D78
 * Called From: B4B8:0722:002A:E79B
 * Called From: B4B8:0722:0050:6E54
 */
void f__B4B8_072A_0018_1D2D()
{
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	f__B4B8_072E_0014_3692(); return;
}

/**
 * Decompiled function f__B4B8_072E_0014_3692()
 *
 * @name f__B4B8_072E_0014_3692
 * @implements B4B8:072E:0014:3692 ()
 *
 * Called From: B4B8:0728:0026:2D78
 * Called From: B4B8:0728:002A:E79B
 */
void f__B4B8_072E_0014_3692()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x9);
		if (!emu_flags.zf) { f__B4B8_0740_0002_D83A(); return; }
	}
	f__B4B8_073C_0006_7746(); return;
}

/**
 * Decompiled function f__B4B8_073C_0006_7746()
 *
 * @name f__B4B8_073C_0006_7746
 * @implements B4B8:073C:0006:7746 ()
 *
 * Called From: B4B8:0734:002A:E79B
 * Called From: B4B8:0734:0018:1D2D
 * Called From: B4B8:0734:003C:C12F
 * Called From: B4B8:0734:0014:3692
 * Called From: B4B8:0734:0050:6E54
 */
void f__B4B8_073C_0006_7746()
{
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	f__B4B8_0740_0002_D83A(); return;
}

/**
 * Decompiled function f__B4B8_0740_0002_D83A()
 *
 * @name f__B4B8_0740_0002_D83A
 * @implements B4B8:0740:0002:D83A ()
 *
 * Called From: B4B8:073A:0018:1D2D
 * Called From: B4B8:073A:0014:3692
 */
void f__B4B8_0740_0002_D83A()
{
	f__B4B8_0772_0055_17EF(); return;
}

/**
 * Decompiled function f__B4B8_0742_0085_EEF7()
 *
 * @name f__B4B8_0742_0085_EEF7
 * @implements B4B8:0742:0085:EEF7 ()
 *
 * Called From: B4B8:06F6:0050:6E54
 */
void f__B4B8_0742_0085_EEF7()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) {
		emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
	}
	f__B4B8_074E_0079_C324(); return;
}

/**
 * Decompiled function f__B4B8_074E_0079_C324()
 *
 * @name f__B4B8_074E_0079_C324
 * @implements B4B8:074E:0079:C324 ()
 *
 * Called From: B4B8:0748:0085:EEF7
 */
void f__B4B8_074E_0079_C324()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) {
		emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	}
	f__B4B8_075A_006D_F1F1(); return;
}

/**
 * Decompiled function f__B4B8_075A_006D_F1F1()
 *
 * @name f__B4B8_075A_006D_F1F1
 * @implements B4B8:075A:006D:F1F1 ()
 *
 * Called From: B4B8:0754:0085:EEF7
 * Called From: B4B8:0754:0079:C324
 */
void f__B4B8_075A_006D_F1F1()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) {
		emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	}
	f__B4B8_0766_0061_E2DD(); return;
}

/**
 * Decompiled function f__B4B8_0766_0061_E2DD()
 *
 * @name f__B4B8_0766_0061_E2DD
 * @implements B4B8:0766:0061:E2DD ()
 *
 * Called From: B4B8:0760:0085:EEF7
 * Called From: B4B8:0760:006D:F1F1
 * Called From: B4B8:0760:0079:C324
 */
void f__B4B8_0766_0061_E2DD()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) {
		emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	}
	f__B4B8_0772_0055_17EF(); return;
}

/**
 * Decompiled function f__B4B8_0772_0055_17EF()
 *
 * @name f__B4B8_0772_0055_17EF
 * @implements B4B8:0772:0055:17EF ()
 *
 * Called From: B4B8:06EF:0003:1D00
 * Called From: B4B8:06EF:0007:A357
 * Called From: B4B8:06EF:0019:9522
 * Called From: B4B8:06EF:002B:CEAF
 * Called From: B4B8:06EF:0056:9745
 * Called From: B4B8:0740:0002:D83A
 * Called From: B4B8:0740:0018:1D2D
 * Called From: B4B8:0740:0006:7746
 * Called From: B4B8:0740:003C:C12F
 * Called From: B4B8:0740:0050:6E54
 * Called From: B4B8:0740:002A:E79B
 * Called From: B4B8:076C:0061:E2DD
 * Called From: B4B8:076C:006D:F1F1
 * Called From: B4B8:076C:0085:EEF7
 * Called From: B4B8:076C:0079:C324
 */
void f__B4B8_0772_0055_17EF()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	if (emu_flags.zf) {
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	}
	f__B4B8_077D_004A_0B6B(); return;
}

/**
 * Decompiled function f__B4B8_077D_004A_0B6B()
 *
 * @name f__B4B8_077D_004A_0B6B
 * @implements B4B8:077D:004A:0B6B ()
 *
 * Called From: B4B8:0776:0055:17EF
 * Called From: B4B8:0776:0085:EEF7
 * Called From: B4B8:0776:0061:E2DD
 * Called From: B4B8:0776:006D:F1F1
 * Called From: B4B8:0776:0079:C324
 */
void f__B4B8_077D_004A_0B6B()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	if (emu_flags.zf) {
		emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	}
	f__B4B8_0786_0041_6F70(); return;
}

/**
 * Decompiled function f__B4B8_0786_0041_6F70()
 *
 * @name f__B4B8_0786_0041_6F70
 * @implements B4B8:0786:0041:6F70 ()
 *
 * Called From: B4B8:0781:0085:EEF7
 * Called From: B4B8:0781:006D:F1F1
 * Called From: B4B8:0781:004A:0B6B
 * Called From: B4B8:0781:0055:17EF
 * Called From: B4B8:0781:0079:C324
 * Called From: B4B8:0781:0061:E2DD
 */
void f__B4B8_0786_0041_6F70()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	if (emu_flags.zf) {
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x11);
	}
	f__B4B8_0790_0037_3621(); return;
}

/**
 * Decompiled function f__B4B8_0790_0037_3621()
 *
 * @name f__B4B8_0790_0037_3621
 * @implements B4B8:0790:0037:3621 ()
 *
 * Called From: B4B8:078A:0041:6F70
 * Called From: B4B8:078A:004A:0B6B
 */
void f__B4B8_0790_0037_3621()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x6);
	if (emu_flags.zf) {
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x21);
	}
	f__B4B8_079A_002D_3384(); return;
}

/**
 * Decompiled function f__B4B8_079A_002D_3384()
 *
 * @name f__B4B8_079A_002D_3384
 * @implements B4B8:079A:002D:3384 ()
 *
 * Called From: B4B8:0794:0037:3621
 * Called From: B4B8:0794:0041:6F70
 */
void f__B4B8_079A_002D_3384()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (emu_flags.zf) {
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x31);
	}
	f__B4B8_07A4_0023_A413(); return;
}

/**
 * Decompiled function f__B4B8_07A4_0023_A413()
 *
 * @name f__B4B8_07A4_0023_A413
 * @implements B4B8:07A4:0023:A413 ()
 *
 * Called From: B4B8:079E:002D:3384
 * Called From: B4B8:079E:0037:3621
 */
void f__B4B8_07A4_0023_A413()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x9);
	if (emu_flags.zf) {
		emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x41);
	}
	f__B4B8_07AE_0019_E64C(); return;
}

/**
 * Decompiled function f__B4B8_07AE_0019_E64C()
 *
 * @name f__B4B8_07AE_0019_E64C
 * @implements B4B8:07AE:0019:E64C ()
 *
 * Called From: B4B8:07A8:0023:A413
 * Called From: B4B8:07A8:002D:3384
 */
void f__B4B8_07AE_0019_E64C()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__B4B8_07BE_0009_2E6F(); return;
}

/**
 * Decompiled function f__B4B8_07BE_0009_2E6F()
 *
 * @name f__B4B8_07BE_0009_2E6F
 * @implements B4B8:07BE:0009:2E6F ()
 *
 * Called From: B4B8:0622:002E:5FBC
 */
void f__B4B8_07BE_0009_2E6F()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_07C7_000C_1C1D(); return; }
	f__B4B8_0625_00CD_5050(); return;
}

/**
 * Decompiled function f__B4B8_07C7_000C_1C1D()
 *
 * @name f__B4B8_07C7_000C_1C1D
 * @implements B4B8:07C7:000C:1C1D ()
 *
 * Called From: B4B8:07C2:0019:E64C
 * Called From: B4B8:07C2:0023:A413
 */
void f__B4B8_07C7_000C_1C1D()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xA));
	f__B4B8_07CA_0009_EE65(); return;
}

/**
 * Decompiled function f__B4B8_07CA_0009_EE65()
 *
 * @name f__B4B8_07CA_0009_EE65
 * @implements B4B8:07CA:0009:EE65 ()
 *
 * Called From: B4B8:05D5:002E:A7A6
 */
void f__B4B8_07CA_0009_EE65()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_07D3_001E_72A9(); return; }
	f__B4B8_05D8_0015_4DA7(); return;
}

/**
 * Decompiled function f__B4B8_07D3_001E_72A9()
 *
 * @name f__B4B8_07D3_001E_72A9
 * @implements B4B8:07D3:001E:72A9 ()
 *
 * Called From: B4B8:07CE:000C:1C1D
 */
void f__B4B8_07D3_001E_72A9()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_shlw(&emu_ax, 0x1);
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x39F0));
	emu_movw(&emu_bx, emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_bx);
	emu_xorw(&emu_di, emu_di);
	f__B4B8_0861_000A_AA97(); return;
}

/**
 * Decompiled function f__B4B8_07F1_007A_9564()
 *
 * @name f__B4B8_07F1_007A_9564
 * @implements B4B8:07F1:007A:9564 ()
 *
 * Called From: B4B8:0865:000A:AA97
 * Called From: B4B8:0865:007A:9564
 */
void f__B4B8_07F1_007A_9564()
{
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_andw(&emu_ax, 0x1FF);
	emu_movw(&emu_dx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39F2));
	emu_andw(&emu_ax, 0x7F);
	emu_movw(&emu_dx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x1), 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x1), emu_al);
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x0);
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0x0);
	emu_incw(&emu_di);
	f__B4B8_0861_000A_AA97(); return;
}

/**
 * Decompiled function f__B4B8_0861_000A_AA97()
 *
 * @name f__B4B8_0861_000A_AA97
 * @implements B4B8:0861:000A:AA97 ()
 *
 * Called From: B4B8:07EF:001E:72A9
 */
void f__B4B8_0861_000A_AA97()
{
	emu_cmpw(&emu_di, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_07F1_007A_9564(); return; }
	emu_xorw(&emu_di, emu_di);
	f__B4B8_088D_000C_6279(); return;
}

/**
 * Decompiled function f__B4B8_086B_002E_52FA()
 *
 * @name f__B4B8_086B_002E_52FA
 * @implements B4B8:086B:002E:52FA ()
 *
 * Called From: B4B8:0891:000C:6279
 * Called From: B4B8:0891:002E:52FA
 */
void f__B4B8_086B_002E_52FA()
{
	emu_movw(&emu_bx, emu_di);
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, 0x2E9C);
	emu_movw(&emu_dx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_si, emu_dx);
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_si, 0x0));
	emu_andw(&emu_dx, 0x1FF);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x323F), emu_dx);
	emu_incw(&emu_di);
	f__B4B8_088D_000C_6279(); return;
}

/**
 * Decompiled function f__B4B8_088D_000C_6279()
 *
 * @name f__B4B8_088D_000C_6279
 * @implements B4B8:088D:000C:6279 ()
 *
 * Called From: B4B8:0869:007A:9564
 */
void f__B4B8_088D_000C_6279()
{
	emu_cmpw(&emu_di, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_086B_002E_52FA(); return; }
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
 * Decompiled function f__B4B8_0899_002D_EBA1()
 *
 * @name f__B4B8_0899_002D_EBA1
 * @implements B4B8:0899:002D:EBA1 ()
 *
 * Called From: B4B8:057F:001A:D0F6
 * Called From: B4B8:08D9:0016:33E5
 */
void f__B4B8_0899_002D_EBA1()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax, 0x8);
	if (emu_flags.zf) { f__B4B8_08C6_0016_33E5(); return; }
	emu_cmpw(&emu_ax, 0x9);
	if (emu_flags.zf) { f__B4B8_08E0_0008_857E(); return; }
	f__B4B8_098C_0024_DA74(); return;
}

/**
 * Decompiled function f__B4B8_08C6_0016_33E5()
 *
 * @name f__B4B8_08C6_0016_33E5
 * @implements B4B8:08C6:0016:33E5 ()
 *
 * Called From: B4B8:08BC:002D:EBA1
 */
void f__B4B8_08C6_0016_33E5()
{
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x9);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x08DC); f__B4B8_0899_002D_EBA1();
	f__B4B8_08DC_0004_8D11(); return;
}

/**
 * Decompiled function f__B4B8_08DC_0004_8D11()
 *
 * @name f__B4B8_08DC_0004_8D11
 * @implements B4B8:08DC:0004:8D11 ()
 *
 */
void f__B4B8_08DC_0004_8D11()
{
	emu_pop(&emu_cx);
	f__B4B8_09B0_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4B8_08E0_0008_857E()
 *
 * @name f__B4B8_08E0_0008_857E
 * @implements B4B8:08E0:0008:857E ()
 *
 * Called From: B4B8:08C1:002D:EBA1
 */
void f__B4B8_08E0_0008_857E()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFFFF);
	f__B4B8_0981_0009_2AFA(); return;
}

/**
 * Decompiled function f__B4B8_08E8_0008_9D79()
 *
 * @name f__B4B8_08E8_0008_9D79
 * @implements B4B8:08E8:0008:9D79 ()
 *
 * Called From: B4B8:0987:0009:2AFA
 * Called From: B4B8:0987:000C:DB82
 */
void f__B4B8_08E8_0008_9D79()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFFFF);
	f__B4B8_0975_0009_2AFD(); return;
}

/**
 * Decompiled function f__B4B8_08F0_0006_CB3D()
 *
 * @name f__B4B8_08F0_0006_CB3D
 * @implements B4B8:08F0:0006:CB3D ()
 *
 * Called From: B4B8:097B:0009:2AFD
 * Called From: B4B8:097B:002F:B048
 * Called From: B4B8:097B:000C:DA05
 */
void f__B4B8_08F0_0006_CB3D()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x08F6); emu_cs = 0x0F3F; f__0F3F_0335_0015_2275();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_08F6_000B_6174(); return;
}

/**
 * Decompiled function f__B4B8_08F6_000B_6174()
 *
 * @name f__B4B8_08F6_000B_6174
 * @implements B4B8:08F6:000B:6174 ()
 *
 */
void f__B4B8_08F6_000B_6174()
{
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0901); emu_cs = 0x0F3F; f__0F3F_0322_0011_5AAA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0901_000A_9283(); return;
}

/**
 * Decompiled function f__B4B8_0901_000A_9283()
 *
 * @name f__B4B8_0901_000A_9283
 * @implements B4B8:0901:000A:9283 ()
 *
 */
void f__B4B8_0901_000A_9283()
{
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x090B); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_090B_0044_05FB(); return;
}

/**
 * Decompiled function f__B4B8_090B_0044_05FB()
 *
 * @name f__B4B8_090B_0044_05FB
 * @implements B4B8:090B:0044:05FB ()
 *
 */
void f__B4B8_090B_0044_05FB()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_di, emu_ax);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_di, 0x1000);
		if ((emu_flags.sf != emu_flags.of)) {
			emu_movw(&emu_ax, emu_di);
			emu_movb(&emu_cl, 0x2);
			emu_shlw(&emu_ax, emu_cl);
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
			emu_addw(&emu_bx, emu_ax);
			emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
			emu_movw(&emu_dx, 0x1C);
			emu_imuluw(&emu_ax, emu_dx);
			emu_movw(&emu_bx, emu_ax);
			emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3A50));
			emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
			emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
			if (!emu_flags.zf) { f__B4B8_094F_002F_B048(); return; }
			emu_movw(&emu_ax, emu_si);
			emu_movb(&emu_cl, 0x2);
			emu_shlw(&emu_ax, emu_cl);
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
			emu_addw(&emu_bx, emu_ax);
			emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x8);
		}
	}
	f__B4B8_0972_000C_DA05(); return;
}

/**
 * Decompiled function f__B4B8_094F_002F_B048()
 *
 * @name f__B4B8_094F_002F_B048
 * @implements B4B8:094F:002F:B048 ()
 *
 * Called From: B4B8:093A:0044:05FB
 */
void f__B4B8_094F_002F_B048()
{
	emu_movw(&emu_ax, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x9);
	if (!emu_flags.zf) {
		emu_movw(&emu_ax, emu_di);
		emu_movb(&emu_cl, 0x2);
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x8);
	}
	f__B4B8_0972_000C_DA05(); return;
}

/**
 * Decompiled function f__B4B8_0972_000C_DA05()
 *
 * @name f__B4B8_0972_000C_DA05
 * @implements B4B8:0972:000C:DA05 ()
 *
 * Called From: B4B8:0911:0044:05FB
 * Called From: B4B8:0917:0044:05FB
 * Called From: B4B8:094D:0044:05FB
 * Called From: B4B8:095F:002F:B048
 */
void f__B4B8_0972_000C_DA05()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4B8_0975_0009_2AFD(); return;
}

/**
 * Decompiled function f__B4B8_0975_0009_2AFD()
 *
 * @name f__B4B8_0975_0009_2AFD
 * @implements B4B8:0975:0009:2AFD ()
 *
 * Called From: B4B8:08ED:0008:9D79
 */
void f__B4B8_0975_0009_2AFD()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_097E_000C_DB82(); return; }
	f__B4B8_08F0_0006_CB3D(); return;
}

/**
 * Decompiled function f__B4B8_097E_000C_DB82()
 *
 * @name f__B4B8_097E_000C_DB82
 * @implements B4B8:097E:000C:DB82 ()
 *
 * Called From: B4B8:0979:002F:B048
 * Called From: B4B8:0979:000C:DA05
 * Called From: B4B8:0979:0009:2AFD
 */
void f__B4B8_097E_000C_DB82()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	f__B4B8_0981_0009_2AFA(); return;
}

/**
 * Decompiled function f__B4B8_0981_0009_2AFA()
 *
 * @name f__B4B8_0981_0009_2AFA
 * @implements B4B8:0981:0009:2AFA ()
 *
 * Called From: B4B8:08E5:0008:857E
 */
void f__B4B8_0981_0009_2AFA()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_098A_0002_D23A(); return; }
	f__B4B8_08E8_0008_9D79(); return;
}

/**
 * Decompiled function f__B4B8_098A_0002_D23A()
 *
 * @name f__B4B8_098A_0002_D23A
 * @implements B4B8:098A:0002:D23A ()
 *
 * Called From: B4B8:0985:000C:DB82
 */
void f__B4B8_098A_0002_D23A()
{
	f__B4B8_09B0_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4B8_098C_0024_DA74()
 *
 * @name f__B4B8_098C_0024_DA74
 * @implements B4B8:098C:0024:DA74 ()
 *
 * Called From: B4B8:08C3:002D:EBA1
 */
void f__B4B8_098C_0024_DA74()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, 0x1C);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A50), 0x0);
	if (!emu_flags.zf) {
		emu_movw(&emu_ax, emu_si);
		emu_movb(&emu_cl, 0x2);
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x8);
	}
	f__B4B8_09AE_0002_C03A(); return;
}

/**
 * Decompiled function f__B4B8_09AE_0002_C03A()
 *
 * @name f__B4B8_09AE_0002_C03A
 * @implements B4B8:09AE:0002:C03A ()
 *
 * Called From: B4B8:099B:0024:DA74
 */
void f__B4B8_09AE_0002_C03A()
{
	f__B4B8_09B0_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4B8_09B0_0006_F7CE()
 *
 * @name f__B4B8_09B0_0006_F7CE
 * @implements B4B8:09B0:0006:F7CE ()
 *
 * Called From: B4B8:08DD:0004:8D11
 * Called From: B4B8:098A:0002:D23A
 * Called From: B4B8:09AE:0024:DA74
 * Called From: B4B8:09AE:0002:C03A
 */
void f__B4B8_09B0_0006_F7CE()
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
 * Decompiled function f__B4B8_09B6_0013_F1B4()
 *
 * @name f__B4B8_09B6_0013_F1B4
 * @implements B4B8:09B6:0013:F1B4 ()
 *
 * Called From: B4B8:0229:0031:C155
 * Called From: B4B8:024F:0026:EC41
 */
void f__B4B8_09B6_0013_F1B4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_si, 0x3F);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x09C9); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_09C9_0004_5B1F(); return;
}

/**
 * Decompiled function f__B4B8_09C9_0004_5B1F()
 *
 * @name f__B4B8_09C9_0004_5B1F
 * @implements B4B8:09C9:0004:5B1F ()
 *
 */
void f__B4B8_09C9_0004_5B1F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B4B8_09CD_0003_2E57(); return;
}

/**
 * Decompiled function f__B4B8_09CD_0003_2E57()
 *
 * @name f__B4B8_09CD_0003_2E57
 * @implements B4B8:09CD:0003:2E57 ()
 *
 * Called From: B4B8:09CB:0004:5B1F
 */
void f__B4B8_09CD_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_09D0_0012_0D7D()
 *
 * @name f__B4B8_09D0_0012_0D7D
 * @implements B4B8:09D0:0012:0D7D ()
 *
 * Called From: B4B8:0E89:0034:00A7
 */
void f__B4B8_09D0_0012_0D7D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A1A; emu_last_cs = 0xB4B8; emu_last_ip = 0x09DC; emu_last_length = 0x0012; emu_last_crc = 0x0D7D; emu_call(); return; }
	emu_xorw(&emu_dx, emu_dx);
	f__B4B8_0A14_000A_5F41(); return;
}

/**
 * Decompiled function f__B4B8_09E2_003C_C270()
 *
 * @name f__B4B8_09E2_003C_C270
 * @implements B4B8:09E2:003C:C270 ()
 *
 * Called From: B4B8:0A18:000A:5F41
 * Called From: B4B8:0A18:003C:C270
 */
void f__B4B8_09E2_003C_C270()
{
	emu_movw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x10);
	emu_andw(&emu_ax, 0xE0);
	emu_movb(&emu_cl, 0x5);
	emu_sarw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x8);
	emu_andw(&emu_ax, 0xF0);
	emu_movb(&emu_cl, 0x4);
	emu_sarw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cl, 0x4);
	emu_shlb(&emu_al, emu_cl);
	emu_orb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_dx);
	f__B4B8_0A14_000A_5F41(); return;
}

/**
 * Decompiled function f__B4B8_0A14_000A_5F41()
 *
 * @name f__B4B8_0A14_000A_5F41
 * @implements B4B8:0A14:000A:5F41 ()
 *
 * Called From: B4B8:09E0:0012:0D7D
 */
void f__B4B8_0A14_000A_5F41()
{
	emu_cmpw(&emu_dx, 0x100);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_09E2_003C_C270(); return; }
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_0A1E_001A_E094()
 *
 * @name f__B4B8_0A1E_001A_E094
 * @implements B4B8:0A1E:001A:E094 ()
 *
 * Called From: 34B8:0034:0005:0000
 * Called From: B4B8:19FF:0013:03D7
 * Called From: B4B8:1D4A:0013:4DE4
 * Called From: B4B8:1DD3:002A:80E8
 */
void f__B4B8_0A1E_001A_E094()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x1E);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_bp - 0x1E);
	emu_push(emu_ss);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x216B);
	emu_push(emu_ds);
	emu_push(emu_ax);
	emu_movw(&emu_cx, 0xC);
	emu_push(emu_cs); emu_push(0x0A38); emu_cs = 0x01F7; f__01F7_03C9_001C_11C7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0A38_0014_466B(); return;
}

/**
 * Decompiled function f__B4B8_0A38_0014_466B()
 *
 * @name f__B4B8_0A38_0014_466B
 * @implements B4B8:0A38:0014:466B ()
 *
 */
void f__B4B8_0A38_0014_466B()
{
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_flags.zf) {
		emu_movw(&emu_di, 0x1);
	}
	f__B4B8_0A44_0008_59B7(); return;
}

/**
 * Decompiled function f__B4B8_0A44_0008_59B7()
 *
 * @name f__B4B8_0A44_0008_59B7
 * @implements B4B8:0A44:0008:59B7 ()
 *
 * Called From: B4B8:0A3F:0014:466B
 */
void f__B4B8_0A44_0008_59B7()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0A4C); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0A4C_0023_CC83(); return;
}

/**
 * Decompiled function f__B4B8_0A4C_0023_CC83()
 *
 * @name f__B4B8_0A4C_0023_CC83
 * @implements B4B8:0A4C:0023:CC83 ()
 *
 */
void f__B4B8_0A4C_0023_CC83()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x1E);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bx, 0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	f__B4B8_0B3A_000C_60AC(); return;
}

/**
 * Decompiled function f__B4B8_0A6F_002B_8318()
 *
 * @name f__B4B8_0A6F_002B_8318
 * @implements B4B8:0A6F:002B:8318 ()
 *
 * Called From: B4B8:0B43:000C:60AC
 * Called From: B4B8:0B43:0024:5457
 */
void f__B4B8_0A6F_002B_8318()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x9939);
	emu_movw(&emu_ax, emu_di);
	emu_movw(&emu_dx, 0x1E);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movws(&emu_ax, emu_al);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0A9A); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0A9A_0012_3EFE(); return;
}

/**
 * Decompiled function f__B4B8_0A9A_0012_3EFE()
 *
 * @name f__B4B8_0A9A_0012_3EFE
 * @implements B4B8:0A9A:0012:3EFE ()
 *
 */
void f__B4B8_0A9A_0012_3EFE()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, 0x2E);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0AAC); emu_cs = 0x01F7; f__01F7_3889_0033_4660();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0AAC_0012_F330(); return;
}

/**
 * Decompiled function f__B4B8_0AAC_0012_F330()
 *
 * @name f__B4B8_0AAC_0012_F330
 * @implements B4B8:0AAC:0012:F330 ()
 *
 */
void f__B4B8_0AAC_0012_F330()
{
	emu_addw(&emu_sp, 0x6);
	emu_orw(&emu_ax, emu_dx);
	if (!emu_flags.zf) { f__B4B8_0AC6_0018_40A6(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0ABE); emu_cs = 0x0642; f__0642_075D_0011_C164();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0ABE_0020_7E3F(); return;
}

/**
 * Decompiled function f__B4B8_0ABE_0020_7E3F()
 *
 * @name f__B4B8_0ABE_0020_7E3F
 * @implements B4B8:0ABE:0020:7E3F ()
 *
 */
void f__B4B8_0ABE_0020_7E3F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	f__B4B8_0AC6_0018_40A6(); return;
}

/**
 * Decompiled function f__B4B8_0AC6_0018_40A6()
 *
 * @name f__B4B8_0AC6_0018_40A6
 * @implements B4B8:0AC6:0018:40A6 ()
 *
 * Called From: B4B8:0AB1:0012:F330
 */
void f__B4B8_0AC6_0018_40A6()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0xFDE8);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0ADE); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0ADE_0016_BE51(); return;
}

/**
 * Decompiled function f__B4B8_0ADE_0016_BE51()
 *
 * @name f__B4B8_0ADE_0016_BE51
 * @implements B4B8:0ADE:0016:BE51 ()
 *
 */
void f__B4B8_0ADE_0016_BE51()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_xorw(&emu_si, emu_si);
	f__B4B8_0B12_0010_4B5B(); return;
}

/**
 * Decompiled function f__B4B8_0AF4_000C_BF3D()
 *
 * @name f__B4B8_0AF4_000C_BF3D
 * @implements B4B8:0AF4:000C:BF3D ()
 *
 * Called From: B4B8:0B15:0010:4B5B
 * Called From: B4B8:0B15:0022:7AFB
 */
void f__B4B8_0AF4_000C_BF3D()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0B00); emu_cs = 0x2903; f__2903_007A_0032_762D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0B00_0022_7AFB(); return;
}

/**
 * Decompiled function f__B4B8_0B00_0022_7AFB()
 *
 * @name f__B4B8_0B00_0022_7AFB
 * @implements B4B8:0B00:0022:7AFB ()
 *
 */
void f__B4B8_0B00_0022_7AFB()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x4);
	emu_incw(&emu_si);
	f__B4B8_0B12_0010_4B5B(); return;
}

/**
 * Decompiled function f__B4B8_0B12_0010_4B5B()
 *
 * @name f__B4B8_0B12_0010_4B5B
 * @implements B4B8:0B12:0010:4B5B ()
 *
 * Called From: B4B8:0AF2:0016:BE51
 */
void f__B4B8_0B12_0010_4B5B()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_0AF4_000C_BF3D(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0B22); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0B22_0024_5457(); return;
}

/**
 * Decompiled function f__B4B8_0B22_0024_5457()
 *
 * @name f__B4B8_0B22_0024_5457
 * @implements B4B8:0B22:0024:5457 ()
 *
 */
void f__B4B8_0B22_0024_5457()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_adcw(&emu_ax, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx);
	f__B4B8_0B3A_000C_60AC(); return;
}

/**
 * Decompiled function f__B4B8_0B3A_000C_60AC()
 *
 * @name f__B4B8_0B3A_000C_60AC
 * @implements B4B8:0B3A:000C:60AC ()
 *
 * Called From: B4B8:0A6C:0023:CC83
 */
void f__B4B8_0B3A_000C_60AC()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_flags.zf) { f__B4B8_0B46_000E_D932(); return; }
	f__B4B8_0A6F_002B_8318(); return;
}

/**
 * Decompiled function f__B4B8_0B46_000E_D932()
 *
 * @name f__B4B8_0B46_000E_D932
 * @implements B4B8:0B46:000E:D932 ()
 *
 * Called From: B4B8:0B41:0024:5457
 */
void f__B4B8_0B46_000E_D932()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4B8_0B54_0005_A6CA(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { f__B4B8_0B86_0005_26CC(); return; }
	f__B4B8_0BB9_0002_C03A(); return;
}

/**
 * Decompiled function f__B4B8_0B54_0005_A6CA()
 *
 * @name f__B4B8_0B54_0005_A6CA
 * @implements B4B8:0B54:0005:A6CA ()
 *
 * Called From: B4B8:0B4B:000E:D932
 */
void f__B4B8_0B54_0005_A6CA()
{
	emu_movw(&emu_si, 0x7);
	f__B4B8_0B7F_0007_D940(); return;
}

/**
 * Decompiled function f__B4B8_0B59_0022_DECA()
 *
 * @name f__B4B8_0B59_0022_DECA
 * @implements B4B8:0B59:0022:DECA ()
 *
 * Called From: B4B8:0B82:0007:D940
 * Called From: B4B8:0B82:000B:CE54
 */
void f__B4B8_0B59_0022_DECA()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C42));
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_cs); emu_push(0x0B7B); emu_cs = 0x2BB6; f__2BB6_000C_0043_A570();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0B7B_000B_CE54(); return;
}

/**
 * Decompiled function f__B4B8_0B7B_000B_CE54()
 *
 * @name f__B4B8_0B7B_000B_CE54
 * @implements B4B8:0B7B:000B:CE54 ()
 *
 */
void f__B4B8_0B7B_000B_CE54()
{
	emu_addw(&emu_sp, 0x8);
	emu_incw(&emu_si);
	f__B4B8_0B7F_0007_D940(); return;
}

/**
 * Decompiled function f__B4B8_0B7F_0007_D940()
 *
 * @name f__B4B8_0B7F_0007_D940
 * @implements B4B8:0B7F:0007:D940 ()
 *
 * Called From: B4B8:0B57:0005:A6CA
 */
void f__B4B8_0B7F_0007_D940()
{
	emu_cmpw(&emu_si, 0xB);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_0B59_0022_DECA(); return; }
	f__B4B8_0BBB_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4B8_0B86_0005_26CC()
 *
 * @name f__B4B8_0B86_0005_26CC
 * @implements B4B8:0B86:0005:26CC ()
 *
 * Called From: B4B8:0B50:000E:D932
 */
void f__B4B8_0B86_0005_26CC()
{
	emu_movw(&emu_si, 0x6F);
	f__B4B8_0BB1_0008_BB43(); return;
}

/**
 * Decompiled function f__B4B8_0B8B_0022_DECA()
 *
 * @name f__B4B8_0B8B_0022_DECA
 * @implements B4B8:0B8B:0022:DECA ()
 *
 * Called From: B4B8:0BB5:0008:BB43
 * Called From: B4B8:0BB5:000C:3148
 */
void f__B4B8_0B8B_0022_DECA()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C42));
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_cs); emu_push(0x0BAD); emu_cs = 0x2BB6; f__2BB6_000C_0043_A570();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0BAD_000C_3148(); return;
}

/**
 * Decompiled function f__B4B8_0BAD_000C_3148()
 *
 * @name f__B4B8_0BAD_000C_3148
 * @implements B4B8:0BAD:000C:3148 ()
 *
 */
void f__B4B8_0BAD_000C_3148()
{
	emu_addw(&emu_sp, 0x8);
	emu_incw(&emu_si);
	f__B4B8_0BB1_0008_BB43(); return;
}

/**
 * Decompiled function f__B4B8_0BB1_0008_BB43()
 *
 * @name f__B4B8_0BB1_0008_BB43
 * @implements B4B8:0BB1:0008:BB43 ()
 *
 * Called From: B4B8:0B89:0005:26CC
 */
void f__B4B8_0BB1_0008_BB43()
{
	emu_cmpw(&emu_si, 0x80);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_0B8B_0022_DECA(); return; }
	f__B4B8_0BBB_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4B8_0BB9_0002_C03A()
 *
 * @name f__B4B8_0BB9_0002_C03A
 * @implements B4B8:0BB9:0002:C03A ()
 *
 * Called From: B4B8:0B52:000E:D932
 */
void f__B4B8_0BB9_0002_C03A()
{
	f__B4B8_0BBB_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4B8_0BBB_0006_F7CE()
 *
 * @name f__B4B8_0BBB_0006_F7CE
 * @implements B4B8:0BBB:0006:F7CE ()
 *
 * Called From: B4B8:0B84:000B:CE54
 * Called From: B4B8:0BB7:000C:3148
 * Called From: B4B8:0BB9:0002:C03A
 */
void f__B4B8_0BBB_0006_F7CE()
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
 * Decompiled function f__B4B8_0BC1_000C_1630()
 *
 * @name f__B4B8_0BC1_000C_1630
 * @implements B4B8:0BC1:000C:1630 ()
 *
 * Called From: B4B8:1A37:000B:A1A7
 */
void f__B4B8_0BC1_000C_1630()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	f__B4B8_0D05_0019_9B88(); return;
}

/**
 * Decompiled function f__B4B8_0BCD_008A_FDF3()
 *
 * @name f__B4B8_0BCD_008A_FDF3
 * @implements B4B8:0BCD:008A:FDF3 ()
 *
 * Called From: B4B8:0D1B:0019:9B88
 * Called From: B4B8:0D1B:0024:2C86
 */
void f__B4B8_0BCD_008A_FDF3()
{
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x18);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2E6B);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x18);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2E6B);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x18);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2E6B);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x18);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2E6B);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x18);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2E6B);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x18);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2E6B);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x18);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2E6B);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs);
	emu_push(0x0C57); f__B4B8_0ED9_001E_DC63();
	f__B4B8_0C57_00A3_B72D(); return;
}

/**
 * Decompiled function f__B4B8_0C57_00A3_B72D()
 *
 * @name f__B4B8_0C57_00A3_B72D
 * @implements B4B8:0C57:00A3:B72D ()
 *
 */
void f__B4B8_0C57_00A3_B72D()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x18);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2E6B);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x0);
	if ((emu_flags.sf != emu_flags.of)) {
		emu_movw(&emu_ax, emu_si);
		emu_movw(&emu_dx, 0x18);
		emu_imuluw(&emu_ax, emu_dx);
		emu_movw(&emu_dx, 0x2E6B);
		emu_movw(&emu_bx, emu_ax);
		emu_movw(&emu_es, emu_dx);
		emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x22), emu_ax);
		emu_movw(&emu_ax, emu_si);
		emu_movw(&emu_dx, 0x18);
		emu_imuluw(&emu_ax, emu_dx);
		emu_movw(&emu_dx, 0x2E6B);
		emu_movw(&emu_bx, emu_ax);
		emu_movw(&emu_es, emu_dx);
		emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x12));
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x24), emu_ax);
	}
	f__B4B8_0CAA_0050_EFB0(); return;
}

/**
 * Decompiled function f__B4B8_0CAA_0050_EFB0()
 *
 * @name f__B4B8_0CAA_0050_EFB0
 * @implements B4B8:0CAA:0050:EFB0 ()
 *
 * Called From: B4B8:0C74:00A3:B72D
 */
void f__B4B8_0CAA_0050_EFB0()
{
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x18);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2E6B);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x32), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x30), emu_dx);
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x18);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2E6B);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x0CFA); emu_cs = 0x348B; ovl__348B(6);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0CFA_0024_2C86(); return;
}

/**
 * Decompiled function f__B4B8_0CFA_0024_2C86()
 *
 * @name f__B4B8_0CFA_0024_2C86
 * @implements B4B8:0CFA:0024:2C86 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4B8_0CFA_0024_2C86()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3C28), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3C26), emu_ax);
	emu_incw(&emu_si);
	f__B4B8_0D05_0019_9B88(); return;
}

/**
 * Decompiled function f__B4B8_0D05_0019_9B88()
 *
 * @name f__B4B8_0D05_0019_9B88
 * @implements B4B8:0D05:0019:9B88 ()
 *
 * Called From: B4B8:0BCA:000C:1630
 */
void f__B4B8_0D05_0019_9B88()
{
	emu_movw(&emu_ax, emu_si);
	emu_movw(&emu_dx, 0x18);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, 0x2E6B);
	emu_movw(&emu_bx, emu_ax);
	emu_movw(&emu_es, emu_dx);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (emu_flags.zf) { f__B4B8_0D1E_0005_8BCF(); return; }
	f__B4B8_0BCD_008A_FDF3(); return;
}

/**
 * Decompiled function f__B4B8_0D1E_0005_8BCF()
 *
 * @name f__B4B8_0D1E_0005_8BCF
 * @implements B4B8:0D1E:0005:8BCF ()
 *
 * Called From: B4B8:0D19:0024:2C86
 */
void f__B4B8_0D1E_0005_8BCF()
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
 * Decompiled function f__B4B8_0D23_0010_BA99()
 *
 * @name f__B4B8_0D23_0010_BA99
 * @implements B4B8:0D23:0010:BA99 ()
 *
 * Called From: 34B8:0039:0005:0000
 * Called From: B4B8:21DF:0004:C890
 */
void f__B4B8_0D23_0010_BA99()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x2177), 0x0);
	if (emu_flags.zf) { f__B4B8_0D33_000F_D70C(); return; }
	f__B4B8_0ECA_0004_893F(); return;
}

/**
 * Decompiled function f__B4B8_0D33_000F_D70C()
 *
 * @name f__B4B8_0D33_000F_D70C
 * @implements B4B8:0D33:000F:D70C ()
 *
 * Called From: B4B8:0D2E:0010:BA99
 */
void f__B4B8_0D33_000F_D70C()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2177), 0x1);
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D42); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0D42_0025_9D20(); return;
}

/**
 * Decompiled function f__B4B8_0D42_0025_9D20()
 *
 * @name f__B4B8_0D42_0025_9D20
 * @implements B4B8:0D42:0025:9D20 ()
 *
 */
void f__B4B8_0D42_0025_9D20()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6116), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6114), 0x0);
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x223E);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D67); emu_cs = 0x1587; f__1587_0008_0012_30AE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0D67_0056_DC5A(); return;
}

/**
 * Decompiled function f__B4B8_0D67_0056_DC5A()
 *
 * @name f__B4B8_0D67_0056_DC5A
 * @implements B4B8:0D67:0056:DC5A ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4B8_0D67_0056_DC5A()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6114));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6116));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38D0), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38CE), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6CE9));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6CE7));
	emu_subw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6114));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6116));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38D4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38D2), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38D0));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x38CE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x39F0), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x39EE), emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38D4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38D2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39F0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2247);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DBD); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0DBD_009B_1454(); return;
}

/**
 * Decompiled function f__B4B8_0DBD_009B_1454()
 *
 * @name f__B4B8_0DBD_009B_1454
 * @implements B4B8:0DBD:009B:1454 ()
 *
 */
void f__B4B8_0DBD_009B_1454()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x39F2), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x39F4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x39F8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x39F6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x39FA), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x38D2), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ds, 0x00, 0x38D4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x38CE), emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38D0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38CE));
	emu_push(emu_cs); emu_push(0x0E58); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0E58_0034_00A7(); return;
}

/**
 * Decompiled function f__B4B8_0E58_0034_00A7()
 *
 * @name f__B4B8_0E58_0034_00A7
 * @implements B4B8:0E58:0034:00A7 ()
 *
 */
void f__B4B8_0E58_0034_00A7()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38D0), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38CE), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38D0));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x38CE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3954), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3952), emu_dx);
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x38D2), 0x100);
	emu_sbbw(&emu_get_memory16(emu_ds, 0x00, 0x38D4), 0x0);
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x38CE), 0x100);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3954));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3952));
	emu_push(emu_cs);
	emu_push(0x0E8C); f__B4B8_09D0_0012_0D7D();
	f__B4B8_0E8C_001E_3931(); return;
}

/**
 * Decompiled function f__B4B8_0E8C_001E_3931()
 *
 * @name f__B4B8_0E8C_001E_3931
 * @implements B4B8:0E8C:001E:3931 ()
 *
 */
void f__B4B8_0E8C_001E_3931()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38D0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38CE));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x6168);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3902);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2250);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0EAA); f__B4B8_2295_0018_A862();
	f__B4B8_0EAA_0024_9D41(); return;
}

/**
 * Decompiled function f__B4B8_0EAA_0024_9D41()
 *
 * @name f__B4B8_0EAA_0024_9D41
 * @implements B4B8:0EAA:0024:9D41 ()
 *
 */
void f__B4B8_0EAA_0024_9D41()
{
	emu_addw(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_get_memory16(emu_ds, 0x00, 0x38D2), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ds, 0x00, 0x38D4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x38CE), emu_ax);
	f__B4B8_0ECA_0004_893F(); return;
}

/**
 * Decompiled function f__B4B8_0ECA_0004_893F()
 *
 * @name f__B4B8_0ECA_0004_893F
 * @implements B4B8:0ECA:0004:893F ()
 *
 * Called From: B4B8:0D30:0010:BA99
 */
void f__B4B8_0ECA_0004_893F()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_0ECE_000B_BD2E()
 *
 * @name f__B4B8_0ECE_000B_BD2E
 * @implements B4B8:0ECE:000B:BD2E ()
 *
 * Called From: 34B8:0025:0005:0000
 */
void f__B4B8_0ECE_000B_BD2E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x2177), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_0ED9_001E_DC63()
 *
 * @name f__B4B8_0ED9_001E_DC63
 * @implements B4B8:0ED9:001E:DC63 ()
 *
 * Called From: 34B8:0020:0005:0000
 * Called From: B4B8:0C54:008A:FDF3
 */
void f__B4B8_0ED9_001E_DC63()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x3C);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0EF7); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0EF7_0094_B671(); return;
}

/**
 * Decompiled function f__B4B8_0EF7_0094_B671()
 *
 * @name f__B4B8_0EF7_0094_B671
 * @implements B4B8:0EF7:0094:B671 ()
 *
 */
void f__B4B8_0EF7_0094_B671()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x1C), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x28), 0xB);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x29), 0xC);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x26), 0xF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x27), 0xC);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x44C5);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x38), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x3A), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x1E), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x20), emu_ax);
	emu_movw(&emu_bx, emu_di);
	emu_subw(&emu_bx, 0xFFFC);
	emu_cmpw(&emu_bx, 0x3);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4B8_0F8B_0007_20BF(); return; }
	f__B4B8_1024_004D_6612(); return;
}

/**
 * Decompiled function f__B4B8_0F8B_0007_20BF()
 *
 * @name f__B4B8_0F8B_0007_20BF
 * @implements B4B8:0F8B:0007:20BF ()
 *
 * Called From: B4B8:0F86:0094:B671
 */
void f__B4B8_0F8B_0007_20BF()
{
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1105);
	switch (emu_ip) {
		case 0x0F92: f__B4B8_0F92_001B_C282(); return;
		case 0x0FAD: f__B4B8_0FAD_000C_69DB(); return;
		case 0x0FB9: f__B4B8_0FB9_0020_BED0(); return;
		case 0x100C: f__B4B8_100C_0018_9F31(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4B8; emu_last_ip = 0x0F8D; emu_last_length = 0x0007; emu_last_crc = 0x20BF;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4B8_0F92_001B_C282()
 *
 * @name f__B4B8_0F92_001B_C282
 * @implements B4B8:0F92:001B:C282 ()
 *
 * Called From: B4B8:0F8D:0007:20BF
 */
void f__B4B8_0F92_001B_C282()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__B4B8_1090_006F_7552(); return;
}

/**
 * Decompiled function f__B4B8_0FAD_000C_69DB()
 *
 * @name f__B4B8_0FAD_000C_69DB
 * @implements B4B8:0FAD:000C:69DB ()
 *
 * Called From: B4B8:0F8D:0007:20BF
 */
void f__B4B8_0FAD_000C_69DB()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x4);
	emu_movw(&emu_ax, 0xAEC);
	emu_movw(&emu_dx, 0xE3E);
	f__B4B8_1016_000E_EDB6(); return;
}

/**
 * Decompiled function f__B4B8_0FB9_0020_BED0()
 *
 * @name f__B4B8_0FB9_0020_BED0
 * @implements B4B8:0FB9:0020:BED0 ()
 *
 * Called From: B4B8:0F8D:0007:20BF
 */
void f__B4B8_0FB9_0020_BED0()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x4);
	emu_movw(&emu_ax, 0xAEC);
	emu_movw(&emu_dx, 0x809);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4B8_1009_0003_1D01(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0FD9); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	/* Unresolved jump */ emu_ip = 0x0FD9; emu_last_cs = 0xB4B8; emu_last_ip = 0x0FD4; emu_last_length = 0x0020; emu_last_crc = 0xBED0; emu_call();
}

/**
 * Decompiled function f__B4B8_1009_0003_1D01()
 *
 * @name f__B4B8_1009_0003_1D01
 * @implements B4B8:1009:0003:1D01 ()
 *
 * Called From: B4B8:0FD1:0020:BED0
 */
void f__B4B8_1009_0003_1D01()
{
	f__B4B8_1090_006F_7552(); return;
}

/**
 * Decompiled function f__B4B8_100C_0018_9F31()
 *
 * @name f__B4B8_100C_0018_9F31
 * @implements B4B8:100C:0018:9F31 ()
 *
 * Called From: B4B8:0F8D:0007:20BF
 */
void f__B4B8_100C_0018_9F31()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x4);
	emu_movw(&emu_ax, 0xAEC);
	emu_movw(&emu_dx, 0xCA1);
	f__B4B8_1016_000E_EDB6(); return;
}

/**
 * Decompiled function f__B4B8_1016_000E_EDB6()
 *
 * @name f__B4B8_1016_000E_EDB6
 * @implements B4B8:1016:000E:EDB6 ()
 *
 * Called From: B4B8:0FB7:000C:69DB
 */
void f__B4B8_1016_000E_EDB6()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	f__B4B8_1090_006F_7552(); return;
}

/**
 * Decompiled function f__B4B8_1024_004D_6612()
 *
 * @name f__B4B8_1024_004D_6612
 * @implements B4B8:1024:004D:6612 ()
 *
 * Called From: B4B8:0F88:0094:B671
 */
void f__B4B8_1024_004D_6612()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x1);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x446));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x444));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x108E; emu_last_cs = 0xB4B8; emu_last_ip = 0x1064; emu_last_length = 0x004D; emu_last_crc = 0x6612; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x1071); emu_cs = 0x260F; f__260F_003A_0014_CA10();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1071_0014_8D34(); return;
}

/**
 * Decompiled function f__B4B8_1071_0014_8D34()
 *
 * @name f__B4B8_1071_0014_8D34
 * @implements B4B8:1071:0014:8D34 ()
 *
 */
void f__B4B8_1071_0014_8D34()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x22), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x1085); emu_cs = 0x260F; f__260F_0054_0016_0011();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1085_000B_4127(); return;
}

/**
 * Decompiled function f__B4B8_1085_000B_4127()
 *
 * @name f__B4B8_1085_000B_4127
 * @implements B4B8:1085:000B:4127 ()
 *
 */
void f__B4B8_1085_000B_4127()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x24), emu_ax);
	f__B4B8_1090_006F_7552(); return;
}

/**
 * Decompiled function f__B4B8_1090_006F_7552()
 *
 * @name f__B4B8_1090_006F_7552
 * @implements B4B8:1090:006F:7552 ()
 *
 * Called From: B4B8:0FAA:001B:C282
 * Called From: B4B8:1009:0003:1D01
 * Called From: B4B8:1022:0018:9F31
 * Called From: B4B8:1022:000E:EDB6
 * Called From: B4B8:108E:000B:4127
 */
void f__B4B8_1090_006F_7552()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x5));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xB), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x5));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xC), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x5));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xA), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x10), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x1A), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x18), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x16), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x14), emu_dx);
	emu_cmpw(&emu_di, 0x19);
	if (emu_flags.zf) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
		emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xE));
		emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x16), emu_ax);
		emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x14), emu_dx);
	}
	f__B4B8_10F7_0008_C849(); return;
}

/**
 * Decompiled function f__B4B8_10F7_0008_C849()
 *
 * @name f__B4B8_10F7_0008_C849
 * @implements B4B8:10F7:0008:C849 ()
 *
 * Called From: B4B8:10E4:006F:7552
 */
void f__B4B8_10F7_0008_C849()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4B8_10FF_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4B8_10FF_0006_F7CE()
 *
 * @name f__B4B8_10FF_0006_F7CE
 * @implements B4B8:10FF:0006:F7CE ()
 *
 * Called From: B4B8:10FD:0008:C849
 */
void f__B4B8_10FF_0006_F7CE()
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
 * Decompiled function f__B4B8_110D_000D_FD5C()
 *
 * @name f__B4B8_110D_000D_FD5C
 * @implements B4B8:110D:000D:FD5C ()
 *
 * Called From: 34B8:002F:0005:0000
 * Called From: B4B8:21E7:0008:5434
 */
void f__B4B8_110D_000D_FD5C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4B8_1164_000B_43AB(); return;
}

/**
 * Decompiled function f__B4B8_111A_0055_2891()
 *
 * @name f__B4B8_111A_0055_2891
 * @implements B4B8:111A:0055:2891 ()
 *
 * Called From: B4B8:1169:000B:43AB
 * Called From: B4B8:1169:000E:7FB5
 * Called From: B4B8:1169:0055:2891
 */
void f__B4B8_111A_0055_2891()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C42));
	emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_bx, 0x10);
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_bx, 0x10);
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x9);
	if (emu_flags.zf) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x6);
		if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C42));
			emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x2));
			emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0x6));
			emu_movb(&emu_cl, 0x4);
			emu_shlb(&emu_al, emu_cl);
			emu_addb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x4));
			emu_addb(&emu_al, 0x90);
			emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x0), emu_al);
		}
	}
	f__B4B8_1161_000E_7FB5(); return;
}

/**
 * Decompiled function f__B4B8_1161_000E_7FB5()
 *
 * @name f__B4B8_1161_000E_7FB5
 * @implements B4B8:1161:000E:7FB5 ()
 *
 * Called From: B4B8:1143:0055:2891
 * Called From: B4B8:1149:0055:2891
 */
void f__B4B8_1161_000E_7FB5()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4B8_1164_000B_43AB(); return;
}

/**
 * Decompiled function f__B4B8_1164_000B_43AB()
 *
 * @name f__B4B8_1164_000B_43AB
 * @implements B4B8:1164:000B:43AB ()
 *
 * Called From: B4B8:1118:000D:FD5C
 */
void f__B4B8_1164_000B_43AB()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x100);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_111A_0055_2891(); return; }
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_116F_0013_15F7()
 *
 * @name f__B4B8_116F_0013_15F7
 * @implements B4B8:116F:0013:15F7 ()
 *
 * Called From: B4B8:17DE:0013:8AC6
 */
void f__B4B8_116F_0013_15F7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xA4);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4B8_1182_000B_03A1(); return; }
	f__B4B8_16CE_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4B8_1182_000B_03A1()
 *
 * @name f__B4B8_1182_000B_03A1
 * @implements B4B8:1182:000B:03A1 ()
 *
 * Called From: B4B8:117D:0013:15F7
 */
void f__B4B8_1182_000B_03A1()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x118D); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_118D_0009_F53F(); return;
}

/**
 * Decompiled function f__B4B8_118D_0009_F53F()
 *
 * @name f__B4B8_118D_0009_F53F
 * @implements B4B8:118D:0009:F53F ()
 *
 */
void f__B4B8_118D_0009_F53F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1196; emu_last_cs = 0xB4B8; emu_last_ip = 0x1191; emu_last_length = 0x0009; emu_last_crc = 0xF53F; emu_call(); return; }
	f__B4B8_16CE_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4B8_16CE_0005_8BCF()
 *
 * @name f__B4B8_16CE_0005_8BCF
 * @implements B4B8:16CE:0005:8BCF ()
 *
 * Called From: B4B8:1193:0009:F53F
 */
void f__B4B8_16CE_0005_8BCF()
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
 * Decompiled function f__B4B8_16D3_0022_3C6A()
 *
 * @name f__B4B8_16D3_0022_3C6A
 * @implements B4B8:16D3:0022:3C6A ()
 *
 * Called From: 34B8:002A:0005:0000
 */
void f__B4B8_16D3_0022_3C6A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x2C);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_si, 0x1C);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x16F5); emu_cs = 0x1FB5; f__1FB5_17D7_0018_F3C7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_16F5_0017_8515(); return;
}

/**
 * Decompiled function f__B4B8_16F5_0017_8515()
 *
 * @name f__B4B8_16F5_0017_8515
 * @implements B4B8:16F5:0017:8515 ()
 *
 */
void f__B4B8_16F5_0017_8515()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x24);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2179);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x29E8);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xA);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x170C); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_170C_000C_840B(); return;
}

/**
 * Decompiled function f__B4B8_170C_000C_840B()
 *
 * @name f__B4B8_170C_000C_840B
 * @implements B4B8:170C:000C:840B ()
 *
 */
void f__B4B8_170C_000C_840B()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_ax, 0xDEE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1718); emu_cs = 0x29E8; emu_Input_Flags_ClearBits();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1718_000A_59F5(); return;
}

/**
 * Decompiled function f__B4B8_1718_000A_59F5()
 *
 * @name f__B4B8_1718_000A_59F5
 * @implements B4B8:1718:000A:59F5 ()
 *
 */
void f__B4B8_1718_000A_59F5()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1722); emu_cs = 0x34E9; ovl__34E9(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1722_0042_5923(); return;
}

/**
 * Decompiled function f__B4B8_1722_0042_5923()
 *
 * @name f__B4B8_1722_0042_5923
 * @implements B4B8:1722:0042:5923 ()
 *
 */
void f__B4B8_1722_0042_5923()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38B0), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3B34), 0xD7);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3B36), 0x35);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3B50), 0xD8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3B52), 0x35);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A10), 0x0);
	emu_push(emu_cs); emu_push(0x1764); emu_cs = 0x3536; ovl__3536(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1764_0010_D3DB(); return;
}

/**
 * Decompiled function f__B4B8_1764_0010_D3DB()
 *
 * @name f__B4B8_1764_0010_D3DB
 * @implements B4B8:1764:0010:D3DB ()
 *
 */
void f__B4B8_1764_0010_D3DB()
{
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x300);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1774); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1774_001A_E7C5(); return;
}

/**
 * Decompiled function f__B4B8_1774_001A_E7C5()
 *
 * @name f__B4B8_1774_001A_E7C5
 * @implements B4B8:1774:001A:E7C5 ()
 *
 */
void f__B4B8_1774_001A_E7C5()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3C38), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3C36), emu_ax);
	emu_movw(&emu_ax, 0x10);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x300);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x178E); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_178E_0019_6A0B(); return;
}

/**
 * Decompiled function f__B4B8_178E_0019_6A0B()
 *
 * @name f__B4B8_178E_0019_6A0B
 * @implements B4B8:178E:0019:6A0B ()
 *
 */
void f__B4B8_178E_0019_6A0B()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3C34), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3C32), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x100);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x17A7); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_17A7_0027_C603(); return;
}

/**
 * Decompiled function f__B4B8_17A7_0027_C603()
 *
 * @name f__B4B8_17A7_0027_C603
 * @implements B4B8:17A7:0027:C603 ()
 *
 */
void f__B4B8_17A7_0027_C603()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3C44), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3C42), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38E0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38DE), 0x2EE0);
	emu_movw(&emu_ax, 0x20);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_cs); emu_push(0x17CE); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_17CE_0013_8AC6(); return;
}

/**
 * Decompiled function f__B4B8_17CE_0013_8AC6()
 *
 * @name f__B4B8_17CE_0013_8AC6
 * @implements B4B8:17CE:0013:8AC6 ()
 *
 */
void f__B4B8_17CE_0013_8AC6()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38DC), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38DA), emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x22B4);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x17E1); f__B4B8_116F_0013_15F7();
	f__B4B8_17E1_000F_E497(); return;
}

/**
 * Decompiled function f__B4B8_17E1_000F_E497()
 *
 * @name f__B4B8_17E1_000F_E497
 * @implements B4B8:17E1:000F:E497 ()
 *
 */
void f__B4B8_17E1_000F_E497()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x17F0); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_17F0_0027_AC90(); return;
}

/**
 * Decompiled function f__B4B8_17F0_0027_AC90()
 *
 * @name f__B4B8_17F0_0027_AC90
 * @implements B4B8:17F0:0027:AC90 ()
 *
 */
void f__B4B8_17F0_0027_AC90()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38DC), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38DA), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x300);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x22C0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1817); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1817_001F_0626(); return;
}

/**
 * Decompiled function f__B4B8_1817_001F_0626()
 *
 * @name f__B4B8_1817_001F_0626
 * @implements B4B8:1817:001F:0626 ()
 *
 */
void f__B4B8_1817_001F_0626()
{
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x300);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x1836); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1836_000B_F571(); return;
}

/**
 * Decompiled function f__B4B8_1836_000B_F571()
 *
 * @name f__B4B8_1836_000B_F571
 * @implements B4B8:1836:000B:F571 ()
 *
 */
void f__B4B8_1836_000B_F571()
{
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1841); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1841_0011_6D15(); return;
}

/**
 * Decompiled function f__B4B8_1841_0011_6D15()
 *
 * @name f__B4B8_1841_0011_6D15
 * @implements B4B8:1841:0011:6D15 ()
 *
 */
void f__B4B8_1841_0011_6D15()
{
	emu_pop(&emu_cx);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_dx, &emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_movw(&emu_cx, 0x100);
	emu_xorw(&emu_bx, emu_bx);
	emu_movb(&emu_al, 0x12);
	emu_movb(&emu_ah, 0x10);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x1852); Interrupt_Video();
	f__B4B8_1852_000E_A415(); return;
}

/**
 * Decompiled function f__B4B8_1852_000E_A415()
 *
 * @name f__B4B8_1852_000E_A415
 * @implements B4B8:1852:000E:A415 ()
 *
 */
void f__B4B8_1852_000E_A415()
{
	emu_pop(&emu_es);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x1860); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1860_000F_9764(); return;
}

/**
 * Decompiled function f__B4B8_1860_000F_9764()
 *
 * @name f__B4B8_1860_000F_9764
 * @implements B4B8:1860:000F:9764 ()
 *
 */
void f__B4B8_1860_000F_9764()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x186F); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_186F_0011_B8BA(); return;
}

/**
 * Decompiled function f__B4B8_186F_0011_B8BA()
 *
 * @name f__B4B8_186F_0011_B8BA
 * @implements B4B8:186F:0011:B8BA ()
 *
 */
void f__B4B8_186F_0011_B8BA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x100);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1880); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1880_0019_EE0B(); return;
}

/**
 * Decompiled function f__B4B8_1880_0019_EE0B()
 *
 * @name f__B4B8_1880_0019_EE0B
 * @implements B4B8:1880:0019:EE0B ()
 *
 */
void f__B4B8_1880_0019_EE0B()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3C3C), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3C3A), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x100);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1899); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1899_002C_7400(); return;
}

/**
 * Decompiled function f__B4B8_1899_002C_7400()
 *
 * @name f__B4B8_1899_002C_7400
 * @implements B4B8:1899:002C:7400 ()
 *
 */
void f__B4B8_1899_002C_7400()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3C40), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3C3E), emu_ax);
	emu_movw(&emu_ax, 0x55);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xC);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C3C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C3A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6638);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x663A);
	emu_push(0x18C5);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60597: f__22A6_0597_0019_A23D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4B8; emu_last_ip = 0x18C0; emu_last_length = 0x002C; emu_last_crc = 0x7400;
			emu_call();
			return;
	}
	f__B4B8_18C5_0025_1863(); return;
}

/**
 * Decompiled function f__B4B8_18C5_0025_1863()
 *
 * @name f__B4B8_18C5_0025_1863
 * @implements B4B8:18C5:0025:1863 ()
 *
 */
void f__B4B8_18C5_0025_1863()
{
	emu_addw(&emu_sp, 0xC);
	emu_movw(&emu_ax, 0x55);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C40));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C3E));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6638);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x663A);
	emu_push(0x18EA);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60597: f__22A6_0597_0019_A23D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4B8; emu_last_ip = 0x18E5; emu_last_length = 0x0025; emu_last_crc = 0x1863;
			emu_call();
			return;
	}
	f__B4B8_18EA_004F_3A18(); return;
}

/**
 * Decompiled function f__B4B8_18EA_004F_3A18()
 *
 * @name f__B4B8_18EA_004F_3A18
 * @implements B4B8:18EA:004F:3A18 ()
 *
 */
void f__B4B8_18EA_004F_3A18()
{
	emu_addw(&emu_sp, 0xC);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C3A));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xFF), 0xFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C3A));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xDF), 0xDF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C3A));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xEF), 0xEF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C3E));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xFF), 0xFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C3E));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xDF), 0xDF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3C3E));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xEF), 0xEF);
	emu_movw(&emu_ax, 0x30);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x5DC);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1939); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1939_001B_556A(); return;
}

/**
 * Decompiled function f__B4B8_1939_001B_556A()
 *
 * @name f__B4B8_1939_001B_556A
 * @implements B4B8:1939:001B:556A ()
 *
 */
void f__B4B8_1939_001B_556A()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3C48), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3C46), emu_ax);
	emu_movw(&emu_ax, 0x5DC);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C48));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C46));
	emu_push(emu_cs); emu_push(0x1954); emu_cs = 0x2903; f__2903_090A_0019_4354();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1954_0010_C42D(); return;
}

/**
 * Decompiled function f__B4B8_1954_0010_C42D()
 *
 * @name f__B4B8_1954_0010_C42D
 * @implements B4B8:1954:0010:C42D ()
 *
 */
void f__B4B8_1954_0010_C42D()
{
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x22C8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1964); emu_cs = 0x0642; f__0642_075D_0011_C164();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1964_0009_6FDE(); return;
}

/**
 * Decompiled function f__B4B8_1964_0009_6FDE()
 *
 * @name f__B4B8_1964_0009_6FDE
 * @implements B4B8:1964:0009:6FDE ()
 *
 */
void f__B4B8_1964_0009_6FDE()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x196D); emu_cs = 0x253D; f__253D_008A_0016_007A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_196D_0017_0B05(); return;
}

/**
 * Decompiled function f__B4B8_196D_0017_0B05()
 *
 * @name f__B4B8_196D_0017_0B05
 * @implements B4B8:196D:0017:0B05 ()
 *
 */
void f__B4B8_196D_0017_0B05()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38C8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38C6), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x2);
	if (!emu_flags.zf) { f__B4B8_1984_000A_8AD2(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x22D0);
	/* Unresolved jump */ emu_ip = 0x1988; emu_last_cs = 0xB4B8; emu_last_ip = 0x1982; emu_last_length = 0x0017; emu_last_crc = 0x0B05; emu_call();
}

/**
 * Decompiled function f__B4B8_1984_000A_8AD2()
 *
 * @name f__B4B8_1984_000A_8AD2
 * @implements B4B8:1984:000A:8AD2 ()
 *
 * Called From: B4B8:197C:0017:0B05
 */
void f__B4B8_1984_000A_8AD2()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x22DB);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x198E); emu_cs = 0x256D; f__256D_0004_001C_9F23();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_198E_0031_26DF(); return;
}

/**
 * Decompiled function f__B4B8_198E_0031_26DF()
 *
 * @name f__B4B8_198E_0031_26DF
 * @implements B4B8:198E:0031:26DF ()
 *
 */
void f__B4B8_198E_0031_26DF()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A2E), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A2C), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x99F1));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x99EF));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A32), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A30), emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x6128);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x392E);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x22E5);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x19BF); f__B4B8_2295_0018_A862();
	f__B4B8_19BF_001D_EB62(); return;
}

/**
 * Decompiled function f__B4B8_19BF_001D_EB62()
 *
 * @name f__B4B8_19BF_001D_EB62
 * @implements B4B8:19BF:001D:EB62 ()
 *
 */
void f__B4B8_19BF_001D_EB62()
{
	emu_addw(&emu_sp, 0x10);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x33B6);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x3918);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x22EA);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x19DC); f__B4B8_2295_0018_A862();
	f__B4B8_19DC_0012_4248(); return;
}

/**
 * Decompiled function f__B4B8_19DC_0012_4248()
 *
 * @name f__B4B8_19DC_0012_4248
 * @implements B4B8:19DC:0012:4248 ()
 *
 */
void f__B4B8_19DC_0012_4248()
{
	emu_addw(&emu_sp, 0x10);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0xFFFF);
	if (emu_flags.zf) { f__B4B8_19EF_0013_03D7(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs);
	emu_push(0x19EE); f__B4B8_110D_000D_FD5C();
	/* Unresolved jump */ emu_ip = 0x19EE; emu_last_cs = 0xB4B8; emu_last_ip = 0x19EB; emu_last_length = 0x0012; emu_last_crc = 0x4248; emu_call();
}

/**
 * Decompiled function f__B4B8_19EF_0013_03D7()
 *
 * @name f__B4B8_19EF_0013_03D7
 * @implements B4B8:19EF:0013:03D7 ()
 *
 * Called From: B4B8:19E4:0012:4248
 */
void f__B4B8_19EF_0013_03D7()
{
	emu_movw(&emu_ax, 0x2DCE);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x440);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1A02); f__B4B8_0A1E_001A_E094();
	f__B4B8_1A02_0023_5281(); return;
}

/**
 * Decompiled function f__B4B8_1A02_0023_5281()
 *
 * @name f__B4B8_1A02_0023_5281
 * @implements B4B8:1A02:0023:5281 ()
 *
 */
void f__B4B8_1A02_0023_5281()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A34), 0x0);
	emu_movw(&emu_ax, 0x2DCE);
	emu_movw(&emu_es, emu_ax);
	emu_push(emu_get_memory16(emu_es, 0x00, 0x442));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x440));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1A25); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1A25_0005_87AE(); return;
}

/**
 * Decompiled function f__B4B8_1A25_0005_87AE()
 *
 * @name f__B4B8_1A25_0005_87AE
 * @implements B4B8:1A25:0005:87AE ()
 *
 */
void f__B4B8_1A25_0005_87AE()
{
	emu_addw(&emu_sp, 0x8);
	f__B4B8_1A2F_000B_A1A7(); return;
}

/**
 * Decompiled function f__B4B8_1A2F_000B_A1A7()
 *
 * @name f__B4B8_1A2F_000B_A1A7
 * @implements B4B8:1A2F:000B:A1A7 ()
 *
 * Called From: B4B8:1A28:0005:87AE
 */
void f__B4B8_1A2F_000B_A1A7()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x706A), 0x1);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x1A2A; emu_last_cs = 0xB4B8; emu_last_ip = 0x1A34; emu_last_length = 0x000B; emu_last_crc = 0xA1A7; emu_call(); return; }
	emu_push(emu_cs);
	emu_push(0x1A3A); f__B4B8_0BC1_000C_1630();
	f__B4B8_1A3A_0005_9EEE(); return;
}

/**
 * Decompiled function f__B4B8_1A3A_0005_9EEE()
 *
 * @name f__B4B8_1A3A_0005_9EEE
 * @implements B4B8:1A3A:0005:9EEE ()
 *
 */
void f__B4B8_1A3A_0005_9EEE()
{
	emu_push(emu_cs); emu_push(0x1A3F); emu_cs = 0x34F2; ovl__34F2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1A3F_0009_CF06(); return;
}

/**
 * Decompiled function f__B4B8_1A3F_0009_CF06()
 *
 * @name f__B4B8_1A3F_0009_CF06
 * @implements B4B8:1A3F:0009:CF06 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4B8_1A3F_0009_CF06()
{
	emu_movw(&emu_ax, 0x9);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1A48); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1A48_0010_5926(); return;
}

/**
 * Decompiled function f__B4B8_1A48_0010_5926()
 *
 * @name f__B4B8_1A48_0010_5926
 * @implements B4B8:1A48:0010:5926 ()
 *
 */
void f__B4B8_1A48_0010_5926()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, 0x9);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1A58); emu_cs = 0x24DA; f__24DA_002D_0010_3EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1A58_001E_DA55(); return;
}

/**
 * Decompiled function f__B4B8_1A58_001E_DA55()
 *
 * @name f__B4B8_1A58_001E_DA55
 * @implements B4B8:1A58:001E:DA55 ()
 *
 */
void f__B4B8_1A58_001E_DA55()
{
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x1234);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x5678);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x4);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1A76); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1A76_0025_CBCB(); return;
}

/**
 * Decompiled function f__B4B8_1A76_0025_CBCB()
 *
 * @name f__B4B8_1A76_0025_CBCB
 * @implements B4B8:1A76:0025:CBCB ()
 *
 */
void f__B4B8_1A76_0025_CBCB()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x39EC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x39EA), emu_dx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x4000);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1A9B); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1A9B_0013_FFC6(); return;
}

/**
 * Decompiled function f__B4B8_1A9B_0013_FFC6()
 *
 * @name f__B4B8_1A9B_0013_FFC6
 * @implements B4B8:1A9B:0013:FFC6 ()
 *
 */
void f__B4B8_1A9B_0013_FFC6()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1AAE); emu_cs = 0x0FE4; emu_Unit_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1AAE_0010_CE4A(); return;
}

/**
 * Decompiled function f__B4B8_1AAE_0010_CE4A()
 *
 * @name f__B4B8_1AAE_0010_CE4A
 * @implements B4B8:1AAE:0010:CE4A ()
 *
 */
void f__B4B8_1AAE_0010_CE4A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1ABE); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1ABE_0013_104B(); return;
}

/**
 * Decompiled function f__B4B8_1ABE_0013_104B()
 *
 * @name f__B4B8_1ABE_0013_104B
 * @implements B4B8:1ABE:0013:104B ()
 *
 */
void f__B4B8_1ABE_0013_104B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1AD1); emu_cs = 0x104B; emu_AirUnit_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1AD1_0010_CE4A(); return;
}

/**
 * Decompiled function f__B4B8_1AD1_0010_CE4A()
 *
 * @name f__B4B8_1AD1_0010_CE4A
 * @implements B4B8:1AD1:0010:CE4A ()
 *
 */
void f__B4B8_1AD1_0010_CE4A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1AE1); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1AE1_0013_4073(); return;
}

/**
 * Decompiled function f__B4B8_1AE1_0013_4073()
 *
 * @name f__B4B8_1AE1_0013_4073
 * @implements B4B8:1AE1:0013:4073 ()
 *
 */
void f__B4B8_1AE1_0013_4073()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1AF4); emu_cs = 0x10BE; emu_House_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1AF4_0010_CE4A(); return;
}

/**
 * Decompiled function f__B4B8_1AF4_0010_CE4A()
 *
 * @name f__B4B8_1AF4_0010_CE4A
 * @implements B4B8:1AF4:0010:CE4A ()
 *
 */
void f__B4B8_1AF4_0010_CE4A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1B04); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1B04_0013_0075(); return;
}

/**
 * Decompiled function f__B4B8_1B04_0013_0075()
 *
 * @name f__B4B8_1B04_0013_0075
 * @implements B4B8:1B04:0013:0075 ()
 *
 */
void f__B4B8_1B04_0013_0075()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1B17); emu_cs = 0x1082; emu_Building_Init();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1B17_0014_191A(); return;
}

/**
 * Decompiled function f__B4B8_1B17_0014_191A()
 *
 * @name f__B4B8_1B17_0014_191A
 * @implements B4B8:1B17:0014:191A ()
 *
 */
void f__B4B8_1B17_0014_191A()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x58);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1B2B); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1B2B_0025_9F95(); return;
}

/**
 * Decompiled function f__B4B8_1B2B_0025_9F95()
 *
 * @name f__B4B8_1B2B_0025_9F95
 * @implements B4B8:1B2B:0025:9F95 ()
 *
 */
void f__B4B8_1B2B_0025_9F95()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3958), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3956), emu_dx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x770);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1B50); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1B50_0027_A86C(); return;
}

/**
 * Decompiled function f__B4B8_1B50_0027_A86C()
 *
 * @name f__B4B8_1B50_0027_A86C
 * @implements B4B8:1B50:0027:A86C ()
 *
 */
void f__B4B8_1B50_0027_A86C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x395C), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x395A), emu_dx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x280);
	emu_movw(&emu_si, 0x1C);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_push(emu_cs); emu_push(0x1B77); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1B77_000A_E2A3(); return;
}

/**
 * Decompiled function f__B4B8_1B77_000A_E2A3()
 *
 * @name f__B4B8_1B77_000A_E2A3
 * @implements B4B8:1B77:000A:E2A3 ()
 *
 */
void f__B4B8_1B77_000A_E2A3()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37AE), 0x0);
	if (emu_flags.zf) { f__B4B8_1B81_000F_A141(); return; }
	/* Unresolved jump */ emu_ip = 0x20CA; emu_last_cs = 0xB4B8; emu_last_ip = 0x1B7E; emu_last_length = 0x000A; emu_last_crc = 0xE2A3; emu_call();
}

/**
 * Decompiled function f__B4B8_1B81_000F_A141()
 *
 * @name f__B4B8_1B81_000F_A141
 * @implements B4B8:1B81:000F:A141 ()
 *
 * Called From: B4B8:1B7C:000A:E2A3
 */
void f__B4B8_1B81_000F_A141()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x22F0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1B90); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1B90_000F_DC51(); return;
}

/**
 * Decompiled function f__B4B8_1B90_000F_DC51()
 *
 * @name f__B4B8_1B90_000F_DC51
 * @implements B4B8:1B90:000F:DC51 ()
 *
 */
void f__B4B8_1B90_000F_DC51()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x22FD);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1B9F); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1B9F_0010_30A4(); return;
}

/**
 * Decompiled function f__B4B8_1B9F_0010_30A4()
 *
 * @name f__B4B8_1B9F_0010_30A4
 * @implements B4B8:1B9F:0010:30A4 ()
 *
 */
void f__B4B8_1B9F_0010_30A4()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { f__B4B8_1BAF_0010_3989(); return; }
	emu_movw(&emu_ax, 0x1);
	f__B4B8_1BB1_000E_B9BB(); return;
}

/**
 * Decompiled function f__B4B8_1BAF_0010_3989()
 *
 * @name f__B4B8_1BAF_0010_3989
 * @implements B4B8:1BAF:0010:3989 ()
 *
 * Called From: B4B8:1BA8:0010:30A4
 */
void f__B4B8_1BAF_0010_3989()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B4B8_1BB1_000E_B9BB(); return;
}

/**
 * Decompiled function f__B4B8_1BB1_000E_B9BB()
 *
 * @name f__B4B8_1BB1_000E_B9BB
 * @implements B4B8:1BB1:000E:B9BB ()
 *
 * Called From: B4B8:1BAD:0010:30A4
 */
void f__B4B8_1BB1_000E_B9BB()
{
	emu_shlw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__B4B8_1BBF_0018_10AD(); return; }
	emu_movw(&emu_ax, 0x1);
	f__B4B8_1BC1_0016_222D(); return;
}

/**
 * Decompiled function f__B4B8_1BBF_0018_10AD()
 *
 * @name f__B4B8_1BBF_0018_10AD
 * @implements B4B8:1BBF:0018:10AD ()
 *
 * Called From: B4B8:1BB8:000E:B9BB
 * Called From: B4B8:1BB8:0010:3989
 */
void f__B4B8_1BBF_0018_10AD()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B4B8_1BC1_0016_222D(); return;
}

/**
 * Decompiled function f__B4B8_1BC1_0016_222D()
 *
 * @name f__B4B8_1BC1_0016_222D
 * @implements B4B8:1BC1:0016:222D ()
 *
 * Called From: B4B8:1BBD:0010:3989
 * Called From: B4B8:1BBD:000E:B9BB
 */
void f__B4B8_1BC1_0016_222D()
{
	emu_pop(&emu_dx);
	emu_orw(&emu_dx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (!emu_flags.zf) { f__B4B8_1BDD_001F_2E51(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x230A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1BD7); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1BD7_0025_87CA(); return;
}

/**
 * Decompiled function f__B4B8_1BD7_0025_87CA()
 *
 * @name f__B4B8_1BD7_0025_87CA
 * @implements B4B8:1BD7:0025:87CA ()
 *
 */
void f__B4B8_1BD7_0025_87CA()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4B8_1BE3_0019_233D(); return; }
	f__B4B8_1BDD_001F_2E51(); return;
}

/**
 * Decompiled function f__B4B8_1BDD_001F_2E51()
 *
 * @name f__B4B8_1BDD_001F_2E51
 * @implements B4B8:1BDD:001F:2E51 ()
 *
 * Called From: B4B8:1BCB:0016:222D
 */
void f__B4B8_1BDD_001F_2E51()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37B4), 0x1);
	f__B4B8_1BE3_0019_233D(); return;
}

/**
 * Decompiled function f__B4B8_1BE3_0019_233D()
 *
 * @name f__B4B8_1BE3_0019_233D
 * @implements B4B8:1BE3:0019:233D ()
 *
 * Called From: B4B8:1BDB:0025:87CA
 * Called From: B4B8:20C5:0008:7DFA
 */
void f__B4B8_1BE3_0019_233D()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_si);
	emu_movw(&emu_cx, 0x5);
	emu_movw(&emu_bx, 0x2281);
	f__B4B8_1BEC_0010_76E3(); return;
}

/**
 * Decompiled function f__B4B8_1BEC_0010_76E3()
 *
 * @name f__B4B8_1BEC_0010_76E3
 * @implements B4B8:1BEC:0010:76E3 ()
 *
 * Called From: B4B8:1BF7:001F:2E51
 * Called From: B4B8:1BF7:0019:233D
 * Called From: B4B8:1BF7:0010:76E3
 * Called From: B4B8:1BF7:0025:87CA
 */
void f__B4B8_1BEC_0010_76E3()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, emu_bx, 0x0));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { f__B4B8_1BFC_0004_3AFB(); return; }
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) { f__B4B8_1BEC_0010_76E3(); return; }
	f__B4B8_1E48_0002_C03A(); return;
}

/**
 * Decompiled function f__B4B8_1BFC_0004_3AFB()
 *
 * @name f__B4B8_1BFC_0004_3AFB
 * @implements B4B8:1BFC:0004:3AFB ()
 *
 * Called From: B4B8:1BF2:0010:76E3
 */
void f__B4B8_1BFC_0004_3AFB()
{

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0xA);
	switch (emu_ip) {
		case 0x1C03: f__B4B8_1C03_0008_FC73(); return;
		case 0x1D5D: f__B4B8_1D5D_0005_1E52(); return;
		case 0x1D6E: f__B4B8_1D6E_0005_6168(); return;
		case 0x1DF6: f__B4B8_1DF6_0009_F0F7(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4B8; emu_last_ip = 0x1BFC; emu_last_length = 0x0004; emu_last_crc = 0x3AFB;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4B8_1C03_0008_FC73()
 *
 * @name f__B4B8_1C03_0008_FC73
 * @implements B4B8:1C03:0008:FC73 ()
 *
 * Called From: B4B8:1BFC:0004:3AFB
 */
void f__B4B8_1C03_0008_FC73()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1C0B); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1C0B_000E_5697(); return;
}

/**
 * Decompiled function f__B4B8_1C0B_000E_5697()
 *
 * @name f__B4B8_1C0B_000E_5697
 * @implements B4B8:1C0B:000E:5697 ()
 *
 */
void f__B4B8_1C0B_000E_5697()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x1C19); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1C19_0017_856F(); return;
}

/**
 * Decompiled function f__B4B8_1C19_0017_856F()
 *
 * @name f__B4B8_1C19_0017_856F
 * @implements B4B8:1C19:0017:856F ()
 *
 */
void f__B4B8_1C19_0017_856F()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x0);
	if (emu_flags.zf) { f__B4B8_1C30_001D_DFBC(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38E0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38DE), 0x6D60);
	/* Unresolved jump */ emu_ip = 0x1C3C; emu_last_cs = 0xB4B8; emu_last_ip = 0x1C2E; emu_last_length = 0x0017; emu_last_crc = 0x856F; emu_call();
}

/**
 * Decompiled function f__B4B8_1C30_001D_DFBC()
 *
 * @name f__B4B8_1C30_001D_DFBC
 * @implements B4B8:1C30:001D:DFBC ()
 *
 * Called From: B4B8:1C20:0017:856F
 */
void f__B4B8_1C30_001D_DFBC()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38E0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38DE), 0x2EE0);
	emu_movw(&emu_ax, 0x20);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_cs); emu_push(0x1C4D); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1C4D_000F_E943(); return;
}

/**
 * Decompiled function f__B4B8_1C4D_000F_E943()
 *
 * @name f__B4B8_1C4D_000F_E943
 * @implements B4B8:1C4D:000F:E943 ()
 *
 */
void f__B4B8_1C4D_000F_E943()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38DC), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38DA), emu_ax);
	emu_push(emu_cs); emu_push(0x1C5C); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1C5C_0005_FB00(); return;
}

/**
 * Decompiled function f__B4B8_1C5C_0005_FB00()
 *
 * @name f__B4B8_1C5C_0005_FB00
 * @implements B4B8:1C5C:0005:FB00 ()
 *
 */
void f__B4B8_1C5C_0005_FB00()
{
	emu_push(emu_cs); emu_push(0x1C61); emu_cs = 0x1DD7; f__1DD7_0B53_0025_36F7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1C61_0005_9EFD(); return;
}

/**
 * Decompiled function f__B4B8_1C61_0005_9EFD()
 *
 * @name f__B4B8_1C61_0005_9EFD
 * @implements B4B8:1C61:0005:9EFD ()
 *
 */
void f__B4B8_1C61_0005_9EFD()
{
	emu_push(emu_cs); emu_push(0x1C66); emu_cs = 0x34BE; ovl__34BE(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1C66_0009_C151(); return;
}

/**
 * Decompiled function f__B4B8_1C66_0009_C151()
 *
 * @name f__B4B8_1C66_0009_C151
 * @implements B4B8:1C66:0009:C151 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4B8_1C66_0009_C151()
{
	emu_movw(&emu_ax, 0xFFFE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1C6F); emu_cs = 0x3483; ovl__3483(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1C6F_001A_FE4A(); return;
}

/**
 * Decompiled function f__B4B8_1C6F_001A_FE4A()
 *
 * @name f__B4B8_1C6F_001A_FE4A
 * @implements B4B8:1C6F:001A:FE4A ()
 *
 */
void f__B4B8_1C6F_001A_FE4A()
{
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x300);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x22C0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1C89); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1C89_001F_0626(); return;
}

/**
 * Decompiled function f__B4B8_1C89_001F_0626()
 *
 * @name f__B4B8_1C89_001F_0626
 * @implements B4B8:1C89:001F:0626 ()
 *
 */
void f__B4B8_1C89_001F_0626()
{
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x300);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x1CA8); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1CA8_0018_7248(); return;
}

/**
 * Decompiled function f__B4B8_1CA8_0018_7248()
 *
 * @name f__B4B8_1CA8_0018_7248
 * @implements B4B8:1CA8:0018:7248 ()
 *
 */
void f__B4B8_1CA8_0018_7248()
{
	emu_addw(&emu_sp, 0xC);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B4), 0x0);
	if (!emu_flags.zf) { f__B4B8_1CD5_0008_FC73(); return; }
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x230A);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1CC0); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1CC0_000E_6633(); return;
}

/**
 * Decompiled function f__B4B8_1CC0_000E_6633()
 *
 * @name f__B4B8_1CC0_000E_6633
 * @implements B4B8:1CC0:000E:6633 ()
 *
 */
void f__B4B8_1CC0_000E_6633()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x1CCE); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1CCE_000F_9669(); return;
}

/**
 * Decompiled function f__B4B8_1CCE_000F_9669()
 *
 * @name f__B4B8_1CCE_000F_9669
 * @implements B4B8:1CCE:000F:9669 ()
 *
 */
void f__B4B8_1CCE_000F_9669()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37B4), 0x1);
	f__B4B8_1CD5_0008_FC73(); return;
}

/**
 * Decompiled function f__B4B8_1CD5_0008_FC73()
 *
 * @name f__B4B8_1CD5_0008_FC73
 * @implements B4B8:1CD5:0008:FC73 ()
 *
 * Called From: B4B8:1CB0:0018:7248
 */
void f__B4B8_1CD5_0008_FC73()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1CDD); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1CDD_000E_5697(); return;
}

/**
 * Decompiled function f__B4B8_1CDD_000E_5697()
 *
 * @name f__B4B8_1CDD_000E_5697
 * @implements B4B8:1CDD:000E:5697 ()
 *
 */
void f__B4B8_1CDD_000E_5697()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DA));
	emu_push(emu_cs); emu_push(0x1CEB); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1CEB_000C_6762(); return;
}

/**
 * Decompiled function f__B4B8_1CEB_000C_6762()
 *
 * @name f__B4B8_1CEB_000C_6762
 * @implements B4B8:1CEB:000C:6762 ()
 *
 */
void f__B4B8_1CEB_000C_6762()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2316);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1CF7); emu_cs = 0x0FCB; f__0FCB_000D_0019_5047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1CF7_0017_810B(); return;
}

/**
 * Decompiled function f__B4B8_1CF7_0017_810B()
 *
 * @name f__B4B8_1CF7_0017_810B
 * @implements B4B8:1CF7:0017:810B ()
 *
 */
void f__B4B8_1CF7_0017_810B()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x0);
	if (emu_flags.zf) { f__B4B8_1D0E_001D_DFBC(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38E0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38DE), 0x4E20);
	/* Unresolved jump */ emu_ip = 0x1D1A; emu_last_cs = 0xB4B8; emu_last_ip = 0x1D0C; emu_last_length = 0x0017; emu_last_crc = 0x810B; emu_call();
}

/**
 * Decompiled function f__B4B8_1D0E_001D_DFBC()
 *
 * @name f__B4B8_1D0E_001D_DFBC
 * @implements B4B8:1D0E:001D:DFBC ()
 *
 * Called From: B4B8:1CFE:0017:810B
 */
void f__B4B8_1D0E_001D_DFBC()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38E0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38DE), 0x2EE0);
	emu_movw(&emu_ax, 0x20);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38DE));
	emu_push(emu_cs); emu_push(0x1D2B); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1D2B_000F_0946(); return;
}

/**
 * Decompiled function f__B4B8_1D2B_000F_0946()
 *
 * @name f__B4B8_1D2B_000F_0946
 * @implements B4B8:1D2B:000F:0946 ()
 *
 */
void f__B4B8_1D2B_000F_0946()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38DC), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38DA), emu_ax);
	emu_push(emu_cs); emu_push(0x1D3A); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1D3A_0013_4DE4(); return;
}

/**
 * Decompiled function f__B4B8_1D3A_0013_4DE4()
 *
 * @name f__B4B8_1D3A_0013_4DE4
 * @implements B4B8:1D3A:0013:4DE4 ()
 *
 */
void f__B4B8_1D3A_0013_4DE4()
{
	emu_movw(&emu_ax, 0x2DCE);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x440);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1D4D); f__B4B8_0A1E_001A_E094();
	f__B4B8_1D4D_000C_5887(); return;
}

/**
 * Decompiled function f__B4B8_1D4D_000C_5887()
 *
 * @name f__B4B8_1D4D_000C_5887
 * @implements B4B8:1D4D:000C:5887 ()
 *
 */
void f__B4B8_1D4D_000C_5887()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_ax, 0x1C);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1D59); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1D59_0004_8D1C(); return;
}

/**
 * Decompiled function f__B4B8_1D59_0004_8D1C()
 *
 * @name f__B4B8_1D59_0004_8D1C
 * @implements B4B8:1D59:0004:8D1C ()
 *
 */
void f__B4B8_1D59_0004_8D1C()
{
	emu_pop(&emu_cx);
	f__B4B8_1E41_0007_CF65(); return;
}

/**
 * Decompiled function f__B4B8_1D5D_0005_1E52()
 *
 * @name f__B4B8_1D5D_0005_1E52
 * @implements B4B8:1D5D:0005:1E52 ()
 *
 * Called From: B4B8:1BFC:0004:3AFB
 */
void f__B4B8_1D5D_0005_1E52()
{
	emu_push(emu_cs); emu_push(0x1D62); emu_cs = 0x3500; ovl__3500(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1D62_0008_C68B(); return;
}

/**
 * Decompiled function f__B4B8_1D62_0008_C68B()
 *
 * @name f__B4B8_1D62_0008_C68B
 * @implements B4B8:1D62:0008:C68B ()
 *
 */
void f__B4B8_1D62_0008_C68B()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1D6A); emu_cs = 0x01F7; f__01F7_0377_000D_81BB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	/* Unresolved jump */ emu_ip = 0x1D6A; emu_last_cs = 0xB4B8; emu_last_ip = 0x1D65; emu_last_length = 0x0008; emu_last_crc = 0xC68B; emu_call();
}

/**
 * Decompiled function f__B4B8_1D6E_0005_6168()
 *
 * @name f__B4B8_1D6E_0005_6168
 * @implements B4B8:1D6E:0005:6168 ()
 *
 * Called From: B4B8:1BFC:0004:3AFB
 */
void f__B4B8_1D6E_0005_6168()
{
	emu_push(emu_cs); emu_push(0x1D73); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1D73_0011_195A(); return;
}

/**
 * Decompiled function f__B4B8_1D73_0011_195A()
 *
 * @name f__B4B8_1D73_0011_195A
 * @implements B4B8:1D73:0011:195A ()
 *
 */
void f__B4B8_1D73_0011_195A()
{
	emu_movw(&emu_ax, 0x1E);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x1D84); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1D84_000B_F574(); return;
}

/**
 * Decompiled function f__B4B8_1D84_000B_F574()
 *
 * @name f__B4B8_1D84_000B_F574
 * @implements B4B8:1D84:000B:F574 ()
 *
 */
void f__B4B8_1D84_000B_F574()
{
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1D8F); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1D8F_0006_E56C(); return;
}

/**
 * Decompiled function f__B4B8_1D8F_0006_E56C()
 *
 * @name f__B4B8_1D8F_0006_E56C
 * @implements B4B8:1D8F:0006:E56C ()
 *
 */
void f__B4B8_1D8F_0006_E56C()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x1D95); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1D95_000D_A409(); return;
}

/**
 * Decompiled function f__B4B8_1D95_000D_A409()
 *
 * @name f__B4B8_1D95_000D_A409
 * @implements B4B8:1D95:000D:A409 ()
 *
 */
void f__B4B8_1D95_000D_A409()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x1DA2); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1DA2_000A_DA03(); return;
}

/**
 * Decompiled function f__B4B8_1DA2_000A_DA03()
 *
 * @name f__B4B8_1DA2_000A_DA03
 * @implements B4B8:1DA2:000A:DA03 ()
 *
 */
void f__B4B8_1DA2_000A_DA03()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1DAC); emu_cs = 0x34F2; ovl__34F2(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1DAC_002A_80E8(); return;
}

/**
 * Decompiled function f__B4B8_1DAC_002A_80E8()
 *
 * @name f__B4B8_1DAC_002A_80E8
 * @implements B4B8:1DAC:002A:80E8 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4B8_1DAC_002A_80E8()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1DE0; emu_last_cs = 0xB4B8; emu_last_ip = 0x1DAF; emu_last_length = 0x002A; emu_last_crc = 0x80E8; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BE), 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x1DD9; emu_last_cs = 0xB4B8; emu_last_ip = 0x1DBB; emu_last_length = 0x002A; emu_last_crc = 0x80E8; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x38BE), 0x0);
	emu_movw(&emu_ax, 0x2DCE);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x440);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1DD6); f__B4B8_0A1E_001A_E094();
	f__B4B8_1DD6_000A_FC97(); return;
}

/**
 * Decompiled function f__B4B8_1DD6_000A_FC97()
 *
 * @name f__B4B8_1DD6_000A_FC97
 * @implements B4B8:1DD6:000A:FC97 ()
 *
 */
void f__B4B8_1DD6_000A_FC97()
{
	emu_addw(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	f__B4B8_1DF4_0002_EA3A(); return;
}

/**
 * Decompiled function f__B4B8_1DF4_0002_EA3A()
 *
 * @name f__B4B8_1DF4_0002_EA3A
 * @implements B4B8:1DF4:0002:EA3A ()
 *
 * Called From: B4B8:1DDE:000A:FC97
 */
void f__B4B8_1DF4_0002_EA3A()
{
	f__B4B8_1E4A_0009_9034(); return;
}

/**
 * Decompiled function f__B4B8_1DF6_0009_F0F7()
 *
 * @name f__B4B8_1DF6_0009_F0F7
 * @implements B4B8:1DF6:0009:F0F7 ()
 *
 * Called From: B4B8:1BFC:0004:3AFB
 */
void f__B4B8_1DF6_0009_F0F7()
{
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1DFF); emu_cs = 0x3518; ovl__3518(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1DFF_000E_2564(); return;
}

/**
 * Decompiled function f__B4B8_1DFF_000E_2564()
 *
 * @name f__B4B8_1DFF_000E_2564
 * @implements B4B8:1DFF:000E:2564 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4B8_1DFF_000E_2564()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x1E0D); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1E0D_000C_86D4(); return;
}

/**
 * Decompiled function f__B4B8_1E0D_000C_86D4()
 *
 * @name f__B4B8_1E0D_000C_86D4
 * @implements B4B8:1E0D:000C:86D4 ()
 *
 */
void f__B4B8_1E0D_000C_86D4()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x22FD);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1E19); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1E19_0010_30A4(); return;
}

/**
 * Decompiled function f__B4B8_1E19_0010_30A4()
 *
 * @name f__B4B8_1E19_0010_30A4
 * @implements B4B8:1E19:0010:30A4 ()
 *
 */
void f__B4B8_1E19_0010_30A4()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { f__B4B8_1E29_0010_3989(); return; }
	emu_movw(&emu_ax, 0x1);
	f__B4B8_1E2B_000E_B9BB(); return;
}

/**
 * Decompiled function f__B4B8_1E29_0010_3989()
 *
 * @name f__B4B8_1E29_0010_3989
 * @implements B4B8:1E29:0010:3989 ()
 *
 * Called From: B4B8:1E22:0010:30A4
 */
void f__B4B8_1E29_0010_3989()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B4B8_1E2B_000E_B9BB(); return;
}

/**
 * Decompiled function f__B4B8_1E2B_000E_B9BB()
 *
 * @name f__B4B8_1E2B_000E_B9BB
 * @implements B4B8:1E2B:000E:B9BB ()
 *
 * Called From: B4B8:1E27:0010:30A4
 */
void f__B4B8_1E2B_000E_B9BB()
{
	emu_shlw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__B4B8_1E39_000F_B6A6(); return; }
	emu_movw(&emu_ax, 0x1);
	f__B4B8_1E3B_000D_D3A6(); return;
}

/**
 * Decompiled function f__B4B8_1E39_000F_B6A6()
 *
 * @name f__B4B8_1E39_000F_B6A6
 * @implements B4B8:1E39:000F:B6A6 ()
 *
 * Called From: B4B8:1E32:000E:B9BB
 */
void f__B4B8_1E39_000F_B6A6()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B4B8_1E3B_000D_D3A6(); return;
}

/**
 * Decompiled function f__B4B8_1E3B_000D_D3A6()
 *
 * @name f__B4B8_1E3B_000D_D3A6
 * @implements B4B8:1E3B:000D:D3A6 ()
 *
 * Called From: B4B8:1E37:000E:B9BB
 * Called From: B4B8:1E37:0010:3989
 */
void f__B4B8_1E3B_000D_D3A6()
{
	emu_pop(&emu_dx);
	emu_orw(&emu_dx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx);
	f__B4B8_1E41_0007_CF65(); return;
}

/**
 * Decompiled function f__B4B8_1E41_0007_CF65()
 *
 * @name f__B4B8_1E41_0007_CF65
 * @implements B4B8:1E41:0007:CF65 ()
 *
 * Called From: B4B8:1D5A:0004:8D1C
 */
void f__B4B8_1E41_0007_CF65()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	f__B4B8_1E4A_0009_9034(); return;
}

/**
 * Decompiled function f__B4B8_1E48_0002_C03A()
 *
 * @name f__B4B8_1E48_0002_C03A
 * @implements B4B8:1E48:0002:C03A ()
 *
 * Called From: B4B8:1BF9:0010:76E3
 */
void f__B4B8_1E48_0002_C03A()
{
	f__B4B8_1E4A_0009_9034(); return;
}

/**
 * Decompiled function f__B4B8_1E4A_0009_9034()
 *
 * @name f__B4B8_1E4A_0009_9034
 * @implements B4B8:1E4A:0009:9034 ()
 *
 * Called From: B4B8:1DF4:0002:EA3A
 * Called From: B4B8:1E46:0007:CF65
 * Called From: B4B8:1E46:000D:D3A6
 * Called From: B4B8:1E46:000F:B6A6
 * Called From: B4B8:1E48:0002:C03A
 */
void f__B4B8_1E4A_0009_9034()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__B4B8_1E53_000A_5518(); return; }
	f__B4B8_2078_0008_F782(); return;
}

/**
 * Decompiled function f__B4B8_1E53_000A_5518()
 *
 * @name f__B4B8_1E53_000A_5518
 * @implements B4B8:1E53:000A:5518 ()
 *
 * Called From: B4B8:1E4E:0009:9034
 */
void f__B4B8_1E53_000A_5518()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x41B8), 0x0);
	emu_xorw(&emu_di, emu_di);
	f__B4B8_1EC4_0020_8CAE(); return;
}

/**
 * Decompiled function f__B4B8_1E5D_0046_55E8()
 *
 * @name f__B4B8_1E5D_0046_55E8
 * @implements B4B8:1E5D:0046:55E8 ()
 *
 * Called From: B4B8:1EC7:0020:8CAE
 * Called From: B4B8:1EC7:0021:AF2E
 * Called From: B4B8:1EC7:002C:6A88
 */
void f__B4B8_1E5D_0046_55E8()
{
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x2C);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx, 0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx, 0x0), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx, 0xC);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_di);
	emu_shlw(&emu_dx, 0x1);
	emu_addw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x219D), 0x0);
	if (emu_flags.zf) { f__B4B8_1EB8_002C_6A88(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx, 0xC);
	emu_imuluw(&emu_ax, emu_dx);
	emu_movw(&emu_dx, emu_di);
	emu_shlw(&emu_dx, 0x1);
	emu_addw(&emu_ax, emu_dx);
	emu_movw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x219D));
	emu_push(emu_cs); emu_push(0x1EA3); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1EA3_0015_D2BF(); return;
}

/**
 * Decompiled function f__B4B8_1EA3_0015_D2BF()
 *
 * @name f__B4B8_1EA3_0015_D2BF
 * @implements B4B8:1EA3:0015:D2BF ()
 *
 */
void f__B4B8_1EA3_0015_D2BF()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_bx, emu_di);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_cx, emu_bp - 0x2C);
	emu_addw(&emu_bx, emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx, 0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx, 0x0), emu_ax);
	f__B4B8_1EC3_0021_AF2E(); return;
}

/**
 * Decompiled function f__B4B8_1EB8_002C_6A88()
 *
 * @name f__B4B8_1EB8_002C_6A88
 * @implements B4B8:1EB8:002C:6A88 ()
 *
 * Called From: B4B8:1E88:0046:55E8
 */
void f__B4B8_1EB8_002C_6A88()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x41B8), 0x0);
	if (emu_flags.zf) {
		emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x41B8), emu_di);
	}
	f__B4B8_1EC3_0021_AF2E(); return;
}

/**
 * Decompiled function f__B4B8_1EC3_0021_AF2E()
 *
 * @name f__B4B8_1EC3_0021_AF2E
 * @implements B4B8:1EC3:0021:AF2E ()
 *
 * Called From: B4B8:1EB6:0015:D2BF
 * Called From: B4B8:1EBD:002C:6A88
 */
void f__B4B8_1EC3_0021_AF2E()
{
	emu_incw(&emu_di);
	f__B4B8_1EC4_0020_8CAE(); return;
}

/**
 * Decompiled function f__B4B8_1EC4_0020_8CAE()
 *
 * @name f__B4B8_1EC4_0020_8CAE
 * @implements B4B8:1EC4:0020:8CAE ()
 *
 * Called From: B4B8:1E5B:000A:5518
 */
void f__B4B8_1EC4_0020_8CAE()
{
	emu_cmpw(&emu_di, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_1E5D_0046_55E8(); return; }
	emu_movw(&emu_ax, 0x22);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1EE4); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1EE4_000C_BF5E(); return;
}

/**
 * Decompiled function f__B4B8_1EE4_000C_BF5E()
 *
 * @name f__B4B8_1EE4_000C_BF5E
 * @implements B4B8:1EE4:000C:BF5E ()
 *
 */
void f__B4B8_1EE4_000C_BF5E()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__B4B8_1F2B_006A_655B(); return;
}

/**
 * Decompiled function f__B4B8_1EF0_0017_BB13()
 *
 * @name f__B4B8_1EF0_0017_BB13
 * @implements B4B8:1EF0:0017:BB13 ()
 *
 * Called From: B4B8:1F2F:006A:655B
 * Called From: B4B8:1F2F:0070:2A4C
 * Called From: B4B8:1F2F:006B:A553
 */
void f__B4B8_1EF0_0017_BB13()
{
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x2C);
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1F07); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1F07_001E_9076(); return;
}

/**
 * Decompiled function f__B4B8_1F07_001E_9076()
 *
 * @name f__B4B8_1F07_001E_9076
 * @implements B4B8:1F07:001E:9076 ()
 *
 */
void f__B4B8_1F07_001E_9076()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4B8_1F2A_006B_A553(); return; }
	emu_movw(&emu_bx, emu_si);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_bp - 0x2C);
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1F25); emu_cs = 0x2521; f__2521_0035_0015_AA0F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1F25_0070_2A4C(); return;
}

/**
 * Decompiled function f__B4B8_1F25_0070_2A4C()
 *
 * @name f__B4B8_1F25_0070_2A4C
 * @implements B4B8:1F25:0070:2A4C ()
 *
 */
void f__B4B8_1F25_0070_2A4C()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	f__B4B8_1F2A_006B_A553(); return;
}

/**
 * Decompiled function f__B4B8_1F2A_006B_A553()
 *
 * @name f__B4B8_1F2A_006B_A553
 * @implements B4B8:1F2A:006B:A553 ()
 *
 * Called From: B4B8:1F0C:001E:9076
 */
void f__B4B8_1F2A_006B_A553()
{
	emu_incw(&emu_si);
	f__B4B8_1F2B_006A_655B(); return;
}

/**
 * Decompiled function f__B4B8_1F2B_006A_655B()
 *
 * @name f__B4B8_1F2B_006A_655B
 * @implements B4B8:1F2B:006A:655B ()
 *
 * Called From: B4B8:1EEE:000C:BF5E
 */
void f__B4B8_1F2B_006A_655B()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x41B8));
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_1EF0_0017_BB13(); return; }
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x7);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cl, 0x3);
	emu_shrw(&emu_ax, emu_cl);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x41B6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x41B6));
	emu_addw(&emu_ax, 0x2);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x4136), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cl, 0x4);
	emu_shrw(&emu_ax, emu_cl);
	emu_movw(&emu_dx, 0x13);
	emu_subw(&emu_dx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x4132), emu_dx);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x41B8));
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x6C71));
	emu_movws(&emu_ax, emu_al);
	emu_imuluw(&emu_ax, emu_si);
	emu_shrw(&emu_ax, 0x1);
	emu_movw(&emu_dx, 0xA0);
	emu_subw(&emu_dx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x4134), emu_dx);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x6C71));
	emu_movws(&emu_ax, emu_al);
	emu_imuluw(&emu_ax, emu_si);
	emu_addw(&emu_ax, 0xB);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x4138), emu_ax);
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
	emu_movw(&emu_ax, 0x231B);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1F95); emu_cs = 0x0642; f__0642_075D_0011_C164();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1F95_0009_0769(); return;
}

/**
 * Decompiled function f__B4B8_1F95_0009_0769()
 *
 * @name f__B4B8_1F95_0009_0769
 * @implements B4B8:1F95:0009:0769 ()
 *
 */
void f__B4B8_1F95_0009_0769()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1F9E); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1F9E_0008_DBE0(); return;
}

/**
 * Decompiled function f__B4B8_1F9E_0008_DBE0()
 *
 * @name f__B4B8_1F9E_0008_DBE0
 * @implements B4B8:1F9E:0008:DBE0 ()
 *
 */
void f__B4B8_1F9E_0008_DBE0()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x1FA6); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1FA6_0008_A467(); return;
}

/**
 * Decompiled function f__B4B8_1FA6_0008_A467()
 *
 * @name f__B4B8_1FA6_0008_A467
 * @implements B4B8:1FA6:0008:A467 ()
 *
 */
void f__B4B8_1FA6_0008_A467()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1FAE); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1FAE_0021_2C9D(); return;
}

/**
 * Decompiled function f__B4B8_1FAE_0021_2C9D()
 *
 * @name f__B4B8_1FAE_0021_2C9D
 * @implements B4B8:1FAE:0021:2C9D ()
 *
 */
void f__B4B8_1FAE_0021_2C9D()
{
	emu_pop(&emu_cx);
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
	emu_push(emu_cs); emu_push(0x1FCF); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1FCF_0014_B1DF(); return;
}

/**
 * Decompiled function f__B4B8_1FCF_0014_B1DF()
 *
 * @name f__B4B8_1FCF_0014_B1DF
 * @implements B4B8:1FCF:0014:B1DF ()
 *
 */
void f__B4B8_1FCF_0014_B1DF()
{
	emu_addw(&emu_sp, 0x10);
	emu_movw(&emu_ax, 0x1E);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x1FE3); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1FE3_002F_4EAF(); return;
}

/**
 * Decompiled function f__B4B8_1FE3_002F_4EAF()
 *
 * @name f__B4B8_1FE3_002F_4EAF
 * @implements B4B8:1FE3:002F:4EAF ()
 *
 */
void f__B4B8_1FE3_002F_4EAF()
{
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_flags.zf) {
		emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	}
	f__B4B8_1FF1_0021_2797(); return;
}

/**
 * Decompiled function f__B4B8_1FF1_0021_2797()
 *
 * @name f__B4B8_1FF1_0021_2797
 * @implements B4B8:1FF1:0021:2797 ()
 *
 * Called From: B4B8:1FEA:002F:4EAF
 */
void f__B4B8_1FF1_0021_2797()
{
	emu_movw(&emu_ax, 0x39);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x231);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x85);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xC0);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x13F);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2321);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2012); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_2012_001E_B87D(); return;
}

/**
 * Decompiled function f__B4B8_2012_001E_B87D()
 *
 * @name f__B4B8_2012_001E_B87D
 * @implements B4B8:2012:001E:B87D ()
 *
 */
void f__B4B8_2012_001E_B87D()
{
	emu_addw(&emu_sp, 0x10);
	emu_movw(&emu_ax, 0x22);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2030); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_2030_000C_418E(); return;
}

/**
 * Decompiled function f__B4B8_2030_000C_418E()
 *
 * @name f__B4B8_2030_000C_418E
 * @implements B4B8:2030:000C:418E ()
 *
 */
void f__B4B8_2030_000C_418E()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, 0xD);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x203C); emu_cs = 0x07AE; f__07AE_0000_00DF_A32C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_203C_0012_7861(); return;
}

/**
 * Decompiled function f__B4B8_203C_0012_7861()
 *
 * @name f__B4B8_203C_0012_7861
 * @implements B4B8:203C:0012:7861 ()
 *
 */
void f__B4B8_203C_0012_7861()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x2);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0xD);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x204E); emu_cs = 0x10E4; f__10E4_057F_0052_2B00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_204E_001D_0D81(); return;
}

/**
 * Decompiled function f__B4B8_204E_001D_0D81()
 *
 * @name f__B4B8_204E_001D_0D81
 * @implements B4B8:204E:001D:0D81 ()
 *
 */
void f__B4B8_204E_001D_0D81()
{
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2C);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x206B); emu_cs = 0x34E6; ovl__34E6(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_206B_0008_3BE5(); return;
}

/**
 * Decompiled function f__B4B8_206B_0008_3BE5()
 *
 * @name f__B4B8_206B_0008_3BE5
 * @implements B4B8:206B:0008:3BE5 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4B8_206B_0008_3BE5()
{
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x2073); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_2073_000D_8BFB(); return;
}

/**
 * Decompiled function f__B4B8_2073_000D_8BFB()
 *
 * @name f__B4B8_2073_000D_8BFB
 * @implements B4B8:2073:000D:8BFB ()
 *
 */
void f__B4B8_2073_000D_8BFB()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	f__B4B8_2078_0008_F782(); return;
}

/**
 * Decompiled function f__B4B8_2078_0008_F782()
 *
 * @name f__B4B8_2078_0008_F782
 * @implements B4B8:2078:0008:F782 ()
 *
 * Called From: B4B8:1E50:0009:9034
 */
void f__B4B8_2078_0008_F782()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (!emu_flags.zf) { f__B4B8_2080_001D_BE00(); return; }
	f__B4B8_20C8_0002_F03A(); return;
}

/**
 * Decompiled function f__B4B8_2080_001D_BE00()
 *
 * @name f__B4B8_2080_001D_BE00
 * @implements B4B8:2080:001D:BE00 ()
 *
 * Called From: B4B8:207C:000D:8BFB
 * Called From: B4B8:207C:0008:F782
 */
void f__B4B8_2080_001D_BE00()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0xFF);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2C);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x209D); emu_cs = 0x34E6; ovl__34E6(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_209D_0023_32FB(); return;
}

/**
 * Decompiled function f__B4B8_209D_0023_32FB()
 *
 * @name f__B4B8_209D_0023_32FB
 * @implements B4B8:209D:0023:32FB ()
 *
 */
void f__B4B8_209D_0023_32FB()
{
	emu_addw(&emu_sp, 0x10);
	emu_movw(&emu_si, emu_ax);
	emu_cmpw(&emu_si, 0xFFFF);
	if (!emu_flags.zf) {
		emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
		emu_movw(&emu_dx, 0xC);
		emu_imuluw(&emu_ax, emu_dx);
		emu_movw(&emu_dx, emu_si);
		emu_shlw(&emu_dx, 0x1);
		emu_addw(&emu_ax, emu_dx);
		emu_movw(&emu_bx, emu_ax);
		emu_movw(&emu_si, emu_get_memory16(emu_ds, emu_bx, 0x219D));
	}
	f__B4B8_20BB_0005_1765(); return;
}

/**
 * Decompiled function f__B4B8_20BB_0005_1765()
 *
 * @name f__B4B8_20BB_0005_1765
 * @implements B4B8:20BB:0005:1765 ()
 *
 * Called From: B4B8:20A5:0023:32FB
 */
void f__B4B8_20BB_0005_1765()
{
	emu_push(emu_cs); emu_push(0x20C0); emu_cs = 0x0642; f__0642_0559_0027_3560();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_20C0_0008_7DFA(); return;
}

/**
 * Decompiled function f__B4B8_20C0_0008_7DFA()
 *
 * @name f__B4B8_20C0_0008_7DFA
 * @implements B4B8:20C0:0008:7DFA ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4B8_20C0_0008_7DFA()
{
	emu_cmpw(&emu_si, 0x1B);
	if (emu_flags.zf) { f__B4B8_20C8_0002_F03A(); return; }
	f__B4B8_1BE3_0019_233D(); return;
}

/**
 * Decompiled function f__B4B8_20C8_0002_F03A()
 *
 * @name f__B4B8_20C8_0002_F03A
 * @implements B4B8:20C8:0002:F03A ()
 *
 * Called From: B4B8:207E:0008:F782
 * Called From: B4B8:20C3:0008:7DFA
 */
void f__B4B8_20C8_0002_F03A()
{
	f__B4B8_212A_0005_6168(); return;
}

/**
 * Decompiled function f__B4B8_212A_0005_6168()
 *
 * @name f__B4B8_212A_0005_6168
 * @implements B4B8:212A:0005:6168 ()
 *
 * Called From: B4B8:20C8:0002:F03A
 */
void f__B4B8_212A_0005_6168()
{
	emu_push(emu_cs); emu_push(0x212F); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_212F_0034_7DBA(); return;
}

/**
 * Decompiled function f__B4B8_212F_0034_7DBA()
 *
 * @name f__B4B8_212F_0034_7DBA
 * @implements B4B8:212F:0034:7DBA ()
 *
 */
void f__B4B8_212F_0034_7DBA()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x37B4), 0x0);
	emu_movw(&emu_ax, 0xC);
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_movw(&emu_ax, 0x353F);
	emu_movw(&emu_es, emu_ax);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x2163);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4B8; emu_last_ip = 0x215E; emu_last_length = 0x0034; emu_last_crc = 0x7DBA;
			emu_call();
			return;
	}
	f__B4B8_2163_0012_2CF4(); return;
}

/**
 * Decompiled function f__B4B8_2163_0012_2CF4()
 *
 * @name f__B4B8_2163_0012_2CF4
 * @implements B4B8:2163:0012:2CF4 ()
 *
 */
void f__B4B8_2163_0012_2CF4()
{
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__B4B8_2176_0017_A91B(); return; }
	emu_movw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2175); emu_cs = 0x3483; ovl__3483(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_2175_0018_F01B(); return;
}

/**
 * Decompiled function f__B4B8_2175_0018_F01B()
 *
 * @name f__B4B8_2175_0018_F01B
 * @implements B4B8:2175:0018:F01B ()
 *
 */
void f__B4B8_2175_0018_F01B()
{
	emu_pop(&emu_cx);
	f__B4B8_2176_0017_A91B(); return;
}

/**
 * Decompiled function f__B4B8_2176_0017_A91B()
 *
 * @name f__B4B8_2176_0017_A91B
 * @implements B4B8:2176:0017:A91B ()
 *
 * Called From: B4B8:216A:0012:2CF4
 */
void f__B4B8_2176_0017_A91B()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { f__B4B8_2199_0005_E089(); return; }
	emu_movw(&emu_ax, 0xF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x218D); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_218D_000B_F574(); return;
}

/**
 * Decompiled function f__B4B8_218D_000B_F574()
 *
 * @name f__B4B8_218D_000B_F574
 * @implements B4B8:218D:000B:F574 ()
 *
 */
void f__B4B8_218D_000B_F574()
{
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2198); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_2198_0006_8488(); return;
}

/**
 * Decompiled function f__B4B8_2198_0006_8488()
 *
 * @name f__B4B8_2198_0006_8488
 * @implements B4B8:2198:0006:8488 ()
 *
 */
void f__B4B8_2198_0006_8488()
{
	emu_pop(&emu_cx);
	f__B4B8_2199_0005_E089(); return;
}

/**
 * Decompiled function f__B4B8_2199_0005_E089()
 *
 * @name f__B4B8_2199_0005_E089
 * @implements B4B8:2199:0005:E089 ()
 *
 * Called From: B4B8:217A:0017:A91B
 */
void f__B4B8_2199_0005_E089()
{
	emu_push(emu_cs); emu_push(0x219E); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_219E_0015_8E2E(); return;
}

/**
 * Decompiled function f__B4B8_219E_0015_8E2E()
 *
 * @name f__B4B8_219E_0015_8E2E
 * @implements B4B8:219E:0015:8E2E ()
 *
 */
void f__B4B8_219E_0015_8E2E()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379A), 0x0);
	if (emu_flags.zf) { f__B4B8_21B6_0009_9116(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2327);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x379A));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x21B3); emu_cs = 0x257A; emu_ip = 0x000D; emu_last_cs = 0xB4B8; emu_last_ip = 0x21AE; emu_last_length = 0x0015; emu_last_crc = 0x8E2E; emu_call();
	/* Unresolved jump */ emu_ip = 0x21B3; emu_last_cs = 0xB4B8; emu_last_ip = 0x21AE; emu_last_length = 0x0015; emu_last_crc = 0x8E2E; emu_call();
}

/**
 * Decompiled function f__B4B8_21B6_0009_9116()
 *
 * @name f__B4B8_21B6_0009_9116
 * @implements B4B8:21B6:0009:9116 ()
 *
 * Called From: B4B8:21A3:0015:8E2E
 */
void f__B4B8_21B6_0009_9116()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__B4B8_21BF_000C_D8AD(); return; }
	f__B4B8_226C_000D_A409(); return;
}

/**
 * Decompiled function f__B4B8_21BF_000C_D8AD()
 *
 * @name f__B4B8_21BF_000C_D8AD
 * @implements B4B8:21BF:000C:D8AD ()
 *
 * Called From: B4B8:21BA:0009:9116
 */
void f__B4B8_21BF_000C_D8AD()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0xFFFF);
	if (!emu_flags.zf) { f__B4B8_21DE_0004_C890(); return; }
	emu_push(emu_cs); emu_push(0x21CB); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_21CB_000B_B5DE(); return;
}

/**
 * Decompiled function f__B4B8_21CB_000B_B5DE()
 *
 * @name f__B4B8_21CB_000B_B5DE
 * @implements B4B8:21CB:000B:B5DE ()
 *
 */
void f__B4B8_21CB_000B_B5DE()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0x5);
	emu_push(emu_cs); emu_push(0x21D6); emu_cs = 0x3511; ovl__3511(7);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_21D6_0008_2A18(); return;
}

/**
 * Decompiled function f__B4B8_21D6_0008_2A18()
 *
 * @name f__B4B8_21D6_0008_2A18
 * @implements B4B8:21D6:0008:2A18 ()
 *
 */
void f__B4B8_21D6_0008_2A18()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), emu_ax);
	emu_push(emu_cs); emu_push(0x21DE); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_21DE_0004_C890(); return;
}

/**
 * Decompiled function f__B4B8_21DE_0004_C890()
 *
 * @name f__B4B8_21DE_0004_C890
 * @implements B4B8:21DE:0004:C890 ()
 *
 */
void f__B4B8_21DE_0004_C890()
{
	emu_push(emu_cs);
	emu_push(0x21E2); f__B4B8_0D23_0010_BA99();
	f__B4B8_21E2_0008_5434(); return;
}

/**
 * Decompiled function f__B4B8_21E2_0008_5434()
 *
 * @name f__B4B8_21E2_0008_5434
 * @implements B4B8:21E2:0008:5434 ()
 *
 */
void f__B4B8_21E2_0008_5434()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs);
	emu_push(0x21EA); f__B4B8_110D_000D_FD5C();
	f__B4B8_21EA_000A_D6BC(); return;
}

/**
 * Decompiled function f__B4B8_21EA_000A_D6BC()
 *
 * @name f__B4B8_21EA_000A_D6BC
 * @implements B4B8:21EA:000A:D6BC ()
 *
 */
void f__B4B8_21EA_000A_D6BC()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x21F4); emu_cs = 0x3483; ovl__3483(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_21F4_0006_E56C(); return;
}

/**
 * Decompiled function f__B4B8_21F4_0006_E56C()
 *
 * @name f__B4B8_21F4_0006_E56C
 * @implements B4B8:21F4:0006:E56C ()
 *
 */
void f__B4B8_21F4_0006_E56C()
{
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x21FA); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_21FA_001B_9776(); return;
}

/**
 * Decompiled function f__B4B8_21FA_001B_9776()
 *
 * @name f__B4B8_21FA_001B_9776
 * @implements B4B8:21FA:001B:9776 ()
 *
 */
void f__B4B8_21FA_001B_9776()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37AE), 0x0);
	if (emu_flags.zf) { f__B4B8_2229_0014_1EF0(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x221A; emu_last_cs = 0xB4B8; emu_last_ip = 0x2206; emu_last_length = 0x001B; emu_last_crc = 0x9776; emu_call(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B2));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x2215); emu_cs = 0x3503; emu_ip = 0x0020; emu_last_cs = 0xB4B8; emu_last_ip = 0x2210; emu_last_length = 0x001B; emu_last_crc = 0x9776; emu_call();
	/* Unresolved jump */ emu_ip = 0x2215; emu_last_cs = 0xB4B8; emu_last_ip = 0x2210; emu_last_length = 0x001B; emu_last_crc = 0x9776; emu_call();
}

/**
 * Decompiled function f__B4B8_2229_0014_1EF0()
 *
 * @name f__B4B8_2229_0014_1EF0
 * @implements B4B8:2229:0014:1EF0 ()
 *
 * Called From: B4B8:21FF:001B:9776
 */
void f__B4B8_2229_0014_1EF0()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x0);
	if (emu_flags.zf) { f__B4B8_2242_000D_F528(); return; }
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B2));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x223D); emu_cs = 0x3503; emu_ip = 0x0020; emu_last_cs = 0xB4B8; emu_last_ip = 0x2238; emu_last_length = 0x0014; emu_last_crc = 0x1EF0; emu_call();
	/* Unresolved jump */ emu_ip = 0x223D; emu_last_cs = 0xB4B8; emu_last_ip = 0x2238; emu_last_length = 0x0014; emu_last_crc = 0x1EF0; emu_call();
}

/**
 * Decompiled function f__B4B8_2242_000D_F528()
 *
 * @name f__B4B8_2242_000D_F528
 * @implements B4B8:2242:000D:F528 ()
 *
 * Called From: B4B8:222E:0014:1EF0
 */
void f__B4B8_2242_000D_F528()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38B0));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_cs); emu_push(0x224F); emu_cs = 0x3511; ovl__3511(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_224F_0007_05DB(); return;
}

/**
 * Decompiled function f__B4B8_224F_0007_05DB()
 *
 * @name f__B4B8_224F_0007_05DB
 * @implements B4B8:224F:0007:05DB ()
 *
 */
void f__B4B8_224F_0007_05DB()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x2256); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_2256_000C_E0BE(); return;
}

/**
 * Decompiled function f__B4B8_2256_000C_E0BE()
 *
 * @name f__B4B8_2256_000C_E0BE
 * @implements B4B8:2256:000C:E0BE ()
 *
 */
void f__B4B8_2256_000C_E0BE()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_flags.zf) { f__B4B8_2262_0009_BAB5(); return; }
	emu_movw(&emu_ax, 0x5);
	/* Unresolved jump */ emu_ip = 0x2265; emu_last_cs = 0xB4B8; emu_last_ip = 0x2260; emu_last_length = 0x000C; emu_last_crc = 0xE0BE; emu_call();
}

/**
 * Decompiled function f__B4B8_2262_0009_BAB5()
 *
 * @name f__B4B8_2262_0009_BAB5
 * @implements B4B8:2262:0009:BAB5 ()
 *
 * Called From: B4B8:225B:000C:E0BE
 */
void f__B4B8_2262_0009_BAB5()
{
	emu_movw(&emu_ax, 0x4);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x226B); emu_cs = 0x34E9; ovl__34E9(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_226B_000E_A56D(); return;
}

/**
 * Decompiled function f__B4B8_226B_000E_A56D()
 *
 * @name f__B4B8_226B_000E_A56D
 * @implements B4B8:226B:000E:A56D ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4B8_226B_000E_A56D()
{
	emu_pop(&emu_cx);
	f__B4B8_226C_000D_A409(); return;
}

/**
 * Decompiled function f__B4B8_226C_000D_A409()
 *
 * @name f__B4B8_226C_000D_A409
 * @implements B4B8:226C:000D:A409 ()
 *
 * Called From: B4B8:21BC:0009:9116
 */
void f__B4B8_226C_000D_A409()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x2279); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_2279_0008_AE7C(); return;
}

/**
 * Decompiled function f__B4B8_2279_0008_AE7C()
 *
 * @name f__B4B8_2279_0008_AE7C
 * @implements B4B8:2279:0008:AE7C ()
 *
 */
void f__B4B8_2279_0008_AE7C()
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
 * Decompiled function f__B4B8_2295_0018_A862()
 *
 * @name f__B4B8_2295_0018_A862
 * @implements B4B8:2295:0018:A862 ()
 *
 * Called From: B4B8:0EA7:001E:3931
 * Called From: B4B8:19BC:0031:26DF
 * Called From: B4B8:19D9:001D:EB62
 */
void f__B4B8_2295_0018_A862()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x2330);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x22AD); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_22AD_001F_5CD7(); return;
}

/**
 * Decompiled function f__B4B8_22AD_001F_5CD7()
 *
 * @name f__B4B8_22AD_001F_5CD7
 * @implements B4B8:22AD:001F:5CD7 ()
 *
 */
void f__B4B8_22AD_001F_5CD7()
{
	emu_addw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ds);
	emu_movw(&emu_ax, 0x9939);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x22CC); emu_cs = 0x15C2; f__15C2_00AC_0015_2FBF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_22CC_0005_862E(); return;
}

/**
 * Decompiled function f__B4B8_22CC_0005_862E()
 *
 * @name f__B4B8_22CC_0005_862E
 * @implements B4B8:22CC:0005:862E ()
 *
 */
void f__B4B8_22CC_0005_862E()
{
	emu_addw(&emu_sp, 0x10);
	f__B4B8_22D1_0002_2597(); return;
}

/**
 * Decompiled function f__B4B8_22D1_0002_2597()
 *
 * @name f__B4B8_22D1_0002_2597
 * @implements B4B8:22D1:0002:2597 ()
 *
 * Called From: B4B8:22CF:0005:862E
 */
void f__B4B8_22D1_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
