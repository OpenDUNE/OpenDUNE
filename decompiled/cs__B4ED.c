/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4ED_0000_0079_AC5D()
 *
 * @name f__B4ED_0000_0079_AC5D
 * @implements B4ED:0000:0079:AC5D ()
 * @implements B4ED:0079:0019:2129
 * @implements B4ED:0092:001C:7E78
 * @implements B4ED:00AE:000D:F799
 * @implements B4ED:00BB:0016:C4B4
 * @implements B4ED:00D1:000A:F29B
 * @implements B4ED:00DB:002E:CBCB
 * @implements B4ED:0109:001A:B36D
 * @implements B4ED:0123:0016:7423
 * @implements B4ED:0139:0014:E047
 * @implements B4ED:014D:000E:24A0
 * @implements B4ED:015B:0023:78FA
 * @implements B4ED:016E:0010:2CC9
 * @implements B4ED:017E:0006:EFF6
 *
 * Called From: 34ED:0020:0005:0000
 */
void f__B4ED_0000_0079_AC5D()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x12);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ds, 0x00, 0x8060) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x805E) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_get_memory16(emu_ds, 0x00, 0x805C) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x805A) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_get_memory16(emu_ds, 0x00, 0x8058) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x8056) = emu_dx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_get_memory16(emu_ds, 0x00, 0x8062) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x6C6C) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x8072) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x8070) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x8068) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x80AE) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x80AC) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x8074) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x806E) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x806C) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x806A) = 0xFFFF;
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6640);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x6642);
	emu_push(0x0079);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60796: f__22A6_0796_000B_9035(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4ED; emu_last_ip = 0x0074; emu_last_length = 0x0079; emu_last_crc = 0xAC5D;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0079:
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x300;
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_ds);
	emu_ax = 0x25E8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0092); emu_cs = 0x253D; f__253D_0000_0013_38F4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0092:
	emu_addw(&emu_sp, 0xC);
	emu_ax = 0x300;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x00AE); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__00AE:
	emu_addw(&emu_sp, 0xA);
	emu_push(emu_ds);
	emu_ax = 0x25F2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00BB); emu_cs = 0x256D; f__256D_0004_001C_9F23();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__00BB:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x8066) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x8064) = emu_ax;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8066));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8064));
	emu_push(emu_cs); emu_push(0x00D1); emu_cs = 0x2605; f__2605_000C_006D_F8B2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__00D1:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x00DB); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__00DB:
	emu_pop(&emu_cx);
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805A));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x90);
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x809A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0109); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0109:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_ax, 0x285);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0123); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0123:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x809A;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8088;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0139); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0139:
	emu_addw(&emu_sp, 0xA);
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8076;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x014D); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__014D:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory8(emu_ss, emu_bp, -0x12) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	goto l__016E;
l__015B:
	emu_movw(&emu_ax, emu_bp - 0x11);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x2);
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_addb(&emu_al, 0xD7);
	emu_get_memory8(emu_ss, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
l__016E:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x6);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) < (int16)0x6) goto l__015B;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x12);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x017E); emu_cs = 0x259E; f__259E_0021_001A_E253();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__017E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0184_0010_CD7E()
 *
 * @name f__B4ED_0184_0010_CD7E
 * @implements B4ED:0184:0010:CD7E ()
 * @implements B4ED:0194:001D:5E25
 * @implements B4ED:01B1:001E:B19D
 * @implements B4ED:01CF:0014:B1F3
 * @implements B4ED:01E3:000B:F574
 * @implements B4ED:01EE:0006:8488
 * @implements B4ED:01F4:0009:01B9
 * @implements B4ED:01FD:0003:2EB7
 *
 * Called From: 34ED:0025:0005:0000
 */
