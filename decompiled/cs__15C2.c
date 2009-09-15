/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__15C2_000B_000E_8D93()
 *
 * @name f__15C2_000B_000E_8D93
 * @implements 15C2:000B:000E:8D93 ()
 *
 * Called From: 15C2:00D2:000A:79C5
 */
void f__15C2_000B_000E_8D93()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__15C2_0019_0025_54D5(); return; }
	emu_ip = 0x00AA; emu_last_cs = 0x15C2; emu_last_ip = 0x0016; emu_last_length = 0x000E; emu_last_crc = 0x8D93; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_0019_0025_54D5()
 *
 * @name f__15C2_0019_0025_54D5
 * @implements 15C2:0019:0025:54D5 ()
 *
 * Called From: 15C2:0014:000E:8D93
 */
void f__15C2_0019_0025_54D5()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x14), 0x0);
	if (emu_flags.zf) { f__15C2_007E_002E_7712(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	if (emu_flags.zf) { emu_ip = 0x0040; emu_last_cs = 0x15C2; emu_last_ip = 0x002D; emu_last_length = 0x0025; emu_last_crc = 0x54D5; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x003E); emu_cs = 0x23E1; emu_ip = 0x0200; emu_last_cs = 0x15C2; emu_last_ip = 0x0039; emu_last_length = 0x0025; emu_last_crc = 0x54D5; emu_call(); // Jump does not resolve
	emu_unknown_call();
}

/**
 * Decompiled function f__15C2_007E_002E_7712()
 *
 * @name f__15C2_007E_002E_7712
 * @implements 15C2:007E:002E:7712 ()
 *
 * Called From: 15C2:0021:0025:54D5
 */
void f__15C2_007E_002E_7712()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__15C2_00AC_0015_0F53()
 *
 * @name f__15C2_00AC_0015_0F53
 * @implements 15C2:00AC:0015:0F53 ()
 *
 * Called From: B4B8:22C7:001F:04BC
 */
void f__15C2_00AC_0015_0F53()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__15C2_00C1_000A_B60C(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x038F; emu_last_cs = 0x15C2; emu_last_ip = 0x00BE; emu_last_length = 0x0015; emu_last_crc = 0x0F53; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_00BE_0003_0474()
 *
 * @name f__15C2_00BE_0003_0474
 * @implements 15C2:00BE:0003:0474 ()
 *
 * Called From: 15C2:038C:0007:0F0E
 */
void f__15C2_00BE_0003_0474()
{
	f__15C2_038F_0006_137A(); return;
}

/**
 * Decompiled function f__15C2_00C1_000A_B60C()
 *
 * @name f__15C2_00C1_000A_B60C
 * @implements 15C2:00C1:000A:B60C ()
 *
 * Called From: 15C2:00BA:0015:0F53
 */
void f__15C2_00C1_000A_B60C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__15C2_00CB_000A_79C5(); return; }
	emu_ip = 0x00BC; emu_last_cs = 0x15C2; emu_last_ip = 0x00C9; emu_last_length = 0x000A; emu_last_crc = 0xB60C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_00CB_000A_79C5()
 *
 * @name f__15C2_00CB_000A_79C5
 * @implements 15C2:00CB:000A:79C5 ()
 *
 * Called From: 15C2:00C7:000A:B60C
 */
void f__15C2_00CB_000A_79C5()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x00D5); f__15C2_000B_000E_8D93();
	f__15C2_00D5_001E_6DCC();
}

/**
 * Decompiled function f__15C2_00D5_001E_6DCC()
 *
 * @name f__15C2_00D5_001E_6DCC
 * @implements 15C2:00D5:001E:6DCC ()
 *
 * Called From: 15C2:00D5:000A:79C5
 */
void f__15C2_00D5_001E_6DCC()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_es);
	emu_push(emu_bx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (!emu_flags.zf) { f__15C2_00F3_0024_60AA(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__15C2_00F5_0022_659A(); return;
}

/**
 * Decompiled function f__15C2_00F3_0024_60AA()
 *
 * @name f__15C2_00F3_0024_60AA
 * @implements 15C2:00F3:0024:60AA ()
 *
 * Called From: 15C2:00EC:001E:6DCC
 */
void f__15C2_00F3_0024_60AA()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_pop(&emu_bx.x);
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0117); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6875();
	f__15C2_0117_0009_D6F8();
}

/**
 * Decompiled function f__15C2_00F5_0022_659A()
 *
 * @name f__15C2_00F5_0022_659A
 * @implements 15C2:00F5:0022:659A ()
 *
 * Called From: 15C2:00F1:001E:6DCC
 */
void f__15C2_00F5_0022_659A()
{
	emu_pop(&emu_bx.x);
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x14), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x12), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x10), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0117); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6875();
	f__15C2_0117_0009_D6F8();
}

/**
 * Decompiled function f__15C2_0117_0009_D6F8()
 *
 * @name f__15C2_0117_0009_D6F8
 * @implements 15C2:0117:0009:D6F8 ()
 *
 * Called From: 15C2:0117:0022:659A
 * Called From: 15C2:0117:0024:60AA
 */
void f__15C2_0117_0009_D6F8()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (!emu_flags.zf) { f__15C2_0120_000B_E66A(); return; }
	emu_ip = 0x0389; emu_last_cs = 0x15C2; emu_last_ip = 0x011D; emu_last_length = 0x0009; emu_last_crc = 0xD6F8; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_0120_000B_E66A()
 *
 * @name f__15C2_0120_000B_E66A
 * @implements 15C2:0120:000B:E66A ()
 *
 * Called From: 15C2:011B:0009:D6F8
 */
void f__15C2_0120_000B_E66A()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x012B); emu_cs = 0x34B1; ovl__34B1(0);
	f__15C2_012B_0012_349D();
}

/**
 * Decompiled function f__15C2_012B_0012_349D()
 *
 * @name f__15C2_012B_0012_349D
 * @implements 15C2:012B:0012:349D ()
 *
 * Called From: 15C2:012B:000B:E66A
 */
void f__15C2_012B_0012_349D()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, 0x5458);
	emu_movw(&emu_dx.x, 0x4554);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x013D); emu_cs = 0x34B1; ovl__34B1(3);
	f__15C2_013D_0049_FD58();
}

/**
 * Decompiled function f__15C2_013D_0049_FD58()
 *
 * @name f__15C2_013D_0049_FD58
 * @implements 15C2:013D:0049:FD58 ()
 *
 * Called From: 15C2:013D:0012:349D
 */
void f__15C2_013D_0049_FD58()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__15C2_01C3_000E_97BB(); return; }
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_flags.zf) { emu_ip = 0x0186; emu_last_cs = 0x15C2; emu_last_ip = 0x0160; emu_last_length = 0x0049; emu_last_crc = 0xFD58; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x14), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x12), emu_dx.x);
	emu_ip = 0x01A2; emu_last_cs = 0x15C2; emu_last_ip = 0x0184; emu_last_length = 0x0049; emu_last_crc = 0xFD58; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_01C3_000E_97BB()
 *
 * @name f__15C2_01C3_000E_97BB
 * @implements 15C2:01C3:000E:97BB ()
 *
 * Called From: 15C2:0158:0049:FD58
 */
void f__15C2_01C3_000E_97BB()
{
	emu_movw(&emu_ax.x, 0x5244);
	emu_movw(&emu_dx.x, 0x524F);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01D1); emu_cs = 0x34B1; ovl__34B1(3);
	f__15C2_01D1_0020_A158();
}

/**
 * Decompiled function f__15C2_01D1_0020_A158()
 *
 * @name f__15C2_01D1_0020_A158
 * @implements 15C2:01D1:0020:A158 ()
 *
 * Called From: 15C2:01D1:000E:97BB
 */
void f__15C2_01D1_0020_A158()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__15C2_01F1_002D_111E(); return; }
	emu_ip = 0x036C; emu_last_cs = 0x15C2; emu_last_ip = 0x01EE; emu_last_length = 0x0020; emu_last_crc = 0xA158; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_01F1_002D_111E()
 *
 * @name f__15C2_01F1_002D_111E
 * @implements 15C2:01F1:002D:111E ()
 *
 * Called From: 15C2:01EC:0020:A158
 */
