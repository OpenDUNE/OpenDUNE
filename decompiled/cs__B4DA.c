/* $Id$ */

#include "types.h"
#include "libemu.h"
#include "decompiled.h"

/**
 * Decompiled function f__B4DA_0AB8_002A_AAB2()
 *
 * @name f__B4DA_0AB8_002A_AAB2
 * @implements B4DA:0AB8:002A:AAB2 ()
 * @implements B4DA:0AE2:000D:6FB1
 * @implements B4DA:0AEF:0030:D055
 * @implements B4DA:0B1F:000E:1049
 * @implements B4DA:0B2D:0016:F446
 * @implements B4DA:0B48:001D:08D6
 * @implements B4DA:0B65:001C:98BD
 * @implements B4DA:0B81:0021:F1D5
 * @implements B4DA:0BA2:0012:DA23
 * @implements B4DA:0BB4:003F:C2EE
 * @implements B4DA:0BF3:0010:8C36
 * @implements B4DA:0C03:0008:64F7
 * @implements B4DA:0C0B:000C:6912
 * @implements B4DA:0C17:0009:2F5C
 * @implements B4DA:0C20:000E:EC25
 * @implements B4DA:0C2E:0019:5030
 * @implements B4DA:0C45:0002:C4BA
 * @implements B4DA:0C47:0013:D765
 * @implements B4DA:0C50:000A:5BEE
 * @implements B4DA:0C5A:0007:201D
 * @implements B4DA:0C61:0007:13B9
 * @implements B4DA:0C68:0008:9CC2
 * @implements B4DA:0C72:0013:81BE
 * @implements B4DA:0C75:0010:D67E
 * @implements B4DA:0C7F:0006:6417
 * @implements B4DA:0C85:000D:FD79
 * @implements B4DA:0C92:0049:646C
 * @implements B4DA:0CA5:0036:4855
 * @implements B4DA:0CC0:001B:2694
 * @implements B4DA:0CCE:000D:7E24
 * @implements B4DA:0CDB:000C:D607
 * @implements B4DA:0CDE:0009:5DE7
 * @implements B4DA:0CE4:0003:1C25
 * @implements B4DA:0CE7:0013:2896
 * @implements B4DA:0CFA:0024:359C
 * @implements B4DA:0D1E:0008:F38A
 * @implements B4DA:0D26:0046:ED1B
 * @implements B4DA:0D2C:0040:42E1
 * @implements B4DA:0D46:0026:659C
 * @implements B4DA:0D49:0023:9996
 * @implements B4DA:0D53:0019:74BF
 * @implements B4DA:0D59:0013:2896
 * @implements B4DA:0D6C:0024:8C51
 * @implements B4DA:0D90:0008:F38A
 * @implements B4DA:0D98:000B:FB35
 * @implements B4DA:0DA3:0007:92A0
 * @implements B4DA:0DAA:0022:BFB5
 * @implements B4DA:0DCC:0010:DDE7
 * @implements B4DA:0DDC:0009:522B
 * @implements B4DA:0DE5:001F:7077
 * @implements B4DA:0E04:0013:390A
 * @implements B4DA:0E17:000B:49F5
 * @implements B4DA:0E22:0021:9354
 * @implements B4DA:0E43:000E:5557
 * @implements B4DA:0E51:000D:98CF
 * @implements B4DA:0E56:0008:64F7
 * @implements B4DA:0E5E:0014:B893
 * @implements B4DA:0E5F:0013:2896
 * @implements B4DA:0E72:0023:F42C
 * @implements B4DA:0E95:0008:F38A
 * @implements B4DA:0E9D:0002:DCBA
 * @implements B4DA:0E9F:003B:09B8
 * @implements B4DA:0ED8:0002:D0BA
 * @implements B4DA:0EDA:0013:5FFA
 * @implements B4DA:0EE8:0005:92CA
 * @implements B4DA:0EEB:0002:C73A
 * @implements B4DA:0EED:000C:BD8D
 * @implements B4DA:0EF9:0002:C03A
 * @implements B4DA:0EFB:0007:D9BE
 * @implements B4DA:0F02:000C:6967
 * @implements B4DA:0F0E:0042:4333
 * @implements B4DA:0F23:002D:D607
 * @implements B4DA:0F30:0020:A8B8
 * @implements B4DA:0F50:001B:EE44
 * @implements B4DA:0F5E:000D:8D69
 * @implements B4DA:0F82:003B:FFB1
 * @implements B4DA:0F8D:0030:D5CF
 * @implements B4DA:0FBD:000B:EBA0
 * @implements B4DA:0FC8:000A:A344
 * @implements B4DA:0FD2:0025:F417
 * @implements B4DA:0FF7:0008:C54E
 * @implements B4DA:0FFF:000E:103A
 * @implements B4DA:1004:0009:2C84
 * @implements B4DA:100D:0013:FC06
 * @implements B4DA:1020:000B:6460
 * @implements B4DA:102B:0009:3AB2
 * @implements B4DA:1034:000A:A344
 * @implements B4DA:103E:0025:F417
 * @implements B4DA:1063:0008:C54E
 * @implements B4DA:106B:0008:A894
 * @implements B4DA:1073:0009:A1B5
 * @implements B4DA:107C:0006:8488
 * @implements B4DA:1082:0005:B8A6
 * @implements B4DA:1087:0006:F7CE
 *
 * Called From: 34DA:0034:0005:0000
 * Called From: B4DA:11F3:0023:09B4
 */
