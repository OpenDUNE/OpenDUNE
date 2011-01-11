/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Structure_UpdateMap()
 *
 * @name emu_Structure_UpdateMap
 * @implements 0C3A:092A:0013:A4A8 ()
 * @implements 0C3A:093D:000E:250F
 * @implements 0C3A:094B:000E:A510
 * @implements 0C3A:0959:0028:6D6C
 * @implements 0C3A:0981:0061:F8F6
 * @implements 0C3A:09E2:001D:98C0
 * @implements 0C3A:09FF:00E7:CC50
 * @implements 0C3A:0AC6:0020:3555
 * @implements 0C3A:0AD8:000E:24E3
 * @implements 0C3A:0AE6:000C:CB80
 * @implements 0C3A:0AEA:0008:C20B
 * @implements 0C3A:0AF2:001A:CFD7
 * @implements 0C3A:0B0C:0038:BBC8
 * @implements 0C3A:0B0F:0035:03CC
 * @implements 0C3A:0B29:001B:8966
 * @implements 0C3A:0B44:0040:CFBF
 * @implements 0C3A:0B4E:0036:3381
 * @implements 0C3A:0B84:000F:E7B4
 * @implements 0C3A:0B8D:0006:F7CE
 *
 * Called From: 0C3A:072F:000B:E349
 * Called From: 0C3A:072F:000C:E6D9
 * Called From: 0C3A:13B6:0014:7F45
 * Called From: 0F78:03C5:000C:C461
 * Called From: 10E4:21A1:000B:C1F1
 * Called From: 1A34:2F3B:000C:0C19
 */
void emu_Structure_UpdateMap()
{
l__092A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__093D;
	goto l__0B8D;
l__093D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x1);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x1) != 0) goto l__094B;
	goto l__0B8D;
l__094B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x4) == 0) goto l__0959;
	goto l__0B8D;
l__0959:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0981); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0981:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_dx = 0x12;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x2C64);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x2D52);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3C);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_shlw(&emu_ax, 0x1);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39F0);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x39EE);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_bx;
	emu_xorw(&emu_di, emu_di);
	goto l__0AEA;
l__09E2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x09FF); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__09FF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xF8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x2), emu_al);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x20);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_incb(&emu_al);
	emu_pop(&emu_es);
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x49));
	emu_andw(&emu_ax, 0x1FF);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39F2);
	emu_subw(&emu_dx, 0xF);
	emu_cmpw(&emu_ax, emu_dx);
	if (emu_ax >= emu_dx) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
		emu_cl = 0x2;
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
		emu_shrw(&emu_ax, 0x1);
		emu_andw(&emu_ax, 0x7F);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39F2));
		if (emu_ax <= emu_get_memory16(emu_ds, 0x00, 0x39F2)) goto l__0AD8;
	}
l__0AC6:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x1), 0x1);
l__0AD8:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0AE6); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_Update();
l__0AE6:
	emu_addw(&emu_sp, 0x6);
	emu_incw(&emu_di);
l__0AEA:
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((int16)emu_di >= (int16)emu_get_memory16(emu_ss, emu_bp, -0x16)) goto l__0AF2;
	goto l__09E2;
l__0AF2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x54) < (int16)0x0) goto l__0B44;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_di = emu_get_memory16(emu_es, emu_bx, 0x54);
	emu_cmpw(&emu_di, 0x2);
	if ((int16)emu_di >= (int16)0x2) goto l__0B0C;
	emu_ax = emu_di;
	goto l__0B0F;
l__0B0C:
	emu_ax = 0x2;
l__0B0F:
	emu_di = emu_ax;
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3E);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x40));
	if (emu_ax == 0) {
		emu_andw(&emu_di, 0x1);
	}