void f__15C2_01F1_002D_111E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_flags.zf) { f__15C2_021E_000F_3790(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x14), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x12), emu_dx.x);
	f__15C2_023B_0030_556D(); return;
}

/**
 * Decompiled function f__15C2_021E_000F_3790()
 *
 * @name f__15C2_021E_000F_3790
 * @implements 15C2:021E:000F:3790 ()
 *
 * Called From: 15C2:01F7:002D:111E
 */
void f__15C2_021E_000F_3790()
{
	emu_movw(&emu_ax.x, 0x30);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x022D); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	f__15C2_022D_003E_4876();
}

/**
 * Decompiled function f__15C2_022D_003E_4876()
 *
 * @name f__15C2_022D_003E_4876
 * @implements 15C2:022D:003E:4876 ()
 *
 * Called From: 15C2:022D:000F:3790
 */
void f__15C2_022D_003E_4876()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xA), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shrw(&emu_ax.x, 0x1);
	emu_rcrw(&emu_dx.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_ax.x, 0x5244);
	emu_movw(&emu_dx.x, 0x524F);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x026B); emu_cs = 0x34B1; ovl__34B1(1);
	f__15C2_026B_0007_766A();
}

/**
 * Decompiled function f__15C2_023B_0030_556D()
 *
 * @name f__15C2_023B_0030_556D
 * @implements 15C2:023B:0030:556D ()
 *
 * Called From: 15C2:021C:002D:111E
 */
void f__15C2_023B_0030_556D()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shrw(&emu_ax.x, 0x1);
	emu_rcrw(&emu_dx.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_ax.x, 0x5244);
	emu_movw(&emu_dx.x, 0x524F);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x026B); emu_cs = 0x34B1; ovl__34B1(1);
	f__15C2_026B_0007_766A();
}

/**
 * Decompiled function f__15C2_026B_0007_766A()
 *
 * @name f__15C2_026B_0007_766A
 * @implements 15C2:026B:0007:766A ()
 *
 * Called From: 15C2:026B:0030:556D
 * Called From: 15C2:026B:003E:4876
 */
void f__15C2_026B_0007_766A()
{
	emu_addws(&emu_sp, 0xE);
	emu_xorw(&emu_di, emu_di);
	f__15C2_0299_001C_4868(); return;
}

/**
 * Decompiled function f__15C2_0272_0015_D52C()
 *
 * @name f__15C2_0272_0015_D52C
 * @implements 15C2:0272:0015:D52C ()
 *
 * Called From: 15C2:02A5:001C:4868
 * Called From: 15C2:02A5:002E:E091
 */
void f__15C2_0272_0015_D52C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_ax.x, emu_di);
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_push(emu_cs); emu_push(0x0287); emu_cs = 0x2BC0; f__2BC0_0013_000A_F542();
	f__15C2_0287_002E_E091();
}

/**
 * Decompiled function f__15C2_0287_002E_E091()
 *
 * @name f__15C2_0287_002E_E091
 * @implements 15C2:0287:002E:E091 ()
 *
 * Called From: 15C2:0287:0015:D52C
 */
void f__15C2_0287_002E_E091()
{
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_dx.x, emu_di);
	emu_shlw(&emu_dx.x, 0x1);
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_ax.x);
	emu_incw(&emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shrw(&emu_ax.x, 0x1);
	emu_rcrw(&emu_dx.x, 0x1);
	emu_cmpw(&emu_dx.x, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__15C2_0272_0015_D52C(); return; }
	emu_movw(&emu_ax.x, 0x4154);
	emu_movw(&emu_dx.x, 0x4144);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02B5); emu_cs = 0x34B1; ovl__34B1(3);
	f__15C2_02B5_0020_A14A();
}

/**
 * Decompiled function f__15C2_0299_001C_4868()
 *
 * @name f__15C2_0299_001C_4868
 * @implements 15C2:0299:001C:4868 ()
 *
 * Called From: 15C2:0270:0007:766A
 */
void f__15C2_0299_001C_4868()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shrw(&emu_ax.x, 0x1);
	emu_rcrw(&emu_dx.x, 0x1);
	emu_cmpw(&emu_dx.x, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__15C2_0272_0015_D52C(); return; }
	emu_movw(&emu_ax.x, 0x4154);
	emu_movw(&emu_dx.x, 0x4144);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02B5); emu_cs = 0x34B1; emu_ip = 0x02E4; emu_last_cs = 0x15C2; emu_last_ip = 0x02B0; emu_last_length = 0x001C; emu_last_crc = 0x4868; emu_call(); // Jump does not resolve
	f__15C2_02B5_0020_A14A();
}

/**
 * Decompiled function f__15C2_02B5_0020_A14A()
 *
 * @name f__15C2_02B5_0020_A14A
 * @implements 15C2:02B5:0020:A14A ()
 *
 * Called From: 15C2:02B5:002E:E091
 */
void f__15C2_02B5_0020_A14A()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__15C2_02D5_002D_089E(); return; }
	emu_ip = 0x0354; emu_last_cs = 0x15C2; emu_last_ip = 0x02D2; emu_last_length = 0x0020; emu_last_crc = 0xA14A; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_02D5_002D_089E()
 *
 * @name f__15C2_02D5_002D_089E
 * @implements 15C2:02D5:002D:089E ()
 *
 * Called From: 15C2:02D0:0020:A14A
 */
void f__15C2_02D5_002D_089E()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_flags.zf) { f__15C2_0302_000F_3790(); return; }
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_addw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_adcw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x14), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x12), emu_dx.x);
	f__15C2_031F_001F_1E58(); return;
}

/**
 * Decompiled function f__15C2_0302_000F_3790()
 *
 * @name f__15C2_0302_000F_3790
 * @implements 15C2:0302:000F:3790 ()
 *
 * Called From: 15C2:02DB:002D:089E
 */
void f__15C2_0302_000F_3790()
{
	emu_movw(&emu_ax.x, 0x30);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0311); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	f__15C2_0311_002D_9019();
}

/**
 * Decompiled function f__15C2_0311_002D_9019()
 *
 * @name f__15C2_0311_002D_9019
 * @implements 15C2:0311:002D:9019 ()
 *
 * Called From: 15C2:0311:000F:3790
 */
void f__15C2_0311_002D_9019()
{
	emu_addws(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_ax.x, 0x4154);
	emu_movw(&emu_dx.x, 0x4144);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x033E); emu_cs = 0x34B1; ovl__34B1(1);
	f__15C2_033E_0016_B1B3();
}

/**
 * Decompiled function f__15C2_031F_001F_1E58()
 *
 * @name f__15C2_031F_001F_1E58
 * @implements 15C2:031F:001F:1E58 ()
 *
 * Called From: 15C2:0300:002D:089E
 */
void f__15C2_031F_001F_1E58()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_ax.x, 0x4154);
	emu_movw(&emu_dx.x, 0x4144);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x033E); emu_cs = 0x34B1; ovl__34B1(1);
	f__15C2_033E_0016_B1B3();
}

/**
 * Decompiled function f__15C2_033E_0016_B1B3()
 *
 * @name f__15C2_033E_0016_B1B3
 * @implements 15C2:033E:0016:B1B3 ()
 *
 * Called From: 15C2:033E:001F:1E58
 * Called From: 15C2:033E:002D:9019
 */
void f__15C2_033E_0016_B1B3()
{
	emu_addws(&emu_sp, 0xE);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shrw(&emu_ax.x, 0x1);
	emu_rcrw(&emu_dx.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xE), emu_dx.x);
	f__15C2_036A_0002_0380(); return;
}

/**
 * Decompiled function f__15C2_036A_0002_0380()
 *
 * @name f__15C2_036A_0002_0380
 * @implements 15C2:036A:0002:0380 ()
 *
 * Called From: 15C2:0352:0016:B1B3
 */
