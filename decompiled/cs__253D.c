/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__253D_0000_0013_AAD7()
 *
 * @name f__253D_0000_0013_AAD7
 * @implements 253D:0000:0013:AAD7 ()
 *
 * Called From: 1423:03E2:0019:DF8E
 * Called From: B4B5:008B:001B:4254
 * Called From: B4B8:0AD9:0018:612D
 * Called From: B4B8:0AD9:0020:ED7B
 * Called From: B4B8:0DB8:0056:D8D9
 * Called From: B4B8:1812:0027:2D50
 * Called From: B4B8:1C84:001A:AD6B
 * Called From: B4BE:00CE:0019:B9EA
 * Called From: B4DA:0091:0022:197D
 * Called From: B4DA:02FE:0023:77C4
 * Called From: B4DA:112A:0009:C5FE
 * Called From: B4ED:008D:0019:CA0E
 * Called From: B4F2:0024:001C:FE04
 * Called From: B518:0625:0017:3F3F
 */
void f__253D_0000_0013_AAD7()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0013); emu_cs = 0x1FB5; f__1FB5_01FA_0010_D47C();
	f__253D_0013_0017_4BA4();
}

/**
 * Decompiled function f__253D_0013_0017_4BA4()
 *
 * @name f__253D_0013_0017_4BA4
 * @implements 253D:0013:0017:4BA4 ()
 *
 * Called From: 253D:0013:0013:AAD7
 */
void f__253D_0013_0017_4BA4()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x002A); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	f__253D_002A_000F_FB68();
}

/**
 * Decompiled function f__253D_002A_000F_FB68()
 *
 * @name f__253D_002A_000F_FB68
 * @implements 253D:002A:000F:FB68 ()
 *
 * Called From: 253D:002A:0017:4BA4
 */
void f__253D_002A_000F_FB68()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0039); emu_cs = 0x1FB5; f__1FB5_09C7_0018_F3A8();
	f__253D_0039_0009_00DC();
}

/**
 * Decompiled function f__253D_0039_0009_00DC()
 *
 * @name f__253D_0039_0009_00DC
 * @implements 253D:0039:0009:00DC ()
 *
 * Called From: 253D:0039:000F:FB68
 */
void f__253D_0039_0009_00DC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	f__253D_0042_0003_0212(); return;
}

/**
 * Decompiled function f__253D_0042_0003_0212()
 *
 * @name f__253D_0042_0003_0212
 * @implements 253D:0042:0003:0212 ()
 *
 * Called From: 253D:0040:0009:00DC
 */
void f__253D_0042_0003_0212()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__253D_008A_0016_A6D3()
 *
 * @name f__253D_008A_0016_A6D3
 * @implements 253D:008A:0016:A6D3 ()
 *
 * Called From: 0FCB:004E:0009:CD5E
 * Called From: B4B8:1968:0009:CD5E
 */
void f__253D_008A_0016_A6D3()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00A0); emu_cs = 0x1FB5; f__1FB5_01FA_0010_D47C();
	f__253D_00A0_000B_FECD();
}

/**
 * Decompiled function f__253D_00A0_000B_FECD()
 *
 * @name f__253D_00A0_000B_FECD
 * @implements 253D:00A0:000B:FECD ()
 *
 * Called From: 253D:00A0:0016:A6D3
 */
void f__253D_00A0_000B_FECD()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00AB); emu_cs = 0x1FB5; f__1FB5_16D5_006A_A7D9();
	f__253D_00AB_0015_9426();
}

/**
 * Decompiled function f__253D_00AB_0015_9426()
 *
 * @name f__253D_00AB_0015_9426
 * @implements 253D:00AB:0015:9426 ()
 *
 * Called From: 253D:00AB:000B:FECD
 */
void f__253D_00AB_0015_9426()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x00C0); emu_cs = 0x23E1; f__23E1_0004_0014_DD3C();
	f__253D_00C0_0023_8607();
}

/**
 * Decompiled function f__253D_00C0_0023_8607()
 *
 * @name f__253D_00C0_0023_8607
 * @implements 253D:00C0:0023:8607 ()
 *
 * Called From: 253D:00C0:0015:9426
 */
void f__253D_00C0_0023_8607()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { emu_ip = 0x00E6; emu_last_cs = 0x253D; emu_last_ip = 0x00CF; emu_last_length = 0x0023; emu_last_crc = 0x8607; emu_call(); return; } // Jump does not resolve
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00E3); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	f__253D_00E3_0009_CF13();
}

