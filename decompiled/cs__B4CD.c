/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4CD_00A5_0016_24FA()
 *
 * @name f__B4CD_00A5_0016_24FA
 * @implements B4CD:00A5:0016:24FA ()
 * @implements B4CD:00BB:000F:DDCF
 * @implements B4CD:00CA:000A:13D1
 * @implements B4CD:00D4:0033:40B9
 * @implements B4CD:0105:0002:C6BA
 * @implements B4CD:0107:0009:A8DF
 * @implements B4CD:0110:0004:239F
 * @implements B4CD:0114:0006:F7CE
 *
 * Called From: 34CD:006B:0005:0000
 */
void f__B4CD_00A5_0016_24FA()
{
l__00A5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00BB); emu_cs = 0x0F3F; emu_Tile_GetX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__00BB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x00CA); emu_cs = 0x0F3F; emu_Tile_GetY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__00CA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x00D4); f__B4CD_17DC_0019_CB46();
l__00D4:
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2474));
	emu_di = emu_ax;
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2484));
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_di, 0x4000);
	if (emu_di > 0x4000) { /* Unresolved jump */ emu_ip = 0x00FF; emu_last_cs = 0xB4CD; emu_last_ip = 0x00F6; emu_last_length = 0x0033; emu_last_crc = 0x40B9; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4000);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) <= 0x4000) goto l__0107;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
l__0105:
	goto l__0114;
l__0107:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0110); emu_cs = 0x0F3F; emu_Tile_GetXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0110:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0105;
l__0114:
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
 * Decompiled function f__B4CD_011A_0011_E66F()
 *
 * @name f__B4CD_011A_0011_E66F
 * @implements B4CD:011A:0011:E66F ()
 * @implements B4CD:012B:004D:6862
 * @implements B4CD:013C:003C:41EC
 * @implements B4CD:0178:0007:C555
 *
 * Called From: B4CD:0215:0027:25FD
 */
void f__B4CD_011A_0011_E66F()
{
l__011A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_ax != 0) goto l__012B;
	/* Unresolved jump */ emu_ip = 0x017C; emu_last_cs = 0xB4CD; emu_last_ip = 0x0129; emu_last_length = 0x0011; emu_last_crc = 0xE66F; emu_call();
l__012B:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x1000);
		emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x39E8));
	}
l__013C:
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2496));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x2494));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x38));
	emu_push(emu_cs);
	emu_push(0x0178); f__B4CD_057B_001A_D066();
l__0178:
	emu_addw(&emu_sp, 0xE);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_017F_0010_C6FC()
 *
 * @name f__B4CD_017F_0010_C6FC
 * @implements B4CD:017F:0010:C6FC ()
 * @implements B4CD:018F:0005:6143
 *
 * Called From: 34CD:002F:0005:0000
 */
void f__B4CD_017F_0010_C6FC()
{
l__017F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x018F); emu_Map_Update();
l__018F:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_0194_0011_3CAE()
 *
 * @name f__B4CD_0194_0011_3CAE
 * @implements B4CD:0194:0011:3CAE ()
 * @implements B4CD:01A5:0005:6143
 *
 * Called From: 34CD:002A:0005:0000
 */
void f__B4CD_0194_0011_3CAE()
{
l__0194:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x01A5); emu_Map_Update();
l__01A5:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_01AA_0010_06F1()
 *
 * @name f__B4CD_01AA_0010_06F1
 * @implements B4CD:01AA:0010:06F1 ()
 * @implements B4CD:01BA:0005:6143
 *
 * Called From: 34CD:0048:0005:0000
 */
void f__B4CD_01AA_0010_06F1()
{
l__01AA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x01BA); emu_Map_Update();
l__01BA:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_01BF_0016_E78F()
 *
 * @name f__B4CD_01BF_0016_E78F
 * @implements B4CD:01BF:0016:E78F ()
 * @implements B4CD:01D5:000E:65FA
 * @implements B4CD:01E3:000E:E5FB
 * @implements B4CD:01F1:0027:25FD
 * @implements B4CD:0218:0006:77BB
 * @implements B4CD:021E:001C:3ED6
 * @implements B4CD:023A:0015:6D4D
 * @implements B4CD:024F:0030:FE42
 * @implements B4CD:0270:000F:00DA
 * @implements B4CD:027F:0002:C7BA
 * @implements B4CD:0281:000F:10BA
 * @implements B4CD:0290:000B:394E
 * @implements B4CD:029B:000F:2011
 * @implements B4CD:02AA:0008:9688
 * @implements B4CD:02B2:000D:DC77
 * @implements B4CD:02BF:0023:1CEB
 * @implements B4CD:02E2:000B:4349
 * @implements B4CD:02E6:0007:65F9
 * @implements B4CD:02ED:00B3:20DA
 * @implements B4CD:032A:0076:756F
 * @implements B4CD:033B:0065:61FC
 * @implements B4CD:037A:0026:D934
 * @implements B4CD:037F:0021:6328
 * @implements B4CD:03A0:0034:2C7C
 * @implements B4CD:03D4:002A:4D41
 * @implements B4CD:03FE:000A:9793
 * @implements B4CD:0402:0006:F7CE
 *
 * Called From: 34CD:008E:0005:0000
 */
void f__B4CD_01BF_0016_E78F()
{
l__01BF:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if (emu_ax != 0) goto l__01D5;
	goto l__0402;
l__01D5:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x4) == 0) goto l__01E3;
	goto l__0402;
l__01E3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x1);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x1) != 0) goto l__01F1;
	goto l__0402;
l__01F1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x4) goto l__021E;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0218); f__B4CD_011A_0011_E66F();
l__0218:
	emu_addw(&emu_sp, 0x6);
	goto l__0402;
l__021E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x023A); emu_cs = 0x0F3F; emu_Tile_PackTile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__023A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x024F); emu_cs = 0x0F3F; emu_Tile_PackTile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__024F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x8) == 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
		emu_ax = (int8)emu_al;
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
		if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0281;
	}
l__0270:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x027F); emu_cs = 0x1423; f__1423_08CD_0012_0004();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__027F:
	goto l__0290;
l__0281:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0290); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0290:
	emu_addw(&emu_sp, 0x6);
	emu_cmpw(&emu_di, 0x1);
	if (emu_di == 0x1) goto l__029B;
	goto l__032A;
l__029B:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x02AA); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__02AA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02B2); emu_cs = 0x1423; emu_House_AreAllied();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__02B2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__02E6;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs);
	emu_push(0x02BF); emu_Map_IsPositionUnveiled();
l__02BF:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__02E6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x19) goto l__02E6;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs);
	emu_push(0x02E2); emu_Tile_RemoveFogInRadius();
l__02E2:
	emu_addw(&emu_sp, 0x6);
l__02E6:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs);
	emu_push(0x02ED); f__B4CD_1086_0040_F11C();
l__02ED:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
		emu_cl = 0x2;
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_push(emu_es);
		emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp,  0x8));
		emu_al = emu_get_memory8(emu_es, emu_si, 0x0);
		emu_incb(&emu_al);
		emu_pop(&emu_es);
		emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
		emu_cl = 0x2;
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	}
l__032A:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
		emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x1000);
		emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x39E6));
	}
l__033B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x38);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x48);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x48) == 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__037F;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x5);
		if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x5) goto l__037F;
	}
l__037A:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x21;
l__037F:
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x24A2));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x24A0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x03A0); f__B4CD_057B_001A_D066();
l__03A0:
	emu_addw(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x19) goto l__0402;
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x24A2));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x24A0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x5C));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x5A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x03D4); f__B4CD_057B_001A_D066();
l__03D4:
	emu_addw(&emu_sp, 0xE);
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x24A2));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x24A0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x60));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x5E));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x03FE); f__B4CD_057B_001A_D066();
l__03FE:
	emu_addw(&emu_sp, 0xE);
l__0402:
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
 * Decompiled function f__B4CD_0408_001F_C54A()
 *
 * @name f__B4CD_0408_001F_C54A
 * @implements B4CD:0408:001F:C54A ()
 * @implements B4CD:0427:001C:06C2
 * @implements B4CD:0443:0039:8ACB
 * @implements B4CD:0454:0028:B587
 * @implements B4CD:0476:0006:DF2B
 * @implements B4CD:047C:000C:A511
 * @implements B4CD:0488:0006:4475
 *
 * Called From: 34CD:0039:0005:0000
 */
void f__B4CD_0408_001F_C54A()
{
l__0408:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x10) == 0) goto l__0476;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0427); emu_Unit_Get_ByPackedTile();
l__0427:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_dx != emu_get_memory16(emu_ss, emu_bp,  0x8)) goto l__0476;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp,  0x6)) goto l__0476;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4B));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x49));
	emu_push(emu_cs); emu_push(0x0443); emu_cs = 0x0F3F; emu_Tile_PackTile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0443:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_si);
	if (emu_ax == emu_si) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x40);
		if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x40) == 0) goto l__0476;
	}
