/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4A2_0039_000B_3C7B()
 *
 * @name f__B4A2_0039_000B_3C7B
 * @implements B4A2:0039:000B:3C7B ()
 *
 * Called From: 34A2:002A:0005:1F12
 * Called From: 34A2:002A:0005:1D6A
 * Called From: 34A2:002A:0005:1FEA
 * Called From: 34A2:002A:0005:1DCA
 * Called From: 34A2:002A:0005:1C36
 * Called From: 34A2:002A:0005:1DEC
 * Called From: 34A2:002A:0005:1F56
 * Called From: 34A2:002A:0005:1C0E
 * Called From: 34A2:002A:0005:1D72
 * Called From: 34A2:002A:0005:1DDA
 * Called From: 34A2:002A:0005:1E3E
 * Called From: 34A2:002A:0005:1E4C
 * Called From: 34A2:002A:0005:1CB0
 * Called From: 34A2:002A:0005:1C74
 * Called From: 34A2:002A:0005:1C28
 * Called From: 34A2:002A:0005:1D32
 * Called From: 34A2:002A:0005:1EF0
 * Called From: 34A2:002A:0005:1D44
 * Called From: 34A2:002A:0005:1DF0
 * Called From: 34A2:002A:0005:1F0A
 * Called From: 34A2:002A:0005:1F7C
 * Called From: 34A2:002A:0005:1EC0
 * Called From: 34A2:002A:0005:1F6C
 * Called From: 34A2:002A:0005:1EB6
 * Called From: 34A2:002A:0005:1F8E
 * Called From: 34A2:002A:0005:1E28
 * Called From: 34A2:002A:0005:1C08
 * Called From: 34A2:002A:0005:1C54
 * Called From: 34A2:002A:0005:1F34
 */
void f__B4A2_0039_000B_3C7B()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_cs); emu_push(0x0044); emu_cs = 0x29E8; f__29E8_072F_000F_6188();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_0044_0009_F442();
}

/**
 * Decompiled function f__B4A2_0044_0009_F442()
 *
 * @name f__B4A2_0044_0009_F442
 * @implements B4A2:0044:0009:F442 ()
 *
 * Called From: B4A2:0044:000B:3C7B
 */
void f__B4A2_0044_0009_F442()
{
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4A2_004F_000C_8003(); return; }
	emu_push(emu_cs); emu_push(0x004D); emu_cs = 0x29E8; f__29E8_0897_0016_EFB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_004D_000E_403F();
}

/**
 * Decompiled function f__B4A2_004D_000E_403F()
 *
 * @name f__B4A2_004D_000E_403F
 * @implements B4A2:004D:000E:403F ()
 *
 * Called From: B4A2:004D:0009:F442
 */
void f__B4A2_004D_000E_403F()
{
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x005B); f__B4A2_0063_001E_636A();
	f__B4A2_005B_0005_1FBC();
}

/**
 * Decompiled function f__B4A2_004F_000C_8003()
 *
 * @name f__B4A2_004F_000C_8003
 * @implements B4A2:004F:000C:8003 ()
 *
 * Called From: B4A2:0046:0009:F442
 */
void f__B4A2_004F_000C_8003()
{
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x005B); f__B4A2_0063_001E_636A();
	f__B4A2_005B_0005_1FBC();
}

/**
 * Decompiled function f__B4A2_005B_0005_1FBC()
 *
 * @name f__B4A2_005B_0005_1FBC
 * @implements B4A2:005B:0005:1FBC ()
 *
 * Called From: B4A2:005B:000C:8003
 * Called From: B4A2:005B:000E:403F
 */
void f__B4A2_005B_0005_1FBC()
{
	emu_addws(&emu_sp, 0x6);
	f__B4A2_0060_0003_0212(); return;
}

/**
 * Decompiled function f__B4A2_0060_0003_0212()
 *
 * @name f__B4A2_0060_0003_0212
 * @implements B4A2:0060:0003:0212 ()
 *
 * Called From: B4A2:005E:0005:1FBC
 */
void f__B4A2_0060_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4A2_0063_001E_636A()
 *
 * @name f__B4A2_0063_001E_636A
 * @implements B4A2:0063:001E:636A ()
 *
 * Called From: B4A2:0058:000C:8003
 * Called From: B4A2:0058:000E:403F
 */
void f__B4A2_0063_001E_636A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4A2_0081_0034_53D6(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax.x, 0x7FFF);
	f__B4A2_0713_0006_137A(); return;
}

/**
 * Decompiled function f__B4A2_007E_0003_050C()
 *
 * @name f__B4A2_007E_0003_050C
 * @implements B4A2:007E:0003:050C ()
 *
 * Called From: B4A2:0710:0015:08C5
 * Called From: B4A2:0710:0006:2256
 */
void f__B4A2_007E_0003_050C()
{
	f__B4A2_0713_0006_137A(); return;
}

/**
 * Decompiled function f__B4A2_0081_0034_53D6()
 *
 * @name f__B4A2_0081_0034_53D6
 * @implements B4A2:0081:0034:53D6 ()
 *
 * Called From: B4A2:0076:001E:636A
 */
void f__B4A2_0081_0034_53D6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1904));
	if (!emu_flags.zf) { f__B4A2_009A_001B_68C8(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x1902));
	if (!emu_flags.zf) { f__B4A2_009A_001B_68C8(); return; }
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6D75), 0x0);
	if (emu_flags.zf) { f__B4A2_010E_003E_60E8(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FC4), 0x0);
	emu_movw(&emu_ax.x, 0x41);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00B5); emu_cs = 0x29E8; f__29E8_08B5_000A_9E8C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_00B5_0014_43D9();
}

/**
 * Decompiled function f__B4A2_009A_001B_68C8()
 *
 * @name f__B4A2_009A_001B_68C8
 * @implements B4A2:009A:001B:68C8 ()
 *
 * Called From: B4A2:008B:0034:53D6
 * Called From: B4A2:0091:0034:53D6
 */
void f__B4A2_009A_001B_68C8()
{
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x7FC4), 0x0);
	emu_movw(&emu_ax.x, 0x41);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00B5); emu_cs = 0x29E8; f__29E8_08B5_000A_9E8C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_00B5_0014_43D9();
}

/**
 * Decompiled function f__B4A2_00B5_0014_43D9()
 *
 * @name f__B4A2_00B5_0014_43D9
 * @implements B4A2:00B5:0014:43D9 ()
 *
 * Called From: B4A2:00B5:001B:68C8
 * Called From: B4A2:00B5:0034:53D6
 */
void f__B4A2_00B5_0014_43D9()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4A2_00C0_0009_3DA3(); return; }
	emu_orw(&emu_get_memory16(emu_ds, 0x00,  0x7FC4), 0x200);
	emu_movw(&emu_ax.x, 0x42);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00C9); emu_cs = 0x29E8; f__29E8_08B5_000A_9E8C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_00C9_0020_D58C();
}

/**
 * Decompiled function f__B4A2_00C0_0009_3DA3()
 *
 * @name f__B4A2_00C0_0009_3DA3
 * @implements B4A2:00C0:0009:3DA3 ()
 *
 * Called From: B4A2:00B8:0014:43D9
 */
void f__B4A2_00C0_0009_3DA3()
{
	emu_movw(&emu_ax.x, 0x42);
	emu_push(emu_ax.x);
	emu_push(emu_cs); emu_push(0x00C9); emu_cs = 0x29E8; f__29E8_08B5_000A_9E8C();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_00C9_0020_D58C();
}

/**
 * Decompiled function f__B4A2_00C9_0020_D58C()
 *
 * @name f__B4A2_00C9_0020_D58C
 * @implements B4A2:00C9:0020:D58C ()
 *
 * Called From: B4A2:00C9:0009:3DA3
 * Called From: B4A2:00C9:0014:43D9
 */
void f__B4A2_00C9_0020_D58C()
{
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4A2_00D4_0015_7AEB(); return; }
	emu_orw(&emu_get_memory16(emu_ds, 0x00,  0x7FC4), 0x2000);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1904), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1902), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D75), 0x0);
	emu_ip = 0x0106; emu_last_cs = 0xB4A2; emu_last_ip = 0x00E7; emu_last_length = 0x0020; emu_last_crc = 0xD58C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_00D4_0015_7AEB()
 *
 * @name f__B4A2_00D4_0015_7AEB
 * @implements B4A2:00D4:0015:7AEB ()
 *
 * Called From: B4A2:00CC:0020:D58C
 */
void f__B4A2_00D4_0015_7AEB()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1904), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1902), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x6D75), 0x0);
	f__B4A2_0106_0046_CBC0(); return;
}

/**
 * Decompiled function f__B4A2_00E9_000B_E0FE()
 *
 * @name f__B4A2_00E9_000B_E0FE
 * @implements B4A2:00E9:000B:E0FE ()
 *
 * Called From: B4A2:010C:0046:CBC0
 * Called From: B4A2:010C:0058:6048
 */
void f__B4A2_00E9_000B_E0FE()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x00F4); f__B4A2_0729_0013_5DF3();
	f__B4A2_00F4_0058_6048();
}

/**
 * Decompiled function f__B4A2_00F4_0058_6048()
 *
 * @name f__B4A2_00F4_0058_6048
 * @implements B4A2:00F4:0058:6048 ()
 *
 * Called From: B4A2:00F4:000B:E0FE
 */
void f__B4A2_00F4_0058_6048()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4A2_00E9_000B_E0FE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x7097));
	emu_movb(&emu_ax.h, 0x0);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x01A3; emu_last_cs = 0xB4A2; emu_last_ip = 0x0123; emu_last_length = 0x0058; emu_last_crc = 0x6048; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax.x, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_014C_00A3_1839(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xC7);
	if (!emu_flags.zf) { emu_ip = 0x0140; emu_last_cs = 0xB4A2; emu_last_ip = 0x013B; emu_last_length = 0x0058; emu_last_crc = 0x6048; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0x1000);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xC6);
	if (!emu_flags.zf) { emu_ip = 0x014A; emu_last_cs = 0xB4A2; emu_last_ip = 0x0145; emu_last_length = 0x0058; emu_last_crc = 0x6048; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0x100);
	emu_ip = 0x015E; emu_last_cs = 0xB4A2; emu_last_ip = 0x014A; emu_last_length = 0x0058; emu_last_crc = 0x6048; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_0106_0046_CBC0()
 *
 * @name f__B4A2_0106_0046_CBC0
 * @implements B4A2:0106:0046:CBC0 ()
 *
 * Called From: B4A2:00E7:0015:7AEB
 */
