/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__176C_07F1_001D_3E0E()
 *
 * @name f__176C_07F1_001D_3E0E
 * @implements 176C:07F1:001D:3E0E ()
 * @implements 176C:080E:000B:C11A
 * @implements 176C:082C:0002:D3BA
 * @implements 176C:082E:0006:3784
 * @implements 176C:0834:000B:611E
 * @implements 176C:0851:0004:83B9
 * @implements 176C:0855:0003:2E57
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_07F1_001D_3E0E()
{
l__07F1:
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
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x080E); emu_cs = 0x167E; emu_Tools_Index_GetUnit();
l__080E:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__082E;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0819); emu_cs = 0x167E; emu_Tools_Index_GetUnit();
	/* Unresolved jump */ emu_ip = 0x0819; emu_last_cs = 0x176C; emu_last_ip = 0x0819; emu_last_length = 0x000B; emu_last_crc = 0xC11A; emu_call();
l__082C:
	goto l__0855;
l__082E:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0834); emu_cs = 0x167E; emu_Tools_Index_GetStructure();
l__0834:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__0851;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x083F); emu_cs = 0x167E; emu_Tools_Index_GetStructure();
	/* Unresolved jump */ emu_ip = 0x083F; emu_last_cs = 0x176C; emu_last_ip = 0x083F; emu_last_length = 0x000B; emu_last_crc = 0x611E; emu_call();
l__0851:
	emu_xorw(&emu_ax, emu_ax);
	goto l__082C;
l__0855:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_0882_0014_0C6A()
 *
 * @name f__176C_0882_0014_0C6A
 * @implements 176C:0882:0014:0C6A ()
 * @implements 176C:0896:000D:9150
 * @implements 176C:08A3:0009:5312
 * @implements 176C:08AC:0008:133E
 * @implements 176C:08B4:0008:D336
 * @implements 176C:08BC:000D:F112
 * @implements 176C:08C9:002C:6C7F
 * @implements 176C:08F5:000D:F932
 * @implements 176C:0902:003C:5819
 * @implements 176C:0935:0009:FCB6
 * @implements 176C:093E:0018:57AE
 * @implements 176C:0956:0012:2597
 * @implements 176C:0968:0010:0DA8
 * @implements 176C:0978:0012:0E45
 * @implements 176C:0984:0006:BC27
 * @implements 176C:0987:0003:5C2D
 * @implements 176C:09A8:0018:9FF3
 * @implements 176C:09C0:000D:B934
 * @implements 176C:09CD:000D:819D
 * @implements 176C:09DA:0015:CD26
 * @implements 176C:09EF:0018:247E
 * @implements 176C:0A07:0008:45F1
 * @implements 176C:0A0F:0010:0D90
 * @implements 176C:0A1F:0039:07D4
 * @implements 176C:0A58:0006:888B
 * @implements 176C:0A7F:000F:3D0A
 * @implements 176C:0A8E:0018:34CB
 * @implements 176C:0AA6:0009:3ADE
 * @implements 176C:0AAF:000D:F571
 * @implements 176C:0ABC:0008:77A0
 * @implements 176C:0AC4:0011:2B8C
 * @implements 176C:0AD5:000F:6094
 * @implements 176C:0AE4:000A:860D
 * @implements 176C:0AEE:0023:4B7B
 * @implements 176C:0B11:0020:7404
 * @implements 176C:0B14:001D:FC9E
 * @implements 176C:0B31:0021:373B
 * @implements 176C:0B52:0011:575D
 * @implements 176C:0B63:0046:5A28
 * @implements 176C:0BA9:000F:7600
 * @implements 176C:0BB5:0003:6393
 * @implements 176C:0BB8:0002:C03A
 * @implements 176C:0BBA:0005:6206
 * @implements 176C:0BBF:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_0882_0014_0C6A()
{
l__0882:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__0896;
	goto l__0BBA;
l__0896:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x56));
	emu_push(emu_cs); emu_push(0x08A3); emu_cs = 0x167E; emu_Tools_Index_GetType();
l__08A3:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax != 0x1) goto l__08AC;
	goto l__0A7F;
l__08AC:
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) goto l__08B4;
	/* Unresolved jump */ emu_ip = 0x0A7C; emu_last_cs = 0x176C; emu_last_ip = 0x08B1; emu_last_length = 0x0008; emu_last_crc = 0x133E; emu_call();
l__08B4:
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__08BC;
	goto l__0A7F;
