/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4A2_0039_000B_EC51()
 *
 * @name f__B4A2_0039_000B_EC51
 * @implements B4A2:0039:000B:EC51 ()
 *
 * Called From: 34A2:002A:0005:0000
 */
void f__B4A2_0039_000B_EC51()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_cs); emu_push(0x0044); emu_cs = 0x29E8; f__29E8_072F_000F_651A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_0044_0009_3D8E();
}

/**
 * Decompiled function f__B4A2_0044_0009_3D8E()
 *
 * @name f__B4A2_0044_0009_3D8E
 * @implements B4A2:0044:0009:3D8E ()
 *
 */
void f__B4A2_0044_0009_3D8E()
{
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4A2_004F_000C_E695(); return; }
	emu_push(emu_cs); emu_push(0x004D); emu_cs = 0x29E8; f__29E8_0897_0016_2028();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_004D_000E_64BE();
}

/**
 * Decompiled function f__B4A2_004D_000E_64BE()
 *
 * @name f__B4A2_004D_000E_64BE
 * @implements B4A2:004D:000E:64BE ()
 *
 */
void f__B4A2_004D_000E_64BE()
{
	emu_movw(&emu_si, emu_ax);
	f__B4A2_004F_000C_E695(); return;
}

/**
 * Decompiled function f__B4A2_004F_000C_E695()
 *
 * @name f__B4A2_004F_000C_E695
 * @implements B4A2:004F:000C:E695 ()
 *
 * Called From: B4A2:0046:0009:3D8E
 */
void f__B4A2_004F_000C_E695()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x005B); f__B4A2_0063_001E_4495();
	f__B4A2_005B_0005_84EE();
}

/**
 * Decompiled function f__B4A2_005B_0005_84EE()
 *
 * @name f__B4A2_005B_0005_84EE
 * @implements B4A2:005B:0005:84EE ()
 *
 * Called From: B4A2:0718:0006:F7CE
 */
void f__B4A2_005B_0005_84EE()
{
	emu_addw(&emu_sp, 0x6);
	f__B4A2_0060_0003_2E57(); return;
}

/**
 * Decompiled function f__B4A2_0060_0003_2E57()
 *
 * @name f__B4A2_0060_0003_2E57
 * @implements B4A2:0060:0003:2E57 ()
 *
 * Called From: B4A2:005E:0005:84EE
 */
void f__B4A2_0060_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4A2_0063_001E_4495()
 *
 * @name f__B4A2_0063_001E_4495
 * @implements B4A2:0063:001E:4495 ()
 *
 * Called From: B4A2:0058:000C:E695
 * Called From: B4A2:0058:000E:64BE
 */
void f__B4A2_0063_001E_4495()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4A2_0081_0034_D555(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax, 0x7FFF);
	f__B4A2_007E_0003_9E04(); return;
}

/**
 * Decompiled function f__B4A2_007E_0003_9E04()
 *
 * @name f__B4A2_007E_0003_9E04
 * @implements B4A2:007E:0003:9E04 ()
 *
 * Called From: B4A2:0710:0015:72AB
 * Called From: B4A2:0710:0006:CF87
 */
void f__B4A2_007E_0003_9E04()
{
	f__B4A2_0713_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4A2_0081_0034_D555()
 *
 * @name f__B4A2_0081_0034_D555
 * @implements B4A2:0081:0034:D555 ()
 *
 * Called From: B4A2:0076:001E:4495
 */
void f__B4A2_0081_0034_D555()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1904));
	if (!emu_flags.zf) { f__B4A2_009A_001B_68B5(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x1902));
	if (!emu_flags.zf) { f__B4A2_009A_001B_68B5(); return; }
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D75), 0x0);
	if (emu_flags.zf) { f__B4A2_010E_003E_36CC(); return; }
	f__B4A2_009A_001B_68B5(); return;
}

/**
 * Decompiled function f__B4A2_009A_001B_68B5()
 *
 * @name f__B4A2_009A_001B_68B5
 * @implements B4A2:009A:001B:68B5 ()
 *
 * Called From: B4A2:008B:0034:D555
 * Called From: B4A2:0091:0034:D555
 */
void f__B4A2_009A_001B_68B5()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x7FC4), 0x0);
	emu_movw(&emu_ax, 0x41);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00B5); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_00B5_0014_CD20();
}

/**
 * Decompiled function f__B4A2_00B5_0014_CD20()
 *
 * @name f__B4A2_00B5_0014_CD20
 * @implements B4A2:00B5:0014:CD20 ()
 *
 */
void f__B4A2_00B5_0014_CD20()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4A2_00C0_0009_433C(); return; }
	emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x7FC4), 0x200);
	f__B4A2_00C0_0009_433C(); return;
}

/**
 * Decompiled function f__B4A2_00C0_0009_433C()
 *
 * @name f__B4A2_00C0_0009_433C
 * @implements B4A2:00C0:0009:433C ()
 *
 * Called From: B4A2:00B8:0014:CD20
 */
void f__B4A2_00C0_0009_433C()
{
	emu_movw(&emu_ax, 0x42);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00C9); emu_cs = 0x29E8; f__29E8_08B5_000A_FC14();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_00C9_0020_FF60();
}

/**
 * Decompiled function f__B4A2_00C9_0020_FF60()
 *
 * @name f__B4A2_00C9_0020_FF60
 * @implements B4A2:00C9:0020:FF60 ()
 *
 */
void f__B4A2_00C9_0020_FF60()
{
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4A2_00D4_0015_96A8(); return; }
	emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x7FC4), 0x2000);
	f__B4A2_00D4_0015_96A8(); return;
}

/**
 * Decompiled function f__B4A2_00D4_0015_96A8()
 *
 * @name f__B4A2_00D4_0015_96A8
 * @implements B4A2:00D4:0015:96A8 ()
 *
 * Called From: B4A2:00CC:0020:FF60
 */
void f__B4A2_00D4_0015_96A8()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1904), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1902), emu_dx);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x6D75), 0x0);
	f__B4A2_0106_0046_4BFB(); return;
}

/**
 * Decompiled function f__B4A2_00E9_000B_A0FA()
 *
 * @name f__B4A2_00E9_000B_A0FA
 * @implements B4A2:00E9:000B:A0FA ()
 *
 * Called From: B4A2:010C:0046:4BFB
 * Called From: B4A2:010C:0058:6D26
 */
void f__B4A2_00E9_000B_A0FA()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x00F4); f__B4A2_0729_0013_2494();
	f__B4A2_00F4_0058_6D26();
}

/**
 * Decompiled function f__B4A2_00F4_0058_6D26()
 *
 * @name f__B4A2_00F4_0058_6D26
 * @implements B4A2:00F4:0058:6D26 ()
 *
 */
void f__B4A2_00F4_0058_6D26()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4A2_00E9_000B_A0FA(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7060));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7062));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_xorw(&emu_si, emu_si);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x7097));
	emu_movb(&emu_ah, 0x0);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4A2_01A3_004C_644F(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_014C_00A3_323E(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xC7);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0140; emu_last_cs = 0xB4A2; emu_last_ip = 0x013B; emu_last_length = 0x0058; emu_last_crc = 0x6D26; emu_call(); return; }
	emu_movw(&emu_dx, 0x1000);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xC6);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x014A; emu_last_cs = 0xB4A2; emu_last_ip = 0x0145; emu_last_length = 0x0058; emu_last_crc = 0x6D26; emu_call(); return; }
	emu_movw(&emu_dx, 0x100);
	/* Unresolved jump */ emu_ip = 0x015E; emu_last_cs = 0xB4A2; emu_last_ip = 0x014A; emu_last_length = 0x0058; emu_last_crc = 0x6D26; emu_call();
}

/**
 * Decompiled function f__B4A2_0106_0046_4BFB()
 *
 * @name f__B4A2_0106_0046_4BFB
 * @implements B4A2:0106:0046:4BFB ()
 *
 * Called From: B4A2:00E7:0015:96A8
 */
void f__B4A2_0106_0046_4BFB()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4A2_00E9_000B_A0FA(); return; }
	f__B4A2_010E_003E_36CC(); return;
}

/**
 * Decompiled function f__B4A2_010E_003E_36CC()
 *
 * @name f__B4A2_010E_003E_36CC
 * @implements B4A2:010E:003E:36CC ()
 *
 * Called From: B4A2:0098:0034:D555
 */
