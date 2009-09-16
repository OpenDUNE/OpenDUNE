/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4E6_0000_001A_234E()
 *
 * @name f__B4E6_0000_001A_234E
 * @implements B4E6:0000:001A:234E ()
 *
 * Called From: B4E6:014F:004A:24E9
 * Called From: B4E6:0174:000C:85BB
 * Called From: B4E6:03B1:000E:89BE
 * Called From: B4E6:041D:0010:6B0C
 * Called From: B4E6:0468:0011:8B31
 * Called From: B4E6:04BF:0016:4DB2
 */
void f__B4E6_0000_001A_234E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFF);
	if (!emu_flags.zf) { f__B4E6_001A_0007_6E28(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x001A; emu_last_cs = 0xB4E6; emu_last_ip = 0x0014; emu_last_length = 0x001A; emu_last_crc = 0x234E; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_ip = 0x006F; emu_last_cs = 0xB4E6; emu_last_ip = 0x0018; emu_last_length = 0x001A; emu_last_crc = 0x234E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E6_0018_0002_0306()
 *
 * @name f__B4E6_0018_0002_0306
 * @implements B4E6:0018:0002:0306 ()
 *
 * Called From: B4E6:006D:0013:555E
 */
void f__B4E6_0018_0002_0306()
{
	f__B4E6_006F_0005_04BA(); return;
}

/**
 * Decompiled function f__B4E6_001A_0007_6E28()
 *
 * @name f__B4E6_001A_0007_6E28
 * @implements B4E6:001A:0007:6E28 ()
 *
 * Called From: B4E6:000E:001A:234E
 */
void f__B4E6_001A_0007_6E28()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4E6_0043_0006_1E2A(); return;
}

/**
 * Decompiled function f__B4E6_0021_0010_8841()
 *
 * @name f__B4E6_0021_0010_8841
 * @implements B4E6:0021:0010:8841 ()
 *
 * Called From: B4E6:0045:0006:1E2A
 * Called From: B4E6:0045:0018:BB24
 */
void f__B4E6_0021_0010_8841()
{
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_addb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_cs); emu_push(0x0031); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_0031_0018_BB24();
}

/**
 * Decompiled function f__B4E6_0031_0018_BB24()
 *
 * @name f__B4E6_0031_0018_BB24
 * @implements B4E6:0031:0018:BB24 ()
 *
 * Called From: B4E6:0031:0010:8841
 */
void f__B4E6_0031_0018_BB24()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_andw(&emu_cx.x, emu_ax.x);
	emu_andw(&emu_bx.x, emu_dx.x);
	emu_orw(&emu_cx.x, emu_bx.x);
	if (emu_flags.zf) { emu_ip = 0x0040; emu_last_cs = 0xB4E6; emu_last_ip = 0x003D; emu_last_length = 0x0018; emu_last_crc = 0xBB24; emu_call(); return; } // Jump does not resolve
	emu_decw(&emu_si);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4E6_0021_0010_8841(); return; }
	f__B4E6_004C_0010_8841(); return;
}

/**
 * Decompiled function f__B4E6_0043_0006_1E2A()
 *
 * @name f__B4E6_0043_0006_1E2A
 * @implements B4E6:0043:0006:1E2A ()
 *
 * Called From: B4E6:001F:0007:6E28
 */
void f__B4E6_0043_0006_1E2A()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4E6_0021_0010_8841(); return; }
	f__B4E6_004C_0010_8841(); return;
}

/**
 * Decompiled function f__B4E6_0049_0013_8F5D()
 *
 * @name f__B4E6_0049_0013_8F5D
 * @implements B4E6:0049:0013:8F5D ()
 *
 * Called From: B4E6:0068:0013:555E
 */
void f__B4E6_0049_0013_8F5D()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_addb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_cs); emu_push(0x005C); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_005C_0013_555E();
}

/**
 * Decompiled function f__B4E6_004C_0010_8841()
 *
 * @name f__B4E6_004C_0010_8841
 * @implements B4E6:004C:0010:8841 ()
 *
 * Called From: B4E6:0047:0006:1E2A
 * Called From: B4E6:0047:0018:BB24
 */
void f__B4E6_004C_0010_8841()
{
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_addb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_cs); emu_push(0x005C); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_005C_0013_555E();
}

/**
 * Decompiled function f__B4E6_005C_0013_555E()
 *
 * @name f__B4E6_005C_0013_555E
 * @implements B4E6:005C:0013:555E ()
 *
 * Called From: B4E6:005C:0010:8841
 * Called From: B4E6:005C:0013:8F5D
 */
