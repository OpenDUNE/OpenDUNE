/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__06F7_0008_0018_D7CD()
 *
 * @name f__06F7_0008_0018_D7CD
 * @implements 06F7:0008:0018:D7CD ()
 * @implements 06F7:0020:0011:E117
 * @implements 06F7:0023:000E:BD07
 * @implements 06F7:0031:000F:001D
 * @implements 06F7:0040:0007:F7AC
 * @implements 06F7:0047:0012:9B52
 * @implements 06F7:0059:0006:5624
 * @implements 06F7:005F:002E:4089
 * @implements 06F7:008D:0015:2E50
 * @implements 06F7:00A2:0035:5769
 * @implements 06F7:00B1:0026:6889
 * @implements 06F7:00D7:0014:59DD
 * @implements 06F7:00DA:0011:7157
 * @implements 06F7:00EB:0008:086B
 * @implements 06F7:00F3:0012:487D
 * @implements 06F7:0105:0013:9DE3
 * @implements 06F7:0118:000B:FD16
 * @implements 06F7:0123:000E:417E
 * @implements 06F7:0131:0008:9688
 * @implements 06F7:0139:0009:F712
 * @implements 06F7:0142:000B:E1A3
 * @implements 06F7:014D:0025:8494
 * @implements 06F7:0172:0011:74B6
 * @implements 06F7:0183:0005:A66E
 * @implements 06F7:0188:000C:AE31
 * @implements 06F7:0194:0011:A76A
 * @implements 06F7:01A5:002B:80F8
 * @implements 06F7:01CD:0003:9DA7
 * @implements 06F7:01D0:0049:4F3C
 * @implements 06F7:0219:0010:9AE3
 * @implements 06F7:021C:000D:1279
 * @implements 06F7:0229:001F:480B
 * @implements 06F7:0248:0032:1BCC
 * @implements 06F7:027A:002D:3F30
 * @implements 06F7:027D:002A:EB74
 * @implements 06F7:0291:0016:E02E
 * @implements 06F7:029B:000C:9030
 * @implements 06F7:02A7:0015:A544
 * @implements 06F7:02BC:000F:C338
 * @implements 06F7:02CB:0007:838A
 * @implements 06F7:02D2:0019:1195
 * @implements 06F7:02DD:000E:1B8D
 * @implements 06F7:02EB:000D:6556
 * @implements 06F7:02EE:000A:B112
 * @implements 06F7:02F8:0013:34B4
 * @implements 06F7:02FA:0011:7F82
 * @implements 06F7:030B:0013:4514
 * @implements 06F7:031E:0049:CA1D
 * @implements 06F7:0359:000E:E9D8
 * @implements 06F7:0367:0010:92A7
 * @implements 06F7:0377:000B:301E
 * @implements 06F7:037A:0008:610A
 * @implements 06F7:0382:001B:4D13
 * @implements 06F7:039D:001B:63CB
 * @implements 06F7:039F:0019:33CD
 * @implements 06F7:03B8:000A:3E9E
 * @implements 06F7:03C2:000A:12F7
 * @implements 06F7:03CC:0013:CD75
 * @implements 06F7:03CE:0011:CB25
 * @implements 06F7:03D1:000E:33E2
 * @implements 06F7:03DF:001A:4AC8
 * @implements 06F7:03E0:0019:5C88
 * @implements 06F7:03F9:0009:B39F
 *
 * Called From: 0972:1580:000C:582A
 * Called From: 0C3A:1386:000E:7330
 * Called From: 176C:1373:002A:8194
 * Called From: 176C:13BF:002F:7128
 * Called From: 176C:13F4:0018:5E8A
 * Called From: 176C:1443:000E:7A30
 * Called From: 176C:175D:0021:1B31
 * Called From: 1A34:04BC:004B:AB24
 * Called From: 1A34:04BC:005A:1EF0
 * Called From: 1A34:0575:0010:2A49
 * Called From: 1A34:05F6:0022:D8CF
 * Called From: 1A34:0655:0035:322D
 * Called From: 1A34:0743:0016:30F8
 * Called From: B4CD:1522:000C:452A
 */