/**
 * Decompiled function f__253D_00E3_0009_CF13()
 *
 * @name f__253D_00E3_0009_CF13
 * @implements 253D:00E3:0009:CF13 ()
 *
 * Called From: 253D:00E3:0023:8607
 */
void f__253D_00E3_0009_CF13()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00EC); emu_cs = 0x1FB5; f__1FB5_09C7_0018_F3A8();
	f__253D_00EC_0009_3DEC();
}

/**
 * Decompiled function f__253D_00EC_0009_3DEC()
 *
 * @name f__253D_00EC_0009_3DEC
 * @implements 253D:00EC:0009:3DEC ()
 *
 * Called From: 253D:00EC:0009:CF13
 */
void f__253D_00EC_0009_3DEC()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__253D_00F5_0005_04BA(); return;
}

/**
 * Decompiled function f__253D_00F5_0005_04BA()
 *
 * @name f__253D_00F5_0005_04BA
 * @implements 253D:00F5:0005:04BA ()
 *
 * Called From: 253D:00F3:0009:3DEC
 */
void f__253D_00F5_0005_04BA()
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
 * Decompiled function f__253D_00FA_0010_5316()
 *
 * @name f__253D_00FA_0010_5316
 * @implements 253D:00FA:0010:5316 ()
 *
 * Called From: B4CA:0286:0013:4BB7
 * Called From: B503:1059:0026:4AD0
 */
void f__253D_00FA_0010_5316()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x010A); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	f__253D_010A_0016_AC6F();
}

/**
 * Decompiled function f__253D_010A_0016_AC6F()
 *
 * @name f__253D_010A_0016_AC6F
 * @implements 253D:010A:0016:AC6F ()
 *
 * Called From: 253D:010A:0010:5316
 */
void f__253D_010A_0016_AC6F()
{
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0120); emu_cs = 0x1FB5; f__1FB5_01FA_0010_D47C();
	f__253D_0120_0017_8A30();
}

/**
 * Decompiled function f__253D_0120_0017_8A30()
 *
 * @name f__253D_0120_0017_8A30
 * @implements 253D:0120:0017:8A30 ()
 *
 * Called From: 253D:0120:0016:AC6F
 */
void f__253D_0120_0017_8A30()
{
	emu_addws(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_ss);
	emu_movw(&emu_ax.x, emu_bp - 0x2);
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0137); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	f__253D_0137_0016_34AE();
}

/**
 * Decompiled function f__253D_0137_0016_34AE()
 *
 * @name f__253D_0137_0016_34AE
 * @implements 253D:0137:0016:34AE ()
 *
 * Called From: 253D:0137:0017:8A30
 */
void f__253D_0137_0016_34AE()
{
	emu_addws(&emu_sp, 0xA);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x014D); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	f__253D_014D_002A_D0F1();
}

/**
 * Decompiled function f__253D_014D_002A_D0F1()
 *
 * @name f__253D_014D_002A_D0F1
 * @implements 253D:014D:002A:D0F1 ()
 *
 * Called From: 253D:014D:0016:34AE
 */
void f__253D_014D_002A_D0F1()
{
	emu_addws(&emu_sp, 0xA);
	emu_subws(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx.x,  0x6));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) { f__253D_017C_000E_9367(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__253D_017C_000E_9367(); return; }
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0177); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	f__253D_0177_0005_1FFE();
}

/**
 * Decompiled function f__253D_0177_0005_1FFE()
 *
 * @name f__253D_0177_0005_1FFE
 * @implements 253D:0177:0005:1FFE ()
 *
 * Called From: 253D:0177:002A:D0F1
 */
void f__253D_0177_0005_1FFE()
{
	emu_addws(&emu_sp, 0xA);
	f__253D_018D_003E_BCDC(); return;
}

/**
 * Decompiled function f__253D_017C_000E_9367()
 *
 * @name f__253D_017C_000E_9367
 * @implements 253D:017C:000E:9367 ()
 *
 * Called From: 253D:0161:002A:D0F1
 * Called From: 253D:0165:002A:D0F1
 */
void f__253D_017C_000E_9367()
{
	emu_movw(&emu_ax.x, 0x1);
	emu_push(emu_ax.x);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x018A); emu_cs = 0x1FB5; f__1FB5_1207_001B_7505();
	f__253D_018A_0041_BD1A();
}

