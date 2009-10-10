/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__253D_0000_0013_38F4()
 *
 * @name f__253D_0000_0013_38F4
 * @implements 253D:0000:0013:38F4 ()
 *
 * Called From: 1423:03E2:0019:16A3
 * Called From: B4B5:008B:001B:0118
 * Called From: B4B8:0AD9:0018:40A6
 * Called From: B4B8:0AD9:0020:7E3F
 * Called From: B4B8:0DB8:0056:DC5A
 * Called From: B4B8:1812:0027:AC90
 * Called From: B4B8:1C84:001A:FE4A
 * Called From: B4BE:00CE:0019:9808
 * Called From: B4DA:0091:0022:FFAD
 * Called From: B4DA:02FE:0023:E297
 * Called From: B4DA:112A:0009:CFD6
 * Called From: B4ED:008D:0019:2129
 * Called From: B4F2:0024:001C:9C78
 * Called From: B518:0625:0017:2C04
 */
void f__253D_0000_0013_38F4()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0013); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	f__253D_0013_0017_236C();
}

/**
 * Decompiled function f__253D_0013_0017_236C()
 *
 * @name f__253D_0013_0017_236C
 * @implements 253D:0013:0017:236C ()
 *
 */
void f__253D_0013_0017_236C()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x002A); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	f__253D_002A_000F_3D83();
}

/**
 * Decompiled function f__253D_002A_000F_3D83()
 *
 * @name f__253D_002A_000F_3D83
 * @implements 253D:002A:000F:3D83 ()
 *
 */
void f__253D_002A_000F_3D83()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0x10), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp,  0xE), emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0039); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	f__253D_0039_0009_EE26();
}

/**
 * Decompiled function f__253D_0039_0009_EE26()
 *
 * @name f__253D_0039_0009_EE26
 * @implements 253D:0039:0009:EE26 ()
 *
 */
void f__253D_0039_0009_EE26()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	f__253D_0042_0003_2E57(); return;
}

/**
 * Decompiled function f__253D_0042_0003_2E57()
 *
 * @name f__253D_0042_0003_2E57
 * @implements 253D:0042:0003:2E57 ()
 *
 * Called From: 253D:0040:0009:EE26
 */
void f__253D_0042_0003_2E57()
{
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__253D_008A_0016_007A()
 *
 * @name f__253D_008A_0016_007A
 * @implements 253D:008A:0016:007A ()
 *
 * Called From: 0FCB:004E:0009:6FDE
 * Called From: B4B8:1968:0009:6FDE
 */
void f__253D_008A_0016_007A()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00A0); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	f__253D_00A0_000B_9A42();
}

/**
 * Decompiled function f__253D_00A0_000B_9A42()
 *
 * @name f__253D_00A0_000B_9A42
 * @implements 253D:00A0:000B:9A42 ()
 *
 */
void f__253D_00A0_000B_9A42()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00AB); emu_cs = 0x1FB5; f__1FB5_16D5_006A_679B();
	f__253D_00AB_0015_F0C0();
}

/**
 * Decompiled function f__253D_00AB_0015_F0C0()
 *
 * @name f__253D_00AB_0015_F0C0
 * @implements 253D:00AB:0015:F0C0 ()
 *
 */
void f__253D_00AB_0015_F0C0()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x00C0); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	f__253D_00C0_0023_4714();
}

/**
 * Decompiled function f__253D_00C0_0023_4714()
 *
 * @name f__253D_00C0_0023_4714
 * @implements 253D:00C0:0023:4714 ()
 *
 */
void f__253D_00C0_0023_4714()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x00E6; emu_last_cs = 0x253D; emu_last_ip = 0x00CF; emu_last_length = 0x0023; emu_last_crc = 0x4714; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00E3); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	f__253D_00E3_0009_2605();
}

/**
 * Decompiled function f__253D_00E3_0009_2605()
 *
 * @name f__253D_00E3_0009_2605
 * @implements 253D:00E3:0009:2605 ()
 *
 */
void f__253D_00E3_0009_2605()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00EC); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	f__253D_00EC_0009_58E5();
}

/**
 * Decompiled function f__253D_00EC_0009_58E5()
 *
 * @name f__253D_00EC_0009_58E5
 * @implements 253D:00EC:0009:58E5 ()
 *
 */
void f__253D_00EC_0009_58E5()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	f__253D_00F5_0005_8BCF(); return;
}

/**
 * Decompiled function f__253D_00F5_0005_8BCF()
 *
 * @name f__253D_00F5_0005_8BCF
 * @implements 253D:00F5:0005:8BCF ()
 *
 * Called From: 253D:00F3:0009:58E5
 */
void f__253D_00F5_0005_8BCF()
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
 * Decompiled function f__253D_00FA_0010_873D()
 *
 * @name f__253D_00FA_0010_873D
 * @implements 253D:00FA:0010:873D ()
 *
 * Called From: B4CA:0286:0013:32DA
 * Called From: B503:1059:0026:D203
 */