void f__B4A2_0106_0046_CBC0()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4A2_00E9_000B_E0FE(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x7097));
	emu_movb(&emu_ax.h, 0x0);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { emu_ip = 0x01A3; emu_last_cs = 0xB4A2; emu_last_ip = 0x0123; emu_last_length = 0x0046; emu_last_crc = 0xCBC0; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax.x, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x014C; emu_last_cs = 0xB4A2; emu_last_ip = 0x0134; emu_last_length = 0x0046; emu_last_crc = 0xCBC0; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xC7);
	if (!emu_flags.zf) { emu_ip = 0x0140; emu_last_cs = 0xB4A2; emu_last_ip = 0x013B; emu_last_length = 0x0046; emu_last_crc = 0xCBC0; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0x1000);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xC6);
	if (!emu_flags.zf) { emu_ip = 0x014A; emu_last_cs = 0xB4A2; emu_last_ip = 0x0145; emu_last_length = 0x0046; emu_last_crc = 0xCBC0; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0x100);
	emu_ip = 0x015E; emu_last_cs = 0xB4A2; emu_last_ip = 0x014A; emu_last_length = 0x0046; emu_last_crc = 0xCBC0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_010E_003E_60E8()
 *
 * @name f__B4A2_010E_003E_60E8
 * @implements B4A2:010E:003E:60E8 ()
 *
 * Called From: B4A2:0098:0034:53D6
 */
void f__B4A2_010E_003E_60E8()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7060));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7062));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_xorw(&emu_si, emu_si);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ds, 0x00,  0x7097));
	emu_movb(&emu_ax.h, 0x0);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__B4A2_01A3_004C_9D07(); return; }
	emu_xorw(&emu_dx.x, emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax.x, 0xFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_014C_00A3_1839(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xC7);
	if (!emu_flags.zf) { emu_ip = 0x0140; emu_last_cs = 0xB4A2; emu_last_ip = 0x013B; emu_last_length = 0x003E; emu_last_crc = 0x60E8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0x1000);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xC6);
	if (!emu_flags.zf) { emu_ip = 0x014A; emu_last_cs = 0xB4A2; emu_last_ip = 0x0145; emu_last_length = 0x003E; emu_last_crc = 0x60E8; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_dx.x, 0x100);
	emu_ip = 0x015E; emu_last_cs = 0xB4A2; emu_last_ip = 0x014A; emu_last_length = 0x003E; emu_last_crc = 0x60E8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_014C_00A3_1839()
 *
 * @name f__B4A2_014C_00A3_1839
 * @implements B4A2:014C:00A3:1839 ()
 *
 * Called From: B4A2:0134:0058:6048
 * Called From: B4A2:0134:003E:60E8
 */
void f__B4A2_014C_00A3_1839()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x42);
	if (!emu_flags.zf) { f__B4A2_0155_009A_9C5A(); return; }
	emu_movw(&emu_dx.x, 0x1000);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x41);
	if (!emu_flags.zf) { f__B4A2_015E_0091_AC5C(); return; }
	emu_movw(&emu_dx.x, 0x100);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x800);
	if (emu_flags.zf) { emu_ip = 0x0169; emu_last_cs = 0xB4A2; emu_last_ip = 0x0163; emu_last_length = 0x00A3; emu_last_crc = 0x1839; emu_call(); return; } // Jump does not resolve
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_orw(&emu_si, emu_dx.x);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x017B; emu_last_cs = 0xB4A2; emu_last_ip = 0x016D; emu_last_length = 0x00A3; emu_last_crc = 0x1839; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7064));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7066));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_andw(&emu_ax.x, 0x4400);
	emu_sarw(&emu_ax.x, 0x1);
	emu_notw(&emu_ax.x, emu_ax.x);
	emu_andw(&emu_get_memory16(emu_ds, 0x00,  0x7FC4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_andw(&emu_ax.x, 0x1100);
	emu_shlw(&emu_ax.x, 0x1);
	emu_orw(&emu_get_memory16(emu_ds, 0x00,  0x7FC4), emu_ax.x);
	emu_orw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x7FC4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7FC4));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_xorw(&emu_ax.x, 0x8800);
	emu_orw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1904));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x1902));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (emu_flags.zf) { emu_ip = 0x01C6; emu_last_cs = 0xB4A2; emu_last_ip = 0x01B7; emu_last_length = 0x00A3; emu_last_crc = 0x1839; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (emu_flags.zf) { emu_ip = 0x01E7; emu_last_cs = 0xB4A2; emu_last_ip = 0x01CD; emu_last_length = 0x00A3; emu_last_crc = 0x1839; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	if (emu_flags.zf) { emu_ip = 0x01E7; emu_last_cs = 0xB4A2; emu_last_ip = 0x01D9; emu_last_length = 0x00A3; emu_last_crc = 0x1839; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_ip = 0x06F3; emu_last_cs = 0xB4A2; emu_last_ip = 0x01EC; emu_last_length = 0x00A3; emu_last_crc = 0x1839; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_0155_009A_9C5A()
 *
 * @name f__B4A2_0155_009A_9C5A
 * @implements B4A2:0155:009A:9C5A ()
 *
 * Called From: B4A2:0150:00A3:1839
 */
void f__B4A2_0155_009A_9C5A()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x41);
	if (!emu_flags.zf) { f__B4A2_015E_0091_AC5C(); return; }
	emu_movw(&emu_dx.x, 0x100);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x800);
	if (emu_flags.zf) { f__B4A2_0169_0086_AFF5(); return; }
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_orw(&emu_si, emu_dx.x);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x017B; emu_last_cs = 0xB4A2; emu_last_ip = 0x016D; emu_last_length = 0x009A; emu_last_crc = 0x9C5A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7064));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7066));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_andw(&emu_ax.x, 0x4400);
	emu_sarw(&emu_ax.x, 0x1);
	emu_notw(&emu_ax.x, emu_ax.x);
	emu_andw(&emu_get_memory16(emu_ds, 0x00,  0x7FC4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_andw(&emu_ax.x, 0x1100);
	emu_shlw(&emu_ax.x, 0x1);
	emu_orw(&emu_get_memory16(emu_ds, 0x00,  0x7FC4), emu_ax.x);
	emu_orw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x7FC4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7FC4));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_xorw(&emu_ax.x, 0x8800);
	emu_orw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1904));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x1902));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (emu_flags.zf) { f__B4A2_01C6_0029_0D44(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (emu_flags.zf) { emu_ip = 0x01E7; emu_last_cs = 0xB4A2; emu_last_ip = 0x01CD; emu_last_length = 0x009A; emu_last_crc = 0x9C5A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	if (emu_flags.zf) { f__B4A2_01E7_0008_DE52(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_ip = 0x06F3; emu_last_cs = 0xB4A2; emu_last_ip = 0x01EC; emu_last_length = 0x009A; emu_last_crc = 0x9C5A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_015E_0091_AC5C()
 *
 * @name f__B4A2_015E_0091_AC5C
 * @implements B4A2:015E:0091:AC5C ()
 *
 * Called From: B4A2:0159:009A:9C5A
 * Called From: B4A2:0159:00A3:1839
 */
void f__B4A2_015E_0091_AC5C()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x800);
	if (emu_flags.zf) { f__B4A2_0169_0086_AFF5(); return; }
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_orw(&emu_si, emu_dx.x);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x017B; emu_last_cs = 0xB4A2; emu_last_ip = 0x016D; emu_last_length = 0x0091; emu_last_crc = 0xAC5C; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7064));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7066));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_andw(&emu_ax.x, 0x4400);
	emu_sarw(&emu_ax.x, 0x1);
	emu_notw(&emu_ax.x, emu_ax.x);
	emu_andw(&emu_get_memory16(emu_ds, 0x00,  0x7FC4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_andw(&emu_ax.x, 0x1100);
	emu_shlw(&emu_ax.x, 0x1);
	emu_orw(&emu_get_memory16(emu_ds, 0x00,  0x7FC4), emu_ax.x);
	emu_orw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x7FC4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7FC4));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_xorw(&emu_ax.x, 0x8800);
	emu_orw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1904));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x1902));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (emu_flags.zf) { f__B4A2_01C6_0029_0D44(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (emu_flags.zf) { emu_ip = 0x01E7; emu_last_cs = 0xB4A2; emu_last_ip = 0x01CD; emu_last_length = 0x0091; emu_last_crc = 0xAC5C; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	if (emu_flags.zf) { f__B4A2_01E7_0008_DE52(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_ip = 0x06F3; emu_last_cs = 0xB4A2; emu_last_ip = 0x01EC; emu_last_length = 0x0091; emu_last_crc = 0xAC5C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_0169_0086_AFF5()
 *
 * @name f__B4A2_0169_0086_AFF5
 * @implements B4A2:0169:0086:AFF5 ()
 *
 * Called From: B4A2:0163:0091:AC5C
 * Called From: B4A2:0163:009A:9C5A
 */
void f__B4A2_0169_0086_AFF5()
{
	emu_orw(&emu_si, emu_dx.x);
	emu_orw(&emu_dx.x, emu_dx.x);
	if (emu_flags.zf) { f__B4A2_017B_0074_6642(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7064));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7066));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_andw(&emu_ax.x, 0x4400);
	emu_sarw(&emu_ax.x, 0x1);
	emu_notw(&emu_ax.x, emu_ax.x);
	emu_andw(&emu_get_memory16(emu_ds, 0x00,  0x7FC4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_andw(&emu_ax.x, 0x1100);
	emu_shlw(&emu_ax.x, 0x1);
	emu_orw(&emu_get_memory16(emu_ds, 0x00,  0x7FC4), emu_ax.x);
	emu_orw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x7FC4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7FC4));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_xorw(&emu_ax.x, 0x8800);
	emu_orw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1904));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x1902));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (emu_flags.zf) { f__B4A2_01C6_0029_0D44(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (emu_flags.zf) { emu_ip = 0x01E7; emu_last_cs = 0xB4A2; emu_last_ip = 0x01CD; emu_last_length = 0x0086; emu_last_crc = 0xAFF5; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	if (emu_flags.zf) { f__B4A2_01E7_0008_DE52(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_ip = 0x06F3; emu_last_cs = 0xB4A2; emu_last_ip = 0x01EC; emu_last_length = 0x0086; emu_last_crc = 0xAFF5; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_017B_0074_6642()
 *
 * @name f__B4A2_017B_0074_6642
 * @implements B4A2:017B:0074:6642 ()
 *
 * Called From: B4A2:016D:0086:AFF5
 */
void f__B4A2_017B_0074_6642()
{
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_andw(&emu_ax.x, 0x4400);
	emu_sarw(&emu_ax.x, 0x1);
	emu_notw(&emu_ax.x, emu_ax.x);
	emu_andw(&emu_get_memory16(emu_ds, 0x00,  0x7FC4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_andw(&emu_ax.x, 0x1100);
	emu_shlw(&emu_ax.x, 0x1);
	emu_orw(&emu_get_memory16(emu_ds, 0x00,  0x7FC4), emu_ax.x);
	emu_orw(&emu_si, emu_get_memory16(emu_ds, 0x00,  0x7FC4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x7FC4));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_xorw(&emu_ax.x, 0x8800);
	emu_orw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1904));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x1902));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (emu_flags.zf) { f__B4A2_01C6_0029_0D44(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (emu_flags.zf) { emu_ip = 0x01E7; emu_last_cs = 0xB4A2; emu_last_ip = 0x01CD; emu_last_length = 0x0074; emu_last_crc = 0x6642; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	if (emu_flags.zf) { f__B4A2_01E7_0008_DE52(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	f__B4A2_06F3_000B_6DCD(); return;
}

/**
 * Decompiled function f__B4A2_01A3_004C_9D07()
 *
 * @name f__B4A2_01A3_004C_9D07
 * @implements B4A2:01A3:004C:9D07 ()
 *
 * Called From: B4A2:0123:003E:60E8
 */
void f__B4A2_01A3_004C_9D07()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1904));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x1902));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (emu_flags.zf) { f__B4A2_01C6_0029_0D44(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (emu_flags.zf) { emu_ip = 0x01E7; emu_last_cs = 0xB4A2; emu_last_ip = 0x01CD; emu_last_length = 0x004C; emu_last_crc = 0x9D07; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	if (emu_flags.zf) { emu_ip = 0x01E7; emu_last_cs = 0xB4A2; emu_last_ip = 0x01D9; emu_last_length = 0x004C; emu_last_crc = 0x9D07; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_ip = 0x06F3; emu_last_cs = 0xB4A2; emu_last_ip = 0x01EC; emu_last_length = 0x004C; emu_last_crc = 0x9D07; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_01C6_0029_0D44()
 *
 * @name f__B4A2_01C6_0029_0D44
 * @implements B4A2:01C6:0029:0D44 ()
 *
 * Called From: B4A2:01B7:0074:6642
 * Called From: B4A2:01B7:0086:AFF5
 * Called From: B4A2:01B7:009A:9C5A
 * Called From: B4A2:01B7:0091:AC5C
 * Called From: B4A2:01B7:004C:9D07
 */
void f__B4A2_01C6_0029_0D44()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (emu_flags.zf) { f__B4A2_01E7_0008_DE52(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	if (emu_flags.zf) { emu_ip = 0x01E7; emu_last_cs = 0xB4A2; emu_last_ip = 0x01D9; emu_last_length = 0x0029; emu_last_crc = 0x0D44; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	emu_ip = 0x06F3; emu_last_cs = 0xB4A2; emu_last_ip = 0x01EC; emu_last_length = 0x0029; emu_last_crc = 0x0D44; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_01E7_0008_DE52()
 *
 * @name f__B4A2_01E7_0008_DE52
 * @implements B4A2:01E7:0008:DE52 ()
 *
 * Called From: B4A2:01CD:0029:0D44
 * Called From: B4A2:01D9:009A:9C5A
 * Called From: B4A2:01D9:0091:AC5C
 * Called From: B4A2:01D9:0074:6642
 * Called From: B4A2:01D9:0086:AFF5
 */
void f__B4A2_01E7_0008_DE52()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	f__B4A2_06F3_000B_6DCD(); return;
}

/**
 * Decompiled function f__B4A2_01EF_000E_C250()
 *
 * @name f__B4A2_01EF_000E_C250
 * @implements B4A2:01EF:000E:C250 ()
 *
 * Called From: B4A2:06FB:000B:6DCD
 * Called From: B4A2:06FB:001B:ACD6
 */
void f__B4A2_01EF_000E_C250()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	if (emu_flags.zf) { f__B4A2_01FD_00BF_4F43(); return; }
	f__B4A2_06E3_001B_ACD6(); return;
}

/**
 * Decompiled function f__B4A2_01FD_00BF_4F43()
 *
 * @name f__B4A2_01FD_00BF_4F43
 * @implements B4A2:01FD:00BF:4F43 ()
 *
 * Called From: B4A2:01F8:000E:C250
 */
void f__B4A2_01FD_00BF_4F43()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xE7);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_andw(&emu_ax.x, 0x3);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_0240_007C_D0B1(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4066));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4062));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x0278; emu_last_cs = 0xB4A2; emu_last_ip = 0x0264; emu_last_length = 0x00BF; emu_last_crc = 0x4F43; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4068));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4064));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x02B8; emu_last_cs = 0xB4A2; emu_last_ip = 0x0290; emu_last_length = 0x00BF; emu_last_crc = 0x4F43; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x02B8; emu_last_cs = 0xB4A2; emu_last_ip = 0x0298; emu_last_length = 0x00BF; emu_last_crc = 0x4F43; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x02B8; emu_last_cs = 0xB4A2; emu_last_ip = 0x02A7; emu_last_length = 0x00BF; emu_last_crc = 0x4F43; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x02BC; emu_last_cs = 0xB4A2; emu_last_ip = 0x02B6; emu_last_length = 0x00BF; emu_last_crc = 0x4F43; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_di, emu_di);
	emu_ip = 0x02BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x02BA; emu_last_length = 0x00BF; emu_last_crc = 0x4F43; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_0240_007C_D0B1()
 *
 * @name f__B4A2_0240_007C_D0B1
 * @implements B4A2:0240:007C:D0B1 ()
 *
 * Called From: B4A2:0228:00BF:4F43
 */
