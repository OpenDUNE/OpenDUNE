/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__16C5_0009_0023_21B3()
 *
 * @name f__16C5_0009_0023_21B3
 * @implements 16C5:0009:0023:21B3 ()
 * @implements 16C5:0024:0008:EF7F
 * @implements 16C5:002C:0025:E446
 * @implements 16C5:004A:0007:F6A9
 * @implements 16C5:0051:000F:288A
 * @implements 16C5:0060:0006:7728
 * @implements 16C5:0066:000D:3A8A
 * @implements 16C5:0073:002F:03B8
 * @implements 16C5:00A2:004D:9382
 * @implements 16C5:00DF:0010:2718
 * @implements 16C5:00EF:0008:F6CF
 * @implements 16C5:00F7:0002:C43A
 * @implements 16C5:00F9:0013:BAAB
 * @implements 16C5:0101:000B:0673
 * @implements 16C5:010C:0015:DF16
 * @implements 16C5:010E:0013:4DDB
 * @implements 16C5:0121:0003:2E57
 *
 * Called From: 0642:03BD:0007:BB52
 */
void f__16C5_0009_0023_21B3()
{
l__0009:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6166);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6164);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__004A;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__004A;
	}
	goto l__0024;
l__0024:
	emu_si = 0x1;
	emu_push(emu_cs); emu_push(0x002C); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__002C;
l__002C:
	emu_andw(&emu_ax, 0x7);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_bx, emu_ax);
	emu_adcw(&emu_dx, 0x0);
	emu_addw(&emu_bx, 0x5);
	emu_adcw(&emu_dx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x6166) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x6164) = emu_bx;
	goto l__004A;
l__004A:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0051;
	goto l__0121;
l__0051:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0060); emu_cs = 0x104B; emu_AirUnit_FindFirst();
	goto l__0060;
l__0060:
	emu_addw(&emu_sp, 0x6);
	goto l__010E;
l__0066:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x0073); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	goto l__0073;
l__0073:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x394C) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x394A) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x8) == 0) goto l__0101;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1C), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x1C) != 0x0) goto l__00F9;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6124);
	emu_addw(&emu_ax, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6126));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00A2); emu_cs = 0x15C2; f__15C2_0526_000F_EA1E();
	goto l__00A2;
l__00A2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__00F7;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379C) != 0x0) {
		emu_get_memory16(emu_ds, 0x00, 0x37A4) = 0x0;
		emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x37A2));
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x29);
		emu_ax = (int8)emu_al;
		emu_dx = 0xF;
		emu_subw(&emu_dx, emu_ax);
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x37A8));
		if ((int16)emu_dx > (int16)emu_get_memory16(emu_ds, 0x00, 0x37A8)) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
			emu_al = emu_get_memory8(emu_es, emu_bx, 0x29);
			emu_ax = (int8)emu_al;
			emu_dx = 0xF;
			emu_subw(&emu_dx, emu_ax);
			emu_get_memory16(emu_ds, 0x00, 0x37A8) = emu_dx;
		}
	}
	goto l__00DF;
l__00DF:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6124);
	emu_addw(&emu_ax, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6126));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00EF); emu_cs = 0x15C2; f__15C2_0559_0015_E98A();
	goto l__00EF;
l__00EF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__00F7;
	goto l__0121;
l__00F7:
	goto l__0101;
l__00F9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x1C));
	goto l__0101;
l__0101:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x010C); emu_cs = 0x104B; emu_AirUnit_FindNext();
	goto l__010C;
l__010C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__010E;
l__010E:
	emu_get_memory16(emu_ds, 0x00, 0x6126) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x6124) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6124);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6126));
	if (emu_ax == 0) goto l__0121;
	goto l__0066;
