/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0972_0C5A_0015_E00A()
 *
 * @name f__0972_0C5A_0015_E00A
 * @implements 0972:0C5A:0015:E00A ()
 * @implements 0972:0C6F:000D:A320
 * @implements 0972:0C7C:0027:52E8
 * @implements 0972:0CA3:0017:4EFB
 * @implements 0972:0CBA:0039:4D11
 * @implements 0972:0CF3:0010:0DA8
 * @implements 0972:0CF6:000D:8532
 * @implements 0972:0D03:001D:22E2
 * @implements 0972:0D20:0007:3D0E
 * @implements 0972:0D21:0006:3DBC
 * @implements 0972:0D24:0003:DDB6
 * @implements 0972:0D27:000F:A4DF
 * @implements 0972:0D36:0010:1B5F
 * @implements 0972:0D38:000E:9B6D
 * @implements 0972:0D46:000C:CFFA
 * @implements 0972:0D52:0015:DD16
 * @implements 0972:0D67:0008:8ABD
 * @implements 0972:0D6F:000F:5891
 * @implements 0972:0D7E:000A:4602
 * @implements 0972:0D88:003A:00C4
 * @implements 0972:0DC2:0012:86B3
 * @implements 0972:0DD4:0020:86C2
 * @implements 0972:0DF4:001E:8A47
 * @implements 0972:0E12:001D:966A
 * @implements 0972:0E14:001B:5BF8
 * @implements 0972:0E2F:0010:0DA8
 * @implements 0972:0E32:000D:8532
 * @implements 0972:0E3F:002E:C784
 * @implements 0972:0E6D:000C:A466
 * @implements 0972:0E73:0006:3EF3
 * @implements 0972:0E79:0004:F20C
 * @implements 0972:0E7A:0003:6209
 * @implements 0972:0E7D:0005:E39C
 * @implements 0972:0E82:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_0C5A_0015_E00A()
{
l__0C5A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__0C6F;
	goto l__0E7D;
l__0C6F:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0C7C); emu_cs = 0x1A34; emu_Structure_GetLinkedUnit();
l__0C7C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) goto l__0CA3;
	goto l__0D27;
l__0CA3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0CBA); emu_cs = 0x1A34; f__1A34_2958_0013_3A47();
l__0CBA:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0D27;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__0CF6;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0CF3); emu_cs = 0x0C3A; emu_Structure_SetAnimation();
l__0CF3:
	emu_addw(&emu_sp, 0x6);
l__0CF6:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0D03); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
l__0D03:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0D21;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_addw(&emu_ax, 0x31);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D20); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
l__0D20:
	emu_pop(&emu_cx);
l__0D21:
	emu_ax = 0x1;
l__0D24:
	goto l__0E82;
l__0D27:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__0D36;
	emu_ax = 0x1;
	goto l__0D38;
l__0D36:
	emu_xorw(&emu_ax, emu_ax);
l__0D38:
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0D46); emu_cs = 0x0C3A; f__0C3A_247A_0015_EA04();
l__0D46:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0D52;
	goto l__0E7D;
l__0D52:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0D67); emu_cs = 0x0F3F; emu_Tile_Unpack();
l__0D67:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D6F); emu_cs = 0x0F3F; emu_Tile_Center();
l__0D6F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0D7E); emu_cs = 0x1A34; f__1A34_2958_0013_3A47();
l__0D7E:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0D88;
	goto l__0E7D;
l__0D88:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0DC2); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
l__0DC2:
	emu_addw(&emu_sp, 0x8);
	emu_andw(&emu_ax, 0xE0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0DD4); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
l__0DD4:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0DF4); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
l__0DF4:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0E14;
	emu_ax = 0x6A;
	emu_push(emu_ax);
	emu_ax = 0x1B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E12); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
l__0E12:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0E14:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__0E32;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0E2F); emu_cs = 0x0C3A; emu_Structure_SetAnimation();
l__0E2F:
	emu_addw(&emu_sp, 0x6);
