/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__176C_1F21_001C_8C6C()
 *
 * @name f__176C_1F21_001C_8C6C
 * @implements 176C:1F21:001C:8C6C ()
 * @implements 176C:1F3D:0011:CE3C
 * @implements 176C:1F4A:0004:68F2
 * @implements 176C:1F4E:0003:2E57
 *
 * Called From: 1319:00B3:000B:6FE3
 * Called From: 1319:0109:000B:6FD3
 * Called From: 1319:01BE:000B:6FD3
 * Called From: 1319:035B:000B:6FF3
 * Called From: 1319:0523:0006:FC3B
 * Called From: 1319:063A:0010:D054
 */
void f__176C_1F21_001C_8C6C()
{
l__1F21:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cl = 0x5;
	emu_shlw(&emu_ax, emu_cl);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x1F3D); emu_cs = 0x1A34; emu_Unit_Unknown3146();
l__1F3D:
	emu_addw(&emu_sp, 0x8);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) {
		emu_si = 0x100;
	}
l__1F4A:
	emu_ax = emu_si;
	goto l__1F4E;
l__1F4E:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_2638_0017_CF4B()
 *
 * @name f__176C_2638_0017_CF4B
 * @implements 176C:2638:0017:CF4B ()
 * @implements 176C:2671:000C:1FEB
 * @implements 176C:267D:0010:0742
 * @implements 176C:268D:001A:8FC8
 * @implements 176C:26A7:000D:A042
 * @implements 176C:26B4:0010:DEE5
 * @implements 176C:26C4:0007:F90C
 * @implements 176C:26CB:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_2638_0017_CF4B()
{
l__2638:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B6) != 0x1) goto l__2671;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x264F); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	/* Unresolved jump */ emu_ip = 0x264F; emu_last_cs = 0x176C; emu_last_ip = 0x264F; emu_last_length = 0x0017; emu_last_crc = 0xCF4B; emu_call();
l__2671:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x267D); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__267D:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x268D); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__268D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37FA));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_ax = 0x13;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x26A7); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__26A7:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x26B4); emu_cs = 0x01F7; emu_String_sprintf();
l__26B4:
	emu_addw(&emu_sp, 0x10);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x26C4); emu_cs = 0x10E4; emu_GUI_DisplayText();
l__26C4:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	goto l__26CB;
l__26CB:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_26CD_0010_041C()
 *
 * @name f__176C_26CD_0010_041C
 * @implements 176C:26CD:0010:041C ()
 * @implements 176C:26DD:0006:8EF0
 * @implements 176C:26E3:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_26CD_0010_041C()
{
l__26CD:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x26DD); emu_cs = 0x1A34; emu_Unit_RemoveFog();
l__26DD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__26E3;
l__26E3:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_26E5_0013_FF24()
 *
 * @name f__176C_26E5_0013_FF24
 * @implements 176C:26E5:0013:FF24 ()
 * @implements 176C:26F8:000E:BD09
 * @implements 176C:2706:0011:1BC3
 * @implements 176C:2717:000A:0E78
 * @implements 176C:2721:0012:03F6
 * @implements 176C:272E:0005:517D
 * @implements 176C:2733:002F:9271
 * @implements 176C:2762:001C:0B18
 * @implements 176C:2779:0005:517D
 * @implements 176C:277E:000F:C618
 * @implements 176C:278D:0006:8870
 * @implements 176C:278F:0004:EEB9
 * @implements 176C:2791:0002:C6BA
 * @implements 176C:2793:0002:C13A
 * @implements 176C:2795:0002:BC3A
 * @implements 176C:2797:0002:C13A
 * @implements 176C:2799:0002:BA3A
 * @implements 176C:279B:0005:AD7A
 * @implements 176C:27A0:0004:DE52
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_26E5_0013_FF24()
{
l__26E5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x10) goto l__26F8;
	goto l__2799;
l__26F8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x58), 0x64);
	if ((int8)emu_get_memory8(emu_es, emu_bx, 0x58) < (int8)0x64) goto l__2706;
	goto l__2799;
l__2706:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x2717); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__2717:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2721); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__2721:
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0x8);
	if (emu_si != 0x8) {
		emu_cmpw(&emu_si, 0x9);
		if (emu_si != 0x9) goto l__2795;
	}
l__272E:
	emu_push(emu_cs); emu_push(0x2733); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__2733:
	emu_andb(&emu_al, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_dl = emu_get_memory8(emu_es, emu_bx, 0x58);
	emu_addb(&emu_dl, emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x58) = emu_dl;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x100);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2762); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__2762:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x58), 0x64);
	if ((int8)emu_get_memory8(emu_es, emu_bx, 0x58) > (int8)0x64) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_get_memory8(emu_es, emu_bx, 0x58) = 0x64;
	}