void f__06F7_0008_0018_D7CD()
{
l__0008:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x24);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_cmpw(&emu_di, 0xB);
	if (emu_di != 0xB) goto l__0020;
	emu_ax = 0x20;
	goto l__0023;
l__0020:
	emu_ax = 0x10;
l__0023:
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0031); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0031:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B0) == 0x0) goto l__0040;
	goto l__030B;
l__0040:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0047;
	goto l__030B;
l__0047:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0059); emu_cs = 0x0FE4; emu_Unit_FindFirst();
l__0059:
	emu_addw(&emu_sp, 0x8);
	goto l__02FA;
l__005F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x008D); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__008D:
	emu_addw(&emu_sp, 0x8);
	emu_cl = 0x4;
	emu_sarw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp, -0x20)) goto l__00A2;
	goto l__02EE;
l__00A2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x19) {
		emu_cmpw(&emu_di, 0xD);
		if (emu_di == 0xD) goto l__00DA;
	}
l__00B1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x1A);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x1A) goto l__00DA;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cl = 0x2;
	emu_sarw(&emu_ax, emu_cl);
	emu_dx = emu_si;
	emu_cl = emu_al;
	emu_shrw(&emu_dx, emu_cl);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x00D7); emu_cs = 0x1A34; f__1A34_0B71_0033_9787();
l__00D7:
	emu_addw(&emu_sp, 0x8);
l__00DA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__00EB;
	goto l__02EE;
l__00EB:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x00F3); emu_cs = 0x167E; emu_Tools_Index_GetUnit();
l__00F3:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (emu_ax != 0) goto l__0105;
	goto l__02EE;
l__0105:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0xE)) goto l__0118;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_dx != emu_get_memory16(emu_ss, emu_bp, -0x10)) goto l__0118;
	goto l__02EE;
l__0118:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0123); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__0123:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_cs); emu_push(0x0131); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__0131:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0139); emu_cs = 0x1423; emu_House_AreAllied();
l__0139:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0142;
	goto l__02EE;
l__0142:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x014D); emu_cs = 0x0FE4; f__0FE4_0632_0031_75AA();
l__014D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_ax == 0) goto l__01D0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x1);
	if (emu_get_memory16(emu_es, emu_bx, 0xC) != 0x1) goto l__0188;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0172); emu_cs = 0x16BC; f__16BC_0044_0027_CB92();
l__0172:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xB;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0183); emu_cs = 0x176C; emu_Unit_SetAction();
l__0183:
	emu_addw(&emu_sp, 0x6);
	goto l__01CD;
l__0188:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_push(emu_cs); emu_push(0x0194); emu_cs = 0x167E; emu_Tools_Index_GetUnit();
l__0194:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__01CD;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_push(emu_cs); emu_push(0x01A5); emu_cs = 0x167E; emu_Tools_Index_GetUnit();
l__01A5:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x56) == 0xFFFF) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
		emu_get_memory16(emu_es, emu_bx, 0x1A) = emu_ax;
	}
l__01CD:
	goto l__02EE;
l__01D0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__0229;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) != 0x0) goto l__0229;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x56) != 0x0) goto l__0229;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x1);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) == 0x1) goto l__021C;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x0219); emu_cs = 0x176C; emu_Unit_SetAction();
l__0219:
	emu_addw(&emu_sp, 0x6);
l__021C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_ax;
	goto l__02EE;
l__0229:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x56) != 0xFFFF) goto l__0248;
	goto l__02EE;
l__0248:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__027D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x3);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x3) goto l__027D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x200) == 0) goto l__027D;
	emu_ax = 0xB;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x027A); emu_cs = 0x176C; emu_Unit_SetAction();
l__027A:
	emu_addw(&emu_sp, 0x6);
l__027D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0xB);
		if (emu_get_memory8(emu_es, emu_bx, 0x4F) == 0xB) goto l__029B;
	}