l__08BC:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x56));
	emu_push(emu_cs); emu_push(0x08C9); emu_cs = 0x167E; emu_Tools_Index_GetStructure();
l__08C9:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xB);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0xB) goto l__08F5;
	goto l__09A8;
l__08F5:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x1);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) == 0x1) goto l__0902;
	/* Unresolved jump */ emu_ip = 0x098C; emu_last_cs = 0x176C; emu_last_ip = 0x08FF; emu_last_length = 0x000D; emu_last_crc = 0xF932; emu_call();
l__0902:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFEFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x58) = 0x0;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
l__0935:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x093E); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__093E:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0956); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
l__0956:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0968); emu_cs = 0x0C3A; emu_Structure_SetAnimation();
l__0968:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0978); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
l__0978:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
l__0984:
	emu_ax = 0x1;
l__0987:
	goto l__0BBF;
l__09A8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) == 0x0) goto l__09CD;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x10) != 0) goto l__09C0;
	/* Unresolved jump */ emu_ip = 0x0A60; emu_last_cs = 0x176C; emu_last_ip = 0x09BD; emu_last_length = 0x0018; emu_last_crc = 0x9FF3; emu_call();
l__09C0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x1);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) == 0x1) goto l__09CD;
	/* Unresolved jump */ emu_ip = 0x0A60; emu_last_cs = 0x176C; emu_last_ip = 0x09CA; emu_last_length = 0x000D; emu_last_crc = 0xB934; emu_call();
l__09CD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) goto l__09DA;
	/* Unresolved jump */ emu_ip = 0x0A60; emu_last_cs = 0x176C; emu_last_ip = 0x09D7; emu_last_length = 0x000D; emu_last_crc = 0x819D; emu_call();
l__09DA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09EF); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
l__09EF:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A07); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
l__0A07:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A0F); emu_cs = 0x1A34; emu_Unit_EnterStructure();
l__0A0F:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0A1F); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
l__0A1F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFEFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x58) = 0x0;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A58); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__0A58:
	emu_addw(&emu_sp, 0x6);
	goto l__0984;
l__0A7F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A8E); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
l__0A8E:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0AA6); emu_cs = 0x0F3F; emu_Tile_Center();
l__0AA6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AAF); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0AAF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x0ABC); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_IsValidPosition();
l__0ABC:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0AC4;
	goto l__0BB8;
l__0AC4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0AD5); emu_cs = 0x0F3F; emu_Tile_Center();
l__0AD5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0AE4); emu_cs = 0x1A34; emu_Unit_SetPosition();
l__0AE4:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0AEE;
	goto l__0BB8;
l__0AEE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0B14;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B11); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
l__0B11:
	emu_addw(&emu_sp, 0x6);
l__0B14:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0B31); emu_cs = 0x1A34; emu_Unit_Unknown1E99();
l__0B31:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0B52); emu_cs = 0x1A34; emu_Unit_Unknown1E99();
l__0B52:
	emu_addw(&emu_sp, 0xA);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x0B63); emu_cs = 0x1A34; emu_Unit_Unknown204C();
l__0B63:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__0BB5;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFEFF);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0BA9); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
l__0BA9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
l__0BB5:
	goto l__0984;
l__0BB8:
	goto l__0BBA;