l__0454:
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0x0;
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xEF);
l__0476:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x047C); emu_cs = 0x07D4; emu_Unknown_07D4_02F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__047C:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0488); emu_Map_Update();
l__0488:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_048E_0012_3E9E()
 *
 * @name f__B4CD_048E_0012_3E9E
 * @implements B4CD:048E:0012:3E9E ()
 * @implements B4CD:04A0:0008:A0B3
 * @implements B4CD:04A8:0009:86D1
 * @implements B4CD:04B1:000D:9C57
 * @implements B4CD:04BE:0006:4475
 *
 * Called From: 34CD:0043:0005:0000
 */
void f__B4CD_048E_0012_3E9E()
{
l__048E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x04A0); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__04A0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x04A8); f__B4CD_1269_0019_A3E5();
l__04A8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x04B1); emu_cs = 0x07D4; emu_Unknown_07D4_02F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__04B1:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x04BE); emu_Map_Update();
l__04BE:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_04C4_0010_846B()
 *
 * @name f__B4CD_04C4_0010_846B
 * @implements B4CD:04C4:0010:846B ()
 * @implements B4CD:04D4:0005:6143
 *
 * Called From: 34CD:0020:0005:0000
 */
void f__B4CD_04C4_0010_846B()
{
l__04C4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x04D4); emu_Map_Update();
l__04D4:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_053B_0010_C4CD()
 *
 * @name f__B4CD_053B_0010_C4CD
 * @implements B4CD:053B:0010:C4CD ()
 * @implements B4CD:054B:0005:6143
 *
 * Called From: 34CD:003E:0005:0000
 */
void f__B4CD_053B_0010_C4CD()
{
l__053B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x054B); emu_Map_Update();
l__054B:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_0566_0010_04C2()
 *
 * @name f__B4CD_0566_0010_04C2
 * @implements B4CD:0566:0010:04C2 ()
 * @implements B4CD:0576:0005:6143
 *
 * Called From: 34CD:0025:0005:0000
 */
void f__B4CD_0566_0010_04C2()
{
l__0566:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0576); emu_Map_Update();
l__0576:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_057B_001A_D066()
 *
 * @name f__B4CD_057B_001A_D066
 * @implements B4CD:057B:001A:D066 ()
 * @implements B4CD:0592:0003:5D8D
 * @implements B4CD:0595:0009:902D
 * @implements B4CD:059E:000B:812D
 * @implements B4CD:05A9:0010:4FF3
 * @implements B4CD:05B9:0023:8507
 * @implements B4CD:05DC:0008:0D7D
 * @implements B4CD:05E4:0036:E0ED
 * @implements B4CD:061A:002A:6FEE
 * @implements B4CD:0644:0013:B98F
 * @implements B4CD:0647:0010:AADE
 * @implements B4CD:0648:000F:AA99
 * @implements B4CD:064F:0008:D70B
 * @implements B4CD:0657:000A:D0BB
 * @implements B4CD:0661:000E:353B
 * @implements B4CD:0663:000C:0711
 * @implements B4CD:066F:0040:CDDD
 * @implements B4CD:0671:003E:4157
 * @implements B4CD:06AF:0011:F3CE
 * @implements B4CD:06C0:0014:54A9
 * @implements B4CD:06D4:0011:DCE0
 * @implements B4CD:06E5:0032:BD9A
 * @implements B4CD:0717:0027:DD22
 * @implements B4CD:0720:001E:4827
 * @implements B4CD:073E:000C:3884
 * @implements B4CD:0741:0009:CAFC
 * @implements B4CD:074A:0006:F7CE
 *
 * Called From: B4CD:0175:004D:6862
 * Called From: B4CD:0175:003C:41EC
 * Called From: B4CD:039D:0021:6328
 * Called From: B4CD:039D:0026:D934
 * Called From: B4CD:039D:00B3:20DA
 * Called From: B4CD:039D:0076:756F
 * Called From: B4CD:039D:0065:61FC
 * Called From: B4CD:03D1:0034:2C7C
 * Called From: B4CD:03FB:002A:4D41
 * Called From: B4CD:0531:002E:4B16
 * Called From: B4CD:0531:0030:CB24
 */
void f__B4CD_057B_001A_D066()
{
l__057B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
		emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
		if (emu_ax != 0) goto l__0595;
	}
l__0592:
	goto l__074A;
l__0595:
	emu_decw(&emu_si);
	emu_cmpw(&emu_si, 0x1F);
	if ((int16)emu_si > (int16)0x1F) goto l__059E;
	goto l__0657;
l__059E:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x05A9); emu_cs = 0x0F3F; emu_Tile_GetPosX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__05A9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x05B9); emu_cs = 0x0F3F; emu_Tile_GetPosY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__05B9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_bx = 0x10;
	emu_ax = emu_si;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_si = emu_ax;
	emu_ax = emu_si;
	emu_incw(&emu_ax);
	emu_andw(&emu_ax, 0xFE);
	emu_si = emu_ax;
	emu_si = 0x2;
	emu_ax = emu_si;
	emu_negw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	goto l__064F;
l__05DC:
	emu_ax = emu_si;
	emu_negw(&emu_ax, emu_ax);
	emu_di = emu_ax;
	goto l__0648;
l__05E4:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_addw(&emu_ax, emu_di);
	if ((emu_flags.sf != emu_flags.of)) goto l__0647;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_addw(&emu_ax, emu_di);
	emu_cmpw(&emu_ax, 0x40);
	if ((int16)emu_ax >= (int16)0x40) goto l__0647;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((emu_flags.sf != emu_flags.of)) goto l__0647;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_ax, 0x40);
	if ((int16)emu_ax >= (int16)0x40) goto l__0647;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x061A); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__061A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cl = 0x3;
	emu_sarw(&emu_bx, emu_cl);
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_andb(&emu_cl, 0x7);
	emu_al = 0x1;
	emu_shlb(&emu_al, emu_cl);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx, 0x8FE5), emu_al);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x39E2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(0x0644);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34CD0020: overlay(0x34CD, 0); f__B4CD_04C4_0010_846B(); break;
		case 0x34CD002A: overlay(0x34CD, 0); f__B4CD_0194_0011_3CAE(); break;
		case 0x34CD002F: overlay(0x34CD, 0); f__B4CD_017F_0010_C6FC(); break;
		case 0x34CD0039: overlay(0x34CD, 0); f__B4CD_0408_001F_C54A(); break;
		case 0x34CD0043: overlay(0x34CD, 0); f__B4CD_048E_0012_3E9E(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4CD; emu_last_ip = 0x0641; emu_last_length = 0x002A; emu_last_crc = 0x6FEE;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0644:
	emu_addw(&emu_sp, 0x6);
l__0647:
	emu_incw(&emu_di);
l__0648:
	emu_cmpw(&emu_di, emu_si);
	if ((int16)emu_di <= (int16)emu_si) goto l__05E4;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
l__064F:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_si);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x14) <= (int16)emu_si) goto l__05DC;
	goto l__074A;
l__0657:
	emu_cmpw(&emu_si, 0x20);
	if ((int16)emu_si <= (int16)0x20) goto l__0661;
	emu_ax = 0x20;
	goto l__0663;
l__0661:
	emu_ax = emu_si;
l__0663:
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xF);
	if ((int16)emu_si >= (int16)0xF) goto l__066F;
	emu_ax = 0xF;
	goto l__0671;
l__066F:
	emu_ax = emu_si;
l__0671:
	emu_si = emu_ax;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3960);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x395E);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax);
	emu_ax = emu_si;
	emu_cl = 0x5;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x20);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x2DCE;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	goto l__0741;
l__06AF:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x06C0); emu_cs = 0x0F3F; emu_Tile_AddTileDiff();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__06C0:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x06D4); emu_cs = 0x0F3F; emu_Tile_IsValid();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__06D4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0720;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x06E5); emu_cs = 0x0F3F; emu_Tile_PackTile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__06E5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__0720;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cl = 0x3;
	emu_sarw(&emu_bx, emu_cl);
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_andb(&emu_cl, 0x7);
	emu_al = 0x1;
	emu_shlb(&emu_al, emu_cl);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx, 0x8FE5), emu_al);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x39E2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(0x0717);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34CD0020: overlay(0x34CD, 0); f__B4CD_04C4_0010_846B(); break;
		case 0x34CD0025: overlay(0x34CD, 0); f__B4CD_0566_0010_04C2(); break;
		case 0x34CD002A: overlay(0x34CD, 0); f__B4CD_0194_0011_3CAE(); break;
		case 0x34CD002F: overlay(0x34CD, 0); f__B4CD_017F_0010_C6FC(); break;
		case 0x34CD0039: overlay(0x34CD, 0); f__B4CD_0408_001F_C54A(); break;
		case 0x34CD003E: overlay(0x34CD, 0); f__B4CD_053B_0010_C4CD(); break;
		case 0x34CD0043: overlay(0x34CD, 0); f__B4CD_048E_0012_3E9E(); break;
		case 0x34CD0048: overlay(0x34CD, 0); f__B4CD_01AA_0010_06F1(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4CD; emu_last_ip = 0x0714; emu_last_length = 0x0032; emu_last_crc = 0xBD9A;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0717:
	emu_addw(&emu_sp, 0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
l__0720:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_ax != 0) goto l__073E;
	goto l__074A;
l__073E:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xA));
l__0741:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x9);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xA) >= (int16)0x9) goto l__074A;
	goto l__06AF;