void f__B4DA_0AB8_002A_AAB2()
{
l__0AB8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x28);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x20) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x22) = 0x0;
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AE2); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0AE2:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xC) = emu_ax;
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0AEF); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0AEF:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0xE) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x0B36; emu_last_cs = 0xB4DA; emu_last_ip = 0x0B03; emu_last_length = 0x0030; emu_last_crc = 0xD055; emu_call(); return; }
	emu_xorw(&emu_ax, emu_ax);
	emu_xorw(&emu_dx, emu_dx);
	emu_push(emu_ax);
	emu_push(emu_dx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CE1));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6CDF));
	emu_ax = 0x3;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0B1F); emu_cs = 0x252E; emu_Screen_GetSegment_ByIndex_1();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0B1F:
	emu_pop(&emu_cx);
	emu_push(emu_dx);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x0B2D); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_LoadFile();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0B2D:
	emu_addw(&emu_sp, 0x12);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0B48;
	emu_push(emu_cs); emu_push(0x0B43); emu_cs = 0x07AE; emu_Unknown_07AE_0103();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
	/* Unresolved jump */ emu_ip = 0x0B43; emu_last_cs = 0xB4DA; emu_last_ip = 0x0B43; emu_last_length = 0x0016; emu_last_crc = 0xF446; emu_call();
l__0B48:
	emu_xorw(&emu_si, emu_si);
	emu_ax = 0x31;
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
	emu_push(emu_cs); emu_push(0x0B65); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0B65:
	emu_addw(&emu_sp, 0xE);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992F);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_subw(&emu_ax, 0xA);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs); emu_push(0x0B81); emu_cs = 0x10E4; emu_GUI_SplitText();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0B81:
	emu_addw(&emu_sp, 0x8);
	emu_get_memory16(emu_ss, emu_bp, -0x24) = emu_ax;
	emu_ax = 0x32;
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
	emu_push(emu_cs); emu_push(0x0BA2); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0BA2:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x130;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs);
	emu_push(0x0BB4); f__B4DA_1893_001C_7AC4();
l__0BB4:
	emu_addw(&emu_sp, 0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x28) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = 0x2;
	emu_get_memory16(emu_ss, emu_bp, -0x26) = 0x0;
	emu_xorw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0x10) = emu_ax;
	emu_cwd();
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = emu_dx;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0x1E);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992D);
	emu_cl = 0x3;
	emu_shlw(&emu_ax, emu_cl);
	emu_get_memory16(emu_ss, emu_bp, -0x12) = emu_ax;
	emu_push(emu_cs); emu_push(0x0BF3); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0BF3:
	emu_xorw(&emu_ax, emu_ax);
	emu_get_memory16(emu_ss, emu_bp, -0xA) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x1A) = 0x0;
	goto l__1004;
l__0C03:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0C0B); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0C0B:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x14));
	emu_push(emu_cs); emu_push(0x0C17); emu_cs = 0x34A2; overlay(0x34A2, 0); emu_GUI_Widget_HandleEvents();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0C17:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_di = emu_ax;
	emu_push(emu_cs); emu_push(0x0C20); emu_cs = 0x0642; emu_GUI_PaletteAnimate();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0C20:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) {
		emu_testw(&emu_di, 0x800);
		if ((emu_di & 0x800) == 0) goto l__0C2E;
		emu_xorw(&emu_di, emu_di);
	}
	goto l__0C50;
l__0C2E:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x14);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x16));
	if (emu_ax == 0) goto l__0C47;
	emu_testw(&emu_di, 0x8000);
	if ((emu_di & 0x8000) != 0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp, -0x1A) == 0x0) {
			emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_di;
		}
	}
l__0C45:
	goto l__0C50;
l__0C47:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0xA) != 0x0) {
		emu_get_memory16(emu_ss, emu_bp, -0x1A) = emu_di;
	}
