/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4B5_0000_0014_F092()
 *
 * @name f__B4B5_0000_0014_F092
 * @implements B4B5:0000:0014:F092 ()
 *
 * Called From: 34B5:0020:0005:0000
 */
void f__B4B5_0000_0014_F092()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xA2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0xFF);
	if (!emu_flags.zf) { f__B4B5_0014_0038_72B6(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	/* Unresolved jump */ emu_ip = 0x107A; emu_last_cs = 0xB4B5; emu_last_ip = 0x0011; emu_last_length = 0x0014; emu_last_crc = 0xF092; emu_call();
}

/**
 * Decompiled function f__B4B5_0011_0003_9539()
 *
 * @name f__B4B5_0011_0003_9539
 * @implements B4B5:0011:0003:9539 ()
 *
 * Called From: B4B5:1077:0023:53D1
 */
void f__B4B5_0011_0003_9539()
{
	f__B4B5_107A_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4B5_0014_0038_72B6()
 *
 * @name f__B4B5_0014_0038_72B6
 * @implements B4B5:0014:0038:72B6 ()
 *
 * Called From: B4B5:000D:0014:F092
 */
void f__B4B5_0014_0038_72B6()
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
	emu_push(emu_cs); emu_push(0x004C); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_004C_000D_0FE8();
}

/**
 * Decompiled function f__B4B5_004C_000D_0FE8()
 *
 * @name f__B4B5_004C_000D_0FE8
 * @implements B4B5:004C:000D:0FE8 ()
 *
 * Called From: B4B5:004C:0038:72B6
 */
void f__B4B5_004C_000D_0FE8()
{
	emu_addws(&emu_sp, 0xC);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x22);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0059); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0059_0008_B4CF();
}

/**
 * Decompiled function f__B4B5_0059_0008_B4CF()
 *
 * @name f__B4B5_0059_0008_B4CF
 * @implements B4B5:0059:0008:B4CF ()
 *
 * Called From: B4B5:0059:000D:0FE8
 */
void f__B4B5_0059_0008_B4CF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4B5_0061_0014_7874(); return; }
	/* Unresolved jump */ emu_ip = 0x000F; emu_last_cs = 0xB4B5; emu_last_ip = 0x005F; emu_last_length = 0x0008; emu_last_crc = 0xB4CF; emu_call();
}

/**
 * Decompiled function f__B4B5_0061_0014_7874()
 *
 * @name f__B4B5_0061_0014_7874
 * @implements B4B5:0061:0014:7874 ()
 *
 * Called From: B4B5:005D:0008:B4CF
 */
void f__B4B5_0061_0014_7874()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DC));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DA));
	emu_push(emu_cs); emu_push(0x0075); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0075_001B_0118();
}

/**
 * Decompiled function f__B4B5_0075_001B_0118()
 *
 * @name f__B4B5_0075_001B_0118
 * @implements B4B5:0075:001B:0118 ()
 *
 * Called From: B4B5:0075:0014:7874
 */
void f__B4B5_0075_001B_0118()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38E0));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x38DE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x22);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0090); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0090_0014_EBAA();
}

/**
 * Decompiled function f__B4B5_0090_0014_EBAA()
 *
 * @name f__B4B5_0090_0014_EBAA
 * @implements B4B5:0090:0014:EBAA ()
 *
 * Called From: B4B5:0090:001B:0118
 */
void f__B4B5_0090_0014_EBAA()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, 0xE6);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x8CFD);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00A4); emu_cs = 0x01F7; f__01F7_2947_0014_02B8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_00A4_0022_04BB();
}

/**
 * Decompiled function f__B4B5_00A4_0022_04BB()
 *
 * @name f__B4B5_00A4_0022_04BB
 * @implements B4B5:00A4:0022:04BB ()
 *
 * Called From: B4B5:00A4:0014:EBAA
 */
void f__B4B5_00A4_0022_04BB()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8CFD), 0x290);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8D01));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC7);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00C6); emu_cs = 0x34FC; ovl__34FC(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_00C6_001F_0DBE();
}

/**
 * Decompiled function f__B4B5_00C6_001F_0DBE()
 *
 * @name f__B4B5_00C6_001F_0DBE
 * @implements B4B5:00C6:001F:0DBE ()
 *
 * Called From: B4B5:00C6:0022:04BB
 */
void f__B4B5_00C6_001F_0DBE()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8D01), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8D03));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1ED0);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00E5); emu_cs = 0x34FC; ovl__34FC(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_00E5_001F_25BE();
}

/**
 * Decompiled function f__B4B5_00E5_001F_25BE()
 *
 * @name f__B4B5_00E5_001F_25BE
 * @implements B4B5:00E5:001F:25BE ()
 *
 * Called From: B4B5:00E5:001F:0DBE
 */
void f__B4B5_00E5_001F_25BE()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8D03), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8D05));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EDE);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EDA);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0104); emu_cs = 0x34FC; ovl__34FC(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0104_0023_B49E();
}

/**
 * Decompiled function f__B4B5_0104_0023_B49E()
 *
 * @name f__B4B5_0104_0023_B49E
 * @implements B4B5:0104:0023:B49E ()
 *
 * Called From: B4B5:0104:001F:25BE
 */
void f__B4B5_0104_0023_B49E()
{
	emu_addws(&emu_sp, 0xE);
	emu_cwd();
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8D07), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8D05), emu_ax.x);
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
	f__B4B5_0127_001F_EA8A();
}

/**
 * Decompiled function f__B4B5_0127_001F_EA8A()
 *
 * @name f__B4B5_0127_001F_EA8A
 * @implements B4B5:0127:001F:EA8A ()
 *
 * Called From: B4B5:0127:0023:B49E
 */
void f__B4B5_0127_001F_EA8A()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8D0B), emu_ax.x);
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
	f__B4B5_0146_0022_A358();
}

/**
 * Decompiled function f__B4B5_0146_0022_A358()
 *
 * @name f__B4B5_0146_0022_A358
 * @implements B4B5:0146:0022:A358 ()
 *
 * Called From: B4B5:0146:001F:EA8A
 */
void f__B4B5_0146_0022_A358()
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
	f__B4B5_0168_0022_8C57();
}

/**
 * Decompiled function f__B4B5_0168_0022_8C57()
 *
 * @name f__B4B5_0168_0022_8C57
 * @implements B4B5:0168:0022:8C57 ()
 *
 * Called From: B4B5:0168:0022:A358
 */
void f__B4B5_0168_0022_8C57()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A00), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A02), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8D09));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F01);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1EC1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x018A); emu_cs = 0x34FC; ovl__34FC(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_018A_0029_D26D();
}

/**
 * Decompiled function f__B4B5_018A_0029_D26D()
 *
 * @name f__B4B5_018A_0029_D26D
 * @implements B4B5:018A:0029:D26D ()
 *
 * Called From: B4B5:018A:0022:8C57
 */
void f__B4B5_018A_0029_D26D()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x8D09), emu_ax.x);
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
	f__B4B5_01B3_0026_A872();
}

/**
 * Decompiled function f__B4B5_01B3_0026_A872()
 *
 * @name f__B4B5_01B3_0026_A872
 * @implements B4B5:01B3:0026:A872 ()
 *
 * Called From: B4B5:01B3:0029:D26D
 */
void f__B4B5_01B3_0026_A872()
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
	f__B4B5_01D9_0026_480D();
}

/**
 * Decompiled function f__B4B5_01D9_0026_480D()
 *
 * @name f__B4B5_01D9_0026_480D
 * @implements B4B5:01D9:0026:480D ()
 *
 * Called From: B4B5:01D9:0026:A872
 */
void f__B4B5_01D9_0026_480D()
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
	f__B4B5_01FF_0008_5475();
}

/**
 * Decompiled function f__B4B5_01FF_0008_5475()
 *
 * @name f__B4B5_01FF_0008_5475
 * @implements B4B5:01FF:0008:5475 ()
 *
 * Called From: B4B5:01FF:0026:480D
 */
void f__B4B5_01FF_0008_5475()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_cs); emu_push(0x0207); emu_cs = 0x34B8; ovl__34B8(5);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0207_000D_44AD();
}

/**
 * Decompiled function f__B4B5_0207_000D_44AD()
 *
 * @name f__B4B5_0207_000D_44AD
 * @implements B4B5:0207:000D:44AD ()
 *
 * Called From: 261F:01B9:001B:EDBF
 */
void f__B4B5_0207_000D_44AD()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8D07));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x8D05));
	emu_push(emu_cs); emu_push(0x0214); emu_cs = 0x34B8; ovl__34B8(6);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0214_0007_588E();
}

/**
 * Decompiled function f__B4B5_0214_0007_588E()
 *
 * @name f__B4B5_0214_0007_588E
 * @implements B4B5:0214:0007:588E ()
 *
 * Called From: B4B5:0214:000D:44AD
 */
void f__B4B5_0214_0007_588E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_xorw(&emu_si, emu_si);
	f__B4B5_0344_0008_0B07(); return;
}

/**
 * Decompiled function f__B4B5_021B_0041_D371()
 *
 * @name f__B4B5_021B_0041_D371
 * @implements B4B5:021B:0041:D371 ()
 *
 * Called From: B4B5:0349:0008:0B07
 * Called From: B4B5:0349:003F:A1B8
 * Called From: B4B5:0349:0009:0B24
 */
void f__B4B5_021B_0041_D371()
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
	f__B4B5_025C_000E_4C74();
}

/**
 * Decompiled function f__B4B5_025C_000E_4C74()
 *
 * @name f__B4B5_025C_000E_4C74
 * @implements B4B5:025C:000E:4C74 ()
 *
 * Called From: B4B5:025C:0041:D371
 */
void f__B4B5_025C_000E_4C74()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x026A); emu_cs = 0x01F7; f__01F7_3CD5_000D_9D98();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_026A_000E_B38A();
}

/**
 * Decompiled function f__B4B5_026A_000E_B38A()
 *
 * @name f__B4B5_026A_000E_B38A
 * @implements B4B5:026A:000E:B38A ()
 *
 * Called From: B4B5:026A:000E:4C74
 */
void f__B4B5_026A_000E_B38A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F5B);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0278); emu_cs = 0x01F7; f__01F7_3A8A_0018_E4EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0278_0014_E9B8();
}

