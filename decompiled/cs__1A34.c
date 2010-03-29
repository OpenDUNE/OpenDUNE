/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__1A34_0E2E_0015_7E65()
 *
 * @name f__1A34_0E2E_0015_7E65
 * @implements 1A34:0E2E:0015:7E65 ()
 * @implements 1A34:0E3D:0006:FDAA
 * @implements 1A34:0E40:0003:1DA0
 * @implements 1A34:0E43:0028:1D74
 * @implements 1A34:0E6B:000A:0A68
 * @implements 1A34:0E75:002C:EBA6
 * @implements 1A34:0EA1:0018:9569
 * @implements 1A34:0EB9:0006:26E8
 * @implements 1A34:0EBF:002A:B01D
 * @implements 1A34:0EE9:000E:D462
 * @implements 1A34:0EF7:0008:9688
 * @implements 1A34:0EFF:002F:81D1
 * @implements 1A34:0F2B:0003:A2A3
 * @implements 1A34:0F2E:0006:66E9
 * @implements 1A34:0F34:000A:9457
 * @implements 1A34:0F3E:0005:238B
 * @implements 1A34:0F43:0005:8BCF
 *
 * Called From: 176C:2822:0017:D1B6
 * Called From: 1A34:0AD4:000B:CA1A
 * Called From: 1A34:29CA:0013:0581
 * Called From: 1A34:29CA:0015:974C
 */
void f__1A34_0E2E_0015_7E65()
{
l__0E2E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0E43;
l__0E3D:
	emu_ax = 0x1;
l__0E40:
	goto l__0F43;
l__0E43:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0E6B); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0E6B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0E75); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__0E75:
	emu_pop(&emu_cx);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_pop(&emu_ax);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x3C));
	emu_bx = emu_ax;
	emu_cmpb(&emu_get_memory8(emu_ds, emu_bx, 0x3A42), 0x0);
	if (emu_get_memory8(emu_ds, emu_bx, 0x3A42) != 0x0) goto l__0EA1;
	goto l__0E3D;
l__0EA1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x19) { /* Unresolved jump */ emu_ip = 0x0EB5; emu_last_cs = 0x1A34; emu_last_ip = 0x0EA9; emu_last_length = 0x0018; emu_last_crc = 0x9569; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x4) goto l__0EB9;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0E40;
l__0EB9:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0EBF); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Unit_Get_ByPackedTile();
l__0EBF:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__0F2E;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp,  0x8)) { /* Unresolved jump */ emu_ip = 0x0EDE; emu_last_cs = 0x1A34; emu_last_ip = 0x0ED7; emu_last_length = 0x002A; emu_last_crc = 0xB01D; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_dx == emu_get_memory16(emu_ss, emu_bp,  0x6)) goto l__0F2E;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0EE9); emu_Unit_GetHouseID();
l__0EE9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x0EF7); emu_Unit_GetHouseID();
l__0EF7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EFF); emu_cs = 0x1423; emu_House_AreAllied();
l__0EFF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x1);
		if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x1) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
			emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
			emu_ax = (int8)emu_al;
			emu_dx = 0x5A;
			emu_imuluw(&emu_ax, emu_dx);
			emu_dx = 0x2D07;
			emu_bx = emu_ax;
			emu_es = emu_dx;
			emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
			if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x0) goto l__0F2E;
		}
	}
l__0F2B:
	goto l__0E3D;
l__0F2E:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0F34); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__0F34:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__0F3E;
	emu_ax = 0x1;
	/* Unresolved jump */ emu_ip = 0x0F40; emu_last_cs = 0x1A34; emu_last_ip = 0x0F3C; emu_last_length = 0x000A; emu_last_crc = 0x9457; emu_call();
l__0F3E:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0E40;
l__0F43:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_204C_0043_B1ED()
 *
 * @name f__1A34_204C_0043_B1ED
 * @implements 1A34:204C:0043:B1ED ()
 * @implements 1A34:208F:000E:1381
 * @implements 1A34:2094:0009:10FF
 * @implements 1A34:209D:000A:40EF
 * @implements 1A34:20A7:002B:1C86
 * @implements 1A34:20D2:0019:5DD9
 * @implements 1A34:20EB:0022:BFBA
 * @implements 1A34:210D:001B:F80B
 * @implements 1A34:2112:0016:0896
 * @implements 1A34:2128:000C:2E68
 * @implements 1A34:2130:0004:893F
 *
 * Called From: 176C:0B5E:0011:575D
 * Called From: 176C:0FB0:0013:6D6D
 * Called From: 176C:1047:0013:A51E
 * Called From: 176C:1106:0010:D1EF
 * Called From: 176C:1275:0010:E384
 * Called From: 1A34:077F:000E:6A0F
 * Called From: 1A34:097D:0011:5032
 * Called From: 1A34:0AEF:000F:F7E4
 * Called From: 1A34:17D5:000C:E29A
 * Called From: 1A34:17D5:0030:AD6E
 * Called From: 1A34:17D5:0053:8778
 * Called From: B4B5:061F:0011:7F5A
 */
void f__1A34_204C_0043_B1ED()
{
l__204C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x6A) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x69) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x68) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__2094;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x58);
	emu_ax = (int8)emu_al;
	emu_dx = 0xFF;
	emu_subw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x208F); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_PercentToValue();
l__208F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_ax;
l__2094:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) != 0x0) goto l__209D;
	goto l__2128;
l__209D:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x100);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) < 0x100) goto l__20A7;
	goto l__2128;
l__20A7:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_get_memory8(emu_es, emu_bx, 0x6B) = emu_al;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x40));
	emu_push(emu_cs); emu_push(0x20D2); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_PercentToValue();
l__20D2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x20EB); emu_cs = 0x07C9; emu_Tools_AdjustToGameSpeed();
l__20EB:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp,  0xA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cl = 0x4;
	emu_shrw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_cl);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0x0) goto l__210D;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0xFF;
	goto l__2112;
l__210D:
	emu_get_memory16(emu_ss, emu_bp,  0xA) = 0x1;