l__0C50:
	emu_bx = emu_si;
	emu_cmpw(&emu_bx, 0x5);
	if (emu_bx <= 0x5) goto l__0C5A;
	goto l__0EF9;
l__0C5A:
	emu_shlw(&emu_bx, 0x1);

	/* Jump based on memory/register values */
	emu_ip = emu_get_memory16(emu_cs, emu_bx, 0x108D);
	switch (emu_ip) {
		case 0x0C61: goto l__0C61;
		case 0x0C75: goto l__0C75;
		case 0x0CE7: goto l__0CE7;
		case 0x0D2C: goto l__0D2C;
		case 0x0EDA: goto l__0EDA;
		case 0x0EED: goto l__0EED;
		default:
			/* In case we don't know the call point yet, call the dynamic call */
			emu_last_cs = 0xB4DA; emu_last_ip = 0x0C5C; emu_last_length = 0x0007; emu_last_crc = 0x201D;
			emu_call();
			return;
	}
l__0C61:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__0C68;
	goto l__0EFB;
l__0C68:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1A) == 0x0) goto l__0C72;
	goto l__0C7F;
l__0C72:
	emu_si = 0x1;
l__0C75:
	emu_orw(&emu_di, emu_di);
	if (emu_di == 0) goto l__0C92;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1A) == 0x0) goto l__0C85;
l__0C7F:
	emu_si = 0x5;
	goto l__0EFB;
l__0C85:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x24);
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
	goto l__0CC0;
l__0C92:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x14));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp, -0x14)) goto l__0CC0;
	if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ss, emu_bp, -0x14)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x16));
		if (emu_dx <= emu_get_memory16(emu_ss, emu_bp, -0x16)) goto l__0CC0;
	}
l__0CA5:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, 0xF);
	emu_adcw(&emu_ax, 0x0);
	emu_get_memory16(emu_ss, emu_bp, -0x14) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x16) = emu_dx;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
l__0CC0:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x26);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x24));
	if ((int16)emu_ax < (int16)emu_get_memory16(emu_ss, emu_bp, -0x24)) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x26), 0xC);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x26) <= (int16)0xC) goto l__0CE4;
	}
l__0CCE:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0xE);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x10));
	if (emu_ax == 0) goto l__0CDB;
	emu_si = 0x2;
	goto l__0CDE;
l__0CDB:
	emu_si = 0x4;
l__0CDE:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x24);
	emu_get_memory16(emu_ss, emu_bp, -0x26) = emu_ax;
l__0CE4:
	goto l__0EFB;
l__0CE7:
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x140;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0CFA); emu_cs = 0x2B6C; emu_GUI_Mouse_Hide_InRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0CFA:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D1E); emu_cs = 0x24D0; emu_GUI_Screen_Copy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0D1E:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0D26); emu_cs = 0x2B6C; emu_GUI_Mouse_Show_InRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0D26:
	emu_si = 0x3;
	emu_di = 0x1;
l__0D2C:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x2);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) != 0x2) goto l__0D49;
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
	emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x1E);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__0D49;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__0D49;
	}
l__0D46:
	emu_di = 0x1;
l__0D49:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0xA), 0x0);
		if (emu_get_memory16(emu_ss, emu_bp, -0xA) != 0x0) goto l__0D59;
	}
l__0D53:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1A) == 0x0) goto l__0DA3;
l__0D59:
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x140;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D6C); emu_cs = 0x2B6C; emu_GUI_Mouse_Hide_InRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0D6C:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0D90); emu_cs = 0x24D0; emu_GUI_Screen_Copy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0D90:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0D98); emu_cs = 0x2B6C; emu_GUI_Mouse_Show_InRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0D98:
	emu_si = 0x4;
	emu_get_memory16(emu_ss, emu_bp, -0x18) = 0x0;
	goto l__0ED8;
l__0DA3:
	emu_orw(&emu_di, emu_di);
	if (emu_di != 0) goto l__0DAA;
	goto l__0E9F;
l__0DAA:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DCC); emu_cs = 0x24D0; emu_GUI_Screen_Copy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0DCC:
	emu_addw(&emu_sp, 0x10);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x28);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp, -0x28));
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0DDC;
	goto l__0E5F;