l__0121:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__16C5_01EF_000D_1984()
 *
 * @name f__16C5_01EF_000D_1984
 * @implements 16C5:01EF:000D:1984 ()
 * @implements 16C5:01FC:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_01EF_000D_1984()
{
l__01EF:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	goto l__01FC;
l__01FC:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__16C5_01FE_000D_19C4()
 *
 * @name f__16C5_01FE_000D_19C4
 * @implements 16C5:01FE:000D:19C4 ()
 * @implements 16C5:020B:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_01FE_000D_19C4()
{
l__01FE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	goto l__020B;
l__020B:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__16C5_020D_000D_1A44()
 *
 * @name f__16C5_020D_000D_1A44
 * @implements 16C5:020D:000D:1A44 ()
 * @implements 16C5:021A:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_020D_000D_1A44()
{
l__020D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x1A);
	goto l__021A;
l__021A:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__16C5_021C_003A_2718()
 *
 * @name f__16C5_021C_003A_2718
 * @implements 16C5:021C:003A:2718 ()
 * @implements 16C5:0251:0005:DC2D
 * @implements 16C5:0253:0003:DDB9
 * @implements 16C5:0256:0017:FF04
 * @implements 16C5:026D:0006:973F
 * @implements 16C5:0273:000E:E383
 * @implements 16C5:0281:000D:E586
 * @implements 16C5:028E:0026:21FC
 * @implements 16C5:02B4:0028:C684
 * @implements 16C5:02DC:001D:4A1C
 * @implements 16C5:02E9:0010:5ED3
 * @implements 16C5:02F7:0002:F0BA
 * @implements 16C5:02F9:000F:EECE
 * @implements 16C5:0308:0033:424B
 * @implements 16C5:033B:002A:9578
 * @implements 16C5:034B:001A:1855
 * @implements 16C5:035A:000B:799F
 * @implements 16C5:0365:0013:DDD9
 * @implements 16C5:0367:0011:96EF
 * @implements 16C5:0378:0027:420B
 * @implements 16C5:038C:0013:6D07
 * @implements 16C5:039F:0015:91C5
 * @implements 16C5:03B4:0006:A824
 * @implements 16C5:03BA:0003:6205
 * @implements 16C5:03BD:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_021C_003A_2718()
{
l__021C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_xorw(&emu_di, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x8));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_es, emu_bx, 0x8)) goto l__0256;
	goto l__0251;
l__0251:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0253;
l__0253:
	goto l__03BD;
l__0256:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x026D); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	goto l__026D;
l__026D:
	emu_addw(&emu_sp, 0x8);
	goto l__0367;
l__0273:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x200);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x200) == 0) goto l__0281;
	goto l__035A;
l__0281:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x6);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x6) goto l__028E;
	goto l__035A;
l__028E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3C);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xA));
	if (emu_ax == emu_get_memory16(emu_es, emu_bx, 0xA)) goto l__02B4;
	goto l__035A;
l__02B4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6F);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__02F9;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_push(emu_cs); emu_push(0x02DC); emu_cs = 0x0F3F; emu_Tile_GetDistance();
	goto l__02DC;
l__02DC:
	emu_addw(&emu_sp, 0x8);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, emu_di);
	if ((int16)emu_si >= (int16)emu_di) {
		emu_orw(&emu_di, emu_di);
		if (emu_di != 0) goto l__02F7;
	}
	goto l__02E9;
l__02E9:
	emu_di = emu_si;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	goto l__02F7;
l__02F7:
	goto l__035A;
l__02F9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6F);
	emu_ax = (int8)emu_al;
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0308); emu_cs = 0x104B; emu_AirUnit_Get_ByIndex();
	goto l__0308;
l__0308:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x6));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_es, emu_bx, 0x6)) goto l__035A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_push(emu_cs); emu_push(0x033B); emu_cs = 0x0F3F; emu_Tile_GetDistance();
	goto l__033B;
l__033B:
	emu_addw(&emu_sp, 0x8);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((int16)emu_si >= (int16)emu_get_memory16(emu_ss, emu_bp, -0xE)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp, -0xE) != 0x0) goto l__035A;
	}
	goto l__034B;
l__034B:
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_si;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	goto l__035A;
l__035A:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0365); emu_cs = 0x0FE4; emu_Unit_FindNext();
	goto l__0365;
l__0365:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0367;
l__0367:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__0378;
	goto l__0273;
l__0378:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
		emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	}
	goto l__038C;
l__038C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__03BA;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x039F); emu_cs = 0x16BC; f__16BC_0044_0027_CB92();
	goto l__039F;
l__039F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6126));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_cs); emu_push(0x03B4); emu_cs = 0x16BC; f__16BC_0001_0018_AE47();
	goto l__03B4;
l__03B4:
	emu_addw(&emu_sp, 0x8);
	goto l__0253;
l__03BA:
	goto l__0251;
