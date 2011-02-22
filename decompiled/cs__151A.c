/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__151A_02B0_0011_62B1()
 *
 * @name f__151A_02B0_0011_62B1
 * @implements 151A:02B0:0011:62B1 ()
 * @implements 151A:02C1:0005:84EE
 * @implements 151A:02C6:0002:2597
 *
 * Called From: 151A:025B:002A:9F9F
 * Called From: 151A:025B:005A:397D
 */
void f__151A_02B0_0011_62B1()
{
l__02B0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x02C1); f__151A_0310_0018_831F();
l__02C1:
	emu_addw(&emu_sp, 0x6);
	goto l__02C6;
l__02C6:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__151A_02C8_0016_FA9C()
 *
 * @name f__151A_02C8_0016_FA9C
 * @implements 151A:02C8:0016:FA9C ()
 * @implements 151A:02DE:0008:4F72
 * @implements 151A:02E6:0002:2597
 *
 * Called From: 151A:025B:0012:A9B9
 */
void f__151A_02C8_0016_FA9C()
{
l__02C8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xD));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x02DE); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
l__02DE:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__02E6;
l__02E6:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__151A_02E8_0010_6B15()
 *
 * @name f__151A_02E8_0010_6B15
 * @implements 151A:02E8:0010:6B15 ()
 * @implements 151A:02F8:0002:2597
 *
 * Called From: 151A:025B:0012:A9B9
 */
void f__151A_02E8_0010_6B15()
{
l__02E8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x7) = 0x0;
	emu_ax = 0x1;
	goto l__02F8;
l__02F8:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__151A_02FA_0014_26F2()
 *
 * @name f__151A_02FA_0014_26F2
 * @implements 151A:02FA:0014:26F2 ()
 * @implements 151A:030E:0002:2597
 *
 * Called From: 151A:025B:0012:A9B9
 */
void f__151A_02FA_0014_26F2()
{
l__02FA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_decb(&emu_al);
	emu_addb(&emu_get_memory8(emu_es, emu_bx, 0x7), emu_al);
	emu_ax = 0x1;
	goto l__030E;
l__030E:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__151A_0310_0018_831F()
 *
 * @name f__151A_0310_0018_831F
 * @implements 151A:0310:0018:831F ()
 * @implements 151A:0328:0030:62EB
 * @implements 151A:0358:0047:DAF8
 * @implements 151A:0399:0006:D6E6
 * @implements 151A:039F:0022:C3F8
 * @implements 151A:03B5:000C:4178
 * @implements 151A:03C1:0026:416D
 * @implements 151A:03C5:0022:23AF
 * @implements 151A:03E7:0006:F7CE
 *
 * Called From: 151A:017B:0014:9A3F
 * Called From: 151A:025B:0012:A9B9
 * Called From: 151A:02BE:0011:62B1
 */
void f__151A_0310_0018_831F()
{
l__0310:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xD));
	emu_push(emu_cs); emu_push(0x0328); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0328:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xBF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_dx = 0x12;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x2C64);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_xorw(&emu_di, emu_di);
	goto l__03C5;
l__0358:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_si = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x4) != 0x0) {
		emu_bx = emu_si;
		emu_shlw(&emu_bx, 0x1);
		emu_ax = 0x2E9C;
		emu_es = emu_ax;
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x323F);
		emu_andw(&emu_ax, 0x7FFF);
		emu_andw(&emu_ax, 0x1FF);
		emu_dx = emu_si;
		emu_cl = 0x2;
		emu_shlw(&emu_dx, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_dx);
		emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	}
l__0399:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x039F); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_IsPositionUnveiled();
l__039F:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_ax = emu_si;
		emu_cl = 0x2;
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x1), 0x1);
	}
l__03B5:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03C1); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_Update();
l__03C1:
	emu_addw(&emu_sp, 0x6);
	emu_incw(&emu_di);
l__03C5:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x2D52), emu_di);
	if ((int16)emu_get_memory16(emu_ds, emu_bx, 0x2D52) > (int16)emu_di) goto l__0358;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0xB) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x9) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	goto l__03E7;
l__03E7:
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
 * Decompiled function f__151A_03ED_0014_6217()
 *
 * @name f__151A_03ED_0014_6217
 * @implements 151A:03ED:0014:6217 ()
 * @implements 151A:0401:0021:A7FB
 * @implements 151A:0422:0016:0046
 * @implements 151A:0438:0003:2E57
 *
 * Called From: 151A:025B:0012:A9B9
 */
void f__151A_03ED_0014_6217()
{
l__03ED:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xD));
	emu_push(emu_cs); emu_push(0x0401); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0401:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xBF);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0422); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_Update();