l__0DDC:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0DE5); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0DE5:
	emu_pop(&emu_cx);
	emu_ax = 0x32;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0E04); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0E04:
	emu_addw(&emu_sp, 0xE);
	emu_get_memory16(emu_ss, emu_bp, -0x18) = 0x1;
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_cs); emu_push(0x0E17); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0E17:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_xorw(&emu_dx, emu_dx);
	emu_cl = 0x2;
	emu_push(emu_cs); emu_push(0x0E22); emu_cs = 0x01F7; emu_Tools_Shld();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0E22:
	emu_get_memory16(emu_ss, emu_bp, -0x20) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x22) = emu_ax;
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76AE);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x76AC);
	emu_addw(&emu_dx, emu_get_memory16(emu_ss, emu_bp, -0x22));
	emu_adcw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x20));
	emu_get_memory16(emu_ss, emu_bp, -0x1C) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x1E) = emu_dx;
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x28), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x28) == 0x0) goto l__0E51;
	goto l__0E43;
l__0E43:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__0E43;
	goto l__0E56;
l__0E51:
	emu_get_memory16(emu_ss, emu_bp, -0xA) = 0x1;
l__0E56:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E5E); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0E5E:
	emu_pop(&emu_cx);
l__0E5F:
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x140;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E72); emu_cs = 0x2B6C; emu_GUI_Mouse_Hide_InRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0E72:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x0E95); emu_cs = 0x24D0; emu_GUI_Screen_Copy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0E95:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0E9D); emu_cs = 0x2B6C; emu_GUI_Mouse_Show_InRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0E9D:
	goto l__0ED8;
l__0E9F:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x18), 0x1);
	if (emu_get_memory16(emu_ss, emu_bp, -0x18) == 0x1) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1C);
		emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x1E);
		emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
		if ((int16)emu_ax <= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
			if ((int16)emu_ax < (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) { /* Unresolved jump */ emu_ip = 0x0EB9; emu_last_cs = 0xB4DA; emu_last_ip = 0x0EB1; emu_last_length = 0x003B; emu_last_crc = 0x09B8; emu_call(); return; }
			emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
			if (emu_dx < emu_get_memory16(emu_ds, 0x00, 0x76AC)) {
				emu_get_memory16(emu_ss, emu_bp, -0x18) = 0x2;
				emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x20);
				emu_dx = emu_get_memory16(emu_ss, emu_bp, -0x22);
				emu_sarw(&emu_ax, 0x1);
				emu_rcrw(&emu_dx, 0x1);
				emu_bx = emu_get_memory16(emu_ss, emu_bp, -0x20);
				emu_cx = emu_get_memory16(emu_ss, emu_bp, -0x22);
				emu_addw(&emu_cx, emu_dx);
				emu_adcw(&emu_bx, emu_ax);
				emu_addw(&emu_get_memory16(emu_ss, emu_bp, -0x1E), emu_cx);
				emu_adcw(&emu_get_memory16(emu_ss, emu_bp, -0x1C), emu_bx);
			}
		}
	}
l__0ED8:
	goto l__0EFB;
l__0EDA:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x1A), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x1A) == 0x0) {
		emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x14);
		emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x16));
		if (emu_ax != 0) goto l__0EEB;
	}
l__0EE8:
	emu_si = 0x5;
l__0EEB:
	goto l__0EFB;
l__0EED:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = 0x1;
	goto l__0EFB;
l__0EF9:
	goto l__0EFB;
l__0EFB:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x18));
	emu_push(emu_cs);
	emu_push(0x0F02); emu_GUI_Mentat_Animation();
l__0F02:
	emu_pop(&emu_cx);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax != 0) goto l__0F0E;
	goto l__0F8D;
l__0F0E:
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x76B4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76B6));
	if (emu_ax != 0) goto l__0F8D;
	emu_get_memory16(emu_ds, 0x00, 0x76B6) = 0x0;
	emu_get_memory16(emu_ds, 0x00, 0x76B4) = 0x7;
l__0F23:
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) {
		emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x4);
		if ((int16)emu_get_memory16(emu_ss, emu_bp, -0x10) > (int16)0x4) {
			emu_si = 0x1;
		}
	}
l__0F30:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x12));
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x10);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x10));
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x0F50); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_DisplayFrame();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0F50:
	emu_addw(&emu_sp, 0xE);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__0F82;
	emu_orw(&emu_si, emu_si);
	if (emu_si == 0) {
		emu_si = 0x1;
	}
l__0F5E:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp,  0x12), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp,  0x12) == 0x0) { /* Unresolved jump */ emu_ip = 0x0F6B; emu_last_cs = 0xB4DA; emu_last_ip = 0x0F62; emu_last_length = 0x000D; emu_last_crc = 0x8D69; emu_call(); return; }
	emu_get_memory16(emu_ss, emu_bp, -0x10) = 0x0;
	goto l__0F82;
