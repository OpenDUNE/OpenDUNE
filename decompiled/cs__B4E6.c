/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4E6_0000_001A_C6C7()
 *
 * @name f__B4E6_0000_001A_C6C7
 * @implements B4E6:0000:001A:C6C7 ()
 *
 * Called From: B4E6:014F:004A:C989
 * Called From: B4E6:0174:000C:F796
 * Called From: B4E6:03B1:000E:716E
 * Called From: B4E6:041D:0010:2276
 * Called From: B4E6:0468:0011:6F94
 * Called From: B4E6:04BF:0016:5921
 */
void f__B4E6_0000_001A_C6C7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0xFF);
	if (!emu_flags.zf) { f__B4E6_001A_0007_CF45(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0xFF);
	if (!emu_flags.zf) { f__B4E6_001A_0007_CF45(); return; }
	emu_movw(&emu_ax.x, emu_si);
	/* Unresolved jump */ emu_ip = 0x006F; emu_last_cs = 0xB4E6; emu_last_ip = 0x0018; emu_last_length = 0x001A; emu_last_crc = 0xC6C7; emu_call();
}

/**
 * Decompiled function f__B4E6_0018_0002_EABA()
 *
 * @name f__B4E6_0018_0002_EABA
 * @implements B4E6:0018:0002:EABA ()
 *
 * Called From: B4E6:006D:0013:9211
 */
void f__B4E6_0018_0002_EABA()
{
	f__B4E6_006F_0005_8BCF(); return;
}

/**
 * Decompiled function f__B4E6_001A_0007_CF45()
 *
 * @name f__B4E6_001A_0007_CF45
 * @implements B4E6:001A:0007:CF45 ()
 *
 * Called From: B4E6:000E:001A:C6C7
 * Called From: B4E6:0014:001A:C6C7
 */
void f__B4E6_001A_0007_CF45()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	f__B4E6_0043_0006_A14D(); return;
}

/**
 * Decompiled function f__B4E6_0021_0010_9BFD()
 *
 * @name f__B4E6_0021_0010_9BFD
 * @implements B4E6:0021:0010:9BFD ()
 *
 * Called From: B4E6:0045:0006:A14D
 * Called From: B4E6:0045:0018:5CEE
 * Called From: B4E6:0045:0009:66CE
 */
void f__B4E6_0021_0010_9BFD()
{
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_addb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_cs); emu_push(0x0031); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_0031_0018_5CEE();
}

/**
 * Decompiled function f__B4E6_0031_0018_5CEE()
 *
 * @name f__B4E6_0031_0018_5CEE
 * @implements B4E6:0031:0018:5CEE ()
 *
 * Called From: B4E6:0031:0010:9BFD
 */
void f__B4E6_0031_0018_5CEE()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_andw(&emu_cx.x, emu_ax.x);
	emu_andw(&emu_bx.x, emu_dx.x);
	emu_orw(&emu_cx.x, emu_bx.x);
	if (emu_flags.zf) { f__B4E6_0040_0009_66CE(); return; }
	emu_decw(&emu_si);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4E6_0021_0010_9BFD(); return; }
	f__B4E6_004C_0010_9BFD(); return;
}

/**
 * Decompiled function f__B4E6_0040_0009_66CE()
 *
 * @name f__B4E6_0040_0009_66CE
 * @implements B4E6:0040:0009:66CE ()
 *
 * Called From: B4E6:003D:0018:5CEE
 */
void f__B4E6_0040_0009_66CE()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4E6_0021_0010_9BFD(); return; }
	f__B4E6_004C_0010_9BFD(); return;
}

/**
 * Decompiled function f__B4E6_0043_0006_A14D()
 *
 * @name f__B4E6_0043_0006_A14D
 * @implements B4E6:0043:0006:A14D ()
 *
 * Called From: B4E6:001F:0007:CF45
 */
void f__B4E6_0043_0006_A14D()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4E6_0021_0010_9BFD(); return; }
	f__B4E6_004C_0010_9BFD(); return;
}

/**
 * Decompiled function f__B4E6_0049_0013_7B0C()
 *
 * @name f__B4E6_0049_0013_7B0C
 * @implements B4E6:0049:0013:7B0C ()
 *
 * Called From: B4E6:0068:0013:9211
 */
void f__B4E6_0049_0013_7B0C()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_addb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_cs); emu_push(0x005C); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_005C_0013_9211();
}

/**
 * Decompiled function f__B4E6_004C_0010_9BFD()
 *
 * @name f__B4E6_004C_0010_9BFD
 * @implements B4E6:004C:0010:9BFD ()
 *
 * Called From: B4E6:0047:0006:A14D
 * Called From: B4E6:0047:0018:5CEE
 * Called From: B4E6:0047:0009:66CE
 */