/**
 * Decompiled function f__253D_018A_0041_BD1A()
 *
 * @name f__253D_018A_0041_BD1A
 * @implements 253D:018A:0041:BD1A ()
 *
 * Called From: 253D:018A:000E:9367
 */
void f__253D_018A_0041_BD1A()
{
	emu_addws(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6C93));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD3));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addws(&emu_dx.x, 0x8);
	emu_subw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x01CB); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	f__253D_01CB_002B_AA96();
}

/**
 * Decompiled function f__253D_018D_003E_BCDC()
 *
 * @name f__253D_018D_003E_BCDC
 * @implements 253D:018D:003E:BCDC ()
 *
 * Called From: 253D:017A:0005:1FFE
 */
void f__253D_018D_003E_BCDC()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx.x,  0x6), 0x0);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_bx.x, 0x1);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6C93));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_bx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_cx.l, 0x2);
	emu_shlw(&emu_bx.x, emu_cx.l);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ds, emu_bx.x,  0x6CD3));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addws(&emu_dx.x, 0x8);
	emu_subw(&emu_ax.x, emu_dx.x);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x01CB); emu_cs = 0x2B0E; f__2B0E_00D0_0022_D0C8();
	f__253D_01CB_002B_AA96();
}

/**
 * Decompiled function f__253D_01CB_002B_AA96()
 *
 * @name f__253D_01CB_002B_AA96
 * @implements 253D:01CB:002B:AA96 ()
 *
 * Called From: 253D:01CB:003E:BCDC
 * Called From: 253D:01CB:0041:BD1A
 */
void f__253D_01CB_002B_AA96()
{
	emu_pop(&emu_cx.x);
	emu_pop(&emu_cx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_movw(&emu_dx.x, 0x8);
	emu_push(emu_ax.x);
	emu_push(emu_dx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x01F6); emu_cs = 0x2B0E; f__2B0E_0006_0049_1E3C();
	f__253D_01F6_0019_B831();
}

/**
 * Decompiled function f__253D_01F6_0019_B831()
 *
 * @name f__253D_01F6_0019_B831
 * @implements 253D:01F6:0019:B831 ()
 *
 * Called From: 253D:01F6:002B:AA96
 */
void f__253D_01F6_0019_B831()
{
	emu_addws(&emu_sp, 0xC);
	emu_xorw(&emu_ax.x, emu_ax.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax.x, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax.x);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x020F); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_7557();
	f__253D_020F_0009_CF13();
}

/**
 * Decompiled function f__253D_020F_0009_CF13()
 *
 * @name f__253D_020F_0009_CF13
 * @implements 253D:020F:0009:CF13 ()
 *
 * Called From: 253D:020F:0019:B831
 */
void f__253D_020F_0009_CF13()
{
	emu_addws(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0218); emu_cs = 0x1FB5; f__1FB5_09C7_0018_F3A8();
	f__253D_0218_0009_66A2();
}

/**
 * Decompiled function f__253D_0218_0009_66A2()
 *
 * @name f__253D_0218_0009_66A2
 * @implements 253D:0218:0009:66A2 ()
 *
 * Called From: 253D:0218:0009:CF13
 */
void f__253D_0218_0009_66A2()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x0221); emu_cs = 0x252E; f__252E_0001_0018_48C0();
	f__253D_0221_000E_3C12();
}

/**
 * Decompiled function f__253D_0221_000E_3C12()
 *
 * @name f__253D_0221_000E_3C12
 * @implements 253D:0221:000E:3C12 ()
 *
 * Called From: 253D:0221:0009:66A2
 */
void f__253D_0221_000E_3C12()
{
	emu_pop(&emu_cx.x);
	emu_push(emu_dx.x);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs);
	emu_push(0x022F); f__253D_023A_0038_FBF9();
	f__253D_022F_0005_1FCC();
}

/**
 * Decompiled function f__253D_022F_0005_1FCC()
 *
 * @name f__253D_022F_0005_1FCC
 * @implements 253D:022F:0005:1FCC ()
 *
 * Called From: 253D:022F:000E:3C12
 */
void f__253D_022F_0005_1FCC()
{
	emu_addws(&emu_sp, 0x8);
	f__253D_0234_0006_137A(); return;
}

/**
 * Decompiled function f__253D_0234_0006_137A()
 *
 * @name f__253D_0234_0006_137A
 * @implements 253D:0234:0006:137A ()
 *
 * Called From: 253D:0232:0005:1FCC
 */
