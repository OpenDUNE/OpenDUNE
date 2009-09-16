/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4B8_0000_001F_044D()
 *
 * @name f__B4B8_0000_001F_044D
 * @implements B4B8:0000:001F:044D ()
 *
 * Called From: 34B8:003E:0005:1EFA
 */
void f__B4B8_0000_001F_044D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x126);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76A4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x76A2), emu_dx.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x001F); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_001F_000B_F86C();
}

/**
 * Decompiled function f__B4B8_001F_000B_F86C()
 *
 * @name f__B4B8_001F_000B_F86C
 * @implements B4B8:001F:000B:F86C ()
 *
 * Called From: B4B8:001F:001F:044D
 */
void f__B4B8_001F_000B_F86C()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_xorw(&emu_di, emu_di);
	f__B4B8_004E_000B_CF01(); return;
}

/**
 * Decompiled function f__B4B8_002A_0005_1186()
 *
 * @name f__B4B8_002A_0005_1186
 * @implements B4B8:002A:0005:1186 ()
 *
 * Called From: B4B8:0052:000B:CF01
 * Called From: B4B8:0052:000C:BF05
 * Called From: B4B8:0052:002A:1E95
 */
void f__B4B8_002A_0005_1186()
{
	emu_push(emu_cs); emu_push(0x002F); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_002F_002A_1E95();
}

/**
 * Decompiled function f__B4B8_002F_002A_1E95()
 *
 * @name f__B4B8_002F_002A_1E95
 * @implements B4B8:002F:002A:1E95 ()
 *
 * Called From: B4B8:002F:0005:1186
 */
void f__B4B8_002F_002A_1E95()
{
	emu_andb(&emu_ax.l, 0xF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx.x, emu_di);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx.x, emu_di);
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xA);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4B8_004D_000C_BF05(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx.x, emu_di);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0xA);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x110);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_002A_0005_1186(); return; }
	emu_push(emu_cs); emu_push(0x0059); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0059_0007_1D44();
}

/**
 * Decompiled function f__B4B8_004D_000C_BF05()
 *
 * @name f__B4B8_004D_000C_BF05
 * @implements B4B8:004D:000C:BF05 ()
 *
 * Called From: B4B8:0042:002A:1E95
 */
void f__B4B8_004D_000C_BF05()
{
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x110);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_002A_0005_1186(); return; }
	emu_push(emu_cs); emu_push(0x0059); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0059_0007_1D44();
}

/**
 * Decompiled function f__B4B8_004E_000B_CF01()
 *
 * @name f__B4B8_004E_000B_CF01
 * @implements B4B8:004E:000B:CF01 ()
 *
 * Called From: B4B8:0028:000B:F86C
 */
void f__B4B8_004E_000B_CF01()
{
	emu_cmpw(&emu_di, 0x110);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_002A_0005_1186(); return; }
	emu_push(emu_cs); emu_push(0x0059); emu_cs = 0x2BB4; emu_ip = 0x005D; emu_last_cs = 0xB4B8; emu_last_ip = 0x0054; emu_last_length = 0x000B; emu_last_crc = 0xCF01; emu_call(); // Jump does not resolve
	f__B4B8_0059_0007_1D44();
}

/**
 * Decompiled function f__B4B8_0059_0007_1D44()
 *
 * @name f__B4B8_0059_0007_1D44
 * @implements B4B8:0059:0007:1D44 ()
 *
 * Called From: B4B8:0059:000C:BF05
 * Called From: B4B8:0059:002A:1E95
 */
void f__B4B8_0059_0007_1D44()
{
	emu_andw(&emu_ax.x, 0xF);
	emu_movw(&emu_di, emu_ax.x);
	f__B4B8_00CC_0009_E206(); return;
}

/**
 * Decompiled function f__B4B8_0060_0005_1186()
 *
 * @name f__B4B8_0060_0005_1186
 * @implements B4B8:0060:0005:1186 ()
 *
 * Called From: B4B8:00CE:0009:E206
 * Called From: B4B8:00CE:002C:4CE5
 */
void f__B4B8_0060_0005_1186()
{
	emu_push(emu_cs); emu_push(0x0065); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0065_000D_6AC3();
}

/**
 * Decompiled function f__B4B8_0065_000D_6AC3()
 *
 * @name f__B4B8_0065_000D_6AC3
 * @implements B4B8:0065:000D:6AC3 ()
 *
 * Called From: B4B8:0065:0005:1186
 */
void f__B4B8_0065_000D_6AC3()
{
	emu_andw(&emu_ax.x, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4B8_00C5_0010_0684(); return;
}

/**
 * Decompiled function f__B4B8_0072_001A_0DC0()
 *
 * @name f__B4B8_0072_001A_0DC0
 * @implements B4B8:0072:001A:0DC0 ()
 *
 * Called From: B4B8:00C9:0010:0684
 * Called From: B4B8:00C9:002C:4CE5
 */
void f__B4B8_0072_001A_0DC0()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x2006));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_008C_0012_40FA(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4B8_008F_000F_42A0(); return;
}

/**
 * Decompiled function f__B4B8_008C_0012_40FA()
 *
 * @name f__B4B8_008C_0012_40FA
 * @implements B4B8:008C:0012:40FA ()
 *
 * Called From: B4B8:0086:001A:0DC0
 */
void f__B4B8_008C_0012_40FA()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x110);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_009E_000B_3102(); return; }
	emu_movw(&emu_ax.x, 0x110);
	f__B4B8_00A1_0008_8506(); return;
}

/**
 * Decompiled function f__B4B8_008F_000F_42A0()
 *
 * @name f__B4B8_008F_000F_42A0
 * @implements B4B8:008F:000F:42A0 ()
 *
 * Called From: B4B8:008A:001A:0DC0
 */
void f__B4B8_008F_000F_42A0()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x110);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_009E_000B_3102(); return; }
	emu_movw(&emu_ax.x, 0x110);
	emu_ip = 0x00A1; emu_last_cs = 0xB4B8; emu_last_ip = 0x009C; emu_last_length = 0x000F; emu_last_crc = 0x42A0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_009E_000B_3102()
 *
 * @name f__B4B8_009E_000B_3102
 * @implements B4B8:009E:000B:3102 ()
 *
 * Called From: B4B8:0097:0012:40FA
 * Called From: B4B8:0097:000F:42A0
 */
void f__B4B8_009E_000B_3102()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_cs); emu_push(0x00A9); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_00A9_002C_4CE5();
}

/**
 * Decompiled function f__B4B8_00A1_0008_8506()
 *
 * @name f__B4B8_00A1_0008_8506
 * @implements B4B8:00A1:0008:8506 ()
 *
 * Called From: B4B8:009C:0012:40FA
 */
void f__B4B8_00A1_0008_8506()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_cs); emu_push(0x00A9); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_00A9_002C_4CE5();
}

/**
 * Decompiled function f__B4B8_00A9_002C_4CE5()
 *
 * @name f__B4B8_00A9_002C_4CE5
 * @implements B4B8:00A9:002C:4CE5 ()
 *
 * Called From: B4B8:00A9:000B:3102
 * Called From: B4B8:00A9:0008:8506
 */
void f__B4B8_00A9_002C_4CE5()
{
	emu_andb(&emu_ax.l, 0xF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_dx.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_addb(&emu_dx.l, emu_ax.l);
	emu_andb(&emu_dx.l, 0xF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_dx.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x15);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_0072_001A_0DC0(); return; }
	emu_decw(&emu_di);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_0060_0005_1186(); return; }
	emu_push(emu_cs); emu_push(0x00D5); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_00D5_0007_1E20();
}

/**
 * Decompiled function f__B4B8_00C5_0010_0684()
 *
 * @name f__B4B8_00C5_0010_0684
 * @implements B4B8:00C5:0010:0684 ()
 *
 * Called From: B4B8:0070:000D:6AC3
 */
void f__B4B8_00C5_0010_0684()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x15);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_0072_001A_0DC0(); return; }
	emu_decw(&emu_di);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0060; emu_last_cs = 0xB4B8; emu_last_ip = 0x00CE; emu_last_length = 0x0010; emu_last_crc = 0x0684; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x00D5); emu_cs = 0x2BB4; emu_ip = 0x00D9; emu_last_cs = 0xB4B8; emu_last_ip = 0x00D0; emu_last_length = 0x0010; emu_last_crc = 0x0684; emu_call(); // Jump does not resolve
	f__B4B8_00D5_0007_1E20();
}

/**
 * Decompiled function f__B4B8_00CC_0009_E206()
 *
 * @name f__B4B8_00CC_0009_E206
 * @implements B4B8:00CC:0009:E206 ()
 *
 * Called From: B4B8:005E:0007:1D44
 */
void f__B4B8_00CC_0009_E206()
{
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_0060_0005_1186(); return; }
	emu_push(emu_cs); emu_push(0x00D5); emu_cs = 0x2BB4; emu_ip = 0x00D9; emu_last_cs = 0xB4B8; emu_last_ip = 0x00D0; emu_last_length = 0x0009; emu_last_crc = 0xE206; emu_call(); // Jump does not resolve
	f__B4B8_00D5_0007_1E20();
}

/**
 * Decompiled function f__B4B8_00D5_0007_1E20()
 *
 * @name f__B4B8_00D5_0007_1E20
 * @implements B4B8:00D5:0007:1E20 ()
 *
 * Called From: B4B8:00D5:002C:4CE5
 */
void f__B4B8_00D5_0007_1E20()
{
	emu_andw(&emu_ax.x, 0x3);
	emu_movw(&emu_di, emu_ax.x);
	f__B4B8_013A_000B_AF17(); return;
}

/**
 * Decompiled function f__B4B8_00DC_0005_1186()
 *
 * @name f__B4B8_00DC_0005_1186
 * @implements B4B8:00DC:0005:1186 ()
 *
 * Called From: B4B8:013C:000B:AF17
 * Called From: B4B8:013C:0020:F6BE
 */
void f__B4B8_00DC_0005_1186()
{
	emu_push(emu_cs); emu_push(0x00E1); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_00E1_000D_6AEF();
}

/**
 * Decompiled function f__B4B8_00E1_000D_6AEF()
 *
 * @name f__B4B8_00E1_000D_6AEF
 * @implements B4B8:00E1:000D:6AEF ()
 *
 * Called From: B4B8:00E1:0005:1186
 */
void f__B4B8_00E1_000D_6AEF()
{
	emu_andw(&emu_ax.x, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4B8_0133_0012_7D1E(); return;
}

/**
 * Decompiled function f__B4B8_00EE_001A_0DC0()
 *
 * @name f__B4B8_00EE_001A_0DC0
 * @implements B4B8:00EE:001A:0DC0 ()
 *
 * Called From: B4B8:0137:0012:7D1E
 * Called From: B4B8:0137:0020:F6BE
 */
void f__B4B8_00EE_001A_0DC0()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x2006));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_0108_0012_40FA(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4B8_010B_000F_42A0(); return;
}

/**
 * Decompiled function f__B4B8_0108_0012_40FA()
 *
 * @name f__B4B8_0108_0012_40FA
 * @implements B4B8:0108:0012:40FA ()
 *
 * Called From: B4B8:0102:001A:0DC0
 */
void f__B4B8_0108_0012_40FA()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x110);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_011A_000B_3102(); return; }
	emu_movw(&emu_ax.x, 0x110);
	emu_ip = 0x011D; emu_last_cs = 0xB4B8; emu_last_ip = 0x0118; emu_last_length = 0x0012; emu_last_crc = 0x40FA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_010B_000F_42A0()
 *
 * @name f__B4B8_010B_000F_42A0
 * @implements B4B8:010B:000F:42A0 ()
 *
 * Called From: B4B8:0106:001A:0DC0
 */
void f__B4B8_010B_000F_42A0()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x110);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_011A_000B_3102(); return; }
	emu_movw(&emu_ax.x, 0x110);
	emu_ip = 0x011D; emu_last_cs = 0xB4B8; emu_last_ip = 0x0118; emu_last_length = 0x000F; emu_last_crc = 0x42A0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_011A_000B_3102()
 *
 * @name f__B4B8_011A_000B_3102
 * @implements B4B8:011A:000B:3102 ()
 *
 * Called From: B4B8:0113:0012:40FA
 * Called From: B4B8:0113:000F:42A0
 */
void f__B4B8_011A_000B_3102()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_cs); emu_push(0x0125); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0125_0020_F6BE();
}

/**
 * Decompiled function f__B4B8_0125_0020_F6BE()
 *
 * @name f__B4B8_0125_0020_F6BE
 * @implements B4B8:0125:0020:F6BE ()
 *
 * Called From: B4B8:0125:000B:3102
 */
void f__B4B8_0125_0020_F6BE()
{
	emu_andb(&emu_ax.l, 0x3);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x15);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_00EE_001A_0DC0(); return; }
	emu_decw(&emu_di);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_00DC_0005_1186(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	f__B4B8_0181_0010_4E38(); return;
}

/**
 * Decompiled function f__B4B8_0133_0012_7D1E()
 *
 * @name f__B4B8_0133_0012_7D1E
 * @implements B4B8:0133:0012:7D1E ()
 *
 * Called From: B4B8:00EC:000D:6AEF
 */
void f__B4B8_0133_0012_7D1E()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x15);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_00EE_001A_0DC0(); return; }
	emu_decw(&emu_di);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x00DC; emu_last_cs = 0xB4B8; emu_last_ip = 0x013C; emu_last_length = 0x0012; emu_last_crc = 0x7D1E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_ip = 0x0181; emu_last_cs = 0xB4B8; emu_last_ip = 0x0143; emu_last_length = 0x0012; emu_last_crc = 0x7D1E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_013A_000B_AF17()
 *
 * @name f__B4B8_013A_000B_AF17
 * @implements B4B8:013A:000B:AF17 ()
 *
 * Called From: B4B8:00DA:0007:1E20
 */
void f__B4B8_013A_000B_AF17()
{
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_00DC_0005_1186(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_ip = 0x0181; emu_last_cs = 0xB4B8; emu_last_ip = 0x0143; emu_last_length = 0x000B; emu_last_crc = 0xAF17; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_0145_0007_6EFA()
 *
 * @name f__B4B8_0145_0007_6EFA
 * @implements B4B8:0145:0007:6EFA ()
 *
 * Called From: B4B8:0185:0010:4E38
 * Called From: B4B8:0185:0031:27F8
 */
void f__B4B8_0145_0007_6EFA()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__B4B8_0177_001A_690A(); return;
}

/**
 * Decompiled function f__B4B8_014C_0014_ACE8()
 *
 * @name f__B4B8_014C_0014_ACE8
 * @implements B4B8:014C:0014:ACE8 ()
 *
 * Called From: B4B8:017B:001A:690A
 * Called From: B4B8:017B:0031:27F8
 */
void f__B4B8_014C_0014_ACE8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0160); emu_cs = 0x0F3F; f__0F3F_034C_0012_91EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0160_0031_27F8();
}

/**
 * Decompiled function f__B4B8_0160_0031_27F8()
 *
 * @name f__B4B8_0160_0031_27F8
 * @implements B4B8:0160:0031:27F8 ()
 *
 * Called From: B4B8:0160:0014:ACE8
 */
void f__B4B8_0160_0031_27F8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x4);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_014C_0014_ACE8(); return; }
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x4);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_0145_0007_6EFA(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	f__B4B8_02AF_0009_1941(); return;
}

/**
 * Decompiled function f__B4B8_0177_001A_690A()
 *
 * @name f__B4B8_0177_001A_690A
 * @implements B4B8:0177:001A:690A ()
 *
 * Called From: B4B8:014A:0007:6EFA
 */
void f__B4B8_0177_001A_690A()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_014C_0014_ACE8(); return; }
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x4);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0145; emu_last_cs = 0xB4B8; emu_last_ip = 0x0185; emu_last_length = 0x001A; emu_last_crc = 0x690A; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_ip = 0x02AF; emu_last_cs = 0xB4B8; emu_last_ip = 0x018E; emu_last_length = 0x001A; emu_last_crc = 0x690A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_0181_0010_4E38()
 *
 * @name f__B4B8_0181_0010_4E38
 * @implements B4B8:0181:0010:4E38 ()
 *
 * Called From: B4B8:0143:0020:F6BE
 */
void f__B4B8_0181_0010_4E38()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_0145_0007_6EFA(); return; }
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_ip = 0x02AF; emu_last_cs = 0xB4B8; emu_last_ip = 0x018E; emu_last_length = 0x0010; emu_last_crc = 0x4E38; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_0191_0008_DD6E()
 *
 * @name f__B4B8_0191_0008_DD6E
 * @implements B4B8:0191:0008:DD6E ()
 *
 * Called From: B4B8:02B5:0009:1941
 * Called From: B4B8:02B5:000D:B952
 */
void f__B4B8_0191_0008_DD6E()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__B4B8_02A2_0009_1E9D(); return;
}

/**
 * Decompiled function f__B4B8_0199_0009_CF78()
 *
 * @name f__B4B8_0199_0009_CF78
 * @implements B4B8:0199:0009:CF78 ()
 *
 * Called From: B4B8:02A8:0009:1E9D
 * Called From: B4B8:02A8:000D:CE8E
 */
void f__B4B8_0199_0009_CF78()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4B8_01A2_0012_06A5(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__B4B8_01A4_0010_07E9(); return;
}

/**
 * Decompiled function f__B4B8_01A2_0012_06A5()
 *
 * @name f__B4B8_01A2_0012_06A5
 * @implements B4B8:01A2:0012:06A5 ()
 *
 * Called From: B4B8:019B:0009:CF78
 */
void f__B4B8_01A2_0012_06A5()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_dx.x, 0x15);
	emu_movw(&emu_ax.x, emu_si);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_si);
	f__B4B8_0292_000C_9B50(); return;
}

/**
 * Decompiled function f__B4B8_01A4_0010_07E9()
 *
 * @name f__B4B8_01A4_0010_07E9
 * @implements B4B8:01A4:0010:07E9 ()
 *
 * Called From: B4B8:01A0:0009:CF78
 */
void f__B4B8_01A4_0010_07E9()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_dx.x, 0x15);
	emu_movw(&emu_ax.x, emu_si);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, emu_si);
	f__B4B8_0292_000C_9B50(); return;
}

/**
 * Decompiled function f__B4B8_01B4_0021_773C()
 *
 * @name f__B4B8_01B4_0021_773C
 * @implements B4B8:01B4:0021:773C ()
 *
 * Called From: B4B8:029B:000C:9B50
 * Called From: B4B8:029B:004C:6090
 * Called From: B4B8:029B:000D:7B58
 */
void f__B4B8_01B4_0021_773C()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x201D));
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x201B));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01D5); emu_cs = 0x0F3F; f__0F3F_034C_0012_91EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_01D5_0026_683C();
}

/**
 * Decompiled function f__B4B8_01D5_0026_683C()
 *
 * @name f__B4B8_01D5_0026_683C
 * @implements B4B8:01D5:0026:683C ()
 *
 * Called From: B4B8:01D5:0021:773C
 */
void f__B4B8_01D5_0026_683C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2021));
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x201F));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01FB); emu_cs = 0x0F3F; f__0F3F_034C_0012_91EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_01FB_0031_E03A();
}

/**
 * Decompiled function f__B4B8_01FB_0031_E03A()
 *
 * @name f__B4B8_01FB_0031_E03A
 * @implements B4B8:01FB:0031:E03A ()
 *
 * Called From: B4B8:01FB:0026:683C
 */
void f__B4B8_01FB_0031_E03A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x201D));
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x201B));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x022C); f__B4B8_09B6_0013_B3A6();
	f__B4B8_022C_0026_6B78();
}

/**
 * Decompiled function f__B4B8_022C_0026_6B78()
 *
 * @name f__B4B8_022C_0026_6B78
 * @implements B4B8:022C:0026:6B78 ()
 *
 * Called From: B4B8:022C:0031:E03A
 */
void f__B4B8_022C_0026_6B78()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x2021));
	emu_push(emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x201F));
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0252); f__B4B8_09B6_0013_B3A6();
	f__B4B8_0252_004C_6090();
}

/**
 * Decompiled function f__B4B8_0252_004C_6090()
 *
 * @name f__B4B8_0252_004C_6090
 * @implements B4B8:0252:004C:6090 ()
 *
 * Called From: B4B8:0252:0026:6B78
 */
void f__B4B8_0252_004C_6090()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0xF000);
	if (!emu_flags.zf) { f__B4B8_0291_000D_7B58(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_incw(&emu_ax.x);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_incw(&emu_di);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x15);
	emu_cmpw(&emu_ax.x, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_029E_000D_CE8E(); return; }
	f__B4B8_01B4_0021_773C(); return;
}

/**
 * Decompiled function f__B4B8_0291_000D_7B58()
 *
 * @name f__B4B8_0291_000D_7B58
 * @implements B4B8:0291:000D:7B58 ()
 *
 * Called From: B4B8:025C:004C:6090
 */
void f__B4B8_0291_000D_7B58()
{
	emu_incw(&emu_di);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x15);
	emu_cmpw(&emu_ax.x, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x029E; emu_last_cs = 0xB4B8; emu_last_ip = 0x0299; emu_last_length = 0x000D; emu_last_crc = 0x7B58; emu_call(); return; } // Jump does not resolve
	f__B4B8_01B4_0021_773C(); return;
}

/**
 * Decompiled function f__B4B8_0292_000C_9B50()
 *
 * @name f__B4B8_0292_000C_9B50
 * @implements B4B8:0292:000C:9B50 ()
 *
 * Called From: B4B8:01B1:0010:07E9
 * Called From: B4B8:01B1:0012:06A5
 */
void f__B4B8_0292_000C_9B50()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x15);
	emu_cmpw(&emu_ax.x, emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x029E; emu_last_cs = 0xB4B8; emu_last_ip = 0x0299; emu_last_length = 0x000C; emu_last_crc = 0x9B50; emu_call(); return; } // Jump does not resolve
	f__B4B8_01B4_0021_773C(); return;
}

/**
 * Decompiled function f__B4B8_029E_000D_CE8E()
 *
 * @name f__B4B8_029E_000D_CE8E
 * @implements B4B8:029E:000D:CE8E ()
 *
 * Called From: B4B8:0299:004C:6090
 */
void f__B4B8_029E_000D_CE8E()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x4);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_02AB_000D_B952(); return; }
	f__B4B8_0199_0009_CF78(); return;
}

/**
 * Decompiled function f__B4B8_02A2_0009_1E9D()
 *
 * @name f__B4B8_02A2_0009_1E9D
 * @implements B4B8:02A2:0009:1E9D ()
 *
 * Called From: B4B8:0196:0008:DD6E
 */
void f__B4B8_02A2_0009_1E9D()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x02AB; emu_last_cs = 0xB4B8; emu_last_ip = 0x02A6; emu_last_length = 0x0009; emu_last_crc = 0x1E9D; emu_call(); return; } // Jump does not resolve
	f__B4B8_0199_0009_CF78(); return;
}

/**
 * Decompiled function f__B4B8_02AB_000D_B952()
 *
 * @name f__B4B8_02AB_000D_B952
 * @implements B4B8:02AB:000D:B952 ()
 *
 * Called From: B4B8:02A6:000D:CE8E
 */
void f__B4B8_02AB_000D_B952()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x4);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_02B8_0012_EF7C(); return; }
	f__B4B8_0191_0008_DD6E(); return;
}

/**
 * Decompiled function f__B4B8_02AF_0009_1941()
 *
 * @name f__B4B8_02AF_0009_1941
 * @implements B4B8:02AF:0009:1941 ()
 *
 * Called From: B4B8:018E:0031:27F8
 */
void f__B4B8_02AF_0009_1941()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x02B8; emu_last_cs = 0xB4B8; emu_last_ip = 0x02B3; emu_last_length = 0x0009; emu_last_crc = 0x1941; emu_call(); return; } // Jump does not resolve
	f__B4B8_0191_0008_DD6E(); return;
}

/**
 * Decompiled function f__B4B8_02B8_0012_EF7C()
 *
 * @name f__B4B8_02B8_0012_EF7C
 * @implements B4B8:02B8:0012:EF7C ()
 *
 * Called From: B4B8:02B3:000D:B952
 */
void f__B4B8_02B8_0012_EF7C()
{
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x126);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02CA); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_02CA_0018_E969();
}

/**
 * Decompiled function f__B4B8_02CA_0018_E969()
 *
 * @name f__B4B8_02CA_0018_E969
 * @implements B4B8:02CA:0018:E969 ()
 *
 * Called From: B4B8:02CA:0012:EF7C
 */
void f__B4B8_02CA_0018_E969()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39EC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	f__B4B8_0439_0009_18A5(); return;
}

/**
 * Decompiled function f__B4B8_02E2_0015_FD53()
 *
 * @name f__B4B8_02E2_0015_FD53
 * @implements B4B8:02E2:0015:FD53 ()
 *
 * Called From: B4B8:043F:0009:18A5
 * Called From: B4B8:043F:000C:00AB
 */
void f__B4B8_02E2_0015_FD53()
{
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x126);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x02F7); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_02F7_000A_E4AF();
}

/**
 * Decompiled function f__B4B8_02F7_000A_E4AF()
 *
 * @name f__B4B8_02F7_000A_E4AF
 * @implements B4B8:02F7:000A:E4AF ()
 *
 * Called From: B4B8:02F7:0015:FD53
 */
void f__B4B8_02F7_000A_E4AF()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0x0);
	f__B4B8_0321_000E_3A90(); return;
}

/**
 * Decompiled function f__B4B8_0301_002E_1011()
 *
 * @name f__B4B8_0301_002E_1011
 * @implements B4B8:0301:002E:1011 ()
 *
 * Called From: B4B8:0325:000E:3A90
 * Called From: B4B8:0325:002E:1011
 */
void f__B4B8_0301_002E_1011()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x126);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_0301_002E_1011(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__B4B8_042D_0009_1EC1(); return;
}