l__0F82:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x10), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x10) == 0x0) goto l__0F23;
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x1;
l__0F8D:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x6), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x6) == 0x0) goto l__1004;
	emu_ax = 0x31;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x26));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x8;
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x992B);
	emu_addw(&emu_ax, 0x3);
	emu_push(emu_ax);
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x12);
	emu_addw(&emu_ax, 0x5);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xC));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_cs);
	emu_push(0x0FBD); f__B4DA_19E6_0016_C1CB();
l__0FBD:
	emu_addw(&emu_sp, 0x12);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x0FC8); emu_GUI_DrawSprite_8002();
l__0FC8:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs); emu_push(0x0FD2); emu_cs = 0x2642; emu_GUI_Mouse_Hide_InWidget();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0FD2:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x0FF7); emu_cs = 0x24D0; emu_GUI_Screen_Copy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0FF7:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x0FFF); emu_cs = 0x2642; emu_GUI_Mouse_Show_InWidget();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__0FFF:
	emu_get_memory16(emu_ss, emu_bp, -0x6) = 0x0;
l__1004:
	emu_cmpw(&emu_get_memory16(emu_ss, emu_bp, -0x8), 0x0);
	if (emu_get_memory16(emu_ss, emu_bp, -0x8) != 0x0) goto l__100D;
	goto l__0C03;
l__100D:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x4);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp, -0x2));
	if (emu_ax == 0) { /* Unresolved jump */ emu_ip = 0x1022; emu_last_cs = 0xB4DA; emu_last_ip = 0x1013; emu_last_length = 0x0013; emu_last_crc = 0xFC06; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_push(emu_cs); emu_push(0x1020); emu_cs = 0x352A; overlay(0x352A, 0); emu_WSA_Unload();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1020:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x102B); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__102B:
	emu_pop(&emu_cx);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs);
	emu_push(0x1034); emu_GUI_DrawSprite_8002();
l__1034:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5D));
	emu_push(emu_cs); emu_push(0x103E); emu_cs = 0x2642; emu_GUI_Mouse_Hide_InWidget();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__103E:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x9931));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992F));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992B));
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x992D));
	emu_push(emu_cs); emu_push(0x1063); emu_cs = 0x24D0; emu_GUI_Screen_Copy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1063:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x106B); emu_cs = 0x2642; emu_GUI_Mouse_Show_InWidget();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__106B:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xC));
	emu_push(emu_cs); emu_push(0x1073); emu_cs = 0x07AE; emu_Unknown_07AE_0000();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1073:
	emu_pop(&emu_cx);
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0xE));
	emu_push(emu_cs); emu_push(0x107C); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__107C:
	emu_pop(&emu_cx);
	emu_push(emu_cs); emu_push(0x1082); emu_cs = 0x29E8; emu_Input_History_Clear();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1082:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x1A);
	goto l__1087;
l__1087:
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
 * Decompiled function f__B4DA_16CB_001D_31CC()
 *
 * @name f__B4DA_16CB_001D_31CC
 * @implements B4DA:16CB:001D:31CC ()
 * @implements B4DA:16E4:0004:EF79
 * @implements B4DA:16E8:0008:37B4
 * @implements B4DA:16EB:0005:89B6
 * @implements B4DA:16F0:0005:EAF1
 * @implements B4DA:16F5:0003:2E57
 *
 * Called From: 34DA:003E:0005:0000
 */
void f__B4DA_16CB_001D_31CC()
{
l__16CB:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_si);
	emu_ax = emu_get_memory16(emu_ds, 0x00, 0x2584);
	emu_dx = emu_get_memory16(emu_ds, 0x00, 0x2582);
	emu_cmpw(&emu_ax, emu_get_memory16(emu_ds, 0x00, 0x76AE));
	if ((int16)emu_ax > (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) goto l__16E8;
	if ((int16)emu_ax >= (int16)emu_get_memory16(emu_ds, 0x00, 0x76AE)) {
		emu_cmpw(&emu_dx, emu_get_memory16(emu_ds, 0x00, 0x76AC));
		if (emu_dx >= emu_get_memory16(emu_ds, 0x00, 0x76AC)) goto l__16E8;
	}
l__16E4:
	emu_xorw(&emu_si, emu_si);
	goto l__16EB;
l__16E8:
	emu_si = 0x1;
l__16EB:
	emu_push(emu_si);
	emu_push(emu_cs);
	emu_push(0x16F0); emu_GUI_Mentat_Animation();
l__16F0:
	emu_pop(&emu_cx);
	emu_xorw(&emu_ax, emu_ax);
	goto l__16F5;
l__16F5:
	emu_pop(&emu_si);
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_16F8_001A_D84F()
 *
 * @name f__B4DA_16F8_001A_D84F
 * @implements B4DA:16F8:001A:D84F ()
 * @implements B4DA:1712:002D:1CF6
 * @implements B4DA:173F:002D:F8A4
 * @implements B4DA:1746:0026:4BF0
 * @implements B4DA:1755:0017:BE28
 * @implements B4DA:1758:0014:A037
 *
 * Called From: B4DA:1520:000A:C6DA
 * Called From: B4DA:1567:000E:B9A4
 */
void f__B4DA_16F8_001A_D84F()
{
l__16F8:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x8);
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x8);
	emu_dx = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_get_memory16(emu_ss, emu_bp, -0x6) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x8) = emu_dx;
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_get_memory16(emu_ss, emu_bp, -0x4) = emu_dx;
	goto l__1758;