l__2112:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_get_memory8(emu_es, emu_bx, 0x6A) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_get_memory8(emu_es, emu_bx, 0x68) = emu_al;
	goto l__2130;
l__2128:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x6B) = 0x0;
l__2130:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2134_001E_3E9A()
 *
 * @name f__1A34_2134_001E_3E9A
 * @implements 1A34:2134:001E:3E9A ()
 * @implements 1A34:214B:0007:54F3
 * @implements 1A34:2152:0029:FB3F
 * @implements 1A34:217B:0033:EFF3
 * @implements 1A34:21AE:001C:C286
 * @implements 1A34:21BF:000B:7C30
 * @implements 1A34:21CA:0010:2113
 * @implements 1A34:21CD:000D:A989
 * @implements 1A34:21DA:0006:F7CE
 *
 * Called From: 176C:0368:000D:D0BA
 */
void f__1A34_2134_001E_3E9A()
{
l__2134:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6A);
	emu_ah = 0x0;
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__2152;
l__214B:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__21DA;
l__2152:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x69);
	emu_ah = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x68);
	emu_ah = 0x0;
	emu_di = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x217B); emu_cs = 0x07C9; emu_Tools_AdjustToGameSpeed();
l__217B:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF00);
	if ((emu_get_memory16(emu_ss, emu_bp, -0x2) & 0xFF00) == 0) goto l__21CD;
	emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFF);
	emu_cl = 0x4;
	emu_shlw(&emu_si, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4B));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x49));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x21AE); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__21AE:
	emu_addw(&emu_sp, 0x8);
	emu_addw(&emu_ax, 0x10);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) < emu_si) {
		emu_si = emu_get_memory16(emu_ss, emu_bp, -0x4);
	}
l__21BF:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x21CA); emu_Unit_Move();
l__21CA:
	emu_addw(&emu_sp, 0x6);
l__21CD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_get_memory8(emu_es, emu_bx, 0x69) = emu_al;
	goto l__214B;
l__21DA:
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
 * Decompiled function f__1A34_232C_0011_B7DE()
 *
 * @name f__1A34_232C_0011_B7DE
 * @implements 1A34:232C:0011:B7DE ()
 * @implements 1A34:233D:0009:1DF9
 * @implements 1A34:2346:0008:0AE5
 * @implements 1A34:234E:000D:9A60
 * @implements 1A34:235B:001A:C4B6
 * @implements 1A34:2375:0036:4CD2
 * @implements 1A34:23AB:0031:C28A
 * @implements 1A34:23DC:000C:AD88
 * @implements 1A34:23DF:0009:2420
 * @implements 1A34:23E5:0003:1DA4
 * @implements 1A34:23E8:0003:9DA1
 * @implements 1A34:23EB:0019:E7B1
 * @implements 1A34:2404:0018:8B26
 * @implements 1A34:241C:000A:D495
 * @implements 1A34:2426:000F:6B18
 * @implements 1A34:2435:002A:0C1B
 * @implements 1A34:243B:0024:40BE
 * @implements 1A34:2444:001B:86FD
 * @implements 1A34:245F:004E:C488
 * @implements 1A34:249A:0013:9FB3
 * @implements 1A34:24AD:0006:0889
 * @implements 1A34:24B0:0003:62AB
 * @implements 1A34:24B5:000A:D0CF
 * @implements 1A34:24BF:001B:B989
 * @implements 1A34:24D8:0002:CBBA
 * @implements 1A34:24DA:001E:4828
 * @implements 1A34:24F1:0007:6BEA
 * @implements 1A34:24F8:0006:F7CE
 *
 * Called From: 0AEC:058A:0010:F5AC
 * Called From: 1391:0655:0013:BF12
 * Called From: 1391:06DC:0013:BF12
 * Called From: 1A34:22EE:000D:82BF
 */
void f__1A34_232C_0011_B7DE()
{
l__232C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x233D); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__233D:
	emu_andw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2346); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1816_0033_B55B();
l__2346:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x234E); emu_cs = 0x0F3F; emu_Tile_Unpack();
l__234E:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x235B); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__235B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_ax = 0x2000;
	emu_dx = 0x2000;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x2375); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
l__2375:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x4) goto l__23EB;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x23AB); emu_Unit_Create();
l__23AB:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__23E8;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0x0) goto l__23DF;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs);
	emu_push(0x23DC); emu_Unit_SetDestination();
l__23DC:
	emu_addw(&emu_sp, 0x6);
l__23DF:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
l__23E5:
	goto l__24F8;
l__23E8:
	goto l__24F1;
l__23EB:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_di);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2404); emu_Unit_Create();
l__2404:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__241C;
	goto l__24DA;
l__241C:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2426); emu_cs = 0x1423; emu_House_AreAllied();
l__2426:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__243B;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2435); emu_cs = 0x0FE4; emu_Unit_IsTypeOnMap();
l__2435:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__2444;
l__243B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
l__2444:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_dx = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x245F); emu_Unit_Create();
l__245F:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__24B5;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x100);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x10);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x10) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory8(emu_es, emu_bx, 0x58) = 0x1;
	}
l__249A:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0x0) goto l__24B0;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x24AD); emu_Unit_SetDestination();
l__24AD:
	emu_addw(&emu_sp, 0x6);
l__24B0:
	goto l__23DF;
l__24B5:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x24BF); emu_Unit_Unknown10EC();
l__24BF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x10);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x10) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x0);
		if (emu_get_memory16(emu_es, emu_bx, 0x2) == 0x0) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
			emu_incw(&emu_get_memory16(emu_es, emu_bx, 0x2));
		}
	}
l__24D8:
	goto l__24F1;
l__24DA:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x10);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x10) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x2), 0x0);
		if (emu_get_memory16(emu_es, emu_bx, 0x2) == 0x0) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
			emu_incw(&emu_get_memory16(emu_es, emu_bx, 0x2));
		}
	}
