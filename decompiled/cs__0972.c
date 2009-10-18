/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__0972_0007_0051_7645()
 *
 * @name f__0972_0007_0051_7645
 * @implements 0972:0007:0051:7645 ()
 * @implements 0972:0038:0020:C146
 * @implements 0972:003F:0019:8B3A
 * @implements 0972:0058:004D:2870
 * @implements 0972:0070:0035:11A8
 * @implements 0972:0085:0020:DE51
 * @implements 0972:00A5:0086:1AD2
 * @implements 0972:00BD:006E:C639
 * @implements 0972:00D2:0059:A980
 * @implements 0972:00EB:0040:E14D
 * @implements 0972:0100:002B:22A3
 * @implements 0972:0119:0012:F490
 * @implements 0972:012B:0006:5385
 * @implements 0972:0131:0037:A640
 * @implements 0972:0168:0012:8AC5
 * @implements 0972:017A:0040:F4EB
 * @implements 0972:01E5:005A:6804
 * @implements 0972:023F:000C:1822
 * @implements 0972:0242:0009:920A
 * @implements 0972:024B:000F:7578
 * @implements 0972:025A:001D:88F1
 * @implements 0972:0277:006D:68DA
 * @implements 0972:02D7:000D:FA04
 * @implements 0972:02E4:000A:817C
 * @implements 0972:02EE:000C:2E19
 * @implements 0972:02F0:000A:2519
 * @implements 0972:02F8:0002:C4BA
 * @implements 0972:02FA:000C:3415
 * @implements 0972:0303:0003:9E2C
 * @implements 0972:0306:000F:7770
 * @implements 0972:0315:0011:1CBD
 * @implements 0972:0326:0012:74BB
 * @implements 0972:0338:0037:B1C0
 * @implements 0972:036F:0037:C20A
 * @implements 0972:0378:002E:1744
 * @implements 0972:03A4:0002:C53A
 * @implements 0972:03A6:000D:B949
 * @implements 0972:03B0:0003:5F81
 * @implements 0972:03B3:000F:76FF
 * @implements 0972:03C2:000E:2934
 * @implements 0972:03D0:000E:D597
 * @implements 0972:03DE:000E:2D3F
 * @implements 0972:03EC:000F:9EC1
 * @implements 0972:03FB:0025:521A
 * @implements 0972:0420:001A:C1B0
 * @implements 0972:0446:002F:A3FF
 * @implements 0972:045E:0017:5C13
 * @implements 0972:0475:0015:5CB8
 * @implements 0972:048A:0026:FEE9
 * @implements 0972:048E:0022:3628
 * @implements 0972:04B0:0020:BD61
 * @implements 0972:04BB:0015:306F
 * @implements 0972:04BD:0013:3438
 * @implements 0972:04D0:0014:1BB6
 * @implements 0972:04E4:0020:4CEA
 * @implements 0972:04E9:001B:C395
 * @implements 0972:050A:0028:2428
 * @implements 0972:0532:001D:84CA
 * @implements 0972:054F:001F:939F
 * @implements 0972:056E:0018:A8ED
 * @implements 0972:0578:000E:2802
 * @implements 0972:0586:001B:DC71
 * @implements 0972:05A1:0015:71F0
 * @implements 0972:05B6:002B:35CA
 * @implements 0972:05E1:0005:E0CA
 * @implements 0972:05E6:0005:D74A
 * @implements 0972:05EB:0005:F5CA
 * @implements 0972:05F0:0006:6F66
 * @implements 0972:05F6:000F:119B
 * @implements 0972:0605:0012:6987
 * @implements 0972:0617:0010:DEE5
 * @implements 0972:0627:000B:5D60
 * @implements 0972:0632:0004:0D12
 * @implements 0972:0633:0003:9D17
 * @implements 0972:0636:000E:0830
 * @implements 0972:0644:000D:B324
 * @implements 0972:0651:0021:1BFA
 * @implements 0972:0672:0007:CF6C
 * @implements 0972:0679:0035:CC9F
 * @implements 0972:06AE:002D:14AC
 * @implements 0972:06DB:0037:4B08
 * @implements 0972:06DC:0036:4B86
 * @implements 0972:06E1:0031:1FDA
 * @implements 0972:0712:0004:431F
 * @implements 0972:0714:0002:D83A
 * @implements 0972:0716:0025:6D67
 * @implements 0972:073B:0008:A466
 * @implements 0972:0743:0011:51C8
 * @implements 0972:0746:000E:1C8C
 * @implements 0972:0754:000F:7761
 * @implements 0972:0763:000E:A892
 * @implements 0972:0771:000E:543A
 * @implements 0972:077F:0017:5C1B
 * @implements 0972:0796:0015:5CB8
 * @implements 0972:07AB:0011:81A2
 * @implements 0972:07AF:000D:B89A
 * @implements 0972:07BC:0026:31BD
 * @implements 0972:07E2:002A:C938
 * @implements 0972:080C:0030:99D4
 * @implements 0972:0816:0026:7654
 * @implements 0972:083C:001E:CB1A
 * @implements 0972:085A:0003:CB1A
 * @implements 0972:085B:0002:C03A
 * @implements 0972:085D:0002:CABA
 * @implements 0972:085F:0024:6A5C
 * @implements 0972:0874:000F:CCB9
 * @implements 0972:0883:000F:F77A
 * @implements 0972:0892:0012:3529
 * @implements 0972:08A4:000E:8FFB
 * @implements 0972:08B2:0038:5CE7
 * @implements 0972:08EA:0005:A1EE
 * @implements 0972:08EF:002F:F6E4
 * @implements 0972:091E:0017:403F
 * @implements 0972:0935:000C:9815
 * @implements 0972:0938:0009:11BD
 * @implements 0972:0941:000E:E81A
 * @implements 0972:094F:0010:E581
 * @implements 0972:095F:0009:7794
 * @implements 0972:0968:005A:5668
 * @implements 0972:097B:0047:4D03
 * @implements 0972:09B2:0010:1586
 * @implements 0972:09C2:0009:F797
 * @implements 0972:09CB:0010:1586
 * @implements 0972:09DB:0009:37AE
 * @implements 0972:09E4:0010:1586
 * @implements 0972:09F4:0008:D04F
 * @implements 0972:09FC:0002:DE3A
 * @implements 0972:09FE:001C:5B8B
 * @implements 0972:0A1A:001D:C13E
 * @implements 0972:0A37:0005:80EE
 * @implements 0972:0A3A:0002:C43A
 * @implements 0972:0A3C:0012:2599
 * @implements 0972:0A44:000A:DEF0
 * @implements 0972:0A4E:0015:9677
 * @implements 0972:0A50:0013:04BA
 * @implements 0972:0A63:0006:F7CE
 *
 * Called From: 0642:03C7:0005:F04C
 */
void f__0972_0007_0051_7645()
{
l__0007:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x1C);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3420);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x341E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__003F;
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx <= emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__003F;
	}
	goto l__0038;
l__0038:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37AC), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37AC) == 0x0) goto l__0070;
	goto l__003F;
l__003F:
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x1;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x3C;
	emu_push(emu_ax);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_ax = 0x1E;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0058); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	goto l__0058;
l__0058:
	emu_addw(&emu_sp, 0x8);
	emu_cwd();
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_cx, emu_ax);
	emu_adcw(&emu_bx, emu_dx);
	emu_get_memory16(emu_ds, 0x00, 0x3420) = emu_bx;
	emu_get_memory16(emu_ds, 0x00, 0x341E) = emu_cx;
	goto l__0070;
l__0070:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x341C);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x341A);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__00BD;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__00BD;
	}
	goto l__0085;
l__0085:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x1);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x38B2) <= (int16)0x1) goto l__00BD;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x1;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x5460;
	emu_push(emu_ax);
	emu_ax = 0x1518;
	emu_push(emu_ax);
	emu_ax = 0x2A30;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00A5); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	goto l__00A5;