/**
 * Decompiled function f__B4B5_0278_0014_E9B8()
 *
 * @name f__B4B5_0278_0014_E9B8
 * @implements B4B5:0278:0014:E9B8 ()
 *
 * Called From: B4B5:0278:000E:B38A
 */
void f__B4B5_0278_0014_E9B8()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (!emu_flags.zf) { f__B4B5_028C_000B_6FB9(); return; }
	f__B4B5_0343_0009_0B24(); return;
}

/**
 * Decompiled function f__B4B5_028C_000B_6FB9()
 *
 * @name f__B4B5_028C_000B_6FB9
 * @implements B4B5:028C:000B:6FB9 ()
 *
 * Called From: B4B5:0287:0014:E9B8
 */
void f__B4B5_028C_000B_6FB9()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0297); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0297_0009_3799();
}

/**
 * Decompiled function f__B4B5_0297_0009_3799()
 *
 * @name f__B4B5_0297_0009_3799
 * @implements B4B5:0297:0009:3799 ()
 *
 * Called From: B4B5:0297:000B:6FB9
 */
void f__B4B5_0297_0009_3799()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4B5_02A0_0006_D4F4(); return; }
	/* Unresolved jump */ emu_ip = 0x0343; emu_last_cs = 0xB4B5; emu_last_ip = 0x029D; emu_last_length = 0x0009; emu_last_crc = 0x3799; emu_call();
}

/**
 * Decompiled function f__B4B5_02A0_0006_D4F4()
 *
 * @name f__B4B5_02A0_0006_D4F4
 * @implements B4B5:02A0:0006:D4F4 ()
 *
 * Called From: B4B5:029B:0009:3799
 */
void f__B4B5_02A0_0006_D4F4()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02A6); emu_cs = 0x10BE; emu_House_Allocate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_02A6_0020_939D();
}

/**
 * Decompiled function f__B4B5_02A6_0020_939D()
 *
 * @name f__B4B5_02A6_0020_939D
 * @implements B4B5:02A6:0020:939D ()
 *
 * Called From: B4B5:02A6:0006:D4F4
 */
void f__B4B5_02A6_0020_939D()
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
	f__B4B5_02C6_0023_D24E();
}

/**
 * Decompiled function f__B4B5_02C6_0023_D24E()
 *
 * @name f__B4B5_02C6_0023_D24E
 * @implements B4B5:02C6:0023:D24E ()
 *
 * Called From: B4B5:02C6:0020:939D
 */
void f__B4B5_02C6_0023_D24E()
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
	f__B4B5_02E9_0024_0501();
}

/**
 * Decompiled function f__B4B5_02E9_0024_0501()
 *
 * @name f__B4B5_02E9_0024_0501
 * @implements B4B5:02E9:0024:0501 ()
 *
 * Called From: B4B5:02E9:0023:D24E
 */
void f__B4B5_02E9_0024_0501()
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
	f__B4B5_030D_003F_A1B8();
}

/**
 * Decompiled function f__B4B5_030D_003F_A1B8()
 *
 * @name f__B4B5_030D_003F_A1B8
 * @implements B4B5:030D:003F:A1B8 ()
 *
 * Called From: B4B5:030D:0024:0501
 */
void f__B4B5_030D_003F_A1B8()
{
	emu_addws(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x48);
	if (!emu_flags.zf) { f__B4B5_0343_0009_0B24(); return; }
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
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x034C; emu_last_cs = 0xB4B5; emu_last_ip = 0x0347; emu_last_length = 0x003F; emu_last_crc = 0xA1B8; emu_call(); return; }
	f__B4B5_021B_0041_D371(); return;
}

/**
 * Decompiled function f__B4B5_0343_0009_0B24()
 *
 * @name f__B4B5_0343_0009_0B24
 * @implements B4B5:0343:0009:0B24 ()
 *
 * Called From: B4B5:0289:0014:E9B8
 * Called From: B4B5:031E:003F:A1B8
 */
void f__B4B5_0343_0009_0B24()
{
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x6);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4B5_034C_0019_3E28(); return; }
	f__B4B5_021B_0041_D371(); return;
}

/**
 * Decompiled function f__B4B5_0344_0008_0B07()
 *
 * @name f__B4B5_0344_0008_0B07
 * @implements B4B5:0344:0008:0B07 ()
 *
 * Called From: B4B5:0218:0007:588E
 */
void f__B4B5_0344_0008_0B07()
{
	emu_cmpws(&emu_si, 0x6);
	if (!(emu_flags.sf != emu_flags.of)) { /* Unresolved jump */ emu_ip = 0x034C; emu_last_cs = 0xB4B5; emu_last_ip = 0x0347; emu_last_length = 0x0008; emu_last_crc = 0x0B07; emu_call(); return; }
	f__B4B5_021B_0041_D371(); return;
}

/**
 * Decompiled function f__B4B5_034C_0019_3E28()
 *
 * @name f__B4B5_034C_0019_3E28
 * @implements B4B5:034C:0019:3E28 ()
 *
 * Called From: B4B5:0347:0009:0B24
 */
void f__B4B5_034C_0019_3E28()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A3A));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x0);
	if (!emu_flags.zf) { f__B4B5_03A0_000B_6148(); return; }
	emu_movw(&emu_di, 0x50);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0365); emu_cs = 0x10BE; emu_ip = 0x01E2; emu_last_cs = 0xB4B5; emu_last_ip = 0x0360; emu_last_length = 0x0019; emu_last_crc = 0x3E28; emu_call();
	/* Unresolved jump */ emu_ip = 0x0365; emu_last_cs = 0xB4B5; emu_last_ip = 0x0365; emu_last_length = 0x0019; emu_last_crc = 0x3E28; emu_call();
}

/**
 * Decompiled function f__B4B5_03A0_000B_6148()
 *
 * @name f__B4B5_03A0_000B_6148
 * @implements B4B5:03A0:000B:6148 ()
 *
 * Called From: B4B5:0355:0019:3E28
 */
void f__B4B5_03A0_000B_6148()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x03AB); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_03AB_0040_8201();
}

/**
 * Decompiled function f__B4B5_03AB_0040_8201()
 *
 * @name f__B4B5_03AB_0040_8201
 * @implements B4B5:03AB:0040:8201 ()
 *
 * Called From: B4B5:03AB:000B:6148
 */
void f__B4B5_03AB_0040_8201()
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
	f__B4B5_03EB_0006_B612();
}

/**
 * Decompiled function f__B4B5_03EB_0006_B612()
 *
 * @name f__B4B5_03EB_0006_B612
 * @implements B4B5:03EB:0006:B612 ()
 *
 * Called From: B4B5:03EB:0040:8201
 */
void f__B4B5_03EB_0006_B612()
{
	emu_addws(&emu_sp, 0x16);
	f__B4B5_0638_000C_610D(); return;
}

/**
 * Decompiled function f__B4B5_03F1_000F_A0F4()
 *
 * @name f__B4B5_03F1_000F_A0F4
 * @implements B4B5:03F1:000F:A0F4 ()
 *
 * Called From: B4B5:0641:000C:610D
 * Called From: B4B5:0641:0012:AEC4
 */
void f__B4B5_03F1_000F_A0F4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0400); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0400_002B_2569();
}

/**
 * Decompiled function f__B4B5_0400_002B_2569()
 *
 * @name f__B4B5_0400_002B_2569
 * @implements B4B5:0400:002B:2569 ()
 *
 * Called From: B4B5:0400:000F:A0F4
 */
void f__B4B5_0400_002B_2569()
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
	f__B4B5_042B_0013_2B96();
}

/**
 * Decompiled function f__B4B5_042B_0013_2B96()
 *
 * @name f__B4B5_042B_0013_2B96
 * @implements B4B5:042B:0013:2B96 ()
 *
 * Called From: B4B5:042B:002B:2569
 */
void f__B4B5_042B_0013_2B96()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x043E); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_043E_000A_3572();
}

/**
 * Decompiled function f__B4B5_043E_000A_3572()
 *
 * @name f__B4B5_043E_000A_3572
 * @implements B4B5:043E:000A:3572 ()
 *
 * Called From: B4B5:043E:0013:2B96
 */
void f__B4B5_043E_000A_3572()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0448); emu_cs = 0x1381; f__1381_0051_0010_81BB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0448_000C_97E0();
}

/**
 * Decompiled function f__B4B5_0448_000C_97E0()
 *
 * @name f__B4B5_0448_000C_97E0
 * @implements B4B5:0448:000C:97E0 ()
 *
 * Called From: B4B5:0448:000A:3572
 */
void f__B4B5_0448_000C_97E0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__B4B5_0454_0010_8687(); return; }
	/* Unresolved jump */ emu_ip = 0x0627; emu_last_cs = 0xB4B5; emu_last_ip = 0x0451; emu_last_length = 0x000C; emu_last_crc = 0x97E0; emu_call();
}

/**
 * Decompiled function f__B4B5_0454_0010_8687()
 *
 * @name f__B4B5_0454_0010_8687
 * @implements B4B5:0454:0010:8687 ()
 *
 * Called From: B4B5:044F:000C:97E0
 */
void f__B4B5_0454_0010_8687()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0464); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0464_000A_B659();
}

/**
 * Decompiled function f__B4B5_0464_000A_B659()
 *
 * @name f__B4B5_0464_000A_B659
 * @implements B4B5:0464:000A:B659 ()
 *
 * Called From: B4B5:0464:0010:8687
 */
void f__B4B5_0464_000A_B659()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x046E); emu_cs = 0x3533; ovl__3533(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_046E_000C_17F9();
}

/**
 * Decompiled function f__B4B5_046E_000C_17F9()
 *
 * @name f__B4B5_046E_000C_17F9
 * @implements B4B5:046E:000C:17F9 ()
 *
 * Called From: B4B5:046E:000A:B659
 */
void f__B4B5_046E_000C_17F9()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0xFF);
	if (!emu_flags.zf) { f__B4B5_047A_000B_186A(); return; }
	/* Unresolved jump */ emu_ip = 0x0627; emu_last_cs = 0xB4B5; emu_last_ip = 0x0477; emu_last_length = 0x000C; emu_last_crc = 0x17F9; emu_call();
}