l__24F1:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__23E5;
l__24F8:
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
 * Decompiled function f__1A34_24FE_002F_672A()
 *
 * @name f__1A34_24FE_002F_672A
 * @implements 1A34:24FE:002F:672A ()
 * @implements 1A34:252D:000F:5EE3
 * @implements 1A34:253C:0008:768F
 * @implements 1A34:2544:000D:FA55
 * @implements 1A34:2551:0007:FB98
 * @implements 1A34:2558:0011:ABE2
 * @implements 1A34:2569:001B:9AFF
 * @implements 1A34:2584:0014:41D6
 * @implements 1A34:2598:0012:84AB
 * @implements 1A34:25AA:0038:84DA
 * @implements 1A34:25E2:0016:9136
 * @implements 1A34:25F8:000D:9302
 * @implements 1A34:2605:0005:517D
 * @implements 1A34:260A:0017:79E6
 * @implements 1A34:260D:0014:85AF
 * @implements 1A34:2621:0024:2E24
 * @implements 1A34:262F:0016:7F42
 * @implements 1A34:2645:0061:62F8
 * @implements 1A34:2677:002F:A9D2
 * @implements 1A34:26A6:0006:773A
 * @implements 1A34:26A9:0003:1D18
 * @implements 1A34:26AC:0011:ABE2
 * @implements 1A34:26BD:0018:5400
 * @implements 1A34:26D5:001B:C457
 * @implements 1A34:26F0:001E:5D43
 * @implements 1A34:270E:0077:D7BC
 * @implements 1A34:2732:0053:7C9E
 * @implements 1A34:275B:002A:9B6E
 * @implements 1A34:2785:0005:85EE
 * @implements 1A34:2788:0002:C13A
 * @implements 1A34:278C:0008:C849
 * @implements 1A34:2794:0006:F7CE
 *
 * Called From: 0972:1302:001F:F082
 * Called From: 1423:0885:0012:A717
 * Called From: 176C:180C:0017:CD04
 */
void f__1A34_24FE_002F_672A()
{
l__24FE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_ax = emu_si;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x252D); emu_cs = 0x167E; emu_Tools_Index_GetTile();
l__252D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x253C); emu_cs = 0x167E; emu_Tools_Index_IsValid();
l__253C:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__2544;
	goto l__278C;
l__2544:
	emu_bx = emu_si;
	emu_subw(&emu_bx, 0x12);
	emu_cmpw(&emu_bx, 0x6);
	if (emu_bx <= 0x6) goto l__2551;
	/* Unresolved jump */ emu_ip = 0x278A; emu_last_cs = 0x1A34; emu_last_ip = 0x254E; emu_last_length = 0x000D; emu_last_crc = 0xFA55; emu_call();
l__2551:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x279A);
	switch (emu_ip) {
		case 0x2558: goto l__2558;
		case 0x26AC: goto l__26AC;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x1A34; emu_last_ip = 0x2553; emu_last_length = 0x0007; emu_last_crc = 0xFB98;
			emu_call();
			return;
	}
l__2558:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2569); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
l__2569:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2584); emu_Unit_Create();
l__2584:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__2598;
	goto l__26A9;
l__2598:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x58));
	emu_push(emu_cs); emu_push(0x25AA); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
l__25AA:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_get_memory16(emu_es, emu_bx, 0x54) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_get_memory16(emu_es, emu_bx, 0x4B) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x49) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x4000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x4000) == 0) goto l__262F;
	emu_push(emu_cs); emu_push(0x25E2); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__25E2:
	emu_testw(&emu_ax, 0xF);
	if ((emu_ax & 0xF) == 0) goto l__2605;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x25F8); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__25F8:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_ax = emu_di;
	emu_cl = 0x8;
	emu_sarw(&emu_ax, emu_cl);
	goto l__260D;
l__2605:
	emu_push(emu_cs); emu_push(0x260A); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__260A:
	emu_andw(&emu_ax, 0xFF);
l__260D:
	emu_di = emu_ax;
	emu_addw(&emu_di, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_cs); emu_push(0x2621); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
l__2621:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x4B) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x49) = emu_ax;
l__262F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x50);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x51) = emu_al;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_cs); emu_push(0x2645); emu_cs = 0x167E; emu_Tools_Index_GetUnit();
l__2645:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
		emu_ax = (int8)emu_al;
		emu_dx = 0x5A;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2D07;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
		if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
			emu_shlb(&emu_get_memory8(emu_es, emu_bx, 0x51), 0x1);
		}
	}
l__2677:
	emu_cmpw(&emu_si, 0x12);
	if (emu_si == 0x12) goto l__26A9;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_dx = 0x1;
	emu_cl = emu_get_memory8(emu_ds, 0x00, 0x3A38);
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) != 0) goto l__26A9;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x26A6); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Tile_RemoveFogInRadius();
l__26A6:
	emu_addw(&emu_sp, 0x6);
l__26A9:
	goto l__278C;
l__26AC:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x26BD); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
l__26BD:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x26D5); emu_cs = 0x0F3F; f__0F3F_028E_0015_1153();
l__26D5:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_ax = 0x80;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_cs); emu_push(0x26F0); emu_cs = 0x0F3F; f__0F3F_028E_0015_1153();
l__26F0:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_si);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x270E); emu_Unit_Create();
l__270E:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__2788;
	emu_cmpw(&emu_si, 0x18);
	if (emu_si == 0x18) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x50);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory8(emu_es, emu_bx, 0x51) = emu_al;
	}
l__2732:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_get_memory16(emu_es, emu_bx, 0x4B) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x49) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xE), 0xF);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0xE) > (int16)0xF) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x40);
	}
l__275B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_dx = 0x1;
	emu_cl = emu_get_memory8(emu_ds, 0x00, 0x3A38);
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) != 0) goto l__2788;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x2785); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Tile_RemoveFogInRadius();
l__2785:
	emu_addw(&emu_sp, 0x6);
l__2788:
	goto l__278C;
