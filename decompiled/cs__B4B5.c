/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4B5_0000_0014_8B5D()
 *
 * @name f__B4B5_0000_0014_8B5D
 * @implements B4B5:0000:0014:8B5D ()
 *
 * Called From: 34B5:0020:0005:1CC6
 */
void f__B4B5_0000_0014_8B5D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xA2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0xFF);
	if (!emu_flags.zf) { f__B4B5_0014_0038_FB9F(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x107A; emu_last_cs = 0xB4B5; emu_last_ip = 0x0011; emu_last_length = 0x0014; emu_last_crc = 0x8B5D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B5_0011_0003_06F0()
 *
 * @name f__B4B5_0011_0003_06F0
 * @implements B4B5:0011:0003:06F0 ()
 *
 * Called From: B4B5:1077:0023:5541
 */
void f__B4B5_0011_0003_06F0()
{
	f__B4B5_107A_0006_137A(); return;
}

/**
 * Decompiled function f__B4B5_0014_0038_FB9F()
 *
 * @name f__B4B5_0014_0038_FB9F
 * @implements B4B5:0014:0038:FB9F ()
 *
 * Called From: B4B5:000D:0014:8B5D
 */
void f__B4B5_0014_0038_FB9F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B0), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, emu_bx.x,  0x37F8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EB2);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x22);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x004C); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_004C_000D_254F();
}

/**
 * Decompiled function f__B4B5_004C_000D_254F()
 *
 * @name f__B4B5_004C_000D_254F
 * @implements B4B5:004C:000D:254F ()
 *
 * Called From: B4B5:004C:0038:FB9F
 */
void f__B4B5_004C_000D_254F()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x22);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0059); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6875();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0059_0008_6AF0();
}

/**
 * Decompiled function f__B4B5_0059_0008_6AF0()
 *
 * @name f__B4B5_0059_0008_6AF0
 * @implements B4B5:0059:0008:6AF0 ()
 *
 * Called From: B4B5:0059:000D:254F
 */
void f__B4B5_0059_0008_6AF0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4B5_0061_0014_33B2(); return; }
	emu_ip = 0x000F; emu_last_cs = 0xB4B5; emu_last_ip = 0x005F; emu_last_length = 0x0008; emu_last_crc = 0x6AF0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B5_0061_0014_33B2()
 *
 * @name f__B4B5_0061_0014_33B2
 * @implements B4B5:0061:0014:33B2 ()
 *
 * Called From: B4B5:005D:0008:6AF0
 */
void f__B4B5_0061_0014_33B2()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_cs); emu_push(0x0075); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0075_001B_4254();
}

/**
 * Decompiled function f__B4B5_0075_001B_4254()
 *
 * @name f__B4B5_0075_001B_4254
 * @implements B4B5:0075:001B:4254 ()
 *
 * Called From: B4B5:0075:0014:33B2
 */
void f__B4B5_0075_001B_4254()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x22);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0090); emu_cs = 0x253D; f__253D_0000_0013_AAD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0090_0014_5D0D();
}

/**
 * Decompiled function f__B4B5_0090_0014_5D0D()
 *
 * @name f__B4B5_0090_0014_5D0D
 * @implements B4B5:0090:0014:5D0D ()
 *
 * Called From: B4B5:0090:001B:4254
 */
void f__B4B5_0090_0014_5D0D()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0xE6);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8CFD);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00A4); emu_cs = 0x01F7; f__01F7_2947_0014_9C5E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_00A4_0022_6570();
}

/**
 * Decompiled function f__B4B5_00A4_0022_6570()
 *
 * @name f__B4B5_00A4_0022_6570
 * @implements B4B5:00A4:0022:6570 ()
 *
 * Called From: B4B5:00A4:0014:5D0D
 */
void f__B4B5_00A4_0022_6570()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x7303), 0x290);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x72FF));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC7);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00C6); emu_cs = 0x34FC; ovl__34FC(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_00C6_001F_22F2();
}

/**
 * Decompiled function f__B4B5_00C6_001F_22F2()
 *
 * @name f__B4B5_00C6_001F_22F2
 * @implements B4B5:00C6:001F:22F2 ()
 *
 * Called From: B4B5:00C6:0022:6570
 */
void f__B4B5_00C6_001F_22F2()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x72FF), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x72FD));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1ED0);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00E5); emu_cs = 0x34FC; ovl__34FC(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_00E5_001F_E9FF();
}

/**
 * Decompiled function f__B4B5_00E5_001F_E9FF()
 *
 * @name f__B4B5_00E5_001F_E9FF
 * @implements B4B5:00E5:001F:E9FF ()
 *
 * Called From: B4B5:00E5:001F:22F2
 */
void f__B4B5_00E5_001F_E9FF()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x72FD), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x72FB));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EDE);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EDA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0104); emu_cs = 0x34FC; ovl__34FC(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0104_0023_04DB();
}

/**
 * Decompiled function f__B4B5_0104_0023_04DB()
 *
 * @name f__B4B5_0104_0023_04DB
 * @implements B4B5:0104:0023:04DB ()
 *
 * Called From: B4B5:0104:001F:E9FF
 */
void f__B4B5_0104_0023_04DB()
{
	emu_addws(&emu_sp, 0xE);
	emu_cwd();
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x72F9), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x72FB), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EE3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0127); emu_cs = 0x34FC; ovl__34FC(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0127_001F_13BF();
}

/**
 * Decompiled function f__B4B5_0127_001F_13BF()
 *
 * @name f__B4B5_0127_001F_13BF
 * @implements B4B5:0127:001F:13BF ()
 *
 * Called From: B4B5:0127:0023:04DB
 */
void f__B4B5_0127_001F_13BF()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x72F5), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x39FC));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EEB);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0146); emu_cs = 0x34FC; ovl__34FC(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0146_0022_09D0();
}

/**
 * Decompiled function f__B4B5_0146_0022_09D0()
 *
 * @name f__B4B5_0146_0022_09D0
 * @implements B4B5:0146:0022:09D0 ()
 *
 * Called From: B4B5:0146:001F:13BF
 */
void f__B4B5_0146_0022_09D0()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39FC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x39FE), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A00));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EF7);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0168); emu_cs = 0x34FC; ovl__34FC(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0168_0022_5553();
}

/**
 * Decompiled function f__B4B5_0168_0022_5553()
 *
 * @name f__B4B5_0168_0022_5553
 * @implements B4B5:0168:0022:5553 ()
 *
 * Called From: B4B5:0168:0022:09D0
 */
void f__B4B5_0168_0022_5553()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A00), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A02), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x72F7));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F01);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x018A); emu_cs = 0x34FC; ovl__34FC(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_018A_0029_2C78();
}

/**
 * Decompiled function f__B4B5_018A_0029_2C78()
 *
 * @name f__B4B5_018A_0029_2C78
 * @implements B4B5:018A:0029:2C78 ()
 *
 * Called From: B4B5:018A:0022:5553
 */
void f__B4B5_018A_0029_2C78()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, -0x72F7), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0xD);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8D0D);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F17);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F0A);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01B3); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_01B3_0026_DA88();
}

/**
 * Decompiled function f__B4B5_01B3_0026_DA88()
 *
 * @name f__B4B5_01B3_0026_DA88
 * @implements B4B5:01B3:0026:DA88 ()
 *
 * Called From: B4B5:01B3:0029:2C78
 */
void f__B4B5_01B3_0026_DA88()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0xD);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8D1B);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F2E);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F23);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01D9); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_01D9_0026_423E();
}

/**
 * Decompiled function f__B4B5_01D9_0026_423E()
 *
 * @name f__B4B5_01D9_0026_423E
 * @implements B4B5:01D9:0026:423E ()
 *
 * Called From: B4B5:01D9:0026:DA88
 */
void f__B4B5_01D9_0026_423E()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0xD);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8D29);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F43);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F37);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x01FF); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_01FF_0008_F6D8();
}

/**
 * Decompiled function f__B4B5_01FF_0008_F6D8()
 *
 * @name f__B4B5_01FF_0008_F6D8
 * @implements B4B5:01FF:0008:F6D8 ()
 *
 * Called From: B4B5:01FF:0026:423E
 */
void f__B4B5_01FF_0008_F6D8()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_cs); emu_push(0x0207); emu_cs = 0x34B8; ovl__34B8(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0207_000D_77F7();
}

/**
 * Decompiled function f__B4B5_0207_000D_77F7()
 *
 * @name f__B4B5_0207_000D_77F7
 * @implements B4B5:0207:000D:77F7 ()
 *
 * Called From: 261F:01B9:001B:DA28
 */