void f__B4ED_0184_0010_CD7E()
{
l__0184:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8066));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8064));
	emu_push(emu_cs); emu_push(0x0194); emu_cs = 0x23E1; f__23E1_01C2_0011_24E8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0194:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x01B1); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__01B1:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x01CF); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__01CF:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x3C;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x01E3); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__01E3:
	emu_addw(&emu_sp, 0x6);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01EE); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__01EE:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x01F4); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__01F4:
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x01FD); emu_cs = 0x24DA; f__24DA_002D_0010_3EB2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__01FD:
	emu_pop(&emu_cx);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0200_000F_1FF4()
 *
 * @name f__B4ED_0200_000F_1FF4
 * @implements B4ED:0200:000F:1FF4 ()
 * @implements B4ED:020F:0044:6A12
 * @implements B4ED:0253:0016:DA6E
 * @implements B4ED:0256:0013:3AAC
 * @implements B4ED:0269:002F:EAB8
 * @implements B4ED:026C:002C:9A99
 * @implements B4ED:0298:0019:37B7
 * @implements B4ED:02B1:0025:710A
 * @implements B4ED:02C1:0015:685F
 * @implements B4ED:02D6:000A:D546
 * @implements B4ED:02E0:0023:E899
 * @implements B4ED:0303:0009:C506
 * @implements B4ED:030C:003E:5B9C
 * @implements B4ED:0330:001A:CFD9
 * @implements B4ED:034A:0022:2E92
 * @implements B4ED:036C:0022:4D70
 * @implements B4ED:0375:0019:B984
 * @implements B4ED:038E:002A:7906
 * @implements B4ED:03A3:0015:B9E5
 * @implements B4ED:03B8:001C:684D
 * @implements B4ED:03D4:000C:7044
 * @implements B4ED:03E0:000E:4927
 * @implements B4ED:03EE:0013:D256
 * @implements B4ED:0401:0007:7C39
 * @implements B4ED:0408:000F:7430
 * @implements B4ED:0417:0009:7F9F
 * @implements B4ED:0420:001D:D205
 * @implements B4ED:043D:001B:44DE
 * @implements B4ED:0458:0023:A014
 * @implements B4ED:047B:0005:922E
 * @implements B4ED:0480:0024:9E14
 * @implements B4ED:04A4:0002:AABA
 * @implements B4ED:04A8:002E:E9B3
 * @implements B4ED:04D6:0007:2BAB
 * @implements B4ED:04DD:0020:1485
 * @implements B4ED:04EF:000E:C186
 * @implements B4ED:04F2:000B:56E0
 * @implements B4ED:04FD:0009:ACAF
 * @implements B4ED:0506:000B:BC53
 * @implements B4ED:0511:0011:D9C8
 * @implements B4ED:0522:000B:BC53
 * @implements B4ED:052D:0018:173C
 * @implements B4ED:0545:0014:8E47
 * @implements B4ED:0559:001B:378D
 * @implements B4ED:0595:0003:5D04
 * @implements B4ED:0598:0016:2DF9
 * @implements B4ED:05AE:001C:684D
 * @implements B4ED:05CA:0012:D933
 * @implements B4ED:05DC:000C:1D13
 * @implements B4ED:05E3:0005:20AE
 * @implements B4ED:05E8:0016:6423
 * @implements B4ED:05FE:0005:8F7E
 * @implements B4ED:0603:0008:0927
 * @implements B4ED:060B:002D:C9E4
 * @implements B4ED:0629:000F:7DAC
 * @implements B4ED:0638:000B:FC0F
 * @implements B4ED:0643:000F:4273
 * @implements B4ED:0649:0009:FEA3
 * @implements B4ED:0652:001C:684D
 * @implements B4ED:066E:002B:A83F
 * @implements B4ED:0675:0024:2109
 * @implements B4ED:0699:0010:3DF7
 * @implements B4ED:06A9:0013:6E51
 * @implements B4ED:06BC:001C:7CF8
 * @implements B4ED:06D8:0018:E898
 * @implements B4ED:06DB:0015:4210
 * @implements B4ED:06F0:000E:F48E
 * @implements B4ED:06FE:0013:525F
 * @implements B4ED:0711:000E:3E39
 * @implements B4ED:0714:000B:1C53
 * @implements B4ED:071F:000C:3FFC
 * @implements B4ED:072B:0022:D446
 * @implements B4ED:073F:000E:5398
 * @implements B4ED:074D:0002:C03A
 * @implements B4ED:074F:0006:F7CE
 *
 * Called From: 34ED:002A:0005:0000
 */
void f__B4ED_0200_000F_1FF4()
{
l__0200:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x24);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory8(emu_ss, emu_bp, -0x1) = 0x0;
	goto l__073F;
l__020F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x4);
	emu_ah = 0x0;
	emu_dx = 0x6;
	emu_imuluw(&emu_ax, emu_dx);
	emu_cwd();
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_cx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_cx, emu_ax);
	emu_adcw(&emu_bx, emu_dx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_bx;
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_cx;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_addw(&emu_dx, 0x1E);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_dx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x20);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x20) == 0) goto l__0253;
	emu_xorw(&emu_ax, emu_ax);
	goto l__0256;
l__0253:
	emu_ax = 0x18;
l__0256:
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x20);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x20) == 0) goto l__0269;
	emu_xorw(&emu_ax, emu_ax);
	goto l__026C;
l__0269:
	emu_ax = 0x8;
l__026C:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_andw(&emu_ax, 0x3);
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x8068) = 0x0;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1E) != 0x0) goto l__0298;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = 0x0;
	emu_xorw(&emu_si, emu_si);
	goto l__0375;
l__0298:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x3);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1E) != 0x3) goto l__02B1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x5);
	emu_ah = 0x0;
	emu_si = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x20) = 0x1;
	goto l__02C1;