l__2779:
	emu_push(emu_cs); emu_push(0x277E); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__277E:
	emu_testw(&emu_ax, 0x1F);
	if ((emu_ax & 0x1F) != 0) goto l__2793;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x278D); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0AFA_0011_D5DB();
l__278D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__278F:
	emu_xorw(&emu_ax, emu_ax);
l__2791:
	goto l__27A0;
l__2793:
	goto l__2797;
l__2795:
	goto l__278F;
l__2797:
	goto l__279B;
l__2799:
	goto l__278F;
l__279B:
	emu_ax = 0x1;
	goto l__2791;
l__27A0:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_27A4_0021_7EE9()
 *
 * @name f__176C_27A4_0021_7EE9
 * @implements 176C:27A4:0021:7EE9 ()
 * @implements 176C:27C5:0009:5D1A
 * @implements 176C:27CE:000E:27C3
 * @implements 176C:27DC:0006:72E7
 * @implements 176C:27E2:000B:2AA2
 * @implements 176C:27E7:0006:7D05
 * @implements 176C:27EA:0003:9D0F
 * @implements 176C:27ED:000D:8210
 * @implements 176C:27FA:0016:9F64
 * @implements 176C:2810:0017:D1B6
 * @implements 176C:2827:0008:DBCF
 * @implements 176C:282F:0011:B905
 * @implements 176C:289F:0005:E325
 * @implements 176C:28A8:0003:62AF
 * @implements 176C:28AB:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_27A4_0021_7EE9()
{
l__27A4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x27C5); emu_cs = 0x167E; emu_Tools_Index_Decode();
l__27C5:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x27CE); emu_cs = 0x167E; emu_Tools_Index_GetType();
l__27CE:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__27DC;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) { /* Unresolved jump */ emu_ip = 0x2840; emu_last_cs = 0x176C; emu_last_ip = 0x27D7; emu_last_length = 0x000E; emu_last_crc = 0x27C3; emu_call(); return; }
	/* Unresolved jump */ emu_ip = 0x28A6; emu_last_cs = 0x176C; emu_last_ip = 0x27D9; emu_last_length = 0x000E; emu_last_crc = 0x27C3; emu_call();
l__27DC:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x27E2); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_IsValidPosition();
l__27E2:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__27ED;
l__27E7:
	emu_ax = 0x1;
l__27EA:
	goto l__28AB;
l__27ED:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x27FA); emu_cs = 0x1A34; emu_Structure_GetLinkedUnit();
l__27FA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x283E; emu_last_cs = 0x176C; emu_last_ip = 0x2808; emu_last_length = 0x0016; emu_last_crc = 0x9F64; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2810); emu_cs = 0x167E; emu_Tools_Index_GetTile();
l__2810:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xC) = emu_dx;
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x2827); emu_cs = 0x1A34; emu_Unit_Unknown0E2E();
l__2827:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__282F;
	goto l__289F;
l__282F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0xC) = 0xFFFF;
	emu_get_memory16(emu_es, emu_bx, 0xA) = 0xFFFF;
	goto l__28A8;
l__289F:
	emu_xorw(&emu_ax, emu_ax);
	goto l__27EA;
l__28A8:
	goto l__27E7;
l__28AB:
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
 * Decompiled function f__176C_28B1_0024_58C9()
 *
 * @name f__176C_28B1_0024_58C9
 * @implements 176C:28B1:0024:58C9 ()
 * @implements 176C:28D5:0008:C487
 * @implements 176C:28DD:001D:FB78
 * @implements 176C:28FA:000A:CB50
 * @implements 176C:2904:0008:A673
 * @implements 176C:290C:0004:581F
 * @implements 176C:2916:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_28B1_0024_58C9()
{
l__28B1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x28D5); emu_cs = 0x167E; emu_Tools_Index_GetType();
l__28D5:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__28DD;
	/* Unresolved jump */ emu_ip = 0x2910; emu_last_cs = 0x176C; emu_last_ip = 0x28DB; emu_last_length = 0x0008; emu_last_crc = 0xC487; emu_call();