l__00A5:
	emu_addw(&emu_sp, 0x8);
	emu_cwd();
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_cx, emu_ax);
	emu_adcw(&emu_bx, emu_dx);
	emu_get_memory16(emu_ds, 0x00, 0x341C) = emu_bx;
	emu_get_memory16(emu_ds, 0x00, 0x341A) = emu_cx;
	goto l__00BD;
l__00BD:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3424);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3422);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__00EB;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__00EB;
	}
	goto l__00D2;
l__00D2:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0x5);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x3424) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3422) = emu_dx;
	goto l__00EB;
l__00EB:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3428);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3426);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B2));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76B2)) goto l__0119;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76B2)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76B0));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76B0)) goto l__0119;
	}
	goto l__0100;
l__0100:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x1;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B2);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76B0);
	emu_addw(&emu_dx, 0x3C);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x3428) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x3426) = emu_dx;
	goto l__0119;
l__0119:
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x012B); emu_cs = 0x1082; emu_Building_FindFirst();
	goto l__012B;
l__012B:
	emu_addw(&emu_sp, 0x8);
	goto l__0A50;
l__0131:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ds, 0x00, 0x8432) = 0x2C94;
	emu_get_memory16(emu_ds, 0x00, 0x8430) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8436);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x8434);
	emu_get_memory16(emu_ds, 0x00, 0x3950) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x394E) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0168); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	goto l__0168;
l__0168:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x394C) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x394A) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) == 0x0) goto l__017A;
	goto l__0A44;
l__017A:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) == 0x0) goto l__01E5;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x2);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x2) goto l__01E5;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x50) == 0x0) { /* Unresolved jump */ emu_ip = 0x01BB; emu_last_cs = 0x0972; emu_last_ip = 0x0194; emu_last_length = 0x0040; emu_last_crc = 0xF4EB; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x50));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x394C);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x394A);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A3C));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A3C)) { /* Unresolved jump */ emu_ip = 0x01BB; emu_last_cs = 0x0972; emu_last_ip = 0x01A9; emu_last_length = 0x0040; emu_last_crc = 0xF4EB; emu_call(); return; }
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x3A3A));
	if (emu_dx != emu_get_memory16(emu_ds, 0x00, 0x3A3A)) { /* Unresolved jump */ emu_ip = 0x01BB; emu_last_cs = 0x0972; emu_last_ip = 0x01AF; emu_last_length = 0x0040; emu_last_crc = 0xF4EB; emu_call(); return; }
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01BA); emu_cs = 0x10E4; f__10E4_0F1A_0088_7622();
	/* Unresolved jump */ emu_ip = 0x01BA; emu_last_cs = 0x0972; emu_last_ip = 0x01BA; emu_last_length = 0x0040; emu_last_crc = 0xF4EB; emu_call();
l__01E5:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == 0x0) goto l__0242;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x400);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x400) == 0) goto l__0242;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x10);
	emu_sarw(&emu_ax, 0x1);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0xE) <= (int16)emu_ax) goto l__0242;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_si = emu_get_memory16(emu_ds, emu_bx, 0x3800);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x400);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x400) == 0) { /* Unresolved jump */ emu_ip = 0x022E; emu_last_cs = 0x0972; emu_last_ip = 0x022B; emu_last_length = 0x005A; emu_last_crc = 0x6804; emu_call(); return; }
	emu_incw(&emu_si);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x023F); emu_cs = 0x0C3A; f__0C3A_1216_0013_E56D();
	goto l__023F;
l__023F:
	emu_addw(&emu_sp, 0x8);
	goto l__0242;
l__0242:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x4) != 0x0) goto l__024B;
	goto l__0938;
l__024B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x2) != 0) goto l__025A;
	goto l__0306;
l__025A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_bx = 0x28;
	emu_cwd();
	emu_idivw(&emu_ax, emu_bx);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x12) >= emu_si) goto l__0277;
	goto l__02FA;
l__0277:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x4F);
	emu_addb(&emu_al, 0xFB);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_get_memory8(emu_es, emu_bx, 0x4F) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4F), 0x0);
	if ((int8)emu_get_memory8(emu_es, emu_bx, 0x4F) > (int8)0x0) goto l__02F8;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_incb(&emu_get_memory8(emu_es, emu_bx, 0x4E));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0xFFFD);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x8), 0x2);
	if (emu_get_memory8(emu_es, emu_bx, 0x8) == 0x2) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x4);
		if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x4) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
			emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4E), 0x2);
			if (emu_get_memory8(emu_es, emu_bx, 0x4E) == 0x2) {
				emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
				emu_get_memory8(emu_es, emu_bx, 0x4E) = 0x3;
			}
		}
	}
	goto l__02D7;
l__02D7:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x02E4); emu_cs = 0x0C3A; f__0C3A_25EC_0011_E453();
	goto l__02E4;
l__02E4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__02EE;
	emu_al = 0x64;
	goto l__02F0;
l__02EE:
	emu_al = 0x0;
	goto l__02F0;
l__02F0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_get_memory8(emu_es, emu_bx, 0x4F) = emu_al;
	goto l__02F8;
l__02F8:
	goto l__0303;
l__02FA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0xFFFD);
	goto l__0303;
l__0303:
	goto l__0938;
l__0306:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2000) != 0) goto l__0315;
	goto l__03B3;
l__0315:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x0326); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0155_002A_AC43();
	goto l__0326;
l__0326:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_cs); emu_push(0x0338); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0129_0028_FB8E();
	goto l__0338;
l__0338:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x12) < emu_si) goto l__03A6;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__036F;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x38B2), 0x3);
	if ((int16)emu_get_memory16(emu_ds, 0x00, 0x38B2) >= (int16)0x3) goto l__036F;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x3);
	goto l__0378;
l__036F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x5);
	goto l__0378;
l__0378:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_es, emu_bx, 0x10)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
		emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
		emu_get_memory16(emu_es, emu_bx, 0xE) = emu_ax;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
		emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x9FFF);
	}
	goto l__03A4;
l__03A4:
	goto l__03B0;
l__03A6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xDFFF);
	goto l__03B0;
l__03B0:
	goto l__0938;
l__03B3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x4000) == 0) goto l__03C2;
	goto l__0746;
l__03C2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x50) != 0x0) goto l__03D0;
	goto l__0746;
l__03D0:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__03DE;
	goto l__0746;
l__03DE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x1);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) == 0x1) goto l__03EC;
	goto l__0746;
l__03EC:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x2) != 0) goto l__03FB;
	goto l__0746;
l__03FB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x8) goto l__0420;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4C);
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x2C94;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	goto l__045E;
l__0420:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xD);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0xD) goto l__0446;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x043A); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	/* Unresolved jump */ emu_ip = 0x043A; emu_last_cs = 0x0972; emu_last_ip = 0x043A; emu_last_length = 0x001A; emu_last_crc = 0xC1B0; emu_call();
l__0446:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4C);
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x2D07;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	goto l__045E;
l__045E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x10)) goto l__0475;
	emu_si = 0x100;
	goto l__048E;
l__0475:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x048A); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0155_002A_AC43();
	goto l__048A;
l__048A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	goto l__048E;
l__048E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__04BD;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38B2);
	emu_dx = 0x14;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x5F);
	emu_cmpw(&emu_ax, emu_si);
	if (emu_ax <= emu_si) goto l__04B0;
	emu_ax = emu_si;
	goto l__04BB;
l__04B0:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38B2);
	emu_dx = 0x14;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x5F);
	goto l__04BB;
l__04BB:
	emu_si = emu_ax;
	goto l__04BD;
l__04BD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x18));
	emu_push(emu_cs); emu_push(0x04D0); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0155_002A_AC43();
	goto l__04D0;
l__04D0:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_cmpw(&emu_si, 0x100);
	if (emu_si == 0x100) goto l__04E9;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_cs); emu_push(0x04E4); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0129_0028_FB8E();
	goto l__04E4;