void f__B4A2_010E_003E_36CC()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7060));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7062));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_xorw(&emu_si, emu_si);
	emu_movb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x7097));
	emu_movb(&emu_ah, 0x0);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__B4A2_01A3_004C_644F(); return; }
	emu_xorw(&emu_dx, emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_014C_00A3_323E(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xC7);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0140; emu_last_cs = 0xB4A2; emu_last_ip = 0x013B; emu_last_length = 0x003E; emu_last_crc = 0x36CC; emu_call(); return; }
	emu_movw(&emu_dx, 0x1000);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xC6);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x014A; emu_last_cs = 0xB4A2; emu_last_ip = 0x0145; emu_last_length = 0x003E; emu_last_crc = 0x36CC; emu_call(); return; }
	emu_movw(&emu_dx, 0x100);
	/* Unresolved jump */ emu_ip = 0x015E; emu_last_cs = 0xB4A2; emu_last_ip = 0x014A; emu_last_length = 0x003E; emu_last_crc = 0x36CC; emu_call();
}

/**
 * Decompiled function f__B4A2_014C_00A3_323E()
 *
 * @name f__B4A2_014C_00A3_323E
 * @implements B4A2:014C:00A3:323E ()
 *
 * Called From: B4A2:0134:0058:6D26
 * Called From: B4A2:0134:003E:36CC
 * Called From: B4A2:0134:0046:4BFB
 */
void f__B4A2_014C_00A3_323E()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x42);
	if (!emu_flags.zf) { f__B4A2_0155_009A_E308(); return; }
	emu_movw(&emu_dx, 0x1000);
	f__B4A2_0155_009A_E308(); return;
}

/**
 * Decompiled function f__B4A2_0155_009A_E308()
 *
 * @name f__B4A2_0155_009A_E308
 * @implements B4A2:0155:009A:E308 ()
 *
 * Called From: B4A2:0150:00A3:323E
 */
void f__B4A2_0155_009A_E308()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x41);
	if (!emu_flags.zf) { f__B4A2_015E_0091_0167(); return; }
	emu_movw(&emu_dx, 0x100);
	f__B4A2_015E_0091_0167(); return;
}

/**
 * Decompiled function f__B4A2_015E_0091_0167()
 *
 * @name f__B4A2_015E_0091_0167
 * @implements B4A2:015E:0091:0167 ()
 *
 * Called From: B4A2:0159:009A:E308
 * Called From: B4A2:0159:00A3:323E
 */
void f__B4A2_015E_0091_0167()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x800);
	if (emu_flags.zf) { f__B4A2_0169_0086_5764(); return; }
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_dx, emu_cl);
	f__B4A2_0169_0086_5764(); return;
}

/**
 * Decompiled function f__B4A2_0169_0086_5764()
 *
 * @name f__B4A2_0169_0086_5764
 * @implements B4A2:0169:0086:5764 ()
 *
 * Called From: B4A2:0163:0091:0167
 * Called From: B4A2:0163:009A:E308
 */
void f__B4A2_0169_0086_5764()
{
	emu_orw(&emu_si, emu_dx);
	emu_orw(&emu_dx, emu_dx);
	if (emu_flags.zf) { f__B4A2_017B_0074_9303(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7064));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7066));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	f__B4A2_017B_0074_9303(); return;
}

/**
 * Decompiled function f__B4A2_017B_0074_9303()
 *
 * @name f__B4A2_017B_0074_9303
 * @implements B4A2:017B:0074:9303 ()
 *
 * Called From: B4A2:016D:0086:5764
 * Called From: B4A2:016D:0091:0167
 */
void f__B4A2_017B_0074_9303()
{
	emu_movw(&emu_ax, emu_dx);
	emu_andw(&emu_ax, 0x4400);
	emu_sarw(&emu_ax, 0x1);
	emu_notw(&emu_ax, emu_ax);
	emu_andw(&emu_get_memory16(emu_ds, 0x00, 0x7FC4), emu_ax);
	emu_movw(&emu_ax, emu_dx);
	emu_andw(&emu_ax, 0x1100);
	emu_shlw(&emu_ax, 0x1);
	emu_orw(&emu_get_memory16(emu_ds, 0x00, 0x7FC4), emu_ax);
	emu_orw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x7FC4));
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x7FC4));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_xorw(&emu_ax, 0x8800);
	emu_orw(&emu_si, emu_ax);
	f__B4A2_01A3_004C_644F(); return;
}

/**
 * Decompiled function f__B4A2_01A3_004C_644F()
 *
 * @name f__B4A2_01A3_004C_644F
 * @implements B4A2:01A3:004C:644F ()
 *
 * Called From: B4A2:0123:003E:36CC
 */
void f__B4A2_01A3_004C_644F()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1904));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x1902));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (emu_flags.zf) { f__B4A2_01C6_0029_C114(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx);
	f__B4A2_01C6_0029_C114(); return;
}

/**
 * Decompiled function f__B4A2_01C6_0029_C114()
 *
 * @name f__B4A2_01C6_0029_C114
 * @implements B4A2:01C6:0029:C114 ()
 *
 * Called From: B4A2:01B7:0074:9303
 * Called From: B4A2:01B7:0086:5764
 * Called From: B4A2:01B7:009A:E308
 * Called From: B4A2:01B7:0091:0167
 * Called From: B4A2:01B7:004C:644F
 */
void f__B4A2_01C6_0029_C114()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (emu_flags.zf) { f__B4A2_01E7_0008_082E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x8);
	if (emu_flags.zf) { f__B4A2_01E7_0008_082E(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	f__B4A2_06F3_000B_49A2(); return;
}

/**
 * Decompiled function f__B4A2_01E7_0008_082E()
 *
 * @name f__B4A2_01E7_0008_082E
 * @implements B4A2:01E7:0008:082E ()
 *
 * Called From: B4A2:01CD:0029:C114
 * Called From: B4A2:01CD:0074:9303
 * Called From: B4A2:01D9:009A:E308
 * Called From: B4A2:01D9:0074:9303
 * Called From: B4A2:01D9:0091:0167
 * Called From: B4A2:01D9:0086:5764
 * Called From: B4A2:01D9:0029:C114
 */
void f__B4A2_01E7_0008_082E()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	f__B4A2_06F3_000B_49A2(); return;
}

/**
 * Decompiled function f__B4A2_01EF_000E_2C3C()
 *
 * @name f__B4A2_01EF_000E_2C3C
 * @implements B4A2:01EF:000E:2C3C ()
 *
 * Called From: B4A2:06FB:000B:49A2
 * Called From: B4A2:06FB:001B:B2D9
 */
void f__B4A2_01EF_000E_2C3C()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x8);
	if (emu_flags.zf) { f__B4A2_01FD_00BF_524F(); return; }
	f__B4A2_06E3_001B_B2D9(); return;
}

/**
 * Decompiled function f__B4A2_01FD_00BF_524F()
 *
 * @name f__B4A2_01FD_00BF_524F
 * @implements B4A2:01FD:00BF:524F ()
 *
 * Called From: B4A2:01F8:000E:2C3C
 */
void f__B4A2_01FD_00BF_524F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFE7);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_andw(&emu_ax, 0x3);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_0240_007C_CD42(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4066));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4062));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_0278_0044_F834(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4068));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((emu_flags.sf != emu_flags.of)) { f__B4A2_02B8_0004_EE59(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if ((emu_flags.sf != emu_flags.of)) { f__B4A2_02B8_0004_EE59(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x22));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if ((emu_flags.sf != emu_flags.of)) { f__B4A2_02B8_0004_EE59(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x24));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_02BC_001E_443B(); return; }
	emu_xorw(&emu_di, emu_di);
	f__B4A2_02BF_001B_4EC7(); return;
}

/**
 * Decompiled function f__B4A2_0240_007C_CD42()
 *
 * @name f__B4A2_0240_007C_CD42
 * @implements B4A2:0240:007C:CD42 ()
 *
 * Called From: B4A2:0228:00BF:524F
 */
void f__B4A2_0240_007C_CD42()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4062));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_0278_0044_F834(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4068));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((emu_flags.sf != emu_flags.of)) { f__B4A2_02B8_0004_EE59(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if ((emu_flags.sf != emu_flags.of)) { f__B4A2_02B8_0004_EE59(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x22));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if ((emu_flags.sf != emu_flags.of)) { f__B4A2_02B8_0004_EE59(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x24));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_02BC_001E_443B(); return; }
	emu_xorw(&emu_di, emu_di);
	f__B4A2_02BF_001B_4EC7(); return;
}

/**
 * Decompiled function f__B4A2_0278_0044_F834()
 *
 * @name f__B4A2_0278_0044_F834
 * @implements B4A2:0278:0044:F834 ()
 *
 * Called From: B4A2:0264:007C:CD42
 */
void f__B4A2_0278_0044_F834()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((emu_flags.sf != emu_flags.of)) { f__B4A2_02B8_0004_EE59(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if ((emu_flags.sf != emu_flags.of)) { f__B4A2_02B8_0004_EE59(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x22));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if ((emu_flags.sf != emu_flags.of)) { f__B4A2_02B8_0004_EE59(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x24));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_02BC_001E_443B(); return; }
	emu_xorw(&emu_di, emu_di);
	f__B4A2_02BF_001B_4EC7(); return;
}