l__278C:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__2794;
l__2794:
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
 * Decompiled function f__1A34_27A8_0012_7198()
 *
 * @name f__1A34_27A8_0012_7198
 * @implements 1A34:27A8:0012:7198 ()
 * @implements 1A34:27BA:0023:C5D9
 * @implements 1A34:27DD:002C:C218
 * @implements 1A34:2809:0012:6CE1
 * @implements 1A34:281B:0005:A42E
 * @implements 1A34:2820:0018:A4D6
 * @implements 1A34:2838:0005:E2F7
 * @implements 1A34:283D:000B:5F7D
 * @implements 1A34:2848:0018:A7FE
 * @implements 1A34:2851:000F:3DA7
 * @implements 1A34:2860:0013:AF66
 * @implements 1A34:2863:0010:B737
 * @implements 1A34:2873:0027:D7D0
 * @implements 1A34:289A:0008:5756
 * @implements 1A34:28A2:000D:6A6E
 * @implements 1A34:28AF:0005:64CD
 * @implements 1A34:28B4:0002:C03A
 * @implements 1A34:28B6:0016:FFBA
 * @implements 1A34:28CC:000A:3F60
 * @implements 1A34:28D6:000B:C880
 * @implements 1A34:28E1:0023:135B
 * @implements 1A34:28EA:001A:42E4
 * @implements 1A34:2904:000C:5845
 * @implements 1A34:2906:000A:5B6D
 * @implements 1A34:2910:000D:2180
 * @implements 1A34:291D:000C:6F7F
 * @implements 1A34:2929:0005:846E
 * @implements 1A34:292E:0002:C03A
 * @implements 1A34:2930:000F:BC4B
 * @implements 1A34:293F:0011:8182
 * @implements 1A34:2950:0008:1147
 * @implements 1A34:2953:0005:8BCF
 *
 * Called From: 0642:035B:000D:A6BA
 * Called From: 0642:035B:002B:2F1D
 * Called From: 0AEC:0786:000E:A7DE
 * Called From: 1A34:1074:0025:D89D
 * Called From: 1A34:1074:0027:BC2E
 * Called From: 1A34:1099:000B:E874
 */
void f__1A34_27A8_0012_7198()
{
l__27A8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__27BA;
	goto l__2953;
l__27BA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x27DD); emu_Unit_GetHouseID();
l__27DD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x37FA);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x37F8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x19) goto l__2820;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2809); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__2809:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x62EA;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x281B); emu_cs = 0x01F7; emu_String_sprintf();
l__281B:
	emu_addw(&emu_sp, 0xC);
	goto l__2863;
l__2820:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B6) != 0x1) goto l__283D;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2838); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__2838:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	goto l__2851;
l__283D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2848); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__2848:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
l__2851:
	emu_push(emu_ds);
	emu_ax = 0x62ED;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2860); emu_cs = 0x01F7; emu_String_sprintf();
l__2860:
	emu_addw(&emu_sp, 0x10);
l__2863:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, 0x10);
	if (emu_ax == 0x10) goto l__2873;
	goto l__292E;
l__2873:
	emu_si = 0x79;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x5);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x5) goto l__28B6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x58), 0x64);
	if ((int8)emu_get_memory8(emu_es, emu_bx, 0x58) >= (int8)0x64) goto l__28B6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x289A); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__289A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x28A2); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__28A2:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x8);
	if (emu_ax == 0x8) goto l__28AF;
	emu_cmpw(&emu_ax, 0x9);
	if (emu_ax == 0x9) goto l__28AF;
	goto l__28B4;
l__28AF:
	emu_si = 0x7A;
	goto l__28B6;
l__28B4:
	goto l__28B6;
l__28B6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x1);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x1) goto l__28D6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x56));
	emu_push(emu_cs); emu_push(0x28CC); emu_cs = 0x167E; emu_Tools_Index_GetStructure();
l__28CC:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__28D6;
	emu_si = 0x7B;
	goto l__28EA;
l__28D6:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x28E1); emu_cs = 0x0C10; emu_Object_IsScriptVariable4NotNull();
l__28E1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_si = 0x7C;
	}
l__28EA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x58);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x58);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__2904;
	emu_ax = 0x4;
	goto l__2906;
l__2904:
	emu_xorw(&emu_ax, emu_ax);
l__2906:
	emu_dx = emu_si;
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2910); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__2910:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x291D); emu_cs = 0x01F7; emu_String_strlen();
l__291D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x9939);
	emu_push(emu_ds);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2929); emu_cs = 0x01F7; emu_String_sprintf();
l__2929:
	emu_addw(&emu_sp, 0xA);
	goto l__2930;
l__292E:
	goto l__2930;
l__2930:
	emu_push(emu_ds);
	emu_ax = 0x62F3;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x293F); emu_cs = 0x01F7; emu_String_strcat();
l__293F:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2950); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
l__2950:
	emu_addw(&emu_sp, 0x6);
l__2953:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2AAA_000D_A3E6()
 *
 * @name f__1A34_2AAA_000D_A3E6
 * @implements 1A34:2AAA:000D:A3E6 ()
 * @implements 1A34:2AB7:0016:931E
 * @implements 1A34:2ACD:001F:0A02
 * @implements 1A34:2AEC:000E:C4E8
 * @implements 1A34:2AFA:0019:3A5B
 * @implements 1A34:2B13:0005:6143
 *
 * Called From: 176C:0EE0:000E:44F7
 * Called From: 1A34:2D1D:0018:E247
 */
void f__1A34_2AAA_000D_A3E6()
{
l__2AAA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__2AB7;
	/* Unresolved jump */ emu_ip = 0x2B16; emu_last_cs = 0x1A34; emu_last_ip = 0x2AB5; emu_last_length = 0x000D; emu_last_crc = 0xA3E6; emu_call();
l__2AB7:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x40);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2ACD); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__2ACD:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFBF);
	emu_push(emu_ds);
	emu_ax = 0x3902;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2AEC); emu_cs = 0x15C2; emu_Script_Reset();