l__02B1:
	emu_xorw(&emu_si, emu_si);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_andw(&emu_ax, 0x40);
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_ax;
l__02C1:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x480);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x480) == 0) goto l__0303;
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02D6); emu_cs = 0x24DA; f__24DA_0004_000E_FD1B();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__02D6:
	emu_pop(&emu_cx);
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02E0); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__02E0:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6CE9);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6CE7);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6CEF));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6CF1));
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x20) = 0x0;
	goto l__0330;
l__0303:
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x030C); emu_cs = 0x252E; f__252E_0001_0018_08B3();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__030C:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x6CE1);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x6CDF);
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6CE7));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6CE9));
	emu_addw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x6CEF));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x6CF1));
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_dx;
l__0330:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x2));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_ds);
	emu_ax = 0x25FC;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x034A); emu_cs = 0x01F7; emu_String_sprintf();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__034A:
	emu_addw(&emu_sp, 0xC);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x24));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_ds);
	emu_ax = 0x9939;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x036C); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_0000_0019_1617();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__036C:
	emu_addw(&emu_sp, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
l__0375:
	emu_xorw(&emu_di, emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x8);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x8) == 0) goto l__038E;
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x2D);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
	emu_incw(&emu_di);
	goto l__03A3;
l__038E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x10) != 0) {
		emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0xF);
		emu_sbbw(&emu_get_memory16(emu_ss, emu_bp, -0xE), 0x0);
		emu_incw(&emu_di);
	}
l__03A3:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x4);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x4) == 0) goto l__0408;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03B8); f__B4ED_07B6_0013_1343();
l__03B8:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_si;
	emu_incw(&emu_si);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x03D4); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_04AC_0033_548A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__03D4:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03E0); f__B4ED_0AA5_0010_6B85();
l__03E0:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs);
	emu_push(0x03EE); f__B4ED_0BD4_001B_FFBA();
l__03EE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x2D;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_cs); emu_push(0x0401); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0401:
	emu_addw(&emu_sp, 0x6);
	emu_incw(&emu_di);
	goto l__04A8;
l__0408:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x480);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x480) != 0) goto l__0417;
	goto l__04A8;
l__0417:
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0420); f__B4ED_07B6_0013_1343();
l__0420:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_si;
	emu_incw(&emu_si);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x043D); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_04AC_0033_548A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__043D:
	emu_addw(&emu_sp, 0xE);
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x6);
	emu_andw(&emu_ax, 0x480);
	emu_cmpw(&emu_ax, 0x80);
	if (emu_ax == 0x80) goto l__0458;
	emu_cmpw(&emu_ax, 0x400);
	if (emu_ax == 0x400) goto l__0480;
	/* Unresolved jump */ emu_ip = 0x04A6; emu_last_cs = 0xB4ED; emu_last_ip = 0x0456; emu_last_length = 0x001B; emu_last_crc = 0x44DE; emu_call();
l__0458:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x78;
	emu_push(emu_ax);
	emu_ax = 0x130;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x047B); emu_cs = 0x3488; overlay(0x3488, 0); f__B488_0000_0027_45A9();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__047B:
	emu_addw(&emu_sp, 0x10);
	goto l__04A8;
l__0480:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_ax = 0x78;
	emu_push(emu_ax);
	emu_ax = 0x26;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x18;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x04A4); emu_cs = 0x2C17; f__2C17_000C_002F_3016();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__04A4:
	goto l__047B;
l__04A8:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_subw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	emu_sbbw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x1;
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cmpw(&emu_bx, 0x3);
	if (emu_bx <= 0x3) goto l__04D6;
	/* Unresolved jump */ emu_ip = 0x0574; emu_last_cs = 0xB4ED; emu_last_ip = 0x04D3; emu_last_length = 0x002E; emu_last_crc = 0xE9B3; emu_call();
l__04D6:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x755);
	switch (emu_ip) {
		case 0x04DD: goto l__04DD;
		case 0x0506: goto l__0506;
		case 0x0522: goto l__0522;
		case 0x0559: goto l__0559;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4ED; emu_last_ip = 0x04D8; emu_last_length = 0x0007; emu_last_crc = 0x2BAB;
			emu_call();
			return;
	}
l__04DD:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x5);
	emu_ah = 0x0;
	emu_subw(&emu_ax, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
l__04EF:
	emu_cwd();
	emu_push(emu_dx);
	emu_push(emu_ax);
l__04F2:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs); emu_push(0x04FD); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__04FD:
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	goto l__0595;
l__0506:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x0511); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_06F6_0012_197D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0511:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x5);
	emu_ah = 0x0;
	goto l__04EF;
l__0522:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x052D); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_06F6_0012_197D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__052D:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_subw(&emu_ax, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_cwd();
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1A));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x1C));
	emu_push(emu_cs); emu_push(0x0545); emu_cs = 0x01F7; f__01F7_04E0_0004_E219();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0545:
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_subw(&emu_get_memory16(emu_ss, emu_bp, -0x10), emu_dx);
	emu_sbbw(&emu_get_memory16(emu_ss, emu_bp, -0xE), emu_ax);
	goto l__0595;