/**
 * Decompiled function f__B4A2_02B8_0004_EE59()
 *
 * @name f__B4A2_02B8_0004_EE59
 * @implements B4A2:02B8:0004:EE59 ()
 *
 * Called From: B4A2:0290:0044:F834
 * Called From: B4A2:0298:0044:F834
 * Called From: B4A2:02A7:0044:F834
 */
void f__B4A2_02B8_0004_EE59()
{
	emu_xorw(&emu_di, emu_di);
	f__B4A2_02BF_001B_4EC7(); return;
}

/**
 * Decompiled function f__B4A2_02BC_001E_443B()
 *
 * @name f__B4A2_02BC_001E_443B
 * @implements B4A2:02BC:001E:443B ()
 *
 * Called From: B4A2:02B6:0044:F834
 */
void f__B4A2_02BC_001E_443B()
{
	emu_movw(&emu_di, 0x1);
	f__B4A2_02BF_001B_4EC7(); return;
}

/**
 * Decompiled function f__B4A2_02BF_001B_4EC7()
 *
 * @name f__B4A2_02BF_001B_4EC7
 * @implements B4A2:02BF:001B:4EC7 ()
 *
 * Called From: B4A2:02BA:0004:EE59
 * Called From: B4A2:02BA:0044:F834
 */
void f__B4A2_02BF_001B_4EC7()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFF7F);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax, 0x7F);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__B4A2_02DA_003B_41BE(); return; }
	f__B4A2_035E_0061_CF47(); return;
}

/**
 * Decompiled function f__B4A2_02DA_003B_41BE()
 *
 * @name f__B4A2_02DA_003B_41BE
 * @implements B4A2:02DA:003B:41BE ()
 *
 * Called From: B4A2:02D5:001E:443B
 * Called From: B4A2:02D5:001B:4EC7
 */
void f__B4A2_02DA_003B_41BE()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_andw(&emu_ax, 0x7F);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { f__B4A2_0315_00AA_23C4(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_andw(&emu_ax, 0xF00);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_di, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x80);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), emu_dx);
	f__B4A2_035E_0061_CF47(); return;
}

/**
 * Decompiled function f__B4A2_0315_00AA_23C4()
 *
 * @name f__B4A2_0315_00AA_23C4
 * @implements B4A2:0315:00AA:23C4 ()
 *
 * Called From: B4A2:02E7:003B:41BE
 */