l__074A:
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
 * Decompiled function f__B4CD_08E7_002B_DC75()
 *
 * @name f__B4CD_08E7_002B_DC75
 * @implements B4CD:08E7:002B:DC75 ()
 * @implements B4CD:0912:000C:28CD
 * @implements B4CD:091E:000C:58F5
 * @implements B4CD:092A:000C:58F4
 * @implements B4CD:0936:001C:555C
 * @implements B4CD:0952:0032:F47A
 * @implements B4CD:095E:0026:FA43
 * @implements B4CD:0984:0032:905E
 * @implements B4CD:099D:0019:1F64
 * @implements B4CD:09B6:0032:1EF4
 * @implements B4CD:09C2:0026:0ECD
 * @implements B4CD:09E8:0025:25FA
 * @implements B4CD:0A01:000C:0EA8
 * @implements B4CD:0A0D:0009:1C93
 * @implements B4CD:0A16:0016:6F25
 * @implements B4CD:0A2C:000B:CB32
 * @implements B4CD:0A37:0009:B7CA
 * @implements B4CD:0A40:001B:13AF
 * @implements B4CD:0A5B:0012:F96C
 * @implements B4CD:0A6D:0009:A4FD
 * @implements B4CD:0A76:0057:8C85
 * @implements B4CD:0AA0:002D:A2B3
 * @implements B4CD:0ABF:000E:DF35
 * @implements B4CD:0AC2:000B:E32B
 * @implements B4CD:0ACD:000E:0F0A
 * @implements B4CD:0AD0:000B:3334
 * @implements B4CD:0ADB:0010:496D
 * @implements B4CD:0AE9:0002:C4BA
 * @implements B4CD:0AEB:0005:C7A6
 * @implements B4CD:0AF0:0004:92B9
 * @implements B4CD:0AF4:0006:F7CE
 *
 * Called From: 34CD:00A7:0005:0000
 */
void f__B4CD_08E7_002B_DC75()
{
l__08E7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x20);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_di;
	emu_incw(&emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_di;
	emu_incw(&emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_si;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_si;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0912); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0912:
	emu_pop(&emu_cx);
	emu_subw(&emu_ax, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x091E); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__091E:
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x092A); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__092A:
	emu_pop(&emu_cx);
	emu_subw(&emu_ax, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0936); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0936:
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp, -0x10)) goto l__0952;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	goto l__095E;
l__0952:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
l__095E:
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C12));
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0x12)) goto l__0984;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	goto l__099D;
l__0984:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C12));
	emu_decw(&emu_ax);
l__099D:
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp, -0x14)) goto l__09B6;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	goto l__09C2;
l__09B6:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
l__09C2:
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C14));
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0x16)) goto l__09E8;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	goto l__0A01;
l__09E8:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C14));
	emu_decw(&emu_ax);
l__0A01:
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	goto l__0AD0;
l__0A0D:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	goto l__0AC2;
l__0A16:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cl = 0x6;
	emu_shlw(&emu_ax, emu_cl);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0A2C); emu_Map_B4CD_0750();
l__0A2C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0A37); emu_Map_IsValidPosition();
l__0A37:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0A40;
	goto l__0ABF;
l__0A40:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x20);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x20) != 0) goto l__0ABF;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0A5B); emu_Unit_Get_ByPackedTile();
l__0A5B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	if (emu_ax == 0) goto l__0A6D;
	goto l__0ABF;
l__0A6D:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs); emu_push(0x0A76); emu_cs = 0x0F3F; emu_Tile_GetDistancePacked();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0A76:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x9);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x9) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x4);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x20) < (int16)0x4) {
			emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x1;
			emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
			emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
			if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0xC)) {
				emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
				emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
				emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
				emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
			}
		}
	}
l__0AA0:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x8) {
		emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x1;
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
		if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0xA)) {
			emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
			emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
			emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
			emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
		}
	}
l__0ABF:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__0AC2:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ss, emu_bp, -0x12)) goto l__0ACD;
	goto l__0A16;
l__0ACD:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__0AD0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ss, emu_bp, -0x16)) goto l__0ADB;
	goto l__0A0D;
l__0ADB:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) == 0x0) goto l__0AF0;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_di);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xC) > (int16)emu_di) goto l__0AEB;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
l__0AE9:
	goto l__0AF4;
l__0AEB:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__0AE9;
l__0AF0:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0AE9;
l__0AF4:
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
 * Decompiled function f__B4CD_0AFA_0011_D5DB()
 *
 * @name f__B4CD_0AFA_0011_D5DB
 * @implements B4CD:0AFA:0011:D5DB ()
 * @implements B4CD:0B0B:0007:DAC0
 * @implements B4CD:0B12:0013:2DDF
 * @implements B4CD:0B25:0015:E456
 * @implements B4CD:0B3A:001B:0F50
 * @implements B4CD:0B55:0013:7E2B
 * @implements B4CD:0B68:0007:5745
 * @implements B4CD:0B6D:0002:C93A
 * @implements B4CD:0B6F:000D:0644
 * @implements B4CD:0B7C:0082:AC86
 * @implements B4CD:0B81:007D:4F49
 * @implements B4CD:0B91:006D:59E5
 * @implements B4CD:0B9C:0062:0F0F
 * @implements B4CD:0BFE:000B:6F91
 * @implements B4CD:0C09:000B:8F92
 * @implements B4CD:0C14:000D:B300
 * @implements B4CD:0C21:000D:0E04
 * @implements B4CD:0C2E:0008:677C
 * @implements B4CD:0C30:0006:F7CE
 *
 * Called From: 34CD:00AC:0005:0000
 * Called From: B4CD:15D6:0011:D4BE
 * Called From: B4CD:1601:0019:7F4A
 */
void f__B4CD_0AFA_0011_D5DB()
{
l__0AFA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x8) != 0x0) goto l__0B0B;
	goto l__0C30;
l__0B0B:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0B12); emu_Map_B4CD_0750();
l__0B12:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0x9) goto l__0B25;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0x8) <= (int16)0x0) goto l__0B25;
	goto l__0C30;
l__0B25:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0x8) goto l__0B3A;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0x9) goto l__0B3A;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0x8) >= (int16)0x0) goto l__0B3A;
	goto l__0C30;
l__0B3A:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0x0) goto l__0B55;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x2);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0x2) goto l__0B55;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0x8) goto l__0B55;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0x8) <= (int16)0x0) goto l__0B55;
	goto l__0C30;
l__0B55:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0x8) <= (int16)0x0) goto l__0B6F;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0x8) goto l__0B68;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x9;
	goto l__0B6D;
l__0B68:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x8;
l__0B6D:
	goto l__0B81;
l__0B6F:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) != 0x9) goto l__0B7C;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x8;
	goto l__0B81;
l__0B7C:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
l__0B81:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x8);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0x8) {
		emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x31;
	}
l__0B91:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x9);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0x9) {
		emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x41;
	}
l__0B9C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = 0x2E9C;
	emu_es = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x323F) = 0x8000;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = 0x2E9C;
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_andw(&emu_dx, 0x1FF);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cl = 0x2;
	emu_shlw(&emu_si, emu_cl);
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_di, emu_si);
	emu_andw(&emu_get_memory16(emu_es, emu_di, 0x0), 0xFE00);
	emu_cx = emu_dx;
	emu_orw(&emu_get_memory16(emu_es, emu_di, 0x0), emu_dx);
	emu_es = emu_ax;
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x323F), emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0BFE); f__B4CD_0C36_0014_30D0();
l__0BFE:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0C09); f__B4CD_0C36_0014_30D0();
l__0C09:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0C14); f__B4CD_0C36_0014_30D0();
l__0C14:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, 0xFFC0);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0C21); f__B4CD_0C36_0014_30D0();
l__0C21:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, 0x40);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0C2E); f__B4CD_0C36_0014_30D0();
l__0C2E:
	emu_pop(&emu_cx);