void f__B4E6_005C_0013_555E()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_andw(&emu_cx.x, emu_ax.x);
	emu_andw(&emu_bx.x, emu_dx.x);
	emu_orw(&emu_cx.x, emu_bx.x);
	if (emu_flags.zf) { f__B4E6_0049_0013_8F5D(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4E6_0018_0002_0306(); return;
}

/**
 * Decompiled function f__B4E6_006F_0005_04BA()
 *
 * @name f__B4E6_006F_0005_04BA
 * @implements B4E6:006F:0005:04BA ()
 *
 * Called From: B4E6:0018:0002:0306
 */
void f__B4E6_006F_0005_04BA()
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
 * Decompiled function f__B4E6_0074_000C_1FC0()
 *
 * @name f__B4E6_0074_000C_1FC0
 * @implements B4E6:0074:000C:1FC0 ()
 *
 * Called From: B4E6:04FB:0032:B94E
 */
void f__B4E6_0074_000C_1FC0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_xorw(&emu_si, emu_si);
	f__B4E6_00D7_0009_F5E3(); return;
}

/**
 * Decompiled function f__B4E6_0080_0005_11DE()
 *
 * @name f__B4E6_0080_0005_11DE
 * @implements B4E6:0080:0005:11DE ()
 *
 * Called From: B4E6:00DA:0009:F5E3
 * Called From: B4E6:00DA:000B:25E0
 */
void f__B4E6_0080_0005_11DE()
{
	emu_push(emu_cs); emu_push(0x0085); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_0085_0019_47E1();
}

/**
 * Decompiled function f__B4E6_0085_0019_47E1()
 *
 * @name f__B4E6_0085_0019_47E1
 * @implements B4E6:0085:0019:47E1 ()
 *
 * Called From: B4E6:0085:0005:11DE
 */
void f__B4E6_0085_0019_47E1()
{
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x009E); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_009E_000C_5E53();
}

/**
 * Decompiled function f__B4E6_009E_000C_5E53()
 *
 * @name f__B4E6_009E_000C_5E53
 * @implements B4E6:009E:000C:5E53 ()
 *
 * Called From: B4E6:009E:0019:47E1
 */
void f__B4E6_009E_000C_5E53()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00AA); emu_cs = 0x24FD; f__24FD_000A_000B_BF4F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_00AA_001A_23FE();
}

/**
 * Decompiled function f__B4E6_00AA_001A_23FE()
 *
 * @name f__B4E6_00AA_001A_23FE
 * @implements B4E6:00AA:001A:23FE ()
 *
 * Called From: B4E6:00AA:000C:5E53
 */
void f__B4E6_00AA_001A_23FE()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00C4); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_00C4_0008_F6BE();
}

/**
 * Decompiled function f__B4E6_00C4_0008_F6BE()
 *
 * @name f__B4E6_00C4_0008_F6BE
 * @implements B4E6:00C4:0008:F6BE ()
 *
 * Called From: B4E6:00C4:001A:23FE
 */
void f__B4E6_00C4_0008_F6BE()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x00CC); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_00CC_0009_765D();
}

/**
 * Decompiled function f__B4E6_00CC_0009_765D()
 *
 * @name f__B4E6_00CC_0009_765D
 * @implements B4E6:00CC:0009:765D ()
 *
 * Called From: B4E6:00CC:0008:F6BE
 */
void f__B4E6_00CC_0009_765D()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00D5); emu_cs = 0x24FD; f__24FD_000A_000B_BF4F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_00D5_000B_25E0();
}

/**
 * Decompiled function f__B4E6_00D5_000B_25E0()
 *
 * @name f__B4E6_00D5_000B_25E0
 * @implements B4E6:00D5:000B:25E0 ()
 *
 * Called From: B4E6:00D5:0009:765D
 */