l__0559:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x5);
	emu_ah = 0x0;
	emu_si = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x1;
	emu_xorw(&emu_ax, emu_ax);
	emu_dx = 0x14;
	emu_push(emu_ax);
	emu_push(emu_dx);
	goto l__04F2;
l__0595:
	goto l__0629;
l__0598:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x16);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x18);
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = emu_dx;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x05AE); f__B4ED_07B6_0013_1343();
l__05AE:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_si;
	emu_incw(&emu_si);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x05CA); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_04AC_0033_548A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__05CA:
	emu_addw(&emu_sp, 0xE);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1E) != 0x1) goto l__05DC;
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_si != emu_get_memory16(emu_ss, emu_bp, -0x4)) goto l__05DC;
	emu_xorw(&emu_si, emu_si);
	goto l__05E3;
l__05DC:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x3);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1E) == 0x3) {
		emu_decw(&emu_si);
	}
l__05E3:
	emu_push(emu_cs); emu_push(0x05E8); emu_cs = 0x29E8; emu_Input_Keyboard_NextKey();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__05E8:
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__0603;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B4), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B4) == 0x0) goto l__0603;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x05FE); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_0476_0030_9D41();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__05FE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	goto l__074F;
l__0603:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x060B); f__B4ED_0AA5_0010_6B85();
l__060B:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
		if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0603;
		if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
			emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
			if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0603;
		}
	}
l__0629:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xE);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0638;
	goto l__0598;
l__0638:
	if (!emu_flags.zf) goto l__0643;
	emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
	if (emu_dx <= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0643;
	goto l__0598;
l__0643:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), 0x2);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1E) != 0x2) goto l__0675;
l__0649:
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x1);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0652); f__B4ED_07B6_0013_1343();
l__0652:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_si;
	emu_incw(&emu_si);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x066E); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_04AC_0033_548A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__066E:
	emu_addw(&emu_sp, 0xE);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0649;
l__0675:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x10);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x10) == 0) goto l__06DB;
	emu_ax = 0x2FD;
	emu_push(emu_ax);
	emu_ax = 0x3F;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x998A);
	emu_addw(&emu_ax, 0x3);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0699); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0699:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs);
	emu_push(0x06A9); f__B4ED_0BD4_001B_FFBA();
l__06A9:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xF;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x06BC); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__06BC:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x300;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C32));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x06D8); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__06D8:
	emu_addw(&emu_sp, 0xA);
l__06DB:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_testw(&emu_get_memory16(emu_es, emu_bx, 0x6), 0x8);
	if ((emu_get_memory16(emu_es, emu_bx, 0x6) & 0x8) == 0) goto l__0714;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x06F0); f__B4ED_0AA5_0010_6B85();
l__06F0:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs);
	emu_push(0x06FE); f__B4ED_0BD4_001B_FFBA();
l__06FE:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x2D;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C38));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C36));
	emu_push(emu_cs); emu_push(0x0711); emu_cs = 0x259E; f__259E_0006_0016_858A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0711:
	emu_addw(&emu_sp, 0x6);
l__0714:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x071F); emu_cs = 0x352A; overlay(0x352A, 0); f__B52A_0476_0030_9D41();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__071F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incb(&emu_get_memory8(emu_ss, emu_bp, -0x1));
	emu_addw(&emu_get_memory16(emu_ds, 0x00, 0x805E), 0x8);
	goto l__072B;
l__072B:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x14);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__072B;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx > emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__072B;
	}
l__073F:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ds, 0x00, 0x805E));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x4), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x4) == 0x0) goto l__074D;
	goto l__020F;
l__074D:
	goto l__074F;
l__074F:
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
 * Decompiled function f__B4ED_075D_002B_59B5()
 *
 * @name f__B4ED_075D_002B_59B5
 * @implements B4ED:075D:002B:59B5 ()
 * @implements B4ED:0788:0023:561F
 * @implements B4ED:07AB:000B:E321
 * @implements B4ED:07B2:0004:893F
 *
 * Called From: B4ED:07C6:0013:1343
 */
void f__B4ED_075D_002B_59B5()
{
l__075D:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x4);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8070);
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x8058);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x8056);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_bx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_cmpb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0x6));
	if (emu_al <= emu_get_memory8(emu_ss, emu_bp,  0x6)) goto l__0788;
	goto l__07B2;
l__0788:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x2);
	emu_ah = 0x0;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8068));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x8068)) goto l__07B2;
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x1);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x07AB); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0000_0019_F96A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__07AB:
	emu_addw(&emu_sp, 0x6);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x8070));