l__03BD:
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
 * Decompiled function f__16C5_03C3_002D_24E5()
 *
 * @name f__16C5_03C3_002D_24E5
 * @implements 16C5:03C3:002D:24E5 ()
 * @implements 16C5:03F0:0005:A1AE
 * @implements 16C5:03F5:0023:C4F4
 * @implements 16C5:0418:0014:7049
 * @implements 16C5:042C:0010:F460
 * @implements 16C5:0431:000B:799F
 * @implements 16C5:043C:0017:EB58
 * @implements 16C5:043E:0015:8FEB
 * @implements 16C5:0453:001B:4B24
 * @implements 16C5:046E:0025:660E
 * @implements 16C5:0493:0005:A5AE
 * @implements 16C5:0498:002E:4299
 * @implements 16C5:04C6:0011:175D
 * @implements 16C5:04CC:000B:799F
 * @implements 16C5:04D7:003D:5378
 * @implements 16C5:04D9:003B:9EEA
 * @implements 16C5:0514:000B:9CBA
 * @implements 16C5:051F:0008:DA8A
 * @implements 16C5:0527:0016:F4ED
 * @implements 16C5:0538:0005:BB66
 * @implements 16C5:053D:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_03C3_002D_24E5()
{
l__03C3:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_si, emu_si);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_xorw(&emu_di, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x03F0); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	goto l__03F0;
l__03F0:
	emu_addw(&emu_sp, 0x8);
	goto l__043E;
l__03F5:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6F);
	emu_ax = (int8)emu_al;
	emu_decw(&emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x0)) goto l__0431;
	emu_incw(&emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0418); emu_cs = 0x0F3F; f__0F3F_0046_000C_9E1E();
	goto l__0418;
l__0418:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_di, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x042C); emu_cs = 0x0F3F; f__0F3F_0052_000C_9E02();
	goto l__042C;
l__042C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
	goto l__0431;
l__0431:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x043C); emu_cs = 0x0FE4; emu_Unit_FindNext();
	goto l__043C;
l__043C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__043E;
l__043E:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__03F5;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0453;
	goto l__0538;
l__0453:
	emu_ax = emu_di;
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_si);
	emu_di = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_si);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x046E); emu_cs = 0x0F3F; f__0F3F_0037_000F_E3D8();
	goto l__046E;
l__046E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_get_memory16(emu_es, emu_bx, 0x16) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0x14) = emu_ax;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0493); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	goto l__0493;
l__0493:
	emu_addw(&emu_sp, 0x8);
	goto l__04D9;
l__0498:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6F);
	emu_ax = (int8)emu_al;
	emu_decw(&emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x0)) goto l__04CC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x04C6); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	goto l__04C6;
l__04C6:
	emu_addw(&emu_sp, 0x8);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
	goto l__04CC;
l__04CC:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x04D7); emu_cs = 0x0FE4; emu_Unit_FindNext();
	goto l__04D7;
l__04D7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__04D9;
l__04D9:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0498;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_xorw(&emu_dx, emu_dx);
	emu_divw(&emu_ax, emu_si);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1A), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x1A) == 0x0) goto l__0538;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x18), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x18) == 0x0) goto l__0538;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_push(emu_cs); emu_push(0x0514); emu_cs = 0x167E; f__167E_0162_000D_A6D2();
	goto l__0514;
l__0514:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x051F); emu_cs = 0x0F3F; f__0F3F_034C_0012_18EA();
	goto l__051F;
l__051F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0527); emu_cs = 0x0F3F; f__0F3F_0360_0038_97C0();
	goto l__0527;
l__0527:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xA);
	if ((int16)emu_ax <= (int16)0xA) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
		emu_get_memory16(emu_es, emu_bx, 0x18) = 0x2;
	}
	goto l__0538;
l__0538:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	goto l__053D;
l__053D:
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
 * Decompiled function f__16C5_0543_0034_CA88()
 *
 * @name f__16C5_0543_0034_CA88
 * @implements 16C5:0543:0034:CA88 ()
 * @implements 16C5:0577:0006:1789
 * @implements 16C5:057D:0015:F18F
 * @implements 16C5:0592:000C:6B53
 * @implements 16C5:059E:0023:DF62
 * @implements 16C5:05C1:0026:0FE7
 * @implements 16C5:05E7:001D:B1ED
 * @implements 16C5:0604:0008:1CBE
 * @implements 16C5:060C:0037:5F94
 * @implements 16C5:0615:002E:F6D7
 * @implements 16C5:0627:001C:37C4
 * @implements 16C5:0634:000F:6841
 * @implements 16C5:0643:0023:559B
 * @implements 16C5:0666:000A:CB50
 * @implements 16C5:0670:0008:A673
 * @implements 16C5:0678:000E:B4D2
 * @implements 16C5:0686:0006:ABD8
 * @implements 16C5:068C:000F:6849
 * @implements 16C5:069B:000E:5BF5
 * @implements 16C5:069E:000B:799F
 * @implements 16C5:06A9:0013:5DD7
 * @implements 16C5:06AB:0011:16E1
 * @implements 16C5:06BC:0004:68F2
 * @implements 16C5:06C0:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_0543_0034_CA88()
{
l__0543:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
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
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0577); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	goto l__0577;
l__0577:
	emu_addw(&emu_sp, 0x8);
	goto l__06AB;