void f__B4E6_00D5_000B_25E0()
{
	emu_pop(&emu_cx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x3);
	if ((emu_flags.sf != emu_flags.of)) { f__B4E6_0080_0005_11DE(); return; }
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E6_00D7_0009_F5E3()
 *
 * @name f__B4E6_00D7_0009_F5E3
 * @implements B4E6:00D7:0009:F5E3 ()
 *
 * Called From: B4E6:007E:000C:1FC0
 */
void f__B4E6_00D7_0009_F5E3()
{
	emu_cmpws(&emu_si, 0x3);
	if ((emu_flags.sf != emu_flags.of)) { f__B4E6_0080_0005_11DE(); return; }
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E6_00E0_0022_E3C9()
 *
 * @name f__B4E6_00E0_0022_E3C9
 * @implements B4E6:00E0:0022:E3C9 ()
 *
 * Called From: B4E6:0311:0074:5BDE
 * Called From: B4E6:0311:007A:739F
 * Called From: B4E6:0383:0018:AF31
 */
void f__B4E6_00E0_0022_E3C9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { f__B4E6_0102_0004_069C(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4E6_0102_0004_069C(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if ((emu_flags.sf != emu_flags.of)) { f__B4E6_0102_0004_069C(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x0102; emu_last_cs = 0xB4E6; emu_last_ip = 0x00FB; emu_last_length = 0x0022; emu_last_crc = 0xE3C9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__B4E6_0104_0002_03AC(); return;
}

/**
 * Decompiled function f__B4E6_0102_0004_069C()
 *
 * @name f__B4E6_0102_0004_069C
 * @implements B4E6:0102:0004:069C ()
 *
 * Called From: B4E6:00EC:0022:E3C9
 * Called From: B4E6:00F1:0022:E3C9
 * Called From: B4E6:00F6:0022:E3C9
 */
void f__B4E6_0102_0004_069C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4E6_0106_0002_00E2(); return;
}

/**
 * Decompiled function f__B4E6_0104_0002_03AC()
 *
 * @name f__B4E6_0104_0002_03AC
 * @implements B4E6:0104:0002:03AC ()
 *
 * Called From: B4E6:0100:0022:E3C9
 */
void f__B4E6_0104_0002_03AC()
{
	f__B4E6_0106_0002_00E2(); return;
}

/**
 * Decompiled function f__B4E6_0106_0002_00E2()
 *
 * @name f__B4E6_0106_0002_00E2
 * @implements B4E6:0106:0002:00E2 ()
 *
 * Called From: B4E6:0104:0002:03AC
 * Called From: B4E6:0104:0004:069C
 */
void f__B4E6_0106_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E6_0108_004A_24E9()
 *
 * @name f__B4E6_0108_004A_24E9
 * @implements B4E6:0108:004A:24E9 ()
 *
 * Called From: 34E6:0025:0005:1C1A
 * Called From: 34E6:0025:0005:1C24
 * Called From: 34E6:0025:0005:1D2A
 * Called From: 34E6:0025:0005:1D30
 * Called From: 34E6:0025:0005:1DFA
 * Called From: 34E6:0025:0005:1E72
 * Called From: 34E6:0025:0005:1E7C
 * Called From: 34E6:0025:0005:1EE4
 * Called From: 34E6:0025:0005:1F3A
 * Called From: 34E6:0025:0005:1F68
 * Called From: 34E6:0025:0005:1FF0
 */
void f__B4E6_0108_004A_24E9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x41B2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_push(emu_cs);
	emu_push(0x0152); f__B4E6_0000_001A_234E();
	f__B4E6_0152_0015_B10F();
}

/**
 * Decompiled function f__B4E6_0152_0015_B10F()
 *
 * @name f__B4E6_0152_0015_B10F
 * @implements B4E6:0152:0015:B10F ()
 *
 * Called From: B4E6:0152:004A:24E9
 */
void f__B4E6_0152_0015_B10F()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_push(emu_cs); emu_push(0x0167); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_0167_0004_07D8();
}

/**
 * Decompiled function f__B4E6_0167_0004_07D8()
 *
 * @name f__B4E6_0167_0004_07D8
 * @implements B4E6:0167:0004:07D8 ()
 *
 * Called From: B4E6:0167:0015:B10F
 */
void f__B4E6_0167_0004_07D8()
{
	emu_xorw(&emu_si, emu_si);
	f__B4E6_01E5_0010_CA00(); return;
}

/**
 * Decompiled function f__B4E6_016B_000C_85BB()
 *
 * @name f__B4E6_016B_000C_85BB
 * @implements B4E6:016B:000C:85BB ()
 *
 * Called From: B4E6:01E8:0010:CA00
 * Called From: B4E6:01E8:0014:C4A4
 */
void f__B4E6_016B_000C_85BB()
{
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0177); f__B4E6_0000_001A_234E();
	f__B4E6_0177_003F_3703();
}

/**
 * Decompiled function f__B4E6_0177_003F_3703()
 *
 * @name f__B4E6_0177_003F_3703
 * @implements B4E6:0177:003F:3703 ()
 *
 * Called From: B4E6:0177:000C:85BB
 */
void f__B4E6_0177_003F_3703()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_imuluw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_push(emu_dx.x);
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!emu_flags.zf) { f__B4E6_01B6_002B_5FE9(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x25E6), 0x0);
	if (!emu_flags.zf) { f__B4E6_01B1_0005_14CA(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7097), 0x0);
	if (emu_flags.zf) { emu_ip = 0x01B6; emu_last_cs = 0xB4E6; emu_last_ip = 0x01AF; emu_last_length = 0x003F; emu_last_crc = 0x3703; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x6);
	emu_ip = 0x01B9; emu_last_cs = 0xB4E6; emu_last_ip = 0x01B4; emu_last_length = 0x003F; emu_last_crc = 0x3703; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E6_01B1_0005_14CA()
 *
 * @name f__B4E6_01B1_0005_14CA
 * @implements B4E6:01B1:0005:14CA ()
 *
 * Called From: B4E6:01A8:003F:3703
 */
void f__B4E6_01B1_0005_14CA()
{
	emu_movw(&emu_ax.x, 0x6);
	f__B4E6_01B9_0028_8BEC(); return;
}

/**
 * Decompiled function f__B4E6_01B6_002B_5FE9()
 *
 * @name f__B4E6_01B6_002B_5FE9
 * @implements B4E6:01B6:002B:5FE9 ()
 *
 * Called From: B4E6:01A1:003F:3703
 */
void f__B4E6_01B6_002B_5FE9()
{
	emu_movw(&emu_ax.x, 0x5);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x01E1); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_01E1_0014_C4A4();
}

