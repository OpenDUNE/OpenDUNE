/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0F3F_0125_000D_4868()
 *
 * @name f__0F3F_0125_000D_4868
 * @implements 0F3F:0125:000D:4868 ()
 * @implements 0F3F:0132:000D:6541
 * @implements 0F3F:013F:000D:2120
 * @implements 0F3F:014C:000D:E12B
 * @implements 0F3F:0159:0008:1751
 * @implements 0F3F:0161:0005:852E
 * @implements 0F3F:0166:0002:2597
 *
 * Called From: 0972:0DBD:003A:00C4
 * Called From: 0972:10C4:0008:8AD8
 * Called From: 0972:1192:001D:31F3
 * Called From: 1423:0AF1:002C:6E18
 * Called From: 167E:0387:0038:56F3
 * Called From: 16C5:08F0:0019:EFED
 * Called From: 16C5:08F0:0016:ABA0
 * Called From: 176C:0340:0014:B1B8
 * Called From: 176C:040E:0023:D191
 * Called From: 176C:040E:0011:2BE9
 * Called From: 176C:11DD:0011:5E38
 * Called From: 176C:15DC:0017:0BB3
 * Called From: 176C:1A0E:0014:B1B8
 * Called From: 176C:1A84:001E:596A
 * Called From: 176C:1B90:0014:B1B8
 * Called From: 176C:1CDC:0030:808F
 * Called From: 1A34:2370:001A:C4B6
 * Called From: 1A34:2564:0011:ABE2
 * Called From: 1A34:26B8:0011:ABE2
 */
void f__0F3F_0125_000D_4868()
{
l__0125:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0132); emu_Tile_GetY();
l__0132:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x013F); emu_Tile_GetX();
l__013F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x014C); emu_Tile_GetY();
l__014C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0159); emu_Tile_GetX();
l__0159:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0161); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0000_0022_1807();
l__0161:
	emu_addw(&emu_sp, 0x8);
	goto l__0166;
l__0166:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_0168_0010_C9EF()
 *
 * @name f__0F3F_0168_0010_C9EF
 * @implements 0F3F:0168:0010:C9EF ()
 * @implements 0F3F:0178:0008:AFA3
 * @implements 0F3F:0180:0008:6FA8
 * @implements 0F3F:0188:0008:AFA7
 * @implements 0F3F:0190:0008:77D3
 * @implements 0F3F:0198:0005:852E
 * @implements 0F3F:019D:0004:DE52
 *
 * Called From: 1319:008F:0009:C4BD
 * Called From: 1319:00EB:0007:1BD6
 * Called From: 1319:01A0:0007:1BD6
 * Called From: B4CD:1C46:000E:D7F5
 */
void f__0F3F_0168_0010_C9EF()
{
l__0168:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0178); emu_Tile_GetPackY();
l__0178:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0180); emu_Tile_GetPackX();
l__0180:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0188); emu_Tile_GetPackY();
l__0188:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0190); emu_Tile_GetPackX();
l__0190:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0198); emu_cs = 0x07C4; emu_Unknown_07C4_001A();
l__0198:
	emu_addw(&emu_sp, 0x8);
	goto l__019D;
l__019D:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0F3F_01A1_0018_9631()
 *
 * @name f__0F3F_01A1_0018_9631
 * @implements 0F3F:01A1:0018:9631 ()
 * @implements 0F3F:01B0:0009:056A
 * @implements 0F3F:01B6:0003:9D0D
 * @implements 0F3F:01B9:000A:AC18
 * @implements 0F3F:01C3:000E:EDD6
 * @implements 0F3F:01D1:000A:B69E
 * @implements 0F3F:01DB:0008:9FC8
 * @implements 0F3F:01E3:0010:CF58
 * @implements 0F3F:01E6:000D:1051
 * @implements 0F3F:01F3:004A:55D2
 * @implements 0F3F:023A:0003:A2BC
 * @implements 0F3F:023D:0008:46EE
 * @implements 0F3F:0245:0018:281D
 * @implements 0F3F:025D:0012:D28A
 * @implements 0F3F:0266:0009:FB31
 * @implements 0F3F:026F:0006:F7CE
 *
 * Called From: 0972:16B8:001F:6F53
 * Called From: 1423:0693:0008:CAD0
 * Called From: 1423:07F5:0019:7CE8
 * Called From: 16C5:0661:0023:559B
 * Called From: 176C:1435:002A:1CFB
 * Called From: 176C:23FE:001A:7B69
 * Called From: 176C:28F5:001D:FB78
 * Called From: 1A34:261C:0014:85AF
 * Called From: 1A34:261C:0017:79E6
 * Called From: B4B8:0559:0008:CAD0
 * Called From: B4CD:16FC:0008:CAD0
 * Called From: B4CD:1737:0008:CAD0
 * Called From: B4CD:178D:0008:CAD0
 * Called From: B4CD:1A64:0029:FA07
 */