void f__B4E6_004C_0010_9BFD()
{
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_addb(&emu_cx.l, emu_get_memory8(emu_ss, emu_bp,  0xC));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_cs); emu_push(0x005C); emu_cs = 0x01F7; f__01F7_058E_0015_CED2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_005C_0013_9211();
}

/**
 * Decompiled function f__B4E6_005C_0013_9211()
 *
 * @name f__B4E6_005C_0013_9211
 * @implements B4E6:005C:0013:9211 ()
 *
 * Called From: B4E6:005C:0010:9BFD
 * Called From: B4E6:005C:0013:7B0C
 */
void f__B4E6_005C_0013_9211()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_andw(&emu_cx.x, emu_ax.x);
	emu_andw(&emu_bx.x, emu_dx.x);
	emu_orw(&emu_cx.x, emu_bx.x);
	if (emu_flags.zf) { f__B4E6_0049_0013_7B0C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4E6_0018_0002_EABA(); return;
}

/**
 * Decompiled function f__B4E6_006F_0005_8BCF()
 *
 * @name f__B4E6_006F_0005_8BCF
 * @implements B4E6:006F:0005:8BCF ()
 *
 * Called From: B4E6:0018:0002:EABA
 */
void f__B4E6_006F_0005_8BCF()
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
 * Decompiled function f__B4E6_0074_000C_3554()
 *
 * @name f__B4E6_0074_000C_3554
 * @implements B4E6:0074:000C:3554 ()
 *
 * Called From: B4E6:04FB:0032:8EC7
 */
void f__B4E6_0074_000C_3554()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_xorw(&emu_si, emu_si);
	f__B4E6_00D7_0009_5534(); return;
}

/**
 * Decompiled function f__B4E6_0080_0005_6168()
 *
 * @name f__B4E6_0080_0005_6168
 * @implements B4E6:0080:0005:6168 ()
 *
 * Called From: B4E6:00DA:0009:5534
 * Called From: B4E6:00DA:000B:64BF
 */
void f__B4E6_0080_0005_6168()
{
	emu_push(emu_cs); emu_push(0x0085); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_0085_0019_6335();
}

/**
 * Decompiled function f__B4E6_0085_0019_6335()
 *
 * @name f__B4E6_0085_0019_6335
 * @implements B4E6:0085:0019:6335 ()
 *
 * Called From: B4E6:0085:0005:6168
 */
void f__B4E6_0085_0019_6335()
{
	emu_movw(&emu_ax.x, 0x22);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x009E); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_009E_000C_3F1A();
}

/**
 * Decompiled function f__B4E6_009E_000C_3F1A()
 *
 * @name f__B4E6_009E_000C_3F1A
 * @implements B4E6:009E:000C:3F1A ()
 *
 * Called From: B4E6:009E:0019:6335
 */
void f__B4E6_009E_000C_3F1A()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00AA); emu_cs = 0x24FD; f__24FD_000A_000B_2043();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_00AA_001A_756B();
}

/**
 * Decompiled function f__B4E6_00AA_001A_756B()
 *
 * @name f__B4E6_00AA_001A_756B
 * @implements B4E6:00AA:001A:756B ()
 *
 * Called From: B4E6:00AA:000C:3F1A
 */
void f__B4E6_00AA_001A_756B()
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
	emu_push(emu_cs); emu_push(0x00C4); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_00C4_0008_3BE5();
}

/**
 * Decompiled function f__B4E6_00C4_0008_3BE5()
 *
 * @name f__B4E6_00C4_0008_3BE5
 * @implements B4E6:00C4:0008:3BE5 ()
 *
 * Called From: B4E6:00C4:001A:756B
 */
void f__B4E6_00C4_0008_3BE5()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x00CC); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_00CC_0009_B4B2();
}

/**
 * Decompiled function f__B4E6_00CC_0009_B4B2()
 *
 * @name f__B4E6_00CC_0009_B4B2
 * @implements B4E6:00CC:0009:B4B2 ()
 *
 * Called From: B4E6:00CC:0008:3BE5
 */
void f__B4E6_00CC_0009_B4B2()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00D5); emu_cs = 0x24FD; f__24FD_000A_000B_2043();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_00D5_000B_64BF();
}

/**
 * Decompiled function f__B4E6_00D5_000B_64BF()
 *
 * @name f__B4E6_00D5_000B_64BF
 * @implements B4E6:00D5:000B:64BF ()
 *
 * Called From: B4E6:00D5:0009:B4B2
 */