/**
 * Decompiled function f__B4B8_0321_000E_3A90()
 *
 * @name f__B4B8_0321_000E_3A90
 * @implements B4B8:0321:000E:3A90 ()
 *
 * Called From: B4B8:02FF:000A:E4AF
 */
void f__B4B8_0321_000E_3A90()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_0301_002E_1011(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_ip = 0x042D; emu_last_cs = 0xB4B8; emu_last_ip = 0x032C; emu_last_length = 0x000E; emu_last_crc = 0x3A90; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_032F_0107_3D4B()
 *
 * @name f__B4B8_032F_0107_3D4B
 * @implements B4B8:032F:0107:3D4B ()
 *
 * Called From: B4B8:0433:0009:1EC1
 * Called From: B4B8:0433:0038:B310
 */
void f__B4B8_032F_0107_3D4B()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x126);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0xA6);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0xA4);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x124);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x104));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x100));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xFC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x128);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0xA8);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__B4B8_03C8_006E_4AE5(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__B4B8_03DA_005C_05BC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x3F);
	if (!emu_flags.zf) { f__B4B8_03EC_004A_D064(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x3F);
	if (!emu_flags.zf) { emu_ip = 0x03FE; emu_last_cs = 0xB4B8; emu_last_ip = 0x03F0; emu_last_length = 0x0107; emu_last_crc = 0x3D4B; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_bx.x, 0x9);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0436; emu_last_cs = 0xB4B8; emu_last_ip = 0x0431; emu_last_length = 0x0107; emu_last_crc = 0x3D4B; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x032F; emu_last_cs = 0xB4B8; emu_last_ip = 0x0433; emu_last_length = 0x0107; emu_last_crc = 0x3D4B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_03C8_006E_4AE5()
 *
 * @name f__B4B8_03C8_006E_4AE5
 * @implements B4B8:03C8:006E:4AE5 ()
 *
 * Called From: B4B8:03BA:0107:3D4B
 */
void f__B4B8_03C8_006E_4AE5()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__B4B8_03DA_005C_05BC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x3F);
	if (!emu_flags.zf) { f__B4B8_03EC_004A_D064(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x3F);
	if (!emu_flags.zf) { f__B4B8_03FE_0038_B310(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_bx.x, 0x9);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0436; emu_last_cs = 0xB4B8; emu_last_ip = 0x0431; emu_last_length = 0x006E; emu_last_crc = 0x4AE5; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x032F; emu_last_cs = 0xB4B8; emu_last_ip = 0x0433; emu_last_length = 0x006E; emu_last_crc = 0x4AE5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_03DA_005C_05BC()
 *
 * @name f__B4B8_03DA_005C_05BC
 * @implements B4B8:03DA:005C:05BC ()
 *
 * Called From: B4B8:03CC:0107:3D4B
 * Called From: B4B8:03CC:006E:4AE5
 */
void f__B4B8_03DA_005C_05BC()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x3F);
	if (!emu_flags.zf) { f__B4B8_03EC_004A_D064(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x3F);
	if (!emu_flags.zf) { f__B4B8_03FE_0038_B310(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_bx.x, 0x9);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_0436_000C_00AB(); return; }
	emu_ip = 0x032F; emu_last_cs = 0xB4B8; emu_last_ip = 0x0433; emu_last_length = 0x005C; emu_last_crc = 0x05BC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_03EC_004A_D064()
 *
 * @name f__B4B8_03EC_004A_D064
 * @implements B4B8:03EC:004A:D064 ()
 *
 * Called From: B4B8:03DE:0107:3D4B
 * Called From: B4B8:03DE:005C:05BC
 * Called From: B4B8:03DE:006E:4AE5
 */
void f__B4B8_03EC_004A_D064()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x3F);
	if (!emu_flags.zf) { f__B4B8_03FE_0038_B310(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_bx.x, 0x9);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_0436_000C_00AB(); return; }
	emu_ip = 0x032F; emu_last_cs = 0xB4B8; emu_last_ip = 0x0433; emu_last_length = 0x004A; emu_last_crc = 0xD064; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_03FE_0038_B310()
 *
 * @name f__B4B8_03FE_0038_B310
 * @implements B4B8:03FE:0038:B310 ()
 *
 * Called From: B4B8:03F0:004A:D064
 * Called From: B4B8:03F0:006E:4AE5
 * Called From: B4B8:03F0:005C:05BC
 */
void f__B4B8_03FE_0038_B310()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_bx.x, 0x9);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0436; emu_last_cs = 0xB4B8; emu_last_ip = 0x0431; emu_last_length = 0x0038; emu_last_crc = 0xB310; emu_call(); return; } // Jump does not resolve
	f__B4B8_032F_0107_3D4B(); return;
}

/**
 * Decompiled function f__B4B8_042D_0009_1EC1()
 *
 * @name f__B4B8_042D_0009_1EC1
 * @implements B4B8:042D:0009:1EC1 ()
 *
 * Called From: B4B8:032C:002E:1011
 */
void f__B4B8_042D_0009_1EC1()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0436; emu_last_cs = 0xB4B8; emu_last_ip = 0x0431; emu_last_length = 0x0009; emu_last_crc = 0x1EC1; emu_call(); return; } // Jump does not resolve
	f__B4B8_032F_0107_3D4B(); return;
}

/**
 * Decompiled function f__B4B8_0436_000C_00AB()
 *
 * @name f__B4B8_0436_000C_00AB
 * @implements B4B8:0436:000C:00AB ()
 *
 * Called From: B4B8:0431:004A:D064
 * Called From: B4B8:0431:005C:05BC
 */
void f__B4B8_0436_000C_00AB()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_0442_0005_1186(); return; }
	f__B4B8_02E2_0015_FD53(); return;
}

/**
 * Decompiled function f__B4B8_0439_0009_18A5()
 *
 * @name f__B4B8_0439_0009_18A5
 * @implements B4B8:0439:0009:18A5 ()
 *
 * Called From: B4B8:02DF:0018:E969
 */
void f__B4B8_0439_0009_18A5()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0442; emu_last_cs = 0xB4B8; emu_last_ip = 0x043D; emu_last_length = 0x0009; emu_last_crc = 0x18A5; emu_call(); return; } // Jump does not resolve
	f__B4B8_02E2_0015_FD53(); return;
}

/**
 * Decompiled function f__B4B8_0442_0005_1186()
 *
 * @name f__B4B8_0442_0005_1186
 * @implements B4B8:0442:0005:1186 ()
 *
 * Called From: B4B8:043D:000C:00AB
 */
void f__B4B8_0442_0005_1186()
{
	emu_push(emu_cs); emu_push(0x0447); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0447_000F_A4F5();
}

/**
 * Decompiled function f__B4B8_0447_000F_A4F5()
 *
 * @name f__B4B8_0447_000F_A4F5
 * @implements B4B8:0447:000F:A4F5 ()
 *
 * Called From: B4B8:0447:0005:1186
 */
void f__B4B8_0447_000F_A4F5()
{
	emu_andw(&emu_ax.x, 0xF);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0x8);
	if (!emu_flags.cf) { emu_ip = 0x0456; emu_last_cs = 0xB4B8; emu_last_ip = 0x044F; emu_last_length = 0x000F; emu_last_crc = 0xA4F5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x8);
	f__B4B8_0458_000C_E224(); return;
}

/**
 * Decompiled function f__B4B8_0458_000C_E224()
 *
 * @name f__B4B8_0458_000C_E224
 * @implements B4B8:0458:000C:E224 ()
 *
 * Called From: B4B8:0454:000F:A4F5
 */
void f__B4B8_0458_000C_E224()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xC);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4B8_0464_0009_B807(); return; }
	emu_movw(&emu_ax.x, 0xC);
	emu_ip = 0x0466; emu_last_cs = 0xB4B8; emu_last_ip = 0x0462; emu_last_length = 0x000C; emu_last_crc = 0xE224; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_0464_0009_B807()
 *
 * @name f__B4B8_0464_0009_B807
 * @implements B4B8:0464:0009:B807 ()
 *
 * Called From: B4B8:045D:000C:E224
 */
void f__B4B8_0464_0009_B807()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_cs); emu_push(0x046D); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_046D_0018_B61E();
}

/**
 * Decompiled function f__B4B8_046D_0018_B61E()
 *
 * @name f__B4B8_046D_0018_B61E
 * @implements B4B8:046D:0018:B61E ()
 *
 * Called From: B4B8:046D:0009:B807
 */
void f__B4B8_046D_0018_B61E()
{
	emu_andw(&emu_ax.x, 0x3);
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, 0x3);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!emu_flags.cf) { f__B4B8_0485_0017_A317(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, 0x3);
	emu_ip = 0x0488; emu_last_cs = 0xB4B8; emu_last_ip = 0x0483; emu_last_length = 0x0018; emu_last_crc = 0xB61E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_0485_0017_A317()
 *
 * @name f__B4B8_0485_0017_A317
 * @implements B4B8:0485:0017:A317 ()
 *
 * Called From: B4B8:047C:0018:B61E
 */
void f__B4B8_0485_0017_A317()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39EC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_dx.x);
	emu_xorw(&emu_di, emu_di);
	f__B4B8_04E2_000B_E681(); return;
}

/**
 * Decompiled function f__B4B8_049C_001F_8400()
 *
 * @name f__B4B8_049C_001F_8400
 * @implements B4B8:049C:001F:8400 ()
 *
 * Called From: B4B8:04E6:000B:E681
 * Called From: B4B8:04E6:0019:93C4
 * Called From: B4B8:04E6:0026:E646
 */
void f__B4B8_049C_001F_8400()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0x4);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (!emu_flags.cf) { f__B4B8_04BB_000C_1775(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x6);
	f__B4B8_04D4_0019_93C4(); return;
}

/**
 * Decompiled function f__B4B8_04BB_000C_1775()
 *
 * @name f__B4B8_04BB_000C_1775
 * @implements B4B8:04BB:000C:1775 ()
 *
 * Called From: B4B8:04B2:001F:8400
 */
void f__B4B8_04BB_000C_1775()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_si);
	if (emu_flags.cf) { f__B4B8_04C7_0026_E646(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x4);
	f__B4B8_04D4_0019_93C4(); return;
}

/**
 * Decompiled function f__B4B8_04C7_0026_E646()
 *
 * @name f__B4B8_04C7_0026_E646
 * @implements B4B8:04C7:0026:E646 ()
 *
 * Called From: B4B8:04BE:000C:1775
 */
void f__B4B8_04C7_0026_E646()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (!(emu_flags.cf || emu_flags.zf)) { f__B4B8_04D4_0019_93C4(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_049C_001F_8400(); return; }
	emu_push(emu_cs); emu_push(0x04ED); emu_cs = 0x2BB4; emu_ip = 0x04F1; emu_last_cs = 0xB4B8; emu_last_ip = 0x04E8; emu_last_length = 0x0026; emu_last_crc = 0xE646; emu_call(); // Jump does not resolve
	f__B4B8_04ED_0008_29C0();
}

/**
 * Decompiled function f__B4B8_04D4_0019_93C4()
 *
 * @name f__B4B8_04D4_0019_93C4
 * @implements B4B8:04D4:0019:93C4 ()
 *
 * Called From: B4B8:04B9:001F:8400
 * Called From: B4B8:04C5:000C:1775
 * Called From: B4B8:04CD:0026:E646
 */
void f__B4B8_04D4_0019_93C4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_049C_001F_8400(); return; }
	emu_push(emu_cs); emu_push(0x04ED); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_04ED_0008_29C0();
}

/**
 * Decompiled function f__B4B8_04E2_000B_E681()
 *
 * @name f__B4B8_04E2_000B_E681
 * @implements B4B8:04E2:000B:E681 ()
 *
 * Called From: B4B8:049A:0017:A317
 */
void f__B4B8_04E2_000B_E681()
{
	emu_cmpw(&emu_di, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_049C_001F_8400(); return; }
	emu_push(emu_cs); emu_push(0x04ED); emu_cs = 0x2BB4; emu_ip = 0x04F1; emu_last_cs = 0xB4B8; emu_last_ip = 0x04E8; emu_last_length = 0x000B; emu_last_crc = 0xE681; emu_call(); // Jump does not resolve
	f__B4B8_04ED_0008_29C0();
}

/**
 * Decompiled function f__B4B8_04ED_0008_29C0()
 *
 * @name f__B4B8_04ED_0008_29C0
 * @implements B4B8:04ED:0008:29C0 ()
 *
 * Called From: B4B8:04ED:0019:93C4
 */
void f__B4B8_04ED_0008_29C0()
{
	emu_andw(&emu_ax.x, 0x2F);
	emu_movw(&emu_si, emu_ax.x);
	f__B4B8_058F_0007_317A(); return;
}

/**
 * Decompiled function f__B4B8_04F5_0005_1186()
 *
 * @name f__B4B8_04F5_0005_1186
 * @implements B4B8:04F5:0005:1186 ()
 *
 * Called From: B4B8:0593:0007:317A
 * Called From: B4B8:0593:0014:8B7A
 * Called From: B4B8:0593:0010:89EA
 */
void f__B4B8_04F5_0005_1186()
{
	emu_push(emu_cs); emu_push(0x04FA); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_04FA_0009_7086();
}

/**
 * Decompiled function f__B4B8_04FA_0009_7086()
 *
 * @name f__B4B8_04FA_0009_7086
 * @implements B4B8:04FA:0009:7086 ()
 *
 * Called From: B4B8:04FA:0005:1186
 */
void f__B4B8_04FA_0009_7086()
{
	emu_andw(&emu_ax.x, 0x3F);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0503); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0503_0009_767A();
}

/**
 * Decompiled function f__B4B8_0503_0009_767A()
 *
 * @name f__B4B8_0503_0009_767A
 * @implements B4B8:0503:0009:767A ()
 *
 * Called From: B4B8:0503:0009:7086
 */
void f__B4B8_0503_0009_767A()
{
	emu_andw(&emu_ax.x, 0x3F);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x050C); emu_cs = 0x0F3F; f__0F3F_034C_0012_91EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_050C_0028_82EA();
}

/**
 * Decompiled function f__B4B8_050C_0028_82EA()
 *
 * @name f__B4B8_050C_0028_82EA
 * @implements B4B8:050C:0028:82EA ()
 *
 * Called From: B4B8:050C:0009:767A
 */
void f__B4B8_050C_0028_82EA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x3A50), 0x0);
	if (emu_flags.zf) { f__B4B8_058F_0007_317A(); return; }
	emu_push(emu_cs); emu_push(0x0534); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0534_000D_7B21();
}

/**
 * Decompiled function f__B4B8_0534_000D_7B21()
 *
 * @name f__B4B8_0534_000D_7B21
 * @implements B4B8:0534:000D:7B21 ()
 *
 * Called From: B4B8:0534:0028:82EA
 */
void f__B4B8_0534_000D_7B21()
{
	emu_andw(&emu_ax.x, 0x1F);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	f__B4B8_0586_0010_89EA(); return;
}

/**
 * Decompiled function f__B4B8_0541_0009_7487()
 *
 * @name f__B4B8_0541_0009_7487
 * @implements B4B8:0541:0009:7487 ()
 *
 * Called From: B4B8:058C:0010:89EA
 * Called From: B4B8:058C:0014:8B7A
 */
void f__B4B8_0541_0009_7487()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x054A); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_054A_000C_EDF1();
}

/**
 * Decompiled function f__B4B8_054A_000C_EDF1()
 *
 * @name f__B4B8_054A_000C_EDF1
 * @implements B4B8:054A:000C:EDF1 ()
 *
 * Called From: B4B8:054A:0009:7487
 */
void f__B4B8_054A_000C_EDF1()
{
	emu_andw(&emu_ax.x, 0x3F);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0556); emu_cs = 0x0F3F; f__0F3F_009D_0017_C9BF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0556_0008_7DBA();
}

/**
 * Decompiled function f__B4B8_0556_0008_7DBA()
 *
 * @name f__B4B8_0556_0008_7DBA
 * @implements B4B8:0556:0008:7DBA ()
 *
 * Called From: B4B8:0556:000C:EDF1
 */
void f__B4B8_0556_0008_7DBA()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x055E); emu_cs = 0x0F3F; f__0F3F_01A1_0018_53C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_055E_000A_AAC1();
}

/**
 * Decompiled function f__B4B8_055E_000A_AAC1()
 *
 * @name f__B4B8_055E_000A_AAC1
 * @implements B4B8:055E:000A:AAC1 ()
 *
 * Called From: B4B8:055E:0008:7DBA
 */
void f__B4B8_055E_000A_AAC1()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0568); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0568_001A_E371();
}

/**
 * Decompiled function f__B4B8_0568_001A_E371()
 *
 * @name f__B4B8_0568_001A_E371
 * @implements B4B8:0568:001A:E371 ()
 *
 * Called From: B4B8:0568:000A:AAC1
 */
void f__B4B8_0568_001A_E371()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0541; emu_last_cs = 0xB4B8; emu_last_ip = 0x0572; emu_last_length = 0x001A; emu_last_crc = 0xE371; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x0541; emu_last_cs = 0xB4B8; emu_last_ip = 0x0578; emu_last_length = 0x001A; emu_last_crc = 0xE371; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs);
	emu_push(0x0582); f__B4B8_0899_002D_0CEC();
	f__B4B8_0582_0014_8B7A();
}

/**
 * Decompiled function f__B4B8_0582_0014_8B7A()
 *
 * @name f__B4B8_0582_0014_8B7A
 * @implements B4B8:0582:0014:8B7A ()
 *
 * Called From: B4B8:0582:001A:E371
 */
void f__B4B8_0582_0014_8B7A()
{
	emu_pop(&emu_cx.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_0541_0009_7487(); return; }
	emu_decw(&emu_si);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4B8_0596_0014_8693(); return; }
	f__B4B8_04F5_0005_1186(); return;
}

/**
 * Decompiled function f__B4B8_0586_0010_89EA()
 *
 * @name f__B4B8_0586_0010_89EA
 * @implements B4B8:0586:0010:89EA ()
 *
 * Called From: B4B8:053F:000D:7B21
 */
void f__B4B8_0586_0010_89EA()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_0541_0009_7487(); return; }
	emu_decw(&emu_si);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x0596; emu_last_cs = 0xB4B8; emu_last_ip = 0x0591; emu_last_length = 0x0010; emu_last_crc = 0x89EA; emu_call(); return; } // Jump does not resolve
	f__B4B8_04F5_0005_1186(); return;
}

/**
 * Decompiled function f__B4B8_058F_0007_317A()
 *
 * @name f__B4B8_058F_0007_317A
 * @implements B4B8:058F:0007:317A ()
 *
 * Called From: B4B8:04F2:0008:29C0
 * Called From: B4B8:052D:0028:82EA
 */
void f__B4B8_058F_0007_317A()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x0596; emu_last_cs = 0xB4B8; emu_last_ip = 0x0591; emu_last_length = 0x0007; emu_last_crc = 0x317A; emu_call(); return; } // Jump does not resolve
	f__B4B8_04F5_0005_1186(); return;
}

/**
 * Decompiled function f__B4B8_0596_0014_8693()
 *
 * @name f__B4B8_0596_0014_8693
 * @implements B4B8:0596:0014:8693 ()
 *
 * Called From: B4B8:0591:0014:8B7A
 */
void f__B4B8_0596_0014_8693()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39EC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	f__B4B8_05CA_000E_5921(); return;
}

/**
 * Decompiled function f__B4B8_05AA_002E_13D4()
 *
 * @name f__B4B8_05AA_002E_13D4
 * @implements B4B8:05AA:002E:13D4 ()
 *
 * Called From: B4B8:05CE:000E:5921
 * Called From: B4B8:05CE:002E:13D4
 */
void f__B4B8_05AA_002E_13D4()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x126);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_05AA_002E_13D4(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	f__B4B8_07CA_0009_1A31(); return;
}

/**
 * Decompiled function f__B4B8_05CA_000E_5921()
 *
 * @name f__B4B8_05CA_000E_5921
 * @implements B4B8:05CA:000E:5921 ()
 *
 * Called From: B4B8:05A8:0014:8693
 */
void f__B4B8_05CA_000E_5921()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_05AA_002E_13D4(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_ip = 0x07CA; emu_last_cs = 0xB4B8; emu_last_ip = 0x05D5; emu_last_length = 0x000E; emu_last_crc = 0x5921; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_05D8_0015_FD53()
 *
 * @name f__B4B8_05D8_0015_FD53
 * @implements B4B8:05D8:0015:FD53 ()
 *
 * Called From: B4B8:07D0:0009:1A31
 * Called From: B4B8:07D0:000C:023F
 */
void f__B4B8_05D8_0015_FD53()
{
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x126);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA6);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x05ED); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_05ED_000A_E26F();
}

/**
 * Decompiled function f__B4B8_05ED_000A_E26F()
 *
 * @name f__B4B8_05ED_000A_E26F
 * @implements B4B8:05ED:000A:E26F ()
 *
 * Called From: B4B8:05ED:0015:FD53
 */
void f__B4B8_05ED_000A_E26F()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	f__B4B8_0617_000E_5B0D(); return;
}

/**
 * Decompiled function f__B4B8_05F7_002E_11F8()
 *
 * @name f__B4B8_05F7_002E_11F8
 * @implements B4B8:05F7:002E:11F8 ()
 *
 * Called From: B4B8:061B:000E:5B0D
 * Called From: B4B8:061B:002E:11F8
 */
void f__B4B8_05F7_002E_11F8()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x126);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_05F7_002E_11F8(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	f__B4B8_07BE_0009_1C5D(); return;
}

/**
 * Decompiled function f__B4B8_0617_000E_5B0D()
 *
 * @name f__B4B8_0617_000E_5B0D
 * @implements B4B8:0617:000E:5B0D ()
 *
 * Called From: B4B8:05F5:000A:E26F
 */