l__0C30:
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
 * Decompiled function f__B4CD_0C36_0014_30D0()
 *
 * @name f__B4CD_0C36_0014_30D0
 * @implements B4CD:0C36:0014:30D0 ()
 * @implements B4CD:0C4A:0015:E3CD
 * @implements B4CD:0C5F:0008:A28B
 * @implements B4CD:0C67:0016:6AD3
 * @implements B4CD:0C7D:000C:B8A9
 * @implements B4CD:0C89:0034:F207
 * @implements B4CD:0CBD:0007:5E1C
 * @implements B4CD:0CC4:0022:DA43
 * @implements B4CD:0CDA:000C:4900
 * @implements B4CD:0CE4:0002:C83A
 * @implements B4CD:0CE6:001C:421B
 * @implements B4CD:0CF6:000C:0E94
 * @implements B4CD:0CF9:0009:FEEC
 * @implements B4CD:0D02:000B:C089
 * @implements B4CD:0D0D:005E:A834
 * @implements B4CD:0D10:005B:9E2E
 * @implements B4CD:0D60:000B:E432
 * @implements B4CD:0D6B:0009:B383
 *
 * Called From: B4CD:0BFB:0062:0F0F
 * Called From: B4CD:0BFB:006D:59E5
 * Called From: B4CD:0C06:000B:6F91
 * Called From: B4CD:0C11:000B:8F92
 * Called From: B4CD:0C1E:000D:B300
 * Called From: B4CD:0C2B:000D:0E04
 */
void f__B4CD_0C36_0014_30D0()
{
l__0C36:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_andw(&emu_di, 0xFFF);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0C4A); emu_Map_B4CD_0750();
l__0C4A:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x8);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x8) goto l__0C5F;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x9);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x9) goto l__0C5F;
	goto l__0D60;
l__0C5F:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__0CF9;
l__0C67:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x255E));
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0C7D); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0C7D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0C89); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0C89:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xA) < (int16)0x0) { /* Unresolved jump */ emu_ip = 0x0CA5; emu_last_cs = 0xB4CD; emu_last_ip = 0x0C91; emu_last_length = 0x0034; emu_last_crc = 0xF207; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xA) > (int16)0x40) { /* Unresolved jump */ emu_ip = 0x0CA5; emu_last_cs = 0xB4CD; emu_last_ip = 0x0C97; emu_last_length = 0x0034; emu_last_crc = 0xF207; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xC) < (int16)0x0) { /* Unresolved jump */ emu_ip = 0x0CA5; emu_last_cs = 0xB4CD; emu_last_ip = 0x0C9D; emu_last_length = 0x0034; emu_last_crc = 0xF207; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x40);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xC) <= (int16)0x40) goto l__0CBD;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x8);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x8) { /* Unresolved jump */ emu_ip = 0x0CB1; emu_last_cs = 0xB4CD; emu_last_ip = 0x0CA9; emu_last_length = 0x0034; emu_last_crc = 0xF207; emu_call(); return; }
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x9);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0x9) { /* Unresolved jump */ emu_ip = 0x0CBB; emu_last_cs = 0xB4CD; emu_last_ip = 0x0CAF; emu_last_length = 0x0034; emu_last_crc = 0xF207; emu_call(); return; }
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_orw(&emu_si, emu_ax);
	goto l__0CF6;
l__0CBD:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs);
	emu_push(0x0CC4); emu_Map_B4CD_0750();
l__0CC4:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x8);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0x8) goto l__0CE6;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x8);
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) != 0x8) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
		if (emu_get_memory16(emu_ss, emu_bp, -0x4) != 0x9) goto l__0CE4;
	}
l__0CDA:
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_orw(&emu_si, emu_ax);
l__0CE4:
	goto l__0CF6;
l__0CE6:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x9);
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) == 0x9) {
		emu_ax = 0x1;
		emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
		emu_shlw(&emu_ax, emu_cl);
		emu_orw(&emu_si, emu_ax);
	}
l__0CF6:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__0CF9:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) >= (int16)0x4) goto l__0D02;
	goto l__0C67;
l__0D02:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x8);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0x8) goto l__0D0D;
	emu_addw(&emu_si, 0x31);
	goto l__0D10;
l__0D0D:
	emu_addw(&emu_si, 0x41);
l__0D10:
	emu_bx = emu_di;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = 0x2E9C;
	emu_es = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x323F) = 0x8000;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_si;
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_andw(&emu_ax, 0x1FF);
	emu_dx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
	emu_dx = emu_ax;
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_bx = emu_di;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = 0x2E9C;
	emu_es = emu_ax;
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x323F), emu_dx);
l__0D60:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0D6B); emu_Map_Update();
l__0D6B:
	emu_addw(&emu_sp, 0x6);
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
 * Decompiled function f__B4CD_0D74_0020_7CC1()
 *
 * @name f__B4CD_0D74_0020_7CC1
 * @implements B4CD:0D74:0020:7CC1 ()
 * @implements B4CD:0D91:0003:5D9C
 * @implements B4CD:0D94:0008:DB39
 * @implements B4CD:0D9C:008E:1E0C
 * @implements B4CD:0DD5:0055:82D9
 * @implements B4CD:0DD8:0052:A721
 * @implements B4CD:0E0B:001F:9678
 * @implements B4CD:0E2A:000D:60E7
 * @implements B4CD:0E37:0014:9D6D
 * @implements B4CD:0E4B:0002:C03A
 * @implements B4CD:0E4D:0005:7A4B
 * @implements B4CD:0E52:0013:7F23
 * @implements B4CD:0E65:0012:019A
 * @implements B4CD:0E68:000F:A3BC
 * @implements B4CD:0E77:0009:22AF
 * @implements B4CD:0E80:000C:89C5
 * @implements B4CD:0E8C:0006:15FB
 * @implements B4CD:0E92:001A:BEC5
 * @implements B4CD:0EAC:0008:ADED
 * @implements B4CD:0EB4:000E:1CF6
 * @implements B4CD:0EC2:0018:A5DB
 * @implements B4CD:0ECC:000E:8D40
 * @implements B4CD:0EDA:000F:4404
 * @implements B4CD:0EE9:000C:AA07
 * @implements B4CD:0EF5:0005:F131
 * @implements B4CD:0EFA:001A:BEC5
 * @implements B4CD:0F14:0008:ADED
 * @implements B4CD:0F1C:000E:1CF6
 * @implements B4CD:0F2A:0015:5591
 * @implements B4CD:0F34:000B:8C55
 * @implements B4CD:0F3F:0010:7BD6
 * @implements B4CD:0F4F:0002:C03A
 * @implements B4CD:0F51:000F:9BBA
 * @implements B4CD:0F60:000D:976C
 * @implements B4CD:0F6D:0008:D74D
 * @implements B4CD:0F75:000B:41A4
 * @implements B4CD:0F76:000A:61AF
 * @implements B4CD:0F80:0005:63B7
 * @implements B4CD:0F82:0003:6223
 * @implements B4CD:0F85:0006:F7CE
 *
 * Called From: 34CD:0070:0005:0000
 */
void f__B4CD_0D74_0020_7CC1()
{
l__0D74:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0D94;
	emu_xorw(&emu_ax, emu_ax);
l__0D91:
	goto l__0F85;
l__0D94:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0D9C); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0D9C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x10) == 0) goto l__0DD8;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_andw(&emu_dx, 0x0);
	emu_andw(&emu_ax, 0x4);
	emu_orw(&emu_dx, emu_ax);
	if (emu_dx != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x18);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
		if ((int16)emu_ax <= (int16)emu_get_memory16(emu_es, emu_bx, 0x16)) goto l__0DD8;
	}
l__0DD5:
	emu_di = 0x2;
l__0DD8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x10) == 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
		emu_dx = emu_get_memory16(emu_es, emu_bx, 0xE);
		emu_andw(&emu_dx, 0x0);
		emu_andw(&emu_ax, 0x4);
		emu_orw(&emu_dx, emu_ax);
		if (emu_dx != 0) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
			emu_ax = emu_get_memory16(emu_es, emu_bx, 0x18);
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
			emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
			if ((int16)emu_ax <= (int16)emu_get_memory16(emu_es, emu_bx, 0x16)) {
				emu_di = 0x1;
			}
		}
	}
l__0E0B:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__0E68;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E2A); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E2A:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2574;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E37); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_LoadFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E37:
	emu_addw(&emu_sp, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x38C4) = 0x1;
	emu_push(emu_cs); emu_push(0x0E4B); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E4B:
	goto l__0E4D;
l__0E4D:
	emu_push(emu_cs); emu_push(0x0E52); emu_cs = 0x1DD7; emu_Driver_Voice_01EB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E52:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0E4D;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x3E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E65); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E65:
	emu_addw(&emu_sp, 0x6);