void f__15C2_036A_0002_0380()
{
	f__15C2_0382_0006_072C(); return;
}

/**
 * Decompiled function f__15C2_0382_0006_072C()
 *
 * @name f__15C2_0382_0006_072C
 * @implements 15C2:0382:0006:072C ()
 *
 * Called From: 15C2:036A:0002:0380
 */
void f__15C2_0382_0006_072C()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0388); emu_cs = 0x34B1; ovl__34B1(4);
	f__15C2_0388_0007_0F0E();
}

/**
 * Decompiled function f__15C2_0388_0007_0F0E()
 *
 * @name f__15C2_0388_0007_0F0E
 * @implements 15C2:0388:0007:0F0E ()
 *
 * Called From: 15C2:0388:0006:072C
 */
void f__15C2_0388_0007_0F0E()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__15C2_00BE_0003_0474(); return;
}

/**
 * Decompiled function f__15C2_038F_0006_137A()
 *
 * @name f__15C2_038F_0006_137A
 * @implements 15C2:038F:0006:137A ()
 *
 * Called From: 15C2:00BE:0003:0474
 */
void f__15C2_038F_0006_137A()
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
 * Decompiled function f__15C2_0395_0044_6B4F()
 *
 * @name f__15C2_0395_0044_6B4F
 * @implements 15C2:0395:0044:6B4F ()
 *
 * Called From: 0C3A:0640:0039:5D97
 * Called From: 0C3A:0640:002B:AA15
 * Called From: 0C3A:067D:003D:4424
 * Called From: 0FE4:057B:0018:A435
 * Called From: 1082:0338:0018:A45D
 * Called From: 15C2:0417:0015:5122
 * Called From: 176C:00B4:003E:74D9
 * Called From: 1A34:0A77:00A3:23D3
 * Called From: 1A34:0A77:0078:9945
 * Called From: 1A34:1167:0017:F535
 * Called From: 1A34:2AE7:001F:876B
 */
void f__15C2_0395_0044_6B4F()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { emu_ip = 0x03D7; emu_last_cs = 0x15C2; emu_last_ip = 0x039E; emu_last_length = 0x0044; emu_last_crc = 0x6B4F; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0x34), 0x0);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xA), 0x11);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), 0xF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x4), emu_dx.x);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__15C2_03D9_0011_073C()
 *
 * @name f__15C2_03D9_0011_073C
 * @implements 15C2:03D9:0011:073C ()
 *
 * Called From: 0C3A:0698:001B:7808
 * Called From: 176C:00D9:0025:3797
 * Called From: B511:026B:0018:E690
 */
void f__15C2_03D9_0011_073C()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__15C2_03EA_001B_52C7(); return; }
	emu_ip = 0x0447; emu_last_cs = 0x15C2; emu_last_ip = 0x03E8; emu_last_length = 0x0011; emu_last_crc = 0x073C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_03EA_001B_52C7()
 *
 * @name f__15C2_03EA_001B_52C7
 * @implements 15C2:03EA:001B:52C7 ()
 *
 * Called From: 15C2:03E6:0011:073C
 */
void f__15C2_03EA_001B_52C7()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__15C2_0405_0015_5122(); return; }
	emu_ip = 0x0447; emu_last_cs = 0x15C2; emu_last_ip = 0x0403; emu_last_length = 0x001B; emu_last_crc = 0x52C7; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_0405_0015_5122()
 *
 * @name f__15C2_0405_0015_5122
 * @implements 15C2:0405:0015:5122 ()
 *
 * Called From: 15C2:0401:001B:52C7
 */
void f__15C2_0405_0015_5122()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x041A); f__15C2_0395_0044_6B4F();
	f__15C2_041A_0032_ACDE();
}

/**
 * Decompiled function f__15C2_041A_0032_ACDE()
 *
 * @name f__15C2_041A_0032_ACDE
 * @implements 15C2:041A:0032:ACDE ()
 *
 * Called From: 15C2:041A:0015:5122
 */
void f__15C2_041A_0032_ACDE()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x8));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_ax.x, 0x1);
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_si,  0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_si,  0x0), emu_bx.x);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__15C2_0526_000F_1707()
 *
 * @name f__15C2_0526_000F_1707
 * @implements 15C2:0526:000F:1707 ()
 *
 * Called From: 0972:095A:0010:62B2
 * Called From: 176C:06C2:0010:CDA5
 */
void f__15C2_0526_000F_1707()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__15C2_0535_000E_8509(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0557; emu_last_cs = 0x15C2; emu_last_ip = 0x0533; emu_last_length = 0x000F; emu_last_crc = 0x1707; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_0531_0004_06D8()
 *
 * @name f__15C2_0531_0004_06D8
 * @implements 15C2:0531:0004:06D8 ()
 *
 * Called From: 15C2:0541:000E:8509
 */
void f__15C2_0531_0004_06D8()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__15C2_0557_0002_00E2(); return;
}

/**
 * Decompiled function f__15C2_0533_0002_03E8()
 *
 * @name f__15C2_0533_0002_03E8
 * @implements 15C2:0533:0002:03E8 ()
 *
 * Called From: 15C2:0555:0005:1504
 */
void f__15C2_0533_0002_03E8()
{
	f__15C2_0557_0002_00E2(); return;
}

/**
 * Decompiled function f__15C2_0535_000E_8509()
 *
 * @name f__15C2_0535_000E_8509
 * @implements 15C2:0535:000E:8509 ()
 *
 * Called From: 15C2:052F:000F:1707
 */
void f__15C2_0535_000E_8509()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	if (!emu_flags.zf) { f__15C2_0543_000F_5BA0(); return; }
	f__15C2_0531_0004_06D8(); return;
}

/**
 * Decompiled function f__15C2_0543_000F_5BA0()
 *
 * @name f__15C2_0543_000F_5BA0
 * @implements 15C2:0543:000F:5BA0 ()
 *
 * Called From: 15C2:053F:000E:8509
 */
void f__15C2_0543_000F_5BA0()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	if (!emu_flags.zf) { f__15C2_0552_0005_1504(); return; }
	emu_ip = 0x0531; emu_last_cs = 0x15C2; emu_last_ip = 0x0550; emu_last_length = 0x000F; emu_last_crc = 0x5BA0; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_0552_0005_1504()
 *
 * @name f__15C2_0552_0005_1504
 * @implements 15C2:0552:0005:1504 ()
 *
 * Called From: 15C2:054E:000F:5BA0
 */
void f__15C2_0552_0005_1504()
{
	emu_movw(&emu_ax.x, 0x1);
	f__15C2_0533_0002_03E8(); return;
}

/**
 * Decompiled function f__15C2_0557_0002_00E2()
 *
 * @name f__15C2_0557_0002_00E2
 * @implements 15C2:0557:0002:00E2 ()
 *
 * Called From: 15C2:0533:0002:03E8
 * Called From: 15C2:0533:0004:06D8
 */
void f__15C2_0557_0002_00E2()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__15C2_0559_0015_6879()
 *
 * @name f__15C2_0559_0015_6879
 * @implements 15C2:0559:0015:6879 ()
 *
 * Called From: 0972:09BD:0010:6542
 * Called From: 0972:09D6:0010:6542
 * Called From: 0972:09EF:0010:6542
 * Called From: 176C:075B:0010:CA55
 * Called From: 176C:075B:0040:284C
 */
void f__15C2_0559_0015_6879()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__15C2_056E_000E_850F(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_ip = 0x0B75; emu_last_cs = 0x15C2; emu_last_ip = 0x056B; emu_last_length = 0x0015; emu_last_crc = 0x6879; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_0569_0005_0D38()
 *
 * @name f__15C2_0569_0005_0D38
 * @implements 15C2:0569:0005:0D38 ()
 *
 * Called From: 15C2:057A:000E:850F
 */
void f__15C2_0569_0005_0D38()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__15C2_0B75_0006_137A(); return;
}