l__0291:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) != 0x0) goto l__02EE;
l__029B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x54));
	emu_push(emu_cs); emu_push(0x02A7); emu_cs = 0x167E; emu_Tools_Index_GetUnit();
l__02A7:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__02DD;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x02BC); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__02BC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x54));
	emu_push(emu_cs); emu_push(0x02CB); emu_cs = 0x167E; emu_Tools_Index_GetPackedTile();
l__02CB:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02D2); emu_cs = 0x0F3F; emu_Tile_GetDistanceOffset();
l__02D2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x50));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_es, emu_bx, 0x50)) goto l__02EE;
l__02DD:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x02EB); emu_cs = 0x1A34; f__1A34_1A66_0011_34D4();
l__02EB:
	emu_addw(&emu_sp, 0x6);
l__02EE:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02F8); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__02F8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__02FA:
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_ax == 0) goto l__030B;
	goto l__005F;
l__030B:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B0) != 0x0) goto l__037A;
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__037A;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x031E); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__031E:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1A));
	if (emu_ax == 0) goto l__037A;
	emu_cmpw(&emu_di, 0x2);
	if (emu_di == 0x2) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
		emu_ax = (int8)emu_al;
		emu_dx = 0x60;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2C94;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x1A);
		emu_sarw(&emu_ax, 0x1);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
		emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
		if ((int16)emu_ax > (int16)emu_get_memory16(emu_es, emu_bx, 0xE)) {
			emu_di = 0xF;
		}
	}
l__0359:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0367); emu_cs = 0x1423; f__1423_0E4F_0010_843C();
l__0367:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs); emu_push(0x0377); emu_cs = 0x0C3A; f__0C3A_1216_0013_E56D();
l__0377:
	emu_addw(&emu_sp, 0x8);
l__037A:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0382); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__0382:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xB);
	if (emu_ax != 0xB) goto l__03E0;
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__03E0;
	emu_ax = 0x2C94;
	emu_es = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_es, 0x00, 0x55A), emu_si);
	if (emu_get_memory16(emu_es, 0x00, 0x55A) > emu_si) goto l__039D;
	emu_ax = 0x1;
	goto l__039F;
l__039D:
	emu_xorw(&emu_ax, emu_ax);
l__039F:
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x22), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x22) != 0x0) goto l__03D1;
	emu_push(emu_si);
	emu_ax = 0x2C94;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x55A));
	emu_push(emu_cs); emu_push(0x03B8); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_ValueToPercent();
l__03B8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
	emu_push(emu_cs); emu_push(0x03C2); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
l__03C2:
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x24));
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0x24)) goto l__03CC;
	emu_ax = 0x1;
	goto l__03CE;
l__03CC:
	emu_xorw(&emu_ax, emu_ax);
l__03CE:
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
l__03D1:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x22), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x22) == 0x0) goto l__03E0;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x03DF); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1CDA_000C_C72C();
l__03DF:
	emu_pop(&emu_cx);
l__03E0:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3214));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3212));
	emu_push(emu_cs);
	emu_push(0x03F9); f__06F7_0493_0015_AAB2();
l__03F9:
	emu_addw(&emu_sp, 0x8);
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
 * Decompiled function f__06F7_0402_0020_9091()
 *
 * @name f__06F7_0402_0020_9091
 * @implements 06F7:0402:0020:9091 ()
 * @implements 06F7:0422:0015:DE46
 * @implements 06F7:0437:0005:A7AE
 * @implements 06F7:043C:0016:DBF2
 * @implements 06F7:0452:0020:117E
 * @implements 06F7:0472:000D:6556
 * @implements 06F7:0475:000A:B112
 * @implements 06F7:047F:0014:397A
 * @implements 06F7:0481:0012:A25F
 *
 * Called From: 1A34:061B:0020:17AB
 */
void f__06F7_0402_0020_9091()
{
l__0402:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3214));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3212));
	emu_push(emu_cs);
	emu_push(0x0422); f__06F7_0493_0015_AAB2();
l__0422:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0437); emu_cs = 0x0FE4; emu_Unit_FindFirst();
l__0437:
	emu_addw(&emu_sp, 0x8);
	goto l__0481;