l__057D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6F);
	emu_ax = (int8)emu_al;
	emu_decw(&emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	if (emu_ax == emu_get_memory16(emu_es, emu_bx, 0x0)) goto l__0592;
	goto l__069E;
l__0592:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x56));
	emu_push(emu_cs); emu_push(0x059E); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	goto l__059E;
l__059E:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x05C1); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	goto l__05C1;
l__05C1:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x56) == 0x0) goto l__060C;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x05E7); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	goto l__05E7;
l__05E7:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_push(emu_cs); emu_push(0x0604); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
	goto l__0604;
l__0604:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	goto l__0615;
l__060C:
	emu_ax = 0x40;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	goto l__0615;
l__0615:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0xA)) {
		emu_ax = emu_di;
		emu_addw(&emu_ax, 0x2);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
		if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__0634;
	}
	goto l__0627;
l__0627:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0xA)) goto l__068C;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) <= emu_di) goto l__068C;
	goto l__0634;
l__0634:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0643); emu_cs = 0x176C; f__176C_000E_000E_633D();
	goto l__0643;
l__0643:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_push(emu_cs); emu_push(0x0666); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	goto l__0666;
l__0666:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0670); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	goto l__0670;
l__0670:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0678); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__0678;
l__0678:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0686); emu_cs = 0x1A34; f__1A34_1B68_0019_AAA0();
	goto l__0686;
l__0686:
	emu_addw(&emu_sp, 0x6);
	emu_incw(&emu_si);
	goto l__069E;
l__068C:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x069B); emu_cs = 0x176C; f__176C_000E_000E_633D();
	goto l__069B;
l__069B:
	emu_addw(&emu_sp, 0x6);
	goto l__069E;
l__069E:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x06A9); emu_cs = 0x0FE4; emu_Unit_FindNext();
	goto l__06A9;
l__06A9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__06AB;
l__06AB:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__06BC;
	goto l__057D;
l__06BC:
	emu_ax = emu_si;
	goto l__06C0;
l__06C0:
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
 * Decompiled function f__16C5_06C6_001D_94A6()
 *
 * @name f__16C5_06C6_001D_94A6
 * @implements 16C5:06C6:001D:94A6 ()
 * @implements 16C5:06E3:0006:D723
 * @implements 16C5:06E9:0022:CF9A
 * @implements 16C5:070D:000C:2071
 * @implements 16C5:0719:0021:53DA
 * @implements 16C5:073A:0012:7F5F
 * @implements 16C5:074C:0008:1757
 * @implements 16C5:0754:000E:CFB4
 * @implements 16C5:0762:000A:B112
 * @implements 16C5:076C:0013:89D8
 * @implements 16C5:076E:0011:C2EE
 * @implements 16C5:0783:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_06C6_001D_94A6()
{
l__06C6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x06E3); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	goto l__06E3;
l__06E3:
	emu_addw(&emu_sp, 0x8);
	goto l__076E;
l__06E9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6F);
	emu_ax = (int8)emu_al;
	emu_decw(&emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x0)) goto l__0762;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x3);
	if (emu_get_memory16(emu_es, emu_bx, 0xC) != 0x3) { /* Unresolved jump */ emu_ip = 0x070B; emu_last_cs = 0x16C5; emu_last_ip = 0x0704; emu_last_length = 0x0022; emu_last_crc = 0xCF9A; emu_call(); return; }
	emu_ax = 0x4;
	goto l__070D;
l__070D:
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0719); emu_cs = 0x1A34; f__1A34_350F_0021_9B04();
	goto l__0719;
