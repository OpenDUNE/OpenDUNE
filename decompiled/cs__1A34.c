/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1A34_0005_001F_2A0F()
 *
 * @name f__1A34_0005_001F_2A0F
 * @implements 1A34:0005:001F:2A0F ()
 *
 * Called From: 1A34:21C7:000B:CC31
 * Called From: 1A34:21C7:001C:82C6
 */
void f__1A34_0005_001F_2A0F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x20);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_0024_000D_666C(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x08F5; emu_last_cs = 0x1A34; emu_last_ip = 0x0021; emu_last_length = 0x001F; emu_last_crc = 0x2A0F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_0021_0003_041C()
 *
 * @name f__1A34_0021_0003_041C
 * @implements 1A34:0021:0003:041C ()
 *
 * Called From: 1A34:07E5:0006:287C
 * Called From: 1A34:07E5:0009:EE7D
 * Called From: 1A34:08F2:0006:2396
 */
void f__1A34_0021_0003_041C()
{
	f__1A34_08F5_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_0024_000D_666C()
 *
 * @name f__1A34_0024_000D_666C
 * @implements 1A34:0024:000D:666C ()
 *
 * Called From: 1A34:001D:001F:2A0F
 */
void f__1A34_0024_000D_666C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x1);
	if (!emu_flags.zf) { f__1A34_0031_0035_03C6(); return; }
	emu_ip = 0x001F; emu_last_cs = 0x1A34; emu_last_ip = 0x002F; emu_last_length = 0x000D; emu_last_crc = 0x666C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_0031_0035_03C6()
 *
 * @name f__1A34_0031_0035_03C6
 * @implements 1A34:0031:0035:03C6 ()
 *
 * Called From: 1A34:002D:000D:666C
 */
void f__1A34_0031_0035_03C6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0066); emu_cs = 0x0F3F; f__0F3F_028E_0015_B0E3();
	f__1A34_0066_0020_0F65();
}

/**
 * Decompiled function f__1A34_0066_0020_0F65()
 *
 * @name f__1A34_0066_0020_0F65
 * @implements 1A34:0066:0020:0F65 ()
 *
 * Called From: 1A34:0066:0035:03C6
 */
void f__1A34_0066_0020_0F65()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__1A34_0086_0014_663F(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1A34_0086_0014_663F(); return; }
	emu_ip = 0x001F; emu_last_cs = 0x1A34; emu_last_ip = 0x0084; emu_last_length = 0x0020; emu_last_crc = 0x0F65; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_0086_0014_663F()
 *
 * @name f__1A34_0086_0014_663F
 * @implements 1A34:0086:0014:663F ()
 *
 * Called From: 1A34:007D:0020:0F65
 * Called From: 1A34:0082:0020:0F65
 */
void f__1A34_0086_0014_663F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_andw(&emu_dx.x, 0xC000);
	emu_andw(&emu_ax.x, 0xC000);
	emu_orw(&emu_dx.x, emu_ax.x);
	if (!emu_flags.zf) { f__1A34_009A_0031_64B5(); return; }
	f__1A34_011E_0023_8D8D(); return;
}

/**
 * Decompiled function f__1A34_009A_0031_64B5()
 *
 * @name f__1A34_009A_0031_64B5
 * @implements 1A34:009A:0031:64B5 ()
 *
 * Called From: 1A34:0095:0014:663F
 */
void f__1A34_009A_0031_64B5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x80);
	if (emu_flags.zf) { emu_ip = 0x00E6; emu_last_cs = 0x1A34; emu_last_ip = 0x00A3; emu_last_length = 0x0031; emu_last_crc = 0x64B5; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00CB); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__1A34_00CB_0016_09EA();
}

/**
 * Decompiled function f__1A34_00CB_0016_09EA()
 *
 * @name f__1A34_00CB_0016_09EA
 * @implements 1A34:00CB:0016:09EA ()
 *
 * Called From: 1A34:00CB:0031:64B5
 */
void f__1A34_00CB_0016_09EA()
{
	emu_andw(&emu_ax.x, 0xF);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_andw(&emu_dx.x, 0xFF);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x00E1); f__1A34_1E99_0012_0D98();
	f__1A34_00E1_0005_1FFC();
}

/**
 * Decompiled function f__1A34_00E1_0005_1FFC()
 *
 * @name f__1A34_00E1_0005_1FFC
 * @implements 1A34:00E1:0005:1FFC ()
 *
 * Called From: 1A34:00E1:0016:09EA
 */
void f__1A34_00E1_0005_1FFC()
{
	emu_addws(&emu_sp, 0xA);
	f__1A34_00F6_0020_0E63(); return;
}

/**
 * Decompiled function f__1A34_00E6_000B_E3D4()
 *
 * @name f__1A34_00E6_000B_E3D4
 * @implements 1A34:00E6:000B:E3D4 ()
 *
 * Called From: 1A34:011C:0008:6A3C
 * Called From: 1A34:04C4:0006:3E2C
 */
void f__1A34_00E6_000B_E3D4()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x00F1); f__1A34_10EC_000E_8DDF();
	f__1A34_00F1_0005_0A44();
}

/**
 * Decompiled function f__1A34_00F1_0005_0A44()
 *
 * @name f__1A34_00F1_0005_0A44
 * @implements 1A34:00F1:0005:0A44 ()
 *
 * Called From: 1A34:00F1:000B:E3D4
 */
void f__1A34_00F1_0005_0A44()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__1A34_07E2_0006_287C(); return;
}

/**
 * Decompiled function f__1A34_00F6_0020_0E63()
 *
 * @name f__1A34_00F6_0020_0E63
 * @implements 1A34:00F6:0020:0E63 ()
 *
 * Called From: 1A34:00E4:0005:1FFC
 */
void f__1A34_00F6_0020_0E63()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x200);
	if (emu_flags.zf) { emu_ip = 0x011E; emu_last_cs = 0x1A34; emu_last_ip = 0x00FF; emu_last_length = 0x0020; emu_last_crc = 0x0E63; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x011E; emu_last_cs = 0x1A34; emu_last_ip = 0x0109; emu_last_length = 0x0020; emu_last_crc = 0x0E63; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0116); emu_cs = 0x0C10; f__0C10_013D_0016_CFFB();
	f__1A34_0116_0008_6A3C();
}

/**
 * Decompiled function f__1A34_0116_0008_6A3C()
 *
 * @name f__1A34_0116_0008_6A3C
 * @implements 1A34:0116:0008:6A3C ()
 *
 * Called From: 1A34:0116:0020:0E63
 */
void f__1A34_0116_0008_6A3C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x011E; emu_last_cs = 0x1A34; emu_last_ip = 0x011A; emu_last_length = 0x0008; emu_last_crc = 0x6A3C; emu_call(); return; } // Jump does not resolve
	f__1A34_00E6_000B_E3D4(); return;
}

/**
 * Decompiled function f__1A34_011E_0023_8D8D()
 *
 * @name f__1A34_011E_0023_8D8D
 * @implements 1A34:011E:0023:8D8D ()
 *
 * Called From: 1A34:0097:0014:663F
 */
void f__1A34_011E_0023_8D8D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6C), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x10);
	if (emu_flags.zf) { f__1A34_014A_0016_B28A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x80);
	if (emu_flags.zf) { f__1A34_014A_0016_B28A(); return; }
	emu_push(emu_cs); emu_push(0x0141); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__1A34_0141_001F_DB85();
}

/**
 * Decompiled function f__1A34_0141_001F_DB85()
 *
 * @name f__1A34_0141_001F_DB85
 * @implements 1A34:0141:001F:DB85 ()
 *
 * Called From: 1A34:0141:0023:8D8D
 */
void f__1A34_0141_001F_DB85()
{
	emu_andb(&emu_ax.l, 0x7);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6C), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0160); emu_cs = 0x0F3F; f__0F3F_00B4_002A_0887();
	f__1A34_0160_0011_58A6();
}

/**
 * Decompiled function f__1A34_014A_0016_B28A()
 *
 * @name f__1A34_014A_0016_B28A
 * @implements 1A34:014A:0016:B28A ()
 *
 * Called From: 1A34:012F:0023:8D8D
 * Called From: 1A34:013A:0023:8D8D
 */
void f__1A34_014A_0016_B28A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0160); emu_cs = 0x0F3F; f__0F3F_00B4_002A_0887();
	f__1A34_0160_0011_58A6();
}

/**
 * Decompiled function f__1A34_0160_0011_58A6()
 *
 * @name f__1A34_0160_0011_58A6
 * @implements 1A34:0160:0011:58A6 ()
 *
 * Called From: 1A34:0160:001F:DB85
 * Called From: 1A34:0160:0016:B28A
 */
void f__1A34_0160_0011_58A6()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0171); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__1A34_0171_0012_CF12();
}

/**
 * Decompiled function f__1A34_0171_0012_CF12()
 *
 * @name f__1A34_0171_0012_CF12
 * @implements 1A34:0171:0012:CF12 ()
 *
 * Called From: 1A34:0171:0011:58A6
 */
void f__1A34_0171_0012_CF12()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x20);
	if (!emu_flags.zf) { f__1A34_0183_0009_0041(); return; }
	f__1A34_027A_000E_F3CB(); return;
}

/**
 * Decompiled function f__1A34_0183_0009_0041()
 *
 * @name f__1A34_0183_0009_0041
 * @implements 1A34:0183:0009:0041 ()
 *
 * Called From: 1A34:017E:0012:CF12
 */
void f__1A34_0183_0009_0041()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x30);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_018C_0006_0FFC(); return; }
	f__1A34_027A_000E_F3CB(); return;
}

/**
 * Decompiled function f__1A34_018C_0006_0FFC()
 *
 * @name f__1A34_018C_0006_0FFC
 * @implements 1A34:018C:0006:0FFC ()
 *
 * Called From: 1A34:0187:0009:0041
 */
void f__1A34_018C_0006_0FFC()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0192); emu_cs = 0x34CD; ovl__34CD(26);
	f__1A34_0192_0052_4BFE();
}

/**
 * Decompiled function f__1A34_0192_0052_4BFE()
 *
 * @name f__1A34_0192_0052_4BFE
 * @implements 1A34:0192:0052:4BFE ()
 *
 * Called From: 1A34:0192:0006:0FFC
 */
void f__1A34_0192_0052_4BFE()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_flags.zf) { f__1A34_0210_0006_03CC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x0);
	if (!emu_flags.zf) { f__1A34_0210_0006_03CC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (emu_flags.zf) { emu_ip = 0x0210; emu_last_cs = 0x1A34; emu_last_ip = 0x01C6; emu_last_length = 0x0052; emu_last_crc = 0x4BFE; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (!emu_flags.zf) { emu_ip = 0x01E6; emu_last_cs = 0x1A34; emu_last_ip = 0x01D2; emu_last_length = 0x0052; emu_last_crc = 0x4BFE; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x18));
	if (!emu_flags.zf) { emu_ip = 0x01E6; emu_last_cs = 0x1A34; emu_last_ip = 0x01D7; emu_last_length = 0x0052; emu_last_crc = 0x4BFE; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs);
	emu_push(0x01E4); emu_ip = 0x0F48; emu_last_cs = 0x1A34; emu_last_ip = 0x01E1; emu_last_length = 0x0052; emu_last_crc = 0x4BFE; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_0210_0006_03CC()
 *
 * @name f__1A34_0210_0006_03CC
 * @implements 1A34:0210:0006:03CC ()
 *
 * Called From: 1A34:019F:0052:4BFE
 * Called From: 1A34:01BB:0052:4BFE
 */
void f__1A34_0210_0006_03CC()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0216); emu_cs = 0x34CD; ovl__34CD(13);
	f__1A34_0216_004F_3795();
}

/**
 * Decompiled function f__1A34_0216_004F_3795()
 *
 * @name f__1A34_0216_004F_3795
 * @implements 1A34:0216:004F:3795 ()
 *
 * Called From: 1A34:0216:0006:03CC
 */
void f__1A34_0216_004F_3795()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__1A34_0222_0043_5A23(); return; }
	emu_cmpws(&emu_si, 0x2);
	if (!emu_flags.zf) { f__1A34_027A_000E_F3CB(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_shrw(&emu_ax.x, 0x1);
	emu_andw(&emu_ax.x, 0x7F);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1A34_027A_000E_F3CB(); return; }
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0265); emu_cs = 0x34CD; ovl__34CD(19);
	f__1A34_0265_0012_E2AB();
}

/**
 * Decompiled function f__1A34_0222_0043_5A23()
 *
 * @name f__1A34_0222_0043_5A23
 * @implements 1A34:0222:0043:5A23 ()
 *
 * Called From: 1A34:021B:004F:3795
 */
void f__1A34_0222_0043_5A23()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_shrw(&emu_ax.x, 0x1);
	emu_andw(&emu_ax.x, 0x7F);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1A34_027A_000E_F3CB(); return; }
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0265); emu_cs = 0x34CD; ovl__34CD(19);
	f__1A34_0265_0012_E2AB();
}

/**
 * Decompiled function f__1A34_0265_0012_E2AB()
 *
 * @name f__1A34_0265_0012_E2AB
 * @implements 1A34:0265:0012:E2AB ()
 *
 * Called From: 1A34:0265:0043:5A23
 * Called From: 1A34:0265:004F:3795
 */
void f__1A34_0265_0012_E2AB()
{
	emu_pop(&emu_cx.x);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, 0x33C8);
	emu_addw(&emu_ax.x, 0x0);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0277); emu_cs = 0x151A; f__151A_000E_0013_54E3();
	f__1A34_0277_0011_F20E();
}

/**
 * Decompiled function f__1A34_0277_0011_F20E()
 *
 * @name f__1A34_0277_0011_F20E
 * @implements 1A34:0277:0011:F20E ()
 *
 * Called From: 1A34:0277:0012:E2AB
 */
void f__1A34_0277_0011_F20E()
{
	emu_addws(&emu_sp, 0xE);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0288); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_0288_0037_EA25();
}

/**
 * Decompiled function f__1A34_027A_000E_F3CB()
 *
 * @name f__1A34_027A_000E_F3CB
 * @implements 1A34:027A:000E:F3CB ()
 *
 * Called From: 1A34:0180:0012:CF12
 * Called From: 1A34:0189:0009:0041
 * Called From: 1A34:0220:004F:3795
 * Called From: 1A34:0239:0043:5A23
 * Called From: 1A34:0239:004F:3795
 */
void f__1A34_027A_000E_F3CB()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0288); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_0288_0037_EA25();
}

/**
 * Decompiled function f__1A34_0288_0037_EA25()
 *
 * @name f__1A34_0288_0037_EA25
 * @implements 1A34:0288:0037:EA25 ()
 *
 * Called From: 1A34:0288:000E:F3CB
 * Called From: 1A34:0288:0011:F20E
 */
void f__1A34_0288_0037_EA25()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (!emu_flags.zf) { f__1A34_029D_0022_119E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x20);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x02BF); emu_cs = 0x0F3F; f__0F3F_00B4_002A_0887();
	f__1A34_02BF_0013_3ECE();
}

/**
 * Decompiled function f__1A34_029D_0022_119E()
 *
 * @name f__1A34_029D_0022_119E
 * @implements 1A34:029D:0022:119E ()
 *
 * Called From: 1A34:0293:0037:EA25
 */
void f__1A34_029D_0022_119E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x02BF); emu_cs = 0x0F3F; f__0F3F_00B4_002A_0887();
	f__1A34_02BF_0013_3ECE();
}

/**
 * Decompiled function f__1A34_02BF_0013_3ECE()
 *
 * @name f__1A34_02BF_0013_3ECE
 * @implements 1A34:02BF:0013:3ECE ()
 *
 * Called From: 1A34:02BF:0022:119E
 * Called From: 1A34:02BF:0037:EA25
 */
void f__1A34_02BF_0013_3ECE()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x18);
	if (emu_flags.zf) { emu_ip = 0x02D2; emu_last_cs = 0x1A34; emu_last_ip = 0x02CD; emu_last_length = 0x0013; emu_last_crc = 0x3ECE; emu_call(); return; } // Jump does not resolve
	f__1A34_03F8_000D_B92C(); return;
}

/**
 * Decompiled function f__1A34_03F8_000D_B92C()
 *
 * @name f__1A34_03F8_000D_B92C
 * @implements 1A34:03F8:000D:B92C ()
 *
 * Called From: 1A34:02CF:0013:3ECE
 */
void f__1A34_03F8_000D_B92C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x17);
	if (emu_flags.zf) { f__1A34_0405_000B_3945(); return; }
	f__1A34_04C7_0017_DDA8(); return;
}

/**
 * Decompiled function f__1A34_0405_000B_3945()
 *
 * @name f__1A34_0405_000B_3945
 * @implements 1A34:0405:000B:3945 ()
 *
 * Called From: 1A34:0400:000D:B92C
 */
void f__1A34_0405_000B_3945()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0410); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__1A34_0410_0008_778C();
}

/**
 * Decompiled function f__1A34_0410_0008_778C()
 *
 * @name f__1A34_0410_0008_778C
 * @implements 1A34:0410:0008:778C ()
 *
 * Called From: 1A34:0410:000B:3945
 */
void f__1A34_0410_0008_778C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0418); emu_cs = 0x34CD; ovl__34CD(13);
	f__1A34_0418_0019_5535();
}

/**
 * Decompiled function f__1A34_0418_0019_5535()
 *
 * @name f__1A34_0418_0019_5535
 * @implements 1A34:0418:0019:5535 ()
 *
 * Called From: 1A34:0418:0008:778C
 */
void f__1A34_0418_0019_5535()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpws(&emu_si, 0xB);
	if (emu_flags.zf) { emu_ip = 0x0425; emu_last_cs = 0x1A34; emu_last_ip = 0x041E; emu_last_length = 0x0019; emu_last_crc = 0x5535; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0xC);
	if (!emu_flags.zf) { f__1A34_0467_005A_0852(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4D));
	emu_push(emu_cs); emu_push(0x0431); emu_cs = 0x167E; f__167E_0088_001A_4DC5();
	f__1A34_0431_0011_19C6();
}

/**
 * Decompiled function f__1A34_0431_0011_19C6()
 *
 * @name f__1A34_0431_0011_19C6
 * @implements 1A34:0431:0011:19C6 ()
 *
 * Called From: 1A34:0431:0019:5535
 */
void f__1A34_0431_0011_19C6()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x3);
	if (!emu_flags.zf) { f__1A34_0467_005A_0852(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0442); emu_cs = 0x0F3F; emu_ip = 0x04C8; emu_last_cs = 0x1A34; emu_last_ip = 0x043D; emu_last_length = 0x0011; emu_last_crc = 0x19C6; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_0467_005A_0852()
 *
 * @name f__1A34_0467_005A_0852
 * @implements 1A34:0467:005A:0852 ()
 *
 * Called From: 1A34:0423:0019:5535
 * Called From: 1A34:0435:0011:19C6
 */
void f__1A34_0467_005A_0852()
{
	emu_cmpws(&emu_si, 0xB);
	if (emu_flags.zf) { emu_ip = 0x0476; emu_last_cs = 0x1A34; emu_last_ip = 0x046A; emu_last_length = 0x005A; emu_last_crc = 0x0852; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0xC);
	if (emu_flags.zf) { f__1A34_0476_004B_E51D(); return; }
	emu_cmpws(&emu_si, 0x6);
	if (!emu_flags.zf) { f__1A34_04C7_0017_DDA8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4D));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_bx.x, 0xA);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_andws(&emu_dx.x, 0x3);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x04C1); emu_cs = 0x06F7; emu_ip = 0x04C9; emu_last_cs = 0x1A34; emu_last_ip = 0x04BC; emu_last_length = 0x005A; emu_last_crc = 0x0852; emu_call(); // Jump does not resolve
	f__1A34_04C1_0006_3E2C();
}

/**
 * Decompiled function f__1A34_0476_004B_E51D()
 *
 * @name f__1A34_0476_004B_E51D
 * @implements 1A34:0476:004B:E51D ()
 *
 * Called From: 1A34:046F:005A:0852
 */
void f__1A34_0476_004B_E51D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4D));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_bx.x, 0xA);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_andws(&emu_dx.x, 0x3);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x04C1); emu_cs = 0x06F7; f__06F7_0008_0018_013C();
	f__1A34_04C1_0006_3E2C();
}

/**
 * Decompiled function f__1A34_04C1_0006_3E2C()
 *
 * @name f__1A34_04C1_0006_3E2C
 * @implements 1A34:04C1:0006:3E2C ()
 *
 * Called From: 1A34:04C1:004B:E51D
 */
void f__1A34_04C1_0006_3E2C()
{
	emu_addws(&emu_sp, 0xA);
	f__1A34_00E6_000B_E3D4(); return;
}

/**
 * Decompiled function f__1A34_04C7_0017_DDA8()
 *
 * @name f__1A34_04C7_0017_DDA8
 * @implements 1A34:04C7:0017:DDA8 ()
 *
 * Called From: 1A34:0402:000D:B92C
 * Called From: 1A34:0474:005A:0852
 */
void f__1A34_04C7_0017_DDA8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x52));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_04D9_0005_14B8(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x10);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_04DE_000E_8FBA(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__1A34_04E0_000C_4FAE(); return;
}

/**
 * Decompiled function f__1A34_04D9_0005_14B8()
 *
 * @name f__1A34_04D9_0005_14B8
 * @implements 1A34:04D9:0005:14B8 ()
 *
 * Called From: 1A34:04D1:0017:DDA8
 */
void f__1A34_04D9_0005_14B8()
{
	emu_movw(&emu_ax.x, 0x1);
	f__1A34_04E0_000C_4FAE(); return;
}

/**
 * Decompiled function f__1A34_04DE_000E_8FBA()
 *
 * @name f__1A34_04DE_000E_8FBA
 * @implements 1A34:04DE:000E:8FBA ()
 *
 * Called From: 1A34:04D7:0017:DDA8
 */
void f__1A34_04DE_000E_8FBA()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x04EC; emu_last_cs = 0x1A34; emu_last_ip = 0x04E7; emu_last_length = 0x000E; emu_last_crc = 0x8FBA; emu_call(); return; } // Jump does not resolve
	f__1A34_088A_002A_FD6B(); return;
}

/**
 * Decompiled function f__1A34_04E0_000C_4FAE()
 *
 * @name f__1A34_04E0_000C_4FAE
 * @implements 1A34:04E0:000C:4FAE ()
 *
 * Called From: 1A34:04DC:0017:DDA8
 * Called From: 1A34:04DC:0005:14B8
 */
void f__1A34_04E0_000C_4FAE()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (!emu_flags.zf) { f__1A34_04EC_000E_DD35(); return; }
	emu_ip = 0x088A; emu_last_cs = 0x1A34; emu_last_ip = 0x04E9; emu_last_length = 0x000C; emu_last_crc = 0x4FAE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_04EC_000E_DD35()
 *
 * @name f__1A34_04EC_000E_DD35
 * @implements 1A34:04EC:000E:DD35 ()
 *
 * Called From: 1A34:04E7:000C:4FAE
 */
void f__1A34_04EC_000E_DD35()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x2);
	if (!emu_flags.zf) { f__1A34_04FA_001A_68BE(); return; }
	f__1A34_0670_000E_FDDB(); return;
}

/**
 * Decompiled function f__1A34_04FA_001A_68BE()
 *
 * @name f__1A34_04FA_001A_68BE
 * @implements 1A34:04FA:001A:68BE ()
 *
 * Called From: 1A34:04F5:000E:DD35
 */
void f__1A34_04FA_001A_68BE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x51));
	emu_movb(&emu_ax.h, 0x0);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__1A34_0514_0015_8AFF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x14);
	if (emu_flags.zf) { emu_ip = 0x0514; emu_last_cs = 0x1A34; emu_last_ip = 0x050F; emu_last_length = 0x001A; emu_last_crc = 0x68BE; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x066D; emu_last_cs = 0x1A34; emu_last_ip = 0x0511; emu_last_length = 0x001A; emu_last_crc = 0x68BE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_0514_0015_8AFF()
 *
 * @name f__1A34_0514_0015_8AFF
 * @implements 1A34:0514:0015:8AFF ()
 *
 * Called From: 1A34:0505:001A:68BE
 */
void f__1A34_0514_0015_8AFF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x12);
	if (!emu_flags.zf) { f__1A34_0586_000D_3E2B(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0529); emu_cs = 0x0F3F; emu_ip = 0x059F; emu_last_cs = 0x1A34; emu_last_ip = 0x0524; emu_last_length = 0x0015; emu_last_crc = 0x8AFF; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_0586_000D_3E2B()
 *
 * @name f__1A34_0586_000D_3E2B
 * @implements 1A34:0586:000D:3E2B ()
 *
 * Called From: 1A34:051C:0015:8AFF
 */
void f__1A34_0586_000D_3E2B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0xFF);
	if (!emu_flags.zf) { f__1A34_0593_001B_52F2(); return; }
	emu_ip = 0x065D; emu_last_cs = 0x1A34; emu_last_ip = 0x0590; emu_last_length = 0x000D; emu_last_crc = 0x3E2B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_0593_001B_52F2()
 *
 * @name f__1A34_0593_001B_52F2
 * @implements 1A34:0593:001B:52F2 ()
 *
 * Called From: 1A34:058E:000D:3E2B
 */
void f__1A34_0593_001B_52F2()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x800);
	if (emu_flags.zf) { f__1A34_0600_0020_6469(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x05AE); emu_cs = 0x0F3F; emu_ip = 0x0634; emu_last_cs = 0x1A34; emu_last_ip = 0x05A9; emu_last_length = 0x001B; emu_last_crc = 0x52F2; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_0600_0020_6469()
 *
 * @name f__1A34_0600_0020_6469
 * @implements 1A34:0600:0020:6469 ()
 *
 * Called From: 1A34:059C:001B:52F2
 */
void f__1A34_0600_0020_6469()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x15);
	if (!emu_flags.zf) { f__1A34_0625_0035_F69B(); return; }
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_push(emu_cs); emu_push(0x0620); emu_cs = 0x06F7; emu_ip = 0x0A22; emu_last_cs = 0x1A34; emu_last_ip = 0x061B; emu_last_length = 0x0020; emu_last_crc = 0x6469; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_0625_0035_F69B()
 *
 * @name f__1A34_0625_0035_F69B
 * @implements 1A34:0625:0035:F69B ()
 *
 * Called From: 1A34:0608:0020:6469
 */
void f__1A34_0625_0035_F69B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4D));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x54));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_bx.x, 0x14);
	emu_cwd();
	emu_idivw(&emu_ax.x, emu_bx.x);
	emu_pop(&emu_dx.x);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_andws(&emu_dx.x, 0x3);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x065A); emu_cs = 0x06F7; f__06F7_0008_0018_013C();
	f__1A34_065A_000E_021A();
}

/**
 * Decompiled function f__1A34_065A_000E_021A()
 *
 * @name f__1A34_065A_000E_021A
 * @implements 1A34:065A:000E:021A ()
 *
 * Called From: 1A34:065A:0035:F69B
 */
void f__1A34_065A_000E_021A()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0668); f__1A34_10EC_000E_8DDF();
	f__1A34_0668_0005_0BF4();
}

/**
 * Decompiled function f__1A34_0668_0005_0BF4()
 *
 * @name f__1A34_0668_0005_0BF4
 * @implements 1A34:0668:0005:0BF4 ()
 *
 * Called From: 1A34:0668:000E:021A
 */
void f__1A34_0668_0005_0BF4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__1A34_08EF_0006_2396(); return;
}

/**
 * Decompiled function f__1A34_0670_000E_FDDB()
 *
 * @name f__1A34_0670_000E_FDDB
 * @implements 1A34:0670:000E:FDDB ()
 *
 * Called From: 1A34:04F7:000E:DD35
 */
void f__1A34_0670_000E_FDDB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x40);
	if (!emu_flags.zf) { f__1A34_067E_005F_89B8(); return; }
	f__1A34_088A_002A_FD6B(); return;
}

/**
 * Decompiled function f__1A34_067E_005F_89B8()
 *
 * @name f__1A34_067E_005F_89B8
 * @implements 1A34:067E:005F:89B8 ()
 *
 * Called From: 1A34:0679:000E:FDDB
 */
void f__1A34_067E_005F_89B8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) { emu_ip = 0x0692; emu_last_cs = 0x1A34; emu_last_ip = 0x0684; emu_last_length = 0x005F; emu_last_crc = 0x89B8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x5C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x5A));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x60), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x5E), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x5C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x5A), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4B), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x49), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x400);
	if (emu_flags.zf) { f__1A34_06F7_0020_2567(); return; }
	emu_push(emu_cs); emu_push(0x06DD); emu_cs = 0x2BB4; emu_ip = 0x06E1; emu_last_cs = 0x1A34; emu_last_ip = 0x06D8; emu_last_length = 0x005F; emu_last_crc = 0x89B8; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_06F7_0020_2567()
 *
 * @name f__1A34_06F7_0020_2567
 * @implements 1A34:06F7:0020:2567 ()
 *
 * Called From: 1A34:06D6:005F:89B8
 */
void f__1A34_06F7_0020_2567()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_0774_000E_232F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0759; emu_last_cs = 0x1A34; emu_last_ip = 0x0709; emu_last_length = 0x0020; emu_last_crc = 0x2567; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x56));
	emu_push(emu_cs); emu_push(0x0717); emu_cs = 0x167E; emu_ip = 0x08D2; emu_last_cs = 0x1A34; emu_last_ip = 0x0712; emu_last_length = 0x0020; emu_last_crc = 0x2567; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_0774_000E_232F()
 *
 * @name f__1A34_0774_000E_232F
 * @implements 1A34:0774:000E:232F ()
 *
 * Called From: 1A34:06FF:0020:2567
 */
void f__1A34_0774_000E_232F()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0782); f__1A34_204C_0043_9483();
	f__1A34_0782_000D_D27A();
}

/**
 * Decompiled function f__1A34_0782_000D_D27A()
 *
 * @name f__1A34_0782_000D_D27A
 * @implements 1A34:0782:000D:D27A ()
 *
 * Called From: 1A34:0782:000E:232F
 */
void f__1A34_0782_000D_D27A()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x078F); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__1A34_078F_001A_9EBE();
}

/**
 * Decompiled function f__1A34_078F_001A_9EBE()
 *
 * @name f__1A34_078F_001A_9EBE
 * @implements 1A34:078F:001A:9EBE ()
 *
 * Called From: 1A34:078F:000D:D27A
 */
void f__1A34_078F_001A_9EBE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x56));
	if (!emu_flags.zf) { f__1A34_07A3_0006_0EBC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x07A9); emu_cs = 0x34CD; ovl__34CD(30);
	f__1A34_07A9_0036_645D();
}

/**
 * Decompiled function f__1A34_07A3_0006_0EBC()
 *
 * @name f__1A34_07A3_0006_0EBC
 * @implements 1A34:07A3:0006:0EBC ()
 *
 * Called From: 1A34:0798:001A:9EBE
 */
void f__1A34_07A3_0006_0EBC()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x07A9); emu_cs = 0x34CD; ovl__34CD(30);
	f__1A34_07A9_0036_645D();
}

/**
 * Decompiled function f__1A34_07A9_0036_645D()
 *
 * @name f__1A34_07A9_0036_645D
 * @implements 1A34:07A9:0036:645D ()
 *
 * Called From: 1A34:07A9:0006:0EBC
 * Called From: 1A34:07A9:001A:9EBE
 */
void f__1A34_07A9_0036_645D()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x18), emu_ax.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__1A34_07E8_000D_BBD0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x60), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x5E), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x5C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x5A), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x07DF); f__1A34_2C95_001B_D4A0();
	f__1A34_07DF_0009_EE7D();
}

/**
 * Decompiled function f__1A34_07DF_0009_EE7D()
 *
 * @name f__1A34_07DF_0009_EE7D
 * @implements 1A34:07DF:0009:EE7D ()
 *
 * Called From: 1A34:07DF:0036:645D
 */
void f__1A34_07DF_0009_EE7D()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x1);
	f__1A34_0021_0003_041C(); return;
}

/**
 * Decompiled function f__1A34_07E2_0006_287C()
 *
 * @name f__1A34_07E2_0006_287C
 * @implements 1A34:07E2:0006:287C ()
 *
 * Called From: 1A34:00F3:0005:0A44
 */
void f__1A34_07E2_0006_287C()
{
	emu_movw(&emu_ax.x, 0x1);
	f__1A34_0021_0003_041C(); return;
}

/**
 * Decompiled function f__1A34_07E8_000D_BBD0()
 *
 * @name f__1A34_07E8_000D_BBD0
 * @implements 1A34:07E8:000D:BBD0 ()
 *
 * Called From: 1A34:07B2:0036:645D
 */
void f__1A34_07E8_000D_BBD0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (!emu_flags.zf) { f__1A34_07F5_00BF_AB0F(); return; }
	emu_ip = 0x088A; emu_last_cs = 0x1A34; emu_last_ip = 0x07F2; emu_last_length = 0x000D; emu_last_crc = 0xBBD0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_07F5_00BF_AB0F()
 *
 * @name f__1A34_07F5_00BF_AB0F
 * @implements 1A34:07F5:00BF:AB0F ()
 *
 * Called From: 1A34:07F0:000D:BBD0
 */
void f__1A34_07F5_00BF_AB0F()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x39F4));
	if (!emu_flags.zf) { f__1A34_083E_0076_9A3B(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x323F));
	emu_andw(&emu_ax.x, 0x7FFF);
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x1);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x39F4));
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x088A; emu_last_cs = 0x1A34; emu_last_ip = 0x0857; emu_last_length = 0x00BF; emu_last_crc = 0xAB0F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x323F));
	emu_andw(&emu_ax.x, 0x7FFF);
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x52), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08B4); emu_cs = 0x34CD; emu_ip = 0x0942; emu_last_cs = 0x1A34; emu_last_ip = 0x08AF; emu_last_length = 0x00BF; emu_last_crc = 0xAB0F; emu_call(); // Jump does not resolve
	f__1A34_08B4_0014_0E19();
}

/**
 * Decompiled function f__1A34_083E_0076_9A3B()
 *
 * @name f__1A34_083E_0076_9A3B
 * @implements 1A34:083E:0076:9A3B ()
 *
 * Called From: 1A34:080B:00BF:AB0F
 */
void f__1A34_083E_0076_9A3B()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x39F4));
	emu_incw(&emu_dx.x);
	emu_cmpw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__1A34_088A_002A_FD6B(); return; }
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, 0x2E9C);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x323F));
	emu_andw(&emu_ax.x, 0x7FFF);
	emu_andw(&emu_ax.x, 0x1FF);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A02));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x52), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08B4); emu_cs = 0x34CD; emu_ip = 0x0942; emu_last_cs = 0x1A34; emu_last_ip = 0x08AF; emu_last_length = 0x0076; emu_last_crc = 0x9A3B; emu_call(); // Jump does not resolve
	f__1A34_08B4_0014_0E19();
}

/**
 * Decompiled function f__1A34_088A_002A_FD6B()
 *
 * @name f__1A34_088A_002A_FD6B
 * @implements 1A34:088A:002A:FD6B ()
 *
 * Called From: 1A34:04E9:000E:8FBA
 * Called From: 1A34:067B:000E:FDDB
 * Called From: 1A34:0857:0076:9A3B
 */
void f__1A34_088A_002A_FD6B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x52), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x08B4); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_08B4_0014_0E19();
}

/**
 * Decompiled function f__1A34_08B4_0014_0E19()
 *
 * @name f__1A34_08B4_0014_0E19
 * @implements 1A34:08B4:0014:0E19 ()
 *
 * Called From: 1A34:08B4:002A:FD6B
 */
void f__1A34_08B4_0014_0E19()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	if (emu_flags.zf) { f__1A34_08D3_0011_0180(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x08C8); emu_ip = 0x3623; emu_last_cs = 0x1A34; emu_last_ip = 0x08C5; emu_last_length = 0x0014; emu_last_crc = 0x0E19; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_08D3_0011_0180()
 *
 * @name f__1A34_08D3_0011_0180
 * @implements 1A34:08D3:0011:0180 ()
 *
 * Called From: 1A34:08BB:0014:0E19
 */
void f__1A34_08D3_0011_0180()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (emu_flags.zf) { f__1A34_08EF_0006_2396(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x08E4); emu_ip = 0x3623; emu_last_cs = 0x1A34; emu_last_ip = 0x08E1; emu_last_length = 0x0011; emu_last_crc = 0x0180; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_08EF_0006_2396()
 *
 * @name f__1A34_08EF_0006_2396
 * @implements 1A34:08EF:0006:2396 ()
 *
 * Called From: 1A34:066A:0005:0BF4
 * Called From: 1A34:08D7:0011:0180
 */
void f__1A34_08EF_0006_2396()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__1A34_0021_0003_041C(); return;
}

/**
 * Decompiled function f__1A34_08F5_0006_137A()
 *
 * @name f__1A34_08F5_0006_137A
 * @implements 1A34:08F5:0006:137A ()
 *
 * Called From: 1A34:0021:0003:041C
 */
void f__1A34_08F5_0006_137A()
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
 * Decompiled function f__1A34_08FB_002C_227A()
 *
 * @name f__1A34_08FB_002C_227A
 * @implements 1A34:08FB:002C:227A ()
 *
 * Called From: 1A34:2401:0019:8B78
 * Called From: 1A34:245C:0024:5608
 * Called From: 1A34:2581:001B:7B1B
 * Called From: 1A34:270B:001E:EFB5
 */
void f__1A34_08FB_002C_227A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0927); emu_cs = 0x0FE4; f__0FE4_03A7_0027_57F8();
	f__1A34_0927_0014_E9F6();
}

/**
 * Decompiled function f__1A34_0927_0014_E9F6()
 *
 * @name f__1A34_0927_0014_E9F6
 * @implements 1A34:0927:0014:E9F6 ()
 *
 * Called From: 1A34:0927:002C:227A
 */