l__043C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x0452); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__0452:
	emu_addw(&emu_sp, 0x8);
	emu_cl = 0x4;
	emu_sarw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp,  0xC)) goto l__0475;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0472); emu_cs = 0x1A34; f__1A34_1859_0017_DF09();
l__0472:
	emu_addw(&emu_sp, 0x6);
l__0475:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x047F); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__047F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0481:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax != 0) goto l__043C;
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0493_0015_AAB2()
 *
 * @name f__06F7_0493_0015_AAB2
 * @implements 06F7:0493:0015:AAB2 ()
 * @implements 06F7:04A3:0005:9C87
 * @implements 06F7:04A5:0003:9D13
 * @implements 06F7:04A8:000B:8922
 * @implements 06F7:04B3:000A:7932
 * @implements 06F7:04BD:0006:189C
 * @implements 06F7:04C3:001A:0964
 * @implements 06F7:04DD:008D:B829
 * @implements 06F7:056A:0009:5383
 * @implements 06F7:056B:0008:53A0
 * @implements 06F7:0573:0003:22AB
 * @implements 06F7:0576:0006:F7CE
 *
 * Called From: 06F7:03F6:0019:5C88
 * Called From: 06F7:03F6:001A:4AC8
 * Called From: 06F7:041F:0020:9091
 */
void f__06F7_0493_0015_AAB2()
{
l__0493:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__04A8;
l__04A3:
	emu_xorw(&emu_ax, emu_ax);
l__04A5:
	goto l__0576;
l__04A8:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x04B3); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__04B3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x04BD); f__06F7_057C_001F_E1C7();
l__04BD:
	emu_pop(&emu_cx);
	emu_xorw(&emu_si, emu_si);
	goto l__056B;
l__04C3:
	emu_ax = emu_si;
	emu_dx = 0x14;
	emu_imuluw(&emu_ax, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x395A));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if (emu_ax == 0) goto l__04DD;
	goto l__056A;
l__04DD:
	emu_ax = emu_si;
	emu_dx = 0x14;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x395C);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x395A);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_bx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x4) = emu_si;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x9) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xA) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0x12) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x10) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x7) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x3210) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x320E) = 0x0;
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x80);
	emu_ax = 0x1;
	goto l__04A5;
l__056A:
	emu_incw(&emu_si);
l__056B:
	emu_cmpw(&emu_si, 0x20);
	if ((int16)emu_si >= (int16)0x20) goto l__0573;
	goto l__04C3;
l__0573:
	goto l__04A3;
l__0576:
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
 * Decompiled function f__06F7_057C_001F_E1C7()
 *
 * @name f__06F7_057C_001F_E1C7
 * @implements 06F7:057C:001F:E1C7 ()
 * @implements 06F7:059B:0031:20FF
 * @implements 06F7:05CC:0020:AD79
 * @implements 06F7:05EC:000E:ADDD
 * @implements 06F7:05EF:000B:8FB7
 * @implements 06F7:05F0:000A:4FBF
 * @implements 06F7:05F8:0002:C23A
 * @implements 06F7:05FA:0004:9539
 * @implements 06F7:05FE:0004:DE52
 *
 * Called From: 06F7:04BA:000A:7932
 */
void f__06F7_057C_001F_E1C7()
{
l__057C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x80);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x80) == 0) goto l__05FA;
	emu_xorw(&emu_si, emu_si);
	goto l__05F0;
l__059B:
	emu_ax = emu_si;
	emu_dx = 0x14;
	emu_imuluw(&emu_ax, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x395A));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if (emu_ax == 0) goto l__05EF;
	emu_ax = emu_si;
	emu_dx = 0x14;
	emu_imuluw(&emu_ax, emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x395A));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x05CC); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__05CC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax != emu_di) goto l__05EF;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_dx = 0x14;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x395A);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x395C));
	emu_push(emu_dx);
	emu_push(emu_cs);
	emu_push(0x05EC); f__06F7_0A6C_0016_FA05();