l__0422:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0xB) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0x9) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0438;
l__0438:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__151A_043B_0018_36C4()
 *
 * @name f__151A_043B_0018_36C4
 * @implements 151A:043B:0018:36C4 ()
 * @implements 151A:0453:0019:67AA
 * @implements 151A:046C:0003:2E57
 *
 * Called From: 151A:025B:0012:A9B9
 */
void f__151A_043B_0018_36C4()
{
l__043B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_adcw(&emu_ax, 0x0);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0453); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__0453:
	emu_andw(&emu_ax, 0x3);
	emu_pop(&emu_dx);
	emu_pop(&emu_bx);
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_dx, 0x0);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_si, 0x2) = emu_dx;
	emu_get_memory16(emu_es, emu_si, 0x0) = emu_bx;
	emu_ax = 0x1;
	goto l__046C;
l__046C:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__151A_046F_0017_2508()
 *
 * @name f__151A_046F_0017_2508
 * @implements 151A:046F:0017:2508 ()
 * @implements 151A:0486:000A:CA6A
 * @implements 151A:0490:0008:77BC
 * @implements 151A:0498:0081:CC96
 * @implements 151A:0519:0008:4F72
 * @implements 151A:051C:0005:D5FA
 * @implements 151A:0521:0005:8BCF
 *
 * Called From: 151A:025B:0012:A9B9
 */
void f__151A_046F_0017_2508()
{
l__046F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xD));
	emu_push(emu_cs); emu_push(0x0486); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0486:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0490); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_IsPositionUnveiled();
l__0490:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0498;
	goto l__051C;
l__0498:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ah = 0x0;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_shlw(&emu_ax, 0x1);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39F0);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x39EE);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_bx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_andw(&emu_ax, 0x7F);
	emu_dx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x1), 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x1), emu_al);
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xF8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6);
	emu_dx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x2), emu_al);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0519); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_Update();
l__0519:
	emu_addw(&emu_sp, 0x6);
l__051C:
	emu_ax = 0x1;
	goto l__0521;
l__0521:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__151A_0526_0028_A3A6()
 *
 * @name f__151A_0526_0028_A3A6
 * @implements 151A:0526:0028:A3A6 ()
 * @implements 151A:054E:0055:2F02
 * @implements 151A:059D:0006:66E9
 * @implements 151A:05A3:0051:7B5F
 * @implements 151A:05DA:001A:7AC5
 * @implements 151A:05F4:001D:0441
 * @implements 151A:0611:0073:AC77
 * @implements 151A:0684:0022:C3F8
 * @implements 151A:069A:000C:4178
 * @implements 151A:06A6:0009:9B66
 * @implements 151A:06AF:000A:F4DA
 * @implements 151A:06B0:0009:E29A
 * @implements 151A:06B1:0008:62B9
 * @implements 151A:06B9:0005:D5FA
 * @implements 151A:06BE:0006:F7CE
 *
 * Called From: 151A:025B:0012:A9B9
 */
void f__151A_0526_0028_A3A6()
{
l__0526:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x2D52);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xD));
	emu_push(emu_cs); emu_push(0x054E); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__054E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ah = 0x0;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_shlw(&emu_ax, 0x1);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39F0);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x39EE);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_bx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_ax);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) <= 0x1) goto l__05DA;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x8), 0x17);
	if (emu_get_memory8(emu_es, emu_bx, 0x8) != 0x17) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x8), 0x18);
		if (emu_get_memory8(emu_es, emu_bx, 0x8) != 0x18) goto l__05DA;
	}
l__059D:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x05A3); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__05A3:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x49);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_dl = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_dh = 0x0;
	emu_shlw(&emu_dx, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_dx);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_shlw(&emu_dx, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_dx);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_addw(&emu_ax, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_movw(&emu_ax, emu_bp - 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ss;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
l__05DA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_dx = 0x12;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x2C64);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_di, emu_di);
	goto l__06B1;
l__05F4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xD));
	emu_push(emu_cs); emu_push(0x0611); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0611:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x2);
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_andw(&emu_ax, 0x1FF);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__06B0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_andw(&emu_ax, 0x1FF);
	emu_dx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xF8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6);
	emu_dx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x2), emu_al);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0684); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_IsPositionUnveiled();
l__0684:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_ax = emu_si;
		emu_cl = 0x2;
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x1), 0x1);
	}
l__069A:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06A6); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_Update();
l__06A6:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x06AF); emu_cs = 0x07D4; emu_Unknown_07D4_02F8();
l__06AF:
	emu_pop(&emu_cx);
l__06B0:
	emu_incw(&emu_di);
l__06B1:
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((int16)emu_di >= (int16)emu_get_memory16(emu_ss, emu_bp, -0xE)) goto l__06B9;
	goto l__05F4;
l__06B9:
	emu_ax = 0x1;
	goto l__06BE;
l__06BE:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