void f__1A34_0927_0014_E9F6()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1A34_093B_001D_D67E(); return; }
	emu_ip = 0x0B69; emu_last_cs = 0x1A34; emu_last_ip = 0x0938; emu_last_length = 0x0014; emu_last_crc = 0xE9F6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_093B_001D_D67E()
 *
 * @name f__1A34_093B_001D_D67E
 * @implements 1A34:093B:001D:D67E ()
 *
 * Called From: 1A34:0936:0014:E9F6
 */
void f__1A34_093B_001D_D67E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x8), emu_ax.l);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0958); f__1A34_1E99_0012_0D98();
	f__1A34_0958_0017_B87A();
}

/**
 * Decompiled function f__1A34_0958_0017_B87A()
 *
 * @name f__1A34_0958_0017_B87A
 * @implements 1A34:0958:0017:B87A ()
 *
 * Called From: 1A34:0958:001D:D67E
 */
void f__1A34_0958_0017_B87A()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x096F); f__1A34_1E99_0012_0D98();
	f__1A34_096F_0011_F06D();
}

/**
 * Decompiled function f__1A34_096F_0011_F06D()
 *
 * @name f__1A34_096F_0011_F06D
 * @implements 1A34:096F:0011:F06D ()
 *
 * Called From: 1A34:096F:0017:B87A
 */
void f__1A34_096F_0011_F06D()
{
	emu_addws(&emu_sp, 0xA);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0980); f__1A34_204C_0043_9483();
	f__1A34_0980_0059_D33E();
}

/**
 * Decompiled function f__1A34_0980_0059_D33E()
 *
 * @name f__1A34_0980_0059_D33E
 * @implements 1A34:0980:0059:D33E ()
 *
 * Called From: 1A34:0980:0011:F06D
 */
void f__1A34_0980_0059_D33E()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4D), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x72), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4B), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x49), 0x0);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0xFF);
	if (!emu_flags.zf) { f__1A34_09CE_000B_3211(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0xFF);
	if (emu_flags.zf) { f__1A34_0A04_0078_9945(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x09D9); emu_ip = 0x3312; emu_last_cs = 0x1A34; emu_last_ip = 0x09D6; emu_last_length = 0x0059; emu_last_crc = 0xD33E; emu_call(); // Jump does not resolve
	f__1A34_09D9_00A3_23D3();
}

/**
 * Decompiled function f__1A34_09CE_000B_3211()
 *
 * @name f__1A34_09CE_000B_3211
 * @implements 1A34:09CE:000B:3211 ()
 *
 * Called From: 1A34:09C6:0059:D33E
 */
void f__1A34_09CE_000B_3211()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x09D9); f__1A34_3312_0017_6BC9();
	f__1A34_09D9_00A3_23D3();
}

/**
 * Decompiled function f__1A34_09D9_00A3_23D3()
 *
 * @name f__1A34_09D9_00A3_23D3
 * @implements 1A34:09D9:00A3:23D3 ()
 *
 * Called From: 1A34:09D9:000B:3211
 */
void f__1A34_09D9_00A3_23D3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4D), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x5C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x5A), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x60), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x5E), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x51), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6E), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6C), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x70), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x50), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x3);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x52), 0x7FFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x0);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3902);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A7C); emu_cs = 0x15C2; f__15C2_0395_0044_6B4F();
	f__1A34_0A7C_001A_BF26();
}

/**
 * Decompiled function f__1A34_0A04_0078_9945()
 *
 * @name f__1A34_0A04_0078_9945
 * @implements 1A34:0A04:0078:9945 ()
 *
 * Called From: 1A34:09CC:0059:D33E
 */
void f__1A34_0A04_0078_9945()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x51), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6E), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6C), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x70), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x50), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x3);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x52), 0x7FFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), 0x0);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3902);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0A7C); emu_cs = 0x15C2; f__15C2_0395_0044_6B4F();
	f__1A34_0A7C_001A_BF26();
}

/**
 * Decompiled function f__1A34_0A7C_001A_BF26()
 *
 * @name f__1A34_0A7C_001A_BF26
 * @implements 1A34:0A7C:001A:BF26 ()
 *
 * Called From: 1A34:0A7C:00A3:23D3
 * Called From: 1A34:0A7C:0078:9945
 */
void f__1A34_0A7C_001A_BF26()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x1);
	if (!emu_flags.zf) { f__1A34_0AB1_0026_6DEE(); return; }
	emu_push(emu_cs); emu_push(0x0A96); emu_cs = 0x2BB4; emu_ip = 0x0A9A; emu_last_cs = 0x1A34; emu_last_ip = 0x0A91; emu_last_length = 0x001A; emu_last_crc = 0xBF26; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_0AB1_0026_6DEE()
 *
 * @name f__1A34_0AB1_0026_6DEE
 * @implements 1A34:0AB1:0026:6DEE ()
 *
 * Called From: 1A34:0A8F:001A:BF26
 */
void f__1A34_0AB1_0026_6DEE()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { f__1A34_0AE3_000F_F383(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x0ACC; emu_last_cs = 0x1A34; emu_last_ip = 0x0AC4; emu_last_length = 0x0026; emu_last_crc = 0x6DEE; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0xFF);
	if (emu_flags.zf) { f__1A34_0AE1_0002_0388(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0AD7); emu_ip = 0x0E2E; emu_last_cs = 0x1A34; emu_last_ip = 0x0AD4; emu_last_length = 0x0026; emu_last_crc = 0x6DEE; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_0AE1_0002_0388()
 *
 * @name f__1A34_0AE1_0002_0388
 * @implements 1A34:0AE1:0002:0388 ()
 *
 * Called From: 1A34:0ACA:0026:6DEE
 */
void f__1A34_0AE1_0002_0388()
{
	f__1A34_0AF5_001C_4F64(); return;
}

/**
 * Decompiled function f__1A34_0AE3_000F_F383()
 *
 * @name f__1A34_0AE3_000F_F383
 * @implements 1A34:0AE3:000F:F383 ()
 *
 * Called From: 1A34:0ABE:0026:6DEE
 */
void f__1A34_0AE3_000F_F383()
{
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0AF2); f__1A34_204C_0043_9483();
	f__1A34_0AF2_001F_0F14();
}

/**
 * Decompiled function f__1A34_0AF2_001F_0F14()
 *
 * @name f__1A34_0AF2_001F_0F14
 * @implements 1A34:0AF2:001F:0F14 ()
 *
 * Called From: 1A34:0AF2:000F:F383
 */
void f__1A34_0AF2_001F_0F14()
{
	emu_addws(&emu_sp, 0x6);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0xFF);
	if (!emu_flags.zf) { f__1A34_0B11_0015_1D6C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x0B11; emu_last_cs = 0x1A34; emu_last_ip = 0x0AFF; emu_last_length = 0x001F; emu_last_crc = 0x0F14; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ip = 0x0B6B; emu_last_cs = 0x1A34; emu_last_ip = 0x0B0F; emu_last_length = 0x001F; emu_last_crc = 0x0F14; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_0AF5_001C_4F64()
 *
 * @name f__1A34_0AF5_001C_4F64
 * @implements 1A34:0AF5:001C:4F64 ()
 *
 * Called From: 1A34:0AE1:0002:0388
 */
void f__1A34_0AF5_001C_4F64()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x0B11; emu_last_cs = 0x1A34; emu_last_ip = 0x0AF9; emu_last_length = 0x001C; emu_last_crc = 0x4F64; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x0B11; emu_last_cs = 0x1A34; emu_last_ip = 0x0AFF; emu_last_length = 0x001C; emu_last_crc = 0x4F64; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__1A34_0B6B_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_0B09_0008_8E78()
 *
 * @name f__1A34_0B09_0008_8E78
 * @implements 1A34:0B09:0008:8E78 ()
 *
 * Called From: 1A34:0B69:0002:0290
 */
void f__1A34_0B09_0008_8E78()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__1A34_0B6B_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_0B11_0015_1D6C()
 *
 * @name f__1A34_0B11_0015_1D6C
 * @implements 1A34:0B11:0015:1D6C ()
 *
 * Called From: 1A34:0AF9:001F:0F14
 */
void f__1A34_0B11_0015_1D6C()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0B52; emu_last_cs = 0x1A34; emu_last_ip = 0x0B15; emu_last_length = 0x0015; emu_last_crc = 0x1D6C; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0B26); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_0B26_0015_8052();
}

/**
 * Decompiled function f__1A34_0B26_0015_8052()
 *
 * @name f__1A34_0B26_0015_8052
 * @implements 1A34:0B26:0015:8052 ()
 *
 * Called From: 1A34:0B26:0015:1D6C
 */
void f__1A34_0B26_0015_8052()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1A34_0B3B_0012_964D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x48));
	f__1A34_0B42_000B_3539(); return;
}

/**
 * Decompiled function f__1A34_0B3B_0012_964D()
 *
 * @name f__1A34_0B3B_0012_964D
 * @implements 1A34:0B3B:0012:964D ()
 *
 * Called From: 1A34:0B30:0015:8052
 */
void f__1A34_0B3B_0012_964D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x28));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0B4D); emu_cs = 0x176C; f__176C_000E_000E_8C63();
	f__1A34_0B4D_0005_1F92();
}

/**
 * Decompiled function f__1A34_0B42_000B_3539()
 *
 * @name f__1A34_0B42_000B_3539
 * @implements 1A34:0B42:000B:3539 ()
 *
 * Called From: 1A34:0B39:0015:8052
 */
void f__1A34_0B42_000B_3539()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0B4D); emu_cs = 0x176C; f__176C_000E_000E_8C63();
	f__1A34_0B4D_0005_1F92();
}

/**
 * Decompiled function f__1A34_0B4D_0005_1F92()
 *
 * @name f__1A34_0B4D_0005_1F92
 * @implements 1A34:0B4D:0005:1F92 ()
 *
 * Called From: 1A34:0B4D:0012:964D
 * Called From: 1A34:0B4D:000B:3539
 */
void f__1A34_0B4D_0005_1F92()
{
	emu_addws(&emu_sp, 0x6);
	f__1A34_0B69_0002_0290(); return;
}

/**
 * Decompiled function f__1A34_0B69_0002_0290()
 *
 * @name f__1A34_0B69_0002_0290
 * @implements 1A34:0B69:0002:0290 ()
 *
 * Called From: 1A34:0B50:0005:1F92
 */
void f__1A34_0B69_0002_0290()
{
	f__1A34_0B09_0008_8E78(); return;
}

/**
 * Decompiled function f__1A34_0B6B_0006_137A()
 *
 * @name f__1A34_0B6B_0006_137A
 * @implements 1A34:0B6B:0006:137A ()
 *
 * Called From: 1A34:0B0F:0008:8E78
 * Called From: 1A34:0B0F:001C:4F64
 */
void f__1A34_0B6B_0006_137A()
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
 * Decompiled function f__1A34_0B71_0033_CB84()
 *
 * @name f__1A34_0B71_0033_CB84
 * @implements 1A34:0B71:0033:CB84 ()
 *
 * Called From: 06F7:00D2:0026:2A43
 */
void f__1A34_0B71_0033_CB84()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_0BA4_000E_CF20(); return; }
	emu_ip = 0x0E23; emu_last_cs = 0x1A34; emu_last_ip = 0x0BA1; emu_last_length = 0x0033; emu_last_crc = 0xCB84; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_0BA4_000E_CF20()
 *
 * @name f__1A34_0BA4_000E_CF20
 * @implements 1A34:0BA4:000E:CF20 ()
 *
 * Called From: 1A34:0B9F:0033:CB84
 */
void f__1A34_0BA4_000E_CF20()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (!emu_flags.zf) { f__1A34_0BB2_0018_A52D(); return; }
	emu_ip = 0x0E23; emu_last_cs = 0x1A34; emu_last_ip = 0x0BAF; emu_last_length = 0x000E; emu_last_crc = 0xCF20; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_0BB2_0018_A52D()
 *
 * @name f__1A34_0BB2_0018_A52D
 * @implements 1A34:0BB2:0018:A52D ()
 *
 * Called From: 1A34:0BAD:000E:CF20
 */
void f__1A34_0BB2_0018_A52D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x8000);
	if (!emu_flags.zf) { f__1A34_0BCA_0021_BBBF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (emu_flags.zf) { emu_ip = 0x0BCA; emu_last_cs = 0x1A34; emu_last_ip = 0x0BC5; emu_last_length = 0x0018; emu_last_crc = 0xA52D; emu_call(); return; } // Jump does not resolve
	f__1A34_0E23_0005_0EBC(); return;
}

/**
 * Decompiled function f__1A34_0BCA_0021_BBBF()
 *
 * @name f__1A34_0BCA_0021_BBBF
 * @implements 1A34:0BCA:0021:BBBF ()
 *
 * Called From: 1A34:0BBB:0018:A52D
 */
void f__1A34_0BCA_0021_BBBF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0BD9; emu_last_cs = 0x1A34; emu_last_ip = 0x0BD2; emu_last_length = 0x0021; emu_last_crc = 0xBBBF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_0BEB_0017_50C1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_di);
	f__1A34_0BF4_000E_20D9(); return;
}

/**
 * Decompiled function f__1A34_0BEB_0017_50C1()
 *
 * @name f__1A34_0BEB_0017_50C1
 * @implements 1A34:0BEB:0017:50C1 ()
 *
 * Called From: 1A34:0BE0:0021:BBBF
 */
void f__1A34_0BEB_0017_50C1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C02); f__1A34_193F_0013_AF17();
	f__1A34_0C02_0010_3DDC();
}

/**
 * Decompiled function f__1A34_0BF4_000E_20D9()
 *
 * @name f__1A34_0BF4_000E_20D9
 * @implements 1A34:0BF4:000E:20D9 ()
 *
 * Called From: 1A34:0BE9:0021:BBBF
 */
void f__1A34_0BF4_000E_20D9()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C02); f__1A34_193F_0013_AF17();
	f__1A34_0C02_0010_3DDC();
}

/**
 * Decompiled function f__1A34_0C02_0010_3DDC()
 *
 * @name f__1A34_0C02_0010_3DDC
 * @implements 1A34:0C02:0010:3DDC ()
 *
 * Called From: 1A34:0C02:000E:20D9
 * Called From: 1A34:0C02:0017:50C1
 */
void f__1A34_0C02_0010_3DDC()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x0);
	if (emu_flags.zf) { f__1A34_0C12_000B_E188(); return; }
	f__1A34_0CC8_0020_8DC8(); return;
}

/**
 * Decompiled function f__1A34_0C12_000B_E188()
 *
 * @name f__1A34_0C12_000B_E188
 * @implements 1A34:0C12:000B:E188 ()
 *
 * Called From: 1A34:0C0D:0010:3DDC
 */
void f__1A34_0C12_000B_E188()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C1D); f__1A34_379B_0015_FA94();
	f__1A34_0C1D_0029_F26F();
}

/**
 * Decompiled function f__1A34_0C1D_0029_F26F()
 *
 * @name f__1A34_0C1D_0029_F26F
 * @implements 1A34:0C1D:0029:F26F ()
 *
 * Called From: 1A34:0C1D:000B:E188
 */
void f__1A34_0C1D_0029_F26F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { f__1A34_0C50_0013_1CAB(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x58));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movb(&emu_cx.l, 0x5);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0C46); emu_cs = 0x0F3F; emu_ip = 0x0CCC; emu_last_cs = 0x1A34; emu_last_ip = 0x0C41; emu_last_length = 0x0029; emu_last_crc = 0xF26F; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_0C50_0013_1CAB()
 *
 * @name f__1A34_0C50_0013_1CAB
 * @implements 1A34:0C50:0013:1CAB ()
 *
 * Called From: 1A34:0C27:0029:F26F
 */
void f__1A34_0C50_0013_1CAB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_0C66_001C_DB0D(); return; }
	emu_movw(&emu_ax.x, 0x14);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0C63); emu_cs = 0x3483; emu_ip = 0x0C8D; emu_last_cs = 0x1A34; emu_last_ip = 0x0C5E; emu_last_length = 0x0013; emu_last_crc = 0x1CAB; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_0C66_001C_DB0D()
 *
 * @name f__1A34_0C66_001C_DB0D
 * @implements 1A34:0C66:001C:DB0D ()
 *
 * Called From: 1A34:0C58:0013:1CAB
 */
void f__1A34_0C66_001C_DB0D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x200);
	if (!emu_flags.zf) { emu_ip = 0x0CAD; emu_last_cs = 0x1A34; emu_last_ip = 0x0C6F; emu_last_length = 0x001C; emu_last_crc = 0xDB0D; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0CAD; emu_last_cs = 0x1A34; emu_last_ip = 0x0C75; emu_last_length = 0x001C; emu_last_crc = 0xDB0D; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C82); f__1A34_3623_0010_3F68();
	f__1A34_0C82_001A_2081();
}

/**
 * Decompiled function f__1A34_0C82_001A_2081()
 *
 * @name f__1A34_0C82_001A_2081
 * @implements 1A34:0C82:001A:2081 ()
 *
 * Called From: 1A34:0C82:001C:DB0D
 */
void f__1A34_0C82_001A_2081()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1A34_0C91_000B_E268(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x38B2), 0x3);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_0CA3_0009_7A85(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C9C); emu_ip = 0x3623; emu_last_cs = 0x1A34; emu_last_ip = 0x0C99; emu_last_length = 0x001A; emu_last_crc = 0x2081; emu_call(); // Jump does not resolve
	f__1A34_0C9C_0007_392A();
}

/**
 * Decompiled function f__1A34_0C91_000B_E268()
 *
 * @name f__1A34_0C91_000B_E268
 * @implements 1A34:0C91:000B:E268 ()
 *
 * Called From: 1A34:0C88:001A:2081
 */
void f__1A34_0C91_000B_E268()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C9C); f__1A34_3623_0010_3F68();
	f__1A34_0C9C_0007_392A();
}

/**
 * Decompiled function f__1A34_0C9C_0007_392A()
 *
 * @name f__1A34_0C9C_0007_392A
 * @implements 1A34:0C9C:0007:392A ()
 *
 * Called From: 1A34:0C9C:000B:E268
 */
void f__1A34_0C9C_0007_392A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0xE);
	f__1A34_0CA6_0006_0784(); return;
}

/**
 * Decompiled function f__1A34_0CA3_0009_7A85()
 *
 * @name f__1A34_0CA3_0009_7A85
 * @implements 1A34:0CA3:0009:7A85 ()
 *
 * Called From: 1A34:0C8F:001A:2081
 */
void f__1A34_0CA3_0009_7A85()
{
	emu_movw(&emu_ax.x, 0xD);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CAC); emu_cs = 0x3483; ovl__3483(2);
	f__1A34_0CAC_0010_67BA();
}

/**
 * Decompiled function f__1A34_0CA6_0006_0784()
 *
 * @name f__1A34_0CA6_0006_0784
 * @implements 1A34:0CA6:0006:0784 ()
 *
 * Called From: 1A34:0CA1:0007:392A
 */
void f__1A34_0CA6_0006_0784()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0CAC); emu_cs = 0x3483; ovl__3483(2);
	f__1A34_0CAC_0010_67BA();
}

/**
 * Decompiled function f__1A34_0CAC_0010_67BA()
 *
 * @name f__1A34_0CAC_0010_67BA
 * @implements 1A34:0CAC:0010:67BA ()
 *
 * Called From: 1A34:0CAC:0009:7A85
 * Called From: 1A34:0CAC:0006:0784
 */
void f__1A34_0CAC_0010_67BA()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0CBC); emu_cs = 0x176C; f__176C_000E_000E_8C63();
	f__1A34_0CBC_0009_E9E7();
}

/**
 * Decompiled function f__1A34_0CBC_0009_E9E7()
 *
 * @name f__1A34_0CBC_0009_E9E7
 * @implements 1A34:0CBC:0009:E9E7 ()
 *
 * Called From: 1A34:0CBC:0010:67BA
 */
void f__1A34_0CBC_0009_E9E7()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__1A34_0E28_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_0CC2_0003_06C6()
 *
 * @name f__1A34_0CC2_0003_06C6
 * @implements 1A34:0CC2:0003:06C6 ()
 *
 * Called From: 1A34:0E25:0005:0EBC
 */
void f__1A34_0CC2_0003_06C6()
{
	f__1A34_0E28_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_0CC8_0020_8DC8()
 *
 * @name f__1A34_0CC8_0020_8DC8
 * @implements 1A34:0CC8:0020:8DC8 ()
 *
 * Called From: 1A34:0C0F:0010:3DDC
 */
void f__1A34_0CC8_0020_8DC8()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { f__1A34_0CF4_000B_E0E4(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_cmpws(&emu_di, 0x19);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0CE8; emu_last_cs = 0x1A34; emu_last_ip = 0x0CE2; emu_last_length = 0x0020; emu_last_crc = 0x8DC8; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0CEB; emu_last_cs = 0x1A34; emu_last_ip = 0x0CE6; emu_last_length = 0x0020; emu_last_crc = 0x8DC8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_0CF4_000B_E0E4()
 *
 * @name f__1A34_0CF4_000B_E0E4
 * @implements 1A34:0CF4:000B:E0E4 ()
 *
 * Called From: 1A34:0CCC:0020:8DC8
 */
void f__1A34_0CF4_000B_E0E4()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0CFF); f__1A34_3623_0010_3F68();
	f__1A34_0CFF_002A_12FF();
}

/**
 * Decompiled function f__1A34_0CFF_002A_12FF()
 *
 * @name f__1A34_0CFF_002A_12FF
 * @implements 1A34:0CFF:002A:12FF ()
 *
 * Called From: 1A34:0CFF:000B:E0E4
 */
void f__1A34_0CFF_002A_12FF()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1A34_0D2C_0017_6122(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x8);
	if (!emu_flags.zf) { f__1A34_0D2C_0017_6122(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (emu_flags.zf) { emu_ip = 0x0D2C; emu_last_cs = 0x1A34; emu_last_ip = 0x0D19; emu_last_length = 0x002A; emu_last_crc = 0x12FF; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0D29); emu_cs = 0x176C; emu_ip = 0x0D37; emu_last_cs = 0x1A34; emu_last_ip = 0x0D24; emu_last_length = 0x002A; emu_last_crc = 0x12FF; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_0D2C_0017_6122()
 *
 * @name f__1A34_0D2C_0017_6122
 * @implements 1A34:0D2C:0017:6122 ()
 *
 * Called From: 1A34:0D05:002A:12FF
 * Called From: 1A34:0D0F:002A:12FF
 */
void f__1A34_0D2C_0017_6122()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x10));
	emu_sarw(&emu_ax.x, 0x1);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_0D43_0019_AC1E(); return; }
	f__1A34_0E23_0005_0EBC(); return;
}

/**
 * Decompiled function f__1A34_0D43_0019_AC1E()
 *
 * @name f__1A34_0D43_0019_AC1E
 * @implements 1A34:0D43:0019:AC1E ()
 *
 * Called From: 1A34:0D3E:0017:6122
 */
void f__1A34_0D43_0019_AC1E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (!emu_flags.zf) { f__1A34_0D5F_0059_921A(); return; }
	emu_movw(&emu_ax.x, 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0D5C); emu_cs = 0x176C; emu_ip = 0x0D6A; emu_last_cs = 0x1A34; emu_last_ip = 0x0D57; emu_last_length = 0x0019; emu_last_crc = 0xAC1E; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_0D5F_0059_921A()
 *
 * @name f__1A34_0D5F_0059_921A
 * @implements 1A34:0D5F:0059:921A ()
 *
 * Called From: 1A34:0D4B:0019:AC1E
 */
void f__1A34_0D5F_0059_921A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x3);
	if (emu_flags.zf) { emu_ip = 0x0D73; emu_last_cs = 0x1A34; emu_last_ip = 0x0D67; emu_last_length = 0x0059; emu_last_crc = 0x921A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x2);
	if (!emu_flags.zf) { f__1A34_0DEC_003C_8A12(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_addb(&emu_ax.l, 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0DB8); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_0DB8_0008_F106();
}

/**
 * Decompiled function f__1A34_0DB8_0008_F106()
 *
 * @name f__1A34_0DB8_0008_F106
 * @implements 1A34:0DB8:0008:F106 ()
 *
 * Called From: 1A34:0DB8:0059:921A
 */
void f__1A34_0DB8_0008_F106()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_cs); emu_push(0x0DC0); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__1A34_0DC0_0029_BAE4();
}

/**
 * Decompiled function f__1A34_0DC0_0029_BAE4()
 *
 * @name f__1A34_0DC0_0029_BAE4
 * @implements 1A34:0DC0:0029:BAE4 ()
 *
 * Called From: 1A34:0DC0:0008:F106
 */
void f__1A34_0DC0_0029_BAE4()
{
	emu_andw(&emu_ax.x, 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x37FC));
	if (!emu_flags.cf) { f__1A34_0DEC_003C_8A12(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0DE9); emu_cs = 0x176C; f__176C_000E_000E_8C63();
	f__1A34_0DE9_003F_CA62();
}

/**
 * Decompiled function f__1A34_0DE9_003F_CA62()
 *
 * @name f__1A34_0DE9_003F_CA62
 * @implements 1A34:0DE9:003F:CA62 ()
 *
 * Called From: 1A34:0DE9:0029:BAE4
 */
void f__1A34_0DE9_003F_CA62()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x2);
	if (emu_flags.zf) { emu_ip = 0x0E0A; emu_last_cs = 0x1A34; emu_last_ip = 0x0DF4; emu_last_length = 0x003F; emu_last_crc = 0xCA62; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x1);
	if (emu_flags.zf) { emu_ip = 0x0E0A; emu_last_cs = 0x1A34; emu_last_ip = 0x0DFE; emu_last_length = 0x003F; emu_last_crc = 0xCA62; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x3);
	if (!emu_flags.zf) { f__1A34_0E23_0005_0EBC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x70), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0CC2; emu_last_cs = 0x1A34; emu_last_ip = 0x0E25; emu_last_length = 0x003F; emu_last_crc = 0xCA62; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_0DEC_003C_8A12()
 *
 * @name f__1A34_0DEC_003C_8A12
 * @implements 1A34:0DEC:003C:8A12 ()
 *
 * Called From: 1A34:0D71:0059:921A
 * Called From: 1A34:0DD8:0029:BAE4
 */
void f__1A34_0DEC_003C_8A12()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x2);
	if (emu_flags.zf) { emu_ip = 0x0E0A; emu_last_cs = 0x1A34; emu_last_ip = 0x0DF4; emu_last_length = 0x003C; emu_last_crc = 0x8A12; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x1);
	if (emu_flags.zf) { emu_ip = 0x0E0A; emu_last_cs = 0x1A34; emu_last_ip = 0x0DFE; emu_last_length = 0x003C; emu_last_crc = 0x8A12; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x3);
	if (!emu_flags.zf) { f__1A34_0E23_0005_0EBC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x70), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0CC2; emu_last_cs = 0x1A34; emu_last_ip = 0x0E25; emu_last_length = 0x003C; emu_last_crc = 0x8A12; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_0E23_0005_0EBC()
 *
 * @name f__1A34_0E23_0005_0EBC
 * @implements 1A34:0E23:0005:0EBC ()
 *
 * Called From: 1A34:0BC7:0018:A52D
 * Called From: 1A34:0D40:0017:6122
 * Called From: 1A34:0E08:003F:CA62
 * Called From: 1A34:0E08:003C:8A12
 */
void f__1A34_0E23_0005_0EBC()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1A34_0CC2_0003_06C6(); return;
}

/**
 * Decompiled function f__1A34_0E28_0006_137A()
 *
 * @name f__1A34_0E28_0006_137A
 * @implements 1A34:0E28:0006:137A ()
 *
 * Called From: 1A34:0CC2:0003:06C6
 * Called From: 1A34:0CC2:0009:E9E7
 */
void f__1A34_0E28_0006_137A()
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
 * Decompiled function f__1A34_0E2E_0015_69C6()
 *
 * @name f__1A34_0E2E_0015_69C6
 * @implements 1A34:0E2E:0015:69C6 ()
 *
 * Called From: 1A34:29CA:0013:FA2B
 */
void f__1A34_0E2E_0015_69C6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_0E43_0028_F857(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0F43; emu_last_cs = 0x1A34; emu_last_ip = 0x0E40; emu_last_length = 0x0015; emu_last_crc = 0x69C6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_0E40_0003_074A()
 *
 * @name f__1A34_0E40_0003_074A
 * @implements 1A34:0E40:0003:074A ()
 *
 * Called From: 1A34:0F40:0005:0F20
 */
void f__1A34_0E40_0003_074A()
{
	f__1A34_0F43_0005_04BA(); return;
}

/**
 * Decompiled function f__1A34_0E43_0028_F857()
 *
 * @name f__1A34_0E43_0028_F857
 * @implements 1A34:0E43:0028:F857 ()
 *
 * Called From: 1A34:0E3B:0015:69C6
 */
void f__1A34_0E43_0028_F857()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x0E6B); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__1A34_0E6B_000A_268D();
}

/**
 * Decompiled function f__1A34_0E6B_000A_268D()
 *
 * @name f__1A34_0E6B_000A_268D
 * @implements 1A34:0E6B:000A:268D ()
 *
 * Called From: 1A34:0E6B:0028:F857
 */
void f__1A34_0E6B_000A_268D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0E75); emu_cs = 0x34CD; ovl__34CD(13);
	f__1A34_0E75_002C_A767();
}

/**
 * Decompiled function f__1A34_0E75_002C_A767()
 *
 * @name f__1A34_0E75_002C_A767
 * @implements 1A34:0E75:002C:A767 ()
 *
 * Called From: 1A34:0E75:000A:268D
 */
void f__1A34_0E75_002C_A767()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_pop(&emu_ax.x);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3C));
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpb(&emu_get_memory8(emu_ds, emu_bx.x,  0x3A42), 0x0);
	if (!emu_flags.zf) { f__1A34_0EA1_0018_4397(); return; }
	emu_ip = 0x0E3D; emu_last_cs = 0x1A34; emu_last_ip = 0x0E9F; emu_last_length = 0x002C; emu_last_crc = 0xA767; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_0EA1_0018_4397()
 *
 * @name f__1A34_0EA1_0018_4397
 * @implements 1A34:0EA1:0018:4397 ()
 *
 * Called From: 1A34:0E9D:002C:A767
 */
void f__1A34_0EA1_0018_4397()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (emu_flags.zf) { emu_ip = 0x0EB5; emu_last_cs = 0x1A34; emu_last_ip = 0x0EA9; emu_last_length = 0x0018; emu_last_crc = 0x4397; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (!emu_flags.zf) { f__1A34_0EB9_0006_0FBC(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0E40; emu_last_cs = 0x1A34; emu_last_ip = 0x0EB7; emu_last_length = 0x0018; emu_last_crc = 0x4397; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_0EB9_0006_0FBC()
 *
 * @name f__1A34_0EB9_0006_0FBC
 * @implements 1A34:0EB9:0006:0FBC ()
 *
 * Called From: 1A34:0EB3:0018:4397
 */
void f__1A34_0EB9_0006_0FBC()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0EBF); emu_cs = 0x34CD; ovl__34CD(26);
	f__1A34_0EBF_002A_BFE7();
}

/**
 * Decompiled function f__1A34_0EBF_002A_BFE7()
 *
 * @name f__1A34_0EBF_002A_BFE7
 * @implements 1A34:0EBF:002A:BFE7 ()
 *
 * Called From: 1A34:0EBF:0006:0FBC
 */
void f__1A34_0EBF_002A_BFE7()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_0F2E_0006_0EFC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { emu_ip = 0x0EDE; emu_last_cs = 0x1A34; emu_last_ip = 0x0ED7; emu_last_length = 0x002A; emu_last_crc = 0xBFE7; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_flags.zf) { emu_ip = 0x0F2E; emu_last_cs = 0x1A34; emu_last_ip = 0x0EDC; emu_last_length = 0x002A; emu_last_crc = 0xBFE7; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0EE9); emu_ip = 0x3623; emu_last_cs = 0x1A34; emu_last_ip = 0x0EE6; emu_last_length = 0x002A; emu_last_crc = 0xBFE7; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_0F2E_0006_0EFC()
 *
 * @name f__1A34_0F2E_0006_0EFC
 * @implements 1A34:0F2E:0006:0EFC ()
 *
 * Called From: 1A34:0ECC:002A:BFE7
 */
void f__1A34_0F2E_0006_0EFC()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0F34); emu_cs = 0x34CD; ovl__34CD(30);
	f__1A34_0F34_000A_9FF9();
}

/**
 * Decompiled function f__1A34_0F34_000A_9FF9()
 *
 * @name f__1A34_0F34_000A_9FF9
 * @implements 1A34:0F34:000A:9FF9 ()
 *
 * Called From: 1A34:0F34:0006:0EFC
 */
void f__1A34_0F34_000A_9FF9()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__1A34_0F3E_0005_0F20(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0F40; emu_last_cs = 0x1A34; emu_last_ip = 0x0F3C; emu_last_length = 0x000A; emu_last_crc = 0x9FF9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_0F3E_0005_0F20()
 *
 * @name f__1A34_0F3E_0005_0F20
 * @implements 1A34:0F3E:0005:0F20 ()
 *
 * Called From: 1A34:0F37:000A:9FF9
 */
void f__1A34_0F3E_0005_0F20()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1A34_0E40_0003_074A(); return;
}

/**
 * Decompiled function f__1A34_0F43_0005_04BA()
 *
 * @name f__1A34_0F43_0005_04BA
 * @implements 1A34:0F43:0005:04BA ()
 *
 * Called From: 1A34:0E40:0003:074A
 */
void f__1A34_0F43_0005_04BA()
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
 * Decompiled function f__1A34_0F48_0018_F029()
 *
 * @name f__1A34_0F48_0018_F029
 * @implements 1A34:0F48:0018:F029 ()
 *
 * Called From: 0F78:0403:0025:51C5
 * Called From: 0F78:041B:0014:DD60
 * Called From: 1A34:2CC9:001C:120C
 * Called From: B4E9:0299:000B:07DE
 */
void f__1A34_0F48_0018_F029()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (!emu_flags.zf) { f__1A34_0F60_006D_4259(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	if (!emu_flags.zf) { f__1A34_0F60_006D_4259(); return; }
	f__1A34_10EA_0002_00E2(); return;
}

/**
 * Decompiled function f__1A34_0F60_006D_4259()
 *
 * @name f__1A34_0F60_006D_4259
 * @implements 1A34:0F60:006D:4259 ()
 *
 * Called From: 1A34:0F55:0018:F029
 * Called From: 1A34:0F5B:0018:F029
 */
void f__1A34_0F60_006D_4259()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__1A34_0F84_0049_3DA3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (!emu_flags.zf) { f__1A34_0F84_0049_3DA3(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0F84; emu_last_cs = 0x1A34; emu_last_ip = 0x0F78; emu_last_length = 0x006D; emu_last_crc = 0x4259; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x0FB3; emu_last_cs = 0x1A34; emu_last_ip = 0x0F8A; emu_last_length = 0x006D; emu_last_crc = 0x4259; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ds, 0x00,  0x3A38));
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x0FB3; emu_last_cs = 0x1A34; emu_last_ip = 0x0FA0; emu_last_length = 0x006D; emu_last_crc = 0x4259; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0FB3; emu_last_cs = 0x1A34; emu_last_ip = 0x0FA7; emu_last_length = 0x006D; emu_last_crc = 0x4259; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { emu_ip = 0x0FD0; emu_last_cs = 0x1A34; emu_last_ip = 0x0FBA; emu_last_length = 0x006D; emu_last_crc = 0x4259; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0FCD); emu_cs = 0x34CD; emu_ip = 0x105B; emu_last_cs = 0x1A34; emu_last_ip = 0x0FC8; emu_last_length = 0x006D; emu_last_crc = 0x4259; emu_call(); // Jump does not resolve
	f__1A34_0FCD_000E_4C01();
}

/**
 * Decompiled function f__1A34_0F84_0049_3DA3()
 *
 * @name f__1A34_0F84_0049_3DA3
 * @implements 1A34:0F84:0049:3DA3 ()
 *
 * Called From: 1A34:0F66:006D:4259
 * Called From: 1A34:0F71:006D:4259
 */
void f__1A34_0F84_0049_3DA3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__1A34_0FB3_001A_68F3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ds, 0x00,  0x3A38));
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__1A34_0FB3_001A_68F3(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x379C), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x0FB3; emu_last_cs = 0x1A34; emu_last_ip = 0x0FA7; emu_last_length = 0x0049; emu_last_crc = 0x3DA3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { emu_ip = 0x0FD0; emu_last_cs = 0x1A34; emu_last_ip = 0x0FBA; emu_last_length = 0x0049; emu_last_crc = 0x3DA3; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0FCD); emu_cs = 0x34CD; emu_ip = 0x105B; emu_last_cs = 0x1A34; emu_last_ip = 0x0FC8; emu_last_length = 0x0049; emu_last_crc = 0x3DA3; emu_call(); // Jump does not resolve
	f__1A34_0FCD_000E_4C01();
}

/**
 * Decompiled function f__1A34_0FB3_001A_68F3()
 *
 * @name f__1A34_0FB3_001A_68F3
 * @implements 1A34:0FB3:001A:68F3 ()
 *
 * Called From: 1A34:0F8A:0049:3DA3
 * Called From: 1A34:0FA0:0049:3DA3
 */
void f__1A34_0FB3_001A_68F3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__1A34_0FD0_000B_6C39(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x0FCD); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_0FCD_000E_4C01();
}

/**
 * Decompiled function f__1A34_0FCD_000E_4C01()
 *
 * @name f__1A34_0FCD_000E_4C01
 * @implements 1A34:0FCD:000E:4C01 ()
 *
 * Called From: 1A34:0FCD:001A:68F3
 */
void f__1A34_0FCD_000E_4C01()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_0FDB_000B_E09E(); return; }
	f__1A34_10D4_0015_8A45(); return;
}