l__05EC:
	emu_addw(&emu_sp, 0x6);
l__05EF:
	emu_incw(&emu_si);
l__05F0:
	emu_cmpw(&emu_si, 0x20);
	if ((int16)emu_si < (int16)0x20) goto l__059B;
	emu_ax = 0x1;
l__05F8:
	goto l__05FE;
l__05FA:
	emu_xorw(&emu_ax, emu_ax);
	goto l__05F8;
l__05FE:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0602_0018_CEB0()
 *
 * @name f__06F7_0602_0018_CEB0
 * @implements 06F7:0602:0018:CEB0 ()
 * @implements 06F7:061A:000B:03AD
 * @implements 06F7:0625:0010:F195
 * @implements 06F7:0635:0027:82B9
 * @implements 06F7:065C:0066:DC6B
 * @implements 06F7:0674:004E:37CC
 * @implements 06F7:06AF:0013:D2D5
 * @implements 06F7:06C2:0042:731D
 * @implements 06F7:06C5:003F:D13B
 * @implements 06F7:06EA:001A:BE2E
 * @implements 06F7:06FB:0009:139B
 * @implements 06F7:06FC:0008:13B8
 * @implements 06F7:0704:0009:7D17
 * @implements 06F7:070D:0006:F7CE
 *
 * Called From: 07D4:0044:0015:CB18
 * Called From: 07D4:0044:0005:E72D
 */
void f__06F7_0602_0018_CEB0()
{
l__0602:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3210);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x320E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__061A;
	goto l__0704;
l__061A:
	if (!emu_flags.zf) goto l__0625;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (emu_dx <= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0625;
	goto l__0704;
l__0625:
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x320E), 0x2710);
	emu_adcw(&emu_get_memory16(emu_ds, 0x00, 0x3210), 0x0);
	emu_xorw(&emu_si, emu_si);
	goto l__06FC;
l__0635:
	emu_ax = emu_si;
	emu_dx = 0x14;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x395C);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x395A);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_bx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if (emu_ax != 0) goto l__065C;
	goto l__06FB;
l__065C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__06C5;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__06C5;
	}
l__0674:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0x9));
	emu_ah = 0x0;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_andw(&emu_ax, 0xFFF);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cl = 0xC;
	emu_shrw(&emu_ax, emu_cl);
	emu_andw(&emu_ax, 0xF);
	emu_di = emu_ax;
	emu_cmpw(&emu_di, 0xE);
	if ((int16)emu_di > (int16)0xE) {
		emu_di = 0xE;
	}
l__06AF:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, emu_bx, 0x3262);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, emu_bx, 0x3264);
	emu_push(0x06C2);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x06F70713: f__06F7_0713_0011_15A5(); break;
		case 0x06F7072B: f__06F7_072B_0018_F05F(); break;
		case 0x06F708BD: f__06F7_08BD_0016_9292(); break;
		case 0x06F708DD: f__06F7_08DD_0013_C78B(); break;
		case 0x06F70913: f__06F7_0913_0013_C78B(); break;
		case 0x06F70967: f__06F7_0967_0014_1157(); break;
		case 0x06F70A27: f__06F7_0A27_001D_1D75(); break;
		case 0x06F70A6C: f__06F7_0A6C_0016_FA05(); break;
		case 0x06F70AC1: f__06F7_0AC1_001F_55CB(); break;
		case 0x06F70AE2: f__06F7_0AE2_0010_0B2F(); break;
		case 0x06F70B14: f__06F7_0B14_0024_BD9C(); break;
		case 0x06F70B42: f__06F7_0B42_0024_BD9D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x06F7; emu_last_ip = 0x06BE; emu_last_length = 0x0013; emu_last_crc = 0xD2D5;
			emu_call();
			return;
	}
l__06C2:
	emu_addw(&emu_sp, 0x6);
l__06C5:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if (emu_ax == 0) goto l__06FB;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3210));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x3210)) goto l__06FB;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x3210)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x320E));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x320E)) goto l__06FB;
	}