l__1712:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_bx = emu_ax;
	emu_testb(&emu_get_memory8(emu_ds, emu_bx, 0x76BD), 0xE);
	if ((emu_get_memory8(emu_ds, emu_bx, 0x76BD) & 0xE) == 0) goto l__1755;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_bx = emu_ax;
	emu_testb(&emu_get_memory8(emu_ds, emu_bx, 0x76BD), 0x8);
	if ((emu_get_memory8(emu_ds, emu_bx, 0x76BD) & 0x8) == 0) goto l__1746;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_ax = (int8)emu_al;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x173F); emu_cs = 0x01F7; emu_String_toupper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__173F:
	emu_pop(&emu_cx);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
l__1746:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = emu_al;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x8));
l__1755:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x4));
l__1758:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x4));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) goto l__1712;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp, -0x8));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0x0;
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_176C_000F_12AD()
 *
 * @name f__B4DA_176C_000F_12AD
 * @implements B4DA:176C:000F:12AD ()
 * @implements B4DA:177B:0017:EE19
 * @implements B4DA:1792:0023:3E89
 * @implements B4DA:17B5:0008:F38A
 * @implements B4DA:17BD:0022:549D
 * @implements B4DA:17DF:0012:BC2E
 * @implements B4DA:17F1:0021:AF3F
 * @implements B4DA:1812:0016:C2B4
 * @implements B4DA:1828:0023:F42C
 * @implements B4DA:184B:0008:F38A
 * @implements B4DA:1853:0008:1199
 * @implements B4DA:185B:0005:8BF7
 *
 * Called From: B4DA:13A1:000E:38B5
 * Called From: B4DA:1612:000B:DB18
 * Called From: B4DA:1612:0013:480E
 */
void f__B4DA_176C_000F_12AD()
{
l__176C:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x177B); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__177B:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x140;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1792); emu_cs = 0x2B6C; emu_GUI_Mouse_Hide_InRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1792:
	emu_addw(&emu_sp, 0x8);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x17B5); emu_cs = 0x24D0; emu_GUI_Screen_Copy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__17B5:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x17BD); emu_cs = 0x2B6C; emu_GUI_Mouse_Show_InRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__17BD:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x17DF); emu_cs = 0x24D0; emu_GUI_Screen_Copy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__17DF:
	emu_addw(&emu_sp, 0x10);
	emu_ax = 0x130;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs);
	emu_push(0x17F1); f__B4DA_1893_001C_7AC4();
l__17F1:
	emu_addw(&emu_sp, 0x6);
	emu_ax = 0x32;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_ax = 0x1;
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1812); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1812:
	emu_addw(&emu_sp, 0xE);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x140;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1828); emu_cs = 0x2B6C; emu_GUI_Mouse_Hide_InRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1828:
	emu_addw(&emu_sp, 0x8);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x184B); emu_cs = 0x24D0; emu_GUI_Screen_Copy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__184B:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1853); emu_cs = 0x2B6C; emu_GUI_Mouse_Show_InRegion();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1853:
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x185B); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__185B:
	emu_pop(&emu_cx);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_1860_0008_857D()
 *
 * @name f__B4DA_1860_0008_857D
 * @implements B4DA:1860:0008:857D ()
 * @implements B4DA:1868:0021:A4DB
 * @implements B4DA:1889:0008:43E5
 * @implements B4DA:1891:0002:2597
 *
 * Called From: B4DA:14DD:0008:32A8
 * Called From: B4DA:168B:0005:7934
 * Called From: B4DA:168B:0009:CDDB
 */
void f__B4DA_1860_0008_857D()
{
l__1860:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_push(emu_cs); emu_push(0x1868); emu_cs = 0x2B6C; emu_GUI_Mouse_Hide_Safe();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1868:
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_ax = 0x28;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_ax = 0xA0;
	emu_push(emu_ax);
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1889); emu_cs = 0x24D0; emu_GUI_Screen_Copy();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1889:
	emu_addw(&emu_sp, 0x10);
	emu_push(emu_cs); emu_push(0x1891); emu_cs = 0x2B6C; emu_GUI_Mouse_Show_Safe();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1891:
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}