void f__B4A2_0240_007C_D0B1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4062));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_0278_0044_752F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4068));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4064));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x02B8; emu_last_cs = 0xB4A2; emu_last_ip = 0x0290; emu_last_length = 0x007C; emu_last_crc = 0xD0B1; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x02B8; emu_last_cs = 0xB4A2; emu_last_ip = 0x0298; emu_last_length = 0x007C; emu_last_crc = 0xD0B1; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if ((emu_flags.sf != emu_flags.of)) { emu_ip = 0x02B8; emu_last_cs = 0xB4A2; emu_last_ip = 0x02A7; emu_last_length = 0x007C; emu_last_crc = 0xD0B1; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x02BC; emu_last_cs = 0xB4A2; emu_last_ip = 0x02B6; emu_last_length = 0x007C; emu_last_crc = 0xD0B1; emu_call(); return; } // Jump does not resolve
	emu_xorw(&emu_di, emu_di);
	emu_ip = 0x02BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x02BA; emu_last_length = 0x007C; emu_last_crc = 0xD0B1; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_0278_0044_752F()
 *
 * @name f__B4A2_0278_0044_752F
 * @implements B4A2:0278:0044:752F ()
 *
 * Called From: B4A2:0264:007C:D0B1
 */
void f__B4A2_0278_0044_752F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4064));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((emu_flags.sf != emu_flags.of)) { f__B4A2_02B8_0004_0762(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if ((emu_flags.sf != emu_flags.of)) { f__B4A2_02B8_0004_0762(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if ((emu_flags.sf != emu_flags.of)) { f__B4A2_02B8_0004_0762(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_02BC_001E_FCC7(); return; }
	emu_xorw(&emu_di, emu_di);
	f__B4A2_02BF_001B_1CE8(); return;
}

/**
 * Decompiled function f__B4A2_02B8_0004_0762()
 *
 * @name f__B4A2_02B8_0004_0762
 * @implements B4A2:02B8:0004:0762 ()
 *
 * Called From: B4A2:0290:0044:752F
 * Called From: B4A2:0298:0044:752F
 * Called From: B4A2:02A7:0044:752F
 */
void f__B4A2_02B8_0004_0762()
{
	emu_xorw(&emu_di, emu_di);
	f__B4A2_02BF_001B_1CE8(); return;
}

/**
 * Decompiled function f__B4A2_02BC_001E_FCC7()
 *
 * @name f__B4A2_02BC_001E_FCC7
 * @implements B4A2:02BC:001E:FCC7 ()
 *
 * Called From: B4A2:02B6:0044:752F
 */
void f__B4A2_02BC_001E_FCC7()
{
	emu_movw(&emu_di, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFF7F);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__B4A2_02DA_003B_EDED(); return; }
	f__B4A2_035E_0061_7F80(); return;
}

/**
 * Decompiled function f__B4A2_02BF_001B_1CE8()
 *
 * @name f__B4A2_02BF_001B_1CE8
 * @implements B4A2:02BF:001B:1CE8 ()
 *
 * Called From: B4A2:02BA:0004:0762
 * Called From: B4A2:02BA:0044:752F
 */
void f__B4A2_02BF_001B_1CE8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFF7F);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax.x, 0x7F);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (!emu_flags.zf) { f__B4A2_02DA_003B_EDED(); return; }
	f__B4A2_035E_0061_7F80(); return;
}

/**
 * Decompiled function f__B4A2_02DA_003B_EDED()
 *
 * @name f__B4A2_02DA_003B_EDED
 * @implements B4A2:02DA:003B:EDED ()
 *
 * Called From: B4A2:02D5:001B:1CE8
 * Called From: B4A2:02D5:001E:FCC7
 */
void f__B4A2_02DA_003B_EDED()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_andw(&emu_ax.x, 0x7F);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { f__B4A2_0315_00AA_AFCF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_andw(&emu_ax.x, 0xF00);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x80);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), emu_dx.x);
	f__B4A2_035E_0061_7F80(); return;
}

/**
 * Decompiled function f__B4A2_0315_00AA_AFCF()
 *
 * @name f__B4A2_0315_00AA_AFCF
 * @implements B4A2:0315:00AA:AFCF ()
 *
 * Called From: B4A2:02E7:003B:EDED
 */