l__0BBA:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0987;
l__0BBF:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1458_0023_356A()
 *
 * @name f__176C_1458_0023_356A
 * @implements 176C:1458:0023:356A ()
 * @implements 176C:1476:0005:DE9C
 * @implements 176C:1478:0003:DF08
 * @implements 176C:147B:0006:83CE
 * @implements 176C:1481:0007:CDCF
 * @implements 176C:1488:0010:E9C6
 * @implements 176C:1498:0020:094B
 * @implements 176C:149A:001E:8979
 * @implements 176C:14B8:0008:A673
 * @implements 176C:14C0:002C:0682
 * @implements 176C:14D4:0018:3AE7
 * @implements 176C:14EC:0005:C66E
 * @implements 176C:14F1:002D:4995
 * @implements 176C:151E:0002:D33A
 * @implements 176C:1520:0026:43BF
 * @implements 176C:1546:0002:C6BA
 * @implements 176C:1548:0013:C8FF
 * @implements 176C:1555:0006:53C6
 * @implements 176C:155B:000C:2379
 * @implements 176C:1567:0007:1E5C
 * @implements 176C:156E:0013:7ED5
 * @implements 176C:1581:0014:7898
 * @implements 176C:1584:0011:D011
 * @implements 176C:1595:0006:63E5
 * @implements 176C:159B:0015:35C1
 * @implements 176C:15B0:001A:064D
 * @implements 176C:15CA:0017:0BB3
 * @implements 176C:15E1:001C:DDE4
 * @implements 176C:15FD:0027:EF5D
 * @implements 176C:1600:0024:F13A
 * @implements 176C:1613:0011:8B85
 * @implements 176C:161E:0006:53C6
 * @implements 176C:1624:000C:43CF
 * @implements 176C:1630:0032:F434
 * @implements 176C:1659:0009:B073
 * @implements 176C:1662:007D:0891
 * @implements 176C:16AF:0030:9605
 * @implements 176C:16C5:001A:A0DB
 * @implements 176C:16D1:000E:D3B3
 * @implements 176C:16DF:0007:64B7
 * @implements 176C:16E6:0010:64F9
 * @implements 176C:16F6:0009:D7CB
 * @implements 176C:16FF:0023:1E72
 * @implements 176C:1722:0011:EC1A
 * @implements 176C:1733:000E:1BB6
 * @implements 176C:1741:0021:1B31
 * @implements 176C:1762:0018:40AE
 * @implements 176C:177A:0014:1EEB
 * @implements 176C:178E:003E:0F49
 * @implements 176C:17CC:0013:7B96
 * @implements 176C:17CF:0010:68C7
 * @implements 176C:17DF:001B:7578
 * @implements 176C:17E9:0011:66A4
 * @implements 176C:17FA:0017:CD04
 * @implements 176C:1811:0021:E595
 * @implements 176C:1832:001D:2885
 * @implements 176C:184F:0014:9267
 * @implements 176C:1863:0005:85EE
 * @implements 176C:1866:0002:C13A
 * @implements 176C:186A:000B:2CC1
 * @implements 176C:1875:0020:D3D2
 * @implements 176C:1895:003D:E794
 * @implements 176C:18D2:000D:6F50
 * @implements 176C:18DD:0002:C4BA
 * @implements 176C:18DF:000E:B62B
 * @implements 176C:18E8:0005:517D
 * @implements 176C:18ED:0025:D2E2
 * @implements 176C:1912:0009:84F0
 * @implements 176C:191B:0003:60B6
 * @implements 176C:191E:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1458_0023_356A()
{
l__1458:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x26);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_di = emu_get_memory16(emu_es, emu_bx, 0x54);
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__147B;
l__1476:
	emu_xorw(&emu_ax, emu_ax);
l__1478:
	goto l__191E;
l__147B:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1481); emu_cs = 0x167E; emu_Tools_Index_IsValid();
l__1481:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1488;
	goto l__1476;
l__1488:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x19) goto l__1498;
	emu_ax = 0x1;
	goto l__149A;
l__1498:
	emu_xorw(&emu_ax, emu_ax);
l__149A:
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1C) != 0x0) goto l__14D4;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x14B8); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__14B8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x14C0); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__14C0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x1E));
	if (emu_di == emu_get_memory16(emu_ss, emu_bp, -0x1E)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_get_memory16(emu_es, emu_bx, 0x54) = 0x0;
	}
l__14D4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), emu_di);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) == emu_di) goto l__14F1;
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x14EC); emu_cs = 0x1A34; emu_Unit_SetTarget();
l__14EC:
	emu_addw(&emu_sp, 0x6);
	goto l__1476;
l__14F1:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1C) != 0x0) goto l__1548;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x40);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x40) == 0) goto l__1520;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x67);
	emu_ah = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x65), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x65) == 0x0) goto l__151E;
	goto l__1476;
l__151E:
	goto l__1546;
l__1520:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) goto l__1546;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x62), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x62) == 0x0) goto l__1546;
	goto l__1476;
l__1546:
	goto l__1555;
l__1548:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
l__1555:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x155B); emu_cs = 0x167E; emu_Tools_Index_GetType();
l__155B:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax != 0x1) goto l__1584;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1567); emu_cs = 0x167E; emu_Tools_Index_GetPackedTile();
l__1567:
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x156E); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1086_0040_F11C();
l__156E:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__1584;
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x1581); emu_cs = 0x1A34; emu_Unit_SetTarget();
l__1581:
	emu_addw(&emu_sp, 0x6);
l__1584:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x51);
	emu_ah = 0x0;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1595;
	goto l__191B;
l__1595:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x159B); emu_cs = 0x167E; emu_Tools_Index_GetTile();
l__159B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x15B0); emu_cs = 0x167E; f__167E_0319_0010_B56F();
l__15B0:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x50);
	emu_cl = 0x8;
	emu_shlw(&emu_ax, emu_cl);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp, -0x14)) goto l__15CA;
	goto l__191B;