l__0E68:
	emu_ax = emu_di;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__0E77;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__0EDA;
	goto l__0F4F;
l__0E77:
	emu_ax = 0x1C;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E80); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E80:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0E8C); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_GetFrameCount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E8C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	goto l__0ECC;
l__0E92:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x88;
	emu_push(emu_ax);
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0EAC); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0EAC:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0EB4); emu_cs = 0x0642; emu_GUI_PaletteAnimate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0EB4:
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0x3;
	goto l__0EC2;
l__0EC2:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__0EC2;
	emu_decw(&emu_si);
l__0ECC:
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) goto l__0E92;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x10);
	goto l__0F51;
l__0EDA:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x3E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EE9); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0EE9:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1D;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EF5); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0EF5:
	emu_pop(&emu_cx);
	emu_xorw(&emu_si, emu_si);
	goto l__0F34;
l__0EFA:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x88;
	emu_push(emu_ax);
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F14); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F14:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0F1C); emu_cs = 0x0642; emu_GUI_PaletteAnimate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F1C:
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0x3;
	goto l__0F2A;
l__0F2A:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__0F2A;
	emu_incw(&emu_si);
l__0F34:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F3F); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_GetFrameCount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F3F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_si);
	if ((int16)emu_ax > (int16)emu_si) goto l__0EFA;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFEF);
	goto l__0F51;
l__0F4F:
	goto l__0F51;
l__0F51:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__0F76;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F60); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_Unload();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F60:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x3A12) = 0x1;
	emu_push(emu_cs); emu_push(0x0F6D); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F6D:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F75); emu_cs = 0x07D4; emu_Unknown_07D4_159A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F75:
	emu_pop(&emu_cx);
l__0F76:
	emu_cmpw(&emu_di, 0x1);
	if (emu_di != 0x1) goto l__0F80;
	emu_ax = 0x1;
	goto l__0F82;
l__0F80:
	emu_xorw(&emu_ax, emu_ax);
l__0F82:
	goto l__0D91;
l__0F85:
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
 * Decompiled function f__B4CD_1019_0011_089E()
 *
 * @name f__B4CD_1019_0011_089E
 * @implements B4CD:1019:0011:089E ()
 * @implements B4CD:102A:0009:C1E1
 * @implements B4CD:1033:000D:8FA0
 * @implements B4CD:1040:000E:8921
 * @implements B4CD:104E:0011:EE01
 * @implements B4CD:105F:000F:A93B
 * @implements B4CD:106E:000D:792A
 * @implements B4CD:1077:0004:EAB9
 * @implements B4CD:1079:0002:C2BA
 * @implements B4CD:107B:0005:A97A
 * @implements B4CD:1080:0006:F7CE
 *
 * Called From: 34CD:0089:0005:0000
 */
void f__B4CD_1019_0011_089E()
{
l__1019:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x102A); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__102A:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1033); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1033:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x1040); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1040:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax > emu_di) goto l__1077;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x104E); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__104E:
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0xF);
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax <= emu_di) goto l__1077;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x105F); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__105F:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__1077;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x106E); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__106E:
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0xA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__107B;
l__1077:
	emu_xorw(&emu_ax, emu_ax);
l__1079:
	goto l__1080;
l__107B:
	emu_ax = 0x1;
	goto l__1079;
l__1080:
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
 * Decompiled function f__B4CD_1086_0040_F11C()
 *
 * @name f__B4CD_1086_0040_F11C
 * @implements B4CD:1086:0040:F11C ()
 * @implements B4CD:10C6:0003:DB9A
 * @implements B4CD:10C7:0002:D0BA
 * @implements B4CD:10C9:0019:CA1D
 * @implements B4CD:10E2:0002:B13A
 * @implements B4CD:10E4:0006:4C29
 * @implements B4CD:10EA:0004:DE52
 *
 * Called From: 34CD:00C0:0005:0000
 * Called From: B4CD:02EA:0007:65F9
 * Called From: B4CD:02EA:000B:4349
 * Called From: B4CD:1B30:000D:E672
 */
void f__B4CD_1086_0040_F11C()
{
l__1086:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_si, 0x1000);
	if ((int16)emu_si >= (int16)0x1000) goto l__10E4;
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ah = 0x0;
	emu_decw(&emu_ax);
	emu_di = emu_ax;
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) goto l__10E4;
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x10) == 0) goto l__10C9;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x10C6); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__10C6:
	emu_pop(&emu_cx);
l__10C7:
	goto l__10EA;
l__10C9:
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x20);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x20) == 0) goto l__10E4;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x10E2); emu_cs = 0x1082; emu_Structure_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__10E2:
	goto l__10C6;
l__10E4:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__10C7;
l__10EA:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_1178_000D_B1D5()
 *
 * @name f__B4CD_1178_000D_B1D5
 * @implements B4CD:1178:000D:B1D5 ()
 * @implements B4CD:1185:000B:7663
 * @implements B4CD:1190:002C:481A
 * @implements B4CD:11BC:0040:9F1F
 * @implements B4CD:11D7:0025:1314
 * @implements B4CD:11FC:002F:1C91
 * @implements B4CD:1217:0014:177A
 * @implements B4CD:122B:0020:30BA
 * @implements B4CD:1237:0014:085E
 * @implements B4CD:124B:0015:24F3
 * @implements B4CD:1257:0009:23D1
 * @implements B4CD:1260:0009:FFF3
 *
 * Called From: 34CD:0084:0005:0000
 */
void f__B4CD_1178_000D_B1D5()
{
l__1178:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1185); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1185:
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1190); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1190:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_subw(&emu_si, 0x7);
	emu_subw(&emu_di, 0x5);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C12));
	emu_addw(&emu_ax, 0xFFF1);
	emu_cmpw(&emu_ax, emu_si);
	if ((int16)emu_ax <= (int16)emu_si) goto l__11BC;
	emu_ax = emu_si;
	goto l__11D7;
l__11BC:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C12));
	emu_addw(&emu_ax, 0xFFF1);
l__11D7:
	emu_si = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C14));
	emu_addw(&emu_ax, 0xFFF6);
	emu_cmpw(&emu_ax, emu_di);
	if ((int16)emu_ax <= (int16)emu_di) goto l__11FC;
	emu_ax = emu_di;
	goto l__1217;
l__11FC:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C14));
	emu_addw(&emu_ax, 0xFFF6);
l__1217:
	emu_di = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3C0E), emu_si);
	if ((int16)emu_get_memory16(emu_ds, emu_bx, 0x3C0E) >= (int16)emu_si) goto l__122B;
	emu_ax = emu_si;
	goto l__1237;
l__122B:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
l__1237:
	emu_si = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3C10), emu_di);
	if ((int16)emu_get_memory16(emu_ds, emu_bx, 0x3C10) >= (int16)emu_di) goto l__124B;
	emu_ax = emu_di;
	goto l__1257;
l__124B:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
l__1257:
	emu_di = emu_ax;
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1260); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1260:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x39FE) = emu_ax;
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_1269_0019_A3E5()
 *
 * @name f__B4CD_1269_0019_A3E5
 * @implements B4CD:1269:0019:A3E5 ()
 * @implements B4CD:127D:0005:DC8B
 * @implements B4CD:127F:0003:DD1F
 * @implements B4CD:1282:0041:6812
 * @implements B4CD:12C1:0002:9D3A
 * @implements B4CD:12C3:0006:BB3C
 * @implements B4CD:12C9:0009:C1E1
 * @implements B4CD:12D2:001B:74F7
 * @implements B4CD:12EB:0002:883A
 * @implements B4CD:12ED:0017:38A6
 * @implements B4CD:1304:0009:9EC8
 * @implements B4CD:130D:0008:0671
 * @implements B4CD:1315:0008:9A3D
 * @implements B4CD:131D:0030:3072
 * @implements B4CD:1348:0005:7FBE
 * @implements B4CD:134D:000A:D12D
 * @implements B4CD:1357:000A:7128
 * @implements B4CD:1361:000C:8CAD
 * @implements B4CD:136D:000C:71AB
 * @implements B4CD:1379:0008:92A7
 * @implements B4CD:1381:0006:F7CE
 *
 * Called From: 34CD:00CA:0005:0000
 * Called From: B4CD:04A5:0008:A0B3
 * Called From: B4CD:08CC:0013:109B
 */
void f__B4CD_1269_0019_A3E5()
{
l__1269:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1282;
l__127D:
	emu_xorw(&emu_ax, emu_ax);
l__127F:
	goto l__1381;
l__1282:
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x8) == 0) goto l__12C3;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39F2));
	if (emu_ax <= emu_get_memory16(emu_ds, 0x00, 0x39F2)) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39F2);
		emu_subw(&emu_ax, 0x10);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
		if (emu_ax <= emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__12C3;
	}
l__12C1:
	goto l__127D;