l__06EA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x3210) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x320E) = emu_dx;
l__06FB:
	emu_incw(&emu_si);
l__06FC:
	emu_cmpw(&emu_si, 0x20);
	if ((int16)emu_si >= (int16)0x20) goto l__0704;
	goto l__0635;
l__0704:
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3210);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x320E);
	goto l__070D;
l__070D:
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
 * Decompiled function f__06F7_0713_0011_15A5()
 *
 * @name f__06F7_0713_0011_15A5
 * @implements 06F7:0713:0011:15A5 ()
 * @implements 06F7:0724:0005:84EE
 * @implements 06F7:0729:0002:2597
 *
 * Called From: 06F7:06BE:0066:DC6B
 */
void f__06F7_0713_0011_15A5()
{
l__0713:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0724); f__06F7_0A6C_0016_FA05();
l__0724:
	emu_addw(&emu_sp, 0x6);
	goto l__0729;
l__0729:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_072B_0018_F05F()
 *
 * @name f__06F7_072B_0018_F05F
 * @implements 06F7:072B:0018:F05F ()
 * @implements 06F7:0743:000A:CA6A
 * @implements 06F7:074D:000A:5E83
 * @implements 06F7:0752:0005:1C2C
 * @implements 06F7:0754:0003:1DB8
 * @implements 06F7:0757:0006:16E4
 * @implements 06F7:075D:000C:C42B
 * @implements 06F7:0769:0008:8987
 * @implements 06F7:076F:0002:B0BA
 * @implements 06F7:0771:0006:16E4
 * @implements 06F7:0777:003A:CADB
 * @implements 06F7:07B1:0009:52A9
 * @implements 06F7:07B4:0006:16E4
 * @implements 06F7:07BA:001E:E1E4
 * @implements 06F7:07D8:002A:42DA
 * @implements 06F7:0802:0036:B153
 * @implements 06F7:0833:0005:517D
 * @implements 06F7:0838:0007:6C78
 * @implements 06F7:083F:0018:1886
 * @implements 06F7:084D:000A:9737
 * @implements 06F7:0857:0024:722A
 * @implements 06F7:0880:002E:5B22
 * @implements 06F7:08AE:0009:8640
 * @implements 06F7:08B7:0006:F7CE
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_072B_0018_F05F()
{
l__072B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x0743); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0743:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x074D); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1BC4_0013_1AB3();
l__074D:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0757;
l__0752:
	emu_xorw(&emu_ax, emu_ax);
l__0754:
	goto l__08B7;
l__0757:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x075D); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__075D:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xD);
	if (emu_ax == 0xD) goto l__076F;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0769); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__0769:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xC);
	if (emu_ax != 0xC) goto l__0771;
l__076F:
	goto l__0752;
l__0771:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0777); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__0777:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xA);
	if (emu_ax != 0xA) goto l__07B4;
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
	emu_push(emu_cs); emu_push(0x07B1); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0000_0011_95D0();
l__07B1:
	emu_addw(&emu_sp, 0x6);
l__07B4:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x07BA); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__07BA:
	emu_pop(&emu_cx);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, emu_bx, 0x3A52);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x329E);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0xFFFF) goto l__07D8;
	goto l__0752;
l__07D8:
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_di = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39F2);
	emu_subw(&emu_ax, 0x10);
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax >= emu_di) goto l__0802;
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x39F2));
	if (emu_di > emu_get_memory16(emu_ds, 0x00, 0x39F2)) goto l__0802;
	goto l__0752;
l__0802:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
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
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_di);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) <= emu_di) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), emu_di);
		if (emu_get_memory16(emu_es, emu_bx, 0xA) >= emu_di) goto l__083F;
	}
l__0833:
	emu_push(emu_cs); emu_push(0x0838); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
l__0838:
	emu_andw(&emu_ax, 0x1);
	emu_di = emu_ax;
	goto l__084D;
l__083F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_di, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_cmpw(&emu_di, 0x4);
	if (emu_di < 0x4) {
		emu_addw(&emu_di, 0x2);
	}