/**
 * Decompiled function f__15C2_056B_0003_0758()
 *
 * @name f__15C2_056B_0003_0758
 * @implements 15C2:056B:0003:0758 ()
 *
 * Called From: 15C2:0B72:0006:2B42
 */
void f__15C2_056B_0003_0758()
{
	f__15C2_0B75_0006_137A(); return;
}

/**
 * Decompiled function f__15C2_056E_000E_850F()
 *
 * @name f__15C2_056E_000E_850F
 * @implements 15C2:056E:000E:850F ()
 *
 * Called From: 15C2:0567:0015:6879
 */
void f__15C2_056E_000E_850F()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	if (!emu_flags.zf) { f__15C2_057C_001E_E72D(); return; }
	f__15C2_0569_0005_0D38(); return;
}

/**
 * Decompiled function f__15C2_057C_001E_E72D()
 *
 * @name f__15C2_057C_001E_E72D
 * @implements 15C2:057C:001E:E72D ()
 *
 * Called From: 15C2:0578:000E:850F
 */
void f__15C2_057C_001E_E72D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_addws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x2);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x059A); emu_cs = 0x2BC0; f__2BC0_0013_000A_F542();
	f__15C2_059A_002D_C03B();
}

/**
 * Decompiled function f__15C2_059A_002D_C03B()
 *
 * @name f__15C2_059A_002D_C03B
 * @implements 15C2:059A:002D:C03B ()
 *
 * Called From: 15C2:059A:001E:E72D
 */
void f__15C2_059A_002D_C03B()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cx.l, 0x8);
	emu_shrw(&emu_ax.x, emu_cx.l);
	emu_andw(&emu_ax.x, 0x1F);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8000);
	if (emu_flags.zf) { f__15C2_05C7_0012_EB5A(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax.x, 0x7FFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	f__15C2_0602_000B_2ACA(); return;
}

/**
 * Decompiled function f__15C2_05C7_0012_EB5A()
 *
 * @name f__15C2_05C7_0012_EB5A
 * @implements 15C2:05C7:0012:EB5A ()
 *
 * Called From: 15C2:05B5:002D:C03B
 */
void f__15C2_05C7_0012_EB5A()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4000);
	if (emu_flags.zf) { f__15C2_05D9_0025_F378(); return; }
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_andb(&emu_ax.l, 0xFF);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	f__15C2_0602_000B_2ACA(); return;
}

/**
 * Decompiled function f__15C2_05D9_0025_F378()
 *
 * @name f__15C2_05D9_0025_F378
 * @implements 15C2:05D9:0025:F378 ()
 *
 * Called From: 15C2:05CC:0012:EB5A
 */
void f__15C2_05D9_0025_F378()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2000);
	if (emu_flags.zf) { emu_ip = 0x0602; emu_last_cs = 0x15C2; emu_last_ip = 0x05DE; emu_last_length = 0x0025; emu_last_crc = 0xF378; emu_call(); return; } // Jump does not resolve
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_addws(&emu_get_memory16(emu_es, emu_bx.x,  0x0), 0x2);
	emu_movw(&emu_es, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x05FE); emu_cs = 0x2BC0; f__2BC0_0013_000A_F542();
	f__15C2_05FE_000F_8AC3();
}

/**
 * Decompiled function f__15C2_05FE_000F_8AC3()
 *
 * @name f__15C2_05FE_000F_8AC3
 * @implements 15C2:05FE:000F:8AC3 ()
 *
 * Called From: 15C2:05FE:0025:F378
 */
void f__15C2_05FE_000F_8AC3()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_bx.x, 0x12);
	if ((emu_flags.cf || emu_flags.zf)) { f__15C2_060D_0007_5D22(); return; }
	emu_ip = 0x0B6C; emu_last_cs = 0x15C2; emu_last_ip = 0x060A; emu_last_length = 0x000F; emu_last_crc = 0x8AC3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_0602_000B_2ACA()
 *
 * @name f__15C2_0602_000B_2ACA
 * @implements 15C2:0602:000B:2ACA ()
 *
 * Called From: 15C2:05C5:002D:C03B
 * Called From: 15C2:05D7:0012:EB5A
 */
void f__15C2_0602_000B_2ACA()
{
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpws(&emu_bx.x, 0x12);
	if ((emu_flags.cf || emu_flags.zf)) { f__15C2_060D_0007_5D22(); return; }
	emu_ip = 0x0B6C; emu_last_cs = 0x15C2; emu_last_ip = 0x060A; emu_last_length = 0x000B; emu_last_crc = 0x2ACA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_060D_0007_5D22()
 *
 * @name f__15C2_060D_0007_5D22
 * @implements 15C2:060D:0007:5D22 ()
 *
 * Called From: 15C2:0608:000B:2ACA
 * Called From: 15C2:0608:000F:8AC3
 */
void f__15C2_060D_0007_5D22()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0xB9F);
	switch (emu_ip) {
		case 0x0614: f__15C2_0614_0023_D372(); return;
		case 0x0644: f__15C2_0644_000F_041C(); return;
		case 0x0711: f__15C2_0711_0022_1C1D(); return;
		case 0x0733: f__15C2_0733_002A_0CAA(); return;
		case 0x075D: f__15C2_075D_003B_0303(); return;
		case 0x0798: f__15C2_0798_0017_9B2B(); return;
		case 0x07AF: f__15C2_07AF_000F_0428(); return;
		case 0x084B: f__15C2_084B_0028_6F2A(); return;
		case 0x0873: f__15C2_0873_0039_FF1E(); return;
		case 0x08AC: f__15C2_08AC_0035_F30A(); return;
		case 0x08E1: f__15C2_08E1_000D_1007(); return;
		case 0x08EE: f__15C2_08EE_000D_19D3(); return;
		case 0x08FB: f__15C2_08FB_003A_F833(); return;
		case 0x0941: f__15C2_0941_0042_6E21(); return;
		case 0x0983: f__15C2_0983_002A_212E(); return;
		case 0x09E6: f__15C2_09E6_003C_FCD3(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x15C2; emu_last_ip = 0x060F; emu_last_length = 0x0007; emu_last_crc = 0x5D22;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__15C2_0614_0023_D372()
 *
 * @name f__15C2_0614_0023_D372
 * @implements 15C2:0614:0023:D372 ()
 *
 * Called From: 15C2:060F:0007:5D22
 */
void f__15C2_0614_0023_D372()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_addw(&emu_dx.x, emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	f__15C2_0B6F_0006_2B42(); return;
}

/**
 * Decompiled function f__15C2_0644_000F_041C()
 *
 * @name f__15C2_0644_000F_041C
 * @implements 15C2:0644:000F:041C ()
 *
 * Called From: 15C2:060F:0007:5D22
 */
void f__15C2_0644_000F_041C()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__15C2_0653_0028_1964(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__15C2_067B_0027_9D76(); return; }
	emu_ip = 0x06FD; emu_last_cs = 0x15C2; emu_last_ip = 0x0650; emu_last_length = 0x000F; emu_last_crc = 0x041C; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_0653_0028_1964()
 *
 * @name f__15C2_0653_0028_1964
 * @implements 15C2:0653:0028:1964 ()
 *
 * Called From: 15C2:0649:000F:041C
 */
void f__15C2_0653_0028_1964()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_decb(&emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), emu_ax.l);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x8));
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_ax.x);
	f__15C2_070E_0003_0638(); return;
}

/**
 * Decompiled function f__15C2_067B_0027_9D76()
 *
 * @name f__15C2_067B_0027_9D76
 * @implements 15C2:067B:0027:9D76 ()
 *
 * Called From: 15C2:064E:000F:041C
 */
void f__15C2_067B_0027_9D76()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_subw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_sbbw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_cs); emu_push(0x06A2); emu_cs = 0x01F7; f__01F7_04E0_0004_06F8();
	f__15C2_06A2_005B_F9E2();
}