l__04E4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	goto l__04E9;
l__04E9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xD);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0xD) goto l__050A;
	emu_cl = 0x2;
	emu_shrw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_cl);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x10) <= 0x1) { /* Unresolved jump */ emu_ip = 0x0504; emu_last_cs = 0x0972; emu_last_ip = 0x04FD; emu_last_length = 0x001B; emu_last_crc = 0xC395; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	/* Unresolved jump */ emu_ip = 0x0507; emu_last_cs = 0x0972; emu_last_ip = 0x0502; emu_last_length = 0x001B; emu_last_crc = 0xC395; emu_call();
l__050A:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x52);
	emu_addw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_cl = 0x8;
	emu_shrw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x12);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if (emu_ax >= emu_get_memory16(emu_ss, emu_bp, -0x14)) goto l__0532;
	goto l__0716;
l__0532:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_andw(&emu_ax, 0xFF);
	emu_get_memory16(emu_es, emu_bx, 0x52) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x054F); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	goto l__054F;
l__054F:
	emu_pop(&emu_cx);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_es = emu_dx;
	emu_xchgw(&emu_ax, &emu_bx);
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x50) < emu_si) goto l__056E;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x50), emu_si);
	goto l__0578;
l__056E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_get_memory16(emu_es, emu_bx, 0x50) = 0x0;
	goto l__0578;
l__0578:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x50) == 0x0) goto l__0586;
	goto l__0714;
l__0586:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_get_memory16(emu_es, emu_bx, 0x52) = 0x0;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x05A1); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	goto l__05A1;
l__05A1:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__05B6;
	goto l__0636;
l__05B6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xA);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0xA) goto l__0633;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x7);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x7) goto l__0633;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, 0x5);
	if (emu_ax == 0x5) goto l__05E6;
	emu_cmpw(&emu_ax, 0x8);
	if (emu_ax == 0x8) goto l__05E1;
	goto l__05EB;
l__05E1:
	emu_di = 0x82;
	goto l__05F0;
l__05E6:
	emu_di = 0x81;
	goto l__05F0;
l__05EB:
	emu_di = 0x83;
	goto l__05F0;
l__05F0:
	emu_push(emu_di);
	emu_push(emu_cs); emu_push(0x05F6); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	goto l__05F6;
l__05F6:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_cs); emu_push(0x0605); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	goto l__0605;
l__0605:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x342A;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0617); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	goto l__0617;
l__0617:
	emu_addw(&emu_sp, 0x10);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0627); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	goto l__0627;
l__0627:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0632); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
	goto l__0632;
l__0632:
	emu_pop(&emu_cx);
	goto l__0633;
l__0633:
	goto l__0714;
l__0636:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x8);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x8) goto l__0644;
	goto l__0714;
l__0644:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0651); emu_cs = 0x1A34; emu_Unit_GetLinkedBuilding();
	goto l__0651;
l__0651:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0672); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	goto l__0672;
l__0672:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_di, emu_di);
	goto l__06DC;
l__0679:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_addw(&emu_bx, emu_dx);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x2E));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x2E)) goto l__06DB;
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_addw(&emu_bx, emu_ax);
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x30));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs); emu_push(0x06AE); emu_cs = 0x0C3A; f__0C3A_01BA_0018_69C9();
	goto l__06AE;
l__06AE:
	emu_addw(&emu_sp, 0x6);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__06DB;
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x2E) = 0x0;
	emu_ax = emu_di;
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_es, emu_bx, 0x30) = 0x0;
	goto l__06E1;
l__06DB:
	emu_incw(&emu_di);
	goto l__06DC;
l__06DC:
	emu_cmpw(&emu_di, 0x5);
	if ((int16)emu_di < (int16)0x5) goto l__0679;
	goto l__06E1;
l__06E1:
	emu_cmpw(&emu_di, 0x5);
	if (emu_di != 0x5) goto l__0714;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x20);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs); emu_push(0x0712); emu_cs = 0x1082; emu_Building_Free();
	goto l__0712;
l__0712:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0714;
l__0714:
	goto l__0746;
l__0716:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0746;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4000);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x84;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x073B); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	goto l__073B;
l__073B:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0743); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	goto l__0743;
l__0743:
	emu_addw(&emu_sp, 0x6);
	goto l__0746;
l__0746:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xD);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0xD) goto l__0754;
	goto l__0874;
l__0754:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x4000);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x4000) == 0) goto l__0763;
	goto l__085F;
l__0763:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x50) != 0x0) goto l__0771;
	goto l__085D;
l__0771:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__077F;
	goto l__085D;
l__077F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x10));
	if (emu_ax != emu_get_memory16(emu_es, emu_bx, 0x10)) goto l__0796;
	emu_di = 0x100;
	goto l__07AF;
l__0796:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x07AB); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0155_002A_AC43();
	goto l__07AB;
l__07AB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	goto l__07AF;
l__07AF:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x07BC); emu_cs = 0x1A34; emu_Building_GetLinkedUnit();
	goto l__07BC;
l__07BC:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_si = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x07E2); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0129_0028_FB8E();
	goto l__07E2;
l__07E2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
	if (emu_get_memory16(emu_es, emu_bx, 0x12) < emu_si) goto l__085D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), emu_di);
	if (emu_get_memory16(emu_es, emu_bx, 0x50) < emu_di) goto l__080C;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_subw(&emu_get_memory16(emu_es, emu_bx, 0x50), emu_di);
	goto l__0816;
l__080C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_get_memory16(emu_es, emu_bx, 0x50) = 0x0;
	goto l__0816;
l__0816:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x50) != 0x0) goto l__085B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_get_memory16(emu_es, emu_bx, 0x50) = 0x0;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x083C); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	goto l__083C;
l__083C:
	emu_addw(&emu_sp, 0x6);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__085B;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_addw(&emu_ax, 0x37);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x085A); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
	goto l__085A;
l__085A:
	emu_pop(&emu_cx);
	goto l__085B;
l__085B:
	goto l__085D;
l__085D:
	goto l__0874;
l__085F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x12) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
		emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xBFFF);
	}
	goto l__0874;
l__0874:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x8);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x8) != 0) goto l__0883;
	goto l__0938;
l__0883:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0x4) & 0x2) != 0) goto l__0892;
	goto l__0938;
l__0892:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__08A4;
	goto l__0938;
l__08A4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x12) != 0x0) goto l__08B2;
	goto l__0938;
l__08B2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_es);
	emu_lfp(&emu_es, &emu_si, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_ax = emu_get_memory16(emu_es, emu_si, 0x10);
	emu_sarw(&emu_ax, 0x1);
	emu_pop(&emu_es);
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0xE), emu_ax);
	if ((int16)emu_get_memory16(emu_es, emu_bx, 0xE) >= (int16)emu_ax) goto l__08EF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394A));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x12) == 0x0) goto l__08EF;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x08EA); emu_cs = 0x0C3A; f__0C3A_2814_0015_76F0();
	goto l__08EA;
l__08EA:
	emu_addw(&emu_sp, 0xA);
	goto l__0938;
l__08EF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0xC), 0x2);
	if ((emu_get_memory16(emu_es, emu_bx, 0xC) & 0x2) == 0) goto l__0938;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x50) != 0x0) goto l__0938;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__0938;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x091E); emu_cs = 0x1423; f__1423_0C74_0015_3419();
	goto l__091E;
l__091E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__0938;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0935); emu_cs = 0x0C3A; f__0C3A_142D_0018_6667();
	goto l__0935;
l__0935:
	emu_addw(&emu_sp, 0x6);
	goto l__0938;
l__0938:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0x0) goto l__0941;
	goto l__0A44;
l__0941:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x10), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x10) == 0x0) goto l__094F;
	goto l__0A3C;
l__094F:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8434);
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x095F); emu_cs = 0x15C2; f__15C2_0526_000F_EA1E();
	goto l__095F;
l__095F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0968;
	goto l__09FE;
l__0968:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x9);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x9) {
		emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x37A4));
		emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x37A4));
	}
	goto l__097B;
