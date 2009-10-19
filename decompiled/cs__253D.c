/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__253D_0000_0013_38F4()
 *
 * @name f__253D_0000_0013_38F4
 * @implements 253D:0000:0013:38F4 ()
 * @implements 253D:0013:0017:236C
 * @implements 253D:002A:000F:3D83
 * @implements 253D:0039:0009:EE26
 * @implements 253D:0042:0003:2E57
 *
 * Called From: 1423:03E2:0019:16A3
 * Called From: B4B5:008B:001B:0118
 * Called From: B4B8:0AD9:0018:40A6
 * Called From: B4B8:0AD9:0020:7E3F
 * Called From: B4B8:0DB8:0056:DC5A
 * Called From: B4B8:11CF:001C:8274
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
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0013); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	goto l__0013;
l__0013:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x002A); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	goto l__002A;
l__002A:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ss, emu_bp,  0x10) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp,  0xE) = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0039); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	goto l__0039;
l__0039:
	emu_pop(&emu_cx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	goto l__0042;
l__0042:
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
 * @implements 253D:00A0:000B:9A42
 * @implements 253D:00AB:0015:F0C0
 * @implements 253D:00C0:0023:4714
 * @implements 253D:00E3:0009:2605
 * @implements 253D:00EC:0009:58E5
 * @implements 253D:00F5:0005:8BCF
 *
 * Called From: 0FCB:004E:0009:6FDE
 * Called From: B4B8:1968:0009:6FDE
 */
void f__253D_008A_0016_007A()
{
l__008A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00A0); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	goto l__00A0;
l__00A0:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00AB); emu_cs = 0x1FB5; f__1FB5_16D5_006A_679B();
	goto l__00AB;
l__00AB:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x00C0); emu_cs = 0x23E1; f__23E1_0004_0014_2BC0();
	goto l__00C0;
l__00C0:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x00E6; emu_last_cs = 0x253D; emu_last_ip = 0x00CF; emu_last_length = 0x0023; emu_last_crc = 0x4714; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00E3); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	goto l__00E3;
l__00E3:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x00EC); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	goto l__00EC;
l__00EC:
	emu_pop(&emu_cx);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__00F5;
l__00F5:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 253D:010A:0016:F834
 * @implements 253D:0120:0017:515A
 * @implements 253D:0137:0016:B57F
 * @implements 253D:014D:002A:786F
 * @implements 253D:0177:0005:8DEE
 * @implements 253D:017C:000E:37D8
 * @implements 253D:018A:0041:0D4B
 * @implements 253D:018D:003E:5C0F
 * @implements 253D:01CB:002B:4141
 * @implements 253D:01F6:0019:DC1B
 * @implements 253D:020F:0009:2605
 * @implements 253D:0218:0009:C99B
 * @implements 253D:0221:000E:77E8
 * @implements 253D:022F:0005:852E
 * @implements 253D:0234:0006:F7CE
 *
 * Called From: B4CA:0286:0013:32DA
 * Called From: B503:1059:0026:D203
 */
void f__253D_00FA_0010_873D()
{
l__00FA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x010A); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	goto l__010A;
l__010A:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0120); emu_cs = 0x1FB5; f__1FB5_01FA_0010_F89C();
	goto l__0120;
l__0120:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x2;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x2);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0137); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	goto l__0137;
l__0137:
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x8;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x014D); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	goto l__014D;
l__014D:
	emu_addw(&emu_sp, 0xA);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_di = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_ax == 0) goto l__017C;
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__017C;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0177); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	goto l__0177;
l__0177:
	emu_addw(&emu_sp, 0xA);
	goto l__018D;
l__017C:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x018A); emu_cs = 0x1FB5; f__1FB5_1207_001B_2A6C();
	goto l__018A;
l__018A:
	emu_addw(&emu_sp, 0x8);
	goto l__018D;
l__018D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_get_memory16(emu_es, emu_bx, 0x6) = 0x0;
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x6C93);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x6CD3);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_dx, 0x8);
	emu_subw(&emu_ax, emu_dx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x01CB); emu_cs = 0x2B0E; emu_Tools_GetSmallestIP();
	goto l__01CB;
l__01CB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x8;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x01F6); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	goto l__01F6;
l__01F6:
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x020F); emu_cs = 0x1FB5; f__1FB5_0AEC_001B_A5E4();
	goto l__020F;
l__020F:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0218); emu_cs = 0x1FB5; f__1FB5_09C7_0018_922D();
	goto l__0218;
l__0218:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x0221); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	goto l__0221;
l__0221:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs);
	emu_push(0x022F); f__253D_023A_0038_2BAE();
	goto l__022F;
l__022F:
	emu_addw(&emu_sp, 0x8);
	goto l__0234;
l__0234:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
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
 * @implements 253D:0272:0039:AA2E
 * @implements 253D:02AB:0005:A4AE
 * @implements 253D:02BF:0026:AF12
 * @implements 253D:02E5:000D:2950
 * @implements 253D:02F2:0008:E949
 * @implements 253D:02FA:0005:8BCF
 *
 * Called From: 1587:0144:001A:412B
 * Called From: 253D:022C:000E:77E8
 */
void f__253D_023A_0038_2BAE()
{
l__023A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0272;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) { /* Unresolved jump */ emu_ip = 0x02B0; emu_last_cs = 0x253D; emu_last_ip = 0x0268; emu_last_length = 0x0038; emu_last_crc = 0x2BAE; emu_call(); return; }
	emu_cmpw(&emu_ax, 0x4);
	if (emu_ax == 0x4) goto l__02BF;
	goto l__02F2;
l__0272:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x02AB); emu_cs = 0x2B0E; f__2B0E_0006_0049_87B1();
	goto l__02AB;
l__02AB:
	emu_addw(&emu_sp, 0xC);
	goto l__02F2;
l__02BF:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x02E5); emu_cs = 0x2BD6; f__2BD6_0000_0015_24A9();
	goto l__02E5;
l__02E5:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	goto l__02F2;
l__02F2:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	goto l__02FA;
l__02FA:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