/**
 * Decompiled function f__15C2_06A2_005B_F9E2()
 *
 * @name f__15C2_06A2_005B_F9E2
 * @implements 15C2:06A2:005B:F9E2 ()
 *
 * Called From: 15C2:06A2:0027:9D76
 */
void f__15C2_06A2_005B_F9E2()
{
	emu_incw(&emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_dx.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_decb(&emu_dx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax.x);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), emu_dx.l);
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xA));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_dx.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_decb(&emu_dx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax.x);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), emu_dx.l);
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_addb(&emu_ax.l, 0x2);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xA), emu_ax.l);
	f__15C2_070E_0003_0638(); return;
}

/**
 * Decompiled function f__15C2_070E_0003_0638()
 *
 * @name f__15C2_070E_0003_0638
 * @implements 15C2:070E:0003:0638 ()
 *
 * Called From: 15C2:0678:0028:1964
 * Called From: 15C2:06FB:005B:F9E2
 */
void f__15C2_070E_0003_0638()
{
	f__15C2_0B6F_0006_2B42(); return;
}

/**
 * Decompiled function f__15C2_0711_0022_1C1D()
 *
 * @name f__15C2_0711_0022_1C1D
 * @implements 15C2:0711:0022:1C1D ()
 *
 * Called From: 15C2:060F:0007:5D22
 */
void f__15C2_0711_0022_1C1D()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_decb(&emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), emu_ax.l);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_ax.x);
	f__15C2_0B6F_0006_2B42(); return;
}

/**
 * Decompiled function f__15C2_0733_002A_0CAA()
 *
 * @name f__15C2_0733_002A_0CAA
 * @implements 15C2:0733:002A:0CAA ()
 *
 * Called From: 15C2:060F:0007:5D22
 */
void f__15C2_0733_002A_0CAA()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_decb(&emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), emu_ax.l);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_ax.x, 0x1);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0xC));
	f__15C2_08A4_0008_3B80(); return;
}

/**
 * Decompiled function f__15C2_075D_003B_0303()
 *
 * @name f__15C2_075D_003B_0303
 * @implements 15C2:075D:003B:0303 ()
 *
 * Called From: 15C2:060F:0007:5D22
 */
void f__15C2_075D_003B_0303()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xA));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addws(&emu_dx.x, 0x2);
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_dx.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_decb(&emu_dx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax.x);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), emu_dx.l);
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	f__15C2_08D9_0008_65B4(); return;
}

/**
 * Decompiled function f__15C2_0776_0022_C8B3()
 *
 * @name f__15C2_0776_0022_C8B3
 * @implements 15C2:0776:0022:C8B3 ()
 *
 * Called From: 15C2:07AD:0017:9B2B
 */
void f__15C2_0776_0022_C8B3()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_dx.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_decb(&emu_dx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax.x);
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), emu_dx.l);
	emu_movb(&emu_ax.l, emu_dx.l);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	f__15C2_08D9_0008_65B4(); return;
}

/**
 * Decompiled function f__15C2_0798_0017_9B2B()
 *
 * @name f__15C2_0798_0017_9B2B
 * @implements 15C2:0798:0017:9B2B ()
 *
 * Called From: 15C2:060F:0007:5D22
 */
void f__15C2_0798_0017_9B2B()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xA));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_decw(&emu_dx.x);
	emu_shlw(&emu_dx.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_dx.x);
	f__15C2_0776_0022_C8B3(); return;
}

/**
 * Decompiled function f__15C2_07AF_000F_0428()
 *
 * @name f__15C2_07AF_000F_0428
 * @implements 15C2:07AF:000F:0428 ()
 *
 * Called From: 15C2:060F:0007:5D22
 */
void f__15C2_07AF_000F_0428()
{
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__15C2_07BE_0020_27CE(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { f__15C2_07DE_000D_B932(); return; }
	emu_ip = 0x0845; emu_last_cs = 0x15C2; emu_last_ip = 0x07BB; emu_last_length = 0x000F; emu_last_crc = 0x0428; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_07BE_0020_27CE()
 *
 * @name f__15C2_07BE_0020_27CE
 * @implements 15C2:07BE:0020:27CE ()
 *
 * Called From: 15C2:07B4:000F:0428
 */
void f__15C2_07BE_0020_27CE()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_ax.x);
	f__15C2_0848_0003_07DE(); return;
}

/**
 * Decompiled function f__15C2_07DE_000D_B932()
 *
 * @name f__15C2_07DE_000D_B932
 * @implements 15C2:07DE:000D:B932 ()
 *
 * Called From: 15C2:07B9:000F:0428
 */
void f__15C2_07DE_000D_B932()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), 0xF);
	if (!emu_flags.zf) { f__15C2_07EB_005A_1D52(); return; }
	emu_ip = 0x06FD; emu_last_cs = 0x15C2; emu_last_ip = 0x07E8; emu_last_length = 0x000D; emu_last_crc = 0xB932; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_07EB_005A_1D52()
 *
 * @name f__15C2_07EB_005A_1D52
 * @implements 15C2:07EB:005A:1D52 ()
 *
 * Called From: 15C2:07E6:000D:B932
 */
void f__15C2_07EB_005A_1D52()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x16));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xA), emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_addw(&emu_dx.x, emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	f__15C2_0848_0003_07DE(); return;
}

/**
 * Decompiled function f__15C2_0848_0003_07DE()
 *
 * @name f__15C2_0848_0003_07DE
 * @implements 15C2:0848:0003:07DE ()
 *
 * Called From: 15C2:07DC:0020:27CE
 * Called From: 15C2:0843:005A:1D52
 */
void f__15C2_0848_0003_07DE()
{
	f__15C2_0B6F_0006_2B42(); return;
}

/**
 * Decompiled function f__15C2_084B_0028_6F2A()
 *
 * @name f__15C2_084B_0028_6F2A
 * @implements 15C2:084B:0028:6F2A ()
 *
 * Called From: 15C2:060F:0007:5D22
 */
void f__15C2_084B_0028_6F2A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_dx.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0xC), emu_ax.x);
	f__15C2_0B6F_0006_2B42(); return;
}

/**
 * Decompiled function f__15C2_0873_0039_FF1E()
 *
 * @name f__15C2_0873_0039_FF1E
 * @implements 15C2:0873:0039:FF1E ()
 *
 * Called From: 15C2:060F:0007:5D22
 */
void f__15C2_0873_0039_FF1E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xA));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addws(&emu_dx.x, 0x2);
	emu_negw(&emu_dx.x, emu_dx.x);
	emu_addw(&emu_ax.x, emu_dx.x);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_si,  0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_si,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_si, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_si,  0x16));
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_ax.x);
	f__15C2_0B6F_0006_2B42(); return;
}

/**
 * Decompiled function f__15C2_08A4_0008_3B80()
 *
 * @name f__15C2_08A4_0008_3B80
 * @implements 15C2:08A4:0008:3B80 ()
 *
 * Called From: 15C2:075A:002A:0CAA
 */
void f__15C2_08A4_0008_3B80()
{
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_ax.x);
	f__15C2_0B6F_0006_2B42(); return;
}

/**
 * Decompiled function f__15C2_08AC_0035_F30A()
 *
 * @name f__15C2_08AC_0035_F30A
 * @implements 15C2:08AC:0035:F30A ()
 *
 * Called From: 15C2:060F:0007:5D22
 */
void f__15C2_08AC_0035_F30A()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax.x);
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xA));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_dx.x, emu_ax.x);
	emu_decw(&emu_dx.x);
	emu_shlw(&emu_dx.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_dx.x);
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_ax.x);
	f__15C2_0B6F_0006_2B42(); return;
}

/**
 * Decompiled function f__15C2_08D9_0008_65B4()
 *
 * @name f__15C2_08D9_0008_65B4
 * @implements 15C2:08D9:0008:65B4 ()
 *
 * Called From: 15C2:0795:0022:C8B3
 * Called From: 15C2:0795:003B:0303
 */
void f__15C2_08D9_0008_65B4()
{
	emu_pop(&emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_ax.x);
	f__15C2_0B6F_0006_2B42(); return;
}