l__084D:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0857); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0AFA_0011_D5DB();
l__0857:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_andw(&emu_ax, 0x1FF);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39F4));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x39F4)) goto l__0880;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_si);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x087B); emu_cs = 0x34CD; emu_ip = 0x0093; emu_last_cs = 0x06F7; emu_last_ip = 0x0876; emu_last_length = 0x0024; emu_last_crc = 0x722A; emu_call();
	/* Unresolved jump */ emu_ip = 0x087B; emu_last_cs = 0x06F7; emu_last_ip = 0x087B; emu_last_length = 0x0024; emu_last_crc = 0x722A; emu_call();
l__0880:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_andw(&emu_ax, 0x7F);
	emu_dx = emu_si;
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
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x08AE); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0000_0011_95D0();
l__08AE:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__0754;
l__08B7:
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
 * Decompiled function f__06F7_08BD_0016_9292()
 *
 * @name f__06F7_08BD_0016_9292
 * @implements 06F7:08BD:0016:9292 ()
 * @implements 06F7:08D3:0008:4F72
 * @implements 06F7:08DB:0002:2597
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_08BD_0016_9292()
{
l__08BD:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x08D3); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
l__08D3:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__08DB;
l__08DB:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_08DD_0013_C78B()
 *
 * @name f__06F7_08DD_0013_C78B
 * @implements 06F7:08DD:0013:C78B ()
 * @implements 06F7:08F0:0008:9754
 * @implements 06F7:08F8:0013:E47B
 * @implements 06F7:090B:0006:B1FB
 * @implements 06F7:090C:0005:D5FA
 * @implements 06F7:0911:0002:2597
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_08DD_0013_C78B()
{
l__08DD:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x08F0); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__08F0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08F8); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1BC4_0013_1AB3();
l__08F8:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__090C;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x66E0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x66E2);
	emu_push(0x090B);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A61200: f__22A6_1200_007B_0356(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x06F7; emu_last_ip = 0x0906; emu_last_length = 0x0013; emu_last_crc = 0xE47B;
			emu_call();
			return;
	}
l__090B:
	emu_pop(&emu_cx);
l__090C:
	emu_ax = 0x1;
	goto l__0911;
l__0911:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0913_0013_C78B()
 *
 * @name f__06F7_0913_0013_C78B
 * @implements 06F7:0913:0013:C78B ()
 * @implements 06F7:0926:002C:6E65
 * @implements 06F7:0952:0008:7759
 * @implements 06F7:095A:0006:8C70
 * @implements 06F7:095E:0002:C2BA
 * @implements 06F7:0960:0005:A97A
 * @implements 06F7:0965:0002:2597
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0913_0013_C78B()
{
l__0913:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x0926); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0926:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_andw(&emu_ax, 0x1FF);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39F4));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x39F4)) goto l__0960;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x0952); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0952:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x095A); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_14CA_0013_F579();
l__095A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
l__095E:
	goto l__0965;
l__0960:
	emu_ax = 0x1;
	goto l__095E;
l__0965:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0967_0014_1157()
 *
 * @name f__06F7_0967_0014_1157
 * @implements 06F7:0967:0014:1157 ()
 * @implements 06F7:097B:000A:7A65
 * @implements 06F7:0985:0026:4BF5
 * @implements 06F7:09AB:000F:C67F
 * @implements 06F7:09BA:0013:714D
 * @implements 06F7:09CD:0018:609B
 * @implements 06F7:09D0:0015:D89F
 * @implements 06F7:09E5:000C:1EBD
 * @implements 06F7:09EC:0005:D5FA
 * @implements 06F7:09F1:0003:2E57
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0967_0014_1157()
{
l__0967:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x097B); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__097B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0985); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__0985:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__09EC;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x09AB); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
l__09AB:
	emu_andw(&emu_ax, 0x1);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x09BA); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__09BA:
	emu_pop(&emu_cx);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A4C), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x3A4C) == 0x0) goto l__09CD;
	emu_xorw(&emu_ax, emu_ax);
	goto l__09D0;
