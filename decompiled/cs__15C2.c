/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__15C2_000B_000E_6322()
 *
 * @name f__15C2_000B_000E_6322
 * @implements 15C2:000B:000E:6322 ()
 *
 * Called From: 15C2:00D2:000A:E8D9
 */
void f__15C2_000B_000E_6322()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__15C2_0019_0025_CD91(); return; }
	/* Unresolved jump */ emu_ip = 0x00AA; emu_last_cs = 0x15C2; emu_last_ip = 0x0016; emu_last_length = 0x000E; emu_last_crc = 0x6322; emu_call();
}

/**
 * Decompiled function f__15C2_0019_0025_CD91()
 *
 * @name f__15C2_0019_0025_CD91
 * @implements 15C2:0019:0025:CD91 ()
 *
 * Called From: 15C2:0014:000E:6322
 */
void f__15C2_0019_0025_CD91()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x14), 0x0);
	if (emu_flags.zf) { f__15C2_007E_002E_8193(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0040; emu_last_cs = 0x15C2; emu_last_ip = 0x002D; emu_last_length = 0x0025; emu_last_crc = 0xCD91; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x003E); emu_cs = 0x23E1; emu_ip = 0x01C2; emu_last_cs = 0x15C2; emu_last_ip = 0x0039; emu_last_length = 0x0025; emu_last_crc = 0xCD91; emu_call();
	/* Unresolved jump */ emu_ip = 0x003E; emu_last_cs = 0x15C2; emu_last_ip = 0x003E; emu_last_length = 0x0025; emu_last_crc = 0xCD91; emu_call();
}

/**
 * Decompiled function f__15C2_007E_002E_8193()
 *
 * @name f__15C2_007E_002E_8193
 * @implements 15C2:007E:002E:8193 ()
 *
 * Called From: 15C2:0021:0025:CD91
 */
void f__15C2_007E_002E_8193()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x8), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x0);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__15C2_00AC_0015_2FBF()
 *
 * @name f__15C2_00AC_0015_2FBF
 * @implements 15C2:00AC:0015:2FBF ()
 *
 * Called From: B4B8:22C7:001F:5CD7
 */
void f__15C2_00AC_0015_2FBF()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (!emu_flags.zf) { f__15C2_00C1_000A_D449(); return; }
	emu_xorw(&emu_ax, emu_ax);
	f__15C2_00BE_0003_9C13(); return;
}

/**
 * Decompiled function f__15C2_00BE_0003_9C13()
 *
 * @name f__15C2_00BE_0003_9C13
 * @implements 15C2:00BE:0003:9C13 ()
 *
 * Called From: 15C2:038C:0007:0D24
 */
void f__15C2_00BE_0003_9C13()
{
	f__15C2_038F_0006_F7CE(); return;
}

/**
 * Decompiled function f__15C2_00C1_000A_D449()
 *
 * @name f__15C2_00C1_000A_D449
 * @implements 15C2:00C1:000A:D449 ()
 *
 * Called From: 15C2:00BA:0015:2FBF
 */
void f__15C2_00C1_000A_D449()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__15C2_00CB_000A_E8D9(); return; }
	/* Unresolved jump */ emu_ip = 0x00BC; emu_last_cs = 0x15C2; emu_last_ip = 0x00C9; emu_last_length = 0x000A; emu_last_crc = 0xD449; emu_call();
}

/**
 * Decompiled function f__15C2_00CB_000A_E8D9()
 *
 * @name f__15C2_00CB_000A_E8D9
 * @implements 15C2:00CB:000A:E8D9 ()
 *
 * Called From: 15C2:00C7:000A:D449
 */
void f__15C2_00CB_000A_E8D9()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x00D5); f__15C2_000B_000E_6322();
	f__15C2_00D5_001E_CD33();
}

/**
 * Decompiled function f__15C2_00D5_001E_CD33()
 *
 * @name f__15C2_00D5_001E_CD33
 * @implements 15C2:00D5:001E:CD33 ()
 *
 */
void f__15C2_00D5_001E_CD33()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_es);
	emu_push(emu_bx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (!emu_flags.zf) { f__15C2_00F3_0024_0D45(); return; }
	emu_movw(&emu_ax, 0x1);
	f__15C2_00F5_0022_2546(); return;
}

/**
 * Decompiled function f__15C2_00F3_0024_0D45()
 *
 * @name f__15C2_00F3_0024_0D45
 * @implements 15C2:00F3:0024:0D45 ()
 *
 * Called From: 15C2:00EC:001E:CD33
 */
void f__15C2_00F3_0024_0D45()
{
	emu_xorw(&emu_ax, emu_ax);
	f__15C2_00F5_0022_2546(); return;
}

/**
 * Decompiled function f__15C2_00F5_0022_2546()
 *
 * @name f__15C2_00F5_0022_2546
 * @implements 15C2:00F5:0022:2546 ()
 *
 * Called From: 15C2:00F1:001E:CD33
 */
void f__15C2_00F5_0022_2546()
{
	emu_pop(&emu_bx);
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x14), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x10), emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0117); emu_cs = 0x1FB5; f__1FB5_15B5_0015_6A00();
	f__15C2_0117_0009_B6AB();
}

/**
 * Decompiled function f__15C2_0117_0009_B6AB()
 *
 * @name f__15C2_0117_0009_B6AB
 * @implements 15C2:0117:0009:B6AB ()
 *
 */
void f__15C2_0117_0009_B6AB()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (!emu_flags.zf) { f__15C2_0120_000B_4489(); return; }
	/* Unresolved jump */ emu_ip = 0x0389; emu_last_cs = 0x15C2; emu_last_ip = 0x011D; emu_last_length = 0x0009; emu_last_crc = 0xB6AB; emu_call();
}

/**
 * Decompiled function f__15C2_0120_000B_4489()
 *
 * @name f__15C2_0120_000B_4489
 * @implements 15C2:0120:000B:4489 ()
 *
 * Called From: 15C2:011B:0009:B6AB
 */
void f__15C2_0120_000B_4489()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x012B); emu_cs = 0x34B1; ovl__34B1(0);
	f__15C2_012B_0012_38D0();
}

/**
 * Decompiled function f__15C2_012B_0012_38D0()
 *
 * @name f__15C2_012B_0012_38D0
 * @implements 15C2:012B:0012:38D0 ()
 *
 */
void f__15C2_012B_0012_38D0()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_si, emu_ax);
	emu_movw(&emu_ax, 0x5458);
	emu_movw(&emu_dx, 0x4554);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x013D); emu_cs = 0x34B1; ovl__34B1(3);
	f__15C2_013D_0049_3C82();
}

/**
 * Decompiled function f__15C2_013D_0049_3C82()
 *
 * @name f__15C2_013D_0049_3C82
 * @implements 15C2:013D:0049:3C82 ()
 *
 */
void f__15C2_013D_0049_3C82()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_flags.zf) { f__15C2_01C3_000E_D267(); return; }
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x0186; emu_last_cs = 0x15C2; emu_last_ip = 0x0160; emu_last_length = 0x0049; emu_last_crc = 0x3C82; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x14), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x12), emu_dx);
	/* Unresolved jump */ emu_ip = 0x01A2; emu_last_cs = 0x15C2; emu_last_ip = 0x0184; emu_last_length = 0x0049; emu_last_crc = 0x3C82; emu_call();
}

/**
 * Decompiled function f__15C2_01C3_000E_D267()
 *
 * @name f__15C2_01C3_000E_D267
 * @implements 15C2:01C3:000E:D267 ()
 *
 * Called From: 15C2:0158:0049:3C82
 */
void f__15C2_01C3_000E_D267()
{
	emu_movw(&emu_ax, 0x5244);
	emu_movw(&emu_dx, 0x524F);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x01D1); emu_cs = 0x34B1; ovl__34B1(3);
	f__15C2_01D1_0020_DCD5();
}

/**
 * Decompiled function f__15C2_01D1_0020_DCD5()
 *
 * @name f__15C2_01D1_0020_DCD5
 * @implements 15C2:01D1:0020:DCD5 ()
 *
 */
void f__15C2_01D1_0020_DCD5()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__15C2_01F1_002D_3393(); return; }
	/* Unresolved jump */ emu_ip = 0x036C; emu_last_cs = 0x15C2; emu_last_ip = 0x01EE; emu_last_length = 0x0020; emu_last_crc = 0xDCD5; emu_call();
}

/**
 * Decompiled function f__15C2_01F1_002D_3393()
 *
 * @name f__15C2_01F1_002D_3393
 * @implements 15C2:01F1:002D:3393 ()
 *
 * Called From: 15C2:01EC:0020:DCD5
 */