/**
 * Decompiled function f__B4DA_1893_001C_7AC4()
 *
 * @name f__B4DA_1893_001C_7AC4
 * @implements B4DA:1893:001C:7AC4 ()
 * @implements B4DA:18AC:0003:5DAC
 * @implements B4DA:18AF:0003:1DA7
 * @implements B4DA:18B2:0004:E7F9
 * @implements B4DA:18B6:000F:1B45
 * @implements B4DA:18C5:003C:F110
 * @implements B4DA:18C8:0039:A880
 * @implements B4DA:18FA:0007:D2BA
 * @implements B4DA:1901:000F:1B44
 * @implements B4DA:1910:004A:C4CC
 * @implements B4DA:1913:0047:A299
 * @implements B4DA:191C:003E:B159
 * @implements B4DA:1953:0007:F720
 * @implements B4DA:1958:0002:C1BA
 * @implements B4DA:195A:005A:BD4C
 * @implements B4DA:195D:0057:84AF
 * @implements B4DA:199C:0018:43B1
 * @implements B4DA:19AD:0007:4963
 * @implements B4DA:19B4:0015:DD53
 * @implements B4DA:19C9:0011:671C
 * @implements B4DA:19CE:000C:1C10
 * @implements B4DA:19DA:0006:AC2E
 * @implements B4DA:19E0:0006:F7CE
 *
 * Called From: B4DA:0BB1:0012:DA23
 * Called From: B4DA:17EE:0012:BC2E
 */
void f__B4DA_1893_001C_7AC4()
{
l__1893:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_xorw(&emu_di, emu_di);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = 0x0;
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x6);
	emu_orw(&emu_ax, emu_get_memory16(emu_ss, emu_bp,  0x8));
	if (emu_ax != 0) goto l__18AF;
	emu_xorw(&emu_ax, emu_ax);
l__18AC:
	goto l__19E0;
l__18AF:
	goto l__19CE;
l__18B2:
	emu_xorw(&emu_si, emu_si);
	goto l__18C8;
l__18B6:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x18C5); emu_cs = 0x2521; emu_Font_GetCharWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__18C5:
	emu_pop(&emu_cx);
	emu_addw(&emu_si, emu_ax);
l__18C8:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((int16)emu_si < (int16)emu_get_memory16(emu_ss, emu_bp,  0xA)) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2E);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x2E) {
			emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
			emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x21);
			if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x21) {
				emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
				emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3F);
				if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x3F) {
					emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
					emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
					if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) {
						emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
						emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
						if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0xD) goto l__18B6;
					}
				}
			}
		}
	}
l__18FA:
	emu_cmpw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xA));
	if ((int16)emu_si < (int16)emu_get_memory16(emu_ss, emu_bp,  0xA)) goto l__191C;
	goto l__1913;
l__1901:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_al = emu_get_memory8(emu_es, emu_bx, 0x0);
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1910); emu_cs = 0x2521; emu_Font_GetCharWidth();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1910:
	emu_pop(&emu_cx);
	emu_subw(&emu_si, emu_ax);
l__1913:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x20);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x20) goto l__1901;
l__191C:
	emu_incw(&emu_di);
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2E);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x2E) goto l__1958;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x21);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x21) goto l__1958;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3F);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x3F) goto l__1958;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__1958;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0xD) goto l__1958;
	}
l__1953:
	emu_cmpw(&emu_di, 0x3);
	if ((int16)emu_di < (int16)0x3) goto l__19B4;
l__1958:
	goto l__195D;
l__195A:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
l__195D:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x20);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x20) goto l__195A;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x2E);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x2E) goto l__195A;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x21);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x21) goto l__195A;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x3F);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x3F) goto l__195A;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__195A;
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0xD);
		if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0xD) goto l__195A;
	}
l__199C:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) != 0x0) {
		emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
		emu_get_memory8(emu_es, emu_bx, 0xFFFF) = 0x0;
	}
l__19AD:
	emu_xorw(&emu_di, emu_di);
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	goto l__19CE;
l__19B4:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__19C9;
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_get_memory8(emu_es, emu_bx, 0x0) = 0xD;
	emu_incw(&emu_get_memory16(emu_ss, emu_bp,  0x6));
	goto l__19CE;
l__19C9:
	emu_incw(&emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_xorw(&emu_di, emu_di);
l__19CE:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) goto l__19DA;
	goto l__18B2;
l__19DA:
	emu_ax = emu_get_memory16(emu_ss, emu_bp, -0x2);
	goto l__18AC;