l__0B29:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x40);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x3E);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	goto l__0B4E;
l__0B44:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x2C70;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
l__0B4E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x1000);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x3C));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x3A));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0B84); emu_cs = 0x151A; f__151A_000E_0013_5840();
l__0B84:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ds, 0x00, 0x37A4) = 0x0;
l__0B8D:
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
 * Decompiled function f__0C3A_0B93_0034_3B6D()
 *
 * @name f__0C3A_0B93_0034_3B6D
 * @implements 0C3A:0B93:0034:3B6D ()
 * @implements 0C3A:0BC7:0008:E857
 * @implements 0C3A:0BCF:0004:D579
 * @implements 0C3A:0BD3:0021:C4A1
 * @implements 0C3A:0BF4:0017:6A02
 * @implements 0C3A:0C0B:0028:CFFD
 * @implements 0C3A:0C2C:0007:DB95
 * @implements 0C3A:0C33:0016:4F85
 * @implements 0C3A:0C36:0013:31B9
 * @implements 0C3A:0C3E:000B:B878
 * @implements 0C3A:0C44:0005:D37A
 * @implements 0C3A:0C47:0002:C6BA
 * @implements 0C3A:0C49:000B:85B7
 * @implements 0C3A:0C4A:000A:45BF
 * @implements 0C3A:0C54:0002:B73A
 * @implements 0C3A:0C56:0006:F7CE
 *
 * Called From: 0C3A:1897:001E:1AEF
 */
void f__0C3A_0B93_0034_3B6D()
{
l__0B93:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x10);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_di;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x2D52);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__0BC7;
	goto l__0C54;
l__0BC7:
	emu_cmpw(&emu_di, 0x1);
	if (emu_di != 0x1) goto l__0BCF;
	goto l__0C54;
l__0BCF:
	emu_xorw(&emu_si, emu_si);
	goto l__0C4A;
l__0BD3:
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_dx = 0x12;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x2C64);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	goto l__0C36;
l__0BF4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0C0B); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_B4CD_0750();
l__0C0B:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xA);
	if (emu_ax == 0xA) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
		emu_cl = 0x2;
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
		emu_ah = 0x0;
		emu_andw(&emu_ax, 0x7);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
		if (emu_ax == emu_get_memory16(emu_ss, emu_bp,  0x8)) goto l__0C33;
	}
l__0C2C:
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	goto l__0C3E;
l__0C33:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
l__0C36:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp, -0x6)) goto l__0BF4;
l__0C3E:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) == 0x0) goto l__0C49;
l__0C44:
	emu_ax = 0x1;
l__0C47:
	goto l__0C56;
l__0C49:
	emu_incw(&emu_si);
l__0C4A:
	emu_cmpw(&emu_si, 0x1000);
	if ((int16)emu_si < (int16)0x1000) goto l__0BD3;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0C47;
l__0C54:
	goto l__0C44;
l__0C56:
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
 * Decompiled function f__0C3A_1B79_0021_8C40()
 *
 * @name f__0C3A_1B79_0021_8C40
 * @implements 0C3A:1B79:0021:8C40 ()
 * @implements 0C3A:1B97:0003:5C0D
 * @implements 0C3A:1B9A:0026:93A4
 * @implements 0C3A:1BC0:0028:37B2
 * @implements 0C3A:1BE8:0007:272B
 * @implements 0C3A:1BEF:0019:E86F
 * @implements 0C3A:1C08:0069:2044
 * @implements 0C3A:1C4A:0027:2378
 * @implements 0C3A:1C60:0011:5C72
 * @implements 0C3A:1C71:0068:B126
 * @implements 0C3A:1C83:0056:A39E
 * @implements 0C3A:1CC3:0016:6D58
 * @implements 0C3A:1CD9:0045:61E9
 * @implements 0C3A:1D01:001D:9D99
 * @implements 0C3A:1D16:0008:1F0E
 * @implements 0C3A:1D1E:0003:5DA9
 * @implements 0C3A:1D21:0004:E479
 * @implements 0C3A:1D25:001F:E40E
 * @implements 0C3A:1D3A:000A:DFCB
 * @implements 0C3A:1D44:0019:8A47
 * @implements 0C3A:1D5D:009E:865A
 * @implements 0C3A:1D72:0089:930C
 * @implements 0C3A:1DA0:005B:730E
 * @implements 0C3A:1DFB:0008:5638
 * @implements 0C3A:1E03:0029:1BC2
 * @implements 0C3A:1E23:0009:F391
 * @implements 0C3A:1E24:0008:F3B2
 * @implements 0C3A:1E2C:0002:CC3A
 * @implements 0C3A:1E2E:000C:BB3D
 * @implements 0C3A:1E3A:000C:2DAD
 * @implements 0C3A:1E46:0009:5A36
 * @implements 0C3A:1E4F:0006:F7CE
 *
 * Called From: 0AEC:05EF:001A:1D41
 * Called From: 0C3A:1522:000B:E0E2
 * Called From: 0C3A:1522:001A:38D1
 * Called From: 1423:0CA4:0012:C249
 */
