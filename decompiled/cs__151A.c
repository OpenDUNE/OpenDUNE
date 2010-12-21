/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__151A_000E_0013_5840()
 *
 * @name f__151A_000E_0013_5840
 * @implements 151A:000E:0013:5840 ()
 * @implements 151A:0021:000A:F927
 * @implements 151A:002B:0006:5882
 * @implements 151A:0031:001A:DA20
 * @implements 151A:004B:00B6:DC7F
 * @implements 151A:00FF:0002:C6BA
 * @implements 151A:0101:0009:D39F
 * @implements 151A:0102:0008:D3BC
 * @implements 151A:010A:0004:90B9
 * @implements 151A:010E:0006:F7CE
 *
 * Called From: 06F7:09E0:0018:609B
 * Called From: 06F7:09E0:0015:D89F
 * Called From: 0C3A:0B7F:0036:3381
 * Called From: 0C3A:0B7F:0040:CFBF
 * Called From: 0C3A:1108:0040:9962
 * Called From: 176C:23B9:001D:4782
 * Called From: 1A34:0272:0012:2E23
 */
void f__151A_000E_0013_5840()
{
l__000E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0021); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0021:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x002B); f__151A_0114_0022_0B6C();
l__002B:
	emu_pop(&emu_cx);
	emu_xorw(&emu_si, emu_si);
	goto l__0102;
l__0031:
	emu_ax = emu_si;
	emu_dx = 0x11;
	emu_imuluw(&emu_ax, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3956));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x9);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xB));
	if (emu_ax == 0) goto l__004B;
	goto l__0101;
l__004B:
	emu_ax = emu_si;
	emu_dx = 0x11;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3958);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x3956);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_bx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_es, emu_bx, 0xB) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x9) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x7) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x10);
	emu_get_memory8(emu_es, emu_bx, 0x6) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x12);
	emu_get_memory8(emu_es, emu_bx, 0x8) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0xF) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0xD) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x60EA) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x60E8) = 0x0;
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xF8);
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x10);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x2), emu_al);
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x40);
	emu_ax = 0x1;
l__00FF:
	goto l__010E;
l__0101:
	emu_incw(&emu_si);
l__0102:
	emu_cmpw(&emu_si, 0x70);
	if ((int16)emu_si >= (int16)0x70) goto l__010A;
	goto l__0031;
l__010A:
	emu_xorw(&emu_ax, emu_ax);
	goto l__00FF;
l__010E:
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
 * Decompiled function f__151A_0114_0022_0B6C()
 *
 * @name f__151A_0114_0022_0B6C
 * @implements 151A:0114:0022:0B6C ()
 * @implements 151A:0136:0034:AEFE
 * @implements 151A:016A:0014:9A3F
 * @implements 151A:017E:0008:4A72
 * @implements 151A:0184:0002:C53A
 * @implements 151A:0186:000A:0849
 * @implements 151A:0187:0009:19C9
 * @implements 151A:018C:0004:9239
 * @implements 151A:0190:0006:F7CE
 *
 * Called From: 0C3A:1076:0015:2CC3
 * Called From: 151A:0028:000A:F927
 * Called From: 176C:22EB:000A:8EEA
 */
void f__151A_0114_0022_0B6C()
{
l__0114:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x40);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x40) == 0) goto l__018C;
	emu_xorw(&emu_si, emu_si);
	goto l__0187;
l__0136:
	emu_ax = emu_si;
	emu_dx = 0x11;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3958);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x3956);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_bx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x9);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xB));
	if (emu_ax == 0) goto l__0186;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xF));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xD));
	emu_push(emu_cs); emu_push(0x016A); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__016A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax != emu_di) goto l__0186;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x017E); f__151A_0310_0018_831F();
l__017E:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
l__0184:
	goto l__0190;
l__0186:
	emu_incw(&emu_si);
l__0187:
	emu_cmpw(&emu_si, 0x70);
	if ((int16)emu_si < (int16)0x70) goto l__0136;
