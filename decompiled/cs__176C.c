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