l__0E32:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0E3F); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
l__0E3F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0E7A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xD);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0xD) goto l__0E7A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__0E6D;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_addw(&emu_ax, 0x44);
	goto l__0E73;
l__0E6D:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_addw(&emu_ax, 0x1E);
l__0E73:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E79); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
l__0E79:
	emu_pop(&emu_cx);
l__0E7A:
	goto l__0D21;
l__0E7D:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0D24;
l__0E82:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_0E87_0047_4065()
 *
 * @name f__0972_0E87_0047_4065
 * @implements 0972:0E87:0047:4065 ()
 * @implements 0972:0ECE:0006:973D
 * @implements 0972:0ED4:0015:753E
 * @implements 0972:0EE9:0008:9688
 * @implements 0972:0EF1:0009:B78B
 * @implements 0972:0EFA:0027:A697
 * @implements 0972:0F21:001C:C333
 * @implements 0972:0F3D:0036:4859
 * @implements 0972:0F59:001A:27B4
 * @implements 0972:0F73:0026:FDED
 * @implements 0972:0F97:0002:D53A
 * @implements 0972:0F99:0035:1D8A
 * @implements 0972:0FAB:0023:6A94
 * @implements 0972:0FC3:000B:799F
 * @implements 0972:0FCE:0013:DDDB
 * @implements 0972:0FD0:0011:96ED
 * @implements 0972:0FE1:0017:BA46
 * @implements 0972:0FF8:0004:591F
 * @implements 0972:0FFA:0002:C23A
 * @implements 0972:0FFC:0004:9539
 * @implements 0972:1000:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_0E87_0047_4065()
{
l__0E87:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x14);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x7D00;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_cwd();
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0ECE); emu_cs = 0x0FE4; emu_Unit_FindFirst();
l__0ECE:
	emu_addw(&emu_sp, 0x8);
	goto l__0FD0;
l__0ED4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0EE9); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__0EE9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EF1); emu_cs = 0x1423; emu_House_AreAllied();
l__0EF1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0EFA;
	goto l__0FC3;
l__0EFA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x1);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x1) goto l__0F21;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_dx = 0x1;
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) != 0) goto l__0F21;
	goto l__0FC3;
l__0F21:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0F3D); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__0F3D:
	emu_addw(&emu_sp, 0x8);
	emu_cwd();
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ss, emu_bp, -0xA)) goto l__0FC3;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp, -0xA)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
		if (emu_dx >= emu_get_memory16(emu_ss, emu_bp, -0xC)) goto l__0FC3;
	}
l__0F59:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x1);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x1) goto l__0F99;
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x3;
	emu_push(emu_cs); emu_push(0x0F73); emu_cs = 0x01F7; emu_Tools_MulCSIP_csip();
l__0F73:
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if ((int16)emu_dx >= (int16)emu_get_memory16(emu_ss, emu_bp, -0x6)) {
		if ((int16)emu_dx > (int16)emu_get_memory16(emu_ss, emu_bp, -0x6)) { /* Unresolved jump */ emu_ip = 0x0F7F; emu_last_cs = 0x0972; emu_last_ip = 0x0F78; emu_last_length = 0x0026; emu_last_crc = 0xFDED; emu_call(); return; }
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
		if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0x8)) {
			emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
			emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
			emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
			emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
			emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
			emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
			emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
			emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
		}
	}
l__0F97:
	goto l__0FC3;
l__0F99:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ss, emu_bp, -0xE)) goto l__0FC3;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp, -0xE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
		if (emu_dx >= emu_get_memory16(emu_ss, emu_bp, -0x10)) goto l__0FC3;
	}
l__0FAB:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
l__0FC3:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0FCE); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__0FCE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0FD0:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__0FE1;
	goto l__0ED4;