void f__B4A2_0315_00AA_23C4()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_andw(&emu_ax, 0x7F);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { f__B4A2_035E_0061_CF47(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_andw(&emu_ax, 0xF000);
	emu_movw(&emu_si, emu_ax);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4A2_0340_007F_2746(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_andw(&emu_ax, 0xF00);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_di, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x80);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4A2_036F_0050_9484(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFF9);
	emu_testw(&emu_si, 0x3300);
	if (emu_flags.zf) { f__B4A2_03BF_001F_6D3A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (emu_flags.zf) { f__B4A2_03BF_001F_6D3A(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4A2_03BF_001F_6D3A(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { f__B4A2_0396_0029_BE62(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	if (emu_flags.zf) { f__B4A2_039F_0020_BF0F(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x039D; emu_last_length = 0x00AA; emu_last_crc = 0x23C4; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x6);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { f__B4A2_03BD_0002_D3BA(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), emu_dx);
	f__B4A2_03E6_0013_5DAC(); return;
}

/**
 * Decompiled function f__B4A2_0340_007F_2746()
 *
 * @name f__B4A2_0340_007F_2746
 * @implements B4A2:0340:007F:2746 ()
 *
 * Called From: B4A2:0332:00AA:23C4
 */
void f__B4A2_0340_007F_2746()
{
	emu_movw(&emu_di, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x80);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4A2_036F_0050_9484(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFF9);
	emu_testw(&emu_si, 0x3300);
	if (emu_flags.zf) { f__B4A2_03BF_001F_6D3A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (emu_flags.zf) { f__B4A2_03BF_001F_6D3A(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4A2_03BF_001F_6D3A(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { f__B4A2_0396_0029_BE62(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	if (emu_flags.zf) { f__B4A2_039F_0020_BF0F(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x039D; emu_last_length = 0x007F; emu_last_crc = 0x2746; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x6);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { f__B4A2_03BD_0002_D3BA(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), emu_dx);
	f__B4A2_03E6_0013_5DAC(); return;
}

/**
 * Decompiled function f__B4A2_035E_0061_CF47()
 *
 * @name f__B4A2_035E_0061_CF47
 * @implements B4A2:035E:0061:CF47 ()
 *
 * Called From: B4A2:02D7:001B:4EC7
 * Called From: B4A2:02D7:001E:443B
 * Called From: B4A2:0313:003B:41BE
 * Called From: B4A2:0322:00AA:23C4
 */
void f__B4A2_035E_0061_CF47()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4A2_036F_0050_9484(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFF9);
	emu_testw(&emu_si, 0x3300);
	if (emu_flags.zf) { f__B4A2_03BF_001F_6D3A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (emu_flags.zf) { f__B4A2_03BF_001F_6D3A(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4A2_03BF_001F_6D3A(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { f__B4A2_0396_0029_BE62(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	if (emu_flags.zf) { f__B4A2_039F_0020_BF0F(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x039D; emu_last_length = 0x0061; emu_last_crc = 0xCF47; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x6);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { f__B4A2_03BD_0002_D3BA(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), emu_dx);
	f__B4A2_03E6_0013_5DAC(); return;
}

/**
 * Decompiled function f__B4A2_036F_0050_9484()
 *
 * @name f__B4A2_036F_0050_9484
 * @implements B4A2:036F:0050:9484 ()
 *
 * Called From: B4A2:0365:0061:CF47
 * Called From: B4A2:0365:007F:2746
 */
void f__B4A2_036F_0050_9484()
{
	emu_testw(&emu_si, 0x3300);
	if (emu_flags.zf) { f__B4A2_03BF_001F_6D3A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (emu_flags.zf) { f__B4A2_03BF_001F_6D3A(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4A2_03BF_001F_6D3A(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { f__B4A2_0396_0029_BE62(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	if (emu_flags.zf) { f__B4A2_039F_0020_BF0F(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x039D; emu_last_length = 0x0050; emu_last_crc = 0x9484; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x6);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { f__B4A2_03BD_0002_D3BA(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), emu_dx);
	f__B4A2_03E6_0013_5DAC(); return;
}

/**
 * Decompiled function f__B4A2_0396_0029_BE62()
 *
 * @name f__B4A2_0396_0029_BE62
 * @implements B4A2:0396:0029:BE62 ()
 *
 * Called From: B4A2:038E:0050:9484
 * Called From: B4A2:038E:0061:CF47
 */
void f__B4A2_0396_0029_BE62()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x039D; emu_last_length = 0x0029; emu_last_crc = 0xBE62; emu_call(); return; }
	f__B4A2_039F_0020_BF0F(); return;
}

/**
 * Decompiled function f__B4A2_039F_0020_BF0F()
 *
 * @name f__B4A2_039F_0020_BF0F
 * @implements B4A2:039F:0020:BF0F ()
 *
 * Called From: B4A2:0394:0050:9484
 * Called From: B4A2:0394:0061:CF47
 */
void f__B4A2_039F_0020_BF0F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x6);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { f__B4A2_03BD_0002_D3BA(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), emu_dx);
	f__B4A2_03E6_0013_5DAC(); return;
}

/**
 * Decompiled function f__B4A2_03BD_0002_D3BA()
 *
 * @name f__B4A2_03BD_0002_D3BA
 * @implements B4A2:03BD:0002:D3BA ()
 *
 * Called From: B4A2:03AE:0020:BF0F
 */
void f__B4A2_03BD_0002_D3BA()
{
	f__B4A2_03E6_0013_5DAC(); return;
}

/**
 * Decompiled function f__B4A2_03BF_001F_6D3A()
 *
 * @name f__B4A2_03BF_001F_6D3A
 * @implements B4A2:03BF:001F:6D3A ()
 *
 * Called From: B4A2:0373:0061:CF47
 * Called From: B4A2:0373:0050:9484
 * Called From: B4A2:037E:0050:9484
 * Called From: B4A2:037E:0061:CF47
 * Called From: B4A2:0382:0061:CF47
 * Called From: B4A2:0382:0050:9484
 */
void f__B4A2_03BF_001F_6D3A()
{
	emu_testw(&emu_si, 0x8800);
	if (emu_flags.zf) { f__B4A2_03DE_001B_E04F(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (!emu_flags.zf) { f__B4A2_03DE_001B_E04F(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4A2_03DE_001B_E04F(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x6);
	f__B4A2_03E6_0013_5DAC(); return;
}

/**
 * Decompiled function f__B4A2_03DE_001B_E04F()
 *
 * @name f__B4A2_03DE_001B_E04F
 * @implements B4A2:03DE:001B:E04F ()
 *
 * Called From: B4A2:03C3:001F:6D3A
 * Called From: B4A2:03CE:001F:6D3A
 * Called From: B4A2:03D2:001F:6D3A
 */
void f__B4A2_03DE_001B_E04F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFF9);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { f__B4A2_03F9_0022_65D7(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_di);
	f__B4A2_0425_0009_D1BE(); return;
}

/**
 * Decompiled function f__B4A2_03E6_0013_5DAC()
 *
 * @name f__B4A2_03E6_0013_5DAC
 * @implements B4A2:03E6:0013:5DAC ()
 *
 * Called From: B4A2:03BD:0029:BE62
 * Called From: B4A2:03BD:0002:D3BA
 * Called From: B4A2:03DC:001F:6D3A
 */
void f__B4A2_03E6_0013_5DAC()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { f__B4A2_03F9_0022_65D7(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_di);
	f__B4A2_0425_0009_D1BE(); return;
}

/**
 * Decompiled function f__B4A2_03F9_0022_65D7()
 *
 * @name f__B4A2_03F9_0022_65D7
 * @implements B4A2:03F9:0022:65D7 ()
 *
 * Called From: B4A2:03F2:0013:5DAC
 * Called From: B4A2:03F2:001B:E04F
 */
void f__B4A2_03F9_0022_65D7()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x40);
	if (emu_flags.zf) { f__B4A2_0422_000C_23A1(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4A2_041B_0007_B8D3(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { f__B4A2_041B_0007_B8D3(); return; }
	emu_movw(&emu_ax, 0x1);
	f__B4A2_041D_0005_B8B6(); return;
}

/**
 * Decompiled function f__B4A2_041B_0007_B8D3()
 *
 * @name f__B4A2_041B_0007_B8D3
 * @implements B4A2:041B:0007:B8D3 ()
 *
 * Called From: B4A2:040F:0022:65D7
 * Called From: B4A2:0414:0022:65D7
 */
void f__B4A2_041B_0007_B8D3()
{
	emu_xorw(&emu_ax, emu_ax);
	f__B4A2_041D_0005_B8B6(); return;
}

/**
 * Decompiled function f__B4A2_041D_0005_B8B6()
 *
 * @name f__B4A2_041D_0005_B8B6
 * @implements B4A2:041D:0005:B8B6 ()
 *
 * Called From: B4A2:0419:0022:65D7
 */
void f__B4A2_041D_0005_B8B6()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax);
	f__B4A2_0425_0009_D1BE(); return;
}

/**
 * Decompiled function f__B4A2_0422_000C_23A1()
 *
 * @name f__B4A2_0422_000C_23A1
 * @implements B4A2:0422:000C:23A1 ()
 *
 * Called From: B4A2:0403:0022:65D7
 */
void f__B4A2_0422_000C_23A1()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_di);
	f__B4A2_0425_0009_D1BE(); return;
}

/**
 * Decompiled function f__B4A2_0425_0009_D1BE()
 *
 * @name f__B4A2_0425_0009_D1BE
 * @implements B4A2:0425:0009:D1BE ()
 *
 * Called From: B4A2:03F7:001B:E04F
 * Called From: B4A2:03F7:0013:5DAC
 * Called From: B4A2:0420:0005:B8B6
 * Called From: B4A2:0420:0007:B8D3
 */
void f__B4A2_0425_0009_D1BE()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!emu_flags.zf) { f__B4A2_042E_0031_2D5E(); return; }
	f__B4A2_05BA_00B6_11C2(); return;
}

/**
 * Decompiled function f__B4A2_042E_0031_2D5E()
 *
 * @name f__B4A2_042E_0031_2D5E
 * @implements B4A2:042E:0031:2D5E ()
 *
 * Called From: B4A2:0429:0009:D1BE
 * Called From: B4A2:0429:000C:23A1
 */
void f__B4A2_042E_0031_2D5E()
{
	emu_testw(&emu_si, 0x1100);
	if (emu_flags.zf) { f__B4A2_0453_000C_9E28(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4A2_0453_000C_9E28(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { f__B4A2_0453_000C_9E28(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), emu_dx);
	f__B4A2_0453_000C_9E28(); return;
}

/**
 * Decompiled function f__B4A2_0453_000C_9E28()
 *
 * @name f__B4A2_0453_000C_9E28
 * @implements B4A2:0453:000C:9E28 ()
 *
 * Called From: B4A2:0432:0031:2D5E
 * Called From: B4A2:0436:0031:2D5E
 * Called From: B4A2:043F:0031:2D5E
 */
void f__B4A2_0453_000C_9E28()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0xE));
	if (!emu_flags.zf) { f__B4A2_045F_0012_4D72(); return; }
	f__B4A2_05BA_00B6_11C2(); return;
}

/**
 * Decompiled function f__B4A2_045F_0012_4D72()
 *
 * @name f__B4A2_045F_0012_4D72
 * @implements B4A2:045F:0012:4D72 ()
 *
 * Called From: B4A2:045A:0031:2D5E
 * Called From: B4A2:045A:000C:9E28
 */
void f__B4A2_045F_0012_4D72()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4A2_0471_0048_E243(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x1);
	if (emu_flags.zf) { f__B4A2_0471_0048_E243(); return; }
	f__B4A2_05BA_00B6_11C2(); return;
}

/**
 * Decompiled function f__B4A2_0471_0048_E243()
 *
 * @name f__B4A2_0471_0048_E243
 * @implements B4A2:0471:0048:E243 ()
 *
 * Called From: B4A2:0461:0012:4D72
 * Called From: B4A2:046C:0012:4D72
 */
void f__B4A2_0471_0048_E243()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_si);
	emu_andw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_andw(&emu_ax, 0xF000);
	emu_movb(&emu_cl, 0x4);
	emu_shrw(&emu_ax, emu_cl);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_andw(&emu_dx, 0xF00);
	emu_orw(&emu_dx, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movb(&emu_cl, 0x8);
	emu_shrw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_cl);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x1906));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_movw(&emu_cx, 0x4);
	emu_movw(&emu_bx, 0x719);
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, emu_bx, 0x0));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) { f__B4A2_04B9_0004_3BFB(); return; }
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) { f__B4A2_04AA_000F_6F6F(); return; }
	f__B4A2_04BD_0045_0588(); return;
}

/**
 * Decompiled function f__B4A2_04AA_000F_6F6F()
 *
 * @name f__B4A2_04AA_000F_6F6F
 * @implements B4A2:04AA:000F:6F6F ()
 *
 * Called From: B4A2:04B5:0048:E243
 * Called From: B4A2:04B5:000F:6F6F
 */
void f__B4A2_04AA_000F_6F6F()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_cs, emu_bx, 0x0));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) { f__B4A2_04B9_0004_3BFB(); return; }
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) { f__B4A2_04AA_000F_6F6F(); return; }
	f__B4A2_04BD_0045_0588(); return;
}

/**
 * Decompiled function f__B4A2_04B9_0004_3BFB()
 *
 * @name f__B4A2_04B9_0004_3BFB
 * @implements B4A2:04B9:0004:3BFB ()
 *
 * Called From: B4A2:04B0:0048:E243
 * Called From: B4A2:04B0:000F:6F6F
 */
void f__B4A2_04B9_0004_3BFB()
{

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x8);
	switch (emu_ip) {
		case 0x04BD: f__B4A2_04BD_0045_0588(); return;
		case 0x0502: f__B4A2_0502_005E_216A(); return;
		case 0x0560: f__B4A2_0560_002D_0EE2(); return;
		case 0x058D: f__B4A2_058D_002D_0862(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4A2; emu_last_ip = 0x04B9; emu_last_length = 0x0004; emu_last_crc = 0x3BFB;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4A2_04BD_0045_0588()
 *
 * @name f__B4A2_04BD_0045_0588
 * @implements B4A2:04BD:0045:0588 ()
 *
 * Called From: B4A2:04B7:000F:6F6F
 * Called From: B4A2:04B9:0004:3BFB
 */
void f__B4A2_04BD_0045_0588()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_orw(&emu_ax, 0x8000);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (emu_flags.zf) { f__B4A2_04F2_0010_E3E2(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x2);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), emu_dx);
	f__B4A2_05BA_00B6_11C2(); return;
}

/**
 * Decompiled function f__B4A2_04F2_0010_E3E2()
 *
 * @name f__B4A2_04F2_0010_E3E2
 * @implements B4A2:04F2:0010:E3E2 ()
 *
 * Called From: B4A2:04E0:0045:0588
 */
void f__B4A2_04F2_0010_E3E2()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), emu_ax);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), emu_dx);
	f__B4A2_05BA_00B6_11C2(); return;
}

/**
 * Decompiled function f__B4A2_0502_005E_216A()
 *
 * @name f__B4A2_0502_005E_216A
 * @implements B4A2:0502:005E:216A ()
 *
 * Called From: B4A2:04B9:0004:3BFB
 */
void f__B4A2_0502_005E_216A()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x1);
	if (emu_flags.zf) { f__B4A2_051E_0042_182D(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4A2_051E_0042_182D(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_flags.zf) { f__B4A2_0529_0037_FA1E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x1);
	if (!emu_flags.zf) { f__B4A2_0543_001D_7800(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_orw(&emu_ax, 0x8000);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (!emu_flags.zf) { f__B4A2_055E_0002_ED3A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFFB);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFFD);
	f__B4A2_05BA_00B6_11C2(); return;
}

/**
 * Decompiled function f__B4A2_051E_0042_182D()
 *
 * @name f__B4A2_051E_0042_182D
 * @implements B4A2:051E:0042:182D ()
 *
 * Called From: B4A2:050B:005E:216A
 * Called From: B4A2:0517:005E:216A
 */
void f__B4A2_051E_0042_182D()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x1);
	if (!emu_flags.zf) { f__B4A2_0543_001D_7800(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_orw(&emu_ax, 0x8000);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (!emu_flags.zf) { f__B4A2_055E_0002_ED3A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFFB);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFFD);
	f__B4A2_05BA_00B6_11C2(); return;
}

/**
 * Decompiled function f__B4A2_0529_0037_FA1E()
 *
 * @name f__B4A2_0529_0037_FA1E
 * @implements B4A2:0529:0037:FA1E ()
 *
 * Called From: B4A2:051C:005E:216A
 */
void f__B4A2_0529_0037_FA1E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_orw(&emu_ax, 0x8000);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (!emu_flags.zf) { f__B4A2_055E_0002_ED3A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFFB);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFFD);
	f__B4A2_05BA_00B6_11C2(); return;
}

/**
 * Decompiled function f__B4A2_0543_001D_7800()
 *
 * @name f__B4A2_0543_001D_7800
 * @implements B4A2:0543:001D:7800 ()
 *
 * Called From: B4A2:0527:0042:182D
 */
void f__B4A2_0543_001D_7800()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (!emu_flags.zf) { f__B4A2_055E_0002_ED3A(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFFB);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFFD);
	f__B4A2_05BA_00B6_11C2(); return;
}