void f__B4E6_00D5_000B_64BF()
{
	emu_pop(&emu_cx.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x3);
	if ((emu_flags.sf != emu_flags.of)) { f__B4E6_0080_0005_6168(); return; }
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E6_00D7_0009_5534()
 *
 * @name f__B4E6_00D7_0009_5534
 * @implements B4E6:00D7:0009:5534 ()
 *
 * Called From: B4E6:007E:000C:3554
 */
void f__B4E6_00D7_0009_5534()
{
	emu_cmpws(&emu_si, 0x3);
	if ((emu_flags.sf != emu_flags.of)) { f__B4E6_0080_0005_6168(); return; }
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E6_00E0_0022_452E()
 *
 * @name f__B4E6_00E0_0022_452E
 * @implements B4E6:00E0:0022:452E ()
 *
 * Called From: B4E6:0311:0074:F135
 * Called From: B4E6:0311:007A:6EC9
 * Called From: B4E6:0383:0018:2374
 */
void f__B4E6_00E0_0022_452E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { f__B4E6_0102_0004_E839(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4E6_0102_0004_E839(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if ((emu_flags.sf != emu_flags.of)) { f__B4E6_0102_0004_E839(); return; }
	emu_cmpw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4E6_0102_0004_E839(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__B4E6_0104_0002_C03A(); return;
}

/**
 * Decompiled function f__B4E6_0102_0004_E839()
 *
 * @name f__B4E6_0102_0004_E839
 * @implements B4E6:0102:0004:E839 ()
 *
 * Called From: B4E6:00EC:0022:452E
 * Called From: B4E6:00F1:0022:452E
 * Called From: B4E6:00F6:0022:452E
 * Called From: B4E6:00FB:0022:452E
 */
void f__B4E6_0102_0004_E839()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__B4E6_0106_0002_2597(); return;
}

/**
 * Decompiled function f__B4E6_0104_0002_C03A()
 *
 * @name f__B4E6_0104_0002_C03A
 * @implements B4E6:0104:0002:C03A ()
 *
 * Called From: B4E6:0100:0022:452E
 */
void f__B4E6_0104_0002_C03A()
{
	f__B4E6_0106_0002_2597(); return;
}

/**
 * Decompiled function f__B4E6_0106_0002_2597()
 *
 * @name f__B4E6_0106_0002_2597
 * @implements B4E6:0106:0002:2597 ()
 *
 * Called From: B4E6:0104:0004:E839
 * Called From: B4E6:0104:0002:C03A
 */
void f__B4E6_0106_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E6_0108_004A_C989()
 *
 * @name f__B4E6_0108_004A_C989
 * @implements B4E6:0108:004A:C989 ()
 *
 * Called From: 34E6:0025:0005:0000
 */
void f__B4E6_0108_004A_C989()
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
	emu_push(0x0152); f__B4E6_0000_001A_C6C7();
	f__B4E6_0152_0015_1CE9();
}

/**
 * Decompiled function f__B4E6_0152_0015_1CE9()
 *
 * @name f__B4E6_0152_0015_1CE9
 * @implements B4E6:0152:0015:1CE9 ()
 *
 * Called From: B4E6:0152:004A:C989
 */
void f__B4E6_0152_0015_1CE9()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_push(emu_cs); emu_push(0x0167); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_0167_0004_D3F9();
}

/**
 * Decompiled function f__B4E6_0167_0004_D3F9()
 *
 * @name f__B4E6_0167_0004_D3F9
 * @implements B4E6:0167:0004:D3F9 ()
 *
 * Called From: B4E6:0167:0015:1CE9
 */
void f__B4E6_0167_0004_D3F9()
{
	emu_xorw(&emu_si, emu_si);
	f__B4E6_01E5_0010_54B3(); return;
}

/**
 * Decompiled function f__B4E6_016B_000C_F796()
 *
 * @name f__B4E6_016B_000C_F796
 * @implements B4E6:016B:000C:F796 ()
 *
 * Called From: B4E6:01E8:0010:54B3
 * Called From: B4E6:01E8:0014:DF38
 */
void f__B4E6_016B_000C_F796()
{
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0177); f__B4E6_0000_001A_C6C7();
	f__B4E6_0177_003F_3C4C();
}

/**
 * Decompiled function f__B4E6_0177_003F_3C4C()
 *
 * @name f__B4E6_0177_003F_3C4C
 * @implements B4E6:0177:003F:3C4C ()
 *
 * Called From: B4E6:0177:000C:F796
 */
void f__B4E6_0177_003F_3C4C()
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
	if (!emu_flags.zf) { f__B4E6_01B6_002B_FAB3(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x25E6), 0x0);
	if (!emu_flags.zf) { f__B4E6_01B1_0005_A47A(); return; }
	emu_cmpb(&emu_get_memory8(emu_ds, 0x00,  0x7097), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x01B6; emu_last_cs = 0xB4E6; emu_last_ip = 0x01AF; emu_last_length = 0x003F; emu_last_crc = 0x3C4C; emu_call(); return; }
	emu_movw(&emu_ax.x, 0x6);
	/* Unresolved jump */ emu_ip = 0x01B9; emu_last_cs = 0xB4E6; emu_last_ip = 0x01B4; emu_last_length = 0x003F; emu_last_crc = 0x3C4C; emu_call();
}

