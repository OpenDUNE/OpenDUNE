/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0EDB_0386_001D_2E46()
 *
 * @name f__0EDB_0386_001D_2E46
 * @implements 0EDB:0386:001D:2E46 ()
 * @implements 0EDB:03A3:000B:F17C
 * @implements 0EDB:03AE:0003:C99A
 * @implements 0EDB:03B6:0003:2E57
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_0386_001D_2E46()
{
l__0386:
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
	emu_push(emu_cs); emu_push(0x03A3); emu_cs = 0x167E; emu_Tools_Index_IsValid();
l__03A3:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x03B1; emu_last_cs = 0x0EDB; emu_last_ip = 0x03A6; emu_last_length = 0x000B; emu_last_crc = 0xF17C; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03AE); emu_cs = 0x167E; emu_Tools_Index_Decode();
l__03AE:
	emu_pop(&emu_cx);
	goto l__03B6;
l__03B6:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_03B9_001D_2E46()
 *
 * @name f__0EDB_03B9_001D_2E46
 * @implements 0EDB:03B9:001D:2E46 ()
 * @implements 0EDB:03D6:000B:017F
 * @implements 0EDB:03E1:0003:C99A
 * @implements 0EDB:03E2:0002:C2BA
 * @implements 0EDB:03E4:0005:5695
 * @implements 0EDB:03E9:0003:2E57
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_03B9_001D_2E46()
{
l__03B9:
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
	emu_push(emu_cs); emu_push(0x03D6); emu_cs = 0x167E; emu_Tools_Index_IsValid();
l__03D6:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__03E4;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x03E1); emu_cs = 0x167E; emu_Tools_Index_GetType();
l__03E1:
	emu_pop(&emu_cx);
l__03E2:
	goto l__03E9;
l__03E4:
	emu_ax = 0xFFFF;
	goto l__03E2;
l__03E9:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_03EC_0020_629E()
 *
 * @name f__0EDB_03EC_0020_629E
 * @implements 0EDB:03EC:0020:629E ()
 * @implements 0EDB:040C:0011:5969
 * @implements 0EDB:041B:0002:C2BA
 * @implements 0EDB:041D:0005:5695
 * @implements 0EDB:0422:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_03EC_0020_629E()
{
l__03EC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) goto l__041D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x040C); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
l__040C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
l__041B:
	goto l__0422;
l__041D:
	emu_ax = 0xFFFF;
	goto l__041B;
l__0422:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_0426_0027_711D()
 *
 * @name f__0EDB_0426_0027_711D
 * @implements 0EDB:0426:0027:711D ()
 * @implements 0EDB:044D:0007:F90C
 * @implements 0EDB:0454:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_0426_0027_711D()
{
l__0426:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_cs); emu_push(0x044D); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
l__044D:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	goto l__0454;
l__0454:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_0456_0032_B7E5()
 *
 * @name f__0EDB_0456_0032_B7E5
 * @implements 0EDB:0456:0032:B7E5 ()
 * @implements 0EDB:0488:0008:375A
 * @implements 0EDB:0490:0013:CDD0
 * @implements 0EDB:04A3:0004:591F
 * @implements 0EDB:04A5:0002:C23A
 * @implements 0EDB:04A7:0004:9539
 * @implements 0EDB:04AB:0003:2E57
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_0456_0032_B7E5()
{
l__0456:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0488); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0488:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0490); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_08E7_002B_DC75();
l__0490:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__04A7;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x04A3); emu_cs = 0x167E; emu_Tools_Index_Encode();
l__04A3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__04A5:
	goto l__04AB;
l__04A7:
	emu_xorw(&emu_ax, emu_ax);
	goto l__04A5;
l__04AB:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_04AE_0024_408E()
 *
 * @name f__0EDB_04AE_0024_408E
 * @implements 0EDB:04AE:0024:408E ()
 * @implements 0EDB:04D2:0029:06BF
 * @implements 0EDB:04FB:0009:722F
 * @implements 0EDB:0502:0002:C23A
 * @implements 0EDB:0504:0004:9539
 * @implements 0EDB:0508:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_04AE_0024_408E()
{
l__04AE:
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
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x04D2); emu_cs = 0x167E; emu_Tools_Index_GetStructureOrUnit();
l__04D2:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__0504;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_andw(&emu_ax, 0x5);
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax != 0x1) goto l__0504;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x04FB); f__0EDB_050C_001D_2E46();
l__04FB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_negw(&emu_ax, emu_ax);
	emu_sbbw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