void f__B4B5_0207_000D_77F7()
{
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x72F9));
	emu_push(emu_get_memory16(emu_ds, 0x00, -0x72FB));
	emu_push(emu_cs); emu_push(0x0214); emu_cs = 0x34B8; ovl__34B8(6);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0214_0007_342E();
}

/**
 * Decompiled function f__B4B5_0214_0007_342E()
 *
 * @name f__B4B5_0214_0007_342E
 * @implements B4B5:0214:0007:342E ()
 *
 * Called From: B4B5:0214:000D:77F7
 */
void f__B4B5_0214_0007_342E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_si, emu_si);
	f__B4B5_0344_0008_F798(); return;
}

/**
 * Decompiled function f__B4B5_021B_0041_3B4B()
 *
 * @name f__B4B5_021B_0041_3B4B
 * @implements B4B5:021B:0041:3B4B ()
 *
 * Called From: B4B5:0349:0008:F798
 * Called From: B4B5:0349:003F:B9D7
 * Called From: B4B5:0349:0009:7B98
 */
void f__B4B5_021B_0041_3B4B()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x37FA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x37F8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movb(&emu_get_memory8(emu_ss, emu_bp, -0xA2), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x7F);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F56);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F50);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x025C); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_025C_000E_8194();
}

/**
 * Decompiled function f__B4B5_025C_000E_8194()
 *
 * @name f__B4B5_025C_000E_8194
 * @implements B4B5:025C:000E:8194 ()
 *
 * Called From: B4B5:025C:0041:3B4B
 */
void f__B4B5_025C_000E_8194()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x026A); emu_cs = 0x01F7; f__01F7_3CD5_000D_BC7F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_026A_000E_9175();
}

/**
 * Decompiled function f__B4B5_026A_000E_9175()
 *
 * @name f__B4B5_026A_000E_9175
 * @implements B4B5:026A:000E:9175 ()
 *
 * Called From: B4B5:026A:000E:8194
 */
void f__B4B5_026A_000E_9175()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F5B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0278); emu_cs = 0x01F7; f__01F7_3A8A_0018_2332();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0278_0014_30A8();
}

/**
 * Decompiled function f__B4B5_0278_0014_30A8()
 *
 * @name f__B4B5_0278_0014_30A8
 * @implements B4B5:0278:0014:30A8 ()
 *
 * Called From: B4B5:0278:000E:9175
 */
void f__B4B5_0278_0014_30A8()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!emu_flags.zf) { f__B4B5_028C_000B_A685(); return; }
	f__B4B5_0343_0009_7B98(); return;
}

/**
 * Decompiled function f__B4B5_028C_000B_A685()
 *
 * @name f__B4B5_028C_000B_A685
 * @implements B4B5:028C:000B:A685 ()
 *
 * Called From: B4B5:0287:0014:30A8
 */
void f__B4B5_028C_000B_A685()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0297); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0297_0009_D5D4();
}

/**
 * Decompiled function f__B4B5_0297_0009_D5D4()
 *
 * @name f__B4B5_0297_0009_D5D4
 * @implements B4B5:0297:0009:D5D4 ()
 *
 * Called From: B4B5:0297:000B:A685
 */
void f__B4B5_0297_0009_D5D4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4B5_02A0_0006_0E18(); return; }
	emu_ip = 0x0343; emu_last_cs = 0xB4B5; emu_last_ip = 0x029D; emu_last_length = 0x0009; emu_last_crc = 0xD5D4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B5_02A0_0006_0E18()
 *
 * @name f__B4B5_02A0_0006_0E18
 * @implements B4B5:02A0:0006:0E18 ()
 *
 * Called From: B4B5:029B:0009:D5D4
 */
void f__B4B5_02A0_0006_0E18()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02A6); emu_cs = 0x10BE; f__10BE_00A0_0064_F23B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_02A6_0020_4C65();
}

/**
 * Decompiled function f__B4B5_02A6_0020_4C65()
 *
 * @name f__B4B5_02A6_0020_4C65
 * @implements B4B5:02A6:0020:4C65 ()
 *
 * Called From: B4B5:02A6:0006:0E18
 */
void f__B4B5_02A6_0020_4C65()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F65);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x02C6); emu_cs = 0x34FC; ovl__34FC(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_02C6_0023_6BB6();
}

/**
 * Decompiled function f__B4B5_02C6_0023_6BB6()
 *
 * @name f__B4B5_02C6_0023_6BB6
 * @implements B4B5:02C6:0023:6BB6 ()
 *
 * Called From: B4B5:02C6:0020:4C65
 */
void f__B4B5_02C6_0023_6BB6()
{
	emu_addws(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F6D);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x02E9); emu_cs = 0x34FC; ovl__34FC(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_02E9_0024_A182();
}

/**
 * Decompiled function f__B4B5_02E9_0024_A182()
 *
 * @name f__B4B5_02E9_0024_A182
 * @implements B4B5:02E9:0024:A182 ()
 *
 * Called From: B4B5:02E9:0023:6BB6
 */
void f__B4B5_02E9_0024_A182()
{
	emu_addws(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x1C), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x27);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F73);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x030D); emu_cs = 0x34FC; ovl__34FC(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_030D_003F_B9D7();
}

/**
 * Decompiled function f__B4B5_030D_003F_B9D7()
 *
 * @name f__B4B5_030D_003F_B9D7
 * @implements B4B5:030D:003F:B9D7 ()
 *
 * Called From: B4B5:030D:0024:A182
 */
void f__B4B5_030D_003F_B9D7()
{
	emu_addws(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x48);
	if (!emu_flags.zf) { f__B4B5_0343_0009_7B98(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A38), emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A3C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A3A), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38B4), emu_ax.x);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x6);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x034C; emu_last_cs = 0xB4B5; emu_last_ip = 0x0347; emu_last_length = 0x003F; emu_last_crc = 0xB9D7; emu_call(); return; } // Jump does not resolve
	f__B4B5_021B_0041_3B4B(); return;
}

/**
 * Decompiled function f__B4B5_0343_0009_7B98()
 *
 * @name f__B4B5_0343_0009_7B98
 * @implements B4B5:0343:0009:7B98 ()
 *
 * Called From: B4B5:0289:0014:30A8
 * Called From: B4B5:031E:003F:B9D7
 */
void f__B4B5_0343_0009_7B98()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x6);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B5_034C_0019_C5EF(); return; }
	f__B4B5_021B_0041_3B4B(); return;
}

/**
 * Decompiled function f__B4B5_0344_0008_F798()
 *
 * @name f__B4B5_0344_0008_F798
 * @implements B4B5:0344:0008:F798 ()
 *
 * Called From: B4B5:0218:0007:342E
 */
void f__B4B5_0344_0008_F798()
{
	emu_cmpws(&emu_si, 0x6);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x034C; emu_last_cs = 0xB4B5; emu_last_ip = 0x0347; emu_last_length = 0x0008; emu_last_crc = 0xF798; emu_call(); return; } // Jump does not resolve
	f__B4B5_021B_0041_3B4B(); return;
}

/**
 * Decompiled function f__B4B5_034C_0019_C5EF()
 *
 * @name f__B4B5_034C_0019_C5EF
 * @implements B4B5:034C:0019:C5EF ()
 *
 * Called From: B4B5:0347:0009:7B98
 */
void f__B4B5_034C_0019_C5EF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x0);
	if (!emu_flags.zf) { f__B4B5_03A0_000B_3C01(); return; }
	emu_movw(&emu_di, 0x50);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0365); emu_cs = 0x10BE; emu_ip = 0x0547; emu_last_cs = 0xB4B5; emu_last_ip = 0x0360; emu_last_length = 0x0019; emu_last_crc = 0xC5EF; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4B5_03A0_000B_3C01()
 *
 * @name f__B4B5_03A0_000B_3C01
 * @implements B4B5:03A0:000B:3C01 ()
 *
 * Called From: B4B5:0355:0019:C5EF
 */
void f__B4B5_03A0_000B_3C01()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x03AB); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_03AB_0040_5B3C();
}

/**
 * Decompiled function f__B4B5_03AB_0040_5B3C()
 *
 * @name f__B4B5_03AB_0040_5B3C
 * @implements B4B5:03AB:0040:5B3C ()
 *
 * Called From: B4B5:03AB:000B:3C01
 */
void f__B4B5_03AB_0040_5B3C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F7B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x03EB); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_03EB_0006_3F70();
}

/**
 * Decompiled function f__B4B5_03EB_0006_3F70()
 *
 * @name f__B4B5_03EB_0006_3F70
 * @implements B4B5:03EB:0006:3F70 ()
 *
 * Called From: B4B5:03EB:0040:5B3C
 */
void f__B4B5_03EB_0006_3F70()
{
	emu_addws(&emu_sp, 0x16);
	f__B4B5_0638_000C_B93B(); return;
}