/**
 * Decompiled function f__1A34_0FD0_000B_6C39()
 *
 * @name f__1A34_0FD0_000B_6C39
 * @implements 1A34:0FD0:000B:6C39 ()
 *
 * Called From: 1A34:0FBA:001A:68F3
 */
void f__1A34_0FD0_000B_6C39()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_0FDB_000B_E09E(); return; }
	emu_ip = 0x10D4; emu_last_cs = 0x1A34; emu_last_ip = 0x0FD8; emu_last_length = 0x000B; emu_last_crc = 0x6C39; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_0FDB_000B_E09E()
 *
 * @name f__1A34_0FDB_000B_E09E
 * @implements 1A34:0FDB:000B:E09E ()
 *
 * Called From: 1A34:0FD6:000B:6C39
 * Called From: 1A34:0FD6:000E:4C01
 */
void f__1A34_0FDB_000B_E09E()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0FE6); f__1A34_3623_0010_3F68();
	f__1A34_0FE6_0029_6204();
}

/**
 * Decompiled function f__1A34_0FE6_0029_6204()
 *
 * @name f__1A34_0FE6_0029_6204
 * @implements 1A34:0FE6:0029:6204 ()
 *
 * Called From: 1A34:0FE6:000B:E09E
 */
void f__1A34_0FE6_0029_6204()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__1A34_1052_0025_74BC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x0);
	if (!emu_flags.zf) { f__1A34_100F_0009_65B5(); return; }
	emu_movw(&emu_ax.x, 0x12);
	f__1A34_1012_0006_06B4(); return;
}

/**
 * Decompiled function f__1A34_100F_0009_65B5()
 *
 * @name f__1A34_100F_0009_65B5
 * @implements 1A34:100F:0009:65B5 ()
 *
 * Called From: 1A34:1008:0029:6204
 */
void f__1A34_100F_0009_65B5()
{
	emu_movw(&emu_ax.x, 0x13);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1018); emu_cs = 0x3483; ovl__3483(5);
	f__1A34_1018_0038_10D5();
}

/**
 * Decompiled function f__1A34_1012_0006_06B4()
 *
 * @name f__1A34_1012_0006_06B4
 * @implements 1A34:1012:0006:06B4 ()
 *
 * Called From: 1A34:100D:0029:6204
 */
void f__1A34_1012_0006_06B4()
{
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1018); emu_cs = 0x3483; ovl__3483(5);
	f__1A34_1018_0038_10D5();
}

/**
 * Decompiled function f__1A34_1018_0038_10D5()
 *
 * @name f__1A34_1018_0038_10D5
 * @implements 1A34:1018:0038:10D5 ()
 *
 * Called From: 1A34:1018:0009:65B5
 * Called From: 1A34:1018:0006:06B4
 */
void f__1A34_1018_0038_10D5()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2B));
	emu_push(emu_cs); emu_push(0x1050); emu_cs = 0x10E4; f__10E4_0117_0015_0AFA();
	f__1A34_1050_0027_4E7C();
}

/**
 * Decompiled function f__1A34_1050_0027_4E7C()
 *
 * @name f__1A34_1050_0027_4E7C
 * @implements 1A34:1050:0027:4E7C ()
 *
 * Called From: 1A34:1050:0038:10D5
 */
void f__1A34_1050_0027_4E7C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__1A34_1091_000B_E038(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { emu_ip = 0x106C; emu_last_cs = 0x1A34; emu_last_ip = 0x1065; emu_last_length = 0x0027; emu_last_crc = 0x4E7C; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_flags.zf) { emu_ip = 0x1079; emu_last_cs = 0x1A34; emu_last_ip = 0x106A; emu_last_length = 0x0027; emu_last_crc = 0x4E7C; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1077); f__1A34_27A8_0012_8D6B();
	f__1A34_1077_0018_569E();
}

/**
 * Decompiled function f__1A34_1052_0025_74BC()
 *
 * @name f__1A34_1052_0025_74BC
 * @implements 1A34:1052:0025:74BC ()
 *
 * Called From: 1A34:0FEC:0029:6204
 */
void f__1A34_1052_0025_74BC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (emu_flags.zf) { f__1A34_1091_000B_E038(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { emu_ip = 0x106C; emu_last_cs = 0x1A34; emu_last_ip = 0x1065; emu_last_length = 0x0025; emu_last_crc = 0x74BC; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_flags.zf) { emu_ip = 0x1079; emu_last_cs = 0x1A34; emu_last_ip = 0x106A; emu_last_length = 0x0025; emu_last_crc = 0x74BC; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1077); f__1A34_27A8_0012_8D6B();
	f__1A34_1077_0018_569E();
}

/**
 * Decompiled function f__1A34_1077_0018_569E()
 *
 * @name f__1A34_1077_0018_569E
 * @implements 1A34:1077:0018:569E ()
 *
 * Called From: 1A34:1077:0027:4E7C
 * Called From: 1A34:1077:0025:74BC
 */
void f__1A34_1077_0018_569E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0A), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x108F); emu_cs = 0x10E4; f__10E4_0F1A_0088_3BE7();
	f__1A34_108F_0002_03EA();
}

/**
 * Decompiled function f__1A34_108F_0002_03EA()
 *
 * @name f__1A34_108F_0002_03EA
 * @implements 1A34:108F:0002:03EA ()
 *
 * Called From: 1A34:108F:0018:569E
 */
void f__1A34_108F_0002_03EA()
{
	f__1A34_10B4_0012_C645(); return;
}

/**
 * Decompiled function f__1A34_1091_000B_E038()
 *
 * @name f__1A34_1091_000B_E038
 * @implements 1A34:1091:000B:E038 ()
 *
 * Called From: 1A34:1059:0027:4E7C
 * Called From: 1A34:1059:0025:74BC
 */
void f__1A34_1091_000B_E038()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x109C); f__1A34_27A8_0012_8D6B();
	f__1A34_109C_0018_579A();
}

/**
 * Decompiled function f__1A34_109C_0018_579A()
 *
 * @name f__1A34_109C_0018_579A
 * @implements 1A34:109C:0018:579A ()
 *
 * Called From: 1A34:109C:000B:E038
 */
void f__1A34_109C_0018_579A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0C), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0A), emu_dx.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x10B4); emu_cs = 0x34E9; ovl__34E9(2);
	f__1A34_10B4_0012_C645();
}

/**
 * Decompiled function f__1A34_10B4_0012_C645()
 *
 * @name f__1A34_10B4_0012_C645
 * @implements 1A34:10B4:0012:C645 ()
 *
 * Called From: 1A34:108F:0002:03EA
 * Called From: 1A34:10B4:0018:579A
 */
void f__1A34_10B4_0012_C645()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x10C6); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_10C6_000C_F579();
}

/**
 * Decompiled function f__1A34_10C6_000C_F579()
 *
 * @name f__1A34_10C6_000C_F579
 * @implements 1A34:10C6:000C:F579 ()
 *
 * Called From: 1A34:10C6:0012:C645
 */
void f__1A34_10C6_000C_F579()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x10D2); emu_cs = 0x0F78; f__0F78_01B4_0016_AE41();
	f__1A34_10D2_0002_0386();
}

/**
 * Decompiled function f__1A34_10D2_0002_0386()
 *
 * @name f__1A34_10D2_0002_0386
 * @implements 1A34:10D2:0002:0386 ()
 *
 * Called From: 1A34:10D2:000C:F579
 */
void f__1A34_10D2_0002_0386()
{
	f__1A34_10E9_0003_022A(); return;
}

/**
 * Decompiled function f__1A34_10D4_0015_8A45()
 *
 * @name f__1A34_10D4_0015_8A45
 * @implements 1A34:10D4:0015:8A45 ()
 *
 * Called From: 1A34:0FD8:000E:4C01
 */
void f__1A34_10D4_0015_8A45()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0C), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x3A0A), 0x0);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x10E9); emu_cs = 0x34E9; ovl__34E9(2);
	f__1A34_10E9_0003_022A();
}

/**
 * Decompiled function f__1A34_10E9_0003_022A()
 *
 * @name f__1A34_10E9_0003_022A
 * @implements 1A34:10E9:0003:022A ()
 *
 * Called From: 1A34:10D2:0002:0386
 * Called From: 1A34:10E9:0015:8A45
 */
void f__1A34_10E9_0003_022A()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_10EA_0002_00E2()
 *
 * @name f__1A34_10EA_0002_00E2
 * @implements 1A34:10EA:0002:00E2 ()
 *
 * Called From: 1A34:0F5D:0018:F029
 */
void f__1A34_10EA_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_10EC_000E_8DDF()
 *
 * @name f__1A34_10EC_000E_8DDF
 * @implements 1A34:10EC:000E:8DDF ()
 *
 * Called From: 0C3A:06E3:0008:79E4
 * Called From: 176C:12DA:0011:2139
 * Called From: 1A34:00EE:000B:E3D4
 * Called From: 1A34:0665:000E:021A
 */
void f__1A34_10EC_000E_8DDF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_10FA_0013_0648(); return; }
	f__1A34_117C_0002_00E2(); return;
}

/**
 * Decompiled function f__1A34_10FA_0013_0648()
 *
 * @name f__1A34_10FA_0013_0648
 * @implements 1A34:10FA:0013:0648 ()
 *
 * Called From: 1A34:10F5:000E:8DDF
 */
void f__1A34_10FA_0013_0648()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x110D); f__1A34_364E_0012_CFD4();
	f__1A34_110D_001E_73AD();
}

/**
 * Decompiled function f__1A34_110D_001E_73AD()
 *
 * @name f__1A34_110D_001E_73AD
 * @implements 1A34:110D:001E:73AD ()
 *
 * Called From: 1A34:110D:0013:0648
 */
void f__1A34_110D_001E_73AD()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (!emu_flags.zf) { f__1A34_112D_0016_CAED(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	if (!emu_flags.zf) { f__1A34_112D_0016_CAED(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs);
	emu_push(0x112B); emu_ip = 0x0F48; emu_last_cs = 0x1A34; emu_last_ip = 0x1128; emu_last_length = 0x001E; emu_last_crc = 0x73AD; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_112D_0016_CAED()
 *
 * @name f__1A34_112D_0016_CAED
 * @implements 1A34:112D:0016:CAED ()
 *
 * Called From: 1A34:1119:001E:73AD
 * Called From: 1A34:111F:001E:73AD
 */
void f__1A34_112D_0016_CAED()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x40);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1143); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_1143_0012_C901();
}

/**
 * Decompiled function f__1A34_1143_0012_C901()
 *
 * @name f__1A34_1143_0012_C901
 * @implements 1A34:1143:0012:C901 ()
 *
 * Called From: 1A34:1143:0016:CAED
 */
void f__1A34_1143_0012_C901()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1155); emu_cs = 0x1423; f__1423_0BCC_0012_0D48();
	f__1A34_1155_0017_F535();
}

/**
 * Decompiled function f__1A34_1155_0017_F535()
 *
 * @name f__1A34_1155_0017_F535
 * @implements 1A34:1155:0017:F535 ()
 *
 * Called From: 1A34:1155:0012:C901
 */
void f__1A34_1155_0017_F535()
{
	emu_addws(&emu_sp, 0x6);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3902);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x116C); emu_cs = 0x15C2; f__15C2_0395_0044_6B4F();
	f__1A34_116C_000E_23D8();
}

/**
 * Decompiled function f__1A34_116C_000E_23D8()
 *
 * @name f__1A34_116C_000E_23D8
 * @implements 1A34:116C:000E:23D8 ()
 *
 * Called From: 1A34:116C:0017:F535
 */
void f__1A34_116C_000E_23D8()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x117A); emu_cs = 0x0FE4; f__0FE4_0568_0018_A435();
	f__1A34_117A_0004_07BA();
}

/**
 * Decompiled function f__1A34_117A_0004_07BA()
 *
 * @name f__1A34_117A_0004_07BA
 * @implements 1A34:117A:0004:07BA ()
 *
 * Called From: 1A34:117A:000E:23D8
 */
void f__1A34_117A_0004_07BA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_117C_0002_00E2()
 *
 * @name f__1A34_117C_0002_00E2
 * @implements 1A34:117C:0002:00E2 ()
 *
 * Called From: 1A34:10F7:000E:8DDF
 */
void f__1A34_117C_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_117E_001D_4F85()
 *
 * @name f__1A34_117E_001D_4F85
 * @implements 1A34:117E:001D:4F85 ()
 *
 * Called From: 1A34:148E:0013:98F7
 * Called From: 1A34:35CD:0029:B3F6
 */
void f__1A34_117E_001D_4F85()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x1196; emu_last_cs = 0x1A34; emu_last_ip = 0x118C; emu_last_length = 0x001D; emu_last_crc = 0x4F85; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__1A34_119B_000D_06AC(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x1322; emu_last_cs = 0x1A34; emu_last_ip = 0x1198; emu_last_length = 0x001D; emu_last_crc = 0x4F85; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_1198_0003_0556()
 *
 * @name f__1A34_1198_0003_0556
 * @implements 1A34:1198:0003:0556 ()
 *
 * Called From: 1A34:131F:0005:1A6C
 */
void f__1A34_1198_0003_0556()
{
	f__1A34_1322_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_119B_000D_06AC()
 *
 * @name f__1A34_119B_000D_06AC
 * @implements 1A34:119B:000D:06AC ()
 *
 * Called From: 1A34:1194:001D:4F85
 */
void f__1A34_119B_000D_06AC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (!emu_flags.zf) { f__1A34_11A8_0015_7D21(); return; }
	emu_ip = 0x1196; emu_last_cs = 0x1A34; emu_last_ip = 0x11A6; emu_last_length = 0x000D; emu_last_crc = 0x06AC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_11A8_0015_7D21()
 *
 * @name f__1A34_11A8_0015_7D21
 * @implements 1A34:11A8:0015:7D21 ()
 *
 * Called From: 1A34:11A4:000D:06AC
 */
void f__1A34_11A8_0015_7D21()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x11BD); f__1A34_3623_0010_3F68();
	f__1A34_11BD_0010_0423();
}

/**
 * Decompiled function f__1A34_11BD_0010_0423()
 *
 * @name f__1A34_11BD_0010_0423
 * @implements 1A34:11BD:0010:0423 ()
 *
 * Called From: 1A34:11BD:0015:7D21
 */
void f__1A34_11BD_0010_0423()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_ax.l);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_pop(&emu_ax.x);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__1A34_11CD_000B_E142(); return; }
	emu_ip = 0x1196; emu_last_cs = 0x1A34; emu_last_ip = 0x11CB; emu_last_length = 0x0010; emu_last_crc = 0x0423; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_11CD_000B_E142()
 *
 * @name f__1A34_11CD_000B_E142
 * @implements 1A34:11CD:000B:E142 ()
 *
 * Called From: 1A34:11C9:0010:0423
 */
void f__1A34_11CD_000B_E142()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x11D8); f__1A34_3623_0010_3F68();
	f__1A34_11D8_000E_8B82();
}

/**
 * Decompiled function f__1A34_11D8_000E_8B82()
 *
 * @name f__1A34_11D8_000E_8B82
 * @implements 1A34:11D8:000E:8B82 ()
 *
 * Called From: 1A34:11D8:000B:E142
 */
void f__1A34_11D8_000E_8B82()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x11E6); f__1A34_3623_0010_3F68();
	f__1A34_11E6_0008_715C();
}

/**
 * Decompiled function f__1A34_11E6_0008_715C()
 *
 * @name f__1A34_11E6_0008_715C
 * @implements 1A34:11E6:0008:715C ()
 *
 * Called From: 1A34:11E6:000E:8B82
 */
void f__1A34_11E6_0008_715C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x11EE); emu_cs = 0x1423; f__1423_0F34_0017_4318();
	f__1A34_11EE_0008_6AFC();
}

/**
 * Decompiled function f__1A34_11EE_0008_6AFC()
 *
 * @name f__1A34_11EE_0008_6AFC
 * @implements 1A34:11EE:0008:6AFC ()
 *
 * Called From: 1A34:11EE:0008:715C
 */
void f__1A34_11EE_0008_6AFC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__1A34_11F6_0012_02CC(); return; }
	emu_ip = 0x1196; emu_last_cs = 0x1A34; emu_last_ip = 0x11F4; emu_last_length = 0x0008; emu_last_crc = 0x6AFC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_11F6_0012_02CC()
 *
 * @name f__1A34_11F6_0012_02CC
 * @implements 1A34:11F6:0012:02CC ()
 *
 * Called From: 1A34:11F2:0008:6AFC
 */
void f__1A34_11F6_0012_02CC()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { emu_ip = 0x1208; emu_last_cs = 0x1A34; emu_last_ip = 0x11FF; emu_last_length = 0x0012; emu_last_crc = 0x02CC; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { f__1A34_1208_003E_64D8(); return; }
	emu_ip = 0x1196; emu_last_cs = 0x1A34; emu_last_ip = 0x1206; emu_last_length = 0x0012; emu_last_crc = 0x02CC; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_1208_003E_64D8()
 *
 * @name f__1A34_1208_003E_64D8
 * @implements 1A34:1208:003E:64D8 ()
 *
 * Called From: 1A34:1204:0012:02CC
 */
void f__1A34_1208_003E_64D8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x2000);
	if (!emu_flags.zf) { f__1A34_1246_0018_F96A(); return; }
	emu_ip = 0x1196; emu_last_cs = 0x1A34; emu_last_ip = 0x1243; emu_last_length = 0x003E; emu_last_crc = 0x64D8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_1246_0018_F96A()
 *
 * @name f__1A34_1246_0018_F96A
 * @implements 1A34:1246:0018:F96A ()
 *
 * Called From: 1A34:1241:003E:64D8
 */
void f__1A34_1246_0018_F96A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (!emu_flags.zf) { f__1A34_128C_0010_A923(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x1000);
	if (!emu_flags.zf) { emu_ip = 0x125E; emu_last_cs = 0x1A34; emu_last_ip = 0x1259; emu_last_length = 0x0018; emu_last_crc = 0xF96A; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x1196; emu_last_cs = 0x1A34; emu_last_ip = 0x125B; emu_last_length = 0x0018; emu_last_crc = 0xF96A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_128C_0010_A923()
 *
 * @name f__1A34_128C_0010_A923
 * @implements 1A34:128C:0010:A923 ()
 *
 * Called From: 1A34:124E:0018:F96A
 */
void f__1A34_128C_0010_A923()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x129C); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__1A34_129C_0008_74EC();
}

/**
 * Decompiled function f__1A34_129C_0008_74EC()
 *
 * @name f__1A34_129C_0008_74EC
 * @implements 1A34:129C:0008:74EC ()
 *
 * Called From: 1A34:129C:0010:A923
 */
void f__1A34_129C_0008_74EC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12A4); emu_cs = 0x34CD; ovl__34CD(11);
	f__1A34_12A4_0008_670C();
}

/**
 * Decompiled function f__1A34_12A4_0008_670C()
 *
 * @name f__1A34_12A4_0008_670C
 * @implements 1A34:12A4:0008:670C ()
 *
 * Called From: 1A34:12A4:0008:74EC
 */
void f__1A34_12A4_0008_670C()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1A34_12AC_001B_AC9F(); return; }
	emu_ip = 0x1196; emu_last_cs = 0x1A34; emu_last_ip = 0x12A9; emu_last_length = 0x0008; emu_last_crc = 0x670C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_12AC_001B_AC9F()
 *
 * @name f__1A34_12AC_001B_AC9F
 * @implements 1A34:12AC:001B:AC9F ()
 *
 * Called From: 1A34:12A7:0008:670C
 */
void f__1A34_12AC_001B_AC9F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x12C7); emu_cs = 0x0F3F; f__0F3F_0104_0013_AF6A();
	f__1A34_12C7_0015_B69C();
}

/**
 * Decompiled function f__1A34_12C7_0015_B69C()
 *
 * @name f__1A34_12C7_0015_B69C
 * @implements 1A34:12C7:0015:B69C ()
 *
 * Called From: 1A34:12C7:001B:AC9F
 */
void f__1A34_12C7_0015_B69C()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x12DC); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__1A34_12DC_0008_74EC();
}

/**
 * Decompiled function f__1A34_12DC_0008_74EC()
 *
 * @name f__1A34_12DC_0008_74EC
 * @implements 1A34:12DC:0008:74EC ()
 *
 * Called From: 1A34:12DC:0015:B69C
 */
void f__1A34_12DC_0008_74EC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x12E4); emu_cs = 0x34CD; ovl__34CD(11);
	f__1A34_12E4_0011_D5C8();
}

/**
 * Decompiled function f__1A34_12E4_0011_D5C8()
 *
 * @name f__1A34_12E4_0011_D5C8
 * @implements 1A34:12E4:0011:D5C8 ()
 *
 * Called From: 1A34:12E4:0008:74EC
 */
void f__1A34_12E4_0011_D5C8()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1A34_12F5_0028_08A8(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x50), emu_di);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_12F5_0028_08A8(); return; }
	emu_ip = 0x1196; emu_last_cs = 0x1A34; emu_last_ip = 0x12F2; emu_last_length = 0x0011; emu_last_crc = 0xD5C8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_12F5_0028_08A8()
 *
 * @name f__1A34_12F5_0028_08A8
 * @implements 1A34:12F5:0028:08A8 ()
 *
 * Called From: 1A34:12E7:0011:D5C8
 * Called From: 1A34:12F0:0011:D5C8
 */
void f__1A34_12F5_0028_08A8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2F));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2D));
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x1312; emu_last_cs = 0x1A34; emu_last_ip = 0x1307; emu_last_length = 0x0028; emu_last_crc = 0x08A8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_divw(&emu_ax.x, emu_di);
	emu_movw(&emu_si, emu_ax.x);
	emu_incw(&emu_si);
	emu_cmpw(&emu_si, 0x7D00);
	if ((emu_flags.cf || emu_flags.zf)) { f__1A34_131D_0005_1A6C(); return; }
	emu_movw(&emu_ax.x, 0x7D00);
	emu_ip = 0x131F; emu_last_cs = 0x1A34; emu_last_ip = 0x131B; emu_last_length = 0x0028; emu_last_crc = 0x08A8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_131D_0005_1A6C()
 *
 * @name f__1A34_131D_0005_1A6C
 * @implements 1A34:131D:0005:1A6C ()
 *
 * Called From: 1A34:1316:0028:08A8
 */
void f__1A34_131D_0005_1A6C()
{
	emu_movw(&emu_ax.x, emu_si);
	f__1A34_1198_0003_0556(); return;
}

/**
 * Decompiled function f__1A34_1322_0006_137A()
 *
 * @name f__1A34_1322_0006_137A
 * @implements 1A34:1322:0006:137A ()
 *
 * Called From: 1A34:1198:0003:0556
 */
void f__1A34_1322_0006_137A()
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
 * Decompiled function f__1A34_1328_0026_5EAA()
 *
 * @name f__1A34_1328_0026_5EAA
 * @implements 1A34:1328:0026:5EAA ()
 *
 * Called From: 1A34:3585:000B:CE5B
 */
void f__1A34_1328_0026_5EAA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_xorw(&emu_di, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_134E_002A_FE23(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x14E0; emu_last_cs = 0x1A34; emu_last_ip = 0x134B; emu_last_length = 0x0026; emu_last_crc = 0x5EAA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_134B_0003_0502()
 *
 * @name f__1A34_134B_0003_0502
 * @implements 1A34:134B:0003:0502 ()
 *
 * Called From: 1A34:14DD:0017:AD3B
 * Called From: 1A34:14DD:0009:1F99
 */
void f__1A34_134B_0003_0502()
{
	f__1A34_14E0_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_134E_002A_FE23()
 *
 * @name f__1A34_134E_002A_FE23
 * @implements 1A34:134E:002A:FE23 ()
 *
 * Called From: 1A34:1345:0026:5EAA
 */
void f__1A34_134E_002A_FE23()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4D), 0x0);
	if (!emu_flags.zf) { f__1A34_138B_000C_2AE2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x1378); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__1A34_1378_0008_7C24();
}

/**
 * Decompiled function f__1A34_1378_0008_7C24()
 *
 * @name f__1A34_1378_0008_7C24
 * @implements 1A34:1378:0008:7C24 ()
 *
 * Called From: 1A34:1378:002A:FE23
 */
void f__1A34_1378_0008_7C24()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1380); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__1A34_1380_000B_6430();
}

/**
 * Decompiled function f__1A34_1380_000B_6430()
 *
 * @name f__1A34_1380_000B_6430
 * @implements 1A34:1380:000B:6430 ()
 *
 * Called From: 1A34:1380:0008:7C24
 */
void f__1A34_1380_000B_6430()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4D), emu_ax.x);
	f__1A34_139E_0040_7048(); return;
}

/**
 * Decompiled function f__1A34_138B_000C_2AE2()
 *
 * @name f__1A34_138B_000C_2AE2
 * @implements 1A34:138B:000C:2AE2 ()
 *
 * Called From: 1A34:1356:002A:FE23
 */
void f__1A34_138B_000C_2AE2()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4D));
	emu_push(emu_cs); emu_push(0x1397); emu_cs = 0x167E; f__167E_01BB_0010_ECB8();
	f__1A34_1397_0047_7FBC();
}

/**
 * Decompiled function f__1A34_1397_0047_7FBC()
 *
 * @name f__1A34_1397_0047_7FBC
 * @implements 1A34:1397:0047:7FBC ()
 *
 * Called From: 1A34:1397:000C:2AE2
 */
void f__1A34_1397_0047_7FBC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x50));
	emu_movb(&emu_cx.l, 0x8);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_cmpws(&emu_si, 0x2);
	if (!emu_flags.zf) { f__1A34_13C6_0018_FC07(); return; }
	emu_shlw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x13DE); emu_cs = 0x0FE4; emu_ip = 0x1621; emu_last_cs = 0x1A34; emu_last_ip = 0x13D9; emu_last_length = 0x0047; emu_last_crc = 0x7FBC; emu_call(); // Jump does not resolve
	f__1A34_13DE_0006_3CD8();
}

/**
 * Decompiled function f__1A34_139E_0040_7048()
 *
 * @name f__1A34_139E_0040_7048
 * @implements 1A34:139E:0040:7048 ()
 *
 * Called From: 1A34:1389:000B:6430
 */
void f__1A34_139E_0040_7048()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x50));
	emu_movb(&emu_cx.l, 0x8);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_cmpws(&emu_si, 0x2);
	if (!emu_flags.zf) { f__1A34_13C6_0018_FC07(); return; }
	emu_shlw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x13DE); emu_cs = 0x0FE4; emu_ip = 0x1621; emu_last_cs = 0x1A34; emu_last_ip = 0x13D9; emu_last_length = 0x0040; emu_last_crc = 0x7048; emu_call(); // Jump does not resolve
	f__1A34_13DE_0006_3CD8();
}

/**
 * Decompiled function f__1A34_13C6_0018_FC07()
 *
 * @name f__1A34_13C6_0018_FC07
 * @implements 1A34:13C6:0018:FC07 ()
 *
 * Called From: 1A34:13C1:0040:7048
 * Called From: 1A34:13C1:0047:7FBC
 */
void f__1A34_13C6_0018_FC07()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x13DE); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	f__1A34_13DE_0006_3CD8();
}

/**
 * Decompiled function f__1A34_13DE_0006_3CD8()
 *
 * @name f__1A34_13DE_0006_3CD8
 * @implements 1A34:13DE:0006:3CD8 ()
 *
 * Called From: 1A34:13DE:0018:FC07
 */
void f__1A34_13DE_0006_3CD8()
{
	emu_addws(&emu_sp, 0x8);
	f__1A34_14B8_0011_E6F0(); return;
}

/**
 * Decompiled function f__1A34_13E4_000B_E0B2()
 *
 * @name f__1A34_13E4_000B_E0B2
 * @implements 1A34:13E4:000B:E0B2 ()
 *
 * Called From: 1A34:14C6:0011:E6F0
 * Called From: 1A34:14C6:0013:E55C
 */
void f__1A34_13E4_000B_E0B2()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x13EF); f__1A34_3623_0010_3F68();
	f__1A34_13EF_000E_5263();
}

/**
 * Decompiled function f__1A34_13EF_000E_5263()
 *
 * @name f__1A34_13EF_000E_5263
 * @implements 1A34:13EF:000E:5263 ()
 *
 * Called From: 1A34:13EF:000B:E0B2
 */
void f__1A34_13EF_000E_5263()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x13FD); f__1A34_3623_0010_3F68();
	f__1A34_13FD_0008_715C();
}

/**
 * Decompiled function f__1A34_13FD_0008_715C()
 *
 * @name f__1A34_13FD_0008_715C
 * @implements 1A34:13FD:0008:715C ()
 *
 * Called From: 1A34:13FD:000E:5263
 */
void f__1A34_13FD_0008_715C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1405); emu_cs = 0x1423; f__1423_0F34_0017_4318();
	f__1A34_1405_0009_D50C();
}

/**
 * Decompiled function f__1A34_1405_0009_D50C()
 *
 * @name f__1A34_1405_0009_D50C
 * @implements 1A34:1405:0009:D50C ()
 *
 * Called From: 1A34:1405:0008:715C
 */
void f__1A34_1405_0009_D50C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__1A34_140E_001C_E3BE(); return; }
	f__1A34_14AB_000B_086C(); return;
}

/**
 * Decompiled function f__1A34_140E_001C_E3BE()
 *
 * @name f__1A34_140E_001C_E3BE
 * @implements 1A34:140E:001C:E3BE ()
 *
 * Called From: 1A34:1409:0009:D50C
 */
void f__1A34_140E_001C_E3BE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, 0x1);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { f__1A34_142A_0029_4B80(); return; }
	f__1A34_14AB_000B_086C(); return;
}

/**
 * Decompiled function f__1A34_142A_0029_4B80()
 *
 * @name f__1A34_142A_0029_4B80
 * @implements 1A34:142A:0029:4B80 ()
 *
 * Called From: 1A34:1425:001C:E3BE
 */
void f__1A34_142A_0029_4B80()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__1A34_147E_0013_98F7(); return; }
	emu_cmpws(&emu_si, 0x4);
	if (emu_flags.zf) { emu_ip = 0x147E; emu_last_cs = 0x1A34; emu_last_ip = 0x1431; emu_last_length = 0x0029; emu_last_crc = 0x4B80; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x1);
	if (!emu_flags.zf) { emu_ip = 0x145B; emu_last_cs = 0x1A34; emu_last_ip = 0x1436; emu_last_length = 0x0029; emu_last_crc = 0x4B80; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1453); emu_cs = 0x0F3F; f__0F3F_00B4_002A_0887();
	f__1A34_1453_0023_DCDF();
}

/**
 * Decompiled function f__1A34_1453_0023_DCDF()
 *
 * @name f__1A34_1453_0023_DCDF
 * @implements 1A34:1453:0023:DCDF ()
 *
 * Called From: 1A34:1453:0029:4B80
 */
void f__1A34_1453_0023_DCDF()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_147E_0013_98F7(); return; }
	emu_cmpws(&emu_si, 0x2);
	if (!emu_flags.zf) { f__1A34_14AB_000B_086C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x1476); emu_cs = 0x0F3F; emu_ip = 0x152A; emu_last_cs = 0x1A34; emu_last_ip = 0x1471; emu_last_length = 0x0023; emu_last_crc = 0xDCDF; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_147E_0013_98F7()
 *
 * @name f__1A34_147E_0013_98F7
 * @implements 1A34:147E:0013:98F7 ()
 *
 * Called From: 1A34:142C:0029:4B80
 * Called From: 1A34:1459:0023:DCDF
 */
void f__1A34_147E_0013_98F7()
{
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1491); f__1A34_117E_001D_4F85();
	f__1A34_1491_0025_3798();
}

/**
 * Decompiled function f__1A34_1491_0025_3798()
 *
 * @name f__1A34_1491_0025_3798
 * @implements 1A34:1491:0025:3798 ()
 *
 * Called From: 1A34:1491:0013:98F7
 */
void f__1A34_1491_0025_3798()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_di);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_14AB_000B_086C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x14B6); emu_cs = 0x0FE4; f__0FE4_0283_0038_0940();
	f__1A34_14B6_0013_E55C();
}

/**
 * Decompiled function f__1A34_14AB_000B_086C()
 *
 * @name f__1A34_14AB_000B_086C
 * @implements 1A34:14AB:000B:086C ()
 *
 * Called From: 1A34:140B:0009:D50C
 * Called From: 1A34:1427:001C:E3BE
 * Called From: 1A34:145E:0023:DCDF
 * Called From: 1A34:149A:0025:3798
 */
void f__1A34_14AB_000B_086C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x14B6); emu_cs = 0x0FE4; f__0FE4_0283_0038_0940();
	f__1A34_14B6_0013_E55C();
}

/**
 * Decompiled function f__1A34_14B6_0013_E55C()
 *
 * @name f__1A34_14B6_0013_E55C
 * @implements 1A34:14B6:0013:E55C ()
 *
 * Called From: 1A34:14B6:000B:086C
 * Called From: 1A34:14B6:0025:3798
 */
void f__1A34_14B6_0013_E55C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_14C9_0017_AD3B(); return; }
	f__1A34_13E4_000B_E0B2(); return;
}

/**
 * Decompiled function f__1A34_14B8_0011_E6F0()
 *
 * @name f__1A34_14B8_0011_E6F0
 * @implements 1A34:14B8:0011:E6F0 ()
 *
 * Called From: 1A34:13E1:0006:3CD8
 */
void f__1A34_14B8_0011_E6F0()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x14C9; emu_last_cs = 0x1A34; emu_last_ip = 0x14C4; emu_last_length = 0x0011; emu_last_crc = 0xE6F0; emu_call(); return; } // Jump does not resolve
	f__1A34_13E4_000B_E0B2(); return;
}

/**
 * Decompiled function f__1A34_14C9_0017_AD3B()
 *
 * @name f__1A34_14C9_0017_AD3B
 * @implements 1A34:14C9:0017:AD3B ()
 *
 * Called From: 1A34:14C4:0013:E55C
 */
void f__1A34_14C9_0017_AD3B()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__1A34_14D7_0009_1F99(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__1A34_134B_0003_0502(); return;
}

/**
 * Decompiled function f__1A34_14D7_0009_1F99()
 *
 * @name f__1A34_14D7_0009_1F99
 * @implements 1A34:14D7:0009:1F99 ()
 *
 * Called From: 1A34:14CB:0017:AD3B
 */
void f__1A34_14D7_0009_1F99()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__1A34_134B_0003_0502(); return;
}

/**
 * Decompiled function f__1A34_14E0_0006_137A()
 *
 * @name f__1A34_14E0_0006_137A
 * @implements 1A34:14E0:0006:137A ()
 *
 * Called From: 1A34:134B:0003:0502
 */
void f__1A34_14E0_0006_137A()
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
 * Decompiled function f__1A34_167C_0015_6B7D()
 *
 * @name f__1A34_167C_0015_6B7D
 * @implements 1A34:167C:0015:6B7D ()
 *
 * Called From: 176C:20DA:000D:A84B
 */
void f__1A34_167C_0015_6B7D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_1691_003D_C669(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x1853; emu_last_cs = 0x1A34; emu_last_ip = 0x168E; emu_last_length = 0x0015; emu_last_crc = 0x6B7D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_168E_0003_0442()
 *
 * @name f__1A34_168E_0003_0442
 * @implements 1A34:168E:0003:0442 ()
 *
 * Called From: 1A34:1850:0009:E979
 */
void f__1A34_168E_0003_0442()
{
	f__1A34_1853_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_1691_003D_C669()
 *
 * @name f__1A34_1691_003D_C669
 * @implements 1A34:1691:003D:C669 ()
 *
 * Called From: 1A34:168A:0015:6B7D
 */
void f__1A34_1691_003D_C669()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x64));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_si, emu_ax.x);
	emu_addws(&emu_si, 0x10);
	emu_andw(&emu_si, 0xE0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x16CE); f__1A34_1E99_0012_0D98();
	f__1A34_16CE_0016_3FAE();
}

/**
 * Decompiled function f__1A34_16CE_0016_3FAE()
 *
 * @name f__1A34_16CE_0016_3FAE
 * @implements 1A34:16CE:0016:3FAE ()
 *
 * Called From: 1A34:16CE:003D:C669
 */
void f__1A34_16CE_0016_3FAE()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x16E4); f__1A34_1E99_0012_0D98();
	f__1A34_16E4_0014_AADA();
}

/**
 * Decompiled function f__1A34_16E4_0014_AADA()
 *
 * @name f__1A34_16E4_0014_AADA
 * @implements 1A34:16E4:0014:AADA ()
 *
 * Called From: 1A34:16E4:0016:3FAE
 */
void f__1A34_16E4_0014_AADA()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x16F8); emu_cs = 0x34CD; ovl__34CD(15);
	f__1A34_16F8_0014_E1D7();
}

/**
 * Decompiled function f__1A34_16F8_0014_E1D7()
 *
 * @name f__1A34_16F8_0014_E1D7
 * @implements 1A34:16F8:0014:E1D7 ()
 *
 * Called From: 1A34:16F8:0014:AADA
 */
void f__1A34_16F8_0014_E1D7()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x170C); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__1A34_170C_0023_2B65();
}

/**
 * Decompiled function f__1A34_170C_0023_2B65()
 *
 * @name f__1A34_170C_0023_2B65
 * @implements 1A34:170C:0023:2B65 ()
 *
 * Called From: 1A34:170C:0014:E1D7
 */
void f__1A34_170C_0023_2B65()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x52), 0x7FFF);
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x5);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x172F); f__1A34_3146_0018_1857();
	f__1A34_172F_0013_6B90();
}

/**
 * Decompiled function f__1A34_172F_0013_6B90()
 *
 * @name f__1A34_172F_0013_6B90
 * @implements 1A34:172F:0013:6B90 ()
 *
 * Called From: 1A34:172F:0023:2B65
 */