void f__B4B8_0617_000E_5B0D()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x40);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_05F7_002E_11F8(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_ip = 0x07BE; emu_last_cs = 0xB4B8; emu_last_ip = 0x0622; emu_last_length = 0x000E; emu_last_crc = 0x5B0D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_0625_00CD_A1F4()
 *
 * @name f__B4B8_0625_00CD_A1F4
 * @implements B4B8:0625:00CD:A1F4 ()
 *
 * Called From: B4B8:07C4:0009:1C5D
 * Called From: B4B8:07C4:0019:BA73
 * Called From: B4B8:07C4:0023:6A63
 */
void f__B4B8_0625_00CD_A1F4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0xA6);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x124);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x100));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_bp - 0x128);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__B4B8_0678_007A_1C55(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__B4B8_0684_006E_0FD0(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x3F);
	if (!emu_flags.zf) { f__B4B8_0690_0062_2F90(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x3F);
	if (!emu_flags.zf) { emu_ip = 0x069C; emu_last_cs = 0xB4B8; emu_last_ip = 0x0694; emu_last_length = 0x00CD; emu_last_crc = 0xA1F4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x06F2; emu_last_cs = 0xB4B8; emu_last_ip = 0x06A5; emu_last_length = 0x00CD; emu_last_crc = 0xA1F4; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06B5; emu_last_cs = 0xB4B8; emu_last_ip = 0x06AD; emu_last_length = 0x00CD; emu_last_crc = 0xA1F4; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06B9; emu_last_cs = 0xB4B8; emu_last_ip = 0x06B3; emu_last_length = 0x00CD; emu_last_crc = 0xA1F4; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06C7; emu_last_cs = 0xB4B8; emu_last_ip = 0x06BF; emu_last_length = 0x00CD; emu_last_crc = 0xA1F4; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06CB; emu_last_cs = 0xB4B8; emu_last_ip = 0x06C5; emu_last_length = 0x00CD; emu_last_crc = 0xA1F4; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06D9; emu_last_cs = 0xB4B8; emu_last_ip = 0x06D1; emu_last_length = 0x00CD; emu_last_crc = 0xA1F4; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06DD; emu_last_cs = 0xB4B8; emu_last_ip = 0x06D7; emu_last_length = 0x00CD; emu_last_crc = 0xA1F4; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06EB; emu_last_cs = 0xB4B8; emu_last_ip = 0x06E3; emu_last_length = 0x00CD; emu_last_crc = 0xA1F4; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06EF; emu_last_cs = 0xB4B8; emu_last_ip = 0x06E9; emu_last_length = 0x00CD; emu_last_crc = 0xA1F4; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	emu_ip = 0x0772; emu_last_cs = 0xB4B8; emu_last_ip = 0x06EF; emu_last_length = 0x00CD; emu_last_crc = 0xA1F4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_0678_007A_1C55()
 *
 * @name f__B4B8_0678_007A_1C55
 * @implements B4B8:0678:007A:1C55 ()
 *
 * Called From: B4B8:0670:00CD:A1F4
 */
void f__B4B8_0678_007A_1C55()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__B4B8_0684_006E_0FD0(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x3F);
	if (!emu_flags.zf) { f__B4B8_0690_0062_2F90(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x3F);
	if (!emu_flags.zf) { f__B4B8_069C_0056_289C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x06F2; emu_last_cs = 0xB4B8; emu_last_ip = 0x06A5; emu_last_length = 0x007A; emu_last_crc = 0x1C55; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06B5; emu_last_cs = 0xB4B8; emu_last_ip = 0x06AD; emu_last_length = 0x007A; emu_last_crc = 0x1C55; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06B9; emu_last_cs = 0xB4B8; emu_last_ip = 0x06B3; emu_last_length = 0x007A; emu_last_crc = 0x1C55; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06C7; emu_last_cs = 0xB4B8; emu_last_ip = 0x06BF; emu_last_length = 0x007A; emu_last_crc = 0x1C55; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06CB; emu_last_cs = 0xB4B8; emu_last_ip = 0x06C5; emu_last_length = 0x007A; emu_last_crc = 0x1C55; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06D9; emu_last_cs = 0xB4B8; emu_last_ip = 0x06D1; emu_last_length = 0x007A; emu_last_crc = 0x1C55; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06DD; emu_last_cs = 0xB4B8; emu_last_ip = 0x06D7; emu_last_length = 0x007A; emu_last_crc = 0x1C55; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06EB; emu_last_cs = 0xB4B8; emu_last_ip = 0x06E3; emu_last_length = 0x007A; emu_last_crc = 0x1C55; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06EF; emu_last_cs = 0xB4B8; emu_last_ip = 0x06E9; emu_last_length = 0x007A; emu_last_crc = 0x1C55; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	emu_ip = 0x0772; emu_last_cs = 0xB4B8; emu_last_ip = 0x06EF; emu_last_length = 0x007A; emu_last_crc = 0x1C55; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_0684_006E_0FD0()
 *
 * @name f__B4B8_0684_006E_0FD0
 * @implements B4B8:0684:006E:0FD0 ()
 *
 * Called From: B4B8:067C:00CD:A1F4
 * Called From: B4B8:067C:007A:1C55
 */
void f__B4B8_0684_006E_0FD0()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x3F);
	if (!emu_flags.zf) { f__B4B8_0690_0062_2F90(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x3F);
	if (!emu_flags.zf) { f__B4B8_069C_0056_289C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	if (!emu_flags.zf) { f__B4B8_06F2_0050_80F1(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06B5; emu_last_cs = 0xB4B8; emu_last_ip = 0x06AD; emu_last_length = 0x006E; emu_last_crc = 0x0FD0; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06B9; emu_last_cs = 0xB4B8; emu_last_ip = 0x06B3; emu_last_length = 0x006E; emu_last_crc = 0x0FD0; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06C7; emu_last_cs = 0xB4B8; emu_last_ip = 0x06BF; emu_last_length = 0x006E; emu_last_crc = 0x0FD0; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06CB; emu_last_cs = 0xB4B8; emu_last_ip = 0x06C5; emu_last_length = 0x006E; emu_last_crc = 0x0FD0; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06D9; emu_last_cs = 0xB4B8; emu_last_ip = 0x06D1; emu_last_length = 0x006E; emu_last_crc = 0x0FD0; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06DD; emu_last_cs = 0xB4B8; emu_last_ip = 0x06D7; emu_last_length = 0x006E; emu_last_crc = 0x0FD0; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06EB; emu_last_cs = 0xB4B8; emu_last_ip = 0x06E3; emu_last_length = 0x006E; emu_last_crc = 0x0FD0; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06EF; emu_last_cs = 0xB4B8; emu_last_ip = 0x06E9; emu_last_length = 0x006E; emu_last_crc = 0x0FD0; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	emu_ip = 0x0772; emu_last_cs = 0xB4B8; emu_last_ip = 0x06EF; emu_last_length = 0x006E; emu_last_crc = 0x0FD0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_0690_0062_2F90()
 *
 * @name f__B4B8_0690_0062_2F90
 * @implements B4B8:0690:0062:2F90 ()
 *
 * Called From: B4B8:0688:00CD:A1F4
 * Called From: B4B8:0688:007A:1C55
 * Called From: B4B8:0688:006E:0FD0
 */
void f__B4B8_0690_0062_2F90()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x3F);
	if (!emu_flags.zf) { f__B4B8_069C_0056_289C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	if (!emu_flags.zf) { f__B4B8_06F2_0050_80F1(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06B5; emu_last_cs = 0xB4B8; emu_last_ip = 0x06AD; emu_last_length = 0x0062; emu_last_crc = 0x2F90; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06B9; emu_last_cs = 0xB4B8; emu_last_ip = 0x06B3; emu_last_length = 0x0062; emu_last_crc = 0x2F90; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06C7; emu_last_cs = 0xB4B8; emu_last_ip = 0x06BF; emu_last_length = 0x0062; emu_last_crc = 0x2F90; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06CB; emu_last_cs = 0xB4B8; emu_last_ip = 0x06C5; emu_last_length = 0x0062; emu_last_crc = 0x2F90; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06D9; emu_last_cs = 0xB4B8; emu_last_ip = 0x06D1; emu_last_length = 0x0062; emu_last_crc = 0x2F90; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06DD; emu_last_cs = 0xB4B8; emu_last_ip = 0x06D7; emu_last_length = 0x0062; emu_last_crc = 0x2F90; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06EB; emu_last_cs = 0xB4B8; emu_last_ip = 0x06E3; emu_last_length = 0x0062; emu_last_crc = 0x2F90; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06EF; emu_last_cs = 0xB4B8; emu_last_ip = 0x06E9; emu_last_length = 0x0062; emu_last_crc = 0x2F90; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	emu_ip = 0x0772; emu_last_cs = 0xB4B8; emu_last_ip = 0x06EF; emu_last_length = 0x0062; emu_last_crc = 0x2F90; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_069C_0056_289C()
 *
 * @name f__B4B8_069C_0056_289C
 * @implements B4B8:069C:0056:289C ()
 *
 * Called From: B4B8:0694:0062:2F90
 * Called From: B4B8:0694:007A:1C55
 * Called From: B4B8:0694:006E:0FD0
 */
void f__B4B8_069C_0056_289C()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	if (!emu_flags.zf) { f__B4B8_06F2_0050_80F1(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_06B5_003D_2ACE(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x6);
	if (!emu_flags.zf) { f__B4B8_06B9_0039_FEDD(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_06C7_002B_B6E1(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06CB; emu_last_cs = 0xB4B8; emu_last_ip = 0x06C5; emu_last_length = 0x0056; emu_last_crc = 0x289C; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_06D9_0019_922A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06DD; emu_last_cs = 0xB4B8; emu_last_ip = 0x06D7; emu_last_length = 0x0056; emu_last_crc = 0x289C; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06EB; emu_last_cs = 0xB4B8; emu_last_ip = 0x06E3; emu_last_length = 0x0056; emu_last_crc = 0x289C; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06EF; emu_last_cs = 0xB4B8; emu_last_ip = 0x06E9; emu_last_length = 0x0056; emu_last_crc = 0x289C; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	emu_ip = 0x0772; emu_last_cs = 0xB4B8; emu_last_ip = 0x06EF; emu_last_length = 0x0056; emu_last_crc = 0x289C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_06B5_003D_2ACE()
 *
 * @name f__B4B8_06B5_003D_2ACE
 * @implements B4B8:06B5:003D:2ACE ()
 *
 * Called From: B4B8:06AD:0056:289C
 */
void f__B4B8_06B5_003D_2ACE()
{
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_06C7_002B_B6E1(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x6);
	if (!emu_flags.zf) { f__B4B8_06CB_0027_40E5(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_06D9_0019_922A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06DD; emu_last_cs = 0xB4B8; emu_last_ip = 0x06D7; emu_last_length = 0x003D; emu_last_crc = 0x2ACE; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_06EB_0007_4A88(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06EF; emu_last_cs = 0xB4B8; emu_last_ip = 0x06E9; emu_last_length = 0x003D; emu_last_crc = 0x2ACE; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	emu_ip = 0x0772; emu_last_cs = 0xB4B8; emu_last_ip = 0x06EF; emu_last_length = 0x003D; emu_last_crc = 0x2ACE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_06B9_0039_FEDD()
 *
 * @name f__B4B8_06B9_0039_FEDD
 * @implements B4B8:06B9:0039:FEDD ()
 *
 * Called From: B4B8:06B3:0056:289C
 */
void f__B4B8_06B9_0039_FEDD()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_06C7_002B_B6E1(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x6);
	if (!emu_flags.zf) { f__B4B8_06CB_0027_40E5(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06D9; emu_last_cs = 0xB4B8; emu_last_ip = 0x06D1; emu_last_length = 0x0039; emu_last_crc = 0xFEDD; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06DD; emu_last_cs = 0xB4B8; emu_last_ip = 0x06D7; emu_last_length = 0x0039; emu_last_crc = 0xFEDD; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06EB; emu_last_cs = 0xB4B8; emu_last_ip = 0x06E3; emu_last_length = 0x0039; emu_last_crc = 0xFEDD; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06EF; emu_last_cs = 0xB4B8; emu_last_ip = 0x06E9; emu_last_length = 0x0039; emu_last_crc = 0xFEDD; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	emu_ip = 0x0772; emu_last_cs = 0xB4B8; emu_last_ip = 0x06EF; emu_last_length = 0x0039; emu_last_crc = 0xFEDD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_06C7_002B_B6E1()
 *
 * @name f__B4B8_06C7_002B_B6E1
 * @implements B4B8:06C7:002B:B6E1 ()
 *
 * Called From: B4B8:06BF:003D:2ACE
 * Called From: B4B8:06BF:0039:FEDD
 * Called From: B4B8:06BF:0056:289C
 */
void f__B4B8_06C7_002B_B6E1()
{
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_06D9_0019_922A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x6);
	if (!emu_flags.zf) { f__B4B8_06DD_0015_AE2B(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_06EB_0007_4A88(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06EF; emu_last_cs = 0xB4B8; emu_last_ip = 0x06E9; emu_last_length = 0x002B; emu_last_crc = 0xB6E1; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	f__B4B8_0772_0055_D6CA(); return;
}

/**
 * Decompiled function f__B4B8_06CB_0027_40E5()
 *
 * @name f__B4B8_06CB_0027_40E5
 * @implements B4B8:06CB:0027:40E5 ()
 *
 * Called From: B4B8:06C5:003D:2ACE
 * Called From: B4B8:06C5:0039:FEDD
 */
void f__B4B8_06CB_0027_40E5()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_06D9_0019_922A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x6);
	if (!emu_flags.zf) { f__B4B8_06DD_0015_AE2B(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x06EB; emu_last_cs = 0xB4B8; emu_last_ip = 0x06E3; emu_last_length = 0x0027; emu_last_crc = 0x40E5; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x06EF; emu_last_cs = 0xB4B8; emu_last_ip = 0x06E9; emu_last_length = 0x0027; emu_last_crc = 0x40E5; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	emu_ip = 0x0772; emu_last_cs = 0xB4B8; emu_last_ip = 0x06EF; emu_last_length = 0x0027; emu_last_crc = 0x40E5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_06D9_0019_922A()
 *
 * @name f__B4B8_06D9_0019_922A
 * @implements B4B8:06D9:0019:922A ()
 *
 * Called From: B4B8:06D1:002B:B6E1
 * Called From: B4B8:06D1:0027:40E5
 * Called From: B4B8:06D1:003D:2ACE
 * Called From: B4B8:06D1:0056:289C
 */
void f__B4B8_06D9_0019_922A()
{
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_06EB_0007_4A88(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x6);
	if (!emu_flags.zf) { f__B4B8_06EF_0003_0548(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	f__B4B8_0772_0055_D6CA(); return;
}

/**
 * Decompiled function f__B4B8_06DD_0015_AE2B()
 *
 * @name f__B4B8_06DD_0015_AE2B
 * @implements B4B8:06DD:0015:AE2B ()
 *
 * Called From: B4B8:06D7:002B:B6E1
 * Called From: B4B8:06D7:0027:40E5
 */
void f__B4B8_06DD_0015_AE2B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_06EB_0007_4A88(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x6);
	if (!emu_flags.zf) { f__B4B8_06EF_0003_0548(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	emu_ip = 0x0772; emu_last_cs = 0xB4B8; emu_last_ip = 0x06EF; emu_last_length = 0x0015; emu_last_crc = 0xAE2B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_06EB_0007_4A88()
 *
 * @name f__B4B8_06EB_0007_4A88
 * @implements B4B8:06EB:0007:4A88 ()
 *
 * Called From: B4B8:06E3:0019:922A
 * Called From: B4B8:06E3:0015:AE2B
 * Called From: B4B8:06E3:002B:B6E1
 * Called From: B4B8:06E3:003D:2ACE
 */
void f__B4B8_06EB_0007_4A88()
{
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	f__B4B8_0772_0055_D6CA(); return;
}

/**
 * Decompiled function f__B4B8_06EF_0003_0548()
 *
 * @name f__B4B8_06EF_0003_0548
 * @implements B4B8:06EF:0003:0548 ()
 *
 * Called From: B4B8:06E9:0019:922A
 * Called From: B4B8:06E9:0015:AE2B
 */
void f__B4B8_06EF_0003_0548()
{
	f__B4B8_0772_0055_D6CA(); return;
}

/**
 * Decompiled function f__B4B8_06F2_0050_80F1()
 *
 * @name f__B4B8_06F2_0050_80F1
 * @implements B4B8:06F2:0050:80F1 ()
 *
 * Called From: B4B8:06A5:0056:289C
 * Called From: B4B8:06A5:0062:2F90
 * Called From: B4B8:06A5:006E:0FD0
 */
void f__B4B8_06F2_0050_80F1()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (!emu_flags.zf) { f__B4B8_0742_0085_8E26(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_0706_003C_920E(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x9);
	if (!emu_flags.zf) { f__B4B8_070A_0038_7807(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_0718_002A_BC18(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x071C; emu_last_cs = 0xB4B8; emu_last_ip = 0x0716; emu_last_length = 0x0050; emu_last_crc = 0x80F1; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_072A_0018_567D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x072E; emu_last_cs = 0xB4B8; emu_last_ip = 0x0728; emu_last_length = 0x0050; emu_last_crc = 0x80F1; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_073C_0006_242C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x0740; emu_last_cs = 0xB4B8; emu_last_ip = 0x073A; emu_last_length = 0x0050; emu_last_crc = 0x80F1; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	f__B4B8_0772_0055_D6CA(); return;
}

/**
 * Decompiled function f__B4B8_0706_003C_920E()
 *
 * @name f__B4B8_0706_003C_920E
 * @implements B4B8:0706:003C:920E ()
 *
 * Called From: B4B8:06FE:0050:80F1
 */
void f__B4B8_0706_003C_920E()
{
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_0718_002A_BC18(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x9);
	if (!emu_flags.zf) { f__B4B8_071C_0026_C71A(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_072A_0018_567D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x072E; emu_last_cs = 0xB4B8; emu_last_ip = 0x0728; emu_last_length = 0x003C; emu_last_crc = 0x920E; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_073C_0006_242C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x0740; emu_last_cs = 0xB4B8; emu_last_ip = 0x073A; emu_last_length = 0x003C; emu_last_crc = 0x920E; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	f__B4B8_0772_0055_D6CA(); return;
}

/**
 * Decompiled function f__B4B8_070A_0038_7807()
 *
 * @name f__B4B8_070A_0038_7807
 * @implements B4B8:070A:0038:7807 ()
 *
 * Called From: B4B8:0704:0050:80F1
 */
void f__B4B8_070A_0038_7807()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_0718_002A_BC18(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x9);
	if (!emu_flags.zf) { f__B4B8_071C_0026_C71A(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x072A; emu_last_cs = 0xB4B8; emu_last_ip = 0x0722; emu_last_length = 0x0038; emu_last_crc = 0x7807; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x072E; emu_last_cs = 0xB4B8; emu_last_ip = 0x0728; emu_last_length = 0x0038; emu_last_crc = 0x7807; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x073C; emu_last_cs = 0xB4B8; emu_last_ip = 0x0734; emu_last_length = 0x0038; emu_last_crc = 0x7807; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x0740; emu_last_cs = 0xB4B8; emu_last_ip = 0x073A; emu_last_length = 0x0038; emu_last_crc = 0x7807; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	emu_ip = 0x0772; emu_last_cs = 0xB4B8; emu_last_ip = 0x0740; emu_last_length = 0x0038; emu_last_crc = 0x7807; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_0718_002A_BC18()
 *
 * @name f__B4B8_0718_002A_BC18
 * @implements B4B8:0718:002A:BC18 ()
 *
 * Called From: B4B8:0710:003C:920E
 * Called From: B4B8:0710:0038:7807
 * Called From: B4B8:0710:0050:80F1
 */
void f__B4B8_0718_002A_BC18()
{
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_072A_0018_567D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x9);
	if (!emu_flags.zf) { f__B4B8_072E_0014_C87D(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_073C_0006_242C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x0740; emu_last_cs = 0xB4B8; emu_last_ip = 0x073A; emu_last_length = 0x002A; emu_last_crc = 0xBC18; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	f__B4B8_0772_0055_D6CA(); return;
}

/**
 * Decompiled function f__B4B8_071C_0026_C71A()
 *
 * @name f__B4B8_071C_0026_C71A
 * @implements B4B8:071C:0026:C71A ()
 *
 * Called From: B4B8:0716:003C:920E
 * Called From: B4B8:0716:0038:7807
 */
void f__B4B8_071C_0026_C71A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_072A_0018_567D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x9);
	if (!emu_flags.zf) { f__B4B8_072E_0014_C87D(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { emu_ip = 0x073C; emu_last_cs = 0xB4B8; emu_last_ip = 0x0734; emu_last_length = 0x0026; emu_last_crc = 0xC71A; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x0740; emu_last_cs = 0xB4B8; emu_last_ip = 0x073A; emu_last_length = 0x0026; emu_last_crc = 0xC71A; emu_call(); return; } // Jump does not resolve
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	emu_ip = 0x0772; emu_last_cs = 0xB4B8; emu_last_ip = 0x0740; emu_last_length = 0x0026; emu_last_crc = 0xC71A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_072A_0018_567D()
 *
 * @name f__B4B8_072A_0018_567D
 * @implements B4B8:072A:0018:567D ()
 *
 * Called From: B4B8:0722:003C:920E
 * Called From: B4B8:0722:0026:C71A
 * Called From: B4B8:0722:002A:BC18
 * Called From: B4B8:0722:0050:80F1
 */
void f__B4B8_072A_0018_567D()
{
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_073C_0006_242C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x9);
	if (!emu_flags.zf) { f__B4B8_0740_0002_03CC(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	f__B4B8_0772_0055_D6CA(); return;
}

/**
 * Decompiled function f__B4B8_072E_0014_C87D()
 *
 * @name f__B4B8_072E_0014_C87D
 * @implements B4B8:072E:0014:C87D ()
 *
 * Called From: B4B8:0728:0026:C71A
 * Called From: B4B8:0728:002A:BC18
 */
void f__B4B8_072E_0014_C87D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (emu_flags.zf) { f__B4B8_073C_0006_242C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x9);
	if (!emu_flags.zf) { f__B4B8_0740_0002_03CC(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	emu_ip = 0x0772; emu_last_cs = 0xB4B8; emu_last_ip = 0x0740; emu_last_length = 0x0014; emu_last_crc = 0xC87D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_073C_0006_242C()
 *
 * @name f__B4B8_073C_0006_242C
 * @implements B4B8:073C:0006:242C ()
 *
 * Called From: B4B8:0734:002A:BC18
 * Called From: B4B8:0734:0018:567D
 * Called From: B4B8:0734:003C:920E
 * Called From: B4B8:0734:0014:C87D
 * Called From: B4B8:0734:0050:80F1
 */
void f__B4B8_073C_0006_242C()
{
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	f__B4B8_0772_0055_D6CA(); return;
}

/**
 * Decompiled function f__B4B8_0740_0002_03CC()
 *
 * @name f__B4B8_0740_0002_03CC
 * @implements B4B8:0740:0002:03CC ()
 *
 * Called From: B4B8:073A:0018:567D
 * Called From: B4B8:073A:0014:C87D
 */
void f__B4B8_0740_0002_03CC()
{
	f__B4B8_0772_0055_D6CA(); return;
}

/**
 * Decompiled function f__B4B8_0742_0085_8E26()
 *
 * @name f__B4B8_0742_0085_8E26
 * @implements B4B8:0742:0085:8E26 ()
 *
 * Called From: B4B8:06F6:0050:80F1
 */
void f__B4B8_0742_0085_8E26()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) { f__B4B8_074E_0079_C8B6(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) { f__B4B8_075A_006D_60B2(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) { f__B4B8_0766_0061_D0E0(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) { f__B4B8_0772_0055_D6CA(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	if (!emu_flags.zf) { f__B4B8_077D_004A_868A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	if (!emu_flags.zf) { f__B4B8_0786_0041_8FC0(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x0790; emu_last_cs = 0xB4B8; emu_last_ip = 0x078A; emu_last_length = 0x0085; emu_last_crc = 0x8E26; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x11);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x079A; emu_last_cs = 0xB4B8; emu_last_ip = 0x0794; emu_last_length = 0x0085; emu_last_crc = 0x8E26; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x21);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (!emu_flags.zf) { emu_ip = 0x07A4; emu_last_cs = 0xB4B8; emu_last_ip = 0x079E; emu_last_length = 0x0085; emu_last_crc = 0x8E26; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x31);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x07AE; emu_last_cs = 0xB4B8; emu_last_ip = 0x07A8; emu_last_length = 0x0085; emu_last_crc = 0x8E26; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x41);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07C7; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C2; emu_last_length = 0x0085; emu_last_crc = 0x8E26; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0625; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C4; emu_last_length = 0x0085; emu_last_crc = 0x8E26; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_074E_0079_C8B6()
 *
 * @name f__B4B8_074E_0079_C8B6
 * @implements B4B8:074E:0079:C8B6 ()
 *
 * Called From: B4B8:0748:0085:8E26
 */
void f__B4B8_074E_0079_C8B6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) { f__B4B8_075A_006D_60B2(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) { f__B4B8_0766_0061_D0E0(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) { f__B4B8_0772_0055_D6CA(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	if (!emu_flags.zf) { f__B4B8_077D_004A_868A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	if (!emu_flags.zf) { f__B4B8_0786_0041_8FC0(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x0790; emu_last_cs = 0xB4B8; emu_last_ip = 0x078A; emu_last_length = 0x0079; emu_last_crc = 0xC8B6; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x11);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x079A; emu_last_cs = 0xB4B8; emu_last_ip = 0x0794; emu_last_length = 0x0079; emu_last_crc = 0xC8B6; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x21);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (!emu_flags.zf) { emu_ip = 0x07A4; emu_last_cs = 0xB4B8; emu_last_ip = 0x079E; emu_last_length = 0x0079; emu_last_crc = 0xC8B6; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x31);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x07AE; emu_last_cs = 0xB4B8; emu_last_ip = 0x07A8; emu_last_length = 0x0079; emu_last_crc = 0xC8B6; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x41);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07C7; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C2; emu_last_length = 0x0079; emu_last_crc = 0xC8B6; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0625; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C4; emu_last_length = 0x0079; emu_last_crc = 0xC8B6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_075A_006D_60B2()
 *
 * @name f__B4B8_075A_006D_60B2
 * @implements B4B8:075A:006D:60B2 ()
 *
 * Called From: B4B8:0754:0085:8E26
 * Called From: B4B8:0754:0079:C8B6
 */
void f__B4B8_075A_006D_60B2()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) { f__B4B8_0766_0061_D0E0(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) { f__B4B8_0772_0055_D6CA(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	if (!emu_flags.zf) { f__B4B8_077D_004A_868A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	if (!emu_flags.zf) { f__B4B8_0786_0041_8FC0(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x0790; emu_last_cs = 0xB4B8; emu_last_ip = 0x078A; emu_last_length = 0x006D; emu_last_crc = 0x60B2; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x11);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x079A; emu_last_cs = 0xB4B8; emu_last_ip = 0x0794; emu_last_length = 0x006D; emu_last_crc = 0x60B2; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x21);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (!emu_flags.zf) { emu_ip = 0x07A4; emu_last_cs = 0xB4B8; emu_last_ip = 0x079E; emu_last_length = 0x006D; emu_last_crc = 0x60B2; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x31);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x07AE; emu_last_cs = 0xB4B8; emu_last_ip = 0x07A8; emu_last_length = 0x006D; emu_last_crc = 0x60B2; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x41);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07C7; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C2; emu_last_length = 0x006D; emu_last_crc = 0x60B2; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0625; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C4; emu_last_length = 0x006D; emu_last_crc = 0x60B2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_0766_0061_D0E0()
 *
 * @name f__B4B8_0766_0061_D0E0
 * @implements B4B8:0766:0061:D0E0 ()
 *
 * Called From: B4B8:0760:0085:8E26
 * Called From: B4B8:0760:006D:60B2
 * Called From: B4B8:0760:0079:C8B6
 */
void f__B4B8_0766_0061_D0E0()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) { f__B4B8_0772_0055_D6CA(); return; }
	emu_orws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x8);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	if (!emu_flags.zf) { f__B4B8_077D_004A_868A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	if (!emu_flags.zf) { f__B4B8_0786_0041_8FC0(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x0790; emu_last_cs = 0xB4B8; emu_last_ip = 0x078A; emu_last_length = 0x0061; emu_last_crc = 0xD0E0; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x11);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x079A; emu_last_cs = 0xB4B8; emu_last_ip = 0x0794; emu_last_length = 0x0061; emu_last_crc = 0xD0E0; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x21);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (!emu_flags.zf) { emu_ip = 0x07A4; emu_last_cs = 0xB4B8; emu_last_ip = 0x079E; emu_last_length = 0x0061; emu_last_crc = 0xD0E0; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x31);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x07AE; emu_last_cs = 0xB4B8; emu_last_ip = 0x07A8; emu_last_length = 0x0061; emu_last_crc = 0xD0E0; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x41);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07C7; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C2; emu_last_length = 0x0061; emu_last_crc = 0xD0E0; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0625; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C4; emu_last_length = 0x0061; emu_last_crc = 0xD0E0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_0772_0055_D6CA()
 *
 * @name f__B4B8_0772_0055_D6CA
 * @implements B4B8:0772:0055:D6CA ()
 *
 * Called From: B4B8:06EF:0003:0548
 * Called From: B4B8:06EF:0007:4A88
 * Called From: B4B8:06EF:0019:922A
 * Called From: B4B8:06EF:002B:B6E1
 * Called From: B4B8:0740:0002:03CC
 * Called From: B4B8:0740:0018:567D
 * Called From: B4B8:0740:0006:242C
 * Called From: B4B8:0740:003C:920E
 * Called From: B4B8:0740:0050:80F1
 * Called From: B4B8:0740:002A:BC18
 * Called From: B4B8:076C:0061:D0E0
 * Called From: B4B8:076C:006D:60B2
 * Called From: B4B8:076C:0085:8E26
 * Called From: B4B8:076C:0079:C8B6
 */
void f__B4B8_0772_0055_D6CA()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x0);
	if (!emu_flags.zf) { f__B4B8_077D_004A_868A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	if (!emu_flags.zf) { f__B4B8_0786_0041_8FC0(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	if (!emu_flags.zf) { emu_ip = 0x0790; emu_last_cs = 0xB4B8; emu_last_ip = 0x078A; emu_last_length = 0x0055; emu_last_crc = 0xD6CA; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x11);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x079A; emu_last_cs = 0xB4B8; emu_last_ip = 0x0794; emu_last_length = 0x0055; emu_last_crc = 0xD6CA; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x21);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (!emu_flags.zf) { emu_ip = 0x07A4; emu_last_cs = 0xB4B8; emu_last_ip = 0x079E; emu_last_length = 0x0055; emu_last_crc = 0xD6CA; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x31);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x07AE; emu_last_cs = 0xB4B8; emu_last_ip = 0x07A8; emu_last_length = 0x0055; emu_last_crc = 0xD6CA; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x41);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07C7; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C2; emu_last_length = 0x0055; emu_last_crc = 0xD6CA; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0625; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C4; emu_last_length = 0x0055; emu_last_crc = 0xD6CA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_077D_004A_868A()
 *
 * @name f__B4B8_077D_004A_868A
 * @implements B4B8:077D:004A:868A ()
 *
 * Called From: B4B8:0776:0055:D6CA
 * Called From: B4B8:0776:0085:8E26
 * Called From: B4B8:0776:0061:D0E0
 * Called From: B4B8:0776:006D:60B2
 * Called From: B4B8:0776:0079:C8B6
 */
void f__B4B8_077D_004A_868A()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x4);
	if (!emu_flags.zf) { f__B4B8_0786_0041_8FC0(); return; }
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	if (!emu_flags.zf) { f__B4B8_0790_0037_2BC6(); return; }
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x11);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x079A; emu_last_cs = 0xB4B8; emu_last_ip = 0x0794; emu_last_length = 0x004A; emu_last_crc = 0x868A; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x21);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (!emu_flags.zf) { emu_ip = 0x07A4; emu_last_cs = 0xB4B8; emu_last_ip = 0x079E; emu_last_length = 0x004A; emu_last_crc = 0x868A; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x31);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x07AE; emu_last_cs = 0xB4B8; emu_last_ip = 0x07A8; emu_last_length = 0x004A; emu_last_crc = 0x868A; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x41);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07C7; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C2; emu_last_length = 0x004A; emu_last_crc = 0x868A; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0625; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C4; emu_last_length = 0x004A; emu_last_crc = 0x868A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_0786_0041_8FC0()
 *
 * @name f__B4B8_0786_0041_8FC0
 * @implements B4B8:0786:0041:8FC0 ()
 *
 * Called From: B4B8:0781:0085:8E26
 * Called From: B4B8:0781:006D:60B2
 * Called From: B4B8:0781:004A:868A
 * Called From: B4B8:0781:0055:D6CA
 * Called From: B4B8:0781:0079:C8B6
 * Called From: B4B8:0781:0061:D0E0
 */
void f__B4B8_0786_0041_8FC0()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	if (!emu_flags.zf) { f__B4B8_0790_0037_2BC6(); return; }
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x11);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x6);
	if (!emu_flags.zf) { f__B4B8_079A_002D_2A23(); return; }
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x21);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (!emu_flags.zf) { emu_ip = 0x07A4; emu_last_cs = 0xB4B8; emu_last_ip = 0x079E; emu_last_length = 0x0041; emu_last_crc = 0x8FC0; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x31);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x07AE; emu_last_cs = 0xB4B8; emu_last_ip = 0x07A8; emu_last_length = 0x0041; emu_last_crc = 0x8FC0; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x41);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07C7; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C2; emu_last_length = 0x0041; emu_last_crc = 0x8FC0; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0625; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C4; emu_last_length = 0x0041; emu_last_crc = 0x8FC0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_0790_0037_2BC6()
 *
 * @name f__B4B8_0790_0037_2BC6
 * @implements B4B8:0790:0037:2BC6 ()
 *
 * Called From: B4B8:078A:0041:8FC0
 * Called From: B4B8:078A:004A:868A
 */
void f__B4B8_0790_0037_2BC6()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x6);
	if (!emu_flags.zf) { f__B4B8_079A_002D_2A23(); return; }
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x21);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (!emu_flags.zf) { f__B4B8_07A4_0023_6A63(); return; }
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x31);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x9);
	if (!emu_flags.zf) { emu_ip = 0x07AE; emu_last_cs = 0xB4B8; emu_last_ip = 0x07A8; emu_last_length = 0x0037; emu_last_crc = 0x2BC6; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x41);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07C7; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C2; emu_last_length = 0x0037; emu_last_crc = 0x2BC6; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0625; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C4; emu_last_length = 0x0037; emu_last_crc = 0x2BC6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_079A_002D_2A23()
 *
 * @name f__B4B8_079A_002D_2A23
 * @implements B4B8:079A:002D:2A23 ()
 *
 * Called From: B4B8:0794:0037:2BC6
 * Called From: B4B8:0794:0041:8FC0
 */
void f__B4B8_079A_002D_2A23()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (!emu_flags.zf) { f__B4B8_07A4_0023_6A63(); return; }
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x31);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x9);
	if (!emu_flags.zf) { f__B4B8_07AE_0019_BA73(); return; }
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x41);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07C7; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C2; emu_last_length = 0x002D; emu_last_crc = 0x2A23; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0625; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C4; emu_last_length = 0x002D; emu_last_crc = 0x2A23; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_07A4_0023_6A63()
 *
 * @name f__B4B8_07A4_0023_6A63
 * @implements B4B8:07A4:0023:6A63 ()
 *
 * Called From: B4B8:079E:002D:2A23
 * Called From: B4B8:079E:0037:2BC6
 */
void f__B4B8_07A4_0023_6A63()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x9);
	if (!emu_flags.zf) { f__B4B8_07AE_0019_BA73(); return; }
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x41);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07C7; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C2; emu_last_length = 0x0023; emu_last_crc = 0x6A63; emu_call(); return; } // Jump does not resolve
	f__B4B8_0625_00CD_A1F4(); return;
}

/**
 * Decompiled function f__B4B8_07AE_0019_BA73()
 *
 * @name f__B4B8_07AE_0019_BA73
 * @implements B4B8:07AE:0019:BA73 ()
 *
 * Called From: B4B8:07A8:0023:6A63
 * Called From: B4B8:07A8:002D:2A23
 */
void f__B4B8_07AE_0019_BA73()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x4);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_07C7_000C_023F(); return; }
	f__B4B8_0625_00CD_A1F4(); return;
}

/**
 * Decompiled function f__B4B8_07BE_0009_1C5D()
 *
 * @name f__B4B8_07BE_0009_1C5D
 * @implements B4B8:07BE:0009:1C5D ()
 *
 * Called From: B4B8:0622:002E:11F8
 */
void f__B4B8_07BE_0009_1C5D()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07C7; emu_last_cs = 0xB4B8; emu_last_ip = 0x07C2; emu_last_length = 0x0009; emu_last_crc = 0x1C5D; emu_call(); return; } // Jump does not resolve
	f__B4B8_0625_00CD_A1F4(); return;
}

/**
 * Decompiled function f__B4B8_07C7_000C_023F()
 *
 * @name f__B4B8_07C7_000C_023F
 * @implements B4B8:07C7:000C:023F ()
 *
 * Called From: B4B8:07C2:0019:BA73
 */
void f__B4B8_07C7_000C_023F()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_07D3_001E_6A36(); return; }
	f__B4B8_05D8_0015_FD53(); return;
}

/**
 * Decompiled function f__B4B8_07CA_0009_1A31()
 *
 * @name f__B4B8_07CA_0009_1A31
 * @implements B4B8:07CA:0009:1A31 ()
 *
 * Called From: B4B8:05D5:002E:13D4
 */
void f__B4B8_07CA_0009_1A31()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x07D3; emu_last_cs = 0xB4B8; emu_last_ip = 0x07CE; emu_last_length = 0x0009; emu_last_crc = 0x1A31; emu_call(); return; } // Jump does not resolve
	f__B4B8_05D8_0015_FD53(); return;
}

/**
 * Decompiled function f__B4B8_07D3_001E_6A36()
 *
 * @name f__B4B8_07D3_001E_6A36
 * @implements B4B8:07D3:001E:6A36 ()
 *
 * Called From: B4B8:07CE:000C:023F
 */
void f__B4B8_07D3_001E_6A36()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_shlw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x39F0));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_bx.x);
	emu_xorw(&emu_di, emu_di);
	f__B4B8_0861_000A_FB63(); return;
}

/**
 * Decompiled function f__B4B8_07F1_007A_C84B()
 *
 * @name f__B4B8_07F1_007A_C84B
 * @implements B4B8:07F1:007A:C84B ()
 *
 * Called From: B4B8:0865:000A:FB63
 * Called From: B4B8:0865:007A:C84B
 */
void f__B4B8_07F1_007A_C84B()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_dx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F2));
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_dx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), 0x1);
	emu_shlb(&emu_ax.l, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), emu_ax.l);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x0);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0x0);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_07F1_007A_C84B(); return; }
	emu_xorw(&emu_di, emu_di);
	f__B4B8_088D_000C_CB75(); return;
}

/**
 * Decompiled function f__B4B8_0861_000A_FB63()
 *
 * @name f__B4B8_0861_000A_FB63
 * @implements B4B8:0861:000A:FB63 ()
 *
 * Called From: B4B8:07EF:001E:6A36
 */
void f__B4B8_0861_000A_FB63()
{
	emu_cmpw(&emu_di, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_07F1_007A_C84B(); return; }
	emu_xorw(&emu_di, emu_di);
	emu_ip = 0x088D; emu_last_cs = 0xB4B8; emu_last_ip = 0x0869; emu_last_length = 0x000A; emu_last_crc = 0xFB63; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_086B_002E_63DA()
 *
 * @name f__B4B8_086B_002E_63DA
 * @implements B4B8:086B:002E:63DA ()
 *
 * Called From: B4B8:0891:000C:CB75
 * Called From: B4B8:0891:002E:63DA
 */
void f__B4B8_086B_002E_63DA()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_dx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_si, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_si,  0x0));
	emu_andw(&emu_dx.x, 0x1FF);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), emu_dx.x);
	emu_incw(&emu_di);
	emu_cmpw(&emu_di, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_086B_002E_63DA(); return; }
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
 * Decompiled function f__B4B8_088D_000C_CB75()
 *
 * @name f__B4B8_088D_000C_CB75
 * @implements B4B8:088D:000C:CB75 ()
 *
 * Called From: B4B8:0869:007A:C84B
 */
void f__B4B8_088D_000C_CB75()
{
	emu_cmpw(&emu_di, 0x1000);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_086B_002E_63DA(); return; }
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
 * Decompiled function f__B4B8_0899_002D_0CEC()
 *
 * @name f__B4B8_0899_002D_0CEC
 * @implements B4B8:0899:002D:0CEC ()
 *
 * Called From: B4B8:057F:001A:E371
 * Called From: B4B8:08D9:0016:7897
 */
void f__B4B8_0899_002D_0CEC()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_ax.x, 0x8);
	if (emu_flags.zf) { f__B4B8_08C6_0016_7897(); return; }
	emu_cmpw(&emu_ax.x, 0x9);
	if (emu_flags.zf) { f__B4B8_08E0_0008_CFBC(); return; }
	f__B4B8_098C_0024_65CE(); return;
}

/**
 * Decompiled function f__B4B8_08C6_0016_7897()
 *
 * @name f__B4B8_08C6_0016_7897
 * @implements B4B8:08C6:0016:7897 ()
 *
 * Called From: B4B8:08BC:002D:0CEC
 */
void f__B4B8_08C6_0016_7897()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x9);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x08DC); f__B4B8_0899_002D_0CEC();
	f__B4B8_08DC_0004_0198();
}