l__0FE1:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (emu_ax == 0) goto l__0FFC;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0FF8); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__0FF8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0FFA:
	goto l__1000;
l__0FFC:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0FFA;
l__1000:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_1004_0029_E69D()
 *
 * @name f__0972_1004_0029_E69D
 * @implements 0972:1004:0029:E69D ()
 * @implements 0972:1028:0005:1C33
 * @implements 0972:102A:0003:1DA7
 * @implements 0972:102D:0008:180B
 * @implements 0972:1035:0008:BAF2
 * @implements 0972:103D:0016:DE64
 * @implements 0972:1053:001A:D4A1
 * @implements 0972:106D:0041:C9BE
 * @implements 0972:1075:0039:A47C
 * @implements 0972:10AB:0003:9D04
 * @implements 0972:10AE:0008:04B9
 * @implements 0972:10B6:000B:281A
 * @implements 0972:10C1:0008:8AD8
 * @implements 0972:10C9:0012:27F9
 * @implements 0972:10DB:0012:DC63
 * @implements 0972:10ED:000A:7B2F
 * @implements 0972:10F0:0007:D398
 * @implements 0972:10F7:000F:6C8B
 * @implements 0972:10FA:000C:2996
 * @implements 0972:1106:0037:38DE
 * @implements 0972:1107:0036:3852
 * @implements 0972:113D:0009:C65E
 * @implements 0972:1140:0006:8213
 * @implements 0972:1146:0003:A217
 * @implements 0972:1149:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_1004_0029_E69D()
{
l__1004:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) != 0x0) goto l__102D;
l__1028:
	emu_xorw(&emu_ax, emu_ax);
l__102A:
	goto l__1149;
l__102D:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x1035); emu_cs = 0x167E; emu_Tools_Index_GetTile();
l__1035:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x103D); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__103D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1053); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__1053:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__106D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x30);
	goto l__1075;
l__106D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2E);
l__1075:
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_andw(&emu_ax, 0x1FF);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_si, 0x8);
		if ((int16)emu_si < (int16)0x8) goto l__10AE;
	}
l__10AB:
	goto l__1140;
l__10AE:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x10B6); emu_cs = 0x0F3F; emu_Tile_Unpack();
l__10B6:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x10C1); emu_cs = 0x0F3F; emu_Tile_Unpack();
l__10C1:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10C9); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
l__10C9:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_andw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10DB); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17DC_0019_CB46();
l__10DB:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_si);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == emu_si) goto l__1146;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_subw(&emu_ax, emu_si);
	emu_di = emu_ax;
	goto l__10F0;
l__10ED:
	emu_subw(&emu_di, 0x8);
l__10F0:
	emu_cmpw(&emu_di, 0x4);
	if ((int16)emu_di > (int16)0x4) goto l__10ED;
	goto l__10FA;
l__10F7:
	emu_addw(&emu_di, 0x8);
l__10FA:
	emu_cmpw(&emu_di, 0xFFFC);
	if ((int16)emu_di < (int16)0xFFFC) goto l__10F7;
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) goto l__1106;
	emu_decw(&emu_si);
	goto l__1107;
l__1106:
	emu_incw(&emu_si);
l__1107:
	emu_andw(&emu_si, 0x7);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, emu_si);
	emu_andw(&emu_ax, 0x1FF);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_get_memory16(emu_es, emu_bx, 0x49) = emu_si;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x113D); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0000_0011_95D0();
l__113D:
	emu_addw(&emu_sp, 0x6);
l__1140:
	emu_ax = 0x1;
	goto l__102A;
l__1146:
	goto l__1028;
