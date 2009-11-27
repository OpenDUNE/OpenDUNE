/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__167E_02D8_000C_4C9F()
 *
 * @name f__167E_02D8_000C_4C9F
 * @implements 167E:02D8:000C:4C9F ()
 * @implements 167E:02E4:000D:1F6F
 * @implements 167E:02F1:0005:C100
 * @implements 167E:02F6:0007:DC29
 * @implements 167E:02FD:0003:C01A
 * @implements 167E:02FE:0002:CB3A
 * @implements 167E:0300:0005:011C
 * @implements 167E:0305:0007:9375
 * @implements 167E:030C:0002:B7BA
 * @implements 167E:030E:0002:C03A
 * @implements 167E:0310:0006:56A9
 * @implements 167E:0316:0003:2E57
 *
 * Called From: 0C10:0032:0006:5783
 * Called From: 0C10:003F:000D:AB27
 * Called From: 0C10:019C:000D:4CEC
 * Called From: 0EDB:02D2:0006:5783
 * Called From: 0EDB:04CD:0024:408E
 * Called From: 176C:2BEE:000A:4B0F
 */
void f__167E_02D8_000C_4C9F()
{
l__02D8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x02E4); emu_Tools_Index_GetType();
l__02E4:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__0300;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__02F1;
	goto l__030E;
l__02F1:
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x02F6); emu_Tools_Index_Decode();
l__02F6:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02FD); emu_cs = 0x1082; emu_Structure_Get_ByIndex();
l__02FD:
	emu_pop(&emu_cx);
l__02FE:
	goto l__0316;
l__0300:
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0305); emu_Tools_Index_Decode();
l__0305:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x030C); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
l__030C:
	goto l__02FD;
l__030E:
	goto l__0310;
l__0310:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__02FE;
l__0316:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

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