/**
 * Decompiled function f__B4B8_08DC_0004_0198()
 *
 * @name f__B4B8_08DC_0004_0198
 * @implements B4B8:08DC:0004:0198 ()
 *
 * Called From: B4B8:08DC:0016:7897
 */
void f__B4B8_08DC_0004_0198()
{
	emu_pop(&emu_cx.x);
	f__B4B8_09B0_0006_137A(); return;
}

/**
 * Decompiled function f__B4B8_08E0_0008_CFBC()
 *
 * @name f__B4B8_08E0_0008_CFBC
 * @implements B4B8:08E0:0008:CFBC ()
 *
 * Called From: B4B8:08C1:002D:0CEC
 */
void f__B4B8_08E0_0008_CFBC()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFFFF);
	f__B4B8_0981_0009_0D5F(); return;
}

/**
 * Decompiled function f__B4B8_08E8_0008_CE4C()
 *
 * @name f__B4B8_08E8_0008_CE4C
 * @implements B4B8:08E8:0008:CE4C ()
 *
 * Called From: B4B8:0987:0009:0D5F
 * Called From: B4B8:0987:000C:2551
 */
void f__B4B8_08E8_0008_CE4C()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFFFF);
	f__B4B8_0975_0009_0EEF(); return;
}

/**
 * Decompiled function f__B4B8_08F0_0006_056A()
 *
 * @name f__B4B8_08F0_0006_056A
 * @implements B4B8:08F0:0006:056A ()
 *
 * Called From: B4B8:097B:0009:0EEF
 * Called From: B4B8:097B:002F:EBE9
 * Called From: B4B8:097B:000C:3EE1
 */
void f__B4B8_08F0_0006_056A()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x08F6); emu_cs = 0x0F3F; f__0F3F_0335_0015_8E86();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_08F6_000B_9E18();
}

/**
 * Decompiled function f__B4B8_08F6_000B_9E18()
 *
 * @name f__B4B8_08F6_000B_9E18
 * @implements B4B8:08F6:000B:9E18 ()
 *
 * Called From: B4B8:08F6:0006:056A
 */
void f__B4B8_08F6_000B_9E18()
{
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0901); emu_cs = 0x0F3F; f__0F3F_0322_0011_0960();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0901_000A_597B();
}

/**
 * Decompiled function f__B4B8_0901_000A_597B()
 *
 * @name f__B4B8_0901_000A_597B
 * @implements B4B8:0901:000A:597B ()
 *
 * Called From: B4B8:0901:000B:9E18
 */
void f__B4B8_0901_000A_597B()
{
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x090B); emu_cs = 0x0F3F; f__0F3F_034C_0012_91EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_090B_0044_60EC();
}

/**
 * Decompiled function f__B4B8_090B_0044_60EC()
 *
 * @name f__B4B8_090B_0044_60EC
 * @implements B4B8:090B:0044:60EC ()
 *
 * Called From: B4B8:090B:000A:597B
 */
void f__B4B8_090B_0044_60EC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_0972_000C_3EE1(); return; }
	emu_cmpw(&emu_di, 0x1000);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_0972_000C_3EE1(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x3A50));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__B4B8_094F_002F_EBE9(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x8);
	f__B4B8_0972_000C_3EE1(); return;
}

/**
 * Decompiled function f__B4B8_094F_002F_EBE9()
 *
 * @name f__B4B8_094F_002F_EBE9
 * @implements B4B8:094F:002F:EBE9 ()
 *
 * Called From: B4B8:093A:0044:60EC
 */
void f__B4B8_094F_002F_EBE9()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x9);
	if (emu_flags.zf) { f__B4B8_0972_000C_3EE1(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x8);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_097E_000C_2551(); return; }
	f__B4B8_08F0_0006_056A(); return;
}

/**
 * Decompiled function f__B4B8_0972_000C_3EE1()
 *
 * @name f__B4B8_0972_000C_3EE1
 * @implements B4B8:0972:000C:3EE1 ()
 *
 * Called From: B4B8:0911:0044:60EC
 * Called From: B4B8:0917:0044:60EC
 * Called From: B4B8:094D:0044:60EC
 * Called From: B4B8:095F:002F:EBE9
 */
void f__B4B8_0972_000C_3EE1()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_097E_000C_2551(); return; }
	f__B4B8_08F0_0006_056A(); return;
}

/**
 * Decompiled function f__B4B8_0975_0009_0EEF()
 *
 * @name f__B4B8_0975_0009_0EEF
 * @implements B4B8:0975:0009:0EEF ()
 *
 * Called From: B4B8:08ED:0008:CE4C
 */
void f__B4B8_0975_0009_0EEF()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x097E; emu_last_cs = 0xB4B8; emu_last_ip = 0x0979; emu_last_length = 0x0009; emu_last_crc = 0x0EEF; emu_call(); return; } // Jump does not resolve
	f__B4B8_08F0_0006_056A(); return;
}

/**
 * Decompiled function f__B4B8_097E_000C_2551()
 *
 * @name f__B4B8_097E_000C_2551
 * @implements B4B8:097E:000C:2551 ()
 *
 * Called From: B4B8:0979:002F:EBE9
 * Called From: B4B8:0979:000C:3EE1
 */
void f__B4B8_097E_000C_2551()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_098A_0002_03E4(); return; }
	f__B4B8_08E8_0008_CE4C(); return;
}

/**
 * Decompiled function f__B4B8_0981_0009_0D5F()
 *
 * @name f__B4B8_0981_0009_0D5F
 * @implements B4B8:0981:0009:0D5F ()
 *
 * Called From: B4B8:08E5:0008:CFBC
 */
void f__B4B8_0981_0009_0D5F()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x098A; emu_last_cs = 0xB4B8; emu_last_ip = 0x0985; emu_last_length = 0x0009; emu_last_crc = 0x0D5F; emu_call(); return; } // Jump does not resolve
	f__B4B8_08E8_0008_CE4C(); return;
}

/**
 * Decompiled function f__B4B8_098A_0002_03E4()
 *
 * @name f__B4B8_098A_0002_03E4
 * @implements B4B8:098A:0002:03E4 ()
 *
 * Called From: B4B8:0985:000C:2551
 */
void f__B4B8_098A_0002_03E4()
{
	f__B4B8_09B0_0006_137A(); return;
}

/**
 * Decompiled function f__B4B8_098C_0024_65CE()
 *
 * @name f__B4B8_098C_0024_65CE
 * @implements B4B8:098C:0024:65CE ()
 *
 * Called From: B4B8:08C3:002D:0CEC
 */
void f__B4B8_098C_0024_65CE()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x3A50), 0x0);
	if (emu_flags.zf) { f__B4B8_09AE_0002_03AC(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x8);
	f__B4B8_09B0_0006_137A(); return;
}

/**
 * Decompiled function f__B4B8_09AE_0002_03AC()
 *
 * @name f__B4B8_09AE_0002_03AC
 * @implements B4B8:09AE:0002:03AC ()
 *
 * Called From: B4B8:099B:0024:65CE
 */
void f__B4B8_09AE_0002_03AC()
{
	f__B4B8_09B0_0006_137A(); return;
}

/**
 * Decompiled function f__B4B8_09B0_0006_137A()
 *
 * @name f__B4B8_09B0_0006_137A
 * @implements B4B8:09B0:0006:137A ()
 *
 * Called From: B4B8:08DD:0004:0198
 * Called From: B4B8:098A:0002:03E4
 * Called From: B4B8:09AE:0024:65CE
 * Called From: B4B8:09AE:0002:03AC
 */
void f__B4B8_09B0_0006_137A()
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
 * Decompiled function f__B4B8_09B6_0013_B3A6()
 *
 * @name f__B4B8_09B6_0013_B3A6
 * @implements B4B8:09B6:0013:B3A6 ()
 *
 * Called From: B4B8:0229:0031:E03A
 * Called From: B4B8:024F:0026:6B78
 */
void f__B4B8_09B6_0013_B3A6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_si, 0x3F);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x09C9); emu_cs = 0x0F3F; f__0F3F_034C_0012_91EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_09C9_0004_04F4();
}

/**
 * Decompiled function f__B4B8_09C9_0004_04F4()
 *
 * @name f__B4B8_09C9_0004_04F4
 * @implements B4B8:09C9:0004:04F4 ()
 *
 * Called From: B4B8:09C9:0013:B3A6
 */
void f__B4B8_09C9_0004_04F4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__B4B8_09CD_0003_0212(); return;
}

/**
 * Decompiled function f__B4B8_09CD_0003_0212()
 *
 * @name f__B4B8_09CD_0003_0212
 * @implements B4B8:09CD:0003:0212 ()
 *
 * Called From: B4B8:09CB:0004:04F4
 */
void f__B4B8_09CD_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_09D0_0012_D036()
 *
 * @name f__B4B8_09D0_0012_D036
 * @implements B4B8:09D0:0012:D036 ()
 *
 * Called From: B4B8:0E89:0034:1E58
 */
void f__B4B8_09D0_0012_D036()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x0A1A; emu_last_cs = 0xB4B8; emu_last_ip = 0x09DC; emu_last_length = 0x0012; emu_last_crc = 0xD036; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	f__B4B8_0A14_000A_F9F9(); return;
}

/**
 * Decompiled function f__B4B8_09E2_003C_6072()
 *
 * @name f__B4B8_09E2_003C_6072
 * @implements B4B8:09E2:003C:6072 ()
 *
 * Called From: B4B8:0A18:000A:F9F9
 * Called From: B4B8:0A18:003C:6072
 */
void f__B4B8_09E2_003C_6072()
{
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x10);
	emu_andw(&emu_ax.x, 0xE0);
	emu_movb(&emu_cx.l, 0x5);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x8);
	emu_andw(&emu_ax.x, 0xF0);
	emu_movb(&emu_cx.l, 0x4);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_orb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_dx.x, 0x100);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_09E2_003C_6072(); return; }
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_0A14_000A_F9F9()
 *
 * @name f__B4B8_0A14_000A_F9F9
 * @implements B4B8:0A14:000A:F9F9 ()
 *
 * Called From: B4B8:09E0:0012:D036
 */
void f__B4B8_0A14_000A_F9F9()
{
	emu_cmpw(&emu_dx.x, 0x100);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_09E2_003C_6072(); return; }
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_0A1E_001A_11DB()
 *
 * @name f__B4B8_0A1E_001A_11DB
 * @implements B4B8:0A1E:001A:11DB ()
 *
 * Called From: 34B8:0034:0005:1C48
 * Called From: 34B8:0034:0005:1C5C
 * Called From: 34B8:0034:0005:1D00
 * Called From: 34B8:0034:0005:1D76
 * Called From: 34B8:0034:0005:1D7A
 * Called From: 34B8:0034:0005:1D92
 * Called From: 34B8:0034:0005:1DF0
 * Called From: 34B8:0034:0005:1E24
 * Called From: 34B8:0034:0005:1F00
 * Called From: 34B8:0034:0005:1F4A
 * Called From: 34B8:0034:0005:1D1C
 * Called From: B4B8:19FF:0013:2F0E
 * Called From: B4B8:1D4A:0013:2C02
 */
void f__B4B8_0A1E_001A_11DB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x1E);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_push(emu_ss);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x216B);
	emu_push(emu_ds);
	emu_push(emu_ax.x);
	emu_movw(&emu_cx.x, 0xC);
	emu_push(emu_cs); emu_push(0x0A38); emu_cs = 0x01F7; f__01F7_03C9_001C_6AB6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0A38_0014_F0BE();
}

/**
 * Decompiled function f__B4B8_0A38_0014_F0BE()
 *
 * @name f__B4B8_0A38_0014_F0BE
 * @implements B4B8:0A38:0014:F0BE ()
 *
 * Called From: B4B8:0A38:001A:11DB
 */
void f__B4B8_0A38_0014_F0BE()
{
	emu_movw(&emu_di, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_cmpws(&emu_di, 0xFF);
	if (!emu_flags.zf) { f__B4B8_0A44_0008_D5A2(); return; }
	emu_movw(&emu_di, 0x1);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0A4C); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0A4C_0023_5538();
}

/**
 * Decompiled function f__B4B8_0A44_0008_D5A2()
 *
 * @name f__B4B8_0A44_0008_D5A2
 * @implements B4B8:0A44:0008:D5A2 ()
 *
 * Called From: B4B8:0A3F:0014:F0BE
 */
void f__B4B8_0A44_0008_D5A2()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0A4C); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0A4C_0023_5538();
}

/**
 * Decompiled function f__B4B8_0A4C_0023_5538()
 *
 * @name f__B4B8_0A4C_0023_5538
 * @implements B4B8:0A4C:0023:5538 ()
 *
 * Called From: B4B8:0A4C:0008:D5A2
 * Called From: B4B8:0A4C:0014:F0BE
 */
void f__B4B8_0A4C_0023_5538()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x1E);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	f__B4B8_0B3A_000C_B32F(); return;
}

/**
 * Decompiled function f__B4B8_0A6F_002B_483D()
 *
 * @name f__B4B8_0A6F_002B_483D
 * @implements B4B8:0A6F:002B:483D ()
 *
 * Called From: B4B8:0B43:000C:B32F
 * Called From: B4B8:0B43:0024:475A
 */
void f__B4B8_0A6F_002B_483D()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x9939);
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, emu_bx.x,  0x37F8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0A9A); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0A9A_0012_A595();
}

/**
 * Decompiled function f__B4B8_0A9A_0012_A595()
 *
 * @name f__B4B8_0A9A_0012_A595
 * @implements B4B8:0A9A:0012:A595 ()
 *
 * Called From: B4B8:0A9A:002B:483D
 */
void f__B4B8_0A9A_0012_A595()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x2E);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0AAC); emu_cs = 0x01F7; f__01F7_3889_0033_9299();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0AAC_0012_BB93();
}

/**
 * Decompiled function f__B4B8_0AAC_0012_BB93()
 *
 * @name f__B4B8_0AAC_0012_BB93
 * @implements B4B8:0AAC:0012:BB93 ()
 *
 * Called From: B4B8:0AAC:0012:A595
 */
void f__B4B8_0AAC_0012_BB93()
{
	emu_addws(&emu_sp, 0x6);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__B4B8_0AC6_0018_612D(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0ABE); emu_cs = 0x0642; f__0642_075D_0011_56FC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0ABE_0020_ED7B();
}