l__1149:
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
 * Decompiled function f__0972_114F_0020_EA79()
 *
 * @name f__0972_114F_0020_EA79
 * @implements 0972:114F:0020:EA79 ()
 * @implements 0972:116F:000B:3510
 * @implements 0972:117A:001D:31F3
 * @implements 0972:1197:0009:AAB4
 * @implements 0972:11A0:0003:CF1A
 * @implements 0972:11AB:000A:3DF2
 * @implements 0972:11B5:0004:DE52
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_114F_0020_EA79()
{
l__114F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_di = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x116F); emu_cs = 0x167E; emu_Tools_Index_IsValid();
l__116F:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x11A3; emu_last_cs = 0x0972; emu_last_ip = 0x1172; emu_last_length = 0x000B; emu_last_crc = 0x3510; emu_call(); return; }
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x117A); emu_cs = 0x167E; emu_Tools_Index_GetTile();
l__117A:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_addw(&emu_dx, 0x80);
	emu_adcw(&emu_ax, 0x80);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x1197); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
l__1197:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x11A0); emu_cs = 0x34CD; emu_ip = 0x007F; emu_last_cs = 0x0972; emu_last_ip = 0x119B; emu_last_length = 0x0009; emu_last_crc = 0xAAB4; emu_call();
l__11A0:
	emu_pop(&emu_cx);
	goto l__11AB;
l__11AB:
	emu_cl = 0x5;
	emu_shlw(&emu_ax, emu_cl);
	emu_si = emu_ax;
	emu_ax = emu_si;
	goto l__11B5;
l__11B5:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_11B9_0020_8DC9()
 *
 * @name f__0972_11B9_0020_8DC9
 * @implements 0972:11B9:0020:8DC9 ()
 * @implements 0972:11D9:000B:0103
 * @implements 0972:11E4:000C:47C7
 * @implements 0972:11F0:0012:15D4
 * @implements 0972:1202:0017:9738
 * @implements 0972:1219:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_11B9_0020_8DC9()
{
l__11B9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x11D9); emu_cs = 0x167E; emu_Tools_Index_IsValid();
l__11D9:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x1215; emu_last_cs = 0x0972; emu_last_ip = 0x11DC; emu_last_length = 0x000B; emu_last_crc = 0x0103; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x11E4); emu_cs = 0x167E; emu_Tools_Index_GetType();
l__11E4:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) { /* Unresolved jump */ emu_ip = 0x1215; emu_last_cs = 0x0972; emu_last_ip = 0x11E8; emu_last_length = 0x000C; emu_last_crc = 0x47C7; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x11F0); emu_cs = 0x167E; emu_Tools_Index_GetUnit();
l__11F0:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1202); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
l__1202:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x1215; emu_last_cs = 0x0972; emu_last_ip = 0x120A; emu_last_length = 0x0017; emu_last_crc = 0x9738; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	goto l__1219;
l__1219:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_121E_0030_5DAA()
 *
 * @name f__0972_121E_0030_5DAA
 * @implements 0972:121E:0030:5DAA ()
 * @implements 0972:1249:0005:1C8E
 * @implements 0972:124B:0003:1D1A
 * @implements 0972:124E:0019:3598
 * @implements 0972:1267:000E:E53D
 * @implements 0972:1275:000D:A0B4
 * @implements 0972:1280:0002:C1BA
 * @implements 0972:1282:0022:DA59
 * @implements 0972:1285:001F:51F6
 * @implements 0972:12A4:001D:1E92
 * @implements 0972:12BC:0005:B762
 * @implements 0972:12C1:0008:163E
 * @implements 0972:12C9:001A:E9DB
 * @implements 0972:12E8:001F:F082
 * @implements 0972:1307:001D:FAC5
 * @implements 0972:1324:000F:3459
 * @implements 0972:1333:0003:A2A4
 * @implements 0972:1336:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_121E_0030_5DAA()
{
l__121E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x22);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) != 0x0) goto l__124E;
l__1249:
	emu_xorw(&emu_ax, emu_ax);
l__124B:
	goto l__1336;
l__124E:
	emu_si = 0xFFFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__1282;
	emu_si = 0x14;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1267); emu_cs = 0x167E; emu_Tools_Index_GetTile();