l__097B:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x379C), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x379C) != 0x0) {
		emu_get_memory16(emu_ds, 0x00, 0x37A4) = 0x0;
		emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x37A2));
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x1D);
		emu_ax = (int8)emu_al;
		emu_dx = 0xF;
		emu_subw(&emu_dx, emu_ax);
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x37A8));
		if ((int16)emu_dx > (int16)emu_get_memory16(emu_ds, 0x00, 0x37A8)) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
			emu_al = emu_get_memory8(emu_es, emu_bx, 0x1D);
			emu_ax = (int8)emu_al;
			emu_dx = 0xF;
			emu_subw(&emu_dx, emu_ax);
			emu_get_memory16(emu_ds, 0x00, 0x37A8) = emu_dx;
		}
	}
	goto l__09B2;
l__09B2:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8434);
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09C2); emu_cs = 0x15C2; f__15C2_0559_0015_E98A();
	goto l__09C2;
l__09C2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__09CB;
	goto l__0A63;
l__09CB:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8434);
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09DB); emu_cs = 0x15C2; f__15C2_0559_0015_E98A();
	goto l__09DB;
l__09DB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__09E4;
	goto l__0A63;
l__09E4:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8434);
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x09F4); emu_cs = 0x15C2; f__15C2_0559_0015_E98A();
	goto l__09F4;
l__09F4:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__09FC;
	goto l__0A63;
l__09FC:
	goto l__0A3A;
l__09FE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x18));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8434);
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A1A); emu_cs = 0x15C2; f__15C2_0395_0044_304E();
	goto l__0A1A;
l__0A1A:
	emu_addw(&emu_sp, 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8434);
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A37); emu_cs = 0x15C2; f__15C2_03D9_0011_D202();
	goto l__0A37;
l__0A37:
	emu_addw(&emu_sp, 0x6);
	goto l__0A3A;
l__0A3A:
	goto l__0A44;
l__0A3C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_decw(&emu_get_memory16(emu_es, emu_bx, 0x10));
	goto l__0A44;
l__0A44:
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0xE);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A4E); emu_cs = 0x1082; emu_Building_FindNext();
	goto l__0A4E;
l__0A4E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0A50;
l__0A50:
	emu_get_memory16(emu_ds, 0x00, 0x8436) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x8434) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8434);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8436));
	if (emu_ax == 0) goto l__0A63;
	goto l__0131;
l__0A63:
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
 * Decompiled function f__0972_0A72_000D_024E()
 *
 * @name f__0972_0A72_000D_024E
 * @implements 0972:0A72:000D:024E ()
 * @implements 0972:0A7F:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_0A72_000D_024E()
{
l__0A72:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x54);
	goto l__0A7F;
l__0A7F:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_0A81_0017_2EC7()
 *
 * @name f__0972_0A81_0017_2EC7
 * @implements 0972:0A81:0017:2EC7 ()
 * @implements 0972:0A98:0012:C6CB
 * @implements 0972:0AAA:000A:8B0A
 * @implements 0972:0AB4:0012:B5DA
 * @implements 0972:0AC6:0011:6245
 * @implements 0972:0AD5:0002:D03A
 * @implements 0972:0AD7:000B:D0F3
 * @implements 0972:0AE2:000F:3656
 * @implements 0972:0AF1:0006:E1F0
 * @implements 0972:0AF7:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_0A81_0017_2EC7()
{
l__0A81:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0A98); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__0A98;
l__0A98:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0AAA); emu_cs = 0x0C10; f__0C10_0168_0014_CEB0();
	goto l__0AAA;
l__0AAA:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0AB4); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	goto l__0AB4;
l__0AB4:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0AC6); emu_cs = 0x0C10; f__0C10_0168_0014_CEB0();
	goto l__0AC6;
l__0AC6:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax != emu_get_memory16(emu_ss, emu_bp, -0x6)) goto l__0AD7;
	emu_ax = emu_si;
	goto l__0AD5;
l__0AD5:
	goto l__0AF7;
l__0AD7:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0AE2); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	goto l__0AE2;
l__0AE2:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0AF1); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	goto l__0AF1;
l__0AF1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__0AD5;
l__0AF7:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_0AFC_0016_0DC9()
 *
 * @name f__0972_0AFC_0016_0DC9
 * @implements 0972:0AFC:0016:0DC9 ()
 * @implements 0972:0B12:000E:738D
 * @implements 0972:0B20:0026:CA0B
 * @implements 0972:0B46:0012:0F5D
 * @implements 0972:0B58:003E:7C5A
 * @implements 0972:0B92:0004:DC39
 * @implements 0972:0B94:0002:F43A
 * @implements 0972:0B96:0018:4D07
 * @implements 0972:0BAE:0015:DC2E
 * @implements 0972:0BC3:0020:614B
 * @implements 0972:0BE3:0012:0853
 * @implements 0972:0BF5:0007:35C7
 * @implements 0972:0BFC:0002:8A3A
 * @implements 0972:0BFE:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_0AFC_0016_0DC9()
{
l__0AFC:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x54), 0x2);
	if (emu_get_memory16(emu_es, emu_bx, 0x54) == 0x2) goto l__0B12;
	goto l__0BFC;
l__0B12:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__0B20;
	goto l__0BFC;
l__0B20:
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
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0B46); emu_cs = 0x0C3A; f__0C3A_247A_0015_EA04();
	goto l__0B46;
l__0B46:
	emu_addw(&emu_sp, 0x6);
	emu_di = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0B58); emu_cs = 0x1A34; emu_Building_GetLinkedUnit();
	goto l__0B58;
l__0B58:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0B96;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__0B96;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__0B96;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x5A);
	emu_orw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x5C));
	if (emu_ax != 0) goto l__0B96;
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__0B96;
	goto l__0B92;
l__0B92:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0B94;
l__0B94:
	goto l__0BFE;
l__0B96:
	emu_ax = emu_di;
	emu_negw(&emu_ax, emu_ax);
	emu_sbbw(&emu_ax, emu_ax);
	emu_incw(&emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0BAE); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__0BAE;
l__0BAE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0BC3); emu_cs = 0x1A34; f__1A34_2BB5_0025_30B8();
	goto l__0BC3;
l__0BC3:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__0BFC;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0BE3); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__0BE3;
l__0BE3:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0BF5); emu_cs = 0x0C10; f__0C10_00D2_000F_D61E();
	goto l__0BF5;
l__0BF5:
	emu_addw(&emu_sp, 0x6);
	emu_ax = emu_si;
	goto l__0B94;
l__0BFC:
	goto l__0B92;
l__0BFE:
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
 * Decompiled function f__0972_0C04_0037_B310()
 *
 * @name f__0972_0C04_0037_B310
 * @implements 0972:0C04:0037:B310 ()
 * @implements 0972:0C3E:0002:C13A
 * @implements 0972:0C40:0010:51A9
 * @implements 0972:0C42:000E:BD9B
 * @implements 0972:0C50:0007:F90C
 * @implements 0972:0C57:0003:2E57
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_0C04_0037_B310()
{
l__0C04:
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
	emu_cmpw(&emu_si, 0xFFFE);
	if (emu_si != 0xFFFE) goto l__0C42;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) == 0xFF) goto l__0C40;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x50), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x50) == 0x0) { /* Unresolved jump */ emu_ip = 0x0C3B; emu_last_cs = 0x0972; emu_last_ip = 0x0C34; emu_last_length = 0x0037; emu_last_crc = 0xB310; emu_call(); return; }
	emu_si = 0x1;
	goto l__0C3E;
l__0C3E:
	goto l__0C42;
l__0C40:
	emu_xorw(&emu_si, emu_si);
	goto l__0C42;