/**
 * Decompiled function f__B4B5_03F1_000F_33E5()
 *
 * @name f__B4B5_03F1_000F_33E5
 * @implements B4B5:03F1:000F:33E5 ()
 *
 * Called From: B4B5:0641:000C:B93B
 * Called From: B4B5:0641:0012:38A2
 */
void f__B4B5_03F1_000F_33E5()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0400); emu_cs = 0x01F7; f__01F7_2252_0045_E30C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0400_002B_89DB();
}

/**
 * Decompiled function f__B4B5_0400_002B_89DB()
 *
 * @name f__B4B5_0400_002B_89DB
 * @implements B4B5:0400:002B:89DB ()
 *
 * Called From: B4B5:0400:000F:33E5
 */
void f__B4B5_0400_002B_89DB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x7F);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F7B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x042B); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_042B_0013_040D();
}

/**
 * Decompiled function f__B4B5_042B_0013_040D()
 *
 * @name f__B4B5_042B_0013_040D
 * @implements B4B5:042B:0013:040D ()
 *
 * Called From: B4B5:042B:002B:89DB
 */
void f__B4B5_042B_0013_040D()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x043E); emu_cs = 0x01F7; f__01F7_3AF8_001D_2425();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_043E_000A_A571();
}

/**
 * Decompiled function f__B4B5_043E_000A_A571()
 *
 * @name f__B4B5_043E_000A_A571
 * @implements B4B5:043E:000A:A571 ()
 *
 * Called From: B4B5:043E:0013:040D
 */
void f__B4B5_043E_000A_A571()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0448); emu_cs = 0x1381; f__1381_0051_0010_9077();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0448_000C_5D52();
}

/**
 * Decompiled function f__B4B5_0448_000C_5D52()
 *
 * @name f__B4B5_0448_000C_5D52
 * @implements B4B5:0448:000C:5D52 ()
 *
 * Called From: B4B5:0448:000A:A571
 */
void f__B4B5_0448_000C_5D52()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__B4B5_0454_0010_AE28(); return; }
	emu_ip = 0x0627; emu_last_cs = 0xB4B5; emu_last_ip = 0x0451; emu_last_length = 0x000C; emu_last_crc = 0x5D52; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B5_0454_0010_AE28()
 *
 * @name f__B4B5_0454_0010_AE28
 * @implements B4B5:0454:0010:AE28 ()
 *
 * Called From: B4B5:044F:000C:5D52
 */
void f__B4B5_0454_0010_AE28()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0464); emu_cs = 0x01F7; f__01F7_3AF8_001D_2425();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0464_000A_A0E5();
}

/**
 * Decompiled function f__B4B5_0464_000A_A0E5()
 *
 * @name f__B4B5_0464_000A_A0E5
 * @implements B4B5:0464:000A:A0E5 ()
 *
 * Called From: B4B5:0464:0010:AE28
 */
void f__B4B5_0464_000A_A0E5()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x046E); emu_cs = 0x3533; ovl__3533(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_046E_000C_4C2A();
}

/**
 * Decompiled function f__B4B5_046E_000C_4C2A()
 *
 * @name f__B4B5_046E_000C_4C2A
 * @implements B4B5:046E:000C:4C2A ()
 *
 * Called From: B4B5:046E:000A:A0E5
 */
void f__B4B5_046E_000C_4C2A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0xFF);
	if (!emu_flags.zf) { f__B4B5_047A_000B_1224(); return; }
	emu_ip = 0x0627; emu_last_cs = 0xB4B5; emu_last_ip = 0x0477; emu_last_length = 0x000C; emu_last_crc = 0x4C2A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B5_047A_000B_1224()
 *
 * @name f__B4B5_047A_000B_1224
 * @implements B4B5:047A:000B:1224 ()
 *
 * Called From: B4B5:0475:000C:4C2A
 */
void f__B4B5_047A_000B_1224()
{
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0485); emu_cs = 0x0FE4; f__0FE4_03A7_0027_57F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0485_0014_A272();
}

/**
 * Decompiled function f__B4B5_0485_0014_A272()
 *
 * @name f__B4B5_0485_0014_A272
 * @implements B4B5:0485:0014:A272 ()
 *
 * Called From: B4B5:0485:000B:1224
 */
void f__B4B5_0485_0014_A272()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B4B5_0499_0019_195D(); return; }
	emu_ip = 0x0627; emu_last_cs = 0xB4B5; emu_last_ip = 0x0496; emu_last_length = 0x0014; emu_last_crc = 0xA272; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B5_0499_0019_195D()
 *
 * @name f__B4B5_0499_0019_195D
 * @implements B4B5:0499:0019:195D ()
 *
 * Called From: B4B5:0494:0014:A272
 */
void f__B4B5_0499_0019_195D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x200);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x04B2); emu_cs = 0x01F7; f__01F7_3AF8_001D_2425();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_04B2_000A_A5AD();
}

/**
 * Decompiled function f__B4B5_04B2_000A_A5AD()
 *
 * @name f__B4B5_04B2_000A_A5AD
 * @implements B4B5:04B2:000A:A5AD ()
 *
 * Called From: B4B5:04B2:0019:195D
 */
void f__B4B5_04B2_000A_A5AD()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04BC); emu_cs = 0x01F7; f__01F7_2252_0045_E30C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_04BC_0021_C35A();
}

/**
 * Decompiled function f__B4B5_04BC_0021_C35A()
 *
 * @name f__B4B5_04BC_0021_C35A
 * @implements B4B5:04BC:0021:C35A ()
 *
 * Called From: B4B5:04BC:000A:A5AD
 */
void f__B4B5_04BC_0021_C35A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_push(emu_cs); emu_push(0x04DD); emu_cs = 0x34C1; ovl__34C1(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_04DD_0019_2880();
}

/**
 * Decompiled function f__B4B5_04DD_0019_2880()
 *
 * @name f__B4B5_04DD_0019_2880
 * @implements B4B5:04DD:0019:2880 ()
 *
 * Called From: 261F:01B9:001B:DA28
 * Called From: B4B5:04DD:0021:C35A
 */
void f__B4B5_04DD_0019_2880()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x04F6); emu_cs = 0x01F7; f__01F7_3AF8_001D_2425();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_04F6_000A_A5AD();
}

/**
 * Decompiled function f__B4B5_04F6_000A_A5AD()
 *
 * @name f__B4B5_04F6_000A_A5AD
 * @implements B4B5:04F6:000A:A5AD ()
 *
 * Called From: B4B5:04F6:0019:2880
 */
void f__B4B5_04F6_000A_A5AD()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0500); emu_cs = 0x01F7; f__01F7_2252_0045_E30C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0500_0008_7BF2();
}

/**
 * Decompiled function f__B4B5_0500_0008_7BF2()
 *
 * @name f__B4B5_0500_0008_7BF2
 * @implements B4B5:0500:0008:7BF2 ()
 *
 * Called From: B4B5:0500:000A:A5AD
 */
void f__B4B5_0500_0008_7BF2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0508); emu_cs = 0x0F3F; f__0F3F_009D_0017_C9BF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0508_001C_E7CB();
}

/**
 * Decompiled function f__B4B5_0508_001C_E7CB()
 *
 * @name f__B4B5_0508_001C_E7CB
 * @implements B4B5:0508:001C:E7CB ()
 *
 * Called From: B4B5:0508:0008:7BF2
 */
void f__B4B5_0508_001C_E7CB()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0524); emu_cs = 0x01F7; f__01F7_3AF8_001D_2425();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0524_000A_A5AD();
}

/**
 * Decompiled function f__B4B5_0524_000A_A5AD()
 *
 * @name f__B4B5_0524_000A_A5AD
 * @implements B4B5:0524:000A:A5AD ()
 *
 * Called From: B4B5:0524:001C:E7CB
 */
void f__B4B5_0524_000A_A5AD()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x052E); emu_cs = 0x01F7; f__01F7_2252_0045_E30C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_052E_0019_A85C();
}

/**
 * Decompiled function f__B4B5_052E_0019_A85C()
 *
 * @name f__B4B5_052E_0019_A85C
 * @implements B4B5:052E:0019:A85C ()
 *
 * Called From: B4B5:052E:000A:A5AD
 */
void f__B4B5_052E_0019_A85C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x64), emu_ax.l);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F83);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0547); emu_cs = 0x01F7; f__01F7_3AF8_001D_2425();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0547_000A_A031();
}

/**
 * Decompiled function f__B4B5_0547_000A_A031()
 *
 * @name f__B4B5_0547_000A_A031
 * @implements B4B5:0547:000A:A031 ()
 *
 * Called From: B4B5:0547:0019:A85C
 */