l__09CD:
	emu_ax = 0x2;
l__09D0:
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_cl = 0x4;
	emu_shlw(&emu_dx, emu_cl);
	emu_ax = 0x33C8;
	emu_addw(&emu_dx, 0x100);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x09E5); emu_cs = 0x151A; f__151A_000E_0013_5840();
l__09E5:
	emu_addw(&emu_sp, 0xE);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
	}
l__09EC:
	emu_ax = 0x1;
	goto l__09F1;
l__09F1:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0A27_001D_1D75()
 *
 * @name f__06F7_0A27_001D_1D75
 * @implements 06F7:0A27:001D:1D75 ()
 * @implements 06F7:0A44:0012:8814
 * @implements 06F7:0A56:0004:DE52
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0A27_001D_1D75()
{
l__0A27:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_si = emu_di;
	emu_testw(&emu_di, 0x800);
	if ((emu_di & 0x800) == 0) { /* Unresolved jump */ emu_ip = 0x0A3B; emu_last_cs = 0x06F7; emu_last_ip = 0x0A35; emu_last_length = 0x001D; emu_last_crc = 0x1D75; emu_call(); return; }
	emu_orw(&emu_si, 0xF000);
	emu_push(emu_si);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A44); emu_cs = 0x0F3F; emu_Tile_GetXY();
l__0A44:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x10), emu_ax);
	emu_adcw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_dx);
	emu_ax = 0x1;
	goto l__0A56;
l__0A56:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0A6C_0016_FA05()
 *
 * @name f__06F7_0A6C_0016_FA05
 * @implements 06F7:0A6C:0016:FA05 ()
 * @implements 06F7:0A82:0025:93F6
 * @implements 06F7:0AA7:0016:284C
 * @implements 06F7:0ABD:0004:893F
 *
 * Called From: 06F7:05E9:0020:AD79
 * Called From: 06F7:06BE:0013:D2D5
 * Called From: 06F7:0721:0011:15A5
 */
void f__06F7_0A6C_0016_FA05()
{
l__0A6C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x0A82); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0A82:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x7F);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AA7); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_04D9_0011_E9EF();
l__0AA7:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0xE) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0xC) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0ABD;
l__0ABD:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0AC1_001F_55CB()
 *
 * @name f__06F7_0AC1_001F_55CB
 * @implements 06F7:0AC1:001F:55CB ()
 * @implements 06F7:0AE0:0002:2597
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0AC1_001F_55CB()
{
l__0AC1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_adcw(&emu_ax, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	emu_ax = 0x1;
	goto l__0AE0;
l__0AE0:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0AE2_0010_0B2F()
 *
 * @name f__06F7_0AE2_0010_0B2F
 * @implements 06F7:0AE2:0010:0B2F ()
 * @implements 06F7:0AF2:001F:99B5
 * @implements 06F7:0B11:0003:2E57
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0AE2_0010_0B2F()
{
l__0AE2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_push(emu_si);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AF2); emu_cs = 0x2537; f__2537_000C_001C_86CB();
l__0AF2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, emu_si);
	emu_adcw(&emu_ax, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	emu_ax = 0x1;
	goto l__0B11;
l__0B11:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0B14_0024_BD9C()
 *
 * @name f__06F7_0B14_0024_BD9C
 * @implements 06F7:0B14:0024:BD9C ()
 * @implements 06F7:0B38:0008:4F72
 * @implements 06F7:0B40:0002:2597
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0B14_0024_BD9C()
{
l__0B14:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x8) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B38); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_04D9_0011_E9EF();
l__0B38:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__0B40;
l__0B40:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0B42_0024_BD9D()
 *
 * @name f__06F7_0B42_0024_BD9D
 * @implements 06F7:0B42:0024:BD9D ()
 * @implements 06F7:0B66:0008:4F72
 * @implements 06F7:0B6E:0002:2597
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0B42_0024_BD9D()
{
l__0B42:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x8) = 0x1;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B66); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_04D9_0011_E9EF();
l__0B66:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__0B6E;
l__0B6E:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