void f__253D_00FA_0010_873D()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x010A); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	f__253D_010A_0016_F834();
}

/**
 * Decompiled function f__253D_010A_0016_F834()
 *
 * @name f__253D_010A_0016_F834
 * @implements 253D:010A:0016:F834 ()
 *
 */
void f__253D_010A_0016_F834()
{
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0120); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	f__253D_0120_0017_515A();
}

/**
 * Decompiled function f__253D_0120_0017_515A()
 *
 * @name f__253D_0120_0017_515A
 * @implements 253D:0120:0017:515A ()
 *
 */
void f__253D_0120_0017_515A()
{
	emu_addw(&emu_sp, 0x6);
	emu_movw(&emu_si, emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x2);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0137); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	f__253D_0137_0016_B57F();
}

/**
 * Decompiled function f__253D_0137_0016_B57F()
 *
 * @name f__253D_0137_0016_B57F
 * @implements 253D:0137:0016:B57F ()
 *
 */
void f__253D_0137_0016_B57F()
{
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x8);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x014D); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	f__253D_014D_002A_786F();
}

/**
 * Decompiled function f__253D_014D_002A_786F()
 *
 * @name f__253D_014D_002A_786F
 * @implements 253D:014D:002A:786F ()
 *
 */
void f__253D_014D_002A_786F()
{
	emu_addw(&emu_sp, 0xA);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_di, emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_flags.zf) { f__253D_017C_000E_37D8(); return; }
	emu_orw(&emu_di, emu_di);
	if (emu_flags.zf) { f__253D_017C_000E_37D8(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0177); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	f__253D_0177_0005_8DEE();
}

/**
 * Decompiled function f__253D_0177_0005_8DEE()
 *
 * @name f__253D_0177_0005_8DEE
 * @implements 253D:0177:0005:8DEE ()
 *
 */
void f__253D_0177_0005_8DEE()
{
	emu_addw(&emu_sp, 0xA);
	f__253D_018D_003E_5C0F(); return;
}

/**
 * Decompiled function f__253D_017C_000E_37D8()
 *
 * @name f__253D_017C_000E_37D8
 * @implements 253D:017C:000E:37D8 ()
 *
 * Called From: 253D:0161:002A:786F
 * Called From: 253D:0165:002A:786F
 */
void f__253D_017C_000E_37D8()
{
	emu_movw(&emu_ax, 0x1);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x018A); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	f__253D_018A_0041_0D4B();
}

/**
 * Decompiled function f__253D_018A_0041_0D4B()
 *
 * @name f__253D_018A_0041_0D4B
 * @implements 253D:018A:0041:0D4B ()
 *
 */
void f__253D_018A_0041_0D4B()
{
	emu_addw(&emu_sp, 0x8);
	f__253D_018D_003E_5C0F(); return;
}

/**
 * Decompiled function f__253D_018D_003E_5C0F()
 *
 * @name f__253D_018D_003E_5C0F
 * @implements 253D:018D:003E:5C0F ()
 *
 * Called From: 253D:017A:0005:8DEE
 */
void f__253D_018D_003E_5C0F()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_movw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x0);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_bx, 0x1);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x6C93));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_bx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movb(&emu_cl, 0x2);
	emu_shlw(&emu_bx, emu_cl);
	emu_movw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x6CD3));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_addw(&emu_dx, 0x8);
	emu_subw(&emu_ax, emu_dx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x01CB); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	f__253D_01CB_002B_4141();
}

/**
 * Decompiled function f__253D_01CB_002B_4141()
 *
 * @name f__253D_01CB_002B_4141
 * @implements 253D:01CB:002B:4141 ()
 *
 */
void f__253D_01CB_002B_4141()
{
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_xorw(&emu_ax, emu_ax);
	emu_movw(&emu_dx, 0x8);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x01F6); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	f__253D_01F6_0019_DC1B();
}

/**
 * Decompiled function f__253D_01F6_0019_DC1B()
 *
 * @name f__253D_01F6_0019_DC1B
 * @implements 253D:01F6:0019:DC1B ()
 *
 */
void f__253D_01F6_0019_DC1B()
{
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x020F); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	f__253D_020F_0009_2605();
}

/**
 * Decompiled function f__253D_020F_0009_2605()
 *
 * @name f__253D_020F_0009_2605
 * @implements 253D:020F:0009:2605 ()
 *
 */
void f__253D_020F_0009_2605()
{
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0218); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	f__253D_0218_0009_C99B();
}

/**
 * Decompiled function f__253D_0218_0009_C99B()
 *
 * @name f__253D_0218_0009_C99B
 * @implements 253D:0218:0009:C99B ()
 *
 */