void f__B4B5_0547_000A_A031()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0551); emu_cs = 0x1381; f__1381_0005_0010_9159();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0551_0021_D4BF();
}

/**
 * Decompiled function f__B4B5_0551_0021_D4BF()
 *
 * @name f__B4B5_0551_0021_D4BF
 * @implements B4B5:0551:0021:D4BF ()
 *
 * Called From: B4B5:0551:000A:A031
 */
void f__B4B5_0551_0021_D4BF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x50), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0572); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0572_0008_74EC();
}

/**
 * Decompiled function f__B4B5_0572_0008_74EC()
 *
 * @name f__B4B5_0572_0008_74EC
 * @implements B4B5:0572:0008:74EC ()
 *
 * Called From: B4B5:0572:0021:D4BF
 */
void f__B4B5_0572_0008_74EC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x057A); emu_cs = 0x34CD; ovl__34CD(11);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_057A_0017_4B19();
}

/**
 * Decompiled function f__B4B5_057A_0017_4B19()
 *
 * @name f__B4B5_057A_0017_4B19
 * @implements B4B5:057A:0017:4B19 ()
 *
 * Called From: B4B5:057A:0008:74EC
 */
void f__B4B5_057A_0017_4B19()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4B5_0596_001F_2647(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x2);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B5_0596_001F_2647(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0591); emu_cs = 0x0FE4; emu_ip = 0x0AF9; emu_last_cs = 0xB4B5; emu_last_ip = 0x058C; emu_last_length = 0x0017; emu_last_crc = 0x4B19; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4B5_0596_001F_2647()
 *
 * @name f__B4B5_0596_001F_2647
 * @implements B4B5:0596:001F:2647 ()
 *
 * Called From: B4B5:057D:0017:4B19
 * Called From: B4B5:0584:0017:4B19
 */
void f__B4B5_0596_001F_2647()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x05B8; emu_last_cs = 0xB4B5; emu_last_ip = 0x059F; emu_last_length = 0x001F; emu_last_crc = 0x2647; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x05B5); emu_cs = 0x176C; f__176C_000E_000E_8C63();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_05B5_001F_076F();
}

/**
 * Decompiled function f__B4B5_05B5_001F_076F()
 *
 * @name f__B4B5_05B5_001F_076F
 * @implements B4B5:05B5:001F:076F ()
 *
 * Called From: B4B5:05B5:001F:2647
 */
void f__B4B5_05B5_001F_076F()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x05D4); emu_cs = 0x1423; f__1423_08CD_0012_4CA9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_05D4_001F_7AC7();
}

/**
 * Decompiled function f__B4B5_05D4_001F_7AC7()
 *
 * @name f__B4B5_05D4_001F_7AC7
 * @implements B4B5:05D4:001F:7AC7 ()
 *
 * Called From: B4B5:05D4:001F:076F
 */
void f__B4B5_05D4_001F_7AC7()
{
	emu_addws(&emu_sp, 0x6);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x05F3); emu_cs = 0x1A34; f__1A34_1E99_0012_0D98();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_05F3_0020_9A46();
}

/**
 * Decompiled function f__B4B5_05F3_0020_9A46()
 *
 * @name f__B4B5_05F3_0020_9A46
 * @implements B4B5:05F3:0020:9A46 ()
 *
 * Called From: B4B5:05F3:001F:7AC7
 */
void f__B4B5_05F3_0020_9A46()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0613); emu_cs = 0x1A34; f__1A34_1E99_0012_0D98();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0613_0011_F9B5();
}

/**
 * Decompiled function f__B4B5_0613_0011_F9B5()
 *
 * @name f__B4B5_0613_0011_F9B5
 * @implements B4B5:0613:0011:F9B5 ()
 *
 * Called From: B4B5:0613:0020:9A46
 */
void f__B4B5_0613_0011_F9B5()
{
	emu_addws(&emu_sp, 0xA);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0624); emu_cs = 0x1A34; f__1A34_204C_0043_9483();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0624_000E_0E39();
}

/**
 * Decompiled function f__B4B5_0624_000E_0E39()
 *
 * @name f__B4B5_0624_000E_0E39
 * @implements B4B5:0624:000E:0E39 ()
 *
 * Called From: B4B5:0624:0011:F9B5
 */
void f__B4B5_0624_000E_0E39()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0632); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0632_0012_38A2();
}

/**
 * Decompiled function f__B4B5_0632_0012_38A2()
 *
 * @name f__B4B5_0632_0012_38A2
 * @implements B4B5:0632:0012:38A2 ()
 *
 * Called From: B4B5:0632:000E:0E39
 */
void f__B4B5_0632_0012_38A2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4B5_0644_000B_3C01(); return; }
	f__B4B5_03F1_000F_33E5(); return;
}

/**
 * Decompiled function f__B4B5_0638_000C_B93B()
 *
 * @name f__B4B5_0638_000C_B93B
 * @implements B4B5:0638:000C:B93B ()
 *
 * Called From: B4B5:03EE:0006:3F70
 */
void f__B4B5_0638_000C_B93B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0644; emu_last_cs = 0xB4B5; emu_last_ip = 0x063F; emu_last_length = 0x000C; emu_last_crc = 0xB93B; emu_call(); return; } // Jump does not resolve
	f__B4B5_03F1_000F_33E5(); return;
}

/**
 * Decompiled function f__B4B5_0644_000B_3C01()
 *
 * @name f__B4B5_0644_000B_3C01
 * @implements B4B5:0644:000B:3C01 ()
 *
 * Called From: B4B5:063F:0012:38A2
 */
void f__B4B5_0644_000B_3C01()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x064F); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_064F_0040_A73C();
}

/**
 * Decompiled function f__B4B5_064F_0040_A73C()
 *
 * @name f__B4B5_064F_0040_A73C
 * @implements B4B5:064F:0040:A73C ()
 *
 * Called From: B4B5:064F:000B:3C01
 */
void f__B4B5_064F_0040_A73C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F87);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x068F); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_068F_0006_3DAA();
}

/**
 * Decompiled function f__B4B5_068F_0006_3DAA()
 *
 * @name f__B4B5_068F_0006_3DAA
 * @implements B4B5:068F:0006:3DAA ()
 *
 * Called From: B4B5:068F:0040:A73C
 */
void f__B4B5_068F_0006_3DAA()
{
	emu_addws(&emu_sp, 0x16);
	f__B4B5_0885_000C_BB99(); return;
}

/**
 * Decompiled function f__B4B5_0695_0014_4241()
 *
 * @name f__B4B5_0695_0014_4241
 * @implements B4B5:0695:0014:4241 ()
 *
 * Called From: B4B5:088E:000C:BB99
 */
void f__B4B5_0695_0014_4241()
{
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F92);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x06A9); emu_cs = 0x01F7; f__01F7_28DC_0009_5738();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_06A9_000A_B027();
}

/**
 * Decompiled function f__B4B5_06A9_000A_B027()
 *
 * @name f__B4B5_06A9_000A_B027
 * @implements B4B5:06A9:000A:B027 ()
 *
 * Called From: B4B5:06A9:0014:4241
 */
void f__B4B5_06A9_000A_B027()
{
	emu_addws(&emu_sp, 0xA);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x06B3; emu_last_cs = 0xB4B5; emu_last_ip = 0x06AE; emu_last_length = 0x000A; emu_last_crc = 0xB027; emu_call(); return; } // Jump does not resolve
	f__B4B5_074A_000F_33E5(); return;
}

/**
 * Decompiled function f__B4B5_074A_000F_33E5()
 *
 * @name f__B4B5_074A_000F_33E5
 * @implements B4B5:074A:000F:33E5 ()
 *
 * Called From: B4B5:06B0:000A:B027
 */
void f__B4B5_074A_000F_33E5()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0759); emu_cs = 0x01F7; f__01F7_2252_0045_E30C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0759_002B_75DB();
}

/**
 * Decompiled function f__B4B5_0759_002B_75DB()
 *
 * @name f__B4B5_0759_002B_75DB
 * @implements B4B5:0759:002B:75DB ()
 *
 * Called From: B4B5:0759:000F:33E5
 */
void f__B4B5_0759_002B_75DB()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x7F);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F87);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0784); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0784_0013_040D();
}

/**
 * Decompiled function f__B4B5_0784_0013_040D()
 *
 * @name f__B4B5_0784_0013_040D
 * @implements B4B5:0784:0013:040D ()
 *
 * Called From: B4B5:0784:002B:75DB
 */
void f__B4B5_0784_0013_040D()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0797); emu_cs = 0x01F7; f__01F7_3AF8_001D_2425();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0797_000A_A571();
}

