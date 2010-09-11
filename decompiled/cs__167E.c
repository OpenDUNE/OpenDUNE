/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__167E_0319_0010_B56F()
 *
 * @name f__167E_0319_0010_B56F
 * @implements 167E:0319:0010:B56F ()
 * @implements 167E:0329:002B:09A6
 * @implements 167E:0354:0038:56F3
 * @implements 167E:038C:0009:AAB4
 * @implements 167E:0395:0016:379C
 * @implements 167E:03AB:0002:C2BA
 * @implements 167E:03AD:0005:C0BA
 * @implements 167E:03B2:001E:4E1D
 * @implements 167E:03D0:000B:8BBD
 * @implements 167E:03DB:0006:F7CE
 *
 * Called From: 0EDB:0276:0013:346E
 * Called From: 176C:15AB:0015:35C1
 */
void f__167E_0319_0010_B56F()
{
l__0319:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0329); emu_Tools_Index_GetStructure();
l__0329:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__03AD;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0354); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0354:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x44);
	emu_cl = 0x4;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_bx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x038C); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
l__038C:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0395); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17DC_0019_CB46();
l__0395:
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x4);
	emu_andw(&emu_ax, 0x7);
	emu_shlw(&emu_ax, 0x1);
	emu_pop(&emu_bx);
	emu_addw(&emu_bx, emu_ax);
	emu_addw(&emu_si, emu_get_memory16(emu_ds, emu_bx, 0x2CE2));
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03AB); emu_cs = 0x0F3F; emu_Tile_Unpack();
l__03AB:
	goto l__03B2;
l__03AD:
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x03B2); emu_Tools_Index_GetTile();
l__03B2:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x03D0); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__03D0:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__03DB;
l__03DB:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