l__0719:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__0762;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1A), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x1A) == emu_si) { /* Unresolved jump */ emu_ip = 0x075E; emu_last_cs = 0x16C5; emu_last_ip = 0x072A; emu_last_length = 0x0021; emu_last_crc = 0x53DA; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_get_memory16(emu_es, emu_bx, 0x1A) = emu_si;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x073A); emu_cs = 0x167E; f__167E_0162_000D_A6D2();
	goto l__073A;
l__073A:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x074C); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	goto l__074C;
l__074C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0754); emu_cs = 0x34CD; ovl__34CD(17);
	goto l__0754;
l__0754:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_get_memory16(emu_es, emu_bx, 0x18) = emu_ax;
	emu_ax = emu_si;
	goto l__0783;
l__0762:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x6);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x076C); emu_cs = 0x0FE4; emu_Unit_FindNext();
	goto l__076C;
l__076C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__076E;
l__076E:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x077F; emu_last_cs = 0x16C5; emu_last_ip = 0x077A; emu_last_length = 0x0011; emu_last_crc = 0xC2EE; emu_call(); return; }
	goto l__06E9;
l__0783:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__16C5_0788_0018_4AA5()
 *
 * @name f__16C5_0788_0018_4AA5
 * @implements 16C5:0788:0018:4AA5 ()
 * @implements 16C5:079B:0005:9DB3
 * @implements 16C5:07A0:000D:11BB
 * @implements 16C5:07AD:0025:40DD
 * @implements 16C5:07D2:001B:B10A
 * @implements 16C5:07ED:0006:57AF
 * @implements 16C5:07F3:0015:B1A9
 * @implements 16C5:0808:0002:E1BA
 * @implements 16C5:084D:000E:09AD
 * @implements 16C5:085B:0048:ACCD
 * @implements 16C5:08A3:0016:8B23
 * @implements 16C5:08B9:000B:D46A
 * @implements 16C5:08C4:0018:C08E
 * @implements 16C5:08DC:0019:EFED
 * @implements 16C5:08F5:0013:98D0
 * @implements 16C5:0908:001E:7ACA
 * @implements 16C5:0917:000F:9BA4
 * @implements 16C5:0926:000A:CB50
 * @implements 16C5:0930:000D:8578
 * @implements 16C5:093D:000E:0652
 * @implements 16C5:094B:000F:345F
 * @implements 16C5:095A:0008:A673
 * @implements 16C5:095D:0005:BFC0
 * @implements 16C5:0962:000E:B4D2
 * @implements 16C5:0970:0016:8E0F
 * @implements 16C5:0986:0005:8DEE
 * @implements 16C5:0989:0002:C93A
 * @implements 16C5:099D:000B:799F
 * @implements 16C5:09A8:0013:1DE9
 * @implements 16C5:09AA:0011:56DF
 * @implements 16C5:09BB:0003:2397
 * @implements 16C5:09BE:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_0788_0018_4AA5()
{
l__0788:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1A), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x1A) != 0x0) goto l__07A0;
	goto l__079B;
l__079B:
	emu_xorw(&emu_ax, emu_ax);
	goto l__09BE;
l__07A0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_push(emu_cs); emu_push(0x07AD); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	goto l__07AD;
l__07AD:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x18), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x18) == 0x0) { /* Unresolved jump */ emu_ip = 0x07D6; emu_last_cs = 0x16C5; emu_last_ip = 0x07BF; emu_last_length = 0x0025; emu_last_crc = 0x40DD; emu_call(); return; }
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x18));
	emu_push(emu_cs); emu_push(0x07D2); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__07D2;
l__07D2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x07ED); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	goto l__07ED;
l__07ED:
	emu_addw(&emu_sp, 0x8);
	goto l__09AA;
l__07F3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6F);
	emu_ax = (int8)emu_al;
	emu_decw(&emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	if (emu_ax == emu_get_memory16(emu_es, emu_bx, 0x0)) goto l__0808;
	goto l__099D;
l__0808:
	goto l__084D;
l__084D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x1A), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x1A) != 0x0) goto l__085B;
	/* Unresolved jump */ emu_ip = 0x098B; emu_last_cs = 0x16C5; emu_last_ip = 0x0858; emu_last_length = 0x000E; emu_last_crc = 0x09AD; emu_call();
l__085B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x50);
	emu_cl = 0x8;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) != 0x0) goto l__08C4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x54);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x1A));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x1A)) goto l__08C4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x56), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x56) == 0x0) goto l__08A3;
	goto l__0989;