/**
 * Decompiled function f__B4B5_0797_000A_A571()
 *
 * @name f__B4B5_0797_000A_A571
 * @implements B4B5:0797:000A:A571 ()
 *
 * Called From: B4B5:0797:0013:040D
 */
void f__B4B5_0797_000A_A571()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07A1); emu_cs = 0x1381; f__1381_0051_0010_9077();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_07A1_0014_AABC();
}

/**
 * Decompiled function f__B4B5_07A1_0014_AABC()
 *
 * @name f__B4B5_07A1_0014_AABC
 * @implements B4B5:07A1:0014:AABC ()
 *
 * Called From: B4B5:07A1:000A:A571
 */
void f__B4B5_07A1_0014_AABC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x07B5); emu_cs = 0x01F7; f__01F7_3AF8_001D_2425();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_07B5_000A_A0E9();
}

/**
 * Decompiled function f__B4B5_07B5_000A_A0E9()
 *
 * @name f__B4B5_07B5_000A_A0E9
 * @implements B4B5:07B5:000A:A0E9 ()
 *
 * Called From: B4B5:07B5:0014:AABC
 */
void f__B4B5_07B5_000A_A0E9()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07BF); emu_cs = 0x3530; ovl__3530(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_07BF_000C_4CB8();
}

/**
 * Decompiled function f__B4B5_07BF_000C_4CB8()
 *
 * @name f__B4B5_07BF_000C_4CB8
 * @implements B4B5:07BF:000C:4CB8 ()
 *
 * Called From: B4B5:07BF:000A:A0E9
 */
void f__B4B5_07BF_000C_4CB8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__B4B5_07CB_0008_C81C(); return; }
	emu_ip = 0x0874; emu_last_cs = 0xB4B5; emu_last_ip = 0x07C8; emu_last_length = 0x000C; emu_last_crc = 0x4CB8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B5_07CB_0008_C81C()
 *
 * @name f__B4B5_07CB_0008_C81C
 * @implements B4B5:07CB:0008:C81C ()
 *
 * Called From: B4B5:07C6:000C:4CB8
 */
void f__B4B5_07CB_0008_C81C()
{
	emu_cmpws(&emu_di, 0xFF);
	if (!emu_flags.zf) { f__B4B5_07D3_0010_AE28(); return; }
	emu_ip = 0x0874; emu_last_cs = 0xB4B5; emu_last_ip = 0x07D0; emu_last_length = 0x0008; emu_last_crc = 0xC81C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B5_07D3_0010_AE28()
 *
 * @name f__B4B5_07D3_0010_AE28
 * @implements B4B5:07D3:0010:AE28 ()
 *
 * Called From: B4B5:07CE:0008:C81C
 */
void f__B4B5_07D3_0010_AE28()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x07E3); emu_cs = 0x01F7; f__01F7_3AF8_001D_2425();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_07E3_000A_A5AD();
}

/**
 * Decompiled function f__B4B5_07E3_000A_A5AD()
 *
 * @name f__B4B5_07E3_000A_A5AD
 * @implements B4B5:07E3:000A:A5AD ()
 *
 * Called From: B4B5:07E3:0010:AE28
 */
void f__B4B5_07E3_000A_A5AD()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07ED); emu_cs = 0x01F7; f__01F7_2252_0045_E30C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_07ED_0015_A410();
}

/**
 * Decompiled function f__B4B5_07ED_0015_A410()
 *
 * @name f__B4B5_07ED_0015_A410
 * @implements B4B5:07ED:0015:A410 ()
 *
 * Called From: B4B5:07ED:000A:A5AD
 */
void f__B4B5_07ED_0015_A410()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0802); emu_cs = 0x01F7; f__01F7_3AF8_001D_2425();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0802_000A_A5AD();
}

/**
 * Decompiled function f__B4B5_0802_000A_A5AD()
 *
 * @name f__B4B5_0802_000A_A5AD
 * @implements B4B5:0802:000A:A5AD ()
 *
 * Called From: B4B5:0802:0015:A410
 */
void f__B4B5_0802_000A_A5AD()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x080C); emu_cs = 0x01F7; f__01F7_2252_0045_E30C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_080C_000D_D8F6();
}

/**
 * Decompiled function f__B4B5_080C_000D_D8F6()
 *
 * @name f__B4B5_080C_000D_D8F6
 * @implements B4B5:080C:000D:D8F6 ()
 *
 * Called From: B4B5:080C:000A:A5AD
 */
void f__B4B5_080C_000D_D8F6()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0819); emu_cs = 0x34CD; ovl__34CD(30);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0819_0012_EC21();
}

/**
 * Decompiled function f__B4B5_0819_0012_EC21()
 *
 * @name f__B4B5_0819_0012_EC21
 * @implements B4B5:0819:0012:EC21 ()
 *
 * Called From: B4B5:0819:000D:D8F6
 */
void f__B4B5_0819_0012_EC21()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x0874; emu_last_cs = 0xB4B5; emu_last_ip = 0x081C; emu_last_length = 0x0012; emu_last_crc = 0xEC21; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x082B); emu_cs = 0x0C3A; f__0C3A_0009_0029_6B1F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_082B_0054_A166();
}

/**
 * Decompiled function f__B4B5_082B_0054_A166()
 *
 * @name f__B4B5_082B_0054_A166
 * @implements B4B5:082B:0054:A166 ()
 *
 * Called From: B4B5:082B:0012:EC21
 */
void f__B4B5_082B_0054_A166()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { emu_ip = 0x0874; emu_last_cs = 0xB4B5; emu_last_ip = 0x083A; emu_last_length = 0x0054; emu_last_crc = 0xA166; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2C94);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1A));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFBFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x087F); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_087F_0012_3A00();
}

/**
 * Decompiled function f__B4B5_087F_0012_3A00()
 *
 * @name f__B4B5_087F_0012_3A00
 * @implements B4B5:087F:0012:3A00 ()
 *
 * Called From: B4B5:087F:0054:A166
 */
void f__B4B5_087F_0012_3A00()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4B5_0891_000B_3C01(); return; }
	emu_ip = 0x0695; emu_last_cs = 0xB4B5; emu_last_ip = 0x088E; emu_last_length = 0x0012; emu_last_crc = 0x3A00; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B5_0885_000C_BB99()
 *
 * @name f__B4B5_0885_000C_BB99
 * @implements B4B5:0885:000C:BB99 ()
 *
 * Called From: B4B5:0692:0006:3DAA
 */
void f__B4B5_0885_000C_BB99()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0891; emu_last_cs = 0xB4B5; emu_last_ip = 0x088C; emu_last_length = 0x000C; emu_last_crc = 0xBB99; emu_call(); return; } // Jump does not resolve
	f__B4B5_0695_0014_4241(); return;
}

/**
 * Decompiled function f__B4B5_0891_000B_3C01()
 *
 * @name f__B4B5_0891_000B_3C01
 * @implements B4B5:0891:000B:3C01 ()
 *
 * Called From: B4B5:088C:0012:3A00
 */
void f__B4B5_0891_000B_3C01()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x089C); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_089C_0040_F8BF();
}

/**
 * Decompiled function f__B4B5_089C_0040_F8BF()
 *
 * @name f__B4B5_089C_0040_F8BF
 * @implements B4B5:089C:0040:F8BF ()
 *
 * Called From: B4B5:089C:000B:3C01
 */
void f__B4B5_089C_0040_F8BF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EDA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08DC); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_08DC_0006_3F12();
}

/**
 * Decompiled function f__B4B5_08DC_0006_3F12()
 *
 * @name f__B4B5_08DC_0006_3F12
 * @implements B4B5:08DC:0006:3F12 ()
 *
 * Called From: B4B5:08DC:0040:F8BF
 */
void f__B4B5_08DC_0006_3F12()
{
	emu_addws(&emu_sp, 0x16);
	f__B4B5_0A40_000C_89D1(); return;
}

/**
 * Decompiled function f__B4B5_08E2_000C_9BB3()
 *
 * @name f__B4B5_08E2_000C_9BB3
 * @implements B4B5:08E2:000C:9BB3 ()
 *
 * Called From: B4B5:0A49:000C:89D1
 * Called From: B4B5:0A49:0012:8849
 */
void f__B4B5_08E2_000C_9BB3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x43);
	if (emu_flags.zf) { emu_ip = 0x08EE; emu_last_cs = 0xB4B5; emu_last_ip = 0x08E9; emu_last_length = 0x000C; emu_last_crc = 0x9BB3; emu_call(); return; } // Jump does not resolve
	f__B4B5_0A2F_000B_3501(); return;
}

/**
 * Decompiled function f__B4B5_0A2F_000B_3501()
 *
 * @name f__B4B5_0A2F_000B_3501
 * @implements B4B5:0A2F:000B:3501 ()
 *
 * Called From: B4B5:08EB:000C:9BB3
 */
