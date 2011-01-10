/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4CD_017F_0010_C6FC()
 *
 * @name f__B4CD_017F_0010_C6FC
 * @implements B4CD:017F:0010:C6FC ()
 * @implements B4CD:018F:0005:6143
 *
 * Called From: 34CD:002F:0005:0000
 */
void f__B4CD_017F_0010_C6FC()
{
l__017F:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x018F); emu_Map_Update();
l__018F:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_0194_0011_3CAE()
 *
 * @name f__B4CD_0194_0011_3CAE
 * @implements B4CD:0194:0011:3CAE ()
 * @implements B4CD:01A5:0005:6143
 *
 * Called From: 34CD:002A:0005:0000
 */
void f__B4CD_0194_0011_3CAE()
{
l__0194:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x01A5); emu_Map_Update();
l__01A5:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_01AA_0010_06F1()
 *
 * @name f__B4CD_01AA_0010_06F1
 * @implements B4CD:01AA:0010:06F1 ()
 * @implements B4CD:01BA:0005:6143
 *
 * Called From: 34CD:0048:0005:0000
 */
void f__B4CD_01AA_0010_06F1()
{
l__01AA:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x01BA); emu_Map_Update();
l__01BA:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_0408_001F_C54A()
 *
 * @name f__B4CD_0408_001F_C54A
 * @implements B4CD:0408:001F:C54A ()
 * @implements B4CD:0427:001C:06C2
 * @implements B4CD:0443:0039:8ACB
 * @implements B4CD:0454:0028:B587
 * @implements B4CD:0476:0006:DF2B
 * @implements B4CD:047C:000C:A511
 * @implements B4CD:0488:0006:4475
 *
 * Called From: 34CD:0039:0005:0000
 */
void f__B4CD_0408_001F_C54A()
{
l__0408:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x10) == 0) goto l__0476;
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0427); emu_Unit_Get_ByPackedTile();
l__0427:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_dx != emu_get_memory16(emu_ss, emu_bp,  0x8)) goto l__0476;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x6));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp,  0x6)) goto l__0476;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4B));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x49));
	emu_push(emu_cs); emu_push(0x0443); emu_cs = 0x0F3F; emu_Tile_PackTile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0443:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_si);
	if (emu_ax == emu_si) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x40);
		if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x40) == 0) goto l__0476;
	}
l__0454:
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0x0;
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xEF);
l__0476:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x047C); emu_cs = 0x07D4; emu_Unknown_07D4_02F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__047C:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x0488); emu_Map_Update();
l__0488:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_048E_0012_3E9E()
 *
 * @name f__B4CD_048E_0012_3E9E
 * @implements B4CD:048E:0012:3E9E ()
 * @implements B4CD:04A0:0008:A0B3
 * @implements B4CD:04A8:0009:86D1
 * @implements B4CD:04B1:000D:9C57
 * @implements B4CD:04BE:0006:4475
 *
 * Called From: 34CD:0043:0005:0000
 */
void f__B4CD_048E_0012_3E9E()
{
l__048E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x04A0); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__04A0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x04A8); f__B4CD_1269_0019_A3E5();
l__04A8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x04B1); emu_cs = 0x07D4; emu_Unknown_07D4_02F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__04B1:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x04BE); emu_Map_Update();
l__04BE:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_04C4_0010_846B()
 *
 * @name f__B4CD_04C4_0010_846B
 * @implements B4CD:04C4:0010:846B ()
 * @implements B4CD:04D4:0005:6143
 *
 * Called From: 34CD:0020:0005:0000
 */
void f__B4CD_04C4_0010_846B()
{
l__04C4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x04D4); emu_Map_Update();
l__04D4:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_053B_0010_C4CD()
 *
 * @name f__B4CD_053B_0010_C4CD
 * @implements B4CD:053B:0010:C4CD ()
 * @implements B4CD:054B:0005:6143
 *
 * Called From: 34CD:003E:0005:0000
 */
void f__B4CD_053B_0010_C4CD()
{
l__053B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x054B); emu_Map_Update();
l__054B:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_0566_0010_04C2()
 *
 * @name f__B4CD_0566_0010_04C2
 * @implements B4CD:0566:0010:04C2 ()
 * @implements B4CD:0576:0005:6143
 *
 * Called From: 34CD:0025:0005:0000
 */