/**
 * Decompiled function f__B4E6_01B1_0005_A47A()
 *
 * @name f__B4E6_01B1_0005_A47A
 * @implements B4E6:01B1:0005:A47A ()
 *
 * Called From: B4E6:01A8:003F:3C4C
 */
void f__B4E6_01B1_0005_A47A()
{
	emu_movw(&emu_ax.x, 0x6);
	f__B4E6_01B9_0028_FBE4(); return;
}

/**
 * Decompiled function f__B4E6_01B6_002B_FAB3()
 *
 * @name f__B4E6_01B6_002B_FAB3
 * @implements B4E6:01B6:002B:FAB3 ()
 *
 * Called From: B4E6:01A1:003F:3C4C
 */
void f__B4E6_01B6_002B_FAB3()
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
	emu_push(emu_cs); emu_push(0x01E1); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_01E1_0014_DF38();
}

/**
 * Decompiled function f__B4E6_01B9_0028_FBE4()
 *
 * @name f__B4E6_01B9_0028_FBE4
 * @implements B4E6:01B9:0028:FBE4 ()
 *
 * Called From: B4E6:01B4:0005:A47A
 */
void f__B4E6_01B9_0028_FBE4()
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
	emu_push(emu_cs); emu_push(0x01E1); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_01E1_0014_DF38();
}

/**
 * Decompiled function f__B4E6_01E1_0014_DF38()
 *
 * @name f__B4E6_01E1_0014_DF38
 * @implements B4E6:01E1:0014:DF38 ()
 *
 * Called From: B4E6:01E1:0028:FBE4
 * Called From: B4E6:01E1:002B:FAB3
 */
void f__B4E6_01E1_0014_DF38()
{
	emu_addws(&emu_sp, 0xE);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((emu_flags.sf != emu_flags.of)) { f__B4E6_016B_000C_F796(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FAE), emu_ax.x);
	emu_push(emu_cs); emu_push(0x01F5); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_01F5_0005_E089();
}

/**
 * Decompiled function f__B4E6_01E5_0010_54B3()
 *
 * @name f__B4E6_01E5_0010_54B3
 * @implements B4E6:01E5:0010:54B3 ()
 *
 * Called From: B4E6:0169:0004:D3F9
 */
void f__B4E6_01E5_0010_54B3()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((emu_flags.sf != emu_flags.of)) { f__B4E6_016B_000C_F796(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FAE), emu_ax.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x01F5); emu_cs = 0x2B6C; emu_ip = 0x0169; emu_last_cs = 0xB4E6; emu_last_ip = 0x01F0; emu_last_length = 0x0010; emu_last_crc = 0x54B3; emu_call();
	f__B4E6_01F5_0005_E089();
}

/**
 * Decompiled function f__B4E6_01F5_0005_E089()
 *
 * @name f__B4E6_01F5_0005_E089
 * @implements B4E6:01F5:0005:E089 ()
 *
 * Called From: B4E6:01F5:0014:DF38
 */
void f__B4E6_01F5_0005_E089()
{
	emu_push(emu_cs); emu_push(0x01FA); emu_cs = 0x29E8; f__29E8_073F_000E_6816();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_01FA_0006_F7CE();
}

/**
 * Decompiled function f__B4E6_01FA_0006_F7CE()
 *
 * @name f__B4E6_01FA_0006_F7CE
 * @implements B4E6:01FA:0006:F7CE ()
 *
 * Called From: B4E6:01FA:0005:E089
 */
void f__B4E6_01FA_0006_F7CE()
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
 * Decompiled function f__B4E6_0200_0091_FAEA()
 *
 * @name f__B4E6_0200_0091_FAEA
 * @implements B4E6:0200:0091:FAEA ()
 *
 * Called From: 34E6:002A:0005:0000
 */
void f__B4E6_0200_0091_FAEA()
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
	emu_push(emu_cs); emu_push(0x0291); emu_cs = 0x29E8; f__29E8_072F_000F_651A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_0291_0009_0D8E();
}

/**
 * Decompiled function f__B4E6_0291_0009_0D8E()
 *
 * @name f__B4E6_0291_0009_0D8E
 * @implements B4E6:0291:0009:0D8E ()
 *
 * Called From: B4E6:0291:0091:FAEA
 */
void f__B4E6_0291_0009_0D8E()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4E6_02A0_0074_F135(); return; }
	emu_push(emu_cs); emu_push(0x029A); emu_cs = 0x29E8; f__29E8_0897_0016_2028();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_029A_007A_6EC9();
}

/**
 * Decompiled function f__B4E6_029A_007A_6EC9()
 *
 * @name f__B4E6_029A_007A_6EC9
 * @implements B4E6:029A:007A:6EC9 ()
 *
 * Called From: B4E6:029A:0009:0D8E
 */