void f__0F3F_01A1_0018_9631()
{
l__01A1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__01B9;
l__01B0:
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
l__01B6:
	goto l__026F;
l__01B9:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x01C3); emu_Tile_GetX();
l__01C3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x01D1); emu_Tile_GetY();
l__01D1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_cs); emu_push(0x01DB); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__01DB:
	emu_andw(&emu_ax, 0xFF);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	goto l__01E6;
l__01E3:
	emu_shrw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x1);
l__01E6:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), emu_si);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) > emu_si) goto l__01E3;
	emu_si = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_push(emu_cs); emu_push(0x01F3); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__01F3:
	emu_andw(&emu_ax, 0xFF);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x3C4C);
	emu_ax = (int8)emu_al;
	emu_imuluw(&emu_ax, emu_si);
	emu_cl = 0x7;
	emu_sarw(&emu_ax, emu_cl);
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_dx = emu_di;
	emu_addw(&emu_dx, emu_ax);
	emu_di = emu_dx;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x3D4C);
	emu_ax = (int8)emu_al;
	emu_negw(&emu_ax, emu_ax);
	emu_imuluw(&emu_ax, emu_si);
	emu_cl = 0x7;
	emu_sarw(&emu_ax, emu_cl);
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_cmpw(&emu_di, 0x4000);
	if (emu_di <= 0x4000) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4000);
		if (emu_get_memory16(emu_ss, emu_bp, -0x2) <= 0x4000) goto l__023D;
	}
l__023A:
	goto l__01B0;
l__023D:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x0245); emu_Tile_GetXY();
l__0245:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0xC) == 0x0) goto l__0266;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs);
	emu_push(0x025D); emu_Tile_Center();
l__025D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
l__0266:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__01B6;
l__026F:
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
 * Decompiled function f__0F3F_028E_0015_1153()
 *
 * @name f__0F3F_028E_0015_1153
 * @implements 0F3F:028E:0015:1153 ()
 * @implements 0F3F:02A3:0011:3834
 * @implements 0F3F:02A6:000E:64CB
 * @implements 0F3F:02B2:0002:F43A
 * @implements 0F3F:02B4:000A:6D9A
 * @implements 0F3F:02BE:000F:1287
 * @implements 0F3F:02CD:004B:E1B3
 * @implements 0F3F:0318:0004:101F
 * @implements 0F3F:031C:0006:F7CE
 *
 * Called From: 16C5:0921:000F:9BA4
 * Called From: 16C5:0921:001E:7ACA
 * Called From: 1A34:0061:0035:A18F
 * Called From: 1A34:26D0:0018:5400
 * Called From: 1A34:26EB:001B:C457
 * Called From: B4CD:1CA2:0008:3AB2
 */
void f__0F3F_028E_0015_1153()
{
l__028E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_cmpw(&emu_si, 0xFF);
	if (emu_si >= 0xFF) goto l__02A3;
	emu_ax = emu_si;
	goto l__02A6;
l__02A3:
	emu_ax = 0xFF;
l__02A6:
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__02B4;
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
l__02B2:
	goto l__031C;
l__02B4:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x02BE); emu_Tile_GetX();
l__02BE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x02CD); emu_Tile_GetY();
l__02CD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_andw(&emu_bx, 0xFF);
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x3C4C);
	emu_ax = (int8)emu_al;
	emu_imuluw(&emu_ax, emu_si);
	emu_di = emu_ax;
	emu_addw(&emu_di, 0x40);
	emu_cl = 0x7;
	emu_sarw(&emu_di, emu_cl);
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_andw(&emu_bx, 0xFF);
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x3D4C);
	emu_ax = (int8)emu_al;
	emu_negw(&emu_ax, emu_ax);
	emu_imuluw(&emu_ax, emu_si);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x40);
	emu_cl = 0x7;
	emu_sarw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_cl);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_di);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs);
	emu_push(0x0318); emu_Tile_GetXY();
l__0318:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__02B2;
l__031C:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