void f__1A34_172F_0013_6B90()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpw(&emu_di, 0xFF);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x173F; emu_last_cs = 0x1A34; emu_last_ip = 0x1738; emu_last_length = 0x0013; emu_last_crc = 0x6B90; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_di, 0xFF);
	if (!emu_flags.zf) { f__1A34_1742_0008_ED8C(); return; }
	emu_ip = 0x168C; emu_last_cs = 0x1A34; emu_last_ip = 0x173F; emu_last_length = 0x0013; emu_last_crc = 0x6B90; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_1742_0008_ED8C()
 *
 * @name f__1A34_1742_0008_ED8C
 * @implements 1A34:1742:0008:ED8C ()
 *
 * Called From: 1A34:173D:0013:6B90
 */
void f__1A34_1742_0008_ED8C()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x174A); emu_cs = 0x34CD; ovl__34CD(13);
	f__1A34_174A_008E_5F9A();
}

/**
 * Decompiled function f__1A34_174A_008E_5F9A()
 *
 * @name f__1A34_174A_008E_5F9A
 * @implements 1A34:174A:008E:5F9A ()
 *
 * Called From: 1A34:174A:0008:ED8C
 */
void f__1A34_174A_008E_5F9A()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xC);
	if (!emu_flags.zf) { f__1A34_1759_007F_81C8(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xA);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3C));
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x3A42));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_1785_0053_305C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xB);
	if (!emu_flags.zf) { emu_ip = 0x1785; emu_last_cs = 0x1A34; emu_last_ip = 0x1780; emu_last_length = 0x008E; emu_last_crc = 0x5F9A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_di, 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFF7F);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x3A48), 0x0);
	if (emu_flags.zf) { emu_ip = 0x17A8; emu_last_cs = 0x1A34; emu_last_ip = 0x179D; emu_last_length = 0x008E; emu_last_crc = 0x5F9A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x80);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_sarw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x17CC; emu_last_cs = 0x1A34; emu_last_ip = 0x17B8; emu_last_length = 0x008E; emu_last_crc = 0x5F9A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { emu_ip = 0x17CC; emu_last_cs = 0x1A34; emu_last_ip = 0x17C2; emu_last_length = 0x008E; emu_last_crc = 0x5F9A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_subw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x17D8); emu_ip = 0x204C; emu_last_cs = 0x1A34; emu_last_ip = 0x17D5; emu_last_length = 0x008E; emu_last_crc = 0x5F9A; emu_call(); // Jump does not resolve
	f__1A34_17D8_003E_A63A();
}

/**
 * Decompiled function f__1A34_1759_007F_81C8()
 *
 * @name f__1A34_1759_007F_81C8
 * @implements 1A34:1759:007F:81C8 ()
 *
 * Called From: 1A34:1752:008E:5F9A
 */
void f__1A34_1759_007F_81C8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3C));
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x3A42));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_1785_0053_305C(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0xB);
	if (!emu_flags.zf) { emu_ip = 0x1785; emu_last_cs = 0x1A34; emu_last_ip = 0x1780; emu_last_length = 0x007F; emu_last_crc = 0x81C8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_di, 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFF7F);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x3A48), 0x0);
	if (emu_flags.zf) { emu_ip = 0x17A8; emu_last_cs = 0x1A34; emu_last_ip = 0x179D; emu_last_length = 0x007F; emu_last_crc = 0x81C8; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x80);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_sarw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x17CC; emu_last_cs = 0x1A34; emu_last_ip = 0x17B8; emu_last_length = 0x007F; emu_last_crc = 0x81C8; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { emu_ip = 0x17CC; emu_last_cs = 0x1A34; emu_last_ip = 0x17C2; emu_last_length = 0x007F; emu_last_crc = 0x81C8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_subw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x17D8); emu_ip = 0x204C; emu_last_cs = 0x1A34; emu_last_ip = 0x17D5; emu_last_length = 0x007F; emu_last_crc = 0x81C8; emu_call(); // Jump does not resolve
	f__1A34_17D8_003E_A63A();
}

/**
 * Decompiled function f__1A34_1785_0053_305C()
 *
 * @name f__1A34_1785_0053_305C
 * @implements 1A34:1785:0053:305C ()
 *
 * Called From: 1A34:177A:007F:81C8
 * Called From: 1A34:177A:008E:5F9A
 */
void f__1A34_1785_0053_305C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFF7F);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ds, emu_bx.x,  0x3A48), 0x0);
	if (emu_flags.zf) { f__1A34_17A8_0030_7872(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x80);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_sarw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_17CC_000C_91E3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { emu_ip = 0x17CC; emu_last_cs = 0x1A34; emu_last_ip = 0x17C2; emu_last_length = 0x0053; emu_last_crc = 0x305C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_subw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x17D8); f__1A34_204C_0043_9483();
	f__1A34_17D8_003E_A63A();
}

/**
 * Decompiled function f__1A34_17A8_0030_7872()
 *
 * @name f__1A34_17A8_0030_7872
 * @implements 1A34:17A8:0030:7872 ()
 *
 * Called From: 1A34:179D:0053:305C
 */
void f__1A34_17A8_0030_7872()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_sarw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_17CC_000C_91E3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { emu_ip = 0x17CC; emu_last_cs = 0x1A34; emu_last_ip = 0x17C2; emu_last_length = 0x0030; emu_last_crc = 0x7872; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_subw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x17D8); f__1A34_204C_0043_9483();
	f__1A34_17D8_003E_A63A();
}

/**
 * Decompiled function f__1A34_17CC_000C_91E3()
 *
 * @name f__1A34_17CC_000C_91E3
 * @implements 1A34:17CC:000C:91E3 ()
 *
 * Called From: 1A34:17B8:0053:305C
 * Called From: 1A34:17B8:0030:7872
 */
void f__1A34_17CC_000C_91E3()
{
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x17D8); f__1A34_204C_0043_9483();
	f__1A34_17D8_003E_A63A();
}

/**
 * Decompiled function f__1A34_17D8_003E_A63A()
 *
 * @name f__1A34_17D8_003E_A63A
 * @implements 1A34:17D8:003E:A63A ()
 *
 * Called From: 1A34:17D8:000C:91E3
 * Called From: 1A34:17D8:0053:305C
 * Called From: 1A34:17D8:0030:7872
 */
void f__1A34_17D8_003E_A63A()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x5);
	if (emu_flags.zf) { emu_ip = 0x182A; emu_last_cs = 0x1A34; emu_last_ip = 0x17E3; emu_last_length = 0x003E; emu_last_crc = 0xA63A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1816); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_1816_0034_A3EC();
}

/**
 * Decompiled function f__1A34_1816_0034_A3EC()
 *
 * @name f__1A34_1816_0034_A3EC
 * @implements 1A34:1816:0034:A3EC ()
 *
 * Called From: 1A34:1816:003E:A63A
 */
void f__1A34_1816_0034_A3EC()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4B), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x49), emu_dx.x);
	emu_movw(&emu_ax.x, 0xA);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x184A); f__1A34_193F_0013_AF17();
	f__1A34_184A_0009_E979();
}

/**
 * Decompiled function f__1A34_184A_0009_E979()
 *
 * @name f__1A34_184A_0009_E979
 * @implements 1A34:184A:0009:E979 ()
 *
 * Called From: 1A34:184A:0034:A3EC
 */
void f__1A34_184A_0009_E979()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__1A34_168E_0003_0442(); return;
}

/**
 * Decompiled function f__1A34_1853_0006_137A()
 *
 * @name f__1A34_1853_0006_137A
 * @implements 1A34:1853:0006:137A ()
 *
 * Called From: 1A34:168E:0003:0442
 */
void f__1A34_1853_0006_137A()
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
 * Decompiled function f__1A34_193F_0013_AF17()
 *
 * @name f__1A34_193F_0013_AF17
 * @implements 1A34:193F:0013:AF17 ()
 *
 * Called From: 176C:04C6:0017:EE96
 * Called From: 176C:04C6:001A:6C95
 * Called From: 176C:185E:0014:A37B
 * Called From: 1A34:0BFF:000E:20D9
 * Called From: 1A34:0BFF:0017:50C1
 * Called From: 1A34:1847:0034:A3EC
 */
void f__1A34_193F_0013_AF17()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_1952_000E_3CCF(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x1A62; emu_last_cs = 0x1A34; emu_last_ip = 0x194F; emu_last_length = 0x0013; emu_last_crc = 0xAF17; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_194D_0005_0D6A()
 *
 * @name f__1A34_194D_0005_0D6A
 * @implements 1A34:194D:0005:0D6A ()
 *
 * Called From: 1A34:195E:000E:3CCF
 */
void f__1A34_194D_0005_0D6A()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1A34_1A62_0004_0F7A(); return;
}

/**
 * Decompiled function f__1A34_1952_000E_3CCF()
 *
 * @name f__1A34_1952_000E_3CCF
 * @implements 1A34:1952:000E:3CCF ()
 *
 * Called From: 1A34:194B:0013:AF17
 */
void f__1A34_1952_000E_3CCF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x59));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x1960; emu_last_cs = 0x1A34; emu_last_ip = 0x195C; emu_last_length = 0x000E; emu_last_crc = 0x3CCF; emu_call(); return; } // Jump does not resolve
	f__1A34_194D_0005_0D6A(); return;
}

/**
 * Decompiled function f__1A34_1A62_0004_0F7A()
 *
 * @name f__1A34_1A62_0004_0F7A
 * @implements 1A34:1A62:0004:0F7A ()
 *
 * Called From: 1A34:194F:0005:0D6A
 */
void f__1A34_1A62_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_1A66_0011_4E2C()
 *
 * @name f__1A34_1A66_0011_4E2C
 * @implements 1A34:1A66:0011:4E2C ()
 *
 * Called From: 06F7:02E6:000E:C922
 * Called From: 06F7:02E6:0019:CB10
 * Called From: 0AEC:042D:0010:EAF6
 */
void f__1A34_1A66_0011_4E2C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A77); emu_cs = 0x167E; f__167E_0005_0013_D62A();
	f__1A34_1A77_0010_ECD3();
}

/**
 * Decompiled function f__1A34_1A77_0010_ECD3()
 *
 * @name f__1A34_1A77_0010_ECD3
 * @implements 1A34:1A77:0010:ECD3 ()
 *
 * Called From: 1A34:1A77:0011:4E2C
 */
void f__1A34_1A77_0010_ECD3()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { emu_ip = 0x1A84; emu_last_cs = 0x1A34; emu_last_ip = 0x1A7A; emu_last_length = 0x0010; emu_last_crc = 0xECD3; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_1A87_000C_F96A(); return; }
	emu_ip = 0x1B62; emu_last_cs = 0x1A34; emu_last_ip = 0x1A84; emu_last_length = 0x0010; emu_last_crc = 0xECD3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_1A87_000C_F96A()
 *
 * @name f__1A34_1A87_000C_F96A
 * @implements 1A34:1A87:000C:F96A ()
 *
 * Called From: 1A34:1A82:0010:ECD3
 */
void f__1A34_1A87_000C_F96A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), emu_si);
	if (!emu_flags.zf) { f__1A34_1A93_0006_0F94(); return; }
	f__1A34_1B62_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_1A93_0006_0F94()
 *
 * @name f__1A34_1A93_0006_0F94
 * @implements 1A34:1A93:0006:0F94 ()
 *
 * Called From: 1A34:1A8E:000C:F96A
 */
void f__1A34_1A93_0006_0F94()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A99); emu_cs = 0x167E; f__167E_0088_001A_4DC5();
	f__1A34_1A99_000C_28E0();
}

/**
 * Decompiled function f__1A34_1A99_000C_28E0()
 *
 * @name f__1A34_1A99_000C_28E0
 * @implements 1A34:1A99:000C:28E0 ()
 *
 * Called From: 1A34:1A99:0006:0F94
 */
void f__1A34_1A99_000C_28E0()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { f__1A34_1AFA_000F_9DBA(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1AA5); emu_cs = 0x167E; f__167E_00B7_0034_8ECB();
	f__1A34_1AA5_0009_4AFC();
}

/**
 * Decompiled function f__1A34_1AA5_0009_4AFC()
 *
 * @name f__1A34_1AA5_0009_4AFC
 * @implements 1A34:1AA5:0009:4AFC ()
 *
 * Called From: 1A34:1AA5:000C:28E0
 */
void f__1A34_1AA5_0009_4AFC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1AAE); emu_cs = 0x34CD; ovl__34CD(26);
	f__1A34_1AAE_001E_87B9();
}

/**
 * Decompiled function f__1A34_1AAE_001E_87B9()
 *
 * @name f__1A34_1AAE_001E_87B9
 * @implements 1A34:1AAE:001E:87B9 ()
 *
 * Called From: 1A34:1AAE:0009:4AFC
 */
void f__1A34_1AAE_001E_87B9()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_1AD2_0006_0EBC(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x1ACC); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__1A34_1ACC_0006_11AC();
}

/**
 * Decompiled function f__1A34_1ACC_0006_11AC()
 *
 * @name f__1A34_1ACC_0006_11AC
 * @implements 1A34:1ACC:0006:11AC ()
 *
 * Called From: 1A34:1ACC:001E:87B9
 */
void f__1A34_1ACC_0006_11AC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	f__1A34_1AFA_000F_9DBA(); return;
}

/**
 * Decompiled function f__1A34_1AD2_0006_0EBC()
 *
 * @name f__1A34_1AD2_0006_0EBC
 * @implements 1A34:1AD2:0006:0EBC ()
 *
 * Called From: 1A34:1ABB:001E:87B9
 */
void f__1A34_1AD2_0006_0EBC()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1AD8); emu_cs = 0x34CD; ovl__34CD(30);
	f__1A34_1AD8_001E_EB2F();
}

/**
 * Decompiled function f__1A34_1AD8_001E_EB2F()
 *
 * @name f__1A34_1AD8_001E_EB2F
 * @implements 1A34:1AD8:001E:EB2F ()
 *
 * Called From: 1A34:1AD8:0006:0EBC
 */
void f__1A34_1AD8_001E_EB2F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__1A34_1AFA_000F_9DBA(); return; }
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x1AF6); emu_cs = 0x167E; emu_ip = 0x1BE9; emu_last_cs = 0x1A34; emu_last_ip = 0x1AF1; emu_last_length = 0x001E; emu_last_crc = 0xEB2F; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_1AFA_000F_9DBA()
 *
 * @name f__1A34_1AFA_000F_9DBA
 * @implements 1A34:1AFA:000F:9DBA ()
 *
 * Called From: 1A34:1A9D:000C:28E0
 * Called From: 1A34:1AD0:0006:11AC
 * Called From: 1A34:1AE5:001E:EB2F
 */
void f__1A34_1AFA_000F_9DBA()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x1B09); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__1A34_1B09_001A_3549();
}

/**
 * Decompiled function f__1A34_1B09_001A_3549()
 *
 * @name f__1A34_1B09_001A_3549
 * @implements 1A34:1B09:001A:3549 ()
 *
 * Called From: 1A34:1B09:000F:9DBA
 */
void f__1A34_1B09_001A_3549()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_si);
	if (!emu_flags.zf) { f__1A34_1B2F_0039_8ED4(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x1B23); emu_cs = 0x0F3F; emu_ip = 0x1BA9; emu_last_cs = 0x1A34; emu_last_ip = 0x1B1E; emu_last_length = 0x001A; emu_last_crc = 0x3549; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_1B2F_0039_8ED4()
 *
 * @name f__1A34_1B2F_0039_8ED4
 * @implements 1A34:1B2F:0039:8ED4 ()
 *
 * Called From: 1A34:1B0D:001A:3549
 */
void f__1A34_1B2F_0039_8ED4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x40);
	if (!emu_flags.zf) { emu_ip = 0x1B62; emu_last_cs = 0x1A34; emu_last_ip = 0x1B51; emu_last_length = 0x0039; emu_last_crc = 0x8ED4; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x72), 0xFF);
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
 * Decompiled function f__1A34_1B62_0006_137A()
 *
 * @name f__1A34_1B62_0006_137A
 * @implements 1A34:1B62:0006:137A ()
 *
 * Called From: 1A34:1A90:000C:F96A
 */
void f__1A34_1B62_0006_137A()
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
 * Decompiled function f__1A34_1B68_0019_2EA6()
 *
 * @name f__1A34_1B68_0019_2EA6
 * @implements 1A34:1B68:0019:2EA6 ()
 *
 * Called From: 0AEC:040B:0010:EA1E
 * Called From: 176C:1B28:000E:2976
 * Called From: 176C:2A9B:0010:2902
 * Called From: 1A34:24AA:004E:82DA
 */
void f__1A34_1B68_0019_2EA6()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x1B86; emu_last_cs = 0x1A34; emu_last_ip = 0x1B79; emu_last_length = 0x0019; emu_last_crc = 0x2EA6; emu_call(); return; } // Jump does not resolve
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1B81); emu_cs = 0x167E; f__167E_0005_0013_D62A();
	f__1A34_1B81_0008_65D2();
}

/**
 * Decompiled function f__1A34_1B81_0008_65D2()
 *
 * @name f__1A34_1B81_0008_65D2
 * @implements 1A34:1B81:0008:65D2 ()
 *
 * Called From: 1A34:1B81:0019:2EA6
 */
void f__1A34_1B81_0008_65D2()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1A34_1B89_000C_FA8C(); return; }
	emu_ip = 0x1CAB; emu_last_cs = 0x1A34; emu_last_ip = 0x1B86; emu_last_length = 0x0008; emu_last_crc = 0x65D2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_1B89_000C_FA8C()
 *
 * @name f__1A34_1B89_000C_FA8C
 * @implements 1A34:1B89:000C:FA8C ()
 *
 * Called From: 1A34:1B84:0008:65D2
 */
void f__1A34_1B89_000C_FA8C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_si);
	if (!emu_flags.zf) { f__1A34_1B95_0006_0F94(); return; }
	f__1A34_1CAB_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_1B95_0006_0F94()
 *
 * @name f__1A34_1B95_0006_0F94
 * @implements 1A34:1B95:0006:0F94 ()
 *
 * Called From: 1A34:1B90:000C:FA8C
 */
void f__1A34_1B95_0006_0F94()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1B9B); emu_cs = 0x167E; f__167E_0088_001A_4DC5();
	f__1A34_1B9B_000C_30E0();
}

/**
 * Decompiled function f__1A34_1B9B_000C_30E0()
 *
 * @name f__1A34_1B9B_000C_30E0
 * @implements 1A34:1B9B:000C:30E0 ()
 *
 * Called From: 1A34:1B9B:0006:0F94
 */
void f__1A34_1B9B_000C_30E0()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x1);
	if (!emu_flags.zf) { f__1A34_1C0C_0006_0DE4(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1BA7); emu_cs = 0x167E; f__167E_00B7_0034_8ECB();
	f__1A34_1BA7_0009_4AFC();
}

/**
 * Decompiled function f__1A34_1BA7_0009_4AFC()
 *
 * @name f__1A34_1BA7_0009_4AFC
 * @implements 1A34:1BA7:0009:4AFC ()
 *
 * Called From: 1A34:1BA7:000C:30E0
 */
void f__1A34_1BA7_0009_4AFC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_di, emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1BB0); emu_cs = 0x34CD; ovl__34CD(26);
	f__1A34_1BB0_002E_9FC8();
}

/**
 * Decompiled function f__1A34_1BB0_002E_9FC8()
 *
 * @name f__1A34_1BB0_002E_9FC8
 * @implements 1A34:1BB0:002E:9FC8 ()
 *
 * Called From: 1A34:1BB0:0009:4AFC
 */
void f__1A34_1BB0_002E_9FC8()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_1BE4_0006_0EBC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { emu_ip = 0x1BCF; emu_last_cs = 0x1A34; emu_last_ip = 0x1BC8; emu_last_length = 0x002E; emu_last_crc = 0x9FC8; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_flags.zf) { f__1A34_1BE2_0002_03FC(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x1BDE); emu_cs = 0x167E; emu_ip = 0x1CD1; emu_last_cs = 0x1A34; emu_last_ip = 0x1BD9; emu_last_length = 0x002E; emu_last_crc = 0x9FC8; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_1BE2_0002_03FC()
 *
 * @name f__1A34_1BE2_0002_03FC
 * @implements 1A34:1BE2:0002:03FC ()
 *
 * Called From: 1A34:1BCD:002E:9FC8
 */
void f__1A34_1BE2_0002_03FC()
{
	f__1A34_1C0C_0006_0DE4(); return;
}

/**
 * Decompiled function f__1A34_1BE4_0006_0EBC()
 *
 * @name f__1A34_1BE4_0006_0EBC
 * @implements 1A34:1BE4:0006:0EBC ()
 *
 * Called From: 1A34:1BBD:002E:9FC8
 */
void f__1A34_1BE4_0006_0EBC()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1BEA); emu_cs = 0x34CD; ovl__34CD(30);
	f__1A34_1BEA_001E_EB2F();
}

/**
 * Decompiled function f__1A34_1BEA_001E_EB2F()
 *
 * @name f__1A34_1BEA_001E_EB2F
 * @implements 1A34:1BEA:001E:EB2F ()
 *
 * Called From: 1A34:1BEA:0006:0EBC
 */
void f__1A34_1BEA_001E_EB2F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__1A34_1C0C_0006_0DE4(); return; }
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x1C08); emu_cs = 0x167E; emu_ip = 0x1CFB; emu_last_cs = 0x1A34; emu_last_ip = 0x1C03; emu_last_length = 0x001E; emu_last_crc = 0xEB2F; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_1C0C_0006_0DE4()
 *
 * @name f__1A34_1C0C_0006_0DE4
 * @implements 1A34:1C0C:0006:0DE4 ()
 *
 * Called From: 1A34:1B9F:000C:30E0
 * Called From: 1A34:1BE2:0002:03FC
 * Called From: 1A34:1BF7:001E:EB2F
 */
void f__1A34_1C0C_0006_0DE4()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1C12); emu_cs = 0x167E; f__167E_02AE_000C_AA20();
	f__1A34_1C12_0023_3194();
}

/**
 * Decompiled function f__1A34_1C12_0023_3194()
 *
 * @name f__1A34_1C12_0023_3194
 * @implements 1A34:1C12:0023:3194 ()
 *
 * Called From: 1A34:1C12:0006:0DE4
 */
void f__1A34_1C12_0023_3194()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__1A34_1C9C_0015_0444(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1C35); f__1A34_3623_0010_3F68();
	f__1A34_1C35_0018_099F();
}

/**
 * Decompiled function f__1A34_1C35_0018_099F()
 *
 * @name f__1A34_1C35_0018_099F
 * @implements 1A34:1C35:0018:099F ()
 *
 * Called From: 1A34:1C35:0023:3194
 */
void f__1A34_1C35_0018_099F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_ax.x);
	if (!emu_flags.zf) { f__1A34_1C9C_0015_0444(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x1C4D); f__1A34_3014_001B_7512();
	f__1A34_1C4D_0033_BCB7();
}

/**
 * Decompiled function f__1A34_1C4D_0033_BCB7()
 *
 * @name f__1A34_1C4D_0033_BCB7
 * @implements 1A34:1C4D:0033:BCB7 ()
 *
 * Called From: 1A34:1C4D:0018:099F
 */
void f__1A34_1C4D_0033_BCB7()
{
	emu_addws(&emu_sp, 0x8);
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__1A34_1C71_000F_21BB(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x1C9C; emu_last_cs = 0x1A34; emu_last_ip = 0x1C6F; emu_last_length = 0x0033; emu_last_crc = 0xBCB7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x1C80); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__1A34_1C80_0012_9C3C();
}

/**
 * Decompiled function f__1A34_1C71_000F_21BB()
 *
 * @name f__1A34_1C71_000F_21BB
 * @implements 1A34:1C71:000F:21BB ()
 *
 * Called From: 1A34:1C53:0033:BCB7
 */
void f__1A34_1C71_000F_21BB()
{
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x1C80); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__1A34_1C80_0012_9C3C();
}

/**
 * Decompiled function f__1A34_1C80_0012_9C3C()
 *
 * @name f__1A34_1C80_0012_9C3C
 * @implements 1A34:1C80:0012:9C3C ()
 *
 * Called From: 1A34:1C80:0033:BCB7
 * Called From: 1A34:1C80:000F:21BB
 */
void f__1A34_1C80_0012_9C3C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x1C92); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__1A34_1C92_0008_7218();
}

/**
 * Decompiled function f__1A34_1C92_0008_7218()
 *
 * @name f__1A34_1C92_0008_7218
 * @implements 1A34:1C92:0008:7218 ()
 *
 * Called From: 1A34:1C92:0012:9C3C
 */
void f__1A34_1C92_0008_7218()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x1C9A); emu_cs = 0x0C10; f__0C10_0008_0014_1007();
	f__1A34_1C9A_0017_3E84();
}

/**
 * Decompiled function f__1A34_1C9A_0017_3E84()
 *
 * @name f__1A34_1C9A_0017_3E84
 * @implements 1A34:1C9A:0017:3E84 ()
 *
 * Called From: 1A34:1C9A:0008:7218
 */
void f__1A34_1C9A_0017_3E84()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x72), 0xFF);
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
 * Decompiled function f__1A34_1C9C_0015_0444()
 *
 * @name f__1A34_1C9C_0015_0444
 * @implements 1A34:1C9C:0015:0444 ()
 *
 * Called From: 1A34:1C1F:0023:3194
 * Called From: 1A34:1C3A:0018:099F
 */
void f__1A34_1C9C_0015_0444()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x72), 0xFF);
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
 * Decompiled function f__1A34_1CAB_0006_137A()
 *
 * @name f__1A34_1CAB_0006_137A
 * @implements 1A34:1CAB:0006:137A ()
 *
 * Called From: 1A34:1B92:000C:FA8C
 */
void f__1A34_1CAB_0006_137A()
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
 * Decompiled function f__1A34_1CB1_003A_01CA()
 *
 * @name f__1A34_1CB1_003A_01CA
 * @implements 1A34:1CB1:003A:01CA ()
 *
 * Called From: B4A2:06AC:0030:FF82
 */
void f__1A34_1CB1_003A_01CA()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_subw(&emu_ax.x, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x22);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_push(emu_cs);
	emu_push(0x1CEB); f__1A34_3623_0010_3F68();
	f__1A34_1CEB_005D_6221();
}

/**
 * Decompiled function f__1A34_1CEB_005D_6221()
 *
 * @name f__1A34_1CEB_005D_6221
 * @implements 1A34:1CEB:005D:6221 ()
 *
 * Called From: 1A34:1CEB:003A:01CA
 */
void f__1A34_1CEB_005D_6221()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (emu_flags.zf) { f__1A34_1D06_0042_6302(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (emu_flags.zf) { emu_ip = 0x1D06; emu_last_cs = 0x1A34; emu_last_ip = 0x1CFC; emu_last_length = 0x005D; emu_last_crc = 0x6221; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ds);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x3C2A);
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x50));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x1D2D; emu_last_cs = 0x1A34; emu_last_ip = 0x1D20; emu_last_length = 0x005D; emu_last_crc = 0x6221; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x59), 0x0);
	if (emu_flags.zf) { emu_ip = 0x1D6F; emu_last_cs = 0x1A34; emu_last_ip = 0x1D36; emu_last_length = 0x005D; emu_last_crc = 0x6221; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_push(emu_cs);
	emu_push(0x1D48); emu_ip = 0x193F; emu_last_cs = 0x1A34; emu_last_ip = 0x1D45; emu_last_length = 0x005D; emu_last_crc = 0x6221; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_1D06_0042_6302()
 *
 * @name f__1A34_1D06_0042_6302
 * @implements 1A34:1D06:0042:6302 ()
 *
 * Called From: 1A34:1CF1:005D:6221
 */
void f__1A34_1D06_0042_6302()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x50));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_cmpws(&emu_di, 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x1D2D; emu_last_cs = 0x1A34; emu_last_ip = 0x1D20; emu_last_length = 0x0042; emu_last_crc = 0x6302; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x4F));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x59), 0x0);
	if (emu_flags.zf) { f__1A34_1D6F_000E_2703(); return; }
	emu_movw(&emu_ax.x, 0x5);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_push(emu_cs);
	emu_push(0x1D48); emu_ip = 0x193F; emu_last_cs = 0x1A34; emu_last_ip = 0x1D45; emu_last_length = 0x0042; emu_last_crc = 0x6302; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_1D69_0006_29FA()
 *
 * @name f__1A34_1D69_0006_29FA
 * @implements 1A34:1D69:0006:29FA ()
 *
 * Called From: 1A34:1E90:0003:05EC
 * Called From: 1A34:1E90:0006:3DCC
 */
void f__1A34_1D69_0006_29FA()
{
	emu_movw(&emu_ax.x, 0x1);
	f__1A34_1E93_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_1D6F_000E_2703()
 *
 * @name f__1A34_1D6F_000E_2703
 * @implements 1A34:1D6F:000E:2703 ()
 *
 * Called From: 1A34:1D36:0042:6302
 */
void f__1A34_1D6F_000E_2703()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1D7D); emu_cs = 0x348B; ovl__348B(5);
	f__1A34_1D7D_0046_5616();
}

/**
 * Decompiled function f__1A34_1D7D_0046_5616()
 *
 * @name f__1A34_1D7D_0046_5616
 * @implements 1A34:1D7D:0046:5616 ()
 *
 * Called From: 1A34:1D7D:000E:2703
 */
void f__1A34_1D7D_0046_5616()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x76));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0E));
	if (emu_flags.zf) { f__1A34_1DC7_000D_D0AD(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F6), emu_si);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x76));
	emu_push(emu_cs); emu_push(0x1DC3); emu_cs = 0x34E9; ovl__34E9(2);
	f__1A34_1DC3_0004_01FC();
}

/**
 * Decompiled function f__1A34_1DC3_0004_01FC()
 *
 * @name f__1A34_1DC3_0004_01FC
 * @implements 1A34:1DC3:0004:01FC ()
 *
 * Called From: 1A34:1DC3:0046:5616
 */
void f__1A34_1DC3_0004_01FC()
{
	emu_pop(&emu_cx.x);
	f__1A34_1E90_0003_05EC(); return;
}

/**
 * Decompiled function f__1A34_1DC7_000D_D0AD()
 *
 * @name f__1A34_1DC7_000D_D0AD
 * @implements 1A34:1DC7:000D:D0AD ()
 *
 * Called From: 1A34:1D97:0046:5616
 */
void f__1A34_1DC7_000D_D0AD()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_push(emu_cs); emu_push(0x1DD4); emu_cs = 0x0C10; f__0C10_0182_0012_8DA5();
	f__1A34_1DD4_002D_0483();
}

/**
 * Decompiled function f__1A34_1DD4_002D_0483()
 *
 * @name f__1A34_1DD4_002D_0483
 * @implements 1A34:1DD4:002D:0483 ()
 *
 * Called From: 1A34:1DD4:000D:D0AD
 */
void f__1A34_1DD4_002D_0483()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x72), 0xFF);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_push(emu_cs); emu_push(0x1E01); emu_cs = 0x176C; f__176C_000E_000E_8C63();
	f__1A34_1E01_0038_F23F();
}

/**
 * Decompiled function f__1A34_1E01_0038_F23F()
 *
 * @name f__1A34_1E01_0038_F23F
 * @implements 1A34:1E01:0038:F23F ()
 *
 * Called From: 1A34:1E01:002D:0483
 */
void f__1A34_1E01_0038_F23F()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x0);
	if (!emu_flags.zf) { f__1A34_1E3A_0014_4588(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0xC);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2E8A);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x78));
	emu_push(emu_cs); emu_push(0x1E39); emu_cs = 0x3483; ovl__3483(5);
	f__1A34_1E39_0015_4EA8();
}

/**
 * Decompiled function f__1A34_1E39_0015_4EA8()
 *
 * @name f__1A34_1E39_0015_4EA8
 * @implements 1A34:1E39:0015:4EA8 ()
 *
 * Called From: 1A34:1E39:0038:F23F
 */
void f__1A34_1E39_0015_4EA8()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_di, emu_si);
	if (emu_flags.zf) { emu_ip = 0x1E90; emu_last_cs = 0x1A34; emu_last_ip = 0x1E3C; emu_last_length = 0x0015; emu_last_crc = 0x4EA8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1E4E); emu_cs = 0x01F7; f__01F7_286D_0023_087E();
	f__1A34_1E4E_0028_FC04();
}

/**
 * Decompiled function f__1A34_1E3A_0014_4588()
 *
 * @name f__1A34_1E3A_0014_4588
 * @implements 1A34:1E3A:0014:4588 ()
 *
 * Called From: 1A34:1E1F:0038:F23F
 */
void f__1A34_1E3A_0014_4588()
{
	emu_cmpw(&emu_di, emu_si);
	if (emu_flags.zf) { emu_ip = 0x1E90; emu_last_cs = 0x1A34; emu_last_ip = 0x1E3C; emu_last_length = 0x0014; emu_last_crc = 0x4588; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1E4E); emu_cs = 0x01F7; f__01F7_286D_0023_087E();
	f__1A34_1E4E_0028_FC04();
}

/**
 * Decompiled function f__1A34_1E4E_0028_FC04()
 *
 * @name f__1A34_1E4E_0028_FC04
 * @implements 1A34:1E4E:0028:FC04 ()
 *
 * Called From: 1A34:1E4E:0014:4588
 * Called From: 1A34:1E4E:0015:4EA8
 */
void f__1A34_1E4E_0028_FC04()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__1A34_1E90_0003_05EC(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3C26));
	emu_push(emu_cs); emu_push(0x1E76); emu_cs = 0x348B; ovl__348B(3);
	f__1A34_1E76_0017_5CC4();
}

/**
 * Decompiled function f__1A34_1E76_0017_5CC4()
 *
 * @name f__1A34_1E76_0017_5CC4
 * @implements 1A34:1E76:0017:5CC4 ()
 *
 * Called From: 1A34:1E76:0028:FC04
 */
void f__1A34_1E76_0017_5CC4()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1E8D); emu_cs = 0x348B; ovl__348B(4);
	f__1A34_1E8D_0006_3DCC();
}

/**
 * Decompiled function f__1A34_1E8D_0006_3DCC()
 *
 * @name f__1A34_1E8D_0006_3DCC
 * @implements 1A34:1E8D:0006:3DCC ()
 *
 * Called From: 1A34:1E8D:0017:5CC4
 */
void f__1A34_1E8D_0006_3DCC()
{
	emu_addws(&emu_sp, 0x6);
	f__1A34_1D69_0006_29FA(); return;
}

/**
 * Decompiled function f__1A34_1E90_0003_05EC()
 *
 * @name f__1A34_1E90_0003_05EC
 * @implements 1A34:1E90:0003:05EC ()
 *
 * Called From: 1A34:1DC4:0004:01FC
 * Called From: 1A34:1E5D:0028:FC04
 */
void f__1A34_1E90_0003_05EC()
{
	f__1A34_1D69_0006_29FA(); return;
}

/**
 * Decompiled function f__1A34_1E93_0006_137A()
 *
 * @name f__1A34_1E93_0006_137A
 * @implements 1A34:1E93:0006:137A ()
 *
 * Called From: 1A34:1D6C:0006:29FA
 */
void f__1A34_1E93_0006_137A()
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
 * Decompiled function f__1A34_1E99_0012_0D98()
 *
 * @name f__1A34_1E99_0012_0D98
 * @implements 1A34:1E99:0012:0D98 ()
 *
 * Called From: 0972:0DCF:0012:BE60
 * Called From: 0972:0DEF:0020:9366
 * Called From: 176C:041F:0011:A789
 * Called From: 176C:11F9:001C:2653
 * Called From: 176C:1956:0029:BE13
 * Called From: 176C:1A2A:001C:E993
 * Called From: 176C:1BD1:0026:7BF4
 * Called From: 176C:1BE9:0018:9310
 * Called From: 176C:1CED:0011:A789
 * Called From: 176C:20C8:0036:0004
 * Called From: 176C:20C8:004D:980D
 * Called From: 176C:2996:000E:A64F
 * Called From: 1A34:00DE:0016:09EA
 * Called From: 1A34:0955:001D:D67E
 * Called From: 1A34:096C:0017:B87A
 * Called From: 1A34:16CB:003D:C669
 * Called From: 1A34:16E1:0016:3FAE
 * Called From: B4B5:05EE:001F:7AC7
 * Called From: B4B5:060E:0020:9A46
 */
void f__1A34_1E99_0012_0D98()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_1EAB_0047_53CE(); return; }
	emu_ip = 0x1F50; emu_last_cs = 0x1A34; emu_last_ip = 0x1EA8; emu_last_length = 0x0012; emu_last_crc = 0x0D98; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_1EAB_0047_53CE()
 *
 * @name f__1A34_1EAB_0047_53CE
 * @implements 1A34:1EAB:0047:53CE ()
 *
 * Called From: 1A34:1EA6:0012:0D98
 */
void f__1A34_1EAB_0047_53CE()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addws(&emu_dx.x, 0x62);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0x0);
	if (emu_flags.zf) { f__1A34_1ECF_0023_470C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addws(&emu_dx.x, 0x65);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), emu_ax.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { f__1A34_1EF2_0063_3F8B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), emu_ax.l);
	f__1A34_1F50_0005_04BA(); return;
}

/**
 * Decompiled function f__1A34_1ECF_0023_470C()
 *
 * @name f__1A34_1ECF_0023_470C
 * @implements 1A34:1ECF:0023:470C ()
 *
 * Called From: 1A34:1EBE:0047:53CE
 */
void f__1A34_1ECF_0023_470C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x1), emu_ax.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_flags.zf) { f__1A34_1EF2_0063_3F8B(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), emu_ax.l);
	f__1A34_1F50_0005_04BA(); return;
}

/**
 * Decompiled function f__1A34_1EF2_0063_3F8B()
 *
 * @name f__1A34_1EF2_0063_3F8B
 * @implements 1A34:1EF2:0063:3F8B ()
 *
 * Called From: 1A34:1EE4:0023:470C
 * Called From: 1A34:1EE4:0047:53CE
 */
