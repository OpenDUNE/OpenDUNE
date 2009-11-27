/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__16C5_0124_0007_C3F1()
 *
 * @name f__16C5_0124_0007_C3F1
 * @implements 16C5:0124:0007:C3F1 ()
 * @implements 16C5:012B:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_0124_0007_C3F1()
{
l__0124:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	goto l__012B;
l__012B:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__16C5_012D_0017_71BC()
 *
 * @name f__16C5_012D_0017_71BC
 * @implements 16C5:012D:0017:71BC ()
 * @implements 16C5:01E7:0004:E839
 * @implements 16C5:01EB:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__16C5_012D_0017_71BC()
{
l__012D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x68);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) { /* Unresolved jump */ emu_ip = 0x0144; emu_last_cs = 0x16C5; emu_last_ip = 0x013F; emu_last_length = 0x0017; emu_last_crc = 0x71BC; emu_call(); return; }
	goto l__01E7;
l__01E7:
	emu_xorw(&emu_ax, emu_ax);
	goto l__01EB;
l__01EB:
	emu_sp = emu_bp;
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
l__0251:
	emu_xorw(&emu_ax, emu_ax);
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
l__02DC:
	emu_addw(&emu_sp, 0x8);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, emu_di);
	if ((int16)emu_si >= (int16)emu_di) {
		emu_orw(&emu_di, emu_di);
		if (emu_di != 0) goto l__02F7;
	}
l__02E9:
	emu_di = emu_si;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
l__02F7:
	goto l__035A;
l__02F9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6F);
	emu_ax = (int8)emu_al;
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0308); emu_cs = 0x104B; emu_AirUnit_Get_ByIndex();
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
l__033B:
	emu_addw(&emu_sp, 0x8);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((int16)emu_si >= (int16)emu_get_memory16(emu_ss, emu_bp, -0xE)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp, -0xE) != 0x0) goto l__035A;
	}
l__034B:
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_si;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
l__035A:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0365); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__0365:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
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
l__038C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__03BA;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x039F); emu_cs = 0x16BC; f__16BC_0044_0027_CB92();
l__039F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6126));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_cs); emu_push(0x03B4); emu_cs = 0x16BC; f__16BC_0001_0018_AE47();
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
	emu_push(emu_cs); emu_push(0x0418); emu_cs = 0x0F3F; emu_Tile_GetPosX();
l__0418:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_di, emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x042C); emu_cs = 0x0F3F; emu_Tile_GetPosY();
l__042C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x6), emu_ax);
l__0431:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x043C); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__043C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
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
	emu_push(emu_cs); emu_push(0x046E); emu_cs = 0x0F3F; emu_Tile_GetSpecialXY();
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
l__04C6:
	emu_addw(&emu_sp, 0x8);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_ax);
l__04CC:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x04D7); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__04D7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
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
l__0514:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x051F); emu_cs = 0x0F3F; emu_Tile_PackXY();
l__051F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0527); emu_cs = 0x0F3F; emu_Tile_GetDistanceOffset();
l__0527:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xA);
	if ((int16)emu_ax <= (int16)0xA) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
		emu_get_memory16(emu_es, emu_bx, 0x18) = 0x2;
	}
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
l__05E7:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x14));
	emu_push(emu_cs); emu_push(0x0604); emu_cs = 0x0F3F; f__0F3F_0104_0013_C3B8();
l__0604:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	goto l__0615;
l__060C:
	emu_ax = 0x40;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
l__0615:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0xA)) {
		emu_ax = emu_di;
		emu_addw(&emu_ax, 0x2);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
		if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__0634;
	}
l__0627:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax < emu_get_memory16(emu_ss, emu_bp, -0xA)) goto l__068C;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), emu_di);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) <= emu_di) goto l__068C;
l__0634:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0643); emu_cs = 0x176C; emu_Unit_SetAction();
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
l__0666:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0670); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0670:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0678); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__0678:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0686); emu_cs = 0x1A34; f__1A34_1B68_0019_AAA0();
l__0686:
	emu_addw(&emu_sp, 0x6);
	emu_incw(&emu_si);
	goto l__069E;