l__07B2:
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_07B6_0013_1343()
 *
 * @name f__B4ED_07B6_0013_1343
 * @implements B4ED:07B6:0013:1343 ()
 * @implements B4ED:07C9:0031:DE45
 * @implements B4ED:07F7:0003:9C09
 * @implements B4ED:07FA:000A:FB76
 * @implements B4ED:0804:0048:45EC
 * @implements B4ED:0817:0035:D459
 * @implements B4ED:084C:001F:079B
 * @implements B4ED:0863:0008:ADC8
 * @implements B4ED:0864:0007:EBC8
 * @implements B4ED:086B:0013:0001
 * @implements B4ED:087E:000C:91BC
 * @implements B4ED:0887:0003:9C25
 * @implements B4ED:088A:0021:7FDF
 * @implements B4ED:089D:000E:5705
 * @implements B4ED:08AB:002C:7E4B
 * @implements B4ED:08D7:0022:BFE2
 * @implements B4ED:08F9:0022:0A36
 * @implements B4ED:090D:000E:CEAE
 * @implements B4ED:091B:0036:53F7
 * @implements B4ED:0985:001E:72A5
 * @implements B4ED:09A3:0008:A137
 * @implements B4ED:09AB:0023:8584
 * @implements B4ED:09AE:0020:96D5
 * @implements B4ED:09CE:001F:079B
 * @implements B4ED:09E5:0008:ADC8
 * @implements B4ED:09E6:0007:EBC8
 * @implements B4ED:09ED:0013:0001
 * @implements B4ED:0A00:0013:9139
 * @implements B4ED:0A09:000A:8A0B
 * @implements B4ED:0A13:000A:B57F
 * @implements B4ED:0A1D:001B:9BB7
 * @implements B4ED:0A38:0020:556A
 * @implements B4ED:0A58:0014:14B5
 * @implements B4ED:0A6C:0023:78F0
 * @implements B4ED:0A7F:0010:2CD1
 * @implements B4ED:0A8F:000F:896B
 * @implements B4ED:0A9E:0007:EF7C
 * @implements B4ED:0AA0:0005:8BCF
 *
 * Called From: B4ED:03B5:0015:B9E5
 * Called From: B4ED:041D:0009:7F9F
 * Called From: B4ED:05AB:0016:2DF9
 * Called From: B4ED:064F:000F:4273
 * Called From: B4ED:064F:0009:FEA3
 */
void f__B4ED_07B6_0013_1343()
{
l__07B6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x16);
	emu_push(emu_si);
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x8068));
	emu_al = emu_get_memory8(emu_ss, emu_bp,  0x6);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x07C9); f__B4ED_075D_002B_59B5();
l__07C9:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8072);
	emu_dx = 0xA;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x805C);
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x805A);
	emu_addw(&emu_bx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_bx;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0xFFFF);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) != 0xFFFF) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x4);
		emu_cmpb(&emu_al, emu_get_memory8(emu_ss, emu_bp,  0x6));
		if (emu_al <= emu_get_memory8(emu_ss, emu_bp,  0x6)) goto l__07FA;
	}
l__07F7:
	goto l__0AA0;
l__07FA:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8074), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x8074) != 0x0) goto l__0804;
	goto l__088A;
l__0804:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x806A), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x806A) == 0xFFFF) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x8);
		emu_ah = 0x0;
		emu_get_memory16(emu_ds, 0x00, 0x806A) = emu_ax;
	}
l__0817:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x806A);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x806A));
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0887;
	emu_get_memory16(emu_ds, 0x00, 0x8074) = 0x0;
	emu_incw(&emu_get_memory16(emu_ds, 0x00, 0x8072));
	emu_get_memory16(emu_ds, 0x00, 0x80AE) = 0x2;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x9), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x9) == 0x0) goto l__086B;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x9);
	emu_ah = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x80AC) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__0864;
l__084C:
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x809A);
	emu_ax = (int8)emu_al;
	emu_cwd();
	emu_idivw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x80AC));
	emu_get_memory8(emu_ds, emu_si, 0x8076) = emu_al;
	emu_orb(&emu_al, emu_al);
	if (emu_al == 0) {
		emu_get_memory8(emu_ds, emu_si, 0x8076) = 0x1;
	}
l__0863:
	emu_incw(&emu_si);
l__0864:
	emu_cmpw(&emu_si, 0x12);
	if ((int16)emu_si < (int16)0x12) goto l__084C;
	goto l__0887;
l__086B:
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x809A;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8076;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x087E); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__087E:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ds, 0x00, 0x80AC) = 0x1;
l__0887:
	goto l__0AA0;
l__088A:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x806A), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x806A) == 0xFFFF) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x6);
		emu_ah = 0x0;
		emu_get_memory16(emu_ds, 0x00, 0x806A) = emu_ax;
	}
l__089D:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x806A);
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x806A));
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax == 0) goto l__08AB;
	goto l__0AA0;
