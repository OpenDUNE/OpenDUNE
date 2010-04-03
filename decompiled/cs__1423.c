/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_Unit_LaunchHouseMissle()
 *
 * @name emu_Unit_LaunchHouseMissle
 * @implements 1423:07C5:0016:E9C2 ()
 * @implements 1423:07DB:0006:4B57
 * @implements 1423:07E1:0019:7CE8
 * @implements 1423:07FA:0014:FCE3
 * @implements 1423:080E:0018:6AF2
 * @implements 1423:0826:0012:8E51
 * @implements 1423:0828:0010:2E5D
 * @implements 1423:0838:000B:F71A
 * @implements 1423:0843:000B:696A
 * @implements 1423:084E:002A:46B7
 * @implements 1423:0878:0012:A717
 * @implements 1423:088A:001B:E7BA
 * @implements 1423:08A5:0022:9024
 * @implements 1423:08A6:0021:D032
 * @implements 1423:08C7:0006:EFCE
 * @implements 1423:08C8:0005:8BCF
 *
 * Called From: 0AEC:037E:0014:9BC6
 * Called From: 1391:01DF:0008:8787
 * Called From: 1423:0623:0008:2094
 */
void emu_Unit_LaunchHouseMissle()
{
l__07C5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38FA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x38FC));
	if (emu_ax != 0) goto l__07DB;
	goto l__08C8;
l__07DB:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x07E1); emu_cs = 0x0F3F; emu_Tile_Unpack();
l__07E1:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x07FA); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
l__07FA:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x080E); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__080E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0826;
	emu_ax = 0x1;
	goto l__0828;
l__0826:
	emu_xorw(&emu_ax, emu_ax);
l__0828:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38FC));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_push(emu_cs); emu_push(0x0838); emu_cs = 0x0FE4; emu_Unit_Free();
l__0838:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xFFFE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0843); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
l__0843:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x084E); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__084E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x1F4;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0878); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__0878:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x20));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1E));
	emu_push(emu_cs); emu_push(0x088A); emu_cs = 0x1A34; emu_Unit_CreateBullet();
l__088A:
	emu_addw(&emu_sp, 0xC);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x38FA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__08A6;
	emu_ax = 0x27;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08A5); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
l__08A5:
	emu_pop(&emu_cx);
l__08A6:
	emu_get_memory16(emu_ds, 0x00, 0x38FE) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38FC) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x38FA) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) goto l__08C8;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08C7); emu_cs = 0x34E9; overlay(0x34E9, 0); f__B4E9_0050_003F_292A();
l__08C7:
	emu_pop(&emu_cx);
l__08C8:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1423_08CD_0012_0004()
 *
 * @name f__1423_08CD_0012_0004
 * @implements 1423:08CD:0012:0004 ()
 * @implements 1423:08DF:0008:EB39
 * @implements 1423:08E7:004C:E110
 * @implements 1423:090D:0026:628E
 * @implements 1423:0933:002A:E8FA
 * @implements 1423:095D:001C:4305
 * @implements 1423:0979:0008:229F
 * @implements 1423:0981:000F:177E
 * @implements 1423:0990:0031:1AE7
 * @implements 1423:0997:002A:3456
 * @implements 1423:09C1:0008:22A9
 * @implements 1423:09C9:001C:D7D2
 * @implements 1423:09E5:0016:B67B
 * @implements 1423:09EF:000C:0A4C
 * @implements 1423:09FB:000A:00B4
 * @implements 1423:0A05:000F:1810
 * @implements 1423:0A14:0008:E2B5
 * @implements 1423:0A1C:0013:FF6C
 * @implements 1423:0A2F:002B:16F9
 * @implements 1423:0A51:0009:1BAF
 * @implements 1423:0A5A:0015:B691
 * @implements 1423:0A6F:000F:5EC0
 * @implements 1423:0A7B:0003:DD18
 * @implements 1423:0A7E:000E:A895
 * @implements 1423:0A8C:0020:4946
 * @implements 1423:0A99:0013:1BCD
 * @implements 1423:0AAC:0004:CD05
 * @implements 1423:0AB0:001A:235A
 * @implements 1423:0ACA:002C:6E18
 * @implements 1423:0AF6:0009:AAB4
 * @implements 1423:0AFF:0014:A87B
 * @implements 1423:0B16:0006:3EF3
 * @implements 1423:0B1C:0003:C21A
 * @implements 1423:0B1F:0011:A442
 * @implements 1423:0B30:0019:3478
 * @implements 1423:0B31:0018:B454
 * @implements 1423:0B3B:000E:3343
 * @implements 1423:0B49:0029:9196
 * @implements 1423:0B61:0011:CB22
 * @implements 1423:0B72:001F:C162
 * @implements 1423:0B91:002C:DD32
 * @implements 1423:0B94:0029:549A
 * @implements 1423:0BB3:000A:6782
 * @implements 1423:0BBD:000F:EB03
 * @implements 1423:0BC7:0005:8BCF
 *
 * Called From: 1A34:2A33:0036:7718
 * Called From: B4B5:05CF:001F:CB42
 * Called From: B4CD:027A:000F:00DA
 * Called From: B4CD:027A:0030:FE42
 * Called From: B4CD:1310:0008:0671
 * Called From: B4CD:1479:0008:0671
 */