void f__15C2_01F1_002D_3393()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_flags.zf) { f__15C2_021E_000F_92A6(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xA), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x8), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x14), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x12), emu_dx);
	f__15C2_023B_0030_B965(); return;
}

/**
 * Decompiled function f__15C2_021E_000F_92A6()
 *
 * @name f__15C2_021E_000F_92A6
 * @implements 15C2:021E:000F:92A6 ()
 *
 * Called From: 15C2:01F7:002D:3393
 */
void f__15C2_021E_000F_92A6()
{
	emu_movw(&emu_ax, 0x30);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x022D); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	f__15C2_022D_003E_C2E2();
}

/**
 * Decompiled function f__15C2_022D_003E_C2E2()
 *
 * @name f__15C2_022D_003E_C2E2
 * @implements 15C2:022D:003E:C2E2 ()
 *
 */
void f__15C2_022D_003E_C2E2()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xA), emu_dx);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x8), emu_ax);
	f__15C2_023B_0030_B965(); return;
}

/**
 * Decompiled function f__15C2_023B_0030_B965()
 *
 * @name f__15C2_023B_0030_B965
 * @implements 15C2:023B:0030:B965 ()
 *
 * Called From: 15C2:021C:002D:3393
 */
void f__15C2_023B_0030_B965()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shrw(&emu_ax, 0x1);
	emu_rcrw(&emu_dx, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_movw(&emu_ax, 0x5244);
	emu_movw(&emu_dx, 0x524F);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x026B); emu_cs = 0x34B1; ovl__34B1(1);
	f__15C2_026B_0007_ED2C();
}

/**
 * Decompiled function f__15C2_026B_0007_ED2C()
 *
 * @name f__15C2_026B_0007_ED2C
 * @implements 15C2:026B:0007:ED2C ()
 *
 */
void f__15C2_026B_0007_ED2C()
{
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_di, emu_di);
	f__15C2_0299_001C_84E5(); return;
}

/**
 * Decompiled function f__15C2_0272_0015_F826()
 *
 * @name f__15C2_0272_0015_F826
 * @implements 15C2:0272:0015:F826 ()
 *
 * Called From: 15C2:02A5:001C:84E5
 * Called From: 15C2:02A5:002E:175A
 */
void f__15C2_0272_0015_F826()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_movw(&emu_ax, emu_di);
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0287); emu_cs = 0x2BC0; f__2BC0_0013_000A_39BD();
	f__15C2_0287_002E_175A();
}

/**
 * Decompiled function f__15C2_0287_002E_175A()
 *
 * @name f__15C2_0287_002E_175A
 * @implements 15C2:0287:002E:175A ()
 *
 */
void f__15C2_0287_002E_175A()
{
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_movw(&emu_dx, emu_di);
	emu_shlw(&emu_dx, 0x1);
	emu_addw(&emu_bx, emu_dx);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_incw(&emu_di);
	f__15C2_0299_001C_84E5(); return;
}

/**
 * Decompiled function f__15C2_0299_001C_84E5()
 *
 * @name f__15C2_0299_001C_84E5
 * @implements 15C2:0299:001C:84E5 ()
 *
 * Called From: 15C2:0270:0007:ED2C
 */
void f__15C2_0299_001C_84E5()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shrw(&emu_ax, 0x1);
	emu_rcrw(&emu_dx, 0x1);
	emu_cmpw(&emu_dx, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__15C2_0272_0015_F826(); return; }
	emu_movw(&emu_ax, 0x4154);
	emu_movw(&emu_dx, 0x4144);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x02B5); emu_cs = 0x34B1; ovl__34B1(3);
	f__15C2_02B5_0020_DC54();
}

/**
 * Decompiled function f__15C2_02B5_0020_DC54()
 *
 * @name f__15C2_02B5_0020_DC54
 * @implements 15C2:02B5:0020:DC54 ()
 *
 */
void f__15C2_02B5_0020_DC54()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__15C2_02D5_002D_33F5(); return; }
	/* Unresolved jump */ emu_ip = 0x0354; emu_last_cs = 0x15C2; emu_last_ip = 0x02D2; emu_last_length = 0x0020; emu_last_crc = 0xDC54; emu_call();
}

/**
 * Decompiled function f__15C2_02D5_002D_33F5()
 *
 * @name f__15C2_02D5_002D_33F5
 * @implements 15C2:02D5:002D:33F5 ()
 *
 * Called From: 15C2:02D0:0020:DC54
 */
void f__15C2_02D5_002D_33F5()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	if (emu_flags.zf) { f__15C2_0302_000F_92A6(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x12));
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x14), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x12), emu_dx);
	f__15C2_031F_001F_C809(); return;
}

/**
 * Decompiled function f__15C2_0302_000F_92A6()
 *
 * @name f__15C2_0302_000F_92A6
 * @implements 15C2:0302:000F:92A6 ()
 *
 * Called From: 15C2:02DB:002D:33F5
 */
void f__15C2_0302_000F_92A6()
{
	emu_movw(&emu_ax, 0x30);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0311); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	f__15C2_0311_002D_06F2();
}

/**
 * Decompiled function f__15C2_0311_002D_06F2()
 *
 * @name f__15C2_0311_002D_06F2
 * @implements 15C2:0311:002D:06F2 ()
 *
 */
void f__15C2_0311_002D_06F2()
{
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4), emu_ax);
	f__15C2_031F_001F_C809(); return;
}

/**
 * Decompiled function f__15C2_031F_001F_C809()
 *
 * @name f__15C2_031F_001F_C809
 * @implements 15C2:031F:001F:C809 ()
 *
 * Called From: 15C2:0300:002D:33F5
 */
void f__15C2_031F_001F_C809()
{
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_movw(&emu_ax, 0x4154);
	emu_movw(&emu_dx, 0x4144);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x033E); emu_cs = 0x34B1; ovl__34B1(1);
	f__15C2_033E_0016_43F5();
}

/**
 * Decompiled function f__15C2_033E_0016_43F5()
 *
 * @name f__15C2_033E_0016_43F5
 * @implements 15C2:033E:0016:43F5 ()
 *
 */
void f__15C2_033E_0016_43F5()
{
	emu_addw(&emu_sp, 0xE);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_shrw(&emu_ax, 0x1);
	emu_rcrw(&emu_dx, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_dx);
	f__15C2_036A_0002_CB3A(); return;
}

/**
 * Decompiled function f__15C2_036A_0002_CB3A()
 *
 * @name f__15C2_036A_0002_CB3A
 * @implements 15C2:036A:0002:CB3A ()
 *
 * Called From: 15C2:0352:0016:43F5
 */
void f__15C2_036A_0002_CB3A()
{
	f__15C2_0382_0006_46FE(); return;
}

/**
 * Decompiled function f__15C2_0382_0006_46FE()
 *
 * @name f__15C2_0382_0006_46FE
 * @implements 15C2:0382:0006:46FE ()
 *
 * Called From: 15C2:036A:0002:CB3A
 */
void f__15C2_0382_0006_46FE()
{
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0388); emu_cs = 0x34B1; ovl__34B1(4);
	f__15C2_0388_0007_0D24();
}

/**
 * Decompiled function f__15C2_0388_0007_0D24()
 *
 * @name f__15C2_0388_0007_0D24
 * @implements 15C2:0388:0007:0D24 ()
 *
 */
void f__15C2_0388_0007_0D24()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__15C2_00BE_0003_9C13(); return;
}

/**
 * Decompiled function f__15C2_038F_0006_F7CE()
 *
 * @name f__15C2_038F_0006_F7CE
 * @implements 15C2:038F:0006:F7CE ()
 *
 * Called From: 15C2:00BE:0003:9C13
 */
void f__15C2_038F_0006_F7CE()
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
 * Decompiled function f__15C2_0395_0044_304E()
 *
 * @name f__15C2_0395_0044_304E
 * @implements 15C2:0395:0044:304E ()
 *
 * Called From: 0972:0A15:001C:5B8B
 * Called From: 0C3A:0640:002B:9E18
 * Called From: 0C3A:0640:0039:762F
 * Called From: 0C3A:067D:003D:0EC1
 * Called From: 0C3A:0E89:002F:78FA
 * Called From: 0FE4:057B:0018:8258
 * Called From: 104B:02BE:0064:D684
 * Called From: 1082:0338:0018:025E
 * Called From: 15C2:0417:0015:C65E
 * Called From: 16C5:09FD:003E:31D6
 * Called From: 16C5:0A55:003A:2375
 * Called From: 176C:00B4:003E:BA74
 * Called From: 1A34:0A77:0078:30A2
 * Called From: 1A34:0A77:00A3:1334
 * Called From: 1A34:1167:0017:75C8
 * Called From: 1A34:2AE7:001F:0A02
 */