l__0C42:
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0C50); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	goto l__0C50;
l__0C50:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	goto l__0C57;
l__0C57:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_0C5A_0015_E00A()
 *
 * @name f__0972_0C5A_0015_E00A
 * @implements 0972:0C5A:0015:E00A ()
 * @implements 0972:0C6F:000D:A320
 * @implements 0972:0C7C:0027:52E8
 * @implements 0972:0CA3:0017:4EFB
 * @implements 0972:0CBA:0039:4D11
 * @implements 0972:0CF3:0010:0DA8
 * @implements 0972:0CF6:000D:8532
 * @implements 0972:0D03:001D:22E2
 * @implements 0972:0D20:0007:3D0E
 * @implements 0972:0D21:0006:3DBC
 * @implements 0972:0D24:0003:DDB6
 * @implements 0972:0D27:000F:A4DF
 * @implements 0972:0D36:0010:1B5F
 * @implements 0972:0D38:000E:9B6D
 * @implements 0972:0D46:000C:CFFA
 * @implements 0972:0D52:0015:DD16
 * @implements 0972:0D67:0008:8ABD
 * @implements 0972:0D6F:000F:5891
 * @implements 0972:0D7E:000A:4602
 * @implements 0972:0D88:003A:00C4
 * @implements 0972:0DC2:0012:86B3
 * @implements 0972:0DD4:0020:86C2
 * @implements 0972:0DF4:001E:8A47
 * @implements 0972:0E12:001D:966A
 * @implements 0972:0E14:001B:5BF8
 * @implements 0972:0E2F:0010:0DA8
 * @implements 0972:0E32:000D:8532
 * @implements 0972:0E3F:002E:C784
 * @implements 0972:0E6D:000C:A466
 * @implements 0972:0E73:0006:3EF3
 * @implements 0972:0E79:0004:F20C
 * @implements 0972:0E7A:0003:6209
 * @implements 0972:0E7D:0005:E39C
 * @implements 0972:0E82:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_0C5A_0015_E00A()
{
l__0C5A:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__0C6F;
	goto l__0E7D;
l__0C6F:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0C7C); emu_cs = 0x1A34; emu_Building_GetLinkedUnit();
	goto l__0C7C;
l__0C7C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ax = (int8)emu_al;
	emu_dx = 0x5A;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2D07;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x3C), 0x4);
	if (emu_get_memory16(emu_es, emu_bx, 0x3C) == 0x4) goto l__0CA3;
	goto l__0D27;
l__0CA3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0CBA); emu_cs = 0x1A34; f__1A34_2958_0013_3A47();
	goto l__0CBA;
l__0CBA:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0D27;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__0CF6;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0CF3); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	goto l__0CF3;
l__0CF3:
	emu_addw(&emu_sp, 0x6);
	goto l__0CF6;
l__0CF6:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0D03); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	goto l__0D03;
l__0D03:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0D21;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_addw(&emu_ax, 0x31);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D20); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
	goto l__0D20;
l__0D20:
	emu_pop(&emu_cx);
	goto l__0D21;
l__0D21:
	emu_ax = 0x1;
	goto l__0D24;
l__0D24:
	goto l__0E82;
l__0D27:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__0D36;
	emu_ax = 0x1;
	goto l__0D38;
l__0D36:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0D38;
l__0D38:
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0D46); emu_cs = 0x0C3A; f__0C3A_247A_0015_EA04();
	goto l__0D46;
l__0D46:
	emu_addw(&emu_sp, 0x6);
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__0D52;
	goto l__0E7D;
l__0D52:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_orb(&emu_get_memory8(emu_es, emu_bx, 0x9), emu_al);
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x0D67); emu_cs = 0x0F3F; emu_Tile_Unpack();
	goto l__0D67;
l__0D67:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D6F); emu_cs = 0x0F3F; emu_Tile_Center();
	goto l__0D6F;
l__0D6F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0D7E); emu_cs = 0x1A34; f__1A34_2958_0013_3A47();
	goto l__0D7E;
l__0D7E:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0D88;
	goto l__0E7D;
l__0D88:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_get_memory8(emu_es, emu_bx, 0x3) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x3) = 0xFF;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0DC2); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	goto l__0DC2;
l__0DC2:
	emu_addw(&emu_sp, 0x8);
	emu_andw(&emu_ax, 0xE0);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0DD4); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	goto l__0DD4;
l__0DD4:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x64);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0DF4); emu_cs = 0x1A34; f__1A34_1E99_0012_1117();
	goto l__0DF4;
l__0DF4:
	emu_addw(&emu_sp, 0xA);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0E14;
	emu_ax = 0x6A;
	emu_push(emu_ax);
	emu_ax = 0x1B;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E12); emu_cs = 0x10E4; f__10E4_0117_0015_392D();
	goto l__0E12;
l__0E12:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0E14;
l__0E14:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__0E32;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x0E2F); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	goto l__0E2F;
l__0E2F:
	emu_addw(&emu_sp, 0x6);
	goto l__0E32;
l__0E32:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3950));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x394E));
	emu_push(emu_cs); emu_push(0x0E3F); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	goto l__0E3F;
l__0E3F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__0E7A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0xD);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0xD) goto l__0E7A;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__0E6D;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_addw(&emu_ax, 0x44);
	goto l__0E73;
l__0E6D:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_addw(&emu_ax, 0x1E);
	goto l__0E73;
l__0E73:
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E79); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
	goto l__0E79;
l__0E79:
	emu_pop(&emu_cx);
	goto l__0E7A;
l__0E7A:
	goto l__0D21;
l__0E7D:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0D24;
l__0E82:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_0E87_0047_4065()
 *
 * @name f__0972_0E87_0047_4065
 * @implements 0972:0E87:0047:4065 ()
 * @implements 0972:0ECE:0006:973D
 * @implements 0972:0ED4:0015:753E
 * @implements 0972:0EE9:0008:9688
 * @implements 0972:0EF1:0009:B78B
 * @implements 0972:0EFA:0027:A697
 * @implements 0972:0F21:001C:C333
 * @implements 0972:0F3D:0036:4859
 * @implements 0972:0F59:001A:27B4
 * @implements 0972:0F99:0035:1D8A
 * @implements 0972:0FAB:0023:6A94
 * @implements 0972:0FC3:000B:799F
 * @implements 0972:0FCE:0013:DDDB
 * @implements 0972:0FD0:0011:96ED
 * @implements 0972:0FE1:0017:BA46
 * @implements 0972:0FF8:0004:591F
 * @implements 0972:0FFA:0002:C23A
 * @implements 0972:0FFC:0004:9539
 * @implements 0972:1000:0004:893F
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_0E87_0047_4065()
{
l__0E87:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x14);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x7D00;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0xB);
	emu_ax = (int8)emu_al;
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x16);
	emu_cwd();
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0ECE); emu_cs = 0x0FE4; emu_Unit_FindFirst();
	goto l__0ECE;
l__0ECE:
	emu_addw(&emu_sp, 0x8);
	goto l__0FD0;
l__0ED4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0EE9); emu_cs = 0x1A34; emu_Unit_GetHouseID();
	goto l__0EE9;
l__0EE9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0EF1); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	goto l__0EF1;
l__0EF1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0EFA;
	goto l__0FC3;
l__0EFA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x1);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) == 0x1) goto l__0F21;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cl = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_dx = 0x1;
	emu_shlw(&emu_dx, emu_cl);
	emu_testw(&emu_ax, emu_dx);
	if ((emu_ax & emu_dx) != 0) goto l__0F21;
	goto l__0FC3;
l__0F21:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x0F3D); emu_cs = 0x0F3F; emu_Tile_GetDistance();
	goto l__0F3D;
l__0F3D:
	emu_addw(&emu_sp, 0x8);
	emu_cwd();
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ss, emu_bp, -0xA)) goto l__0FC3;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp, -0xA)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0xC));
		if (emu_dx >= emu_get_memory16(emu_ss, emu_bp, -0xC)) goto l__0FC3;
	}
	goto l__0F59;
l__0F59:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x1);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x1) goto l__0F99;
	emu_cx = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_xorw(&emu_dx, emu_dx);
	emu_ax = 0x3;
	emu_push(emu_cs); emu_push(0x0F73); emu_cs = 0x01F7; f__01F7_03B2_0017_7CBE();
	/* Unresolved jump */ emu_ip = 0x0F73; emu_last_cs = 0x0972; emu_last_ip = 0x0F73; emu_last_length = 0x001A; emu_last_crc = 0x27B4; emu_call();