/**
 * Decompiled function f__B4B5_047A_000B_186A()
 *
 * @name f__B4B5_047A_000B_186A
 * @implements B4B5:047A:000B:186A ()
 *
 * Called From: B4B5:0475:000C:17F9
 */
void f__B4B5_047A_000B_186A()
{
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0485); emu_cs = 0x0FE4; f__0FE4_03A7_0027_85D5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0485_0014_19B1();
}

/**
 * Decompiled function f__B4B5_0485_0014_19B1()
 *
 * @name f__B4B5_0485_0014_19B1
 * @implements B4B5:0485:0014:19B1 ()
 *
 * Called From: B4B5:0485:000B:186A
 */
void f__B4B5_0485_0014_19B1()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B4B5_0499_0019_B499(); return; }
	f__B4B5_0627_000B_414C(); return;
}

/**
 * Decompiled function f__B4B5_0499_0019_B499()
 *
 * @name f__B4B5_0499_0019_B499
 * @implements B4B5:0499:0019:B499 ()
 *
 * Called From: B4B5:0494:0014:19B1
 */
void f__B4B5_0499_0019_B499()
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
	emu_push(emu_cs); emu_push(0x04B2); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_04B2_000A_882F();
}

/**
 * Decompiled function f__B4B5_04B2_000A_882F()
 *
 * @name f__B4B5_04B2_000A_882F
 * @implements B4B5:04B2:000A:882F ()
 *
 * Called From: B4B5:04B2:0019:B499
 */
void f__B4B5_04B2_000A_882F()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x04BC); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_04BC_0021_883C();
}

/**
 * Decompiled function f__B4B5_04BC_0021_883C()
 *
 * @name f__B4B5_04BC_0021_883C
 * @implements B4B5:04BC:0021:883C ()
 *
 * Called From: B4B5:04BC:000A:882F
 */
void f__B4B5_04BC_0021_883C()
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
	f__B4B5_04DD_0019_97D1();
}

/**
 * Decompiled function f__B4B5_04DD_0019_97D1()
 *
 * @name f__B4B5_04DD_0019_97D1
 * @implements B4B5:04DD:0019:97D1 ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4B5:04DD:0021:883C
 */
void f__B4B5_04DD_0019_97D1()
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
	emu_push(emu_cs); emu_push(0x04F6); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_04F6_000A_882F();
}

/**
 * Decompiled function f__B4B5_04F6_000A_882F()
 *
 * @name f__B4B5_04F6_000A_882F
 * @implements B4B5:04F6:000A:882F ()
 *
 * Called From: B4B5:04F6:0019:97D1
 */
void f__B4B5_04F6_000A_882F()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0500); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0500_0008_0AE5();
}

/**
 * Decompiled function f__B4B5_0500_0008_0AE5()
 *
 * @name f__B4B5_0500_0008_0AE5
 * @implements B4B5:0500:0008:0AE5 ()
 *
 * Called From: B4B5:0500:000A:882F
 */
void f__B4B5_0500_0008_0AE5()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0508); emu_cs = 0x0F3F; f__0F3F_009D_0017_8464();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0508_001C_DBB3();
}

/**
 * Decompiled function f__B4B5_0508_001C_DBB3()
 *
 * @name f__B4B5_0508_001C_DBB3
 * @implements B4B5:0508:001C:DBB3 ()
 *
 * Called From: B4B5:0508:0008:0AE5
 */
void f__B4B5_0508_001C_DBB3()
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
	emu_push(emu_cs); emu_push(0x0524); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0524_000A_882F();
}

/**
 * Decompiled function f__B4B5_0524_000A_882F()
 *
 * @name f__B4B5_0524_000A_882F
 * @implements B4B5:0524:000A:882F ()
 *
 * Called From: B4B5:0524:001C:DBB3
 */
void f__B4B5_0524_000A_882F()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x052E); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_052E_0019_A2F9();
}

/**
 * Decompiled function f__B4B5_052E_0019_A2F9()
 *
 * @name f__B4B5_052E_0019_A2F9
 * @implements B4B5:052E:0019:A2F9 ()
 *
 * Called From: B4B5:052E:000A:882F
 */
void f__B4B5_052E_0019_A2F9()
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
	emu_push(emu_cs); emu_push(0x0547); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0547_000A_7577();
}

/**
 * Decompiled function f__B4B5_0547_000A_7577()
 *
 * @name f__B4B5_0547_000A_7577
 * @implements B4B5:0547:000A:7577 ()
 *
 * Called From: B4B5:0547:0019:A2F9
 */
void f__B4B5_0547_000A_7577()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0551); emu_cs = 0x1381; f__1381_0005_0010_8273();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0551_0021_D3B7();
}

/**
 * Decompiled function f__B4B5_0551_0021_D3B7()
 *
 * @name f__B4B5_0551_0021_D3B7
 * @implements B4B5:0551:0021:D3B7 ()
 *
 * Called From: B4B5:0551:000A:7577
 */
void f__B4B5_0551_0021_D3B7()
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
	emu_push(emu_cs); emu_push(0x0572); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0572_0008_3755();
}

/**
 * Decompiled function f__B4B5_0572_0008_3755()
 *
 * @name f__B4B5_0572_0008_3755
 * @implements B4B5:0572:0008:3755 ()
 *
 * Called From: B4B5:0572:0021:D3B7
 */
void f__B4B5_0572_0008_3755()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x057A); emu_cs = 0x34CD; ovl__34CD(11);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_057A_0017_470E();
}

/**
 * Decompiled function f__B4B5_057A_0017_470E()
 *
 * @name f__B4B5_057A_0017_470E
 * @implements B4B5:057A:0017:470E ()
 *
 * Called From: B4B5:057A:0008:3755
 */
void f__B4B5_057A_0017_470E()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4B5_0596_001F_757D(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x2);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__B4B5_0596_001F_757D(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0591); emu_cs = 0x0FE4; emu_ip = 0x0568; emu_last_cs = 0xB4B5; emu_last_ip = 0x058C; emu_last_length = 0x0017; emu_last_crc = 0x470E; emu_call();
	/* Unresolved jump */ emu_ip = 0x0591; emu_last_cs = 0xB4B5; emu_last_ip = 0x0591; emu_last_length = 0x0017; emu_last_crc = 0x470E; emu_call();
}

/**
 * Decompiled function f__B4B5_0596_001F_757D()
 *
 * @name f__B4B5_0596_001F_757D
 * @implements B4B5:0596:001F:757D ()
 *
 * Called From: B4B5:057D:0017:470E
 * Called From: B4B5:0584:0017:470E
 */
void f__B4B5_0596_001F_757D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05B8; emu_last_cs = 0xB4B5; emu_last_ip = 0x059F; emu_last_length = 0x001F; emu_last_crc = 0x757D; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x05B5); emu_cs = 0x176C; f__176C_000E_000E_633D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_05B5_001F_CB42();
}

/**
 * Decompiled function f__B4B5_05B5_001F_CB42()
 *
 * @name f__B4B5_05B5_001F_CB42
 * @implements B4B5:05B5:001F:CB42 ()
 *
 * Called From: B4B5:05B5:001F:757D
 */
void f__B4B5_05B5_001F_CB42()
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
	emu_push(emu_cs); emu_push(0x05D4); emu_cs = 0x1423; f__1423_08CD_0012_0004();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_05D4_001F_E8C6();
}

/**
 * Decompiled function f__B4B5_05D4_001F_E8C6()
 *
 * @name f__B4B5_05D4_001F_E8C6
 * @implements B4B5:05D4:001F:E8C6 ()
 *
 * Called From: B4B5:05D4:001F:CB42
 */
void f__B4B5_05D4_001F_E8C6()
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
	emu_push(emu_cs); emu_push(0x05F3); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_05F3_0020_9640();
}

/**
 * Decompiled function f__B4B5_05F3_0020_9640()
 *
 * @name f__B4B5_05F3_0020_9640
 * @implements B4B5:05F3:0020:9640 ()
 *
 * Called From: B4B5:05F3:001F:E8C6
 */
void f__B4B5_05F3_0020_9640()
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
	emu_push(emu_cs); emu_push(0x0613); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0613_0011_7F5A();
}

/**
 * Decompiled function f__B4B5_0613_0011_7F5A()
 *
 * @name f__B4B5_0613_0011_7F5A
 * @implements B4B5:0613:0011:7F5A ()
 *
 * Called From: B4B5:0613:0020:9640
 */
void f__B4B5_0613_0011_7F5A()
{
	emu_addws(&emu_sp, 0xA);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0624); emu_cs = 0x1A34; f__1A34_204C_0043_B1ED();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0624_000E_6326();
}

/**
 * Decompiled function f__B4B5_0624_000E_6326()
 *
 * @name f__B4B5_0624_000E_6326
 * @implements B4B5:0624:000E:6326 ()
 *
 * Called From: B4B5:0624:0011:7F5A
 */
void f__B4B5_0624_000E_6326()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0632); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0632_0012_AEC4();
}

/**
 * Decompiled function f__B4B5_0627_000B_414C()
 *
 * @name f__B4B5_0627_000B_414C
 * @implements B4B5:0627:000B:414C ()
 *
 * Called From: B4B5:0496:0014:19B1
 */
void f__B4B5_0627_000B_414C()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0632); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0632_0012_AEC4();
}

/**
 * Decompiled function f__B4B5_0632_0012_AEC4()
 *
 * @name f__B4B5_0632_0012_AEC4
 * @implements B4B5:0632:0012:AEC4 ()
 *
 * Called From: B4B5:0632:000E:6326
 * Called From: B4B5:0632:000B:414C
 */
void f__B4B5_0632_0012_AEC4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4B5_0644_000B_6148(); return; }
	f__B4B5_03F1_000F_A0F4(); return;
}

/**
 * Decompiled function f__B4B5_0638_000C_610D()
 *
 * @name f__B4B5_0638_000C_610D
 * @implements B4B5:0638:000C:610D ()
 *
 * Called From: B4B5:03EE:0006:B612
 */
void f__B4B5_0638_000C_610D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0644; emu_last_cs = 0xB4B5; emu_last_ip = 0x063F; emu_last_length = 0x000C; emu_last_crc = 0x610D; emu_call(); return; }
	f__B4B5_03F1_000F_A0F4(); return;
}

