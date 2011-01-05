/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__06F7_0602_0018_CEB0()
 *
 * @name f__06F7_0602_0018_CEB0
 * @implements 06F7:0602:0018:CEB0 ()
 * @implements 06F7:061A:000B:03AD
 * @implements 06F7:0625:0010:F195
 * @implements 06F7:0635:0027:82B9
 * @implements 06F7:065C:0066:DC6B
 * @implements 06F7:0674:004E:37CC
 * @implements 06F7:06AF:0013:D2D5
 * @implements 06F7:06C2:0042:731D
 * @implements 06F7:06C5:003F:D13B
 * @implements 06F7:06EA:001A:BE2E
 * @implements 06F7:06FB:0009:139B
 * @implements 06F7:06FC:0008:13B8
 * @implements 06F7:0704:0009:7D17
 * @implements 06F7:070D:0006:F7CE
 *
 * Called From: 07D4:0044:0015:CB18
 * Called From: 07D4:0044:0005:E72D
 */
void f__06F7_0602_0018_CEB0()
{
l__0602:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3210);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x320E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__061A;
	goto l__0704;
l__061A:
	if (!emu_flags.zf) goto l__0625;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (emu_dx <= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0625;
	goto l__0704;
l__0625:
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x320E), 0x2710);
	emu_adcw(&emu_get_memory16(emu_ds, 0x00, 0x3210), 0x0);
	emu_xorw(&emu_si, emu_si);
	goto l__06FC;
l__0635:
	emu_ax = emu_si;
	emu_dx = 0x14;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x395C);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x395A);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_bx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if (emu_ax != 0) goto l__065C;
	goto l__06FB;
l__065C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__06C5;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__06C5;
	}
l__0674:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0x9));
	emu_ah = 0x0;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_andw(&emu_ax, 0xFFF);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cl = 0xC;
	emu_shrw(&emu_ax, emu_cl);
	emu_andw(&emu_ax, 0xF);
	emu_di = emu_ax;
	emu_cmpw(&emu_di, 0xE);
	if ((int16)emu_di > (int16)0xE) {
		emu_di = 0xE;
	}
l__06AF:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_bx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_bx, emu_cl);

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_ds, emu_bx, 0x3262);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_ds, emu_bx, 0x3264);
	emu_push(0x06C2);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x06F70713: f__06F7_0713_0011_15A5(); break;
		case 0x06F7072B: f__06F7_072B_0018_F05F(); break;
		case 0x06F708BD: f__06F7_08BD_0016_9292(); break;
		case 0x06F708DD: f__06F7_08DD_0013_C78B(); break;
		case 0x06F70913: f__06F7_0913_0013_C78B(); break;
		case 0x06F70967: f__06F7_0967_0014_1157(); break;
		case 0x06F70A27: f__06F7_0A27_001D_1D75(); break;
		case 0x06F70A6C: f__06F7_0A6C_0016_FA05(); break;
		case 0x06F70AC1: f__06F7_0AC1_001F_55CB(); break;
		case 0x06F70AE2: f__06F7_0AE2_0010_0B2F(); break;
		case 0x06F70B14: f__06F7_0B14_0024_BD9C(); break;
		case 0x06F70B42: f__06F7_0B42_0024_BD9D(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x06F7; emu_last_ip = 0x06BE; emu_last_length = 0x0013; emu_last_crc = 0xD2D5;
			emu_call();
			return;
	}
l__06C2:
	emu_addw(&emu_sp, 0x6);
l__06C5:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if (emu_ax == 0) goto l__06FB;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3210));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x3210)) goto l__06FB;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x3210)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x320E));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x320E)) goto l__06FB;
	}
l__06EA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x3210) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x320E) = emu_dx;
l__06FB:
	emu_incw(&emu_si);
l__06FC:
	emu_cmpw(&emu_si, 0x20);
	if ((int16)emu_si >= (int16)0x20) goto l__0704;
	goto l__0635;
l__0704:
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3210);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x320E);
	goto l__070D;
l__070D:
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
 * Decompiled function f__06F7_0713_0011_15A5()
 *
 * @name f__06F7_0713_0011_15A5
 * @implements 06F7:0713:0011:15A5 ()
 * @implements 06F7:0724:0005:84EE
 * @implements 06F7:0729:0002:2597
 *
 * Called From: 06F7:06BE:0066:DC6B
 */