void f__0C3A_1B79_0021_8C40()
{
l__1B79:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__1B9A;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__1B97:
	goto l__1E4F;
l__1B9A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1BC0); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__1BC0:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_subw(&emu_ax, 0x3);
	emu_bx = emu_ax;
	emu_cmpw(&emu_bx, 0x8);
	if (emu_bx <= 0x8) goto l__1BE8;
	goto l__1E3A;
l__1BE8:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1E55);
	switch (emu_ip) {
		case 0x1BEF: goto l__1BEF;
		case 0x1D21: goto l__1D21;
		case 0x1E2E: goto l__1E2E;
		case 0x1E3A: goto l__1E3A;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0C3A; emu_last_ip = 0x1BEA; emu_last_length = 0x0007; emu_last_crc = 0x272B;
			emu_call();
			return;
	}
l__1BEF:
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0xA;
	emu_xorw(&emu_si, emu_si);
	goto l__1D16;
l__1C08:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_di = emu_get_memory16(emu_es, emu_bx, 0x1A);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x1E);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x1C);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_dx;
	emu_cmpw(&emu_si, 0x7);
	if (emu_si == 0x7) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x8), 0x0);
		if (emu_get_memory8(emu_es, emu_bx, 0x8) == 0x0) {
			emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x1);
			if ((int16)emu_get_memory16(emu_ds, 0x00, 0x38B2) >= (int16)0x1) {
				emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0xFBFF);
				emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x16), 0xFFFF);
				emu_di = 0x2;
			}
		}
	}
l__1C4A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_andw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_andw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x16)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x18));
		if (emu_dx == emu_get_memory16(emu_ss, emu_bp, -0x18)) goto l__1C71;
	}
l__1C60:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1C71;
	goto l__1D01;
l__1C71:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x8), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x8) != 0x0) {
		emu_cmpw(&emu_si, 0x3);
		if (emu_si == 0x3) {
			emu_di = 0x2;
		}
	}
l__1C83:
	emu_ax = emu_di;
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x38B2)) goto l__1D01;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x31);
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_dx = 0x1;
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) == 0) goto l__1D01;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x21);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x4E));
	if (emu_al > emu_get_memory8(emu_es, emu_bx, 0x4E)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
		emu_ax = (int8)emu_al;
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
		if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1CD9;
	}
l__1CC3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = 0x1;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_dx);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	goto l__1D01;
l__1CD9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x21);
		emu_ax = (int8)emu_al;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_dl = emu_get_memory8(emu_es, emu_bx, 0x4E);
		emu_dh = 0x0;
		emu_incw(&emu_dx);
		emu_cmpw(&emu_ax, emu_dx);
		if ((int16)emu_ax <= (int16)emu_dx) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
			emu_get_memory8(emu_es, emu_bx, 0x2A) = 0xFF;
		}
	}
l__1D01:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_shlw(&emu_dx, 0x1);
	emu_rclw(&emu_ax, 0x1);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x60);
	emu_incw(&emu_si);
l__1D16:
	emu_cmpw(&emu_si, 0x13);
	if ((int16)emu_si >= (int16)0x13) goto l__1D1E;
	goto l__1C08;