l__15CA:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x15E1); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
l__15E1:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x12) >= (int16)0x0) goto l__15FD;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_negw(&emu_ax, emu_ax);
	goto l__1600;
l__15FD:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
l__1600:
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) {
		emu_cl = 0x3;
		emu_sarw(&emu_get_memory16(emu_ss, emu_bp, -0x12), emu_cl);
	}
l__1613:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1C) != 0x0) {
		emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x0;
	}
l__161E:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1624); emu_cs = 0x167E; emu_Tools_Index_GetType();
l__1624:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) goto l__1659;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x1630); emu_cs = 0x167E; emu_Tools_Index_GetUnit();
l__1630:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) {
		emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x0;
	}
l__1659:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x12), 0x8);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x12) < (int16)0x8) goto l__1662;
	goto l__191B;
l__1662:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x52);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x58);
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x56);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x36), 0x400);
	if ((emu_get_memory16(emu_es, emu_bx, 0x36) & 0x400) != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_push(emu_es);
		emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x626C));
		emu_ax = emu_get_memory16(emu_es, emu_si, 0x10);
		emu_sarw(&emu_ax, 0x1);
		emu_pop(&emu_es);
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
		if ((int16)emu_get_memory16(emu_es, emu_bx, 0xE) > (int16)emu_ax) {
			emu_get_memory16(emu_ss, emu_bp, -0x1A) = 0x1;
		}
	}
l__16AF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x3);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x3) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x5);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x5) goto l__16D1;
	}
l__16C5:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), 0x200);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x14) > (int16)0x200) {
		emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x16;
	}
l__16D1:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_subw(&emu_bx, 0x13);
	emu_cmpw(&emu_bx, 0x6);
	if (emu_bx <= 0x6) goto l__16DF;
	/* Unresolved jump */ emu_ip = 0x1868; emu_last_cs = 0x176C; emu_last_ip = 0x16DC; emu_last_length = 0x000E; emu_last_crc = 0xD3B3; emu_call();
l__16DF:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x1924);
	switch (emu_ip) {
		case 0x16E6: goto l__16E6;
		case 0x17DF: goto l__17DF;
		case 0x17E9: goto l__17E9;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x176C; emu_last_ip = 0x16E1; emu_last_length = 0x0007; emu_last_crc = 0x64B7;
			emu_call();
			return;
	}
l__16E6:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x16F6); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__16F6:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x16FF); emu_cs = 0x167E; emu_Tools_Index_GetUnit();
l__16FF:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x1743; emu_last_cs = 0x176C; emu_last_ip = 0x170C; emu_last_length = 0x0023; emu_last_crc = 0x1E72; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x20) = 0xFFFF;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1722); emu_cs = 0x1A34; emu_Unit_Unknown379B();
l__1722:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1733); emu_cs = 0x1423; f__1423_0BCC_0012_111A();
l__1733:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1741); emu_cs = 0x1A34; emu_Unit_Unknown10EC();
l__1741:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x54));
	emu_push(emu_cs); emu_push(0x1762); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
l__1762:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_ax = 0x3F;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x177A); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
l__177A:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x178E); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__178E:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_decb(&emu_get_memory8(emu_es, emu_bx, 0x58));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_dx;
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_get_memory16(emu_es, emu_bx, 0x0) = 0xC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x58), 0x1);
	if ((int8)emu_get_memory8(emu_es, emu_bx, 0x58) >= (int8)0x1) goto l__17CF;
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs);
	emu_push(0x17CC); emu_Unit_SetAction();
l__17CC:
	emu_addw(&emu_sp, 0x6);
l__17CF:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x626A);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6268);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__186A;
l__17DF:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
	emu_cl = 0x2;
	emu_sarw(&emu_ax, emu_cl);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x20), emu_ax);
l__17E9:
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x17FA); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__17FA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1811); emu_cs = 0x1A34; emu_Unit_CreateBullet();
l__1811:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__1866;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1832); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__1832:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x4D) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_cs); emu_push(0x184F); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
l__184F:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x14;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x1863); emu_cs = 0x1A34; emu_Unit_Deviation_Decrease();
l__1863:
	emu_addw(&emu_sp, 0x6);
l__1866:
	goto l__186A;
l__186A:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__1875;
	goto l__191B;
l__1875:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4E);
	emu_shlw(&emu_ax, 0x1);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1895); emu_cs = 0x07C9; emu_Tools_AdjustToGameSpeed();