void f__B4CD_0566_0010_04C2()
{
l__0566:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0576); emu_Map_Update();
l__0576:
	emu_addw(&emu_sp, 0x6);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_057B_001A_D066()
 *
 * @name f__B4CD_057B_001A_D066
 * @implements B4CD:057B:001A:D066 ()
 * @implements B4CD:0592:0003:5D8D
 * @implements B4CD:0595:0009:902D
 * @implements B4CD:059E:000B:812D
 * @implements B4CD:05A9:0010:4FF3
 * @implements B4CD:05B9:0023:8507
 * @implements B4CD:05DC:0008:0D7D
 * @implements B4CD:05E4:0036:E0ED
 * @implements B4CD:061A:002A:6FEE
 * @implements B4CD:0644:0013:B98F
 * @implements B4CD:0647:0010:AADE
 * @implements B4CD:0648:000F:AA99
 * @implements B4CD:064F:0008:D70B
 * @implements B4CD:0657:000A:D0BB
 * @implements B4CD:0661:000E:353B
 * @implements B4CD:0663:000C:0711
 * @implements B4CD:066F:0040:CDDD
 * @implements B4CD:0671:003E:4157
 * @implements B4CD:06AF:0011:F3CE
 * @implements B4CD:06C0:0014:54A9
 * @implements B4CD:06D4:0011:DCE0
 * @implements B4CD:06E5:0032:BD9A
 * @implements B4CD:0717:0027:DD22
 * @implements B4CD:0720:001E:4827
 * @implements B4CD:073E:000C:3884
 * @implements B4CD:0741:0009:CAFC
 * @implements B4CD:074A:0006:F7CE
 *
 * Called From: B4CD:0175:004D:6862
 * Called From: B4CD:0175:003C:41EC
 * Called From: B4CD:039D:0021:6328
 * Called From: B4CD:039D:0026:D934
 * Called From: B4CD:039D:00B3:20DA
 * Called From: B4CD:039D:0076:756F
 * Called From: B4CD:039D:0065:61FC
 * Called From: B4CD:03D1:0034:2C7C
 * Called From: B4CD:03FB:002A:4D41
 * Called From: B4CD:0531:002E:4B16
 * Called From: B4CD:0531:0030:CB24
 */
void f__B4CD_057B_001A_D066()
{
l__057B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x18);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
		emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xA));
		if (emu_ax != 0) goto l__0595;
	}
l__0592:
	goto l__074A;
l__0595:
	emu_decw(&emu_si);
	emu_cmpw(&emu_si, 0x1F);
	if ((int16)emu_si > (int16)0x1F) goto l__059E;
	goto l__0657;
l__059E:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x05A9); emu_cs = 0x0F3F; emu_Tile_GetPosX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__05A9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x05B9); emu_cs = 0x0F3F; emu_Tile_GetPosY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__05B9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_bx = 0x10;
	emu_ax = emu_si;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_si = emu_ax;
	emu_ax = emu_si;
	emu_incw(&emu_ax);
	emu_andw(&emu_ax, 0xFE);
	emu_si = emu_ax;
	emu_si = 0x2;
	emu_ax = emu_si;
	emu_negw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	goto l__064F;
l__05DC:
	emu_ax = emu_si;
	emu_negw(&emu_ax, emu_ax);
	emu_di = emu_ax;
	goto l__0648;
l__05E4:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_addw(&emu_ax, emu_di);
	if ((emu_flags.sf != emu_flags.of)) goto l__0647;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_addw(&emu_ax, emu_di);
	emu_cmpw(&emu_ax, 0x40);
	if ((int16)emu_ax >= (int16)0x40) goto l__0647;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((emu_flags.sf != emu_flags.of)) goto l__0647;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_cmpw(&emu_ax, 0x40);
	if ((int16)emu_ax >= (int16)0x40) goto l__0647;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_ax);
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x061A); emu_cs = 0x0F3F; emu_Tile_PackXY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__061A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cl = 0x3;
	emu_sarw(&emu_bx, emu_cl);
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_andb(&emu_cl, 0x7);
	emu_al = 0x1;
	emu_shlb(&emu_al, emu_cl);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx, 0x8FE5), emu_al);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x39E2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(0x0644);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34CD0020: overlay(0x34CD, 0); f__B4CD_04C4_0010_846B(); break;
		case 0x34CD002A: overlay(0x34CD, 0); f__B4CD_0194_0011_3CAE(); break;
		case 0x34CD002F: overlay(0x34CD, 0); f__B4CD_017F_0010_C6FC(); break;
		case 0x34CD0039: overlay(0x34CD, 0); f__B4CD_0408_001F_C54A(); break;
		case 0x34CD0043: overlay(0x34CD, 0); f__B4CD_048E_0012_3E9E(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4CD; emu_last_ip = 0x0641; emu_last_length = 0x002A; emu_last_crc = 0x6FEE;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0644:
	emu_addw(&emu_sp, 0x6);
l__0647:
	emu_incw(&emu_di);
l__0648:
	emu_cmpw(&emu_di, emu_si);
	if ((int16)emu_di <= (int16)emu_si) goto l__05E4;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x14));