/**
 * Decompiled function f__B4B5_0644_000B_6148()
 *
 * @name f__B4B5_0644_000B_6148
 * @implements B4B5:0644:000B:6148 ()
 *
 * Called From: B4B5:063F:0012:AEC4
 */
void f__B4B5_0644_000B_6148()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x064F); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_064F_0040_7E01();
}

/**
 * Decompiled function f__B4B5_064F_0040_7E01()
 *
 * @name f__B4B5_064F_0040_7E01
 * @implements B4B5:064F:0040:7E01 ()
 *
 * Called From: B4B5:064F:000B:6148
 */
void f__B4B5_064F_0040_7E01()
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
	f__B4B5_068F_0006_77BF();
}

/**
 * Decompiled function f__B4B5_068F_0006_77BF()
 *
 * @name f__B4B5_068F_0006_77BF
 * @implements B4B5:068F:0006:77BF ()
 *
 * Called From: B4B5:068F:0040:7E01
 */
void f__B4B5_068F_0006_77BF()
{
	emu_addws(&emu_sp, 0x16);
	f__B4B5_0885_000C_20A7(); return;
}

/**
 * Decompiled function f__B4B5_0695_0014_F457()
 *
 * @name f__B4B5_0695_0014_F457
 * @implements B4B5:0695:0014:F457 ()
 *
 * Called From: B4B5:088E:000C:20A7
 * Called From: B4B5:088E:0012:EF6E
 */
void f__B4B5_0695_0014_F457()
{
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F92);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x06A9); emu_cs = 0x01F7; f__01F7_28DC_0009_EE56();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_06A9_000A_C412();
}

/**
 * Decompiled function f__B4B5_06A9_000A_C412()
 *
 * @name f__B4B5_06A9_000A_C412
 * @implements B4B5:06A9:000A:C412 ()
 *
 * Called From: B4B5:06A9:0014:F457
 */
void f__B4B5_06A9_000A_C412()
{
	emu_addws(&emu_sp, 0xA);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4B5_06B3_000F_80F4(); return; }
	f__B4B5_074A_000F_A0F4(); return;
}

/**
 * Decompiled function f__B4B5_06B3_000F_80F4()
 *
 * @name f__B4B5_06B3_000F_80F4
 * @implements B4B5:06B3:000F:80F4 ()
 *
 * Called From: B4B5:06AE:000A:C412
 */
void f__B4B5_06B3_000F_80F4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, 0x3);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x06C2); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_06C2_002B_D951();
}

/**
 * Decompiled function f__B4B5_06C2_002B_D951()
 *
 * @name f__B4B5_06C2_002B_D951
 * @implements B4B5:06C2:002B:D951 ()
 *
 * Called From: B4B5:06C2:000F:80F4
 */
void f__B4B5_06C2_002B_D951()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
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
	emu_push(emu_cs); emu_push(0x06ED); emu_cs = 0x34FC; ovl__34FC(1);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_06ED_0013_2B96();
}

/**
 * Decompiled function f__B4B5_06ED_0013_2B96()
 *
 * @name f__B4B5_06ED_0013_2B96
 * @implements B4B5:06ED:0013:2B96 ()
 *
 * Called From: B4B5:06ED:002B:D951
 */
void f__B4B5_06ED_0013_2B96()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0700); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0700_000A_3572();
}

/**
 * Decompiled function f__B4B5_0700_000A_3572()
 *
 * @name f__B4B5_0700_000A_3572
 * @implements B4B5:0700:000A:3572 ()
 *
 * Called From: B4B5:0700:0013:2B96
 */
void f__B4B5_0700_000A_3572()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x070A); emu_cs = 0x1381; f__1381_0051_0010_81BB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_070A_0014_A580();
}

/**
 * Decompiled function f__B4B5_070A_0014_A580()
 *
 * @name f__B4B5_070A_0014_A580
 * @implements B4B5:070A:0014:A580 ()
 *
 * Called From: B4B5:070A:000A:3572
 */
void f__B4B5_070A_0014_A580()
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
	emu_push(emu_cs); emu_push(0x071E); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_071E_000A_7659();
}

/**
 * Decompiled function f__B4B5_071E_000A_7659()
 *
 * @name f__B4B5_071E_000A_7659
 * @implements B4B5:071E:000A:7659 ()
 *
 * Called From: B4B5:071E:0014:A580
 */
void f__B4B5_071E_000A_7659()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0728); emu_cs = 0x3530; ovl__3530(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0728_001C_537A();
}

/**
 * Decompiled function f__B4B5_0728_001C_537A()
 *
 * @name f__B4B5_0728_001C_537A
 * @implements B4B5:0728:001C:537A ()
 *
 * Called From: B4B5:0728:000A:7659
 */
void f__B4B5_0728_001C_537A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0747; emu_last_cs = 0xB4B5; emu_last_ip = 0x072F; emu_last_length = 0x001C; emu_last_crc = 0x537A; emu_call(); return; }
	emu_cmpws(&emu_di, 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0747; emu_last_cs = 0xB4B5; emu_last_ip = 0x0734; emu_last_length = 0x001C; emu_last_crc = 0x537A; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0744); emu_cs = 0x0C3A; f__0C3A_0009_0029_BF94();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0744_0006_1788();
}

/**
 * Decompiled function f__B4B5_0744_0006_1788()
 *
 * @name f__B4B5_0744_0006_1788
 * @implements B4B5:0744:0006:1788 ()
 *
 * Called From: B4B5:0744:001C:537A
 */
void f__B4B5_0744_0006_1788()
{
	emu_addws(&emu_sp, 0x8);
	f__B4B5_0874_000B_414C(); return;
}

/**
 * Decompiled function f__B4B5_074A_000F_A0F4()
 *
 * @name f__B4B5_074A_000F_A0F4
 * @implements B4B5:074A:000F:A0F4 ()
 *
 * Called From: B4B5:06B0:000A:C412
 */
void f__B4B5_074A_000F_A0F4()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0759); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0759_002B_D969();
}

/**
 * Decompiled function f__B4B5_0759_002B_D969()
 *
 * @name f__B4B5_0759_002B_D969
 * @implements B4B5:0759:002B:D969 ()
 *
 * Called From: B4B5:0759:000F:A0F4
 */
void f__B4B5_0759_002B_D969()
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
	f__B4B5_0784_0013_2B96();
}

/**
 * Decompiled function f__B4B5_0784_0013_2B96()
 *
 * @name f__B4B5_0784_0013_2B96
 * @implements B4B5:0784:0013:2B96 ()
 *
 * Called From: B4B5:0784:002B:D969
 */
void f__B4B5_0784_0013_2B96()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0797); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0797_000A_3572();
}

/**
 * Decompiled function f__B4B5_0797_000A_3572()
 *
 * @name f__B4B5_0797_000A_3572
 * @implements B4B5:0797:000A:3572 ()
 *
 * Called From: B4B5:0797:0013:2B96
 */
void f__B4B5_0797_000A_3572()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07A1); emu_cs = 0x1381; f__1381_0051_0010_81BB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_07A1_0014_A580();
}

/**
 * Decompiled function f__B4B5_07A1_0014_A580()
 *
 * @name f__B4B5_07A1_0014_A580
 * @implements B4B5:07A1:0014:A580 ()
 *
 * Called From: B4B5:07A1:000A:3572
 */
void f__B4B5_07A1_0014_A580()
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
	emu_push(emu_cs); emu_push(0x07B5); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_07B5_000A_7659();
}

/**
 * Decompiled function f__B4B5_07B5_000A_7659()
 *
 * @name f__B4B5_07B5_000A_7659
 * @implements B4B5:07B5:000A:7659 ()
 *
 * Called From: B4B5:07B5:0014:A580
 */
void f__B4B5_07B5_000A_7659()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07BF); emu_cs = 0x3530; ovl__3530(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_07BF_000C_177A();
}

/**
 * Decompiled function f__B4B5_07BF_000C_177A()
 *
 * @name f__B4B5_07BF_000C_177A
 * @implements B4B5:07BF:000C:177A ()
 *
 * Called From: B4B5:07BF:000A:7659
 */
void f__B4B5_07BF_000C_177A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__B4B5_07CB_0008_105D(); return; }
	/* Unresolved jump */ emu_ip = 0x0874; emu_last_cs = 0xB4B5; emu_last_ip = 0x07C8; emu_last_length = 0x000C; emu_last_crc = 0x177A; emu_call();
}

/**
 * Decompiled function f__B4B5_07CB_0008_105D()
 *
 * @name f__B4B5_07CB_0008_105D
 * @implements B4B5:07CB:0008:105D ()
 *
 * Called From: B4B5:07C6:000C:177A
 */
void f__B4B5_07CB_0008_105D()
{
	emu_cmpws(&emu_di, 0xFF);
	if (!emu_flags.zf) { f__B4B5_07D3_0010_8687(); return; }
	/* Unresolved jump */ emu_ip = 0x0874; emu_last_cs = 0xB4B5; emu_last_ip = 0x07D0; emu_last_length = 0x0008; emu_last_crc = 0x105D; emu_call();
}

/**
 * Decompiled function f__B4B5_07D3_0010_8687()
 *
 * @name f__B4B5_07D3_0010_8687
 * @implements B4B5:07D3:0010:8687 ()
 *
 * Called From: B4B5:07CE:0008:105D
 */
void f__B4B5_07D3_0010_8687()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x07E3); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_07E3_000A_882F();
}

/**
 * Decompiled function f__B4B5_07E3_000A_882F()
 *
 * @name f__B4B5_07E3_000A_882F
 * @implements B4B5:07E3:000A:882F ()
 *
 * Called From: B4B5:07E3:0010:8687
 */
void f__B4B5_07E3_000A_882F()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x07ED); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_07ED_0015_F37B();
}

/**
 * Decompiled function f__B4B5_07ED_0015_F37B()
 *
 * @name f__B4B5_07ED_0015_F37B
 * @implements B4B5:07ED:0015:F37B ()
 *
 * Called From: B4B5:07ED:000A:882F
 */
void f__B4B5_07ED_0015_F37B()
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
	emu_push(emu_cs); emu_push(0x0802); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0802_000A_882F();
}