l__1D1E:
	goto l__1E46;
l__1D21:
	emu_xorw(&emu_si, emu_si);
	goto l__1D3A;
l__1D25:
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_get_memory8(emu_es, emu_bx, 0x2A) = 0x0;
	emu_incw(&emu_si);
l__1D3A:
	emu_cmpw(&emu_si, 0x1B);
	if ((int16)emu_si < (int16)0x1B) goto l__1D25;
	emu_xorw(&emu_si, emu_si);
	goto l__1E24;
l__1D44:
	emu_ax = emu_si;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4A);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x12) != 0xFFFF) goto l__1D5D;
	goto l__1E23;
l__1D5D:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0xD);
	if (emu_get_memory16(emu_ss, emu_bp, -0x12) == 0xD) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x47), 0x2);
		if (emu_get_memory16(emu_es, emu_bx, 0x47) == 0x2) {
			emu_get_memory16(emu_ss, emu_bp, -0x12) = 0xE;
		}
	}
l__1D72:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x21);
	emu_ax = (int8)emu_al;
	emu_di = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0xA);
	if (emu_get_memory16(emu_ss, emu_bp, -0x12) == 0xA) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x47), 0x2);
		if (emu_get_memory16(emu_es, emu_bx, 0x47) == 0x2) {
			emu_decw(&emu_di);
		}
	}
l__1DA0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_andw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	emu_andw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1E));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x1E)) goto l__1E23;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_es, emu_bx, 0x1C));
	if (emu_dx != emu_get_memory16(emu_es, emu_bx, 0x1C)) goto l__1E23;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x31);
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x47);
	emu_dx = 0x1;
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) == 0) goto l__1E23;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x4E);
	emu_ah = 0x0;
	emu_cmpw(&emu_ax, emu_di);
	if ((int16)emu_ax < (int16)emu_di) goto l__1E03;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_get_memory8(emu_es, emu_bx, 0x2A) = 0x1;
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x12);
	emu_push(emu_cs); emu_push(0x1DFB); emu_cs = 0x01F7; emu_Tools_Shld();
l__1DFB:
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_dx);
	goto l__1E23;
l__1E03:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x4E);
		emu_ah = 0x0;
		emu_incw(&emu_ax);
		emu_cmpw(&emu_ax, emu_di);
		if ((int16)emu_ax >= (int16)emu_di) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
			emu_get_memory8(emu_es, emu_bx, 0x2A) = 0xFF;
		}
	}
l__1E23:
	emu_incw(&emu_si);
l__1E24:
	emu_cmpw(&emu_si, 0x8);
	if ((int16)emu_si >= (int16)0x8) goto l__1E2C;
	goto l__1D44;
l__1E2C:
	goto l__1E46;
l__1E2E:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0xFFFF;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0xFFFF;
	goto l__1E46;
l__1E3A:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	goto l__1E46;
l__1E46:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__1B97;
l__1E4F:
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
 * Decompiled function f__0C3A_1E67_0011_E44A()
 *
 * @name f__0C3A_1E67_0011_E44A
 * @implements 0C3A:1E67:0011:E44A ()
 * @implements 0C3A:1E78:000D:8192
 * @implements 0C3A:1E85:0018:6B6F
 * @implements 0C3A:1E9D:0012:F3F8
 * @implements 0C3A:1EAF:0019:AC4B
 * @implements 0C3A:1EC8:000E:0022
 * @implements 0C3A:1ED6:0012:8463
 * @implements 0C3A:1EE8:003B:2E58
 * @implements 0C3A:1EFF:0024:7F8D
 * @implements 0C3A:1F23:0014:9D7F
 * @implements 0C3A:1F37:0011:68E8
 * @implements 0C3A:1F48:0028:F5E4
 * @implements 0C3A:1F6C:0004:893F
 *
 * Called From: 0C3A:1879:0023:A7FF
 * Called From: 0C3A:1A09:001E:E768
 */