l__08AB:
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_cl = 0x4;
	emu_shlw(&emu_ax, emu_cl);
	emu_addw(&emu_ax, 0x90);
	emu_dx = 0x3;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C32);
	emu_addw(&emu_dx, emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C34));
	emu_push(emu_dx);
	emu_push(emu_ds);
	emu_ax = 0x809A;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x08D7); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__08D7:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ds, 0x00, 0x8074) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x5), 0x55);
	if (emu_get_memory8(emu_es, emu_bx, 0x5) != 0x55) goto l__08F9;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC7;
	emu_push(emu_ax);
	emu_ax = 0x13F;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	goto l__090D;
l__08F9:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xC7;
	emu_push(emu_ax);
	emu_ax = 0x13F;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x5);
	emu_ah = 0x0;
l__090D:
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x353F;
	emu_es = emu_ax;

	/* Call based on memory/register values */
	emu_ip = emu_get_memory16(emu_es, 0x00, 0x6668);
	emu_push(emu_cs);
	emu_cs = emu_get_memory16(emu_es, 0x00, 0x666A);
	emu_push(0x091B);
	switch ((emu_cs << 16) + emu_ip) {
		case 0x22A60D31: f__22A6_0D31_0015_A4C3(); break;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4ED; emu_last_ip = 0x0916; emu_last_length = 0x000E; emu_last_crc = 0xCEAE;
			emu_call();
			return;
	}
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__091B:
	emu_addw(&emu_sp, 0xA);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8F) == 0x0) goto l__0985;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D8F), 0x4);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D8F) == 0x4) goto l__0985;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8062), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x8062) == 0xFFFF) goto l__0985;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8072), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x8072) == 0x0) goto l__0985;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x37B6), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x37B6) != 0x0) goto l__0985;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x8062);
	emu_addw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x8072));
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_push(emu_ax);
	/* Unresolved call */ emu_push(emu_cs); emu_push(0x0951); emu_cs = 0x3483; emu_ip = 0x002A; emu_last_cs = 0xB4ED; emu_last_ip = 0x094C; emu_last_length = 0x0036; emu_last_crc = 0x53F7; emu_call();
	/* Unresolved jump */ emu_ip = 0x0951; emu_last_cs = 0xB4ED; emu_last_ip = 0x0951; emu_last_length = 0x0036; emu_last_crc = 0x53F7; emu_call();
l__0985:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x0) == 0x0) goto l__09AE;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x5);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x0));
	emu_push(emu_cs); emu_push(0x09A3); emu_cs = 0x0FCB; f__0FCB_005F_001C_FDC4();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__09A3:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x09AB); f__B4ED_0BF4_001B_A3A9();
l__09AB:
	emu_addw(&emu_sp, 0x6);
l__09AE:
	emu_get_memory16(emu_ds, 0x00, 0x80AE) = 0x1;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x7), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x7) == 0x0) goto l__09ED;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x7);
	emu_ah = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x80AC) = emu_ax;
	emu_xorw(&emu_si, emu_si);
	goto l__09E6;
l__09CE:
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x809A);
	emu_ax = (int8)emu_al;
	emu_cwd();
	emu_idivw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x80AC));
	emu_get_memory8(emu_ds, emu_si, 0x8076) = emu_al;
	emu_orb(&emu_al, emu_al);
	if (emu_al == 0) {
		emu_get_memory8(emu_ds, emu_si, 0x8076) = 0x1;
	}
l__09E5:
	emu_incw(&emu_si);
l__09E6:
	emu_cmpw(&emu_si, 0x12);
	if ((int16)emu_si < (int16)0x12) goto l__09CE;
	goto l__0A09;
l__09ED:
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x809A;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8076;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A00); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0A00:
	emu_addw(&emu_sp, 0xA);
	emu_get_memory16(emu_ds, 0x00, 0x80AC) = 0x1;
l__0A09:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A38), 0xFFFF);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A38) == 0xFFFF) goto l__0A13;
	goto l__0AA0;
l__0A13:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x8072), 0x2);
	if (emu_get_memory16(emu_ds, 0x00, 0x8072) == 0x2) goto l__0A1D;
	goto l__0AA0;
l__0A1D:
	emu_ax = 0x21;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0A38); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0A38:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x112;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xD7;
	emu_push(emu_ax);
	emu_ax = 0xBD;
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x2620;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A58); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0A58:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ds, 0x00, 0x6C6C) = 0x0;
	emu_get_memory8(emu_ss, emu_bp, -0x16) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	goto l__0A7F;
l__0A6C:
	emu_movw(&emu_ax, emu_bp - 0x15);
	emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_addw(&emu_bx, emu_ax);
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x6);
	emu_addb(&emu_al, 0xD7);
	emu_get_memory8(emu_ss, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x6));