void f__06F7_0713_0011_15A5()
{
l__0713:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0724); f__06F7_0A6C_0016_FA05();
l__0724:
	emu_addw(&emu_sp, 0x6);
	goto l__0729;
l__0729:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_072B_0018_F05F()
 *
 * @name f__06F7_072B_0018_F05F
 * @implements 06F7:072B:0018:F05F ()
 * @implements 06F7:0743:000A:CA6A
 * @implements 06F7:074D:000A:5E83
 * @implements 06F7:0752:0005:1C2C
 * @implements 06F7:0754:0003:1DB8
 * @implements 06F7:0757:0006:16E4
 * @implements 06F7:075D:000C:C42B
 * @implements 06F7:0769:0008:8987
 * @implements 06F7:076F:0002:B0BA
 * @implements 06F7:0771:0006:16E4
 * @implements 06F7:0777:003A:CADB
 * @implements 06F7:07B1:0009:52A9
 * @implements 06F7:07B4:0006:16E4
 * @implements 06F7:07BA:001E:E1E4
 * @implements 06F7:07D8:002A:42DA
 * @implements 06F7:0802:0036:B153
 * @implements 06F7:0833:0005:517D
 * @implements 06F7:0838:0007:6C78
 * @implements 06F7:083F:0018:1886
 * @implements 06F7:084D:000A:9737
 * @implements 06F7:0857:0024:722A
 * @implements 06F7:0880:002E:5B22
 * @implements 06F7:08AE:0009:8640
 * @implements 06F7:08B7:0006:F7CE
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_072B_0018_F05F()
{
l__072B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x0743); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0743:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x074D); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_IsPositionUnveiled();
l__074D:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0757;
l__0752:
	emu_xorw(&emu_ax, emu_ax);
l__0754:
	goto l__08B7;
l__0757:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x075D); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_B4CD_0750();
l__075D:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xD);
	if (emu_ax == 0xD) goto l__076F;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0769); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_B4CD_0750();
l__0769:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xC);
	if (emu_ax != 0xC) goto l__0771;
l__076F:
	goto l__0752;
l__0771:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0777); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_B4CD_0750();
l__0777:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0xA);
	if (emu_ax != 0xA) goto l__07B4;
	emu_bx = emu_si;
	emu_shlw(&emu_bx, 0x1);
	emu_ax = 0x2E9C;
	emu_es = emu_ax;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x323F);
	emu_andw(&emu_ax, 0x7FFF);
	emu_andw(&emu_ax, 0x1FF);
	emu_dx = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x07B1); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_Update();
l__07B1:
	emu_addw(&emu_sp, 0x6);
l__07B4:
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x07BA); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_B4CD_0750();
l__07BA:
	emu_pop(&emu_cx);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_bx = emu_get_memory16(emu_ds, emu_bx, 0x3A52);
	emu_shlw(&emu_bx, 0x1);
	emu_ax = emu_get_memory16(emu_ds, emu_bx, 0x329E);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0xFFFF);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0xFFFF) goto l__07D8;
	goto l__0752;
l__07D8:
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_shrw(&emu_ax, 0x1);
	emu_andw(&emu_ax, 0x7F);
	emu_di = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x39F2);
	emu_subw(&emu_ax, 0x10);
	emu_cmpw(&emu_ax, emu_di);
	if (emu_ax >= emu_di) goto l__0802;
	emu_cmpw(&emu_di, emu_get_memory16(emu_ds, 0x00, 0x39F2));
	if (emu_di > emu_get_memory16(emu_ds, 0x00, 0x39F2)) goto l__0802;
	goto l__0752;
l__0802:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_shlw(&emu_ax, 0x1);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x39F0);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x39EE);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_bx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_di);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) <= emu_di) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xA), emu_di);
		if (emu_get_memory16(emu_es, emu_bx, 0xA) >= emu_di) goto l__083F;
	}
l__0833:
	emu_push(emu_cs); emu_push(0x0838); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__0838:
	emu_andw(&emu_ax, 0x1);
	emu_di = emu_ax;
	goto l__084D;