/**
 * Decompiled function f__B4E6_01B9_0028_8BEC()
 *
 * @name f__B4E6_01B9_0028_8BEC
 * @implements B4E6:01B9:0028:8BEC ()
 *
 * Called From: B4E6:01B4:0005:14CA
 */
void f__B4E6_01B9_0028_8BEC()
{
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x01E1); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_01E1_0014_C4A4();
}

/**
 * Decompiled function f__B4E6_01E1_0014_C4A4()
 *
 * @name f__B4E6_01E1_0014_C4A4
 * @implements B4E6:01E1:0014:C4A4 ()
 *
 * Called From: B4E6:01E1:0028:8BEC
 * Called From: B4E6:01E1:002B:5FE9
 */
void f__B4E6_01E1_0014_C4A4()
{
	emu_addws(&emu_sp, 0xE);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((emu_flags.sf != emu_flags.of)) { f__B4E6_016B_000C_85BB(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FAE), emu_ax.x);
	emu_push(emu_cs); emu_push(0x01F5); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_01F5_0005_137A();
}

/**
 * Decompiled function f__B4E6_01E5_0010_CA00()
 *
 * @name f__B4E6_01E5_0010_CA00
 * @implements B4E6:01E5:0010:CA00 ()
 *
 * Called From: B4E6:0169:0004:07D8
 */
void f__B4E6_01E5_0010_CA00()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((emu_flags.sf != emu_flags.of)) { f__B4E6_016B_000C_85BB(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FAE), emu_ax.x);
	emu_push(emu_cs); emu_push(0x01F5); emu_cs = 0x2B6C; emu_ip = 0x035E; emu_last_cs = 0xB4E6; emu_last_ip = 0x01F0; emu_last_length = 0x0010; emu_last_crc = 0xCA00; emu_call(); // Jump does not resolve
	f__B4E6_01F5_0005_137A();
}

/**
 * Decompiled function f__B4E6_01F5_0005_137A()
 *
 * @name f__B4E6_01F5_0005_137A
 * @implements B4E6:01F5:0005:137A ()
 *
 * Called From: B4E6:01F5:0014:C4A4
 */
void f__B4E6_01F5_0005_137A()
{
	emu_push(emu_cs); emu_push(0x01FA); emu_cs = 0x29E8; f__29E8_073F_000E_A6E4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_01FA_0006_137A();
}

/**
 * Decompiled function f__B4E6_01FA_0006_137A()
 *
 * @name f__B4E6_01FA_0006_137A
 * @implements B4E6:01FA:0006:137A ()
 *
 * Called From: B4E6:01FA:0005:137A
 */
void f__B4E6_01FA_0006_137A()
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
 * Decompiled function f__B4E6_0200_0091_88EF()
 *
 * @name f__B4E6_0200_0091_88EF
 * @implements B4E6:0200:0091:88EF ()
 *
 * Called From: 34E6:002A:0005:1C82
 * Called From: 34E6:002A:0005:1CBC
 * Called From: 34E6:002A:0005:1D62
 * Called From: 34E6:002A:0005:1DA8
 * Called From: 34E6:002A:0005:1DB2
 * Called From: 34E6:002A:0005:1E7C
 * Called From: 34E6:002A:0005:1EE4
 * Called From: 34E6:002A:0005:1EEA
 * Called From: 34E6:002A:0005:1F68
 * Called From: 34E6:002A:0005:1FA2
 * Called From: 34E6:002A:0005:1FF0
 */
void f__B4E6_0200_0091_88EF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x26);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_ax.x, 0x41B2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x22), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x24), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_incw(&emu_bx.x);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_dx.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFFFF);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C71));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FAE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x7FAE));
	emu_sarw(&emu_ax.x, 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FAC), 0x0);
	emu_push(emu_cs); emu_push(0x0291); emu_cs = 0x29E8; f__29E8_072F_000F_6188();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_0291_0009_F742();
}