/**
 * Decompiled function f__15C2_08E1_000D_1007()
 *
 * @name f__15C2_08E1_000D_1007
 * @implements 15C2:08E1:000D:1007 ()
 *
 * Called From: 15C2:060F:0007:5D22
 */
void f__15C2_08E1_000D_1007()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_addb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), emu_ax.l);
	f__15C2_0B6F_0006_2B42(); return;
}

/**
 * Decompiled function f__15C2_08EE_000D_19D3()
 *
 * @name f__15C2_08EE_000D_19D3
 * @implements 15C2:08EE:000D:19D3 ()
 *
 * Called From: 15C2:060F:0007:5D22
 */
void f__15C2_08EE_000D_19D3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_subb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), emu_ax.l);
	f__15C2_0B6F_0006_2B42(); return;
}

/**
 * Decompiled function f__15C2_08FB_003A_F833()
 *
 * @name f__15C2_08FB_003A_F833
 * @implements 15C2:08FB:003A:F833 ()
 *
 * Called From: 15C2:060F:0007:5D22
 */
void f__15C2_08FB_003A_F833()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x12));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_andw(&emu_ax.x, 0xFF);
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_ax.x, emu_cx.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_push(0x0935);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x09720A72: f__0972_0A72_000D_379A(); break;
		case 0x09720A81: f__0972_0A81_0017_BB46(); break;
		case 0x09720AFC: f__0972_0AFC_0016_ECDD(); break;
		case 0x09720C04: f__0972_0C04_0037_F372(); break;
		case 0x09720C5A: f__0972_0C5A_0015_761B(); break;
		case 0x0972137B: f__0972_137B_002B_7AF6(); break;
		case 0x097213AF: f__0972_13AF_0015_7737(); break;
		case 0x0EDB00B7: f__0EDB_00B7_003B_AC39(); break;
		case 0x0EDB00F6: f__0EDB_00F6_000C_5405(); break;
		case 0x0EDB0145: f__0EDB_0145_002F_97D3(); break;
		case 0x0EDB01F7: f__0EDB_01F7_0020_E7C9(); break;
		case 0x0EDB024B: f__0EDB_024B_001D_A7F9(); break;
		case 0x0EDB0288: f__0EDB_0288_0020_DD69(); break;
		case 0x0EDB02EA: f__0EDB_02EA_001E_EA95(); break;
		case 0x0EDB032B: f__0EDB_032B_0031_BF5C(); break;
		case 0x0EDB03B9: f__0EDB_03B9_001D_A7F9(); break;
		case 0x0EDB03EC: f__0EDB_03EC_0020_61B0(); break;
		case 0x0EDB0426: f__0EDB_0426_0027_2B03(); break;
		case 0x0EDB0456: f__0EDB_0456_0032_A8C3(); break;
		case 0x0EDB04AE: f__0EDB_04AE_0024_55E6(); break;
		case 0x0EDB050C: f__0EDB_050C_001D_A7F9(); break;
		case 0x176C0858: f__176C_0858_0023_F38F(); break;
		case 0x176C0882: f__176C_0882_0014_836D(); break;
		case 0x176C0FA2: f__176C_0FA2_0013_ABE0(); break;
		case 0x176C0FD2: f__176C_0FD2_001F_E0DE(); break;
		case 0x176C1098: f__176C_1098_0021_93F5(); break;
		case 0x176C12CE: f__176C_12CE_0011_2139(); break;
		case 0x176C1458: f__176C_1458_0023_5FB1(); break;
		case 0x176C1932: f__176C_1932_0029_BE13(); break;
		case 0x176C196C: f__176C_196C_0027_5ACE(); break;
		case 0x176C1A9F: f__176C_1A9F_0024_8118(); break;
		case 0x176C1B45: f__176C_1B45_0022_FDCD(); break;
		case 0x176C1C00: f__176C_1C00_003A_1DE4(); break;
		case 0x176C1C4F: f__176C_1C4F_0017_82CC(); break;
		case 0x176C1C6F: f__176C_1C6F_001D_A7F9(); break;
		case 0x176C1CFE: f__176C_1CFE_0021_F213(); break;
		case 0x176C1F51: f__176C_1F51_002F_ACE3(); break;
		case 0x176C2275: f__176C_2275_001D_6A3A(); break;
		case 0x176C22C4: f__176C_22C4_0019_CE9C(); break;
		case 0x176C2552: f__176C_2552_0019_EB15(); break;
		case 0x176C25A5: f__176C_25A5_002C_4EF8(); break;
		case 0x176C26CD: f__176C_26CD_0010_2FC8(); break;
		case 0x176C26E5: f__176C_26E5_0013_386B(); break;
		case 0x176C291A: f__176C_291A_0010_643C(); break;
		case 0x176C29A9: f__176C_29A9_003A_808E(); break;
		case 0x176C2BD5: f__176C_2BD5_0014_938A(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x15C2; emu_last_ip = 0x0932; emu_last_length = 0x003A; emu_last_crc = 0xF833;
			emu_call();
			return;
	}
	f__15C2_0935_000C_CCD0();
}

/**
 * Decompiled function f__15C2_0935_000C_CCD0()
 *
 * @name f__15C2_0935_000C_CCD0
 * @implements 15C2:0935:000C:CCD0 ()
 *
 * Called From: 15C2:0935:003A:F833
 */
void f__15C2_0935_000C_CCD0()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x8), emu_ax.x);
	f__15C2_0B6F_0006_2B42(); return;
}

/**
 * Decompiled function f__15C2_0941_0042_6E21()
 *
 * @name f__15C2_0941_0042_6E21
 * @implements 15C2:0941:0042:6E21 ()
 *
 * Called From: 15C2:060F:0007:5D22
 */
void f__15C2_0941_0042_6E21()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_cmpws(&emu_get_memory16(emu_es, emu_bx.x,  0x16), 0x0);
	if (!emu_flags.zf) { f__15C2_0980_0003_04FA(); return; }
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x7FFF);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_bx.x, 0x1);
	emu_addw(&emu_dx.x, emu_bx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x0), emu_dx.x);
	f__15C2_0B6F_0006_2B42(); return;
}

/**
 * Decompiled function f__15C2_0980_0003_04FA()
 *
 * @name f__15C2_0980_0003_04FA
 * @implements 15C2:0980:0003:04FA ()
 *
 * Called From: 15C2:0959:0042:6E21
 */
void f__15C2_0980_0003_04FA()
{
	f__15C2_0B6F_0006_2B42(); return;
}

/**
 * Decompiled function f__15C2_0983_002A_212E()
 *
 * @name f__15C2_0983_002A_212E
 * @implements 15C2:0983:002A:212E ()
 *
 * Called From: 15C2:060F:0007:5D22
 */
void f__15C2_0983_002A_212E()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__15C2_09AD_000B_5EC4(); return; }
	emu_cmpw(&emu_ax.x, 0x1);
	if (emu_flags.zf) { emu_ip = 0x09B8; emu_last_cs = 0x15C2; emu_last_ip = 0x09A4; emu_last_length = 0x002A; emu_last_crc = 0x212E; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x2);
	if (emu_flags.zf) { emu_ip = 0x09BE; emu_last_cs = 0x15C2; emu_last_ip = 0x09A9; emu_last_length = 0x002A; emu_last_crc = 0x212E; emu_call(); return; } // Jump does not resolve
	emu_ip = 0x09C4; emu_last_cs = 0x15C2; emu_last_ip = 0x09AB; emu_last_length = 0x002A; emu_last_crc = 0x212E; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_09AD_000B_5EC4()
 *
 * @name f__15C2_09AD_000B_5EC4
 * @implements 15C2:09AD:000B:5EC4 ()
 *
 * Called From: 15C2:099F:002A:212E
 */
void f__15C2_09AD_000B_5EC4()
{
	emu_movw(&emu_ax.x, emu_dx.x);
	emu_negw(&emu_ax.x, emu_ax.x);
	emu_sbbw(&emu_ax.x, emu_ax.x);
	emu_incw(&emu_ax.x);
	emu_movw(&emu_cx.x, emu_ax.x);
	f__15C2_09C7_001F_D383(); return;
}