/**
 * Decompiled function f__B4A2_055E_0002_ED3A()
 *
 * @name f__B4A2_055E_0002_ED3A
 * @implements B4A2:055E:0002:ED3A ()
 *
 * Called From: B4A2:054C:0037:FA1E
 * Called From: B4A2:054C:001D:7800
 */
void f__B4A2_055E_0002_ED3A()
{
	f__B4A2_05BA_00B6_11C2(); return;
}

/**
 * Decompiled function f__B4A2_0560_002D_0EE2()
 *
 * @name f__B4A2_0560_002D_0EE2
 * @implements B4A2:0560:002D:0EE2 ()
 *
 * Called From: B4A2:04B9:0004:3BFB
 */
void f__B4A2_0560_002D_0EE2()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (!emu_flags.zf) { f__B4A2_057B_0012_2566(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x1);
	if (!emu_flags.zf) { f__B4A2_058B_0002_D6BA(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	f__B4A2_05BA_00B6_11C2(); return;
}

/**
 * Decompiled function f__B4A2_057B_0012_2566()
 *
 * @name f__B4A2_057B_0012_2566
 * @implements B4A2:057B:0012:2566 ()
 *
 * Called From: B4A2:0569:002D:0EE2
 */
void f__B4A2_057B_0012_2566()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x1);
	if (!emu_flags.zf) { f__B4A2_058B_0002_D6BA(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	f__B4A2_05BA_00B6_11C2(); return;
}

/**
 * Decompiled function f__B4A2_058B_0002_D6BA()
 *
 * @name f__B4A2_058B_0002_D6BA
 * @implements B4A2:058B:0002:D6BA ()
 *
 * Called From: B4A2:0584:002D:0EE2
 */
void f__B4A2_058B_0002_D6BA()
{
	f__B4A2_05BA_00B6_11C2(); return;
}

/**
 * Decompiled function f__B4A2_058D_002D_0862()
 *
 * @name f__B4A2_058D_002D_0862
 * @implements B4A2:058D:002D:0862 ()
 *
 * Called From: B4A2:04B9:0004:3BFB
 */
void f__B4A2_058D_002D_0862()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (emu_flags.zf) { f__B4A2_05A8_0012_33E6(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05B8; emu_last_cs = 0xB4A2; emu_last_ip = 0x05B1; emu_last_length = 0x002D; emu_last_crc = 0x0862; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	f__B4A2_05BA_00B6_11C2(); return;
}

/**
 * Decompiled function f__B4A2_05A8_0012_33E6()
 *
 * @name f__B4A2_05A8_0012_33E6
 * @implements B4A2:05A8:0012:33E6 ()
 *
 * Called From: B4A2:0596:002D:0862
 */
void f__B4A2_05A8_0012_33E6()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x1);
	if (!emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x05B8; emu_last_cs = 0xB4A2; emu_last_ip = 0x05B1; emu_last_length = 0x0012; emu_last_crc = 0x33E6; emu_call(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	f__B4A2_05BA_00B6_11C2(); return;
}

/**
 * Decompiled function f__B4A2_05BA_00B6_11C2()
 *
 * @name f__B4A2_05BA_00B6_11C2
 * @implements B4A2:05BA:00B6:11C2 ()
 *
 * Called From: B4A2:042B:0009:D1BE
 * Called From: B4A2:042B:000C:23A1
 * Called From: B4A2:045C:000C:9E28
 * Called From: B4A2:045C:0031:2D5E
 * Called From: B4A2:046E:0012:4D72
 * Called From: B4A2:04FF:0010:E3E2
 * Called From: B4A2:04FF:0045:0588
 * Called From: B4A2:055E:0002:ED3A
 * Called From: B4A2:055E:0037:FA1E
 * Called From: B4A2:055E:0042:182D
 * Called From: B4A2:055E:001D:7800
 * Called From: B4A2:058B:0002:D6BA
 * Called From: B4A2:058B:002D:0EE2
 * Called From: B4A2:058B:0012:2566
 * Called From: B4A2:05B8:0012:33E6
 */
void f__B4A2_05BA_00B6_11C2()
{
	emu_testw(&emu_si, 0x2200);
	if (emu_flags.zf) { f__B4A2_05EF_0081_DCA6(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4A2_05EF_0081_DCA6(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (!emu_flags.zf) { f__B4A2_05EF_0081_DCA6(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x1);
	if (!emu_flags.zf) { f__B4A2_05EF_0081_DCA6(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0x1);
	emu_movw(&emu_ax, emu_si);
	emu_andw(&emu_ax, 0x8800);
	emu_cmpw(&emu_ax, 0x8800);
	if (!emu_flags.zf) { f__B4A2_061C_0054_23DD(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), 0x0);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4A2_0614_005C_D203(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (emu_flags.zf) { f__B4A2_061C_0054_23DD(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFF9);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4A2_0649_0027_26C2(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { f__B4A2_0649_0027_26C2(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	if (!emu_flags.zf) { f__B4A2_0649_0027_26C2(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x40);
	if (!emu_flags.zf) { f__B4A2_0649_0027_26C2(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_andw(&emu_ax, 0x18);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_andw(&emu_dx, 0x3);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_dx, emu_cl);
	emu_cmpw(&emu_ax, emu_dx);
	if (emu_flags.zf) { f__B4A2_0672_003E_C657(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0670); f__B4A2_0729_0013_2494();
	f__B4A2_0670_0040_740E();
}

/**
 * Decompiled function f__B4A2_05EF_0081_DCA6()
 *
 * @name f__B4A2_05EF_0081_DCA6
 * @implements B4A2:05EF:0081:DCA6 ()
 *
 * Called From: B4A2:05BE:00B6:11C2
 * Called From: B4A2:05C2:00B6:11C2
 * Called From: B4A2:05D5:00B6:11C2
 * Called From: B4A2:05E0:00B6:11C2
 */
void f__B4A2_05EF_0081_DCA6()
{
	emu_movw(&emu_ax, emu_si);
	emu_andw(&emu_ax, 0x8800);
	emu_cmpw(&emu_ax, 0x8800);
	if (!emu_flags.zf) { f__B4A2_061C_0054_23DD(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), 0x0);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4A2_0614_005C_D203(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x4);
	if (emu_flags.zf) { f__B4A2_061C_0054_23DD(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFF9);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4A2_0649_0027_26C2(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { f__B4A2_0649_0027_26C2(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	if (!emu_flags.zf) { f__B4A2_0649_0027_26C2(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x40);
	if (!emu_flags.zf) { f__B4A2_0649_0027_26C2(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_andw(&emu_ax, 0x18);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_andw(&emu_dx, 0x3);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_dx, emu_cl);
	emu_cmpw(&emu_ax, emu_dx);
	if (emu_flags.zf) { f__B4A2_0672_003E_C657(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0670); f__B4A2_0729_0013_2494();
	f__B4A2_0670_0040_740E();
}

/**
 * Decompiled function f__B4A2_0614_005C_D203()
 *
 * @name f__B4A2_0614_005C_D203
 * @implements B4A2:0614:005C:D203 ()
 *
 * Called From: B4A2:0607:0081:DCA6
 */
void f__B4A2_0614_005C_D203()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFF9);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4A2_0649_0027_26C2(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { f__B4A2_0649_0027_26C2(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	if (!emu_flags.zf) { f__B4A2_0649_0027_26C2(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x40);
	if (!emu_flags.zf) { f__B4A2_0649_0027_26C2(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_andw(&emu_ax, 0x18);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_andw(&emu_dx, 0x3);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_dx, emu_cl);
	emu_cmpw(&emu_ax, emu_dx);
	if (emu_flags.zf) { f__B4A2_0672_003E_C657(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0670); f__B4A2_0729_0013_2494();
	f__B4A2_0670_0040_740E();
}

/**
 * Decompiled function f__B4A2_061C_0054_23DD()
 *
 * @name f__B4A2_061C_0054_23DD
 * @implements B4A2:061C:0054:23DD ()
 *
 * Called From: B4A2:05F7:0081:DCA6
 * Called From: B4A2:05F7:00B6:11C2
 * Called From: B4A2:0612:0081:DCA6
 * Called From: B4A2:0612:00B6:11C2
 */
void f__B4A2_061C_0054_23DD()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4A2_0649_0027_26C2(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	if (!emu_flags.zf) { f__B4A2_0649_0027_26C2(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	if (!emu_flags.zf) { f__B4A2_0649_0027_26C2(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x40);
	if (!emu_flags.zf) { f__B4A2_0649_0027_26C2(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00, 0x18FE), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_andw(&emu_ax, 0x18);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_andw(&emu_dx, 0x3);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_dx, emu_cl);
	emu_cmpw(&emu_ax, emu_dx);
	if (emu_flags.zf) { f__B4A2_0672_003E_C657(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0670); f__B4A2_0729_0013_2494();
	f__B4A2_0670_0040_740E();
}

/**
 * Decompiled function f__B4A2_0649_0027_26C2()
 *
 * @name f__B4A2_0649_0027_26C2
 * @implements B4A2:0649:0027:26C2 ()
 *
 * Called From: B4A2:061E:0054:23DD
 * Called From: B4A2:061E:005C:D203
 * Called From: B4A2:061E:0081:DCA6
 * Called From: B4A2:062A:0054:23DD
 * Called From: B4A2:062A:005C:D203
 * Called From: B4A2:062A:0081:DCA6
 * Called From: B4A2:0630:005C:D203
 * Called From: B4A2:0630:0054:23DD
 * Called From: B4A2:063B:0054:23DD
 * Called From: B4A2:063B:005C:D203
 */
void f__B4A2_0649_0027_26C2()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_andw(&emu_ax, 0x18);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_andw(&emu_dx, 0x3);
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_dx, emu_cl);
	emu_cmpw(&emu_ax, emu_dx);
	if (emu_flags.zf) { f__B4A2_0672_003E_C657(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0670); f__B4A2_0729_0013_2494();
	f__B4A2_0670_0040_740E();
}

/**
 * Decompiled function f__B4A2_0670_0040_740E()
 *
 * @name f__B4A2_0670_0040_740E
 * @implements B4A2:0670:0040:740E ()
 *
 */
void f__B4A2_0670_0040_740E()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B4A2_0672_003E_C657(); return;
}

/**
 * Decompiled function f__B4A2_0672_003E_C657()
 *
 * @name f__B4A2_0672_003E_C657
 * @implements B4A2:0672:003E:C657 ()
 *
 * Called From: B4A2:0663:0027:26C2
 */
void f__B4A2_0672_003E_C657()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__B4A2_0680_0030_38D3(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFFE);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	if (emu_flags.zf) { f__B4A2_06C5_001E_934B(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x30));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x32));
	if (emu_flags.zf) { f__B4A2_06B8_000D_37FC(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx, 0x30);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx, 0x32);
	emu_push(0x06B0);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x0AEC0005: f__0AEC_0005_0010_9634(); break;
		case 0x0AEC004F: f__0AEC_004F_0024_1E6F(); break;
		case 0x0AEC0FD8: f__0AEC_0FD8_0017_6202(); break;
		case 0x0AEC1093: f__0AEC_1093_000F_2295(); break;
		case 0x0AEC1181: f__0AEC_1181_001C_DFE4(); break;
		case 0x0AEC11F6: f__0AEC_11F6_000F_2195(); break;
		case 0x1A341CB1: f__1A34_1CB1_003A_B457(); break;
		case 0x34950025: ovl__3495(1); break;
		case 0x3495002A: ovl__3495(2); break;
		case 0x3495002F: ovl__3495(3); break;
		case 0x34950034: ovl__3495(4); break;
		case 0x3495003E: ovl__3495(6); break;
		case 0x34E0002A: ovl__34E0(2); break;
		case 0x34E9002F: ovl__34E9(3); break;
		case 0x34F20025: ovl__34F2(1); break;
		case 0x35180034: ovl__3518(4); break;
		case 0x35180039: ovl__3518(5); break;
		case 0x3520003E: ovl__3520(6); break;
		case 0x35200043: ovl__3520(7); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4A2; emu_last_ip = 0x06AC; emu_last_length = 0x003E; emu_last_crc = 0xC657;
			emu_call();
			return;
	}
	f__B4A2_06B0_0008_D0CF();
}

/**
 * Decompiled function f__B4A2_0680_0030_38D3()
 *
 * @name f__B4A2_0680_0030_38D3
 * @implements B4A2:0680:0030:38D3 ()
 *
 * Called From: B4A2:0676:003E:C657
 * Called From: B4A2:0676:0040:740E
 */
void f__B4A2_0680_0030_38D3()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	if (emu_flags.zf) { f__B4A2_06C5_001E_934B(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x2E), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x30));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x32));
	if (emu_flags.zf) { f__B4A2_06B8_000D_37FC(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx, 0x30);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx, 0x32);
	emu_push(0x06B0);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x0AEC0005: f__0AEC_0005_0010_9634(); break;
		case 0x0AEC004F: f__0AEC_004F_0024_1E6F(); break;
		case 0x0AEC0FD8: f__0AEC_0FD8_0017_6202(); break;
		case 0x0AEC1093: f__0AEC_1093_000F_2295(); break;
		case 0x0AEC1181: f__0AEC_1181_001C_DFE4(); break;
		case 0x0AEC11F6: f__0AEC_11F6_000F_2195(); break;
		case 0x1A341CB1: f__1A34_1CB1_003A_B457(); break;
		case 0x34950025: ovl__3495(1); break;
		case 0x3495002A: ovl__3495(2); break;
		case 0x3495002F: ovl__3495(3); break;
		case 0x34950034: ovl__3495(4); break;
		case 0x3495003E: ovl__3495(6); break;
		case 0x34E0002A: ovl__34E0(2); break;
		case 0x34E9002F: ovl__34E9(3); break;
		case 0x34F20025: ovl__34F2(1); break;
		case 0x35180034: ovl__3518(4); break;
		case 0x35180039: ovl__3518(5); break;
		case 0x3520003E: ovl__3520(6); break;
		case 0x35200043: ovl__3520(7); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4A2; emu_last_ip = 0x06AC; emu_last_length = 0x0030; emu_last_crc = 0x38D3;
			emu_call();
			return;
	}
	f__B4A2_06B0_0008_D0CF();
}

/**
 * Decompiled function f__B4A2_06B0_0008_D0CF()
 *
 * @name f__B4A2_06B0_0008_D0CF
 * @implements B4A2:06B0:0008:D0CF ()
 *
 * Called From: 261F:01B9:001B:EDBF
 * Called From: B4F2:0378:0006:F7CE
 */
void f__B4A2_06B0_0008_D0CF()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__B4A2_06B8_000D_37FC(); return; }
	f__B4A2_06FE_0015_72AB(); return;
}

/**
 * Decompiled function f__B4A2_06B8_000D_37FC()
 *
 * @name f__B4A2_06B8_000D_37FC
 * @implements B4A2:06B8:000D:37FC ()
 *
 * Called From: B4A2:06A1:0030:38D3
 * Called From: B4A2:06B4:0008:D0CF
 */
void f__B4A2_06B8_000D_37FC()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x20);
	if (emu_flags.zf) { f__B4A2_06C5_001E_934B(); return; }
	/* Unresolved jump */ emu_ip = 0x06FE; emu_last_cs = 0xB4A2; emu_last_ip = 0x06C3; emu_last_length = 0x000D; emu_last_crc = 0x37FC; emu_call();
}

/**
 * Decompiled function f__B4A2_06C5_001E_934B()
 *
 * @name f__B4A2_06C5_001E_934B
 * @implements B4A2:06C5:001E:934B ()
 *
 * Called From: B4A2:0684:0030:38D3
 * Called From: B4A2:0684:003E:C657
 * Called From: B4A2:0684:0040:740E
 * Called From: B4A2:06C1:000D:37FC
 */
void f__B4A2_06C5_001E_934B()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x1900));
	emu_movw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x18FE));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4A2_06E3_001B_B2D9(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { f__B4A2_06E3_001B_B2D9(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x40);
	if (emu_flags.zf) { f__B4A2_06E3_001B_B2D9(); return; }
	f__B4A2_06FE_0015_72AB(); return;
}

/**
 * Decompiled function f__B4A2_06E3_001B_B2D9()
 *
 * @name f__B4A2_06E3_001B_B2D9
 * @implements B4A2:06E3:001B:B2D9 ()
 *
 * Called From: B4A2:01FA:000E:2C3C
 * Called From: B4A2:06CF:001E:934B
 * Called From: B4A2:06D4:001E:934B
 * Called From: B4A2:06DF:001E:934B
 */
void f__B4A2_06E3_001B_B2D9()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__B4A2_06FE_0015_72AB(); return; }
	f__B4A2_01EF_000E_2C3C(); return;
}

/**
 * Decompiled function f__B4A2_06F3_000B_49A2()
 *
 * @name f__B4A2_06F3_000B_49A2
 * @implements B4A2:06F3:000B:49A2 ()
 *
 * Called From: B4A2:01EC:0008:082E
 * Called From: B4A2:01EC:0074:9303
 * Called From: B4A2:01EC:0086:5764
 */
void f__B4A2_06F3_000B_49A2()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__B4A2_06FE_0015_72AB(); return; }
	f__B4A2_01EF_000E_2C3C(); return;
}

/**
 * Decompiled function f__B4A2_06FE_0015_72AB()
 *
 * @name f__B4A2_06FE_0015_72AB
 * @implements B4A2:06FE:0015:72AB ()
 *
 * Called From: B4A2:06B6:0008:D0CF
 * Called From: B4A2:06E1:001E:934B
 * Called From: B4A2:06F9:001B:B2D9
 * Called From: B4A2:06F9:000B:49A2
 */
void f__B4A2_06FE_0015_72AB()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (!emu_flags.zf) { f__B4A2_070D_0006_CF87(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax, 0x7FFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	f__B4A2_070D_0006_CF87(); return;
}

/**
 * Decompiled function f__B4A2_070D_0006_CF87()
 *
 * @name f__B4A2_070D_0006_CF87
 * @implements B4A2:070D:0006:CF87 ()
 *
 * Called From: B4A2:0702:0015:72AB
 */
void f__B4A2_070D_0006_CF87()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	f__B4A2_007E_0003_9E04(); return;
}

/**
 * Decompiled function f__B4A2_0713_0006_F7CE()
 *
 * @name f__B4A2_0713_0006_F7CE
 * @implements B4A2:0713:0006:F7CE ()
 *
 * Called From: B4A2:007E:0003:9E04
 * Called From: B4A2:007E:001E:4495
 */
void f__B4A2_0713_0006_F7CE()
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
 * Decompiled function f__B4A2_0729_0013_2494()
 *
 * @name f__B4A2_0729_0013_2494
 * @implements B4A2:0729:0013:2494 ()
 *
 * Called From: 34A2:0020:0005:0000
 * Called From: B4A2:00F1:000B:A0FA
 * Called From: B4A2:066D:0027:26C2
 * Called From: B4A2:066D:0054:23DD
 */
void f__B4A2_0729_0013_2494()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4A2_073C_0025_DBA0(); return; }
	/* Unresolved jump */ emu_ip = 0x0A1E; emu_last_cs = 0xB4A2; emu_last_ip = 0x0739; emu_last_length = 0x0013; emu_last_crc = 0x2494; emu_call();
}

/**
 * Decompiled function f__B4A2_073C_0025_DBA0()
 *
 * @name f__B4A2_073C_0025_DBA0
 * @implements B4A2:073C:0025:DBA0 ()
 *
 * Called From: B4A2:0737:0013:2494
 */
void f__B4A2_073C_0025_DBA0()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x8);
	if (emu_flags.zf) { f__B4A2_0767_001B_DE60(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x10);
	if (emu_flags.zf) { f__B4A2_0764_0003_DC0D(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D53));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0761); emu_cs = 0x2427; emu_ip = 0x0004; emu_last_cs = 0xB4A2; emu_last_ip = 0x075C; emu_last_length = 0x0025; emu_last_crc = 0xDBA0; emu_call();
	/* Unresolved jump */ emu_ip = 0x0761; emu_last_cs = 0xB4A2; emu_last_ip = 0x0761; emu_last_length = 0x0025; emu_last_crc = 0xDBA0; emu_call();
}

/**
 * Decompiled function f__B4A2_0764_0003_DC0D()
 *
 * @name f__B4A2_0764_0003_DC0D
 * @implements B4A2:0764:0003:DC0D ()
 *
 * Called From: B4A2:0750:0025:DBA0
 */
void f__B4A2_0764_0003_DC0D()
{
	f__B4A2_0A1E_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4A2_0767_001B_DE60()
 *
 * @name f__B4A2_0767_001B_DE60
 * @implements B4A2:0767:001B:DE60 ()
 *
 * Called From: B4A2:0745:0025:DBA0
 */
void f__B4A2_0767_001B_DE60()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2E));
	emu_andw(&emu_ax, 0x5);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { f__B4A2_07B9_0032_A5F0(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (emu_flags.zf) { f__B4A2_0782_0037_9F6E(); return; }
	emu_cmpw(&emu_ax, 0x5);
	if (emu_flags.zf) { f__B4A2_0782_0037_9F6E(); return; }
	f__B4A2_07EB_0032_9164(); return;
}

/**
 * Decompiled function f__B4A2_0782_0037_9F6E()
 *
 * @name f__B4A2_0782_0037_9F6E
 * @implements B4A2:0782:0037:9F6E ()
 *
 * Called From: B4A2:0779:001B:DE60
 * Called From: B4A2:077E:001B:DE60
 */
void f__B4A2_0782_0037_9F6E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xC));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2A));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x2B));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	f__B4A2_081D_008A_92B0(); return;
}