l__083F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_subw(&emu_di, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_cmpw(&emu_di, 0x4);
	if (emu_di < 0x4) {
		emu_addw(&emu_di, 0x2);
	}
l__084D:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0857); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0AFA_0011_D5DB();
l__0857:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_si;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_andw(&emu_ax, 0x1FF);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39F4));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x39F4)) goto l__0880;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_push(emu_si);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x087B); emu_cs = 0x34CD; emu_ip = 0x0093; emu_last_cs = 0x06F7; emu_last_ip = 0x0876; emu_last_length = 0x0024; emu_last_crc = 0x722A; emu_call();
	/* Unresolved jump */ emu_ip = 0x087B; emu_last_cs = 0x06F7; emu_last_ip = 0x087B; emu_last_length = 0x0024; emu_last_crc = 0x722A; emu_call();
l__0880:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_di;
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_andw(&emu_ax, 0x7F);
	emu_dx = emu_si;
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
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x08AE); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_Update();
l__08AE:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__0754;
l__08B7:
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
 * Decompiled function f__06F7_08BD_0016_9292()
 *
 * @name f__06F7_08BD_0016_9292
 * @implements 06F7:08BD:0016:9292 ()
 * @implements 06F7:08D3:0008:4F72
 * @implements 06F7:08DB:0002:2597
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_08BD_0016_9292()
{
l__08BD:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x08D3); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
l__08D3:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__08DB;
l__08DB:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_08DD_0013_C78B()
 *
 * @name f__06F7_08DD_0013_C78B
 * @implements 06F7:08DD:0013:C78B ()
 * @implements 06F7:08F0:0008:9754
 * @implements 06F7:08F8:0013:E47B
 * @implements 06F7:090B:0006:B1FB
 * @implements 06F7:090C:0005:D5FA
 * @implements 06F7:0911:0002:2597
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_08DD_0013_C78B()
{
l__08DD:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x08F0); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__08F0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08F8); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_IsPositionUnveiled();
l__08F8:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__090C;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x66E0);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x66E2);
	emu_push(0x090B);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A61200: f__22A6_1200_007B_0356(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x06F7; emu_last_ip = 0x0906; emu_last_length = 0x0013; emu_last_crc = 0xE47B;
			emu_call();
			return;
	}
l__090B:
	emu_pop(&emu_cx);
l__090C:
	emu_ax = 0x1;
	goto l__0911;
l__0911:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0913_0013_C78B()
 *
 * @name f__06F7_0913_0013_C78B
 * @implements 06F7:0913:0013:C78B ()
 * @implements 06F7:0926:002C:6E65
 * @implements 06F7:0952:0008:7759
 * @implements 06F7:095A:0006:8C70
 * @implements 06F7:095E:0002:C2BA
 * @implements 06F7:0960:0005:A97A
 * @implements 06F7:0965:0002:2597
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0913_0013_C78B()
{
l__0913:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x0926); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0926:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_andw(&emu_ax, 0x1FF);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x39F4));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x39F4)) goto l__0960;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x0952); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0952:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x095A); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_14CA_0013_F579();
l__095A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
l__095E:
	goto l__0965;
l__0960:
	emu_ax = 0x1;
	goto l__095E;
l__0965:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0967_0014_1157()
 *
 * @name f__06F7_0967_0014_1157
 * @implements 06F7:0967:0014:1157 ()
 * @implements 06F7:097B:000A:7A65
 * @implements 06F7:0985:0026:4BF5
 * @implements 06F7:09AB:000F:C67F
 * @implements 06F7:09BA:0013:714D
 * @implements 06F7:09CD:0018:609B
 * @implements 06F7:09D0:0015:D89F
 * @implements 06F7:09E5:000C:1EBD
 * @implements 06F7:09EC:0005:D5FA
 * @implements 06F7:09F1:0003:2E57
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0967_0014_1157()
{
l__0967:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x097B); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__097B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0985); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__0985:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) goto l__09EC;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x6);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x09AB); emu_cs = 0x2BB4; emu_Tools_Random_256();
l__09AB:
	emu_andw(&emu_ax, 0x1);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_dx);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x09BA); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Map_B4CD_0750();
l__09BA:
	emu_pop(&emu_cx);
	emu_dx = 0x1C;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x3A4C), 0x0);
	if (emu_get_memory16(emu_ds, emu_bx, 0x3A4C) == 0x0) goto l__09CD;
	emu_xorw(&emu_ax, emu_ax);
	goto l__09D0;
l__09CD:
	emu_ax = 0x2;