void f__B4E6_029A_007A_6EC9()
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
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x032E; emu_last_cs = 0xB4E6; emu_last_ip = 0x02F5; emu_last_length = 0x007A; emu_last_crc = 0x6EC9; emu_call(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_push(emu_cs);
	emu_push(0x0314); f__B4E6_00E0_0022_452E();
	f__B4E6_0314_0035_7204();
}

/**
 * Decompiled function f__B4E6_02A0_0074_F135()
 *
 * @name f__B4E6_02A0_0074_F135
 * @implements B4E6:02A0:0074:F135 ()
 *
 * Called From: B4E6:0293:0009:0D8E
 */
void f__B4E6_02A0_0074_F135()
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
	if (!emu_flags.zf) { f__B4E6_032E_001B_A3EF(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_push(emu_cs);
	emu_push(0x0314); f__B4E6_00E0_0022_452E();
	f__B4E6_0314_0035_7204();
}

/**
 * Decompiled function f__B4E6_0314_0035_7204()
 *
 * @name f__B4E6_0314_0035_7204
 * @implements B4E6:0314:0035:7204 ()
 *
 * Called From: B4E6:0314:0074:F135
 * Called From: B4E6:0314:007A:6EC9
 */
void f__B4E6_0314_0035_7204()
{
	emu_addws(&emu_sp, 0xC);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4E6_032E_001B_A3EF(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x25E6), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x032E; emu_last_cs = 0xB4E6; emu_last_ip = 0x0320; emu_last_length = 0x0035; emu_last_crc = 0x7204; emu_call(); return; }
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
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0349; emu_last_cs = 0xB4E6; emu_last_ip = 0x0340; emu_last_length = 0x0035; emu_last_crc = 0x7204; emu_call(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__B4E6_033A_000F_4BEF(); return; }
	/* Unresolved jump */ emu_ip = 0x03A2; emu_last_cs = 0xB4E6; emu_last_ip = 0x0347; emu_last_length = 0x0035; emu_last_crc = 0x7204; emu_call();
}

/**
 * Decompiled function f__B4E6_032E_001B_A3EF()
 *
 * @name f__B4E6_032E_001B_A3EF
 * @implements B4E6:032E:001B:A3EF ()
 *
 * Called From: B4E6:02F5:0074:F135
 * Called From: B4E6:0319:0035:7204
 */
void f__B4E6_032E_001B_A3EF()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x26), emu_ax.x);
	emu_movw(&emu_cx.x, 0xB);
	emu_movw(&emu_bx.x, 0x51B);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x26));
	if (emu_flags.zf) { f__B4E6_0349_0004_34FB(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__B4E6_033A_000F_4BEF(); return; }
	/* Unresolved jump */ emu_ip = 0x03A2; emu_last_cs = 0xB4E6; emu_last_ip = 0x0347; emu_last_length = 0x001B; emu_last_crc = 0xA3EF; emu_call();
}

/**
 * Decompiled function f__B4E6_033A_000F_4BEF()
 *
 * @name f__B4E6_033A_000F_4BEF
 * @implements B4E6:033A:000F:4BEF ()
 *
 * Called From: B4E6:0345:001B:A3EF
 * Called From: B4E6:0345:000F:4BEF
 * Called From: B4E6:0345:0035:7204
 */
void f__B4E6_033A_000F_4BEF()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x26));
	if (emu_flags.zf) { f__B4E6_0349_0004_34FB(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__B4E6_033A_000F_4BEF(); return; }
	f__B4E6_03A2_0004_C9D9(); return;
}

/**
 * Decompiled function f__B4E6_0349_0004_34FB()
 *
 * @name f__B4E6_0349_0004_34FB
 * @implements B4E6:0349:0004:34FB ()
 *
 * Called From: B4E6:0340:000F:4BEF
 * Called From: B4E6:0340:001B:A3EF
 */