l__19E0:
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
 * Decompiled function f__B4DA_19E6_0016_C1CB()
 *
 * @name f__B4DA_19E6_0016_C1CB
 * @implements B4DA:19E6:0016:C1CB ()
 * @implements B4DA:19FA:0002:FD3A
 * @implements B4DA:19FC:0009:522B
 * @implements B4DA:1A05:0006:D737
 * @implements B4DA:1A1C:000C:B8FA
 * @implements B4DA:1A28:0022:8A60
 * @implements B4DA:1A4A:0011:649B
 * @implements B4DA:1A5B:0015:98C5
 * @implements B4DA:1A61:000F:610E
 * @implements B4DA:1A70:0006:F3FB
 * @implements B4DA:1A76:0006:F7CE
 *
 * Called From: B4DA:0FBA:003B:FFB1
 * Called From: B4DA:0FBA:0030:D5CF
 */
void f__B4DA_19E6_0016_C1CB()
{
l__19E6:
	emu_push(emu_bp);
	emu_bp = emu_sp;
	emu_subw(&emu_sp, 0x2);
	emu_push(emu_si);
	emu_push(emu_di);
	emu_si = emu_get_memory16(emu_ss, emu_bp,  0xC);
	emu_di = emu_get_memory16(emu_ss, emu_bp,  0x12);
	emu_orw(&emu_di, emu_di);
	if (!(emu_flags.zf || emu_flags.sf != emu_flags.of)) goto l__19FC;
	emu_xorw(&emu_ax, emu_ax);
l__19FA:
	goto l__1A76;
l__19FC:
	emu_ax = 0x4;
	emu_push(emu_ax);
	emu_push(emu_cs); emu_push(0x1A05); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1A05:
	emu_pop(&emu_cx);
	emu_get_memory16(emu_ss, emu_bp, -0x2) = emu_ax;
	goto l__1A1C;
l__1A1C:
	emu_ax = emu_get_memory16(emu_ss, emu_bp,  0x10);
	emu_decw(&emu_get_memory16(emu_ss, emu_bp,  0x10));
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) { /* Unresolved jump */ emu_ip = 0x1A0B; emu_last_cs = 0xB4DA; emu_last_ip = 0x1A24; emu_last_length = 0x000C; emu_last_crc = 0xB8FA; emu_call(); return; }
	goto l__1A61;
l__1A28:
	emu_lfp(&emu_es, &emu_bx, &emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_cmpb(&emu_get_memory8(emu_es, emu_bx, 0x0), 0x0);
	if (emu_get_memory8(emu_es, emu_bx, 0x0) == 0x0) { /* Unresolved jump */ emu_ip = 0x1A4D; emu_last_cs = 0xB4DA; emu_last_ip = 0x1A2F; emu_last_length = 0x0022; emu_last_crc = 0x8A60; emu_call(); return; }
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x16));
	emu_xorw(&emu_ax, emu_ax);
	emu_push(emu_ax);
	emu_push(emu_get_memory16(emu_ds, 0x00, 0x6D5B));
	emu_push(emu_si);
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0xA));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1A4A); emu_cs = 0x10E4; emu_GUI_DrawText_Wrapper();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1A4A:
	emu_addw(&emu_sp, 0xE);
	emu_addw(&emu_si, emu_get_memory16(emu_ss, emu_bp,  0xE));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x8));
	emu_push(emu_get_memory16(emu_ss, emu_bp,  0x6));
	emu_push(emu_cs); emu_push(0x1A5B); emu_cs = 0x01F7; emu_String_strlen();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1A5B:
	emu_pop(&emu_cx);
	emu_pop(&emu_cx);
	emu_incw(&emu_ax);
	emu_addw(&emu_get_memory16(emu_ss, emu_bp,  0x6), emu_ax);
l__1A61:
	emu_ax = emu_di;
	emu_decw(&emu_di);
	emu_orw(&emu_ax, emu_ax);
	if (emu_ax != 0) goto l__1A28;
	emu_push(emu_get_memory16(emu_ss, emu_bp, -0x2));
	emu_push(emu_cs); emu_push(0x1A70); emu_cs = 0x2598; emu_GUI_Screen_SetActive();
	/* Check if this overlay should be reloaded */
	if (emu_cs == 0x34DA) { overlay(0x34DA, 1); }
l__1A70:
	emu_pop(&emu_cx);
	emu_ax = 0x1;
	goto l__19FA;
l__1A76:
	emu_pop(&emu_di);
	emu_pop(&emu_si);
	emu_sp = emu_bp;
	emu_pop(&emu_bp);

	/* Return from this function */
	emu_pop(&emu_ip);
	emu_pop(&emu_cs);
	return;
}