void f__15C2_0395_0044_304E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x03D7; emu_last_cs = 0x15C2; emu_last_ip = 0x039E; emu_last_length = 0x0044; emu_last_crc = 0x304E; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0x34), 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xA), 0x11);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xB), 0xF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x4), emu_dx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__15C2_03D9_0011_D202()
 *
 * @name f__15C2_03D9_0011_D202
 * @implements 15C2:03D9:0011:D202 ()
 *
 * Called From: 0972:0A32:001D:C13E
 * Called From: 0C3A:0698:001B:2708
 * Called From: 0C3A:0EA4:001B:2708
 * Called From: 104B:02D1:0013:8AC5
 * Called From: 16C5:0A11:0014:245A
 * Called From: 16C5:0A70:001B:990F
 * Called From: 176C:00D9:0025:6898
 * Called From: B511:026B:0018:7FFC
 */
void f__15C2_03D9_0011_D202()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__15C2_03EA_001B_2DB8(); return; }
	/* Unresolved jump */ emu_ip = 0x0447; emu_last_cs = 0x15C2; emu_last_ip = 0x03E8; emu_last_length = 0x0011; emu_last_crc = 0xD202; emu_call();
}

/**
 * Decompiled function f__15C2_03EA_001B_2DB8()
 *
 * @name f__15C2_03EA_001B_2DB8
 * @implements 15C2:03EA:001B:2DB8 ()
 *
 * Called From: 15C2:03E6:0011:D202
 */
void f__15C2_03EA_001B_2DB8()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (!emu_flags.zf) { f__15C2_0405_0015_C65E(); return; }
	/* Unresolved jump */ emu_ip = 0x0447; emu_last_cs = 0x15C2; emu_last_ip = 0x0403; emu_last_length = 0x001B; emu_last_crc = 0x2DB8; emu_call();
}

/**
 * Decompiled function f__15C2_0405_0015_C65E()
 *
 * @name f__15C2_0405_0015_C65E
 * @implements 15C2:0405:0015:C65E ()
 *
 * Called From: 15C2:0401:001B:2DB8
 */
void f__15C2_0405_0015_C65E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x041A); f__15C2_0395_0044_304E();
	f__15C2_041A_0032_6C7D();
}

/**
 * Decompiled function f__15C2_041A_0032_6C7D()
 *
 * @name f__15C2_041A_0032_6C7D
 * @implements 15C2:041A:0032:6C7D ()
 *
 */
void f__15C2_041A_0032_6C7D()
{
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_movw(&emu_bx, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_si, 0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_es, emu_si, 0x0), emu_bx);
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__15C2_0526_000F_EA1E()
 *
 * @name f__15C2_0526_000F_EA1E
 * @implements 15C2:0526:000F:EA1E ()
 *
 * Called From: 0972:095A:0010:E581
 * Called From: 16C5:009D:002F:03B8
 * Called From: 176C:06C2:0010:03D5
 */
void f__15C2_0526_000F_EA1E()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__15C2_0535_000E_4CCF(); return; }
	f__15C2_0531_0004_F939(); return;
}

/**
 * Decompiled function f__15C2_0531_0004_F939()
 *
 * @name f__15C2_0531_0004_F939
 * @implements 15C2:0531:0004:F939 ()
 *
 * Called From: 15C2:0541:000E:4CCF
 */
void f__15C2_0531_0004_F939()
{
	emu_xorw(&emu_ax, emu_ax);
	f__15C2_0533_0002_D13A(); return;
}

/**
 * Decompiled function f__15C2_0533_0002_D13A()
 *
 * @name f__15C2_0533_0002_D13A
 * @implements 15C2:0533:0002:D13A ()
 *
 * Called From: 15C2:0555:0005:BBFA
 */
void f__15C2_0533_0002_D13A()
{
	f__15C2_0557_0002_2597(); return;
}

/**
 * Decompiled function f__15C2_0535_000E_4CCF()
 *
 * @name f__15C2_0535_000E_4CCF
 * @implements 15C2:0535:000E:4CCF ()
 *
 * Called From: 15C2:052F:000F:EA1E
 */
void f__15C2_0535_000E_4CCF()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	if (!emu_flags.zf) { f__15C2_0543_000F_0F10(); return; }
	f__15C2_0531_0004_F939(); return;
}

/**
 * Decompiled function f__15C2_0543_000F_0F10()
 *
 * @name f__15C2_0543_000F_0F10
 * @implements 15C2:0543:000F:0F10 ()
 *
 * Called From: 15C2:053F:000E:4CCF
 */
void f__15C2_0543_000F_0F10()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	if (!emu_flags.zf) { f__15C2_0552_0005_BBFA(); return; }
	/* Unresolved jump */ emu_ip = 0x0531; emu_last_cs = 0x15C2; emu_last_ip = 0x0550; emu_last_length = 0x000F; emu_last_crc = 0x0F10; emu_call();
}

/**
 * Decompiled function f__15C2_0552_0005_BBFA()
 *
 * @name f__15C2_0552_0005_BBFA
 * @implements 15C2:0552:0005:BBFA ()
 *
 * Called From: 15C2:054E:000F:0F10
 */
void f__15C2_0552_0005_BBFA()
{
	emu_movw(&emu_ax, 0x1);
	f__15C2_0533_0002_D13A(); return;
}

/**
 * Decompiled function f__15C2_0557_0002_2597()
 *
 * @name f__15C2_0557_0002_2597
 * @implements 15C2:0557:0002:2597 ()
 *
 * Called From: 15C2:0533:0002:D13A
 * Called From: 15C2:0533:0004:F939
 */
void f__15C2_0557_0002_2597()
{
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__15C2_0559_0015_E98A()
 *
 * @name f__15C2_0559_0015_E98A
 * @implements 15C2:0559:0015:E98A ()
 *
 * Called From: 0972:09BD:0010:1586
 * Called From: 0972:09D6:0010:1586
 * Called From: 0972:09EF:0010:1586
 * Called From: 16C5:00EA:0010:2718
 * Called From: 176C:075B:0010:F3D2
 * Called From: 176C:075B:0040:2E37
 */
void f__15C2_0559_0015_E98A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (!emu_flags.zf) { f__15C2_056E_000E_4D4F(); return; }
	f__15C2_0569_0005_DFB5(); return;
}

/**
 * Decompiled function f__15C2_0569_0005_DFB5()
 *
 * @name f__15C2_0569_0005_DFB5
 * @implements 15C2:0569:0005:DFB5 ()
 *
 * Called From: 15C2:057A:000E:4D4F
 * Called From: 15C2:070B:0011:8B08
 */
void f__15C2_0569_0005_DFB5()
{
	emu_xorw(&emu_ax, emu_ax);
	f__15C2_056B_0003_DE21(); return;
}

/**
 * Decompiled function f__15C2_056B_0003_DE21()
 *
 * @name f__15C2_056B_0003_DE21
 * @implements 15C2:056B:0003:DE21 ()
 *
 * Called From: 15C2:0B72:0006:0197
 */
void f__15C2_056B_0003_DE21()
{
	f__15C2_0B75_0006_F7CE(); return;
}

/**
 * Decompiled function f__15C2_056E_000E_4D4F()
 *
 * @name f__15C2_056E_000E_4D4F
 * @implements 15C2:056E:000E:4D4F ()
 *
 * Called From: 15C2:0567:0015:E98A
 */
void f__15C2_056E_000E_4D4F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	if (!emu_flags.zf) { f__15C2_057C_001E_C033(); return; }
	f__15C2_0569_0005_DFB5(); return;
}

/**
 * Decompiled function f__15C2_057C_001E_C033()
 *
 * @name f__15C2_057C_001E_C033
 * @implements 15C2:057C:001E:C033 ()
 *
 * Called From: 15C2:0578:000E:4D4F
 */
void f__15C2_057C_001E_C033()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x2);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_si, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x059A); emu_cs = 0x2BC0; f__2BC0_0013_000A_39BD();
	f__15C2_059A_002D_D911();
}

/**
 * Decompiled function f__15C2_059A_002D_D911()
 *
 * @name f__15C2_059A_002D_D911
 * @implements 15C2:059A:002D:D911 ()
 *
 */
void f__15C2_059A_002D_D911()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movb(&emu_cl, 0x8);
	emu_shrw(&emu_ax, emu_cl);
	emu_andw(&emu_ax, 0x1F);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8000);
	if (emu_flags.zf) { f__15C2_05C7_0012_F9D4(); return; }
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_andw(&emu_ax, 0x7FFF);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	f__15C2_0602_000B_511E(); return;
}

/**
 * Decompiled function f__15C2_05C7_0012_F9D4()
 *
 * @name f__15C2_05C7_0012_F9D4
 * @implements 15C2:05C7:0012:F9D4 ()
 *
 * Called From: 15C2:05B5:002D:D911
 */