l__09D0:
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_cl = 0x4;
	emu_shlw(&emu_dx, emu_cl);
	emu_ax = 0x33C8;
	emu_addw(&emu_dx, 0x100);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x09E5); emu_cs = 0x151A; f__151A_000E_0013_5840();
l__09E5:
	emu_addw(&emu_sp, 0xE);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
	}
l__09EC:
	emu_ax = 0x1;
	goto l__09F1;
l__09F1:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0A27_001D_1D75()
 *
 * @name f__06F7_0A27_001D_1D75
 * @implements 06F7:0A27:001D:1D75 ()
 * @implements 06F7:0A44:0012:8814
 * @implements 06F7:0A56:0004:DE52
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0A27_001D_1D75()
{
l__0A27:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_si = emu_di;
	emu_testw(&emu_di, 0x800);
	if ((emu_di & 0x800) == 0) { /* Unresolved jump */ emu_ip = 0x0A3B; emu_last_cs = 0x06F7; emu_last_ip = 0x0A35; emu_last_length = 0x001D; emu_last_crc = 0x1D75; emu_call(); return; }
	emu_orw(&emu_si, 0xF000);
	emu_push(emu_si);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A44); emu_cs = 0x0F3F; emu_Tile_GetXY();
l__0A44:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x10), emu_ax);
	emu_adcw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_dx);
	emu_ax = 0x1;
	goto l__0A56;
l__0A56:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0A6C_0016_FA05()
 *
 * @name f__06F7_0A6C_0016_FA05
 * @implements 06F7:0A6C:0016:FA05 ()
 * @implements 06F7:0A82:0025:93F6
 * @implements 06F7:0AA7:0016:284C
 * @implements 06F7:0ABD:0004:893F
 *
 * Called From: 06F7:05E9:0020:AD79
 * Called From: 06F7:06BE:0013:D2D5
 * Called From: 06F7:0721:0011:15A5
 */
void f__06F7_0A6C_0016_FA05()
{
l__0A6C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x0A82); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0A82:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_andb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x7F);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AA7); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_04D9_0011_E9EF();
l__0AA7:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0xE) = 0x0;
	emu_get_memory16(emu_es, emu_bx, 0xC) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0ABD;
l__0ABD:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0AC1_001F_55CB()
 *
 * @name f__06F7_0AC1_001F_55CB
 * @implements 06F7:0AC1:001F:55CB ()
 * @implements 06F7:0AE0:0002:2597
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0AC1_001F_55CB()
{
l__0AC1:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_adcw(&emu_ax, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	emu_ax = 0x1;
	goto l__0AE0;
l__0AE0:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0AE2_0010_0B2F()
 *
 * @name f__06F7_0AE2_0010_0B2F
 * @implements 06F7:0AE2:0010:0B2F ()
 * @implements 06F7:0AF2:001F:99B5
 * @implements 06F7:0B11:0003:2E57
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0AE2_0010_0B2F()
{
l__0AE2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_push(emu_si);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AF2); emu_cs = 0x2537; emu_Tools_RandomRange();
l__0AF2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, emu_si);
	emu_adcw(&emu_ax, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory16(emu_es, emu_bx, 0x2) = emu_ax;
	emu_get_memory16(emu_es, emu_bx, 0x0) = emu_dx;
	emu_ax = 0x1;
	goto l__0B11;
l__0B11:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0B14_0024_BD9C()
 *
 * @name f__06F7_0B14_0024_BD9C
 * @implements 06F7:0B14:0024:BD9C ()
 * @implements 06F7:0B38:0008:4F72
 * @implements 06F7:0B40:0002:2597
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0B14_0024_BD9C()
{
l__0B14:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x8) = 0x0;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B38); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_04D9_0011_E9EF();
l__0B38:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__0B40;
l__0B40:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__06F7_0B42_0024_BD9D()
 *
 * @name f__06F7_0B42_0024_BD9D
 * @implements 06F7:0B42:0024:BD9D ()
 * @implements 06F7:0B66:0008:4F72
 * @implements 06F7:0B6E:0002:2597
 *
 * Called From: 06F7:06BE:0013:D2D5
 */
void f__06F7_0B42_0024_BD9D()
{
l__0B42:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_es, emu_bx, 0xA) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x8) = 0x1;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B66); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_04D9_0011_E9EF();
l__0B66:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	goto l__0B6E;
l__0B6E:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