void f__B4A2_0315_00AA_AFCF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_andw(&emu_ax.x, 0x7F);
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (!emu_flags.zf) { f__B4A2_035E_0061_7F80(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_andw(&emu_ax.x, 0xF000);
	emu_movw(&emu_si, emu_ax.x);
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__B4A2_0340_007F_DF5A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_andw(&emu_ax.x, 0xF00);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_di, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x80);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x036F; emu_last_cs = 0xB4A2; emu_last_ip = 0x0365; emu_last_length = 0x00AA; emu_last_crc = 0xAFCF; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xF9);
	emu_testw(&emu_si, 0x3300);
	if (emu_flags.zf) { emu_ip = 0x03BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x0373; emu_last_length = 0x00AA; emu_last_crc = 0xAFCF; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x4);
	if (emu_flags.zf) { emu_ip = 0x03BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x037E; emu_last_length = 0x00AA; emu_last_crc = 0xAFCF; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x03BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x0382; emu_last_length = 0x00AA; emu_last_crc = 0xAFCF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { emu_ip = 0x0396; emu_last_cs = 0xB4A2; emu_last_ip = 0x038E; emu_last_length = 0x00AA; emu_last_crc = 0xAFCF; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	if (emu_flags.zf) { emu_ip = 0x039F; emu_last_cs = 0xB4A2; emu_last_ip = 0x0394; emu_last_length = 0x00AA; emu_last_crc = 0xAFCF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { emu_ip = 0x03BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x039D; emu_last_length = 0x00AA; emu_last_crc = 0xAFCF; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { emu_ip = 0x03BD; emu_last_cs = 0xB4A2; emu_last_ip = 0x03AE; emu_last_length = 0x00AA; emu_last_crc = 0xAFCF; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), emu_dx.x);
	emu_ip = 0x03E6; emu_last_cs = 0xB4A2; emu_last_ip = 0x03BD; emu_last_length = 0x00AA; emu_last_crc = 0xAFCF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_0340_007F_DF5A()
 *
 * @name f__B4A2_0340_007F_DF5A
 * @implements B4A2:0340:007F:DF5A ()
 *
 * Called From: B4A2:0332:00AA:AFCF
 */
void f__B4A2_0340_007F_DF5A()
{
	emu_movw(&emu_di, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x80);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4A2_036F_0050_163A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xF9);
	emu_testw(&emu_si, 0x3300);
	if (emu_flags.zf) { emu_ip = 0x03BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x0373; emu_last_length = 0x007F; emu_last_crc = 0xDF5A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x4);
	if (emu_flags.zf) { emu_ip = 0x03BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x037E; emu_last_length = 0x007F; emu_last_crc = 0xDF5A; emu_call(); return; } // Jump does not resolve
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x03BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x0382; emu_last_length = 0x007F; emu_last_crc = 0xDF5A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { emu_ip = 0x0396; emu_last_cs = 0xB4A2; emu_last_ip = 0x038E; emu_last_length = 0x007F; emu_last_crc = 0xDF5A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	if (emu_flags.zf) { emu_ip = 0x039F; emu_last_cs = 0xB4A2; emu_last_ip = 0x0394; emu_last_length = 0x007F; emu_last_crc = 0xDF5A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { emu_ip = 0x03BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x039D; emu_last_length = 0x007F; emu_last_crc = 0xDF5A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { emu_ip = 0x03BD; emu_last_cs = 0xB4A2; emu_last_ip = 0x03AE; emu_last_length = 0x007F; emu_last_crc = 0xDF5A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), emu_dx.x);
	emu_ip = 0x03E6; emu_last_cs = 0xB4A2; emu_last_ip = 0x03BD; emu_last_length = 0x007F; emu_last_crc = 0xDF5A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_035E_0061_7F80()
 *
 * @name f__B4A2_035E_0061_7F80
 * @implements B4A2:035E:0061:7F80 ()
 *
 * Called From: B4A2:02D7:001B:1CE8
 * Called From: B4A2:02D7:001E:FCC7
 * Called From: B4A2:0313:003B:EDED
 * Called From: B4A2:0322:00AA:AFCF
 */
void f__B4A2_035E_0061_7F80()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4A2_036F_0050_163A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xF9);
	emu_testw(&emu_si, 0x3300);
	if (emu_flags.zf) { f__B4A2_03BF_001F_2317(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x4);
	if (emu_flags.zf) { f__B4A2_03BF_001F_2317(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4A2_03BF_001F_2317(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { emu_ip = 0x0396; emu_last_cs = 0xB4A2; emu_last_ip = 0x038E; emu_last_length = 0x0061; emu_last_crc = 0x7F80; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	if (emu_flags.zf) { emu_ip = 0x039F; emu_last_cs = 0xB4A2; emu_last_ip = 0x0394; emu_last_length = 0x0061; emu_last_crc = 0x7F80; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { emu_ip = 0x03BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x039D; emu_last_length = 0x0061; emu_last_crc = 0x7F80; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { emu_ip = 0x03BD; emu_last_cs = 0xB4A2; emu_last_ip = 0x03AE; emu_last_length = 0x0061; emu_last_crc = 0x7F80; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), emu_dx.x);
	emu_ip = 0x03E6; emu_last_cs = 0xB4A2; emu_last_ip = 0x03BD; emu_last_length = 0x0061; emu_last_crc = 0x7F80; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_036F_0050_163A()
 *
 * @name f__B4A2_036F_0050_163A
 * @implements B4A2:036F:0050:163A ()
 *
 * Called From: B4A2:0365:0061:7F80
 * Called From: B4A2:0365:007F:DF5A
 */
void f__B4A2_036F_0050_163A()
{
	emu_testw(&emu_si, 0x3300);
	if (emu_flags.zf) { f__B4A2_03BF_001F_2317(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x4);
	if (emu_flags.zf) { f__B4A2_03BF_001F_2317(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x03BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x0382; emu_last_length = 0x0050; emu_last_crc = 0x163A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { f__B4A2_0396_0029_A8A6(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	if (emu_flags.zf) { f__B4A2_039F_0020_1BFB(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { emu_ip = 0x03BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x039D; emu_last_length = 0x0050; emu_last_crc = 0x163A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { emu_ip = 0x03BD; emu_last_cs = 0xB4A2; emu_last_ip = 0x03AE; emu_last_length = 0x0050; emu_last_crc = 0x163A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), emu_dx.x);
	emu_ip = 0x03E6; emu_last_cs = 0xB4A2; emu_last_ip = 0x03BD; emu_last_length = 0x0050; emu_last_crc = 0x163A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_0396_0029_A8A6()
 *
 * @name f__B4A2_0396_0029_A8A6
 * @implements B4A2:0396:0029:A8A6 ()
 *
 * Called From: B4A2:038E:0050:163A
 */
void f__B4A2_0396_0029_A8A6()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { emu_ip = 0x03BF; emu_last_cs = 0xB4A2; emu_last_ip = 0x039D; emu_last_length = 0x0029; emu_last_crc = 0xA8A6; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { emu_ip = 0x03BD; emu_last_cs = 0xB4A2; emu_last_ip = 0x03AE; emu_last_length = 0x0029; emu_last_crc = 0xA8A6; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), emu_dx.x);
	f__B4A2_03E6_0013_7666(); return;
}

/**
 * Decompiled function f__B4A2_039F_0020_1BFB()
 *
 * @name f__B4A2_039F_0020_1BFB
 * @implements B4A2:039F:0020:1BFB ()
 *
 * Called From: B4A2:0394:0050:163A
 */
void f__B4A2_039F_0020_1BFB()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x6);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { f__B4A2_03BD_0002_03E2(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), emu_dx.x);
	emu_ip = 0x03E6; emu_last_cs = 0xB4A2; emu_last_ip = 0x03BD; emu_last_length = 0x0020; emu_last_crc = 0x1BFB; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_03BD_0002_03E2()
 *
 * @name f__B4A2_03BD_0002_03E2
 * @implements B4A2:03BD:0002:03E2 ()
 *
 * Called From: B4A2:03AE:0020:1BFB
 */
void f__B4A2_03BD_0002_03E2()
{
	f__B4A2_03E6_0013_7666(); return;
}

/**
 * Decompiled function f__B4A2_03BF_001F_2317()
 *
 * @name f__B4A2_03BF_001F_2317
 * @implements B4A2:03BF:001F:2317 ()
 *
 * Called From: B4A2:0373:0061:7F80
 * Called From: B4A2:0373:0050:163A
 * Called From: B4A2:037E:0061:7F80
 * Called From: B4A2:037E:0050:163A
 * Called From: B4A2:0382:0061:7F80
 */
void f__B4A2_03BF_001F_2317()
{
	emu_testw(&emu_si, 0x8800);
	if (emu_flags.zf) { f__B4A2_03DE_001B_5671(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x4);
	if (!emu_flags.zf) { f__B4A2_03DE_001B_5671(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4A2_03DE_001B_5671(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x6);
	f__B4A2_03E6_0013_7666(); return;
}

/**
 * Decompiled function f__B4A2_03DE_001B_5671()
 *
 * @name f__B4A2_03DE_001B_5671
 * @implements B4A2:03DE:001B:5671 ()
 *
 * Called From: B4A2:03C3:001F:2317
 * Called From: B4A2:03CE:001F:2317
 * Called From: B4A2:03D2:001F:2317
 */
void f__B4A2_03DE_001B_5671()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xF9);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { f__B4A2_03F9_0022_5C0A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_di);
	f__B4A2_0425_0009_06EB(); return;
}

/**
 * Decompiled function f__B4A2_03E6_0013_7666()
 *
 * @name f__B4A2_03E6_0013_7666
 * @implements B4A2:03E6:0013:7666 ()
 *
 * Called From: B4A2:03BD:0029:A8A6
 * Called From: B4A2:03BD:0002:03E2
 * Called From: B4A2:03DC:001F:2317
 */
void f__B4A2_03E6_0013_7666()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { f__B4A2_03F9_0022_5C0A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_di);
	f__B4A2_0425_0009_06EB(); return;
}

/**
 * Decompiled function f__B4A2_03F9_0022_5C0A()
 *
 * @name f__B4A2_03F9_0022_5C0A
 * @implements B4A2:03F9:0022:5C0A ()
 *
 * Called From: B4A2:03F2:0013:7666
 * Called From: B4A2:03F2:001B:5671
 */
void f__B4A2_03F9_0022_5C0A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x40);
	if (emu_flags.zf) { f__B4A2_0422_000C_CEE3(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { emu_ip = 0x041B; emu_last_cs = 0xB4A2; emu_last_ip = 0x040F; emu_last_length = 0x0022; emu_last_crc = 0x5C0A; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { emu_ip = 0x041B; emu_last_cs = 0xB4A2; emu_last_ip = 0x0414; emu_last_length = 0x0022; emu_last_crc = 0x5C0A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__B4A2_041D_0005_11BA(); return;
}

/**
 * Decompiled function f__B4A2_041D_0005_11BA()
 *
 * @name f__B4A2_041D_0005_11BA
 * @implements B4A2:041D:0005:11BA ()
 *
 * Called From: B4A2:0419:0022:5C0A
 */
void f__B4A2_041D_0005_11BA()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_ax.x);
	f__B4A2_0425_0009_06EB(); return;
}

/**
 * Decompiled function f__B4A2_0422_000C_CEE3()
 *
 * @name f__B4A2_0422_000C_CEE3
 * @implements B4A2:0422:000C:CEE3 ()
 *
 * Called From: B4A2:0403:0022:5C0A
 */
void f__B4A2_0422_000C_CEE3()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x16), emu_di);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!emu_flags.zf) { f__B4A2_042E_0031_029A(); return; }
	f__B4A2_05BA_00B6_D413(); return;
}

/**
 * Decompiled function f__B4A2_0425_0009_06EB()
 *
 * @name f__B4A2_0425_0009_06EB
 * @implements B4A2:0425:0009:06EB ()
 *
 * Called From: B4A2:03F7:001B:5671
 * Called From: B4A2:03F7:0013:7666
 * Called From: B4A2:0420:0005:11BA
 */
void f__B4A2_0425_0009_06EB()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0x0);
	if (!emu_flags.zf) { f__B4A2_042E_0031_029A(); return; }
	f__B4A2_05BA_00B6_D413(); return;
}

/**
 * Decompiled function f__B4A2_042E_0031_029A()
 *
 * @name f__B4A2_042E_0031_029A
 * @implements B4A2:042E:0031:029A ()
 *
 * Called From: B4A2:0429:0009:06EB
 * Called From: B4A2:0429:000C:CEE3
 */
void f__B4A2_042E_0031_029A()
{
	emu_testw(&emu_si, 0x1100);
	if (emu_flags.zf) { f__B4A2_0453_000C_51B8(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4A2_0453_000C_51B8(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { f__B4A2_0453_000C_51B8(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (!emu_flags.zf) { f__B4A2_045F_0012_C5C6(); return; }
	f__B4A2_05BA_00B6_D413(); return;
}

/**
 * Decompiled function f__B4A2_0453_000C_51B8()
 *
 * @name f__B4A2_0453_000C_51B8
 * @implements B4A2:0453:000C:51B8 ()
 *
 * Called From: B4A2:0432:0031:029A
 * Called From: B4A2:0436:0031:029A
 * Called From: B4A2:043F:0031:029A
 */
void f__B4A2_0453_000C_51B8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	if (!emu_flags.zf) { f__B4A2_045F_0012_C5C6(); return; }
	f__B4A2_05BA_00B6_D413(); return;
}

/**
 * Decompiled function f__B4A2_045F_0012_C5C6()
 *
 * @name f__B4A2_045F_0012_C5C6
 * @implements B4A2:045F:0012:C5C6 ()
 *
 * Called From: B4A2:045A:000C:51B8
 * Called From: B4A2:045A:0031:029A
 */
void f__B4A2_045F_0012_C5C6()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4A2_0471_0048_8CAF(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x1);
	if (emu_flags.zf) { f__B4A2_0471_0048_8CAF(); return; }
	emu_ip = 0x05BA; emu_last_cs = 0xB4A2; emu_last_ip = 0x046E; emu_last_length = 0x0012; emu_last_crc = 0xC5C6; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_0471_0048_8CAF()
 *
 * @name f__B4A2_0471_0048_8CAF
 * @implements B4A2:0471:0048:8CAF ()
 *
 * Called From: B4A2:0461:0012:C5C6
 * Called From: B4A2:046C:0012:C5C6
 */
void f__B4A2_0471_0048_8CAF()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_si);
	emu_andw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0xE));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_andw(&emu_ax.x, 0xF000);
	emu_movb(&emu_cx.l, 0x4);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_andw(&emu_dx.x, 0xF00);
	emu_orw(&emu_dx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movb(&emu_cx.l, 0x8);
	emu_shrw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_cx.l);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x1906));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_movw(&emu_cx.x, 0x4);
	emu_movw(&emu_bx.x, 0x719);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) { f__B4A2_04B9_0004_0494(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__B4A2_04AA_000F_FC2B(); return; }
	emu_ip = 0x04BD; emu_last_cs = 0xB4A2; emu_last_ip = 0x04B7; emu_last_length = 0x0048; emu_last_crc = 0x8CAF; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_04AA_000F_FC2B()
 *
 * @name f__B4A2_04AA_000F_FC2B
 * @implements B4A2:04AA:000F:FC2B ()
 *
 * Called From: B4A2:04B5:0048:8CAF
 * Called From: B4A2:04B5:000F:FC2B
 */
void f__B4A2_04AA_000F_FC2B()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_cs, emu_bx.x,  0x0));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_flags.zf) { f__B4A2_04B9_0004_0494(); return; }
	emu_addws(&emu_bx.x, 0x2);
	if (--emu_cx.x != 0) { f__B4A2_04AA_000F_FC2B(); return; }
	emu_ip = 0x04BD; emu_last_cs = 0xB4A2; emu_last_ip = 0x04B7; emu_last_length = 0x000F; emu_last_crc = 0xFC2B; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_04B9_0004_0494()
 *
 * @name f__B4A2_04B9_0004_0494
 * @implements B4A2:04B9:0004:0494 ()
 *
 * Called From: B4A2:04B0:000F:FC2B
 * Called From: B4A2:04B0:0048:8CAF
 */
void f__B4A2_04B9_0004_0494()
{

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0x8);
	switch (emu_ip) {
		case 0x04BD: f__B4A2_04BD_0045_53A6(); return;
		case 0x0502: f__B4A2_0502_005E_77C3(); return;
		case 0x0560: f__B4A2_0560_002D_5967(); return;
		case 0x058D: f__B4A2_058D_002D_592D(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4A2; emu_last_ip = 0x04B9; emu_last_length = 0x0004; emu_last_crc = 0x0494;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4A2_04BD_0045_53A6()
 *
 * @name f__B4A2_04BD_0045_53A6
 * @implements B4A2:04BD:0045:53A6 ()
 *
 * Called From: B4A2:04B9:0004:0494
 */
void f__B4A2_04BD_0045_53A6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_orw(&emu_ax.x, 0x8000);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x4);
	if (emu_flags.zf) { f__B4A2_04F2_0010_FF54(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x2);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), emu_dx.x);
	f__B4A2_05BA_00B6_D413(); return;
}

/**
 * Decompiled function f__B4A2_04F2_0010_FF54()
 *
 * @name f__B4A2_04F2_0010_FF54
 * @implements B4A2:04F2:0010:FF54 ()
 *
 * Called From: B4A2:04E0:0045:53A6
 */
void f__B4A2_04F2_0010_FF54()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), emu_dx.x);
	f__B4A2_05BA_00B6_D413(); return;
}

/**
 * Decompiled function f__B4A2_0502_005E_77C3()
 *
 * @name f__B4A2_0502_005E_77C3
 * @implements B4A2:0502:005E:77C3 ()
 *
 * Called From: B4A2:04B9:0004:0494
 */
void f__B4A2_0502_005E_77C3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x1);
	if (emu_flags.zf) { f__B4A2_051E_0042_71B4(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4A2_051E_0042_71B4(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_flags.zf) { f__B4A2_0529_0037_4A38(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x0543; emu_last_cs = 0xB4A2; emu_last_ip = 0x0527; emu_last_length = 0x005E; emu_last_crc = 0x77C3; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_orw(&emu_ax.x, 0x8000);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x055E; emu_last_cs = 0xB4A2; emu_last_ip = 0x054C; emu_last_length = 0x005E; emu_last_crc = 0x77C3; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFB);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFD);
	emu_ip = 0x05BA; emu_last_cs = 0xB4A2; emu_last_ip = 0x055E; emu_last_length = 0x005E; emu_last_crc = 0x77C3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_051E_0042_71B4()
 *
 * @name f__B4A2_051E_0042_71B4
 * @implements B4A2:051E:0042:71B4 ()
 *
 * Called From: B4A2:050B:005E:77C3
 * Called From: B4A2:0517:005E:77C3
 */
void f__B4A2_051E_0042_71B4()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x1);
	if (!emu_flags.zf) { f__B4A2_0543_001D_E86F(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_orw(&emu_ax.x, 0x8000);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x055E; emu_last_cs = 0xB4A2; emu_last_ip = 0x054C; emu_last_length = 0x0042; emu_last_crc = 0x71B4; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFB);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFD);
	f__B4A2_05BA_00B6_D413(); return;
}

/**
 * Decompiled function f__B4A2_0529_0037_4A38()
 *
 * @name f__B4A2_0529_0037_4A38
 * @implements B4A2:0529:0037:4A38 ()
 *
 * Called From: B4A2:051C:005E:77C3
 */
void f__B4A2_0529_0037_4A38()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_orw(&emu_ax.x, 0x8000);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x4);
	if (!emu_flags.zf) { f__B4A2_055E_0002_0318(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFB);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFD);
	f__B4A2_05BA_00B6_D413(); return;
}

