/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__167E_0284_000C_4C88()
 *
 * @name f__167E_0284_000C_4C88
 * @implements 167E:0284:000C:4C88 ()
 * @implements 167E:0290:000B:9317
 * @implements 167E:029B:0007:9375
 * @implements 167E:02A2:0003:C81A
 * @implements 167E:02A3:0002:C33A
 * @implements 167E:02A5:0006:5EA9
 * @implements 167E:02AB:0003:2E57
 *
 * Called From: 06F7:00EE:0008:086B
 * Called From: 06F7:018F:000C:AE31
 * Called From: 06F7:01A0:0011:A76A
 * Called From: 06F7:02A2:000C:9030
 * Called From: 06F7:02A2:0016:E02E
 * Called From: 0972:0AAF:000A:8B0A
 * Called From: 0972:11EB:000C:47C7
 * Called From: 0AEC:043D:0010:8719
 * Called From: 0C10:01D1:0016:1D4B
 * Called From: 0EDB:0303:001E:F83C
 * Called From: 0EDB:0542:0006:9786
 * Called From: 176C:03B5:0013:F833
 * Called From: 176C:0809:001D:3E0E
 * Called From: 176C:0D80:000D:5110
 * Called From: 176C:162B:000C:43CF
 * Called From: 176C:16FA:0009:D7CB
 * Called From: 176C:2566:0019:4894
 * Called From: 1A34:2640:0016:7F42
 * Called From: 1A34:2640:0024:2E24
 */
void f__167E_0284_000C_4C88()
{
l__0284:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0290); emu_Tools_Index_GetType();
l__0290:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) goto l__02A5;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x029B); emu_Tools_Index_Decode();
l__029B:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02A2); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
l__02A2:
	emu_pop(&emu_cx);
l__02A3:
	goto l__02AB;
l__02A5:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__02A3;
l__02AB:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__167E_02AE_000C_CC85()
 *
 * @name f__167E_02AE_000C_CC85
 * @implements 167E:02AE:000C:CC85 ()
 * @implements 167E:02BA:000B:92AC
 * @implements 167E:02C5:0007:DC29
 * @implements 167E:02CC:0003:C81A
 * @implements 167E:02CD:0002:C33A
 * @implements 167E:02CF:0006:5EA9
 * @implements 167E:02D5:0003:2E57
 *
 * Called From: 0C10:020D:0006:3784
 * Called From: 0C10:0218:000B:6134
 * Called From: 0EDB:02A3:0020:3D83
 * Called From: 0EDB:056A:0006:3784
 * Called From: 167E:0326:0010:B56F
 * Called From: 176C:082F:0006:3784
 * Called From: 176C:08C4:000D:F112
 * Called From: 176C:0C13:000D:F112
 * Called From: 176C:1AD4:0016:C3C3
 * Called From: 176C:2184:001C:0800
 * Called From: 1A34:1C0D:0006:3784
 * Called From: 1A34:1C0D:000A:2B08
 * Called From: 1A34:28C7:0016:FFBA
 */
void f__167E_02AE_000C_CC85()
{
l__02AE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x02BA); emu_Tools_Index_GetType();
l__02BA:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax != 0x3) goto l__02CF;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x02C5); emu_Tools_Index_Decode();
l__02C5:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02CC); emu_cs = 0x1082; emu_Structure_Get_ByIndex();
l__02CC:
	emu_pop(&emu_cx);
l__02CD:
	goto l__02D5;
l__02CF:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__02CD;
l__02D5:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

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
	emu_push(0x0329); f__167E_02AE_000C_CC85();
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
