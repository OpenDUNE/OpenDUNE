/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0FE4_0002_0021_D0A9()
 *
 * @name f__0FE4_0002_0021_D0A9
 * @implements 0FE4:0002:0021:D0A9 ()
 * @implements 0FE4:0023:005B:3AE9
 * @implements 0FE4:007E:0010:D40F
 * @implements 0FE4:008E:0018:0071
 * @implements 0FE4:0096:0010:976E
 * @implements 0FE4:00A6:0014:B079
 * @implements 0FE4:00BA:007F:22ED
 * @implements 0FE4:00DF:005A:6D90
 * @implements 0FE4:0100:0039:3CD7
 * @implements 0FE4:012D:000C:1EF1
 * @implements 0FE4:012E:000B:1A91
 * @implements 0FE4:0139:0006:F7CE
 *
 * Called From: 07D4:004E:0005:2369
 */
void f__0FE4_0002_0021_D0A9()
{
l__0002:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_get_memory16(emu_es, emu_bx, 0xA) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_get_memory16(emu_es, emu_bx, 0xC) = 0x0;
	emu_xorw(&emu_si, emu_si);
	goto l__012E;
l__0023:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x8440);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x843E);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x8444);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x8442);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_dx = 0x1;
	emu_cl = emu_get_memory8(emu_ds, 0x00, 0x3A38);
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) == 0) goto l__0096;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x4) != 0) goto l__0096;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x007E); emu_cs = 0x1423; emu_House_AreAllied();
l__007E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__008E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0xC));
	goto l__0096;
l__008E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0xA));
l__0096:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x00A6); emu_cs = 0x0F3F; emu_Tile_GetY();
l__00A6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x00BA); emu_cs = 0x0F3F; emu_Tile_GetY();
l__00BA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x0) {
		emu_subw(&emu_di, 0x100);
	}
l__00DF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x0) {
		emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x100);
	}
l__0100:
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((int16)emu_di > (int16)emu_get_memory16(emu_ss, emu_bp, -0xA)) {
		emu_bx = emu_si;
		emu_cl = 0x2;
		emu_shlw(&emu_bx, emu_cl);
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
		emu_get_memory16(emu_ds, emu_bx, 0x8440) = emu_ax;
		emu_get_memory16(emu_ds, emu_bx, 0x843E) = emu_dx;
		emu_bx = emu_si;
		emu_cl = 0x2;
		emu_shlw(&emu_bx, emu_cl);
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_get_memory16(emu_ds, emu_bx, 0x8444) = emu_ax;
		emu_get_memory16(emu_ds, emu_bx, 0x8442) = emu_dx;
	}
l__012D:
	emu_incw(&emu_si);
l__012E:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x35EC);
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_si);
	if ((int16)emu_ax <= (int16)emu_si) goto l__0139;
	goto l__0023;
l__0139:
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
 * Decompiled function f__0FE4_0632_0031_75AA()
 *
 * @name f__0FE4_0632_0031_75AA
 * @implements 0FE4:0632:0031:75AA ()
 * @implements 0FE4:0663:000F:F660
 * @implements 0FE4:066A:0008:C849
 * @implements 0FE4:0672:0004:893F
 *
 * Called From: 06F7:0148:000B:E1A3
 */
void f__0FE4_0632_0031_75AA()
{
l__0632:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__066A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x6F), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x6F) == 0x0) goto l__066A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6F);
	emu_ax = (int8)emu_al;
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0663); emu_cs = 0x104B; emu_AirUnit_Get_ByIndex();
l__0663:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
l__066A:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__0672;
l__0672:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