l__12C3:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x12C9); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__12C9:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x12D2); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__12D2:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) >= (int16)0x0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x40);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x40) {
			emu_orw(&emu_di, emu_di);
			if (!(emu_flags.sf != emu_flags.of)) {
				emu_cmpw(&emu_di, 0x40);
				if ((int16)emu_di < (int16)0x40) goto l__12ED;
			}
		}
	}
l__12EB:
	goto l__127D;
l__12ED:
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1304); emu_cs = 0x07D4; emu_Unknown_07D4_02F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1304:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x130D); emu_Unit_Get_ByPackedTile();
l__130D:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1315); emu_cs = 0x1423; f__1423_08CD_0012_0004();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1315:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x131D); emu_Structure_Get_ByPackedTile();
l__131D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_al = 0x1;
		emu_cl = emu_get_memory8(emu_ss, emu_bp,  0x8);
		emu_shlb(&emu_al, emu_cl);
		emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x1);
		if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x1) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
			emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), 0x8);
		}
	}
l__1348:
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x134D); f__B4CD_1387_002A_D695();
l__134D:
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1357); f__B4CD_1387_002A_D695();
l__1357:
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1361); f__B4CD_1387_002A_D695();
l__1361:
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0xFFC0);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x136D); f__B4CD_1387_002A_D695();
l__136D:
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x40);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1379); f__B4CD_1387_002A_D695();
l__1379:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	goto l__127F;
l__1381:
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
 * Decompiled function f__B4CD_1387_002A_D695()
 *
 * @name f__B4CD_1387_002A_D695
 * @implements B4CD:1387:002A:D695 ()
 * @implements B4CD:13B1:0031:0880
 * @implements B4CD:13E2:0009:91DC
 * @implements B4CD:13EB:0016:BAD0
 * @implements B4CD:1401:000C:A8AF
 * @implements B4CD:140D:0028:D1A8
 * @implements B4CD:1429:000C:5200
 * @implements B4CD:1435:0041:6709
 * @implements B4CD:145B:001B:2DF2
 * @implements B4CD:145E:0018:DC12
 * @implements B4CD:1464:0012:772A
 * @implements B4CD:1476:0008:0671
 * @implements B4CD:147E:0043:D5C5
 * @implements B4CD:1481:0040:C694
 * @implements B4CD:149A:0027:F865
 * @implements B4CD:14C1:0009:B383
 * @implements B4CD:14C4:0006:F7CE
 *
 * Called From: B4CD:134A:0005:7FBE
 * Called From: B4CD:134A:0030:3072
 * Called From: B4CD:1354:000A:D12D
 * Called From: B4CD:135E:000A:7128
 * Called From: B4CD:136A:000C:8CAD
 * Called From: B4CD:1376:000C:71AB
 */
void f__B4CD_1387_002A_D695()
{
l__1387:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_andw(&emu_di, 0xFFF);
	emu_xorw(&emu_si, emu_si);
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x8) != 0) goto l__13B1;
	emu_si = 0xF;
	goto l__1464;
l__13B1:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_si = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BC), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38BC) != 0x0) goto l__13E2;
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x39F2));
	if (emu_si > emu_get_memory16(emu_ds, 0x00, 0x39F2)) { /* Unresolved jump */ emu_ip = 0x13DF; emu_last_cs = 0xB4CD; emu_last_ip = 0x13D3; emu_last_length = 0x0031; emu_last_crc = 0x0880; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39F2);
	emu_subw(&emu_ax, 0xF);
	emu_cmpw(&emu_ax, emu_si);
	if (emu_ax <= emu_si) goto l__13E2;
	goto l__14C4;
l__13E2:
	emu_xorw(&emu_si, emu_si);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__145E;
l__13EB:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2566));
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1401); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1401:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x140D); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__140D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) >= (int16)0x0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x40);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) < (int16)0x40) {
			emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
			if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x8) >= (int16)0x0) {
				emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
				if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x8) < (int16)0x40) goto l__1435;
			}
		}
	}
l__1429:
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_orw(&emu_si, emu_ax);
	goto l__145B;
l__1435:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2566));
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x8) == 0) {
		emu_ax = 0x1;
		emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
		emu_shlw(&emu_ax, emu_cl);
		emu_orw(&emu_si, emu_ax);
	}
l__145B:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__145E:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x4) goto l__13EB;
l__1464:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__149A;
	emu_cmpw(&emu_si, 0xF);
	if (emu_si == 0xF) goto l__1481;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1476); emu_Unit_Get_ByPackedTile();
l__1476:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x147E); emu_cs = 0x1423; f__1423_08CD_0012_0004();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__147E:
	emu_addw(&emu_sp, 0x6);
l__1481:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_si;
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x0);
l__149A:
	emu_ax = emu_si;
	emu_andw(&emu_ax, 0x7F);
	emu_dx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x1), 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x1), emu_al);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x14C1); emu_Map_Update();
l__14C1:
	emu_addw(&emu_sp, 0x6);
l__14C4:
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
 * Decompiled function f__B4CD_14CA_0013_F579()
 *
 * @name f__B4CD_14CA_0013_F579
 * @implements B4CD:14CA:0013:F579 ()
 * @implements B4CD:14DD:0008:D276
 * @implements B4CD:14E5:0036:B84B
 * @implements B4CD:151B:000C:452A
 * @implements B4CD:1527:0015:ABE6
 * @implements B4CD:152A:0012:EEB2
 * @implements B4CD:153C:000A:2CAC
 * @implements B4CD:153D:0009:3AEC
 * @implements B4CD:1546:0006:FC98
 *
 * Called From: 34CD:0093:0005:0000
 */
void f__B4CD_14CA_0013_F579()
{
l__14CA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BC), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38BC) != 0x0) goto l__152A;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x14DD); emu_Unit_Get_ByPackedTile();
l__14DD:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x14E5); emu_cs = 0x1A34; emu_Unit_Unknown10EC();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__14E5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
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
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x151B); emu_cs = 0x0F3F; emu_Tile_Unpack();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__151B:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = 0x13;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1527); emu_cs = 0x06F7; emu_Map_MakeExplosion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1527:
	emu_addw(&emu_sp, 0xA);
l__152A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__153D;
	emu_ax = 0x24;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x153C); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__153C:
	emu_pop(&emu_cx);
l__153D:
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1546); f__B4CD_154C_0015_B7FB();
l__1546:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_154C_0015_B7FB()
 *
 * @name f__B4CD_154C_0015_B7FB
 * @implements B4CD:154C:0015:B7FB ()
 * @implements B4CD:1561:0006:BF3C
 * @implements B4CD:1567:000A:1EC9
 * @implements B4CD:1571:000D:9D84
 * @implements B4CD:157E:0009:AFDE
 * @implements B4CD:1587:0013:97E3
 * @implements B4CD:159A:000E:56C5
 * @implements B4CD:15A8:0014:B701
 * @implements B4CD:15BC:000C:5B07
 * @implements B4CD:15C1:0007:5BAD
 * @implements B4CD:15C8:0011:D4BE
 * @implements B4CD:15D9:0011:3494
 * @implements B4CD:15EA:001A:690A
 * @implements B4CD:15EB:0019:7F4A
 * @implements B4CD:15EE:0016:B8CD
 * @implements B4CD:15F6:000E:1B50
 * @implements B4CD:1604:0008:AE7C
 * @implements B4CD:1606:0006:F7CE
 *
 * Called From: 34CD:00C5:0005:0000
 * Called From: B4CD:1543:0009:3AEC
 * Called From: B4CD:1543:000A:2CAC
 */
void f__B4CD_154C_0015_B7FB()
{
l__154C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__1561;
	goto l__1606;
l__1561:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1567); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1567:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1571); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1571:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_si;
	emu_negw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	goto l__15F6;
l__157E:
	emu_ax = emu_si;
	emu_negw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	goto l__15EE;
l__1587:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x159A); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__159A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x15A8); emu_cs = 0x0F3F; emu_Tile_GetDistancePacked();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__15A8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_si);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xC) < (int16)emu_si) goto l__15C1;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_si);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) != emu_si) goto l__15EB;
	emu_push(emu_cs); emu_push(0x15BC); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__15BC:
	emu_testw(&emu_ax, 0x1);
	if ((emu_ax & 0x1) == 0) goto l__15EB;
l__15C1:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x15C8); emu_Map_B4CD_0750();
l__15C8:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x8);
	if (emu_ax == 0x8) goto l__15EB;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x15D9); f__B4CD_0AFA_0011_D5DB();
l__15D9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) == 0x0) goto l__15EB;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x15EA); emu_cs = 0x07D4; emu_Unknown_07D4_02F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__15EA:
	emu_pop(&emu_cx);