l__28DD:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x50;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x28FA); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
l__28FA:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2904); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__2904:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x290C); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__290C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__2916;
l__2916:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_291A_0010_8A93()
 *
 * @name f__176C_291A_0010_8A93
 * @implements 176C:291A:0010:8A93 ()
 * @implements 176C:292A:001C:964A
 * @implements 176C:2946:000A:F53E
 * @implements 176C:2950:001B:65D6
 * @implements 176C:296B:000D:0B78
 * @implements 176C:296E:000A:DF3C
 * @implements 176C:2978:0009:B8CC
 * @implements 176C:2981:000C:0854
 * @implements 176C:2984:0009:23D4
 * @implements 176C:298D:000E:0610
 * @implements 176C:299B:0005:846E
 * @implements 176C:299E:0002:C13A
 * @implements 176C:29A2:0004:E839
 * @implements 176C:29A6:0003:2E57
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_291A_0010_8A93()
{
l__291A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x292A); emu_cs = 0x2537; emu_Tools_RandomRange();
l__292A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3C);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__2946;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__296E;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__296E;
	/* Unresolved jump */ emu_ip = 0x29A0; emu_last_cs = 0x176C; emu_last_ip = 0x2944; emu_last_length = 0x001C; emu_last_crc = 0x964A; emu_call();
l__2946:
	emu_cmpw(&emu_si, 0x8);
	if ((int16)emu_si <= (int16)0x8) goto l__296E;
	emu_push(emu_cs); emu_push(0x2950); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__2950:
	emu_andb(&emu_al, 0x3F);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x6D) = emu_al;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x296B); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__296B:
	emu_addw(&emu_sp, 0x6);
l__296E:
	emu_cmpw(&emu_si, 0x2);
	if ((int16)emu_si > (int16)0x2) goto l__299E;
	emu_push(emu_cs); emu_push(0x2978); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__2978:
	emu_testw(&emu_ax, 0x1);
	if ((emu_ax & 0x1) == 0) goto l__2981;
	emu_xorw(&emu_ax, emu_ax);
	goto l__2984;
l__2981:
	emu_ax = 0x1;
l__2984:
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x298D); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__298D:
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x299B); emu_cs = 0x1A34; emu_Unit_Unknown1E99();
l__299B:
	emu_addw(&emu_sp, 0xA);
l__299E:
	goto l__29A2;
l__29A2:
	emu_xorw(&emu_ax, emu_ax);
	goto l__29A6;
l__29A6:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_29A9_003A_8DEF()
 *
 * @name f__176C_29A9_003A_8DEF
 * @implements 176C:29A9:003A:8DEF ()
 * @implements 176C:29E3:000E:DA27
 * @implements 176C:29F1:0005:B42E
 * @implements 176C:29F6:003A:2332
 * @implements 176C:2A30:0026:C654
 * @implements 176C:2A3D:0019:4CA8
 * @implements 176C:2A4B:000B:166D
 * @implements 176C:2A56:0028:B0C0
 * @implements 176C:2A58:0026:E972
 * @implements 176C:2A7E:0012:04F6
 * @implements 176C:2A90:0010:A4E6
 * @implements 176C:2AA0:0008:4D72
 * @implements 176C:2AAC:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_29A9_003A_8DEF()
{
l__29A9:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_xorw(&emu_si, emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x29E3); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__29E3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x29F1); emu_cs = 0x1082; emu_Structure_FindFirst();
l__29F1:
	emu_addw(&emu_sp, 0x8);
	goto l__2A58;
l__29F6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) != 0x0) goto l__2A4B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__2A4B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x26), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x26) != 0x0) goto l__2A4B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x2A30); emu_cs = 0x0F3F; emu_Tile_GetDistanceRoundedUp();
l__2A30:
	emu_addw(&emu_sp, 0x8);
	emu_di = emu_ax;
	emu_cmpw(&emu_di, emu_si);
	if ((int16)emu_di >= (int16)emu_si) {
		emu_orw(&emu_si, emu_si);
		if (emu_si != 0) goto l__2A4B;
	}
l__2A3D:
	emu_si = emu_di;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
l__2A4B:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2A56); emu_cs = 0x1082; emu_Structure_FindNext();
l__2A56:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__2A58:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax != 0) goto l__29F6;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x2AA8; emu_last_cs = 0x176C; emu_last_ip = 0x2A6C; emu_last_length = 0x0026; emu_last_crc = 0xE972; emu_call(); return; }
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs);
	emu_push(0x2A7E); emu_Unit_SetAction();
l__2A7E:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2A90); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__2A90:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x2AA0); emu_cs = 0x1A34; emu_Unit_SetDestination();
l__2AA0:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__2AAC;
l__2AAC:
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
 * Decompiled function f__176C_2AB2_0021_82CD()
 *
 * @name f__176C_2AB2_0021_82CD
 * @implements 176C:2AB2:0021:82CD ()
 * @implements 176C:2AD3:0014:B34A
 * @implements 176C:2AE7:0009:3796
 * @implements 176C:2AF0:0019:4CEF
 * @implements 176C:2B09:0010:CBE1
 * @implements 176C:2B19:0013:3522
 * @implements 176C:2B2C:001B:CD26
 * @implements 176C:2B2D:001A:0D2E
 * @implements 176C:2B32:0015:D16B
 * @implements 176C:2B47:0014:E5D5
 * @implements 176C:2B5B:0008:A466
 * @implements 176C:2B63:0014:1EEB
 * @implements 176C:2B77:0007:F30C
 * @implements 176C:2B7C:0002:CA3A
 * @implements 176C:2B7E:000D:5697
 * @implements 176C:2B8B:0007:C449
 * @implements 176C:2B92:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_2AB2_0021_82CD()
{
l__2AB2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2AD3); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__2AD3:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x2AE7); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__2AE7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__2B2D;
l__2AF0:
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x628C));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x2B09); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__2B09:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2B19); emu_cs = 0x0C3A; emu_Structure_Create();
l__2B19:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__2B2C;
	goto l__2B32;