void f__1423_08CD_0012_0004()
{
l__08CD:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__08DF;
	goto l__0BC7;
l__08DF:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x08E7); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__08E7:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp,  0xA);
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0xA), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp,  0xA) == 0x1) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x19) {
			emu_orw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x8);
		}
	}
l__090D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_testw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_ax & emu_get_memory16(emu_ss, emu_bp, -0xA)) == 0) goto l__0933;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x8) == 0) goto l__0933;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0xA);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
	goto l__0BC7;
l__0933:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x8000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x8000) != 0) goto l__095D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x19) goto l__095D;
	goto l__0BC7;
l__095D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_testw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((emu_ax & emu_get_memory16(emu_ss, emu_bp, -0xA)) != 0) goto l__0997;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0979); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__0979:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0981); emu_House_AreAllied();
l__0981:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0990;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0xC));
	goto l__0997;
l__0990:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_incw(&emu_get_memory16(emu_es, emu_bx, 0xA));
l__0997:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) goto l__09EF;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x09C1); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__09C1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x09C9); emu_House_AreAllied();
l__09C9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__09EF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09E5); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__09E5:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
l__09EF:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__09FB;
	goto l__0B61;
l__09FB:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) != 0x0) goto l__0A05;
	goto l__0B61;
l__0A05:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0A14); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__0A14:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0A1C); emu_House_AreAllied();
l__0A1C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0A2F;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x19) goto l__0A2F;
	goto l__0B61;
l__0A2F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x19) goto l__0A7E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x26), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x26) != 0x0) goto l__0A7B;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3E52), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x3E52) == 0x0) {
		emu_get_memory16(emu_ds, 0x00, 0x3E52) = 0x1;
	}
l__0A51:
	emu_ax = 0x25;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A5A); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
l__0A5A:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B6) != 0x0) { /* Unresolved jump */ emu_ip = 0x0A71; emu_last_cs = 0x1423; emu_last_ip = 0x0A60; emu_last_length = 0x0015; emu_last_crc = 0xB691; emu_call(); return; }
	emu_ax = 0x69;
	emu_push(emu_ax);
	emu_ax = 0x1C;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A6F); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
l__0A6F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_get_memory16(emu_es, emu_bx, 0x26) = 0x8;
l__0A7B:
	goto l__0B61;
l__0A7E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x24), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x24) == 0x0) goto l__0A8C;
	goto l__0B3B;
l__0A8C:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3E52), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x3E52) == 0x0) {
		emu_get_memory16(emu_ds, 0x00, 0x3E52) = 0x1;
	}
l__0A99:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__0AB0;
	emu_ax = 0xC;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AAC); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
l__0AAC:
	emu_pop(&emu_cx);
	goto l__0B31;