/**
 * Decompiled function f__B4E6_0291_0009_F742()
 *
 * @name f__B4E6_0291_0009_F742
 * @implements B4E6:0291:0009:F742 ()
 *
 * Called From: B4E6:0291:0091:88EF
 */
void f__B4E6_0291_0009_F742()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4E6_02A0_0074_5BDE(); return; }
	emu_push(emu_cs); emu_push(0x029A); emu_cs = 0x29E8; f__29E8_0897_0016_EFB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_029A_007A_739F();
}

/**
 * Decompiled function f__B4E6_029A_007A_739F()
 *
 * @name f__B4E6_029A_007A_739F
 * @implements B4E6:029A:007A:739F ()
 *
 * Called From: B4E6:029A:0009:F742
 */
void f__B4E6_029A_007A_739F()
{
	emu_andw(&emu_ax.x, 0x8FF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C70));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C70));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_decw(&emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_decw(&emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x7097));
	emu_movb(&emu_ax.h, 0x0);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x032E; emu_last_cs = 0xB4E6; emu_last_ip = 0x02F5; emu_last_length = 0x007A; emu_last_crc = 0x739F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_push(emu_cs);
	emu_push(0x0314); f__B4E6_00E0_0022_E3C9();
	f__B4E6_0314_0035_7BFD();
}

/**
 * Decompiled function f__B4E6_02A0_0074_5BDE()
 *
 * @name f__B4E6_02A0_0074_5BDE
 * @implements B4E6:02A0:0074:5BDE ()
 *
 * Called From: B4E6:0293:0009:F742
 */
void f__B4E6_02A0_0074_5BDE()
{
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C70));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00, -0x66D3));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00, -0x66D5));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x6C70));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_decw(&emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_decw(&emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x7097));
	emu_movb(&emu_ax.h, 0x0);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x032E; emu_last_cs = 0xB4E6; emu_last_ip = 0x02F5; emu_last_length = 0x0074; emu_last_crc = 0x5BDE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_push(emu_cs);
	emu_push(0x0314); f__B4E6_00E0_0022_E3C9();
	f__B4E6_0314_0035_7BFD();
}

/**
 * Decompiled function f__B4E6_0314_0035_7BFD()
 *
 * @name f__B4E6_0314_0035_7BFD
 * @implements B4E6:0314:0035:7BFD ()
 *
 * Called From: B4E6:0314:0074:5BDE
 * Called From: B4E6:0314:007A:739F
 */
void f__B4E6_0314_0035_7BFD()
{
	emu_addws(&emu_sp, 0xC);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4E6_032E_001B_615A(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x25E6), 0x0);
	if (emu_flags.zf) { emu_ip = 0x032E; emu_last_cs = 0xB4E6; emu_last_ip = 0x0320; emu_last_length = 0x0035; emu_last_crc = 0x7BFD; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_movw(&emu_cx.x, 0xB);
	emu_movw(&emu_bx.x, 0x51B);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x26));
	if (emu_flags.zf) { emu_ip = 0x0349; emu_last_cs = 0xB4E6; emu_last_ip = 0x0340; emu_last_length = 0x0035; emu_last_crc = 0x7BFD; emu_call(); return; } // Jump does not resolve
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__B4E6_033A_000F_5C91(); return; }
	emu_ip = 0x03A2; emu_last_cs = 0xB4E6; emu_last_ip = 0x0347; emu_last_length = 0x0035; emu_last_crc = 0x7BFD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E6_032E_001B_615A()
 *
 * @name f__B4E6_032E_001B_615A
 * @implements B4E6:032E:001B:615A ()
 *
 * Called From: B4E6:0319:0035:7BFD
 */
void f__B4E6_032E_001B_615A()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_movw(&emu_cx.x, 0xB);
	emu_movw(&emu_bx.x, 0x51B);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x26));
	if (emu_flags.zf) { f__B4E6_0349_0004_04A8(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__B4E6_033A_000F_5C91(); return; }
	emu_ip = 0x03A2; emu_last_cs = 0xB4E6; emu_last_ip = 0x0347; emu_last_length = 0x001B; emu_last_crc = 0x615A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E6_033A_000F_5C91()
 *
 * @name f__B4E6_033A_000F_5C91
 * @implements B4E6:033A:000F:5C91 ()
 *
 * Called From: B4E6:0345:000F:5C91
 * Called From: B4E6:0345:001B:615A
 * Called From: B4E6:0345:0035:7BFD
 */
void f__B4E6_033A_000F_5C91()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x26));
	if (emu_flags.zf) { f__B4E6_0349_0004_04A8(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__B4E6_033A_000F_5C91(); return; }
	f__B4E6_03A2_0004_07FC(); return;
}