l__08A3:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x08B9); emu_cs = 0x0F3F; emu_Tile_GetDistance();
	goto l__08B9;
l__08B9:
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp, -0xC)) goto l__08C4;
	goto l__0989;
l__08C4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) == 0x0) { /* Unresolved jump */ emu_ip = 0x08DF; emu_last_cs = 0x16C5; emu_last_ip = 0x08CC; emu_last_length = 0x0018; emu_last_crc = 0xC08E; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x08DC); emu_cs = 0x176C; f__176C_000E_000E_633D();
	goto l__08DC;
l__08DC:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x08F5); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	goto l__08F5;
l__08F5:
	emu_addw(&emu_sp, 0x8);
	emu_addw(&emu_ax, 0xFFC0);
	emu_push(emu_ax);
	emu_ax = 0x7F;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0908); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	goto l__0908;
l__0908:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_si = emu_dx;
	emu_orw(&emu_si, emu_si);
	if ((emu_flags.sf != emu_flags.of)) {
		emu_addw(&emu_si, 0x100);
	}
	goto l__0917;
l__0917:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0926); emu_cs = 0x0F3F; f__0F3F_028E_0015_1153();
	goto l__0926;
l__0926:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0930); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	goto l__0930;
l__0930:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x093D); emu_cs = 0x34CD; ovl__34CD(32);
	goto l__093D;
l__093D:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__094B;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	goto l__095D;
l__094B:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x095A); emu_cs = 0x0F3F; f__0F3F_0086_0017_EA43();
	goto l__095A;
l__095A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	goto l__095D;
l__095D:
	emu_push(emu_cs); emu_push(0x0962); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__0962;
l__0962:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0970); emu_cs = 0x1A34; f__1A34_1B68_0019_AAA0();
	goto l__0970;
l__0970:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0986); emu_cs = 0x1A34; f__1A34_1A66_0011_34D4();
	goto l__0986;
l__0986:
	emu_addw(&emu_sp, 0x6);
	goto l__0989;
l__0989:
	goto l__099D;
l__099D:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x09A8); emu_cs = 0x0FE4; emu_Unit_FindNext();
	goto l__09A8;
l__09A8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__09AA;
l__09AA:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__09BB;
	goto l__07F3;
l__09BB:
	goto l__079B;
l__09BE:
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
 * Decompiled function f__16C5_09C4_003E_31D6()
 *
 * @name f__16C5_09C4_003E_31D6
 * @implements 16C5:09C4:003E:31D6 ()
 * @implements 16C5:0A02:0014:245A
 * @implements 16C5:0A16:0007:F90C
 * @implements 16C5:0A1D:0003:2E57
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_09C4_003E_31D6()
{
l__09C4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xC), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0xC) == emu_si) { /* Unresolved jump */ emu_ip = 0x0A19; emu_last_cs = 0x16C5; emu_last_ip = 0x09E3; emu_last_length = 0x003E; emu_last_crc = 0x31D6; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_si;
	emu_push(emu_ds);
	emu_ax = 0x392E;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6124);
	emu_addw(&emu_ax, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6126));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A02); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	goto l__0A02;
l__0A02:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6124);
	emu_addw(&emu_ax, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6126));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A16); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
	goto l__0A16;
l__0A16:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	goto l__0A1D;
l__0A1D:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__16C5_0A20_003A_2375()
 *
 * @name f__16C5_0A20_003A_2375
 * @implements 16C5:0A20:003A:2375 ()
 * @implements 16C5:0A5A:001B:990F
 * @implements 16C5:0A75:0007:F90C
 * @implements 16C5:0A7C:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_0A20_003A_2375()
{
l__0A20:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xC));
	if (emu_ax == emu_get_memory16(emu_es, emu_bx, 0xC)) { /* Unresolved jump */ emu_ip = 0x0A78; emu_last_cs = 0x16C5; emu_last_ip = 0x0A33; emu_last_length = 0x003A; emu_last_crc = 0x2375; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_ax;
	emu_push(emu_ds);
	emu_ax = 0x392E;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6124);
	emu_addw(&emu_ax, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6126));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A5A); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	goto l__0A5A;
l__0A5A:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6124);
	emu_addw(&emu_ax, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6126));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A75); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
	goto l__0A75;
l__0A75:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	goto l__0A7C;
l__0A7C:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