void f__1A34_1EF2_0063_3F8B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movb(&emu_ax.h, 0x0);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_flags.zf) { f__1A34_1F50_0005_04BA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x42));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_si, emu_dx.x);
	emu_cmpws(&emu_si, 0x80);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_1F3C_0019_F28C(); return; }
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_1F42_0013_41AD(); return; }
	emu_cmpw(&emu_si, 0x80);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_1F50_0005_04BA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_negb(&emu_ax.l, emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_1F3C_0019_F28C()
 *
 * @name f__1A34_1F3C_0019_F28C
 * @implements 1A34:1F3C:0019:F28C ()
 *
 * Called From: 1A34:1F36:0063:3F8B
 */
void f__1A34_1F3C_0019_F28C()
{
	emu_cmpw(&emu_si, 0x80);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_1F50_0005_04BA(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_negb(&emu_ax.l, emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_1F42_0013_41AD()
 *
 * @name f__1A34_1F42_0013_41AD
 * @implements 1A34:1F42:0013:41AD ()
 *
 * Called From: 1A34:1F3A:0063:3F8B
 */
void f__1A34_1F42_0013_41AD()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_negb(&emu_ax.l, emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), emu_ax.l);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_1F50_0005_04BA()
 *
 * @name f__1A34_1F50_0005_04BA
 * @implements 1A34:1F50:0005:04BA ()
 *
 * Called From: 1A34:1EF0:0023:470C
 * Called From: 1A34:1EF0:0047:53CE
 * Called From: 1A34:1EFE:0063:3F8B
 * Called From: 1A34:1F40:0063:3F8B
 * Called From: 1A34:1F40:0019:F28C
 */
void f__1A34_1F50_0005_04BA()
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
 * Decompiled function f__1A34_1F55_0019_9514()
 *
 * @name f__1A34_1F55_0019_9514
 * @implements 1A34:1F55:0019:9514 ()
 *
 * Called From: 176C:043E:0014:AC2A
 * Called From: 176C:043E:001C:38C7
 * Called From: 176C:043E:001F:F8B6
 */
void f__1A34_1F55_0019_9514()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x1F6E; emu_last_cs = 0x1A34; emu_last_ip = 0x1F61; emu_last_length = 0x0019; emu_last_crc = 0x9514; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addws(&emu_dx.x, 0x62);
	f__1A34_1F77_001A_19A8(); return;
}

/**
 * Decompiled function f__1A34_1F77_001A_19A8()
 *
 * @name f__1A34_1F77_001A_19A8
 * @implements 1A34:1F77:001A:19A8 ()
 *
 * Called From: 1A34:1F6C:0019:9514
 */
void f__1A34_1F77_001A_19A8()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__1A34_1F91_003D_0A90(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1A34_2046_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_1F8A_0007_22FC()
 *
 * @name f__1A34_1F8A_0007_22FC
 * @implements 1A34:1F8A:0007:22FC ()
 *
 * Called From: 1A34:2043:0006:3F86
 * Called From: 1A34:2043:0003:07A6
 */
void f__1A34_1F8A_0007_22FC()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1A34_2046_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_1F91_003D_0A90()
 *
 * @name f__1A34_1F91_003D_0A90
 * @implements 1A34:1F91:003D:0A90 ()
 *
 * Called From: 1A34:1F88:001A:19A8
 */
void f__1A34_1F91_003D_0A90()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x1));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_si, emu_ax.x);
	emu_cmpw(&emu_si, 0x80);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_1FBB_0013_00BE(); return; }
	emu_subw(&emu_si, 0x100);
	emu_cmpws(&emu_si, 0x80);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_1FC4_000A_8E19(); return; }
	emu_addw(&emu_si, 0x100);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x1FCE; emu_last_cs = 0x1A34; emu_last_ip = 0x1FC6; emu_last_length = 0x003D; emu_last_crc = 0x0A90; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x1FD0; emu_last_cs = 0x1A34; emu_last_ip = 0x1FCC; emu_last_length = 0x003D; emu_last_crc = 0x0A90; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_1FBB_0013_00BE()
 *
 * @name f__1A34_1FBB_0013_00BE
 * @implements 1A34:1FBB:0013:00BE ()
 *
 * Called From: 1A34:1FB5:003D:0A90
 */
void f__1A34_1FBB_0013_00BE()
{
	emu_cmpws(&emu_si, 0x80);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_1FC4_000A_8E19(); return; }
	emu_addw(&emu_si, 0x100);
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_1FCE_0016_7B77(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x1FD0; emu_last_cs = 0x1A34; emu_last_ip = 0x1FCC; emu_last_length = 0x0013; emu_last_crc = 0x00BE; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_1FC4_000A_8E19()
 *
 * @name f__1A34_1FC4_000A_8E19
 * @implements 1A34:1FC4:000A:8E19 ()
 *
 * Called From: 1A34:1FBE:0013:00BE
 * Called From: 1A34:1FBE:003D:0A90
 */
void f__1A34_1FC4_000A_8E19()
{
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_1FCE_0016_7B77(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__1A34_1FD0_0014_4177(); return;
}

/**
 * Decompiled function f__1A34_1FCE_0016_7B77()
 *
 * @name f__1A34_1FCE_0016_7B77
 * @implements 1A34:1FCE:0016:7B77 ()
 *
 * Called From: 1A34:1FC6:000A:8E19
 * Called From: 1A34:1FC6:0013:00BE
 */
void f__1A34_1FCE_0016_7B77()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_1FE4_0025_8210(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x1FE6; emu_last_cs = 0x1A34; emu_last_ip = 0x1FE2; emu_last_length = 0x0016; emu_last_crc = 0x7B77; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_1FD0_0014_4177()
 *
 * @name f__1A34_1FD0_0014_4177
 * @implements 1A34:1FD0:0014:4177 ()
 *
 * Called From: 1A34:1FCC:000A:8E19
 */
void f__1A34_1FD0_0014_4177()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax.x, emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__1A34_1FE4_0025_8210(); return; }
	emu_movw(&emu_ax.x, emu_di);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__1A34_1FE6_0023_9F00(); return;
}

/**
 * Decompiled function f__1A34_1FE4_0025_8210()
 *
 * @name f__1A34_1FE4_0025_8210
 * @implements 1A34:1FE4:0025:8210 ()
 *
 * Called From: 1A34:1FDC:0016:7B77
 * Called From: 1A34:1FDC:0014:4177
 */
void f__1A34_1FE4_0025_8210()
{
	emu_movw(&emu_ax.x, emu_di);
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_1FF7_0012_144A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), emu_ax.l);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x2009); emu_cs = 0x34CD; ovl__34CD(12);
	f__1A34_2009_000A_2ADD();
}

/**
 * Decompiled function f__1A34_1FE6_0023_9F00()
 *
 * @name f__1A34_1FE6_0023_9F00
 * @implements 1A34:1FE6:0023:9F00 ()
 *
 * Called From: 1A34:1FE2:0014:4177
 */
void f__1A34_1FE6_0023_9F00()
{
	emu_cmpw(&emu_ax.x, emu_si);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_1FF7_0012_144A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x0), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), emu_ax.l);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x2009); emu_cs = 0x34CD; ovl__34CD(12);
	f__1A34_2009_000A_2ADD();
}

/**
 * Decompiled function f__1A34_1FF7_0012_144A()
 *
 * @name f__1A34_1FF7_0012_144A
 * @implements 1A34:1FF7:0012:144A ()
 *
 * Called From: 1A34:1FE8:0023:9F00
 * Called From: 1A34:1FE8:0025:8210
 */
void f__1A34_1FF7_0012_144A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), emu_ax.l);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x2009); emu_cs = 0x34CD; ovl__34CD(12);
	f__1A34_2009_000A_2ADD();
}

/**
 * Decompiled function f__1A34_2009_000A_2ADD()
 *
 * @name f__1A34_2009_000A_2ADD
 * @implements 1A34:2009:000A:2ADD ()
 *
 * Called From: 1A34:2009:0012:144A
 * Called From: 1A34:2009:0023:9F00
 * Called From: 1A34:2009:0025:8210
 */
void f__1A34_2009_000A_2ADD()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x2013); emu_cs = 0x34CD; ovl__34CD(12);
	f__1A34_2013_000E_3975();
}

/**
 * Decompiled function f__1A34_2013_000E_3975()
 *
 * @name f__1A34_2013_000E_3975
 * @implements 1A34:2013:000E:3975 ()
 *
 * Called From: 1A34:2013:000A:2ADD
 */
void f__1A34_2013_000E_3975()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_ax.x);
	if (!emu_flags.zf) { f__1A34_2031_000F_2692(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x2021); emu_cs = 0x34CD; ovl__34CD(19);
	f__1A34_2021_000A_28ED();
}

/**
 * Decompiled function f__1A34_2021_000A_28ED()
 *
 * @name f__1A34_2021_000A_28ED
 * @implements 1A34:2021:000A:28ED ()
 *
 * Called From: 1A34:2021:000E:3975
 */
void f__1A34_2021_000A_28ED()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x202B); emu_cs = 0x34CD; ovl__34CD(19);
	f__1A34_202B_0015_2A70();
}

/**
 * Decompiled function f__1A34_202B_0015_2A70()
 *
 * @name f__1A34_202B_0015_2A70
 * @implements 1A34:202B:0015:2A70 ()
 *
 * Called From: 1A34:202B:000A:28ED
 */
void f__1A34_202B_0015_2A70()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_ax.x);
	if (emu_flags.zf) { f__1A34_2043_0003_07A6(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2040); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_2040_0006_3F86();
}

/**
 * Decompiled function f__1A34_2031_000F_2692()
 *
 * @name f__1A34_2031_000F_2692
 * @implements 1A34:2031:000F:2692 ()
 *
 * Called From: 1A34:2017:000E:3975
 */
void f__1A34_2031_000F_2692()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2040); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_2040_0006_3F86();
}

/**
 * Decompiled function f__1A34_2040_0006_3F86()
 *
 * @name f__1A34_2040_0006_3F86
 * @implements 1A34:2040:0006:3F86 ()
 *
 * Called From: 1A34:2040:000F:2692
 * Called From: 1A34:2040:0015:2A70
 */
void f__1A34_2040_0006_3F86()
{
	emu_addws(&emu_sp, 0x6);
	f__1A34_1F8A_0007_22FC(); return;
}

/**
 * Decompiled function f__1A34_2043_0003_07A6()
 *
 * @name f__1A34_2043_0003_07A6
 * @implements 1A34:2043:0003:07A6 ()
 *
 * Called From: 1A34:202F:0015:2A70
 */
void f__1A34_2043_0003_07A6()
{
	f__1A34_1F8A_0007_22FC(); return;
}

/**
 * Decompiled function f__1A34_2046_0006_137A()
 *
 * @name f__1A34_2046_0006_137A
 * @implements 1A34:2046:0006:137A ()
 *
 * Called From: 1A34:1F8E:001A:19A8
 * Called From: 1A34:1F8E:0007:22FC
 */
void f__1A34_2046_0006_137A()
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
 * Decompiled function f__1A34_204C_0043_9483()
 *
 * @name f__1A34_204C_0043_9483
 * @implements 1A34:204C:0043:9483 ()
 *
 * Called From: 176C:0FB0:0013:ABE0
 * Called From: 176C:1047:0013:2D05
 * Called From: 176C:1106:0010:AABC
 * Called From: 176C:1275:0010:2A9A
 * Called From: 1A34:077F:000E:232F
 * Called From: 1A34:097D:0011:F06D
 * Called From: 1A34:0AEF:000F:F383
 * Called From: 1A34:17D5:000C:91E3
 * Called From: 1A34:17D5:0053:305C
 * Called From: 1A34:17D5:0030:7872
 * Called From: B4B5:061F:0011:F9B5
 */
void f__1A34_204C_0043_9483()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x2);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6A), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x69), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x68), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { f__1A34_2094_0009_76F5(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x58));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0xFF);
	emu_subw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x208F); emu_cs = 0x34C1; ovl__34C1(0);
	f__1A34_208F_000E_9EE2();
}

/**
 * Decompiled function f__1A34_208F_000E_9EE2()
 *
 * @name f__1A34_208F_000E_9EE2
 * @implements 1A34:208F:000E:9EE2 ()
 *
 * Called From: 1A34:208F:0043:9483
 */
void f__1A34_208F_000E_9EE2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__1A34_209D_000A_F97E(); return; }
	f__1A34_2128_000C_1434(); return;
}

/**
 * Decompiled function f__1A34_2094_0009_76F5()
 *
 * @name f__1A34_2094_0009_76F5
 * @implements 1A34:2094:0009:76F5 ()
 *
 * Called From: 1A34:2077:0043:9483
 */
void f__1A34_2094_0009_76F5()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!emu_flags.zf) { f__1A34_209D_000A_F97E(); return; }
	f__1A34_2128_000C_1434(); return;
}

/**
 * Decompiled function f__1A34_209D_000A_F97E()
 *
 * @name f__1A34_209D_000A_F97E
 * @implements 1A34:209D:000A:F97E ()
 *
 * Called From: 1A34:2098:0009:76F5
 * Called From: 1A34:2098:000E:9EE2
 */
void f__1A34_209D_000A_F97E()
{
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x100);
	if (emu_flags.cf) { f__1A34_20A7_002B_FA48(); return; }
	emu_ip = 0x2128; emu_last_cs = 0x1A34; emu_last_ip = 0x20A4; emu_last_length = 0x000A; emu_last_crc = 0xF97E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_20A7_002B_FA48()
 *
 * @name f__1A34_20A7_002B_FA48
 * @implements 1A34:20A7:002B:FA48 ()
 *
 * Called From: 1A34:20A2:000A:F97E
 */
void f__1A34_20A7_002B_FA48()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6B), emu_ax.l);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x40));
	emu_push(emu_cs); emu_push(0x20D2); emu_cs = 0x34C1; ovl__34C1(0);
	f__1A34_20D2_0019_CAB4();
}

/**
 * Decompiled function f__1A34_20D2_0019_CAB4()
 *
 * @name f__1A34_20D2_0019_CAB4
 * @implements 1A34:20D2:0019:CAB4 ()
 *
 * Called From: 1A34:20D2:002B:FA48
 */
void f__1A34_20D2_0019_CAB4()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x20EB); emu_cs = 0x07C9; f__07C9_000F_0050_0FEA();
	f__1A34_20EB_0022_1248();
}

/**
 * Decompiled function f__1A34_20EB_0022_1248()
 *
 * @name f__1A34_20EB_0022_1248
 * @implements 1A34:20EB:0022:1248 ()
 *
 * Called From: 1A34:20EB:0019:CAB4
 */
void f__1A34_20EB_0022_1248()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_cx.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { f__1A34_210D_001B_1386(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	f__1A34_2112_0016_2681(); return;
}

/**
 * Decompiled function f__1A34_210D_001B_1386()
 *
 * @name f__1A34_210D_001B_1386
 * @implements 1A34:210D:001B:1386 ()
 *
 * Called From: 1A34:2104:0022:1248
 */
void f__1A34_210D_001B_1386()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6A), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x68), emu_ax.l);
	f__1A34_2130_0004_0F7A(); return;
}

/**
 * Decompiled function f__1A34_2112_0016_2681()
 *
 * @name f__1A34_2112_0016_2681
 * @implements 1A34:2112:0016:2681 ()
 *
 * Called From: 1A34:210B:0022:1248
 */
void f__1A34_2112_0016_2681()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6A), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x68), emu_ax.l);
	f__1A34_2130_0004_0F7A(); return;
}

/**
 * Decompiled function f__1A34_2128_000C_1434()
 *
 * @name f__1A34_2128_000C_1434
 * @implements 1A34:2128:000C:1434 ()
 *
 * Called From: 1A34:209A:0009:76F5
 * Called From: 1A34:209A:000E:9EE2
 */
void f__1A34_2128_000C_1434()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6B), 0x0);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2130_0004_0F7A()
 *
 * @name f__1A34_2130_0004_0F7A
 * @implements 1A34:2130:0004:0F7A ()
 *
 * Called From: 1A34:2126:001B:1386
 * Called From: 1A34:2126:0016:2681
 */
void f__1A34_2130_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2134_001E_2B9E()
 *
 * @name f__1A34_2134_001E_2B9E
 * @implements 1A34:2134:001E:2B9E ()
 *
 * Called From: 176C:0368:000D:AD73
 */
void f__1A34_2134_001E_2B9E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x6A));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__1A34_2152_0029_6871(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1A34_21DA_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_214B_0007_2208()
 *
 * @name f__1A34_214B_0007_2208
 * @implements 1A34:214B:0007:2208 ()
 *
 * Called From: 1A34:21D7:000D:321D
 * Called From: 1A34:21D7:0010:B2FD
 */
void f__1A34_214B_0007_2208()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1A34_21DA_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_2152_0029_6871()
 *
 * @name f__1A34_2152_0029_6871
 * @implements 1A34:2152:0029:6871 ()
 *
 * Called From: 1A34:2149:001E:2B9E
 */
void f__1A34_2152_0029_6871()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x69));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x68));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_di, emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x217B); emu_cs = 0x07C9; f__07C9_000F_0050_0FEA();
	f__1A34_217B_0033_6F92();
}

/**
 * Decompiled function f__1A34_217B_0033_6F92()
 *
 * @name f__1A34_217B_0033_6F92
 * @implements 1A34:217B:0033:6F92 ()
 *
 * Called From: 1A34:217B:0029:6871
 */
void f__1A34_217B_0033_6F92()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF00);
	if (emu_flags.zf) { f__1A34_21CD_000D_321D(); return; }
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_si, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4B));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x49));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x21AE); emu_cs = 0x0F3F; f__0F3F_00B4_002A_0887();
	f__1A34_21AE_001C_82C6();
}

/**
 * Decompiled function f__1A34_21AE_001C_82C6()
 *
 * @name f__1A34_21AE_001C_82C6
 * @implements 1A34:21AE:001C:82C6 ()
 *
 * Called From: 1A34:21AE:0033:6F92
 */
void f__1A34_21AE_001C_82C6()
{
	emu_addws(&emu_sp, 0x8);
	emu_addw(&emu_ax.x, 0x10);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	if (!emu_flags.cf) { f__1A34_21BF_000B_CC31(); return; }
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x21CA); f__1A34_0005_001F_2A0F();
	f__1A34_21CA_0010_B2FD();
}

/**
 * Decompiled function f__1A34_21BF_000B_CC31()
 *
 * @name f__1A34_21BF_000B_CC31
 * @implements 1A34:21BF:000B:CC31 ()
 *
 * Called From: 1A34:21BA:001C:82C6
 */
void f__1A34_21BF_000B_CC31()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x21CA); f__1A34_0005_001F_2A0F();
	f__1A34_21CA_0010_B2FD();
}

/**
 * Decompiled function f__1A34_21CA_0010_B2FD()
 *
 * @name f__1A34_21CA_0010_B2FD
 * @implements 1A34:21CA:0010:B2FD ()
 *
 * Called From: 1A34:21CA:000B:CC31
 * Called From: 1A34:21CA:001C:82C6
 */
void f__1A34_21CA_0010_B2FD()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x69), emu_ax.l);
	f__1A34_214B_0007_2208(); return;
}

/**
 * Decompiled function f__1A34_21CD_000D_321D()
 *
 * @name f__1A34_21CD_000D_321D
 * @implements 1A34:21CD:000D:321D ()
 *
 * Called From: 1A34:2188:0033:6F92
 */
void f__1A34_21CD_000D_321D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x69), emu_ax.l);
	f__1A34_214B_0007_2208(); return;
}

/**
 * Decompiled function f__1A34_21DA_0006_137A()
 *
 * @name f__1A34_21DA_0006_137A
 * @implements 1A34:21DA:0006:137A ()
 *
 * Called From: 1A34:214F:001E:2B9E
 * Called From: 1A34:214F:0007:2208
 */
void f__1A34_21DA_0006_137A()
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
 * Decompiled function f__1A34_21E0_001A_FB21()
 *
 * @name f__1A34_21E0_001A_FB21
 * @implements 1A34:21E0:001A:FB21 ()
 *
 * Called From: 1391:05A9:0012:00F3
 */
void f__1A34_21E0_001A_FB21()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x21FA); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__1A34_21FA_0005_1F48();
}

/**
 * Decompiled function f__1A34_21FA_0005_1F48()
 *
 * @name f__1A34_21FA_0005_1F48
 * @implements 1A34:21FA:0005:1F48 ()
 *
 * Called From: 1A34:21FA:001A:FB21
 */
void f__1A34_21FA_0005_1F48()
{
	emu_addws(&emu_sp, 0x8);
	f__1A34_2241_001D_03D9(); return;
}

/**
 * Decompiled function f__1A34_21FF_0015_0A5C()
 *
 * @name f__1A34_21FF_0015_0A5C
 * @implements 1A34:21FF:0015:0A5C ()
 *
 * Called From: 1A34:224D:001D:03D9
 * Called From: 1A34:224D:001F:C3E3
 */
void f__1A34_21FF_0015_0A5C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x4);
	if (emu_flags.zf) { emu_ip = 0x2234; emu_last_cs = 0x1A34; emu_last_ip = 0x2207; emu_last_length = 0x0015; emu_last_crc = 0x0A5C; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs);
	emu_push(0x2214); f__1A34_3491_0032_DE4A();
	f__1A34_2214_0020_9029();
}

/**
 * Decompiled function f__1A34_2214_0020_9029()
 *
 * @name f__1A34_2214_0020_9029
 * @implements 1A34:2214:0020:9029 ()
 *
 * Called From: 1A34:2214:0015:0A5C
 */
void f__1A34_2214_0020_9029()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_2234_000B_0232(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { f__1A34_2234_000B_0232(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__1A34_2327_0005_04BA(); return;
}

/**
 * Decompiled function f__1A34_222E_0006_2AA4()
 *
 * @name f__1A34_222E_0006_2AA4
 * @implements 1A34:222E:0006:2AA4 ()
 *
 * Called From: 1A34:2288:001C:596F
 * Called From: 1A34:22B5:0009:D75E
 */
void f__1A34_222E_0006_2AA4()
{
	emu_movw(&emu_ax.x, 0x1);
	f__1A34_2327_0005_04BA(); return;
}

/**
 * Decompiled function f__1A34_2231_0003_0484()
 *
 * @name f__1A34_2231_0003_0484
 * @implements 1A34:2231:0003:0484 ()
 *
 * Called From: 1A34:2324:0005:0CFE
 */
void f__1A34_2231_0003_0484()
{
	f__1A34_2327_0005_04BA(); return;
}

/**
 * Decompiled function f__1A34_2234_000B_0232()
 *
 * @name f__1A34_2234_000B_0232
 * @implements 1A34:2234:000B:0232 ()
 *
 * Called From: 1A34:2222:0020:9029
 * Called From: 1A34:222C:0020:9029
 */
void f__1A34_2234_000B_0232()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x223F); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	f__1A34_223F_001F_C3E3();
}

/**
 * Decompiled function f__1A34_223F_001F_C3E3()
 *
 * @name f__1A34_223F_001F_C3E3
 * @implements 1A34:223F:001F:C3E3 ()
 *
 * Called From: 1A34:223F:000B:0232
 */
void f__1A34_223F_001F_C3E3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { f__1A34_21FF_0015_0A5C(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x225E); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	f__1A34_225E_0005_1FA4();
}

/**
 * Decompiled function f__1A34_2241_001D_03D9()
 *
 * @name f__1A34_2241_001D_03D9
 * @implements 1A34:2241:001D:03D9 ()
 *
 * Called From: 1A34:21FD:0005:1F48
 */
void f__1A34_2241_001D_03D9()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { f__1A34_21FF_0015_0A5C(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x225E); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	f__1A34_225E_0005_1FA4();
}

/**
 * Decompiled function f__1A34_225E_0005_1FA4()
 *
 * @name f__1A34_225E_0005_1FA4
 * @implements 1A34:225E:0005:1FA4 ()
 *
 * Called From: 1A34:225E:001F:C3E3
 * Called From: 1A34:225E:001D:03D9
 */
void f__1A34_225E_0005_1FA4()
{
	emu_addws(&emu_sp, 0x8);
	f__1A34_2297_0018_8235(); return;
}

/**
 * Decompiled function f__1A34_2263_000B_3B0F()
 *
 * @name f__1A34_2263_000B_3B0F
 * @implements 1A34:2263:000B:3B0F ()
 *
 * Called From: 1A34:22A3:0018:8235
 */
void f__1A34_2263_000B_3B0F()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x226E); f__1A34_3491_0032_DE4A();
	f__1A34_226E_001C_596F();
}

/**
 * Decompiled function f__1A34_226E_001C_596F()
 *
 * @name f__1A34_226E_001C_596F
 * @implements 1A34:226E:001C:596F ()
 *
 * Called From: 1A34:226E:000B:3B0F
 */
void f__1A34_226E_001C_596F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_228A_000B_086C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { emu_ip = 0x228A; emu_last_cs = 0x1A34; emu_last_ip = 0x2286; emu_last_length = 0x001C; emu_last_crc = 0x596F; emu_call(); return; } // Jump does not resolve
	f__1A34_222E_0006_2AA4(); return;
}

/**
 * Decompiled function f__1A34_228A_000B_086C()
 *
 * @name f__1A34_228A_000B_086C
 * @implements 1A34:228A:000B:086C ()
 *
 * Called From: 1A34:227C:001C:596F
 */
void f__1A34_228A_000B_086C()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2295); emu_cs = 0x0FE4; f__0FE4_0283_0038_0940();
	f__1A34_2295_001A_5434();
}

/**
 * Decompiled function f__1A34_2295_001A_5434()
 *
 * @name f__1A34_2295_001A_5434
 * @implements 1A34:2295:001A:5434 ()
 *
 * Called From: 1A34:2295:000B:086C
 */
void f__1A34_2295_001A_5434()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { emu_ip = 0x2263; emu_last_cs = 0x1A34; emu_last_ip = 0x22A3; emu_last_length = 0x001A; emu_last_crc = 0x5434; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x22AF); emu_cs = 0x0FE4; f__0FE4_0333_000F_265C();
	f__1A34_22AF_0009_D75E();
}

/**
 * Decompiled function f__1A34_2297_0018_8235()
 *
 * @name f__1A34_2297_0018_8235
 * @implements 1A34:2297:0018:8235 ()
 *
 * Called From: 1A34:2261:0005:1FA4
 */
void f__1A34_2297_0018_8235()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1A34_2263_000B_3B0F(); return; }
	emu_movw(&emu_ax.x, 0x10);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x22AF); emu_cs = 0x0FE4; f__0FE4_0333_000F_265C();
	f__1A34_22AF_0009_D75E();
}

/**
 * Decompiled function f__1A34_22AF_0009_D75E()
 *
 * @name f__1A34_22AF_0009_D75E
 * @implements 1A34:22AF:0009:D75E ()
 *
 * Called From: 1A34:22AF:0018:8235
 * Called From: 1A34:22AF:001A:5434
 */
void f__1A34_22AF_0009_D75E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__1A34_22B8_0010_6E8B(); return; }
	f__1A34_222E_0006_2AA4(); return;
}

/**
 * Decompiled function f__1A34_22B8_0010_6E8B()
 *
 * @name f__1A34_22B8_0010_6E8B
 * @implements 1A34:22B8:0010:6E8B ()
 *
 * Called From: 1A34:22B3:0009:D75E
 */
void f__1A34_22B8_0010_6E8B()
{
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x22C8); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__1A34_22C8_001C_1081();
}

/**
 * Decompiled function f__1A34_22C8_001C_1081()
 *
 * @name f__1A34_22C8_001C_1081
 * @implements 1A34:22C8:001C:1081 ()
 *
 * Called From: 1A34:22C8:0010:6E8B
 */
void f__1A34_22C8_001C_1081()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__1A34_2322_0005_0CFE(); return; }
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x22E4); emu_cs = 0x167E; emu_ip = 0x23D7; emu_last_cs = 0x1A34; emu_last_ip = 0x22DF; emu_last_length = 0x001C; emu_last_crc = 0x1081; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_2322_0005_0CFE()
 *
 * @name f__1A34_2322_0005_0CFE
 * @implements 1A34:2322:0005:0CFE ()
 *
 * Called From: 1A34:22D3:001C:1081
 */
void f__1A34_2322_0005_0CFE()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1A34_2231_0003_0484(); return;
}

/**
 * Decompiled function f__1A34_2327_0005_04BA()
 *
 * @name f__1A34_2327_0005_04BA
 * @implements 1A34:2327:0005:04BA ()
 *
 * Called From: 1A34:2231:0003:0484
 * Called From: 1A34:2231:0006:2AA4
 * Called From: 1A34:2231:0020:9029
 */
void f__1A34_2327_0005_04BA()
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
 * Decompiled function f__1A34_232C_0011_E32F()
 *
 * @name f__1A34_232C_0011_E32F
 * @implements 1A34:232C:0011:E32F ()
 *
 * Called From: 0AEC:058A:0010:0A8B
 */
void f__1A34_232C_0011_E32F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x233D); emu_cs = 0x2BB4; f__2BB4_0004_0027_4CDD();
	f__1A34_233D_0009_449C();
}

/**
 * Decompiled function f__1A34_233D_0009_449C()
 *
 * @name f__1A34_233D_0009_449C
 * @implements 1A34:233D:0009:449C ()
 *
 * Called From: 1A34:233D:0011:E32F
 */
void f__1A34_233D_0009_449C()
{
	emu_andw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2346); emu_cs = 0x34CD; ovl__34CD(24);
	f__1A34_2346_0008_7BF2();
}

/**
 * Decompiled function f__1A34_2346_0008_7BF2()
 *
 * @name f__1A34_2346_0008_7BF2
 * @implements 1A34:2346:0008:7BF2 ()
 *
 * Called From: 1A34:2346:0009:449C
 */
void f__1A34_2346_0008_7BF2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x234E); emu_cs = 0x0F3F; f__0F3F_009D_0017_C9BF();
	f__1A34_234E_000D_F8E3();
}

/**
 * Decompiled function f__1A34_234E_000D_F8E3()
 *
 * @name f__1A34_234E_000D_F8E3
 * @implements 1A34:234E:000D:F8E3 ()
 *
 * Called From: 1A34:234E:0008:7BF2
 */
void f__1A34_234E_000D_F8E3()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x235B); emu_cs = 0x10BE; f__10BE_01AB_002F_5CC7();
	f__1A34_235B_001A_7DA0();
}

/**
 * Decompiled function f__1A34_235B_001A_7DA0()
 *
 * @name f__1A34_235B_001A_7DA0
 * @implements 1A34:235B:001A:7DA0 ()
 *
 * Called From: 1A34:235B:000D:F8E3
 */
void f__1A34_235B_001A_7DA0()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, 0x2000);
	emu_movw(&emu_dx.x, 0x2000);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x2375); emu_cs = 0x0F3F; f__0F3F_0125_000D_0828();
	f__1A34_2375_0036_F0E9();
}

/**
 * Decompiled function f__1A34_2375_0036_F0E9()
 *
 * @name f__1A34_2375_0036_F0E9
 * @implements 1A34:2375:0036:F0E9 ()
 *
 * Called From: 1A34:2375:001A:7DA0
 */
void f__1A34_2375_0036_F0E9()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (!emu_flags.zf) { f__1A34_23EB_0019_8B78(); return; }
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x23AB); emu_ip = 0x08FB; emu_last_cs = 0x1A34; emu_last_ip = 0x23A8; emu_last_length = 0x0036; emu_last_crc = 0xF0E9; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_23DF_0009_1DCB()
 *
 * @name f__1A34_23DF_0009_1DCB
 * @implements 1A34:23DF:0009:1DCB ()
 *
 * Called From: 1A34:24B0:0006:3E26
 */
void f__1A34_23DF_0009_1DCB()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__1A34_24F8_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_23EB_0019_8B78()
 *
 * @name f__1A34_23EB_0019_8B78
 * @implements 1A34:23EB:0019:8B78 ()
 *
 * Called From: 1A34:2390:0036:F0E9
 */
void f__1A34_23EB_0019_8B78()
{
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x2404); f__1A34_08FB_002C_227A();
	f__1A34_2404_0018_5E0C();
}

/**
 * Decompiled function f__1A34_2404_0018_5E0C()
 *
 * @name f__1A34_2404_0018_5E0C
 * @implements 1A34:2404:0018:5E0C ()
 *
 * Called From: 1A34:2404:0019:8B78
 */
void f__1A34_2404_0018_5E0C()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1A34_241C_000A_B01F(); return; }
	emu_ip = 0x24DA; emu_last_cs = 0x1A34; emu_last_ip = 0x2419; emu_last_length = 0x0018; emu_last_crc = 0x5E0C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_241C_000A_B01F()
 *
 * @name f__1A34_241C_000A_B01F
 * @implements 1A34:241C:000A:B01F ()
 *
 * Called From: 1A34:2417:0018:5E0C
 */
void f__1A34_241C_000A_B01F()
{
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2426); emu_cs = 0x1423; f__1423_0F34_0017_4318();
	f__1A34_2426_000F_BC12();
}

/**
 * Decompiled function f__1A34_2426_000F_BC12()
 *
 * @name f__1A34_2426_000F_BC12
 * @implements 1A34:2426:000F:BC12 ()
 *
 * Called From: 1A34:2426:000A:B01F
 */
void f__1A34_2426_000F_BC12()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1A34_243B_0024_5608(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2435); emu_cs = 0x0FE4; emu_ip = 0x2768; emu_last_cs = 0x1A34; emu_last_ip = 0x2430; emu_last_length = 0x000F; emu_last_crc = 0xBC12; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_243B_0024_5608()
 *
 * @name f__1A34_243B_0024_5608
 * @implements 1A34:243B:0024:5608 ()
 *
 * Called From: 1A34:242A:000F:BC12
 */
void f__1A34_243B_0024_5608()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x200);
	emu_incw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_movw(&emu_dx.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x245F); f__1A34_08FB_002C_227A();
	f__1A34_245F_004E_82DA();
}

/**
 * Decompiled function f__1A34_245F_004E_82DA()
 *
 * @name f__1A34_245F_004E_82DA
 * @implements 1A34:245F:004E:82DA ()
 *
 * Called From: 1A34:245F:0024:5608
 */
void f__1A34_245F_004E_82DA()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_decw(&emu_get_memory16(emu_ds, 0x00,  0x38BC));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x24B5; emu_last_cs = 0x1A34; emu_last_ip = 0x2472; emu_last_length = 0x004E; emu_last_crc = 0x82DA; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x100);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_pop(&emu_es);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), emu_ax.l);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x10);
	if (!emu_flags.zf) { emu_ip = 0x249A; emu_last_cs = 0x1A34; emu_last_ip = 0x2490; emu_last_length = 0x004E; emu_last_crc = 0x82DA; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), 0x1);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_flags.zf) { emu_ip = 0x24B0; emu_last_cs = 0x1A34; emu_last_ip = 0x249E; emu_last_length = 0x004E; emu_last_crc = 0x82DA; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x24AD); f__1A34_1B68_0019_2EA6();
	f__1A34_24AD_0006_3E26();
}

/**
 * Decompiled function f__1A34_24AD_0006_3E26()
 *
 * @name f__1A34_24AD_0006_3E26
 * @implements 1A34:24AD:0006:3E26 ()
 *
 * Called From: 1A34:24AD:004E:82DA
 */
void f__1A34_24AD_0006_3E26()
{
	emu_addws(&emu_sp, 0x6);
	f__1A34_23DF_0009_1DCB(); return;
}

/**
 * Decompiled function f__1A34_24F8_0006_137A()
 *
 * @name f__1A34_24F8_0006_137A
 * @implements 1A34:24F8:0006:137A ()
 *
 * Called From: 1A34:23E5:0009:1DCB
 */
void f__1A34_24F8_0006_137A()
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
 * Decompiled function f__1A34_24FE_002F_1117()
 *
 * @name f__1A34_24FE_002F_1117
 * @implements 1A34:24FE:002F:1117 ()
 *
 * Called From: 176C:180C:0017:91B6
 */
void f__1A34_24FE_002F_1117()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax.x, emu_si);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x252D); emu_cs = 0x167E; f__167E_01BB_0010_ECB8();
	f__1A34_252D_000F_5ECB();
}

/**
 * Decompiled function f__1A34_252D_000F_5ECB()
 *
 * @name f__1A34_252D_000F_5ECB
 * @implements 1A34:252D:000F:5ECB ()
 *
 * Called From: 1A34:252D:002F:1117
 */
void f__1A34_252D_000F_5ECB()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x253C); emu_cs = 0x167E; f__167E_0005_0013_D62A();
	f__1A34_253C_0008_647C();
}

/**
 * Decompiled function f__1A34_253C_0008_647C()
 *
 * @name f__1A34_253C_0008_647C
 * @implements 1A34:253C:0008:647C ()
 *
 * Called From: 1A34:253C:000F:5ECB
 */
void f__1A34_253C_0008_647C()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1A34_2544_000D_E643(); return; }
	emu_ip = 0x278C; emu_last_cs = 0x1A34; emu_last_ip = 0x2541; emu_last_length = 0x0008; emu_last_crc = 0x647C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_2544_000D_E643()
 *
 * @name f__1A34_2544_000D_E643
 * @implements 1A34:2544:000D:E643 ()
 *
 * Called From: 1A34:253F:0008:647C
 */