/**
 * Decompiled function f__B4B8_0ABE_0020_ED7B()
 *
 * @name f__B4B8_0ABE_0020_ED7B
 * @implements B4B8:0ABE:0020:ED7B ()
 *
 * Called From: B4B8:0ABE:0012:BB93
 */
void f__B4B8_0ABE_0020_ED7B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xFDE8);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0ADE); emu_cs = 0x253D; f__253D_0000_0013_AAD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0ADE_0016_8837();
}

/**
 * Decompiled function f__B4B8_0AC6_0018_612D()
 *
 * @name f__B4B8_0AC6_0018_612D
 * @implements B4B8:0AC6:0018:612D ()
 *
 * Called From: B4B8:0AB1:0012:BB93
 */
void f__B4B8_0AC6_0018_612D()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xFDE8);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0ADE); emu_cs = 0x253D; f__253D_0000_0013_AAD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0ADE_0016_8837();
}

/**
 * Decompiled function f__B4B8_0ADE_0016_8837()
 *
 * @name f__B4B8_0ADE_0016_8837
 * @implements B4B8:0ADE:0016:8837 ()
 *
 * Called From: B4B8:0ADE:0018:612D
 * Called From: B4B8:0ADE:0020:ED7B
 */
void f__B4B8_0ADE_0016_8837()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	f__B4B8_0B12_0010_E2BC(); return;
}

/**
 * Decompiled function f__B4B8_0AF4_000C_443C()
 *
 * @name f__B4B8_0AF4_000C_443C
 * @implements B4B8:0AF4:000C:443C ()
 *
 * Called From: B4B8:0B15:0010:E2BC
 * Called From: B4B8:0B15:0022:26C1
 */
void f__B4B8_0AF4_000C_443C()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0B00); emu_cs = 0x2903; f__2903_007A_0032_6B6A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0B00_0022_26C1();
}

/**
 * Decompiled function f__B4B8_0B00_0022_26C1()
 *
 * @name f__B4B8_0B00_0022_26C1
 * @implements B4B8:0B00:0022:26C1 ()
 *
 * Called From: B4B8:0B00:000C:443C
 */
void f__B4B8_0B00_0022_26C1()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x4);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_0AF4_000C_443C(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0B22); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0B22_0024_475A();
}

/**
 * Decompiled function f__B4B8_0B12_0010_E2BC()
 *
 * @name f__B4B8_0B12_0010_E2BC
 * @implements B4B8:0B12:0010:E2BC ()
 *
 * Called From: B4B8:0AF2:0016:8837
 */
void f__B4B8_0B12_0010_E2BC()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_0AF4_000C_443C(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0B22); emu_cs = 0x01F7; emu_ip = 0x44C7; emu_last_cs = 0xB4B8; emu_last_ip = 0x0B1D; emu_last_length = 0x0010; emu_last_crc = 0xE2BC; emu_call(); // Jump does not resolve
	f__B4B8_0B22_0024_475A();
}

/**
 * Decompiled function f__B4B8_0B22_0024_475A()
 *
 * @name f__B4B8_0B22_0024_475A
 * @implements B4B8:0B22:0024:475A ()
 *
 * Called From: B4B8:0B22:0022:26C1
 */
void f__B4B8_0B22_0024_475A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_adcw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4B8_0B46_000E_CCAF(); return; }
	f__B4B8_0A6F_002B_483D(); return;
}

/**
 * Decompiled function f__B4B8_0B3A_000C_B32F()
 *
 * @name f__B4B8_0B3A_000C_B32F
 * @implements B4B8:0B3A:000C:B32F ()
 *
 * Called From: B4B8:0A6C:0023:5538
 */
void f__B4B8_0B3A_000C_B32F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0B46; emu_last_cs = 0xB4B8; emu_last_ip = 0x0B41; emu_last_length = 0x000C; emu_last_crc = 0xB32F; emu_call(); return; } // Jump does not resolve
	f__B4B8_0A6F_002B_483D(); return;
}

/**
 * Decompiled function f__B4B8_0B46_000E_CCAF()
 *
 * @name f__B4B8_0B46_000E_CCAF
 * @implements B4B8:0B46:000E:CCAF ()
 *
 * Called From: B4B8:0B41:0024:475A
 */
void f__B4B8_0B46_000E_CCAF()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4B8_0B54_0005_1450(); return; }
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { f__B4B8_0B86_0005_12D0(); return; }
	f__B4B8_0BB9_0002_03AC(); return;
}

/**
 * Decompiled function f__B4B8_0B54_0005_1450()
 *
 * @name f__B4B8_0B54_0005_1450
 * @implements B4B8:0B54:0005:1450 ()
 *
 * Called From: B4B8:0B4B:000E:CCAF
 */
void f__B4B8_0B54_0005_1450()
{
	emu_movw(&emu_si, 0x7);
	f__B4B8_0B7F_0007_7DEE(); return;
}

/**
 * Decompiled function f__B4B8_0B59_0022_06FC()
 *
 * @name f__B4B8_0B59_0022_06FC
 * @implements B4B8:0B59:0022:06FC ()
 *
 * Called From: B4B8:0B82:0007:7DEE
 * Called From: B4B8:0B82:000B:23E9
 */
void f__B4B8_0B59_0022_06FC()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C42));
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x440));
	emu_push(emu_cs); emu_push(0x0B7B); emu_cs = 0x2BB6; f__2BB6_000C_0043_A7B4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0B7B_000B_23E9();
}

/**
 * Decompiled function f__B4B8_0B7B_000B_23E9()
 *
 * @name f__B4B8_0B7B_000B_23E9
 * @implements B4B8:0B7B:000B:23E9 ()
 *
 * Called From: B4B8:0B7B:0022:06FC
 */
void f__B4B8_0B7B_000B_23E9()
{
	emu_addws(&emu_sp, 0x8);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0xB);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_0B59_0022_06FC(); return; }
	f__B4B8_0BBB_0006_137A(); return;
}

/**
 * Decompiled function f__B4B8_0B7F_0007_7DEE()
 *
 * @name f__B4B8_0B7F_0007_7DEE
 * @implements B4B8:0B7F:0007:7DEE ()
 *
 * Called From: B4B8:0B57:0005:1450
 */
void f__B4B8_0B7F_0007_7DEE()
{
	emu_cmpws(&emu_si, 0xB);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_0B59_0022_06FC(); return; }
	emu_ip = 0x0BBB; emu_last_cs = 0xB4B8; emu_last_ip = 0x0B84; emu_last_length = 0x0007; emu_last_crc = 0x7DEE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_0B86_0005_12D0()
 *
 * @name f__B4B8_0B86_0005_12D0
 * @implements B4B8:0B86:0005:12D0 ()
 *
 * Called From: B4B8:0B50:000E:CCAF
 */
void f__B4B8_0B86_0005_12D0()
{
	emu_movw(&emu_si, 0x6F);
	f__B4B8_0BB1_0008_DCE8(); return;
}

/**
 * Decompiled function f__B4B8_0B8B_0022_06FC()
 *
 * @name f__B4B8_0B8B_0022_06FC
 * @implements B4B8:0B8B:0022:06FC ()
 *
 * Called From: B4B8:0BB5:0008:DCE8
 * Called From: B4B8:0BB5:000C:60E6
 */
void f__B4B8_0B8B_0022_06FC()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C44));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C42));
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x440));
	emu_push(emu_cs); emu_push(0x0BAD); emu_cs = 0x2BB6; f__2BB6_000C_0043_A7B4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0BAD_000C_60E6();
}

/**
 * Decompiled function f__B4B8_0BAD_000C_60E6()
 *
 * @name f__B4B8_0BAD_000C_60E6
 * @implements B4B8:0BAD:000C:60E6 ()
 *
 * Called From: B4B8:0BAD:0022:06FC
 */
void f__B4B8_0BAD_000C_60E6()
{
	emu_addws(&emu_sp, 0x8);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x80);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_0B8B_0022_06FC(); return; }
	f__B4B8_0BBB_0006_137A(); return;
}

/**
 * Decompiled function f__B4B8_0BB1_0008_DCE8()
 *
 * @name f__B4B8_0BB1_0008_DCE8
 * @implements B4B8:0BB1:0008:DCE8 ()
 *
 * Called From: B4B8:0B89:0005:12D0
 */
void f__B4B8_0BB1_0008_DCE8()
{
	emu_cmpw(&emu_si, 0x80);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_0B8B_0022_06FC(); return; }
	emu_ip = 0x0BBB; emu_last_cs = 0xB4B8; emu_last_ip = 0x0BB7; emu_last_length = 0x0008; emu_last_crc = 0xDCE8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_0BB9_0002_03AC()
 *
 * @name f__B4B8_0BB9_0002_03AC
 * @implements B4B8:0BB9:0002:03AC ()
 *
 * Called From: B4B8:0B52:000E:CCAF
 */
void f__B4B8_0BB9_0002_03AC()
{
	f__B4B8_0BBB_0006_137A(); return;
}

/**
 * Decompiled function f__B4B8_0BBB_0006_137A()
 *
 * @name f__B4B8_0BBB_0006_137A
 * @implements B4B8:0BBB:0006:137A ()
 *
 * Called From: B4B8:0B84:000B:23E9
 * Called From: B4B8:0BB7:000C:60E6
 * Called From: B4B8:0BB9:0002:03AC
 */
void f__B4B8_0BBB_0006_137A()
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
 * Decompiled function f__B4B8_0BC1_000C_4B29()
 *
 * @name f__B4B8_0BC1_000C_4B29
 * @implements B4B8:0BC1:000C:4B29 ()
 *
 * Called From: B4B8:1A37:000B:419A
 */
void f__B4B8_0BC1_000C_4B29()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	f__B4B8_0D05_0019_9625(); return;
}

/**
 * Decompiled function f__B4B8_0BCD_008A_C992()
 *
 * @name f__B4B8_0BCD_008A_C992
 * @implements B4B8:0BCD:008A:C992 ()
 *
 * Called From: B4B8:0D1B:0019:9625
 * Called From: B4B8:0D1B:0024:611C
 */
void f__B4B8_0BCD_008A_C992()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E6B);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E6B);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E6B);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E6B);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E6B);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E6B);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E6B);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs);
	emu_push(0x0C57); f__B4B8_0ED9_001E_8D32();
	f__B4B8_0C57_00A3_F47A();
}

/**
 * Decompiled function f__B4B8_0C57_00A3_F47A()
 *
 * @name f__B4B8_0C57_00A3_F47A
 * @implements B4B8:0C57:00A3:F47A ()
 *
 * Called From: B4B8:0C57:008A:C992
 */
void f__B4B8_0C57_00A3_F47A()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E6B);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xA), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B8_0CAA_0050_19F2(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E6B);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x22), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E6B);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E6B);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x32), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x30), emu_dx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E6B);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_push(emu_cs); emu_push(0x0CFA); emu_cs = 0x348B; ovl__348B(6);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0CFA_0024_611C();
}

/**
 * Decompiled function f__B4B8_0CAA_0050_19F2()
 *
 * @name f__B4B8_0CAA_0050_19F2
 * @implements B4B8:0CAA:0050:19F2 ()
 *
 * Called From: B4B8:0C74:00A3:F47A
 */
void f__B4B8_0CAA_0050_19F2()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E6B);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x32), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x30), emu_dx.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E6B);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_push(emu_cs); emu_push(0x0CFA); emu_cs = 0x348B; ovl__348B(6);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0CFA_0024_611C();
}

/**
 * Decompiled function f__B4B8_0CFA_0024_611C()
 *
 * @name f__B4B8_0CFA_0024_611C
 * @implements B4B8:0CFA:0024:611C ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4B8:0CFA:0050:19F2
 * Called From: B4B8:0CFA:00A3:F47A
 */
void f__B4B8_0CFA_0024_611C()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3C28), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3C26), emu_ax.x);
	emu_incw(&emu_si);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E6B);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { f__B4B8_0D1E_0005_04BA(); return; }
	f__B4B8_0BCD_008A_C992(); return;
}

/**
 * Decompiled function f__B4B8_0D05_0019_9625()
 *
 * @name f__B4B8_0D05_0019_9625
 * @implements B4B8:0D05:0019:9625 ()
 *
 * Called From: B4B8:0BCA:000C:4B29
 */
void f__B4B8_0D05_0019_9625()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x18);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E6B);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x0D1E; emu_last_cs = 0xB4B8; emu_last_ip = 0x0D19; emu_last_length = 0x0019; emu_last_crc = 0x9625; emu_call(); return; } // Jump does not resolve
	f__B4B8_0BCD_008A_C992(); return;
}

/**
 * Decompiled function f__B4B8_0D1E_0005_04BA()
 *
 * @name f__B4B8_0D1E_0005_04BA
 * @implements B4B8:0D1E:0005:04BA ()
 *
 * Called From: B4B8:0D19:0024:611C
 */
void f__B4B8_0D1E_0005_04BA()
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
 * Decompiled function f__B4B8_0D23_0010_7C11()
 *
 * @name f__B4B8_0D23_0010_7C11
 * @implements B4B8:0D23:0010:7C11 ()
 *
 * Called From: 34B8:0039:0005:1DFE
 * Called From: 34B8:0039:0005:1CA2
 * Called From: 34B8:0039:0005:1F0E
 * Called From: 34B8:0039:0005:1CE8
 * Called From: 34B8:0039:0005:1E92
 * Called From: 34B8:0039:0005:1DCC
 * Called From: 34B8:0039:0005:1F38
 * Called From: B4B8:21DF:0004:0772
 */
void f__B4B8_0D23_0010_7C11()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x2177), 0x0);
	if (emu_flags.zf) { f__B4B8_0D33_000F_8ACD(); return; }
	f__B4B8_0ECA_0004_0F7A(); return;
}

/**
 * Decompiled function f__B4B8_0D33_000F_8ACD()
 *
 * @name f__B4B8_0D33_000F_8ACD
 * @implements B4B8:0D33:000F:8ACD ()
 *
 * Called From: B4B8:0D2E:0010:7C11
 */
void f__B4B8_0D33_000F_8ACD()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2177), 0x1);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D42); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0D42_0025_A6D8();
}

/**
 * Decompiled function f__B4B8_0D42_0025_A6D8()
 *
 * @name f__B4B8_0D42_0025_A6D8
 * @implements B4B8:0D42:0025:A6D8 ()
 *
 * Called From: B4B8:0D42:000F:8ACD
 */
void f__B4B8_0D42_0025_A6D8()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6116), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6114), 0x0);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x223E);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D67); emu_cs = 0x1587; f__1587_0008_0012_EC72();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0D67_0056_D8D9();
}

/**
 * Decompiled function f__B4B8_0D67_0056_D8D9()
 *
 * @name f__B4B8_0D67_0056_D8D9
 * @implements B4B8:0D67:0056:D8D9 ()
 *
 * Called From: B4B8:0D67:0025:A6D8
 */
void f__B4B8_0D67_0056_D8D9()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6114));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6116));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38D0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38CE), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6CE9));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6CE7));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x6114));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x6116));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38D4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38D2), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38D0));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38CE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39F0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39EE), emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38D4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38D2));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39F0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2247);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0DBD); emu_cs = 0x253D; f__253D_0000_0013_AAD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0DBD_009B_53DA();
}

/**
 * Decompiled function f__B4B8_0DBD_009B_53DA()
 *
 * @name f__B4B8_0DBD_009B_53DA
 * @implements B4B8:0DBD:009B:53DA ()
 *
 * Called From: B4B8:0DBD:0056:D8D9
 */
void f__B4B8_0DBD_009B_53DA()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39F2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39F4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39F8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39F6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EE));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39FA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_get_memory16(emu_ds, 0x00,  0x38D2), emu_dx.x);
	emu_sbbw(&emu_get_memory16(emu_ds, 0x00,  0x38D4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_get_memory16(emu_ds, 0x00,  0x38CE), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38D0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38CE));
	emu_push(emu_cs); emu_push(0x0E58); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0E58_0034_1E58();
}

/**
 * Decompiled function f__B4B8_0E58_0034_1E58()
 *
 * @name f__B4B8_0E58_0034_1E58
 * @implements B4B8:0E58:0034:1E58 ()
 *
 * Called From: B4B8:0E58:009B:53DA
 */
void f__B4B8_0E58_0034_1E58()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38D0), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38CE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38D0));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38CE));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3954), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3952), emu_dx.x);
	emu_subw(&emu_get_memory16(emu_ds, 0x00,  0x38D2), 0x100);
	emu_sbbws(&emu_get_memory16(emu_ds, 0x00,  0x38D4), 0x0);
	emu_addw(&emu_get_memory16(emu_ds, 0x00,  0x38CE), 0x100);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3954));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3952));
	emu_push(emu_cs);
	emu_push(0x0E8C); f__B4B8_09D0_0012_D036();
	f__B4B8_0E8C_001E_DE89();
}

/**
 * Decompiled function f__B4B8_0E8C_001E_DE89()
 *
 * @name f__B4B8_0E8C_001E_DE89
 * @implements B4B8:0E8C:001E:DE89 ()
 *
 * Called From: B4B8:0E8C:0034:1E58
 */
void f__B4B8_0E8C_001E_DE89()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38D0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38CE));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x6168);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3902);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2250);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x0EAA); f__B4B8_2295_0018_F006();
	f__B4B8_0EAA_0024_CC0B();
}

/**
 * Decompiled function f__B4B8_0EAA_0024_CC0B()
 *
 * @name f__B4B8_0EAA_0024_CC0B
 * @implements B4B8:0EAA:0024:CC0B ()
 *
 * Called From: B4B8:0EAA:001E:DE89
 */
void f__B4B8_0EAA_0024_CC0B()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_get_memory16(emu_ds, 0x00,  0x38D2), emu_dx.x);
	emu_sbbw(&emu_get_memory16(emu_ds, 0x00,  0x38D4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_get_memory16(emu_ds, 0x00,  0x38CE), emu_ax.x);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_0ECA_0004_0F7A()
 *
 * @name f__B4B8_0ECA_0004_0F7A
 * @implements B4B8:0ECA:0004:0F7A ()
 *
 * Called From: B4B8:0D30:0010:7C11
 */
void f__B4B8_0ECA_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_0ECE_000B_8103()
 *
 * @name f__B4B8_0ECE_000B_8103
 * @implements B4B8:0ECE:000B:8103 ()
 *
 * Called From: 34B8:0025:0005:1216
 * Called From: 34B8:0025:0005:126A
 * Called From: 34B8:0025:0005:117C
 * Called From: 34B8:0025:0005:1354
 * Called From: 34B8:0025:0005:1056
 * Called From: 34B8:0025:0005:1020
 */
void f__B4B8_0ECE_000B_8103()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x2177), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_0ED9_001E_8D32()
 *
 * @name f__B4B8_0ED9_001E_8D32
 * @implements B4B8:0ED9:001E:8D32 ()
 *
 * Called From: 34B8:0020:0005:1018
 * Called From: 34B8:0020:0005:1028
 * Called From: 34B8:0020:0005:1126
 * Called From: 34B8:0020:0005:1162
 * Called From: 34B8:0020:0005:11C2
 * Called From: 34B8:0020:0005:1224
 * Called From: 34B8:0020:0005:12CA
 * Called From: 34B8:0020:0005:1316
 * Called From: 34B8:0020:0005:131A
 * Called From: 34B8:0020:0005:1366
 * Called From: 34B8:0020:0005:13D8
 * Called From: 34B8:0020:0005:114C
 * Called From: 34B8:0020:0005:11D4
 * Called From: 34B8:0020:0005:10B6
 * Called From: 34B8:0020:0005:1150
 * Called From: B4B8:0C54:008A:C992
 */
void f__B4B8_0ED9_001E_8D32()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x3C);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0EF7); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_0EF7_0094_C49A();
}

/**
 * Decompiled function f__B4B8_0EF7_0094_C49A()
 *
 * @name f__B4B8_0EF7_0094_C49A
 * @implements B4B8:0EF7:0094:C49A ()
 *
 * Called From: B4B8:0EF7:001E:8D32
 */
void f__B4B8_0EF7_0094_C49A()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1C), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x28), 0xB);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x29), 0xC);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x26), 0xF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x27), 0xC);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x44C5);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x38), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x3A), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1E), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x20), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_subws(&emu_bx.x, 0xFC);
	emu_cmpws(&emu_bx.x, 0x3);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4B8_0F8B_0007_5F7E(); return; }
	f__B4B8_1024_004D_0E9E(); return;
}

/**
 * Decompiled function f__B4B8_0F8B_0007_5F7E()
 *
 * @name f__B4B8_0F8B_0007_5F7E
 * @implements B4B8:0F8B:0007:5F7E ()
 *
 * Called From: B4B8:0F86:0094:C49A
 */
void f__B4B8_0F8B_0007_5F7E()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x1105);
	switch (emu_ip) {
		case 0x0F92: f__B4B8_0F92_001B_4C3F(); return;
		case 0x0FAD: f__B4B8_0FAD_000C_6F4B(); return;
		case 0x0FB9: f__B4B8_0FB9_0020_8F66(); return;
		case 0x100C: f__B4B8_100C_0018_66FE(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4B8; emu_last_ip = 0x0F8D; emu_last_length = 0x0007; emu_last_crc = 0x5F7E;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4B8_0F92_001B_4C3F()
 *
 * @name f__B4B8_0F92_001B_4C3F
 * @implements B4B8:0F92:001B:4C3F ()
 *
 * Called From: B4B8:0F8D:0007:5F7E
 */
void f__B4B8_0F92_001B_4C3F()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	f__B4B8_1090_006F_AB1F(); return;
}

/**
 * Decompiled function f__B4B8_0FAD_000C_6F4B()
 *
 * @name f__B4B8_0FAD_000C_6F4B
 * @implements B4B8:0FAD:000C:6F4B ()
 *
 * Called From: B4B8:0F8D:0007:5F7E
 */
void f__B4B8_0FAD_000C_6F4B()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x4);
	emu_movw(&emu_ax.x, 0xAEC);
	emu_movw(&emu_dx.x, 0xE3E);
	f__B4B8_1016_000E_B0A5(); return;
}

/**
 * Decompiled function f__B4B8_0FB9_0020_8F66()
 *
 * @name f__B4B8_0FB9_0020_8F66
 * @implements B4B8:0FB9:0020:8F66 ()
 *
 * Called From: B4B8:0F8D:0007:5F7E
 */
void f__B4B8_0FB9_0020_8F66()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x4);
	emu_movw(&emu_ax.x, 0xAEC);
	emu_movw(&emu_dx.x, 0x809);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__B4B8_1009_0003_0558(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0FD9); emu_cs = 0x0FCB; emu_ip = 0x1038; emu_last_cs = 0xB4B8; emu_last_ip = 0x0FD4; emu_last_length = 0x0020; emu_last_crc = 0x8F66; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4B8_1009_0003_0558()
 *
 * @name f__B4B8_1009_0003_0558
 * @implements B4B8:1009:0003:0558 ()
 *
 * Called From: B4B8:0FD1:0020:8F66
 */
void f__B4B8_1009_0003_0558()
{
	f__B4B8_1090_006F_AB1F(); return;
}

/**
 * Decompiled function f__B4B8_100C_0018_66FE()
 *
 * @name f__B4B8_100C_0018_66FE
 * @implements B4B8:100C:0018:66FE ()
 *
 * Called From: B4B8:0F8D:0007:5F7E
 */
void f__B4B8_100C_0018_66FE()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x4);
	emu_movw(&emu_ax.x, 0xAEC);
	emu_movw(&emu_dx.x, 0xCA1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	f__B4B8_1090_006F_AB1F(); return;
}

/**
 * Decompiled function f__B4B8_1016_000E_B0A5()
 *
 * @name f__B4B8_1016_000E_B0A5
 * @implements B4B8:1016:000E:B0A5 ()
 *
 * Called From: B4B8:0FB7:000C:6F4B
 */
void f__B4B8_1016_000E_B0A5()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	f__B4B8_1090_006F_AB1F(); return;
}

/**
 * Decompiled function f__B4B8_1024_004D_0E9E()
 *
 * @name f__B4B8_1024_004D_0E9E
 * @implements B4B8:1024:004D:0E9E ()
 *
 * Called From: B4B8:0F88:0094:C49A
 */
void f__B4B8_1024_004D_0E9E()
{
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0x5), 0x1);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x442));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x440));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x446));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x444));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { emu_ip = 0x108E; emu_last_cs = 0xB4B8; emu_last_ip = 0x1064; emu_last_length = 0x004D; emu_last_crc = 0x0E9E; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x1071); emu_cs = 0x260F; f__260F_003A_0014_CDCF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1071_0014_BBC4();
}

/**
 * Decompiled function f__B4B8_1071_0014_BBC4()
 *
 * @name f__B4B8_1071_0014_BBC4
 * @implements B4B8:1071:0014:BBC4 ()
 *
 * Called From: B4B8:1071:004D:0E9E
 */
void f__B4B8_1071_0014_BBC4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x22), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x1085); emu_cs = 0x260F; f__260F_0054_0016_11EB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1085_000B_1A5E();
}

/**
 * Decompiled function f__B4B8_1085_000B_1A5E()
 *
 * @name f__B4B8_1085_000B_1A5E
 * @implements B4B8:1085:000B:1A5E ()
 *
 * Called From: B4B8:1085:0014:BBC4
 */
void f__B4B8_1085_000B_1A5E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x24), emu_ax.x);
	f__B4B8_1090_006F_AB1F(); return;
}

/**
 * Decompiled function f__B4B8_1090_006F_AB1F()
 *
 * @name f__B4B8_1090_006F_AB1F
 * @implements B4B8:1090:006F:AB1F ()
 *
 * Called From: B4B8:0FAA:001B:4C3F
 * Called From: B4B8:1009:0003:0558
 * Called From: B4B8:1022:000E:B0A5
 * Called From: B4B8:1022:0018:66FE
 * Called From: B4B8:108E:000B:1A5E
 */