l__0AB0:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B0), 0x3);
	if (emu_get_memory16(emu_ds, 0x00, 0x38B0) >= 0x3) goto l__0B1F;
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0ACA); emu_cs = 0x1082; emu_Structure_FindFirst();
l__0ACA:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0B13; emu_last_cs = 0x1423; emu_last_ip = 0x0AD9; emu_last_length = 0x002C; emu_last_crc = 0x6E18; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0AF6); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
l__0AF6:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AFF); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17DC_0019_CB46();
l__0AFF:
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_incw(&emu_si);
	emu_andw(&emu_si, 0x7);
	emu_ax = emu_si;
	emu_shrw(&emu_ax, 0x1);
	emu_si = emu_ax;
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x2);
	goto l__0B16;
l__0B16:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B1C); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
l__0B1C:
	emu_pop(&emu_cx);
	goto l__0B31;
l__0B1F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_addw(&emu_ax, 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B30); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
l__0B30:
	emu_pop(&emu_cx);
l__0B31:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	emu_get_memory16(emu_es, emu_bx, 0x24) = 0x8;
l__0B3B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6F);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B49); emu_cs = 0x104B; emu_Team_Get_ByIndex();
l__0B49:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_get_memory16(emu_es, emu_bx, 0x32) = 0x1;
	}
l__0B61:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0B72); emu_House_AreAllied();
l__0B72:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0B94;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x8) goto l__0B94;
	emu_ax = 0xB;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0B91); emu_cs = 0x176C; emu_Unit_SetAction();
l__0B91:
	emu_addw(&emu_sp, 0x6);
l__0B94:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x8), 0x3);
		if (emu_get_memory8(emu_es, emu_bx, 0x8) != 0x3) goto l__0BBD;
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0x1);
		if (emu_get_memory16(emu_ds, 0x00, 0x3A38) != 0x1) goto l__0BBD;
	}
l__0BB3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x9) = 0xFF;
	goto l__0BC7;
l__0BBD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0xA);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
l__0BC7:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1423_0BCC_0012_111A()
 *
 * @name f__1423_0BCC_0012_111A
 * @implements 1423:0BCC:0012:111A ()
 * @implements 1423:0BDE:000D:BD9D
 * @implements 1423:0BEB:000B:E66F
 * @implements 1423:0BF6:0002:F3BA
 * @implements 1423:0BF8:0029:9DEB
 * @implements 1423:0C21:0008:21B1
 * @implements 1423:0C29:000F:B7B6
 * @implements 1423:0C38:0027:642F
 * @implements 1423:0C3F:0020:A3B7
 * @implements 1423:0C54:000B:3601
 * @implements 1423:0C5F:0015:7C3E
 * @implements 1423:0C6F:0005:8BCF
 *
 * Called From: 176C:1349:0019:5069
 * Called From: 176C:1349:0011:9DAE
 * Called From: 176C:172E:0011:EC1A
 * Called From: 1A34:1150:0012:391F
 * Called From: 1A34:2B0E:0019:3A5B
 * Called From: B4CD:028B:000F:10BA
 */
void f__1423_0BCC_0012_111A()
{
l__0BCC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0BDE;
	goto l__0C6F;
l__0BDE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x9), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x9) != 0x0) goto l__0BEB;
	goto l__0C6F;
l__0BEB:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0BF6); emu_cs = 0x10BE; emu_House_FindFirst();
l__0BF6:
	goto l__0C5F;
l__0BF8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_dx = 0x1;
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) == 0) goto l__0C54;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0C21); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__0C21:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0C29); emu_House_AreAllied();
l__0C29:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0C38;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0xA));
	goto l__0C3F;
l__0C38:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0xC));
l__0C3F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cl = emu_get_memory8(emu_es, emu_si, 0x0);
	emu_al = 0x1;
	emu_shlb(&emu_al, emu_cl);
	emu_notb(&emu_al, emu_al);
	emu_pop(&emu_es);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