l__064F:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x14), emu_si);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x14) <= (int16)emu_si) goto l__05DC;
	goto l__074A;
l__0657:
	emu_cmpw(&emu_si, 0x20);
	if ((int16)emu_si <= (int16)0x20) goto l__0661;
	emu_ax = 0x20;
	goto l__0663;
l__0661:
	emu_ax = emu_si;
l__0663:
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xF);
	if ((int16)emu_si >= (int16)0xF) goto l__066F;
	emu_ax = 0xF;
	goto l__0671;
l__066F:
	emu_ax = emu_si;
l__0671:
	emu_si = emu_ax;
	emu_bx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3960);
	emu_dx = emu_get_memory16(emu_ds, emu_bx, 0x395E);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp,  0x8), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp,  0xA), emu_ax);
	emu_ax = emu_si;
	emu_cl = 0x5;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x20);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x2DCE;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	goto l__0741;
l__06AF:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_cs); emu_push(0x06C0); emu_cs = 0x0F3F; emu_Tile_AddTileDiff();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__06C0:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x06D4); emu_cs = 0x0F3F; emu_Tile_IsValid();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__06D4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0720;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x06E5); emu_cs = 0x0F3F; emu_Tile_PackTile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__06E5:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__0720;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cl = 0x3;
	emu_sarw(&emu_bx, emu_cl);
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_andb(&emu_cl, 0x7);
	emu_al = 0x1;
	emu_shlb(&emu_al, emu_cl);
	emu_orb(&emu_get_memory8(emu_ds, emu_bx, 0x8FE5), emu_al);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x39E2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_push(0x0717);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x34CD0020: overlay(0x34CD, 0); f__B4CD_04C4_0010_846B(); break;
		case 0x34CD0025: overlay(0x34CD, 0); f__B4CD_0566_0010_04C2(); break;
		case 0x34CD002A: overlay(0x34CD, 0); f__B4CD_0194_0011_3CAE(); break;
		case 0x34CD002F: overlay(0x34CD, 0); f__B4CD_017F_0010_C6FC(); break;
		case 0x34CD0039: overlay(0x34CD, 0); f__B4CD_0408_001F_C54A(); break;
		case 0x34CD003E: overlay(0x34CD, 0); f__B4CD_053B_0010_C4CD(); break;
		case 0x34CD0043: overlay(0x34CD, 0); f__B4CD_048E_0012_3E9E(); break;
		case 0x34CD0048: overlay(0x34CD, 0); f__B4CD_01AA_0010_06F1(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4CD; emu_last_ip = 0x0714; emu_last_length = 0x0032; emu_last_crc = 0xBD9A;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0717:
	emu_addw(&emu_sp, 0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
l__0720:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_dx;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x4);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if (emu_ax != 0) goto l__073E;
	goto l__074A;
l__073E:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0xA));
l__0741:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x9);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xA) >= (int16)0x9) goto l__074A;
	goto l__06AF;