void f__B4B8_1090_006F_AB1F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x5));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x5));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xC), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x5));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xA), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1A), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x18), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), emu_dx.x);
	emu_cmpws(&emu_di, 0x19);
	if (!emu_flags.zf) { f__B4B8_10F7_0008_8ECC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ip = 0x10FF; emu_last_cs = 0xB4B8; emu_last_ip = 0x10FD; emu_last_length = 0x006F; emu_last_crc = 0xAB1F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_10F7_0008_8ECC()
 *
 * @name f__B4B8_10F7_0008_8ECC
 * @implements B4B8:10F7:0008:8ECC ()
 *
 * Called From: B4B8:10E4:006F:AB1F
 */
void f__B4B8_10F7_0008_8ECC()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4B8_10FF_0006_137A(); return;
}

/**
 * Decompiled function f__B4B8_10FF_0006_137A()
 *
 * @name f__B4B8_10FF_0006_137A
 * @implements B4B8:10FF:0006:137A ()
 *
 * Called From: B4B8:10FD:0008:8ECC
 */
void f__B4B8_10FF_0006_137A()
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
 * Decompiled function f__B4B8_110D_000D_CCFE()
 *
 * @name f__B4B8_110D_000D_CCFE
 * @implements B4B8:110D:000D:CCFE ()
 *
 * Called From: 34B8:002F:0005:1DA0
 * Called From: 34B8:002F:0005:1EA2
 * Called From: B4B8:21E7:0008:EBB2
 */
void f__B4B8_110D_000D_CCFE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4B8_1164_000B_091E(); return;
}

/**
 * Decompiled function f__B4B8_111A_0055_D7E9()
 *
 * @name f__B4B8_111A_0055_D7E9
 * @implements B4B8:111A:0055:D7E9 ()
 *
 * Called From: B4B8:1169:000B:091E
 * Called From: B4B8:1169:000E:E926
 * Called From: B4B8:1169:0055:D7E9
 */
void f__B4B8_111A_0055_D7E9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3C42));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_bx.x, 0x10);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_bx.x, 0x10);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x9);
	if (!emu_flags.zf) { f__B4B8_1161_000E_E926(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x6);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B8_1161_000E_E926(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3C42));
	emu_addw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_addb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x4));
	emu_addb(&emu_ax.l, 0x90);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x100);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_111A_0055_D7E9(); return; }
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_1161_000E_E926()
 *
 * @name f__B4B8_1161_000E_E926
 * @implements B4B8:1161:000E:E926 ()
 *
 * Called From: B4B8:1143:0055:D7E9
 * Called From: B4B8:1149:0055:D7E9
 */
void f__B4B8_1161_000E_E926()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x100);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_111A_0055_D7E9(); return; }
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_1164_000B_091E()
 *
 * @name f__B4B8_1164_000B_091E
 * @implements B4B8:1164:000B:091E ()
 *
 * Called From: B4B8:1118:000D:CCFE
 */
void f__B4B8_1164_000B_091E()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x100);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_111A_0055_D7E9(); return; }
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4B8_116F_0013_0F60()
 *
 * @name f__B4B8_116F_0013_0F60
 * @implements B4B8:116F:0013:0F60 ()
 *
 * Called From: B4B8:17DE:0013:DF50
 */
void f__B4B8_116F_0013_0F60()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xA4);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4B8_1182_000B_EFD4(); return; }
	emu_ip = 0x16CE; emu_last_cs = 0xB4B8; emu_last_ip = 0x117F; emu_last_length = 0x0013; emu_last_crc = 0x0F60; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_1182_000B_EFD4()
 *
 * @name f__B4B8_1182_000B_EFD4
 * @implements B4B8:1182:000B:EFD4 ()
 *
 * Called From: B4B8:117D:0013:0F60
 */
void f__B4B8_1182_000B_EFD4()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x118D); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6875();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_118D_0009_D7B2();
}

/**
 * Decompiled function f__B4B8_118D_0009_D7B2()
 *
 * @name f__B4B8_118D_0009_D7B2
 * @implements B4B8:118D:0009:D7B2 ()
 *
 * Called From: B4B8:118D:000B:EFD4
 */
void f__B4B8_118D_0009_D7B2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x1196; emu_last_cs = 0xB4B8; emu_last_ip = 0x1191; emu_last_length = 0x0009; emu_last_crc = 0xD7B2; emu_call(); return; } // Jump does not resolve
	f__B4B8_16CE_0005_04BA(); return;
}

/**
 * Decompiled function f__B4B8_16CE_0005_04BA()
 *
 * @name f__B4B8_16CE_0005_04BA
 * @implements B4B8:16CE:0005:04BA ()
 *
 * Called From: B4B8:1193:0009:D7B2
 */
void f__B4B8_16CE_0005_04BA()
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
 * Decompiled function f__B4B8_16D3_0022_A27C()
 *
 * @name f__B4B8_16D3_0022_A27C
 * @implements B4B8:16D3:0022:A27C ()
 *
 * Called From: 34B8:002A:0005:137A
 */
void f__B4B8_16D3_0022_A27C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2C);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_si, 0x1C);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x16F5); emu_cs = 0x1FB5; f__1FB5_17D7_0018_B75E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_16F5_0017_79B3();
}

/**
 * Decompiled function f__B4B8_16F5_0017_79B3()
 *
 * @name f__B4B8_16F5_0017_79B3
 * @implements B4B8:16F5:0017:79B3 ()
 *
 * Called From: B4B8:16F5:0022:A27C
 */
void f__B4B8_16F5_0017_79B3()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x24);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2179);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x29E8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x170C); emu_cs = 0x01F7; f__01F7_28B8_0024_D407();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_170C_000C_AAAD();
}

/**
 * Decompiled function f__B4B8_170C_000C_AAAD()
 *
 * @name f__B4B8_170C_000C_AAAD
 * @implements B4B8:170C:000C:AAAD ()
 *
 * Called From: B4B8:170C:0017:79B3
 */
void f__B4B8_170C_000C_AAAD()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0xDEE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1718); emu_cs = 0x29E8; f__29E8_04EB_0011_D0DB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1718_000A_13DC();
}

/**
 * Decompiled function f__B4B8_1718_000A_13DC()
 *
 * @name f__B4B8_1718_000A_13DC
 * @implements B4B8:1718:000A:13DC ()
 *
 * Called From: B4B8:1718:000C:AAAD
 */
void f__B4B8_1718_000A_13DC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1722); emu_cs = 0x34E9; ovl__34E9(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1722_0042_8C6A();
}

/**
 * Decompiled function f__B4B8_1722_0042_8C6A()
 *
 * @name f__B4B8_1722_0042_8C6A
 * @implements B4B8:1722:0042:8C6A ()
 *
 * Called From: B4B8:1722:000A:13DC
 */
void f__B4B8_1722_0042_8C6A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B0), 0x1);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0xFFFF);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3B34), 0xD7);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3B36), 0x35);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3B50), 0xD8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3B52), 0x35);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A10), 0x0);
	emu_push(emu_cs); emu_push(0x1764); emu_cs = 0x3536; ovl__3536(3);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1764_0010_F7FF();
}

/**
 * Decompiled function f__B4B8_1764_0010_F7FF()
 *
 * @name f__B4B8_1764_0010_F7FF
 * @implements B4B8:1764:0010:F7FF ()
 *
 * Called From: B4B8:1764:0042:8C6A
 */
void f__B4B8_1764_0010_F7FF()
{
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1774); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1774_001A_3584();
}

/**
 * Decompiled function f__B4B8_1774_001A_3584()
 *
 * @name f__B4B8_1774_001A_3584
 * @implements B4B8:1774:001A:3584 ()
 *
 * Called From: B4B8:1774:0010:F7FF
 */
void f__B4B8_1774_001A_3584()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3C38), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3C36), emu_ax.x);
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x178E); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_178E_0019_9493();
}

/**
 * Decompiled function f__B4B8_178E_0019_9493()
 *
 * @name f__B4B8_178E_0019_9493
 * @implements B4B8:178E:0019:9493 ()
 *
 * Called From: B4B8:178E:001A:3584
 */
void f__B4B8_178E_0019_9493()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3C34), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3C32), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x100);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x17A7); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_17A7_0027_BCFE();
}

/**
 * Decompiled function f__B4B8_17A7_0027_BCFE()
 *
 * @name f__B4B8_17A7_0027_BCFE
 * @implements B4B8:17A7:0027:BCFE ()
 *
 * Called From: B4B8:17A7:0019:9493
 */
void f__B4B8_17A7_0027_BCFE()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3C44), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3C42), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DE), 0x2EE0);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_push(emu_cs); emu_push(0x17CE); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_17CE_0013_DF50();
}

/**
 * Decompiled function f__B4B8_17CE_0013_DF50()
 *
 * @name f__B4B8_17CE_0013_DF50
 * @implements B4B8:17CE:0013:DF50 ()
 *
 * Called From: B4B8:17CE:0027:BCFE
 */
void f__B4B8_17CE_0013_DF50()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DA), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x22B4);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x17E1); f__B4B8_116F_0013_0F60();
	f__B4B8_17E1_000F_F78B();
}

/**
 * Decompiled function f__B4B8_17E1_000F_F78B()
 *
 * @name f__B4B8_17E1_000F_F78B
 * @implements B4B8:17E1:000F:F78B ()
 *
 * Called From: B4B8:17E1:0013:DF50
 */
void f__B4B8_17E1_000F_F78B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_cs); emu_push(0x17F0); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_17F0_0027_2D50();
}

/**
 * Decompiled function f__B4B8_17F0_0027_2D50()
 *
 * @name f__B4B8_17F0_0027_2D50
 * @implements B4B8:17F0:0027:2D50 ()
 *
 * Called From: B4B8:17F0:000F:F78B
 */
void f__B4B8_17F0_0027_2D50()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DC), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DA), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x22C0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1817); emu_cs = 0x253D; f__253D_0000_0013_AAD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1817_001F_C7ED();
}

/**
 * Decompiled function f__B4B8_1817_001F_C7ED()
 *
 * @name f__B4B8_1817_001F_C7ED
 * @implements B4B8:1817:001F:C7ED ()
 *
 * Called From: B4B8:1817:0027:2D50
 */
void f__B4B8_1817_001F_C7ED()
{
	emu_addws(&emu_sp, 0xC);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x1836); emu_cs = 0x2B0E; f__2B0E_0006_0049_1E3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1836_000B_4727();
}

/**
 * Decompiled function f__B4B8_1836_000B_4727()
 *
 * @name f__B4B8_1836_000B_4727
 * @implements B4B8:1836:000B:4727 ()
 *
 * Called From: B4B8:1836:001F:C7ED
 */
void f__B4B8_1836_000B_4727()
{
	emu_addws(&emu_sp, 0xC);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1841); emu_cs = 0x24DA; f__24DA_0004_000E_98E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1841_0011_B0C7();
}

/**
 * Decompiled function f__B4B8_1841_0011_B0C7()
 *
 * @name f__B4B8_1841_0011_B0C7
 * @implements B4B8:1841:0011:B0C7 ()
 *
 * Called From: B4B8:1841:000B:4727
 */
void f__B4B8_1841_0011_B0C7()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_dx.x, &emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_movw(&emu_cx.x, 0x100);
	emu_xorw(&emu_bx.x, emu_bx.x);
	emu_movb(&emu_ax.l, 0x12);
	emu_movb(&emu_ax.h, 0x10);
	emu_pushf(); emu_flags.inf = 0; emu_push(emu_cs); emu_cs = 0x0070; emu_push(0x1852); f__0070_0080_0005_1D7E();
	f__B4B8_1852_000E_DB6F();
}

/**
 * Decompiled function f__B4B8_1852_000E_DB6F()
 *
 * @name f__B4B8_1852_000E_DB6F
 * @implements B4B8:1852:000E:DB6F ()
 *
 * Called From: B4B8:1852:0011:B0C7
 */
void f__B4B8_1852_000E_DB6F()
{
	emu_pop(&emu_es);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x1860); emu_cs = 0x259E; f__259E_0040_0015_2233();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1860_000F_B954();
}

/**
 * Decompiled function f__B4B8_1860_000F_B954()
 *
 * @name f__B4B8_1860_000F_B954
 * @implements B4B8:1860:000F:B954 ()
 *
 * Called From: B4B8:1860:000E:DB6F
 */
void f__B4B8_1860_000F_B954()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x186F); emu_cs = 0x259E; f__259E_0040_0015_2233();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_186F_0011_758D();
}

/**
 * Decompiled function f__B4B8_186F_0011_758D()
 *
 * @name f__B4B8_186F_0011_758D
 * @implements B4B8:186F:0011:758D ()
 *
 * Called From: B4B8:186F:000F:B954
 */
void f__B4B8_186F_0011_758D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x100);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1880); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1880_0019_9403();
}

/**
 * Decompiled function f__B4B8_1880_0019_9403()
 *
 * @name f__B4B8_1880_0019_9403
 * @implements B4B8:1880:0019:9403 ()
 *
 * Called From: B4B8:1880:0011:758D
 */
void f__B4B8_1880_0019_9403()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3C3C), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3C3A), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x100);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1899); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1899_002C_AA0C();
}

/**
 * Decompiled function f__B4B8_1899_002C_AA0C()
 *
 * @name f__B4B8_1899_002C_AA0C
 * @implements B4B8:1899:002C:AA0C ()
 *
 * Called From: B4B8:1899:0019:9403
 */
void f__B4B8_1899_002C_AA0C()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3C40), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3C3E), emu_ax.x);
	emu_movw(&emu_ax.x, 0x55);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C3C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C3A));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6638);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x663A);
	emu_push(0x18C5);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60597: f__22A6_0597_0019_4741(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4B8; emu_last_ip = 0x18C0; emu_last_length = 0x002C; emu_last_crc = 0xAA0C;
			emu_call();
			return;
	}
	f__B4B8_18C5_0025_9F63();
}

/**
 * Decompiled function f__B4B8_18C5_0025_9F63()
 *
 * @name f__B4B8_18C5_0025_9F63
 * @implements B4B8:18C5:0025:9F63 ()
 *
 * Called From: B4B8:18C5:002C:AA0C
 */
void f__B4B8_18C5_0025_9F63()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0x55);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C40));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C3E));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6638);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x663A);
	emu_push(0x18EA);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60597: f__22A6_0597_0019_4741(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4B8; emu_last_ip = 0x18E5; emu_last_length = 0x0025; emu_last_crc = 0x9F63;
			emu_call();
			return;
	}
	f__B4B8_18EA_004F_D135();
}

/**
 * Decompiled function f__B4B8_18EA_004F_D135()
 *
 * @name f__B4B8_18EA_004F_D135
 * @implements B4B8:18EA:004F:D135 ()
 *
 * Called From: B4B8:18EA:0025:9F63
 */
void f__B4B8_18EA_004F_D135()
{
	emu_addws(&emu_sp, 0xC);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3C3A));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xFF), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3C3A));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xDF), 0xDF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3C3A));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xEF), 0xEF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3C3E));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xFF), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3C3E));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xDF), 0xDF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3C3E));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xEF), 0xEF);
	emu_movw(&emu_ax.x, 0x30);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x5DC);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1939); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1939_001B_DD24();
}

/**
 * Decompiled function f__B4B8_1939_001B_DD24()
 *
 * @name f__B4B8_1939_001B_DD24
 * @implements B4B8:1939:001B:DD24 ()
 *
 * Called From: B4B8:1939:004F:D135
 */
void f__B4B8_1939_001B_DD24()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3C48), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3C46), emu_ax.x);
	emu_movw(&emu_ax.x, 0x5DC);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C48));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C46));
	emu_push(emu_cs); emu_push(0x1954); emu_cs = 0x2903; f__2903_090A_0019_A387();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1954_0010_B245();
}

/**
 * Decompiled function f__B4B8_1954_0010_B245()
 *
 * @name f__B4B8_1954_0010_B245
 * @implements B4B8:1954:0010:B245 ()
 *
 * Called From: B4B8:1954:001B:DD24
 */
void f__B4B8_1954_0010_B245()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x22C8);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1964); emu_cs = 0x0642; f__0642_075D_0011_56FC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1964_0009_CD5E();
}

/**
 * Decompiled function f__B4B8_1964_0009_CD5E()
 *
 * @name f__B4B8_1964_0009_CD5E
 * @implements B4B8:1964:0009:CD5E ()
 *
 * Called From: B4B8:1964:0010:B245
 */
void f__B4B8_1964_0009_CD5E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x196D); emu_cs = 0x253D; f__253D_008A_0016_A6D3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_196D_0017_FADC();
}

/**
 * Decompiled function f__B4B8_196D_0017_FADC()
 *
 * @name f__B4B8_196D_0017_FADC
 * @implements B4B8:196D:0017:FADC ()
 *
 * Called From: B4B8:196D:0009:CD5E
 */
void f__B4B8_196D_0017_FADC()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38C8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38C6), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B6), 0x2);
	if (!emu_flags.zf) { f__B4B8_1984_000A_C4FF(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x22D0);
	emu_ip = 0x1988; emu_last_cs = 0xB4B8; emu_last_ip = 0x1982; emu_last_length = 0x0017; emu_last_crc = 0xFADC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_1984_000A_C4FF()
 *
 * @name f__B4B8_1984_000A_C4FF
 * @implements B4B8:1984:000A:C4FF ()
 *
 * Called From: B4B8:197C:0017:FADC
 */
void f__B4B8_1984_000A_C4FF()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x22DB);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x198E); emu_cs = 0x256D; f__256D_0004_001C_37ED();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_198E_0031_25A1();
}

/**
 * Decompiled function f__B4B8_198E_0031_25A1()
 *
 * @name f__B4B8_198E_0031_25A1
 * @implements B4B8:198E:0031:25A1 ()
 *
 * Called From: B4B8:198E:000A:C4FF
 */
void f__B4B8_198E_0031_25A1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A2E), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A2C), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x660F));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x6611));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A32), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A30), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x6128);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x392E);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x22E5);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x19BF); f__B4B8_2295_0018_F006();
	f__B4B8_19BF_001D_4EE5();
}

/**
 * Decompiled function f__B4B8_19BF_001D_4EE5()
 *
 * @name f__B4B8_19BF_001D_4EE5
 * @implements B4B8:19BF:001D:4EE5 ()
 *
 * Called From: B4B8:19BF:0031:25A1
 */
void f__B4B8_19BF_001D_4EE5()
{
	emu_addws(&emu_sp, 0x10);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x33B6);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3918);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x22EA);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x19DC); f__B4B8_2295_0018_F006();
	f__B4B8_19DC_0012_72AA();
}

/**
 * Decompiled function f__B4B8_19DC_0012_72AA()
 *
 * @name f__B4B8_19DC_0012_72AA
 * @implements B4B8:19DC:0012:72AA ()
 *
 * Called From: B4B8:19DC:001D:4EE5
 */
void f__B4B8_19DC_0012_72AA()
{
	emu_addws(&emu_sp, 0x10);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0xFF);
	if (emu_flags.zf) { f__B4B8_19EF_0013_2F0E(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs);
	emu_push(0x19EE); emu_ip = 0x110D; emu_last_cs = 0xB4B8; emu_last_ip = 0x19EB; emu_last_length = 0x0012; emu_last_crc = 0x72AA; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4B8_19EF_0013_2F0E()
 *
 * @name f__B4B8_19EF_0013_2F0E
 * @implements B4B8:19EF:0013:2F0E ()
 *
 * Called From: B4B8:19E4:0012:72AA
 */
void f__B4B8_19EF_0013_2F0E()
{
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1A02); f__B4B8_0A1E_001A_11DB();
	f__B4B8_1A02_0023_470D();
}

/**
 * Decompiled function f__B4B8_1A02_0023_470D()
 *
 * @name f__B4B8_1A02_0023_470D
 * @implements B4B8:1A02:0023:470D ()
 *
 * Called From: B4B8:1A02:0013:2F0E
 */
void f__B4B8_1A02_0023_470D()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A34), 0x0);
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_movw(&emu_es, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, 0x00,  0x442));
	emu_push(emu_get_memory16(emu_es, 0x00,  0x440));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1A25); emu_cs = 0x2B4C; f__2B4C_0002_0029_9CF8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1A25_0005_1FC6();
}

/**
 * Decompiled function f__B4B8_1A25_0005_1FC6()
 *
 * @name f__B4B8_1A25_0005_1FC6
 * @implements B4B8:1A25:0005:1FC6 ()
 *
 * Called From: B4B8:1A25:0023:470D
 */
void f__B4B8_1A25_0005_1FC6()
{
	emu_addws(&emu_sp, 0x8);
	f__B4B8_1A2F_000B_419A(); return;
}

/**
 * Decompiled function f__B4B8_1A2F_000B_419A()
 *
 * @name f__B4B8_1A2F_000B_419A
 * @implements B4B8:1A2F:000B:419A ()
 *
 * Called From: B4B8:1A28:0005:1FC6
 */
void f__B4B8_1A2F_000B_419A()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x706A), 0x1);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x1A2A; emu_last_cs = 0xB4B8; emu_last_ip = 0x1A34; emu_last_length = 0x000B; emu_last_crc = 0x419A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs);
	emu_push(0x1A3A); f__B4B8_0BC1_000C_4B29();
	f__B4B8_1A3A_0005_12E0();
}

/**
 * Decompiled function f__B4B8_1A3A_0005_12E0()
 *
 * @name f__B4B8_1A3A_0005_12E0
 * @implements B4B8:1A3A:0005:12E0 ()
 *
 * Called From: B4B8:1A3A:000B:419A
 */
void f__B4B8_1A3A_0005_12E0()
{
	emu_push(emu_cs); emu_push(0x1A3F); emu_cs = 0x34F2; ovl__34F2(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1A3F_0009_7EA3();
}

/**
 * Decompiled function f__B4B8_1A3F_0009_7EA3()
 *
 * @name f__B4B8_1A3F_0009_7EA3
 * @implements B4B8:1A3F:0009:7EA3 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B4B8_1A3F_0009_7EA3()
{
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1A48); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1A48_0010_CFAE();
}

/**
 * Decompiled function f__B4B8_1A48_0010_CFAE()
 *
 * @name f__B4B8_1A48_0010_CFAE
 * @implements B4B8:1A48:0010:CFAE ()
 *
 * Called From: B4B8:1A48:0009:7EA3
 */
void f__B4B8_1A48_0010_CFAE()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, 0x9);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1A58); emu_cs = 0x24DA; f__24DA_002D_0010_5D17();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1A58_001E_30C8();
}

/**
 * Decompiled function f__B4B8_1A58_001E_30C8()
 *
 * @name f__B4B8_1A58_001E_30C8
 * @implements B4B8:1A58:001E:30C8 ()
 *
 * Called From: B4B8:1A58:0010:CFAE
 */
void f__B4B8_1A58_001E_30C8()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x1234);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x5678);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x4);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1A76); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1A76_0025_8323();
}

/**
 * Decompiled function f__B4B8_1A76_0025_8323()
 *
 * @name f__B4B8_1A76_0025_8323
 * @implements B4B8:1A76:0025:8323 ()
 *
 * Called From: B4B8:1A76:001E:30C8
 */
void f__B4B8_1A76_0025_8323()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39EC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39EA), emu_dx.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x4000);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1A9B); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1A9B_0013_E487();
}

/**
 * Decompiled function f__B4B8_1A9B_0013_E487()
 *
 * @name f__B4B8_1A9B_0013_E487
 * @implements B4B8:1A9B:0013:E487 ()
 *
 * Called From: B4B8:1A9B:0025:8323
 */
void f__B4B8_1A9B_0013_E487()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1AAE); emu_cs = 0x0FE4; f__0FE4_013F_001C_6582();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1AAE_0010_6B5B();
}

/**
 * Decompiled function f__B4B8_1AAE_0010_6B5B()
 *
 * @name f__B4B8_1AAE_0010_6B5B
 * @implements B4B8:1AAE:0010:6B5B ()
 *
 * Called From: B4B8:1AAE:0013:E487
 */
void f__B4B8_1AAE_0010_6B5B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1ABE); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1ABE_0013_E02D();
}

/**
 * Decompiled function f__B4B8_1ABE_0013_E02D()
 *
 * @name f__B4B8_1ABE_0013_E02D
 * @implements B4B8:1ABE:0013:E02D ()
 *
 * Called From: B4B8:1ABE:0010:6B5B
 */
void f__B4B8_1ABE_0013_E02D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1AD1); emu_cs = 0x104B; f__104B_005D_001C_6A82();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1AD1_0010_6B5B();
}

/**
 * Decompiled function f__B4B8_1AD1_0010_6B5B()
 *
 * @name f__B4B8_1AD1_0010_6B5B
 * @implements B4B8:1AD1:0010:6B5B ()
 *
 * Called From: B4B8:1AD1:0013:E02D
 */
void f__B4B8_1AD1_0010_6B5B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1AE1); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1AE1_0013_E6E9();
}

/**
 * Decompiled function f__B4B8_1AE1_0013_E6E9()
 *
 * @name f__B4B8_1AE1_0013_E6E9
 * @implements B4B8:1AE1:0013:E6E9 ()
 *
 * Called From: B4B8:1AE1:0010:6B5B
 */
void f__B4B8_1AE1_0013_E6E9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1AF4); emu_cs = 0x10BE; f__10BE_000C_0020_8CB4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1AF4_0010_6B5B();
}

/**
 * Decompiled function f__B4B8_1AF4_0010_6B5B()
 *
 * @name f__B4B8_1AF4_0010_6B5B
 * @implements B4B8:1AF4:0010:6B5B ()
 *
 * Called From: B4B8:1AF4:0013:E6E9
 */
void f__B4B8_1AF4_0010_6B5B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1B04); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1B04_0013_EF59();
}

/**
 * Decompiled function f__B4B8_1B04_0013_EF59()
 *
 * @name f__B4B8_1B04_0013_EF59
 * @implements B4B8:1B04:0013:EF59 ()
 *
 * Called From: B4B8:1B04:0010:6B5B
 */