l__15EB:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__15EE:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_si);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x4) <= (int16)emu_si) goto l__1587;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
l__15F6:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_si);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) <= (int16)emu_si) goto l__157E;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1604); f__B4CD_0AFA_0011_D5DB();
l__1604:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__1606:
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
 * Decompiled function f__B4CD_160C_0014_FAD7()
 *
 * @name f__B4CD_160C_0014_FAD7
 * @implements B4CD:160C:0014:FAD7 ()
 * @implements B4CD:1620:0041:434A
 * @implements B4CD:1661:0019:9C36
 * @implements B4CD:167A:0005:962E
 * @implements B4CD:167F:0019:3A16
 * @implements B4CD:1698:000B:799F
 * @implements B4CD:16A3:0015:F7A4
 * @implements B4CD:16A5:0013:6569
 * @implements B4CD:16B3:0005:517D
 * @implements B4CD:16B8:000D:6A7A
 * @implements B4CD:16C5:0007:638B
 * @implements B4CD:16CC:000D:3D05
 * @implements B4CD:16D9:000C:93DB
 * @implements B4CD:16E5:0005:517D
 * @implements B4CD:16EA:000F:CF15
 * @implements B4CD:16F9:0008:CAD0
 * @implements B4CD:1701:0013:CD58
 * @implements B4CD:1714:000C:87AA
 * @implements B4CD:1720:0005:517D
 * @implements B4CD:1725:000F:CF15
 * @implements B4CD:1734:0008:CAD0
 * @implements B4CD:173C:0015:80B5
 * @implements B4CD:1751:0020:CD8B
 * @implements B4CD:1771:0005:A8EE
 * @implements B4CD:1776:0005:517D
 * @implements B4CD:177B:000F:CF15
 * @implements B4CD:178A:0008:CAD0
 * @implements B4CD:1792:0015:9EB5
 * @implements B4CD:17A7:0020:CD8B
 * @implements B4CD:17CA:0002:C13A
 * @implements B4CD:17CE:0006:F7CE
 *
 * Called From: 34CD:009D:0005:0000
 */
void f__B4CD_160C_0014_FAD7()
{
l__160C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1620); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1620:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39F6);
	emu_andw(&emu_ax, 0x1FF);
	emu_dx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = 0x2E9C;
	emu_dx = 0x8000;
	emu_orw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x39F6));
	emu_es = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x323F) = emu_dx;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1661); emu_Map_Update();
l__1661:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_di;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x167A); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__167A:
	emu_addw(&emu_sp, 0x8);
	goto l__16A5;
l__167F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax == emu_di) goto l__1698;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	goto l__16B3;
l__1698:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x16A3); emu_cs = 0x0FE4; emu_Unit_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__16A3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__16A5:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax != 0) goto l__167F;
l__16B3:
	emu_push(emu_cs); emu_push(0x16B8); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__16B8:
	emu_andw(&emu_ax, 0x3);
	emu_bx = emu_ax;
	emu_cmpw(&emu_bx, 0x3);
	if (emu_bx <= 0x3) goto l__16C5;
	/* Unresolved jump */ emu_ip = 0x17CC; emu_last_cs = 0xB4CD; emu_last_ip = 0x16C2; emu_last_length = 0x000D; emu_last_crc = 0x6A7A; emu_call();
l__16C5:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x17D4);
	switch (emu_ip) {
		case 0x16CC: goto l__16CC;
		case 0x16E5: goto l__16E5;
		case 0x1720: goto l__1720;
		case 0x1776: goto l__1776;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4CD; emu_last_ip = 0x16C7; emu_last_length = 0x0007; emu_last_crc = 0x638B;
			emu_call();
			return;
	}
l__16CC:
	emu_ax = 0x190;
	emu_push(emu_ax);
	emu_ax = 0x96;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x16D9); emu_cs = 0x2537; emu_Tools_RandomRange();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__16D9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_ax);
	goto l__17CE;
l__16E5:
	emu_push(emu_cs); emu_push(0x16EA); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__16EA:
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x16F9); emu_cs = 0x0F3F; emu_Tile_Unpack();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__16F9:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1701); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1701:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = 0xD;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1714); emu_cs = 0x1A34; emu_Unit_Create();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1714:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	goto l__17CE;
l__1720:
	emu_push(emu_cs); emu_push(0x1725); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1725:
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1734); emu_cs = 0x0F3F; emu_Tile_Unpack();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1734:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x173C); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__173C:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = 0xD;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1751); emu_cs = 0x1A34; emu_Unit_Create();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1751:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x1774; emu_last_cs = 0xB4CD; emu_last_ip = 0x1760; emu_last_length = 0x0020; emu_last_crc = 0xCD8B; emu_call(); return; }
	emu_ax = 0xB;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x1771); emu_cs = 0x176C; emu_Unit_SetAction();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1771:
	emu_addw(&emu_sp, 0x6);
	goto l__17CE;
l__1776:
	emu_push(emu_cs); emu_push(0x177B); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__177B:
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x10;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x178A); emu_cs = 0x0F3F; emu_Tile_Unpack();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__178A:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1792); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1792:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x17A7); emu_cs = 0x1A34; emu_Unit_Create();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__17A7:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax == 0) goto l__17CA;
	emu_ax = 0xB;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x17C7); emu_cs = 0x176C; emu_Unit_SetAction();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
	/* Unresolved jump */ emu_ip = 0x17C7; emu_last_cs = 0xB4CD; emu_last_ip = 0x17C7; emu_last_length = 0x0020; emu_last_crc = 0xCD8B; emu_call();
l__17CA:
	goto l__17CE;
l__17CE:
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
 * Decompiled function f__B4CD_17DC_0019_CB46()
 *
 * @name f__B4CD_17DC_0019_CB46
 * @implements B4CD:17DC:0019:CB46 ()
 * @implements B4CD:17F5:0002:2597
 *
 * Called From: 34CD:007F:0005:0000
 * Called From: B4CD:00D1:000A:13D1
 */
void f__B4CD_17DC_0019_CB46()
{
l__17DC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_andw(&emu_ax, 0xFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3952));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_andw(&emu_ax, 0x7);
	goto l__17F5;
l__17F5:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_17F7_001D_1CA2()
 *
 * @name f__B4CD_17F7_001D_1CA2
 * @implements B4CD:17F7:001D:1CA2 ()
 * @implements B4CD:1814:0002:2597
 *
 * Called From: 34CD:005C:0005:0000
 */
void f__B4CD_17F7_001D_1CA2()
{
l__17F7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_andw(&emu_ax, 0xFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3952));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_andw(&emu_ax, 0xF0);
	emu_cl = 0x4;
	emu_sarw(&emu_ax, emu_cl);
	goto l__1814;
l__1814:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_1816_0033_B55B()
 *
 * @name f__B4CD_1816_0033_B55B
 * @implements B4CD:1816:0033:B55B ()
 * @implements B4CD:1849:0005:97AE
 * @implements B4CD:184E:0018:18AB
 * @implements B4CD:1866:000B:166D
 * @implements B4CD:1871:0013:0FAD
 * @implements B4CD:1873:0011:449B
 * @implements B4CD:1881:0003:9C0D
 * @implements B4CD:1884:000B:06D0
 * @implements B4CD:188F:0007:A5AC
 * @implements B4CD:1896:0028:64E3
 * @implements B4CD:18A5:0019:7F1B
 * @implements B4CD:18BE:0014:F426
 * @implements B4CD:18CC:0006:433A
 * @implements B4CD:18D2:0007:3CD7
 * @implements B4CD:18D9:0018:7F2B
 * @implements B4CD:18F1:002C:A4D0
 * @implements B4CD:191D:001E:DD2D
 * @implements B4CD:193B:0018:7F2B
 * @implements B4CD:1953:0021:6DF8
 * @implements B4CD:1974:0014:2694
 * @implements B4CD:1988:0023:1CC6
 * @implements B4CD:19AB:0014:F426
 * @implements B4CD:19BF:000F:440E
 * @implements B4CD:19CE:000A:A28B
 * @implements B4CD:19D5:0003:9DB3
 * @implements B4CD:1A30:0010:6E76
 * @implements B4CD:1A40:0029:FA07
 * @implements B4CD:1A69:000A:CB50
 * @implements B4CD:1A73:0007:7DE1
 * @implements B4CD:1B0E:000B:60DD
 * @implements B4CD:1B19:0009:B244
 * @implements B4CD:1B20:0002:C23A
 * @implements B4CD:1B24:0002:CFBA
 * @implements B4CD:1B26:000D:E672
 * @implements B4CD:1B33:000E:EBDE
 * @implements B4CD:1B3A:0007:480D
 * @implements B4CD:1B41:0004:0772
 * @implements B4CD:1B45:0006:F7CE
 *
 * Called From: 34CD:0098:0005:0000
 */