/**
 * Decompiled function f__B4E6_0349_0004_04A8()
 *
 * @name f__B4E6_0349_0004_04A8
 * @implements B4E6:0349:0004:04A8 ()
 *
 * Called From: B4E6:0340:000F:5C91
 * Called From: B4E6:0340:001B:615A
 */
void f__B4E6_0349_0004_04A8()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x16);
	switch (emu_ip) {
		case 0x034D: f__B4E6_034D_000B_EA87(); return;
		case 0x0358: f__B4E6_0358_000B_FD4A(); return;
		case 0x036E: f__B4E6_036E_0018_AF31(); return;
		case 0x039D: f__B4E6_039D_0005_12CE(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4E6; emu_last_ip = 0x0349; emu_last_length = 0x0004; emu_last_crc = 0x04A8;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4E6_034D_000B_EA87()
 *
 * @name f__B4E6_034D_000B_EA87
 * @implements B4E6:034D:000B:EA87 ()
 *
 * Called From: B4E6:0349:0004:04A8
 */
void f__B4E6_034D_000B_EA87()
{
	emu_decw(&emu_si);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4E6_0355_0003_05E4(); return; }
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4E6_0403_0008_335C(); return;
}

/**
 * Decompiled function f__B4E6_0355_0003_05E4()
 *
 * @name f__B4E6_0355_0003_05E4
 * @implements B4E6:0355:0003:05E4 ()
 *
 * Called From: B4E6:0350:000B:EA87
 */
void f__B4E6_0355_0003_05E4()
{
	f__B4E6_0403_0008_335C(); return;
}

/**
 * Decompiled function f__B4E6_0358_000B_FD4A()
 *
 * @name f__B4E6_0358_000B_FD4A
 * @implements B4E6:0358:000B:FD4A ()
 *
 * Called From: B4E6:0349:0004:04A8
 */
void f__B4E6_0358_000B_FD4A()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4E6_0360_0003_05C8(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B4E6_0403_0008_335C(); return;
}

/**
 * Decompiled function f__B4E6_0360_0003_05C8()
 *
 * @name f__B4E6_0360_0003_05C8
 * @implements B4E6:0360:0003:05C8 ()
 *
 * Called From: B4E6:035C:000B:FD4A
 */
void f__B4E6_0360_0003_05C8()
{
	f__B4E6_0403_0008_335C(); return;
}

/**
 * Decompiled function f__B4E6_036E_0018_AF31()
 *
 * @name f__B4E6_036E_0018_AF31
 * @implements B4E6:036E:0018:AF31 ()
 *
 * Called From: B4E6:0349:0004:04A8
 */
void f__B4E6_036E_0018_AF31()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7066));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7064));
	emu_push(emu_cs);
	emu_push(0x0386); f__B4E6_00E0_0022_E3C9();
	f__B4E6_0386_0015_D125();
}

/**
 * Decompiled function f__B4E6_0386_0015_D125()
 *
 * @name f__B4E6_0386_0015_D125
 * @implements B4E6:0386:0015:D125 ()
 *
 * Called From: B4E6:0386:0018:AF31
 */
void f__B4E6_0386_0015_D125()
{
	emu_addws(&emu_sp, 0xC);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x039B; emu_last_cs = 0xB4E6; emu_last_ip = 0x038B; emu_last_length = 0x0015; emu_last_crc = 0xD125; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7066));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_si, emu_ax.x);
	f__B4E6_039D_0005_12CE(); return;
}

/**
 * Decompiled function f__B4E6_039D_0005_12CE()
 *
 * @name f__B4E6_039D_0005_12CE
 * @implements B4E6:039D:0005:12CE ()
 *
 * Called From: B4E6:0349:0004:04A8
 * Called From: B4E6:0399:0015:D125
 */
void f__B4E6_039D_0005_12CE()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	f__B4E6_0403_0008_335C(); return;
}

/**
 * Decompiled function f__B4E6_03A2_0004_07FC()
 *
 * @name f__B4E6_03A2_0004_07FC
 * @implements B4E6:03A2:0004:07FC ()
 *
 * Called From: B4E6:0347:000F:5C91
 */
void f__B4E6_03A2_0004_07FC()
{
	emu_xorw(&emu_di, emu_di);
	f__B4E6_03F2_0011_4BBD(); return;
}

/**
 * Decompiled function f__B4E6_03A6_000E_89BE()
 *
 * @name f__B4E6_03A6_000E_89BE
 * @implements B4E6:03A6:000E:89BE ()
 *
 * Called From: B4E6:03F9:0011:4BBD
 * Called From: B4E6:03F9:0012:4AA1
 */
void f__B4E6_03A6_000E_89BE()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x03B4); f__B4E6_0000_001A_234E();
	f__B4E6_03B4_0019_D485();
}