/**
 * Decompiled function f__B4A2_0543_001D_E86F()
 *
 * @name f__B4A2_0543_001D_E86F
 * @implements B4A2:0543:001D:E86F ()
 *
 * Called From: B4A2:0527:0042:71B4
 */
void f__B4A2_0543_001D_E86F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x4);
	if (!emu_flags.zf) { f__B4A2_055E_0002_0318(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFB);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFD);
	emu_ip = 0x05BA; emu_last_cs = 0xB4A2; emu_last_ip = 0x055E; emu_last_length = 0x001D; emu_last_crc = 0xE86F; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_055E_0002_0318()
 *
 * @name f__B4A2_055E_0002_0318
 * @implements B4A2:055E:0002:0318 ()
 *
 * Called From: B4A2:054C:0037:4A38
 * Called From: B4A2:054C:001D:E86F
 */
void f__B4A2_055E_0002_0318()
{
	f__B4A2_05BA_00B6_D413(); return;
}

/**
 * Decompiled function f__B4A2_0560_002D_5967()
 *
 * @name f__B4A2_0560_002D_5967
 * @implements B4A2:0560:002D:5967 ()
 *
 * Called From: B4A2:04B9:0004:0494
 */
void f__B4A2_0560_002D_5967()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x4);
	if (!emu_flags.zf) { emu_ip = 0x057B; emu_last_cs = 0xB4A2; emu_last_ip = 0x0569; emu_last_length = 0x002D; emu_last_crc = 0x5967; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x058B; emu_last_cs = 0xB4A2; emu_last_ip = 0x0584; emu_last_length = 0x002D; emu_last_crc = 0x5967; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	f__B4A2_05BA_00B6_D413(); return;
}

/**
 * Decompiled function f__B4A2_058D_002D_592D()
 *
 * @name f__B4A2_058D_002D_592D
 * @implements B4A2:058D:002D:592D ()
 *
 * Called From: B4A2:04B9:0004:0494
 */
void f__B4A2_058D_002D_592D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x4);
	if (emu_flags.zf) { f__B4A2_05A8_0012_48B0(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x4);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x05B8; emu_last_cs = 0xB4A2; emu_last_ip = 0x05B1; emu_last_length = 0x002D; emu_last_crc = 0x592D; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	emu_ip = 0x05BA; emu_last_cs = 0xB4A2; emu_last_ip = 0x05B8; emu_last_length = 0x002D; emu_last_crc = 0x592D; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_05A8_0012_48B0()
 *
 * @name f__B4A2_05A8_0012_48B0
 * @implements B4A2:05A8:0012:48B0 ()
 *
 * Called From: B4A2:0596:002D:592D
 */
void f__B4A2_05A8_0012_48B0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x1);
	if (!emu_flags.zf) { emu_ip = 0x05B8; emu_last_cs = 0xB4A2; emu_last_ip = 0x05B1; emu_last_length = 0x0012; emu_last_crc = 0x48B0; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x1);
	f__B4A2_05BA_00B6_D413(); return;
}

/**
 * Decompiled function f__B4A2_05BA_00B6_D413()
 *
 * @name f__B4A2_05BA_00B6_D413
 * @implements B4A2:05BA:00B6:D413 ()
 *
 * Called From: B4A2:042B:0009:06EB
 * Called From: B4A2:042B:000C:CEE3
 * Called From: B4A2:045C:000C:51B8
 * Called From: B4A2:045C:0031:029A
 * Called From: B4A2:04FF:0010:FF54
 * Called From: B4A2:04FF:0045:53A6
 * Called From: B4A2:055E:0002:0318
 * Called From: B4A2:055E:0037:4A38
 * Called From: B4A2:055E:0042:71B4
 * Called From: B4A2:058B:002D:5967
 * Called From: B4A2:05B8:0012:48B0
 */