l__0C54:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0C5F); emu_cs = 0x10BE; emu_House_FindNext();
l__0C5F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0BF8;
l__0C6F:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Structure_AI_PickNextToBuild()
 *
 * @name emu_Structure_AI_PickNextToBuild
 * @implements 1423:0C74:0015:3419 ()
 * @implements 1423:0C89:000E:E431
 * @implements 1423:0C97:0012:C249
 * @implements 1423:0CA9:0029:7965
 * @implements 1423:0CD2:0032:9201
 * @implements 1423:0CE1:0023:6CB4
 * @implements 1423:0CF3:0011:24ED
 * @implements 1423:0D04:0026:095B
 * @implements 1423:0D2A:0014:010D
 * @implements 1423:0D3B:0003:1D00
 * @implements 1423:0D3E:000E:EFDC
 * @implements 1423:0D41:000B:D382
 * @implements 1423:0D4C:0007:EE65
 * @implements 1423:0D53:000D:D32C
 * @implements 1423:0D60:0013:2198
 * @implements 1423:0D73:000A:1B8E
 * @implements 1423:0D7D:0041:028B
 * @implements 1423:0DAD:0011:FC55
 * @implements 1423:0DB0:000E:4DA2
 * @implements 1423:0DB3:000B:71FC
 * @implements 1423:0DB9:0005:46EB
 * @implements 1423:0DBE:0005:8BCF
 *
 * Called From: 0972:0919:002F:F6E4
 */
void emu_Structure_AI_PickNextToBuild()
{
l__0C74:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_si = 0xFFFF;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__0C89;
	goto l__0DB9;
l__0C89:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C97); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__0C97:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0CA9); emu_cs = 0x0C3A; f__0C3A_1B79_0021_8C40();
l__0CA9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x5);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x5) goto l__0CE1;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0CD2); emu_cs = 0x0FE4; emu_Unit_FindFirst();
l__0CD2:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) {
		emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFFFE);
		emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFF);
	}
l__0CE1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x4);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x4) {
		emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0xFFFF);
		emu_andw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0xFFFC);
	}
l__0CF3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x8) goto l__0D4C;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	goto l__0D41;
l__0D04:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2E);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xC) == 0x0) goto l__0D3E;
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0xC);
	emu_push(emu_cs); emu_push(0x0D2A); emu_cs = 0x01F7; emu_Tools_Shld();
l__0D2A:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_andw(&emu_cx, emu_ax);
	emu_andw(&emu_bx, emu_dx);
	emu_orw(&emu_cx, emu_bx);
	if (emu_cx == 0) goto l__0D3E;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
l__0D3B:
	goto l__0DBE;
l__0D3E:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
l__0D41:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x5);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) < (int16)0x5) goto l__0D04;
	emu_ax = 0xFFFF;
	goto l__0D3B;
l__0D4C:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	goto l__0DB3;
l__0D53:
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x6);
	emu_push(emu_cs); emu_push(0x0D60); emu_cs = 0x01F7; emu_Tools_Shld();
l__0D60:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_andw(&emu_cx, emu_ax);
	emu_andw(&emu_bx, emu_dx);
	emu_orw(&emu_cx, emu_bx);
	if (emu_cx == 0) goto l__0DB0;
	emu_push(emu_cs); emu_push(0x0D73); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__0D73:
	emu_testw(&emu_ax, 0x3);
	if ((emu_ax & 0x3) != 0) goto l__0D7D;
	emu_si = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__0DB9;
l__0D7D:
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si != 0xFFFF) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
		emu_dx = 0x5A;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2D07;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2D);
		emu_push(emu_ax);
		emu_ax = emu_si;
		emu_dx = 0x5A;
		emu_imuluw(&emu_ax, emu_dx);
		emu_dx = 0x2D07;
		emu_bx = emu_ax;
		emu_es = emu_dx;
		emu_pop(&emu_ax);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2D));
		if ((int16)emu_ax <= (int16)emu_get_memory16(emu_es, emu_bx, 0x2D)) goto l__0DB0;
	}
l__0DAD:
	emu_si = emu_get_memory16(emu_ss, emu_bp, -0x6);
l__0DB0:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
l__0DB3:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x20);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) < (int16)0x20) goto l__0D53;
l__0DB9:
	emu_ax = emu_si;
	goto l__0D3B;
l__0DBE:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__1423_0DC3_0029_D1E2()
 *
 * @name f__1423_0DC3_0029_D1E2
 * @implements 1423:0DC3:0029:D1E2 ()
 * @implements 1423:0DEC:0005:962E
 * @implements 1423:0DF1:0024:7F0A
 * @implements 1423:0E15:001A:9A11
 * @implements 1423:0E17:0018:0C7D
 * @implements 1423:0E32:0008:EA34
 * @implements 1423:0E3A:0015:C6CF
 *
 * Called From: 0C3A:11CC:001D:6961
 * Called From: B511:032E:0017:D892
 */
