/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function emu_InGame_Numpad_Move()
 *
 * @name emu_InGame_Numpad_Move
 * @implements 0642:0481:0010:36A4 ()
 * @implements 0642:0491:0018:2263
 * @implements 0642:049A:000F:4EEF
 * @implements 0642:04A9:0004:25FB
 * @implements 0642:04AD:0009:B95F
 * @implements 0642:04B6:0003:D29A
 * @implements 0642:04BD:0005:B5FA
 * @implements 0642:04C2:0005:E87A
 * @implements 0642:04C7:0004:E3B9
 * @implements 0642:04CB:0005:8CFA
 * @implements 0642:04D0:0005:B37A
 * @implements 0642:04D5:0005:91FA
 * @implements 0642:04DA:0005:D47A
 * @implements 0642:04DF:0009:1090
 * @implements 0642:04E2:0006:13CC
 * @implements 0642:04E8:0002:A63A
 * @implements 0642:04EA:0002:C03A
 * @implements 0642:04EC:0005:8BCF
 *
 * Called From: 0642:03AB:0009:BE77
 */
void emu_InGame_Numpad_Move()
{
l__0481:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0491;
	goto l__04EC;
l__0491:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_si;
	emu_cx = 0x1A;
	emu_bx = 0x4F1;
l__049A:
	emu_ax = emu_get_memory16(emu_cs, emu_bx, 0x0);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__04A9;
	emu_addw(&emu_bx, 0x2);
	if (--emu_cx != 0) goto l__049A;
	goto l__04EA;
l__04A9:

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x34);
	switch (emu_ip) {
		case 0x04AD: goto l__04AD;
		case 0x04BD: goto l__04BD;
		case 0x04C2: goto l__04C2;
		case 0x04C7: goto l__04C7;
		case 0x04CB: goto l__04CB;
		case 0x04D0: goto l__04D0;
		case 0x04D5: goto l__04D5;
		case 0x04DA: goto l__04DA;
		case 0x04DF: goto l__04DF;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0x0642; emu_last_ip = 0x04A9; emu_last_length = 0x0004; emu_last_crc = 0x25FB;
			emu_call();
			return;
	}
l__04AD:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x04B6); emu_Map_SelectNext();
l__04B6:
	emu_pop(&emu_cx);
	goto l__04EC;
l__04BD:
	emu_ax = 0x6;
	goto l__04E2;
l__04C2:
	emu_ax = 0x2;
	goto l__04E2;
l__04C7:
	emu_xorw(&emu_ax, emu_ax);
	goto l__04E2;
l__04CB:
	emu_ax = 0x4;
	goto l__04E2;
l__04D0:
	emu_ax = 0x7;
	goto l__04E2;
l__04D5:
	emu_ax = 0x5;
	goto l__04E2;
l__04DA:
	emu_ax = 0x1;
	goto l__04E2;
l__04DF:
	emu_ax = 0x3;
l__04E2:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04E8); emu_cs = 0x0F78; emu_Map_MoveDirection();
l__04E8:
	goto l__04B6;
l__04EA:
	goto l__04EC;
l__04EC:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_GUI_PaletteAnimate()
 *
 * @name emu_GUI_PaletteAnimate
 * @implements 0642:0559:0027:3560 ()
 * @implements 0642:0574:000C:4D0E
 * @implements 0642:0580:000C:CC3D
 * @implements 0642:058C:002B:2BAE
 * @implements 0642:058F:0028:2879
 * @implements 0642:0591:0026:A299
 * @implements 0642:05B7:0010:2CA3
 * @implements 0642:05C7:0031:5A24
 * @implements 0642:05E8:0010:FCFE
 * @implements 0642:05F8:000B:A38F
 * @implements 0642:0603:000A:C012
 * @implements 0642:060D:0015:23C1
 * @implements 0642:0622:0018:8149
 * @implements 0642:063A:0018:8149
 * @implements 0642:0652:0018:8149
 * @implements 0642:066A:0016:3765
 * @implements 0642:0680:001C:6279
 * @implements 0642:069C:000F:7F87
 * @implements 0642:06AB:0013:48D9
 * @implements 0642:06B1:000D:A409
 * @implements 0642:06BE:0040:399F
 * @implements 0642:06D4:002A:1932
 * @implements 0642:06E9:0015:23A1
 * @implements 0642:06FE:0018:8129
 * @implements 0642:0716:0016:04B0
 * @implements 0642:072C:0013:43D9
 * @implements 0642:0732:000D:A409
 * @implements 0642:073F:001B:0AF9
 * @implements 0642:0755:0005:2EF2
 * @implements 0642:075A:0003:2E57
 *
 * Called From: 0642:01AA:0005:F82B
 * Called From: 0642:01AA:0006:9C2A
 * Called From: 10E4:0483:0005:1765
 * Called From: 10E4:0496:0005:1765
 * Called From: B495:0098:0005:1765
 * Called From: B495:0098:0007:73D6
 * Called From: B495:07A4:0006:7364
 * Called From: B4B8:20BB:0005:1765
 * Called From: B4B8:20BB:0023:32FB
 * Called From: B4CD:0EAF:0008:ADED
 * Called From: B4CD:0F17:0008:ADED
 * Called From: B4DA:0C1B:0009:2F5C
 * Called From: B4F2:02A2:0005:1765
 * Called From: B4F2:02A2:0007:73D6
 * Called From: B4F2:048B:0005:1765
 * Called From: B4F2:048B:0007:73D6
 * Called From: B4F2:068C:0005:1765
 * Called From: B4F2:068C:0008:8DED
 * Called From: B4F2:1163:0005:1765
 * Called From: B4F2:1163:0007:EB00
 * Called From: B511:0F7E:0009:0F5C
 * Called From: B511:1142:000A:C086
 */