void f__B4E6_0349_0004_34FB()
{

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x16);
	switch (emu_ip) {
		case 0x034D: f__B4E6_034D_000B_AD03(); return;
		case 0x0358: f__B4E6_0358_000B_4490(); return;
		case 0x0363: f__B4E6_0363_0005_BC91(); return;
		case 0x0368: f__B4E6_0368_0006_92B8(); return;
		case 0x036E: f__B4E6_036E_0018_2374(); return;
		case 0x039D: f__B4E6_039D_0005_8B75(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4E6; emu_last_ip = 0x0349; emu_last_length = 0x0004; emu_last_crc = 0x34FB;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4E6_034D_000B_AD03()
 *
 * @name f__B4E6_034D_000B_AD03
 * @implements B4E6:034D:000B:AD03 ()
 *
 * Called From: B4E6:0349:0004:34FB
 */
void f__B4E6_034D_000B_AD03()
{
	emu_decw(&emu_si);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4E6_0355_0003_DD0A(); return; }
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4E6_0403_0008_D54F(); return;
}

/**
 * Decompiled function f__B4E6_0355_0003_DD0A()
 *
 * @name f__B4E6_0355_0003_DD0A
 * @implements B4E6:0355:0003:DD0A ()
 *
 * Called From: B4E6:0350:000B:AD03
 */
void f__B4E6_0355_0003_DD0A()
{
	f__B4E6_0403_0008_D54F(); return;
}

/**
 * Decompiled function f__B4E6_0358_000B_4490()
 *
 * @name f__B4E6_0358_000B_4490
 * @implements B4E6:0358:000B:4490 ()
 *
 * Called From: B4E6:0349:0004:34FB
 */
void f__B4E6_0358_000B_4490()
{
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4E6_0360_0003_1D08(); return; }
	emu_xorw(&emu_si, emu_si);
	f__B4E6_0403_0008_D54F(); return;
}

/**
 * Decompiled function f__B4E6_0360_0003_1D08()
 *
 * @name f__B4E6_0360_0003_1D08
 * @implements B4E6:0360:0003:1D08 ()
 *
 * Called From: B4E6:035C:000B:4490
 */
void f__B4E6_0360_0003_1D08()
{
	f__B4E6_0403_0008_D54F(); return;
}

/**
 * Decompiled function f__B4E6_0363_0005_BC91()
 *
 * @name f__B4E6_0363_0005_BC91
 * @implements B4E6:0363:0005:BC91 ()
 *
 * Called From: B4E6:0349:0004:34FB
 */
void f__B4E6_0363_0005_BC91()
{
	emu_xorw(&emu_si, emu_si);
	f__B4E6_0403_0008_D54F(); return;
}

/**
 * Decompiled function f__B4E6_0368_0006_92B8()
 *
 * @name f__B4E6_0368_0006_92B8
 * @implements B4E6:0368:0006:92B8 ()
 *
 * Called From: B4E6:0349:0004:34FB
 */
void f__B4E6_0368_0006_92B8()
{
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__B4E6_0403_0008_D54F(); return;
}

/**
 * Decompiled function f__B4E6_036E_0018_2374()
 *
 * @name f__B4E6_036E_0018_2374
 * @implements B4E6:036E:0018:2374 ()
 *
 * Called From: B4E6:0349:0004:34FB
 */
void f__B4E6_036E_0018_2374()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7066));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x7064));
	emu_push(emu_cs);
	emu_push(0x0386); f__B4E6_00E0_0022_452E();
	f__B4E6_0386_0015_B505();
}

/**
 * Decompiled function f__B4E6_0386_0015_B505()
 *
 * @name f__B4E6_0386_0015_B505
 * @implements B4E6:0386:0015:B505 ()
 *
 * Called From: B4E6:0386:0018:2374
 */
void f__B4E6_0386_0015_B505()
{
	emu_addws(&emu_sp, 0xC);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4E6_039B_0002_EF3A(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7066));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movw(&emu_si, emu_ax.x);
	f__B4E6_039D_0005_8B75(); return;
}

/**
 * Decompiled function f__B4E6_039B_0002_EF3A()
 *
 * @name f__B4E6_039B_0002_EF3A
 * @implements B4E6:039B:0002:EF3A ()
 *
 * Called From: B4E6:038B:0015:B505
 */
void f__B4E6_039B_0002_EF3A()
{
	f__B4E6_03FB_0008_F6A8(); return;
}

/**
 * Decompiled function f__B4E6_039D_0005_8B75()
 *
 * @name f__B4E6_039D_0005_8B75
 * @implements B4E6:039D:0005:8B75 ()
 *
 * Called From: B4E6:0349:0004:34FB
 * Called From: B4E6:0399:0015:B505
 */
void f__B4E6_039D_0005_8B75()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	f__B4E6_0403_0008_D54F(); return;
}

/**
 * Decompiled function f__B4E6_03A2_0004_C9D9()
 *
 * @name f__B4E6_03A2_0004_C9D9
 * @implements B4E6:03A2:0004:C9D9 ()
 *
 * Called From: B4E6:0347:000F:4BEF
 */
void f__B4E6_03A2_0004_C9D9()
{
	emu_xorw(&emu_di, emu_di);
	f__B4E6_03F2_0011_BC0B(); return;
}

/**
 * Decompiled function f__B4E6_03A6_000E_716E()
 *
 * @name f__B4E6_03A6_000E_716E
 * @implements B4E6:03A6:000E:716E ()
 *
 * Called From: B4E6:03F9:0011:BC0B
 * Called From: B4E6:03F9:0012:7C1A
 */
void f__B4E6_03A6_000E_716E()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x03B4); f__B4E6_0000_001A_C6C7();
	f__B4E6_03B4_0019_E3C0();
}