void f__B4A2_05BA_00B6_D413()
{
	emu_testw(&emu_si, 0x2200);
	if (emu_flags.zf) { f__B4A2_05EF_0081_7A5A(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4A2_05EF_0081_7A5A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x4);
	if (!emu_flags.zf) { f__B4A2_05EF_0081_7A5A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1);
	if (!emu_flags.zf) { f__B4A2_05EF_0081_7A5A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0x1);
	emu_movw(&emu_ax.x, emu_si);
	emu_andw(&emu_ax.x, 0x8800);
	emu_cmpw(&emu_ax.x, 0x8800);
	if (!emu_flags.zf) { f__B4A2_061C_0054_D644(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), 0x0);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { emu_ip = 0x0614; emu_last_cs = 0xB4A2; emu_last_ip = 0x0607; emu_last_length = 0x00B6; emu_last_crc = 0xD413; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x4);
	if (emu_flags.zf) { emu_ip = 0x061C; emu_last_cs = 0xB4A2; emu_last_ip = 0x0612; emu_last_length = 0x00B6; emu_last_crc = 0xD413; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xF9);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { emu_ip = 0x0649; emu_last_cs = 0xB4A2; emu_last_ip = 0x061E; emu_last_length = 0x00B6; emu_last_crc = 0xD413; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { emu_ip = 0x0649; emu_last_cs = 0xB4A2; emu_last_ip = 0x062A; emu_last_length = 0x00B6; emu_last_crc = 0xD413; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	if (!emu_flags.zf) { emu_ip = 0x0649; emu_last_cs = 0xB4A2; emu_last_ip = 0x0630; emu_last_length = 0x00B6; emu_last_crc = 0xD413; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x40);
	if (!emu_flags.zf) { emu_ip = 0x0649; emu_last_cs = 0xB4A2; emu_last_ip = 0x063B; emu_last_length = 0x00B6; emu_last_crc = 0xD413; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_andw(&emu_ax.x, 0x18);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_andws(&emu_dx.x, 0x3);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_cmpw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x0672; emu_last_cs = 0xB4A2; emu_last_ip = 0x0663; emu_last_length = 0x00B6; emu_last_crc = 0xD413; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0670); emu_ip = 0x0729; emu_last_cs = 0xB4A2; emu_last_ip = 0x066D; emu_last_length = 0x00B6; emu_last_crc = 0xD413; emu_call(); // Jump does not resolve
	f__B4A2_0670_0040_BBDA();
}

/**
 * Decompiled function f__B4A2_05EF_0081_7A5A()
 *
 * @name f__B4A2_05EF_0081_7A5A
 * @implements B4A2:05EF:0081:7A5A ()
 *
 * Called From: B4A2:05BE:00B6:D413
 * Called From: B4A2:05C2:00B6:D413
 * Called From: B4A2:05D5:00B6:D413
 * Called From: B4A2:05E0:00B6:D413
 */
void f__B4A2_05EF_0081_7A5A()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_andw(&emu_ax.x, 0x8800);
	emu_cmpw(&emu_ax.x, 0x8800);
	if (!emu_flags.zf) { f__B4A2_061C_0054_D644(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), 0x0);
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__B4A2_0614_005C_966A(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x4);
	if (emu_flags.zf) { f__B4A2_061C_0054_D644(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xF9);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4A2_0649_0027_669C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { f__B4A2_0649_0027_669C(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	if (!emu_flags.zf) { emu_ip = 0x0649; emu_last_cs = 0xB4A2; emu_last_ip = 0x0630; emu_last_length = 0x0081; emu_last_crc = 0x7A5A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x40);
	if (!emu_flags.zf) { emu_ip = 0x0649; emu_last_cs = 0xB4A2; emu_last_ip = 0x063B; emu_last_length = 0x0081; emu_last_crc = 0x7A5A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_andw(&emu_ax.x, 0x18);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_andws(&emu_dx.x, 0x3);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_cmpw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x0672; emu_last_cs = 0xB4A2; emu_last_ip = 0x0663; emu_last_length = 0x0081; emu_last_crc = 0x7A5A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0670); emu_ip = 0x0729; emu_last_cs = 0xB4A2; emu_last_ip = 0x066D; emu_last_length = 0x0081; emu_last_crc = 0x7A5A; emu_call(); // Jump does not resolve
	f__B4A2_0670_0040_BBDA();
}

/**
 * Decompiled function f__B4A2_0614_005C_966A()
 *
 * @name f__B4A2_0614_005C_966A
 * @implements B4A2:0614:005C:966A ()
 *
 * Called From: B4A2:0607:0081:7A5A
 */
void f__B4A2_0614_005C_966A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xF9);
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4A2_0649_0027_669C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { f__B4A2_0649_0027_669C(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	if (!emu_flags.zf) { emu_ip = 0x0649; emu_last_cs = 0xB4A2; emu_last_ip = 0x0630; emu_last_length = 0x005C; emu_last_crc = 0x966A; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x40);
	if (!emu_flags.zf) { emu_ip = 0x0649; emu_last_cs = 0xB4A2; emu_last_ip = 0x063B; emu_last_length = 0x005C; emu_last_crc = 0x966A; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_andw(&emu_ax.x, 0x18);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_andws(&emu_dx.x, 0x3);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_cmpw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x0672; emu_last_cs = 0xB4A2; emu_last_ip = 0x0663; emu_last_length = 0x005C; emu_last_crc = 0x966A; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0670); emu_ip = 0x0729; emu_last_cs = 0xB4A2; emu_last_ip = 0x066D; emu_last_length = 0x005C; emu_last_crc = 0x966A; emu_call(); // Jump does not resolve
	f__B4A2_0670_0040_BBDA();
}

/**
 * Decompiled function f__B4A2_061C_0054_D644()
 *
 * @name f__B4A2_061C_0054_D644
 * @implements B4A2:061C:0054:D644 ()
 *
 * Called From: B4A2:05F7:0081:7A5A
 * Called From: B4A2:05F7:00B6:D413
 * Called From: B4A2:0612:0081:7A5A
 */
void f__B4A2_061C_0054_D644()
{
	emu_orw(&emu_di, emu_di);
	if (!emu_flags.zf) { f__B4A2_0649_0027_669C(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	if (!emu_flags.zf) { f__B4A2_0649_0027_669C(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	if (!emu_flags.zf) { emu_ip = 0x0649; emu_last_cs = 0xB4A2; emu_last_ip = 0x0630; emu_last_length = 0x0054; emu_last_crc = 0xD644; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x40);
	if (!emu_flags.zf) { f__B4A2_0649_0027_669C(); return; }
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x1900), 0x0);
	emu_movw(&emu_get_memory16(emu_ds, 0x00,  0x18FE), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_andw(&emu_ax.x, 0x18);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_andws(&emu_dx.x, 0x3);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_cmpw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { emu_ip = 0x0672; emu_last_cs = 0xB4A2; emu_last_ip = 0x0663; emu_last_length = 0x0054; emu_last_crc = 0xD644; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0670); f__B4A2_0729_0013_5DF3();
	f__B4A2_0670_0040_BBDA();
}

/**
 * Decompiled function f__B4A2_0649_0027_669C()
 *
 * @name f__B4A2_0649_0027_669C
 * @implements B4A2:0649:0027:669C ()
 *
 * Called From: B4A2:061E:0054:D644
 * Called From: B4A2:061E:0081:7A5A
 * Called From: B4A2:061E:005C:966A
 * Called From: B4A2:062A:005C:966A
 * Called From: B4A2:062A:0054:D644
 * Called From: B4A2:062A:0081:7A5A
 * Called From: B4A2:063B:0054:D644
 */
void f__B4A2_0649_0027_669C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_andw(&emu_ax.x, 0x18);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_andws(&emu_dx.x, 0x3);
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_dx.x, emu_cx.l);
	emu_cmpw(&emu_ax.x, emu_dx.x);
	if (emu_flags.zf) { f__B4A2_0672_003E_3BAF(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0670); f__B4A2_0729_0013_5DF3();
	f__B4A2_0670_0040_BBDA();
}

/**
 * Decompiled function f__B4A2_0670_0040_BBDA()
 *
 * @name f__B4A2_0670_0040_BBDA
 * @implements B4A2:0670:0040:BBDA ()
 *
 * Called From: B4A2:0670:0027:669C
 * Called From: B4A2:0670:0054:D644
 */
void f__B4A2_0670_0040_BBDA()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__B4A2_0680_0030_FF82(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFE);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	if (emu_flags.zf) { f__B4A2_06C5_001E_8C45(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x30));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x32));
	if (emu_flags.zf) { emu_ip = 0x06B8; emu_last_cs = 0xB4A2; emu_last_ip = 0x06A1; emu_last_length = 0x0040; emu_last_crc = 0xBBDA; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx.x,  0x30);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx.x,  0x32);
	emu_push(0x06B0);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x0AEC004F: f__0AEC_004F_0024_F897(); break;
		case 0x3495003E: ovl__3495(6); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4A2; emu_last_ip = 0x06AC; emu_last_length = 0x0040; emu_last_crc = 0xBBDA;
			emu_call();
			return;
	}
	f__B4A2_06B0_0008_6B30();
}

/**
 * Decompiled function f__B4A2_0672_003E_3BAF()
 *
 * @name f__B4A2_0672_003E_3BAF
 * @implements B4A2:0672:003E:3BAF ()
 *
 * Called From: B4A2:0663:0027:669C
 */
void f__B4A2_0672_003E_3BAF()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_flags.zf) { f__B4A2_0680_0030_FF82(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andws(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFE);
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	if (emu_flags.zf) { emu_ip = 0x06C5; emu_last_cs = 0xB4A2; emu_last_ip = 0x0684; emu_last_length = 0x003E; emu_last_crc = 0x3BAF; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x30));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x32));
	if (emu_flags.zf) { emu_ip = 0x06B8; emu_last_cs = 0xB4A2; emu_last_ip = 0x06A1; emu_last_length = 0x003E; emu_last_crc = 0x3BAF; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx.x,  0x30);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx.x,  0x32);
	emu_push(0x06B0);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x0AEC004F: f__0AEC_004F_0024_F897(); break;
		case 0x3495003E: ovl__3495(6); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4A2; emu_last_ip = 0x06AC; emu_last_length = 0x003E; emu_last_crc = 0x3BAF;
			emu_call();
			return;
	}
	f__B4A2_06B0_0008_6B30();
}

/**
 * Decompiled function f__B4A2_0680_0030_FF82()
 *
 * @name f__B4A2_0680_0030_FF82
 * @implements B4A2:0680:0030:FF82 ()
 *
 * Called From: B4A2:0676:003E:3BAF
 * Called From: B4A2:0676:0040:BBDA
 */