void f__0C3A_1E67_0011_E44A()
{
l__1E67:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__1E78;
	goto l__1F6C;
l__1E78:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__1E85;
	goto l__1F6C;
l__1E85:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x8) goto l__1EC8;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1E9D); emu_cs = 0x1082; emu_Structure_Get_ByIndex();
l__1E9D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1EAF); emu_cs = 0x1082; emu_Structure_Free();
l__1EAF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	goto l__1EFF;
l__1EC8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1ED6); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
l__1ED6:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1EE8); emu_cs = 0x0FE4; emu_Unit_Free();
l__1EE8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2D07;
l__1EFF:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x18);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x50);
	emu_cl = 0x8;
	emu_shrw(&emu_dx, emu_cl);
	emu_subw(&emu_ax, emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x18));
	emu_push(emu_cs); emu_push(0x1F23); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_ValueToPercent();
l__1F23:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_cs); emu_push(0x1F37); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_PercentToValue();
l__1F37:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1F48); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__1F48:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_pop(&emu_ax);
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xBFFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x50) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
l__1F6C:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_2207_001D_EDF2()
 *
 * @name f__0C3A_2207_001D_EDF2
 * @implements 0C3A:2207:001D:EDF2 ()
 * @implements 0C3A:221F:0005:DC9C
 * @implements 0C3A:2221:0003:DD08
 * @implements 0C3A:2224:0014:B608
 * @implements 0C3A:2238:0008:9688
 * @implements 0C3A:2240:0008:984F
 * @implements 0C3A:2248:001B:BBAA
 * @implements 0C3A:2263:0043:67B1
 * @implements 0C3A:22A6:001C:0224
 * @implements 0C3A:22B7:000B:BD26
 * @implements 0C3A:22C2:0005:86E2
 * @implements 0C3A:22C7:0006:F7CE
 *
 * Called From: 0C3A:23D3:0010:BC47
 * Called From: 0C3A:23D3:001C:D2B1
 * Called From: 1A34:35E0:0015:9E61
 */
void f__0C3A_2207_001D_EDF2()
{
l__2207:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
		emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
		if (emu_ax != 0) goto l__2224;
	}
l__221F:
	emu_xorw(&emu_ax, emu_ax);
l__2221:
	goto l__22C7;
l__2224:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2238); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__2238:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2240); emu_cs = 0x1423; emu_House_AreAllied();
l__2240:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__2248;
	goto l__221F;
l__2248:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_dx = 0x1;
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) != 0) goto l__2263;
	goto l__221F;
l__2263:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2D);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2F));
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x22A6); emu_cs = 0x0F3F; emu_Tile_GetDistanceRoundedUp();
l__22A6:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) {
		emu_ax = emu_si;
		emu_xorw(&emu_dx, emu_dx);
		emu_divw(&emu_ax, emu_di);
		emu_si = emu_ax;
	}
l__22B7:
	emu_cmpw(&emu_si, 0x7D00);
	if (emu_si <= 0x7D00) goto l__22C2;
	emu_ax = 0x7D00;
	/* Unresolved jump */ emu_ip = 0x22C4; emu_last_cs = 0x0C3A; emu_last_ip = 0x22C0; emu_last_length = 0x000B; emu_last_crc = 0xBD26; emu_call();
l__22C2:
	emu_ax = emu_si;
	goto l__2221;
l__22C7:
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
 * Decompiled function f__0C3A_22CD_0029_8F46()
 *
 * @name f__0C3A_22CD_0029_8F46
 * @implements 0C3A:22CD:0029:8F46 ()
 * @implements 0C3A:22F3:0003:DDAD
 * @implements 0C3A:22F6:000C:39D3
 * @implements 0C3A:2302:003A:85DA
 * @implements 0C3A:233C:0006:D732
 * @implements 0C3A:2342:005A:53AA
 * @implements 0C3A:239C:001E:17E0
 * @implements 0C3A:23A4:0016:3ADC
 * @implements 0C3A:23BA:001C:D2B1
 * @implements 0C3A:23C6:0010:BC47
 * @implements 0C3A:23D6:002B:25DC
 * @implements 0C3A:23F6:000B:166D
 * @implements 0C3A:2401:0013:9D6C
 * @implements 0C3A:2403:0011:D65A
 * @implements 0C3A:2414:0019:1EF3
 * @implements 0C3A:2424:0009:9B9D
 * @implements 0C3A:242D:0006:F7CE
 *
 * Called From: 1A34:353C:0011:412D
 * Called From: 1A34:35A2:001F:BC73
 */