l__074A:
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
 * Decompiled function f__B4CD_08E7_002B_DC75()
 *
 * @name f__B4CD_08E7_002B_DC75
 * @implements B4CD:08E7:002B:DC75 ()
 * @implements B4CD:0912:000C:28CD
 * @implements B4CD:091E:000C:58F5
 * @implements B4CD:092A:000C:58F4
 * @implements B4CD:0936:001C:555C
 * @implements B4CD:0952:0032:F47A
 * @implements B4CD:095E:0026:FA43
 * @implements B4CD:0984:0032:905E
 * @implements B4CD:099D:0019:1F64
 * @implements B4CD:09B6:0032:1EF4
 * @implements B4CD:09C2:0026:0ECD
 * @implements B4CD:09E8:0025:25FA
 * @implements B4CD:0A01:000C:0EA8
 * @implements B4CD:0A0D:0009:1C93
 * @implements B4CD:0A16:0016:6F25
 * @implements B4CD:0A2C:000B:CB32
 * @implements B4CD:0A37:0009:B7CA
 * @implements B4CD:0A40:001B:13AF
 * @implements B4CD:0A5B:0012:F96C
 * @implements B4CD:0A6D:0009:A4FD
 * @implements B4CD:0A76:0057:8C85
 * @implements B4CD:0AA0:002D:A2B3
 * @implements B4CD:0ABF:000E:DF35
 * @implements B4CD:0AC2:000B:E32B
 * @implements B4CD:0ACD:000E:0F0A
 * @implements B4CD:0AD0:000B:3334
 * @implements B4CD:0ADB:0010:496D
 * @implements B4CD:0AE9:0002:C4BA
 * @implements B4CD:0AEB:0005:C7A6
 * @implements B4CD:0AF0:0004:92B9
 * @implements B4CD:0AF4:0006:F7CE
 *
 * Called From: 34CD:00A7:0005:0000
 */
void f__B4CD_08E7_002B_DC75()
{
l__08E7:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x20);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_ax = emu_di;
	emu_incw(&emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_ax = emu_di;
	emu_incw(&emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_si;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_si;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0912); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0912:
	emu_pop(&emu_cx);
	emu_subw(&emu_ax, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x091E); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__091E:
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x092A); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__092A:
	emu_pop(&emu_cx);
	emu_subw(&emu_ax, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0936); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0936:
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp, -0x10)) goto l__0952;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	goto l__095E;
l__0952:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
l__095E:
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C12));
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0x12)) goto l__0984;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	goto l__099D;
l__0984:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C0E);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C12));
	emu_decw(&emu_ax);
l__099D:
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp, -0x14)) goto l__09B6;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	goto l__09C2;
l__09B6:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
l__09C2:
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C14));
	emu_decw(&emu_ax);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0x16)) goto l__09E8;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	goto l__0A01;
l__09E8:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x3C10);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8D09);
	emu_cl = 0x3;
	emu_shlw(&emu_bx, emu_cl);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x3C14));
	emu_decw(&emu_ax);
l__0A01:
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	goto l__0AD0;
l__0A0D:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	goto l__0AC2;
l__0A16:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cl = 0x6;
	emu_shlw(&emu_ax, emu_cl);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_dx;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0A2C); emu_Map_B4CD_0750();
l__0A2C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0A37); emu_Map_IsValidPosition();
l__0A37:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0A40;
	goto l__0ABF;
l__0A40:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x20);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x20) != 0) goto l__0ABF;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs);
	emu_push(0x0A5B); emu_Unit_Get_ByPackedTile();
l__0A5B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x1C));
	if (emu_ax == 0) goto l__0A6D;
	goto l__0ABF;
l__0A6D:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_cs); emu_push(0x0A76); emu_cs = 0x0F3F; emu_Tile_GetDistancePacked();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0A76:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x9);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x9) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x20), 0x4);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x20) < (int16)0x4) {
			emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x1;
			emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
			emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xC));
			if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0xC)) {
				emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
				emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
				emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
				emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
			}
		}
	}
l__0AA0:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x8);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x8) {
		emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x1;
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
		if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0xA)) {
			emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
			emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
			emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
			emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
		}
	}
l__0ABF:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__0AC2:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ss, emu_bp, -0x12)) goto l__0ACD;
	goto l__0A16;
l__0ACD:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__0AD0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ss, emu_bp, -0x16)) goto l__0ADB;
	goto l__0A0D;
l__0ADB:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xE) == 0x0) goto l__0AF0;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xC), emu_di);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0xC) > (int16)emu_di) goto l__0AEB;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
l__0AE9:
	goto l__0AF4;
