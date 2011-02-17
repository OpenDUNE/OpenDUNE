/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

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
	emu_push(0x00BD); emu_Unknown_B4E9_0000();
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
	emu_push(emu_cs); emu_push(0x00F9); emu_cs = 0x10E4; emu_GUI_DisplayText();
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
	emu_push(emu_cs); emu_push(0x0122); emu_cs = 0x34CD; overlay(0x34CD, 0); emu_Unit_B4CD_01BF();
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
	emu_push(emu_cs); emu_push(0x01A5); emu_cs = 0x10E4; emu_GUI_Widget_DrawBorder();
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
	emu_push(emu_cs); emu_push(0x0223); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_Draw();
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
	emu_push(0x026D); emu_Unknown_B4E9_0000();
l__026D:
	emu_pop(&emu_cx);

	GUI_Widget_ActionPanel_Draw(1);

	goto l__031E;
l__027B:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x3A02);
	emu_get_memory16(emu_ds, 0x00, 0x38F0) = emu_ax;

	GUI_Widget_ActionPanel_Draw(1);

	emu_get_memory16(emu_ds, 0x00, 0x3A36) = 0x5;
	goto l__02CF;
l__0293:
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_push(emu_cs); emu_push(0x029E); emu_cs = 0x1A34; emu_Unit_Select();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34E9) { overlay(0x34E9, 1); }
l__029E:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);

	GUI_Widget_ActionPanel_Draw(1);

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
	emu_pop(&emu_cx);
	goto l__02CF;

l__02C5:
	GUI_Widget_ActionPanel_Draw(1);

l__02CF:
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x37AA));
	emu_push(emu_cs);
	emu_push(0x02D7); emu_Unknown_B4E9_0000();
l__02D7:
	emu_pop(&emu_cx);

	goto l__031E;
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
	emu_pop(&emu_cx);
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