l__1895:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x51) = emu_al;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1A) == 0x0) goto l__18DF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_xorw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x10);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x10) == 0) goto l__18DD;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18D2); emu_cs = 0x07C9; emu_Tools_AdjustToGameSpeed();
l__18D2:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x51) = emu_al;
l__18DD:
	goto l__18E8;
l__18DF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFEF);
l__18E8:
	emu_push(emu_cs); emu_push(0x18ED); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__18ED:
	emu_andb(&emu_al, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_dl = emu_get_memory8(emu_es, emu_bx, 0x51);
	emu_addb(&emu_dl, emu_al);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x51) = emu_dl;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1912); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
l__1912:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__1478;
l__191B:
	goto l__1476;
l__191E:
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
 * Decompiled function f__176C_1A40_0020_8DC9()
 *
 * @name f__176C_1A40_0020_8DC9
 * @implements 176C:1A40:0020:8DC9 ()
 * @implements 176C:1A60:000B:311C
 * @implements 176C:1A6B:001E:596A
 * @implements 176C:1A89:0005:832E
 * @implements 176C:1A9A:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1A40_0020_8DC9()
{
l__1A40:
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
	emu_push(emu_cs); emu_push(0x1A60); emu_cs = 0x167E; emu_Tools_Index_IsValid();
l__1A60:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x1A8E; emu_last_cs = 0x176C; emu_last_ip = 0x1A63; emu_last_length = 0x000B; emu_last_crc = 0x311C; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1A6B); emu_cs = 0x167E; emu_Tools_Index_GetTile();
l__1A6B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1A89); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
l__1A89:
	emu_addw(&emu_sp, 0x8);
	goto l__1A9A;
l__1A9A:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_1A9F_0024_813F()
 *
 * @name f__176C_1A9F_0024_813F
 * @implements 176C:1A9F:0024:813F ()
 * @implements 176C:1AC3:0016:C3C3
 * @implements 176C:1AD9:0022:3A4A
 * @implements 176C:1B1D:0002:C8BA
 * @implements 176C:1B1F:000E:16A7
 * @implements 176C:1B2D:0005:81EE
 * @implements 176C:1B30:0002:C53A
 * @implements 176C:1B32:000E:93EA
 * @implements 176C:1B3C:0004:E839
 * @implements 176C:1B40:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1A9F_0024_813F()
{
l__1A9F:
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
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__1B32;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1AC3); emu_cs = 0x167E; emu_Tools_Index_IsValid();
l__1AC3:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__1B32;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__1B1F;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1AD9); emu_cs = 0x167E; emu_Tools_Index_GetStructure();
l__1AD9:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x1AFB; emu_last_cs = 0x176C; emu_last_ip = 0x1AE6; emu_last_length = 0x0022; emu_last_crc = 0x3A4A; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_si;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x72) = 0xFF;
	goto l__1B1D;
l__1B1D:
	goto l__1B30;
l__1B1F:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x1B2D); emu_cs = 0x1A34; emu_Unit_SetDestination();
l__1B2D:
	emu_addw(&emu_sp, 0x6);
l__1B30:
	goto l__1B3C;
l__1B32:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
l__1B3C:
	emu_xorw(&emu_ax, emu_ax);
	goto l__1B40;
l__1B40:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

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
 * Decompiled function f__176C_1F51_002F_CE9F()
 *
 * @name f__176C_1F51_002F_CE9F
 * @implements 176C:1F51:002F:CE9F ()
 * @implements 176C:1F80:0008:D020
 * @implements 176C:1F88:0008:F739
 * @implements 176C:1F90:0011:1BC3
 * @implements 176C:1FA1:000D:5C7A
 * @implements 176C:1FAE:0020:8494
 * @implements 176C:1FC9:0005:9C22
 * @implements 176C:1FCB:0003:9DB6
 * @implements 176C:1FCE:0013:2F1E
 * @implements 176C:1FE1:001E:A340
 * @implements 176C:1FFF:001C:EEB2
 * @implements 176C:201B:001F:0FEC
 * @implements 176C:201E:001C:7FD5
 * @implements 176C:203A:003D:C682
 * @implements 176C:2075:0002:D03A
 * @implements 176C:2077:0009:68BB
 * @implements 176C:2080:004D:941A
 * @implements 176C:2097:0036:E4C2
 * @implements 176C:20CD:0005:AD6E
 * @implements 176C:20D2:000D:565E
 * @implements 176C:20DF:0025:8BA8
 * @implements 176C:2104:0012:A12E
 * @implements 176C:2116:000C:BC69
 * @implements 176C:2122:0006:4202
 * @implements 176C:2128:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_1F51_002F_CE9F()
{
l__1F51:
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
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x49);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x4B));
	if (emu_ax == 0) goto l__1F80;
	goto l__2122;