/**
 * Decompiled function f__15C2_09C7_001F_D383()
 *
 * @name f__15C2_09C7_001F_D383
 * @implements 15C2:09C7:001F:D383 ()
 *
 * Called From: 15C2:09B6:000B:5EC4
 */
void f__15C2_09C7_001F_D383()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_decb(&emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), emu_ax.l);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_cx.x);
	f__15C2_0B6F_0006_2B42(); return;
}

/**
 * Decompiled function f__15C2_09E6_003C_FCD3()
 *
 * @name f__15C2_09E6_003C_FCD3
 * @implements 15C2:09E6:003C:FCD3 ()
 *
 * Called From: 15C2:060F:0007:5D22
 */
void f__15C2_09E6_003C_FCD3()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x16));
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpws(&emu_bx.x, 0x11);
	if ((emu_flags.cf || emu_flags.zf)) { f__15C2_0A22_0007_5EB2(); return; }
	emu_ip = 0x0AFB; emu_last_cs = 0x15C2; emu_last_ip = 0x0A1F; emu_last_length = 0x003C; emu_last_crc = 0xFCD3; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_0A22_0007_5EB2()
 *
 * @name f__15C2_0A22_0007_5EB2
 * @implements 15C2:0A22:0007:5EB2 ()
 *
 * Called From: 15C2:0A1D:003C:FCD3
 */
void f__15C2_0A22_0007_5EB2()
{
	emu_shlw(&emu_bx.x, 0x1);

	/* Call/jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx.x,  0xB7B);
	switch (emu_ip) {
		case 0x0A29: f__15C2_0A29_000F_0FCA(); return;
		case 0x0A3F: f__15C2_0A3F_000F_FFCA(); return;
		case 0x0A52: f__15C2_0A52_000A_D778(); return;
		case 0x0A60: f__15C2_0A60_000A_D7F8(); return;
		case 0x0A6E: f__15C2_0A6E_000A_D378(); return;
		case 0x0A7C: f__15C2_0A7C_000A_D278(); return;
		case 0x0A8A: f__15C2_0A8A_000A_D2F8(); return;
		case 0x0AA6: f__15C2_0AA6_0007_7576(); return;
		case 0x0AAD: f__15C2_0AAD_0007_7060(); return;
		case 0x0AB4: f__15C2_0AB4_0008_D0CE(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x15C2; emu_last_ip = 0x0A24; emu_last_length = 0x0007; emu_last_crc = 0x5EB2;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__15C2_0A29_000F_0FCA()
 *
 * @name f__15C2_0A29_000F_0FCA
 * @implements 15C2:0A29:000F:0FCA ()
 *
 * Called From: 15C2:0A24:0007:5EB2
 */
void f__15C2_0A29_000F_0FCA()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__15C2_0A38_0007_32D4(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__15C2_0A38_0007_32D4(); return; }
	emu_movw(&emu_ax.x, 0x1);
	emu_ip = 0x0A3A; emu_last_cs = 0x15C2; emu_last_ip = 0x0A36; emu_last_length = 0x000F; emu_last_crc = 0x0FCA; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__15C2_0A38_0007_32D4()
 *
 * @name f__15C2_0A38_0007_32D4
 * @implements 15C2:0A38:0007:32D4 ()
 *
 * Called From: 15C2:0A2B:000F:0FCA
 * Called From: 15C2:0A31:000F:0FCA
 */
void f__15C2_0A38_0007_32D4()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_di, emu_ax.x);
	f__15C2_0AFE_001E_EB7C(); return;
}

/**
 * Decompiled function f__15C2_0A3A_0005_1B54()
 *
 * @name f__15C2_0A3A_0005_1B54
 * @implements 15C2:0A3A:0005:1B54 ()
 *
 * Called From: 15C2:0A50:0002:027C
 * Called From: 15C2:0A5E:0004:0728
 * Called From: 15C2:0A5E:0002:0218
 * Called From: 15C2:0A6C:0004:0704
 * Called From: 15C2:0A6C:0002:0234
 * Called From: 15C2:0A7A:0004:07E0
 * Called From: 15C2:0A7A:0002:02D0
 * Called From: 15C2:0A88:0004:07FC
 * Called From: 15C2:0A88:0002:02CC
 * Called From: 15C2:0A96:0004:07D8
 * Called From: 15C2:0A96:0002:02E8
 * Called From: 15C2:0AAB:0007:7576
 * Called From: 15C2:0AB2:0007:7060
 * Called From: 15C2:0AB9:0008:D0CE
 */
void f__15C2_0A3A_0005_1B54()
{
	emu_movw(&emu_di, emu_ax.x);
	f__15C2_0AFE_001E_EB7C(); return;
}

/**
 * Decompiled function f__15C2_0A3F_000F_FFCA()
 *
 * @name f__15C2_0A3F_000F_FFCA
 * @implements 15C2:0A3F:000F:FFCA ()
 *
 * Called From: 15C2:0A24:0007:5EB2
 */
void f__15C2_0A3F_000F_FFCA()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__15C2_0A49_0005_14B8(); return; }
	emu_cmpws(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { emu_ip = 0x0A4E; emu_last_cs = 0x15C2; emu_last_ip = 0x0A47; emu_last_length = 0x000F; emu_last_crc = 0xFFCA; emu_call(); return; } // Jump does not resolve
	emu_movw(&emu_ax.x, 0x1);
	f__15C2_0A50_0002_027C(); return;
}

/**
 * Decompiled function f__15C2_0A49_0005_14B8()
 *
 * @name f__15C2_0A49_0005_14B8
 * @implements 15C2:0A49:0005:14B8 ()
 *
 * Called From: 15C2:0A41:000F:FFCA
 */
void f__15C2_0A49_0005_14B8()
{
	emu_movw(&emu_ax.x, 0x1);
	f__15C2_0A50_0002_027C(); return;
}

/**
 * Decompiled function f__15C2_0A50_0002_027C()
 *
 * @name f__15C2_0A50_0002_027C
 * @implements 15C2:0A50:0002:027C ()
 *
 * Called From: 15C2:0A4C:0005:14B8
 * Called From: 15C2:0A4C:000F:FFCA
 */
void f__15C2_0A50_0002_027C()
{
	f__15C2_0A3A_0005_1B54(); return;
}

/**
 * Decompiled function f__15C2_0A52_000A_D778()
 *
 * @name f__15C2_0A52_000A_D778
 * @implements 15C2:0A52:000A:D778 ()
 *
 * Called From: 15C2:0A24:0007:5EB2
 */
void f__15C2_0A52_000A_D778()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!emu_flags.zf) { f__15C2_0A5C_0004_0728(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__15C2_0A5E_0002_0218(); return;
}

/**
 * Decompiled function f__15C2_0A5C_0004_0728()
 *
 * @name f__15C2_0A5C_0004_0728
 * @implements 15C2:0A5C:0004:0728 ()
 *
 * Called From: 15C2:0A55:000A:D778
 */
void f__15C2_0A5C_0004_0728()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__15C2_0A3A_0005_1B54(); return;
}

/**
 * Decompiled function f__15C2_0A5E_0002_0218()
 *
 * @name f__15C2_0A5E_0002_0218
 * @implements 15C2:0A5E:0002:0218 ()
 *
 * Called From: 15C2:0A5A:000A:D778
 */
void f__15C2_0A5E_0002_0218()
{
	f__15C2_0A3A_0005_1B54(); return;
}

/**
 * Decompiled function f__15C2_0A60_000A_D7F8()
 *
 * @name f__15C2_0A60_000A_D7F8
 * @implements 15C2:0A60:000A:D7F8 ()
 *
 * Called From: 15C2:0A24:0007:5EB2
 */