void f__B4B8_1B04_0013_EF59()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1B17); emu_cs = 0x1082; f__1082_0098_001C_6F82();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1B17_0014_2C46();
}

/**
 * Decompiled function f__B4B8_1B17_0014_2C46()
 *
 * @name f__B4B8_1B17_0014_2C46
 * @implements B4B8:1B17:0014:2C46 ()
 *
 * Called From: B4B8:1B17:0013:EF59
 */
void f__B4B8_1B17_0014_2C46()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x58);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1B2B); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1B2B_0025_DCD9();
}

/**
 * Decompiled function f__B4B8_1B2B_0025_DCD9()
 *
 * @name f__B4B8_1B2B_0025_DCD9
 * @implements B4B8:1B2B:0025:DCD9 ()
 *
 * Called From: B4B8:1B2B:0014:2C46
 */
void f__B4B8_1B2B_0025_DCD9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3958), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3956), emu_dx.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x770);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1B50); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1B50_0027_E5D1();
}

/**
 * Decompiled function f__B4B8_1B50_0027_E5D1()
 *
 * @name f__B4B8_1B50_0027_E5D1
 * @implements B4B8:1B50:0027:E5D1 ()
 *
 * Called From: B4B8:1B50:0025:DCD9
 */
void f__B4B8_1B50_0027_E5D1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x395C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x395A), emu_dx.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x280);
	emu_movw(&emu_si, 0x1C);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_push(emu_cs); emu_push(0x1B77); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1B77_000A_CD54();
}

/**
 * Decompiled function f__B4B8_1B77_000A_CD54()
 *
 * @name f__B4B8_1B77_000A_CD54
 * @implements B4B8:1B77:000A:CD54 ()
 *
 * Called From: B4B8:1B77:0027:E5D1
 */
void f__B4B8_1B77_000A_CD54()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37AE), 0x0);
	if (emu_flags.zf) { f__B4B8_1B81_000F_F73F(); return; }
	emu_ip = 0x20CA; emu_last_cs = 0xB4B8; emu_last_ip = 0x1B7E; emu_last_length = 0x000A; emu_last_crc = 0xCD54; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_1B81_000F_F73F()
 *
 * @name f__B4B8_1B81_000F_F73F
 * @implements B4B8:1B81:000F:F73F ()
 *
 * Called From: B4B8:1B7C:000A:CD54
 */
void f__B4B8_1B81_000F_F73F()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x22F0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1B90); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6875();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1B90_000F_CA7B();
}

/**
 * Decompiled function f__B4B8_1B90_000F_CA7B()
 *
 * @name f__B4B8_1B90_000F_CA7B
 * @implements B4B8:1B90:000F:CA7B ()
 *
 * Called From: B4B8:1B90:000F:F73F
 */
void f__B4B8_1B90_000F_CA7B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x22FD);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1B9F); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6875();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1B9F_0010_0BAC();
}

/**
 * Decompiled function f__B4B8_1B9F_0010_0BAC()
 *
 * @name f__B4B8_1B9F_0010_0BAC
 * @implements B4B8:1B9F:0010:0BAC ()
 *
 * Called From: B4B8:1B9F:000F:CA7B
 */
void f__B4B8_1B9F_0010_0BAC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { f__B4B8_1BAF_0010_6782(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__B4B8_1BB1_000E_67D1(); return;
}

/**
 * Decompiled function f__B4B8_1BAF_0010_6782()
 *
 * @name f__B4B8_1BAF_0010_6782
 * @implements B4B8:1BAF:0010:6782 ()
 *
 * Called From: B4B8:1BA8:0010:0BAC
 */
void f__B4B8_1BAF_0010_6782()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_shlw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__B4B8_1BBF_0018_8079(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x1BC1; emu_last_cs = 0xB4B8; emu_last_ip = 0x1BBD; emu_last_length = 0x0010; emu_last_crc = 0x6782; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_1BB1_000E_67D1()
 *
 * @name f__B4B8_1BB1_000E_67D1
 * @implements B4B8:1BB1:000E:67D1 ()
 *
 * Called From: B4B8:1BAD:0010:0BAC
 */
void f__B4B8_1BB1_000E_67D1()
{
	emu_shlw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__B4B8_1BBF_0018_8079(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x1BC1; emu_last_cs = 0xB4B8; emu_last_ip = 0x1BBD; emu_last_length = 0x000E; emu_last_crc = 0x67D1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_1BBF_0018_8079()
 *
 * @name f__B4B8_1BBF_0018_8079
 * @implements B4B8:1BBF:0018:8079 ()
 *
 * Called From: B4B8:1BB8:000E:67D1
 * Called From: B4B8:1BB8:0010:6782
 */
void f__B4B8_1BBF_0018_8079()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_dx.x);
	emu_orw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1BDD; emu_last_cs = 0xB4B8; emu_last_ip = 0x1BCB; emu_last_length = 0x0018; emu_last_crc = 0x8079; emu_call(); return; } // Jump does not resolve
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x230A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1BD7); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6875();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1BD7_0025_736B();
}

/**
 * Decompiled function f__B4B8_1BD7_0025_736B()
 *
 * @name f__B4B8_1BD7_0025_736B
 * @implements B4B8:1BD7:0025:736B ()
 *
 * Called From: B4B8:1BD7:0018:8079
 */
void f__B4B8_1BD7_0025_736B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4B8_1BE3_0019_861A(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_si);
	emu_movw(&emu_cx.x, 0x5);
	emu_movw(&emu_bx.x, 0x2281);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { emu_ip = 0x1BFC; emu_last_cs = 0xB4B8; emu_last_ip = 0x1BF2; emu_last_length = 0x0025; emu_last_crc = 0x736B; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__B4B8_1BEC_0010_B763(); return; }
	emu_ip = 0x1E48; emu_last_cs = 0xB4B8; emu_last_ip = 0x1BF9; emu_last_length = 0x0025; emu_last_crc = 0x736B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_1BE3_0019_861A()
 *
 * @name f__B4B8_1BE3_0019_861A
 * @implements B4B8:1BE3:0019:861A ()
 *
 * Called From: B4B8:1BDB:0025:736B
 * Called From: B4B8:20C5:0008:F2A2
 */
void f__B4B8_1BE3_0019_861A()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_si);
	emu_movw(&emu_cx.x, 0x5);
	emu_movw(&emu_bx.x, 0x2281);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { emu_ip = 0x1BFC; emu_last_cs = 0xB4B8; emu_last_ip = 0x1BF2; emu_last_length = 0x0019; emu_last_crc = 0x861A; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__B4B8_1BEC_0010_B763(); return; }
	emu_ip = 0x1E48; emu_last_cs = 0xB4B8; emu_last_ip = 0x1BF9; emu_last_length = 0x0019; emu_last_crc = 0x861A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_1BEC_0010_B763()
 *
 * @name f__B4B8_1BEC_0010_B763
 * @implements B4B8:1BEC:0010:B763 ()
 *
 * Called From: B4B8:1BF7:0010:B763
 * Called From: B4B8:1BF7:0019:861A
 * Called From: B4B8:1BF7:0025:736B
 */
void f__B4B8_1BEC_0010_B763()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { f__B4B8_1BFC_0004_0490(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__B4B8_1BEC_0010_B763(); return; }
	f__B4B8_1E48_0002_03AC(); return;
}

/**
 * Decompiled function f__B4B8_1BFC_0004_0490()
 *
 * @name f__B4B8_1BFC_0004_0490
 * @implements B4B8:1BFC:0004:0490 ()
 *
 * Called From: B4B8:1BF2:0010:B763
 */
void f__B4B8_1BFC_0004_0490()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0xA);
	switch (emu_ip) {
		case 0x1C03: f__B4B8_1C03_0008_5474(); return;
		case 0x1D5D: f__B4B8_1D5D_0005_112A(); return;
		case 0x1DF6: f__B4B8_1DF6_0009_F59B(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4B8; emu_last_ip = 0x1BFC; emu_last_length = 0x0004; emu_last_crc = 0x0490;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4B8_1C03_0008_5474()
 *
 * @name f__B4B8_1C03_0008_5474
 * @implements B4B8:1C03:0008:5474 ()
 *
 * Called From: B4B8:1BFC:0004:0490
 */
void f__B4B8_1C03_0008_5474()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1C0B); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1C0B_000E_77A7();
}

/**
 * Decompiled function f__B4B8_1C0B_000E_77A7()
 *
 * @name f__B4B8_1C0B_000E_77A7
 * @implements B4B8:1C0B:000E:77A7 ()
 *
 * Called From: B4B8:1C0B:0008:5474
 */
void f__B4B8_1C0B_000E_77A7()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_cs); emu_push(0x1C19); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1C19_0017_1E9D();
}

/**
 * Decompiled function f__B4B8_1C19_0017_1E9D()
 *
 * @name f__B4B8_1C19_0017_1E9D
 * @implements B4B8:1C19:0017:1E9D ()
 *
 * Called From: B4B8:1C19:000E:77A7
 */
void f__B4B8_1C19_0017_1E9D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x0);
	if (emu_flags.zf) { f__B4B8_1C30_001D_C57B(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DE), 0x6D60);
	emu_ip = 0x1C3C; emu_last_cs = 0xB4B8; emu_last_ip = 0x1C2E; emu_last_length = 0x0017; emu_last_crc = 0x1E9D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_1C30_001D_C57B()
 *
 * @name f__B4B8_1C30_001D_C57B
 * @implements B4B8:1C30:001D:C57B ()
 *
 * Called From: B4B8:1C20:0017:1E9D
 */
void f__B4B8_1C30_001D_C57B()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DE), 0x2EE0);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_push(emu_cs); emu_push(0x1C4D); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1C4D_000F_B1A5();
}

/**
 * Decompiled function f__B4B8_1C4D_000F_B1A5()
 *
 * @name f__B4B8_1C4D_000F_B1A5
 * @implements B4B8:1C4D:000F:B1A5 ()
 *
 * Called From: B4B8:1C4D:001D:C57B
 */
void f__B4B8_1C4D_000F_B1A5()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DA), emu_ax.x);
	emu_push(emu_cs); emu_push(0x1C5C); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1C5C_0005_154E();
}

/**
 * Decompiled function f__B4B8_1C5C_0005_154E()
 *
 * @name f__B4B8_1C5C_0005_154E
 * @implements B4B8:1C5C:0005:154E ()
 *
 * Called From: B4B8:1C5C:000F:B1A5
 */
void f__B4B8_1C5C_0005_154E()
{
	emu_push(emu_cs); emu_push(0x1C61); emu_cs = 0x1DD7; f__1DD7_0B53_0025_71E0();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1C61_0005_13D0();
}

/**
 * Decompiled function f__B4B8_1C61_0005_13D0()
 *
 * @name f__B4B8_1C61_0005_13D0
 * @implements B4B8:1C61:0005:13D0 ()
 *
 * Called From: B4B8:1C61:0005:154E
 */
void f__B4B8_1C61_0005_13D0()
{
	emu_push(emu_cs); emu_push(0x1C66); emu_cs = 0x34BE; ovl__34BE(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1C66_0009_F605();
}

/**
 * Decompiled function f__B4B8_1C66_0009_F605()
 *
 * @name f__B4B8_1C66_0009_F605
 * @implements B4B8:1C66:0009:F605 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B4B8_1C66_0009_F605()
{
	emu_movw(&emu_ax.x, 0xFFFE);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1C6F); emu_cs = 0x3483; ovl__3483(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1C6F_001A_AD6B();
}

/**
 * Decompiled function f__B4B8_1C6F_001A_AD6B()
 *
 * @name f__B4B8_1C6F_001A_AD6B
 * @implements B4B8:1C6F:001A:AD6B ()
 *
 * Called From: B4B8:1C6F:0009:F605
 */
void f__B4B8_1C6F_001A_AD6B()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x22C0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1C89); emu_cs = 0x253D; f__253D_0000_0013_AAD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1C89_001F_C7ED();
}

/**
 * Decompiled function f__B4B8_1C89_001F_C7ED()
 *
 * @name f__B4B8_1C89_001F_C7ED
 * @implements B4B8:1C89:001F:C7ED ()
 *
 * Called From: B4B8:1C89:001A:AD6B
 */
void f__B4B8_1C89_001F_C7ED()
{
	emu_addws(&emu_sp, 0xC);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x300);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6674));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x6676));
	emu_push(emu_cs); emu_push(0x1CA8); emu_cs = 0x2B0E; f__2B0E_0006_0049_1E3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1CA8_0018_AD37();
}

/**
 * Decompiled function f__B4B8_1CA8_0018_AD37()
 *
 * @name f__B4B8_1CA8_0018_AD37
 * @implements B4B8:1CA8:0018:AD37 ()
 *
 * Called From: B4B8:1CA8:001F:C7ED
 */
void f__B4B8_1CA8_0018_AD37()
{
	emu_addws(&emu_sp, 0xC);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x0);
	if (!emu_flags.zf) { f__B4B8_1CD5_0008_5474(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x230A);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1CC0); emu_cs = 0x1FB5; f__1FB5_01FA_0010_D47C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	emu_unknown_call();
}

/**
 * Decompiled function f__B4B8_1CD5_0008_5474()
 *
 * @name f__B4B8_1CD5_0008_5474
 * @implements B4B8:1CD5:0008:5474 ()
 *
 * Called From: B4B8:1CB0:0018:AD37
 */
void f__B4B8_1CD5_0008_5474()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1CDD); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1CDD_000E_77A7();
}

/**
 * Decompiled function f__B4B8_1CDD_000E_77A7()
 *
 * @name f__B4B8_1CDD_000E_77A7
 * @implements B4B8:1CDD:000E:77A7 ()
 *
 * Called From: B4B8:1CDD:0008:5474
 */
void f__B4B8_1CDD_000E_77A7()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_cs); emu_push(0x1CEB); emu_cs = 0x23E1; f__23E1_01C2_0011_4E4B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1CEB_000C_5324();
}

/**
 * Decompiled function f__B4B8_1CEB_000C_5324()
 *
 * @name f__B4B8_1CEB_000C_5324
 * @implements B4B8:1CEB:000C:5324 ()
 *
 * Called From: B4B8:1CEB:000E:77A7
 */
void f__B4B8_1CEB_000C_5324()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2316);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1CF7); emu_cs = 0x0FCB; f__0FCB_000D_0019_1BED();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1CF7_0017_1B85();
}

/**
 * Decompiled function f__B4B8_1CF7_0017_1B85()
 *
 * @name f__B4B8_1CF7_0017_1B85
 * @implements B4B8:1CF7:0017:1B85 ()
 *
 * Called From: B4B8:1CF7:000C:5324
 */
void f__B4B8_1CF7_0017_1B85()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D8F), 0x0);
	if (emu_flags.zf) { f__B4B8_1D0E_001D_C57B(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DE), 0x4E20);
	emu_ip = 0x1D1A; emu_last_cs = 0xB4B8; emu_last_ip = 0x1D0C; emu_last_length = 0x0017; emu_last_crc = 0x1B85; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_1D0E_001D_C57B()
 *
 * @name f__B4B8_1D0E_001D_C57B
 * @implements B4B8:1D0E:001D:C57B ()
 *
 * Called From: B4B8:1CFE:0017:1B85
 */
void f__B4B8_1D0E_001D_C57B()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38E0), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DE), 0x2EE0);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_push(emu_cs); emu_push(0x1D2B); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1D2B_000F_B445();
}

/**
 * Decompiled function f__B4B8_1D2B_000F_B445()
 *
 * @name f__B4B8_1D2B_000F_B445
 * @implements B4B8:1D2B:000F:B445 ()
 *
 * Called From: B4B8:1D2B:001D:C57B
 */
void f__B4B8_1D2B_000F_B445()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38DA), emu_ax.x);
	emu_push(emu_cs); emu_push(0x1D3A); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1D3A_0013_2C02();
}

/**
 * Decompiled function f__B4B8_1D3A_0013_2C02()
 *
 * @name f__B4B8_1D3A_0013_2C02
 * @implements B4B8:1D3A:0013:2C02 ()
 *
 * Called From: B4B8:1D3A:000F:B445
 */
void f__B4B8_1D3A_0013_2C02()
{
	emu_movw(&emu_ax.x, 0x2DCE);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x440);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x1D4D); f__B4B8_0A1E_001A_11DB();
	f__B4B8_1D4D_000C_5B7B();
}

/**
 * Decompiled function f__B4B8_1D4D_000C_5B7B()
 *
 * @name f__B4B8_1D4D_000C_5B7B
 * @implements B4B8:1D4D:000C:5B7B ()
 *
 * Called From: B4B8:1D4D:0013:2C02
 */
void f__B4B8_1D4D_000C_5B7B()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x1C);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1D59); emu_cs = 0x3483; ovl__3483(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1D59_0004_0148();
}

/**
 * Decompiled function f__B4B8_1D59_0004_0148()
 *
 * @name f__B4B8_1D59_0004_0148
 * @implements B4B8:1D59:0004:0148 ()
 *
 * Called From: B4B8:1D59:000C:5B7B
 */
void f__B4B8_1D59_0004_0148()
{
	emu_pop(&emu_cx.x);
	f__B4B8_1E41_0007_6EF8(); return;
}

/**
 * Decompiled function f__B4B8_1D5D_0005_112A()
 *
 * @name f__B4B8_1D5D_0005_112A
 * @implements B4B8:1D5D:0005:112A ()
 *
 * Called From: B4B8:1BFC:0004:0490
 */
void f__B4B8_1D5D_0005_112A()
{
	emu_push(emu_cs); emu_push(0x1D62); emu_cs = 0x3500; ovl__3500(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1D62_0008_50F6();
}

/**
 * Decompiled function f__B4B8_1D62_0008_50F6()
 *
 * @name f__B4B8_1D62_0008_50F6
 * @implements B4B8:1D62:0008:50F6 ()
 *
 * Called From: B4B8:1D62:0005:112A
 */
void f__B4B8_1D62_0008_50F6()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1D6A); emu_cs = 0x01F7; f__01F7_0377_000D_71AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	emu_unknown_call();
}

/**
 * Decompiled function f__B4B8_1DF6_0009_F59B()
 *
 * @name f__B4B8_1DF6_0009_F59B
 * @implements B4B8:1DF6:0009:F59B ()
 *
 * Called From: B4B8:1BFC:0004:0490
 */
void f__B4B8_1DF6_0009_F59B()
{
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1DFF); emu_cs = 0x3518; ovl__3518(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1DFF_000E_3978();
}

/**
 * Decompiled function f__B4B8_1DFF_000E_3978()
 *
 * @name f__B4B8_1DFF_000E_3978
 * @implements B4B8:1DFF:000E:3978 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B4B8_1DFF_000E_3978()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x1E0D); emu_cs = 0x259E; f__259E_0040_0015_2233();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1E0D_000C_B254();
}

/**
 * Decompiled function f__B4B8_1E0D_000C_B254()
 *
 * @name f__B4B8_1E0D_000C_B254
 * @implements B4B8:1E0D:000C:B254 ()
 *
 * Called From: B4B8:1E0D:000E:3978
 */
void f__B4B8_1E0D_000C_B254()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x22FD);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1E19); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6875();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1E19_0010_0BAC();
}

/**
 * Decompiled function f__B4B8_1E19_0010_0BAC()
 *
 * @name f__B4B8_1E19_0010_0BAC
 * @implements B4B8:1E19:0010:0BAC ()
 *
 * Called From: B4B8:1E19:000C:B254
 */
void f__B4B8_1E19_0010_0BAC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1E29; emu_last_cs = 0xB4B8; emu_last_ip = 0x1E22; emu_last_length = 0x0010; emu_last_crc = 0x0BAC; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__B4B8_1E2B_000E_67D1(); return;
}

/**
 * Decompiled function f__B4B8_1E2B_000E_67D1()
 *
 * @name f__B4B8_1E2B_000E_67D1
 * @implements B4B8:1E2B:000E:67D1 ()
 *
 * Called From: B4B8:1E27:0010:0BAC
 */
void f__B4B8_1E2B_000E_67D1()
{
	emu_shlw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_flags.zf) { f__B4B8_1E39_000F_F8DE(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x1E3B; emu_last_cs = 0xB4B8; emu_last_ip = 0x1E37; emu_last_length = 0x000E; emu_last_crc = 0x67D1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_1E39_000F_F8DE()
 *
 * @name f__B4B8_1E39_000F_F8DE
 * @implements B4B8:1E39:000F:F8DE ()
 *
 * Called From: B4B8:1E32:000E:67D1
 */
void f__B4B8_1E39_000F_F8DE()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_dx.x);
	emu_orw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	f__B4B8_1E4A_0009_0C49(); return;
}

/**
 * Decompiled function f__B4B8_1E41_0007_6EF8()
 *
 * @name f__B4B8_1E41_0007_6EF8
 * @implements B4B8:1E41:0007:6EF8 ()
 *
 * Called From: B4B8:1D5A:0004:0148
 */
void f__B4B8_1E41_0007_6EF8()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	f__B4B8_1E4A_0009_0C49(); return;
}

/**
 * Decompiled function f__B4B8_1E48_0002_03AC()
 *
 * @name f__B4B8_1E48_0002_03AC
 * @implements B4B8:1E48:0002:03AC ()
 *
 * Called From: B4B8:1BF9:0010:B763
 */
void f__B4B8_1E48_0002_03AC()
{
	f__B4B8_1E4A_0009_0C49(); return;
}

/**
 * Decompiled function f__B4B8_1E4A_0009_0C49()
 *
 * @name f__B4B8_1E4A_0009_0C49
 * @implements B4B8:1E4A:0009:0C49 ()
 *
 * Called From: B4B8:1E46:0007:6EF8
 * Called From: B4B8:1E46:000F:F8DE
 * Called From: B4B8:1E48:0002:03AC
 */
void f__B4B8_1E4A_0009_0C49()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (!emu_flags.zf) { f__B4B8_1E53_000A_8F29(); return; }
	f__B4B8_2078_0008_847C(); return;
}

/**
 * Decompiled function f__B4B8_1E53_000A_8F29()
 *
 * @name f__B4B8_1E53_000A_8F29
 * @implements B4B8:1E53:000A:8F29 ()
 *
 * Called From: B4B8:1E4E:0009:0C49
 */
void f__B4B8_1E53_000A_8F29()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x41B8), 0x0);
	emu_xorw(&emu_di, emu_di);
	f__B4B8_1EC4_0020_3003(); return;
}

/**
 * Decompiled function f__B4B8_1E5D_0046_A838()
 *
 * @name f__B4B8_1E5D_0046_A838
 * @implements B4B8:1E5D:0046:A838 ()
 *
 * Called From: B4B8:1EC7:0020:3003
 * Called From: B4B8:1EC7:0021:308D
 * Called From: B4B8:1EC7:002C:BF02
 */
void f__B4B8_1E5D_0046_A838()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x2C);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_di);
	emu_shlw(&emu_dx.x, 0x1);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x219D), 0x0);
	if (emu_flags.zf) { f__B4B8_1EB8_002C_BF02(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_di);
	emu_shlw(&emu_dx.x, 0x1);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, emu_bx.x,  0x219D));
	emu_push(emu_cs); emu_push(0x1EA3); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1EA3_0015_F8FC();
}

/**
 * Decompiled function f__B4B8_1EA3_0015_F8FC()
 *
 * @name f__B4B8_1EA3_0015_F8FC
 * @implements B4B8:1EA3:0015:F8FC ()
 *
 * Called From: B4B8:1EA3:0046:A838
 */
void f__B4B8_1EA3_0015_F8FC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_cx.x, emu_bp - 0x2C);
	emu_addw(&emu_bx.x, emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bx.x,  0x0), emu_ax.x);
	f__B4B8_1EC3_0021_308D(); return;
}

/**
 * Decompiled function f__B4B8_1EB8_002C_BF02()
 *
 * @name f__B4B8_1EB8_002C_BF02
 * @implements B4B8:1EB8:002C:BF02 ()
 *
 * Called From: B4B8:1E88:0046:A838
 */
void f__B4B8_1EB8_002C_BF02()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x41B8), 0x0);
	if (!emu_flags.zf) { f__B4B8_1EC3_0021_308D(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x41B8), emu_di);
	emu_incw(&emu_di);
	emu_cmpws(&emu_di, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_1E5D_0046_A838(); return; }
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1EE4); emu_cs = 0x10E4; emu_ip = 0x3DD5; emu_last_cs = 0xB4B8; emu_last_ip = 0x1EDF; emu_last_length = 0x002C; emu_last_crc = 0xBF02; emu_call(); // Jump does not resolve
	f__B4B8_1EE4_000C_9C55();
}

/**
 * Decompiled function f__B4B8_1EC3_0021_308D()
 *
 * @name f__B4B8_1EC3_0021_308D
 * @implements B4B8:1EC3:0021:308D ()
 *
 * Called From: B4B8:1EB6:0015:F8FC
 * Called From: B4B8:1EBD:002C:BF02
 */
void f__B4B8_1EC3_0021_308D()
{
	emu_incw(&emu_di);
	emu_cmpws(&emu_di, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_1E5D_0046_A838(); return; }
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1EE4); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1EE4_000C_9C55();
}

/**
 * Decompiled function f__B4B8_1EC4_0020_3003()
 *
 * @name f__B4B8_1EC4_0020_3003
 * @implements B4B8:1EC4:0020:3003 ()
 *
 * Called From: B4B8:1E5B:000A:8F29
 */
void f__B4B8_1EC4_0020_3003()
{
	emu_cmpws(&emu_di, 0x6);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_1E5D_0046_A838(); return; }
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x1EE4); emu_cs = 0x10E4; emu_ip = 0x3DD5; emu_last_cs = 0xB4B8; emu_last_ip = 0x1EDF; emu_last_length = 0x0020; emu_last_crc = 0x3003; emu_call(); // Jump does not resolve
	f__B4B8_1EE4_000C_9C55();
}

