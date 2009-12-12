/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4E9_0000_0013_DC68()
 *
 * @name f__B4E9_0000_0013_DC68
 * @implements B4E9:0000:0013:DC68 ()
 * @implements B4E9:0013:0002:C4BA
 * @implements B4E9:0015:0009:A588
 * @implements B4E9:001E:0007:43C2
 * @implements B4E9:0025:0003:2E57
 *
 * Called From: 34E9:0020:0005:0000
 * Called From: B4E9:00BA:000B:15E3
 * Called From: B4E9:026A:0008:1572
 * Called From: B4E9:02D4:0009:1570
 * Called From: B4E9:02D4:0008:955C
 * Called From: B4E9:03B7:000A:2956
 * Called From: B4E9:03C9:0009:B9A3
 */
void f__B4E9_0000_0013_DC68()
{
l__0000:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) == 0x0) goto l__0015;
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0013); emu_cs = 0x2618; f__2618_0008_001B_FAA6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__0013:
	goto l__001E;
l__0015:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x001E); emu_cs = 0x2618; f__2618_003F_001B_FAA6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__001E:
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_ax = emu_si;
	goto l__0025;
l__0025:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E9_0028_0013_DF68()
 *
 * @name f__B4E9_0028_0013_DF68
 * @implements B4E9:0028:0013:DF68 ()
 * @implements B4E9:003B:0002:C4BA
 * @implements B4E9:0046:0007:43C2
 * @implements B4E9:004D:0003:2E57
 *
 * Called From: 34E9:0025:0005:0000
 */
void f__B4E9_0028_0013_DF68()
{
l__0028:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x6) == 0x0) { /* Unresolved jump */ emu_ip = 0x003D; emu_last_cs = 0xB4E9; emu_last_ip = 0x0030; emu_last_length = 0x0013; emu_last_crc = 0xDF68; emu_call(); return; }
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x003B); emu_cs = 0x2618; f__2618_0008_001B_FAA6();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__003B:
	goto l__0046;
l__0046:
	emu_pop(&emu_cx);
	emu_si = emu_ax;
	emu_ax = emu_si;
	goto l__004D;
l__004D:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4E9_0050_003F_292A()
 *
 * @name f__B4E9_0050_003F_292A
 * @implements B4E9:0050:003F:292A ()
 * @implements B4E9:006C:0023:EC45
 * @implements B4E9:0086:0009:542B
 * @implements B4E9:008F:0023:2EF9
 * @implements B4E9:00B2:000B:15E3
 * @implements B4E9:00BD:001D:7A58
 * @implements B4E9:00DA:0009:049C
 * @implements B4E9:00E3:0016:FD70
 * @implements B4E9:00E4:0015:9971
 * @implements B4E9:00F9:0005:9F6E
 * @implements B4E9:00FE:0024:BE26
 * @implements B4E9:0122:0011:1179
 * @implements B4E9:0131:0002:C13A
 * @implements B4E9:0133:0002:C03A
 * @implements B4E9:0135:0040:197F
 * @implements B4E9:0175:0019:4EE8
 * @implements B4E9:0176:0018:CEC4
 * @implements B4E9:018E:0017:E657
 * @implements B4E9:01A5:000A:1017
 * @implements B4E9:01A8:0007:36B5
 * @implements B4E9:01AF:002D:29DB
 * @implements B4E9:01DC:002D:A3B3
 * @implements B4E9:0209:001A:4ABF
 * @implements B4E9:0218:000B:74F4
 * @implements B4E9:0223:0027:798D
 * @implements B4E9:0235:0015:2C39
 * @implements B4E9:024A:0014:DFB3
 * @implements B4E9:0252:000C:F767
 * @implements B4E9:025E:0007:29B2
 * @implements B4E9:0265:0008:1572
 * @implements B4E9:026D:000A:FA15
 * @implements B4E9:0277:0004:4D0D
 * @implements B4E9:027B:000F:7A73
 * @implements B4E9:028A:0009:10CA
 * @implements B4E9:0293:000B:C287
 * @implements B4E9:029E:000B:DA1E
 * @implements B4E9:02A9:001A:E38F
 * @implements B4E9:02C3:0002:C4BA
 * @implements B4E9:02C5:0009:EC55
 * @implements B4E9:02CE:0009:1570
 * @implements B4E9:02CF:0008:955C
 * @implements B4E9:02D7:0002:8F3A
 * @implements B4E9:02D9:0025:A3BA
 * @implements B4E9:02FE:001B:9FD0
 * @implements B4E9:0301:0018:CEC4
 * @implements B4E9:0319:0003:A2B6
 * @implements B4E9:031C:0002:C03A
 * @implements B4E9:031E:0008:1199
 * @implements B4E9:0326:0005:EAF1
 * @implements B4E9:032B:0006:F7CE
 *
 * Called From: 34E9:002A:0005:0000
 */