l__1267:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1275); emu_cs = 0x0F3F; emu_Tile_GetDistance();
l__1275:
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_ax, 0x300);
	if ((int16)emu_ax < (int16)0x300) {
		emu_si = 0x17;
	}
l__1280:
	goto l__1285;
l__1282:
	emu_si = 0x17;
l__1285:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x80);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x80);
	emu_xorw(&emu_di, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_ax = emu_si;
	emu_cmpw(&emu_ax, 0x14);
	if (emu_ax == 0x14) goto l__12A4;
	emu_cmpw(&emu_ax, 0x17);
	if (emu_ax == 0x17) goto l__12C9;
	/* Unresolved jump */ emu_ip = 0x12E3; emu_last_cs = 0x0972; emu_last_ip = 0x12A2; emu_last_length = 0x001F; emu_last_crc = 0x51F6; emu_call();
l__12A4:
	emu_di = 0x1E;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x2D07;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x2C4));
l__12BC:
	emu_push(emu_cs); emu_push(0x12C1); emu_cs = 0x07C9; emu_Tools_AdjustToGameSpeed();
l__12C1:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	goto l__12E8;
l__12C9:
	emu_di = 0x14;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x2D07;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x378));
	goto l__12BC;
l__12E8:
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__1333;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1307); emu_cs = 0x1A34; f__1A34_24FE_002F_672A();
l__1307:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__1333;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1324); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__1324:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_get_memory16(emu_es, emu_bx, 0x4D) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__124B;
l__1333:
	goto l__1249;
l__1336:
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
 * Decompiled function f__0972_133C_0036_0328()
 *
 * @name f__0972_133C_0036_0328
 * @implements 0972:133C:0036:0328 ()
 * @implements 0972:1375:0004:E839
 * @implements 0972:1379:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_133C_0036_0328()
{
l__133C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1375;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x1372); emu_cs = 0x3483; emu_ip = 0x0020; emu_last_cs = 0x0972; emu_last_ip = 0x136D; emu_last_length = 0x0036; emu_last_crc = 0x0328; emu_call();
	/* Unresolved jump */ emu_ip = 0x1372; emu_last_cs = 0x0972; emu_last_ip = 0x1372; emu_last_length = 0x0036; emu_last_crc = 0x0328; emu_call();
l__1375:
	emu_xorw(&emu_ax, emu_ax);
	goto l__1379;
l__1379:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_1524_0018_014D()
 *
 * @name f__0972_1524_0018_014D
 * @implements 0972:1524:0018:014D ()
 * @implements 0972:153C:001F:E4E3
 * @implements 0972:155B:001E:7AB4
 * @implements 0972:1579:000C:582A
 * @implements 0972:1585:0018:CD47
 * @implements 0972:1589:0014:65FF
 * @implements 0972:159D:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_1524_0018_014D()
{
l__1524:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x153C); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__153C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_dx = 0x12;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x2C64);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__1589;
l__155B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1579); emu_cs = 0x0F3F; emu_Tile_Unpack();
l__1579:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = 0xE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1585); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
l__1585:
	emu_addw(&emu_sp, 0xA);
	emu_incw(&emu_si);
l__1589:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x2D52), emu_si);
	if ((int16)emu_get_memory16(emu_ds, emu_bx, 0x2D52) > (int16)emu_si) goto l__155B;
	emu_xorw(&emu_ax, emu_ax);
	goto l__159D;