l__0502:
	goto l__0508;
l__0504:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0502;
l__0508:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_050C_001D_2E46()
 *
 * @name f__0EDB_050C_001D_2E46
 * @implements 0EDB:050C:001D:2E46 ()
 * @implements 0EDB:0529:000B:01D3
 * @implements 0EDB:0534:000D:20EF
 * @implements 0EDB:0541:0006:9786
 * @implements 0EDB:0547:0008:26BA
 * @implements 0EDB:054F:0016:49F0
 * @implements 0EDB:0565:0004:FC39
 * @implements 0EDB:0567:0002:D43A
 * @implements 0EDB:0569:0006:3784
 * @implements 0EDB:056F:0018:C65D
 * @implements 0EDB:0587:0004:8639
 * @implements 0EDB:0589:0002:AE3A
 * @implements 0EDB:058B:0002:C03A
 * @implements 0EDB:058D:0004:8339
 * @implements 0EDB:0591:0003:2E57
 *
 * Called From: 0EDB:04F8:0029:06BF
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_050C_001D_2E46()
{
l__050C:
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
	emu_push(emu_cs); emu_push(0x0529); emu_cs = 0x167E; emu_Tools_Index_IsValid();
l__0529:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__058D;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0534); emu_cs = 0x167E; emu_Tools_Index_GetType();
l__0534:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__0541;
	emu_cmpw(&emu_ax, 0x3);
	if (emu_ax == 0x3) goto l__0569;
	goto l__058B;
l__0541:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0547); emu_cs = 0x167E; emu_Tools_Index_GetUnit();
l__0547:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x054F); emu_cs = 0x1A34; emu_Unit_GetHouseID();
l__054F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_pop(&emu_dx);
	emu_cmpw(&emu_dx, emu_ax);
	if (emu_dx == emu_ax) goto l__0565;
	emu_ax = 0x1;
	goto l__0567;
l__0565:
	emu_xorw(&emu_ax, emu_ax);
l__0567:
	goto l__0591;
l__0569:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x056F); emu_cs = 0x167E; emu_Tools_Index_GetStructure();
l__056F:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_cmpb(&emu_al, emu_get_memory8(emu_es, emu_bx, 0x8));
	if (emu_al == emu_get_memory8(emu_es, emu_bx, 0x8)) goto l__0587;
	emu_ax = 0x1;
	goto l__0589;
l__0587:
	emu_xorw(&emu_ax, emu_ax);
l__0589:
	goto l__0567;
l__058B:
	goto l__058D;
l__058D:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0567;
l__0591:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0EDB_0594_0026_F09C()
 *
 * @name f__0EDB_0594_0026_F09C
 * @implements 0EDB:0594:0026:F09C ()
 * @implements 0EDB:05EB:0002:EDBA
 * @implements 0EDB:05F1:0016:B901
 * @implements 0EDB:0607:0005:902E
 * @implements 0EDB:0636:0012:C37B
 * @implements 0EDB:0648:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0EDB_0594_0026_F09C()
{
l__0594:
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
	emu_testw(&emu_si, 0xC000);
	if ((emu_si & 0xC000) == 0) goto l__05F1;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x05BA); emu_cs = 0x167E; emu_Tools_Index_GetType();
	/* Unresolved jump */ emu_ip = 0x05BA; emu_last_cs = 0x0EDB; emu_last_ip = 0x05BA; emu_last_length = 0x0026; emu_last_crc = 0xF09C; emu_call();
l__05EB:
	goto l__0648;
l__05F1:
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0607); emu_cs = 0x1082; emu_Structure_FindFirst();
l__0607:
	emu_addw(&emu_sp, 0x8);
	goto l__0636;
l__0636:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x060C; emu_last_cs = 0x0EDB; emu_last_ip = 0x0642; emu_last_length = 0x0012; emu_last_crc = 0xC37B; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	goto l__05EB;
l__0648:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