void f__B4E9_0050_003F_292A()
{
l__0050:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0xA);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_cmpw(&emu_si, 0x3);
	if (emu_si == 0x3) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
		emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
		if (emu_ax == 0) {
			emu_si = 0x4;
		}
	}
l__006C:
	emu_cmpw(&emu_si, 0x4);
	if (emu_si == 0x4) {
		emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
		emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
		if (emu_ax != 0) {
			emu_get_memory16(emu_ds, 0x00, 0x3A0C) = 0x0;
			emu_get_memory16(emu_ds, 0x00, 0x3A0A) = 0x0;
		}
	}
l__0086:
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x008F); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__008F:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x3A0E), emu_si);
	if (emu_get_memory16(emu_ds, 0x00, 0x3A0E) != emu_si) goto l__00B2;
	emu_ax = emu_si;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E8A;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x18), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x18) != 0x0) goto l__00B2;
	goto l__031E;
l__00B2:
	emu_di = emu_get_memory16(emu_ds, 0x00, 0x3A0E);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x00BD); f__B4E9_0000_0013_DC68();
l__00BD:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x3A0E) = emu_si;
	emu_get_memory16(emu_ds, 0x00, 0x3A10) = emu_si;
	emu_get_memory16(emu_ds, 0x00, 0x37B8) = 0x1;
	emu_bx = emu_di;
	emu_cmpw(&emu_bx, 0x4);
	if (emu_bx > 0x4) goto l__0133;
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x33B);
	switch (emu_ip) {
		case 0x00DA: goto l__00DA;
		case 0x00E4: goto l__00E4;
		case 0x00FE: goto l__00FE;
		case 0x0133: goto l__0133;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4E9; emu_last_ip = 0x00D5; emu_last_length = 0x001D; emu_last_crc = 0x7A58;
			emu_call();
			return;
	}
l__00DA:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x38F0));
	emu_push(emu_cs); emu_push(0x00E3); emu_cs = 0x0F78; emu_Map_SetSelection();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__00E3:
	emu_pop(&emu_cx);
l__00E4:
	emu_get_memory16(emu_ds, 0x00, 0x3A36) = 0x0;
	emu_ax = 0xFFFF;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x00F9); emu_cs = 0x10E4; f__10E4_09AB_0031_5E8E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__00F9:
	emu_addw(&emu_sp, 0x6);
	goto l__0135;
l__00FE:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A0A);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	if (emu_ax == 0) goto l__0131;
	emu_cmpw(&emu_si, 0x3);
	if (emu_si == 0x3) goto l__0131;
	emu_cmpw(&emu_si, 0x1);
	if (emu_si == 0x1) goto l__0131;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0C));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3A0A));
	emu_ax = 0x2;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0122); emu_cs = 0x34CD; overlay(0x34CD, 0); f__B4CD_01BF_0016_E78F();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__0122:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ds, 0x00, 0x3A0C) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x3A0A) = 0x0;
l__0131:
	goto l__0135;
l__0133:
	goto l__0135;
l__0135:
	emu_ax = emu_di;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E8A;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x12), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x12) == 0x0) goto l__0176;
	emu_ax = emu_si;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E8A;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_es, emu_bx, 0x14), 0x0);
	if (emu_get_memory16(emu_es, emu_bx, 0x14) == 0x0) goto l__0176;
	emu_get_memory16(emu_ds, 0x00, 0x3A12) = 0x1;
	emu_get_memory16(emu_ds, 0x00, 0x3A14) = 0x1;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0175); emu_cs = 0x10E4; f__10E4_2099_0012_A216();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__0175:
	emu_pop(&emu_cx);
