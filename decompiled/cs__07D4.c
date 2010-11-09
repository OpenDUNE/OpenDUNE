/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__07D4_02F8_0055_0679()
 *
 * @name f__07D4_02F8_0055_0679
 * @implements 07D4:02F8:0055:0679 ()
 * @implements 07D4:031D:0030:7365
 * @implements 07D4:034B:0002:2597
 *
 * Called From: 151A:06AA:0009:9B66
 * Called From: B4CD:0477:0006:DF2B
 * Called From: B4CD:0477:0028:B587
 * Called From: B4CD:0477:0039:8ACB
 * Called From: B4CD:04AC:0009:86D1
 * Called From: B4CD:12FF:0017:38A6
 */
void f__07D4_02F8_0055_0679()
{
l__02F8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cl = 0x3;
	emu_sarw(&emu_bx, emu_cl);
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x93E5);
	emu_ah = 0x0;
	emu_cl = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_andb(&emu_cl, 0x7);
	emu_dx = 0x1;
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) != 0) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8D09);
		emu_incw(&emu_ax);
		if (emu_ax == 0) goto l__034B;
	}
l__031D:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cl = 0x3;
	emu_sarw(&emu_bx, emu_cl);
	emu_cl = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_andb(&emu_cl, 0x7);
	emu_al = 0x1;
	emu_shlb(&emu_al, emu_cl);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx, 0x91E5), emu_al);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3344), 0xC8);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x3344) < (int16)0xC8) {
		emu_bx = emu_get_memory16(emu_ds, 0x00, 0x3344);
		emu_shlw(&emu_bx, 0x1);
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
		emu_get_memory16(emu_ds, emu_bx, 0x8290) = emu_ax;
		emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x3344));
	}
l__034B:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__07D4_159A_001D_F971()
 *
 * @name f__07D4_159A_001D_F971
 * @implements 07D4:159A:001D:F971 ()
 * @implements 07D4:15B7:0008:AD1A
 * @implements 07D4:15BB:0004:EAF9
 * @implements 07D4:15BF:0005:BFA8
 * @implements 07D4:15C4:0016:4DD5
 * @implements 07D4:15C7:0013:6F1B
 * @implements 07D4:15DA:000E:A50F
 * @implements 07D4:15E8:000A:E2DD
 * @implements 07D4:15F2:0025:4D45
 * @implements 07D4:1617:0008:C54E
 * @implements 07D4:161F:0006:F7CE
 *
 * Called From: 10E4:2130:0012:8D21
 * Called From: B4CD:0F70:0008:D74D
 */
void f__07D4_159A_001D_F971()
{
l__159A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__15BB;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x15B7); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__15B7:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
l__15BB:
	emu_xorw(&emu_si, emu_si);
	goto l__15C7;
l__15BF:
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x15C4); f__07D4_1625_001A_07E5();
l__15C4:
	emu_pop(&emu_cx);
	emu_incw(&emu_si);
l__15C7:
	emu_cmpw(&emu_si, 0x1000);
	if ((int16)emu_si < (int16)0x1000) goto l__15BF;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x15DA); emu_cs = 0x0F78; emu_Map_UpdateMinimapPosition();
l__15DA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__161F;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x15E8); emu_cs = 0x2598; f__2598_0000_0017_EB80();
l__15E8:
	emu_pop(&emu_cx);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x15F2); emu_cs = 0x2642; f__2642_0002_005E_87F6();