/**
 * Decompiled function f__B4E6_03B4_0019_D485()
 *
 * @name f__B4E6_03B4_0019_D485
 * @implements B4E6:03B4:0019:D485 ()
 *
 * Called From: B4E6:03B4:000E:89BE
 */
void f__B4E6_03B4_0019_D485()
{
	emu_addws(&emu_sp, 0x8);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03CD); emu_cs = 0x01F7; f__01F7_10C3_0010_906C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_03CD_000E_9E17();
}

/**
 * Decompiled function f__B4E6_03CD_000E_9E17()
 *
 * @name f__B4E6_03CD_000E_9E17
 * @implements B4E6:03CD:000E:9E17 ()
 *
 * Called From: B4E6:03CD:0019:D485
 */
void f__B4E6_03CD_000E_9E17()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_andw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03DB); emu_cs = 0x29E8; f__29E8_0479_0009_7872();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_03DB_0007_24AE();
}

/**
 * Decompiled function f__B4E6_03DB_0007_24AE()
 *
 * @name f__B4E6_03DB_0007_24AE
 * @implements B4E6:03DB:0007:24AE ()
 *
 * Called From: B4E6:03DB:000E:9E17
 */
void f__B4E6_03DB_0007_24AE()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03E2); emu_cs = 0x01F7; f__01F7_10C3_0010_906C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_03E2_000F_7B3A();
}

/**
 * Decompiled function f__B4E6_03E2_000F_7B3A()
 *
 * @name f__B4E6_03E2_000F_7B3A
 * @implements B4E6:03E2:000F:7B3A ()
 *
 * Called From: B4E6:03E2:0007:24AE
 */
void f__B4E6_03E2_000F_7B3A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E6_03F1_0012_4AA1(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	f__B4E6_03FB_0008_800C(); return;
}

/**
 * Decompiled function f__B4E6_03F1_0012_4AA1()
 *
 * @name f__B4E6_03F1_0012_4AA1
 * @implements B4E6:03F1:0012:4AA1 ()
 *
 * Called From: B4E6:03E6:000F:7B3A
 */
void f__B4E6_03F1_0012_4AA1()
{
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4E6_03A6_000E_89BE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FAC), emu_ax.x);
	f__B4E6_0403_0008_335C(); return;
}

/**
 * Decompiled function f__B4E6_03F2_0011_4BBD()
 *
 * @name f__B4E6_03F2_0011_4BBD
 * @implements B4E6:03F2:0011:4BBD ()
 *
 * Called From: B4E6:03A4:0004:07FC
 */
void f__B4E6_03F2_0011_4BBD()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4E6_03A6_000E_89BE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FAC), emu_ax.x);
	emu_ip = 0x0403; emu_last_cs = 0xB4E6; emu_last_ip = 0x0401; emu_last_length = 0x0011; emu_last_crc = 0x4BBD; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4E6_03FB_0008_800C()
 *
 * @name f__B4E6_03FB_0008_800C
 * @implements B4E6:03FB:0008:800C ()
 *
 * Called From: B4E6:03EF:000F:7B3A
 */
void f__B4E6_03FB_0008_800C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FAC), emu_ax.x);
	f__B4E6_0403_0008_335C(); return;
}

/**
 * Decompiled function f__B4E6_0403_0008_335C()
 *
 * @name f__B4E6_0403_0008_335C
 * @implements B4E6:0403:0008:335C ()
 *
 * Called From: B4E6:0355:0003:05E4
 * Called From: B4E6:0355:000B:EA87
 * Called From: B4E6:0360:0003:05C8
 * Called From: B4E6:0360:000B:FD4A
 * Called From: B4E6:03A0:0005:12CE
 * Called From: B4E6:0401:0008:800C
 * Called From: B4E6:0401:0012:4AA1
 */
void f__B4E6_0403_0008_335C()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (!emu_flags.zf) { f__B4E6_040B_0005_11DE(); return; }
	f__B4E6_04AC_0016_4DB2(); return;
}

/**
 * Decompiled function f__B4E6_040B_0005_11DE()
 *
 * @name f__B4E6_040B_0005_11DE
 * @implements B4E6:040B:0005:11DE ()
 *
 * Called From: B4E6:0406:0008:335C
 */
void f__B4E6_040B_0005_11DE()
{
	emu_push(emu_cs); emu_push(0x0410); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_0410_0010_6B0C();
}

/**
 * Decompiled function f__B4E6_0410_0010_6B0C()
 *
 * @name f__B4E6_0410_0010_6B0C
 * @implements B4E6:0410:0010:6B0C ()
 *
 * Called From: B4E6:0410:0005:11DE
 */
void f__B4E6_0410_0010_6B0C()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_cs);
	emu_push(0x0420); f__B4E6_0000_001A_234E();
	f__B4E6_0420_003A_FCBC();
}