void f__0C3A_22CD_0029_8F46()
{
l__22CD:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__22F6;
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__22F3:
	goto l__242D;
l__22F6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4D));
	emu_push(emu_cs); emu_push(0x2302); emu_cs = 0x167E; emu_Tools_Index_GetTile();
l__2302:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x50);
	emu_cl = 0x8;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x233C); emu_cs = 0x1082; emu_Structure_FindFirst();
l__233C:
	emu_addw(&emu_sp, 0x8);
	goto l__2403;
l__2342:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x44);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_si, 0xA);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x2E5C));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2E5E));
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__23C6;
	emu_cmpw(&emu_di, 0x4);
	if (emu_di == 0x4) goto l__23C6;
	emu_cmpw(&emu_di, 0x1);
	if (emu_di != 0x1) goto l__23A4;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x239C); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__239C:
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0x16)) goto l__23C6;
l__23A4:
	emu_cmpw(&emu_di, 0x2);
	if (emu_di != 0x2) goto l__23F6;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x23BA); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__23BA:
	emu_addw(&emu_sp, 0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_shlw(&emu_dx, 0x1);
	emu_cmpw(&emu_ax, emu_dx);
	if ((int16)emu_ax > (int16)emu_dx) goto l__23F6;
l__23C6:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x23D6); f__0C3A_2207_001D_EDF2();
l__23D6:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp, -0xC)) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
		emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	}
l__23F6:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2401); emu_cs = 0x1082; emu_Structure_FindNext();
l__2401:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__2403:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__2414;
	goto l__2342;
l__2414:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) == 0x0) {
		emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
		emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	}
l__2424:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__22F3;
l__242D:
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
 * Decompiled function f__0C3A_2714_0015_B6F6()
 *
 * @name f__0C3A_2714_0015_B6F6
 * @implements 0C3A:2714:0015:B6F6 ()
 * @implements 0C3A:2726:0003:DD19
 * @implements 0C3A:2729:0017:EFBB
 * @implements 0C3A:2740:002E:3CAB
 * @implements 0C3A:2742:002C:3C61
 * @implements 0C3A:2744:002A:34CF
 * @implements 0C3A:276E:0008:A466
 * @implements 0C3A:2776:0022:81DF
 * @implements 0C3A:2798:003A:C97D
 * @implements 0C3A:279E:0034:EAA1
 * @implements 0C3A:27D2:0008:A466
 * @implements 0C3A:27DA:002B:0599
 * @implements 0C3A:2805:000B:78E0
 * @implements 0C3A:280B:0005:96F1
 * @implements 0C3A:2810:0004:DE52
 *
 * Called From: 0AEC:1238:001C:8D4B
 * Called From: 0C3A:182B:001B:AF52
 * Called From: 0C3A:182B:0015:BE59
 */
void f__0C3A_2714_0015_B6F6()
{
l__2714:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__2729;
	emu_xorw(&emu_ax, emu_ax);
l__2726:
	goto l__2810;
l__2729:
	emu_xorw(&emu_di, emu_di);
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) goto l__2744;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x2) != 0) goto l__2740;
	emu_ax = 0x1;
	goto l__2742;
l__2740:
	emu_xorw(&emu_ax, emu_ax);
l__2742:
	emu_si = emu_ax;