l__2AEC:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2AFA); emu_Unit_UntargetMe();
l__2AFA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2B13); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
l__2B13:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_2BB5_0025_30B8()
 *
 * @name f__1A34_2BB5_0025_30B8
 * @implements 1A34:2BB5:0025:30B8 ()
 * @implements 1A34:2BDA:0005:92AE
 * @implements 1A34:2BDF:0022:6DF3
 * @implements 1A34:2C01:000B:799F
 * @implements 1A34:2C0C:003A:3AF5
 * @implements 1A34:2C0E:0038:AC99
 * @implements 1A34:2C1C:002A:C573
 * @implements 1A34:2C46:003E:E039
 * @implements 1A34:2C64:0020:54FF
 * @implements 1A34:2C84:000B:89DA
 * @implements 1A34:2C87:0008:D8C9
 * @implements 1A34:2C8F:0006:F7CE
 *
 * Called From: 0972:0BBE:0015:DC2E
 * Called From: 176C:2509:000B:7D3A
 */
void f__1A34_2BB5_0025_30B8()
{
l__2BB5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2BDA); emu_cs = 0x0FE4; emu_Unit_FindFirst();
l__2BDA:
	emu_addw(&emu_sp, 0x8);
	goto l__2C0E;
l__2BDF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__2C01;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x56) != 0x0) goto l__2C01;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	goto l__2C1C;
l__2C01:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2C0C); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__2C0C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__2C0E:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__2BDF;
l__2C1C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) == 0x0) goto l__2C64;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__2C64;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__2C64;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = 0x60;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x2C46); emu_Unit_Create();
l__2C46:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x38BC));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	}
l__2C64:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__2C87;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x2C84); emu_cs = 0x0C10; f__0C10_00D2_000F_D61E();
l__2C84:
	emu_addw(&emu_sp, 0x6);
l__2C87:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__2C8F;
l__2C8F:
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
 * Decompiled function f__1A34_2C95_001B_89A2()
 *
 * @name f__1A34_2C95_001B_89A2
 * @implements 1A34:2C95:001B:89A2 ()
 * @implements 1A34:2CB0:001C:F555
 * @implements 1A34:2CCC:0039:A882
 * @implements 1A34:2CCE:0037:71AE
 * @implements 1A34:2CFB:000A:A28D
 * @implements 1A34:2D05:0003:DDB6
 * @implements 1A34:2D08:0018:E247
 * @implements 1A34:2D20:000D:AA58
 * @implements 1A34:2D2D:0011:DBC6
 * @implements 1A34:2D3E:0009:B78D
 * @implements 1A34:2D47:0010:93D7
 * @implements 1A34:2D57:000F:5FC7
 * @implements 1A34:2D5A:000C:2FC2
 * @implements 1A34:2D66:0010:0111
 * @implements 1A34:2D76:0033:68C4
 * @implements 1A34:2DA9:0028:DC3E
 * @implements 1A34:2DD1:000D:5E93
 * @implements 1A34:2DDE:005A:6439
 * @implements 1A34:2DE1:0057:CA39
 * @implements 1A34:2E18:0020:ACCF
 * @implements 1A34:2E38:001D:0BE3
 * @implements 1A34:2E55:000E:BB32
 * @implements 1A34:2E63:0005:8F61
 * @implements 1A34:2E68:0019:2B5A
 * @implements 1A34:2E81:0015:C71B
 * @implements 1A34:2E96:000F:90E3
 * @implements 1A34:2EA5:0009:B45C
 * @implements 1A34:2EAE:001D:C6A0
 * @implements 1A34:2ECB:0011:6CE1
 * @implements 1A34:2EDC:0027:8321
 * @implements 1A34:2F03:001A:C46A
 * @implements 1A34:2F1D:0017:10C5
 * @implements 1A34:2F26:000E:591D
 * @implements 1A34:2F34:000C:0C19
 * @implements 1A34:2F40:0004:461F
 * @implements 1A34:2F44:0023:D47C
 * @implements 1A34:2F67:0014:59EA
 * @implements 1A34:2F69:0012:F102
 * @implements 1A34:2F7B:000E:2A03
 * @implements 1A34:2F7E:000B:0889
 * @implements 1A34:2F89:000D:542A
 * @implements 1A34:2F96:0008:AE7C
 * @implements 1A34:2F98:0006:F7CE
 *
 * Called From: 176C:0A0A:0008:45F1
 * Called From: 1A34:07DC:0036:8D87
 */
void f__1A34_2C95_001B_89A2()
{
l__2C95:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x2CAD; emu_last_cs = 0x1A34; emu_last_ip = 0x2CA3; emu_last_length = 0x001B; emu_last_crc = 0x89A2; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax != 0) goto l__2CB0;
	goto l__2F98;
l__2CB0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A0C)) goto l__2CCE;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	if (emu_dx != emu_get_memory16(emu_ds, 0x00, 0x3A0A)) goto l__2CCE;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x2CCC); emu_Unit_Select();
l__2CCC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__2CCE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x0);
		if (emu_get_memory16(emu_es, emu_bx, 0xE) != 0x0) goto l__2D08;
	}
l__2CFB:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2D05); emu_Unit_Unknown10EC();
l__2D05:
	goto l__2E63;
l__2D08:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2D20); f__1A34_2AAA_000D_A3E6();
l__2D20:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2D2D); emu_Unit_GetHouseID();
l__2D2D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2D3E); emu_cs = 0x1423; emu_House_AreAllied();
l__2D3E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__2D47;
	goto l__2E38;
l__2D47:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x10) == 0) goto l__2D57;
	emu_ax = 0x2;
	goto l__2D5A;
l__2D57:
	emu_ax = 0x1;
l__2D5A:
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2D66); emu_cs = 0x0C3A; emu_Structure_SetAnimation();
l__2D66:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xD);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0xD) goto l__2D76;
	goto l__2E18;
l__2D76:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_subw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x2DA9); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_ValueToPercent();
l__2DA9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x18);
	emu_cl = 0x6;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2DD1); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_PercentToValue();
l__2DD1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0x1);
	if (emu_si <= 0x1) goto l__2DDE;
	emu_ax = emu_si;
	goto l__2DE1;
l__2DDE:
	emu_ax = 0x1;