l__0A7F:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x6);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x6) < (int16)0x6) goto l__0A6C;
	emu_push(emu_ss);
	emu_movw(&emu_ax, emu_bp - 0x16);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0A8F); emu_cs = 0x259E; f__259E_0021_001A_E253();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0A8F:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8066));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x8064));
	emu_push(emu_cs); emu_push(0x0A9E); emu_cs = 0x2605; f__2605_000C_006D_F8B2();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0A9E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
l__0AA0:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0AA5_0010_6B85()
 *
 * @name f__B4ED_0AA5_0010_6B85
 * @implements B4ED:0AA5:0010:6B85 ()
 * @implements B4ED:0AB5:000A:21D5
 * @implements B4ED:0ABF:001C:4DFB
 * @implements B4ED:0AD4:0007:52A6
 * @implements B4ED:0ADB:0038:50FD
 * @implements B4ED:0AF9:001A:F677
 * @implements B4ED:0B13:0005:8F6E
 * @implements B4ED:0B18:0011:B6CD
 * @implements B4ED:0B29:000B:DF20
 * @implements B4ED:0B2C:0008:8E34
 * @implements B4ED:0B34:000B:C01D
 * @implements B4ED:0B3F:0020:1BA6
 * @implements B4ED:0B5F:0010:125F
 * @implements B4ED:0B63:000C:18B8
 * @implements B4ED:0B68:0007:F468
 * @implements B4ED:0B6F:0004:FDF9
 * @implements B4ED:0B73:0020:F173
 * @implements B4ED:0B93:001C:12CF
 * @implements B4ED:0B98:0017:BCFF
 * @implements B4ED:0B99:0016:BC73
 * @implements B4ED:0B9E:0011:D835
 * @implements B4ED:0BAF:0017:53DB
 * @implements B4ED:0BC6:0008:97B0
 * @implements B4ED:0BC9:0005:3538
 * @implements B4ED:0BCE:0006:F7CE
 *
 * Called From: B4ED:03DD:000C:7044
 * Called From: B4ED:0608:0008:0927
 * Called From: B4ED:06ED:0015:4210
 */
void f__B4ED_0AA5_0010_6B85()
{
l__0AA5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_push(emu_cs); emu_push(0x0AB5); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0470_000E_519D();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0AB5:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x80AE), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x80AE) != 0x0) goto l__0ABF;
	goto l__0BC9;
l__0ABF:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x806E);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x806C);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0ADB;
	if (emu_ax == emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx < emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0ADB;
	}
l__0AD4:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__0ADB;
	goto l__0BC9;
l__0ADB:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x7);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ds, 0x00, 0x806E) = emu_ax;
	emu_get_memory16(emu_ds, 0x00, 0x806C) = emu_dx;
	emu_decw(&emu_get_memory16(emu_ds, 0x00, 0x80AC));
	if (emu_get_memory16(emu_ds, 0x00, 0x80AC) != 0) {
		emu_orw(&emu_di, emu_di);
		if (emu_di == 0) goto l__0B34;
	}
l__0AF9:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x80AE), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x80AE) != 0x1) goto l__0B18;
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x809A;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8088;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B13); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0B13:
	emu_addw(&emu_sp, 0xA);
	goto l__0B2C;
l__0B18:
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8088;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B29); emu_cs = 0x01F7; emu_Tools_Memset();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0B29:
	emu_addw(&emu_sp, 0x8);
l__0B2C:
	emu_get_memory16(emu_ds, 0x00, 0x80AE) = 0x0;
	goto l__0B9E;
l__0B34:
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x80AE), 0x1);
	if (emu_get_memory16(emu_ds, 0x00, 0x80AE) != 0x1) goto l__0B6F;
	emu_xorw(&emu_si, emu_si);
	goto l__0B68;
l__0B3F:
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x8076);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x8088);
	emu_ax = (int8)emu_al;
	emu_pop(&emu_dx);
	emu_addw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x809A);
	emu_ax = (int8)emu_al;
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0x2)) goto l__0B5F;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x2);
	goto l__0B63;
l__0B5F:
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x809A);
l__0B63:
	emu_get_memory8(emu_ds, emu_si, 0x8088) = emu_al;
	emu_incw(&emu_si);
l__0B68:
	emu_cmpw(&emu_si, 0x12);
	if ((int16)emu_si < (int16)0x12) goto l__0B3F;
	goto l__0B9E;
l__0B6F:
	emu_xorw(&emu_si, emu_si);
	goto l__0B99;
l__0B73:
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x8088);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_al = emu_get_memory8(emu_ds, emu_si, 0x8076);
	emu_ax = (int8)emu_al;
	emu_pop(&emu_dx);
	emu_subw(&emu_dx, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x2), 0x0);
	if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x2) <= (int16)0x0) goto l__0B93;
	emu_al = emu_get_memory8(emu_ss, emu_bp, -0x2);
	emu_get_memory8(emu_ds, emu_si, 0x8088) = emu_al;
	goto l__0B98;
l__0B93:
	emu_get_memory8(emu_ds, emu_si, 0x8088) = 0x0;