l__1F80:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1F88); emu_cs = 0x167E; emu_Tools_Index_IsValid();
l__1F88:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1F90;
	goto l__2122;
l__1F90:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1FA1); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__1FA1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1FAE); emu_cs = 0x167E; emu_Tools_Index_GetPackedTile();
l__1FAE:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_cmpw(&emu_di, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_di != emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__1FCE;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x72) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
l__1FC9:
	emu_xorw(&emu_ax, emu_ax);
l__1FCB:
	goto l__2128;
l__1FCE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x72);
	emu_ax = (int8)emu_al;
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__1FE1;
	goto l__2077;
l__1FE1:
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0x176C;
	emu_push(emu_ax);
	emu_ax = 0x1F21;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x981E;
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1FFF); emu_cs = 0x1319; f__1319_002D_0023_320C();
l__1FFF:
	emu_addw(&emu_sp, 0x10);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xE);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0x4) >= (int16)0xE) goto l__201B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	goto l__201E;
l__201B:
	emu_ax = 0xE;
l__201E:
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6268);
	emu_addw(&emu_ax, 0x72);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x203A); emu_cs = 0x01F7; emu_Tools_Memcopy();
l__203A:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x72), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x72) == 0xFF) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x19);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x19) {
			emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
			emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
			emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
			emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
			emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0xC), 0x2);
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
			emu_get_memory16(emu_es, emu_bx, 0x0) = 0x2D0;
		}
	}
l__2075:
	goto l__2097;
l__2077:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2080); emu_cs = 0x0F3F; emu_Tile_GetDistancePacked();
l__2080:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xE);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) < (int16)0xE) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
		emu_addw(&emu_bx, emu_get_memory16(emu_ss, emu_bp, -0x6));
		emu_get_memory8(emu_es, emu_bx, 0x72) = 0xFF;
	}
l__2097:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x72);
	emu_ax = (int8)emu_al;
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__2122;
	emu_cl = 0x5;
	emu_shlw(&emu_si, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_cmpw(&emu_ax, emu_si);
	if (emu_ax == emu_si) goto l__20D2;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x20CD); emu_cs = 0x1A34; emu_Unit_Unknown1E99();
l__20CD:
	emu_addw(&emu_sp, 0xA);
	goto l__2122;
l__20D2:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x20DF); emu_cs = 0x1A34; emu_Unit_Unknown167C();
l__20DF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__2116;
	emu_ax = 0xD;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6268);
	emu_addw(&emu_ax, 0x73);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6268);
	emu_addw(&emu_ax, 0x72);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2104); emu_cs = 0x01F7; f__01F7_29B8_0016_B3E0();
l__2104:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x7F) = 0xFF;
	emu_ax = 0x1;
	goto l__1FCB;
l__2116:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory8(emu_es, emu_bx, 0x72) = 0xFF;
	goto l__1FC9;
l__2122:
	emu_ax = 0x1;
	goto l__1FCB;
l__2128:
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
 * Decompiled function f__176C_212E_002E_9D89()
 *
 * @name f__176C_212E_002E_9D89
 * @implements 176C:212E:002E:9D89 ()
 * @implements 176C:215C:0011:BB28
 * @implements 176C:216D:001C:0800
 * @implements 176C:2189:0024:8100
 * @implements 176C:21E6:0005:7955
 * @implements 176C:21E8:0003:1D01
 * @implements 176C:21EB:0010:4D4C
 * @implements 176C:21FB:000E:DA27
 * @implements 176C:2209:0005:A22E
 * @implements 176C:220E:0015:1BD8
 * @implements 176C:2223:0015:0FEE
 * @implements 176C:2238:000B:9877
 * @implements 176C:2243:000C:1165
 * @implements 176C:225C:0013:F216
 * @implements 176C:226F:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_212E_002E_9D89()
{
l__212E:
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
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x215C); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__215C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x216D); emu_cs = 0x1A34; emu_Structure_GetLinkedUnit();
l__216D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_ax == 0) goto l__21EB;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4D));
	emu_push(emu_cs); emu_push(0x2189); emu_cs = 0x167E; emu_Tools_Index_GetStructure();