l__2DE1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory16(emu_es, emu_bx, 0x50) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFF7);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x6D) = 0x0;
l__2E18:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_pop(&emu_es);
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	goto l__2F98;
l__2E38:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__2E68;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1F4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2E55); emu_cs = 0x0C3A; f__0C3A_1216_0013_E56D();
l__2E55:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2E63); emu_cs = 0x0FE4; emu_Unit_Free();
l__2E63:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__2F98;
l__2E68:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x10);
	emu_cl = 0x2;
	emu_sarw(&emu_ax, emu_cl);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0xE) < (int16)emu_ax) goto l__2E81;
	goto l__2F44;
l__2E81:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_si = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2E96); emu_Unit_GetHouseID();
l__2E96:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory8(emu_es, emu_bx, 0x8) = emu_al;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2EA5); emu_cs = 0x0C3A; emu_Structure_GetStructuresBuilt();
l__2EA5:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2EAE); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__2EAE:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x10) = emu_ax;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2ECB); emu_cs = 0x0C3A; emu_Structure_GetStructuresBuilt();
l__2ECB:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2EDC); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__2EDC:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x10) = emu_ax;
	emu_pop(&emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) goto l__2F26;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2F03); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
l__2F03:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__2F26;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x2F1D); emu_Unit_GetHouseID();
l__2F1D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x8) = emu_al;
l__2F26:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2F34); emu_cs = 0x0C3A; emu_Structure_CalculatePowerAndCredit();
l__2F34:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2F40); emu_cs = 0x0C3A; emu_Structure_UpdateMap();
l__2F40:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__2F7E;
l__2F44:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_sarw(&emu_ax, 0x1);
	emu_di = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_shlw(&emu_ax, 0x1);
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax >= emu_di) goto l__2F67;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_shlw(&emu_ax, 0x1);
	goto l__2F69;
l__2F67:
	emu_ax = emu_di;
l__2F69:
	emu_di = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2F7B); emu_cs = 0x0C3A; f__0C3A_1216_0013_E56D();
l__2F7B:
	emu_addw(&emu_sp, 0x8);
l__2F7E:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x2F89); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
l__2F89:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x2F96); emu_cs = 0x0FE4; emu_Unit_Free();
l__2F96:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__2F98:
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
 * Decompiled function f__1A34_2F9E_0016_5A55()
 *
 * @name f__1A34_2F9E_0016_5A55
 * @implements 1A34:2F9E:0016:5A55 ()
 * @implements 1A34:2FB0:0004:45F2
 * @implements 1A34:2FB2:0002:ED3A
 * @implements 1A34:2FB4:0006:66E9
 * @implements 1A34:2FBA:0007:DD5F
 * @implements 1A34:2FC1:0006:16E4
 * @implements 1A34:2FC7:0008:8187
 * @implements 1A34:2FCF:0004:F5D9
 * @implements 1A34:2FD3:0010:0BCE
 * @implements 1A34:2FE3:001F:2746
 * @implements 1A34:3002:0004:0D1F
 * @implements 1A34:3006:0008:F390
 * @implements 1A34:3007:0007:B490
 * @implements 1A34:300E:0006:F7CE
 *
 * Called From: 0AEC:03C7:0035:696E
 * Called From: 0AEC:073B:0008:C3DB
 * Called From: 0AEC:07CE:000F:8BC4
 */
void f__1A34_2F9E_0016_5A55()
{
l__2F9E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x2);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) != 0x2) goto l__2FB4;
l__2FB0:
	emu_ax = emu_si;
l__2FB2:
	goto l__300E;
l__2FB4:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2FBA); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__2FBA:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__2FC1;
	goto l__2FB0;
l__2FC1:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2FC7); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__2FC7:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xE);
	if (emu_ax != 0xE) goto l__2FCF;
	goto l__2FB0;
l__2FCF:
	emu_xorw(&emu_di, emu_di);
	goto l__3007;
l__2FD3:
	emu_bx = emu_di;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_si;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x62D8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2FE3); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Unit_Get_ByPackedTile();
l__2FE3:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__3006;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x3002); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__3002:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__2FB2;
l__3006:
	emu_incw(&emu_di);
l__3007:
	emu_cmpw(&emu_di, 0x9);
	if ((int16)emu_di < (int16)0x9) goto l__2FD3;
	goto l__2FB0;
l__300E:
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
 * Decompiled function f__1A34_3014_001B_858E()
 *
 * @name f__1A34_3014_001B_858E
 * @implements 1A34:3014:001B:858E ()
 * @implements 1A34:302A:0005:DC30
 * @implements 1A34:302C:0003:DDA4
 * @implements 1A34:302F:003F:CF75
 * @implements 1A34:306E:0014:5E5F
 * @implements 1A34:3082:0010:2E6C
 * @implements 1A34:3092:0028:4B4E
 * @implements 1A34:30BA:0024:9E02
 * @implements 1A34:30DE:000D:EC73
 * @implements 1A34:30ED:0002:E53A
 * @implements 1A34:30EF:0002:E73A
 * @implements 1A34:30F1:0011:EA5C
 * @implements 1A34:3102:001E:AED8
 * @implements 1A34:3120:000D:8B73
 * @implements 1A34:3127:0006:420D
 * @implements 1A34:312F:0010:5340
 * @implements 1A34:3139:0006:C211
 * @implements 1A34:313F:0003:621A
 * @implements 1A34:3142:0004:893F
 *
 * Called From: 1A34:1C4A:0018:2310
 * Called From: 1A34:3268:001F:93C6
 */
void f__1A34_3014_001B_858E()
{
l__3014:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
		emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
		if (emu_ax != 0) goto l__302F;
	}
l__302A:
	emu_xorw(&emu_ax, emu_ax);
l__302C:
	goto l__3142;
l__302F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x306E); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__306E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x3082); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__3082:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3092); emu_Unit_GetHouseID();
l__3092:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_dx == emu_ax) goto l__30F1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__30BA;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x56);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0xC)) goto l__30BA;
	goto l__3127;
l__30BA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x0) goto l__30EF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x80);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x80) == 0) goto l__30EF;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x30DE); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__30DE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x56));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x56)) goto l__30ED;
	goto l__3127;