void f__B4A2_0680_0030_FF82()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x0);
	if (emu_flags.zf) { f__B4A2_06C5_001E_8C45(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), 0xFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx.x,  0x2E), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x30));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x32));
	if (emu_flags.zf) { f__B4A2_06B8_000D_6A92(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, emu_bx.x,  0x30);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, emu_bx.x,  0x32);
	emu_push(0x06B0);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x0AEC004F: f__0AEC_004F_0024_F897(); break;
		case 0x0AEC0FD8: f__0AEC_0FD8_0017_03FF(); break;
		case 0x0AEC1093: f__0AEC_1093_000F_6CE7(); break;
		case 0x0AEC1181: f__0AEC_1181_001C_EF7E(); break;
		case 0x0AEC11F6: f__0AEC_11F6_000F_5CE7(); break;
		case 0x1A341CB1: f__1A34_1CB1_003A_01CA(); break;
		case 0x34950025: ovl__3495(1); break;
		case 0x3495002A: ovl__3495(2); break;
		case 0x3495002F: ovl__3495(3); break;
		case 0x34950034: ovl__3495(4); break;
		case 0x3495003E: ovl__3495(6); break;
		case 0x34E0002A: ovl__34E0(2); break;
		case 0x34E9002F: ovl__34E9(3); break;
		case 0x34F20025: ovl__34F2(1); break;
		case 0x35180039: ovl__3518(5); break;
		case 0x35200043: ovl__3520(7); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4A2; emu_last_ip = 0x06AC; emu_last_length = 0x0030; emu_last_crc = 0xFF82;
			emu_call();
			return;
	}
	f__B4A2_06B0_0008_6B30();
}

/**
 * Decompiled function f__B4A2_06B0_0008_6B30()
 *
 * @name f__B4A2_06B0_0008_6B30
 * @implements B4A2:06B0:0008:6B30 ()
 *
 * Called From: B4A2:06B0:0030:FF82
 * Called From: B4A2:06B0:003E:3BAF
 * Called From: B4A2:06B0:0040:BBDA
 */
void f__B4A2_06B0_0008_6B30()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__B4A2_06B8_000D_6A92(); return; }
	f__B4A2_06FE_0015_08C5(); return;
}

/**
 * Decompiled function f__B4A2_06B8_000D_6A92()
 *
 * @name f__B4A2_06B8_000D_6A92
 * @implements B4A2:06B8:000D:6A92 ()
 *
 * Called From: B4A2:06A1:0030:FF82
 * Called From: B4A2:06B4:0008:6B30
 */
void f__B4A2_06B8_000D_6A92()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x20);
	if (emu_flags.zf) { f__B4A2_06C5_001E_8C45(); return; }
	emu_ip = 0x06FE; emu_last_cs = 0xB4A2; emu_last_ip = 0x06C3; emu_last_length = 0x000D; emu_last_crc = 0x6A92; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_06C5_001E_8C45()
 *
 * @name f__B4A2_06C5_001E_8C45
 * @implements B4A2:06C5:001E:8C45 ()
 *
 * Called From: B4A2:0684:0030:FF82
 * Called From: B4A2:0684:0040:BBDA
 * Called From: B4A2:06C1:000D:6A92
 */
void f__B4A2_06C5_001E_8C45()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, 0x00,  0x1900));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ds, 0x00,  0x18FE));
	emu_cmpw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4A2_06E3_001B_ACD6(); return; }
	emu_cmpw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (!emu_flags.zf) { f__B4A2_06E3_001B_ACD6(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x40);
	if (emu_flags.zf) { emu_ip = 0x06E3; emu_last_cs = 0xB4A2; emu_last_ip = 0x06DF; emu_last_length = 0x001E; emu_last_crc = 0x8C45; emu_call(); return; } // Jump does not resolve
	f__B4A2_06FE_0015_08C5(); return;
}

/**
 * Decompiled function f__B4A2_06E3_001B_ACD6()
 *
 * @name f__B4A2_06E3_001B_ACD6
 * @implements B4A2:06E3:001B:ACD6 ()
 *
 * Called From: B4A2:01FA:000E:C250
 * Called From: B4A2:06CF:001E:8C45
 * Called From: B4A2:06D4:001E:8C45
 */
void f__B4A2_06E3_001B_ACD6()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__B4A2_06FE_0015_08C5(); return; }
	f__B4A2_01EF_000E_C250(); return;
}

/**
 * Decompiled function f__B4A2_06F3_000B_6DCD()
 *
 * @name f__B4A2_06F3_000B_6DCD
 * @implements B4A2:06F3:000B:6DCD ()
 *
 * Called From: B4A2:01EC:0008:DE52
 * Called From: B4A2:01EC:0074:6642
 */
void f__B4A2_06F3_000B_6DCD()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { f__B4A2_06FE_0015_08C5(); return; }
	f__B4A2_01EF_000E_C250(); return;
}

/**
 * Decompiled function f__B4A2_06FE_0015_08C5()
 *
 * @name f__B4A2_06FE_0015_08C5
 * @implements B4A2:06FE:0015:08C5 ()
 *
 * Called From: B4A2:06B6:0008:6B30
 * Called From: B4A2:06E1:001E:8C45
 * Called From: B4A2:06F9:001B:ACD6
 * Called From: B4A2:06F9:000B:6DCD
 */
void f__B4A2_06FE_0015_08C5()
{
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (!emu_flags.zf) { f__B4A2_070D_0006_2256(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_andw(&emu_ax.x, 0x7FFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	f__B4A2_007E_0003_050C(); return;
}

/**
 * Decompiled function f__B4A2_070D_0006_2256()
 *
 * @name f__B4A2_070D_0006_2256
 * @implements B4A2:070D:0006:2256 ()
 *
 * Called From: B4A2:0702:0015:08C5
 */
void f__B4A2_070D_0006_2256()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	f__B4A2_007E_0003_050C(); return;
}

/**
 * Decompiled function f__B4A2_0713_0006_137A()
 *
 * @name f__B4A2_0713_0006_137A
 * @implements B4A2:0713:0006:137A ()
 *
 * Called From: B4A2:007E:0003:050C
 * Called From: B4A2:007E:001E:636A
 */
void f__B4A2_0713_0006_137A()
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
 * Decompiled function f__B4A2_0729_0013_5DF3()
 *
 * @name f__B4A2_0729_0013_5DF3
 * @implements B4A2:0729:0013:5DF3 ()
 *
 * Called From: 34A2:0020:0005:1C0A
 * Called From: 34A2:0020:0005:1C52
 * Called From: 34A2:0020:0005:1CC0
 * Called From: 34A2:0020:0005:1CC2
 * Called From: 34A2:0020:0005:1CF2
 * Called From: 34A2:0020:0005:1D0E
 * Called From: 34A2:0020:0005:1D62
 * Called From: 34A2:0020:0005:1D6C
 * Called From: 34A2:0020:0005:1D8E
 * Called From: 34A2:0020:0005:1E6E
 * Called From: 34A2:0020:0005:1EE4
 * Called From: 34A2:0020:0005:1F06
 * Called From: 34A2:0020:0005:1F10
 * Called From: 34A2:0020:0005:1F22
 * Called From: 34A2:0020:0005:1F4E
 * Called From: 34A2:0020:0005:1F70
 * Called From: 34A2:0020:0005:1F74
 * Called From: 34A2:0020:0005:1E32
 * Called From: 34A2:0020:0005:1C4A
 * Called From: 34A2:0020:0005:1E54
 * Called From: 34A2:0020:0005:1FF8
 * Called From: 34A2:0020:0005:1F8E
 * Called From: 34A2:0020:0005:1EB6
 * Called From: B4A2:00F1:000B:E0FE
 * Called From: B4A2:066D:0027:669C
 * Called From: B4A2:066D:0054:D644
 */
void f__B4A2_0729_0013_5DF3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__B4A2_073C_0025_86F7(); return; }
	emu_ip = 0x0A1E; emu_last_cs = 0xB4A2; emu_last_ip = 0x0739; emu_last_length = 0x0013; emu_last_crc = 0x5DF3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_073C_0025_86F7()
 *
 * @name f__B4A2_073C_0025_86F7
 * @implements B4A2:073C:0025:86F7 ()
 *
 * Called From: B4A2:0737:0013:5DF3
 */
void f__B4A2_073C_0025_86F7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x8);
	if (emu_flags.zf) { f__B4A2_0767_001B_457C(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), 0x10);
	if (emu_flags.zf) { f__B4A2_0764_0003_0590(); return; }
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6D53));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0761); emu_cs = 0x2427; emu_ip = 0x0765; emu_last_cs = 0xB4A2; emu_last_ip = 0x075C; emu_last_length = 0x0025; emu_last_crc = 0x86F7; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__B4A2_0764_0003_0590()
 *
 * @name f__B4A2_0764_0003_0590
 * @implements B4A2:0764:0003:0590 ()
 *
 * Called From: B4A2:0750:0025:86F7
 */
void f__B4A2_0764_0003_0590()
{
	f__B4A2_0A1E_0006_137A(); return;
}

/**
 * Decompiled function f__B4A2_0767_001B_457C()
 *
 * @name f__B4A2_0767_001B_457C
 * @implements B4A2:0767:001B:457C ()
 *
 * Called From: B4A2:0745:0025:86F7
 */
void f__B4A2_0767_001B_457C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2E));
	emu_andw(&emu_ax.x, 0x5);
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__B4A2_07B9_0032_80FD(); return; }
	emu_cmpw(&emu_ax.x, 0x4);
	if (emu_flags.zf) { f__B4A2_0782_0037_1312(); return; }
	emu_cmpw(&emu_ax.x, 0x5);
	if (emu_flags.zf) { f__B4A2_0782_0037_1312(); return; }
	f__B4A2_07EB_0032_D02A(); return;
}

/**
 * Decompiled function f__B4A2_0782_0037_1312()
 *
 * @name f__B4A2_0782_0037_1312
 * @implements B4A2:0782:0037:1312 ()
 *
 * Called From: B4A2:0779:001B:457C
 * Called From: B4A2:077E:001B:457C
 */
void f__B4A2_0782_0037_1312()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xC));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x1A));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x18));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2A));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x2B));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	f__B4A2_081D_008A_F8A8(); return;
}

/**
 * Decompiled function f__B4A2_07B2_0007_4B54()
 *
 * @name f__B4A2_07B2_0007_4B54
 * @implements B4A2:07B2:0007:4B54 ()
 *
 * Called From: B4A2:07E9:0032:80FD
 * Called From: B4A2:081B:0032:D02A
 */
void f__B4A2_07B2_0007_4B54()
{
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_ax.x);
	f__B4A2_081D_008A_F8A8(); return;
}

/**
 * Decompiled function f__B4A2_07B9_0032_80FD()
 *
 * @name f__B4A2_07B9_0032_80FD
 * @implements B4A2:07B9:0032:80FD ()
 *
 * Called From: B4A2:0774:001B:457C
 */
void f__B4A2_07B9_0032_80FD()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x14));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x28));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x29));
	f__B4A2_07B2_0007_4B54(); return;
}

/**
 * Decompiled function f__B4A2_07EB_0032_D02A()
 *
 * @name f__B4A2_07EB_0032_D02A
 * @implements B4A2:07EB:0032:D02A ()
 *
 * Called From: B4A2:0780:001B:457C
 */
void f__B4A2_07EB_0032_D02A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xA));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x26));
	emu_movb(&emu_ax.h, 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x27));
	f__B4A2_07B2_0007_4B54(); return;
}