void f__1423_0DC3_0029_D1E2()
{
l__0DC3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38BC);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x38BC) = 0x0;
	emu_xorw(&emu_si, emu_si);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0DEC); emu_cs = 0x1082; emu_Structure_FindFirst();
l__0DEC:
	emu_addw(&emu_sp, 0x8);
	goto l__0E17;
l__0DF1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_addw(&emu_si, emu_get_memory16(emu_es, emu_bx, 0x40));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0E15); emu_cs = 0x1082; emu_Structure_FindNext();
l__0E15:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0E17:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0DF1;
	emu_cmpw(&emu_si, 0x7D00);
	if (emu_si >= 0x7D00) { /* Unresolved jump */ emu_ip = 0x0E2F; emu_last_cs = 0x1423; emu_last_ip = 0x0E29; emu_last_length = 0x0018; emu_last_crc = 0x0C7D; emu_call(); return; }
	emu_ax = emu_si;
	goto l__0E32;
l__0E32:
	emu_si = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x0E3A); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__0E3A:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x14) = emu_si;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_get_memory16(emu_ds, 0x00, 0x38BC) = emu_ax;
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
 * Decompiled function f__1423_0E4F_0010_843C()
 *
 * @name f__1423_0E4F_0010_843C
 * @implements 1423:0E4F:0010:843C ()
 * @implements 1423:0E5F:001D:3375
 * @implements 1423:0E79:0003:DD0C
 * @implements 1423:0E7C:0026:4424
 * @implements 1423:0EA2:000C:D503
 * @implements 1423:0EAC:0002:FDBA
 * @implements 1423:0EAE:000F:99F1
 * @implements 1423:0EBD:0005:A9AE
 * @implements 1423:0EC2:0049:D9AB
 * @implements 1423:0F0E:000B:799F
 * @implements 1423:0F19:0016:F220
 * @implements 1423:0F1B:0014:94E9
 * @implements 1423:0F29:0006:02B8
 * @implements 1423:0F2F:0005:8BCF
 *
 * Called From: 06F7:0362:000E:E9D8
 * Called From: 06F7:0362:0049:CA1D
 */
void f__1423_0E4F_0010_843C()
{
l__0E4F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0E5F); emu_cs = 0x10BE; emu_House_Get_ByIndex();
l__0E5F:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_si == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0E7C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x4) == 0) goto l__0E7C;
	emu_xorw(&emu_ax, emu_ax);
l__0E79:
	goto l__0F2F;
l__0E7C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) == 0) goto l__0EAE;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x28), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x28) != 0x0) goto l__0EAC;
	emu_ax = 0x30;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EA2); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
l__0EA2:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x28) = 0x8;
l__0EAC:
	goto l__0F29;
l__0EAE:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0EBD); emu_cs = 0x0FE4; emu_Unit_FindFirst();
l__0EBD:
	emu_addw(&emu_sp, 0x8);
	goto l__0F1B;
l__0EC2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x56) == 0xFFFF) goto l__0F0E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x3);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x3) { /* Unresolved jump */ emu_ip = 0x0EF2; emu_last_cs = 0x1423; emu_last_ip = 0x0EE6; emu_last_length = 0x0049; emu_last_crc = 0xD9AB; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) == 0x8) { /* Unresolved jump */ emu_ip = 0x0EFC; emu_last_cs = 0x1423; emu_last_ip = 0x0EF0; emu_last_length = 0x0049; emu_last_crc = 0xD9AB; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x4);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x4) goto l__0F0E;
	emu_ax = 0xB;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F0B); emu_cs = 0x176C; emu_Unit_SetAction();
	/* Unresolved jump */ emu_ip = 0x0F0B; emu_last_cs = 0x1423; emu_last_ip = 0x0F0B; emu_last_length = 0x0049; emu_last_crc = 0xD9AB; emu_call();
l__0F0E:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0F19); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__0F19:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0F1B:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) goto l__0EC2;
l__0F29:
	emu_ax = 0x1;
	goto l__0E79;
l__0F2F:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