void f__1A34_2544_000D_E643()
{
	emu_movw(&emu_bx.x, emu_si);
	emu_subws(&emu_bx.x, 0x12);
	emu_cmpws(&emu_bx.x, 0x6);
	if ((emu_flags.cf || emu_flags.zf)) { f__1A34_2551_0007_5D6E(); return; }
	emu_ip = 0x278A; emu_last_cs = 0x1A34; emu_last_ip = 0x254E; emu_last_length = 0x000D; emu_last_crc = 0xE643; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_2551_0007_5D6E()
 *
 * @name f__1A34_2551_0007_5D6E
 * @implements 1A34:2551:0007:5D6E ()
 *
 * Called From: 1A34:254C:000D:E643
 */
void f__1A34_2551_0007_5D6E()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x279A);
	switch (emu_ip) {
		case 0x2558: f__1A34_2558_0011_05B3(); return;
		case 0x26AC: f__1A34_26AC_0011_05B3(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1A34; emu_last_ip = 0x2553; emu_last_length = 0x0007; emu_last_crc = 0x5D6E;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__1A34_2558_0011_05B3()
 *
 * @name f__1A34_2558_0011_05B3
 * @implements 1A34:2558:0011:05B3 ()
 *
 * Called From: 1A34:2553:0007:5D6E
 */
void f__1A34_2558_0011_05B3()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2569); emu_cs = 0x0F3F; f__0F3F_0125_000D_0828();
	f__1A34_2569_001B_7B1B();
}

/**
 * Decompiled function f__1A34_2569_001B_7B1B()
 *
 * @name f__1A34_2569_001B_7B1B
 * @implements 1A34:2569:001B:7B1B ()
 *
 * Called From: 1A34:2569:0011:05B3
 */
void f__1A34_2569_001B_7B1B()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x2584); f__1A34_08FB_002C_227A();
	f__1A34_2584_0014_E924();
}

/**
 * Decompiled function f__1A34_2584_0014_E924()
 *
 * @name f__1A34_2584_0014_E924
 * @implements 1A34:2584:0014:E924 ()
 *
 * Called From: 1A34:2584:001B:7B1B
 */
void f__1A34_2584_0014_E924()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1A34_2598_0012_2ED3(); return; }
	emu_ip = 0x26A9; emu_last_cs = 0x1A34; emu_last_ip = 0x2595; emu_last_length = 0x0014; emu_last_crc = 0xE924; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_2598_0012_2ED3()
 *
 * @name f__1A34_2598_0012_2ED3
 * @implements 1A34:2598:0012:2ED3 ()
 *
 * Called From: 1A34:2593:0014:E924
 */
void f__1A34_2598_0012_2ED3()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x58));
	emu_push(emu_cs); emu_push(0x25AA); emu_cs = 0x3483; ovl__3483(0);
	f__1A34_25AA_0038_92CC();
}

/**
 * Decompiled function f__1A34_25AA_0038_92CC()
 *
 * @name f__1A34_25AA_0038_92CC
 * @implements 1A34:25AA:0038:92CC ()
 *
 * Called From: 1A34:25AA:0012:2ED3
 */
void f__1A34_25AA_0038_92CC()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4B), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x49), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x36), 0x4000);
	if (emu_flags.zf) { f__1A34_262F_0016_72EF(); return; }
	emu_push(emu_cs); emu_push(0x25E2); emu_cs = 0x2BB4; emu_ip = 0x25E6; emu_last_cs = 0x1A34; emu_last_ip = 0x25DD; emu_last_length = 0x0038; emu_last_crc = 0x92CC; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_262F_0016_72EF()
 *
 * @name f__1A34_262F_0016_72EF
 * @implements 1A34:262F:0016:72EF ()
 *
 * Called From: 1A34:25DB:0038:92CC
 */
void f__1A34_262F_0016_72EF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x50));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x51), emu_ax.l);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x2645); emu_cs = 0x167E; f__167E_0284_000C_AAF8();
	f__1A34_2645_0061_2385();
}

/**
 * Decompiled function f__1A34_2645_0061_2385()
 *
 * @name f__1A34_2645_0061_2385
 * @implements 1A34:2645:0061:2385 ()
 *
 * Called From: 1A34:2645:0016:72EF
 */
void f__1A34_2645_0061_2385()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { emu_ip = 0x2677; emu_last_cs = 0x1A34; emu_last_ip = 0x2652; emu_last_length = 0x0061; emu_last_crc = 0x2385; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (!emu_flags.zf) { f__1A34_2677_002F_449F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shlb(&emu_get_memory8(emu_es, emu_bx.x,  0x51), 0x1);
	emu_cmpws(&emu_si, 0x12);
	if (emu_flags.zf) { emu_ip = 0x26A9; emu_last_cs = 0x1A34; emu_last_ip = 0x267A; emu_last_length = 0x0061; emu_last_crc = 0x2385; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ds, 0x00,  0x3A38));
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x26A9; emu_last_cs = 0x1A34; emu_last_ip = 0x2690; emu_last_length = 0x0061; emu_last_crc = 0x2385; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x26A6); emu_cs = 0x34CD; emu_ip = 0x2761; emu_last_cs = 0x1A34; emu_last_ip = 0x26A1; emu_last_length = 0x0061; emu_last_crc = 0x2385; emu_call(); // Jump does not resolve
	f__1A34_26A6_0006_3CE8();
}

/**
 * Decompiled function f__1A34_2677_002F_449F()
 *
 * @name f__1A34_2677_002F_449F
 * @implements 1A34:2677:002F:449F ()
 *
 * Called From: 1A34:266E:0061:2385
 */
void f__1A34_2677_002F_449F()
{
	emu_cmpws(&emu_si, 0x12);
	if (emu_flags.zf) { emu_ip = 0x26A9; emu_last_cs = 0x1A34; emu_last_ip = 0x267A; emu_last_length = 0x002F; emu_last_crc = 0x449F; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ds, 0x00,  0x3A38));
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x26A9; emu_last_cs = 0x1A34; emu_last_ip = 0x2690; emu_last_length = 0x002F; emu_last_crc = 0x449F; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x26A6); emu_cs = 0x34CD; ovl__34CD(31);
	f__1A34_26A6_0006_3CE8();
}

/**
 * Decompiled function f__1A34_26A6_0006_3CE8()
 *
 * @name f__1A34_26A6_0006_3CE8
 * @implements 1A34:26A6:0006:3CE8 ()
 *
 * Called From: 1A34:26A6:002F:449F
 */
void f__1A34_26A6_0006_3CE8()
{
	emu_addws(&emu_sp, 0x6);
	f__1A34_278C_0008_8ECC(); return;
}

/**
 * Decompiled function f__1A34_26AC_0011_05B3()
 *
 * @name f__1A34_26AC_0011_05B3
 * @implements 1A34:26AC:0011:05B3 ()
 *
 * Called From: 1A34:2553:0007:5D6E
 */
void f__1A34_26AC_0011_05B3()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x26BD); emu_cs = 0x0F3F; f__0F3F_0125_000D_0828();
	f__1A34_26BD_0018_DD9D();
}

/**
 * Decompiled function f__1A34_26BD_0018_DD9D()
 *
 * @name f__1A34_26BD_0018_DD9D
 * @implements 1A34:26BD:0018:DD9D ()
 *
 * Called From: 1A34:26BD:0011:05B3
 */
void f__1A34_26BD_0018_DD9D()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, 0x20);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x26D5); emu_cs = 0x0F3F; f__0F3F_028E_0015_B0E3();
	f__1A34_26D5_001B_AD34();
}

/**
 * Decompiled function f__1A34_26D5_001B_AD34()
 *
 * @name f__1A34_26D5_001B_AD34
 * @implements 1A34:26D5:001B:AD34 ()
 *
 * Called From: 1A34:26D5:0018:DD9D
 */
void f__1A34_26D5_001B_AD34()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_movw(&emu_ax.x, 0x80);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x26F0); emu_cs = 0x0F3F; f__0F3F_028E_0015_B0E3();
	f__1A34_26F0_001E_EFB5();
}

/**
 * Decompiled function f__1A34_26F0_001E_EFB5()
 *
 * @name f__1A34_26F0_001E_EFB5
 * @implements 1A34:26F0:001E:EFB5 ()
 *
 * Called From: 1A34:26F0:001B:AD34
 */
void f__1A34_26F0_001E_EFB5()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_cs);
	emu_push(0x270E); f__1A34_08FB_002C_227A();
	f__1A34_270E_0077_B977();
}

/**
 * Decompiled function f__1A34_270E_0077_B977()
 *
 * @name f__1A34_270E_0077_B977
 * @implements 1A34:270E:0077:B977 ()
 *
 * Called From: 1A34:270E:001E:EFB5
 */
void f__1A34_270E_0077_B977()
{
	emu_addws(&emu_sp, 0xC);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x2788; emu_last_cs = 0x1A34; emu_last_ip = 0x271D; emu_last_length = 0x0077; emu_last_crc = 0xB977; emu_call(); return; } // Jump does not resolve
	emu_cmpws(&emu_si, 0x18);
	if (!emu_flags.zf) { f__1A34_2732_0053_9C71(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x50));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x51), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4B), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x49), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0xF);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { emu_ip = 0x275B; emu_last_cs = 0x1A34; emu_last_ip = 0x2751; emu_last_length = 0x0077; emu_last_crc = 0xB977; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x40);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ds, 0x00,  0x3A38));
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x2788; emu_last_cs = 0x1A34; emu_last_ip = 0x276F; emu_last_length = 0x0077; emu_last_crc = 0xB977; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x2785); emu_cs = 0x34CD; emu_ip = 0x2840; emu_last_cs = 0x1A34; emu_last_ip = 0x2780; emu_last_length = 0x0077; emu_last_crc = 0xB977; emu_call(); // Jump does not resolve
	f__1A34_2785_0005_1FB8();
}

/**
 * Decompiled function f__1A34_2732_0053_9C71()
 *
 * @name f__1A34_2732_0053_9C71
 * @implements 1A34:2732:0053:9C71 ()
 *
 * Called From: 1A34:2722:0077:B977
 */
void f__1A34_2732_0053_9C71()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4B), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x49), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0xF);
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__1A34_275B_002A_2CE5(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x40);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ds, 0x00,  0x3A38));
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x2788; emu_last_cs = 0x1A34; emu_last_ip = 0x276F; emu_last_length = 0x0053; emu_last_crc = 0x9C71; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x2785); emu_cs = 0x34CD; emu_ip = 0x2840; emu_last_cs = 0x1A34; emu_last_ip = 0x2780; emu_last_length = 0x0053; emu_last_crc = 0x9C71; emu_call(); // Jump does not resolve
	f__1A34_2785_0005_1FB8();
}

/**
 * Decompiled function f__1A34_275B_002A_2CE5()
 *
 * @name f__1A34_275B_002A_2CE5
 * @implements 1A34:275B:002A:2CE5 ()
 *
 * Called From: 1A34:2751:0053:9C71
 */
void f__1A34_275B_002A_2CE5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_dx.x, 0x1);
	emu_movb(&emu_cx.l, emu_get_memory8(emu_ds, 0x00,  0x3A38));
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_testw(&emu_ax.x, emu_dx.x);
	if (!emu_flags.zf) { emu_ip = 0x2788; emu_last_cs = 0x1A34; emu_last_ip = 0x276F; emu_last_length = 0x002A; emu_last_crc = 0x2CE5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x2785); emu_cs = 0x34CD; ovl__34CD(31);
	f__1A34_2785_0005_1FB8();
}

/**
 * Decompiled function f__1A34_2785_0005_1FB8()
 *
 * @name f__1A34_2785_0005_1FB8
 * @implements 1A34:2785:0005:1FB8 ()
 *
 * Called From: 1A34:2785:002A:2CE5
 */
void f__1A34_2785_0005_1FB8()
{
	emu_addws(&emu_sp, 0x6);
	f__1A34_278C_0008_8ECC(); return;
}

/**
 * Decompiled function f__1A34_278C_0008_8ECC()
 *
 * @name f__1A34_278C_0008_8ECC
 * @implements 1A34:278C:0008:8ECC ()
 *
 * Called From: 1A34:26A9:0006:3CE8
 * Called From: 1A34:2788:0005:1FB8
 */
void f__1A34_278C_0008_8ECC()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__1A34_2794_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_2794_0006_137A()
 *
 * @name f__1A34_2794_0006_137A
 * @implements 1A34:2794:0006:137A ()
 *
 * Called From: 1A34:2792:0008:8ECC
 */
void f__1A34_2794_0006_137A()
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
 * Decompiled function f__1A34_27A8_0012_8D6B()
 *
 * @name f__1A34_27A8_0012_8D6B
 * @implements 1A34:27A8:0012:8D6B ()
 *
 * Called From: 0642:035B:002B:B4DC
 * Called From: 0642:035B:000D:D381
 * Called From: 0AEC:0786:000E:9397
 * Called From: 1A34:1074:0027:4E7C
 * Called From: 1A34:1074:0025:74BC
 * Called From: 1A34:1099:000B:E038
 */
void f__1A34_27A8_0012_8D6B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_27BA_0023_5BA9(); return; }
	f__1A34_2953_0005_04BA(); return;
}

/**
 * Decompiled function f__1A34_27BA_0023_5BA9()
 *
 * @name f__1A34_27BA_0023_5BA9
 * @implements 1A34:27BA:0023:5BA9 ()
 *
 * Called From: 1A34:27B5:0012:8D6B
 */
void f__1A34_27BA_0023_5BA9()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x27DD); f__1A34_3623_0010_3F68();
	f__1A34_27DD_002C_E262();
}

/**
 * Decompiled function f__1A34_27DD_002C_E262()
 *
 * @name f__1A34_27DD_002C_E262
 * @implements 1A34:27DD:002C:E262 ()
 *
 * Called From: 1A34:27DD:0023:5BA9
 */
void f__1A34_27DD_002C_E262()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, 0x1E);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x37FA));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, emu_bx.x,  0x37F8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (!emu_flags.zf) { f__1A34_2820_0018_9C8D(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x2809); emu_cs = 0x0FCB; emu_ip = 0x2868; emu_last_cs = 0x1A34; emu_last_ip = 0x2804; emu_last_length = 0x002C; emu_last_crc = 0xE262; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_2820_0018_9C8D()
 *
 * @name f__1A34_2820_0018_9C8D
 * @implements 1A34:2820:0018:9C8D ()
 *
 * Called From: 1A34:27FC:002C:E262
 */
void f__1A34_2820_0018_9C8D()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x37B6), 0x1);
	if (!emu_flags.zf) { f__1A34_283D_000B_E9C4(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x2838); emu_cs = 0x0FCB; emu_ip = 0x2897; emu_last_cs = 0x1A34; emu_last_ip = 0x2833; emu_last_length = 0x0018; emu_last_crc = 0x9C8D; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_283D_000B_E9C4()
 *
 * @name f__1A34_283D_000B_E9C4
 * @implements 1A34:283D:000B:E9C4 ()
 *
 * Called From: 1A34:2825:0018:9C8D
 */
void f__1A34_283D_000B_E9C4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x2848); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__1A34_2848_0018_08D3();
}

/**
 * Decompiled function f__1A34_2848_0018_08D3()
 *
 * @name f__1A34_2848_0018_08D3
 * @implements 1A34:2848:0018:08D3 ()
 *
 * Called From: 1A34:2848:000B:E9C4
 */
void f__1A34_2848_0018_08D3()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x62ED);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2860); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	f__1A34_2860_0013_D9D9();
}

/**
 * Decompiled function f__1A34_2860_0013_D9D9()
 *
 * @name f__1A34_2860_0013_D9D9
 * @implements 1A34:2860:0013:D9D9 ()
 *
 * Called From: 1A34:2860:0018:08D3
 */
void f__1A34_2860_0013_D9D9()
{
	emu_addws(&emu_sp, 0x10);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, 0x10);
	if (emu_flags.zf) { f__1A34_2873_0027_77C1(); return; }
	f__1A34_292E_0002_03AC(); return;
}

/**
 * Decompiled function f__1A34_2873_0027_77C1()
 *
 * @name f__1A34_2873_0027_77C1
 * @implements 1A34:2873:0027:77C1 ()
 *
 * Called From: 1A34:286E:0013:D9D9
 */
void f__1A34_2873_0027_77C1()
{
	emu_movw(&emu_si, 0x79);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x5);
	if (!emu_flags.zf) { f__1A34_28B6_0016_1454(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x58), 0x64);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x28B6; emu_last_cs = 0x1A34; emu_last_ip = 0x2888; emu_last_length = 0x0027; emu_last_crc = 0x77C1; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x289A); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__1A34_289A_0008_778C();
}

/**
 * Decompiled function f__1A34_289A_0008_778C()
 *
 * @name f__1A34_289A_0008_778C
 * @implements 1A34:289A:0008:778C ()
 *
 * Called From: 1A34:289A:0027:77C1
 */
void f__1A34_289A_0008_778C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x28A2); emu_cs = 0x34CD; ovl__34CD(13);
	f__1A34_28A2_000D_473E();
}

/**
 * Decompiled function f__1A34_28A2_000D_473E()
 *
 * @name f__1A34_28A2_000D_473E
 * @implements 1A34:28A2:000D:473E ()
 *
 * Called From: 1A34:28A2:0008:778C
 */
void f__1A34_28A2_000D_473E()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0x8);
	if (emu_flags.zf) { f__1A34_28AF_0005_13C8(); return; }
	emu_cmpw(&emu_ax.x, 0x9);
	if (emu_flags.zf) { emu_ip = 0x28AF; emu_last_cs = 0x1A34; emu_last_ip = 0x28AB; emu_last_length = 0x000D; emu_last_crc = 0x473E; emu_call(); return; } // Jump does not resolve
	f__1A34_28B4_0002_03AC(); return;
}

/**
 * Decompiled function f__1A34_28AF_0005_13C8()
 *
 * @name f__1A34_28AF_0005_13C8
 * @implements 1A34:28AF:0005:13C8 ()
 *
 * Called From: 1A34:28A6:000D:473E
 */
void f__1A34_28AF_0005_13C8()
{
	emu_movw(&emu_si, 0x7A);
	f__1A34_28B6_0016_1454(); return;
}

/**
 * Decompiled function f__1A34_28B4_0002_03AC()
 *
 * @name f__1A34_28B4_0002_03AC
 * @implements 1A34:28B4:0002:03AC ()
 *
 * Called From: 1A34:28AD:000D:473E
 */
void f__1A34_28B4_0002_03AC()
{
	f__1A34_28B6_0016_1454(); return;
}

/**
 * Decompiled function f__1A34_28B6_0016_1454()
 *
 * @name f__1A34_28B6_0016_1454
 * @implements 1A34:28B6:0016:1454 ()
 *
 * Called From: 1A34:287E:0027:77C1
 * Called From: 1A34:28B2:0005:13C8
 * Called From: 1A34:28B4:0002:03AC
 */
void f__1A34_28B6_0016_1454()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x4F), 0x1);
	if (!emu_flags.zf) { f__1A34_28D6_000B_E546(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x56));
	emu_push(emu_cs); emu_push(0x28CC); emu_cs = 0x167E; f__167E_02AE_000C_AA20();
	f__1A34_28CC_000A_98B5();
}

/**
 * Decompiled function f__1A34_28CC_000A_98B5()
 *
 * @name f__1A34_28CC_000A_98B5
 * @implements 1A34:28CC:000A:98B5 ()
 *
 * Called From: 1A34:28CC:0016:1454
 */
void f__1A34_28CC_000A_98B5()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x28D6; emu_last_cs = 0x1A34; emu_last_ip = 0x28CF; emu_last_length = 0x000A; emu_last_crc = 0x98B5; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, 0x7B);
	f__1A34_28EA_001A_7B82(); return;
}

/**
 * Decompiled function f__1A34_28D6_000B_E546()
 *
 * @name f__1A34_28D6_000B_E546
 * @implements 1A34:28D6:000B:E546 ()
 *
 * Called From: 1A34:28BE:0016:1454
 */
void f__1A34_28D6_000B_E546()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x28E1); emu_cs = 0x0C10; f__0C10_013D_0016_CFFB();
	f__1A34_28E1_0023_B8D2();
}

/**
 * Decompiled function f__1A34_28E1_0023_B8D2()
 *
 * @name f__1A34_28E1_0023_B8D2
 * @implements 1A34:28E1:0023:B8D2 ()
 *
 * Called From: 1A34:28E1:000B:E546
 */
void f__1A34_28E1_0023_B8D2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__1A34_28EA_001A_7B82(); return; }
	emu_movw(&emu_si, 0x7C);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x58));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x58));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x2904; emu_last_cs = 0x1A34; emu_last_ip = 0x28FD; emu_last_length = 0x0023; emu_last_crc = 0xB8D2; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x4);
	emu_ip = 0x2906; emu_last_cs = 0x1A34; emu_last_ip = 0x2902; emu_last_length = 0x0023; emu_last_crc = 0xB8D2; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_28EA_001A_7B82()
 *
 * @name f__1A34_28EA_001A_7B82
 * @implements 1A34:28EA:001A:7B82 ()
 *
 * Called From: 1A34:28D4:000A:98B5
 * Called From: 1A34:28E5:0023:B8D2
 */
void f__1A34_28EA_001A_7B82()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x58));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x58));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1A34_2904_000C_DA04(); return; }
	emu_movw(&emu_ax.x, 0x4);
	f__1A34_2906_000A_EA01(); return;
}

/**
 * Decompiled function f__1A34_2904_000C_DA04()
 *
 * @name f__1A34_2904_000C_DA04
 * @implements 1A34:2904:000C:DA04 ()
 *
 * Called From: 1A34:28FD:001A:7B82
 */
void f__1A34_2904_000C_DA04()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, emu_si);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2910); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__1A34_2910_000D_F28B();
}

/**
 * Decompiled function f__1A34_2906_000A_EA01()
 *
 * @name f__1A34_2906_000A_EA01
 * @implements 1A34:2906:000A:EA01 ()
 *
 * Called From: 1A34:2902:001A:7B82
 */
void f__1A34_2906_000A_EA01()
{
	emu_movw(&emu_dx.x, emu_si);
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x2910); emu_cs = 0x0FCB; f__0FCB_005F_001C_147D();
	f__1A34_2910_000D_F28B();
}

/**
 * Decompiled function f__1A34_2910_000D_F28B()
 *
 * @name f__1A34_2910_000D_F28B
 * @implements 1A34:2910:000D:F28B ()
 *
 * Called From: 1A34:2910:000C:DA04
 * Called From: 1A34:2910:000A:EA01
 */
void f__1A34_2910_000D_F28B()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x291D); emu_cs = 0x01F7; f__01F7_39A5_001F_856D();
	f__1A34_291D_000C_A5F1();
}

/**
 * Decompiled function f__1A34_291D_000C_A5F1()
 *
 * @name f__1A34_291D_000C_A5F1
 * @implements 1A34:291D:000C:A5F1 ()
 *
 * Called From: 1A34:291D:000D:F28B
 */
void f__1A34_291D_000C_A5F1()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_addw(&emu_ax.x, 0x9939);
	emu_push(emu_ds);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2929); emu_cs = 0x01F7; f__01F7_378D_0020_4A95();
	f__1A34_2929_0005_1FD8();
}

/**
 * Decompiled function f__1A34_2929_0005_1FD8()
 *
 * @name f__1A34_2929_0005_1FD8
 * @implements 1A34:2929:0005:1FD8 ()
 *
 * Called From: 1A34:2929:000C:A5F1
 */
void f__1A34_2929_0005_1FD8()
{
	emu_addws(&emu_sp, 0xA);
	f__1A34_2930_000F_BC44(); return;
}

/**
 * Decompiled function f__1A34_292E_0002_03AC()
 *
 * @name f__1A34_292E_0002_03AC
 * @implements 1A34:292E:0002:03AC ()
 *
 * Called From: 1A34:2870:0013:D9D9
 */
void f__1A34_292E_0002_03AC()
{
	f__1A34_2930_000F_BC44(); return;
}

/**
 * Decompiled function f__1A34_2930_000F_BC44()
 *
 * @name f__1A34_2930_000F_BC44
 * @implements 1A34:2930:000F:BC44 ()
 *
 * Called From: 1A34:292C:0005:1FD8
 * Called From: 1A34:292E:0002:03AC
 */
void f__1A34_2930_000F_BC44()
{
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x62F3);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x293F); emu_cs = 0x01F7; f__01F7_384A_003F_A636();
	f__1A34_293F_0011_B263();
}

/**
 * Decompiled function f__1A34_293F_0011_B263()
 *
 * @name f__1A34_293F_0011_B263
 * @implements 1A34:293F:0011:B263 ()
 *
 * Called From: 1A34:293F:000F:BC44
 */
void f__1A34_293F_0011_B263()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x9939);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2950); emu_cs = 0x10E4; f__10E4_09AB_0031_9946();
	f__1A34_2950_0008_E43A();
}

/**
 * Decompiled function f__1A34_2950_0008_E43A()
 *
 * @name f__1A34_2950_0008_E43A
 * @implements 1A34:2950:0008:E43A ()
 *
 * Called From: 1A34:2950:0011:B263
 */
void f__1A34_2950_0008_E43A()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2953_0005_04BA()
 *
 * @name f__1A34_2953_0005_04BA
 * @implements 1A34:2953:0005:04BA ()
 *
 * Called From: 1A34:27B7:0012:8D6B
 */
void f__1A34_2953_0005_04BA()
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
 * Decompiled function f__1A34_2958_0013_AFBB()
 *
 * @name f__1A34_2958_0013_AFBB
 * @implements 1A34:2958:0013:AFBB ()
 *
 * Called From: 0972:0D79:000F:B05E
 */
void f__1A34_2958_0013_AFBB()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_296B_002B_1EBB(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x2AA6; emu_last_cs = 0x1A34; emu_last_ip = 0x2968; emu_last_length = 0x0013; emu_last_crc = 0xAFBB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_2968_0003_07A6()
 *
 * @name f__1A34_2968_0003_07A6
 * @implements 1A34:2968:0003:07A6 ()
 *
 * Called From: 1A34:2A98:0009:EAA1
 */
void f__1A34_2968_0003_07A6()
{
	f__1A34_2AA6_0004_0F7A(); return;
}

/**
 * Decompiled function f__1A34_296B_002B_1EBB()
 *
 * @name f__1A34_296B_002B_1EBB
 * @implements 1A34:296B:002B:1EBB ()
 *
 * Called From: 1A34:2964:0013:AFBB
 */
void f__1A34_296B_002B_1EBB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFB);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2996); emu_cs = 0x0F3F; f__0F3F_0275_0019_B286();
	f__1A34_2996_0022_B0F7();
}

/**
 * Decompiled function f__1A34_2996_0022_B0F7()
 *
 * @name f__1A34_2996_0022_B0F7
 * @implements 1A34:2996:0022:B0F7 ()
 *
 * Called From: 1A34:2996:002B:1EBB
 */
void f__1A34_2996_0022_B0F7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4D), 0x0);
	if (!emu_flags.zf) { f__1A34_29BA_0013_FA2B(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x29B8); emu_ip = 0x3312; emu_last_cs = 0x1A34; emu_last_ip = 0x29B5; emu_last_length = 0x0022; emu_last_crc = 0xB0F7; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_29BA_0013_FA2B()
 *
 * @name f__1A34_29BA_0013_FA2B
 * @implements 1A34:29BA:0013:FA2B ()
 *
 * Called From: 1A34:29AB:0022:B0F7
 */
void f__1A34_29BA_0013_FA2B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x26), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x29CD); f__1A34_0E2E_0015_69C6();
	f__1A34_29CD_0009_D46C();
}

/**
 * Decompiled function f__1A34_29CD_0009_D46C()
 *
 * @name f__1A34_29CD_0009_D46C
 * @implements 1A34:29CD:0009:D46C ()
 *
 * Called From: 1A34:29CD:0013:FA2B
 */
void f__1A34_29CD_0009_D46C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__1A34_29D6_002C_51E8(); return; }
	emu_ip = 0x2A9B; emu_last_cs = 0x1A34; emu_last_ip = 0x29D3; emu_last_length = 0x0009; emu_last_crc = 0xD46C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_29D6_002C_51E8()
 *
 * @name f__1A34_29D6_002C_51E8
 * @implements 1A34:29D6:002C:51E8 ()
 *
 * Called From: 1A34:29D1:0009:D46C
 */
void f__1A34_29D6_002C_51E8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4B), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x49), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2A02); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__1A34_2A02_0036_D0C2();
}

/**
 * Decompiled function f__1A34_2A02_0036_D0C2()
 *
 * @name f__1A34_2A02_0036_D0C2
 * @implements 1A34:2A02:0036:D0C2 ()
 *
 * Called From: 1A34:2A02:002C:51E8
 */
void f__1A34_2A02_0036_D0C2()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_testb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (emu_flags.zf) { emu_ip = 0x2A3B; emu_last_cs = 0x1A34; emu_last_ip = 0x2A13; emu_last_length = 0x0036; emu_last_crc = 0xD0C2; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movb(&emu_ax.l, 0x1);
	emu_shlb(&emu_ax.l, emu_cx.l);
	emu_notb(&emu_ax.l, emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2A38); emu_cs = 0x1423; f__1423_08CD_0012_4CA9();
	f__1A34_2A38_002E_E02B();
}

/**
 * Decompiled function f__1A34_2A38_002E_E02B()
 *
 * @name f__1A34_2A38_002E_E02B
 * @implements 1A34:2A38:002E:E02B ()
 *
 * Called From: 1A34:2A38:0036:D0C2
 */
void f__1A34_2A38_002E_E02B()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { emu_ip = 0x2A5D; emu_last_cs = 0x1A34; emu_last_ip = 0x2A47; emu_last_length = 0x002E; emu_last_crc = 0xE02B; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (emu_flags.zf) { f__1A34_2A5D_0009_B8F3(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x6);
	if (!emu_flags.zf) { emu_ip = 0x2A66; emu_last_cs = 0x1A34; emu_last_ip = 0x2A5B; emu_last_length = 0x002E; emu_last_crc = 0xE02B; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x48));
	emu_ip = 0x2A6D; emu_last_cs = 0x1A34; emu_last_ip = 0x2A64; emu_last_length = 0x002E; emu_last_crc = 0xE02B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_2A5D_0009_B8F3()
 *
 * @name f__1A34_2A5D_0009_B8F3
 * @implements 1A34:2A5D:0009:B8F3 ()
 *
 * Called From: 1A34:2A51:002E:E02B
 */
void f__1A34_2A5D_0009_B8F3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x48));
	f__1A34_2A6D_000B_E7B8(); return;
}

/**
 * Decompiled function f__1A34_2A6D_000B_E7B8()
 *
 * @name f__1A34_2A6D_000B_E7B8
 * @implements 1A34:2A6D:000B:E7B8 ()
 *
 * Called From: 1A34:2A64:0009:B8F3
 */
void f__1A34_2A6D_000B_E7B8()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2A78); emu_cs = 0x176C; f__176C_000E_000E_8C63();
	f__1A34_2A78_001A_D747();
}

/**
 * Decompiled function f__1A34_2A78_001A_D747()
 *
 * @name f__1A34_2A78_001A_D747
 * @implements 1A34:2A78:001A:D747 ()
 *
 * Called From: 1A34:2A78:000B:E7B8
 */
void f__1A34_2A78_001A_D747()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x6D), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2A92); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_2A92_0009_EAA1();
}

/**
 * Decompiled function f__1A34_2A92_0009_EAA1()
 *
 * @name f__1A34_2A92_0009_EAA1
 * @implements 1A34:2A92:0009:EAA1 ()
 *
 * Called From: 1A34:2A92:001A:D747
 */
void f__1A34_2A92_0009_EAA1()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, 0x1);
	f__1A34_2968_0003_07A6(); return;
}

/**
 * Decompiled function f__1A34_2AA6_0004_0F7A()
 *
 * @name f__1A34_2AA6_0004_0F7A
 * @implements 1A34:2AA6:0004:0F7A ()
 *
 * Called From: 1A34:2968:0003:07A6
 */
void f__1A34_2AA6_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2AAA_000D_C755()
 *
 * @name f__1A34_2AAA_000D_C755
 * @implements 1A34:2AAA:000D:C755 ()
 *
 * Called From: 1A34:2D1D:0018:2094
 */
void f__1A34_2AAA_000D_C755()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_2AB7_0016_CAED(); return; }
	emu_ip = 0x2B16; emu_last_cs = 0x1A34; emu_last_ip = 0x2AB5; emu_last_length = 0x000D; emu_last_crc = 0xC755; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_2AB7_0016_CAED()
 *
 * @name f__1A34_2AB7_0016_CAED
 * @implements 1A34:2AB7:0016:CAED ()
 *
 * Called From: 1A34:2AB3:000D:C755
 */
void f__1A34_2AB7_0016_CAED()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x40);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2ACD); emu_cs = 0x34CD; ovl__34CD(22);
	f__1A34_2ACD_001F_876B();
}

/**
 * Decompiled function f__1A34_2ACD_001F_876B()
 *
 * @name f__1A34_2ACD_001F_876B
 * @implements 1A34:2ACD:001F:876B ()
 *
 * Called From: 1A34:2ACD:0016:CAED
 */
void f__1A34_2ACD_001F_876B()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xBF);
	emu_push(emu_ds);
	emu_movw(&emu_ax.x, 0x3902);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_ax.x, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2AEC); emu_cs = 0x15C2; f__15C2_0395_0044_6B4F();
	f__1A34_2AEC_000E_2158();
}

/**
 * Decompiled function f__1A34_2AEC_000E_2158()
 *
 * @name f__1A34_2AEC_000E_2158
 * @implements 1A34:2AEC:000E:2158 ()
 *
 * Called From: 1A34:2AEC:001F:876B
 */
void f__1A34_2AEC_000E_2158()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2AFA); f__1A34_364E_0012_CFD4();
	f__1A34_2AFA_0019_D384();
}

/**
 * Decompiled function f__1A34_2AFA_0019_D384()
 *
 * @name f__1A34_2AFA_0019_D384
 * @implements 1A34:2AFA:0019:D384 ()
 *
 * Called From: 1A34:2AFA:000E:2158
 */
void f__1A34_2AFA_0019_D384()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2B13); emu_cs = 0x1423; f__1423_0BCC_0012_0D48();
	f__1A34_2B13_0005_1CF2();
}

/**
 * Decompiled function f__1A34_2B13_0005_1CF2()
 *
 * @name f__1A34_2B13_0005_1CF2
 * @implements 1A34:2B13:0005:1CF2 ()
 *
 * Called From: 1A34:2B13:0019:D384
 */
void f__1A34_2B13_0005_1CF2()
{
	emu_addws(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2B18_0011_4D97()
 *
 * @name f__1A34_2B18_0011_4D97
 * @implements 1A34:2B18:0011:4D97 ()
 *
 * Called From: 176C:26D8:0010:2FC8
 * Called From: B511:0171:0016:5310
 */
void f__1A34_2B18_0011_4D97()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_2B29_0038_AD13(); return; }
	emu_ip = 0x2BB1; emu_last_cs = 0x1A34; emu_last_ip = 0x2B26; emu_last_length = 0x0011; emu_last_crc = 0x4D97; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_2B29_0038_AD13()
 *
 * @name f__1A34_2B29_0038_AD13
 * @implements 1A34:2B29:0038:AD13 ()
 *
 * Called From: 1A34:2B24:0011:4D97
 */
void f__1A34_2B29_0038_AD13()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x2BB1; emu_last_cs = 0x1A34; emu_last_ip = 0x2B32; emu_last_length = 0x0038; emu_last_crc = 0xAD13; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0xFF);
	if (!emu_flags.zf) { f__1A34_2B45_001C_0B8D(); return; }
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xA), 0xFF);
	if (emu_flags.zf) { emu_ip = 0x2BB1; emu_last_cs = 0x1A34; emu_last_ip = 0x2B43; emu_last_length = 0x0038; emu_last_crc = 0xAD13; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	if (emu_flags.zf) { emu_ip = 0x2BB1; emu_last_cs = 0x1A34; emu_last_ip = 0x2B50; emu_last_length = 0x0038; emu_last_crc = 0xAD13; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2B61); emu_ip = 0x3623; emu_last_cs = 0x1A34; emu_last_ip = 0x2B5E; emu_last_length = 0x0038; emu_last_crc = 0xAD13; emu_call(); // Jump does not resolve
	f__1A34_2B61_0008_715C();
}

/**
 * Decompiled function f__1A34_2B45_001C_0B8D()
 *
 * @name f__1A34_2B45_001C_0B8D
 * @implements 1A34:2B45:001C:0B8D ()
 *
 * Called From: 1A34:2B3C:0038:AD13
 */
void f__1A34_2B45_001C_0B8D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xC));
	if (emu_flags.zf) { emu_ip = 0x2BB1; emu_last_cs = 0x1A34; emu_last_ip = 0x2B50; emu_last_length = 0x001C; emu_last_crc = 0x0B8D; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2B61); f__1A34_3623_0010_3F68();
	f__1A34_2B61_0008_715C();
}

/**
 * Decompiled function f__1A34_2B61_0008_715C()
 *
 * @name f__1A34_2B61_0008_715C
 * @implements 1A34:2B61:0008:715C ()
 *
 * Called From: 1A34:2B61:001C:0B8D
 */
void f__1A34_2B61_0008_715C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2B69); emu_cs = 0x1423; f__1423_0F34_0017_4318();
	f__1A34_2B69_0045_E251();
}

/**
 * Decompiled function f__1A34_2B69_0045_E251()
 *
 * @name f__1A34_2B69_0045_E251
 * @implements 1A34:2B69:0045:E251 ()
 *
 * Called From: 1A34:2B69:0008:715C
 */
void f__1A34_2B69_0045_E251()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__1A34_2BB1_0004_0F7A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x12), 0x0);
	if (emu_flags.zf) { f__1A34_2BB1_0004_0F7A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x2BAE); emu_cs = 0x34CD; ovl__34CD(31);
	f__1A34_2BAE_0007_7F3A();
}

/**
 * Decompiled function f__1A34_2BAE_0007_7F3A()
 *
 * @name f__1A34_2BAE_0007_7F3A
 * @implements 1A34:2BAE:0007:7F3A ()
 *
 * Called From: 1A34:2BAE:0045:E251
 */