/**
 * Decompiled function f__B4B5_0802_000A_882F()
 *
 * @name f__B4B5_0802_000A_882F
 * @implements B4B5:0802:000A:882F ()
 *
 * Called From: B4B5:0802:0015:F37B
 */
void f__B4B5_0802_000A_882F()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x080C); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_080C_000D_8573();
}

/**
 * Decompiled function f__B4B5_080C_000D_8573()
 *
 * @name f__B4B5_080C_000D_8573
 * @implements B4B5:080C:000D:8573 ()
 *
 * Called From: B4B5:080C:000A:882F
 */
void f__B4B5_080C_000D_8573()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x0819); emu_cs = 0x34CD; ovl__34CD(30);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0819_0012_21EC();
}

/**
 * Decompiled function f__B4B5_0819_0012_21EC()
 *
 * @name f__B4B5_0819_0012_21EC
 * @implements B4B5:0819:0012:21EC ()
 *
 * Called From: B4B5:0819:000D:8573
 */
void f__B4B5_0819_0012_21EC()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__B4B5_0874_000B_414C(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x082B); emu_cs = 0x0C3A; f__0C3A_0009_0029_BF94();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_082B_0054_FF92();
}

/**
 * Decompiled function f__B4B5_082B_0054_FF92()
 *
 * @name f__B4B5_082B_0054_FF92
 * @implements B4B5:082B:0054:FF92 ()
 *
 * Called From: B4B5:082B:0012:21EC
 */
void f__B4B5_082B_0054_FF92()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0874; emu_last_cs = 0xB4B5; emu_last_ip = 0x083A; emu_last_length = 0x0054; emu_last_crc = 0xFF92; emu_call(); return; }
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
	emu_push(emu_cs); emu_push(0x087F); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_087F_0012_EF6E();
}

/**
 * Decompiled function f__B4B5_0874_000B_414C()
 *
 * @name f__B4B5_0874_000B_414C
 * @implements B4B5:0874:000B:414C ()
 *
 * Called From: B4B5:0747:0006:1788
 * Called From: B4B5:081C:0012:21EC
 */
void f__B4B5_0874_000B_414C()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x087F); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_087F_0012_EF6E();
}

/**
 * Decompiled function f__B4B5_087F_0012_EF6E()
 *
 * @name f__B4B5_087F_0012_EF6E
 * @implements B4B5:087F:0012:EF6E ()
 *
 * Called From: B4B5:087F:0054:FF92
 * Called From: B4B5:087F:000B:414C
 */
void f__B4B5_087F_0012_EF6E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4B5_0891_000B_6148(); return; }
	f__B4B5_0695_0014_F457(); return;
}

/**
 * Decompiled function f__B4B5_0885_000C_20A7()
 *
 * @name f__B4B5_0885_000C_20A7
 * @implements B4B5:0885:000C:20A7 ()
 *
 * Called From: B4B5:0692:0006:77BF
 */
void f__B4B5_0885_000C_20A7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0891; emu_last_cs = 0xB4B5; emu_last_ip = 0x088C; emu_last_length = 0x000C; emu_last_crc = 0x20A7; emu_call(); return; }
	f__B4B5_0695_0014_F457(); return;
}

/**
 * Decompiled function f__B4B5_0891_000B_6148()
 *
 * @name f__B4B5_0891_000B_6148
 * @implements B4B5:0891:000B:6148 ()
 *
 * Called From: B4B5:088C:0012:EF6E
 */
void f__B4B5_0891_000B_6148()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x089C); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_089C_0040_4310();
}

/**
 * Decompiled function f__B4B5_089C_0040_4310()
 *
 * @name f__B4B5_089C_0040_4310
 * @implements B4B5:089C:0040:4310 ()
 *
 * Called From: B4B5:089C:000B:6148
 */
void f__B4B5_089C_0040_4310()
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
	f__B4B5_08DC_0006_F794();
}

/**
 * Decompiled function f__B4B5_08DC_0006_F794()
 *
 * @name f__B4B5_08DC_0006_F794
 * @implements B4B5:08DC:0006:F794 ()
 *
 * Called From: B4B5:08DC:0040:4310
 */
void f__B4B5_08DC_0006_F794()
{
	emu_addws(&emu_sp, 0x16);
	f__B4B5_0A40_000C_A383(); return;
}

/**
 * Decompiled function f__B4B5_08E2_000C_1037()
 *
 * @name f__B4B5_08E2_000C_1037
 * @implements B4B5:08E2:000C:1037 ()
 *
 * Called From: B4B5:0A49:000C:A383
 * Called From: B4B5:0A49:0012:0C4A
 */
void f__B4B5_08E2_000C_1037()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x43);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x08EE; emu_last_cs = 0xB4B5; emu_last_ip = 0x08E9; emu_last_length = 0x000C; emu_last_crc = 0x1037; emu_call(); return; }
	f__B4B5_0A2F_000B_714A(); return;
}

/**
 * Decompiled function f__B4B5_0A2F_000B_714A()
 *
 * @name f__B4B5_0A2F_000B_714A
 * @implements B4B5:0A2F:000B:714A ()
 *
 * Called From: B4B5:08EB:000C:1037
 */
void f__B4B5_0A2F_000B_714A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0A3A); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0A3A_0012_0C4A();
}

/**
 * Decompiled function f__B4B5_0A3A_0012_0C4A()
 *
 * @name f__B4B5_0A3A_0012_0C4A
 * @implements B4B5:0A3A:0012:0C4A ()
 *
 * Called From: B4B5:0A3A:000B:714A
 */
void f__B4B5_0A3A_0012_0C4A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4B5_0A4C_0024_5A64(); return; }
	f__B4B5_08E2_000C_1037(); return;
}

/**
 * Decompiled function f__B4B5_0A40_000C_A383()
 *
 * @name f__B4B5_0A40_000C_A383
 * @implements B4B5:0A40:000C:A383 ()
 *
 * Called From: B4B5:08DF:0006:F794
 */
void f__B4B5_0A40_000C_A383()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0A4C; emu_last_cs = 0xB4B5; emu_last_ip = 0x0A47; emu_last_length = 0x000C; emu_last_crc = 0xA383; emu_call(); return; }
	f__B4B5_08E2_000C_1037(); return;
}

/**
 * Decompiled function f__B4B5_0A4C_0024_5A64()
 *
 * @name f__B4B5_0A4C_0024_5A64
 * @implements B4B5:0A4C:0024:5A64 ()
 *
 * Called From: B4B5:0A47:0012:0C4A
 */
void f__B4B5_0A4C_0024_5A64()
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
	f__B4B5_0A70_0013_2BE2();
}

/**
 * Decompiled function f__B4B5_0A70_0013_2BE2()
 *
 * @name f__B4B5_0A70_0013_2BE2
 * @implements B4B5:0A70:0013:2BE2 ()
 *
 * Called From: B4B5:0A70:0024:5A64
 */
void f__B4B5_0A70_0013_2BE2()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F9C);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A83); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0A83_0013_90D2();
}

/**
 * Decompiled function f__B4B5_0A83_0013_90D2()
 *
 * @name f__B4B5_0A83_0013_90D2
 * @implements B4B5:0A83:0013:90D2 ()
 *
 * Called From: B4B5:0A83:0013:2BE2
 */
void f__B4B5_0A83_0013_90D2()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__B4B5_0AF0_0024_1264(); return; }
	f__B4B5_0AE8_002C_F21C(); return;
}

/**
 * Decompiled function f__B4B5_0A96_000B_0225()
 *
 * @name f__B4B5_0A96_000B_0225
 * @implements B4B5:0A96:000B:0225 ()
 *
 * Called From: B4B5:0AEE:002C:F21C
 * Called From: B4B5:0AEE:0035:0FCE
 */
void f__B4B5_0A96_000B_0225()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0AA1); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0AA1_003E_17EA();
}

/**
 * Decompiled function f__B4B5_0AA1_003E_17EA()
 *
 * @name f__B4B5_0AA1_003E_17EA
 * @implements B4B5:0AA1:003E:17EA ()
 *
 * Called From: B4B5:0AA1:000B:0225
 */
void f__B4B5_0AA1_003E_17EA()
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
	emu_push(emu_cs); emu_push(0x0ADF); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0ADF_0035_0FCE();
}

/**
 * Decompiled function f__B4B5_0ADF_0035_0FCE()
 *
 * @name f__B4B5_0ADF_0035_0FCE
 * @implements B4B5:0ADF:0035:0FCE ()
 *
 * Called From: B4B5:0ADF:003E:17EA
 */
void f__B4B5_0ADF_0035_0FCE()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B4B5_0A96_000B_0225(); return; }
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
	f__B4B5_0B14_0013_2BE2();
}

/**
 * Decompiled function f__B4B5_0AE8_002C_F21C()
 *
 * @name f__B4B5_0AE8_002C_F21C
 * @implements B4B5:0AE8:002C:F21C ()
 *
 * Called From: B4B5:0A94:0013:90D2
 */
void f__B4B5_0AE8_002C_F21C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B4B5_0A96_000B_0225(); return; }
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
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0B14); emu_cs = 0x34FC; emu_ip = 0x0025; emu_last_cs = 0xB4B5; emu_last_ip = 0x0B0F; emu_last_length = 0x002C; emu_last_crc = 0xF21C; emu_call();
	f__B4B5_0B14_0013_2BE2();
}

/**
 * Decompiled function f__B4B5_0AF0_0024_1264()
 *
 * @name f__B4B5_0AF0_0024_1264
 * @implements B4B5:0AF0:0024:1264 ()
 *
 * Called From: B4B5:0A92:0013:90D2
 */
void f__B4B5_0AF0_0024_1264()
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
	f__B4B5_0B14_0013_2BE2();
}

/**
 * Decompiled function f__B4B5_0B14_0013_2BE2()
 *
 * @name f__B4B5_0B14_0013_2BE2
 * @implements B4B5:0B14:0013:2BE2 ()
 *
 * Called From: B4B5:0B14:0024:1264
 * Called From: B4B5:0B14:0035:0FCE
 */
void f__B4B5_0B14_0013_2BE2()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F9C);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B27); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0B27_0013_91B2();
}