/**
 * Decompiled function f__B4A2_07B2_0007_8ADE()
 *
 * @name f__B4A2_07B2_0007_8ADE
 * @implements B4A2:07B2:0007:8ADE ()
 *
 * Called From: B4A2:07E9:0032:A5F0
 * Called From: B4A2:081B:0032:9164
 */
void f__B4A2_07B2_0007_8ADE()
{
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax);
	f__B4A2_081D_008A_92B0(); return;
}

/**
 * Decompiled function f__B4A2_07B9_0032_A5F0()
 *
 * @name f__B4A2_07B9_0032_A5F0
 * @implements B4A2:07B9:0032:A5F0 ()
 *
 * Called From: B4A2:0774:001B:DE60
 */
void f__B4A2_07B9_0032_A5F0()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x28));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x29));
	f__B4A2_07B2_0007_8ADE(); return;
}

/**
 * Decompiled function f__B4A2_07EB_0032_9164()
 *
 * @name f__B4A2_07EB_0032_9164
 * @implements B4A2:07EB:0032:9164 ()
 *
 * Called From: B4A2:0780:001B:DE60
 */
void f__B4A2_07EB_0032_9164()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xA));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x26));
	emu_movb(&emu_ah, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x27));
	f__B4A2_07B2_0007_8ADE(); return;
}