void f__253D_0234_0006_137A()
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
 * Decompiled function f__253D_023A_0038_FBF9()
 *
 * @name f__253D_023A_0038_FBF9
 * @implements 253D:023A:0038:FBF9 ()
 *
 * Called From: 1587:0144:001A:0289
 * Called From: 253D:022C:000E:3C12
 */
void f__253D_023A_0038_FBF9()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subws(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx.x);
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx.x);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_ax.l, emu_get_memory8(emu_es, emu_bx.x,  0x0));
	emu_movb(&emu_ax.h, 0x0);
	emu_orw(&emu_ax.x, emu_ax.x);
	if (emu_flags.zf) { f__253D_0272_0039_BDE1(); return; }
	emu_cmpw(&emu_ax.x, 0x3);
	if (emu_flags.zf) { emu_ip = 0x02B0; emu_last_cs = 0x253D; emu_last_ip = 0x0268; emu_last_length = 0x0038; emu_last_crc = 0xFBF9; emu_call(); return; } // Jump does not resolve
	emu_cmpw(&emu_ax.x, 0x4);
	if (emu_flags.zf) { f__253D_02BF_0026_5D54(); return; }
	emu_ip = 0x02F2; emu_last_cs = 0x253D; emu_last_ip = 0x026F; emu_last_length = 0x0038; emu_last_crc = 0xFBF9; emu_call(); // Jump does not resolve
}

/**
 * Decompiled function f__253D_0272_0039_BDE1()
 *
 * @name f__253D_0272_0039_BDE1
 * @implements 253D:0272:0039:BDE1 ()
 *
 * Called From: 253D:0263:0038:FBF9
 */
void f__253D_0272_0039_BDE1()
{
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_es, emu_bx.x,  0x4));
	emu_movw(&emu_dx.x, emu_get_memory16(emu_es, emu_bx.x,  0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax.x);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx.x);
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x02AB); emu_cs = 0x2B0E; f__2B0E_0006_0049_1E3C();
	f__253D_02AB_0005_1F68();
}

/**
 * Decompiled function f__253D_02AB_0005_1F68()
 *
 * @name f__253D_02AB_0005_1F68
 * @implements 253D:02AB:0005:1F68 ()
 *
 * Called From: 253D:02AB:0039:BDE1
 */
void f__253D_02AB_0005_1F68()
{
	emu_addws(&emu_sp, 0xC);
	f__253D_02F2_0008_8C8C(); return;
}

/**
 * Decompiled function f__253D_02BF_0026_5D54()
 *
 * @name f__253D_02BF_0026_5D54
 * @implements 253D:02BF:0026:5D54 ()
 *
 * Called From: 253D:026D:0038:FBF9
 */
void f__253D_02BF_0026_5D54()
{
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x6);
	emu_lfp(&emu_es, &emu_bx.x, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx.x,  0x0));
	emu_addws(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	emu_movw(&emu_ax.x, 0xFFFF);
	emu_push(emu_ax.x);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x02E5); emu_cs = 0x2BD6; f__2BD6_0000_0015_D6DC();
	f__253D_02E5_000D_0753();
}

/**
 * Decompiled function f__253D_02E5_000D_0753()
 *
 * @name f__253D_02E5_000D_0753
 * @implements 253D:02E5:000D:0753 ()
 *
 * Called From: 253D:02E5:0026:5D54
 */
void f__253D_02E5_000D_0753()
{
	emu_addws(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax.x);
	f__253D_02F2_0008_8C8C(); return;
}

/**
 * Decompiled function f__253D_02F2_0008_8C8C()
 *
 * @name f__253D_02F2_0008_8C8C
 * @implements 253D:02F2:0008:8C8C ()
 *
 * Called From: 253D:02AE:0005:1F68
 * Called From: 253D:02F0:000D:0753
 */
void f__253D_02F2_0008_8C8C()
{
	emu_movw(&emu_dx.x, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax.x, emu_get_memory16(emu_ss, emu_bp, -0xC));
	f__253D_02FA_0005_04BA(); return;
}

/**
 * Decompiled function f__253D_02FA_0005_04BA()
 *
 * @name f__253D_02FA_0005_04BA
 * @implements 253D:02FA:0005:04BA ()
 *
 * Called From: 253D:02F8:0008:8C8C
 */
void f__253D_02FA_0005_04BA()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