l__159D:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_15A2_0019_AB1E()
 *
 * @name f__0972_15A2_0019_AB1E
 * @implements 0972:15A2:0019:AB1E ()
 * @implements 0972:15BB:0012:FF55
 * @implements 0972:15CD:001D:73EF
 * @implements 0972:15EA:0015:06AF
 * @implements 0972:15FF:000D:2DFE
 * @implements 0972:160C:0005:517D
 * @implements 0972:1611:0009:0491
 * @implements 0972:161A:001A:3A56
 * @implements 0972:1634:0014:31F2
 * @implements 0972:1648:0005:517D
 * @implements 0972:164D:0015:7914
 * @implements 0972:1662:0028:49BE
 * @implements 0972:168A:0005:A06E
 * @implements 0972:168F:000F:4845
 * @implements 0972:169E:001F:6F53
 * @implements 0972:16BD:000A:CB50
 * @implements 0972:16C7:0008:A673
 * @implements 0972:16CF:001D:7CD7
 * @implements 0972:16D8:0014:1F04
 * @implements 0972:16D9:0013:7F00
 * @implements 0972:16EC:000A:EE18
 * @implements 0972:16F6:0012:F520
 * @implements 0972:1708:0010:9DFE
 * @implements 0972:1745:0009:F63A
 * @implements 0972:174E:0010:7163
 * @implements 0972:175E:002A:4005
 * @implements 0972:1788:0010:DEF5
 * @implements 0972:1798:0007:F90C
 * @implements 0972:179B:0004:E839
 * @implements 0972:179F:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_15A2_0019_AB1E()
{
l__15A2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x15BB); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__15BB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x15CD); emu_cs = 0x0C3A; f__0C3A_1002_0013_651A();
l__15CD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_dx = 0x12;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x2C64);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__16D9;
l__15EA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_push(emu_cs); emu_push(0x15FF); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__15FF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if (emu_ax < emu_get_memory16(emu_es, emu_bx, 0xE)) goto l__160C;
	goto l__16D8;
l__160C:
	emu_push(emu_cs); emu_push(0x1611); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__1611:
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x161A); emu_cs = 0x0F3F; emu_Tile_Unpack();
l__161A:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1634); emu_cs = 0x1A34; emu_Unit_Create();
l__1634:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax != 0) goto l__1648;
	goto l__16D8;
l__1648:
	emu_push(emu_cs); emu_push(0x164D); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__164D:
	emu_orw(&emu_ax, 0x3);
	emu_di = emu_ax;
	emu_push(emu_di);
	emu_ax = 0x2D07;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x178));
	emu_push(emu_cs); emu_push(0x1662); emu_cs = 0x34C1; overlay(0x34C1, 0); emu_Math_PercentToValue();
l__1662:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_di;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__168F;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x168A); emu_cs = 0x176C; emu_Unit_SetAction();
l__168A:
	emu_addw(&emu_sp, 0x6);
	goto l__16D8;
l__168F:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x169E); emu_cs = 0x176C; emu_Unit_SetAction();
l__169E:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x16BD); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
l__16BD:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x16C7); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__16C7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x16CF); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__16CF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_ax;
l__16D8:
	emu_incw(&emu_si);
l__16D9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x2D52), emu_si);
	if ((int16)emu_get_memory16(emu_ds, emu_bx, 0x2D52) <= (int16)emu_si) goto l__16EC;
	goto l__15EA;
l__16EC:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) == 0x0) goto l__16F6;
	goto l__179B;
l__16F6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1708;
	goto l__179B;
l__1708:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B6) != 0x1) goto l__1745;
	emu_ax = 0x85;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1718); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
	/* Unresolved jump */ emu_ip = 0x1718; emu_last_cs = 0x0972; emu_last_ip = 0x1718; emu_last_length = 0x0010; emu_last_crc = 0x9DFE; emu_call();
l__1745:
	emu_ax = 0x85;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x174E); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__174E:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_cs); emu_push(0x175E); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__175E:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37FA));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_push(emu_ds);
	emu_ax = 0x3430;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1788); emu_cs = 0x01F7; emu_String_sprintf();
l__1788:
	emu_addw(&emu_sp, 0x14);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1798); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
l__1798:
	emu_addw(&emu_sp, 0x6);
l__179B:
	emu_xorw(&emu_ax, emu_ax);
	goto l__179F;
l__179F:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