void f__15C2_05C7_0012_F9D4()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4000);
	if (emu_flags.zf) { f__15C2_05D9_0025_FC39(); return; }
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x2));
	emu_andb(&emu_al, 0xFF);
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	f__15C2_0602_000B_511E(); return;
}

/**
 * Decompiled function f__15C2_05D9_0025_FC39()
 *
 * @name f__15C2_05D9_0025_FC39
 * @implements 15C2:05D9:0025:FC39 ()
 *
 * Called From: 15C2:05CC:0012:F9D4
 */
void f__15C2_05D9_0025_FC39()
{
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2000);
	if (emu_flags.zf) { f__15C2_0602_000B_511E(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x2);
	emu_movw(&emu_es, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_si, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x05FE); emu_cs = 0x2BC0; f__2BC0_0013_000A_39BD();
	f__15C2_05FE_000F_DE98();
}

/**
 * Decompiled function f__15C2_05FE_000F_DE98()
 *
 * @name f__15C2_05FE_000F_DE98
 * @implements 15C2:05FE:000F:DE98 ()
 *
 */
void f__15C2_05FE_000F_DE98()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	f__15C2_0602_000B_511E(); return;
}

/**
 * Decompiled function f__15C2_0602_000B_511E()
 *
 * @name f__15C2_0602_000B_511E
 * @implements 15C2:0602:000B:511E ()
 *
 * Called From: 15C2:05C5:002D:D911
 * Called From: 15C2:05D7:0012:F9D4
 * Called From: 15C2:05DE:0025:FC39
 */
void f__15C2_0602_000B_511E()
{
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_bx, 0x12);
	if ((emu_flags.cf || emu_flags.zf)) { f__15C2_060D_0007_AD99(); return; }
	f__15C2_0B6C_0003_E083(); return;
}

/**
 * Decompiled function f__15C2_060D_0007_AD99()
 *
 * @name f__15C2_060D_0007_AD99
 * @implements 15C2:060D:0007:AD99 ()
 *
 * Called From: 15C2:0608:000B:511E
 * Called From: 15C2:0608:000F:DE98
 */
void f__15C2_060D_0007_AD99()
{
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0xB9F);
	switch (emu_ip) {
		case 0x0614: f__15C2_0614_0023_B451(); return;
		case 0x0644: f__15C2_0644_000F_C918(); return;
		case 0x0711: f__15C2_0711_0022_4857(); return;
		case 0x0733: f__15C2_0733_002A_1080(); return;
		case 0x075D: f__15C2_075D_003B_FB79(); return;
		case 0x0798: f__15C2_0798_0017_8BAD(); return;
		case 0x07AF: f__15C2_07AF_000F_0913(); return;
		case 0x084B: f__15C2_084B_0028_447C(); return;
		case 0x0873: f__15C2_0873_0039_8805(); return;
		case 0x08AC: f__15C2_08AC_0035_9410(); return;
		case 0x08E1: f__15C2_08E1_000D_D331(); return;
		case 0x08EE: f__15C2_08EE_000D_330C(); return;
		case 0x08FB: f__15C2_08FB_003A_D1E0(); return;
		case 0x0941: f__15C2_0941_0042_A7C5(); return;
		case 0x0983: f__15C2_0983_002A_5FB4(); return;
		case 0x09E6: f__15C2_09E6_003C_4EA7(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x15C2; emu_last_ip = 0x060F; emu_last_length = 0x0007; emu_last_crc = 0xAD99;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__15C2_0614_0023_B451()
 *
 * @name f__15C2_0614_0023_B451
 * @implements 15C2:0614:0023:B451 ()
 *
 * Called From: 15C2:060F:0007:AD99
 */
void f__15C2_0614_0023_B451()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_bx, 0x1);
	emu_addw(&emu_dx, emu_bx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_dx);
	f__15C2_0B6F_0006_0197(); return;
}

/**
 * Decompiled function f__15C2_0644_000F_C918()
 *
 * @name f__15C2_0644_000F_C918
 * @implements 15C2:0644:000F:C918 ()
 *
 * Called From: 15C2:060F:0007:AD99
 */
void f__15C2_0644_000F_C918()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__15C2_0653_0028_E5FE(); return; }
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { f__15C2_067B_0027_82B4(); return; }
	f__15C2_06FD_0011_8B08(); return;
}

/**
 * Decompiled function f__15C2_0653_0028_E5FE()
 *
 * @name f__15C2_0653_0028_E5FE
 * @implements 15C2:0653:0028:E5FE ()
 *
 * Called From: 15C2:0649:000F:C918
 */
void f__15C2_0653_0028_E5FE()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_decb(&emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xB), emu_al);
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_si, 0x8));
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x16), emu_ax);
	f__15C2_070E_0003_9F37(); return;
}

/**
 * Decompiled function f__15C2_067B_0027_82B4()
 *
 * @name f__15C2_067B_0027_82B4
 * @implements 15C2:067B:0027:82B4 ()
 *
 * Called From: 15C2:064E:000F:C918
 */
void f__15C2_067B_0027_82B4()
{
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x2);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_subw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x06A2); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
	f__15C2_06A2_005B_8E2E();
}

/**
 * Decompiled function f__15C2_06A2_005B_8E2E()
 *
 * @name f__15C2_06A2_005B_8E2E
 * @implements 15C2:06A2:005B:8E2E ()
 *
 */
void f__15C2_06A2_005B_8E2E()
{
	emu_incw(&emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_dl, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_decb(&emu_dl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xB), emu_dl);
	emu_movb(&emu_al, emu_dl);
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_pop(&emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x16), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xA));
	emu_movws(&emu_ax, emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_dl, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_decb(&emu_dl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xB), emu_dl);
	emu_movb(&emu_al, emu_dl);
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_pop(&emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x16), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_addb(&emu_al, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xA), emu_al);
	f__15C2_070E_0003_9F37(); return;
}

/**
 * Decompiled function f__15C2_06FD_0011_8B08()
 *
 * @name f__15C2_06FD_0011_8B08
 * @implements 15C2:06FD:0011:8B08 ()
 *
 * Called From: 15C2:0650:000F:C918
 * Called From: 15C2:07E8:000D:7E3C
 * Called From: 15C2:09C4:0003:E3AD
 * Called From: 15C2:0B6C:0003:E083
 */
void f__15C2_06FD_0011_8B08()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x0);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
	f__15C2_0569_0005_DFB5(); return;
}

/**
 * Decompiled function f__15C2_070E_0003_9F37()
 *
 * @name f__15C2_070E_0003_9F37
 * @implements 15C2:070E:0003:9F37 ()
 *
 * Called From: 15C2:0678:0028:E5FE
 * Called From: 15C2:06FB:005B:8E2E
 */
void f__15C2_070E_0003_9F37()
{
	f__15C2_0B6F_0006_0197(); return;
}

/**
 * Decompiled function f__15C2_0711_0022_4857()
 *
 * @name f__15C2_0711_0022_4857
 * @implements 15C2:0711:0022:4857 ()
 *
 * Called From: 15C2:060F:0007:AD99
 */
void f__15C2_0711_0022_4857()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_decb(&emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xB), emu_al);
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x16), emu_ax);
	f__15C2_0B6F_0006_0197(); return;
}

/**
 * Decompiled function f__15C2_0733_002A_1080()
 *
 * @name f__15C2_0733_002A_1080
 * @implements 15C2:0733:002A:1080 ()
 *
 * Called From: 15C2:060F:0007:AD99
 */
void f__15C2_0733_002A_1080()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_decb(&emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xB), emu_al);
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_ax, 0x1);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_si, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_si, 0xC));
	f__15C2_08A4_0008_9D67(); return;
}

/**
 * Decompiled function f__15C2_075D_003B_FB79()
 *
 * @name f__15C2_075D_003B_FB79
 * @implements 15C2:075D:003B:FB79 ()
 *
 * Called From: 15C2:060F:0007:AD99
 */
void f__15C2_075D_003B_FB79()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xA));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_dx, 0x2);
	emu_negw(&emu_dx, emu_dx);
	emu_addw(&emu_ax, emu_dx);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	f__15C2_0776_0022_68A7(); return;
}

/**
 * Decompiled function f__15C2_0776_0022_68A7()
 *
 * @name f__15C2_0776_0022_68A7
 * @implements 15C2:0776:0022:68A7 ()
 *
 * Called From: 15C2:07AD:0017:8BAD
 */
void f__15C2_0776_0022_68A7()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_dl, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_decb(&emu_dl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xB), emu_dl);
	emu_movb(&emu_al, emu_dl);
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	f__15C2_08D9_0008_8274(); return;
}