l__068C:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x069B); emu_cs = 0x176C; emu_Unit_SetAction();
l__069B:
	emu_addw(&emu_sp, 0x6);
l__069E:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x06A9); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__06A9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
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
 * @implements 16C5:070B:000E:20BB
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
	if (emu_get_memory16(emu_es, emu_bx, 0xC) != 0x3) goto l__070B;
	emu_ax = 0x4;
	goto l__070D;
l__070B:
	emu_xorw(&emu_ax, emu_ax);
l__070D:
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0719); emu_cs = 0x1A34; f__1A34_350F_0021_9B04();
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
l__073A:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x074C); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__074C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0754); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1C1A_001A_9C1B();
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
l__076C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
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
 * @implements 16C5:07D6:0017:FF04
 * @implements 16C5:07ED:0006:57AF
 * @implements 16C5:07F3:0015:B1A9
 * @implements 16C5:0808:0002:E1BA
 * @implements 16C5:084D:000E:09AD
 * @implements 16C5:085B:0048:ACCD
 * @implements 16C5:08A3:0016:8B23
 * @implements 16C5:08B9:000B:D46A
 * @implements 16C5:08C4:0018:C08E
 * @implements 16C5:08DC:0019:EFED
 * @implements 16C5:08DF:0016:ABA0
 * @implements 16C5:08F5:0013:98D0
 * @implements 16C5:0908:001E:7ACA
 * @implements 16C5:0917:000F:9BA4
 * @implements 16C5:0926:000A:CB50
 * @implements 16C5:0930:000D:8578
 * @implements 16C5:0935:0008:7900
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
l__079B:
	emu_xorw(&emu_ax, emu_ax);
	goto l__09BE;
l__07A0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_push(emu_cs); emu_push(0x07AD); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
l__07AD:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x18), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x18) == 0x0) goto l__07D6;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x18));
	emu_push(emu_cs); emu_push(0x07D2); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__07D2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
l__07D6:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x07ED); emu_cs = 0x0FE4; emu_Unit_FindFirst();
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
l__08B9:
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp, -0xC)) goto l__08C4;
	goto l__0989;
l__08C4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x4F) == 0x0) goto l__08DF;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x08DC); emu_cs = 0x176C; emu_Unit_SetAction();
l__08DC:
	emu_addw(&emu_sp, 0x6);
l__08DF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x08F5); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
l__08F5:
	emu_addw(&emu_sp, 0x8);
	emu_addw(&emu_ax, 0xFFC0);
	emu_push(emu_ax);
	emu_ax = 0x7F;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0908); emu_cs = 0x2537; f__2537_000C_001C_86CB();
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
l__0917:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0926); emu_cs = 0x0F3F; f__0F3F_028E_0015_1153();
l__0926:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0930); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0930:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
l__0935:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x093D); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1086_0040_F11C();
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
	emu_push(emu_cs); emu_push(0x095A); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__095A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
l__095D:
	emu_push(emu_cs); emu_push(0x0962); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__0962:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0970); emu_cs = 0x1A34; f__1A34_1B68_0019_AAA0();
l__0970:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0986); emu_cs = 0x1A34; f__1A34_1A66_0011_34D4();
l__0986:
	emu_addw(&emu_sp, 0x6);
l__0989:
	goto l__099D;
l__099D:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x09A8); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__09A8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
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
	emu_push(emu_cs); emu_push(0x0A02); emu_cs = 0x15C2; emu_Script_Reset();
l__0A02:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6124);
	emu_addw(&emu_ax, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6126));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A16); emu_cs = 0x15C2; emu_Script_Load();
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
	emu_push(emu_cs); emu_push(0x0A5A); emu_cs = 0x15C2; emu_Script_Reset();
l__0A5A:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6124));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6124);
	emu_addw(&emu_ax, 0x1E);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6126));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A75); emu_cs = 0x15C2; emu_Script_Load();
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