/**
 * Decompiled function f__B4A2_081D_008A_92B0()
 *
 * @name f__B4A2_081D_008A_92B0
 * @implements B4A2:081D:008A:92B0 ()
 *
 * Called From: B4A2:07B7:0007:8ADE
 * Called From: B4A2:07B7:0037:9F6E
 */
void f__B4A2_081D_008A_92B0()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_083D_006A_E650(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4066));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_si, emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4062));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_si, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x22));
	emu_decw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_087C_002B_DEE8(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx, 0x4068));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x24));
	emu_decw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_decw(&emu_bx);
	emu_cmpw(&emu_bx, 0x5);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4A2_08A7_0007_6D37(); return; }
	f__B4A2_0A1C_0002_C03A(); return;
}

/**
 * Decompiled function f__B4A2_083D_006A_E650()
 *
 * @name f__B4A2_083D_006A_E650
 * @implements B4A2:083D:006A:E650 ()
 *
 * Called From: B4A2:0826:008A:92B0
 */
void f__B4A2_083D_006A_E650()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x4062));
	emu_movb(&emu_cl, 0x3);
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_si, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x22));
	emu_decw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_087C_002B_DEE8(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx, 0x4068));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x24));
	emu_decw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_decw(&emu_bx);
	emu_cmpw(&emu_bx, 0x5);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4A2_08A7_0007_6D37(); return; }
	f__B4A2_0A1C_0002_C03A(); return;
}