l__2189:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__21EB;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) != 0x0) goto l__21EB;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x21AD); emu_cs = 0x0C10; emu_Object_IsScriptVariable4NotNull();
	/* Unresolved jump */ emu_ip = 0x21AD; emu_last_cs = 0x176C; emu_last_ip = 0x21AD; emu_last_length = 0x0024; emu_last_crc = 0x8100; emu_call();
l__21E6:
	emu_ax = emu_si;
l__21E8:
	goto l__226F;
l__21EB:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x21FB); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__21FB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2209); emu_cs = 0x1082; emu_Structure_FindFirst();
l__2209:
	emu_addw(&emu_sp, 0x8);
	goto l__225C;
l__220E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) != 0x0) { /* Unresolved jump */ emu_ip = 0x224F; emu_last_cs = 0x176C; emu_last_ip = 0x2216; emu_last_length = 0x0015; emu_last_crc = 0x1BD8; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x2223); emu_cs = 0x0C10; emu_Object_IsScriptVariable4NotNull();
l__2223:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x224F; emu_last_cs = 0x176C; emu_last_ip = 0x2227; emu_last_length = 0x0015; emu_last_crc = 0x0FEE; emu_call(); return; }
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2238); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__2238:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x2243); emu_cs = 0x0C10; f__0C10_0008_0014_19CD();
l__2243:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_si;
	goto l__21E6;
l__225C:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__220E;
	emu_xorw(&emu_ax, emu_ax);
	goto l__21E8;
l__226F:
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
 * Decompiled function f__176C_2275_001D_D22D()
 *
 * @name f__176C_2275_001D_D22D
 * @implements 176C:2275:001D:D22D ()
 * @implements 176C:2292:000C:ED8F
 * @implements 176C:229B:0003:D63A
 * @implements 176C:229E:000A:0725
 * @implements 176C:22A8:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_2275_001D_D22D()
{
l__2275:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) goto l__229E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x2292); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
l__2292:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x58);
l__229B:
	emu_ax = (int8)emu_al;
	goto l__22A8;
l__229E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x58);
	goto l__229B;
l__22A8:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_22AA_0014_EDA3()
 *
 * @name f__176C_22AA_0014_EDA3
 * @implements 176C:22AA:0014:EDA3 ()
 * @implements 176C:22BE:0004:E839
 * @implements 176C:22C2:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_22AA_0014_EDA3()
{
l__22AA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x100);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x100) == 0) goto l__22BE;
	emu_ax = 0x1;
	/* Unresolved jump */ emu_ip = 0x22C0; emu_last_cs = 0x176C; emu_last_ip = 0x22BC; emu_last_length = 0x0014; emu_last_crc = 0xEDA3; emu_call();
l__22BE:
	emu_xorw(&emu_ax, emu_ax);
	goto l__22C2;
l__22C2:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_22C4_0019_80C9()
 *
 * @name f__176C_22C4_0019_80C9
 * @implements 176C:22C4:0019:80C9 ()
 * @implements 176C:22DD:0009:3ADE
 * @implements 176C:22E6:000A:8EEA
 * @implements 176C:22F0:0012:5BD5
 * @implements 176C:2302:0008:5756
 * @implements 176C:230A:0013:714D
 * @implements 176C:231D:0033:026B
 * @implements 176C:2320:0030:556B
 * @implements 176C:2330:0020:5005
 * @implements 176C:2350:002F:540B
 * @implements 176C:235E:0021:D67F
 * @implements 176C:237F:0022:A116
 * @implements 176C:23A1:001D:4782
 * @implements 176C:23BE:0008:6F72
 * @implements 176C:23C6:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_22C4_0019_80C9()
{
l__22C4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x22DD); emu_cs = 0x0F3F; emu_Tile_Center();
l__22DD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x22E6); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__22E6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x22F0); emu_cs = 0x151A; f__151A_0114_0022_0B6C();
l__22F0:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x2302); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__2302:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x230A); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0750_0027_7BA5();
l__230A:
	emu_pop(&emu_cx);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A4C), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x3A4C) == 0x0) goto l__231D;
	emu_xorw(&emu_ax, emu_ax);
	goto l__2320;
l__231D:
	emu_ax = 0x1;
l__2320:
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x20), 0x1);
	if (emu_get_memory16(emu_es, emu_bx, 0x20) == 0x1) {
		emu_addw(&emu_si, 0x2);
	}
l__2330:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x4;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x4A), 0x3);
	if (emu_get_memory16(emu_es, emu_bx, 0x4A) != 0x3) goto l__2350;
	emu_ax = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x80);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x33C8;
	goto l__235E;