l__2B2C:
	emu_incw(&emu_si);
l__2B2D:
	emu_cmpw(&emu_si, 0x4);
	if ((int16)emu_si < (int16)0x4) goto l__2AF0;
l__2B32:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__2B7E;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x2B47); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__2B47:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) { /* Unresolved jump */ emu_ip = 0x2B66; emu_last_cs = 0x176C; emu_last_ip = 0x2B4D; emu_last_length = 0x0014; emu_last_crc = 0xE5D5; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x14;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2B5B); emu_cs = 0x0FCB; emu_String_Get_ByIndex();
l__2B5B:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2B63); emu_cs = 0x10E4; emu_GUI_DisplayText();
l__2B63:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2B77); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__2B77:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
l__2B7C:
	goto l__2B92;
l__2B7E:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x2B8B); emu_cs = 0x1A34; emu_Unit_Unknown10EC();
l__2B8B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	goto l__2B7C;
l__2B92:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_2B97_0013_B226()
 *
 * @name f__176C_2B97_0013_B226
 * @implements 176C:2B97:0013:B226 ()
 * @implements 176C:2BAA:001F:5AB6
 * @implements 176C:2BC9:0004:591F
 * @implements 176C:2BCB:0002:C23A
 * @implements 176C:2BCD:0004:9539
 * @implements 176C:2BD1:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_2B97_0013_B226()
{
l__2B97:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x2BAA); emu_cs = 0x1A34; emu_Unit_Unknown15F4();
l__2BAA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__2BCD;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2BC9); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__2BC9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__2BCB:
	goto l__2BD1;
l__2BCD:
	emu_xorw(&emu_ax, emu_ax);
	goto l__2BCB;
l__2BD1:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_2BD5_0014_2C56()
 *
 * @name f__176C_2BD5_0014_2C56
 * @implements 176C:2BD5:0014:2C56 ()
 * @implements 176C:2BE9:000A:4B0F
 * @implements 176C:2BF3:001F:0151
 * @implements 176C:2C12:0022:0EC9
 * @implements 176C:2C52:0004:E439
 * @implements 176C:2C54:0002:CC3A
 * @implements 176C:2C56:0005:A97A
 * @implements 176C:2C5D:000D:8532
 * @implements 176C:2C6A:0004:291F
 * @implements 176C:2C6E:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_2BD5_0014_2C56()
{
l__2BD5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x2BE9); emu_cs = 0x0C10; emu_Object_GetScriptVariable4();
l__2BE9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2BF3); emu_cs = 0x167E; emu_Tools_Index_GetStructureOrUnit();
l__2BF3:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__2C5D;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2C12); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__2C12:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x26));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x26)) { /* Unresolved jump */ emu_ip = 0x2C2E; emu_last_cs = 0x176C; emu_last_ip = 0x2C1B; emu_last_length = 0x0022; emu_last_crc = 0x0EC9; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	if (emu_al == emu_get_memory8(emu_es, emu_bx, 0x8)) goto l__2C56;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2C34); emu_cs = 0x167E; emu_Tools_Index_GetType();
	/* Unresolved jump */ emu_ip = 0x2C34; emu_last_cs = 0x176C; emu_last_ip = 0x2C34; emu_last_length = 0x0022; emu_last_crc = 0x0EC9; emu_call();
l__2C52:
	emu_xorw(&emu_ax, emu_ax);
l__2C54:
	goto l__2C6E;
l__2C56:
	emu_ax = 0x1;
	goto l__2C54;
l__2C5D:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x2C6A); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
l__2C6A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__2C52;
l__2C6E:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_2C73_0010_BB2A()
 *
 * @name f__176C_2C73_0010_BB2A
 * @implements 176C:2C73:0010:BB2A ()
 * @implements 176C:2C83:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_2C73_0010_BB2A()
{
l__2C73:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x6E) = 0x20;
	emu_xorw(&emu_ax, emu_ax);
	goto l__2C83;
l__2C83:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