l__0AEB:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__0AE9;
l__0AF0:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0AE9;
l__0AF4:
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
 * Decompiled function f__B4CD_0D74_0020_7CC1()
 *
 * @name f__B4CD_0D74_0020_7CC1
 * @implements B4CD:0D74:0020:7CC1 ()
 * @implements B4CD:0D91:0003:5D9C
 * @implements B4CD:0D94:0008:DB39
 * @implements B4CD:0D9C:008E:1E0C
 * @implements B4CD:0DD5:0055:82D9
 * @implements B4CD:0DD8:0052:A721
 * @implements B4CD:0E0B:001F:9678
 * @implements B4CD:0E2A:000D:60E7
 * @implements B4CD:0E37:0014:9D6D
 * @implements B4CD:0E4B:0002:C03A
 * @implements B4CD:0E4D:0005:7A4B
 * @implements B4CD:0E52:0013:7F23
 * @implements B4CD:0E65:0012:019A
 * @implements B4CD:0E68:000F:A3BC
 * @implements B4CD:0E77:0009:22AF
 * @implements B4CD:0E80:000C:89C5
 * @implements B4CD:0E8C:0006:15FB
 * @implements B4CD:0E92:001A:BEC5
 * @implements B4CD:0EAC:0008:ADED
 * @implements B4CD:0EB4:000E:1CF6
 * @implements B4CD:0EC2:0018:A5DB
 * @implements B4CD:0ECC:000E:8D40
 * @implements B4CD:0EDA:000F:4404
 * @implements B4CD:0EE9:000C:AA07
 * @implements B4CD:0EF5:0005:F131
 * @implements B4CD:0EFA:001A:BEC5
 * @implements B4CD:0F14:0008:ADED
 * @implements B4CD:0F1C:000E:1CF6
 * @implements B4CD:0F2A:0015:5591
 * @implements B4CD:0F34:000B:8C55
 * @implements B4CD:0F3F:0010:7BD6
 * @implements B4CD:0F4F:0002:C03A
 * @implements B4CD:0F51:000F:9BBA
 * @implements B4CD:0F60:000D:976C
 * @implements B4CD:0F6D:0008:D74D
 * @implements B4CD:0F75:000B:41A4
 * @implements B4CD:0F76:000A:61AF
 * @implements B4CD:0F80:0005:63B7
 * @implements B4CD:0F82:0003:6223
 * @implements B4CD:0F85:0006:F7CE
 *
 * Called From: 34CD:0070:0005:0000
 */
void f__B4CD_0D74_0020_7CC1()
{
l__0D74:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0D94;
	emu_xorw(&emu_ax, emu_ax);
l__0D91:
	goto l__0F85;
l__0D94:
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0D9C); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0D9C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x10) == 0) goto l__0DD8;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_andw(&emu_dx, 0x0);
	emu_andw(&emu_ax, 0x4);
	emu_orw(&emu_dx, emu_ax);
	if (emu_dx != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x18);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
		if ((int16)emu_ax <= (int16)emu_get_memory16(emu_es, emu_bx, 0x16)) goto l__0DD8;
	}
l__0DD5:
	emu_di = 0x2;
l__0DD8:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x10) == 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
		emu_dx = emu_get_memory16(emu_es, emu_bx, 0xE);
		emu_andw(&emu_dx, 0x0);
		emu_andw(&emu_ax, 0x4);
		emu_orw(&emu_dx, emu_ax);
		if (emu_dx != 0) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
			emu_ax = emu_get_memory16(emu_es, emu_bx, 0x18);
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
			emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x16));
			if ((int16)emu_ax <= (int16)emu_get_memory16(emu_es, emu_bx, 0x16)) {
				emu_di = 0x1;
			}
		}
	}
l__0E0B:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__0E68;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E2A); emu_cs = 0x252E; emu_Memory_GetBlock1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E2A:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2574;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E37); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_LoadFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E37:
	emu_addw(&emu_sp, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x38C4) = 0x1;
	emu_push(emu_cs); emu_push(0x0E4B); emu_cs = 0x2B6C; f__2B6C_0137_0020_C73F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E4B:
	goto l__0E4D;
l__0E4D:
	emu_push(emu_cs); emu_push(0x0E52); emu_cs = 0x1DD7; emu_Driver_Voice_01EB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E52:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0E4D;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x3E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E65); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E65:
	emu_addw(&emu_sp, 0x6);
l__0E68:
	emu_ax = emu_di;
	emu_cmpw(&emu_ax, 0x1);
	if (emu_ax == 0x1) goto l__0E77;
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax == 0x2) goto l__0EDA;
	goto l__0F4F;