void f__253D_0218_0009_C99B()
{
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x0221); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	f__253D_0221_000E_77E8();
}

/**
 * Decompiled function f__253D_0221_000E_77E8()
 *
 * @name f__253D_0221_000E_77E8
 * @implements 253D:0221:000E:77E8 ()
 *
 */
void f__253D_0221_000E_77E8()
{
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs);
	emu_push(0x022F); f__253D_023A_0038_2BAE();
	f__253D_022F_0005_852E();
}

/**
 * Decompiled function f__253D_022F_0005_852E()
 *
 * @name f__253D_022F_0005_852E
 * @implements 253D:022F:0005:852E ()
 *
 */
void f__253D_022F_0005_852E()
{
	emu_addw(&emu_sp, 0x8);
	f__253D_0234_0006_F7CE(); return;
}

/**
 * Decompiled function f__253D_0234_0006_F7CE()
 *
 * @name f__253D_0234_0006_F7CE
 * @implements 253D:0234:0006:F7CE ()
 *
 * Called From: 253D:0232:0005:852E
 */
void f__253D_0234_0006_F7CE()
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
 * Decompiled function f__253D_023A_0038_2BAE()
 *
 * @name f__253D_023A_0038_2BAE
 * @implements 253D:023A:0038:2BAE ()
 *
 * Called From: 1587:0144:001A:412B
 * Called From: 253D:022C:000E:77E8
 */
void f__253D_023A_0038_2BAE()
{
	emu_push(emu_bp);
	emu_movw(&emu_bp, emu_sp);
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x0));
	emu_movb(&emu_ah, 0x0);
	emu_orw(&emu_ax, emu_ax);
	if (emu_flags.zf) { f__253D_0272_0039_AA2E(); return; }
	emu_cmpw(&emu_ax, 0x3);
	if (emu_flags.zf) { /* Unresolved jump */ emu_ip = 0x02B0; emu_last_cs = 0x253D; emu_last_ip = 0x0268; emu_last_length = 0x0038; emu_last_crc = 0x2BAE; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (emu_flags.zf) { f__253D_02BF_0026_AF12(); return; }
	/* Unresolved jump */ emu_ip = 0x02F2; emu_last_cs = 0x253D; emu_last_ip = 0x026F; emu_last_length = 0x0038; emu_last_crc = 0x2BAE; emu_call();
}

/**
 * Decompiled function f__253D_0272_0039_AA2E()
 *
 * @name f__253D_0272_0039_AA2E
 * @implements 253D:0272:0039:AA2E ()
 *
 * Called From: 253D:0263:0038:2BAE
 */
void f__253D_0272_0039_AA2E()
{
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_movw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_dx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x02AB); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	f__253D_02AB_0005_A4AE();
}

/**
 * Decompiled function f__253D_02AB_0005_A4AE()
 *
 * @name f__253D_02AB_0005_A4AE
 * @implements 253D:02AB:0005:A4AE ()
 *
 */
void f__253D_02AB_0005_A4AE()
{
	emu_addw(&emu_sp, 0xC);
	f__253D_02F2_0008_E949(); return;
}

/**
 * Decompiled function f__253D_02BF_0026_AF12()
 *
 * @name f__253D_02BF_0026_AF12
 * @implements 253D:02BF:0026:AF12 ()
 *
 * Called From: 253D:026D:0038:2BAE
 */
void f__253D_02BF_0026_AF12()
{
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_movw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	emu_movw(&emu_ax, 0xFFFF);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x02E5); emu_cs = 0x2BD6; f__2BD6_0000_0015_24A9();
	f__253D_02E5_000D_2950();
}

/**
 * Decompiled function f__253D_02E5_000D_2950()
 *
 * @name f__253D_02E5_000D_2950
 * @implements 253D:02E5:000D:2950 ()
 *
 */
void f__253D_02E5_000D_2950()
{
	emu_addw(&emu_sp, 0xA);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	emu_movw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	f__253D_02F2_0008_E949(); return;
}

/**
 * Decompiled function f__253D_02F2_0008_E949()
 *
 * @name f__253D_02F2_0008_E949
 * @implements 253D:02F2:0008:E949 ()
 *
 * Called From: 253D:02AE:0005:A4AE
 * Called From: 253D:02F0:000D:2950
 */
void f__253D_02F2_0008_E949()
{
	emu_movw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_movw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	f__253D_02FA_0005_8BCF(); return;
}

/**
 * Decompiled function f__253D_02FA_0005_8BCF()
 *
 * @name f__253D_02FA_0005_8BCF
 * @implements 253D:02FA:0005:8BCF ()
 *
 * Called From: 253D:02F8:0008:E949
 */
void f__253D_02FA_0005_8BCF()
{
	emu_pop(&emu_si);
	emu_movw(&emu_sp, emu_bp);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