/**
 * Decompiled function f__15C2_0798_0017_8BAD()
 *
 * @name f__15C2_0798_0017_8BAD
 * @implements 15C2:0798:0017:8BAD ()
 *
 * Called From: 15C2:060F:0007:AD99
 */
void f__15C2_0798_0017_8BAD()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xA));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_dx, emu_ax);
	emu_decw(&emu_dx);
	emu_shlw(&emu_dx, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_dx);
	f__15C2_0776_0022_68A7(); return;
}

/**
 * Decompiled function f__15C2_07AF_000F_0913()
 *
 * @name f__15C2_07AF_000F_0913
 * @implements 15C2:07AF:000F:0913 ()
 *
 * Called From: 15C2:060F:0007:AD99
 */
void f__15C2_07AF_000F_0913()
{
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__15C2_07BE_0020_0D93(); return; }
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { f__15C2_07DE_000D_7E3C(); return; }
	/* Unresolved jump */ emu_ip = 0x0845; emu_last_cs = 0x15C2; emu_last_ip = 0x07BB; emu_last_length = 0x000F; emu_last_crc = 0x0913; emu_call();
}

/**
 * Decompiled function f__15C2_07BE_0020_0D93()
 *
 * @name f__15C2_07BE_0020_0D93
 * @implements 15C2:07BE:0020:0D93 ()
 *
 * Called From: 15C2:07B4:000F:0913
 */
void f__15C2_07BE_0020_0D93()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x8), emu_ax);
	f__15C2_0848_0003_1CA9(); return;
}

/**
 * Decompiled function f__15C2_07DE_000D_7E3C()
 *
 * @name f__15C2_07DE_000D_7E3C
 * @implements 15C2:07DE:000D:7E3C ()
 *
 * Called From: 15C2:07B9:000F:0913
 */
void f__15C2_07DE_000D_7E3C()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0xB), 0xF);
	if (!emu_flags.zf) { f__15C2_07EB_005A_C12B(); return; }
	f__15C2_06FD_0011_8B08(); return;
}

/**
 * Decompiled function f__15C2_07EB_005A_C12B()
 *
 * @name f__15C2_07EB_005A_C12B
 * @implements 15C2:07EB:005A:C12B ()
 *
 * Called From: 15C2:07E6:000D:7E3C
 */
void f__15C2_07EB_005A_C12B()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x16));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xA), emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_bx, 0x1);
	emu_addw(&emu_dx, emu_bx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_dx);
	f__15C2_0848_0003_1CA9(); return;
}

/**
 * Decompiled function f__15C2_0848_0003_1CA9()
 *
 * @name f__15C2_0848_0003_1CA9
 * @implements 15C2:0848:0003:1CA9 ()
 *
 * Called From: 15C2:07DC:0020:0D93
 * Called From: 15C2:0843:005A:C12B
 */
void f__15C2_0848_0003_1CA9()
{
	f__15C2_0B6F_0006_0197(); return;
}

/**
 * Decompiled function f__15C2_084B_0028_447C()
 *
 * @name f__15C2_084B_0028_447C
 * @implements 15C2:084B:0028:447C ()
 *
 * Called From: 15C2:060F:0007:AD99
 */
void f__15C2_084B_0028_447C()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_dx, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_dx);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_ax);
	f__15C2_0B6F_0006_0197(); return;
}

/**
 * Decompiled function f__15C2_0873_0039_8805()
 *
 * @name f__15C2_0873_0039_8805
 * @implements 15C2:0873:0039:8805 ()
 *
 * Called From: 15C2:060F:0007:AD99
 */
void f__15C2_0873_0039_8805()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xA));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_dx, 0x2);
	emu_negw(&emu_dx, emu_dx);
	emu_addw(&emu_ax, emu_dx);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_si, 0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_si, 0xB));
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_si, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_si, 0x16));
	f__15C2_08A4_0008_9D67(); return;
}

/**
 * Decompiled function f__15C2_08A4_0008_9D67()
 *
 * @name f__15C2_08A4_0008_9D67
 * @implements 15C2:08A4:0008:9D67 ()
 *
 * Called From: 15C2:075A:002A:1080
 */
void f__15C2_08A4_0008_9D67()
{
	emu_pop(&emu_es);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x16), emu_ax);
	f__15C2_0B6F_0006_0197(); return;
}

/**
 * Decompiled function f__15C2_08AC_0035_9410()
 *
 * @name f__15C2_08AC_0035_9410
 * @implements 15C2:08AC:0035:9410 ()
 *
 * Called From: 15C2:060F:0007:AD99
 */
void f__15C2_08AC_0035_9410()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xA));
	emu_movws(&emu_ax, emu_al);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_addw(&emu_dx, emu_ax);
	emu_decw(&emu_dx);
	emu_shlw(&emu_dx, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_dx);
	f__15C2_08D9_0008_8274(); return;
}

/**
 * Decompiled function f__15C2_08D9_0008_8274()
 *
 * @name f__15C2_08D9_0008_8274
 * @implements 15C2:08D9:0008:8274 ()
 *
 * Called From: 15C2:0795:0022:68A7
 * Called From: 15C2:0795:003B:FB79
 */
void f__15C2_08D9_0008_8274()
{
	emu_pop(&emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x16), emu_ax);
	f__15C2_0B6F_0006_0197(); return;
}

/**
 * Decompiled function f__15C2_08E1_000D_D331()
 *
 * @name f__15C2_08E1_000D_D331
 * @implements 15C2:08E1:000D:D331 ()
 *
 * Called From: 15C2:060F:0007:AD99
 */
void f__15C2_08E1_000D_D331()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_addb(&emu_get_memory8(emu_es, emu_bx, 0xB), emu_al);
	f__15C2_0B6F_0006_0197(); return;
}

/**
 * Decompiled function f__15C2_08EE_000D_330C()
 *
 * @name f__15C2_08EE_000D_330C
 * @implements 15C2:08EE:000D:330C ()
 *
 * Called From: 15C2:060F:0007:AD99
 */
void f__15C2_08EE_000D_330C()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_subb(&emu_get_memory8(emu_es, emu_bx, 0xB), emu_al);
	f__15C2_0B6F_0006_0197(); return;
}

/**
 * Decompiled function f__15C2_08FB_003A_D1E0()
 *
 * @name f__15C2_08FB_003A_D1E0
 * @implements 15C2:08FB:003A:D1E0 ()
 *
 * Called From: 15C2:060F:0007:AD99
 */