void f__B4CD_1816_0033_B55B()
{
l__1816:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_xorw(&emu_si, emu_si);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x256E);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x6);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) != 0x6) goto l__1881;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1849); emu_cs = 0x1082; emu_Structure_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1849:
	emu_addw(&emu_sp, 0x8);
	goto l__1873;
l__184E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax == emu_di) goto l__1866;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_di = emu_ax;
	goto l__1881;
l__1866:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1871); emu_cs = 0x1082; emu_Structure_FindNext();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1871:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__1873:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax != 0) goto l__184E;
l__1881:
	goto l__1B3A;
l__1884:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_bx, 0x7);
	if (emu_bx <= 0x7) goto l__188F;
	/* Unresolved jump */ emu_ip = 0x1B22; emu_last_cs = 0xB4CD; emu_last_ip = 0x188C; emu_last_length = 0x000B; emu_last_crc = 0x06D0; emu_call();
l__188F:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1B4B);
	switch (emu_ip) {
		case 0x1896: goto l__1896;
		case 0x18D9: goto l__18D9;
		case 0x191D: goto l__191D;
		case 0x193B: goto l__193B;
		case 0x1974: goto l__1974;
		case 0x1A30: goto l__1A30;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4CD; emu_last_ip = 0x1891; emu_last_length = 0x0007; emu_last_crc = 0xA5AC;
			emu_call();
			return;
	}
l__1896:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
l__18A5:
	emu_push(emu_ax);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C12);
	emu_addw(&emu_ax, 0xFFFE);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18BE); emu_cs = 0x2537; emu_Tools_RandomRange();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__18BE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C0E));
l__18CC:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18D2); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__18D2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	goto l__1B26;
l__18D9:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C14);
	emu_addw(&emu_ax, 0xFFFE);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18F1); emu_cs = 0x2537; emu_Tools_RandomRange();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__18F1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C10));
	emu_push(emu_ax);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C12);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C0E));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	goto l__18CC;
l__191D:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C14);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C10));
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	goto l__18A5;
l__193B:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C14);
	emu_addw(&emu_ax, 0xFFFE);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1953); emu_cs = 0x2537; emu_Tools_RandomRange();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1953:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C10));
	emu_push(emu_ax);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	goto l__18CC;
l__1974:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3C14));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1988); emu_cs = 0x2537; emu_Tools_RandomRange();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1988:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C10));
	emu_push(emu_ax);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3C12));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x19AB); emu_cs = 0x2537; emu_Tools_RandomRange();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__19AB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C0E));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x19BF); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__19BF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_di != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__19D5;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x19CE); emu_Map_IsValidPosition();
l__19CE:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_xorw(&emu_si, emu_si);
	}
l__19D5:
	goto l__1B26;
l__1A30:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1A40); emu_cs = 0x1082; emu_Structure_FindFirst();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1A40:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x1A7A; emu_last_cs = 0xB4CD; emu_last_ip = 0x1A4F; emu_last_length = 0x0029; emu_last_crc = 0xFA07; emu_call(); return; }
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x78;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1A69); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1A69:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1A73); emu_cs = 0x0F3F; emu_Tile_PackTile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1A73:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	goto l__1B0E;
l__1B0E:
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_di != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1B20;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1B19); emu_Map_IsValidPosition();
l__1B19:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_xorw(&emu_si, emu_si);
	}
l__1B20:
	goto l__1B26;
l__1B24:
	goto l__1B45;
l__1B26:
	emu_andw(&emu_si, 0xFFF);
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__1B3A;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1B33); f__B4CD_1086_0040_F11C();
l__1B33:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) {
		emu_xorw(&emu_si, emu_si);
	}
l__1B3A:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__1B41;
	goto l__1884;
l__1B41:
	emu_ax = emu_si;
	goto l__1B24;
l__1B45:
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
 * Decompiled function f__B4CD_1C1A_001A_9C1B()
 *
 * @name f__B4CD_1C1A_001A_9C1B
 * @implements B4CD:1C1A:001A:9C1B ()
 * @implements B4CD:1C2F:0005:1C9C
 * @implements B4CD:1C31:0003:1D08
 * @implements B4CD:1C34:0009:A4FE
 * @implements B4CD:1C3D:000E:D7F5
 * @implements B4CD:1C4B:0012:ECD6
 * @implements B4CD:1C5D:0005:517D
 * @implements B4CD:1C62:000D:A6B8
 * @implements B4CD:1C6F:0016:10DA
 * @implements B4CD:1C7A:000B:C572
 * @implements B4CD:1C85:001A:031C
 * @implements B4CD:1C88:0017:2D16
 * @implements B4CD:1C9F:0008:3AB2
 * @implements B4CD:1CA7:000A:CB50
 * @implements B4CD:1CB1:000C:2B84
 * @implements B4CD:1CBD:000B:3A20
 * @implements B4CD:1CCB:0009:8EEF
 * @implements B4CD:1CD1:0003:A2B6
 * @implements B4CD:1CD4:0006:F7CE
 *
 * Called From: 34CD:0075:0005:0000
 */
void f__B4CD_1C1A_001A_9C1B()
{
l__1C1A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) != 0x0) {
		emu_orw(&emu_di, emu_di);
		if (emu_di != 0) goto l__1C34;
	}
l__1C2F:
	emu_xorw(&emu_ax, emu_ax);
l__1C31:
	goto l__1CD4;
l__1C34:
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1C3D); emu_cs = 0x0F3F; emu_Tile_GetDistancePacked();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1C3D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1C4B); emu_cs = 0x0F3F; f__0F3F_0168_0010_C9EF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1C4B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xA);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x4) <= (int16)0xA) goto l__1CD1;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	goto l__1CCB;
l__1C5D:
	emu_push(emu_cs); emu_push(0x1C62); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1C62:
	emu_andw(&emu_ax, 0x3F);
	emu_si = emu_ax;
	emu_addw(&emu_si, 0x1F);
	emu_push(emu_cs); emu_push(0x1C6F); emu_cs = 0x2BB4; emu_Tools_Random_256();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1C6F:
	emu_testw(&emu_ax, 0x1);
	if ((emu_ax & 0x1) != 0) {
		emu_ax = emu_si;
		emu_negw(&emu_ax, emu_ax);
		emu_si = emu_ax;
	}
l__1C7A:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x14);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x4) >= (int16)0x14) goto l__1C85;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__1C88;
l__1C85:
	emu_ax = 0x14;
l__1C88:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_cl = 0x8;
	emu_shlw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_cl);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_ax, emu_si);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1C9F); emu_cs = 0x0F3F; emu_Tile_Unpack();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1C9F:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1CA7); emu_cs = 0x0F3F; f__0F3F_028E_0015_1153();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1CA7:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1CB1); emu_cs = 0x0F3F; emu_Tile_PackTile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1CB1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs);
	emu_push(0x1CBD); emu_Map_IsValidPosition();
l__1CBD:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x1CC8; emu_last_cs = 0xB4CD; emu_last_ip = 0x1CC0; emu_last_length = 0x000B; emu_last_crc = 0x3A20; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	goto l__1C31;
l__1CCB:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x4);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x8) < (int16)0x4) goto l__1C5D;
l__1CD1:
	goto l__1C2F;
l__1CD4:
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
 * Decompiled function f__B4CD_1CDA_000C_C72C()
 *
 * @name f__B4CD_1CDA_000C_C72C
 * @implements B4CD:1CDA:000C:C72C ()
 * @implements B4CD:1CE6:0033:84AF
 * @implements B4CD:1D19:002C:E5A9
 * @implements B4CD:1D3B:000A:9499
 * @implements B4CD:1D45:000D:E1A6
 * @implements B4CD:1D52:0008:4D72
 * @implements B4CD:1D5E:0003:2E57
 *
 * Called From: 34CD:0052:0005:0000
 */
void f__B4CD_1CDA_000C_C72C()
{
l__1CDA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1CE6); emu_Map_B4CD_0750();
l__1CE6:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xB);
	if (emu_ax != 0xB) { /* Unresolved jump */ emu_ip = 0x1D5A; emu_last_cs = 0xB4CD; emu_last_ip = 0x1CEA; emu_last_length = 0x0033; emu_last_crc = 0x84AF; emu_call(); return; }
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
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1D19); emu_Map_IsPositionUnveiled();
l__1D19:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39FA);
		emu_andw(&emu_ax, 0x7F);
		emu_dx = emu_si;
		emu_cl = 0x2;
		emu_shlw(&emu_dx, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_dx);
		emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x1), 0x1);
		emu_shlb(&emu_al, 0x1);
		emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x1), emu_al);
	}
l__1D3B:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1D45); emu_cs = 0x0C3A; emu_Structure_ConnectWall();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1D45:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x1D52); emu_Map_Update();
l__1D52:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__1D5E;
l__1D5E:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