void emu_GUI_PaletteAnimate()
{
l__0559:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_xorw(&emu_si, emu_si);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x31D0);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x31CE);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__05E8;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__05E8;
	}
l__0574:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B2) == 0x0) goto l__0580;
	emu_si = 0xF;
	goto l__0591;
l__0580:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x31D2), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x31D2) == 0x0) goto l__058C;
	emu_ax = 0x6;
	goto l__058F;
l__058C:
	emu_ax = 0xF;
l__058F:
	emu_si = emu_ax;
l__0591:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_dx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_ax, 0x2CD);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x05B7); emu_cs = 0x01F7; emu_Tools_Memcopy();
l__05B7:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x05C7); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
l__05C7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x31D2);
	emu_negw(&emu_ax, emu_ax);
	emu_sbbw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
	emu_get_memory16(emu_ds, 0x00, 0x31D2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x3C);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x31D0) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x31CE) = emu_dx;
l__05E8:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x31CC);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x31CA);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__05F8;
	goto l__06D4;
l__05F8:
	if ((emu_flags.sf != emu_flags.of)) goto l__0603;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (emu_dx < emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0603;
	goto l__06D4;
l__0603:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) != 0x0) goto l__060D;
	goto l__06D4;
l__060D:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D4));
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0622); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
l__0622:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D4));
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x063A); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
l__063A:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D4));
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0652); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
l__0652:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D4));
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x066A); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
l__066A:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x31D4), 0xD);
		if (emu_get_memory16(emu_ds, 0x00, 0x31D4) == 0xD) goto l__0680;
		emu_get_memory16(emu_ds, 0x00, 0x31D4) = 0xD;
	}
	goto l__06B1;
l__0680:
	emu_get_memory16(emu_ds, 0x00, 0x31D4) = 0xF;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), 0x2);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) == 0x2) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38EC), 0x0);
		if (emu_get_memory16(emu_ds, 0x00, 0x38EC) != 0x0) goto l__069C;
		emu_get_memory16(emu_ds, 0x00, 0x31D4) = 0x6;
	}
	goto l__06B1;
l__069C:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38EC), 0x0);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x38EC) >= (int16)0x0) goto l__06AB;
	emu_get_memory16(emu_ds, 0x00, 0x31D4) = 0x5;
	goto l__06B1;
l__06AB:
	emu_get_memory16(emu_ds, 0x00, 0x31D4) = 0xF;
l__06B1:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x06BE); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
l__06BE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x3);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x31CC) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x31CA) = emu_dx;
l__06D4:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x31C8);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x31C6);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0755;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0755;
	}
l__06E9:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D6));
	emu_ax = 0xDF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x06FE); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
l__06FE:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x31D6));
	emu_ax = 0xDF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0716); emu_cs = 0x2BA5; f__2BA5_00A2_0052_DEE3();
l__0716:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x31D6), 0xC);
		if (emu_get_memory16(emu_ds, 0x00, 0x31D6) == 0xC) goto l__072C;
		emu_get_memory16(emu_ds, 0x00, 0x31D6) = 0xC;
	}
	goto l__0732;
l__072C:
	emu_get_memory16(emu_ds, 0x00, 0x31D6) = 0xA;
l__0732:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x073F); emu_cs = 0x259E; f__259E_0040_0015_5E4A();
l__073F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x5);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x31C8) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x31C6) = emu_dx;
l__0755:
	emu_push(emu_cs); emu_push(0x075A); emu_cs = 0x3483; overlay(0x3483, 0); emu_Unknown_B483_0470();