l__2744:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__279E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x2) == 0) goto l__279E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) { /* Unresolved jump */ emu_ip = 0x2779; emu_last_cs = 0x0C3A; emu_last_ip = 0x275F; emu_last_length = 0x002A; emu_last_crc = 0x34CF; emu_call(); return; }
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x8C;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x276E); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__276E:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2776); emu_cs = 0x10E4; emu_GUI_DisplayText();
l__2776:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0xFFFD);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xBFFF);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x2798); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Update();
l__2798:
	emu_addw(&emu_sp, 0x6);
	emu_di = 0x1;
l__279E:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__280B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x2) != 0) goto l__280B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) == 0x0) goto l__280B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) { /* Unresolved jump */ emu_ip = 0x27DD; emu_last_cs = 0x0C3A; emu_last_ip = 0x27C3; emu_last_length = 0x0034; emu_last_crc = 0xEAA1; emu_call(); return; }
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x8D;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x27D2); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__27D2:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x27DA); emu_cs = 0x10E4; emu_GUI_DisplayText();
l__27DA:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4000);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xDFFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x2);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x2805); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_01CE_002B_7574();
l__2805:
	emu_addw(&emu_sp, 0x6);
	emu_di = 0x1;
l__280B:
	emu_ax = emu_di;
	goto l__2726;
l__2810:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0C3A_2814_0015_76F0()
 *
 * @name f__0C3A_2814_0015_76F0
 * @implements 0C3A:2814:0015:76F0 ()
 * @implements 0C3A:2826:0003:1D1F
 * @implements 0C3A:2829:0024:5E4A
 * @implements 0C3A:2838:0015:335F
 * @implements 0C3A:284D:002E:3E5B
 * @implements 0C3A:284F:002C:3E91
 * @implements 0C3A:2851:002A:363F
 * @implements 0C3A:287B:0008:A466
 * @implements 0C3A:2883:0023:35DC
 * @implements 0C3A:2886:0020:268D
 * @implements 0C3A:28A6:0052:D8B0
 * @implements 0C3A:28AC:004C:0493
 * @implements 0C3A:28F8:0008:A466
 * @implements 0C3A:2900:001A:5465
 * @implements 0C3A:2903:0017:72C7
 * @implements 0C3A:291A:000B:B8E5
 * @implements 0C3A:2920:0005:56F4
 * @implements 0C3A:2925:0004:DE52
 *
 * Called From: 0972:08E5:0038:5CE7
 * Called From: 0AEC:121C:001C:6F1D
 * Called From: 0C3A:149C:0014:8AFF
 */
void f__0C3A_2814_0015_76F0()
{
l__2814:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__2829;
	emu_xorw(&emu_ax, emu_ax);
l__2826:
	goto l__2925;
l__2829:
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) == 0) {
		emu_xorw(&emu_si, emu_si);
	}
l__2838:
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) goto l__2851;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2000) != 0) goto l__284D;
	emu_ax = 0x1;
	goto l__284F;
l__284D:
	emu_xorw(&emu_ax, emu_ax);
l__284F:
	emu_si = emu_ax;
l__2851:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__28AC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2000) == 0) goto l__28AC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__2886;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x8A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x287B); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__287B:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2883); emu_cs = 0x10E4; emu_GUI_DisplayText();
l__2883:
	emu_addw(&emu_sp, 0x6);
l__2886:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xDFFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xBFFF);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x28A6); emu_cs = 0x348B; overlay(0x348B, 0); emu_GUI_Widget_Update();
l__28A6:
	emu_addw(&emu_sp, 0x6);
	emu_di = 0x1;
l__28AC:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__2920;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2000) != 0) goto l__2920;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x1A);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if (emu_ax == emu_get_memory16(emu_es, emu_bx, 0xE)) goto l__2920;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__2903;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x8B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x28F8); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__28F8:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2900); emu_cs = 0x10E4; emu_GUI_DisplayText();
l__2900:
	emu_addw(&emu_sp, 0x6);
l__2903:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x6000);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_cs); emu_push(0x291A); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_01CE_002B_7574();
l__291A:
	emu_addw(&emu_sp, 0x6);
	emu_di = 0x1;
l__2920:
	emu_ax = emu_di;
	goto l__2826;
l__2925:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