/**
 * Decompiled function f__B4E6_03B4_0019_E3C0()
 *
 * @name f__B4E6_03B4_0019_E3C0
 * @implements B4E6:03B4:0019:E3C0 ()
 *
 * Called From: B4E6:03B4:000E:716E
 */
void f__B4E6_03B4_0019_E3C0()
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
	emu_push(emu_cs); emu_push(0x03CD); emu_cs = 0x01F7; f__01F7_10C3_0010_64C2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_03CD_000E_C8A0();
}

/**
 * Decompiled function f__B4E6_03CD_000E_C8A0()
 *
 * @name f__B4E6_03CD_000E_C8A0
 * @implements B4E6:03CD:000E:C8A0 ()
 *
 * Called From: B4E6:03CD:0019:E3C0
 */
void f__B4E6_03CD_000E_C8A0()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_andw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03DB); emu_cs = 0x29E8; f__29E8_0479_0009_A77A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_03DB_0007_B6D2();
}

/**
 * Decompiled function f__B4E6_03DB_0007_B6D2()
 *
 * @name f__B4E6_03DB_0007_B6D2
 * @implements B4E6:03DB:0007:B6D2 ()
 *
 * Called From: B4E6:03DB:000E:C8A0
 */
void f__B4E6_03DB_0007_B6D2()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03E2); emu_cs = 0x01F7; f__01F7_10C3_0010_64C2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_03E2_000F_F6A3();
}

/**
 * Decompiled function f__B4E6_03E2_000F_F6A3()
 *
 * @name f__B4E6_03E2_000F_F6A3
 * @implements B4E6:03E2:000F:F6A3 ()
 *
 * Called From: B4E6:03E2:0007:B6D2
 */
void f__B4E6_03E2_000F_F6A3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4E6_03F1_0012_7C1A(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_si, emu_ax.x);
	f__B4E6_03FB_0008_F6A8(); return;
}

/**
 * Decompiled function f__B4E6_03F1_0012_7C1A()
 *
 * @name f__B4E6_03F1_0012_7C1A
 * @implements B4E6:03F1:0012:7C1A ()
 *
 * Called From: B4E6:03E6:000F:F6A3
 */
void f__B4E6_03F1_0012_7C1A()
{
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4E6_03A6_000E_716E(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FAC), emu_ax.x);
	f__B4E6_0403_0008_D54F(); return;
}

/**
 * Decompiled function f__B4E6_03F2_0011_BC0B()
 *
 * @name f__B4E6_03F2_0011_BC0B
 * @implements B4E6:03F2:0011:BC0B ()
 *
 * Called From: B4E6:03A4:0004:C9D9
 */
void f__B4E6_03F2_0011_BC0B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4E6_03A6_000E_716E(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FAC), emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x0403; emu_last_cs = 0xB4E6; emu_last_ip = 0x0401; emu_last_length = 0x0011; emu_last_crc = 0xBC0B; emu_call();
}

/**
 * Decompiled function f__B4E6_03FB_0008_F6A8()
 *
 * @name f__B4E6_03FB_0008_F6A8
 * @implements B4E6:03FB:0008:F6A8 ()
 *
 * Called From: B4E6:039B:0002:EF3A
 * Called From: B4E6:03EF:000F:F6A3
 */
void f__B4E6_03FB_0008_F6A8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7FAC), emu_ax.x);
	f__B4E6_0403_0008_D54F(); return;
}

/**
 * Decompiled function f__B4E6_0403_0008_D54F()
 *
 * @name f__B4E6_0403_0008_D54F
 * @implements B4E6:0403:0008:D54F ()
 *
 * Called From: B4E6:0355:000B:AD03
 * Called From: B4E6:0355:0003:DD0A
 * Called From: B4E6:0360:000B:4490
 * Called From: B4E6:0360:0003:1D08
 * Called From: B4E6:0365:0005:BC91
 * Called From: B4E6:036B:0006:92B8
 * Called From: B4E6:03A0:0005:8B75
 * Called From: B4E6:0401:0012:7C1A
 * Called From: B4E6:0401:0008:F6A8
 */
void f__B4E6_0403_0008_D54F()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if (!emu_flags.zf) { f__B4E6_040B_0005_6168(); return; }
	f__B4E6_04AC_0016_5921(); return;
}

/**
 * Decompiled function f__B4E6_040B_0005_6168()
 *
 * @name f__B4E6_040B_0005_6168
 * @implements B4E6:040B:0005:6168 ()
 *
 * Called From: B4E6:0406:0008:D54F
 */
void f__B4E6_040B_0005_6168()
{
	emu_push(emu_cs); emu_push(0x0410); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_0410_0010_2276();
}