l__15F2:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x40;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0x88;
	emu_push(emu_ax);
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_ax = 0x88;
	emu_push(emu_ax);
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1617); emu_cs = 0x24D0; f__24D0_000D_0039_C17D();
l__1617:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x161F); emu_cs = 0x2642; f__2642_0069_0008_D517();
l__161F:
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
 * Decompiled function f__07D4_1625_001A_07E5()
 *
 * @name f__07D4_1625_001A_07E5
 * @implements 07D4:1625:001A:07E5 ()
 * @implements 07D4:163F:0008:04D1
 * @implements 07D4:1647:000C:40AE
 * @implements 07D4:1653:0012:553F
 * @implements 07D4:1665:0008:F68F
 * @implements 07D4:166D:0023:2B60
 * @implements 07D4:1690:002A:C5EA
 * @implements 07D4:16B0:000A:AEB9
 * @implements 07D4:16BA:0008:A909
 * @implements 07D4:16C2:0020:50B6
 * @implements 07D4:16E2:0050:F2D5
 * @implements 07D4:16F3:003F:17D9
 * @implements 07D4:1732:0019:5B9D
 * @implements 07D4:1743:0008:9905
 * @implements 07D4:174B:0027:57D5
 * @implements 07D4:1772:000B:ED14
 * @implements 07D4:177D:000F:406D
 * @implements 07D4:178A:0002:D63A
 * @implements 07D4:178C:0011:6FA3
 * @implements 07D4:179D:000B:ED14
 * @implements 07D4:17A8:0012:DA6D
 * @implements 07D4:17B8:0002:F6BA
 * @implements 07D4:17BA:0008:D904
 * @implements 07D4:17C2:0037:AF83
 * @implements 07D4:17F9:0018:6A1E
 * @implements 07D4:180F:0002:CB3A
 * @implements 07D4:1811:0011:2BD8
 * @implements 07D4:1822:006E:C38D
 * @implements 07D4:1827:0069:7F32
 * @implements 07D4:1890:0005:8AEE
 * @implements 07D4:1895:001B:E447
 * @implements 07D4:18B0:000D:BA27
 * @implements 07D4:18B3:000A:6E63
 * @implements 07D4:18B7:0006:F7CE
 *
 * Called From: 07D4:12F0:0008:FBF3
 * Called From: 07D4:12F0:0007:A2F3
 * Called From: 07D4:15C1:0005:BFA8
 * Called From: 0F78:0087:002F:3722
 */
void f__07D4_1625_001A_07E5()
{
l__1625:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x12);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0xC;
	emu_di = 0xFFFF;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x1000);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0x6) <= (int16)0x1000) goto l__163F;
	goto l__18B7;
l__163F:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1647); emu_cs = 0x0F3F; emu_Tile_GetPackX();
l__1647:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1653); emu_cs = 0x0F3F; emu_Tile_GetPackY();
l__1653:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_incw(&emu_ax);
	emu_si = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1665); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_IsValidPosition();
l__1665:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__166D;
	goto l__18B7;
l__166D:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__1690;
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cl = 0x3;
	emu_sarw(&emu_bx, emu_cl);
	emu_al = emu_get_memory8(emu_ds, emu_bx, 0x93E5);
	emu_ah = 0x0;
	emu_cl = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_andb(&emu_cl, 0x7);
	emu_dx = 0x1;
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) == 0) goto l__1690;
	goto l__18B7;
l__1690:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x8) != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A3A));
		emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x10);
		if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x10) != 0) goto l__16BA;
	}
l__16B0:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) != 0x0) goto l__16BA;
	goto l__17BA;
l__16BA:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x16C2); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__16C2:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_cmpw(&emu_si, 0x1);
	if ((int16)emu_si <= (int16)0x1) goto l__16E2;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_bx = emu_ax;
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, emu_bx, 0x3A56));
	emu_decw(&emu_dx);
	emu_di = emu_dx;
	goto l__16F3;
l__16E2:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3A54);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
l__16F3:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A54), 0xFFFF);
	if (emu_get_memory16(emu_ds, emu_bx, 0x3A54) == 0xFFFF) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
		emu_cl = 0x2;
		emu_shlw(&emu_ax, emu_cl);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
		emu_addw(&emu_bx, emu_ax);
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
		emu_ah = 0x0;
		emu_andw(&emu_ax, 0x7);
		emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
		emu_cmpw(&emu_si, 0x1);
		if ((int16)emu_si <= (int16)0x1) goto l__1732;
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
		emu_shlw(&emu_ax, 0x1);
		emu_dx = emu_si;
		emu_addw(&emu_dx, emu_ax);
		emu_addw(&emu_dx, 0x1D);
		emu_di = emu_dx;
	}
	goto l__1743;
l__1732:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3802);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
l__1743:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x174B); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Unit_Get_ByPackedTile();
l__174B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax == 0) goto l__17B8;
	emu_cmpw(&emu_si, 0x1);
	if ((int16)emu_si <= (int16)0x1) goto l__178C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x19) goto l__1772;
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x35);
	emu_di = emu_ax;
	goto l__178A;
l__1772:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x177D); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__177D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_shlw(&emu_ax, 0x1);
	emu_dx = emu_si;
	emu_addw(&emu_dx, emu_ax);
	emu_addw(&emu_dx, 0x1D);
	emu_di = emu_dx;
l__178A:
	goto l__17B8;
l__178C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x19) goto l__179D;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0xFF;
	goto l__17B8;
l__179D:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x17A8); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__17A8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3802);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
l__17B8:
	goto l__1827;