void f__B4B5_0A2F_000B_3501()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0A3A); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0A3A_0012_8849();
}

/**
 * Decompiled function f__B4B5_0A3A_0012_8849()
 *
 * @name f__B4B5_0A3A_0012_8849
 * @implements B4B5:0A3A:0012:8849 ()
 *
 * Called From: B4B5:0A3A:000B:3501
 */
void f__B4B5_0A3A_0012_8849()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4B5_0A4C_0024_DC59(); return; }
	f__B4B5_08E2_000C_9BB3(); return;
}

/**
 * Decompiled function f__B4B5_0A40_000C_89D1()
 *
 * @name f__B4B5_0A40_000C_89D1
 * @implements B4B5:0A40:000C:89D1 ()
 *
 * Called From: B4B5:08DF:0006:3F12
 */
void f__B4B5_0A40_000C_89D1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0A4C; emu_last_cs = 0xB4B5; emu_last_ip = 0x0A47; emu_last_length = 0x000C; emu_last_crc = 0x89D1; emu_call(); return; } // Jump does not resolve
	f__B4B5_08E2_000C_9BB3(); return;
}

/**
 * Decompiled function f__B4B5_0A4C_0024_DC59()
 *
 * @name f__B4B5_0A4C_0024_DC59
 * @implements B4B5:0A4C:0024:DC59 ()
 *
 * Called From: B4B5:0A47:0012:8849
 */
void f__B4B5_0A4C_0024_DC59()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x7F);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC0);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F96);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EDA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A70); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0A70_0013_440A();
}

/**
 * Decompiled function f__B4B5_0A70_0013_440A()
 *
 * @name f__B4B5_0A70_0013_440A
 * @implements B4B5:0A70:0013:440A ()
 *
 * Called From: B4B5:0A70:0024:DC59
 */
void f__B4B5_0A70_0013_440A()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F9C);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A83); emu_cs = 0x01F7; f__01F7_3AF8_001D_2425();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0A83_0013_527C();
}

/**
 * Decompiled function f__B4B5_0A83_0013_527C()
 *
 * @name f__B4B5_0A83_0013_527C
 * @implements B4B5:0A83:0013:527C ()
 *
 * Called From: B4B5:0A83:0013:440A
 */
void f__B4B5_0A83_0013_527C()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__B4B5_0AF0_0024_FC58(); return; }
	f__B4B5_0AE8_002C_B8D1(); return;
}

/**
 * Decompiled function f__B4B5_0A96_000B_3AA9()
 *
 * @name f__B4B5_0A96_000B_3AA9
 * @implements B4B5:0A96:000B:3AA9 ()
 *
 * Called From: B4B5:0AEE:002C:B8D1
 */
void f__B4B5_0A96_000B_3AA9()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0AA1); emu_cs = 0x01F7; f__01F7_2252_0045_E30C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0AA1_003E_7EB0();
}

/**
 * Decompiled function f__B4B5_0AA1_003E_7EB0()
 *
 * @name f__B4B5_0AA1_003E_7EB0
 * @implements B4B5:0AA1:003E:7EB0 ()
 *
 * Called From: B4B5:0AA1:000B:3AA9
 */
void f__B4B5_0AA1_003E_7EB0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F4));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_dx.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x323F), 0x8000);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F9C);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0ADF); emu_cs = 0x01F7; f__01F7_3AF8_001D_2425();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0ADF_0035_A689();
}

/**
 * Decompiled function f__B4B5_0ADF_0035_A689()
 *
 * @name f__B4B5_0ADF_0035_A689
 * @implements B4B5:0ADF:0035:A689 ()
 *
 * Called From: B4B5:0ADF:003E:7EB0
 */
void f__B4B5_0ADF_0035_A689()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { emu_ip = 0x0A96; emu_last_cs = 0xB4B5; emu_last_ip = 0x0AEE; emu_last_length = 0x0035; emu_last_crc = 0xA689; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x7F);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC0);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F9F);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EDA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B14); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0B14_0013_440A();
}

/**
 * Decompiled function f__B4B5_0AE8_002C_B8D1()
 *
 * @name f__B4B5_0AE8_002C_B8D1
 * @implements B4B5:0AE8:002C:B8D1 ()
 *
 * Called From: B4B5:0A94:0013:527C
 */
void f__B4B5_0AE8_002C_B8D1()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B4B5_0A96_000B_3AA9(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x7F);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC0);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F9F);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EDA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B14); emu_cs = 0x34FC; emu_ip = 0x0B39; emu_last_cs = 0xB4B5; emu_last_ip = 0x0B0F; emu_last_length = 0x002C; emu_last_crc = 0xB8D1; emu_call(); // Jump does not resolve
	f__B4B5_0B14_0013_440A();
}

/**
 * Decompiled function f__B4B5_0AF0_0024_FC58()
 *
 * @name f__B4B5_0AF0_0024_FC58
 * @implements B4B5:0AF0:0024:FC58 ()
 *
 * Called From: B4B5:0A92:0013:527C
 */
void f__B4B5_0AF0_0024_FC58()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x7F);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC0);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F9F);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EDA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B14); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0B14_0013_440A();
}

/**
 * Decompiled function f__B4B5_0B14_0013_440A()
 *
 * @name f__B4B5_0B14_0013_440A
 * @implements B4B5:0B14:0013:440A ()
 *
 * Called From: B4B5:0B14:0024:FC58
 * Called From: B4B5:0B14:0035:A689
 */
void f__B4B5_0B14_0013_440A()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F9C);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B27); emu_cs = 0x01F7; f__01F7_3AF8_001D_2425();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0B27_0013_5242();
}

/**
 * Decompiled function f__B4B5_0B27_0013_5242()
 *
 * @name f__B4B5_0B27_0013_5242
 * @implements B4B5:0B27:0013:5242 ()
 *
 * Called From: B4B5:0B27:0013:440A
 */
void f__B4B5_0B27_0013_5242()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__B4B5_0B93_0024_BC5F(); return; }
	f__B4B5_0B8B_002C_F8F6(); return;
}

/**
 * Decompiled function f__B4B5_0B3A_000B_3AA9()
 *
 * @name f__B4B5_0B3A_000B_3AA9
 * @implements B4B5:0B3A:000B:3AA9 ()
 *
 * Called From: B4B5:0B91:002C:F8F6
 * Called From: B4B5:0B91:0035:E6AE
 */
void f__B4B5_0B3A_000B_3AA9()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0B45); emu_cs = 0x01F7; f__01F7_2252_0045_E30C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0B45_000E_D5FD();
}

/**
 * Decompiled function f__B4B5_0B45_000E_D5FD()
 *
 * @name f__B4B5_0B45_000E_D5FD
 * @implements B4B5:0B45:000E:D5FD ()
 *
 * Called From: B4B5:0B45:000B:3AA9
 */
void f__B4B5_0B45_000E_D5FD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0B53); emu_cs = 0x34CD; ovl__34CD(23);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0B53_002F_E388();
}

/**
 * Decompiled function f__B4B5_0B53_002F_E388()
 *
 * @name f__B4B5_0B53_002F_E388
 * @implements B4B5:0B53:002F:E388 ()
 *
 * Called From: B4B5:0B53:000E:D5FD
 */
void f__B4B5_0B53_002F_E388()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__B4B5_0B72_0010_EE2F(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x1FF);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F9C);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0B82); emu_cs = 0x01F7; emu_ip = 0x467A; emu_last_cs = 0xB4B5; emu_last_ip = 0x0B7D; emu_last_length = 0x002F; emu_last_crc = 0xE388; emu_call(); // Jump does not resolve
	f__B4B5_0B82_0035_E6AE();
}

/**
 * Decompiled function f__B4B5_0B72_0010_EE2F()
 *
 * @name f__B4B5_0B72_0010_EE2F
 * @implements B4B5:0B72:0010:EE2F ()
 *
 * Called From: B4B5:0B5A:002F:E388
 */
void f__B4B5_0B72_0010_EE2F()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F9C);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0B82); emu_cs = 0x01F7; f__01F7_3AF8_001D_2425();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0B82_0035_E6AE();
}

/**
 * Decompiled function f__B4B5_0B82_0035_E6AE()
 *
 * @name f__B4B5_0B82_0035_E6AE
 * @implements B4B5:0B82:0035:E6AE ()
 *
 * Called From: B4B5:0B82:0010:EE2F
 */
void f__B4B5_0B82_0035_E6AE()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B4B5_0B3A_000B_3AA9(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x7F);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC0);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1FA5);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EDA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BB7); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0BB7_0013_440A();
}