void f__1A34_2BAE_0007_7F3A()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2BB1_0004_0F7A()
 *
 * @name f__1A34_2BB1_0004_0F7A
 * @implements 1A34:2BB1:0004:0F7A ()
 *
 * Called From: 1A34:2B6D:0045:E251
 * Called From: 1A34:2B8F:0045:E251
 */
void f__1A34_2BB1_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2C95_001B_D4A0()
 *
 * @name f__1A34_2C95_001B_D4A0
 * @implements 1A34:2C95:001B:D4A0 ()
 *
 * Called From: 176C:0A0A:0008:7F94
 * Called From: 1A34:07DC:0036:645D
 */
void f__1A34_2C95_001B_D4A0()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x2CAD; emu_last_cs = 0x1A34; emu_last_ip = 0x2CA3; emu_last_length = 0x001B; emu_last_crc = 0xD4A0; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__1A34_2CB0_001C_120C(); return; }
	emu_ip = 0x2F98; emu_last_cs = 0x1A34; emu_last_ip = 0x2CAD; emu_last_length = 0x001B; emu_last_crc = 0xD4A0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_2CB0_001C_120C()
 *
 * @name f__1A34_2CB0_001C_120C
 * @implements 1A34:2CB0:001C:120C ()
 *
 * Called From: 1A34:2CAB:001B:D4A0
 */
void f__1A34_2CB0_001C_120C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (!emu_flags.zf) { f__1A34_2CCE_0037_EFED(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	if (!emu_flags.zf) { f__1A34_2CCE_0037_EFED(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs);
	emu_push(0x2CCC); f__1A34_0F48_0018_F029();
	f__1A34_2CCC_0039_04ED();
}

/**
 * Decompiled function f__1A34_2CCC_0039_04ED()
 *
 * @name f__1A34_2CCC_0039_04ED
 * @implements 1A34:2CCC:0039:04ED ()
 *
 * Called From: 1A34:2CCC:001C:120C
 */
void f__1A34_2CCC_0039_04ED()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (emu_flags.zf) { emu_ip = 0x2CFB; emu_last_cs = 0x1A34; emu_last_ip = 0x2CEF; emu_last_length = 0x0039; emu_last_crc = 0x04ED; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x0);
	if (!emu_flags.zf) { f__1A34_2D08_0018_2094(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2D05); emu_ip = 0x10EC; emu_last_cs = 0x1A34; emu_last_ip = 0x2D02; emu_last_length = 0x0039; emu_last_crc = 0x04ED; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_2CCE_0037_EFED()
 *
 * @name f__1A34_2CCE_0037_EFED
 * @implements 1A34:2CCE:0037:EFED ()
 *
 * Called From: 1A34:2CBA:001C:120C
 * Called From: 1A34:2CC0:001C:120C
 */
void f__1A34_2CCE_0037_EFED()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (emu_flags.zf) { emu_ip = 0x2CFB; emu_last_cs = 0x1A34; emu_last_ip = 0x2CEF; emu_last_length = 0x0037; emu_last_crc = 0xEFED; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x0);
	if (!emu_flags.zf) { f__1A34_2D08_0018_2094(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2D05); emu_ip = 0x10EC; emu_last_cs = 0x1A34; emu_last_ip = 0x2D02; emu_last_length = 0x0037; emu_last_crc = 0xEFED; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_2D08_0018_2094()
 *
 * @name f__1A34_2D08_0018_2094
 * @implements 1A34:2D08:0018:2094 ()
 *
 * Called From: 1A34:2CF9:0037:EFED
 * Called From: 1A34:2CF9:0039:04ED
 */
void f__1A34_2D08_0018_2094()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x9));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orb(&emu_get_memory8(emu_es, emu_bx.x,  0x9), emu_ax.l);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2D20); f__1A34_2AAA_000D_C755();
	f__1A34_2D20_000D_53E0();
}

/**
 * Decompiled function f__1A34_2D20_000D_53E0()
 *
 * @name f__1A34_2D20_000D_53E0
 * @implements 1A34:2D20:000D:53E0 ()
 *
 * Called From: 1A34:2D20:0018:2094
 */
void f__1A34_2D20_000D_53E0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2D2D); f__1A34_3623_0010_3F68();
	f__1A34_2D2D_0011_B626();
}

/**
 * Decompiled function f__1A34_2D2D_0011_B626()
 *
 * @name f__1A34_2D2D_0011_B626
 * @implements 1A34:2D2D:0011:B626 ()
 *
 * Called From: 1A34:2D2D:000D:53E0
 */
void f__1A34_2D2D_0011_B626()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2D3E); emu_cs = 0x1423; f__1423_0F34_0017_4318();
	f__1A34_2D3E_0009_D49C();
}

/**
 * Decompiled function f__1A34_2D3E_0009_D49C()
 *
 * @name f__1A34_2D3E_0009_D49C
 * @implements 1A34:2D3E:0009:D49C ()
 *
 * Called From: 1A34:2D3E:0011:B626
 */
void f__1A34_2D3E_0009_D49C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1A34_2D47_0010_B717(); return; }
	emu_ip = 0x2E38; emu_last_cs = 0x1A34; emu_last_ip = 0x2D44; emu_last_length = 0x0009; emu_last_crc = 0xD49C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_2D47_0010_B717()
 *
 * @name f__1A34_2D47_0010_B717
 * @implements 1A34:2D47:0010:B717 ()
 *
 * Called From: 1A34:2D42:0009:D49C
 */
void f__1A34_2D47_0010_B717()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x10);
	if (emu_flags.zf) { emu_ip = 0x2D57; emu_last_cs = 0x1A34; emu_last_ip = 0x2D50; emu_last_length = 0x0010; emu_last_crc = 0xB717; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x2);
	f__1A34_2D5A_000C_E42B(); return;
}

/**
 * Decompiled function f__1A34_2D5A_000C_E42B()
 *
 * @name f__1A34_2D5A_000C_E42B
 * @implements 1A34:2D5A:000C:E42B ()
 *
 * Called From: 1A34:2D55:0010:B717
 */
void f__1A34_2D5A_000C_E42B()
{
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2D66); emu_cs = 0x0C3A; f__0C3A_1398_000D_C7C7();
	f__1A34_2D66_0010_5ECC();
}

/**
 * Decompiled function f__1A34_2D66_0010_5ECC()
 *
 * @name f__1A34_2D66_0010_5ECC
 * @implements 1A34:2D66:0010:5ECC ()
 *
 * Called From: 1A34:2D66:000C:E42B
 */
void f__1A34_2D66_0010_5ECC()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xD);
	if (emu_flags.zf) { emu_ip = 0x2D76; emu_last_cs = 0x1A34; emu_last_ip = 0x2D71; emu_last_length = 0x0010; emu_last_crc = 0x5ECC; emu_call(); return; } // Jump does not resolve
	f__1A34_2E18_0020_968D(); return;
}

/**
 * Decompiled function f__1A34_2E18_0020_968D()
 *
 * @name f__1A34_2E18_0020_968D
 * @implements 1A34:2E18:0020:968D ()
 *
 * Called From: 1A34:2D73:0010:5ECC
 */
void f__1A34_2E18_0020_968D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0x0));
	emu_pop(&emu_es);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), emu_ax.l);
	f__1A34_2F98_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_2F98_0006_137A()
 *
 * @name f__1A34_2F98_0006_137A
 * @implements 1A34:2F98:0006:137A ()
 *
 * Called From: 1A34:2E35:0020:968D
 */
void f__1A34_2F98_0006_137A()
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
 * Decompiled function f__1A34_2F9E_0016_3A4D()
 *
 * @name f__1A34_2F9E_0016_3A4D
 * @implements 1A34:2F9E:0016:3A4D ()
 *
 * Called From: 0AEC:03C7:0035:1F06
 * Called From: 0AEC:073B:0008:E23C
 * Called From: 0AEC:07CE:000F:4671
 */
void f__1A34_2F9E_0016_3A4D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x2);
	if (!emu_flags.zf) { f__1A34_2FB4_0006_0EFC(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_ip = 0x300E; emu_last_cs = 0x1A34; emu_last_ip = 0x2FB2; emu_last_length = 0x0016; emu_last_crc = 0x3A4D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_2FB0_0004_0D98()
 *
 * @name f__1A34_2FB0_0004_0D98
 * @implements 1A34:2FB0:0004:0D98 ()
 *
 * Called From: 1A34:2FBF:0007:3322
 * Called From: 1A34:300C:0008:3B70
 */
void f__1A34_2FB0_0004_0D98()
{
	emu_movw(&emu_ax.x, emu_si);
	f__1A34_300E_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_2FB2_0002_0318()
 *
 * @name f__1A34_2FB2_0002_0318
 * @implements 1A34:2FB2:0002:0318 ()
 *
 * Called From: 1A34:3004:0004:05AC
 */
void f__1A34_2FB2_0002_0318()
{
	f__1A34_300E_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_2FB4_0006_0EFC()
 *
 * @name f__1A34_2FB4_0006_0EFC
 * @implements 1A34:2FB4:0006:0EFC ()
 *
 * Called From: 1A34:2FAE:0016:3A4D
 */
void f__1A34_2FB4_0006_0EFC()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2FBA); emu_cs = 0x34CD; ovl__34CD(30);
	f__1A34_2FBA_0007_3322();
}

/**
 * Decompiled function f__1A34_2FBA_0007_3322()
 *
 * @name f__1A34_2FBA_0007_3322
 * @implements 1A34:2FBA:0007:3322 ()
 *
 * Called From: 1A34:2FBA:0006:0EFC
 */
void f__1A34_2FBA_0007_3322()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__1A34_2FC1_0006_038C(); return; }
	f__1A34_2FB0_0004_0D98(); return;
}

/**
 * Decompiled function f__1A34_2FC1_0006_038C()
 *
 * @name f__1A34_2FC1_0006_038C
 * @implements 1A34:2FC1:0006:038C ()
 *
 * Called From: 1A34:2FBD:0007:3322
 */
void f__1A34_2FC1_0006_038C()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2FC7); emu_cs = 0x34CD; ovl__34CD(13);
	f__1A34_2FC7_0008_412E();
}

/**
 * Decompiled function f__1A34_2FC7_0008_412E()
 *
 * @name f__1A34_2FC7_0008_412E
 * @implements 1A34:2FC7:0008:412E ()
 *
 * Called From: 1A34:2FC7:0006:038C
 */
void f__1A34_2FC7_0008_412E()
{
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, 0xE);
	if (!emu_flags.zf) { f__1A34_2FCF_0004_070C(); return; }
	emu_ip = 0x2FB0; emu_last_cs = 0x1A34; emu_last_ip = 0x2FCD; emu_last_length = 0x0008; emu_last_crc = 0x412E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_2FCF_0004_070C()
 *
 * @name f__1A34_2FCF_0004_070C
 * @implements 1A34:2FCF:0004:070C ()
 *
 * Called From: 1A34:2FCB:0008:412E
 */
void f__1A34_2FCF_0004_070C()
{
	emu_xorw(&emu_di, emu_di);
	f__1A34_3007_0007_7C70(); return;
}

/**
 * Decompiled function f__1A34_2FD3_0010_C5FF()
 *
 * @name f__1A34_2FD3_0010_C5FF
 * @implements 1A34:2FD3:0010:C5FF ()
 *
 * Called From: 1A34:300A:0007:7C70
 * Called From: 1A34:300A:0008:3B70
 */
void f__1A34_2FD3_0010_C5FF()
{
	emu_movw(&emu_bx.x, emu_di);
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x62D8));
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x2FE3); emu_cs = 0x34CD; ovl__34CD(26);
	f__1A34_2FE3_001F_F519();
}

/**
 * Decompiled function f__1A34_2FE3_001F_F519()
 *
 * @name f__1A34_2FE3_001F_F519
 * @implements 1A34:2FE3:001F:F519 ()
 *
 * Called From: 1A34:2FE3:0010:C5FF
 */
void f__1A34_2FE3_001F_F519()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_3006_0008_3B70(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x3002); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__1A34_3002_0004_05AC();
}

/**
 * Decompiled function f__1A34_3002_0004_05AC()
 *
 * @name f__1A34_3002_0004_05AC
 * @implements 1A34:3002:0004:05AC ()
 *
 * Called From: 1A34:3002:001F:F519
 */
void f__1A34_3002_0004_05AC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__1A34_2FB2_0002_0318(); return;
}

/**
 * Decompiled function f__1A34_3006_0008_3B70()
 *
 * @name f__1A34_3006_0008_3B70
 * @implements 1A34:3006:0008:3B70 ()
 *
 * Called From: 1A34:2FF0:001F:F519
 */
void f__1A34_3006_0008_3B70()
{
	emu_incw(&emu_di);
	emu_cmpws(&emu_di, 0x9);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_2FD3_0010_C5FF(); return; }
	f__1A34_2FB0_0004_0D98(); return;
}

/**
 * Decompiled function f__1A34_3007_0007_7C70()
 *
 * @name f__1A34_3007_0007_7C70
 * @implements 1A34:3007:0007:7C70 ()
 *
 * Called From: 1A34:2FD1:0004:070C
 */
void f__1A34_3007_0007_7C70()
{
	emu_cmpws(&emu_di, 0x9);
	if ((emu_flags.sf != emu_flags.of)) { f__1A34_2FD3_0010_C5FF(); return; }
	emu_ip = 0x2FB0; emu_last_cs = 0x1A34; emu_last_ip = 0x300C; emu_last_length = 0x0007; emu_last_crc = 0x7C70; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_300E_0006_137A()
 *
 * @name f__1A34_300E_0006_137A
 * @implements 1A34:300E:0006:137A ()
 *
 * Called From: 1A34:2FB2:0002:0318
 * Called From: 1A34:2FB2:0004:0D98
 */
void f__1A34_300E_0006_137A()
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
 * Decompiled function f__1A34_3014_001B_7512()
 *
 * @name f__1A34_3014_001B_7512
 * @implements 1A34:3014:001B:7512 ()
 *
 * Called From: 1A34:1C4A:0018:099F
 * Called From: 1A34:3268:001F:42A6
 */
void f__1A34_3014_001B_7512()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x302A; emu_last_cs = 0x1A34; emu_last_ip = 0x3020; emu_last_length = 0x001B; emu_last_crc = 0x7512; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__1A34_302F_003F_BC35(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x3142; emu_last_cs = 0x1A34; emu_last_ip = 0x302C; emu_last_length = 0x001B; emu_last_crc = 0x7512; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_302A_0005_0D66()
 *
 * @name f__1A34_302A_0005_0D66
 * @implements 1A34:302A:0005:0D66 ()
 *
 * Called From: 1A34:313F:0003:0514
 */
void f__1A34_302A_0005_0D66()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1A34_3142_0004_0F7A(); return;
}

/**
 * Decompiled function f__1A34_302C_0003_0706()
 *
 * @name f__1A34_302C_0003_0706
 * @implements 1A34:302C:0003:0706 ()
 *
 * Called From: 1A34:312A:0006:2B08
 * Called From: 1A34:312A:000D:C607
 * Called From: 1A34:313C:0010:17C7
 * Called From: 1A34:313C:0006:2B20
 */
void f__1A34_302C_0003_0706()
{
	f__1A34_3142_0004_0F7A(); return;
}

/**
 * Decompiled function f__1A34_302F_003F_BC35()
 *
 * @name f__1A34_302F_003F_BC35
 * @implements 1A34:302F:003F:BC35 ()
 *
 * Called From: 1A34:3028:001B:7512
 */
void f__1A34_302F_003F_BC35()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x60);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2C94);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x306E); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__1A34_306E_0014_C0BC();
}

/**
 * Decompiled function f__1A34_306E_0014_C0BC()
 *
 * @name f__1A34_306E_0014_C0BC
 * @implements 1A34:306E:0014:C0BC ()
 *
 * Called From: 1A34:306E:003F:BC35
 */
void f__1A34_306E_0014_C0BC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x3082); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__1A34_3082_0010_A238();
}

/**
 * Decompiled function f__1A34_3082_0010_A238()
 *
 * @name f__1A34_3082_0010_A238
 * @implements 1A34:3082:0010:A238 ()
 *
 * Called From: 1A34:3082:0014:C0BC
 */
void f__1A34_3082_0010_A238()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3092); f__1A34_3623_0010_3F68();
	f__1A34_3092_0028_E5C7();
}

/**
 * Decompiled function f__1A34_3092_0028_E5C7()
 *
 * @name f__1A34_3092_0028_E5C7
 * @implements 1A34:3092:0028:E5C7 ()
 *
 * Called From: 1A34:3092:0010:A238
 */
void f__1A34_3092_0028_E5C7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_pop(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_ax.x);
	if (emu_flags.zf) { f__1A34_30F1_0011_E91E(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_30BA_0024_3238(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x56));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (!emu_flags.zf) { emu_ip = 0x30BA; emu_last_cs = 0x1A34; emu_last_ip = 0x30B6; emu_last_length = 0x0028; emu_last_crc = 0xE5C7; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x3127; emu_last_cs = 0x1A34; emu_last_ip = 0x30B8; emu_last_length = 0x0028; emu_last_crc = 0xE5C7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_30BA_0024_3238()
 *
 * @name f__1A34_30BA_0024_3238
 * @implements 1A34:30BA:0024:3238 ()
 *
 * Called From: 1A34:30AA:0028:E5C7
 */
void f__1A34_30BA_0024_3238()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x0);
	if (!emu_flags.zf) { emu_ip = 0x30EF; emu_last_cs = 0x1A34; emu_last_ip = 0x30C2; emu_last_length = 0x0024; emu_last_crc = 0x3238; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), 0x80);
	if (emu_flags.zf) { emu_ip = 0x30EF; emu_last_cs = 0x1A34; emu_last_ip = 0x30CD; emu_last_length = 0x0024; emu_last_crc = 0x3238; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x30DE); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__1A34_30DE_000D_C02D();
}

/**
 * Decompiled function f__1A34_30DE_000D_C02D()
 *
 * @name f__1A34_30DE_000D_C02D
 * @implements 1A34:30DE:000D:C02D ()
 *
 * Called From: 1A34:30DE:0024:3238
 */
void f__1A34_30DE_000D_C02D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x56));
	if (!emu_flags.zf) { f__1A34_30ED_0002_0338(); return; }
	f__1A34_3127_0006_2B08(); return;
}

/**
 * Decompiled function f__1A34_30ED_0002_0338()
 *
 * @name f__1A34_30ED_0002_0338
 * @implements 1A34:30ED:0002:0338 ()
 *
 * Called From: 1A34:30E7:000D:C02D
 */
void f__1A34_30ED_0002_0338()
{
	f__1A34_3139_0006_2B20(); return;
}

/**
 * Decompiled function f__1A34_30F1_0011_E91E()
 *
 * @name f__1A34_30F1_0011_E91E
 * @implements 1A34:30F1:0011:E91E ()
 *
 * Called From: 1A34:30A0:0028:E5C7
 */
void f__1A34_30F1_0011_E91E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_cx.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_cs); emu_push(0x3102); emu_cs = 0x01F7; f__01F7_058E_0015_66E9();
	f__1A34_3102_001E_86EB();
}

/**
 * Decompiled function f__1A34_3102_001E_86EB()
 *
 * @name f__1A34_3102_001E_86EB
 * @implements 1A34:3102:001E:86EB ()
 *
 * Called From: 1A34:3102:0011:E91E
 */
void f__1A34_3102_001E_86EB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_cx.x, emu_get_memory16(emu_es, emu_bx.x,  0x34));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x32));
	emu_andw(&emu_bx.x, emu_ax.x);
	emu_andw(&emu_cx.x, emu_dx.x);
	emu_orw(&emu_bx.x, emu_cx.x);
	if (emu_flags.zf) { f__1A34_313F_0003_0514(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x3120); emu_cs = 0x0C10; f__0C10_0168_0014_CCE7();
	f__1A34_3120_000D_C607();
}

/**
 * Decompiled function f__1A34_3120_000D_C607()
 *
 * @name f__1A34_3120_000D_C607
 * @implements 1A34:3120:000D:C607 ()
 *
 * Called From: 1A34:3120:001E:86EB
 */
void f__1A34_3120_000D_C607()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { f__1A34_312F_0010_17C7(); return; }
	emu_movw(&emu_ax.x, 0x2);
	f__1A34_302C_0003_0706(); return;
}

/**
 * Decompiled function f__1A34_3127_0006_2B08()
 *
 * @name f__1A34_3127_0006_2B08
 * @implements 1A34:3127:0006:2B08 ()
 *
 * Called From: 1A34:30E9:000D:C02D
 */
void f__1A34_3127_0006_2B08()
{
	emu_movw(&emu_ax.x, 0x2);
	f__1A34_302C_0003_0706(); return;
}

/**
 * Decompiled function f__1A34_312F_0010_17C7()
 *
 * @name f__1A34_312F_0010_17C7
 * @implements 1A34:312F:0010:17C7 ()
 *
 * Called From: 1A34:3125:000D:C607
 */
void f__1A34_312F_0010_17C7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (!emu_flags.zf) { emu_ip = 0x313F; emu_last_cs = 0x1A34; emu_last_ip = 0x3137; emu_last_length = 0x0010; emu_last_crc = 0x17C7; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__1A34_302C_0003_0706(); return;
}

/**
 * Decompiled function f__1A34_3139_0006_2B20()
 *
 * @name f__1A34_3139_0006_2B20
 * @implements 1A34:3139:0006:2B20 ()
 *
 * Called From: 1A34:30ED:0002:0338
 */
void f__1A34_3139_0006_2B20()
{
	emu_movw(&emu_ax.x, 0x1);
	f__1A34_302C_0003_0706(); return;
}

/**
 * Decompiled function f__1A34_313F_0003_0514()
 *
 * @name f__1A34_313F_0003_0514
 * @implements 1A34:313F:0003:0514 ()
 *
 * Called From: 1A34:3113:001E:86EB
 */
void f__1A34_313F_0003_0514()
{
	f__1A34_302A_0005_0D66(); return;
}

/**
 * Decompiled function f__1A34_3142_0004_0F7A()
 *
 * @name f__1A34_3142_0004_0F7A
 * @implements 1A34:3142:0004:0F7A ()
 *
 * Called From: 1A34:302C:0003:0706
 * Called From: 1A34:302C:0005:0D66
 */
void f__1A34_3142_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_3146_0018_1857()
 *
 * @name f__1A34_3146_0018_1857
 * @implements 1A34:3146:0018:1857 ()
 *
 * Called From: 176C:1F38:001C:87DC
 * Called From: 1A34:172C:0023:2B65
 */
void f__1A34_3146_0018_1857()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_di, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_315E_001E_9B78(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x330C; emu_last_cs = 0x1A34; emu_last_ip = 0x315B; emu_last_length = 0x0018; emu_last_crc = 0x1857; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_315B_0003_05F2()
 *
 * @name f__1A34_315B_0003_05F2
 * @implements 1A34:315B:0003:05F2 ()
 *
 * Called From: 1A34:3278:0010:63AA
 * Called From: 1A34:3280:0006:2BC4
 * Called From: 1A34:3309:0005:1A88
 */
void f__1A34_315B_0003_05F2()
{
	f__1A34_330C_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_315E_001E_9B78()
 *
 * @name f__1A34_315E_001E_9B78
 * @implements 1A34:315E:001E:9B78 ()
 *
 * Called From: 1A34:3157:0018:1857
 */
void f__1A34_315E_001E_9B78()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_ax.x, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x2D07);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x317C); emu_cs = 0x34CD; ovl__34CD(11);
	f__1A34_317C_0012_F5D4();
}

/**
 * Decompiled function f__1A34_317C_0012_F5D4()
 *
 * @name f__1A34_317C_0012_F5D4
 * @implements 1A34:317C:0012:F5D4 ()
 *
 * Called From: 1A34:317C:001E:9B78
 */
void f__1A34_317C_0012_F5D4()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1A34_318E_0006_0FFC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x4);
	if (emu_flags.zf) { emu_ip = 0x318E; emu_last_cs = 0x1A34; emu_last_ip = 0x3189; emu_last_length = 0x0012; emu_last_crc = 0xF5D4; emu_call(); return; } // Jump does not resolve
	f__1A34_327D_0006_2BC4(); return;
}

/**
 * Decompiled function f__1A34_318E_0006_0FFC()
 *
 * @name f__1A34_318E_0006_0FFC
 * @implements 1A34:318E:0006:0FFC ()
 *
 * Called From: 1A34:317F:0012:F5D4
 */
void f__1A34_318E_0006_0FFC()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x3194); emu_cs = 0x34CD; ovl__34CD(26);
	f__1A34_3194_0012_ADA4();
}

/**
 * Decompiled function f__1A34_3194_0012_ADA4()
 *
 * @name f__1A34_3194_0012_ADA4
 * @implements 1A34:3194:0012:ADA4 ()
 *
 * Called From: 1A34:3194:0006:0FFC
 */
void f__1A34_3194_0012_ADA4()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1A34_31A6_0013_9A44(); return; }
	f__1A34_3246_0006_0EBC(); return;
}

/**
 * Decompiled function f__1A34_31A6_0013_9A44()
 *
 * @name f__1A34_31A6_0013_9A44
 * @implements 1A34:31A6:0013:9A44 ()
 *
 * Called From: 1A34:31A1:0012:ADA4
 */
void f__1A34_31A6_0013_9A44()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { emu_ip = 0x31B9; emu_last_cs = 0x1A34; emu_last_ip = 0x31AF; emu_last_length = 0x0013; emu_last_crc = 0x9A44; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { f__1A34_31B9_000D_BB84(); return; }
	emu_ip = 0x3246; emu_last_cs = 0x1A34; emu_last_ip = 0x31B6; emu_last_length = 0x0013; emu_last_crc = 0x9A44; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_31B9_000D_BB84()
 *
 * @name f__1A34_31B9_000D_BB84
 * @implements 1A34:31B9:000D:BB84 ()
 *
 * Called From: 1A34:31B4:0013:9A44
 */
void f__1A34_31B9_000D_BB84()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x19);
	if (!emu_flags.zf) { f__1A34_31C6_0019_AA35(); return; }
	emu_ip = 0x3246; emu_last_cs = 0x1A34; emu_last_ip = 0x31C3; emu_last_length = 0x000D; emu_last_crc = 0xBB84; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_31C6_0019_AA35()
 *
 * @name f__1A34_31C6_0019_AA35
 * @implements 1A34:31C6:0019:AA35 ()
 *
 * Called From: 1A34:31C1:000D:BB84
 */
void f__1A34_31C6_0019_AA35()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_31ED_000B_E082(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x31DF); emu_cs = 0x167E; emu_ip = 0x32D2; emu_last_cs = 0x1A34; emu_last_ip = 0x31DA; emu_last_length = 0x0019; emu_last_crc = 0xAA35; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_31ED_000B_E082()
 *
 * @name f__1A34_31ED_000B_E082
 * @implements 1A34:31ED:000B:E082 ()
 *
 * Called From: 1A34:31CE:0019:AA35
 */
void f__1A34_31ED_000B_E082()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x31F8); f__1A34_3623_0010_3F68();
	f__1A34_31F8_000E_5BC3();
}

/**
 * Decompiled function f__1A34_31F8_000E_5BC3()
 *
 * @name f__1A34_31F8_000E_5BC3
 * @implements 1A34:31F8:000E:5BC3 ()
 *
 * Called From: 1A34:31F8:000B:E082
 */
void f__1A34_31F8_000E_5BC3()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x3206); f__1A34_3623_0010_3F68();
	f__1A34_3206_0008_715C();
}

/**
 * Decompiled function f__1A34_3206_0008_715C()
 *
 * @name f__1A34_3206_0008_715C
 * @implements 1A34:3206:0008:715C ()
 *
 * Called From: 1A34:3206:000E:5BC3
 */
void f__1A34_3206_0008_715C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x320E); emu_cs = 0x1423; f__1423_0F34_0017_4318();
	f__1A34_320E_0038_C0FE();
}

/**
 * Decompiled function f__1A34_320E_0038_C0FE()
 *
 * @name f__1A34_320E_0038_C0FE
 * @implements 1A34:320E:0038:C0FE ()
 *
 * Called From: 1A34:320E:0008:715C
 */
void f__1A34_320E_0038_C0FE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__1A34_3244_0002_03C2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, 0x5A);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_movw(&emu_dx.x, 0x2D07);
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_es, emu_dx.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x0);
	if (!emu_flags.zf) { f__1A34_3244_0002_03C2(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x1);
	if (emu_flags.zf) { emu_ip = 0x3246; emu_last_cs = 0x1A34; emu_last_ip = 0x3238; emu_last_length = 0x0038; emu_last_crc = 0xC0FE; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x3C), 0x2);
	if (emu_flags.zf) { emu_ip = 0x3246; emu_last_cs = 0x1A34; emu_last_ip = 0x3242; emu_last_length = 0x0038; emu_last_crc = 0xC0FE; emu_call(); return; } // Jump does not resolve
	f__1A34_327D_0006_2BC4(); return;
}

/**
 * Decompiled function f__1A34_3244_0002_03C2()
 *
 * @name f__1A34_3244_0002_03C2
 * @implements 1A34:3244:0002:03C2 ()
 *
 * Called From: 1A34:3212:0038:C0FE
 * Called From: 1A34:322E:0038:C0FE
 */
void f__1A34_3244_0002_03C2()
{
	f__1A34_327D_0006_2BC4(); return;
}

/**
 * Decompiled function f__1A34_3246_0006_0EBC()
 *
 * @name f__1A34_3246_0006_0EBC
 * @implements 1A34:3246:0006:0EBC ()
 *
 * Called From: 1A34:31A3:0012:ADA4
 */
void f__1A34_3246_0006_0EBC()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x324C); emu_cs = 0x34CD; ovl__34CD(30);
	f__1A34_324C_001F_42A6();
}

/**
 * Decompiled function f__1A34_324C_001F_42A6()
 *
 * @name f__1A34_324C_001F_42A6
 * @implements 1A34:324C:001F:42A6 ()
 *
 * Called From: 1A34:324C:0006:0EBC
 */
void f__1A34_324C_001F_42A6()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_3283_0006_03CC(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x326B); f__1A34_3014_001B_7512();
	f__1A34_326B_0010_63AA();
}

/**
 * Decompiled function f__1A34_326B_0010_63AA()
 *
 * @name f__1A34_326B_0010_63AA
 * @implements 1A34:326B:0010:63AA ()
 *
 * Called From: 1A34:326B:001F:42A6
 */
void f__1A34_326B_0010_63AA()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__1A34_327D_0006_2BC4(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_negw(&emu_ax.x, emu_ax.x);
	f__1A34_315B_0003_05F2(); return;
}

/**
 * Decompiled function f__1A34_327D_0006_2BC4()
 *
 * @name f__1A34_327D_0006_2BC4
 * @implements 1A34:327D:0006:2BC4 ()
 *
 * Called From: 1A34:318B:0012:F5D4
 * Called From: 1A34:3244:0038:C0FE
 * Called From: 1A34:3244:0002:03C2
 * Called From: 1A34:3272:0010:63AA
 */
void f__1A34_327D_0006_2BC4()
{
	emu_movw(&emu_ax.x, 0x100);
	f__1A34_315B_0003_05F2(); return;
}

/**
 * Decompiled function f__1A34_3283_0006_03CC()
 *
 * @name f__1A34_3283_0006_03CC
 * @implements 1A34:3283:0006:03CC ()
 *
 * Called From: 1A34:3259:001F:42A6
 */
void f__1A34_3283_0006_03CC()
{
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x3289); emu_cs = 0x34CD; ovl__34CD(13);
	f__1A34_3289_0051_62CD();
}

/**
 * Decompiled function f__1A34_3289_0051_62CD()
 *
 * @name f__1A34_3289_0051_62CD
 * @implements 1A34:3289:0051:62CD ()
 *
 * Called From: 1A34:3289:0006:03CC
 */
void f__1A34_3289_0051_62CD()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_movw(&emu_dx.x, 0x1C);
	emu_imuluw(&emu_ax.x, emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x3C));
	emu_movw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, emu_bx.x,  0x3A42));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x6);
	if (!emu_flags.zf) { f__1A34_32E3_0021_E069(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0xB);
	if (!emu_flags.zf) { emu_ip = 0x32E3; emu_last_cs = 0x1A34; emu_last_ip = 0x32B4; emu_last_length = 0x0051; emu_last_crc = 0x62CD; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, emu_di);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x39EA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2));
	emu_movb(&emu_ax.h, 0x0);
	emu_andw(&emu_ax.x, 0x7);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x32DA); emu_cs = 0x1423; emu_ip = 0x420E; emu_last_cs = 0x1A34; emu_last_ip = 0x32D5; emu_last_length = 0x0051; emu_last_crc = 0x62CD; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_32E3_0021_E069()
 *
 * @name f__1A34_32E3_0021_E069
 * @implements 1A34:32E3:0021:E069 ()
 *
 * Called From: 1A34:32AE:0051:62CD
 */
void f__1A34_32E3_0021_E069()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { emu_ip = 0x3304; emu_last_cs = 0x1A34; emu_last_ip = 0x32E5; emu_last_length = 0x0021; emu_last_crc = 0xE069; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_si, 0xFF);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x1);
	if (emu_flags.zf) { f__1A34_3302_0002_03AA(); return; }
	emu_movw(&emu_ax.x, emu_si);
	emu_movb(&emu_cx.l, 0x2);
	emu_sarw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_si);
	emu_movb(&emu_cx.l, 0x3);
	emu_sarw(&emu_dx.x, emu_cx.l);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_subw(&emu_si, emu_ax.x);
	f__1A34_3307_0005_1A88(); return;
}

/**
 * Decompiled function f__1A34_3302_0002_03AA()
 *
 * @name f__1A34_3302_0002_03AA
 * @implements 1A34:3302:0002:03AA ()
 *
 * Called From: 1A34:32F0:0021:E069
 */
void f__1A34_3302_0002_03AA()
{
	f__1A34_3307_0005_1A88(); return;
}

/**
 * Decompiled function f__1A34_3307_0005_1A88()
 *
 * @name f__1A34_3307_0005_1A88
 * @implements 1A34:3307:0005:1A88 ()
 *
 * Called From: 1A34:3302:0002:03AA
 * Called From: 1A34:3302:0021:E069
 */
void f__1A34_3307_0005_1A88()
{
	emu_movw(&emu_ax.x, emu_si);
	f__1A34_315B_0003_05F2(); return;
}

/**
 * Decompiled function f__1A34_330C_0006_137A()
 *
 * @name f__1A34_330C_0006_137A
 * @implements 1A34:330C:0006:137A ()
 *
 * Called From: 1A34:315B:0003:05F2
 */
void f__1A34_330C_0006_137A()
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
 * Decompiled function f__1A34_3312_0017_6BC9()
 *
 * @name f__1A34_3312_0017_6BC9
 * @implements 1A34:3312:0017:6BC9 ()
 *
 * Called From: 176C:1E08:000D:AF83
 * Called From: 176C:1E08:0023:05A1
 * Called From: 1A34:09D6:000B:3211
 */
void f__1A34_3312_0017_6BC9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x4D), 0x0);
	if (emu_flags.zf) { f__1A34_3329_0012_3AA7(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__1A34_332B_0010_3BEB(); return;
}

/**
 * Decompiled function f__1A34_3329_0012_3AA7()
 *
 * @name f__1A34_3329_0012_3AA7
 * @implements 1A34:3329:0012:3AA7 ()
 *
 * Called From: 1A34:3322:0017:6BC9
 */
void f__1A34_3329_0012_3AA7()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (emu_flags.zf) { emu_ip = 0x333B; emu_last_cs = 0x1A34; emu_last_ip = 0x3336; emu_last_length = 0x0012; emu_last_crc = 0x3AA7; emu_call(); return; } // Jump does not resolve
	f__1A34_3461_0014_A208(); return;
}

/**
 * Decompiled function f__1A34_332B_0010_3BEB()
 *
 * @name f__1A34_332B_0010_3BEB
 * @implements 1A34:332B:0010:3BEB ()
 *
 * Called From: 1A34:3327:0017:6BC9
 */
void f__1A34_332B_0010_3BEB()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (emu_flags.zf) { f__1A34_333B_001B_05BA(); return; }
	emu_ip = 0x3461; emu_last_cs = 0x1A34; emu_last_ip = 0x3338; emu_last_length = 0x0010; emu_last_crc = 0x3BEB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_333B_001B_05BA()
 *
 * @name f__1A34_333B_001B_05BA
 * @implements 1A34:333B:001B:05BA ()
 *
 * Called From: 1A34:3336:0010:3BEB
 */
void f__1A34_333B_001B_05BA()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_xorw(&emu_si, emu_si);
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3356); f__1A34_3623_0010_3F68();
	f__1A34_3356_000E_6E22();
}

/**
 * Decompiled function f__1A34_3356_000E_6E22()
 *
 * @name f__1A34_3356_000E_6E22
 * @implements 1A34:3356:000E:6E22 ()
 *
 * Called From: 1A34:3356:001B:05BA
 */
void f__1A34_3356_000E_6E22()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x3364); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__1A34_3364_0005_1F56();
}

/**
 * Decompiled function f__1A34_3364_0005_1F56()
 *
 * @name f__1A34_3364_0005_1F56
 * @implements 1A34:3364:0005:1F56 ()
 *
 * Called From: 1A34:3364:000E:6E22
 */
void f__1A34_3364_0005_1F56()
{
	emu_addws(&emu_sp, 0x8);
	f__1A34_33B6_0025_C4D9(); return;
}

/**
 * Decompiled function f__1A34_3369_0025_DCE0()
 *
 * @name f__1A34_3369_0025_DCE0
 * @implements 1A34:3369:0025:DCE0 ()
 *
 * Called From: 1A34:33C2:0025:C4D9
 */