l__018C:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0184;
l__0190:
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
 * Decompiled function f__151A_0196_0018_AF63()
 *
 * @name f__151A_0196_0018_AF63
 * @implements 151A:0196:0018:AF63 ()
 * @implements 151A:01AE:000B:C3A0
 * @implements 151A:01B9:0010:58AE
 * @implements 151A:01C9:0096:C671
 * @implements 151A:0205:005A:397D
 * @implements 151A:0235:002A:9F9F
 * @implements 151A:024D:0012:A9B9
 * @implements 151A:025F:0042:ABEC
 * @implements 151A:0262:003F:09CA
 * @implements 151A:0287:001A:9FFC
 * @implements 151A:0298:0009:139C
 * @implements 151A:0299:0008:13BF
 * @implements 151A:02A1:0009:5EAC
 * @implements 151A:02AA:0006:F7CE
 *
 * Called From: 07D4:0049:0005:EE7F
 */
void f__151A_0196_0018_AF63()
{
l__0196:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x60EA);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x60E8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__01AE;
	goto l__02A1;
l__01AE:
	if (!emu_flags.zf) goto l__01B9;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (emu_dx <= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__01B9;
	goto l__02A1;
l__01B9:
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x60E8), 0x2710);
	emu_adcw(&emu_get_memory16(emu_ds, 0x00, 0x60EA), 0x0);
	emu_xorw(&emu_si, emu_si);
	goto l__0299;
l__01C9:
	emu_ax = emu_si;
	emu_dx = 0x11;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3958);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x3956);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_bx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x9);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xB));
	if (emu_ax == 0) goto l__0262;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0262;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0262;
	}
l__0205:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x7);
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0x7));
	emu_ah = 0x0;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0x9));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_andw(&emu_ax, 0xFFF);
	emu_di = emu_ax;
	emu_testw(&emu_di, 0x800);
	if ((emu_di & 0x800) != 0) {
		emu_orw(&emu_di, 0xF000);
	}
l__0235:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cl = 0xC;
	emu_shrw(&emu_ax, emu_cl);
	emu_andw(&emu_ax, 0xF);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x4) > (int16)0x9) {
		emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x9;
	}
l__024D:
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, emu_bx, 0x60EC);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, emu_bx, 0x60EE);
	emu_push(0x025F);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x151A02B0: f__151A_02B0_0011_62B1(); break;
		case 0x151A02C8: f__151A_02C8_0016_FA9C(); break;
		case 0x151A02E8: f__151A_02E8_0010_6B15(); break;
		case 0x151A02FA: f__151A_02FA_0014_26F2(); break;
		case 0x151A0310: f__151A_0310_0018_831F(); break;
		case 0x151A03ED: f__151A_03ED_0014_6217(); break;
		case 0x151A043B: f__151A_043B_0018_36C4(); break;
		case 0x151A046F: f__151A_046F_0017_2508(); break;
		case 0x151A0526: f__151A_0526_0028_A3A6(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x151A; emu_last_ip = 0x025B; emu_last_length = 0x0012; emu_last_crc = 0xA9B9;
			emu_call();
			return;
	}
l__025F:
	emu_addw(&emu_sp, 0x6);
l__0262:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x9);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xB));
	if (emu_ax == 0) goto l__0298;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x60EA));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x60EA)) goto l__0298;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x60EA)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x60E8));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x60E8)) goto l__0298;
	}
l__0287:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x60EA) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x60E8) = emu_dx;
l__0298:
	emu_incw(&emu_si);
l__0299:
	emu_cmpw(&emu_si, 0x70);
	if ((int16)emu_si >= (int16)0x70) goto l__02A1;
	goto l__01C9;
l__02A1:
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x60EA);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x60E8);
	goto l__02AA;
l__02AA:
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
	emu_push(emu_cs); emu_push(0x06AF); emu_cs = 0x07D4; f__07D4_02F8_0055_0679();
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