l__0176:
	emu_ax = emu_si;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E8A;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_cs); emu_push(0x018E); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__018E:
	emu_pop(&emu_cx);
	emu_cmpw(&emu_get_memory16(emu_ds, 0x00, 0x6D5D), 0x0);
	if (emu_get_memory16(emu_ds, 0x00, 0x6D5D) == 0x0) goto l__01A8;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs); emu_push(0x01A5); emu_cs = 0x10E4; f__10E4_057F_0052_2B00();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__01A5:
	emu_addw(&emu_sp, 0x6);
l__01A8:
	emu_orw(&emu_si, emu_si);
	if (emu_si != 0) goto l__01AF;
	goto l__0252;
l__01AF:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3C28);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x3C26);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
	emu_ax = emu_si;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E8A;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x10);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_dx;
	goto l__0235;
l__01DC:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_andw(&emu_get_memory16(emu_es, emu_bx, 0x2E), 0xFFFE);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_orw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0x8);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0xA));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ah = 0x0;
	emu_push(emu_ax);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x4));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0xA);
	emu_incw(&emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0209); emu_cs = 0x01F7; f__01F7_286D_0023_9A13();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__0209:
	emu_addw(&emu_sp, 0x8);
	emu_orw(&emu_ax, emu_dx);
	if (emu_ax != 0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
		emu_andw(&emu_get_memory16(emu_es, emu_bx, 0xE), 0xFFF7);
	}
l__0218:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_push(emu_cs); emu_push(0x0223); emu_cs = 0x34A2; overlay(0x34A2, 0); f__B4A2_0729_0013_2494();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__0223:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x6));
	emu_ax = emu_get_memory16(emu_es, emu_bx, 0x2);
	emu_dx = emu_get_memory16(emu_es, emu_bx, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_dx;
l__0235:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x4));
	if (emu_ax != 0) goto l__01DC;
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C28));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x3C26));
	emu_push(emu_cs); emu_push(0x024A); emu_cs = 0x348B; overlay(0x348B, 0); f__B48B_03A4_0005_619A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__024A:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x38C4) = 0x1;
l__0252:
	emu_bx = emu_get_memory16(emu_ds, 0x00, 0x3A0E);
	emu_cmpw(&emu_bx, 0x4);
	if (emu_bx <= 0x4) goto l__025E;
	goto l__031C;
l__025E:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x331);
	switch (emu_ip) {
		case 0x0265: goto l__0265;
		case 0x027B: goto l__027B;
		case 0x0293: goto l__0293;
		case 0x02C5: goto l__02C5;
		case 0x02D9: goto l__02D9;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4E9; emu_last_ip = 0x0260; emu_last_length = 0x0007; emu_last_crc = 0x29B2;
			emu_call();
			return;
	}
l__0265:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x37AA));
	emu_push(emu_cs);
	emu_push(0x026D); f__B4E9_0000_0013_DC68();
l__026D:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0277); emu_cs = 0x10E4; f__10E4_0F1A_0088_7622();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__0277:
	emu_pop(&emu_cx);
	goto l__031E;
l__027B:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A02);
	emu_get_memory16(emu_ds, 0x00, 0x38F0) = emu_ax;
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x028A); emu_cs = 0x10E4; f__10E4_0F1A_0088_7622();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__028A:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ds, 0x00, 0x3A36) = 0x5;
	goto l__02CF;
l__0293:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x029E); emu_cs = 0x1A34; f__1A34_0F48_0018_0DB8();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__029E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02A9); emu_cs = 0x10E4; f__10E4_0F1A_0088_7622();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__02A9:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x38E2);
	emu_dx = 0x60;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2C94;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x44));
	emu_push(emu_cs); emu_push(0x02C3); emu_cs = 0x0F78; emu_Map_SetSelectionSize();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__02C3:
	goto l__02CE;
l__02C5:
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02CE); emu_cs = 0x10E4; f__10E4_0F1A_0088_7622();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__02CE:
	emu_pop(&emu_cx);
l__02CF:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x37AA));
	emu_push(emu_cs);
	emu_push(0x02D7); f__B4E9_0000_0013_DC68();
l__02D7:
	goto l__0277;
l__02D9:
	emu_cmpw(&emu_di, 0x7);
	if (emu_di == 0x7) goto l__0301;
	emu_get_memory16(emu_ds, 0x00, 0x3A34) = 0x0;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x442));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x440));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x02FE); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__02FE:
	emu_addw(&emu_sp, 0x8);