void f__15C2_08FB_003A_D1E0()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_andw(&emu_ax, 0xFF);
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_push(0x0935);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x09720A72: f__0972_0A72_000D_024E(); break;
		case 0x09720A81: f__0972_0A81_0017_2EC7(); break;
		case 0x09720AFC: f__0972_0AFC_0016_0DC9(); break;
		case 0x09720C04: f__0972_0C04_0037_B310(); break;
		case 0x09720C5A: f__0972_0C5A_0015_E00A(); break;
		case 0x09720E87: f__0972_0E87_0047_4065(); break;
		case 0x09721004: f__0972_1004_0029_E69D(); break;
		case 0x097211B9: f__0972_11B9_0020_8DC9(); break;
		case 0x0972121E: f__0972_121E_0030_5DAA(); break;
		case 0x0972137B: f__0972_137B_002B_A9E3(); break;
		case 0x097213AF: f__0972_13AF_0015_619A(); break;
		case 0x09721524: f__0972_1524_0018_014D(); break;
		case 0x097215A2: f__0972_15A2_0019_AB1E(); break;
		case 0x0EDB00B7: f__0EDB_00B7_003B_92E3(); break;
		case 0x0EDB00F6: f__0EDB_00F6_000C_3B74(); break;
		case 0x0EDB0145: f__0EDB_0145_002F_C125(); break;
		case 0x0EDB01F7: f__0EDB_01F7_0020_4DC9(); break;
		case 0x0EDB024B: f__0EDB_024B_001D_2E46(); break;
		case 0x0EDB0288: f__0EDB_0288_0020_3D83(); break;
		case 0x0EDB02EA: f__0EDB_02EA_001E_F83C(); break;
		case 0x0EDB032B: f__0EDB_032B_0031_E91B(); break;
		case 0x0EDB03B9: f__0EDB_03B9_001D_2E46(); break;
		case 0x0EDB03EC: f__0EDB_03EC_0020_629E(); break;
		case 0x0EDB0426: f__0EDB_0426_0027_711D(); break;
		case 0x0EDB0456: f__0EDB_0456_0032_B7E5(); break;
		case 0x0EDB04AE: f__0EDB_04AE_0024_408E(); break;
		case 0x0EDB050C: f__0EDB_050C_001D_2E46(); break;
		case 0x16C501EF: f__16C5_01EF_000D_1984(); break;
		case 0x16C501FE: f__16C5_01FE_000D_19C4(); break;
		case 0x16C5020D: f__16C5_020D_000D_1A44(); break;
		case 0x16C5021C: f__16C5_021C_003A_2718(); break;
		case 0x16C503C3: f__16C5_03C3_002D_24E5(); break;
		case 0x16C50543: f__16C5_0543_0034_CA88(); break;
		case 0x16C506C6: f__16C5_06C6_001D_94A6(); break;
		case 0x16C50788: f__16C5_0788_0018_4AA5(); break;
		case 0x16C509C4: f__16C5_09C4_003E_31D6(); break;
		case 0x16C50A20: f__16C5_0A20_003A_2375(); break;
		case 0x176C0858: f__176C_0858_0023_E780(); break;
		case 0x176C0882: f__176C_0882_0014_0C6A(); break;
		case 0x176C0BC3: f__176C_0BC3_002A_A6DE(); break;
		case 0x176C0FA2: f__176C_0FA2_0013_6D6D(); break;
		case 0x176C0FD2: f__176C_0FD2_001F_B15D(); break;
		case 0x176C105E: f__176C_105E_0031_8B3F(); break;
		case 0x176C1098: f__176C_1098_0021_667D(); break;
		case 0x176C12CE: f__176C_12CE_0011_A5C5(); break;
		case 0x176C1382: f__176C_1382_0013_AA74(); break;
		case 0x176C1458: f__176C_1458_0023_356A(); break;
		case 0x176C1932: f__176C_1932_0029_D0CC(); break;
		case 0x176C196C: f__176C_196C_0027_D87A(); break;
		case 0x176C1A40: f__176C_1A40_0020_8DC9(); break;
		case 0x176C1A9F: f__176C_1A9F_0024_813F(); break;
		case 0x176C1B45: f__176C_1B45_0022_208C(); break;
		case 0x176C1C00: f__176C_1C00_003A_E6C7(); break;
		case 0x176C1C4F: f__176C_1C4F_0017_E375(); break;
		case 0x176C1C6F: f__176C_1C6F_001D_2E46(); break;
		case 0x176C1CFE: f__176C_1CFE_0021_29C8(); break;
		case 0x176C1F51: f__176C_1F51_002F_CE9F(); break;
		case 0x176C2275: f__176C_2275_001D_D22D(); break;
		case 0x176C22C4: f__176C_22C4_0019_80C9(); break;
		case 0x176C23CC: f__176C_23CC_000B_4119(); break;
		case 0x176C246C: f__176C_246C_0015_C163(); break;
		case 0x176C2552: f__176C_2552_0019_4894(); break;
		case 0x176C25A5: f__176C_25A5_002C_AC04(); break;
		case 0x176C2638: f__176C_2638_0017_CF4B(); break;
		case 0x176C26CD: f__176C_26CD_0010_041C(); break;
		case 0x176C26E5: f__176C_26E5_0013_FF24(); break;
		case 0x176C27A4: f__176C_27A4_0021_7EE9(); break;
		case 0x176C28B1: f__176C_28B1_0024_58C9(); break;
		case 0x176C291A: f__176C_291A_0010_8A93(); break;
		case 0x176C29A9: f__176C_29A9_003A_8DEF(); break;
		case 0x176C2B97: f__176C_2B97_0013_B226(); break;
		case 0x176C2BD5: f__176C_2BD5_0014_2C56(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x15C2; emu_last_ip = 0x0932; emu_last_length = 0x003A; emu_last_crc = 0xD1E0;
			emu_call();
			return;
	}
	f__15C2_0935_000C_28E9();
}

/**
 * Decompiled function f__15C2_0935_000C_28E9()
 *
 * @name f__15C2_0935_000C_28E9
 * @implements 15C2:0935:000C:28E9 ()
 *
 */
void f__15C2_0935_000C_28E9()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x8), emu_ax);
	f__15C2_0B6F_0006_0197(); return;
}

/**
 * Decompiled function f__15C2_0941_0042_A7C5()
 *
 * @name f__15C2_0941_0042_A7C5
 * @implements 15C2:0941:0042:A7C5 ()
 *
 * Called From: 15C2:060F:0007:AD99
 */
void f__15C2_0941_0042_A7C5()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x16), 0x0);
	if (!emu_flags.zf) { f__15C2_0980_0003_1D9B(); return; }
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x7FFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_shlw(&emu_bx, 0x1);
	emu_addw(&emu_dx, emu_bx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_dx);
	f__15C2_0980_0003_1D9B(); return;
}

/**
 * Decompiled function f__15C2_0980_0003_1D9B()
 *
 * @name f__15C2_0980_0003_1D9B
 * @implements 15C2:0980:0003:1D9B ()
 *
 * Called From: 15C2:0959:0042:A7C5
 */
void f__15C2_0980_0003_1D9B()
{
	f__15C2_0B6F_0006_0197(); return;
}

/**
 * Decompiled function f__15C2_0983_002A_5FB4()
 *
 * @name f__15C2_0983_002A_5FB4
 * @implements 15C2:0983:002A:5FB4 ()
 *
 * Called From: 15C2:060F:0007:AD99
 */
void f__15C2_0983_002A_5FB4()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__15C2_09AD_000B_646D(); return; }
	emu_cmpw(&emu_ax, 0x1);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09B8; emu_last_cs = 0x15C2; emu_last_ip = 0x09A4; emu_last_length = 0x002A; emu_last_crc = 0x5FB4; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x2);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x09BE; emu_last_cs = 0x15C2; emu_last_ip = 0x09A9; emu_last_length = 0x002A; emu_last_crc = 0x5FB4; emu_call(); return; }
	f__15C2_09C4_0003_E3AD(); return;
}

/**
 * Decompiled function f__15C2_09AD_000B_646D()
 *
 * @name f__15C2_09AD_000B_646D
 * @implements 15C2:09AD:000B:646D ()
 *
 * Called From: 15C2:099F:002A:5FB4
 */
void f__15C2_09AD_000B_646D()
{
	emu_movw(&emu_ax, emu_dx);
	emu_negw(&emu_ax, emu_ax);
	emu_sbbw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
	emu_movw(&emu_cx, emu_ax);
	f__15C2_09C7_001F_7DFA(); return;
}

/**
 * Decompiled function f__15C2_09C4_0003_E3AD()
 *
 * @name f__15C2_09C4_0003_E3AD
 * @implements 15C2:09C4:0003:E3AD ()
 *
 * Called From: 15C2:09AB:002A:5FB4
 */
void f__15C2_09C4_0003_E3AD()
{
	f__15C2_06FD_0011_8B08(); return;
}

/**
 * Decompiled function f__15C2_09C7_001F_7DFA()
 *
 * @name f__15C2_09C7_001F_7DFA
 * @implements 15C2:09C7:001F:7DFA ()
 *
 * Called From: 15C2:09B6:000B:646D
 */
void f__15C2_09C7_001F_7DFA()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_decb(&emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xB), emu_al);
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x16), emu_cx);
	f__15C2_0B6F_0006_0197(); return;
}

/**
 * Decompiled function f__15C2_09E6_003C_4EA7()
 *
 * @name f__15C2_09E6_003C_4EA7
 * @implements 15C2:09E6:003C:4EA7 ()
 *
 * Called From: 15C2:060F:0007:AD99
 */
void f__15C2_09E6_003C_4EA7()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_bx, 0x11);
	if ((emu_flags.cf || emu_flags.zf)) { f__15C2_0A22_0007_ADA0(); return; }
	/* Unresolved jump */ emu_ip = 0x0AFB; emu_last_cs = 0x15C2; emu_last_ip = 0x0A1F; emu_last_length = 0x003C; emu_last_crc = 0x4EA7; emu_call();
}

/**
 * Decompiled function f__15C2_0A22_0007_ADA0()
 *
 * @name f__15C2_0A22_0007_ADA0
 * @implements 15C2:0A22:0007:ADA0 ()
 *
 * Called From: 15C2:0A1D:003C:4EA7
 */