/**
 * Decompiled function f__B4B5_0B27_0013_91B2()
 *
 * @name f__B4B5_0B27_0013_91B2
 * @implements B4B5:0B27:0013:91B2 ()
 *
 * Called From: B4B5:0B27:0013:2BE2
 */
void f__B4B5_0B27_0013_91B2()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__B4B5_0B93_0024_C265(); return; }
	f__B4B5_0B8B_002C_2215(); return;
}

/**
 * Decompiled function f__B4B5_0B3A_000B_0225()
 *
 * @name f__B4B5_0B3A_000B_0225
 * @implements B4B5:0B3A:000B:0225 ()
 *
 * Called From: B4B5:0B91:002C:2215
 * Called From: B4B5:0B91:0035:DFC7
 */
void f__B4B5_0B3A_000B_0225()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0B45); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0B45_000E_A2FD();
}

/**
 * Decompiled function f__B4B5_0B45_000E_A2FD()
 *
 * @name f__B4B5_0B45_000E_A2FD
 * @implements B4B5:0B45:000E:A2FD ()
 *
 * Called From: B4B5:0B45:000B:0225
 */
void f__B4B5_0B45_000E_A2FD()
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
	f__B4B5_0B53_002F_AC2C();
}

/**
 * Decompiled function f__B4B5_0B53_002F_AC2C()
 *
 * @name f__B4B5_0B53_002F_AC2C
 * @implements B4B5:0B53:002F:AC2C ()
 *
 * Called From: B4B5:0B53:000E:A2FD
 */
void f__B4B5_0B53_002F_AC2C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37A0), 0x0);
	if (emu_flags.zf) { f__B4B5_0B72_0010_86F3(); return; }
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
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0B82); emu_cs = 0x01F7; emu_ip = 0x3AF8; emu_last_cs = 0xB4B5; emu_last_ip = 0x0B7D; emu_last_length = 0x002F; emu_last_crc = 0xAC2C; emu_call();
	f__B4B5_0B82_0035_DFC7();
}

/**
 * Decompiled function f__B4B5_0B72_0010_86F3()
 *
 * @name f__B4B5_0B72_0010_86F3
 * @implements B4B5:0B72:0010:86F3 ()
 *
 * Called From: B4B5:0B5A:002F:AC2C
 */
void f__B4B5_0B72_0010_86F3()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F9C);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0B82); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0B82_0035_DFC7();
}

/**
 * Decompiled function f__B4B5_0B82_0035_DFC7()
 *
 * @name f__B4B5_0B82_0035_DFC7
 * @implements B4B5:0B82:0035:DFC7 ()
 *
 * Called From: B4B5:0B82:0010:86F3
 */
void f__B4B5_0B82_0035_DFC7()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B4B5_0B3A_000B_0225(); return; }
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
	f__B4B5_0BB7_0013_2BE2();
}

/**
 * Decompiled function f__B4B5_0B8B_002C_2215()
 *
 * @name f__B4B5_0B8B_002C_2215
 * @implements B4B5:0B8B:002C:2215 ()
 *
 * Called From: B4B5:0B38:0013:91B2
 */
void f__B4B5_0B8B_002C_2215()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B4B5_0B3A_000B_0225(); return; }
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
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0BB7); emu_cs = 0x34FC; emu_ip = 0x0025; emu_last_cs = 0xB4B5; emu_last_ip = 0x0BB2; emu_last_length = 0x002C; emu_last_crc = 0x2215; emu_call();
	f__B4B5_0BB7_0013_2BE2();
}

/**
 * Decompiled function f__B4B5_0B93_0024_C265()
 *
 * @name f__B4B5_0B93_0024_C265
 * @implements B4B5:0B93:0024:C265 ()
 *
 * Called From: B4B5:0B36:0013:91B2
 */
void f__B4B5_0B93_0024_C265()
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
	f__B4B5_0BB7_0013_2BE2();
}

/**
 * Decompiled function f__B4B5_0BB7_0013_2BE2()
 *
 * @name f__B4B5_0BB7_0013_2BE2
 * @implements B4B5:0BB7:0013:2BE2 ()
 *
 * Called From: B4B5:0BB7:0024:C265
 * Called From: B4B5:0BB7:0035:DFC7
 */
void f__B4B5_0BB7_0013_2BE2()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F9C);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0BCA); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0BCA_0013_9072();
}

/**
 * Decompiled function f__B4B5_0BCA_0013_9072()
 *
 * @name f__B4B5_0BCA_0013_9072
 * @implements B4B5:0BCA:0013:9072 ()
 *
 * Called From: B4B5:0BCA:0013:2BE2
 */
void f__B4B5_0BCA_0013_9072()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__B4B5_0C38_000B_6148(); return; }
	/* Unresolved jump */ emu_ip = 0x0C30; emu_last_cs = 0xB4B5; emu_last_ip = 0x0BDB; emu_last_length = 0x0013; emu_last_crc = 0x9072; emu_call();
}

/**
 * Decompiled function f__B4B5_0C38_000B_6148()
 *
 * @name f__B4B5_0C38_000B_6148
 * @implements B4B5:0C38:000B:6148 ()
 *
 * Called From: B4B5:0BD9:0013:9072
 */
void f__B4B5_0C38_000B_6148()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0C43); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0C43_001B_A229();
}

/**
 * Decompiled function f__B4B5_0C43_001B_A229()
 *
 * @name f__B4B5_0C43_001B_A229
 * @implements B4B5:0C43:001B:A229 ()
 *
 * Called From: B4B5:0C43:000B:6148
 */
void f__B4B5_0C43_001B_A229()
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
	f__B4B5_0C6E_002E_3B47(); return;
}

/**
 * Decompiled function f__B4B5_0C5E_003E_84AE()
 *
 * @name f__B4B5_0C5E_003E_84AE
 * @implements B4B5:0C5E:003E:84AE ()
 *
 * Called From: B4B5:0C71:002E:3B47
 * Called From: B4B5:0C71:003E:84AE
 */
void f__B4B5_0C5E_003E_84AE()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xA);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8D43), 0xFFFF);
	emu_incw(&emu_si);
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B5_0C5E_003E_84AE(); return; }
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
	f__B4B5_0C9C_0006_F7AB();
}

/**
 * Decompiled function f__B4B5_0C6E_002E_3B47()
 *
 * @name f__B4B5_0C6E_002E_3B47
 * @implements B4B5:0C6E:002E:3B47 ()
 *
 * Called From: B4B5:0C5C:001B:A229
 */
void f__B4B5_0C6E_002E_3B47()
{
	emu_cmpws(&emu_si, 0x10);
	if ((emu_flags.sf != emu_flags.of)) { f__B4B5_0C5E_003E_84AE(); return; }
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
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0C9C); emu_cs = 0x34FC; emu_ip = 0x0025; emu_last_cs = 0xB4B5; emu_last_ip = 0x0C97; emu_last_length = 0x002E; emu_last_crc = 0x3B47; emu_call();
	f__B4B5_0C9C_0006_F7AB();
}

/**
 * Decompiled function f__B4B5_0C9C_0006_F7AB()
 *
 * @name f__B4B5_0C9C_0006_F7AB
 * @implements B4B5:0C9C:0006:F7AB ()
 *
 * Called From: B4B5:0C9C:003E:84AE
 */
void f__B4B5_0C9C_0006_F7AB()
{
	emu_addws(&emu_sp, 0x16);
	f__B4B5_0E44_000C_A0B2(); return;
}

/**
 * Decompiled function f__B4B5_0CA2_000B_3223()
 *
 * @name f__B4B5_0CA2_000B_3223
 * @implements B4B5:0CA2:000B:3223 ()
 *
 * Called From: B4B5:0E4D:000C:A0B2
 * Called From: B4B5:0E4D:0012:6F7B
 */
void f__B4B5_0CA2_000B_3223()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0CAD); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0CAD_002A_1E0E();
}

/**
 * Decompiled function f__B4B5_0CAD_002A_1E0E()
 *
 * @name f__B4B5_0CAD_002A_1E0E
 * @implements B4B5:0CAD:002A:1E0E ()
 *
 * Called From: B4B5:0CAD:000B:3223
 */
void f__B4B5_0CAD_002A_1E0E()
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
	f__B4B5_0CD7_0013_2B96();
}

/**
 * Decompiled function f__B4B5_0CD7_0013_2B96()
 *
 * @name f__B4B5_0CD7_0013_2B96
 * @implements B4B5:0CD7:0013:2B96 ()
 *
 * Called From: B4B5:0CD7:002A:1E0E
 */
void f__B4B5_0CD7_0013_2B96()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CEA); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0CEA_000A_3572();
}

/**
 * Decompiled function f__B4B5_0CEA_000A_3572()
 *
 * @name f__B4B5_0CEA_000A_3572
 * @implements B4B5:0CEA:000A:3572 ()
 *
 * Called From: B4B5:0CEA:0013:2B96
 */
void f__B4B5_0CEA_000A_3572()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CF4); emu_cs = 0x1381; f__1381_0051_0010_81BB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0CF4_000C_97DE();
}

/**
 * Decompiled function f__B4B5_0CF4_000C_97DE()
 *
 * @name f__B4B5_0CF4_000C_97DE
 * @implements B4B5:0CF4:000C:97DE ()
 *
 * Called From: B4B5:0CF4:000A:3572
 */
void f__B4B5_0CF4_000C_97DE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0xFF);
	if (!emu_flags.zf) { f__B4B5_0D00_0010_8687(); return; }
	f__B4B5_0E33_000B_414C(); return;
}

/**
 * Decompiled function f__B4B5_0D00_0010_8687()
 *
 * @name f__B4B5_0D00_0010_8687
 * @implements B4B5:0D00:0010:8687 ()
 *
 * Called From: B4B5:0CFB:000C:97DE
 */
void f__B4B5_0D00_0010_8687()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0D10); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0D10_000A_B659();
}

/**
 * Decompiled function f__B4B5_0D10_000A_B659()
 *
 * @name f__B4B5_0D10_000A_B659
 * @implements B4B5:0D10:000A:B659 ()
 *
 * Called From: B4B5:0D10:0010:8687
 */