/**
 * Decompiled function f__B4A2_087C_002B_DEE8()
 *
 * @name f__B4A2_087C_002B_DEE8
 * @implements B4A2:087C:002B:DEE8 ()
 *
 * Called From: B4A2:086B:006A:E650
 */
void f__B4A2_087C_002B_DEE8()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_movb(&emu_cl, 0x4);
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx, 0x4064));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_di);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x24));
	emu_decw(&emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_decw(&emu_bx);
	emu_cmpw(&emu_bx, 0x5);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4A2_08A7_0007_6D37(); return; }
	f__B4A2_0A1C_0002_C03A(); return;
}

/**
 * Decompiled function f__B4A2_08A7_0007_6D37()
 *
 * @name f__B4A2_08A7_0007_6D37
 * @implements B4A2:08A7:0007:6D37 ()
 *
 * Called From: B4A2:08A2:002B:DEE8
 */
void f__B4A2_08A7_0007_6D37()
{
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0xA24);
	switch (emu_ip) {
		case 0x08AE: f__B4A2_08AE_0014_2AE3(); return;
		case 0x08F7: f__B4A2_08F7_0014_2AE3(); return;
		case 0x0933: f__B4A2_0933_0011_88EC(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4A2; emu_last_ip = 0x08A9; emu_last_length = 0x0007; emu_last_crc = 0x6D37;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4A2_08AE_0014_2AE3()
 *
 * @name f__B4A2_08AE_0014_2AE3
 * @implements B4A2:08AE:0014:2AE3 ()
 *
 * Called From: B4A2:08A9:0007:6D37
 */
void f__B4A2_08AE_0014_2AE3()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (!emu_flags.zf) { f__B4A2_08C5_0020_E97F(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x08C2); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_08C2_0023_FD2E();
}

/**
 * Decompiled function f__B4A2_08C2_0023_FD2E()
 *
 * @name f__B4A2_08C2_0023_FD2E
 * @implements B4A2:08C2:0023:FD2E ()
 *
 */
void f__B4A2_08C2_0023_FD2E()
{
	emu_addw(&emu_sp, 0x8);
	f__B4A2_08C5_0020_E97F(); return;
}

/**
 * Decompiled function f__B4A2_08C5_0020_E97F()
 *
 * @name f__B4A2_08C5_0020_E97F
 * @implements B4A2:08C5:0020:E97F ()
 *
 * Called From: B4A2:08B3:0014:2AE3
 */
void f__B4A2_08C5_0020_E97F()
{
	emu_movw(&emu_ax, 0x4000);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x08E5); emu_cs = 0x2903; f__2903_0158_001A_2931();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_08E5_000F_BCB8();
}

/**
 * Decompiled function f__B4A2_08E5_000F_BCB8()
 *
 * @name f__B4A2_08E5_000F_BCB8
 * @implements B4A2:08E5:000F:BCB8 ()
 *
 */
void f__B4A2_08E5_000F_BCB8()
{
	emu_addw(&emu_sp, 0xE);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (!emu_flags.zf) { f__B4A2_08F4_0003_DDA9(); return; }
	emu_push(emu_cs); emu_push(0x08F4); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_08F4_0003_DDA9();
}

/**
 * Decompiled function f__B4A2_08F4_0003_DDA9()
 *
 * @name f__B4A2_08F4_0003_DDA9
 * @implements B4A2:08F4:0003:DDA9 ()
 *
 * Called From: B4A2:08ED:000F:BCB8
 */
void f__B4A2_08F4_0003_DDA9()
{
	f__B4A2_0A1E_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4A2_08F7_0014_2AE3()
 *
 * @name f__B4A2_08F7_0014_2AE3
 * @implements B4A2:08F7:0014:2AE3 ()
 *
 * Called From: B4A2:08A9:0007:6D37
 */
void f__B4A2_08F7_0014_2AE3()
{
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (!emu_flags.zf) { f__B4A2_090E_0013_79CF(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x090B); emu_cs = 0x2B6C; f__2B6C_0197_00CE_4D32();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_090B_0016_F3ED();
}

/**
 * Decompiled function f__B4A2_090B_0016_F3ED()
 *
 * @name f__B4A2_090B_0016_F3ED
 * @implements B4A2:090B:0016:F3ED ()
 *
 */
void f__B4A2_090B_0016_F3ED()
{
	emu_addw(&emu_sp, 0x8);
	f__B4A2_090E_0013_79CF(); return;
}

/**
 * Decompiled function f__B4A2_090E_0013_79CF()
 *
 * @name f__B4A2_090E_0013_79CF
 * @implements B4A2:090E:0013:79CF ()
 *
 * Called From: B4A2:08FC:0014:2AE3
 */
void f__B4A2_090E_0013_79CF()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0921); emu_cs = 0x2BC2; f__2BC2_000A_0044_2E0E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_0921_000F_ACB8();
}

/**
 * Decompiled function f__B4A2_0921_000F_ACB8()
 *
 * @name f__B4A2_0921_000F_ACB8
 * @implements B4A2:0921:000F:ACB8 ()
 *
 */
void f__B4A2_0921_000F_ACB8()
{
	emu_addw(&emu_sp, 0xC);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6C91), 0x0);
	if (!emu_flags.zf) { f__B4A2_0930_0003_DD1A(); return; }
	emu_push(emu_cs); emu_push(0x0930); emu_cs = 0x2B6C; f__2B6C_0292_0028_3AD7();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_0930_0003_DD1A();
}

/**
 * Decompiled function f__B4A2_0930_0003_DD1A()
 *
 * @name f__B4A2_0930_0003_DD1A
 * @implements B4A2:0930:0003:DD1A ()
 *
 * Called From: B4A2:0929:000F:ACB8
 */
void f__B4A2_0930_0003_DD1A()
{
	f__B4A2_0A1E_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4A2_0933_0011_88EC()
 *
 * @name f__B4A2_0933_0011_88EC
 * @implements B4A2:0933:0011:88EC ()
 *
 * Called From: B4A2:08A9:0007:6D37
 */
void f__B4A2_0933_0011_88EC()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0946; emu_last_cs = 0xB4A2; emu_last_ip = 0x0939; emu_last_length = 0x0011; emu_last_crc = 0x88EC; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x0944);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x0AEC0809: f__0AEC_0809_001D_BEB5(); break;
		case 0x0AEC0CA1: f__0AEC_0CA1_0013_A57D(); break;
		case 0x0AEC0E3E: f__0AEC_0E3E_0013_E57C(); break;
		case 0x34F20061: ovl__34F2(13); break;
		case 0x3520002A: ovl__3520(2); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4A2; emu_last_ip = 0x0941; emu_last_length = 0x0011; emu_last_crc = 0x88EC;
			emu_call();
			return;
	}
	f__B4A2_0944_0005_CFD8();
}

/**
 * Decompiled function f__B4A2_0944_0005_CFD8()
 *
 * @name f__B4A2_0944_0005_CFD8
 * @implements B4A2:0944:0005:CFD8 ()
 *
 */
void f__B4A2_0944_0005_CFD8()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	f__B4A2_0A1E_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4A2_0A1C_0002_C03A()
 *
 * @name f__B4A2_0A1C_0002_C03A
 * @implements B4A2:0A1C:0002:C03A ()
 *
 * Called From: B4A2:08A4:002B:DEE8
 */
void f__B4A2_0A1C_0002_C03A()
{
	f__B4A2_0A1E_0006_F7CE(); return;
}

/**
 * Decompiled function f__B4A2_0A1E_0006_F7CE()
 *
 * @name f__B4A2_0A1E_0006_F7CE
 * @implements B4A2:0A1E:0006:F7CE ()
 *
 * Called From: B4A2:0764:0003:DC0D
 * Called From: B4A2:08F4:0003:DDA9
 * Called From: B4A2:0930:0003:DD1A
 * Called From: B4A2:0946:0005:CFD8
 * Called From: B4A2:0A1C:0002:C03A
 */
void f__B4A2_0A1E_0006_F7CE()
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