l__0E77:
	emu_ax = 0x1C;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E80); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E80:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0E8C); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_GetFrameCount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0E8C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	goto l__0ECC;
l__0E92:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x88;
	emu_push(emu_ax);
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0EAC); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0EAC:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0EB4); emu_cs = 0x0642; emu_GUI_PaletteAnimate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0EB4:
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0x3;
	goto l__0EC2;
l__0EC2:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__0EC2;
	emu_decw(&emu_si);
l__0ECC:
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) goto l__0E92;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x10);
	goto l__0F51;
l__0EDA:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x3E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EE9); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0EE9:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1D;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EF5); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0363();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0EF5:
	emu_pop(&emu_cx);
	emu_xorw(&emu_si, emu_si);
	goto l__0F34;
l__0EFA:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x88;
	emu_push(emu_ax);
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F14); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F14:
	emu_addw(&emu_sp, 0xE);
	emu_push(emu_cs); emu_push(0x0F1C); emu_cs = 0x0642; emu_GUI_PaletteAnimate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F1C:
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0x3;
	goto l__0F2A;
l__0F2A:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__0F2A;
	emu_incw(&emu_si);
l__0F34:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F3F); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_GetFrameCount();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F3F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_si);
	if ((int16)emu_ax > (int16)emu_si) goto l__0EFA;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFFEF);
	goto l__0F51;
l__0F4F:
	goto l__0F51;
l__0F51:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__0F76;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0F60); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_Unload();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F60:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x3A12) = 0x1;
	emu_push(emu_cs); emu_push(0x0F6D); emu_cs = 0x2B6C; f__2B6C_0169_001E_6939();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F6D:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0F75); emu_cs = 0x07D4; emu_Unknown_07D4_159A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__0F75:
	emu_pop(&emu_cx);
l__0F76:
	emu_cmpw(&emu_di, 0x1);
	if (emu_di != 0x1) goto l__0F80;
	emu_ax = 0x1;
	goto l__0F82;
l__0F80:
	emu_xorw(&emu_ax, emu_ax);
l__0F82:
	goto l__0D91;
l__0F85:
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
 * Decompiled function f__B4CD_1019_0011_089E()
 *
 * @name f__B4CD_1019_0011_089E
 * @implements B4CD:1019:0011:089E ()
 * @implements B4CD:102A:0009:C1E1
 * @implements B4CD:1033:000D:8FA0
 * @implements B4CD:1040:000E:8921
 * @implements B4CD:104E:0011:EE01
 * @implements B4CD:105F:000F:A93B
 * @implements B4CD:106E:000D:792A
 * @implements B4CD:1077:0004:EAB9
 * @implements B4CD:1079:0002:C2BA
 * @implements B4CD:107B:0005:A97A
 * @implements B4CD:1080:0006:F7CE
 *
 * Called From: 34CD:0089:0005:0000
 */
void f__B4CD_1019_0011_089E()
{
l__1019:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x102A); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__102A:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1033); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1033:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x1040); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1040:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax > emu_di) goto l__1077;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x104E); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__104E:
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0xF);
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax <= emu_di) goto l__1077;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x105F); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__105F:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__1077;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x39FC));
	emu_push(emu_cs); emu_push(0x106E); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__106E:
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0xA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax > emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__107B;
l__1077:
	emu_xorw(&emu_ax, emu_ax);
l__1079:
	goto l__1080;
l__107B:
	emu_ax = 0x1;
	goto l__1079;
l__1080:
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
 * Decompiled function f__B4CD_1086_0040_F11C()
 *
 * @name f__B4CD_1086_0040_F11C
 * @implements B4CD:1086:0040:F11C ()
 * @implements B4CD:10C6:0003:DB9A
 * @implements B4CD:10C7:0002:D0BA
 * @implements B4CD:10C9:0019:CA1D
 * @implements B4CD:10E2:0002:B13A
 * @implements B4CD:10E4:0006:4C29
 * @implements B4CD:10EA:0004:DE52
 *
 * Called From: 34CD:00C0:0005:0000
 * Called From: B4CD:02EA:0007:65F9
 * Called From: B4CD:02EA:000B:4349
 * Called From: B4CD:1B30:000D:E672
 */