void f__B4B5_0D10_000A_B659()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D1A); emu_cs = 0x3533; ovl__3533(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0D1A_000E_D0D2();
}

/**
 * Decompiled function f__B4B5_0D1A_000E_D0D2()
 *
 * @name f__B4B5_0D1A_000E_D0D2
 * @implements B4B5:0D1A:000E:D0D2 ()
 *
 * Called From: B4B5:0D1A:000A:B659
 */
void f__B4B5_0D1A_000E_D0D2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0xFF);
	if (!emu_flags.zf) { f__B4B5_0D28_0018_8BBA(); return; }
	/* Unresolved jump */ emu_ip = 0x0E33; emu_last_cs = 0xB4B5; emu_last_ip = 0x0D25; emu_last_length = 0x000E; emu_last_crc = 0xD0D2; emu_call();
}

/**
 * Decompiled function f__B4B5_0D28_0018_8BBA()
 *
 * @name f__B4B5_0D28_0018_8BBA
 * @implements B4B5:0D28:0018:8BBA ()
 *
 * Called From: B4B5:0D23:000E:D0D2
 */
void f__B4B5_0D28_0018_8BBA()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_movw(&emu_dx.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D40); emu_cs = 0x1A34; f__1A34_08FB_002C_D192();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0D40_0014_D927();
}

/**
 * Decompiled function f__B4B5_0D40_0014_D927()
 *
 * @name f__B4B5_0D40_0014_D927
 * @implements B4B5:0D40:0014:D927 ()
 *
 * Called From: B4B5:0D40:0018:8BBA
 */
void f__B4B5_0D40_0014_D927()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__B4B5_0D54_0023_4ECB(); return; }
	/* Unresolved jump */ emu_ip = 0x0E33; emu_last_cs = 0xB4B5; emu_last_ip = 0x0D51; emu_last_length = 0x0014; emu_last_crc = 0xD927; emu_call();
}

/**
 * Decompiled function f__B4B5_0D54_0023_4ECB()
 *
 * @name f__B4B5_0D54_0023_4ECB
 * @implements B4B5:0D54:0023:4ECB ()
 *
 * Called From: B4B5:0D4F:0014:D927
 */
void f__B4B5_0D54_0023_4ECB()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xA);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8D43), emu_dx.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0D77); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0D77_000A_FBE7();
}

/**
 * Decompiled function f__B4B5_0D77_000A_FBE7()
 *
 * @name f__B4B5_0D77_000A_FBE7
 * @implements B4B5:0D77:000A:FBE7 ()
 *
 * Called From: B4B5:0D77:0023:4ECB
 */
void f__B4B5_0D77_000A_FBE7()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D81); emu_cs = 0x01F7; f__01F7_3CD5_000D_9D98();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0D81_000E_548A();
}

/**
 * Decompiled function f__B4B5_0D81_000E_548A()
 *
 * @name f__B4B5_0D81_000E_548A
 * @implements B4B5:0D81:000E:548A ()
 *
 * Called From: B4B5:0D81:000A:FBE7
 */
void f__B4B5_0D81_000E_548A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1FBC);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0D8F); emu_cs = 0x01F7; f__01F7_3A8A_0018_E4EE();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0D8F_002E_8780();
}

/**
 * Decompiled function f__B4B5_0D8F_002E_8780()
 *
 * @name f__B4B5_0D8F_002E_8780
 * @implements B4B5:0D8F:002E:8780 ()
 *
 * Called From: B4B5:0D8F:000E:548A
 */
void f__B4B5_0D8F_002E_8780()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xFFFF));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_addw(&emu_ax.x, 0xFFD0);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xA);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8D45), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0DBD); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0DBD_000A_882F();
}

/**
 * Decompiled function f__B4B5_0DBD_000A_882F()
 *
 * @name f__B4B5_0DBD_000A_882F
 * @implements B4B5:0DBD:000A:882F ()
 *
 * Called From: B4B5:0DBD:002E:8780
 */
void f__B4B5_0DBD_000A_882F()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0DC7); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0DC7_0027_5285();
}

/**
 * Decompiled function f__B4B5_0DC7_0027_5285()
 *
 * @name f__B4B5_0DC7_0027_5285
 * @implements B4B5:0DC7:0027:5285 ()
 *
 * Called From: B4B5:0DC7:000A:882F
 */
void f__B4B5_0DC7_0027_5285()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, 0x6);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_incw(&emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xA);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8D47), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0DEE); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0DEE_0014_EB62();
}

/**
 * Decompiled function f__B4B5_0DEE_0014_EB62()
 *
 * @name f__B4B5_0DEE_0014_EB62
 * @implements B4B5:0DEE:0014:EB62 ()
 *
 * Called From: B4B5:0DEE:0027:5285
 */
void f__B4B5_0DEE_0014_EB62()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x2B);
	if (!emu_flags.zf) { f__B4B5_0E02_003C_C4FF(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x1);
	/* Unresolved jump */ emu_ip = 0x0E07; emu_last_cs = 0xB4B5; emu_last_ip = 0x0E00; emu_last_length = 0x0014; emu_last_crc = 0xEB62; emu_call();
}

/**
 * Decompiled function f__B4B5_0E02_003C_C4FF()
 *
 * @name f__B4B5_0E02_003C_C4FF
 * @implements B4B5:0E02:003C:C4FF ()
 *
 * Called From: B4B5:0DF9:0014:EB62
 */
void f__B4B5_0E02_003C_C4FF()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xA);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x8D47));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xA);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8D49), emu_ax.x);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xA);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x8D4B), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0E3E); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0E3E_0012_6F7B();
}

/**
 * Decompiled function f__B4B5_0E33_000B_414C()
 *
 * @name f__B4B5_0E33_000B_414C
 * @implements B4B5:0E33:000B:414C ()
 *
 * Called From: B4B5:0CFD:000C:97DE
 */
void f__B4B5_0E33_000B_414C()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0E3E); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0E3E_0012_6F7B();
}

/**
 * Decompiled function f__B4B5_0E3E_0012_6F7B()
 *
 * @name f__B4B5_0E3E_0012_6F7B
 * @implements B4B5:0E3E:0012:6F7B ()
 *
 * Called From: B4B5:0E3E:000B:414C
 * Called From: B4B5:0E3E:003C:C4FF
 */
void f__B4B5_0E3E_0012_6F7B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4B5_0E50_000B_6148(); return; }
	f__B4B5_0CA2_000B_3223(); return;
}

/**
 * Decompiled function f__B4B5_0E44_000C_A0B2()
 *
 * @name f__B4B5_0E44_000C_A0B2
 * @implements B4B5:0E44:000C:A0B2 ()
 *
 * Called From: B4B5:0C9F:0006:F7AB
 */
void f__B4B5_0E44_000C_A0B2()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0E50; emu_last_cs = 0xB4B5; emu_last_ip = 0x0E4B; emu_last_length = 0x000C; emu_last_crc = 0xA0B2; emu_call(); return; }
	f__B4B5_0CA2_000B_3223(); return;
}

/**
 * Decompiled function f__B4B5_0E50_000B_6148()
 *
 * @name f__B4B5_0E50_000B_6148
 * @implements B4B5:0E50:000B:6148 ()
 *
 * Called From: B4B5:0E4B:0012:6F7B
 */
void f__B4B5_0E50_000B_6148()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0E5B); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0E5B_003D_8F07();
}

/**
 * Decompiled function f__B4B5_0E5B_003D_8F07()
 *
 * @name f__B4B5_0E5B_003D_8F07
 * @implements B4B5:0E5B:003D:8F07 ()
 *
 * Called From: B4B5:0E5B:000B:6148
 */
void f__B4B5_0E5B_003D_8F07()
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
	f__B4B5_0E98_0006_373C();
}

/**
 * Decompiled function f__B4B5_0E98_0006_373C()
 *
 * @name f__B4B5_0E98_0006_373C
 * @implements B4B5:0E98:0006:373C ()
 *
 * Called From: B4B5:0E98:003D:8F07
 */
void f__B4B5_0E98_0006_373C()
{
	emu_addws(&emu_sp, 0x16);
	f__B4B5_0F9B_000C_E39B(); return;
}

/**
 * Decompiled function f__B4B5_0E9E_0026_D6B3()
 *
 * @name f__B4B5_0E9E_0026_D6B3
 * @implements B4B5:0E9E:0026:D6B3 ()
 *
 * Called From: B4B5:0FA4:000C:E39B
 * Called From: B4B5:0FA4:0012:4C52
 */
void f__B4B5_0E9E_0026_D6B3()
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
	f__B4B5_0EC4_0013_2B96();
}

/**
 * Decompiled function f__B4B5_0EC4_0013_2B96()
 *
 * @name f__B4B5_0EC4_0013_2B96
 * @implements B4B5:0EC4:0013:2B96 ()
 *
 * Called From: B4B5:0EC4:0026:D6B3
 */
void f__B4B5_0EC4_0013_2B96()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0ED7); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0ED7_000A_3572();
}

/**
 * Decompiled function f__B4B5_0ED7_000A_3572()
 *
 * @name f__B4B5_0ED7_000A_3572
 * @implements B4B5:0ED7:000A:3572 ()
 *
 * Called From: B4B5:0ED7:0013:2B96
 */
void f__B4B5_0ED7_000A_3572()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0EE1); emu_cs = 0x1381; f__1381_0051_0010_81BB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0EE1_000C_1773();
}

/**
 * Decompiled function f__B4B5_0EE1_000C_1773()
 *
 * @name f__B4B5_0EE1_000C_1773
 * @implements B4B5:0EE1:000C:1773 ()
 *
 * Called From: B4B5:0EE1:000A:3572
 */
void f__B4B5_0EE1_000C_1773()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (!emu_flags.zf) { f__B4B5_0EED_0010_8687(); return; }
	f__B4B5_0F8A_000B_714A(); return;
}

/**
 * Decompiled function f__B4B5_0EED_0010_8687()
 *
 * @name f__B4B5_0EED_0010_8687
 * @implements B4B5:0EED:0010:8687 ()
 *
 * Called From: B4B5:0EE8:000C:1773
 */
void f__B4B5_0EED_0010_8687()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0EFD); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0EFD_000A_257A();
}