l__075A:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function emu_Map_SelectNext()
 *
 * @name emu_Map_SelectNext
 * @implements 0642:07BE:0058:A125 ()
 * @implements 0642:0816:0008:D758
 * @implements 0642:081E:0014:04BF
 * @implements 0642:0830:0002:DCBA
 * @implements 0642:0832:0009:6093
 * @implements 0642:083B:0017:7C4F
 * @implements 0642:0852:0008:D758
 * @implements 0642:085A:0024:646E
 * @implements 0642:086B:0013:5F86
 * @implements 0642:087E:0006:D736
 * @implements 0642:0884:0020:E43F
 * @implements 0642:08A4:0010:1761
 * @implements 0642:08B4:0008:D758
 * @implements 0642:08BC:0008:77BC
 * @implements 0642:08C4:005F:F325
 * @implements 0642:08EE:0035:D9D4
 * @implements 0642:090E:0015:704F
 * @implements 0642:0923:0012:1D2E
 * @implements 0642:0935:001E:6A29
 * @implements 0642:0948:000B:799F
 * @implements 0642:0953:0013:9D60
 * @implements 0642:0955:0011:D656
 * @implements 0642:0966:0013:3054
 * @implements 0642:0979:0006:D72E
 * @implements 0642:097F:0010:1771
 * @implements 0642:098F:0008:D758
 * @implements 0642:0997:0008:77BC
 * @implements 0642:099F:005F:F7A1
 * @implements 0642:09C9:0035:F510
 * @implements 0642:09E9:0015:544F
 * @implements 0642:09FE:0012:1D6C
 * @implements 0642:0A10:001E:01FB
 * @implements 0642:0A23:000B:166D
 * @implements 0642:0A2E:0013:852A
 * @implements 0642:0A30:0011:CE1C
 * @implements 0642:0A41:005E:95AC
 * @implements 0642:0A55:004A:C310
 * @implements 0642:0A69:0036:D301
 * @implements 0642:0A7D:0022:6FD3
 * @implements 0642:0A91:000E:6603
 * @implements 0642:0AA5:001E:3662
 * @implements 0642:0AC3:0008:4AB0
 * @implements 0642:0ACB:0007:F77C
 * @implements 0642:0ACC:0006:F7CE
 *
 * Called From: 0642:04B3:0009:B95F
 */
void emu_Map_SelectNext()
{
l__07BE:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x1C);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xE) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = 0x0;
	emu_xorw(&emu_si, emu_si);
	emu_xorw(&emu_di, emu_di);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax == 0) goto l__0832;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0816); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0816:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x081E); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1019_0011_089E();
l__081E:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0C);
		emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
		emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	}
l__0830:
	goto l__086B;
l__0832:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A02));
	emu_push(emu_cs); emu_push(0x083B); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Structure_Get_ByPackedTile();
l__083B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0852); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0852:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x085A); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1019_0011_089E();
l__085A:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
		emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	}
l__086B:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x087E); emu_cs = 0x0FE4; emu_Unit_FindFirst();
l__087E:
	emu_addw(&emu_sp, 0x8);
	goto l__0955;
l__0884:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x400);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x400) != 0) goto l__08A4;
	goto l__0948;
l__08A4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x08B4); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__08B4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08BC); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1019_0011_089E();
l__08BC:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__08C4;
	goto l__0948;
l__08C4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_dx = 0x1;
	emu_cl = emu_get_memory8(emu_ds, 0x00, 0x3A38);
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) == 0) goto l__0948;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_dx;
	}
l__08EE:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	}
l__090E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__0923;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_dx != emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__0923;
	emu_si = 0x1;
	goto l__0948;
l__0923:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0935;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	goto l__0948;
l__0935:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
		emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
		emu_di = 0x1;
	}
l__0948:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0953); emu_cs = 0x0FE4; emu_Unit_FindNext();
l__0953:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0955:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__0966;
	goto l__0884;
l__0966:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0979); emu_cs = 0x1082; emu_Structure_FindFirst();
l__0979:
	emu_addw(&emu_sp, 0x8);
	goto l__0A30;
l__097F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x098F); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__098F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0997); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_1019_0011_089E();
l__0997:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__099F;
	goto l__0A23;
l__099F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_dx = 0x1;
	emu_cl = emu_get_memory8(emu_ds, 0x00, 0x3A38);
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) == 0) goto l__0A23;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x16));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
		emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_dx;
	}
l__09C9:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
		emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	}
l__09E9:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x6)) goto l__09FE;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x8));
	if (emu_dx != emu_get_memory16(emu_ss, emu_bp, -0x8)) goto l__09FE;
	emu_si = 0x1;
	goto l__0A23;
l__09FE:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0A10;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	goto l__0A23;
l__0A10:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
		emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
		emu_di = 0x1;
	}
l__0A23:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0A2E); emu_cs = 0x1082; emu_Structure_FindNext();
l__0A2E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0A30:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__0A41;
	goto l__097F;
l__0A41:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x1C);
		emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	}
l__0A55:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x18);
		emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	}
l__0A69:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x14);
		emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_dx;
	}
l__0A7D:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (emu_ax == 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
		emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
		emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	}
l__0A91:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) == 0x0) { /* Unresolved jump */ emu_ip = 0x0A9F; emu_last_cs = 0x0642; emu_last_ip = 0x0A95; emu_last_length = 0x000E; emu_last_crc = 0x6603; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x14);
	goto l__0AA5;
l__0AA5:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax == 0) goto l__0ACC;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0AC3); emu_cs = 0x0F3F; emu_Tile_PackTile();
l__0AC3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0ACB); emu_cs = 0x0F78; emu_Map_SetSelection();
l__0ACB:
	emu_pop(&emu_cx);
l__0ACC:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