l__0F99:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ss, emu_bp, -0xE)) goto l__0FC3;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ss, emu_bp, -0xE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x10));
		if (emu_dx >= emu_get_memory16(emu_ss, emu_bp, -0x10)) goto l__0FC3;
	}
	goto l__0FAB;
l__0FAB:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	goto l__0FC3;
l__0FC3:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0FCE); emu_cs = 0x0FE4; emu_Unit_FindNext();
	goto l__0FCE;
l__0FCE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0FD0;
l__0FD0:
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) goto l__0FE1;
	goto l__0ED4;
l__0FE1:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x12));
	if (emu_ax == 0) goto l__0FFC;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x14));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x0FF8); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__0FF8;
l__0FF8:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__0FFA;
l__0FFA:
	goto l__1000;
l__0FFC:
	emu_xorw(&emu_ax, emu_ax);
	goto l__0FFA;
l__1000:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_1004_0029_E69D()
 *
 * @name f__0972_1004_0029_E69D
 * @implements 0972:1004:0029:E69D ()
 * @implements 0972:1028:0005:1C33
 * @implements 0972:102A:0003:1DA7
 * @implements 0972:102D:0008:180B
 * @implements 0972:1035:0008:BAF2
 * @implements 0972:103D:0016:DE64
 * @implements 0972:1053:001A:D4A1
 * @implements 0972:106D:0041:C9BE
 * @implements 0972:1075:0039:A47C
 * @implements 0972:10AB:0003:9D04
 * @implements 0972:10AE:0008:04B9
 * @implements 0972:10B6:000B:281A
 * @implements 0972:10C1:0008:8AD8
 * @implements 0972:10C9:0012:27F9
 * @implements 0972:10DB:0012:DC63
 * @implements 0972:10ED:000A:7B2F
 * @implements 0972:10F0:0007:D398
 * @implements 0972:10F7:000F:6C8B
 * @implements 0972:10FA:000C:2996
 * @implements 0972:1106:0037:38DE
 * @implements 0972:1107:0036:3852
 * @implements 0972:113D:0009:C65E
 * @implements 0972:1140:0006:8213
 * @implements 0972:1146:0003:A217
 * @implements 0972:1149:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_1004_0029_E69D()
{
l__1004:
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
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) != 0x0) goto l__102D;
	goto l__1028;
l__1028:
	emu_xorw(&emu_ax, emu_ax);
	goto l__102A;
l__102A:
	goto l__1149;
l__102D:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_cs); emu_push(0x1035); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	goto l__1035;
l__1035:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x103D); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__103D;
l__103D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x1053); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__1053;
l__1053:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__106D;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x30);
	goto l__1075;
l__106D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2E);
	goto l__1075;
l__1075:
	emu_shlw(&emu_ax, 0x1);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EE));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x4);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cl = 0x2;
	emu_shlw(&emu_ax, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_ax);
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_andw(&emu_ax, 0x1FF);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_subw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_si = emu_ax;
	emu_orw(&emu_si, emu_si);
	if (!(emu_flags.sf != emu_flags.of)) {
		emu_cmpw(&emu_si, 0x8);
		if ((int16)emu_si < (int16)0x8) goto l__10AE;
	}
	goto l__10AB;
l__10AB:
	goto l__1140;
l__10AE:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x10B6); emu_cs = 0x0F3F; emu_Tile_Unpack();
	goto l__10B6;
l__10B6:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x10C1); emu_cs = 0x0F3F; emu_Tile_Unpack();
	goto l__10C1;
l__10C1:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10C9); emu_cs = 0x0F3F; f__0F3F_0125_000D_4868();
	goto l__10C9;
l__10C9:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_andw(&emu_ax, 0xFF);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x10DB); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_17DC_0019_CB46();
	goto l__10DB;
l__10DB:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), emu_si);
	if (emu_get_memory16(emu_ss, emu_bp, -0x2) == emu_si) goto l__1146;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_subw(&emu_ax, emu_si);
	emu_di = emu_ax;
	goto l__10F0;
l__10ED:
	emu_subw(&emu_di, 0x8);
	goto l__10F0;
l__10F0:
	emu_cmpw(&emu_di, 0x4);
	if ((int16)emu_di > (int16)0x4) goto l__10ED;
	goto l__10FA;
l__10F7:
	emu_addw(&emu_di, 0x8);
	goto l__10FA;
l__10FA:
	emu_cmpw(&emu_di, 0xFFFC);
	if ((int16)emu_di < (int16)0xFFFC) goto l__10F7;
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.sf != emu_flags.of)) goto l__1106;
	emu_decw(&emu_si);
	goto l__1107;
l__1106:
	emu_incw(&emu_si);
	goto l__1107;
l__1107:
	emu_andw(&emu_si, 0x7);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, emu_si);
	emu_andw(&emu_ax, 0x1FF);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cl = 0x2;
	emu_shlw(&emu_dx, emu_cl);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x39EA));
	emu_addw(&emu_bx, emu_dx);
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFE00);
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0x0), emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_get_memory16(emu_es, emu_bx, 0x49) = emu_si;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x113D); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_0000_0011_95D0();
	goto l__113D;
l__113D:
	emu_addw(&emu_sp, 0x6);
	goto l__1140;
l__1140:
	emu_ax = 0x1;
	goto l__102A;
l__1146:
	goto l__1028;
l__1149:
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
 * Decompiled function f__0972_11B9_0020_8DC9()
 *
 * @name f__0972_11B9_0020_8DC9
 * @implements 0972:11B9:0020:8DC9 ()
 * @implements 0972:11D9:000B:0103
 * @implements 0972:11E4:000C:47C7
 * @implements 0972:11F0:0012:15D4
 * @implements 0972:1202:0017:9738
 * @implements 0972:1219:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_11B9_0020_8DC9()
{
l__11B9:
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
	emu_push(emu_cs); emu_push(0x11D9); emu_cs = 0x167E; f__167E_0005_0013_AF0C();
	goto l__11D9;
l__11D9:
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x1215; emu_last_cs = 0x0972; emu_last_ip = 0x11DC; emu_last_length = 0x000B; emu_last_crc = 0x0103; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x11E4); emu_cs = 0x167E; f__167E_0088_001A_60ED();
	goto l__11E4;
l__11E4:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_ax, 0x2);
	if (emu_ax != 0x2) { /* Unresolved jump */ emu_ip = 0x1215; emu_last_cs = 0x0972; emu_last_ip = 0x11E8; emu_last_length = 0x000C; emu_last_crc = 0x47C7; emu_call(); return; }
	emu_push(emu_si);
	emu_push(emu_cs); emu_push(0x11F0); emu_cs = 0x167E; f__167E_0284_000C_4C88();
	goto l__11F0;
l__11F0:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1202); emu_cs = 0x0C10; f__0C10_0182_0012_B114();
	goto l__1202;
l__1202:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x1215; emu_last_cs = 0x0972; emu_last_ip = 0x120A; emu_last_length = 0x0017; emu_last_crc = 0x9738; emu_call(); return; }
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory16(emu_es, emu_bx, 0x56) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	goto l__1219;
l__1219:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_121E_0030_5DAA()
 *
 * @name f__0972_121E_0030_5DAA
 * @implements 0972:121E:0030:5DAA ()
 * @implements 0972:1249:0005:1C8E
 * @implements 0972:124B:0003:1D1A
 * @implements 0972:124E:0019:3598
 * @implements 0972:1267:000E:E53D
 * @implements 0972:1275:000D:A0B4
 * @implements 0972:1280:0002:C1BA
 * @implements 0972:1282:0022:DA59
 * @implements 0972:1285:001F:51F6
 * @implements 0972:12A4:001D:1E92
 * @implements 0972:12BC:0005:B762
 * @implements 0972:12C1:0008:163E
 * @implements 0972:12C9:001A:E9DB
 * @implements 0972:12E8:001F:F082
 * @implements 0972:1307:001D:FAC5
 * @implements 0972:1324:000F:3459
 * @implements 0972:1333:0003:A2A4
 * @implements 0972:1336:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_121E_0030_5DAA()
{
l__121E:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0xC);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xA);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x22);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) != 0x0) goto l__124E;
	goto l__1249;