/**
 * Decompiled function f__B4B5_0B8B_002C_F8F6()
 *
 * @name f__B4B5_0B8B_002C_F8F6
 * @implements B4B5:0B8B:002C:F8F6 ()
 *
 * Called From: B4B5:0B38:0013:5242
 */
void f__B4B5_0B8B_002C_F8F6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B4B5_0B3A_000B_3AA9(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x7F);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC0);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1FA5);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EDA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BB7); emu_cs = 0x34FC; emu_ip = 0x0BDC; emu_last_cs = 0xB4B5; emu_last_ip = 0x0BB2; emu_last_length = 0x002C; emu_last_crc = 0xF8F6; emu_call(); // Jump does not resolve
	f__B4B5_0BB7_0013_440A();
}

/**
 * Decompiled function f__B4B5_0B93_0024_BC5F()
 *
 * @name f__B4B5_0B93_0024_BC5F
 * @implements B4B5:0B93:0024:BC5F ()
 *
 * Called From: B4B5:0B36:0013:5242
 */
void f__B4B5_0B93_0024_BC5F()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x7F);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC0);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1FA5);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EDA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BB7); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0BB7_0013_440A();
}

/**
 * Decompiled function f__B4B5_0BB7_0013_440A()
 *
 * @name f__B4B5_0BB7_0013_440A
 * @implements B4B5:0BB7:0013:440A ()
 *
 * Called From: B4B5:0BB7:0024:BC5F
 * Called From: B4B5:0BB7:0035:E6AE
 */
void f__B4B5_0BB7_0013_440A()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F9C);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BCA); emu_cs = 0x01F7; f__01F7_3AF8_001D_2425();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0BCA_0013_5276();
}

/**
 * Decompiled function f__B4B5_0BCA_0013_5276()
 *
 * @name f__B4B5_0BCA_0013_5276
 * @implements B4B5:0BCA:0013:5276 ()
 *
 * Called From: B4B5:0BCA:0013:440A
 */
void f__B4B5_0BCA_0013_5276()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__B4B5_0C38_000B_3C01(); return; }
	emu_ip = 0x0C30; emu_last_cs = 0xB4B5; emu_last_ip = 0x0BDB; emu_last_length = 0x0013; emu_last_crc = 0x5276; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B5_0C38_000B_3C01()
 *
 * @name f__B4B5_0C38_000B_3C01
 * @implements B4B5:0C38:000B:3C01 ()
 *
 * Called From: B4B5:0BD9:0013:5276
 */
void f__B4B5_0C38_000B_3C01()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0C43); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0C43_001B_132C();
}

/**
 * Decompiled function f__B4B5_0C43_001B_132C()
 *
 * @name f__B4B5_0C43_001B_132C
 * @implements B4B5:0C43:001B:132C ()
 *
 * Called From: B4B5:0C43:000B:3C01
 */
void f__B4B5_0C43_001B_132C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_xorw(&emu_si, emu_si);
	f__B4B5_0C6E_002E_4500(); return;
}

/**
 * Decompiled function f__B4B5_0C5E_003E_D32E()
 *
 * @name f__B4B5_0C5E_003E_D32E
 * @implements B4B5:0C5E:003E:D32E ()
 *
 * Called From: B4B5:0C71:002E:4500
 * Called From: B4B5:0C71:003E:D32E
 */
void f__B4B5_0C5E_003E_D32E()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xA);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x72BD), 0xFFFF);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B5_0C5E_003E_D32E(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1FAD);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C9C); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0C9C_0006_3CE2();
}

/**
 * Decompiled function f__B4B5_0C6E_002E_4500()
 *
 * @name f__B4B5_0C6E_002E_4500
 * @implements B4B5:0C6E:002E:4500 ()
 *
 * Called From: B4B5:0C5C:001B:132C
 */
void f__B4B5_0C6E_002E_4500()
{
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B5_0C5E_003E_D32E(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1FAD);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C9C); emu_cs = 0x34FC; emu_ip = 0x0CC1; emu_last_cs = 0xB4B5; emu_last_ip = 0x0C97; emu_last_length = 0x002E; emu_last_crc = 0x4500; emu_call(); // Jump does not resolve
	f__B4B5_0C9C_0006_3CE2();
}

/**
 * Decompiled function f__B4B5_0C9C_0006_3CE2()
 *
 * @name f__B4B5_0C9C_0006_3CE2
 * @implements B4B5:0C9C:0006:3CE2 ()
 *
 * Called From: B4B5:0C9C:003E:D32E
 */
void f__B4B5_0C9C_0006_3CE2()
{
	emu_addws(&emu_sp, 0x16);
	f__B4B5_0E44_000C_BAC1(); return;
}

/**
 * Decompiled function f__B4B5_0CA2_000B_21A9()
 *
 * @name f__B4B5_0CA2_000B_21A9
 * @implements B4B5:0CA2:000B:21A9 ()
 *
 * Called From: B4B5:0E4D:000C:BAC1
 * Called From: B4B5:0E4D:0012:3B58
 */
void f__B4B5_0CA2_000B_21A9()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0CAD); emu_cs = 0x01F7; f__01F7_2252_0045_E30C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0CAD_002A_FBD8();
}

/**
 * Decompiled function f__B4B5_0CAD_002A_FBD8()
 *
 * @name f__B4B5_0CAD_002A_FBD8
 * @implements B4B5:0CAD:002A:FBD8 ()
 *
 * Called From: B4B5:0CAD:000B:21A9
 */
void f__B4B5_0CAD_002A_FBD8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x7F);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1FAD);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CD7); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0CD7_0013_040D();
}

/**
 * Decompiled function f__B4B5_0CD7_0013_040D()
 *
 * @name f__B4B5_0CD7_0013_040D
 * @implements B4B5:0CD7:0013:040D ()
 *
 * Called From: B4B5:0CD7:002A:FBD8
 */
void f__B4B5_0CD7_0013_040D()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CEA); emu_cs = 0x01F7; f__01F7_3AF8_001D_2425();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0CEA_000A_A571();
}

/**
 * Decompiled function f__B4B5_0CEA_000A_A571()
 *
 * @name f__B4B5_0CEA_000A_A571
 * @implements B4B5:0CEA:000A:A571 ()
 *
 * Called From: B4B5:0CEA:0013:040D
 */
void f__B4B5_0CEA_000A_A571()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CF4); emu_cs = 0x1381; f__1381_0051_0010_9077();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0CF4_000C_4E52();
}

/**
 * Decompiled function f__B4B5_0CF4_000C_4E52()
 *
 * @name f__B4B5_0CF4_000C_4E52
 * @implements B4B5:0CF4:000C:4E52 ()
 *
 * Called From: B4B5:0CF4:000A:A571
 */
void f__B4B5_0CF4_000C_4E52()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x0D00; emu_last_cs = 0xB4B5; emu_last_ip = 0x0CFB; emu_last_length = 0x000C; emu_last_crc = 0x4E52; emu_call(); return; } // Jump does not resolve
	f__B4B5_0E33_000B_2E01(); return;
}

/**
 * Decompiled function f__B4B5_0E33_000B_2E01()
 *
 * @name f__B4B5_0E33_000B_2E01
 * @implements B4B5:0E33:000B:2E01 ()
 *
 * Called From: B4B5:0CFD:000C:4E52
 */
void f__B4B5_0E33_000B_2E01()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0E3E); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0E3E_0012_3B58();
}

/**
 * Decompiled function f__B4B5_0E3E_0012_3B58()
 *
 * @name f__B4B5_0E3E_0012_3B58
 * @implements B4B5:0E3E:0012:3B58 ()
 *
 * Called From: B4B5:0E3E:000B:2E01
 */
void f__B4B5_0E3E_0012_3B58()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4B5_0E50_000B_3C01(); return; }
	f__B4B5_0CA2_000B_21A9(); return;
}

/**
 * Decompiled function f__B4B5_0E44_000C_BAC1()
 *
 * @name f__B4B5_0E44_000C_BAC1
 * @implements B4B5:0E44:000C:BAC1 ()
 *
 * Called From: B4B5:0C9F:0006:3CE2
 */
void f__B4B5_0E44_000C_BAC1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0E50; emu_last_cs = 0xB4B5; emu_last_ip = 0x0E4B; emu_last_length = 0x000C; emu_last_crc = 0xBAC1; emu_call(); return; } // Jump does not resolve
	f__B4B5_0CA2_000B_21A9(); return;
}

/**
 * Decompiled function f__B4B5_0E50_000B_3C01()
 *
 * @name f__B4B5_0E50_000B_3C01
 * @implements B4B5:0E50:000B:3C01 ()
 *
 * Called From: B4B5:0E4B:0012:3B58
 */
void f__B4B5_0E50_000B_3C01()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0E5B); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0E5B_003D_0550();
}