void f__B4CD_1086_0040_F11C()
{
l__1086:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_si, 0x1000);
	if ((int16)emu_si >= (int16)0x1000) goto l__10E4;
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ah = 0x0;
	emu_decw(&emu_ax);
	emu_di = emu_ax;
	emu_orw(&emu_di, emu_di);
	if ((emu_flags.sf != emu_flags.of)) goto l__10E4;
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x10) == 0) goto l__10C9;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x10C6); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__10C6:
	emu_pop(&emu_cx);
l__10C7:
	goto l__10EA;
l__10C9:
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x20);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x20) == 0) goto l__10E4;
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x10E2); emu_cs = 0x1082; emu_Structure_Get_ByIndex();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__10E2:
	goto l__10C6;
l__10E4:
	emu_xorw(&emu_dx, emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__10C7;
l__10EA:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4CD_1269_0019_A3E5()
 *
 * @name f__B4CD_1269_0019_A3E5
 * @implements B4CD:1269:0019:A3E5 ()
 * @implements B4CD:127D:0005:DC8B
 * @implements B4CD:127F:0003:DD1F
 * @implements B4CD:1282:0041:6812
 * @implements B4CD:12C1:0002:9D3A
 * @implements B4CD:12C3:0006:BB3C
 * @implements B4CD:12C9:0009:C1E1
 * @implements B4CD:12D2:001B:74F7
 * @implements B4CD:12EB:0002:883A
 * @implements B4CD:12ED:0017:38A6
 * @implements B4CD:1304:0009:9EC8
 * @implements B4CD:130D:0008:0671
 * @implements B4CD:1315:0008:9A3D
 * @implements B4CD:131D:0030:3072
 * @implements B4CD:1348:0005:7FBE
 * @implements B4CD:134D:000A:D12D
 * @implements B4CD:1357:000A:7128
 * @implements B4CD:1361:000C:8CAD
 * @implements B4CD:136D:000C:71AB
 * @implements B4CD:1379:0008:92A7
 * @implements B4CD:1381:0006:F7CE
 *
 * Called From: 34CD:00CA:0005:0000
 * Called From: B4CD:04A5:0008:A0B3
 * Called From: B4CD:08CC:0013:109B
 */
void f__B4CD_1269_0019_A3E5()
{
l__1269:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1282;
l__127D:
	emu_xorw(&emu_ax, emu_ax);
l__127F:
	goto l__1381;
l__1282:
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x8) == 0) goto l__12C3;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39F2));
	if (emu_ax <= emu_get_memory16(emu_ds, 0x00, 0x39F2)) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39F2);
		emu_subw(&emu_ax, 0x10);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
		if (emu_ax <= emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__12C3;
	}
l__12C1:
	goto l__127D;
l__12C3:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x12C9); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__12C9:
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x12D2); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__12D2:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) >= (int16)0x0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x40);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x40) {
			emu_orw(&emu_di, emu_di);
			if (!(emu_flags.sf != emu_flags.of)) {
				emu_cmpw(&emu_di, 0x40);
				if ((int16)emu_di < (int16)0x40) goto l__12ED;
			}
		}
	}
l__12EB:
	goto l__127D;
l__12ED:
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x1304); emu_cs = 0x07D4; emu_Unknown_07D4_02F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1304:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x130D); emu_Unit_Get_ByPackedTile();
l__130D:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1315); emu_cs = 0x1423; f__1423_08CD_0012_0004();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1315:
	emu_addw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x131D); emu_Structure_Get_ByPackedTile();
l__131D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_al = 0x1;
		emu_cl = emu_get_memory8(emu_ss, emu_bp,  0x8);
		emu_shlb(&emu_al, emu_cl);
		emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x8), 0x1);
		if (emu_get_memory16(emu_ss, emu_bp,  0x8) == 0x1) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
			emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), 0x8);
		}
	}