l__1249:
	emu_xorw(&emu_ax, emu_ax);
	goto l__124B;
l__124B:
	goto l__1336;
l__124E:
	emu_si = 0xFFFF;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x2), 0x10);
	if (emu_get_memory8(emu_es, emu_bx, 0x2) != 0x10) goto l__1282;
	emu_si = 0x14;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x1267); emu_cs = 0x167E; f__167E_01BB_0010_85F6();
	goto l__1267;
l__1267:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1275); emu_cs = 0x0F3F; emu_Tile_GetDistance();
	goto l__1275;
l__1275:
	emu_addw(&emu_sp, 0x8);
	emu_cmpw(&emu_ax, 0x300);
	if ((int16)emu_ax < (int16)0x300) {
		emu_si = 0x17;
	}
	goto l__1280;
l__1280:
	goto l__1285;
l__1282:
	emu_si = 0x17;
	goto l__1285;
l__1285:
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x80);
	emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x80);
	emu_xorw(&emu_di, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_ax = emu_si;
	emu_cmpw(&emu_ax, 0x14);
	if (emu_ax == 0x14) goto l__12A4;
	emu_cmpw(&emu_ax, 0x17);
	if (emu_ax == 0x17) goto l__12C9;
	/* Unresolved jump */ emu_ip = 0x12E3; emu_last_cs = 0x0972; emu_last_ip = 0x12A2; emu_last_length = 0x001F; emu_last_crc = 0x51F6; emu_call();
l__12A4:
	emu_di = 0x1E;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x2D07;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x2C4));
	goto l__12BC;
l__12BC:
	emu_push(emu_cs); emu_push(0x12C1); emu_cs = 0x07C9; f__07C9_000F_0050_9278();
	goto l__12C1;
l__12C1:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	goto l__12E8;
l__12C9:
	emu_di = 0x14;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xFF;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x2D07;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x378));
	goto l__12BC;
l__12E8:
	emu_cmpw(&emu_si, 0xFFFF);
	if (emu_si == 0xFFFF) goto l__1333;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1307); emu_cs = 0x1A34; f__1A34_24FE_002F_672A();
	goto l__1307;
l__1307:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax == 0) goto l__1333;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x1324); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__1324;
l__1324:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_get_memory16(emu_es, emu_bx, 0x4D) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__124B;
l__1333:
	goto l__1249;
l__1336:
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
 * Decompiled function f__0972_137B_002B_A9E3()
 *
 * @name f__0972_137B_002B_A9E3
 * @implements 0972:137B:002B:A9E3 ()
 * @implements 0972:13A6:0007:F90C
 * @implements 0972:13A9:0004:E839
 * @implements 0972:13AD:0002:2597
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_137B_002B_A9E3()
{
l__137B:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax != emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__13A9;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x12));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x13A6); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_07F4_0013_6862();
	goto l__13A6;
l__13A6:
	emu_addw(&emu_sp, 0x6);
	goto l__13A9;
l__13A9:
	emu_xorw(&emu_ax, emu_ax);
	goto l__13AD;
l__13AD:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_13AF_0015_619A()
 *
 * @name f__0972_13AF_0015_619A
 * @implements 0972:13AF:0015:619A ()
 * @implements 0972:13C4:000F:D368
 * @implements 0972:13D3:001C:1549
 * @implements 0972:13EF:0011:0306
 * @implements 0972:1400:0017:1CE2
 * @implements 0972:1417:0020:E839
 * @implements 0972:141F:0018:99E8
 * @implements 0972:1437:000F:5710
 * @implements 0972:143A:000C:2715
 * @implements 0972:143D:0009:D10D
 * @implements 0972:1446:0019:C3D9
 * @implements 0972:145F:0024:B930
 * @implements 0972:1469:001A:3E69
 * @implements 0972:1483:0017:52C3
 * @implements 0972:149D:0005:2F01
 * @implements 0972:14A2:0011:84A2
 * @implements 0972:14B3:0015:4D30
 * @implements 0972:14B6:0012:D75E
 * @implements 0972:14B9:000F:377B
 * @implements 0972:14C8:003E:B41A
 * @implements 0972:14F7:000F:98A9
 * @implements 0972:1504:0002:CCBA
 * @implements 0972:1506:0002:C9BA
 * @implements 0972:1508:0010:3DB1
 * @implements 0972:1518:0007:8B8C
 * @implements 0972:151B:0004:9AB9
 * @implements 0972:151F:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_13AF_0015_619A()
{
l__13AF:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x6);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x3), 0xFF);
	if (emu_get_memory8(emu_es, emu_bx, 0x3) != 0xFF) goto l__13C4;
	goto l__1508;
l__13C4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x3);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x13D3); emu_cs = 0x0FE4; emu_Unit_Get_ByIndex();
	goto l__13D3;
l__13D3:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xE));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x10));
	emu_push(emu_cs); emu_push(0x13EF); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0155_002A_AC43();
	goto l__13EF;
l__13EF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1400); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0129_0028_FB8E();
	goto l__1400;
l__1400:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x58);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax <= emu_get_memory16(emu_ss, emu_bp, -0x6)) goto l__1417;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__141F;
l__1417:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x58);
	emu_ax = (int8)emu_al;
	goto l__141F;
l__141F:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x58), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x58) == 0x0) goto l__143D;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) <= 0x1) goto l__1437;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	goto l__143A;
l__1437:
	emu_ax = 0x1;
	goto l__143A;
l__143A:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	goto l__143D;
l__143D:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) != 0x0) goto l__1446;
	goto l__1506;
l__1446:
	emu_si = 0x7;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1469;
	emu_si = 0x7;
	emu_push(emu_cs); emu_push(0x145F); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__145F;
l__145F:
	emu_andw(&emu_ax, 0x3);
	emu_dx = emu_si;
	emu_addw(&emu_dx, emu_ax);
	emu_si = emu_dx;
	emu_decw(&emu_si);
	goto l__1469;
l__1469:
	emu_ax = emu_si;
	emu_imuluw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_si = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A38));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1483); emu_cs = 0x1423; f__1423_0F34_0017_464D();
	goto l__1483;
l__1483:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__14A2;
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x8D3F), emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8D3F), 0xFDE8);
	if (emu_get_memory16(emu_ds, 0x00, 0x8D3F) >= 0xFDE8) { /* Unresolved jump */ emu_ip = 0x149A; emu_last_cs = 0x0972; emu_last_ip = 0x1493; emu_last_length = 0x0017; emu_last_crc = 0x52C3; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8D3F);
	goto l__149D;
l__149D:
	emu_get_memory16(emu_ds, 0x00, 0x8D3F) = emu_ax;
	goto l__14B9;
l__14A2:
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x8D41), emu_si);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8D3F), 0xFDE8);
	if (emu_get_memory16(emu_ds, 0x00, 0x8D3F) >= 0xFDE8) goto l__14B3;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8D3F);
	goto l__14B6;
l__14B3:
	emu_ax = 0xFDE8;
	goto l__14B6;
l__14B6:
	emu_get_memory16(emu_ds, 0x00, 0x8D41) = emu_ax;
	goto l__14B9;
l__14B9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x14C8); emu_cs = 0x10BE; emu_House_Get_ByIndex();
	goto l__14C8;
l__14C8:
	emu_pop(&emu_cx);
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_addw(&emu_get_memory16(emu_es, emu_bx, 0x12), emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x58);
	emu_subb(&emu_al, emu_get_memory8(emu_ss, emu_bp, -0x6));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x58) = emu_al;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x58);
	emu_ax = (int8)emu_al;
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x4), 0xFEFF);
	}
	goto l__14F7;