void f__15C2_0A60_000A_D7F8()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { f__15C2_0A6A_0004_0704(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__15C2_0A6C_0002_0234(); return;
}

/**
 * Decompiled function f__15C2_0A6A_0004_0704()
 *
 * @name f__15C2_0A6A_0004_0704
 * @implements 15C2:0A6A:0004:0704 ()
 *
 * Called From: 15C2:0A63:000A:D7F8
 */
void f__15C2_0A6A_0004_0704()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__15C2_0A3A_0005_1B54(); return;
}

/**
 * Decompiled function f__15C2_0A6C_0002_0234()
 *
 * @name f__15C2_0A6C_0002_0234
 * @implements 15C2:0A6C:0002:0234 ()
 *
 * Called From: 15C2:0A68:000A:D7F8
 */
void f__15C2_0A6C_0002_0234()
{
	f__15C2_0A3A_0005_1B54(); return;
}

/**
 * Decompiled function f__15C2_0A6E_000A_D378()
 *
 * @name f__15C2_0A6E_000A_D378
 * @implements 15C2:0A6E:000A:D378 ()
 *
 * Called From: 15C2:0A24:0007:5EB2
 */
void f__15C2_0A6E_000A_D378()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!(emu_flags.sf != emu_flags.of)) { f__15C2_0A78_0004_07E0(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__15C2_0A7A_0002_02D0(); return;
}

/**
 * Decompiled function f__15C2_0A78_0004_07E0()
 *
 * @name f__15C2_0A78_0004_07E0
 * @implements 15C2:0A78:0004:07E0 ()
 *
 * Called From: 15C2:0A71:000A:D378
 */
void f__15C2_0A78_0004_07E0()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__15C2_0A3A_0005_1B54(); return;
}

/**
 * Decompiled function f__15C2_0A7A_0002_02D0()
 *
 * @name f__15C2_0A7A_0002_02D0
 * @implements 15C2:0A7A:0002:02D0 ()
 *
 * Called From: 15C2:0A76:000A:D378
 */
void f__15C2_0A7A_0002_02D0()
{
	f__15C2_0A3A_0005_1B54(); return;
}

/**
 * Decompiled function f__15C2_0A7C_000A_D278()
 *
 * @name f__15C2_0A7C_000A_D278
 * @implements 15C2:0A7C:000A:D278 ()
 *
 * Called From: 15C2:0A24:0007:5EB2
 */
void f__15C2_0A7C_000A_D278()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__15C2_0A86_0004_07FC(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__15C2_0A88_0002_02CC(); return;
}

/**
 * Decompiled function f__15C2_0A86_0004_07FC()
 *
 * @name f__15C2_0A86_0004_07FC
 * @implements 15C2:0A86:0004:07FC ()
 *
 * Called From: 15C2:0A7F:000A:D278
 */
void f__15C2_0A86_0004_07FC()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__15C2_0A3A_0005_1B54(); return;
}

/**
 * Decompiled function f__15C2_0A88_0002_02CC()
 *
 * @name f__15C2_0A88_0002_02CC
 * @implements 15C2:0A88:0002:02CC ()
 *
 * Called From: 15C2:0A84:000A:D278
 */
void f__15C2_0A88_0002_02CC()
{
	f__15C2_0A3A_0005_1B54(); return;
}

/**
 * Decompiled function f__15C2_0A8A_000A_D2F8()
 *
 * @name f__15C2_0A8A_000A_D2F8
 * @implements 15C2:0A8A:000A:D2F8 ()
 *
 * Called From: 15C2:0A24:0007:5EB2
 */
void f__15C2_0A8A_000A_D2F8()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__15C2_0A94_0004_07D8(); return; }
	emu_movw(&emu_ax.x, 0x1);
	f__15C2_0A96_0002_02E8(); return;
}

/**
 * Decompiled function f__15C2_0A94_0004_07D8()
 *
 * @name f__15C2_0A94_0004_07D8
 * @implements 15C2:0A94:0004:07D8 ()
 *
 * Called From: 15C2:0A8D:000A:D2F8
 */
void f__15C2_0A94_0004_07D8()
{
	emu_xorw(&emu_ax.x, emu_ax.x);
	f__15C2_0A3A_0005_1B54(); return;
}

/**
 * Decompiled function f__15C2_0A96_0002_02E8()
 *
 * @name f__15C2_0A96_0002_02E8
 * @implements 15C2:0A96:0002:02E8 ()
 *
 * Called From: 15C2:0A92:000A:D2F8
 */
void f__15C2_0A96_0002_02E8()
{
	f__15C2_0A3A_0005_1B54(); return;
}

/**
 * Decompiled function f__15C2_0AA6_0007_7576()
 *
 * @name f__15C2_0AA6_0007_7576
 * @implements 15C2:0AA6:0007:7576 ()
 *
 * Called From: 15C2:0A24:0007:5EB2
 */
void f__15C2_0AA6_0007_7576()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_addw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__15C2_0A3A_0005_1B54(); return;
}

/**
 * Decompiled function f__15C2_0AAD_0007_7060()
 *
 * @name f__15C2_0AAD_0007_7060
 * @implements 15C2:0AAD:0007:7060 ()
 *
 * Called From: 15C2:0A24:0007:5EB2
 */
void f__15C2_0AAD_0007_7060()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_subw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__15C2_0A3A_0005_1B54(); return;
}

/**
 * Decompiled function f__15C2_0AB4_0008_D0CE()
 *
 * @name f__15C2_0AB4_0008_D0CE
 * @implements 15C2:0AB4:0008:D0CE ()
 *
 * Called From: 15C2:0A24:0007:5EB2
 */
void f__15C2_0AB4_0008_D0CE()
{
	emu_movw(&emu_ax.x, emu_si);
	emu_imuluw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__15C2_0A3A_0005_1B54(); return;
}

/**
 * Decompiled function f__15C2_0AFE_001E_EB7C()
 *
 * @name f__15C2_0AFE_001E_EB7C
 * @implements 15C2:0AFE:001E:EB7C ()
 *
 * Called From: 15C2:0A3C:0005:1B54
 * Called From: 15C2:0A3C:0007:32D4
 */
void f__15C2_0AFE_001E_EB7C()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0xB));
	emu_decb(&emu_ax.l);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx.x,  0xB), emu_ax.l);
	emu_movws(&emu_ax.x, emu_ax.l);
	emu_shlw(&emu_ax.x, 0x1);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx.x, emu_ax.x);
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x16), emu_di);
	f__15C2_0B6F_0006_2B42(); return;
}

/**
 * Decompiled function f__15C2_0B6F_0006_2B42()
 *
 * @name f__15C2_0B6F_0006_2B42
 * @implements 15C2:0B6F:0006:2B42 ()
 *
 * Called From: 15C2:0634:0023:D372
 * Called From: 15C2:070E:0003:0638
 * Called From: 15C2:0730:0022:1C1D
 * Called From: 15C2:0848:0003:07DE
 * Called From: 15C2:0870:0028:6F2A
 * Called From: 15C2:08A9:0008:3B80
 * Called From: 15C2:08A9:0039:FF1E
 * Called From: 15C2:08DE:0008:65B4
 * Called From: 15C2:08DE:0035:F30A
 * Called From: 15C2:08EB:000D:1007
 * Called From: 15C2:08F8:000D:19D3
 * Called From: 15C2:093E:000C:CCD0
 * Called From: 15C2:0980:0042:6E21
 * Called From: 15C2:0980:0003:04FA
 * Called From: 15C2:09E3:001F:D383
 * Called From: 15C2:0B1A:001E:EB7C
 */
void f__15C2_0B6F_0006_2B42()
{
	emu_movw(&emu_ax.x, 0x1);
	f__15C2_056B_0003_0758(); return;
}

/**
 * Decompiled function f__15C2_0B75_0006_137A()
 *
 * @name f__15C2_0B75_0006_137A
 * @implements 15C2:0B75:0006:137A ()
 *
 * Called From: 15C2:056B:0003:0758
 * Called From: 15C2:056B:0005:0D38
 */
void f__15C2_0B75_0006_137A()
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