/**
 * Decompiled function f__B4B5_0EFD_000A_257A()
 *
 * @name f__B4B5_0EFD_000A_257A
 * @implements B4B5:0EFD:000A:257A ()
 *
 * Called From: B4B5:0EFD:0010:8687
 */
void f__B4B5_0EFD_000A_257A()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F07); emu_cs = 0x1381; f__1381_00D0_0008_1ADC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0F07_001B_3B64();
}

/**
 * Decompiled function f__B4B5_0F07_001B_3B64()
 *
 * @name f__B4B5_0F07_001B_3B64
 * @implements B4B5:0F07:001B:3B64 ()
 *
 * Called From: B4B5:0F07:000A:257A
 */
void f__B4B5_0F07_001B_3B64()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xFF);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0F8A; emu_last_cs = 0xB4B5; emu_last_ip = 0x0F10; emu_last_length = 0x001B; emu_last_crc = 0x3B64; emu_call(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0F22); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0F22_000A_457E();
}

/**
 * Decompiled function f__B4B5_0F22_000A_457E()
 *
 * @name f__B4B5_0F22_000A_457E
 * @implements B4B5:0F22:000A:457E ()
 *
 * Called From: B4B5:0F22:001B:3B64
 */
void f__B4B5_0F22_000A_457E()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F2C); emu_cs = 0x1381; f__1381_0096_0008_1ADC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0F2C_001B_0EE0();
}

/**
 * Decompiled function f__B4B5_0F2C_001B_0EE0()
 *
 * @name f__B4B5_0F2C_001B_0EE0
 * @implements B4B5:0F2C:001B:0EE0 ()
 *
 * Called From: B4B5:0F2C:000A:457E
 */
void f__B4B5_0F2C_001B_0EE0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0xFF);
	if (emu_flags.zf) { f__B4B5_0F8A_000B_714A(); return; }
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0F47); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0F47_000A_882F();
}

/**
 * Decompiled function f__B4B5_0F47_000A_882F()
 *
 * @name f__B4B5_0F47_000A_882F
 * @implements B4B5:0F47:000A:882F ()
 *
 * Called From: B4B5:0F47:001B:0EE0
 */
void f__B4B5_0F47_000A_882F()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F51); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0F51_0015_FC7B();
}

/**
 * Decompiled function f__B4B5_0F51_0015_FC7B()
 *
 * @name f__B4B5_0F51_0015_FC7B
 * @implements B4B5:0F51:0015:FC7B ()
 *
 * Called From: B4B5:0F51:000A:882F
 */
void f__B4B5_0F51_0015_FC7B()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x1F81);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x0F66); emu_cs = 0x01F7; f__01F7_3AF8_001D_A439();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0F66_000A_882F();
}

/**
 * Decompiled function f__B4B5_0F66_000A_882F()
 *
 * @name f__B4B5_0F66_000A_882F
 * @implements B4B5:0F66:000A:882F ()
 *
 * Called From: B4B5:0F66:0015:FC7B
 */
void f__B4B5_0F66_000A_882F()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0F70); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0F70_0017_CB04();
}

/**
 * Decompiled function f__B4B5_0F70_0017_CB04()
 *
 * @name f__B4B5_0F70_0017_CB04
 * @implements B4B5:0F70:0017:CB04 ()
 *
 * Called From: B4B5:0F70:000A:882F
 */
void f__B4B5_0F70_0017_CB04()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0F87); emu_cs = 0x104B; f__104B_024D_0012_1DC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0F87_000E_53E0();
}

/**
 * Decompiled function f__B4B5_0F87_000E_53E0()
 *
 * @name f__B4B5_0F87_000E_53E0
 * @implements B4B5:0F87:000E:53E0 ()
 *
 * Called From: B4B5:0F87:0017:CB04
 */
void f__B4B5_0F87_000E_53E0()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F95); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0F95_0012_4C52();
}

/**
 * Decompiled function f__B4B5_0F8A_000B_714A()
 *
 * @name f__B4B5_0F8A_000B_714A
 * @implements B4B5:0F8A:000B:714A ()
 *
 * Called From: B4B5:0EEA:000C:1773
 * Called From: B4B5:0F35:001B:0EE0
 */
void f__B4B5_0F8A_000B_714A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F95); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0F95_0012_4C52();
}

/**
 * Decompiled function f__B4B5_0F95_0012_4C52()
 *
 * @name f__B4B5_0F95_0012_4C52
 * @implements B4B5:0F95:0012:4C52 ()
 *
 * Called From: B4B5:0F95:000B:714A
 * Called From: B4B5:0F95:000E:53E0
 */
void f__B4B5_0F95_0012_4C52()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { f__B4B5_0FA7_000B_6148(); return; }
	f__B4B5_0E9E_0026_D6B3(); return;
}

/**
 * Decompiled function f__B4B5_0F9B_000C_E39B()
 *
 * @name f__B4B5_0F9B_000C_E39B
 * @implements B4B5:0F9B:000C:E39B ()
 *
 * Called From: B4B5:0E9B:0006:373C
 */
void f__B4B5_0F9B_000C_E39B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0FA7; emu_last_cs = 0xB4B5; emu_last_ip = 0x0FA2; emu_last_length = 0x000C; emu_last_crc = 0xE39B; emu_call(); return; }
	f__B4B5_0E9E_0026_D6B3(); return;
}

/**
 * Decompiled function f__B4B5_0FA7_000B_6148()
 *
 * @name f__B4B5_0FA7_000B_6148
 * @implements B4B5:0FA7:000B:6148 ()
 *
 * Called From: B4B5:0FA2:0012:4C52
 */
void f__B4B5_0FA7_000B_6148()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0FB2); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0FB2_003D_8907();
}

/**
 * Decompiled function f__B4B5_0FB2_003D_8907()
 *
 * @name f__B4B5_0FB2_003D_8907
 * @implements B4B5:0FB2:003D:8907 ()
 *
 * Called From: B4B5:0FB2:000B:6148
 */
void f__B4B5_0FB2_003D_8907()
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
	f__B4B5_0FEF_0005_B26E();
}

/**
 * Decompiled function f__B4B5_0FEF_0005_B26E()
 *
 * @name f__B4B5_0FEF_0005_B26E
 * @implements B4B5:0FEF:0005:B26E ()
 *
 * Called From: B4B5:0FEF:003D:8907
 */
void f__B4B5_0FEF_0005_B26E()
{
	emu_addws(&emu_sp, 0x16);
	f__B4B5_105D_001D_B706(); return;
}

/**
 * Decompiled function f__B4B5_0FF4_000B_3C53()
 *
 * @name f__B4B5_0FF4_000B_3C53
 * @implements B4B5:0FF4:000B:3C53 ()
 *
 * Called From: B4B5:1064:001D:B706
 * Called From: B4B5:1064:0023:53D1
 */
void f__B4B5_0FF4_000B_3C53()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0FFF); emu_cs = 0x3533; ovl__3533(0);
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_0FFF_002F_9FB4();
}

/**
 * Decompiled function f__B4B5_0FFF_002F_9FB4()
 *
 * @name f__B4B5_0FFF_002F_9FB4
 * @implements B4B5:0FFF:002F:9FB4 ()
 *
 * Called From: B4B5:0FFF:000B:3C53
 */
void f__B4B5_0FFF_002F_9FB4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xFF);
	if (emu_flags.zf) { f__B4B5_104C_000B_714A(); return; }
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
	f__B4B5_102E_000E_3FBC();
}

/**
 * Decompiled function f__B4B5_102E_000E_3FBC()
 *
 * @name f__B4B5_102E_000E_3FBC
 * @implements B4B5:102E:000E:3FBC ()
 *
 * Called From: B4B5:102E:002F:9FB4
 */
void f__B4B5_102E_000E_3FBC()
{
	emu_addws(&emu_sp, 0x16);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0xA2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x103C); emu_cs = 0x01F7; f__01F7_2252_0045_03CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_103C_001B_6488();
}

/**
 * Decompiled function f__B4B5_103C_001B_6488()
 *
 * @name f__B4B5_103C_001B_6488
 * @implements B4B5:103C:001B:6488 ()
 *
 * Called From: B4B5:103C:000E:3FBC
 */
void f__B4B5_103C_001B_6488()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_bx.x, emu_si);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_get_memory16(emu_ds, emu_bx.x,  0x97E7), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1057); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_1057_0023_53D1();
}

/**
 * Decompiled function f__B4B5_104C_000B_714A()
 *
 * @name f__B4B5_104C_000B_714A
 * @implements B4B5:104C:000B:714A ()
 *
 * Called From: B4B5:1006:002F:9FB4
 */
void f__B4B5_104C_000B_714A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1057); emu_cs = 0x01F7; f__01F7_39A5_001F_1A5D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34B5) { ovl__34B5(0xFF); }
	f__B4B5_1057_0023_53D1();
}

/**
 * Decompiled function f__B4B5_1057_0023_53D1()
 *
 * @name f__B4B5_1057_0023_53D1
 * @implements B4B5:1057:0023:53D1 ()
 *
 * Called From: B4B5:1057:000B:714A
 * Called From: B4B5:1057:001B:6488
 */
void f__B4B5_1057_0023_53D1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_incw(&emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__B4B5_0FF4_000B_3C53(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38AE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38AC), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	f__B4B5_0011_0003_9539(); return;
}

/**
 * Decompiled function f__B4B5_105D_001D_B706()
 *
 * @name f__B4B5_105D_001D_B706
 * @implements B4B5:105D:001D:B706 ()
 *
 * Called From: B4B5:0FF2:0005:B26E
 */
void f__B4B5_105D_001D_B706()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	if (!emu_flags.zf) { f__B4B5_0FF4_000B_3C53(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x76B2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x76B0));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38AE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38AC), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	/* Unresolved jump */ emu_ip = 0x0011; emu_last_cs = 0xB4B5; emu_last_ip = 0x1077; emu_last_length = 0x001D; emu_last_crc = 0xB706; emu_call();
}

/**
 * Decompiled function f__B4B5_107A_0006_F7CE()
 *
 * @name f__B4B5_107A_0006_F7CE
 * @implements B4B5:107A:0006:F7CE ()
 *
 * Called From: B4B5:0011:0003:9539
 */
void f__B4B5_107A_0006_F7CE()
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