l__0B98:
	emu_incw(&emu_si);
l__0B99:
	emu_cmpw(&emu_si, 0x12);
	if ((int16)emu_si < (int16)0x12) goto l__0B73;
l__0B9E:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__0BC9;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs);
	emu_push(0x0BAF); f__B4ED_0BD4_001B_FFBA();
l__0BAF:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0xDD;
	emu_push(emu_ax);
	emu_ax = 0xD7;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x998A));
	emu_push(emu_cs); emu_push(0x0BC6); emu_cs = 0x2BA5; f__2BA5_0006_009C_A3D1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0BC6:
	emu_addw(&emu_sp, 0x8);
l__0BC9:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x80AE);
	goto l__0BCE;
l__0BCE:
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
 * Decompiled function f__B4ED_0BD4_001B_FFBA()
 *
 * @name f__B4ED_0BD4_001B_FFBA
 * @implements B4ED:0BD4:001B:FFBA ()
 * @implements B4ED:0BEF:0005:60C3
 *
 * Called From: B4ED:03EB:000E:4927
 * Called From: B4ED:06A6:0010:3DF7
 * Called From: B4ED:06FB:000E:F48E
 * Called From: B4ED:0BAC:0011:D835
 * Called From: B4ED:0BAC:001C:12CF
 * Called From: B4ED:0BAC:0017:BCFF
 */
void f__B4ED_0BD4_001B_FFBA()
{
l__0BD4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = 0x12;
	emu_push(emu_ax);
	emu_push(emu_ds);
	emu_ax = 0x8088;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_addw(&emu_ax, 0x285);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0BEF); emu_cs = 0x01F7; emu_Tools_Memmove();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0BEF:
	emu_addw(&emu_sp, 0xA);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0BF4_001B_A3A9()
 *
 * @name f__B4ED_0BF4_001B_A3A9
 * @implements B4ED:0BF4:001B:A3A9 ()
 * @implements B4ED:0C0F:0017:23CA
 * @implements B4ED:0C26:002D:EEC9
 * @implements B4ED:0C29:002A:12B1
 * @implements B4ED:0C3E:0015:D153
 * @implements B4ED:0C53:0025:0CBC
 * @implements B4ED:0C5D:001B:FAE7
 * @implements B4ED:0C78:002B:3DD8
 * @implements B4ED:0CA3:0012:1689
 * @implements B4ED:0CB0:0005:8BCF
 *
 * Called From: B4ED:09A8:0008:A137
 */
void f__B4ED_0BF4_001B_A3A9()
{
l__0BF4:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_push(emu_si);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x0C0F); f__B4ED_0CB5_0015_3E7D();
l__0C0F:
	emu_addw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__0C29;
l__0C26:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
l__0C29:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
		emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
		emu_cmpb(&emu_al, emu_get_memory8(emu_ds, 0x00, 0x264A));
		if (emu_al != emu_get_memory8(emu_ds, 0x00, 0x264A)) goto l__0C26;
	}
l__0C3E:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__0C53;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	goto l__0C5D;
l__0C53:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x0;
l__0C5D:
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xD7;
	emu_push(emu_ax);
	emu_push(emu_si);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0C78); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0C78:
	emu_addw(&emu_sp, 0xE);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x8);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x6));
	if (emu_ax == 0) goto l__0CB0;
	emu_ax = 0x100;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xD7;
	emu_push(emu_ax);
	emu_ax = emu_si;
	emu_addw(&emu_ax, 0x12);
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_cs); emu_push(0x0CA3); emu_cs = 0x10E4; f__10E4_1EF1_0040_01F8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34ED) { overlay(0x34ED, 1); }
l__0CA3:
	emu_addw(&emu_sp, 0xE);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0xD;
l__0CB0:
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4ED_0CB5_0015_3E7D()
 *
 * @name f__B4ED_0CB5_0015_3E7D
 * @implements B4ED:0CB5:0015:3E7D ()
 * @implements B4ED:0CCA:0018:4398
 * @implements B4ED:0CE2:0024:596B
 * @implements B4ED:0CF4:0012:9FA9
 *
 * Called From: B4ED:0C0C:001B:A3A9
 */
void f__B4ED_0CB5_0015_3E7D()
{
l__0CB5:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0D04; emu_last_cs = 0xB4ED; emu_last_ip = 0x0CBE; emu_last_length = 0x0015; emu_last_crc = 0x3E7D; emu_call(); return; }
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xA);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0xC));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0D04; emu_last_cs = 0xB4ED; emu_last_ip = 0x0CC6; emu_last_length = 0x0015; emu_last_crc = 0x3E7D; emu_call(); return; }
	goto l__0CF4;
l__0CCA:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xE1);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0xE1) goto l__0CE2;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x1;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	goto l__0CF4;
l__0CE2:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xA));
l__0CF4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__0CCA;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