l__30ED:
	goto l__3139;
l__30EF:
	goto l__313F;
l__30F1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_push(emu_cs); emu_push(0x3102); emu_cs = 0x01F7; emu_Tools_Shld();
l__3102:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cx = emu_get_memory16(emu_es, emu_bx, 0x34);
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x32);
	emu_andw(&emu_bx, emu_ax);
	emu_andw(&emu_cx, emu_dx);
	emu_orw(&emu_bx, emu_cx);
	if (emu_bx == 0) goto l__313F;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x3120); emu_cs = 0x0C10; emu_Object_GetScriptVariable4();
l__3120:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0xA)) goto l__312F;
l__3127:
	emu_ax = 0x2;
	goto l__302C;
l__312F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__313F;
l__3139:
	emu_ax = 0x1;
	goto l__302C;
l__313F:
	goto l__302A;
l__3142:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_3146_0018_6887()
 *
 * @name f__1A34_3146_0018_6887
 * @implements 1A34:3146:0018:6887 ()
 * @implements 1A34:3159:0005:9C1F
 * @implements 1A34:315B:0003:9D8B
 * @implements 1A34:315E:001E:8618
 * @implements 1A34:317C:0012:0298
 * @implements 1A34:318E:0006:22E8
 * @implements 1A34:3194:0012:71A5
 * @implements 1A34:31A6:0013:CF39
 * @implements 1A34:31B9:000D:D98A
 * @implements 1A34:31C6:0019:2E66
 * @implements 1A34:31DF:000E:3622
 * @implements 1A34:31ED:000B:21FD
 * @implements 1A34:31F8:000E:95EC
 * @implements 1A34:3206:0008:9688
 * @implements 1A34:320E:0038:9680
 * @implements 1A34:3244:0002:DBBA
 * @implements 1A34:3246:0006:62E9
 * @implements 1A34:324C:001F:93C6
 * @implements 1A34:326B:0010:77A5
 * @implements 1A34:327D:0006:9214
 * @implements 1A34:3283:0006:12E4
 * @implements 1A34:3289:0051:2FE9
 * @implements 1A34:32DA:002A:8A6C
 * @implements 1A34:32E3:0021:3D72
 * @implements 1A34:3302:0002:C1BA
 * @implements 1A34:3304:0008:7C67
 * @implements 1A34:3307:0005:C667
 * @implements 1A34:330C:0006:F7CE
 *
 * Called From: 176C:1F38:001C:8C6C
 * Called From: 1A34:172C:0023:B77B
 */
void f__1A34_3146_0018_6887()
{
l__3146:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__315E;
l__3159:
	emu_xorw(&emu_ax, emu_ax);
l__315B:
	goto l__330C;
l__315E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x317C); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_IsValidPosition();
l__317C:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__318E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) goto l__318E;
	goto l__327D;
l__318E:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x3194); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Unit_Get_ByPackedTile();
l__3194:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__31A6;
	goto l__3246;
l__31A6:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp,  0x8)) goto l__31B9;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_dx != emu_get_memory16(emu_ss, emu_bp,  0x6)) goto l__31B9;
	goto l__3246;
l__31B9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x19) goto l__31C6;
	goto l__3246;
l__31C6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__31ED;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x31DF); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__31DF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x56));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x56)) goto l__31ED;
	goto l__3159;
l__31ED:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x31F8); emu_Unit_GetHouseID();
l__31F8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x3206); emu_Unit_GetHouseID();
l__3206:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x320E); emu_cs = 0x1423; emu_House_AreAllied();
l__320E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
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
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
			emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x1);
			if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x1) goto l__3246;
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
			emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x2);
			if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x2) goto l__3246;
		}
	}
l__3244:
	goto l__327D;
l__3246:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x324C); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__324C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__3283;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x326B); f__1A34_3014_001B_858E();
l__326B:
	emu_addw(&emu_sp, 0x8);
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__327D;
	emu_ax = emu_si;
	emu_negw(&emu_ax, emu_ax);
	goto l__315B;
l__327D:
	emu_ax = 0x100;
	goto l__315B;
l__3283:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x3289); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__3289:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x3C));
	emu_bx = emu_ax;
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x3A42);
	emu_ah = 0x0;
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__32E3;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0xB);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) != 0xB) goto l__32E3;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ah = 0x0;
	emu_andw(&emu_ax, 0x7);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x32DA); emu_cs = 0x1423; emu_House_AreAllied();
l__32DA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_si = 0xFF;
	}
l__32E3:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__3304;
	emu_xorw(&emu_si, 0xFF);
	emu_testw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x1);
	if ((emu_get_memory16(emu_ss, emu_bp,  0xC) & 0x1) != 0) {
		emu_ax = emu_si;
		emu_cl = 0x2;
		emu_sarw(&emu_ax, emu_cl);
		emu_dx = emu_si;
		emu_cl = 0x3;
		emu_sarw(&emu_dx, emu_cl);
		emu_addw(&emu_ax, emu_dx);
		emu_subw(&emu_si, emu_ax);
	}
l__3302:
	goto l__3307;
l__3304:
	emu_si = 0x100;
l__3307:
	emu_ax = emu_si;
	goto l__315B;
l__330C:
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
 * Decompiled function emu_Structure_GetLinkedUnit()
 *
 * @name emu_Structure_GetLinkedUnit
 * @implements 1A34:3491:0032:AFF8 ()
 * @implements 1A34:34C3:0003:C81A
 * @implements 1A34:34C4:0002:C33A
 * @implements 1A34:34C6:0006:5EA9
 * @implements 1A34:34CC:0004:893F
 *
 * Called From: 0972:07B7:0011:81A2
 * Called From: 0972:07B7:000D:B89A
 * Called From: 0972:0B53:0012:0F5D
 * Called From: 0972:0C77:000D:A320
 * Called From: 0C10:0119:003D:FEA4
 * Called From: 0C10:028B:003C:67AC
 * Called From: 10E4:1823:000B:CD5F
 * Called From: 176C:2168:0011:BB28
 * Called From: 176C:27F5:000D:8210
 * Called From: 1A34:2211:0015:FCE4
 * Called From: 1A34:226B:000B:D285
 */