l__17BA:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x17C2); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__17C2:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_ax == 0) goto l__1811;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1811;
	emu_cmpw(&emu_si, 0x1);
	if ((int16)emu_si <= (int16)0x1) goto l__17F9;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_dx = emu_si;
	emu_addw(&emu_dx, emu_ax);
	emu_addw(&emu_dx, 0x1D);
	emu_di = emu_dx;
	goto l__180F;
l__17F9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3802);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
l__180F:
	goto l__1827;
l__1811:
	emu_cmpw(&emu_si, 0x1);
	if ((int16)emu_si <= (int16)0x1) goto l__1822;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3AFE));
	emu_decw(&emu_ax);
	emu_di = emu_ax;
	goto l__1827;
l__1822:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0xC;
l__1827:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_ax);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x4), emu_ax);
	emu_cmpw(&emu_di, 0xFFFF);
	if (emu_di == 0xFFFF) goto l__1895;
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_incw(&emu_dx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_imuluw(&emu_ax, emu_dx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_incw(&emu_dx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_imuluw(&emu_ax, emu_dx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = 0x4000;
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x442));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x440));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6C91));
	emu_push(emu_cs); emu_push(0x1890); emu_cs = 0x2903; emu_GUI_DrawSprite();
l__1890:
	emu_addw(&emu_sp, 0xE);
	goto l__18B3;
l__1895:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_addw(&emu_ax, 0x88);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_ax, 0x100);
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x66A0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x66A2);
	emu_push(0x18B0);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60F76: f__22A6_0F76_002C_45CC(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x07D4; emu_last_ip = 0x18AB; emu_last_length = 0x001B; emu_last_crc = 0xE447;
			emu_call();
			return;
	}
l__18B0:
	emu_addw(&emu_sp, 0x6);
l__18B3:
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x37A6));
l__18B7:
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
 * Decompiled function f__07D4_18BD_0016_68BB()
 *
 * @name f__07D4_18BD_0016_68BB
 * @implements 07D4:18BD:0016:68BB ()
 * @implements 07D4:18CC:0007:D4F5
 * @implements 07D4:18D0:0003:9D04
 * @implements 07D4:18D3:0026:670B
 * @implements 07D4:18F9:000B:8253
 * @implements 07D4:1904:0009:6BA3
 * @implements 07D4:190E:0057:050D
 * @implements 07D4:1943:0022:E93A
 * @implements 07D4:1952:0013:DC4D
 * @implements 07D4:1955:0010:3E35
 * @implements 07D4:195C:0009:9B3E
 * @implements 07D4:1965:0006:F7CE
 *
 * Called From: 07D4:0677:000E:965C
 * Called From: 07D4:0B49:0008:A09F
 * Called From: 07D4:0B49:0006:F92D
 * Called From: 07D4:0C3E:0008:E01C
 * Called From: 07D4:0D72:0008:E391
 * Called From: 07D4:0F6C:0023:CCB8
 * Called From: 07D4:11B8:0008:6583
 */
void f__07D4_18BD_0016_68BB()
{
l__18BD:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x163);
	if ((int16)emu_get_memory16(emu_ss, emu_bp,  0x6) <= (int16)0x163) goto l__18D3;
l__18CC:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
l__18D0:
	goto l__1965;
l__18D3:
	emu_bx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x442);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x440);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__18F9;
	goto l__18CC;
l__18F9:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1904); emu_cs = 0x2903; emu_Unknown_2903_00CA();
l__1904:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_testw(&emu_ax, 0x1);
	if ((emu_ax & 0x1) != 0) goto l__190E;
	goto l__195C;
l__190E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x8420;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_ds);
	emu_push(emu_es);
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_ax);
	emu_push(emu_bx);
	emu_push(emu_cx);
	emu_lfp(&emu_ds, &emu_si, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_lfp(&emu_es, &emu_di, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_cx = 0x10;
l__1943:
	emu_lodsb(emu_ds);
	emu_cmpb(&emu_al, 0x90);
	if ((int8)emu_al >= (int8)0x90) {
		emu_cmpb(&emu_al, 0x98);
		if ((int8)emu_al <= (int8)0x98) {
			emu_cmpb(&emu_al, 0xFF);
			if (emu_al == 0xFF) goto l__1955;
			emu_addb(&emu_al, emu_bl);
		}
	}
l__1952:
	emu_stosb();
	if (--emu_cx != 0) goto l__1943;
l__1955:
	emu_pop(&emu_cx);
	emu_pop(&emu_bx);
	emu_pop(&emu_ax);
	emu_pop(&emu_si);
	emu_pop(&emu_di);
	emu_pop(&emu_es);
	emu_pop(&emu_ds);
l__195C:
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	goto l__18D0;
l__1965:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