/**
 * Decompiled function f__B4A2_081D_008A_F8A8()
 *
 * @name f__B4A2_081D_008A_F8A8
 * @implements B4A2:081D:008A:F8A8 ()
 *
 * Called From: B4A2:07B7:0007:4B54
 * Called From: B4A2:07B7:0037:1312
 */
void f__B4A2_081D_008A_F8A8()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x1E));
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_083D_006A_35D9(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4066));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4062));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { emu_ip = 0x087C; emu_last_cs = 0xB4A2; emu_last_ip = 0x086B; emu_last_length = 0x008A; emu_last_crc = 0xF8A8; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x,  0x4068));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x,  0x4064));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_decw(&emu_bx.x);
	emu_cmpws(&emu_bx.x, 0x5);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x08A7; emu_last_cs = 0xB4A2; emu_last_ip = 0x08A2; emu_last_length = 0x008A; emu_last_crc = 0xF8A8; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0A1C; emu_last_cs = 0xB4A2; emu_last_ip = 0x08A4; emu_last_length = 0x008A; emu_last_crc = 0xF8A8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_083D_006A_35D9()
 *
 * @name f__B4A2_083D_006A_35D9
 * @implements B4A2:083D:006A:35D9 ()
 *
 * Called From: B4A2:0826:008A:F8A8
 */
void f__B4A2_083D_006A_35D9()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x4062));
	emu_movb(&emu_cx.l, 0x3);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_addw(&emu_si, emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x22));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x20));
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) { f__B4A2_087C_002B_CCEB(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x,  0x4068));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x,  0x4064));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_decw(&emu_bx.x);
	emu_cmpws(&emu_bx.x, 0x5);
	if ((emu_flags.cf || emu_flags.zf)) { emu_ip = 0x08A7; emu_last_cs = 0xB4A2; emu_last_ip = 0x08A2; emu_last_length = 0x006A; emu_last_crc = 0x35D9; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x0A1C; emu_last_cs = 0xB4A2; emu_last_ip = 0x08A4; emu_last_length = 0x006A; emu_last_crc = 0x35D9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__B4A2_087C_002B_CCEB()
 *
 * @name f__B4A2_087C_002B_CCEB
 * @implements B4A2:087C:002B:CCEB ()
 *
 * Called From: B4A2:086B:006A:35D9
 */
void f__B4A2_087C_002B_CCEB()
{
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_di);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_movb(&emu_cx.l, 0x4);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_addw(&emu_di, emu_get_memory16(emu_ds, emu_bx.x,  0x4064));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_di);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x24));
	emu_decw(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_decw(&emu_bx.x);
	emu_cmpws(&emu_bx.x, 0x5);
	if ((emu_flags.cf || emu_flags.zf)) { f__B4A2_08A7_0007_5FCC(); return; }
	f__B4A2_0A1C_0002_03AC(); return;
}

/**
 * Decompiled function f__B4A2_08A7_0007_5FCC()
 *
 * @name f__B4A2_08A7_0007_5FCC
 * @implements B4A2:08A7:0007:5FCC ()
 *
 * Called From: B4A2:08A2:002B:CCEB
 */
void f__B4A2_08A7_0007_5FCC()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0xA24);
	switch (emu_ip) {
		case 0x08AE: f__B4A2_08AE_0014_66A0(); return;
		case 0x08F7: f__B4A2_08F7_0014_66A0(); return;
		case 0x0933: f__B4A2_0933_0011_D731(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4A2; emu_last_ip = 0x08A9; emu_last_length = 0x0007; emu_last_crc = 0x5FCC;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__B4A2_08AE_0014_66A0()
 *
 * @name f__B4A2_08AE_0014_66A0
 * @implements B4A2:08AE:0014:66A0 ()
 *
 * Called From: B4A2:08A9:0007:5FCC
 */
void f__B4A2_08AE_0014_66A0()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C91), 0x0);
	if (!emu_flags.zf) { f__B4A2_08C5_0020_C693(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x08C2); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_08C2_0023_C18B();
}

/**
 * Decompiled function f__B4A2_08C2_0023_C18B()
 *
 * @name f__B4A2_08C2_0023_C18B
 * @implements B4A2:08C2:0023:C18B ()
 *
 * Called From: B4A2:08C2:0014:66A0
 */
void f__B4A2_08C2_0023_C18B()
{
	emu_addws(&emu_sp, 0x8);
	emu_movw(&emu_ax.x, 0x4000);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x08E5); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_08E5_000F_3C2C();
}

/**
 * Decompiled function f__B4A2_08C5_0020_C693()
 *
 * @name f__B4A2_08C5_0020_C693
 * @implements B4A2:08C5:0020:C693 ()
 *
 * Called From: B4A2:08B3:0014:66A0
 */
void f__B4A2_08C5_0020_C693()
{
	emu_movw(&emu_ax.x, 0x4000);
	emu_push(emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x1C));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ds, 0x00,  0x6C91));
	emu_push(emu_cs); emu_push(0x08E5); emu_cs = 0x2903; f__2903_0158_001A_A9AA();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_08E5_000F_3C2C();
}

/**
 * Decompiled function f__B4A2_08E5_000F_3C2C()
 *
 * @name f__B4A2_08E5_000F_3C2C
 * @implements B4A2:08E5:000F:3C2C ()
 *
 * Called From: B4A2:08E5:0020:C693
 * Called From: B4A2:08E5:0023:C18B
 */
void f__B4A2_08E5_000F_3C2C()
{
	emu_addws(&emu_sp, 0xE);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C91), 0x0);
	if (!emu_flags.zf) { f__B4A2_08F4_0003_07D6(); return; }
	emu_push(emu_cs); emu_push(0x08F4); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_08F4_0003_07D6();
}

/**
 * Decompiled function f__B4A2_08F4_0003_07D6()
 *
 * @name f__B4A2_08F4_0003_07D6
 * @implements B4A2:08F4:0003:07D6 ()
 *
 * Called From: B4A2:08ED:000F:3C2C
 * Called From: B4A2:08F4:000F:3C2C
 */
void f__B4A2_08F4_0003_07D6()
{
	f__B4A2_0A1E_0006_137A(); return;
}

/**
 * Decompiled function f__B4A2_08F7_0014_66A0()
 *
 * @name f__B4A2_08F7_0014_66A0
 * @implements B4A2:08F7:0014:66A0 ()
 *
 * Called From: B4A2:08A9:0007:5FCC
 */
void f__B4A2_08F7_0014_66A0()
{
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C91), 0x0);
	if (!emu_flags.zf) { f__B4A2_090E_0013_B0B2(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x090B); emu_cs = 0x2B6C; f__2B6C_0197_00CE_7027();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_090B_0016_8872();
}

/**
 * Decompiled function f__B4A2_090B_0016_8872()
 *
 * @name f__B4A2_090B_0016_8872
 * @implements B4A2:090B:0016:8872 ()
 *
 * Called From: B4A2:090B:0014:66A0
 */
void f__B4A2_090B_0016_8872()
{
	emu_addws(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0921); emu_cs = 0x2BC2; f__2BC2_000A_0044_4A53();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_0921_000F_7C2C();
}

/**
 * Decompiled function f__B4A2_090E_0013_B0B2()
 *
 * @name f__B4A2_090E_0013_B0B2
 * @implements B4A2:090E:0013:B0B2 ()
 *
 * Called From: B4A2:08FC:0014:66A0
 */
void f__B4A2_090E_0013_B0B2()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0921); emu_cs = 0x2BC2; f__2BC2_000A_0044_4A53();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_0921_000F_7C2C();
}

/**
 * Decompiled function f__B4A2_0921_000F_7C2C()
 *
 * @name f__B4A2_0921_000F_7C2C
 * @implements B4A2:0921:000F:7C2C ()
 *
 * Called From: B4A2:0921:0013:B0B2
 * Called From: B4A2:0921:0016:8872
 */
void f__B4A2_0921_000F_7C2C()
{
	emu_addws(&emu_sp, 0xC);
	emu_cmpws(&emu_get_memory16(emu_ds, 0x00,  0x6C91), 0x0);
	if (!emu_flags.zf) { f__B4A2_0930_0003_04E4(); return; }
	emu_push(emu_cs); emu_push(0x0930); emu_cs = 0x2B6C; f__2B6C_0292_0028_CAA5();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34A2) { ovl__34A2(0xFF); }
	f__B4A2_0930_0003_04E4();
}

/**
 * Decompiled function f__B4A2_0930_0003_04E4()
 *
 * @name f__B4A2_0930_0003_04E4
 * @implements B4A2:0930:0003:04E4 ()
 *
 * Called From: B4A2:0929:000F:7C2C
 * Called From: B4A2:0930:000F:7C2C
 */
void f__B4A2_0930_0003_04E4()
{
	f__B4A2_0A1E_0006_137A(); return;
}

/**
 * Decompiled function f__B4A2_0933_0011_D731()
 *
 * @name f__B4A2_0933_0011_D731
 * @implements B4A2:0933:0011:D731 ()
 *
 * Called From: B4A2:08A9:0007:5FCC
 */
void f__B4A2_0933_0011_D731()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { emu_ip = 0x0946; emu_last_cs = 0xB4A2; emu_last_ip = 0x0939; emu_last_length = 0x0011; emu_last_crc = 0xD731; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_push(0x0944);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x0AEC0809: f__0AEC_0809_001D_4DF8(); break;
		case 0x0AEC0CA1: f__0AEC_0CA1_0013_5C6A(); break;
		case 0x0AEC0E3E: f__0AEC_0E3E_0013_5C7E(); break;
		case 0x34F20061: ovl__34F2(13); break;
		case 0x3520002A: ovl__3520(2); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4A2; emu_last_ip = 0x0941; emu_last_length = 0x0011; emu_last_crc = 0xD731;
			emu_call();
			return;
	}
	f__B4A2_0944_0005_0AAC();
}

/**
 * Decompiled function f__B4A2_0944_0005_0AAC()
 *
 * @name f__B4A2_0944_0005_0AAC
 * @implements B4A2:0944:0005:0AAC ()
 *
 * Called From: B4A2:0944:0011:D731
 */
void f__B4A2_0944_0005_0AAC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	f__B4A2_0A1E_0006_137A(); return;
}

/**
 * Decompiled function f__B4A2_0A1C_0002_03AC()
 *
 * @name f__B4A2_0A1C_0002_03AC
 * @implements B4A2:0A1C:0002:03AC ()
 *
 * Called From: B4A2:08A4:002B:CCEB
 */
void f__B4A2_0A1C_0002_03AC()
{
	f__B4A2_0A1E_0006_137A(); return;
}

/**
 * Decompiled function f__B4A2_0A1E_0006_137A()
 *
 * @name f__B4A2_0A1E_0006_137A
 * @implements B4A2:0A1E:0006:137A ()
 *
 * Called From: B4A2:0764:0003:0590
 * Called From: B4A2:08F4:0003:07D6
 * Called From: B4A2:0930:0003:04E4
 * Called From: B4A2:0946:0005:0AAC
 * Called From: B4A2:0A1C:0002:03AC
 */
void f__B4A2_0A1E_0006_137A()
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