void f__1A34_3369_0025_DCE0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x1);
	if (!emu_flags.zf) { f__1A34_33A9_000B_0232(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x338E); emu_cs = 0x0F3F; emu_ip = 0x3442; emu_last_cs = 0x1A34; emu_last_ip = 0x3389; emu_last_length = 0x0025; emu_last_crc = 0xDCE0; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_33A9_000B_0232()
 *
 * @name f__1A34_33A9_000B_0232
 * @implements 1A34:33A9:000B:0232 ()
 *
 * Called From: 1A34:3371:0025:DCE0
 */
void f__1A34_33A9_000B_0232()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x33B4); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	f__1A34_33B4_0027_FE19();
}

/**
 * Decompiled function f__1A34_33B4_0027_FE19()
 *
 * @name f__1A34_33B4_0027_FE19
 * @implements 1A34:33B4:0027:FE19 ()
 *
 * Called From: 1A34:33B4:000B:0232
 */
void f__1A34_33B4_0027_FE19()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { emu_ip = 0x3369; emu_last_cs = 0x1A34; emu_last_ip = 0x33C2; emu_last_length = 0x0027; emu_last_crc = 0xFE19; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!emu_flags.zf) { emu_ip = 0x343F; emu_last_cs = 0x1A34; emu_last_ip = 0x33CA; emu_last_length = 0x0027; emu_last_crc = 0xFE19; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x33DB); f__1A34_3623_0010_3F68();
	f__1A34_33DB_000E_6E22();
}

/**
 * Decompiled function f__1A34_33B6_0025_C4D9()
 *
 * @name f__1A34_33B6_0025_C4D9
 * @implements 1A34:33B6:0025:C4D9 ()
 *
 * Called From: 1A34:3367:0005:1F56
 */
void f__1A34_33B6_0025_C4D9()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__1A34_3369_0025_DCE0(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!emu_flags.zf) { emu_ip = 0x343F; emu_last_cs = 0x1A34; emu_last_ip = 0x33CA; emu_last_length = 0x0025; emu_last_crc = 0xC4D9; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0xC);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x33DB); emu_ip = 0x3623; emu_last_cs = 0x1A34; emu_last_ip = 0x33D8; emu_last_length = 0x0025; emu_last_crc = 0xC4D9; emu_call(); // Jump does not resolve
	f__1A34_33DB_000E_6E22();
}

/**
 * Decompiled function f__1A34_33DB_000E_6E22()
 *
 * @name f__1A34_33DB_000E_6E22
 * @implements 1A34:33DB:000E:6E22 ()
 *
 * Called From: 1A34:33DB:0027:FE19
 */
void f__1A34_33DB_000E_6E22()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x33E9); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__1A34_33E9_0005_1F4A();
}

/**
 * Decompiled function f__1A34_33E9_0005_1F4A()
 *
 * @name f__1A34_33E9_0005_1F4A
 * @implements 1A34:33E9:0005:1F4A ()
 *
 * Called From: 1A34:33E9:000E:6E22
 */
void f__1A34_33E9_0005_1F4A()
{
	emu_addws(&emu_sp, 0x8);
	f__1A34_3431_0025_1253(); return;
}

/**
 * Decompiled function f__1A34_33EE_001B_4796()
 *
 * @name f__1A34_33EE_001B_4796
 * @implements 1A34:33EE:001B:4796 ()
 *
 * Called From: 1A34:343D:0025:1253
 */
void f__1A34_33EE_001B_4796()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x3409); emu_cs = 0x0F3F; f__0F3F_00B4_002A_0887();
	f__1A34_3409_0026_2FFC();
}

/**
 * Decompiled function f__1A34_3409_0026_2FFC()
 *
 * @name f__1A34_3409_0026_2FFC
 * @implements 1A34:3409:0026:2FFC ()
 *
 * Called From: 1A34:3409:001B:4796
 */
void f__1A34_3409_0026_2FFC()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_di, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__1A34_3416_0019_4054(); return; }
	emu_cmpw(&emu_di, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x3424; emu_last_cs = 0x1A34; emu_last_ip = 0x3414; emu_last_length = 0x0026; emu_last_crc = 0x2FFC; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_si, emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x342F); emu_cs = 0x1082; emu_ip = 0x356C; emu_last_cs = 0x1A34; emu_last_ip = 0x342A; emu_last_length = 0x0026; emu_last_crc = 0x2FFC; emu_call(); // Jump does not resolve
	f__1A34_342F_0027_2893();
}

/**
 * Decompiled function f__1A34_3416_0019_4054()
 *
 * @name f__1A34_3416_0019_4054
 * @implements 1A34:3416:0019:4054 ()
 *
 * Called From: 1A34:3410:0026:2FFC
 */
void f__1A34_3416_0019_4054()
{
	emu_movw(&emu_si, emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x342F); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	f__1A34_342F_0027_2893();
}

/**
 * Decompiled function f__1A34_342F_0027_2893()
 *
 * @name f__1A34_342F_0027_2893
 * @implements 1A34:342F:0027:2893 ()
 *
 * Called From: 1A34:342F:0019:4054
 */
void f__1A34_342F_0027_2893()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { emu_ip = 0x33EE; emu_last_cs = 0x1A34; emu_last_ip = 0x343D; emu_last_length = 0x0027; emu_last_crc = 0x2893; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { emu_ip = 0x345F; emu_last_cs = 0x1A34; emu_last_ip = 0x3445; emu_last_length = 0x0027; emu_last_crc = 0x2893; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x3456); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__1A34_3456_000B_645C();
}

/**
 * Decompiled function f__1A34_3431_0025_1253()
 *
 * @name f__1A34_3431_0025_1253
 * @implements 1A34:3431:0025:1253 ()
 *
 * Called From: 1A34:33EC:0005:1F4A
 */
void f__1A34_3431_0025_1253()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (!emu_flags.zf) { f__1A34_33EE_001B_4796(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { emu_ip = 0x345F; emu_last_cs = 0x1A34; emu_last_ip = 0x3445; emu_last_length = 0x0025; emu_last_crc = 0x1253; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x3456); emu_cs = 0x167E; emu_ip = 0x3549; emu_last_cs = 0x1A34; emu_last_ip = 0x3451; emu_last_length = 0x0025; emu_last_crc = 0x1253; emu_call(); // Jump does not resolve
	f__1A34_3456_000B_645C();
}

/**
 * Decompiled function f__1A34_3456_000B_645C()
 *
 * @name f__1A34_3456_000B_645C
 * @implements 1A34:3456:000B:645C ()
 *
 * Called From: 1A34:3456:0027:2893
 */
void f__1A34_3456_000B_645C()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4D), emu_ax.x);
	f__1A34_3486_0005_115C(); return;
}

/**
 * Decompiled function f__1A34_3461_0014_A208()
 *
 * @name f__1A34_3461_0014_A208
 * @implements 1A34:3461:0014:A208 ()
 *
 * Called From: 1A34:3338:0012:3AA7
 */
void f__1A34_3461_0014_A208()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_cs); emu_push(0x3475); emu_cs = 0x0F3F; f__0F3F_0086_0017_9220();
	f__1A34_3475_0008_7C24();
}

/**
 * Decompiled function f__1A34_3475_0008_7C24()
 *
 * @name f__1A34_3475_0008_7C24
 * @implements 1A34:3475:0008:7C24 ()
 *
 * Called From: 1A34:3475:0014:A208
 */
void f__1A34_3475_0008_7C24()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x347D); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__1A34_347D_000E_2C8F();
}

/**
 * Decompiled function f__1A34_347D_000E_2C8F()
 *
 * @name f__1A34_347D_000E_2C8F
 * @implements 1A34:347D:000E:2C8F ()
 *
 * Called From: 1A34:347D:0008:7C24
 */
void f__1A34_347D_000E_2C8F()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4D), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1A34_348B_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_3486_0005_115C()
 *
 * @name f__1A34_3486_0005_115C
 * @implements 1A34:3486:0005:115C ()
 *
 * Called From: 1A34:345F:000B:645C
 */
void f__1A34_3486_0005_115C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	f__1A34_348B_0006_137A(); return;
}

/**
 * Decompiled function f__1A34_348B_0006_137A()
 *
 * @name f__1A34_348B_0006_137A
 * @implements 1A34:348B:0006:137A ()
 *
 * Called From: 1A34:3489:000E:2C8F
 * Called From: 1A34:3489:0005:115C
 */
void f__1A34_348B_0006_137A()
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
 * Decompiled function f__1A34_3491_0032_DE4A()
 *
 * @name f__1A34_3491_0032_DE4A
 * @implements 1A34:3491:0032:DE4A ()
 *
 * Called From: 0972:0B53:0012:9DB2
 * Called From: 0972:0C77:000D:C80A
 * Called From: 0C10:0119:003D:FA05
 * Called From: 0C10:028B:003C:DCD4
 * Called From: 1A34:2211:0015:0A5C
 * Called From: 1A34:226B:000B:3B0F
 */
void f__1A34_3491_0032_DE4A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x34C6; emu_last_cs = 0x1A34; emu_last_ip = 0x349D; emu_last_length = 0x0032; emu_last_crc = 0xDE4A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x3), 0xFF);
	if (emu_flags.zf) { f__1A34_34C6_0006_11EC(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x3));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x34C3); emu_cs = 0x0FE4; f__0FE4_05FD_002C_E199();
	f__1A34_34C3_0003_0168();
}

/**
 * Decompiled function f__1A34_34C3_0003_0168()
 *
 * @name f__1A34_34C3_0003_0168
 * @implements 1A34:34C3:0003:0168 ()
 *
 * Called From: 1A34:34C3:0032:DE4A
 */
void f__1A34_34C3_0003_0168()
{
	emu_pop(&emu_cx.x);
	f__1A34_34CC_0004_0F7A(); return;
}

/**
 * Decompiled function f__1A34_34C4_0002_03A0()
 *
 * @name f__1A34_34C4_0002_03A0
 * @implements 1A34:34C4:0002:03A0 ()
 *
 * Called From: 1A34:34CA:0006:11EC
 */
void f__1A34_34C4_0002_03A0()
{
	f__1A34_34CC_0004_0F7A(); return;
}

/**
 * Decompiled function f__1A34_34C6_0006_11EC()
 *
 * @name f__1A34_34C6_0006_11EC
 * @implements 1A34:34C6:0006:11EC ()
 *
 * Called From: 1A34:34B3:0032:DE4A
 */
void f__1A34_34C6_0006_11EC()
{
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1A34_34C4_0002_03A0(); return;
}

/**
 * Decompiled function f__1A34_34CC_0004_0F7A()
 *
 * @name f__1A34_34CC_0004_0F7A
 * @implements 1A34:34CC:0004:0F7A ()
 *
 * Called From: 1A34:34C4:0002:03A0
 * Called From: 1A34:34C4:0003:0168
 */
void f__1A34_34CC_0004_0F7A()
{
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_350F_0021_7907()
 *
 * @name f__1A34_350F_0021_7907
 * @implements 1A34:350F:0021:7907 ()
 *
 * Called From: 176C:0876:0023:F38F
 */
void f__1A34_350F_0021_7907()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_3530_0011_CA1D(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x361E; emu_last_cs = 0x1A34; emu_last_ip = 0x352D; emu_last_length = 0x0021; emu_last_crc = 0x7907; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_352B_0005_0E90()
 *
 * @name f__1A34_352B_0005_0E90
 * @implements 1A34:352B:0005:0E90 ()
 *
 * Called From: 1A34:361B:0003:0682
 */
void f__1A34_352B_0005_0E90()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1A34_361E_0005_04BA(); return;
}

/**
 * Decompiled function f__1A34_352D_0003_04F0()
 *
 * @name f__1A34_352D_0003_04F0
 * @implements 1A34:352D:0003:04F0 ()
 *
 * Called From: 1A34:3618:0005:084E
 */
void f__1A34_352D_0003_04F0()
{
	f__1A34_361E_0005_04BA(); return;
}

/**
 * Decompiled function f__1A34_3530_0011_CA1D()
 *
 * @name f__1A34_3530_0011_CA1D
 * @implements 1A34:3530:0011:CA1D ()
 *
 * Called From: 1A34:3529:0021:7907
 */
void f__1A34_3530_0011_CA1D()
{
	emu_cmpws(&emu_si, 0x4);
	if (!emu_flags.zf) { f__1A34_357D_000B_CE5B(); return; }
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x3541); emu_cs = 0x0C3A; emu_ip = 0x580E; emu_last_cs = 0x1A34; emu_last_ip = 0x353C; emu_last_length = 0x0011; emu_last_crc = 0xCA1D; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_3571_000A_FC06()
 *
 * @name f__1A34_3571_000A_FC06
 * @implements 1A34:3571:000A:FC06 ()
 *
 * Called From: 1A34:35ED:000A:B03B
 * Called From: 1A34:35EF:0002:02AC
 */
void f__1A34_3571_000A_FC06()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	f__1A34_360E_0008_49E4(); return;
}

/**
 * Decompiled function f__1A34_357D_000B_CE5B()
 *
 * @name f__1A34_357D_000B_CE5B
 * @implements 1A34:357D:000B:CE5B ()
 *
 * Called From: 1A34:3533:0011:CA1D
 */
void f__1A34_357D_000B_CE5B()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3588); f__1A34_1328_0026_5EAA();
	f__1A34_3588_001F_A0FC();
}

/**
 * Decompiled function f__1A34_3588_001F_A0FC()
 *
 * @name f__1A34_3588_001F_A0FC
 * @implements 1A34:3588:001F:A0FC ()
 *
 * Called From: 1A34:3588:000B:CE5B
 */
void f__1A34_3588_001F_A0FC()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x8);
	if (emu_flags.zf) { emu_ip = 0x35B0; emu_last_cs = 0x1A34; emu_last_ip = 0x3599; emu_last_length = 0x001F; emu_last_crc = 0xA0FC; emu_call(); return; } // Jump does not resolve
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x35A7); emu_cs = 0x0C3A; f__0C3A_22CD_0029_3C96();
	f__1A34_35A7_0029_B3F6();
}

/**
 * Decompiled function f__1A34_35A7_0029_B3F6()
 *
 * @name f__1A34_35A7_0029_B3F6
 * @implements 1A34:35A7:0029:B3F6 ()
 *
 * Called From: 1A34:35A7:001F:A0FC
 */
void f__1A34_35A7_0029_B3F6()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_35F5_000A_52DE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__1A34_35F5_000A_52DE(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x35D0); f__1A34_117E_001D_4F85();
	f__1A34_35D0_0015_7BBD();
}

/**
 * Decompiled function f__1A34_35D0_0015_7BBD()
 *
 * @name f__1A34_35D0_0015_7BBD
 * @implements 1A34:35D0:0015:7BBD ()
 *
 * Called From: 1A34:35D0:0029:B3F6
 */
void f__1A34_35D0_0015_7BBD()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x35E5); emu_cs = 0x0C3A; f__0C3A_2207_001D_4317();
	f__1A34_35E5_000A_B03B();
}

/**
 * Decompiled function f__1A34_35E5_000A_B03B()
 *
 * @name f__1A34_35E5_000A_B03B
 * @implements 1A34:35E5:000A:B03B ()
 *
 * Called From: 1A34:35E5:0015:7BBD
 */
void f__1A34_35E5_000A_B03B()
{
	emu_addws(&emu_sp, 0x8);
	emu_pop(&emu_dx.x);
	emu_cmpw(&emu_dx.x, emu_ax.x);
	if ((emu_flags.cf || emu_flags.zf)) { f__1A34_35F3_0002_0388(); return; }
	f__1A34_3571_000A_FC06(); return;
}

/**
 * Decompiled function f__1A34_35EF_0002_02AC()
 *
 * @name f__1A34_35EF_0002_02AC
 * @implements 1A34:35EF:0002:02AC ()
 *
 * Called From: 1A34:35FD:000A:52DE
 */
void f__1A34_35EF_0002_02AC()
{
	f__1A34_3571_000A_FC06(); return;
}

/**
 * Decompiled function f__1A34_35F3_0002_0388()
 *
 * @name f__1A34_35F3_0002_0388
 * @implements 1A34:35F3:0002:0388 ()
 *
 * Called From: 1A34:35EB:000A:B03B
 */
void f__1A34_35F3_0002_0388()
{
	f__1A34_3607_000F_21BB(); return;
}

/**
 * Decompiled function f__1A34_35F5_000A_52DE()
 *
 * @name f__1A34_35F5_000A_52DE
 * @implements 1A34:35F5:000A:52DE ()
 *
 * Called From: 1A34:35B6:0029:B3F6
 * Called From: 1A34:35BE:0029:B3F6
 */
void f__1A34_35F5_000A_52DE()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__1A34_35FF_0017_6B2F(); return; }
	f__1A34_35EF_0002_02AC(); return;
}

/**
 * Decompiled function f__1A34_35FF_0017_6B2F()
 *
 * @name f__1A34_35FF_0017_6B2F
 * @implements 1A34:35FF:0017:6B2F ()
 *
 * Called From: 1A34:35FB:000A:52DE
 */
void f__1A34_35FF_0017_6B2F()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { f__1A34_361B_0003_0682(); return; }
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x3616); emu_cs = 0x167E; emu_ip = 0x3709; emu_last_cs = 0x1A34; emu_last_ip = 0x3611; emu_last_length = 0x0017; emu_last_crc = 0x6B2F; emu_call(); // Jump does not resolve
	f__1A34_3616_0005_084E();
}

/**
 * Decompiled function f__1A34_3607_000F_21BB()
 *
 * @name f__1A34_3607_000F_21BB
 * @implements 1A34:3607:000F:21BB ()
 *
 * Called From: 1A34:35F3:0002:0388
 */
void f__1A34_3607_000F_21BB()
{
	emu_movw(&emu_ax.x, 0x3);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x3616); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__1A34_3616_0005_084E();
}

/**
 * Decompiled function f__1A34_360E_0008_49E4()
 *
 * @name f__1A34_360E_0008_49E4
 * @implements 1A34:360E:0008:49E4 ()
 *
 * Called From: 1A34:3578:000A:FC06
 */
void f__1A34_360E_0008_49E4()
{
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x3616); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__1A34_3616_0005_084E();
}

/**
 * Decompiled function f__1A34_3616_0005_084E()
 *
 * @name f__1A34_3616_0005_084E
 * @implements 1A34:3616:0005:084E ()
 *
 * Called From: 1A34:3616:000F:21BB
 * Called From: 1A34:3616:0008:49E4
 */
void f__1A34_3616_0005_084E()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__1A34_352D_0003_04F0(); return;
}

/**
 * Decompiled function f__1A34_361B_0003_0682()
 *
 * @name f__1A34_361B_0003_0682
 * @implements 1A34:361B:0003:0682 ()
 *
 * Called From: 1A34:3605:0017:6B2F
 */
void f__1A34_361B_0003_0682()
{
	f__1A34_352B_0005_0E90(); return;
}

/**
 * Decompiled function f__1A34_361E_0005_04BA()
 *
 * @name f__1A34_361E_0005_04BA
 * @implements 1A34:361E:0005:04BA ()
 *
 * Called From: 1A34:352D:0005:0E90
 * Called From: 1A34:352D:0003:04F0
 */
void f__1A34_361E_0005_04BA()
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
 * Decompiled function f__1A34_3623_0010_3F68()
 *
 * @name f__1A34_3623_0010_3F68
 * @implements 1A34:3623:0010:3F68 ()
 *
 * Called From: 06F7:011E:000B:2C23
 * Called From: 06F7:012C:000E:733B
 * Called From: 07D4:0B3F:000B:03A3
 * Called From: 07D4:0C34:0030:4CB8
 * Called From: 07D4:11AE:000B:03A3
 * Called From: 07D4:11AE:0023:0F43
 * Called From: 0C3A:2233:0014:6BCB
 * Called From: 0EDB:054A:0008:7424
 * Called From: 0FE4:02ED:0011:5616
 * Called From: 0FE4:0361:0024:3474
 * Called From: 10E4:1046:0033:9CF4
 * Called From: 1423:0974:001C:1862
 * Called From: 1423:09BC:002A:E88A
 * Called From: 1423:09BC:0031:A932
 * Called From: 1423:0A0F:000F:45D4
 * Called From: 1423:0C1C:0029:82DC
 * Called From: 176C:17F5:0011:ACE9
 * Called From: 176C:17F5:001B:B40D
 * Called From: 176C:1DAD:000D:ACBB
 * Called From: 176C:237A:0021:F030
 * Called From: 176C:239C:0022:4F6B
 * Called From: 176C:25CC:002C:4EF8
 * Called From: 176C:29DE:003A:808E
 * Called From: 1A34:0C7F:001C:DB0D
 * Called From: 1A34:0C99:000B:E268
 * Called From: 1A34:0CFC:000B:E0E4
 * Called From: 1A34:0FE3:000B:E09E
 * Called From: 1A34:11BA:0015:7D21
 * Called From: 1A34:11D5:000B:E142
 * Called From: 1A34:11E3:000E:8B82
 * Called From: 1A34:13EC:000B:E0B2
 * Called From: 1A34:13FA:000E:5263
 * Called From: 1A34:1C32:0023:3194
 * Called From: 1A34:1CE8:003A:01CA
 * Called From: 1A34:27DA:0023:5BA9
 * Called From: 1A34:2B5E:001C:0B8D
 * Called From: 1A34:2D2A:000D:53E0
 * Called From: 1A34:308F:0010:A238
 * Called From: 1A34:31F5:000B:E082
 * Called From: 1A34:3203:000E:5BC3
 * Called From: 1A34:3353:001B:05BA
 * Called From: 1A34:33D8:0027:FE19
 * Called From: 1A34:37AD:0015:FA94
 * Called From: B4CD:02A5:000F:4254
 * Called From: B4CD:049B:0012:450B
 * Called From: B518:0FE5:000F:9E55
 */
void f__1A34_3623_0010_3F68()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_3633_000F_4060(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_ip = 0x364C; emu_last_cs = 0x1A34; emu_last_ip = 0x3631; emu_last_length = 0x0010; emu_last_crc = 0x3F68; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_3631_0002_039E()
 *
 * @name f__1A34_3631_0002_039E
 * @implements 1A34:3631:0002:039E ()
 *
 * Called From: 1A34:364A:000A:9545
 */
void f__1A34_3631_0002_039E()
{
	f__1A34_364C_0002_00E2(); return;
}

/**
 * Decompiled function f__1A34_3633_000F_4060()
 *
 * @name f__1A34_3633_000F_4060
 * @implements 1A34:3633:000F:4060 ()
 *
 * Called From: 1A34:362C:0010:3F68
 */
void f__1A34_3633_000F_4060()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x59), 0x0);
	if (emu_flags.zf) { f__1A34_3642_000A_9545(); return; }
	emu_movw(&emu_ax.x, 0x2);
	emu_ip = 0x3631; emu_last_cs = 0x1A34; emu_last_ip = 0x3640; emu_last_length = 0x000F; emu_last_crc = 0x4060; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_3642_000A_9545()
 *
 * @name f__1A34_3642_000A_9545
 * @implements 1A34:3642:000A:9545 ()
 *
 * Called From: 1A34:363B:000F:4060
 */
void f__1A34_3642_000A_9545()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x8));
	emu_movws(&emu_ax.x, emu_ax.l);
	f__1A34_3631_0002_039E(); return;
}

/**
 * Decompiled function f__1A34_364C_0002_00E2()
 *
 * @name f__1A34_364C_0002_00E2
 * @implements 1A34:364C:0002:00E2 ()
 *
 * Called From: 1A34:3631:0002:039E
 */
void f__1A34_364C_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_364E_0012_CFD4()
 *
 * @name f__1A34_364E_0012_CFD4
 * @implements 1A34:364E:0012:CFD4 ()
 *
 * Called From: 1A34:110A:0013:0648
 * Called From: 1A34:2AF7:000E:2158
 */
void f__1A34_364E_0012_CFD4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__1A34_3660_000F_9DBA(); return; }
	emu_ip = 0x3796; emu_last_cs = 0x1A34; emu_last_ip = 0x365D; emu_last_length = 0x0012; emu_last_crc = 0xCFD4; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__1A34_3660_000F_9DBA()
 *
 * @name f__1A34_3660_000F_9DBA
 * @implements 1A34:3660:000F:9DBA ()
 *
 * Called From: 1A34:365B:0012:CFD4
 */
void f__1A34_3660_000F_9DBA()
{
	emu_movw(&emu_ax.x, 0x2);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x366F); emu_cs = 0x167E; f__167E_00F3_001E_D821();
	f__1A34_366F_000F_4E92();
}

/**
 * Decompiled function f__1A34_366F_000F_4E92()
 *
 * @name f__1A34_366F_000F_4E92
 * @implements 1A34:366F:000F:4E92 ()
 *
 * Called From: 1A34:366F:000F:9DBA
 */
void f__1A34_366F_000F_4E92()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x367E); emu_cs = 0x0C10; f__0C10_0182_0012_8DA5();
	f__1A34_367E_0014_E742();
}

/**
 * Decompiled function f__1A34_367E_0014_E742()
 *
 * @name f__1A34_367E_0014_E742
 * @implements 1A34:367E:0014:E742 ()
 *
 * Called From: 1A34:367E:000F:4E92
 */
void f__1A34_367E_0014_E742()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x3692); emu_cs = 0x0FE4; f__0FE4_0243_003A_DEE2();
	f__1A34_3692_0005_1F50();
}

/**
 * Decompiled function f__1A34_3692_0005_1F50()
 *
 * @name f__1A34_3692_0005_1F50
 * @implements 1A34:3692:0005:1F50 ()
 *
 * Called From: 1A34:3692:0014:E742
 */
void f__1A34_3692_0005_1F50()
{
	emu_addws(&emu_sp, 0x8);
	f__1A34_36E5_0020_9F71(); return;
}

/**
 * Decompiled function f__1A34_3697_002F_0A0C()
 *
 * @name f__1A34_3697_002F_0A0C
 * @implements 1A34:3697:002F:0A0C ()
 *
 * Called From: 1A34:36F1:0020:9F71
 * Called From: 1A34:36F1:0022:9EA7
 */
void f__1A34_3697_002F_0A0C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), emu_si);
	if (!emu_flags.zf) { f__1A34_36A9_001D_9410(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x56), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), emu_si);
	if (!emu_flags.zf) { emu_ip = 0x36BB; emu_last_cs = 0x1A34; emu_last_ip = 0x36B0; emu_last_length = 0x002F; emu_last_crc = 0x0A0C; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x36C6); emu_cs = 0x0C10; f__0C10_0168_0014_CCE7();
	f__1A34_36C6_0011_4CFE();
}

/**
 * Decompiled function f__1A34_36A9_001D_9410()
 *
 * @name f__1A34_36A9_001D_9410
 * @implements 1A34:36A9:001D:9410 ()
 *
 * Called From: 1A34:369E:002F:0A0C
 */
void f__1A34_36A9_001D_9410()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), emu_si);
	if (!emu_flags.zf) { f__1A34_36BB_000B_3297(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x54), 0x0);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x36C6); emu_cs = 0x0C10; emu_ip = 0x382E; emu_last_cs = 0x1A34; emu_last_ip = 0x36C1; emu_last_length = 0x001D; emu_last_crc = 0x9410; emu_call(); // Jump does not resolve
	f__1A34_36C6_0011_4CFE();
}

/**
 * Decompiled function f__1A34_36BB_000B_3297()
 *
 * @name f__1A34_36BB_000B_3297
 * @implements 1A34:36BB:000B:3297 ()
 *
 * Called From: 1A34:36B0:001D:9410
 */
void f__1A34_36BB_000B_3297()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x36C6); emu_cs = 0x0C10; f__0C10_0168_0014_CCE7();
	f__1A34_36C6_0011_4CFE();
}

/**
 * Decompiled function f__1A34_36C6_0011_4CFE()
 *
 * @name f__1A34_36C6_0011_4CFE
 * @implements 1A34:36C6:0011:4CFE ()
 *
 * Called From: 1A34:36C6:000B:3297
 * Called From: 1A34:36C6:002F:0A0C
 */
void f__1A34_36C6_0011_4CFE()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_si);
	if (!emu_flags.zf) { f__1A34_36D9_000A_7FEF(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x36D7); emu_cs = 0x0C10; emu_ip = 0x3859; emu_last_cs = 0x1A34; emu_last_ip = 0x36D2; emu_last_length = 0x0011; emu_last_crc = 0x4CFE; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_36D9_000A_7FEF()
 *
 * @name f__1A34_36D9_000A_7FEF
 * @implements 1A34:36D9:000A:7FEF ()
 *
 * Called From: 1A34:36CA:0011:4CFE
 */
void f__1A34_36D9_000A_7FEF()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x36E3); emu_cs = 0x0FE4; f__0FE4_0283_0038_0940();
	f__1A34_36E3_0022_9EA7();
}

/**
 * Decompiled function f__1A34_36E3_0022_9EA7()
 *
 * @name f__1A34_36E3_0022_9EA7
 * @implements 1A34:36E3:0022:9EA7 ()
 *
 * Called From: 1A34:36E3:000A:7FEF
 */
void f__1A34_36E3_0022_9EA7()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1A34_3697_002F_0A0C(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x3705); emu_cs = 0x1082; f__1082_00FD_003A_94E2();
	f__1A34_3705_0005_1FA8();
}

/**
 * Decompiled function f__1A34_36E5_0020_9F71()
 *
 * @name f__1A34_36E5_0020_9F71
 * @implements 1A34:36E5:0020:9F71 ()
 *
 * Called From: 1A34:3695:0005:1F50
 */
void f__1A34_36E5_0020_9F71()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__1A34_3697_002F_0A0C(); return; }
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x3705); emu_cs = 0x1082; emu_ip = 0x3802; emu_last_cs = 0x1A34; emu_last_ip = 0x3700; emu_last_length = 0x0020; emu_last_crc = 0x9F71; emu_call(); // Jump does not resolve
	f__1A34_3705_0005_1FA8();
}

/**
 * Decompiled function f__1A34_3705_0005_1FA8()
 *
 * @name f__1A34_3705_0005_1FA8
 * @implements 1A34:3705:0005:1FA8 ()
 *
 * Called From: 1A34:3705:0022:9EA7
 */
void f__1A34_3705_0005_1FA8()
{
	emu_addws(&emu_sp, 0x8);
	f__1A34_373C_0019_D8FF(); return;
}

/**
 * Decompiled function f__1A34_370A_0030_0235()
 *
 * @name f__1A34_370A_0030_0235
 * @implements 1A34:370A:0030:0235 ()
 *
 * Called From: 1A34:3748:0019:D8FF
 * Called From: 1A34:3748:001B:74FC
 */
void f__1A34_370A_0030_0235()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0xF);
	if (emu_flags.zf) { emu_ip = 0x371E; emu_last_cs = 0x1A34; emu_last_ip = 0x3712; emu_last_length = 0x0030; emu_last_crc = 0x0235; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0x2), 0x10);
	if (!emu_flags.zf) { f__1A34_3730_000A_75B1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx.x,  0x22), emu_si);
	if (!emu_flags.zf) { emu_ip = 0x3730; emu_last_cs = 0x1A34; emu_last_ip = 0x3725; emu_last_length = 0x0030; emu_last_crc = 0x0235; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x22), 0x0);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x373A); emu_cs = 0x1082; emu_ip = 0x3877; emu_last_cs = 0x1A34; emu_last_ip = 0x3735; emu_last_length = 0x0030; emu_last_crc = 0x0235; emu_call(); // Jump does not resolve
	f__1A34_373A_001B_74FC();
}

/**
 * Decompiled function f__1A34_3730_000A_75B1()
 *
 * @name f__1A34_3730_000A_75B1
 * @implements 1A34:3730:000A:75B1 ()
 *
 * Called From: 1A34:371C:0030:0235
 */
void f__1A34_3730_000A_75B1()
{
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x373A); emu_cs = 0x1082; f__1082_013D_0038_03DE();
	f__1A34_373A_001B_74FC();
}

/**
 * Decompiled function f__1A34_373A_001B_74FC()
 *
 * @name f__1A34_373A_001B_74FC
 * @implements 1A34:373A:001B:74FC ()
 *
 * Called From: 1A34:373A:000A:75B1
 */
void f__1A34_373A_001B_74FC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1A34_370A_0030_0235(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x3755); emu_cs = 0x16BC; f__16BC_0044_0027_0268();
	f__1A34_3755_0010_6924();
}

/**
 * Decompiled function f__1A34_373C_0019_D8FF()
 *
 * @name f__1A34_373C_0019_D8FF
 * @implements 1A34:373C:0019:D8FF ()
 *
 * Called From: 1A34:3708:0005:1FA8
 */
void f__1A34_373C_0019_D8FF()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!emu_flags.zf) { f__1A34_370A_0030_0235(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x3755); emu_cs = 0x16BC; emu_ip = 0x3799; emu_last_cs = 0x1A34; emu_last_ip = 0x3750; emu_last_length = 0x0019; emu_last_crc = 0xD8FF; emu_call(); // Jump does not resolve
	f__1A34_3755_0010_6924();
}

/**
 * Decompiled function f__1A34_3755_0010_6924()
 *
 * @name f__1A34_3755_0010_6924
 * @implements 1A34:3755:0010:6924 ()
 *
 * Called From: 1A34:3755:001B:74FC
 */
void f__1A34_3755_0010_6924()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x12);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x3765); emu_cs = 0x104B; f__104B_00C2_0030_C2D2();
	f__1A34_3765_0005_1F80();
}

/**
 * Decompiled function f__1A34_3765_0005_1F80()
 *
 * @name f__1A34_3765_0005_1F80
 * @implements 1A34:3765:0005:1F80 ()
 *
 * Called From: 1A34:3765:0010:6924
 */
void f__1A34_3765_0005_1F80()
{
	emu_addws(&emu_sp, 0x6);
	f__1A34_3788_0013_F943(); return;
}

/**
 * Decompiled function f__1A34_3788_0013_F943()
 *
 * @name f__1A34_3788_0013_F943
 * @implements 1A34:3788:0013:F943 ()
 *
 * Called From: 1A34:3768:0005:1F80
 */
void f__1A34_3788_0013_F943()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { emu_ip = 0x376A; emu_last_cs = 0x1A34; emu_last_ip = 0x3794; emu_last_length = 0x0013; emu_last_crc = 0xF943; emu_call(); return; } // Jump does not resolve
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_379B_0015_FA94()
 *
 * @name f__1A34_379B_0015_FA94
 * @implements 1A34:379B:0015:FA94 ()
 *
 * Called From: 1A34:0C1A:000B:E188
 */
void f__1A34_379B_0015_FA94()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x381E; emu_last_cs = 0x1A34; emu_last_ip = 0x37A4; emu_last_length = 0x0015; emu_last_crc = 0xFA94; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x37B0); f__1A34_3623_0010_3F68();
	f__1A34_37B0_0026_2545();
}

/**
 * Decompiled function f__1A34_37B0_0026_2545()
 *
 * @name f__1A34_37B0_0026_2545
 * @implements 1A34:37B0:0026:2545 ()
 *
 * Called From: 1A34:37B0:0015:FA94
 */
void f__1A34_37B0_0026_2545()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A38));
	if (!emu_flags.zf) { f__1A34_381E_0004_0768(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x2);
	if (emu_flags.zf) { emu_ip = 0x381E; emu_last_cs = 0x1A34; emu_last_ip = 0x37C1; emu_last_length = 0x0026; emu_last_crc = 0x2545; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0xFD);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x37D6); emu_cs = 0x16BC; f__16BC_0044_0027_0268();
	f__1A34_37D6_0036_70A8();
}

/**
 * Decompiled function f__1A34_37D6_0036_70A8()
 *
 * @name f__1A34_37D6_0036_70A8
 * @implements 1A34:37D6:0036:70A8 ()
 *
 * Called From: 1A34:37D6:0026:2545
 */
void f__1A34_37D6_0036_70A8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x3A0C));
	if (!emu_flags.zf) { emu_ip = 0x3819; emu_last_cs = 0x1A34; emu_last_ip = 0x37E2; emu_last_length = 0x0036; emu_last_crc = 0x70A8; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x3A0A));
	if (!emu_flags.zf) { f__1A34_3819_0005_14B4(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x3A0E), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x380D; emu_last_cs = 0x1A34; emu_last_ip = 0x37EF; emu_last_length = 0x0036; emu_last_crc = 0x70A8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F4), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F2), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x38F6), 0xFFFF);
	emu_movw(&emu_ax.x, 0x4);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x380C); emu_cs = 0x34E9; emu_ip = 0x3836; emu_last_cs = 0x1A34; emu_last_ip = 0x3807; emu_last_length = 0x0036; emu_last_crc = 0x70A8; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__1A34_3819_0005_14B4()
 *
 * @name f__1A34_3819_0005_14B4
 * @implements 1A34:3819:0005:14B4 ()
 *
 * Called From: 1A34:37E8:0036:70A8
 */
void f__1A34_3819_0005_14B4()
{
	emu_movw(&emu_ax.x, 0x1);
	f__1A34_3822_0002_00E2(); return;
}

/**
 * Decompiled function f__1A34_381C_0002_03A4()
 *
 * @name f__1A34_381C_0002_03A4
 * @implements 1A34:381C:0002:03A4 ()
 *
 * Called From: 1A34:3820:0004:0768
 */
void f__1A34_381C_0002_03A4()
{
	f__1A34_3822_0002_00E2(); return;
}

/**
 * Decompiled function f__1A34_381E_0004_0768()
 *
 * @name f__1A34_381E_0004_0768
 * @implements 1A34:381E:0004:0768 ()
 *
 * Called From: 1A34:37B6:0026:2545
 */
void f__1A34_381E_0004_0768()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__1A34_381C_0002_03A4(); return;
}

/**
 * Decompiled function f__1A34_3822_0002_00E2()
 *
 * @name f__1A34_3822_0002_00E2
 * @implements 1A34:3822:0002:00E2 ()
 *
 * Called From: 1A34:381C:0002:03A4
 * Called From: 1A34:381C:0005:14B4
 */
void f__1A34_3822_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