/**
 * Decompiled function f__B4E6_0410_0010_2276()
 *
 * @name f__B4E6_0410_0010_2276
 * @implements B4E6:0410:0010:2276 ()
 *
 * Called From: B4E6:0410:0005:6168
 */
void f__B4E6_0410_0010_2276()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_cs);
	emu_push(0x0420); f__B4E6_0000_001A_C6C7();
	f__B4E6_0420_003A_EC1D();
}

/**
 * Decompiled function f__B4E6_0420_003A_EC1D()
 *
 * @name f__B4E6_0420_003A_EC1D
 * @implements B4E6:0420:003A:EC1D ()
 *
 * Called From: B4E6:0420:0010:2276
 */
void f__B4E6_0420_003A_EC1D()
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
	emu_push(emu_cs); emu_push(0x045A); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_045A_0011_6F94();
}

/**
 * Decompiled function f__B4E6_045A_0011_6F94()
 *
 * @name f__B4E6_045A_0011_6F94
 * @implements B4E6:045A:0011:6F94 ()
 *
 * Called From: B4E6:045A:003A:EC1D
 */
void f__B4E6_045A_0011_6F94()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x046B); f__B4E6_0000_001A_C6C7();
	f__B4E6_046B_0039_9AB5();
}

/**
 * Decompiled function f__B4E6_046B_0039_9AB5()
 *
 * @name f__B4E6_046B_0039_9AB5
 * @implements B4E6:046B:0039:9AB5 ()
 *
 * Called From: B4E6:046B:0011:6F94
 */
void f__B4E6_046B_0039_9AB5()
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
	emu_push(emu_cs); emu_push(0x04A4); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_04A4_0008_3BE5();
}

/**
 * Decompiled function f__B4E6_04A4_0008_3BE5()
 *
 * @name f__B4E6_04A4_0008_3BE5
 * @implements B4E6:04A4:0008:3BE5 ()
 *
 * Called From: B4E6:04A4:0039:9AB5
 */
void f__B4E6_04A4_0008_3BE5()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x04AC); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_04AC_0016_5921();
}

/**
 * Decompiled function f__B4E6_04AC_0016_5921()
 *
 * @name f__B4E6_04AC_0016_5921
 * @implements B4E6:04AC:0016:5921 ()
 *
 * Called From: B4E6:0408:0008:D54F
 * Called From: B4E6:04AC:0008:3BE5
 */
void f__B4E6_04AC_0016_5921()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFF);
	if (emu_flags.zf) { f__B4E6_0509_000C_E950(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x04C2); f__B4E6_0000_001A_C6C7();
	f__B4E6_04C2_000A_A8DF();
}

/**
 * Decompiled function f__B4E6_04C2_000A_A8DF()
 *
 * @name f__B4E6_04C2_000A_A8DF
 * @implements B4E6:04C2:000A:A8DF ()
 *
 * Called From: B4E6:04C2:0016:5921
 */
void f__B4E6_04C2_000A_A8DF()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_cs); emu_push(0x04CC); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_04CC_0032_8EC7();
}

/**
 * Decompiled function f__B4E6_04CC_0032_8EC7()
 *
 * @name f__B4E6_04CC_0032_8EC7
 * @implements B4E6:04CC:0032:8EC7 ()
 *
 * Called From: B4E6:04CC:000A:A8DF
 */
void f__B4E6_04CC_0032_8EC7()
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
	emu_push(0x04FE); f__B4E6_0074_000C_3554();
	f__B4E6_04FE_0008_3BE5();
}

/**
 * Decompiled function f__B4E6_04FE_0008_3BE5()
 *
 * @name f__B4E6_04FE_0008_3BE5
 * @implements B4E6:04FE:0008:3BE5 ()
 *
 * Called From: B4E6:04FE:0032:8EC7
 */
void f__B4E6_04FE_0008_3BE5()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0506); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E6) { ovl__34E6(0xFF); }
	f__B4E6_0506_000F_1AAE();
}

/**
 * Decompiled function f__B4E6_0506_000F_1AAE()
 *
 * @name f__B4E6_0506_000F_1AAE
 * @implements B4E6:0506:000F:1AAE ()
 *
 * Called From: B4E6:0506:0008:3BE5
 */
void f__B4E6_0506_000F_1AAE()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4E6_0515_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4E6_0509_000C_E950()
 *
 * @name f__B4E6_0509_000C_E950
 * @implements B4E6:0509:000C:E950 ()
 *
 * Called From: B4E6:04B0:0016:5921
 */
void f__B4E6_0509_000C_E950()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__B4E6_0515_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4E6_0515_0006_F7CE()
 *
 * @name f__B4E6_0515_0006_F7CE
 * @implements B4E6:0515:0006:F7CE ()
 *
 * Called From: B4E6:0513:000C:E950
 * Called From: B4E6:0513:000F:1AAE
 */
void f__B4E6_0515_0006_F7CE()
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
