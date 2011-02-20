/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

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
	emu_push(emu_cs); emu_push(0x0A6F); emu_cs = 0x10E4; emu_GUI_DisplayHint();
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
	emu_push(emu_cs); emu_push(0x0AFF); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Sprites_B4CD_17DC();
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