l__2350:
	emu_ax = emu_si;
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0xC0);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x33C8;
l__235E:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xFC);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x237F); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__237F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_dx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x2), emu_al);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x23A1); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__23A1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x23BE); emu_cs = 0x151A; f__151A_000E_0013_5840();
l__23BE:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x1;
	goto l__23C6;
l__23C6:
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
 * Decompiled function f__176C_246C_0015_C163()
 *
 * @name f__176C_246C_0015_C163
 * @implements 176C:246C:0015:C163 ()
 * @implements 176C:2481:0013:8302
 * @implements 176C:2496:0003:DD0C
 * @implements 176C:2499:000F:7512
 * @implements 176C:24A8:000E:AD4A
 * @implements 176C:24B6:0010:16F6
 * @implements 176C:24C6:002D:83BF
 * @implements 176C:24F3:0010:1142
 * @implements 176C:2503:000B:7D3A
 * @implements 176C:250E:0020:614B
 * @implements 176C:252E:000B:9475
 * @implements 176C:2539:000E:3D36
 * @implements 176C:2547:0005:E326
 * @implements 176C:254C:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_246C_0015_C163()
{
l__246C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x2481); emu_cs = 0x0C10; emu_Object_IsScriptVariable4NotNull();
l__2481:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__2499;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x2494); emu_cs = 0x0C10; emu_Object_GetScriptVariable4();
	/* Unresolved jump */ emu_ip = 0x2494; emu_last_cs = 0x176C; emu_last_ip = 0x2494; emu_last_length = 0x0013; emu_last_crc = 0x8302; emu_call();
l__2496:
	goto l__254C;
l__2499:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x626C));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x100);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x100) != 0) goto l__24A8;
	goto l__2547;
l__24A8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x59), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x59) == 0x0) goto l__24B6;
	goto l__2547;
l__24B6:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x24C6); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__24C6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x24F3); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__24F3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x2503); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__2503:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x250E); emu_cs = 0x1A34; emu_Unit_Unknown2BB5();
l__250E:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__2547;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x252E); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__252E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_di);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x2539); emu_cs = 0x0C10; f__0C10_0008_0014_19CD();
l__2539:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_si;
	emu_ax = emu_di;
	goto l__2496;
l__2547:
	emu_xorw(&emu_ax, emu_ax);
	goto l__2496;
l__254C:
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
 * Decompiled function f__176C_2552_0019_4894()
 *
 * @name f__176C_2552_0019_4894
 * @implements 176C:2552:0019:4894 ()
 * @implements 176C:256B:002F:8944
 * @implements 176C:259A:0006:8EF0
 * @implements 176C:259C:0004:E839
 * @implements 176C:25A0:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_2552_0019_4894()
{
l__2552:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x26);
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__259C;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x256B); emu_cs = 0x167E; emu_Tools_Index_GetUnit();
l__256B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__259C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x0) goto l__259C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x259A); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
l__259A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__259C:
	emu_xorw(&emu_ax, emu_ax);
	goto l__25A0;
l__25A0:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__176C_25A5_002C_AC04()
 *
 * @name f__176C_25A5_002C_AC04
 * @implements 176C:25A5:002C:AC04 ()
 * @implements 176C:25D1:000E:DA27
 * @implements 176C:25DF:0005:9A2E
 * @implements 176C:25E4:002D:1FC4
 * @implements 176C:2611:0004:549F
 * @implements 176C:2613:0002:CFBA
 * @implements 176C:2615:000B:166D
 * @implements 176C:2620:0014:5438
 * @implements 176C:2622:0012:CF1D
 * @implements 176C:2634:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__176C_25A5_002C_AC04()
{
l__25A5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x626A));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6268));
	emu_push(emu_cs); emu_push(0x25D1); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__25D1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x25DF); emu_cs = 0x1082; emu_Structure_FindFirst();
l__25DF:
	emu_addw(&emu_sp, 0x8);
	goto l__2622;
l__25E4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) != 0x0) goto l__2615;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__2615;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x26), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x26) != 0x0) goto l__2615;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x2611); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__2611:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__2613:
	goto l__2634;
l__2615:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x2620); emu_cs = 0x1082; emu_Structure_FindNext();
l__2620:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__2622:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax != 0) goto l__25E4;
	emu_xorw(&emu_ax, emu_ax);
	goto l__2613;
l__2634:
	emu_sp = emu_bp;
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