l__1348:
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x134D); f__B4CD_1387_002A_D695();
l__134D:
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1357); f__B4CD_1387_002A_D695();
l__1357:
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	emu_decw(&emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1361); f__B4CD_1387_002A_D695();
l__1361:
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0xFFC0);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x136D); f__B4CD_1387_002A_D695();
l__136D:
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x40);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1379); f__B4CD_1387_002A_D695();
l__1379:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	goto l__127F;
l__1381:
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
 * Decompiled function f__B4CD_1387_002A_D695()
 *
 * @name f__B4CD_1387_002A_D695
 * @implements B4CD:1387:002A:D695 ()
 * @implements B4CD:13B1:0031:0880
 * @implements B4CD:13E2:0009:91DC
 * @implements B4CD:13EB:0016:BAD0
 * @implements B4CD:1401:000C:A8AF
 * @implements B4CD:140D:0028:D1A8
 * @implements B4CD:1429:000C:5200
 * @implements B4CD:1435:0041:6709
 * @implements B4CD:145B:001B:2DF2
 * @implements B4CD:145E:0018:DC12
 * @implements B4CD:1464:0012:772A
 * @implements B4CD:1476:0008:0671
 * @implements B4CD:147E:0043:D5C5
 * @implements B4CD:1481:0040:C694
 * @implements B4CD:149A:0027:F865
 * @implements B4CD:14C1:0009:B383
 * @implements B4CD:14C4:0006:F7CE
 *
 * Called From: B4CD:134A:0005:7FBE
 * Called From: B4CD:134A:0030:3072
 * Called From: B4CD:1354:000A:D12D
 * Called From: B4CD:135E:000A:7128
 * Called From: B4CD:136A:000C:8CAD
 * Called From: B4CD:1376:000C:71AB
 */
void f__B4CD_1387_002A_D695()
{
l__1387:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_andw(&emu_di, 0xFFF);
	emu_xorw(&emu_si, emu_si);
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x8) != 0) goto l__13B1;
	emu_si = 0xF;
	goto l__1464;
l__13B1:
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_si = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38BC), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x38BC) != 0x0) goto l__13E2;
	emu_cmpw(&emu_si, emu_get_memory16(emu_ds, 0x00, 0x39F2));
	if (emu_si > emu_get_memory16(emu_ds, 0x00, 0x39F2)) { /* Unresolved jump */ emu_ip = 0x13DF; emu_last_cs = 0xB4CD; emu_last_ip = 0x13D3; emu_last_length = 0x0031; emu_last_crc = 0x0880; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39F2);
	emu_subw(&emu_ax, 0xF);
	emu_cmpw(&emu_ax, emu_si);
	if (emu_ax <= emu_si) goto l__13E2;
	goto l__14C4;
l__13E2:
	emu_xorw(&emu_si, emu_si);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__145E;
l__13EB:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2566));
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1401); emu_cs = 0x0F3F; emu_Tile_GetPackX();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__1401:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x140D); emu_cs = 0x0F3F; emu_Tile_GetPackY();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__140D:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) >= (int16)0x0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x40);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) < (int16)0x40) {
			emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
			if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x8) >= (int16)0x0) {
				emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x40);
				if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x8) < (int16)0x40) goto l__1435;
			}
		}
	}
l__1429:
	emu_ax = 0x1;
	emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_shlw(&emu_ax, emu_cl);
	emu_orw(&emu_si, emu_ax);
	goto l__145B;
l__1435:
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, emu_bx, 0x2566));
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_testb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if ((emu_get_memory8(emu_es, emu_bx, 0x2) & 0x8) == 0) {
		emu_ax = 0x1;
		emu_cl = emu_get_memory8(emu_ss, emu_bp, -0x2);
		emu_shlw(&emu_ax, emu_cl);
		emu_orw(&emu_si, emu_ax);
	}
l__145B:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__145E:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x4);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x4) goto l__13EB;
l__1464:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) goto l__149A;
	emu_cmpw(&emu_si, 0xF);
	if (emu_si == 0xF) goto l__1481;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x1476); emu_Unit_Get_ByPackedTile();
l__1476:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x147E); emu_cs = 0x1423; f__1423_08CD_0012_0004();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34CD) { overlay(0x34CD, 1); }
l__147E:
	emu_addw(&emu_sp, 0x6);
l__1481:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_si;
	emu_shlw(&emu_ax, 0x1);
	emu_addw(&emu_bx, emu_ax);
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x0);
l__149A:
	emu_ax = emu_si;
	emu_andw(&emu_ax, 0x7F);
	emu_dx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x1), 0x1);
	emu_shlb(&emu_al, 0x1);
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x1), emu_al);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_di);
	emu_push(emu_cs);
	emu_push(0x14C1); emu_Map_Update();
l__14C1:
	emu_addw(&emu_sp, 0x6);
l__14C4:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