l__0301:
	emu_ax = emu_si;
	emu_dx = 0xC;
	emu_imuluw(&emu_ax, emu_dx);
	emu_dx = 0x2E8A;
	emu_bx = emu_ax;
	emu_es = emu_dx;
	emu_push(emu_get_memory16(emu_es, emu_bx, 0x16));
	emu_push(emu_cs); emu_push(0x0319); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__0319:
	goto l__0277;
l__031C:
	goto l__031E;
l__031E:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x0326); emu_cs = 0x2598; f__2598_0000_0017_EB80();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__0326:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__032B;
l__032B:
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
 * Decompiled function f__B4E9_0345_0023_FA52()
 *
 * @name f__B4E9_0345_0023_FA52
 * @implements B4E9:0345:0023:FA52 ()
 * @implements B4E9:0368:000C:4B79
 * @implements B4E9:0374:000C:5509
 * @implements B4E9:0380:0015:1E42
 * @implements B4E9:0395:0006:2AFD
 * @implements B4E9:039B:0015:7EAD
 * @implements B4E9:03B0:000A:2956
 * @implements B4E9:03BA:0009:EC47
 * @implements B4E9:03C3:0009:B9A3
 * @implements B4E9:03CC:000A:EDFF
 * @implements B4E9:03D6:0015:3476
 * @implements B4E9:03EB:0008:2C75
 * @implements B4E9:03F3:000E:D57A
 * @implements B4E9:0401:000D:0776
 * @implements B4E9:040E:000B:70BA
 * @implements B4E9:0419:0006:B1FB
 * @implements B4E9:041F:0002:2597
 *
 * Called From: 34E9:002F:0005:0000
 */
void f__B4E9_0345_0023_FA52()
{
l__0345:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_get_memory16(emu_ds, 0x00, 0x3A34) = 0x0;
	emu_ax = 0x2DCE;
	emu_es = emu_ax;
	emu_push(emu_get_memory16(emu_es, 0x00, 0x442));
	emu_push(emu_get_memory16(emu_es, 0x00, 0x440));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0368); emu_cs = 0x2B4C; f__2B4C_0002_0029_64AF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__0368:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0xFFFE;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0374); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0363_0016_83DF();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__0374:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x0380); emu_cs = 0x1DD7; f__1DD7_022D_0015_1956();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__0380:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A38);
	emu_dx = 0x1E;
	emu_imuluw(&emu_ax, emu_dx);
	emu_bx = emu_ax;
	emu_push(emu_get_memory16(emu_ds, emu_bx, 0x3810));
	emu_push(emu_cs); emu_push(0x0395); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__0395:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x039B); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0ECE_000B_BD2E();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__039B:
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03B0); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0A1E_001A_E094();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__03B0:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03BA); f__B4E9_0000_0013_DC68();
l__03BA:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03C3); emu_cs = 0x34E0; overlay(0x34E0, 0); f__B4E0_0000_000F_14AD();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__03C3:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x03CC); f__B4E9_0000_0013_DC68();
l__03CC:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03D6); emu_cs = 0x1DD7; f__1DD7_0477_000E_5C89();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__03D6:
	emu_pop(&emu_cx);
	emu_ax = 0x2DCE;
	emu_push(emu_ax);
	emu_ax = 0x440;
	emu_push(emu_ax);
	emu_ax = 0x7;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x03EB); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0A1E_001A_E094();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__03EB:
	emu_addw(&emu_sp, 0x8);
	emu_push(emu_cs); emu_push(0x03F3); emu_cs = 0x34B8; overlay(0x34B8, 0); f__B4B8_0D23_0010_BA99();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__03F3:
	emu_get_memory16(emu_ds, 0x00, 0x38C4) = 0x1;
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0401); emu_cs = 0x10E4; f__10E4_2099_0012_A216();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__0401:
	emu_pop(&emu_cx);
	emu_ax = 0x5;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x040E); emu_cs = 0x2537; f__2537_000C_001C_86CB();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__040E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_addw(&emu_ax, 0x8);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0419); emu_cs = 0x3483; overlay(0x3483, 0); f__B483_0283_0014_983A();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__0419:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	goto l__041F;
l__041F:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