/**
 * Decompiled function f__B4B8_1EE4_000C_9C55()
 *
 * @name f__B4B8_1EE4_000C_9C55
 * @implements B4B8:1EE4:000C:9C55 ()
 *
 * Called From: B4B8:1EE4:0021:308D
 */
void f__B4B8_1EE4_000C_9C55()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_xorw(&emu_si, emu_si);
	f__B4B8_1F2B_006A_5DBE(); return;
}

/**
 * Decompiled function f__B4B8_1EF0_0017_B4A2()
 *
 * @name f__B4B8_1EF0_0017_B4A2
 * @implements B4B8:1EF0:0017:B4A2 ()
 *
 * Called From: B4B8:1F2F:006A:5DBE
 * Called From: B4B8:1F2F:006B:6DBC
 * Called From: B4B8:1F2F:0070:0DEC
 */
void f__B4B8_1EF0_0017_B4A2()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x2C);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x1F07); emu_cs = 0x2521; f__2521_0035_0015_2811();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1F07_001E_7CBD();
}

/**
 * Decompiled function f__B4B8_1F07_001E_7CBD()
 *
 * @name f__B4B8_1F07_001E_7CBD
 * @implements B4B8:1F07:001E:7CBD ()
 *
 * Called From: B4B8:1F07:0017:B4A2
 */
void f__B4B8_1F07_001E_7CBD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_flags.cf || emu_flags.zf)) { f__B4B8_1F2A_006B_6DBC(); return; }
	emu_movw(&emu_bx.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_bp - 0x2C);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x1F25); emu_cs = 0x2521; f__2521_0035_0015_2811();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1F25_0070_0DEC();
}

/**
 * Decompiled function f__B4B8_1F25_0070_0DEC()
 *
 * @name f__B4B8_1F25_0070_0DEC
 * @implements B4B8:1F25:0070:0DEC ()
 *
 * Called From: B4B8:1F25:001E:7CBD
 */
void f__B4B8_1F25_0070_0DEC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x41B8));
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_1EF0_0017_B4A2(); return; }
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x7);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x3);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x41B6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x41B6));
	emu_addw(&emu_ax.x, 0x2);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4136), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, 0x13);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4132), emu_dx.x);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x41B8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_imuluw(&emu_ax.x, emu_si);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, 0xA0);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4134), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_imuluw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0xB);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4138), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x231B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1F95); emu_cs = 0x0642; emu_ip = 0x26F2; emu_last_cs = 0xB4B8; emu_last_ip = 0x1F90; emu_last_length = 0x0070; emu_last_crc = 0x0DEC; emu_call(); // Jump does not resolve
	f__B4B8_1F95_0009_C400();
}

/**
 * Decompiled function f__B4B8_1F2A_006B_6DBC()
 *
 * @name f__B4B8_1F2A_006B_6DBC
 * @implements B4B8:1F2A:006B:6DBC ()
 *
 * Called From: B4B8:1F0C:001E:7CBD
 */
void f__B4B8_1F2A_006B_6DBC()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x41B8));
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_1EF0_0017_B4A2(); return; }
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x7);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x3);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x41B6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x41B6));
	emu_addw(&emu_ax.x, 0x2);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4136), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, 0x13);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4132), emu_dx.x);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x41B8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_imuluw(&emu_ax.x, emu_si);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, 0xA0);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4134), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_imuluw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0xB);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4138), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x231B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1F95); emu_cs = 0x0642; f__0642_075D_0011_56FC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1F95_0009_C400();
}

/**
 * Decompiled function f__B4B8_1F2B_006A_5DBE()
 *
 * @name f__B4B8_1F2B_006A_5DBE
 * @implements B4B8:1F2B:006A:5DBE ()
 *
 * Called From: B4B8:1EEE:000C:9C55
 */
void f__B4B8_1F2B_006A_5DBE()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x41B8));
	if ((emu_flags.sf != emu_flags.of)) { f__B4B8_1EF0_0017_B4A2(); return; }
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x7);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x3);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x41B6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x41B6));
	emu_addw(&emu_ax.x, 0x2);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4136), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, 0x13);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4132), emu_dx.x);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x41B8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_imuluw(&emu_ax.x, emu_si);
	emu_shrw(&emu_ax.x, 0x1);
	emu_movw(&emu_dx.x, 0xA0);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4134), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_imuluw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, 0xB);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x4138), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x231B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1F95); emu_cs = 0x0642; emu_ip = 0x26F2; emu_last_cs = 0xB4B8; emu_last_ip = 0x1F90; emu_last_length = 0x006A; emu_last_crc = 0x5DBE; emu_call(); // Jump does not resolve
	f__B4B8_1F95_0009_C400();
}

/**
 * Decompiled function f__B4B8_1F95_0009_C400()
 *
 * @name f__B4B8_1F95_0009_C400
 * @implements B4B8:1F95:0009:C400 ()
 *
 * Called From: B4B8:1F95:006B:6DBC
 */
void f__B4B8_1F95_0009_C400()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1F9E); emu_cs = 0x34CA; ovl__34CA(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1F9E_0008_F35E();
}

/**
 * Decompiled function f__B4B8_1F9E_0008_F35E()
 *
 * @name f__B4B8_1F9E_0008_F35E
 * @implements B4B8:1F9E:0008:F35E ()
 *
 * Called From: B4B8:1F9E:0009:C400
 */
void f__B4B8_1F9E_0008_F35E()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x1FA6); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1FA6_0008_5720();
}

/**
 * Decompiled function f__B4B8_1FA6_0008_5720()
 *
 * @name f__B4B8_1FA6_0008_5720
 * @implements B4B8:1FA6:0008:5720 ()
 *
 * Called From: B4B8:1FA6:0008:F35E
 */
void f__B4B8_1FA6_0008_5720()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1FAE); emu_cs = 0x24DA; f__24DA_0004_000E_98E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1FAE_0021_7727();
}

/**
 * Decompiled function f__B4B8_1FAE_0021_7727()
 *
 * @name f__B4B8_1FAE_0021_7727
 * @implements B4B8:1FAE:0021:7727 ()
 *
 * Called From: B4B8:1FAE:0008:5720
 */
void f__B4B8_1FAE_0021_7727()
{
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC8);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x28);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1FCF); emu_cs = 0x24D0; f__24D0_000D_0039_9224();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1FCF_0014_1024();
}

/**
 * Decompiled function f__B4B8_1FCF_0014_1024()
 *
 * @name f__B4B8_1FCF_0014_1024
 * @implements B4B8:1FCF:0014:1024 ()
 *
 * Called From: B4B8:1FCF:0021:7727
 */
void f__B4B8_1FCF_0014_1024()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x1E);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x1FE3); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_1FE3_002F_82AA();
}

/**
 * Decompiled function f__B4B8_1FE3_002F_82AA()
 *
 * @name f__B4B8_1FE3_002F_82AA
 * @implements B4B8:1FE3:002F:82AA ()
 *
 * Called From: B4B8:1FE3:0014:1024
 */
void f__B4B8_1FE3_002F_82AA()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (!emu_flags.zf) { f__B4B8_1FF1_0021_B39A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x1);
	emu_movw(&emu_ax.x, 0x39);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x231);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x85);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x13F);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2321);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2012); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_2012_001E_B0C1();
}

/**
 * Decompiled function f__B4B8_1FF1_0021_B39A()
 *
 * @name f__B4B8_1FF1_0021_B39A
 * @implements B4B8:1FF1:0021:B39A ()
 *
 * Called From: B4B8:1FEA:002F:82AA
 */
void f__B4B8_1FF1_0021_B39A()
{
	emu_movw(&emu_ax.x, 0x39);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x231);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x85);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xC0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x13F);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2321);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2012); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_2012_001E_B0C1();
}

/**
 * Decompiled function f__B4B8_2012_001E_B0C1()
 *
 * @name f__B4B8_2012_001E_B0C1
 * @implements B4B8:2012:001E:B0C1 ()
 *
 * Called From: B4B8:2012:0021:B39A
 * Called From: B4B8:2012:002F:82AA
 */
void f__B4B8_2012_001E_B0C1()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2030); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_2030_000C_50F9();
}

/**
 * Decompiled function f__B4B8_2030_000C_50F9()
 *
 * @name f__B4B8_2030_000C_50F9
 * @implements B4B8:2030:000C:50F9 ()
 *
 * Called From: B4B8:2030:001E:B0C1
 */
void f__B4B8_2030_000C_50F9()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0xD);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x203C); emu_cs = 0x07AE; f__07AE_0000_00DF_386F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_203C_0012_1E3E();
}

/**
 * Decompiled function f__B4B8_203C_0012_1E3E()
 *
 * @name f__B4B8_203C_0012_1E3E
 * @implements B4B8:203C:0012:1E3E ()
 *
 * Called From: B4B8:203C:000C:50F9
 */
void f__B4B8_203C_0012_1E3E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xD);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x204E); emu_cs = 0x10E4; f__10E4_057F_0052_B1B7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_204E_001D_2C93();
}

/**
 * Decompiled function f__B4B8_204E_001D_2C93()
 *
 * @name f__B4B8_204E_001D_2C93
 * @implements B4B8:204E:001D:2C93 ()
 *
 * Called From: B4B8:204E:0012:1E3E
 */
void f__B4B8_204E_001D_2C93()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2C);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x206B); emu_cs = 0x34E6; ovl__34E6(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_206B_0008_F6BE();
}

/**
 * Decompiled function f__B4B8_206B_0008_F6BE()
 *
 * @name f__B4B8_206B_0008_F6BE
 * @implements B4B8:206B:0008:F6BE ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4B8:206B:001D:2C93
 */
void f__B4B8_206B_0008_F6BE()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x2073); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_2073_000D_D467();
}

/**
 * Decompiled function f__B4B8_2073_000D_D467()
 *
 * @name f__B4B8_2073_000D_D467
 * @implements B4B8:2073:000D:D467 ()
 *
 * Called From: B4B8:2073:0008:F6BE
 */
void f__B4B8_2073_000D_D467()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (!emu_flags.zf) { f__B4B8_2080_001D_61A2(); return; }
	emu_ip = 0x20C8; emu_last_cs = 0xB4B8; emu_last_ip = 0x207E; emu_last_length = 0x000D; emu_last_crc = 0xD467; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_2078_0008_847C()
 *
 * @name f__B4B8_2078_0008_847C
 * @implements B4B8:2078:0008:847C ()
 *
 * Called From: B4B8:1E50:0009:0C49
 */
void f__B4B8_2078_0008_847C()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (!emu_flags.zf) { f__B4B8_2080_001D_61A2(); return; }
	emu_ip = 0x20C8; emu_last_cs = 0xB4B8; emu_last_ip = 0x207E; emu_last_length = 0x0008; emu_last_crc = 0x847C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_2080_001D_61A2()
 *
 * @name f__B4B8_2080_001D_61A2
 * @implements B4B8:2080:001D:61A2 ()
 *
 * Called From: B4B8:207C:0008:847C
 * Called From: B4B8:207C:000D:D467
 */
void f__B4B8_2080_001D_61A2()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2C);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x209D); emu_cs = 0x34E6; ovl__34E6(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_209D_0023_825F();
}

/**
 * Decompiled function f__B4B8_209D_0023_825F()
 *
 * @name f__B4B8_209D_0023_825F
 * @implements B4B8:209D:0023:825F ()
 *
 * Called From: B4B8:209D:001D:61A2
 */
void f__B4B8_209D_0023_825F()
{
	emu_addws(&emu_sp, 0x10);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__B4B8_20BB_0005_17FC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_si);
	emu_shlw(&emu_dx.x, 0x1);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_ds, emu_bx.x,  0x219D));
	emu_push(emu_cs); emu_push(0x20C0); emu_cs = 0x0642; f__0642_0559_0027_9047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_20C0_0008_F2A2();
}

/**
 * Decompiled function f__B4B8_20BB_0005_17FC()
 *
 * @name f__B4B8_20BB_0005_17FC
 * @implements B4B8:20BB:0005:17FC ()
 *
 * Called From: B4B8:20A5:0023:825F
 */
void f__B4B8_20BB_0005_17FC()
{
	emu_push(emu_cs); emu_push(0x20C0); emu_cs = 0x0642; f__0642_0559_0027_9047();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_20C0_0008_F2A2();
}

/**
 * Decompiled function f__B4B8_20C0_0008_F2A2()
 *
 * @name f__B4B8_20C0_0008_F2A2
 * @implements B4B8:20C0:0008:F2A2 ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4B8:20C0:0005:17FC
 * Called From: B4B8:20C0:0023:825F
 */
void f__B4B8_20C0_0008_F2A2()
{
	emu_cmpws(&emu_si, 0x1B);
	if (emu_flags.zf) { f__B4B8_20C8_0002_036C(); return; }
	f__B4B8_1BE3_0019_861A(); return;
}

/**
 * Decompiled function f__B4B8_20C8_0002_036C()
 *
 * @name f__B4B8_20C8_0002_036C
 * @implements B4B8:20C8:0002:036C ()
 *
 * Called From: B4B8:20C3:0008:F2A2
 */
void f__B4B8_20C8_0002_036C()
{
	f__B4B8_212A_0005_11DE(); return;
}

/**
 * Decompiled function f__B4B8_212A_0005_11DE()
 *
 * @name f__B4B8_212A_0005_11DE
 * @implements B4B8:212A:0005:11DE ()
 *
 * Called From: B4B8:20C8:0002:036C
 */
void f__B4B8_212A_0005_11DE()
{
	emu_push(emu_cs); emu_push(0x212F); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_212F_0034_9B71();
}

/**
 * Decompiled function f__B4B8_212F_0034_9B71()
 *
 * @name f__B4B8_212F_0034_9B71
 * @implements B4B8:212F:0034:9B71 ()
 *
 * Called From: B4B8:212F:0005:11DE
 */
void f__B4B8_212F_0034_9B71()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x37B4), 0x0);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66CF));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D1));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x353F);
	emu_movw(&emu_es, emu_ax.x);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00,  0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00,  0x666A);
	emu_push(0x2163);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_D6F0(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4B8; emu_last_ip = 0x215E; emu_last_length = 0x0034; emu_last_crc = 0x9B71;
			emu_call();
			return;
	}
	f__B4B8_2163_0012_30A9();
}

/**
 * Decompiled function f__B4B8_2163_0012_30A9()
 *
 * @name f__B4B8_2163_0012_30A9
 * @implements B4B8:2163:0012:30A9 ()
 *
 * Called From: B4B8:2163:0034:9B71
 */
void f__B4B8_2163_0012_30A9()
{
	emu_addws(&emu_sp, 0xA);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x2176; emu_last_cs = 0xB4B8; emu_last_ip = 0x216A; emu_last_length = 0x0012; emu_last_crc = 0x30A9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2175); emu_cs = 0x3483; ovl__3483(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_2175_0018_6779();
}

/**
 * Decompiled function f__B4B8_2175_0018_6779()
 *
 * @name f__B4B8_2175_0018_6779
 * @implements B4B8:2175:0018:6779 ()
 *
 * Called From: B4B8:2175:0012:30A9
 */
void f__B4B8_2175_0018_6779()
{
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x2199; emu_last_cs = 0xB4B8; emu_last_ip = 0x217A; emu_last_length = 0x0018; emu_last_crc = 0x6779; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C36));
	emu_push(emu_cs); emu_push(0x218D); emu_cs = 0x259E; f__259E_0006_0016_2DFF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_218D_000B_5327();
}

/**
 * Decompiled function f__B4B8_218D_000B_5327()
 *
 * @name f__B4B8_218D_000B_5327
 * @implements B4B8:218D:000B:5327 ()
 *
 * Called From: B4B8:218D:0018:6779
 */
void f__B4B8_218D_000B_5327()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2198); emu_cs = 0x24DA; f__24DA_0004_000E_98E7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_2198_0006_053A();
}

/**
 * Decompiled function f__B4B8_2198_0006_053A()
 *
 * @name f__B4B8_2198_0006_053A
 * @implements B4B8:2198:0006:053A ()
 *
 * Called From: B4B8:2198:000B:5327
 */
void f__B4B8_2198_0006_053A()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x219E); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_219E_0015_A511();
}

/**
 * Decompiled function f__B4B8_219E_0015_A511()
 *
 * @name f__B4B8_219E_0015_A511
 * @implements B4B8:219E:0015:A511 ()
 *
 * Called From: B4B8:219E:0006:053A
 */
void f__B4B8_219E_0015_A511()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379A), 0x0);
	if (emu_flags.zf) { f__B4B8_21B6_0009_0C4D(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2327);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x379A));
	emu_push(emu_cs); emu_push(0x21B3); emu_cs = 0x257A; emu_ip = 0x21C0; emu_last_cs = 0xB4B8; emu_last_ip = 0x21AE; emu_last_length = 0x0015; emu_last_crc = 0xA511; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4B8_21B6_0009_0C4D()
 *
 * @name f__B4B8_21B6_0009_0C4D
 * @implements B4B8:21B6:0009:0C4D ()
 *
 * Called From: B4B8:21A3:0015:A511
 */
void f__B4B8_21B6_0009_0C4D()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__B4B8_21BF_000C_83B7(); return; }
	emu_ip = 0x226C; emu_last_cs = 0xB4B8; emu_last_ip = 0x21BC; emu_last_length = 0x0009; emu_last_crc = 0x0C4D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_21BF_000C_83B7()
 *
 * @name f__B4B8_21BF_000C_83B7
 * @implements B4B8:21BF:000C:83B7 ()
 *
 * Called From: B4B8:21BA:0009:0C4D
 */
void f__B4B8_21BF_000C_83B7()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x21DE; emu_last_cs = 0xB4B8; emu_last_ip = 0x21C4; emu_last_length = 0x000C; emu_last_crc = 0x83B7; emu_call(); return; } // Jump does not resolve
	emu_push(emu_cs); emu_push(0x21CB); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_21CB_000B_7FD8();
}

/**
 * Decompiled function f__B4B8_21CB_000B_7FD8()
 *
 * @name f__B4B8_21CB_000B_7FD8
 * @implements B4B8:21CB:000B:7FD8 ()
 *
 * Called From: B4B8:21CB:000C:83B7
 */
void f__B4B8_21CB_000B_7FD8()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A38), 0x5);
	emu_push(emu_cs); emu_push(0x21D6); emu_cs = 0x3511; ovl__3511(7);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_21D6_0008_A05E();
}

/**
 * Decompiled function f__B4B8_21D6_0008_A05E()
 *
 * @name f__B4B8_21D6_0008_A05E
 * @implements B4B8:21D6:0008:A05E ()
 *
 * Called From: B4B8:21D6:000B:7FD8
 */
void f__B4B8_21D6_0008_A05E()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A38), emu_ax.x);
	emu_push(emu_cs); emu_push(0x21DE); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_21DE_0004_0772();
}

/**
 * Decompiled function f__B4B8_21DE_0004_0772()
 *
 * @name f__B4B8_21DE_0004_0772
 * @implements B4B8:21DE:0004:0772 ()
 *
 * Called From: B4B8:21DE:0008:A05E
 */
void f__B4B8_21DE_0004_0772()
{
	emu_push(emu_cs);
	emu_push(0x21E2); f__B4B8_0D23_0010_7C11();
	f__B4B8_21E2_0008_EBB2();
}

/**
 * Decompiled function f__B4B8_21E2_0008_EBB2()
 *
 * @name f__B4B8_21E2_0008_EBB2
 * @implements B4B8:21E2:0008:EBB2 ()
 *
 * Called From: B4B8:21E2:0004:0772
 */
void f__B4B8_21E2_0008_EBB2()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs);
	emu_push(0x21EA); f__B4B8_110D_000D_CCFE();
	f__B4B8_21EA_000A_ACE4();
}

/**
 * Decompiled function f__B4B8_21EA_000A_ACE4()
 *
 * @name f__B4B8_21EA_000A_ACE4
 * @implements B4B8:21EA:000A:ACE4 ()
 *
 * Called From: B4B8:21EA:0008:EBB2
 */
void f__B4B8_21EA_000A_ACE4()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs); emu_push(0x21F4); emu_cs = 0x3483; ovl__3483(4);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_21F4_0006_027E();
}

/**
 * Decompiled function f__B4B8_21F4_0006_027E()
 *
 * @name f__B4B8_21F4_0006_027E
 * @implements B4B8:21F4:0006:027E ()
 *
 * Called From: B4B8:21F4:000A:ACE4
 */
void f__B4B8_21F4_0006_027E()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x21FA); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_21FA_001B_C672();
}

/**
 * Decompiled function f__B4B8_21FA_001B_C672()
 *
 * @name f__B4B8_21FA_001B_C672
 * @implements B4B8:21FA:001B:C672 ()
 *
 * Called From: B4B8:21FA:0006:027E
 */
void f__B4B8_21FA_001B_C672()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37AE), 0x0);
	if (emu_flags.zf) { f__B4B8_2229_0014_5577(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x0);
	if (emu_flags.zf) { emu_ip = 0x221A; emu_last_cs = 0xB4B8; emu_last_ip = 0x2206; emu_last_length = 0x001B; emu_last_crc = 0xC672; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_push(emu_cs); emu_push(0x2215); emu_cs = 0x3503; emu_ip = 0x2235; emu_last_cs = 0xB4B8; emu_last_ip = 0x2210; emu_last_length = 0x001B; emu_last_crc = 0xC672; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4B8_2229_0014_5577()
 *
 * @name f__B4B8_2229_0014_5577
 * @implements B4B8:2229:0014:5577 ()
 *
 * Called From: B4B8:21FF:001B:C672
 */
void f__B4B8_2229_0014_5577()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x0);
	if (emu_flags.zf) { f__B4B8_2242_000D_2BF6(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38B2));
	emu_push(emu_cs); emu_push(0x223D); emu_cs = 0x3503; emu_ip = 0x225D; emu_last_cs = 0xB4B8; emu_last_ip = 0x2238; emu_last_length = 0x0014; emu_last_crc = 0x5577; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4B8_2242_000D_2BF6()
 *
 * @name f__B4B8_2242_000D_2BF6
 * @implements B4B8:2242:000D:2BF6 ()
 *
 * Called From: B4B8:222E:0014:5577
 */
void f__B4B8_2242_000D_2BF6()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38B0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_cs); emu_push(0x224F); emu_cs = 0x3511; ovl__3511(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_224F_0007_2B1E();
}

/**
 * Decompiled function f__B4B8_224F_0007_2B1E()
 *
 * @name f__B4B8_224F_0007_2B1E
 * @implements B4B8:224F:0007:2B1E ()
 *
 * Called From: B4B8:224F:000D:2BF6
 */
void f__B4B8_224F_0007_2B1E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_cs); emu_push(0x2256); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_2256_000C_01B1();
}

/**
 * Decompiled function f__B4B8_2256_000C_01B1()
 *
 * @name f__B4B8_2256_000C_01B1
 * @implements B4B8:2256:000C:01B1 ()
 *
 * Called From: B4B8:2256:0007:2B1E
 */
void f__B4B8_2256_000C_01B1()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__B4B8_2262_0009_722D(); return; }
	emu_movw(&emu_ax.x, 0x5);
	emu_ip = 0x2265; emu_last_cs = 0xB4B8; emu_last_ip = 0x2260; emu_last_length = 0x000C; emu_last_crc = 0x01B1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B8_2262_0009_722D()
 *
 * @name f__B4B8_2262_0009_722D
 * @implements B4B8:2262:0009:722D ()
 *
 * Called From: B4B8:225B:000C:01B1
 */
void f__B4B8_2262_0009_722D()
{
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x226B); emu_cs = 0x34E9; ovl__34E9(2);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_226B_000E_5B78();
}

/**
 * Decompiled function f__B4B8_226B_000E_5B78()
 *
 * @name f__B4B8_226B_000E_5B78
 * @implements B4B8:226B:000E:5B78 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B4B8_226B_000E_5B78()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C32));
	emu_push(emu_cs); emu_push(0x2279); emu_cs = 0x259E; f__259E_0040_0015_2233();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_2279_0008_66FA();
}

/**
 * Decompiled function f__B4B8_2279_0008_66FA()
 *
 * @name f__B4B8_2279_0008_66FA
 * @implements B4B8:2279:0008:66FA ()
 *
 * Called From: B4B8:2279:000E:5B78
 */
void f__B4B8_2279_0008_66FA()
{
	emu_pop(&emu_cx.x);
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
 * Decompiled function f__B4B8_2295_0018_F006()
 *
 * @name f__B4B8_2295_0018_F006
 * @implements B4B8:2295:0018:F006 ()
 *
 * Called From: B4B8:0EA7:001E:DE89
 * Called From: B4B8:19BC:0031:25A1
 * Called From: B4B8:19D9:001D:4EE5
 */
void f__B4B8_2295_0018_F006()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x2330);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x22AD); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_22AD_001F_04BC();
}

/**
 * Decompiled function f__B4B8_22AD_001F_04BC()
 *
 * @name f__B4B8_22AD_001F_04BC
 * @implements B4B8:22AD:001F:04BC ()
 *
 * Called From: B4B8:22AD:0018:F006
 */
void f__B4B8_22AD_001F_04BC()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x22CC); emu_cs = 0x15C2; f__15C2_00AC_0015_0F53();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B8) { ovl__34B8(0xFF); }
	f__B4B8_22CC_0005_1F0C();
}

/**
 * Decompiled function f__B4B8_22CC_0005_1F0C()
 *
 * @name f__B4B8_22CC_0005_1F0C
 * @implements B4B8:22CC:0005:1F0C ()
 *
 * Called From: B4B8:22CC:001F:04BC
 */
void f__B4B8_22CC_0005_1F0C()
{
	emu_addws(&emu_sp, 0x10);
	f__B4B8_22D1_0002_00E2(); return;
}

/**
 * Decompiled function f__B4B8_22D1_0002_00E2()
 *
 * @name f__B4B8_22D1_0002_00E2
 * @implements B4B8:22D1:0002:00E2 ()
 *
 * Called From: B4B8:22CF:0005:1F0C
 */
void f__B4B8_22D1_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