/**
 * Decompiled function f__B4B5_0E5B_003D_0550()
 *
 * @name f__B4B5_0E5B_003D_0550
 * @implements B4B5:0E5B:003D:0550 ()
 *
 * Called From: B4B5:0E5B:000B:3C01
 */
void f__B4B5_0E5B_003D_0550()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0x2);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_subw(&emu_ax.x, emu_di);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1FF9);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0E98); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0E98_0006_3D9C();
}

/**
 * Decompiled function f__B4B5_0E98_0006_3D9C()
 *
 * @name f__B4B5_0E98_0006_3D9C
 * @implements B4B5:0E98:0006:3D9C ()
 *
 * Called From: B4B5:0E98:003D:0550
 */
void f__B4B5_0E98_0006_3D9C()
{
	emu_addws(&emu_sp, 0x16);
	f__B4B5_0F9B_000C_8855(); return;
}

/**
 * Decompiled function f__B4B5_0E9E_0026_EADA()
 *
 * @name f__B4B5_0E9E_0026_EADA
 * @implements B4B5:0E9E:0026:EADA ()
 *
 * Called From: B4B5:0FA4:000C:8855
 * Called From: B4B5:0FA4:0012:89CD
 */
void f__B4B5_0E9E_0026_EADA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x7F);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1FF9);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0EC4); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0EC4_0013_040D();
}

/**
 * Decompiled function f__B4B5_0EC4_0013_040D()
 *
 * @name f__B4B5_0EC4_0013_040D
 * @implements B4B5:0EC4:0013:040D ()
 *
 * Called From: B4B5:0EC4:0026:EADA
 */
void f__B4B5_0EC4_0013_040D()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0ED7); emu_cs = 0x01F7; f__01F7_3AF8_001D_2425();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0ED7_000A_A571();
}

/**
 * Decompiled function f__B4B5_0ED7_000A_A571()
 *
 * @name f__B4B5_0ED7_000A_A571
 * @implements B4B5:0ED7:000A:A571 ()
 *
 * Called From: B4B5:0ED7:0013:040D
 */
void f__B4B5_0ED7_000A_A571()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0EE1); emu_cs = 0x1381; f__1381_0051_0010_9077();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0EE1_000C_5C68();
}

/**
 * Decompiled function f__B4B5_0EE1_000C_5C68()
 *
 * @name f__B4B5_0EE1_000C_5C68
 * @implements B4B5:0EE1:000C:5C68 ()
 *
 * Called From: B4B5:0EE1:000A:A571
 */
void f__B4B5_0EE1_000C_5C68()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x0EED; emu_last_cs = 0xB4B5; emu_last_ip = 0x0EE8; emu_last_length = 0x000C; emu_last_crc = 0x5C68; emu_call(); return; } // Jump does not resolve
	f__B4B5_0F8A_000B_3501(); return;
}

/**
 * Decompiled function f__B4B5_0F8A_000B_3501()
 *
 * @name f__B4B5_0F8A_000B_3501
 * @implements B4B5:0F8A:000B:3501 ()
 *
 * Called From: B4B5:0EEA:000C:5C68
 */
void f__B4B5_0F8A_000B_3501()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F95); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0F95_0012_89CD();
}

/**
 * Decompiled function f__B4B5_0F95_0012_89CD()
 *
 * @name f__B4B5_0F95_0012_89CD
 * @implements B4B5:0F95:0012:89CD ()
 *
 * Called From: B4B5:0F95:000B:3501
 */
void f__B4B5_0F95_0012_89CD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4B5_0FA7_000B_3C01(); return; }
	f__B4B5_0E9E_0026_EADA(); return;
}

/**
 * Decompiled function f__B4B5_0F9B_000C_8855()
 *
 * @name f__B4B5_0F9B_000C_8855
 * @implements B4B5:0F9B:000C:8855 ()
 *
 * Called From: B4B5:0E9B:0006:3D9C
 */
void f__B4B5_0F9B_000C_8855()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0FA7; emu_last_cs = 0xB4B5; emu_last_ip = 0x0FA2; emu_last_length = 0x000C; emu_last_crc = 0x8855; emu_call(); return; } // Jump does not resolve
	f__B4B5_0E9E_0026_EADA(); return;
}

/**
 * Decompiled function f__B4B5_0FA7_000B_3C01()
 *
 * @name f__B4B5_0FA7_000B_3C01
 * @implements B4B5:0FA7:000B:3C01 ()
 *
 * Called From: B4B5:0FA2:0012:89CD
 */
void f__B4B5_0FA7_000B_3C01()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0FB2); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0FB2_003D_0350();
}

/**
 * Decompiled function f__B4B5_0FB2_003D_0350()
 *
 * @name f__B4B5_0FB2_003D_0350
 * @implements B4B5:0FB2:003D:0350 ()
 *
 * Called From: B4B5:0FB2:000B:3C01
 */
void f__B4B5_0FB2_003D_0350()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0x2);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_dx.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_subw(&emu_ax.x, emu_di);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1FFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0FEF); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0FEF_0005_1FEE();
}

/**
 * Decompiled function f__B4B5_0FEF_0005_1FEE()
 *
 * @name f__B4B5_0FEF_0005_1FEE
 * @implements B4B5:0FEF:0005:1FEE ()
 *
 * Called From: B4B5:0FEF:003D:0350
 */
void f__B4B5_0FEF_0005_1FEE()
{
	emu_addws(&emu_sp, 0x16);
	f__B4B5_105D_001D_5671(); return;
}

/**
 * Decompiled function f__B4B5_0FF4_000B_3FE1()
 *
 * @name f__B4B5_0FF4_000B_3FE1
 * @implements B4B5:0FF4:000B:3FE1 ()
 *
 * Called From: B4B5:1064:001D:5671
 * Called From: B4B5:1064:0023:5541
 */
void f__B4B5_0FF4_000B_3FE1()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0FFF); emu_cs = 0x3533; ovl__3533(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0FFF_002F_04F8();
}

/**
 * Decompiled function f__B4B5_0FFF_002F_04F8()
 *
 * @name f__B4B5_0FFF_002F_04F8
 * @implements B4B5:0FFF:002F:04F8 ()
 *
 * Called From: B4B5:0FFF:000B:3FE1
 */
void f__B4B5_0FFF_002F_04F8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__B4B5_104C_000B_3501(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x7F);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1FFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x102E); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_102E_000E_8914();
}

/**
 * Decompiled function f__B4B5_102E_000E_8914()
 *
 * @name f__B4B5_102E_000E_8914
 * @implements B4B5:102E:000E:8914 ()
 *
 * Called From: B4B5:102E:002F:04F8
 */
void f__B4B5_102E_000E_8914()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x103C); emu_cs = 0x01F7; f__01F7_2252_0045_E30C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_103C_001B_572D();
}

/**
 * Decompiled function f__B4B5_103C_001B_572D()
 *
 * @name f__B4B5_103C_001B_572D
 * @implements B4B5:103C:001B:572D ()
 *
 * Called From: B4B5:103C:000E:8914
 */
void f__B4B5_103C_001B_572D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x, -0x6819), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1057); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_1057_0023_5541();
}

/**
 * Decompiled function f__B4B5_104C_000B_3501()
 *
 * @name f__B4B5_104C_000B_3501
 * @implements B4B5:104C:000B:3501 ()
 *
 * Called From: B4B5:1006:002F:04F8
 */
void f__B4B5_104C_000B_3501()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1057); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_1057_0023_5541();
}

/**
 * Decompiled function f__B4B5_1057_0023_5541()
 *
 * @name f__B4B5_1057_0023_5541
 * @implements B4B5:1057:0023:5541 ()
 *
 * Called From: B4B5:1057:000B:3501
 * Called From: B4B5:1057:001B:572D
 */
void f__B4B5_1057_0023_5541()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__B4B5_0FF4_000B_3FE1(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38AE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38AC), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__B4B5_0011_0003_06F0(); return;
}

/**
 * Decompiled function f__B4B5_105D_001D_5671()
 *
 * @name f__B4B5_105D_001D_5671
 * @implements B4B5:105D:001D:5671 ()
 *
 * Called From: B4B5:0FF2:0005:1FEE
 */
void f__B4B5_105D_001D_5671()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__B4B5_0FF4_000B_3FE1(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38AE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38AC), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0011; emu_last_cs = 0xB4B5; emu_last_ip = 0x1077; emu_last_length = 0x001D; emu_last_crc = 0x5671; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4B5_107A_0006_137A()
 *
 * @name f__B4B5_107A_0006_137A
 * @implements B4B5:107A:0006:137A ()
 *
 * Called From: B4B5:0011:0003:06F0
 */
void f__B4B5_107A_0006_137A()
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