void f__15C2_0A22_0007_ADA0()
{
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0xB7B);
	switch (emu_ip) {
		case 0x0A29: f__15C2_0A29_000F_0A95(); return;
		case 0x0A3F: f__15C2_0A3F_000F_0245(); return;
		case 0x0A52: f__15C2_0A52_000A_36EB(); return;
		case 0x0A60: f__15C2_0A60_000A_36E9(); return;
		case 0x0A6E: f__15C2_0A6E_000A_36FB(); return;
		case 0x0A7C: f__15C2_0A7C_000A_36FF(); return;
		case 0x0A8A: f__15C2_0A8A_000A_36FD(); return;
		case 0x0A98: f__15C2_0A98_000A_36F9(); return;
		case 0x0AA6: f__15C2_0AA6_0007_E0B3(); return;
		case 0x0AAD: f__15C2_0AAD_0007_E473(); return;
		case 0x0AB4: f__15C2_0AB4_0008_374F(); return;
		case 0x0AC5: f__15C2_0AC5_000A_6C11(); return;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x15C2; emu_last_ip = 0x0A24; emu_last_length = 0x0007; emu_last_crc = 0xADA0;
			emu_call();
			return;
	}
}

/**
 * Decompiled function f__15C2_0A29_000F_0A95()
 *
 * @name f__15C2_0A29_000F_0A95
 * @implements 15C2:0A29:000F:0A95 ()
 *
 * Called From: 15C2:0A24:0007:ADA0
 */
void f__15C2_0A29_000F_0A95()
{
	emu_orw(&emu_si, emu_si);
	if (emu_flags.zf) { f__15C2_0A38_0007_593D(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__15C2_0A38_0007_593D(); return; }
	emu_movw(&emu_ax, 0x1);
	f__15C2_0A3A_0005_5958(); return;
}

/**
 * Decompiled function f__15C2_0A38_0007_593D()
 *
 * @name f__15C2_0A38_0007_593D
 * @implements 15C2:0A38:0007:593D ()
 *
 * Called From: 15C2:0A2B:000F:0A95
 * Called From: 15C2:0A31:000F:0A95
 */
void f__15C2_0A38_0007_593D()
{
	emu_xorw(&emu_ax, emu_ax);
	f__15C2_0A3A_0005_5958(); return;
}

/**
 * Decompiled function f__15C2_0A3A_0005_5958()
 *
 * @name f__15C2_0A3A_0005_5958
 * @implements 15C2:0A3A:0005:5958 ()
 *
 * Called From: 15C2:0A36:000F:0A95
 * Called From: 15C2:0A50:0002:B43A
 * Called From: 15C2:0A50:0004:9C39
 * Called From: 15C2:0A5E:0004:8539
 * Called From: 15C2:0A5E:0002:AD3A
 * Called From: 15C2:0A6C:0004:8E39
 * Called From: 15C2:0A6C:0002:A63A
 * Called From: 15C2:0A7A:0004:B739
 * Called From: 15C2:0A7A:0002:9F3A
 * Called From: 15C2:0A88:0004:B039
 * Called From: 15C2:0A88:0002:983A
 * Called From: 15C2:0A96:0004:B939
 * Called From: 15C2:0A96:0002:913A
 * Called From: 15C2:0AA4:0004:A239
 * Called From: 15C2:0AA4:0002:8A3A
 * Called From: 15C2:0AAB:0007:E0B3
 * Called From: 15C2:0AB2:0007:E473
 * Called From: 15C2:0AB9:0008:374F
 * Called From: 15C2:0ACC:000A:6C11
 */
void f__15C2_0A3A_0005_5958()
{
	emu_movw(&emu_di, emu_ax);
	f__15C2_0AFE_001E_19F9(); return;
}

/**
 * Decompiled function f__15C2_0A3F_000F_0245()
 *
 * @name f__15C2_0A3F_000F_0245
 * @implements 15C2:0A3F:000F:0245 ()
 *
 * Called From: 15C2:0A24:0007:ADA0
 */
void f__15C2_0A3F_000F_0245()
{
	emu_orw(&emu_si, emu_si);
	if (!emu_flags.zf) { f__15C2_0A49_0005_D4FA(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_flags.zf) { f__15C2_0A4E_0004_9C39(); return; }
	f__15C2_0A49_0005_D4FA(); return;
}

/**
 * Decompiled function f__15C2_0A49_0005_D4FA()
 *
 * @name f__15C2_0A49_0005_D4FA
 * @implements 15C2:0A49:0005:D4FA ()
 *
 * Called From: 15C2:0A41:000F:0245
 */
void f__15C2_0A49_0005_D4FA()
{
	emu_movw(&emu_ax, 0x1);
	f__15C2_0A50_0002_B43A(); return;
}

/**
 * Decompiled function f__15C2_0A4E_0004_9C39()
 *
 * @name f__15C2_0A4E_0004_9C39
 * @implements 15C2:0A4E:0004:9C39 ()
 *
 * Called From: 15C2:0A47:000F:0245
 */
void f__15C2_0A4E_0004_9C39()
{
	emu_xorw(&emu_ax, emu_ax);
	f__15C2_0A50_0002_B43A(); return;
}

/**
 * Decompiled function f__15C2_0A50_0002_B43A()
 *
 * @name f__15C2_0A50_0002_B43A
 * @implements 15C2:0A50:0002:B43A ()
 *
 * Called From: 15C2:0A4C:0005:D4FA
 * Called From: 15C2:0A4C:000F:0245
 */
void f__15C2_0A50_0002_B43A()
{
	f__15C2_0A3A_0005_5958(); return;
}

/**
 * Decompiled function f__15C2_0A52_000A_36EB()
 *
 * @name f__15C2_0A52_000A_36EB
 * @implements 15C2:0A52:000A:36EB ()
 *
 * Called From: 15C2:0A24:0007:ADA0
 */
void f__15C2_0A52_000A_36EB()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!emu_flags.zf) { f__15C2_0A5C_0004_8539(); return; }
	emu_movw(&emu_ax, 0x1);
	f__15C2_0A5E_0002_AD3A(); return;
}

/**
 * Decompiled function f__15C2_0A5C_0004_8539()
 *
 * @name f__15C2_0A5C_0004_8539
 * @implements 15C2:0A5C:0004:8539 ()
 *
 * Called From: 15C2:0A55:000A:36EB
 */
void f__15C2_0A5C_0004_8539()
{
	emu_xorw(&emu_ax, emu_ax);
	f__15C2_0A5E_0002_AD3A(); return;
}

/**
 * Decompiled function f__15C2_0A5E_0002_AD3A()
 *
 * @name f__15C2_0A5E_0002_AD3A
 * @implements 15C2:0A5E:0002:AD3A ()
 *
 * Called From: 15C2:0A5A:000A:36EB
 */
void f__15C2_0A5E_0002_AD3A()
{
	f__15C2_0A3A_0005_5958(); return;
}

/**
 * Decompiled function f__15C2_0A60_000A_36E9()
 *
 * @name f__15C2_0A60_000A_36E9
 * @implements 15C2:0A60:000A:36E9 ()
 *
 * Called From: 15C2:0A24:0007:ADA0
 */
void f__15C2_0A60_000A_36E9()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_flags.zf) { f__15C2_0A6A_0004_8E39(); return; }
	emu_movw(&emu_ax, 0x1);
	f__15C2_0A6C_0002_A63A(); return;
}

/**
 * Decompiled function f__15C2_0A6A_0004_8E39()
 *
 * @name f__15C2_0A6A_0004_8E39
 * @implements 15C2:0A6A:0004:8E39 ()
 *
 * Called From: 15C2:0A63:000A:36E9
 */
void f__15C2_0A6A_0004_8E39()
{
	emu_xorw(&emu_ax, emu_ax);
	f__15C2_0A6C_0002_A63A(); return;
}

/**
 * Decompiled function f__15C2_0A6C_0002_A63A()
 *
 * @name f__15C2_0A6C_0002_A63A
 * @implements 15C2:0A6C:0002:A63A ()
 *
 * Called From: 15C2:0A68:000A:36E9
 */
void f__15C2_0A6C_0002_A63A()
{
	f__15C2_0A3A_0005_5958(); return;
}

/**
 * Decompiled function f__15C2_0A6E_000A_36FB()
 *
 * @name f__15C2_0A6E_000A_36FB
 * @implements 15C2:0A6E:000A:36FB ()
 *
 * Called From: 15C2:0A24:0007:ADA0
 */
void f__15C2_0A6E_000A_36FB()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!(emu_flags.sf != emu_flags.of)) { f__15C2_0A78_0004_B739(); return; }
	emu_movw(&emu_ax, 0x1);
	f__15C2_0A7A_0002_9F3A(); return;
}

/**
 * Decompiled function f__15C2_0A78_0004_B739()
 *
 * @name f__15C2_0A78_0004_B739
 * @implements 15C2:0A78:0004:B739 ()
 *
 * Called From: 15C2:0A71:000A:36FB
 */
void f__15C2_0A78_0004_B739()
{
	emu_xorw(&emu_ax, emu_ax);
	f__15C2_0A7A_0002_9F3A(); return;
}