void emu_Structure_GetLinkedUnit()
{
l__3491:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__34C6;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) goto l__34C6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x34C3); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
l__34C3:
	emu_pop(&emu_cx);
l__34C4:
	goto l__34CC;
l__34C6:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__34C4;
l__34CC:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Unit_GetLinkedStructure()
 *
 * @name emu_Unit_GetLinkedStructure
 * @implements 1A34:34D0:0032:E0A4 ()
 * @implements 1A34:3502:0003:C81A
 * @implements 1A34:350B:0004:893F
 *
 * Called From: 0972:064C:000D:B324
 */
void emu_Unit_GetLinkedStructure()
{
l__34D0:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x3505; emu_last_cs = 0x1A34; emu_last_ip = 0x34DC; emu_last_length = 0x0032; emu_last_crc = 0xE0A4; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) { /* Unresolved jump */ emu_ip = 0x3505; emu_last_cs = 0x1A34; emu_last_ip = 0x34F2; emu_last_length = 0x0032; emu_last_crc = 0xE0A4; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x3502); emu_cs = 0x1082; emu_Structure_Get_ByIndex();
l__3502:
	emu_pop(&emu_cx);
	goto l__350B;
l__350B:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_350F_0021_9B04()
 *
 * @name f__1A34_350F_0021_9B04
 * @implements 1A34:350F:0021:9B04 ()
 * @implements 1A34:352B:0005:9C8F
 * @implements 1A34:352D:0003:9D1B
 * @implements 1A34:3530:0011:412D
 * @implements 1A34:3541:0014:1936
 * @implements 1A34:3555:000B:BD8C
 * @implements 1A34:3560:001B:39A9
 * @implements 1A34:3571:000A:2159
 * @implements 1A34:357D:000B:BD96
 * @implements 1A34:3588:001F:BC73
 * @implements 1A34:35A7:0029:C135
 * @implements 1A34:35B0:0020:EEF4
 * @implements 1A34:35D0:0015:9E61
 * @implements 1A34:35E5:000A:236B
 * @implements 1A34:35EF:0002:803A
 * @implements 1A34:35F3:0002:C93A
 * @implements 1A34:35F5:000A:3979
 * @implements 1A34:35FF:0017:BAEA
 * @implements 1A34:3607:000F:A6D7
 * @implements 1A34:360E:0008:443E
 * @implements 1A34:3616:0005:7069
 * @implements 1A34:361B:0003:22A3
 * @implements 1A34:361E:0005:8BCF
 *
 * Called From: 16C5:0714:000C:2071
 * Called From: 16C5:0714:000E:20BB
 * Called From: 176C:0876:0023:E780
 */
void f__1A34_350F_0021_9B04()
{
l__350F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__3530;
l__352B:
	emu_xorw(&emu_ax, emu_ax);
l__352D:
	goto l__361E;
l__3530:
	emu_cmpw(&emu_si, 0x4);
	if (emu_si != 0x4) goto l__357D;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x3541); emu_cs = 0x0C3A; f__0C3A_22CD_0029_8F46();
l__3541:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__3555;
	goto l__3607;
l__3555:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3560); emu_Unit_FindBestTarget();
l__3560:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x357B; emu_last_cs = 0x1A34; emu_last_ip = 0x356F; emu_last_length = 0x001B; emu_last_crc = 0x39A9; emu_call(); return; }
l__3571:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	goto l__360E;
l__357D:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x3588); emu_Unit_FindBestTarget();
l__3588:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x8) goto l__35B0;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x35A7); emu_cs = 0x0C3A; f__0C3A_22CD_0029_8F46();
l__35A7:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
l__35B0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__35F5;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__35F5;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x35D0); emu_Unit_GetTargetPriority();
l__35D0:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x35E5); emu_cs = 0x0C3A; f__0C3A_2207_001D_EDF2();
l__35E5:
	emu_addw(&emu_sp, 0x8);
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_dx <= emu_ax) goto l__35F3;
	goto l__3571;
l__35EF:
	goto l__3571;
l__35F3:
	goto l__3607;
l__35F5:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__35FF;
	goto l__35EF;
l__35FF:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__361B;
l__3607:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
l__360E:
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x3616); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__3616:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__352D;
l__361B:
	goto l__352B;
l__361E:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1A34_379B_0015_B07B()
 *
 * @name f__1A34_379B_0015_B07B
 * @implements 1A34:379B:0015:B07B ()
 * @implements 1A34:37B0:0026:D835
 * @implements 1A34:37D6:0036:C636
 * @implements 1A34:380C:000B:8A12
 * @implements 1A34:380D:000A:AA19
 * @implements 1A34:3817:0007:B349
 * @implements 1A34:3819:0005:D7FA
 * @implements 1A34:381C:0002:C23A
 * @implements 1A34:381E:0004:9539
 * @implements 1A34:3822:0002:2597
 *
 * Called From: 176C:171D:0023:1E72
 * Called From: 1A34:0C1A:000B:7668
 */
void f__1A34_379B_0015_B07B()
{
l__379B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) goto l__381E;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x37B0); emu_Unit_GetHouseID();
l__37B0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__381E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) == 0) goto l__381E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFFD);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x37D6); emu_cs = 0x16BC; emu_Unit_RemoveFromTeam();
l__37D6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A0C)) goto l__3819;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	if (emu_dx != emu_get_memory16(emu_ds, 0x00, 0x3A0A)) goto l__3819;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) != 0x1) goto l__380D;
	emu_get_memory16(emu_ds, 0x00, 0x38F4) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F2) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38F6) = 0xFFFF;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x380C); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__380C:
	emu_pop(&emu_cx);
l__380D:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x3817); emu_Unit_Select();
l__3817:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__3819:
	emu_ax = 0x1;
l__381C:
	goto l__3822;
l__381E:
	emu_xorw(&emu_ax, emu_ax);
	goto l__381C;
l__3822:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