/**
 * Decompiled function f__B4E6_0420_003A_FCBC()
 *
 * @name f__B4E6_0420_003A_FCBC
 * @implements B4E6:0420:003A:FCBC ()
 *
 * Called From: B4E6:0420:0010:6B0C
 */
void f__B4E6_0420_003A_FCBC()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x045A); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_045A_0011_8B31();
}

/**
 * Decompiled function f__B4E6_045A_0011_8B31()
 *
 * @name f__B4E6_045A_0011_8B31
 * @implements B4E6:045A:0011:8B31 ()
 *
 * Called From: B4E6:045A:003A:FCBC
 */
void f__B4E6_045A_0011_8B31()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x046B); f__B4E6_0000_001A_234E();
	f__B4E6_046B_0039_6C7F();
}

/**
 * Decompiled function f__B4E6_046B_0039_6C7F()
 *
 * @name f__B4E6_046B_0039_6C7F
 * @implements B4E6:046B:0039:6C7F ()
 *
 * Called From: B4E6:046B:0011:8B31
 */
void f__B4E6_046B_0039_6C7F()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x04A4); emu_cs = 0x10E4; f__10E4_1EF1_0040_E33D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_04A4_0008_F6BE();
}

/**
 * Decompiled function f__B4E6_04A4_0008_F6BE()
 *
 * @name f__B4E6_04A4_0008_F6BE
 * @implements B4E6:04A4:0008:F6BE ()
 *
 * Called From: B4E6:04A4:0039:6C7F
 */
void f__B4E6_04A4_0008_F6BE()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x04AC); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_04AC_0016_4DB2();
}

/**
 * Decompiled function f__B4E6_04AC_0016_4DB2()
 *
 * @name f__B4E6_04AC_0016_4DB2
 * @implements B4E6:04AC:0016:4DB2 ()
 *
 * Called From: B4E6:0408:0008:335C
 * Called From: B4E6:04AC:0008:F6BE
 */
void f__B4E6_04AC_0016_4DB2()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFF);
	if (emu_flags.zf) { f__B4E6_0509_000C_2DC1(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x04C2); f__B4E6_0000_001A_234E();
	f__B4E6_04C2_000A_E65D();
}

/**
 * Decompiled function f__B4E6_04C2_000A_E65D()
 *
 * @name f__B4E6_04C2_000A_E65D
 * @implements B4E6:04C2:000A:E65D ()
 *
 * Called From: B4E6:04C2:0016:4DB2
 */
void f__B4E6_04C2_000A_E65D()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_cs); emu_push(0x04CC); emu_cs = 0x2B6C; f__2B6C_0137_0020_17E5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_04CC_0032_B94E();
}

/**
 * Decompiled function f__B4E6_04CC_0032_B94E()
 *
 * @name f__B4E6_04CC_0032_B94E
 * @implements B4E6:04CC:0032:B94E ()
 *
 * Called From: B4E6:04CC:000A:E65D
 */
void f__B4E6_04CC_0032_B94E()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1E));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs);
	emu_push(0x04FE); f__B4E6_0074_000C_1FC0();
	f__B4E6_04FE_0008_F6BE();
}

/**
 * Decompiled function f__B4E6_04FE_0008_F6BE()
 *
 * @name f__B4E6_04FE_0008_F6BE
 * @implements B4E6:04FE:0008:F6BE ()
 *
 * Called From: B4E6:04FE:0032:B94E
 */
void f__B4E6_04FE_0008_F6BE()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0506); emu_cs = 0x2B6C; f__2B6C_0169_001E_97C8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_0506_000F_AD85();
}

/**
 * Decompiled function f__B4E6_0506_000F_AD85()
 *
 * @name f__B4E6_0506_000F_AD85
 * @implements B4E6:0506:000F:AD85 ()
 *
 * Called From: B4E6:0506:0008:F6BE
 */
void f__B4E6_0506_000F_AD85()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4E6_0515_0006_137A(); return;
}

/**
 * Decompiled function f__B4E6_0509_000C_2DC1()
 *
 * @name f__B4E6_0509_000C_2DC1
 * @implements B4E6:0509:000C:2DC1 ()
 *
 * Called From: B4E6:04B0:0016:4DB2
 */
void f__B4E6_0509_000C_2DC1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4E6_0515_0006_137A(); return;
}

/**
 * Decompiled function f__B4E6_0515_0006_137A()
 *
 * @name f__B4E6_0515_0006_137A
 * @implements B4E6:0515:0006:137A ()
 *
 * Called From: B4E6:0513:000C:2DC1
 * Called From: B4E6:0513:000F:AD85
 */
void f__B4E6_0515_0006_137A()
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