/**
 * Decompiled function f__15C2_0A7A_0002_9F3A()
 *
 * @name f__15C2_0A7A_0002_9F3A
 * @implements 15C2:0A7A:0002:9F3A ()
 *
 * Called From: 15C2:0A76:000A:36FB
 */
void f__15C2_0A7A_0002_9F3A()
{
	f__15C2_0A3A_0005_5958(); return;
}

/**
 * Decompiled function f__15C2_0A7C_000A_36FF()
 *
 * @name f__15C2_0A7C_000A_36FF
 * @implements 15C2:0A7C:000A:36FF ()
 *
 * Called From: 15C2:0A24:0007:ADA0
 */
void f__15C2_0A7C_000A_36FF()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__15C2_0A86_0004_B039(); return; }
	emu_movw(&emu_ax, 0x1);
	f__15C2_0A88_0002_983A(); return;
}

/**
 * Decompiled function f__15C2_0A86_0004_B039()
 *
 * @name f__15C2_0A86_0004_B039
 * @implements 15C2:0A86:0004:B039 ()
 *
 * Called From: 15C2:0A7F:000A:36FF
 */
void f__15C2_0A86_0004_B039()
{
	emu_xorw(&emu_ax, emu_ax);
	f__15C2_0A88_0002_983A(); return;
}

/**
 * Decompiled function f__15C2_0A88_0002_983A()
 *
 * @name f__15C2_0A88_0002_983A
 * @implements 15C2:0A88:0002:983A ()
 *
 * Called From: 15C2:0A84:000A:36FF
 */
void f__15C2_0A88_0002_983A()
{
	f__15C2_0A3A_0005_5958(); return;
}

/**
 * Decompiled function f__15C2_0A8A_000A_36FD()
 *
 * @name f__15C2_0A8A_000A_36FD
 * @implements 15C2:0A8A:000A:36FD ()
 *
 * Called From: 15C2:0A24:0007:ADA0
 */
void f__15C2_0A8A_000A_36FD()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if ((emu_flags.zf || emu_flags.sf != emu_flags.of)) { f__15C2_0A94_0004_B939(); return; }
	emu_movw(&emu_ax, 0x1);
	f__15C2_0A96_0002_913A(); return;
}

/**
 * Decompiled function f__15C2_0A94_0004_B939()
 *
 * @name f__15C2_0A94_0004_B939
 * @implements 15C2:0A94:0004:B939 ()
 *
 * Called From: 15C2:0A8D:000A:36FD
 */
void f__15C2_0A94_0004_B939()
{
	emu_xorw(&emu_ax, emu_ax);
	f__15C2_0A96_0002_913A(); return;
}

/**
 * Decompiled function f__15C2_0A96_0002_913A()
 *
 * @name f__15C2_0A96_0002_913A
 * @implements 15C2:0A96:0002:913A ()
 *
 * Called From: 15C2:0A92:000A:36FD
 */
void f__15C2_0A96_0002_913A()
{
	f__15C2_0A3A_0005_5958(); return;
}

/**
 * Decompiled function f__15C2_0A98_000A_36F9()
 *
 * @name f__15C2_0A98_000A_36F9
 * @implements 15C2:0A98:000A:36F9 ()
 *
 * Called From: 15C2:0A24:0007:ADA0
 */
void f__15C2_0A98_000A_36F9()
{
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if ((emu_flags.sf != emu_flags.of)) { f__15C2_0AA2_0004_A239(); return; }
	emu_movw(&emu_ax, 0x1);
	f__15C2_0AA4_0002_8A3A(); return;
}

/**
 * Decompiled function f__15C2_0AA2_0004_A239()
 *
 * @name f__15C2_0AA2_0004_A239
 * @implements 15C2:0AA2:0004:A239 ()
 *
 * Called From: 15C2:0A9B:000A:36F9
 */
void f__15C2_0AA2_0004_A239()
{
	emu_xorw(&emu_ax, emu_ax);
	f__15C2_0AA4_0002_8A3A(); return;
}

/**
 * Decompiled function f__15C2_0AA4_0002_8A3A()
 *
 * @name f__15C2_0AA4_0002_8A3A
 * @implements 15C2:0AA4:0002:8A3A ()
 *
 * Called From: 15C2:0AA0:000A:36F9
 */
void f__15C2_0AA4_0002_8A3A()
{
	f__15C2_0A3A_0005_5958(); return;
}

/**
 * Decompiled function f__15C2_0AA6_0007_E0B3()
 *
 * @name f__15C2_0AA6_0007_E0B3
 * @implements 15C2:0AA6:0007:E0B3 ()
 *
 * Called From: 15C2:0A24:0007:ADA0
 */
void f__15C2_0AA6_0007_E0B3()
{
	emu_movw(&emu_ax, emu_si);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__15C2_0A3A_0005_5958(); return;
}

/**
 * Decompiled function f__15C2_0AAD_0007_E473()
 *
 * @name f__15C2_0AAD_0007_E473
 * @implements 15C2:0AAD:0007:E473 ()
 *
 * Called From: 15C2:0A24:0007:ADA0
 */
void f__15C2_0AAD_0007_E473()
{
	emu_movw(&emu_ax, emu_si);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__15C2_0A3A_0005_5958(); return;
}

/**
 * Decompiled function f__15C2_0AB4_0008_374F()
 *
 * @name f__15C2_0AB4_0008_374F
 * @implements 15C2:0AB4:0008:374F ()
 *
 * Called From: 15C2:0A24:0007:ADA0
 */
void f__15C2_0AB4_0008_374F()
{
	emu_movw(&emu_ax, emu_si);
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__15C2_0A3A_0005_5958(); return;
}

/**
 * Decompiled function f__15C2_0AC5_000A_6C11()
 *
 * @name f__15C2_0AC5_000A_6C11
 * @implements 15C2:0AC5:000A:6C11 ()
 *
 * Called From: 15C2:0A24:0007:ADA0
 */
void f__15C2_0AC5_000A_6C11()
{
	emu_movw(&emu_ax, emu_si);
	emu_movb(&emu_cl, emu_get_memory8(emu_ss, emu_bp, -0x8));
	emu_sarw(&emu_ax, emu_cl);
	f__15C2_0A3A_0005_5958(); return;
}

/**
 * Decompiled function f__15C2_0AFE_001E_19F9()
 *
 * @name f__15C2_0AFE_001E_19F9
 * @implements 15C2:0AFE:001E:19F9 ()
 *
 * Called From: 15C2:0A3C:0005:5958
 * Called From: 15C2:0A3C:0007:593D
 */
void f__15C2_0AFE_001E_19F9()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0xB));
	emu_decb(&emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movb(&emu_get_memory8(emu_es, emu_bx, 0xB), emu_al);
	emu_movws(&emu_ax, emu_al);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x16), emu_di);
	f__15C2_0B6F_0006_0197(); return;
}

/**
 * Decompiled function f__15C2_0B6C_0003_E083()
 *
 * @name f__15C2_0B6C_0003_E083
 * @implements 15C2:0B6C:0003:E083 ()
 *
 * Called From: 15C2:060A:000B:511E
 * Called From: 15C2:060A:000F:DE98
 */
void f__15C2_0B6C_0003_E083()
{
	f__15C2_06FD_0011_8B08(); return;
}

/**
 * Decompiled function f__15C2_0B6F_0006_0197()
 *
 * @name f__15C2_0B6F_0006_0197
 * @implements 15C2:0B6F:0006:0197 ()
 *
 * Called From: 15C2:0634:0023:B451
 * Called From: 15C2:070E:0003:9F37
 * Called From: 15C2:0730:0022:4857
 * Called From: 15C2:0848:0003:1CA9
 * Called From: 15C2:0870:0028:447C
 * Called From: 15C2:08A9:0008:9D67
 * Called From: 15C2:08A9:0039:8805
 * Called From: 15C2:08DE:0008:8274
 * Called From: 15C2:08DE:0035:9410
 * Called From: 15C2:08EB:000D:D331
 * Called From: 15C2:08F8:000D:330C
 * Called From: 15C2:093E:000C:28E9
 * Called From: 15C2:0980:0042:A7C5
 * Called From: 15C2:0980:0003:1D9B
 * Called From: 15C2:09E3:001F:7DFA
 * Called From: 15C2:0B1A:001E:19F9
 */
void f__15C2_0B6F_0006_0197()
{
	emu_movw(&emu_ax, 0x1);
	f__15C2_056B_0003_DE21(); return;
}

/**
 * Decompiled function f__15C2_0B75_0006_F7CE()
 *
 * @name f__15C2_0B75_0006_F7CE
 * @implements 15C2:0B75:0006:F7CE ()
 *
 * Called From: 15C2:056B:0003:DE21
 * Called From: 15C2:056B:0005:DFB5
 */
void f__15C2_0B75_0006_F7CE()
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