l__14F7:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_get_memory16(emu_es, emu_bx, 0x10) = 0x6;
	emu_ax = 0x1;
	goto l__1504;
l__1504:
	goto l__151F;
l__1506:
	goto l__151B;
l__1508:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x1518); emu_cs = 0x0C3A; f__0C3A_1398_000D_8766();
	goto l__1518;
l__1518:
	emu_addw(&emu_sp, 0x6);
	goto l__151B;
l__151B:
	emu_xorw(&emu_ax, emu_ax);
	goto l__1504;
l__151F:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_1524_0018_014D()
 *
 * @name f__0972_1524_0018_014D
 * @implements 0972:1524:0018:014D ()
 * @implements 0972:153C:001F:E4E3
 * @implements 0972:155B:001E:7AB4
 * @implements 0972:1579:000C:582A
 * @implements 0972:1585:0018:CD47
 * @implements 0972:1589:0014:65FF
 * @implements 0972:159D:0005:8BCF
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_1524_0018_014D()
{
l__1524:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x153C); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__153C;
l__153C:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_dx = 0x12;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x2C64);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__1589;
l__155B:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x1579); emu_cs = 0x0F3F; emu_Tile_Unpack();
	goto l__1579;
l__1579:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_ax = 0xE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1585); emu_cs = 0x06F7; f__06F7_0008_0018_D7CD();
	goto l__1585;
l__1585:
	emu_addw(&emu_sp, 0xA);
	emu_incw(&emu_si);
	goto l__1589;
l__1589:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x2D52), emu_si);
	if ((int16)emu_get_memory16(emu_ds, emu_bx, 0x2D52) > (int16)emu_si) goto l__155B;
	emu_xorw(&emu_ax, emu_ax);
	goto l__159D;
l__159D:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__0972_15A2_0019_AB1E()
 *
 * @name f__0972_15A2_0019_AB1E
 * @implements 0972:15A2:0019:AB1E ()
 * @implements 0972:15BB:0012:FF55
 * @implements 0972:15CD:001D:73EF
 * @implements 0972:15EA:0015:06AF
 * @implements 0972:15FF:000D:2DFE
 * @implements 0972:160C:0005:517D
 * @implements 0972:1611:0009:0491
 * @implements 0972:161A:001A:3A56
 * @implements 0972:1634:0014:31F2
 * @implements 0972:1648:0005:517D
 * @implements 0972:164D:0015:7914
 * @implements 0972:1662:0028:49BE
 * @implements 0972:168A:0005:A06E
 * @implements 0972:168F:000F:4845
 * @implements 0972:169E:001F:6F53
 * @implements 0972:16BD:000A:CB50
 * @implements 0972:16C7:0008:A673
 * @implements 0972:16CF:001D:7CD7
 * @implements 0972:16D8:0014:1F04
 * @implements 0972:16D9:0013:7F00
 * @implements 0972:16EC:000A:EE18
 * @implements 0972:16F6:0012:F520
 * @implements 0972:1708:0010:9DFE
 * @implements 0972:1745:0009:F63A
 * @implements 0972:174E:0010:7163
 * @implements 0972:175E:002A:4005
 * @implements 0972:1788:0010:DEF5
 * @implements 0972:1798:0007:F90C
 * @implements 0972:179B:0004:E839
 * @implements 0972:179F:0006:F7CE
 *
 * Called From: 15C2:0932:003A:D1E0
 */
void f__0972_15A2_0019_AB1E()
{
l__15A2:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xC);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x15BB); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__15BB;
l__15BB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8436));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_push(emu_cs); emu_push(0x15CD); emu_cs = 0x0C3A; f__0C3A_1002_0013_651A();
	goto l__15CD;
l__15CD:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_dx = 0x12;
	emu_imuluw(&emu_ax, emu_dx);
	emu_addw(&emu_ax, 0x2C64);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ds;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__16D9;
l__15EA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_addw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x4), 0x2);
	emu_push(emu_cs); emu_push(0x15FF); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__15FF;
l__15FF:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_cmpw(&emu_ax, emu_get_memory16(emu_es, emu_bx, 0xE));
	if (emu_ax < emu_get_memory16(emu_es, emu_bx, 0xE)) goto l__160C;
	goto l__16D8;
l__160C:
	emu_push(emu_cs); emu_push(0x1611); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__1611;
l__1611:
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x161A); emu_cs = 0x0F3F; emu_Tile_Unpack();
	goto l__161A;
l__161A:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1634); emu_cs = 0x1A34; emu_Unit_Create();
	goto l__1634;
l__1634:
	emu_addw(&emu_sp, 0xC);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xC);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0xA));
	if (emu_ax != 0) goto l__1648;
	goto l__16D8;
l__1648:
	emu_push(emu_cs); emu_push(0x164D); emu_cs = 0x2BB4; f__2BB4_0004_0027_DC1D();
	goto l__164D;
l__164D:
	emu_orw(&emu_ax, 0x3);
	emu_di = emu_ax;
	emu_push(emu_di);
	emu_ax = 0x2D07;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x178));
	emu_push(emu_cs); emu_push(0x1662); emu_cs = 0x34C1; overlay(0x34C1, 0); f__B4C1_0129_0028_FB8E();
	goto l__1662;
l__1662:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_get_memory16(emu_es, emu_bx, 0xE) = emu_di;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__168F;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x168A); emu_cs = 0x176C; f__176C_000E_000E_633D();
	goto l__168A;
l__168A:
	emu_addw(&emu_sp, 0x6);
	goto l__16D8;
l__168F:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x169E); emu_cs = 0x176C; f__176C_000E_000E_633D();
	goto l__169E;
l__169E:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x20;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xC));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0xA));
	emu_push(emu_cs); emu_push(0x16BD); emu_cs = 0x0F3F; f__0F3F_01A1_0018_9631();
	goto l__16BD;
l__16BD:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x16C7); emu_cs = 0x0F3F; emu_Tile_PackTile();
	goto l__16C7;
l__16C7:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x16CF); emu_cs = 0x167E; f__167E_00F3_001E_8CB3();
	goto l__16CF;
l__16CF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_get_memory16(emu_es, emu_bx, 0x56) = emu_ax;
	goto l__16D8;
l__16D8:
	emu_incw(&emu_si);
	goto l__16D9;
l__16D9:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_bx = emu_get_memory16(emu_es, emu_bx, 0x3A);
	emu_shlw(&emu_bx, 0x1);
	emu_cmpw(&emu_get_memory16(emu_ds, emu_bx, 0x2D52), emu_si);
	if ((int16)emu_get_memory16(emu_ds, emu_bx, 0x2D52) <= (int16)emu_si) goto l__16EC;
	goto l__15EA;
l__16EC:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37A0), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37A0) == 0x0) goto l__16F6;
	goto l__179B;
l__16F6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A38));
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x3A38)) goto l__1708;
	goto l__179B;
l__1708:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B6) != 0x1) goto l__1745;
	emu_ax = 0x85;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1718); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Unresolved jump */ emu_ip = 0x1718; emu_last_cs = 0x0972; emu_last_ip = 0x1718; emu_last_length = 0x0010; emu_last_crc = 0x9DFE; emu_call();
l__1745:
	emu_ax = 0x85;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x174E); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	goto l__174E;
l__174E:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8430));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x6));
	emu_push(emu_cs); emu_push(0x175E); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	goto l__175E;
l__175E:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x8434));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
	emu_ax = (int8)emu_al;
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37FA));
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x37F8));
	emu_push(emu_ds);
	emu_ax = 0x3430;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1788); emu_cs = 0x01F7; f__01F7_378D_0020_0F64();
	goto l__1788;
l__1788:
	emu_addw(&emu_sp, 0x14);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1798); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	goto l__1798;
l__1798:
	emu_addw(&emu_sp, 0x6);
	goto l__179B;
l__179B:
	emu_xorw(&emu_ax, emu_ax);
	goto l__179F;
l__179F:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
